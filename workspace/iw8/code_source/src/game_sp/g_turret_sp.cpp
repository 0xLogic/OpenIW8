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
  _RBX = this;
  if ( !activator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 879, ASSERT_TYPE_ASSERT, "( activator )", (const char *)&queryFormat, "activator") )
    __debugbreak();
  if ( activator->client )
    __asm { vmovss  xmm0, dword ptr [rbx+48h] }
  else
    __asm { vmovss  xmm0, dword ptr [rbx+108h] }
  return *(float *)&_XMM0;
}

/*
==============
GTurretSP::FireLead_UpdateAccuracy
==============
*/
void GTurretSP::FireLead_UpdateAccuracy(GTurretSP *this, gentity_s *ent, BgWeaponParms *wp)
{
  int flags; 
  int v18; 
  unsigned int v19; 
  const gentity_s *v36; 
  const gentity_s *v43; 
  gentity_s *v44; 
  bool v46; 
  bool v47; 
  char v48; 
  char v49; 
  const dvar_t *v58; 
  const vec4_t *v59; 
  vec3_t outResultOffset; 
  vec3_t outForward; 
  vec3_t end; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBX = wp;
  _RDI = this;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 818, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 819, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+90h]
    vsubss  xmm6, xmm2, dword ptr [rbx+24h]
    vmovss  xmm1, dword ptr [rdi+94h]
    vsubss  xmm4, xmm1, dword ptr [rbx+28h]
    vmovss  xmm0, dword ptr [rdi+98h]
    vsubss  xmm7, xmm0, dword ptr [rbx+2Ch]
  }
  flags = _RDI->m_data.flags;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+end+4], xmm1
    vmovss  dword ptr [rsp+0B8h+end+8], xmm0
    vmovss  dword ptr [rsp+0B8h+end], xmm2
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
  }
  v18 = flags | 0x80000;
  v46 = (flags & 0x80000) != 0;
  v19 = flags & 0xFFF7FFFF;
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm6, xmm5
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rdi+0CCh]
    vmulss  xmm0, xmm7, xmm5
    vmulss  xmm1, xmm0, dword ptr [rbx+8]
    vaddss  xmm3, xmm4, xmm1
    vcomiss xmm2, xmm3
  }
  if ( v46 )
    v18 = v19;
  _RDI->m_data.flags = v18;
  if ( EntHandle::isDefined(&_RDI->m_data.target) )
  {
    v36 = EntHandle::ent(&_RDI->m_data.target);
    GTurret::GetEnemyHeightOffset(_RDI, v36, &outResultOffset);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+outResultOffset]
      vaddss  xmm1, xmm0, dword ptr [rdi+50h]
      vmovss  xmm2, dword ptr [rsp+0B8h+outResultOffset+4]
      vaddss  xmm0, xmm2, dword ptr [rdi+54h]
      vmovss  dword ptr [rsp+0B8h+outResultOffset], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+outResultOffset+8]
      vaddss  xmm2, xmm1, dword ptr [rdi+58h]
      vmovss  dword ptr [rsp+0B8h+outResultOffset+8], xmm2
      vmovss  dword ptr [rsp+0B8h+outResultOffset+4], xmm0
    }
    v43 = EntHandle::ent(&_RDI->m_data.target);
    if ( G_TurretSP_FireLead_MayHitTarget(_RBX, v43, &outResultOffset, &_RBX->forward) )
    {
      if ( GTurret::GetRemainingConvergenceTime(_RDI, 1) <= 0 && (v44 = EntHandle::ent(&_RDI->m_data.target), G_TurretSP_FireLead_ShouldHitTarget(v44)) )
      {
        if ( SV_IsDemoPlaying() )
        {
          *(double *)&_XMM0 = SV_DemoSP_GetFxVisibility();
          __asm { vmovaps xmm6, xmm0 }
        }
        else
        {
          if ( !Com_GameMode_SupportsFeature(WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_api_inline.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_SERVER_SHARED_MEMORY )") )
            __debugbreak();
          *(double *)&_XMM0 = FX_GetClientVisibility(fx_serverVisClient, &_RBX->muzzleTrace, &end);
          __asm { vmovaps xmm6, xmm0 }
          SV_DemoSP_RecordFxVisibility(*(float *)&_XMM0);
        }
        __asm { vcomiss xmm6, cs:__real@3e4ccccd }
        v47 = !v46;
        if ( !v46 )
        {
          AIScriptedInterface::HitTarget(_RBX, &end, &outForward);
LABEL_23:
          __asm
          {
            vmovss  xmm4, dword ptr [rsp+0B8h+outForward+4]
            vmulss  xmm0, xmm4, dword ptr [rbx+4]
            vmovss  xmm3, dword ptr [rsp+0B8h+outForward]
            vmulss  xmm1, xmm3, dword ptr [rbx]
            vmovss  xmm5, dword ptr [rsp+0B8h+outForward+8]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, dword ptr [rbx+8]
            vaddss  xmm0, xmm2, xmm1
            vcomiss xmm0, cs:__real@3f733333
          }
          if ( !(v48 | v49) )
          {
            __asm
            {
              vmovss  dword ptr [rbx], xmm3
              vmovss  dword ptr [rbx+8], xmm5
              vmovss  dword ptr [rbx+4], xmm4
            }
          }
          v58 = DVARBOOL_turretConvergenceHeightDebug;
          if ( !DVARBOOL_turretConvergenceHeightDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretConvergenceHeightDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v58);
          if ( v58->current.enabled )
          {
            v59 = &colorRed;
            if ( v47 )
              v59 = &colorLtGreen;
            G_DebugStar(&end, v59);
          }
          goto LABEL_32;
        }
      }
      else
      {
        v47 = 0;
      }
      AIScriptedInterface::MissTarget(_RBX, &end, &outForward);
      goto LABEL_23;
    }
  }
