/*
==============
GTurretMP::RestrictUsageToOwner
==============
*/

bool __fastcall GTurretMP::RestrictUsageToOwner(GTurretMP *this)
{
  return ?RestrictUsageToOwner@GTurretMP@@UEAA_NXZ(this);
}

/*
==============
GTurretMP::GetTargetEyePosition
==============
*/

void __fastcall GTurretMP::GetTargetEyePosition(GTurretMP *this, const gentity_s *target, vec3_t *outEyePos)
{
  ?GetTargetEyePosition@GTurretMP@@UEBAXPEBUgentity_s@@AEATvec3_t@@@Z(this, target, outEyePos);
}

/*
==============
GTurretMP::SaveMP_ReadTurrets
==============
*/

void __fastcall GTurretMP::SaveMP_ReadTurrets(MemoryFile *memFile, SaveGame *save)
{
  ?SaveMP_ReadTurrets@GTurretMP@@SAXPEAUMemoryFile@@PEAUSaveGame@@@Z(memFile, save);
}

/*
==============
GTurretMP::ThinkVirtual
==============
*/

void __fastcall GTurretMP::ThinkVirtual(GTurretMP *this, gentity_s *self, gentity_s *owner)
{
  ?ThinkVirtual@GTurretMP@@UEAAXPEAUgentity_s@@0@Z(this, self, owner);
}

/*
==============
GTurretMP::IsTargetVisibleStateChecks
==============
*/

bool __fastcall GTurretMP::IsTargetVisibleStateChecks(GTurretMP *this, const gentity_s *target)
{
  return ?IsTargetVisibleStateChecks@GTurretMP@@UEAA_NPEBUgentity_s@@@Z(this, target);
}

/*
==============
GTurretMP::SpawnVirtual
==============
*/

void __fastcall GTurretMP::SpawnVirtual(GTurretMP *this, gentity_s *self)
{
  ?SpawnVirtual@GTurretMP@@UEAAXPEAUgentity_s@@@Z(this, self);
}

/*
==============
GTurretMP::UpdateTargetAngles_GetStartingPitch
==============
*/

bool __fastcall GTurretMP::UpdateTargetAngles_GetStartingPitch(GTurretMP *this, gentity_s *self, float *outPitch)
{
  return ?UpdateTargetAngles_GetStartingPitch@GTurretMP@@UEAA_NPEAUgentity_s@@PEAM@Z(this, self, outPitch);
}

/*
==============
GTurretMP::SetMinimapVisible
==============
*/

void __fastcall GTurretMP::SetMinimapVisible(GTurretMP *this, gentity_s *self, int isVisible, const char *sentryType)
{
  ?SetMinimapVisible@GTurretMP@@UEAAXPEAUgentity_s@@HPEBD@Z(this, self, isVisible, sentryType);
}

/*
==============
GTurretMP::StopUseVirtual
==============
*/

void __fastcall GTurretMP::StopUseVirtual(GTurretMP *this, gentity_s *self, gentity_s *owner)
{
  ?StopUseVirtual@GTurretMP@@UEAAXPEAUgentity_s@@0@Z(this, self, owner);
}

/*
==============
GTurretMP::CanTargetSentient_CheckPlayerState
==============
*/

