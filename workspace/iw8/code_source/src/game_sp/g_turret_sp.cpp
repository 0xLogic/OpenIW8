/*
==============
G_TurretSP_ThinkClient
==============
*/

void __fastcall G_TurretSP_ThinkClient(gentity_s *self)
{
  ?G_TurretSP_ThinkClient@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
GTurretSP::UpdateTargetAngles_GetStartingPitch
==============
*/

bool __fastcall GTurretSP::UpdateTargetAngles_GetStartingPitch(GTurretSP *this, gentity_s *self, float *outPitch)
{
  return ?UpdateTargetAngles_GetStartingPitch@GTurretSP@@UEAA_NPEAUgentity_s@@PEAM@Z(this, self, outPitch);
}

/*
==============
GTurretSP::FindBestTarget_ValidateTeam
==============
*/

bool __fastcall GTurretSP::FindBestTarget_ValidateTeam(GTurretSP *this)
{
  return ?FindBestTarget_ValidateTeam@GTurretSP@@UEBA_NXZ(this);
}

/*
==============
GTurretSP::FireLead_GetSpread
==============
*/

double __fastcall GTurretSP::FireLead_GetSpread(GTurretSP *this, const gentity_s *activator)
{
  double result; 

  *(float *)&result = ?FireLead_GetSpread@GTurretSP@@UEBAMPEBUgentity_s@@@Z(this, activator);
  return result;
}

/*
==============
GTurretSP::UseVirtual
==============
*/

void __fastcall GTurretSP::UseVirtual(GTurretSP *this, gentity_s *self, gentity_s *owner)
{
  ?UseVirtual@GTurretSP@@UEAAXPEAUgentity_s@@0@Z(this, self, owner);
}

/*
==============
G_TurretSP_ActorCanUse
==============
*/

bool __fastcall G_TurretSP_ActorCanUse(actor_s *actor, gentity_s *turretEnt)
{
  return ?G_TurretSP_ActorCanUse@@YA_NPEAUactor_s@@PEAUgentity_s@@@Z(actor, turretEnt);
}

/*
==============
GTurretSP::IsTargetTooCloseToPlayer
==============
*/

bool __fastcall GTurretSP::IsTargetTooCloseToPlayer(GTurretSP *this, const vec3_t *sourceOrigin, const gentity_s *target, const vec3_t *targetOffset)
{
  return ?IsTargetTooCloseToPlayer@GTurretSP@@UEAA_NAEBTvec3_t@@PEBUgentity_s@@0@Z(this, sourceOrigin, target, targetOffset);
}

/*
==============
GTurretSP::RestrictUsageToOwner
==============
*/

bool __fastcall GTurretSP::RestrictUsageToOwner(GTurretSP *this)
{
  return ?RestrictUsageToOwner@GTurretSP@@UEAA_NXZ(this);
}

/*
==============
GTurretSP::NextTarget_IsValid
==============
*/

bool __fastcall GTurretSP::NextTarget_IsValid(GTurretSP *this, const gentity_s *turretEnt, const sentient_s *sentient)
{
  return ?NextTarget_IsValid@GTurretSP@@UEAA_NPEBUgentity_s@@PEBUsentient_s@@@Z(this, turretEnt, sentient);
}

/*
==============
GTurretSP::ScrSetTeam
==============
*/

void __fastcall GTurretSP::ScrSetTeam(GTurretSP *this, scrContext_t *scrContext, scr_string_t team)
{
  ?ScrSetTeam@GTurretSP@@UEAAXAEAUscrContext_t@@W4scr_string_t@@@Z(this, scrContext, team);
}

/*
==============
GTurretSP::StopUseVirtual
==============
*/

void __fastcall GTurretSP::StopUseVirtual(GTurretSP *this, gentity_s *self, gentity_s *owner)
{
  ?StopUseVirtual@GTurretSP@@UEAAXPEAUgentity_s@@0@Z(this, self, owner);
}

/*
==============
G_TurretSP_Free
==============
*/

void __fastcall G_TurretSP_Free(gentity_s *self)
{
  ?G_TurretSP_Free@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
GTurretSP::SetCanAIDetach
==============
*/

void __fastcall GTurretSP::SetCanAIDetach(GTurretSP *this, int canDetach)
{
  ?SetCanAIDetach@GTurretSP@@QEAAXH@Z(this, canDetach);
}

/*
==============
GTurretSP::IsTargetVisibleStateChecks
==============
*/

bool __fastcall GTurretSP::IsTargetVisibleStateChecks(GTurretSP *this, const gentity_s *target)
{
  return ?IsTargetVisibleStateChecks@GTurretSP@@UEAA_NPEBUgentity_s@@@Z(this, target);
}

/*
==============
GTurretSP::SetDefaultDropPitchVirtual
==============
*/

void __fastcall GTurretSP::SetDefaultDropPitchVirtual(GTurretSP *this, gentity_s *self, float pitch)
{
  ?SetDefaultDropPitchVirtual@GTurretSP@@UEAAXPEAUgentity_s@@M@Z(this, self, pitch);
}

/*
==============
GTurretSP::ThinkVirtual
==============
*/

void __fastcall GTurretSP::ThinkVirtual(GTurretSP *this, gentity_s *self, gentity_s *owner)
{
  ?ThinkVirtual@GTurretSP@@UEAAXPEAUgentity_s@@0@Z(this, self, owner);
}

/*
==============
GTurretSP::CanTargetSentient_CheckPlayerState
==============
*/

bool __fastcall GTurretSP::CanTargetSentient_CheckPlayerState(GTurretSP *this, const playerState_s *ps)
{
  return ?CanTargetSentient_CheckPlayerState@GTurretSP@@UEAA_NPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GTurretSP::FireLead_UpdateAccuracy
==============
*/

void __fastcall GTurretSP::FireLead_UpdateAccuracy(GTurretSP *this, gentity_s *ent, BgWeaponParms *wp)
{
  ?FireLead_UpdateAccuracy@GTurretSP@@UEAAXPEAUgentity_s@@PEAUBgWeaponParms@@@Z(this, ent, wp);
}

/*
==============
GTurretSP::FindBestTarget_ValidateTargetEnt
==============
*/

bool __fastcall GTurretSP::FindBestTarget_ValidateTargetEnt(GTurretSP *this)
{
  return ?FindBestTarget_ValidateTargetEnt@GTurretSP@@UEBA_NXZ(this);
}

/*
==============
GTurretSP::SpawnVirtual
==============
*/

void __fastcall GTurretSP::SpawnVirtual(GTurretSP *this, gentity_s *self)
{
  ?SpawnVirtual@GTurretSP@@UEAAXPEAUgentity_s@@@Z(this, self);
}

/*
==============
GTurretSP::SaveSP_WriteTurrets
==============
*/

void __fastcall GTurretSP::SaveSP_WriteTurrets(MemoryFile *memFile)
{
  ?SaveSP_WriteTurrets@GTurretSP@@SAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GTurretSP::GetTargetEyePosition
==============
*/

void __fastcall GTurretSP::GetTargetEyePosition(GTurretSP *this, const gentity_s *target, vec3_t *outEyePos)
{
  ?GetTargetEyePosition@GTurretSP@@UEBAXPEBUgentity_s@@AEATvec3_t@@@Z(this, target, outEyePos);
}

/*
==============
GTurretSP::SetMinimapVisible
==============
*/

void __fastcall GTurretSP::SetMinimapVisible(GTurretSP *this, gentity_s *self, int isVisible, const char *sentryType)
{
  ?SetMinimapVisible@GTurretSP@@UEAAXPEAUgentity_s@@HPEBD@Z(this, self, isVisible, sentryType);
}

/*
==============
GTurretSP::SaveSP_ReadTurrets
==============
*/

void __fastcall GTurretSP::SaveSP_ReadTurrets(MemoryFile *memFile, SaveGame *save)
{
  ?SaveSP_ReadTurrets@GTurretSP@@SAXPEAUMemoryFile@@PEAUSaveGame@@@Z(memFile, save);
}

/*
==============
GTurretSP::CanTargetSentient_CheckPlayerState
==============
*/
char GTurretSP::CanTargetSentient_CheckPlayerState(GTurretSP *this, const playerState_s *ps)
{
  return 1;
}

/*
==============
GTurretSP::FindBestTarget_ValidateTargetEnt
==============
*/
bool GTurretSP::FindBestTarget_ValidateTargetEnt(GTurretSP *this)
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
    goto LABEL_23;
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
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 746, ASSERT_TYPE_ASSERT, "( m_data.target.isDefined() )", (const char *)&queryFormat, "m_data.target.isDefined()") )
      __debugbreak();
  }
  v6 = EntHandle::ent(p_target);
  return v6->sentient && v6->health > 0;
}