LABEL_32:
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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
  AIWrapper v22; 
  AIWrapper v23; 

  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1111, ASSERT_TYPE_ASSERT, "( turretEnt )", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1112, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( turretEnt->active )
    return 0;
  AIWrapper::AIWrapper(&v22, actor);
  m_pAI = v22.m_pAI;
  if ( !v22.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1118, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
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
    AIWrapper::AIWrapper(&v23, actor);
    v8 = v23.m_pAI;
    if ( !v23.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1096, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    TargetSentient = AICommonInterface::GetTargetSentient(v8);
    if ( !TargetSentient )
      return 1;
    _RCX = actor->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+130h]
      vmovss  xmm1, dword ptr [rcx+134h]
      vsubss  xmm3, xmm0, dword ptr [rax]
      vsubss  xmm2, xmm1, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rcx+138h]
      vsubss  xmm4, xmm0, dword ptr [rax+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@47800000
    }
    if ( TargetSentient->ent < (gentity_s *)0xFFFFFFFFFFFFFED0i64 )
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
  bool v20; 
  sentient_s *TargetSentient; 
  const gentity_s **p_ent; 
  sentient_info_t *v33; 
  bool result; 
  GTurretSP_vtbl *v79; 
  AIWrapper v93; 
  vec3_t out_sourcePosition; 
  vec3_t outPos; 
  vec3_t forward; 
  vec3_t outLastKnownPos; 
  vec3_t end; 
  vec2_t out_localAngles; 
  vec3_t v100; 
  vec3_t out_targetPosition; 

  _RDI = turretEnt;
  _R15 = turret;
  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1023, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1024, ASSERT_TYPE_ASSERT, "( turretEnt )", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1025, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1026, ASSERT_TYPE_ASSERT, "( actor->sentientInfo )", (const char *)&queryFormat, "actor->sentientInfo") )
    __debugbreak();
  AIWrapper::AIWrapper(&v93, actor);
  m_pAI = v93.m_pAI;
  if ( !v93.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 1028, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+180h+var_40], xmm6
    vmovaps [rsp+180h+var_50], xmm7
    vmovaps [rsp+180h+var_60], xmm8
    vmovaps [rsp+180h+var_70], xmm9
    vmovaps [rsp+180h+var_80], xmm10
  }
  if ( AICommonInterface::IsUsingTurret(m_pAI) && AICommonInterface::GetTurretUsed(m_pAI) != _RDI )
  {
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 995, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
      __debugbreak();
    if ( !actor->turret.pTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 997, ASSERT_TYPE_ASSERT, "( actor->turret.pTurret )", (const char *)&queryFormat, "actor->turret.pTurret") )
      __debugbreak();
    if ( actor->turret.pTurret == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 998, ASSERT_TYPE_ASSERT, "( actor->turret.pTurret != turret )", (const char *)&queryFormat, "actor->turret.pTurret != turret") )
      __debugbreak();
    _RAX = actor->ent;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+130h]
      vmovss  xmm1, dword ptr [rdi+134h]
      vmovss  xmm3, dword ptr [rax+130h]
      vmovss  xmm2, dword ptr [rax+134h]
    }
    _RAX = actor->turret.pTurret;
    __asm
    {
      vsubss  xmm7, xmm0, xmm3
      vsubss  xmm6, xmm1, xmm2
    }
    v20 = __CFADD__(_RAX, 304i64);
    _RAX = (gentity_s *)((char *)_RAX + 304);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vsubss  xmm4, xmm0, xmm3
      vsubss  xmm2, xmm1, xmm2
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm5, xmm3, xmm0
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm5, xmm0
    }
    if ( !v20 )
      goto LABEL_40;
  }
  TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
  p_ent = (const gentity_s **)&TargetSentient->ent;
  if ( !TargetSentient )
    goto LABEL_34;
  v33 = &actor->sentientInfo[TargetSentient - level.sentients];
  if ( level.time - v33->lastKnownPosTime >= _R15->m_dataSP.suppressTime )
    goto LABEL_34;
  _RAX = (__int64)&TargetSentient->ent->r.currentOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm6, xmm0, dword ptr [rdi+130h]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm7, xmm1, dword ptr [rdi+134h]
    vsubss  xmm8, xmm0, dword ptr [rdi+138h]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm10, xmm2, xmm1
    vcomiss xmm10, dword ptr [r15+78h]
  }
  if ( (unsigned __int64)*p_ent < 0xFFFFFFFFFFFFFED0ui64 )
    goto LABEL_34;
  SentientInfo_GetLastKnownPos(v33, &outLastKnownPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+outLastKnownPos]
    vmovss  xmm1, dword ptr [rbp+80h+outLastKnownPos+4]
    vsubss  xmm2, xmm1, dword ptr [rdx+134h]
    vsubss  xmm4, xmm0, dword ptr [rdx+130h]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, cs:__real@45800000
  }
  if ( !v20 )
    goto LABEL_34;
  __asm { vmovss  xmm9, cs:__real@3f800000 }
  if ( !v33->VisCache.bVisible )
  {
    AngleVectors(&_RDI->r.currentAngles, &forward, NULL, NULL);
    __asm
    {
      vsqrtss xmm1, xmm10, xmm10
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm9, xmm0
      vdivss  xmm5, xmm9, xmm0
      vmulss  xmm0, xmm7, xmm5
      vmulss  xmm3, xmm0, dword ptr [rbp+80h+forward+4]
      vmulss  xmm1, xmm5, xmm6
      vmulss  xmm2, xmm1, dword ptr [rbp+80h+forward]
      vmulss  xmm0, xmm5, xmm8
      vmulss  xmm1, xmm0, dword ptr [rbp+80h+forward+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, dword ptr [r15+0CCh]
    }
    if ( !v20 )
      goto LABEL_34;
    goto LABEL_37;
  }
  _R15->GetTargetEyePosition(_R15, *p_ent, &v100);
  if ( !G_Turret_CanTargetSentient(_RDI, *p_ent, &vec3_origin, &out_targetPosition, &out_sourcePosition, &out_localAngles) )
  {
LABEL_37:
    if ( G_Utils_DObjGetWorldTagPos(_RDI, scr_const.tag_weapon, &outPos) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+80h+outPos]
        vmovss  xmm1, dword ptr [rbp+80h+outPos+4]
        vmovss  dword ptr [rbp+80h+out_sourcePosition], xmm0
        vmovss  dword ptr [rbp+80h+out_sourcePosition+4], xmm1
      }
      if ( G_Utils_DObjGetWorldTagPos(_RDI, scr_const.tag_aim, &outPos) )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+80h+out_sourcePosition]
          vmovss  xmm7, dword ptr [rbp+80h+out_sourcePosition+4]
          vmovss  xmm0, dword ptr [rbp+80h+outPos+8]
          vsubss  xmm3, xmm6, dword ptr [rbp+80h+outPos]
          vsubss  xmm5, xmm7, dword ptr [rbp+80h+outPos+4]
        }
        v79 = _R15->__vftable;
        __asm
        {
          vmovss  dword ptr [rbp+80h+out_sourcePosition+8], xmm0
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm9, xmm0
          vdivss  xmm4, xmm9, xmm0
          vmulss  xmm1, xmm3, xmm4
          vmulss  xmm0, xmm1, cs:__real@41f00000
          vaddss  xmm1, xmm6, xmm0
          vmovss  dword ptr [rbp+80h+out_sourcePosition], xmm1
          vmulss  xmm2, xmm5, xmm4
          vmulss  xmm0, xmm2, cs:__real@41f00000
          vaddss  xmm1, xmm7, xmm0
          vmovss  dword ptr [rbp+80h+out_sourcePosition+4], xmm1
        }
        v79->GetTargetEyePosition(_R15, *p_ent, &end);
        result = !G_Turret_SightTrace(&out_sourcePosition, &end, actor->ent->s.number, (*p_ent)->s.number);
        goto LABEL_35;
      }
    }