bool __fastcall GTurretMP::CanTargetSentient_CheckPlayerState(GTurretMP *this, const playerState_s *ps)
{
  return ?CanTargetSentient_CheckPlayerState@GTurretMP@@UEAA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GTurretMP::IsTargetTooCloseToPlayer
==============
*/

bool __fastcall GTurretMP::IsTargetTooCloseToPlayer(GTurretMP *this, const vec3_t *sourceOrigin, const gentity_s *target, const vec3_t *targetOffset)
{
  return ?IsTargetTooCloseToPlayer@GTurretMP@@UEAA_NAEBTvec3_t@@PEBUgentity_s@@0@Z(this, sourceOrigin, target, targetOffset);
}

/*
==============
GTurretMP::NextTarget_IsValid
==============
*/

bool __fastcall GTurretMP::NextTarget_IsValid(GTurretMP *this, const gentity_s *turretEnt, const sentient_s *sentient)
{
  return ?NextTarget_IsValid@GTurretMP@@UEAA_NPEBUgentity_s@@PEBUsentient_s@@@Z(this, turretEnt, sentient);
}

/*
==============
GTurretMP::FireLead_GetSpread
==============
*/

double __fastcall GTurretMP::FireLead_GetSpread(GTurretMP *this, const gentity_s *activator)
{
  double result; 

  *(float *)&result = ?FireLead_GetSpread@GTurretMP@@UEBAMPEBUgentity_s@@@Z(this, activator);
  return result;
}

/*
==============
GTurretMP::UseVirtual
==============
*/

void __fastcall GTurretMP::UseVirtual(GTurretMP *this, gentity_s *self, gentity_s *owner)
{
  ?UseVirtual@GTurretMP@@UEAAXPEAUgentity_s@@0@Z(this, self, owner);
}

/*
==============
GTurretMP::FireLead_UpdateAccuracy
==============
*/

void __fastcall GTurretMP::FireLead_UpdateAccuracy(GTurretMP *this, gentity_s *ent, BgWeaponParms *wp)
{
  ?FireLead_UpdateAccuracy@GTurretMP@@UEAAXPEAUgentity_s@@PEAUBgWeaponParms@@@Z(this, ent, wp);
}

/*
==============
GTurretMP::ScrSetTeam
==============
*/

void __fastcall GTurretMP::ScrSetTeam(GTurretMP *this, scrContext_t *scrContext, scr_string_t team)
{
  ?ScrSetTeam@GTurretMP@@UEAAXAEAUscrContext_t@@W4scr_string_t@@@Z(this, scrContext, team);
}

/*
==============
GTurretMP::FindBestTarget_ValidateTeam
==============
*/

bool __fastcall GTurretMP::FindBestTarget_ValidateTeam(GTurretMP *this)
{
  return ?FindBestTarget_ValidateTeam@GTurretMP@@UEBA_NXZ(this);
}

/*
==============
GTurretMP::FindBestTarget_ValidateTargetEnt
==============
*/

bool __fastcall GTurretMP::FindBestTarget_ValidateTargetEnt(GTurretMP *this)
{
  return ?FindBestTarget_ValidateTargetEnt@GTurretMP@@UEBA_NXZ(this);
}

/*
==============
G_TurretMP_ThinkClient
==============
*/

void __fastcall G_TurretMP_ThinkClient(gentity_s *self)
{
  ?G_TurretMP_ThinkClient@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_TurretMP_Free
==============
*/

void __fastcall G_TurretMP_Free(gentity_s *self)
{
  ?G_TurretMP_Free@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
GTurretMP::SaveMP_WriteTurrets
==============
*/

void __fastcall GTurretMP::SaveMP_WriteTurrets(MemoryFile *memFile)
{
  ?SaveMP_WriteTurrets@GTurretMP@@SAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GTurretMP::SetDefaultDropPitchVirtual
==============
*/

void __fastcall GTurretMP::SetDefaultDropPitchVirtual(GTurretMP *this, gentity_s *self, float pitch)
{
  ?SetDefaultDropPitchVirtual@GTurretMP@@UEAAXPEAUgentity_s@@M@Z(this, self, pitch);
}

/*
==============
GTurretMP::CanTargetSentient_CheckPlayerState
==============
*/
bool GTurretMP::CanTargetSentient_CheckPlayerState(GTurretMP *this, const playerState_s *ps)
{
  __int64 entity; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 198, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = G_GameInterface_Turret_CanTarget(ps) && ((entity = ps->vehicleState.entity, (_DWORD)entity != 2047) && g_entities[entity].s.eType == ET_VEHICLE || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 0xCu)) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, (POtherFlagsMP)33);
  return result;
}

/*
==============
GTurretMP::FindBestTarget_ValidateTargetEnt
==============
*/
bool GTurretMP::FindBestTarget_ValidateTargetEnt(GTurretMP *this)
{
  unsigned __int16 number; 
  EntHandle *p_target; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  gentity_s *v6; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 

  number = this->m_data.target.number;
  p_target = &this->m_data.target;
  if ( !number )
    goto LABEL_26;
  v3 = number;
  v4 = number - 1;
  if ( v4 >= 0x800 )
  {
    v10 = 2048;
    v8 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = v3 - 1;
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] )
  {
    LODWORD(v9) = p_target->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v9) )
      __debugbreak();
  }
  if ( !p_target->number )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 260, ASSERT_TYPE_ASSERT, "( m_data.target.isDefined() )", (const char *)&queryFormat, "m_data.target.isDefined()") )
      __debugbreak();
  }
  v6 = EntHandle::ent(p_target);
  return v6->client && v6->s.eType == ET_PLAYER && v6->health > 0 || v6->agent && v6->health > 0;
}