/*
==============
GTurretSP::FindBestTarget_ValidateTeam
==============
*/
bool GTurretSP::FindBestTarget_ValidateTeam(GTurretSP *this)
{
  return (unsigned int)(this->m_data.eTeam - 1) <= 2;
}

/*
==============
GTurretSP::FireLead_GetSpread
==============
*/
float GTurretSP::FireLead_GetSpread(GTurretSP *this, const gentity_s *activator)
{
  if ( !activator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 879, ASSERT_TYPE_ASSERT, "( activator )", (const char *)&queryFormat, "activator") )
    __debugbreak();
  if ( activator->client )
    return this->m_data.playerSpread;
  else
    return this->m_dataSP.aiSpread;
}

/*
==============
GTurretSP::FireLead_UpdateAccuracy
==============
*/
void GTurretSP::FireLead_UpdateAccuracy(GTurretSP *this, gentity_s *ent, BgWeaponParms *wp)
{
  float v5; 
  float v6; 
  float v7; 
  __int128 v8; 
  float v9; 
  float v10; 
  int flags; 
  int v12; 
  unsigned int v13; 
  const gentity_s *v17; 
  float v18; 
  const gentity_s *v19; 
  gentity_s *v20; 
  double ClientVisibility; 
  float v22; 
  double FxVisibility; 
  bool v24; 
  float v25; 
  float v26; 
  const dvar_t *v27; 
  const vec4_t *v28; 
  vec3_t outResultOffset; 
  vec3_t outForward; 
  vec3_t end; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 818, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 819, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  v5 = this->m_data.targetPos.v[0];
  v6 = v5 - wp->muzzleTrace.v[0];
  v7 = this->m_data.targetPos.v[1] - wp->muzzleTrace.v[1];
  v9 = this->m_data.targetPos.v[2];
  v10 = v9 - wp->muzzleTrace.v[2];
  flags = this->m_data.flags;
  end.v[1] = this->m_data.targetPos.v[1];
  v8 = LODWORD(end.v[1]);
  end.v[2] = v9;
  end.v[0] = v5;
  v12 = flags | 0x80000;
  v13 = flags & 0xFFF7FFFF;
  *(float *)&v8 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v10 * v10));
  _XMM3 = v8;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  if ( this->m_data.forwardAngleDot < (float)((float)((float)((float)(v7 * (float)(1.0 / *(float *)&_XMM0)) * wp->forward.v[1]) + (float)((float)(v6 * (float)(1.0 / *(float *)&_XMM0)) * wp->forward.v[0])) + (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * wp->forward.v[2])) )
    v12 = v13;
  this->m_data.flags = v12;
  if ( EntHandle::isDefined(&this->m_data.target) )
  {
    v17 = EntHandle::ent(&this->m_data.target);
    GTurret::GetEnemyHeightOffset(this, v17, &outResultOffset);
    v18 = outResultOffset.v[1] + this->m_data.targetOffset.v[1];
    outResultOffset.v[0] = outResultOffset.v[0] + this->m_data.targetOffset.v[0];
    outResultOffset.v[2] = outResultOffset.v[2] + this->m_data.targetOffset.v[2];
    outResultOffset.v[1] = v18;
    v19 = EntHandle::ent(&this->m_data.target);
    if ( G_TurretSP_FireLead_MayHitTarget(wp, v19, &outResultOffset, &wp->forward) )
    {
      if ( GTurret::GetRemainingConvergenceTime(this, 1) <= 0 && (v20 = EntHandle::ent(&this->m_data.target), G_TurretSP_FireLead_ShouldHitTarget(v20)) )
      {
        if ( SV_IsDemoPlaying() )
        {
          FxVisibility = SV_DemoSP_GetFxVisibility();
          v22 = *(float *)&FxVisibility;
        }
        else
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
            __debugbreak();
          ClientVisibility = FX_GetClientVisibility(fx_serverVisClient, &wp->muzzleTrace, &end);
          v22 = *(float *)&ClientVisibility;
          SV_DemoSP_RecordFxVisibility(*(float *)&ClientVisibility);
        }
        v24 = v22 >= 0.2;
        if ( v22 >= 0.2 )
        {
          AIScriptedInterface::HitTarget(wp, &end, &outForward);
LABEL_23:
          v25 = outForward.v[1];
          v26 = outForward.v[2];
          if ( (float)((float)((float)(outForward.v[0] * wp->forward.v[0]) + (float)(outForward.v[1] * wp->forward.v[1])) + (float)(outForward.v[2] * wp->forward.v[2])) > 0.94999999 )
          {
            wp->forward.v[0] = outForward.v[0];
            wp->forward.v[2] = v26;
            wp->forward.v[1] = v25;
          }
          v27 = DVARBOOL_turretConvergenceHeightDebug;
          if ( !DVARBOOL_turretConvergenceHeightDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretConvergenceHeightDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v27);
          if ( v27->current.enabled )
          {
            v28 = &colorRed;
            if ( v24 )
              v28 = &colorLtGreen;
            G_DebugStar(&end, v28);
          }
          return;
        }
      }
      else
      {
        v24 = 0;
      }
      AIScriptedInterface::MissTarget(wp, &end, &outForward);
      goto LABEL_23;
    }
  }
}