LABEL_40:
    result = 0;
    goto LABEL_35;
  }
LABEL_34:
  result = 1;
LABEL_35:
  __asm
  {
    vmovaps xmm10, [rsp+180h+var_80]
    vmovaps xmm9, [rsp+180h+var_70]
    vmovaps xmm8, [rsp+180h+var_60]
    vmovaps xmm7, [rsp+180h+var_50]
    vmovaps xmm6, [rsp+180h+var_40]
  }
  return result;
}

/*
==============
G_TurretSP_FireLead_MayHitTarget
==============
*/
bool G_TurretSP_FireLead_MayHitTarget(const BgWeaponParms *wp, const gentity_s *target, const vec3_t *targetOffset, const vec3_t *forward)
{
  entityType_s eType; 
  actor_s *actor; 
  unsigned int physicsInstanceId; 
  bool result; 
  vec3_t end; 
  vec3_t start; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBX = target;
  _RDI = wp;
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 778, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 779, ASSERT_TYPE_ASSERT, "( wp )", (const char *)&queryFormat, "wp") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+24h]
    vmovss  xmm7, dword ptr [rdi+28h]
    vmovss  xmm8, dword ptr [rdi+2Ch]
    vmovss  xmm0, dword ptr [rbx+130h]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmovss  xmm2, dword ptr [rbx+134h]
    vaddss  xmm0, xmm2, dword ptr [rbp+4]
    vsubss  xmm5, xmm1, xmm6
    vmovss  xmm1, dword ptr [rbx+138h]
    vaddss  xmm2, xmm1, dword ptr [rbp+8]
    vsubss  xmm3, xmm0, xmm7
    vsubss  xmm4, xmm2, xmm8
    vmulss  xmm3, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmulss  xmm0, xmm3, dword ptr [rsi]
    vaddss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm3, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+0B8h+end], xmm1
    vaddss  xmm1, xmm0, xmm7
    vmulss  xmm0, xmm3, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+0B8h+end+4], xmm1
    vaddss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rsp+0B8h+end+8], xmm1
    vmovss  dword ptr [rsp+0B8h+start], xmm6
    vmovss  dword ptr [rsp+0B8h+start+4], xmm7
    vmovss  dword ptr [rsp+0B8h+start+8], xmm8
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = _RBX->s.eType;
  if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
  {
    physicsInstanceId = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RBX->s.number);
  }
  else
  {
    actor = _RBX->actor;
    if ( (!actor || !actor->Physics.bIsAlive) && _RBX->health <= 0 )
      goto LABEL_18;
    physicsInstanceId = G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId(_RBX);
  }
  if ( physicsInstanceId != -1 )
  {
    result = PhysicsQuery_LegacyEntitySightTrace(PHYSICS_WORLD_ID_FIRST, &start, &end, &bounds_origin, -1, physicsInstanceId, _RBX->s.number) != 0;
    goto LABEL_20;
  }