/*
==============
GTurretMP::FindBestTarget_ValidateTeam
==============
*/
char GTurretMP::FindBestTarget_ValidateTeam(GTurretMP *this)
{
  return 1;
}

/*
==============
GTurretMP::FireLead_GetSpread
==============
*/
float GTurretMP::FireLead_GetSpread(GTurretMP *this, const gentity_s *activator)
{
  return this->m_data.playerSpread;
}

/*
==============
GTurretMP::FireLead_UpdateAccuracy
==============
*/
void GTurretMP::FireLead_UpdateAccuracy(GTurretMP *this, gentity_s *ent, BgWeaponParms *wp)
{
  ;
}

/*
==============
G_TurretMP_Free
==============
*/
void G_TurretMP_Free(gentity_s *self)
{
  gentity_s *v2; 
  GTurret *Turret; 
  unsigned __int8 *p_m_data; 
  const saveField_t *CommonSaveFields; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 93, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->turretHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 94, ASSERT_TYPE_ASSERT, "( self->turretHandle.IsDefined() )", (const char *)&queryFormat, "self->turretHandle.IsDefined()") )
    __debugbreak();
  if ( EntHandle::isDefined(&self->r.ownerNum) )
    v2 = EntHandle::ent(&self->r.ownerNum);
  else
    v2 = g_entities + 2047;
  if ( v2->client )
    G_Turret_ClientStopUsingTurret(self);
  G_Turret_DeactivateTurret(self);
  G_Turret_SetSentryOwner(self, NULL);
  self->s.lerp.u.anonymous.data[6] = 2047;
  if ( (_BYTE)GTurret::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.h", 55, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  self->turretHandle.m_objIndex = 0;
  Turret->m_inuse = 0;
  p_m_data = (unsigned __int8 *)&Turret->m_data;
  *(_QWORD *)Turret->m_data.manualTargetOffset.v = 0i64;
  Turret->m_data.manualTargetOffset.v[2] = 0.0;
  CommonSaveFields = G_Turret_GetCommonSaveFields();
  G_SaveField_FreeFields(CommonSaveFields, p_m_data);
}