/*
==============
G_TurretSP_ActorCanUse
==============
*/
bool G_TurretSP_ActorCanUse(actor_s *actor, gentity_s *turretEnt)
{
  AIScriptedInterface *m_pAI; 
  GTurretSP *Turret; 
  int flags; 
  AIScriptedInterface *v8; 
  sentient_s *TargetSentient; 
  float *v; 
  float v11; 
  float v12; 
  float v13; 
  AIWrapper v14; 
  AIWrapper v15; 

  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1111, ASSERT_TYPE_ASSERT, "( turretEnt )", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1112, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( turretEnt->active )
    return 0;
  AIWrapper::AIWrapper(&v14, actor);
  m_pAI = v14.m_pAI;
  if ( !v14.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1118, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( (_BYTE)GTurret::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.h", 76, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  Turret = (GTurretSP *)GTurret::GetTurret(&turretEnt->turretHandle);
  if ( AICommonInterface::IsUsingTurret(m_pAI) && actor->turret.pTurret == turretEnt )
    return 1;
  flags = Turret->m_data.flags;
  if ( (flags & 0x200) != 0 )
    return 0;
  if ( (flags & 4) == 0 )
  {
    if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1095, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
      __debugbreak();
    AIWrapper::AIWrapper(&v15, actor);
    v8 = v15.m_pAI;
    if ( !v15.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1096, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    TargetSentient = AICommonInterface::GetTargetSentient(v8);
    if ( !TargetSentient )
      return 1;
    v = TargetSentient->ent->r.currentOrigin.v;
    v11 = actor->ent->r.currentOrigin.v[0] - *v;
    v12 = actor->ent->r.currentOrigin.v[1] - v[1];
    v13 = actor->ent->r.currentOrigin.v[2] - v[2];
    if ( (float)((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13)) >= 65536.0 )
      return 1;
  }
  return G_TurretSP_CanUse_auto(Turret, turretEnt, actor);
}

/*
==============
G_TurretSP_CanUse_auto
==============
*/
bool G_TurretSP_CanUse_auto(GTurretSP *turret, gentity_s *turretEnt, actor_s *actor)
{
  AIScriptedInterface *m_pAI; 
  float v7; 
  float v8; 
  float v9; 
  sentient_s *TargetSentient; 
  const gentity_s **p_ent; 
  sentient_info_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  __int128 v21; 
  GTurretSP_vtbl *v22; 
  AIWrapper v26; 
  vec3_t out_sourcePosition; 
  vec3_t outPos; 
  vec3_t forward; 
  vec3_t outLastKnownPos; 
  vec3_t end; 
  vec2_t out_localAngles; 
  char v33[16]; 
  vec3_t out_targetPosition; 

  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1023, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1024, ASSERT_TYPE_ASSERT, "( turretEnt )", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1025, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1026, ASSERT_TYPE_ASSERT, "( actor->sentientInfo )", (const char *)&queryFormat, "actor->sentientInfo") )
    __debugbreak();
  AIWrapper::AIWrapper(&v26, actor);
  m_pAI = v26.m_pAI;
  if ( !v26.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1028, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( AICommonInterface::IsUsingTurret(m_pAI) && AICommonInterface::GetTurretUsed(m_pAI) != turretEnt )
  {
    if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 995, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    if ( !actor->turret.pTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 997, ASSERT_TYPE_ASSERT, "( actor->turret.pTurret )", (const char *)&queryFormat, "actor->turret.pTurret") )
      __debugbreak();
    if ( actor->turret.pTurret == turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 998, ASSERT_TYPE_ASSERT, "( actor->turret.pTurret != turret )", (const char *)&queryFormat, "actor->turret.pTurret != turret") )
      __debugbreak();
    v7 = actor->ent->r.currentOrigin.v[0];
    v8 = actor->ent->r.currentOrigin.v[1];
    v9 = actor->turret.pTurret->r.currentOrigin.v[1] - v8;
    if ( (float)((float)(v9 * v9) + (float)((float)(actor->turret.pTurret->r.currentOrigin.v[0] - v7) * (float)(actor->turret.pTurret->r.currentOrigin.v[0] - v7))) >= (float)((float)((float)(turretEnt->r.currentOrigin.v[1] - v8) * (float)(turretEnt->r.currentOrigin.v[1] - v8)) + (float)((float)(turretEnt->r.currentOrigin.v[0] - v7) * (float)(turretEnt->r.currentOrigin.v[0] - v7))) )
      return 0;
  }
  TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
  p_ent = (const gentity_s **)&TargetSentient->ent;
  if ( !TargetSentient )
    return 1;
  v12 = &actor->sentientInfo[TargetSentient - level.sentients];
  if ( level.time - v12->lastKnownPosTime >= turret->m_dataSP.suppressTime )
    return 1;
  v13 = TargetSentient->ent->r.currentOrigin.v[0] - turretEnt->r.currentOrigin.v[0];
  v16 = LODWORD(TargetSentient->ent->r.currentOrigin.v[1]);
  v14 = TargetSentient->ent->r.currentOrigin.v[1] - turretEnt->r.currentOrigin.v[1];
  v15 = TargetSentient->ent->r.currentOrigin.v[2] - turretEnt->r.currentOrigin.v[2];
  *(float *)&v16 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
  if ( *(float *)&v16 >= turret->m_data.maxRangeSquared )
    return 1;
  SentientInfo_GetLastKnownPos(v12, &outLastKnownPos);
  if ( (float)((float)((float)(outLastKnownPos.v[1] - (*p_ent)->r.currentOrigin.v[1]) * (float)(outLastKnownPos.v[1] - (*p_ent)->r.currentOrigin.v[1])) + (float)((float)(outLastKnownPos.v[0] - (*p_ent)->r.currentOrigin.v[0]) * (float)(outLastKnownPos.v[0] - (*p_ent)->r.currentOrigin.v[0]))) >= 4096.0 )
    return 1;
  if ( !v12->VisCache.bVisible )
  {
    AngleVectors(&turretEnt->r.currentAngles, &forward, NULL, NULL);
    *(float *)&v16 = fsqrt(*(float *)&v16);
    _XMM1 = v16;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
    if ( (float)((float)((float)((float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v13) * forward.v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v15) * forward.v[2])) >= turret->m_data.forwardAngleDot )
      return 1;
    goto LABEL_37;
  }
  turret->GetTargetEyePosition(turret, *p_ent, (vec3_t *)v33);
  if ( !G_Turret_CanTargetSentient(turretEnt, *p_ent, &vec3_origin, &out_targetPosition, &out_sourcePosition, &out_localAngles) )
  {
LABEL_37:
    if ( G_Utils_DObjGetWorldTagPos(turretEnt, scr_const.tag_weapon, &outPos) )
    {
      out_sourcePosition.v[0] = outPos.v[0];
      out_sourcePosition.v[1] = outPos.v[1];
      if ( G_Utils_DObjGetWorldTagPos(turretEnt, scr_const.tag_aim, &outPos) )
      {
        v21 = LODWORD(out_sourcePosition.v[1]);
        v22 = turret->__vftable;
        out_sourcePosition.v[2] = outPos.v[2];
        *(float *)&v21 = fsqrt((float)((float)(out_sourcePosition.v[1] - outPos.v[1]) * (float)(out_sourcePosition.v[1] - outPos.v[1])) + (float)((float)(out_sourcePosition.v[0] - outPos.v[0]) * (float)(out_sourcePosition.v[0] - outPos.v[0])));
        _XMM2 = v21;
        __asm
        {
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm9, xmm0
        }
        out_sourcePosition.v[0] = out_sourcePosition.v[0] + (float)((float)((float)(out_sourcePosition.v[0] - outPos.v[0]) * (float)(1.0 / *(float *)&_XMM0)) * 30.0);
        out_sourcePosition.v[1] = out_sourcePosition.v[1] + (float)((float)((float)(out_sourcePosition.v[1] - outPos.v[1]) * (float)(1.0 / *(float *)&_XMM0)) * 30.0);
        v22->GetTargetEyePosition(turret, *p_ent, &end);
        return !G_Turret_SightTrace(&out_sourcePosition, &end, actor->ent->s.number, (*p_ent)->s.number);
      }
    }
    return 0;
  }
  return 1;
}

/*
==============
G_TurretSP_FireLead_MayHitTarget
==============
*/
bool G_TurretSP_FireLead_MayHitTarget(const BgWeaponParms *wp, const gentity_s *target, const vec3_t *targetOffset, const vec3_t *forward)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  entityType_s eType; 
  actor_s *actor; 
  unsigned int physicsInstanceId; 
  vec3_t end; 
  vec3_t start; 

  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 778, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 779, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  v8 = wp->muzzleTrace.v[0];
  v9 = wp->muzzleTrace.v[1];
  v10 = wp->muzzleTrace.v[2];
  v11 = (float)(target->r.currentOrigin.v[0] + targetOffset->v[0]) - v8;
  v12 = (float)(target->r.currentOrigin.v[1] + targetOffset->v[1]) - v9;
  v13 = (float)(target->r.currentOrigin.v[2] + targetOffset->v[2]) - v10;
  v14 = fsqrt((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13));
  v15 = v14 * forward->v[1];
  end.v[0] = (float)(v14 * forward->v[0]) + v8;
  v16 = v14 * forward->v[2];
  end.v[1] = v15 + v9;
  end.v[2] = v16 + v10;
  start.v[0] = v8;
  start.v[1] = v9;
  start.v[2] = v10;
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = target->s.eType;
  if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
  {
    physicsInstanceId = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, target->s.number);
  }
  else
  {
    actor = target->actor;
    if ( (!actor || !actor->Physics.bIsAlive) && target->health <= 0 )
      return 0;
    physicsInstanceId = G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId(target);
  }
  if ( physicsInstanceId == -1 )
    return 0;
  return PhysicsQuery_LegacyEntitySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &end, &bounds_origin, -1, physicsInstanceId, target->s.number) != 0;
}

/*
==============
G_TurretSP_FireLead_ShouldHitTarget
==============
*/
char G_TurretSP_FireLead_ShouldHitTarget(gentity_s *target)
{
  sentient_s *sentient; 
  AIAgentInterface *v4; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v6; 
  actor_s *actor; 
  AIActorInterface v8; 
  AIAgentInterface v9; 
  AIAgentInterface *v10; 

  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 756, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  sentient = target->sentient;
  if ( sentient && sentient->turretInvulnerability )
    return 0;
  AIActorInterface::AIActorInterface(&v8);
  AIAgentInterface::AIAgentInterface(&v9);
  v4 = NULL;
  v9.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v10 = NULL;
  if ( !target->agent )
  {
LABEL_17:
    actor = target->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v8, target->actor);
      v4 = (AIAgentInterface *)&v8;
      v10 = (AIAgentInterface *)&v8;
    }
    v6 = v4;
    if ( !v4 )
      return 1;
    return !*(_BYTE *)(v4->GetAI(v4) + 1645) && !v6->IsInPain(v6);
  }
  if ( !SV_Agent_IsScripted(target->s.number) )
  {
    v4 = v10;
    goto LABEL_17;
  }
  ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(target);
  if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
    __debugbreak();
  if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
    __debugbreak();
  AINewAgentInterface::SetAgent((AINewAgentInterface *)&v9, ScriptedAgentInfo);
  v4 = &v9;
  v10 = &v9;
  v6 = &v9;
  return !*(_BYTE *)(v4->GetAI(v4) + 1645) && !v6->IsInPain(v6);
}