LABEL_18:
  result = 0;
LABEL_20:
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
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
  __int16 lastCanShootGroundEntNum; 
  __int64 v7; 
  int v38; 
  int v39; 
  int v40; 
  tmat33_t<vec3_t> axis; 

  _RBX = outLastKnownPos;
  _RDI = turretDataSP;
  if ( !turretDataSP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 330, ASSERT_TYPE_ASSERT, "( turretDataSP )", (const char *)&queryFormat, "turretDataSP") )
    __debugbreak();
  lastCanShootGroundEntNum = _RDI->lastCanShootGroundEntNum;
  if ( (unsigned __int16)(lastCanShootGroundEntNum - 2046) <= 1u )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rbx], xmm1
    }
    _RBX->v[1] = _RDI->lastCanShootLocalPos.v[1];
    __asm { vmovss  xmm0, dword ptr [rdi+34h] }
  }
  else
  {
    _RSI = &_RDI->lastCanShootLocalPos;
    if ( G_IsEntityInUse(lastCanShootGroundEntNum) )
    {
      v7 = _RDI->lastCanShootGroundEntNum;
      __asm { vmovaps [rsp+98h+var_28], xmm6 }
      AnglesToAxis(&g_entities[v7].r.currentAngles, &axis);
      if ( _RSI == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+98h+axis]
        vmulss  xmm3, xmm0, dword ptr [rsi]
        vmovss  xmm1, dword ptr [rsp+98h+axis+0Ch]
        vmulss  xmm2, xmm1, dword ptr [rsi+4]
        vmovss  xmm0, dword ptr [rsp+98h+axis+18h]
        vmulss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  xmm0, dword ptr [rsp+98h+axis+4]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm6, xmm4, xmm1
        vmovss  xmm1, dword ptr [rsp+98h+axis+10h]
        vmovss  dword ptr [rbx], xmm6
        vmulss  xmm3, xmm0, dword ptr [rsi]
        vmulss  xmm2, xmm1, dword ptr [rsi+4]
        vmovss  xmm0, dword ptr [rsp+98h+axis+1Ch]
        vmulss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  xmm0, dword ptr [rsp+98h+axis+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm5, xmm4, xmm1
        vmovss  xmm1, dword ptr [rsp+98h+axis+14h]
        vmovss  dword ptr [rbx+4], xmm5
        vmulss  xmm3, xmm0, dword ptr [rsi]
        vmulss  xmm2, xmm1, dword ptr [rsi+4]
        vmovss  xmm0, dword ptr [rsp+98h+axis+20h]
        vmulss  xmm1, xmm0, dword ptr [rsi+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  dword ptr [rbx+8], xmm2
        vaddss  xmm1, xmm6, dword ptr [rdi+130h]
        vmovaps xmm6, [rsp+98h+var_28]
        vmovss  dword ptr [rbx], xmm1
        vaddss  xmm0, xmm5, dword ptr [rdi+134h]
        vmovss  dword ptr [rbx+4], xmm0
        vaddss  xmm0, xmm2, dword ptr [rdi+138h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]
        vmovss  dword ptr [rbx], xmm1
      }
      _RBX->v[1] = _RDI->lastCanShootLocalPos.v[1];
      __asm { vmovss  xmm0, dword ptr [rsi+8] }
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  [rsp+98h+var_68], xmm1
  }
  if ( (v38 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 353, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[0] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+98h+var_68], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 354, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[1] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[1] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+98h+var_68], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 355, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[2] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[2] )") )
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
char G_TurretSP_Think_Auto(GTurretSP *turret, gentity_s *self, actor_s *actor)
{
  AIScriptedInterface *m_pAI; 
  const sentient_s *v11; 
  sentient_s *TargetSentient; 
  int flags; 
  AIScriptedInterface *v45; 
  AIWrapper v46; 

  _R14 = self;
  _RBX = turret;
  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 491, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  _RBP = &_RBX->m_dataSP;
  AIWrapper::AIWrapper(&v46, actor);
  m_pAI = v46.m_pAI;
  v45 = v46.m_pAI;
  if ( !v46.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 496, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  if ( (_RBX->m_data.flags & 0x40000) == 0 )
    goto LABEL_46;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbp+0Ch]
  }
  if ( (_RBX->m_data.flags & 0x40000) != 0 )
    goto LABEL_46;
  __asm { vucomiss xmm0, dword ptr [rbp+10h] }
  if ( (_RBX->m_data.flags & 0x40000) != 0 )
    goto LABEL_46;
  __asm { vucomiss xmm0, dword ptr [rbp+14h] }
  if ( (_RBX->m_data.flags & 0x40000) != 0 )
  {
LABEL_46:
    GTurret::ReturnToDefaultPos(_RBX, _R14, 0);
    return 1;
  }
  else
  {
    if ( SentientHandle::isDefined(&_RBX->m_dataSP.detachSentient) )
      v11 = SentientHandle::sentient(&_RBX->m_dataSP.detachSentient);
    else
      v11 = NULL;
    TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
    flags = _RBX->m_data.flags;
    if ( (flags & 0x20000) != 0 && v11 )
    {
      if ( (flags & 0x1000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 509, ASSERT_TYPE_ASSERT, "( !(turretData->flags & TURRET_DONT_DETACH_AI) )", (const char *)&queryFormat, "!(turretData->flags & TURRET_DONT_DETACH_AI)") )
        __debugbreak();
      TargetSentient = (sentient_s *)v11;
    }
    if ( EntHandle::isDefined(&_RBX->m_data.manualTarget) )
      _RDI = EntHandle::ent(&_RBX->m_data.manualTarget);
    else
      _RDI = NULL;
    if ( TargetSentient )
    {
      Sentient_GetSentientInfo(actor->sentient, TargetSentient)->attackTime = level.time + 2000;
      if ( !TargetSentient->bIgnoreMe )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+130h]
          vmovss  xmm1, dword ptr [r14+134h]
          vsubss  xmm3, xmm0, dword ptr [r8+130h]
          vsubss  xmm2, xmm1, dword ptr [r8+134h]
          vmovss  xmm0, dword ptr [r14+138h]
          vsubss  xmm4, xmm0, dword ptr [r8+138h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, dword ptr [rbx+78h]
        }
      }
      if ( _RDI == TargetSentient->ent )
        _RDI = NULL;
    }
    else
    {
      if ( v11 && Sentient_GetSentientInfo(actor->sentient, v11)->attackTime <= level.time )
        SentientHandle::setSentient(&_RBX->m_dataSP.detachSentient, NULL);
      AIScriptedInterface::CanAttackAll(v45);
    }
    if ( !G_TurretSP_Think_Auto_Suppression(_RBX, _R14, actor) )
    {
      if ( _RDI )
      {
        __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
        if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 454, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
          __debugbreak();
        if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 455, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
          __debugbreak();
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 456, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+130h]
          vaddss  xmm2, xmm0, dword ptr [rbx+60h]
          vmovss  xmm1, dword ptr [r14+130h]
          vmovss  xmm0, dword ptr [rbx+64h]
          vaddss  xmm3, xmm0, dword ptr [rdi+134h]
          vmovss  xmm0, dword ptr [rbx+68h]
          vsubss  xmm6, xmm1, xmm2
          vaddss  xmm2, xmm0, dword ptr [rdi+138h]
          vmovss  xmm1, dword ptr [r14+134h]
          vsubss  xmm5, xmm1, xmm3
          vmovss  xmm1, dword ptr [r14+138h]
          vsubss  xmm4, xmm1, xmm2
          vmulss  xmm0, xmm6, xmm6
          vmovaps xmm6, [rsp+0E8h+var_48]
          vmulss  xmm3, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, dword ptr [rbx+78h]
        }
      }
      G_Turret_ClearTargetEnt(_R14);
      GTurret::ReturnToDefaultPos(_RBX, _R14, 1);
    }
    return 1;
  }
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
  if ( level.time - pInfo->lastKnownPosTime >= turret->suppressTime )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+outLastKnownPos]
    vmovss  xmm1, dword ptr [rsp+48h+outLastKnownPos+4]
    vsubss  xmm2, xmm1, dword ptr [rax+4]
    vsubss  xmm4, xmm0, dword ptr [rax]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, cs:__real@45800000
  }
  return enemy->ent >= (gentity_s *)0xFFFFFFFFFFFFFED0i64;
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
  bool v14; 
  sentient_s *sentient; 
  sentient_info_t *SentientInfo; 
  sentient_info_t *v18; 
  SentientHandle *p_detachSentient; 
  vec3_t outLastKnownPos; 
  vec2_t out_localTargetAngles; 
  vec3_t origin; 

  _RBX = turret;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 362, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 363, ASSERT_TYPE_ASSERT, "( actor )", (const char *)&queryFormat, "actor") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 364, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  p_m_dataSP = &_RBX->m_dataSP;
  if ( !EntHandle::isDefined(&_RBX->m_data.target) )
    return 0;
  v7 = EntHandle::ent(&_RBX->m_data.target);
  v8 = v7;
  if ( v7->maxHealth > 0 && v7->health <= 0 && EntHandle::isDefined(&_RBX->m_dataSP.lastCanShootTarget) && EntHandle::ent(&_RBX->m_dataSP.lastCanShootTarget) == v8 )
  {
    Instance = GWeaponMap::GetInstance();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
    _RAX = BG_WeaponDef(WeaponForEntity, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0C8Ch]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si eax, xmm1
    }
    if ( level.time - _RBX->m_dataSP.lastCanShootTime < (int)_RAX )
    {
      G_TurretSP_GetLastCanShootWorldPos(&_RBX->m_dataSP, &outLastKnownPos);
      v14 = GTurret::AimAtVector(_RBX, self, &outLastKnownPos, 1, &out_localTargetAngles);
      goto LABEL_17;
    }
    return 0;
  }
  if ( !EntHandle::ent(&_RBX->m_data.target)->sentient )
    return 0;
  sentient = EntHandle::ent(&_RBX->m_data.target)->sentient;
  SentientInfo = Sentient_GetSentientInfo(actor->sentient, sentient);
  v18 = SentientInfo;
  if ( sentient->bIgnoreMe || level.time - SentientInfo->lastKnownPosTime >= p_m_dataSP->suppressTime )
  {
    SentientInfo->lastKnownPosTime = 0;
    return 0;
  }
  SentientInfo_GetLastKnownPos(SentientInfo, &outLastKnownPos);
  if ( (_RBX->m_data.flags & 0x20) != 0 )
  {
    __asm { vmovss  xmm3, dword ptr [rbx+98h] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+outLastKnownPos+8]
      vaddss  xmm3, xmm0, cs:__real@42000000
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outLastKnownPos]
    vaddss  xmm1, xmm0, dword ptr [rbx+50h]
    vmovss  xmm2, dword ptr [rsp+98h+outLastKnownPos+4]
    vaddss  xmm0, xmm2, dword ptr [rbx+54h]
    vmovss  dword ptr [rsp+98h+outLastKnownPos], xmm1
    vaddss  xmm1, xmm3, dword ptr [rbx+58h]
    vmovss  dword ptr [rsp+98h+outLastKnownPos+8], xmm1
    vmovss  dword ptr [rsp+98h+outLastKnownPos+4], xmm0
  }
  if ( !GTurret::AimAtVector(_RBX, self, &outLastKnownPos, 1, &out_localTargetAngles) )
  {
    if ( level.time - _RBX->m_dataSP.lastCanShootTime < p_m_dataSP->suppressTime )
    {
      G_TurretSP_GetLastCanShootWorldPos(&_RBX->m_dataSP, &origin);
      v14 = GTurret::AimAtVectorClamped(_RBX, self, &origin, 1, &out_localTargetAngles);
LABEL_17:
      if ( v14 )
      {
        GTurret::UpdateTargetAngles(_RBX, self, &out_localTargetAngles, 1);
        return 1;
      }
    }
    return 0;
  }
  GTurret::UpdateTargetAngles(_RBX, self, &out_localTargetAngles, 1);
  p_detachSentient = &_RBX->m_dataSP.detachSentient;
  v18->attackTime = 0;
  if ( SentientHandle::isDefined(&_RBX->m_dataSP.detachSentient) )
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
  int isDefined; 
  sentient_s *v43; 
  sentient_s *v44; 
  sentient_info_t *v45; 
  bool result; 
  sentient_info_t *SentientInfo; 
  sentient_info_t *v48; 
  char v49; 
  vec3_t forward; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+0E8h+var_88], xmm9
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm8
  }
  _RDI = turret;
  if ( !turret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 245, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( (_RDI->m_data.flags & 0x1000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 249, ASSERT_TYPE_ASSERT, "( !(turretData->flags & TURRET_DONT_DETACH_AI) )", (const char *)&queryFormat, "!(turretData->flags & TURRET_DONT_DETACH_AI)") )
    __debugbreak();
  _RAX = enemy->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vsubss  xmm6, xmm0, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [rax+134h]
    vsubss  xmm5, xmm1, dword ptr [rbx+134h]
    vmovss  xmm0, dword ptr [rax+138h]
    vsubss  xmm4, xmm0, dword ptr [rbx+138h]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm9, xmm2, xmm2
    vcmpless xmm0, xmm9, cs:__real@80000000
    vblendvps xmm0, xmm9, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm7, xmm5, xmm1
    vmulss  xmm8, xmm4, xmm1
  }
  AngleVectors(&self->r.currentAngles, &forward, NULL, NULL);
  __asm
  {
    vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+forward+4]
    vmulss  xmm3, xmm6, dword ptr [rsp+0E8h+forward]
    vmulss  xmm1, xmm8, dword ptr [rsp+0E8h+forward+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, dword ptr [rdi+0CCh]
  }
  isDefined = SentientHandle::isDefined(&_RDI->m_dataSP.detachSentient);
  __asm
  {
    vmovaps xmm8, [rsp+0E8h+var_78]
    vmovaps xmm7, [rsp+0E8h+var_68]
    vmovaps xmm6, [rsp+0E8h+var_58]
  }
  if ( !isDefined )
  {
    v44 = NULL;
    goto LABEL_19;
  }
  v43 = SentientHandle::sentient(&_RDI->m_dataSP.detachSentient);
  v44 = v43;
  if ( !v43 || v43 != enemy && Sentient_GetSentientInfo(actor->sentient, v43)->attackTime <= level.time )
  {
LABEL_19:
    SentientInfo = Sentient_GetSentientInfo(actor->sentient, enemy);
    v48 = SentientInfo;
    if ( SentientInfo->VisCache.bVisible && G_TurretSP_Think_Auto_ShouldCheck(&_RDI->m_dataSP, enemy, SentientInfo) && !G_TurretSP_Think_Auto_TurretAICanSeeEnemy(_RDI, actor, enemy) )
    {
      SentientHandle::setSentient(&_RDI->m_dataSP.detachSentient, enemy);
      __asm { vcomiss xmm9, cs:__real@43800000 }
      if ( v49 )
        v48->attackTime = 0;
      goto LABEL_26;
    }
  }
  if ( !v44 )
    goto LABEL_26;
  v45 = Sentient_GetSentientInfo(actor->sentient, v44);
  if ( !G_TurretSP_Think_Auto_ShouldCheck(&_RDI->m_dataSP, v44, v45) || G_TurretSP_Think_Auto_TurretAICanSeeEnemy(_RDI, actor, v44) )
  {
    SentientHandle::setSentient(&_RDI->m_dataSP.detachSentient, NULL);
    goto LABEL_26;
  }
  if ( v44 != enemy )
  {
LABEL_26:
    result = 0;
    goto LABEL_27;
  }
  if ( (_RDI->m_data.flags & 0x20000) != 0 || GTurret::ReturnToDefaultPos(_RDI, self, 1) )
  {
    v45->attackTime = 0;
    result = 1;
    *returnVal = 0;
  }
  else
  {
    __asm { vcomiss xmm9, cs:__real@43800000 }
    *returnVal = 1;
    result = 1;
  }