/*
==============
G_TurretMP_ThinkClient
==============
*/
void G_TurretMP_ThinkClient(gentity_s *self)
{
  GTurret *Turret; 
  unsigned __int16 number; 
  GTurret *v4; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  gentity_s *v8; 
  gentity_s *v9; 
  gclient_s *client; 
  bool v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 132, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( self->turretHandle.m_objIndex )
  {
    Turret = GTurret::GetTurret(&self->turretHandle);
    number = self->r.ownerNum.number;
    v4 = Turret;
    if ( !number )
      goto LABEL_29;
    v5 = number;
    v6 = number - 1;
    if ( v6 >= 0x800 )
    {
      LODWORD(v12) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v7 = v5 - 1;
    if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v7] )
    {
      LODWORD(v13) = self->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v13) )
        __debugbreak();
    }
    if ( !self->r.ownerNum.number )
    {
LABEL_29:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 141, ASSERT_TYPE_ASSERT, "( self->r.ownerNum.isDefined() )", (const char *)&queryFormat, "self->r.ownerNum.isDefined()") )
        __debugbreak();
    }
    v8 = EntHandle::ent(&self->r.ownerNum);
    v9 = v8;
    v11 = 0;
    if ( v8->active == 1 )
    {
      client = v8->client;
      if ( client->sess.sessionState == SESS_STATE_PLAYING && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 0xBu) )
        v11 = 1;
    }
    GTurret::Think_ClientInternal(v4, self, v9, v11);
  }
}

/*
==============
GTurretMP::GetTargetEyePosition
==============
*/
void GTurretMP::GetTargetEyePosition(GTurretMP *this, const gentity_s *target, vec3_t *outEyePos)
{
  gclient_s *client; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  float v7; 

  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 318, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !target->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 319, ASSERT_TYPE_ASSERT, "( target->sentient )", (const char *)&queryFormat, "target->sentient") )
    __debugbreak();
  client = target->client;
  if ( client )
  {
    p_eFlags = &client->ps.eFlags;
    if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
      goto LABEL_17;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
LABEL_17:
      outEyePos->v[0] = target->r.currentOrigin.v[0];
      outEyePos->v[1] = target->r.currentOrigin.v[1];
      v7 = target->r.currentOrigin.v[2];
      outEyePos->v[2] = v7;
      outEyePos->v[2] = v7 + target->client->ps.viewHeightCurrent;
      return;
    }
    G_Client_GetEyePosition(&target->client->ps, outEyePos);
  }
  else
  {
    Sentient_GetEyePosition(target->sentient, outEyePos);
  }
}

/*
==============
GTurretMP::IsTargetTooCloseToPlayer
==============
*/
bool GTurretMP::IsTargetTooCloseToPlayer(GTurretMP *this, const vec3_t *sourceOrigin, const gentity_s *target, const vec3_t *targetOffset)
{
  return 0;
}

/*
==============
GTurretMP::IsTargetVisibleStateChecks
==============
*/
bool GTurretMP::IsTargetVisibleStateChecks(GTurretMP *this, const gentity_s *target)
{
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 300, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  return !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&target->s.lerp.eFlags, ACTIVE, 0xCu);
}

/*
==============
GTurretMP::NextTarget_IsValid
==============
*/
char GTurretMP::NextTarget_IsValid(GTurretMP *this, const gentity_s *turretEnt, const sentient_s *sentient)
{
  gentity_s *ent; 
  __int16 otherEntityNum; 

  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 223, ASSERT_TYPE_ASSERT, "( sentient )", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  if ( !sentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 224, ASSERT_TYPE_ASSERT, "( sentient->ent )", (const char *)&queryFormat, "sentient->ent") )
    __debugbreak();
  ent = sentient->ent;
  if ( sentient->ent->s.eType == ET_INVISIBLE )
    return 0;
  if ( ent->client )
  {
    if ( turretEnt->s.otherEntityNum == ent->s.number || ent->health <= 0 )
      return 0;
  }
  else
  {
    if ( !ent->agent )
      return 0;
    otherEntityNum = ent->s.otherEntityNum;
    if ( otherEntityNum != 2047 && otherEntityNum == turretEnt->s.otherEntityNum )
      return 0;
  }
  return 1;
}

/*
==============
GTurretMP::RestrictUsageToOwner
==============
*/
char GTurretMP::RestrictUsageToOwner(GTurretMP *this)
{
  return 1;
}