/*
==============
G_TurretSP_Free
==============
*/
void G_TurretSP_Free(gentity_s *self)
{
  gentity_s *v2; 
  actor_s *actor; 
  GTurret *Turret; 
  GTurret *v5; 
  const saveField_t *CommonSaveFields; 
  AIActorInterface v7; 
  AIActorInterface *v8; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 179, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->turretHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 180, ASSERT_TYPE_ASSERT, "( self->turretHandle.IsDefined() )", (const char *)&queryFormat, "self->turretHandle.IsDefined()") )
    __debugbreak();
  if ( EntHandle::isDefined(&self->r.ownerNum) )
    v2 = EntHandle::ent(&self->r.ownerNum);
  else
    v2 = g_entities + 2047;
  if ( v2->client )
  {
    G_Turret_ClientStopUsingTurret(self);
  }
  else
  {
    actor = v2->actor;
    if ( actor )
    {
      AIActorInterface::AIActorInterface(&v7);
      v8 = NULL;
      AIActorInterface::SetActor(&v7, actor);
      v8 = &v7;
      v7.StopUseTurret(&v7);
    }
  }
  G_Turret_DeactivateTurret(self);
  G_Turret_SetSentryOwner(self, NULL);
  self->s.lerp.u.anonymous.data[6] = 2047;
  if ( (_BYTE)GTurret::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.h", 76, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  self->turretHandle.m_objIndex = 0;
  v5 = Turret;
  Turret->m_inuse = 0;
  *(_QWORD *)Turret->m_data.manualTargetOffset.v = 0i64;
  Turret->m_data.manualTargetOffset.v[2] = 0.0;
  CommonSaveFields = G_Turret_GetCommonSaveFields();
  G_SaveField_FreeFields(CommonSaveFields, (unsigned __int8 *)&v5->m_data);
  G_SaveField_FreeFields(s_turretSP_fields, (unsigned __int8 *)&v5[1]);
}