LABEL_27:
  __asm { vmovaps xmm9, [rsp+0E8h+var_88] }
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
char G_TurretSP_Think_Manual(GTurretSP *turret, gentity_s *self, actor_s *actor)
{
  AIScriptedInterface *m_pAI; 
  sentient_s *TargetSentient; 
  bool v24; 
  gentity_s *outTargetEnt; 
  AIWrapper v26; 

  _RDI = self;
  _RBX = turret;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 578, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 579, ASSERT_TYPE_ASSERT, "( turret )", (const char *)&queryFormat, "turret") )
    __debugbreak();
  if ( actor )
  {
    AIWrapper::AIWrapper(&v26, actor);
    m_pAI = v26.m_pAI;
    if ( !v26.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 586, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 588, ASSERT_TYPE_ASSERT, "( actor->sentientInfo )", (const char *)&queryFormat, "actor->sentientInfo") )
      __debugbreak();
    if ( (_RBX->m_data.flags & 0x40000) == 0 )
      goto LABEL_30;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rbx+10Ch]
    }
    if ( (_RBX->m_data.flags & 0x40000) != 0 )
      goto LABEL_30;
    __asm { vucomiss xmm0, dword ptr [rbx+110h] }
    if ( (_RBX->m_data.flags & 0x40000) != 0 )
      goto LABEL_30;
    __asm { vucomiss xmm0, dword ptr [rbx+114h] }
    if ( (_RBX->m_data.flags & 0x40000) != 0 )
      goto LABEL_30;
    if ( SentientHandle::isDefined(&_RBX->m_dataSP.detachSentient) )
      return G_TurretSP_Think_Auto(_RBX, _RDI, actor);
    TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
    if ( TargetSentient )
    {
      _RCX = TargetSentient->ent;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+130h]
        vmovss  xmm1, dword ptr [rdi+134h]
        vsubss  xmm2, xmm1, dword ptr [rcx+134h]
        vmovss  xmm5, dword ptr [rcx+130h]
        vsubss  xmm3, xmm0, xmm5
        vmovss  xmm0, dword ptr [rdi+138h]
        vsubss  xmm4, xmm0, dword ptr [rcx+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, dword ptr [rbx+78h]
      }
    }
    _RBX->m_data.flags &= ~0x20000u;
    if ( TargetSentient )
      actor->sentientInfo[TargetSentient - level.sentients].attackTime = level.time + 2000;
    else
      AIScriptedInterface::CanAttackAll(m_pAI);
  }
  outTargetEnt = NULL;
  if ( !GTurret::Think_ManualInternal(_RBX, _RDI, &outTargetEnt) )
  {
    if ( actor && outTargetEnt )
    {
      v24 = 1;
LABEL_31:
      GTurret::ReturnToDefaultPos(_RBX, _RDI, v24);
      return 1;
    }
    G_Turret_ClearTargetEnt(_RDI);
LABEL_30:
    v24 = 0;
    goto LABEL_31;
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
  team_t eTeam; 
  sentient_s *sentient; 
  const dvar_t *v70; 
  char v75; 
  char v76; 
  bool result; 

  _RBP = target;
  _RDI = sourceOrigin;
  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 918, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == MAX_CLIENTS_SP") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 919, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
    __debugbreak();
  _RBX = level.gentities;
  if ( !level.gentities->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 922, ASSERT_TYPE_ASSERT, "( player->sentient )", (const char *)&queryFormat, "player->sentient") )
    __debugbreak();
  eTeam = this->m_data.eTeam;
  sentient = _RBX->sentient;
  __asm
  {
    vmovaps [rsp+0C8h+var_28], xmm6
    vmovaps [rsp+0C8h+var_38], xmm7
    vmovaps [rsp+0C8h+var_48], xmm8
    vmovaps [rsp+0C8h+var_58], xmm9
    vmovaps [rsp+0C8h+var_68], xmm13
    vmovaps [rsp+0C8h+var_78], xmm14
    vmovaps [rsp+0C8h+var_88], xmm15
  }
  if ( sentient->eTeam != eTeam )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+100h]
    vaddss  xmm1, xmm0, dword ptr [rbx+130h]
    vmovss  xmm0, dword ptr [rbx+104h]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm7, dword ptr [rdi]
    vsubss  xmm6, xmm1, xmm7
    vaddss  xmm1, xmm0, dword ptr [rbx+134h]
    vsubss  xmm5, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+108h]
    vaddss  xmm1, xmm0, dword ptr [rbx+138h]
    vsubss  xmm4, xmm1, dword ptr [rdi+8]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm8, xmm2, xmm2
    vcomiss xmm8, cs:__real@3a83126f
    vcmpless xmm0, xmm8, cs:__real@80000000
    vblendvps xmm0, xmm8, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmulss  xmm13, xmm6, xmm1
    vmulss  xmm14, xmm5, xmm1
    vmulss  xmm15, xmm4, xmm1
  }
  if ( sentient->eTeam < (unsigned int)eTeam )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+130h]
    vaddss  xmm1, xmm0, dword ptr [rbp+100h]
    vaddss  xmm2, xmm1, dword ptr [r14]
    vmovss  xmm0, dword ptr [rbp+104h]
    vaddss  xmm1, xmm0, dword ptr [rbp+134h]
    vmovss  xmm0, dword ptr [rbp+108h]
    vsubss  xmm7, xmm2, xmm7
    vaddss  xmm2, xmm1, dword ptr [r14+4]
    vaddss  xmm1, xmm0, dword ptr [rbp+138h]
    vsubss  xmm4, xmm2, dword ptr [rdi+4]
    vaddss  xmm2, xmm1, dword ptr [r14+8]
    vsubss  xmm6, xmm2, dword ptr [rdi+8]
    vmulss  xmm3, xmm4, xmm4
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm5, xmm9, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, xmm14
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm2, xmm1, xmm13
    vmulss  xmm1, xmm0, xmm15
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm0, xmm4, xmm1; X
  }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm { vmovss  xmm1, dword ptr [rbx+114h] }
  v70 = DVARFLT_turretPlayerAvoidScale;
  __asm
  {
    vaddss  xmm7, xmm1, dword ptr [rbp+114h]
    vmovaps xmm6, xmm0
  }
  if ( !DVARFLT_turretPlayerAvoidScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretPlayerAvoidScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rbx+28h]
    vdivss  xmm0, xmm0, xmm8; X
  }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm { vcomiss xmm6, xmm0 }
  if ( v75 | v76 )