/*
==============
GTurretMP::SaveMP_ReadTurrets
==============
*/
void GTurretMP::SaveMP_ReadTurrets(MemoryFile *memFile, SaveGame *save)
{
  GTurret **v4; 
  __int64 v5; 
  GTurret *v6; 
  char v7; 
  const saveField_t *CommonSaveFields; 
  char p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 65, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 66, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( (_BYTE)GTurret::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 67, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  v4 = GTurret::ms_turretArray;
  v5 = 128i64;
  do
  {
    v6 = *v4;
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 72, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    MemFile_ReadData(memFile, 1ui64, &p);
    v7 = p;
    v6->m_inuse = p;
    if ( v7 )
    {
      if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 36, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
        __debugbreak();
      if ( !v6->m_inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 38, ASSERT_TYPE_ASSERT, "( turret->m_inuse )", (const char *)&queryFormat, "turret->m_inuse") )
        __debugbreak();
      CommonSaveFields = G_Turret_GetCommonSaveFields();
      G_SaveFieldMP_ReadStruct(CommonSaveFields, (unsigned __int8 *)&v6->m_data, 240, save);
    }
    ++v4;
    --v5;
  }
  while ( v5 );
}

/*
==============
GTurretMP::SaveMP_WriteTurrets
==============
*/
void GTurretMP::SaveMP_WriteTurrets(MemoryFile *memFile)
{
  GTurret **v2; 
  __int64 v3; 
  GTurret *v4; 
  const saveField_t *CommonSaveFields; 
  char p[16]; 
  _BYTE dest[224]; 
  __int128 v8; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 48, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( (_BYTE)GTurret::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 49, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  v2 = GTurret::ms_turretArray;
  v3 = 128i64;
  do
  {
    v4 = *v2;
    if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 54, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    p[0] = v4->m_inuse;
    MemFile_WriteData(memFile, 1ui64, p);
    if ( v4->m_inuse )
    {
      if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 23, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      if ( !v4->m_inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 25, ASSERT_TYPE_ASSERT, "( turret->m_inuse )", (const char *)&queryFormat, "turret->m_inuse") )
        __debugbreak();
      *(__m256i *)dest = *(__m256i *)&v4->m_data.state;
      *(__m256i *)&dest[32] = *(__m256i *)&v4->m_data.dropPitch;
      *(__m256i *)&dest[64] = *(__m256i *)&v4->m_data.target.number;
      *(__m256i *)&dest[96] = *(__m256i *)&v4->m_data.targetTime;
      *(__m256i *)&dest[128] = *(__m256i *)&v4->m_data.convergenceHeightPercent;
      *(__m256i *)&dest[160] = *(__m256i *)&v4->m_data.scanDecelYaw;
      *(__m256i *)&dest[192] = *(__m256i *)&v4->m_data.forwardAngleDot;
      v8 = *(_OWORD *)&v4->m_data.startUseTime;
      CommonSaveFields = G_Turret_GetCommonSaveFields();
      G_SaveFieldMP_WriteStruct(CommonSaveFields, (const unsigned __int8 *)&v4->m_data, dest, 240, memFile);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}

/*
==============
GTurretMP::ScrSetTeam
==============
*/
void GTurretMP::ScrSetTeam(GTurretMP *this, scrContext_t *scrContext, scr_string_t team)
{
  team_t v6; 
  const scr_string_t **v7; 
  team_t v8; 
  const scr_string_t **v9; 
  const char *v10; 
  const char *v11; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v6 = TEAM_ONE;
    v7 = &S_TEAMS_SP_SCR_STRINGS_7[1];
    while ( team != **v7 )
    {
      ++v6;
      ++v7;
      if ( (unsigned int)v6 >= TEAM_FIVE )
        goto LABEL_17;
    }
    this->m_data.eTeam = v6;
  }
  else if ( team == scr_const.freelook )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    this->m_data.eTeam = TEAM_MP_NUM_TEAMS;
  }
  else
  {
    v8 = TEAM_ZERO;
    v9 = S_TEAMS_MP_SCR_STRINGS_7;
    do
    {
      if ( team == **v9 )
      {
        this->m_data.eTeam = v8;
        return;
      }
      ++v8;
      ++v9;
    }
    while ( (unsigned int)v8 < TEAM_MP_NUM_TEAMS );
    if ( team == scr_const.none || team == scr_const.neutral )
      goto LABEL_18;
LABEL_17:
    if ( team == scr_const.only_sky )
    {
LABEL_18:
      this->m_data.eTeam = TEAM_ZERO;
      return;
    }
    v10 = SL_ConvertToString(team);
    v11 = j_va("unknown team '%s'", v10);
    Scr_Error(COM_ERR_3430, scrContext, v11);
  }
}