/*
==============
G_TurretSP_GetLastCanShootWorldPos
==============
*/
void G_TurretSP_GetLastCanShootWorldPos(GTurretDataSP *const turretDataSP, vec3_t *outLastKnownPos)
{
  __int128 v2; 
  __int16 lastCanShootGroundEntNum; 
  vec3_t *p_lastCanShootLocalPos; 
  __int64 v7; 
  gentity_s *v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  tmat33_t<vec3_t> axis; 
  __int128 v21; 

  if ( !turretDataSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 330, ASSERT_TYPE_ASSERT, "( turretDataSP )", (const char *)&queryFormat, "turretDataSP") )
    __debugbreak();
  lastCanShootGroundEntNum = turretDataSP->lastCanShootGroundEntNum;
  if ( (unsigned __int16)(lastCanShootGroundEntNum - 2046) <= 1u )
  {
    v17 = turretDataSP->lastCanShootLocalPos.v[0];
    outLastKnownPos->v[0] = v17;
    outLastKnownPos->v[1] = turretDataSP->lastCanShootLocalPos.v[1];
    v18 = turretDataSP->lastCanShootLocalPos.v[2];
  }
  else
  {
    p_lastCanShootLocalPos = &turretDataSP->lastCanShootLocalPos;
    if ( G_IsEntityInUse(lastCanShootGroundEntNum) )
    {
      v7 = turretDataSP->lastCanShootGroundEntNum;
      v21 = v2;
      v8 = &g_entities[v7];
      AnglesToAxis(&v8->r.currentAngles, &axis);
      if ( p_lastCanShootLocalPos == outLastKnownPos && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v9 = axis.m[0].v[1];
      v10 = (float)((float)(axis.m[0].v[0] * p_lastCanShootLocalPos->v[0]) + (float)(axis.m[1].v[0] * p_lastCanShootLocalPos->v[1])) + (float)(axis.m[2].v[0] * p_lastCanShootLocalPos->v[2]);
      v11 = axis.m[1].v[1];
      outLastKnownPos->v[0] = v10;
      v12 = v9 * p_lastCanShootLocalPos->v[0];
      v13 = axis.m[0].v[2];
      v14 = (float)(v12 + (float)(v11 * p_lastCanShootLocalPos->v[1])) + (float)(axis.m[2].v[1] * p_lastCanShootLocalPos->v[2]);
      v15 = axis.m[1].v[2];
      outLastKnownPos->v[1] = v14;
      v16 = (float)((float)(v13 * p_lastCanShootLocalPos->v[0]) + (float)(v15 * p_lastCanShootLocalPos->v[1])) + (float)(axis.m[2].v[2] * p_lastCanShootLocalPos->v[2]);
      outLastKnownPos->v[2] = v16;
      v17 = v10 + v8->r.currentOrigin.v[0];
      outLastKnownPos->v[0] = v17;
      outLastKnownPos->v[1] = v14 + v8->r.currentOrigin.v[1];
      v18 = v16 + v8->r.currentOrigin.v[2];
    }
    else
    {
      v17 = p_lastCanShootLocalPos->v[0];
      outLastKnownPos->v[0] = p_lastCanShootLocalPos->v[0];
      outLastKnownPos->v[1] = turretDataSP->lastCanShootLocalPos.v[1];
      v18 = turretDataSP->lastCanShootLocalPos.v[2];
    }
  }
  outLastKnownPos->v[2] = v18;
  if ( (LODWORD(v17) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 353, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[0] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[0] )", v17) )
    __debugbreak();
  if ( (LODWORD(outLastKnownPos->v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 354, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[1] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[1] )") )
    __debugbreak();
  *(float *)&v19 = outLastKnownPos->v[2];
  if ( (v19 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 355, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[2] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[2] )", v19) )
    __debugbreak();
}

/*
==============
G_TurretSP_ThinkClient
==============
*/
void G_TurretSP_ThinkClient(gentity_s *self)
{
  GTurret *Turret; 
  unsigned __int16 number; 
  GTurret *v4; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  gentity_s *v8; 
  bool v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 689, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Turret = GTurret::GetTurret(&self->turretHandle);
  number = self->r.ownerNum.number;
  v4 = Turret;
  if ( !number )
    goto LABEL_27;
  v5 = number;
  v6 = number - 1;
  if ( v6 >= 0x800 )
  {
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v5 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(v11) = self->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v11) )
      __debugbreak();
  }
  if ( !self->r.ownerNum.number )
  {
LABEL_27:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 693, ASSERT_TYPE_ASSERT, "( self->r.ownerNum.isDefined() )", (const char *)&queryFormat, "self->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v8 = EntHandle::ent(&self->r.ownerNum);
  v9 = v8->active == 1 && v8->health > 0;
  GTurret::Think_ClientInternal(v4, self, v8, v9);
}

/*
==============
G_TurretSP_Think_Auto
==============
*/
bool G_TurretSP_Think_Auto(GTurretSP *turret, gentity_s *self, actor_s *actor)
{
  AIScriptedInterface *m_pAI; 
  const sentient_s *v7; 
  sentient_s *TargetSentient; 
  int flags; 
  gentity_s *v10; 
  sentient_info_t *v11; 
  sentient_info_t *SentientInfo; 
  float v13; 
  float v14; 
  float v15; 
  const gentity_s *ent; 
  float v18; 
  float v19; 
  float v20; 
  const sentient_s *sentient; 
  bool v22; 
  bool returnVal; 
  SentientHandle *p_detachSentient; 
  AIScriptedInterface *v25; 
  AIWrapper v26; 

  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 491, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  AIWrapper::AIWrapper(&v26, actor);
  m_pAI = v26.m_pAI;
  v25 = v26.m_pAI;
  if ( !v26.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 496, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( (turret->m_data.flags & 0x40000) == 0 || turret->m_dataSP.originError.v[0] != 0.0 || turret->m_dataSP.originError.v[1] != 0.0 || turret->m_dataSP.originError.v[2] != 0.0 )
  {
    GTurret::ReturnToDefaultPos(turret, self, 0);
    return 1;
  }
  p_detachSentient = &turret->m_dataSP.detachSentient;
  if ( SentientHandle::isDefined(&turret->m_dataSP.detachSentient) )
    v7 = SentientHandle::sentient(&turret->m_dataSP.detachSentient);
  else
    v7 = NULL;
  TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
  flags = turret->m_data.flags;
  if ( (flags & 0x20000) != 0 && v7 )
  {
    if ( (flags & 0x1000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 509, ASSERT_TYPE_ASSERT, "( !(turretData->flags & TURRET_DONT_DETACH_AI) )", (const char *)&queryFormat, "!(turretData->flags & TURRET_DONT_DETACH_AI)") )
      __debugbreak();
    TargetSentient = (sentient_s *)v7;
  }
  if ( EntHandle::isDefined(&turret->m_data.manualTarget) )
    v10 = EntHandle::ent(&turret->m_data.manualTarget);
  else
    v10 = NULL;
  if ( TargetSentient )
  {
    SentientInfo = Sentient_GetSentientInfo(actor->sentient, TargetSentient);
    v11 = SentientInfo;
    SentientInfo->attackTime = level.time + 2000;
    if ( TargetSentient->bIgnoreMe || (v13 = self->r.currentOrigin.v[0] - TargetSentient->ent->r.currentOrigin.v[0], v14 = self->r.currentOrigin.v[1] - TargetSentient->ent->r.currentOrigin.v[1], v15 = self->r.currentOrigin.v[2] - TargetSentient->ent->r.currentOrigin.v[2], (float)((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15)) >= turret->m_data.maxRangeSquared) )
    {
      v11 = NULL;
    }
    else
    {
      if ( SentientInfo->VisCache.bVisible && GTurret::AimAtSentient(turret, self, TargetSentient->ent, &vec3_origin, 1, turret->m_data.convergenceTime[1]) )
      {
        ent = TargetSentient->ent;
        if ( turret == (GTurretSP *)-256i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 317, ASSERT_TYPE_ASSERT, "( turretDataSP )", (const char *)&queryFormat, "turretDataSP") )
          __debugbreak();
        if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 318, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
          __debugbreak();
        EntHandle::setEnt(&turret->m_dataSP.lastCanShootTarget, ent);
        turret->m_dataSP.lastCanShootTime = v11->lastKnownPosTime;
        *(double *)turret->m_dataSP.lastCanShootLocalPos.v = *(double *)v11->vLastKnownLocalPos.v;
        turret->m_dataSP.lastCanShootLocalPos.v[2] = v11->vLastKnownLocalPos.v[2];
        turret->m_dataSP.lastCanShootGroundEntNum = v11->lastKnownGroundEntNum;
        turret->m_data.flags &= ~0x20000u;
        v11->attackTime = 0;
        return 1;
      }
      if ( level.time - actor->iStateTime >= 1000 && (turret->m_data.flags & 0x1000000) == 0 )
      {
        returnVal = 0;
        if ( G_TurretSP_Think_Auto_TryDetach(turret, self, actor, TargetSentient, &returnVal) )
          return returnVal;
      }
    }
    if ( v10 == TargetSentient->ent )
      v10 = NULL;
  }
  else
  {
    v11 = NULL;
    if ( v7 && Sentient_GetSentientInfo(actor->sentient, v7)->attackTime <= level.time )
      SentientHandle::setSentient(p_detachSentient, NULL);
    AIScriptedInterface::CanAttackAll(v25);
  }
  if ( !G_TurretSP_Think_Auto_Suppression(turret, self, actor) )
  {
    if ( !v10 )
      goto LABEL_65;
    if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 454, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
      __debugbreak();
    if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 455, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
      __debugbreak();
    if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 456, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    v18 = self->r.currentOrigin.v[0] - (float)(v10->r.currentOrigin.v[0] + turret->m_data.manualTargetOffset.v[0]);
    v19 = self->r.currentOrigin.v[1] - (float)(turret->m_data.manualTargetOffset.v[1] + v10->r.currentOrigin.v[1]);
    v20 = self->r.currentOrigin.v[2] - (float)(turret->m_data.manualTargetOffset.v[2] + v10->r.currentOrigin.v[2]);
    if ( (float)((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) >= turret->m_data.maxRangeSquared )
      goto LABEL_65;
    sentient = v10->sentient;
    if ( sentient )
    {
      if ( !Sentient_GetSentientInfo(actor->sentient, sentient)->VisCache.bVisible )
        goto LABEL_65;
      v22 = GTurret::AimAtSentient(turret, self, v10, &turret->m_data.manualTargetOffset, 1, turret->m_data.convergenceTime[1]);
    }
    else
    {
      v22 = GTurret::AimAtEntity(turret, self, v10, &turret->m_data.manualTargetOffset, 1);
    }
    if ( !v22 )
    {
LABEL_65:
      if ( !v11 || !v11->VisCache.bVisible )
        G_Turret_ClearTargetEnt(self);
      GTurret::ReturnToDefaultPos(turret, self, 1);
    }
  }
  return 1;
}

/*
==============
G_TurretSP_Think_Auto_ShouldCheck
==============
*/
bool G_TurretSP_Think_Auto_ShouldCheck(GTurretDataSP *turret, sentient_s *enemy, sentient_info_t *pInfo)
{
  vec3_t outLastKnownPos; 

  SentientInfo_GetLastKnownPos(pInfo, &outLastKnownPos);
  return level.time - pInfo->lastKnownPosTime < turret->suppressTime && (float)((float)((float)(outLastKnownPos.v[1] - enemy->ent->r.currentOrigin.v[1]) * (float)(outLastKnownPos.v[1] - enemy->ent->r.currentOrigin.v[1])) + (float)((float)(outLastKnownPos.v[0] - enemy->ent->r.currentOrigin.v[0]) * (float)(outLastKnownPos.v[0] - enemy->ent->r.currentOrigin.v[0]))) < 4096.0;
}

/*
==============
G_TurretSP_Think_Auto_Suppression
==============
*/
char G_TurretSP_Think_Auto_Suppression(GTurretSP *turret, gentity_s *self, actor_s *actor)
{
  GTurretDataSP *p_m_dataSP; 
  gentity_s *v7; 
  gentity_s *v8; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  bool v11; 
  sentient_s *sentient; 
  sentient_info_t *SentientInfo; 
  sentient_info_t *v15; 
  float v16; 
  float v17; 
  SentientHandle *p_detachSentient; 
  vec3_t outLastKnownPos; 
  vec2_t out_localTargetAngles; 
  vec3_t origin; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 362, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 363, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 364, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  p_m_dataSP = &turret->m_dataSP;
  if ( !EntHandle::isDefined(&turret->m_data.target) )
    return 0;
  v7 = EntHandle::ent(&turret->m_data.target);
  v8 = v7;
  if ( v7->maxHealth > 0 && v7->health <= 0 && EntHandle::isDefined(&turret->m_dataSP.lastCanShootTarget) && EntHandle::ent(&turret->m_dataSP.lastCanShootTarget) == v8 )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
    if ( level.time - turret->m_dataSP.lastCanShootTime < (int)(float)(BG_WeaponDef(WeaponForEntity, 0)->suppressTimeTargetKilled * 1000.0) )
    {
      G_TurretSP_GetLastCanShootWorldPos(&turret->m_dataSP, &outLastKnownPos);
      v11 = GTurret::AimAtVector(turret, self, &outLastKnownPos, 1, &out_localTargetAngles);
      goto LABEL_17;
    }
    return 0;
  }
  if ( !EntHandle::ent(&turret->m_data.target)->sentient )
    return 0;
  sentient = EntHandle::ent(&turret->m_data.target)->sentient;
  SentientInfo = Sentient_GetSentientInfo(actor->sentient, sentient);
  v15 = SentientInfo;
  if ( sentient->bIgnoreMe || level.time - SentientInfo->lastKnownPosTime >= p_m_dataSP->suppressTime )
  {
    SentientInfo->lastKnownPosTime = 0;
    return 0;
  }
  SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos);
  if ( (turret->m_data.flags & 0x20) != 0 )
    v16 = turret->m_data.targetPos.v[2];
  else
    v16 = outLastKnownPos.v[2] + 32.0;
  v17 = outLastKnownPos.v[1] + turret->m_data.targetOffset.v[1];
  outLastKnownPos.v[0] = outLastKnownPos.v[0] + turret->m_data.targetOffset.v[0];
  outLastKnownPos.v[2] = v16 + turret->m_data.targetOffset.v[2];
  outLastKnownPos.v[1] = v17;
  if ( !GTurret::AimAtVector(turret, self, &outLastKnownPos, 1, &out_localTargetAngles) )
  {
    if ( level.time - turret->m_dataSP.lastCanShootTime < p_m_dataSP->suppressTime )
    {
      G_TurretSP_GetLastCanShootWorldPos(&turret->m_dataSP, &origin);
      v11 = GTurret::AimAtVectorClamped(turret, self, &origin, 1, &out_localTargetAngles);
LABEL_17:
      if ( v11 )
      {
        GTurret::UpdateTargetAngles(turret, self, &out_localTargetAngles, 1);
        return 1;
      }
    }
    return 0;
  }
  GTurret::UpdateTargetAngles(turret, self, &out_localTargetAngles, 1);
  p_detachSentient = &turret->m_dataSP.detachSentient;
  v15->attackTime = 0;
  if ( SentientHandle::isDefined(&turret->m_dataSP.detachSentient) )
  {
    if ( SentientHandle::sentient(p_detachSentient) == sentient )
      SentientHandle::setSentient(p_detachSentient, NULL);
  }
  return 1;
}

/*
==============
G_TurretSP_Think_Auto_TryDetach
==============
*/
bool G_TurretSP_Think_Auto_TryDetach(GTurretSP *turret, gentity_s *self, actor_s *actor, sentient_s *enemy, bool *returnVal)
{
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  float v16; 
  sentient_s *v17; 
  sentient_s *v18; 
  sentient_info_t *v19; 
  bool result; 
  sentient_info_t *SentientInfo; 
  sentient_info_t *v22; 
  BOOL v23; 
  vec3_t forward; 

  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 245, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( (turret->m_data.flags & 0x1000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 249, ASSERT_TYPE_ASSERT, "( !(turretData->flags & TURRET_DONT_DETACH_AI) )", (const char *)&queryFormat, "!(turretData->flags & TURRET_DONT_DETACH_AI)") )
    __debugbreak();
  v9 = enemy->ent->r.currentOrigin.v[0] - self->r.currentOrigin.v[0];
  v11 = LODWORD(enemy->ent->r.currentOrigin.v[1]);
  v10 = enemy->ent->r.currentOrigin.v[1] - self->r.currentOrigin.v[1];
  v12 = enemy->ent->r.currentOrigin.v[2] - self->r.currentOrigin.v[2];
  *(float *)&v11 = fsqrt((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v12 * v12));
  _XMM9 = v11;
  __asm
  {
    vcmpless xmm0, xmm9, cs:__real@80000000
    vblendvps xmm0, xmm9, xmm1, xmm0
  }
  v16 = v10 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v11 = v12 * (float)(1.0 / *(float *)&_XMM0);
  AngleVectors(&self->r.currentAngles, &forward, NULL, NULL);
  v23 = (float)((float)((float)((float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[0]) + (float)(v16 * forward.v[1])) + (float)(*(float *)&v11 * forward.v[2])) >= turret->m_data.forwardAngleDot;
  if ( !SentientHandle::isDefined(&turret->m_dataSP.detachSentient) )
  {
    v18 = NULL;
LABEL_22:
    SentientInfo = Sentient_GetSentientInfo(actor->sentient, enemy);
    v22 = SentientInfo;
    if ( (SentientInfo->VisCache.bVisible || !v23) && G_TurretSP_Think_Auto_ShouldCheck(&turret->m_dataSP, enemy, SentientInfo) && !G_TurretSP_Think_Auto_TurretAICanSeeEnemy(turret, actor, enemy) )
    {
      SentientHandle::setSentient(&turret->m_dataSP.detachSentient, enemy);
      if ( *(float *)&_XMM9 < 256.0 )
        v22->attackTime = 0;
      return 0;
    }
    goto LABEL_11;
  }
  v17 = SentientHandle::sentient(&turret->m_dataSP.detachSentient);
  v18 = v17;
  if ( !v17 || v17 != enemy && Sentient_GetSentientInfo(actor->sentient, v17)->attackTime <= level.time )
    goto LABEL_22;
LABEL_11:
  if ( !v18 )
    return 0;
  v19 = Sentient_GetSentientInfo(actor->sentient, v18);
  if ( !G_TurretSP_Think_Auto_ShouldCheck(&turret->m_dataSP, v18, v19) || G_TurretSP_Think_Auto_TurretAICanSeeEnemy(turret, actor, v18) )
  {
    SentientHandle::setSentient(&turret->m_dataSP.detachSentient, NULL);
    return 0;
  }
  if ( v18 != enemy )
    return 0;
  if ( (turret->m_data.flags & 0x20000) != 0 || !v23 || GTurret::ReturnToDefaultPos(turret, self, 1) )
  {
    v19->attackTime = 0;
    result = 1;
    *returnVal = 0;
  }
  else
  {
    if ( *(float *)&_XMM9 < 256.0 )
      v19->attackTime = 0;
    *returnVal = 1;
    return 1;
  }
  return result;
}

/*
==============
G_TurretSP_Think_Auto_TurretAICanSeeEnemy
==============
*/
bool G_TurretSP_Think_Auto_TurretAICanSeeEnemy(GTurretSP *turret, actor_s *turretActor, sentient_s *enemy)
{
  vec3_t end; 
  vec3_t start; 

  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 221, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( !turretActor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 222, ASSERT_TYPE_ASSERT, "( turretActor )", (const char *)&queryFormat, "turretActor") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 223, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  turret->GetTargetEyePosition(turret, turretActor->ent, &start);
  turret->GetTargetEyePosition(turret, enemy->ent, &end);
  return !G_Turret_SightTrace(&start, &end, turretActor->ent->s.number, enemy->ent->s.number);
}

/*
==============
G_TurretSP_Think_Manual
==============
*/
bool G_TurretSP_Think_Manual(GTurretSP *turret, gentity_s *self, actor_s *actor)
{
  AIScriptedInterface *m_pAI; 
  sentient_s *TargetSentient; 
  gentity_s *ent; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  bool v15; 
  gentity_s *outTargetEnt; 
  AIWrapper v17; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 578, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 579, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( actor )
  {
    AIWrapper::AIWrapper(&v17, actor);
    m_pAI = v17.m_pAI;
    if ( !v17.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 586, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 588, ASSERT_TYPE_ASSERT, "( actor->sentientInfo )", (const char *)&queryFormat, "actor->sentientInfo") )
      __debugbreak();
    if ( (turret->m_data.flags & 0x40000) == 0 || turret->m_dataSP.originError.v[0] != 0.0 || turret->m_dataSP.originError.v[1] != 0.0 || turret->m_dataSP.originError.v[2] != 0.0 )
      goto LABEL_31;
    if ( SentientHandle::isDefined(&turret->m_dataSP.detachSentient) )
      return G_TurretSP_Think_Auto(turret, self, actor);
    TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
    if ( TargetSentient )
    {
      ent = TargetSentient->ent;
      v10 = self->r.currentOrigin.v[1] - TargetSentient->ent->r.currentOrigin.v[1];
      v11 = TargetSentient->ent->r.currentOrigin.v[0];
      v12 = self->r.currentOrigin.v[2] - TargetSentient->ent->r.currentOrigin.v[2];
      if ( (float)((float)((float)(v10 * v10) + (float)((float)(self->r.currentOrigin.v[0] - v11) * (float)(self->r.currentOrigin.v[0] - v11))) + (float)(v12 * v12)) < turret->m_data.maxRangeSquared )
      {
        v13 = actor->ent->r.currentOrigin.v[1] - ent->r.currentOrigin.v[1];
        v14 = actor->ent->r.currentOrigin.v[2] - ent->r.currentOrigin.v[2];
        if ( (float)((float)((float)(v13 * v13) + (float)((float)(actor->ent->r.currentOrigin.v[0] - v11) * (float)(actor->ent->r.currentOrigin.v[0] - v11))) + (float)(v14 * v14)) < 65536.0 )
          return G_TurretSP_Think_Auto(turret, self, actor);
      }
    }
    turret->m_data.flags &= ~0x20000u;
    if ( TargetSentient )
      actor->sentientInfo[TargetSentient - level.sentients].attackTime = level.time + 2000;
    else
      AIScriptedInterface::CanAttackAll(m_pAI);
  }
  outTargetEnt = NULL;
  if ( !GTurret::Think_ManualInternal(turret, self, &outTargetEnt) )
  {
    if ( actor && outTargetEnt )
    {
      v15 = 1;
LABEL_32:
      GTurret::ReturnToDefaultPos(turret, self, v15);
      return 1;
    }
    G_Turret_ClearTargetEnt(self);
LABEL_31:
    v15 = 0;
    goto LABEL_32;
  }
  return 1;
}

/*
==============
GTurretSP::GetTargetEyePosition
==============
*/
void GTurretSP::GetTargetEyePosition(GTurretSP *this, const gentity_s *target, vec3_t *outEyePos)
{
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 953, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !target->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 954, ASSERT_TYPE_ASSERT, "( target->sentient )", (const char *)&queryFormat, "target->sentient") )
    __debugbreak();
  Sentient_GetEyePosition(target->sentient, outEyePos);
}