LABEL_22:
    result = 1;
  else
LABEL_23:
    result = 0;
  __asm
  {
    vmovaps xmm15, [rsp+0C8h+var_88]
    vmovaps xmm14, [rsp+0C8h+var_78]
    vmovaps xmm13, [rsp+0C8h+var_68]
    vmovaps xmm9, [rsp+0C8h+var_58]
    vmovaps xmm8, [rsp+0C8h+var_48]
    vmovaps xmm7, [rsp+0C8h+var_38]
    vmovaps xmm6, [rsp+0C8h+var_28]
  }
  return result;
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

void __fastcall GTurretSP::SetDefaultDropPitchVirtual(GTurretSP *this, gentity_s *self, double pitch)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = self;
  __asm { vmovaps xmm6, xmm2 }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 716, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( (this->m_data.flags & 0x40000) == 0 )
    __asm { vmovss  dword ptr [rbx+58h], xmm6 }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  const char *szScript; 
  char *WeaponName; 
  WeaponSFXPackage *sfxPackage; 
  GConfigStrings *v11; 
  float out[4]; 
  char output[512]; 
  char v25; 

  __asm { vmovaps [rsp+278h+var_28], xmm6 }
  _RBX = this;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.cpp", 121, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &self->s);
  _RSI = BG_WeaponDef(WeaponForEntity, 0);
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  szScript = _RSI->szScript;
  if ( *szScript && !*(&GameScriptData::ms_gScriptData[1].ai_asm_getgenerichandler + 3 * WeaponForEntity->weaponIdx) )
  {
    WeaponName = BG_GetWeaponName(WeaponForEntity, output, 0x200u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144361880, 527i64, WeaponName, szScript);
  }
  *(_QWORD *)&_RBX->m_dataSP.suppressTime = 0i64;
  *(_QWORD *)&_RBX->m_dataSP.aiSpread = 0i64;
  *(_QWORD *)&_RBX->m_dataSP.originError.y = 0i64;
  *(_QWORD *)_RBX->m_dataSP.anglesError.v = 0i64;
  *(_QWORD *)&_RBX->m_dataSP.anglesError.z = 0i64;
  *(_QWORD *)&_RBX->m_dataSP.lastCanShootTime = 0i64;
  *(_QWORD *)&_RBX->m_dataSP.lastCanShootLocalPos.y = 0i64;
  *(_DWORD *)&_RBX->m_dataSP.lastCanShootGroundEntNum = 0;
  _RBX->m_data.flags = 32772;
  _RBX->m_data.eTeam = TEAM_FOUR;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  sfxPackage = _RSI->sfxPackage;
  v11 = GConfigStrings::ms_gConfigStrings;
  if ( sfxPackage )
  {
    if ( sfxPackage->sounds->fireLoopSoundPlayer.name )
    {
      _RBX->m_data.fireLoopSndPlayer = ((__int64 (__fastcall *)(GConfigStrings *))GConfigStrings::ms_gConfigStrings->GetSoundAliasIndex)(GConfigStrings::ms_gConfigStrings);
      sfxPackage = _RSI->sfxPackage;
    }
    if ( sfxPackage && sfxPackage->sounds->fireStopSoundPlayer.name )
      _RBX->m_data.stopSndPlayer = ((__int64 (__fastcall *)(GConfigStrings *))v11->GetSoundAliasIndex)(v11);
  }
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x3CCu, (const char *)&queryFormat.fmt + 3, out) )
    __asm { vmovss  xmm1, [rsp+278h+out] }
  else
    __asm { vmovss  xmm1, dword ptr [rsi+0C88h] }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcmpltss xmm0, xmm1, xmm6
    vblendvps xmm1, xmm1, xmm6, xmm0
    vmulss  xmm0, xmm1, cs:__real@447a0000
    vmovss  [rsp+278h+out], xmm1
    vaddss  xmm1, xmm0, cs:__real@3f000000
    vcvttss2si eax, xmm1
  }
  _RBX->m_dataSP.suppressTime = _EAX;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x2Cu, "1", &_RBX->m_dataSP.aiSpread) )
  {
    __asm { vmovss  xmm0, dword ptr [rbx+108h] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0C68h]
      vmovss  dword ptr [rbx+108h], xmm0
    }
  }
  __asm { vcomiss xmm0, xmm6 }
  _R11 = &v25;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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