/*
==============
GTurretMP::SetDefaultDropPitchVirtual
==============
*/
void GTurretMP::SetDefaultDropPitchVirtual(GTurretMP *this, gentity_s *self, float pitch)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 190, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
}

/*
==============
GTurretMP::SetMinimapVisible
==============
*/
void GTurretMP::SetMinimapVisible(GTurretMP *this, gentity_s *self, int isVisible, const char *sentryType)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 351, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( isVisible )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0x13u);
    if ( sentryType )
    {
      if ( !I_stricmp(sentryType, "buddy_turret") )
        self->s.lerp.u.anonymous.data[5] |= 8u;
      if ( !I_stricmp(sentryType, "micro_turret") )
        self->s.lerp.u.anonymous.data[5] |= 0x10u;
    }
  }
  else
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0x13u);
  }
}

/*
==============
GTurretMP::SpawnVirtual
==============
*/
void GTurretMP::SpawnVirtual(GTurretMP *this, gentity_s *self)
{
  this->m_data.flags = 0;
  this->m_data.eTeam = TEAM_ZERO;
}

/*
==============
GTurretMP::StopUseVirtual
==============
*/
void GTurretMP::StopUseVirtual(GTurretMP *this, gentity_s *self, gentity_s *owner)
{
  bool v4; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 175, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 176, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 151, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
      __debugbreak();
  }
  v4 = owner->client == NULL;
  owner->s.otherEntityNum = 2047;
  if ( !v4 )
    SV_ClientMP_ClearExtrapolation(owner->s.number);
}

/*
==============
GTurretMP::ThinkVirtual
==============
*/
void GTurretMP::ThinkVirtual(GTurretMP *this, gentity_s *self, gentity_s *owner)
{
  if ( !GTurret::Think_ManualInternal(this, self, NULL) )
  {
    G_Turret_ClearTargetEnt(self);
    if ( !G_IsTurretKeepingOrientationOnExit(&self->s) )
      GTurret::ReturnToDefaultPos(this, self, 0);
  }
}

/*
==============
GTurretMP::UpdateTargetAngles_GetStartingPitch
==============
*/
bool GTurretMP::UpdateTargetAngles_GetStartingPitch(GTurretMP *this, gentity_s *self, float *outPitch)
{
  bool result; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 288, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !outPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 289, ASSERT_TYPE_ASSERT, "( outPitch )", (const char *)&queryFormat, "outPitch") )
    __debugbreak();
  *outPitch = self->s.lerp.u.turret.gunAngles.v[0];
  result = 1;
  self->s.lerp.u.turret.gunAngles.v[0] = self->s.lerp.u.turret.gunAngles.v[2] + self->s.lerp.u.turret.gunAngles.v[0];
  return result;
}

/*
==============
GTurretMP::UseVirtual
==============
*/
void GTurretMP::UseVirtual(GTurretMP *this, gentity_s *self, gentity_s *owner)
{
  unsigned int number; 
  __int16 v6; 
  bool v7; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 159, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 160, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  number = self->s.number;
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_turret_mp.cpp", 151, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  v6 = truncate_cast<short,unsigned int>(number);
  v7 = owner->client == NULL;
  owner->s.otherEntityNum = v6;
  if ( !v7 )
    SV_ClientMP_ClearExtrapolation(owner->s.number);
}