/*
==============
GTurretSP::IsTargetTooCloseToPlayer
==============
*/
bool GTurretSP::IsTargetTooCloseToPlayer(GTurretSP *this, const vec3_t *sourceOrigin, const gentity_s *target, const vec3_t *targetOffset)
{
  gentity_s *gentities; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v21; 
  float v22; 
  float v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 

  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 918, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == MAX_CLIENTS_SP") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 919, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
    __debugbreak();
  gentities = level.gentities;
  if ( !level.gentities->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 922, ASSERT_TYPE_ASSERT, "( player->sentient )", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  if ( gentities->sentient->eTeam != this->m_data.eTeam )
    return 0;
  v9 = (float)(gentities->r.box.midPoint.v[0] + gentities->r.currentOrigin.v[0]) - sourceOrigin->v[0];
  v10 = LODWORD(gentities->r.box.midPoint.v[1]);
  v11 = (float)(gentities->r.box.midPoint.v[1] + gentities->r.currentOrigin.v[1]) - sourceOrigin->v[1];
  v12 = (float)(gentities->r.box.midPoint.v[2] + gentities->r.currentOrigin.v[2]) - sourceOrigin->v[2];
  *(float *)&v10 = fsqrt((float)((float)(v11 * v11) + (float)(v9 * v9)) + (float)(v12 * v12));
  _XMM8 = v10;
  __asm
  {
    vcmpless xmm0, xmm8, cs:__real@80000000
    vblendvps xmm0, xmm8, xmm9, xmm0
  }
  v16 = v9 * (float)(1.0 / *(float *)&_XMM0);
  v17 = v11 * (float)(1.0 / *(float *)&_XMM0);
  v18 = v12 * (float)(1.0 / *(float *)&_XMM0);
  if ( *(float *)&v10 < 0.001 )
    return 1;
  v19 = LODWORD(target->r.box.midPoint.v[1]);
  v20 = (float)((float)(target->r.currentOrigin.v[0] + target->r.box.midPoint.v[0]) + targetOffset->v[0]) - sourceOrigin->v[0];
  v21 = (float)((float)(target->r.box.midPoint.v[1] + target->r.currentOrigin.v[1]) + targetOffset->v[1]) - sourceOrigin->v[1];
  v22 = (float)((float)(target->r.box.midPoint.v[2] + target->r.currentOrigin.v[2]) + targetOffset->v[2]) - sourceOrigin->v[2];
  *(float *)&v19 = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22));
  _XMM3 = v19;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  v26 = acosf_0((float)((float)((float)(v21 * (float)(1.0 / *(float *)&_XMM0)) * v17) + (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * v16)) + (float)((float)(v22 * (float)(1.0 / *(float *)&_XMM0)) * v18));
  v27 = gentities->r.box.halfSize.v[2];
  v28 = DVARFLT_turretPlayerAvoidScale;
  v29 = v27 + target->r.box.halfSize.v[2];
  if ( !DVARFLT_turretPlayerAvoidScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretPlayerAvoidScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  return v26 <= atanf_0((float)(v29 * v28->current.value) / *(float *)&_XMM8);
}

/*
==============
GTurretSP::IsTargetVisibleStateChecks
==============
*/
bool GTurretSP::IsTargetVisibleStateChecks(GTurretSP *this, const gentity_s *target)
{
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 897, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  return !target->client || !G_Vehicle_IsPlayerProtected(target);
}

/*
==============
GTurretSP::NextTarget_IsValid
==============
*/
char GTurretSP::NextTarget_IsValid(GTurretSP *this, const gentity_s *turretEnt, const sentient_s *sentient)
{
  return 1;
}

/*
==============
GTurretSP::RestrictUsageToOwner
==============
*/
__int64 GTurretSP::RestrictUsageToOwner(GTurretSP *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_turretSentryRestrictUsageToOwner;
  if ( !DVARBOOL_turretSentryRestrictUsageToOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretSentryRestrictUsageToOwner") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
GTurretSP::SaveSP_ReadTurrets
==============
*/
void GTurretSP::SaveSP_ReadTurrets(MemoryFile *memFile, SaveGame *save)
{
  GTurret **v4; 
  __int64 v5; 
  GTurret *v6; 
  char v7; 
  const saveField_t *CommonSaveFields; 
  char p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 101, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 102, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( (_BYTE)GTurret::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 103, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  v4 = GTurret::ms_turretArray;
  v5 = 128i64;
  do
  {
    v6 = *v4;
    if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 108, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    MemFile_ReadData(memFile, 1ui64, &p);
    v7 = p;
    v6->m_inuse = p;
    if ( v7 )
    {
      if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 72, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
        __debugbreak();
      if ( !v6->m_inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 74, ASSERT_TYPE_ASSERT, "( turret->m_inuse )", (const char *)&queryFormat, "turret->m_inuse") )
        __debugbreak();
      CommonSaveFields = G_Turret_GetCommonSaveFields();
      G_SaveSP_ReadTurretStructs(save, CommonSaveFields, &v6->m_data, s_turretSP_fields, (GTurretDataSP *)&v6[1]);
    }
    ++v4;
    --v5;
  }
  while ( v5 );
}

/*
==============
GTurretSP::SaveSP_WriteTurrets
==============
*/
void GTurretSP::SaveSP_WriteTurrets(MemoryFile *memFile)
{
  GTurret **v2; 
  __int64 v3; 
  GTurret *v4; 
  const saveField_t *CommonSaveFields; 
  bool p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 82, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( (_BYTE)GTurret::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  v2 = GTurret::ms_turretArray;
  v3 = 128i64;
  do
  {
    v4 = *v2;
    if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 88, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    p = v4->m_inuse;
    MemFile_WriteData(memFile, 1ui64, &p);
    if ( v4->m_inuse )
    {
      if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 62, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
        __debugbreak();
      if ( !v4->m_inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 64, ASSERT_TYPE_ASSERT, "( turret->m_inuse )", (const char *)&queryFormat, "turret->m_inuse") )
        __debugbreak();
      CommonSaveFields = G_Turret_GetCommonSaveFields();
      G_SaveSP_WriteTurretStructs(memFile, CommonSaveFields, &v4->m_data, s_turretSP_fields, (const GTurretDataSP *)&v4[1]);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}

/*
==============
GTurretSP::ScrSetTeam
==============
*/
void GTurretSP::ScrSetTeam(GTurretSP *this, scrContext_t *scrContext, scr_string_t team)
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
    v7 = &S_TEAMS_SP_SCR_STRINGS_19[1];
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
    v9 = S_TEAMS_MP_SCR_STRINGS_19;
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
    Scr_Error(COM_ERR_2600, scrContext, v11);
  }
}

/*
==============
GTurretSP::SetCanAIDetach
==============
*/
void GTurretSP::SetCanAIDetach(GTurretSP *this, int canDetach)
{
  int flags; 

  flags = this->m_data.flags;
  if ( canDetach )
  {
    this->m_data.flags = flags & 0xFEFFFFFF;
  }
  else
  {
    this->m_data.flags = flags | 0x1000000;
    SentientHandle::setSentient(&this->m_dataSP.detachSentient, NULL);
    this->m_data.flags &= ~0x20000u;
  }
}

/*
==============
GTurretSP::SetDefaultDropPitchVirtual
==============
*/
void GTurretSP::SetDefaultDropPitchVirtual(GTurretSP *this, gentity_s *self, float pitch)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 716, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( (this->m_data.flags & 0x40000) == 0 )
    self->s.lerp.u.turret.gunAngles.v[0] = pitch;
}

/*
==============
GTurretSP::SetMinimapVisible
==============
*/
void GTurretSP::SetMinimapVisible(GTurretSP *this, gentity_s *self, int isVisible, const char *sentryType)
{
  int v6; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 968, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  v6 = self->s.lerp.u.anonymous.data[5] | 4;
  if ( !isVisible )
    v6 = self->s.lerp.u.anonymous.data[5] & 0xFFFFFFFB;
  self->s.lerp.u.anonymous.data[5] = v6;
}

/*
==============
GTurretSP::SpawnVirtual
==============
*/
void GTurretSP::SpawnVirtual(GTurretSP *this, gentity_s *self)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v6; 
  const char *szScript; 
  char *WeaponName; 
  WeaponSFXPackage *sfxPackage; 
  GConfigStrings *v10; 
  float aiSpread; 
  unsigned int out[4]; 
  char output[512]; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 121, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  v6 = BG_WeaponDef(WeaponForEntity, 0);
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  szScript = v6->szScript;
  if ( *szScript && !*(&GameScriptData::ms_gScriptData[1].ai_asm_getgenerichandler + 3 * WeaponForEntity->weaponIdx) )
  {
    WeaponName = BG_GetWeaponName(WeaponForEntity, output, 0x200u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144361880, 527i64, WeaponName, szScript);
  }
  *(_QWORD *)&this->m_dataSP.suppressTime = 0i64;
  *(_QWORD *)&this->m_dataSP.aiSpread = 0i64;
  *(_QWORD *)&this->m_dataSP.originError.y = 0i64;
  *(_QWORD *)this->m_dataSP.anglesError.v = 0i64;
  *(_QWORD *)&this->m_dataSP.anglesError.z = 0i64;
  *(_QWORD *)&this->m_dataSP.lastCanShootTime = 0i64;
  *(_QWORD *)&this->m_dataSP.lastCanShootLocalPos.y = 0i64;
  *(_DWORD *)&this->m_dataSP.lastCanShootGroundEntNum = 0;
  this->m_data.flags = 32772;
  this->m_data.eTeam = TEAM_FOUR;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  sfxPackage = v6->sfxPackage;
  v10 = GConfigStrings::ms_gConfigStrings;
  if ( sfxPackage )
  {
    if ( sfxPackage->sounds->fireLoopSoundPlayer.name )
    {
      this->m_data.fireLoopSndPlayer = ((__int64 (__fastcall *)(GConfigStrings *))GConfigStrings::ms_gConfigStrings->GetSoundAliasIndex)(GConfigStrings::ms_gConfigStrings);
      sfxPackage = v6->sfxPackage;
    }
    if ( sfxPackage && sfxPackage->sounds->fireStopSoundPlayer.name )
      this->m_data.stopSndPlayer = ((__int64 (__fastcall *)(GConfigStrings *))v10->GetSoundAliasIndex)(v10);
  }
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x3CCu, (const char *)&queryFormat.fmt + 3, (float *)out) )
    _XMM1 = out[0];
  else
    _XMM1 = LODWORD(v6->suppressTime);
  __asm
  {
    vcmpltss xmm0, xmm1, xmm6
    vblendvps xmm1, xmm1, xmm6, xmm0
  }
  out[0] = _XMM1;
  this->m_dataSP.suppressTime = (int)(float)((float)(*(float *)&_XMM1 * 1000.0) + 0.5);
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x2Cu, "1", &this->m_dataSP.aiSpread) )
  {
    aiSpread = this->m_dataSP.aiSpread;
  }
  else
  {
    aiSpread = v6->aiSpread;
    this->m_dataSP.aiSpread = aiSpread;
  }
  if ( aiSpread < 0.0 )
    this->m_dataSP.aiSpread = 0.0;
}

/*
==============
GTurretSP::StopUseVirtual
==============
*/
void GTurretSP::StopUseVirtual(GTurretSP *this, gentity_s *self, gentity_s *owner)
{
  ;
}

/*
==============
GTurretSP::ThinkVirtual
==============
*/
void GTurretSP::ThinkVirtual(GTurretSP *this, gentity_s *self, gentity_s *owner)
{
  GTurretSP *Turret; 
  actor_s *actor; 
  GTurretSP *v8; 
  int flags; 
  AIActorInterface *m_pAI; 
  AIActorInterface_vtbl *v11; 
  AIActorWrapper *v12; 
  AIActorWrapper v13; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 639, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !owner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 640, ASSERT_TYPE_ASSERT, "( owner )", (const char *)&queryFormat, "owner") )
    __debugbreak();
  if ( (_BYTE)GTurret::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.h", 76, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  Turret = (GTurretSP *)GTurret::GetTurret(&self->turretHandle);
  actor = owner->actor;
  v8 = Turret;
  if ( !actor )
    goto LABEL_13;
  if ( actor->eState[0] != AIS_TURRET )
  {
    actor = NULL;
LABEL_13:
    flags = Turret->m_data.flags;
    if ( (flags & 0x8000) != 0 )
    {
      if ( !G_IsTurretKeepingOrientationOnExit(&self->s) )
        GTurret::ReturnToDefaultPos(this, self, 0);
      return;
    }
    if ( (flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 666, ASSERT_TYPE_ASSERT, "( !(turret->m_data.flags & TURRET_AUTO) )", (const char *)&queryFormat, "!(turret->m_data.flags & TURRET_AUTO)") )
      __debugbreak();
    goto LABEL_25;
  }
  if ( (Turret->m_data.flags & 4) != 0 )
  {
    if ( G_TurretSP_Think_Auto(Turret, self, actor) )
      return;
    AIActorWrapper::AIActorWrapper(&v13, actor);
    m_pAI = v13.m_pAI;
    if ( !v13.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 656, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    v11 = m_pAI->__vftable;
    v12 = (AIActorWrapper *)m_pAI;
    goto LABEL_28;
  }
LABEL_25:
  if ( !G_TurretSP_Think_Manual(v8, self, actor) && actor )
  {
    AIActorInterface::AIActorInterface(&v13.m_actorInterface);
    v13.m_pAI = NULL;
    AIActorInterface::SetActor(&v13.m_actorInterface, actor);
    v13.m_pAI = (AIActorInterface *)&v13;
    v12 = &v13;
    v11 = v13.m_actorInterface.__vftable;
LABEL_28:
    v11->StopUseTurret(&v12->m_actorInterface);
  }
}

/*
==============
GTurretSP::UpdateTargetAngles_GetStartingPitch
==============
*/
bool GTurretSP::UpdateTargetAngles_GetStartingPitch(GTurretSP *this, gentity_s *self, float *outPitch)
{
  if ( outPitch )
  {
    *outPitch = 0.0;
    return 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 888, ASSERT_TYPE_ASSERT, "( outPitch )", (const char *)&queryFormat, "outPitch") )
      __debugbreak();
    MEMORY[0] = 0;
    return 0;
  }
}

/*
==============
GTurretSP::UseVirtual
==============
*/
void GTurretSP::UseVirtual(GTurretSP *this, gentity_s *self, gentity_s *owner)
{
  this->m_data.arcmin.v[1] = this->m_data.initialYawmin;
  this->m_data.arcmax.v[1] = this->m_data.initialYawmax;
}

