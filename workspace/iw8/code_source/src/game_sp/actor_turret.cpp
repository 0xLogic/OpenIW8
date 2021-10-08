/*
==============
AIActorInterface::StopUseTurret
==============
*/

void __fastcall AIActorInterface::StopUseTurret(AIActorInterface *this)
{
  ?StopUseTurret@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Turret_Suspend
==============
*/

void __fastcall AIScriptedInterface::Turret_Suspend(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?Turret_Suspend@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::Turret_Think
==============
*/

actor_think_result_t __fastcall AIScriptedInterface::Turret_Think(AIScriptedInterface *this)
{
  return ?Turret_Think@AIScriptedInterface@@QEBA?AW4actor_think_result_t@@XZ(this);
}

/*
==============
AIActorInterface::DetachTurret
==============
*/

void __fastcall AIActorInterface::DetachTurret(AIActorInterface *this)
{
  ?DetachTurret@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Turret_Touch
==============
*/

void __fastcall AIScriptedInterface::Turret_Touch(AIScriptedInterface *this, gentity_s *pOther)
{
  ?Turret_Touch@AIScriptedInterface@@QEBAXPEAUgentity_s@@@Z(this, pOther);
}

/*
==============
AIScriptedInterface::Turret_Pain
==============
*/

void __fastcall AIScriptedInterface::Turret_Pain(AIScriptedInterface *this, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc)
{
  ?Turret_Pain@AIScriptedInterface@@QEBAXPEAUgentity_s@@HAEBTvec3_t@@H1W4hitLocation_t@@@Z(this, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc);
}

/*
==============
AIScriptedInterface::Turret_Finish
==============
*/

void __fastcall AIScriptedInterface::Turret_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  ?Turret_Finish@AIScriptedInterface@@QEBAXW4ai_state_t@@@Z(this, eNextState);
}

/*
==============
AIScriptedInterface::Turret_Start
==============
*/

bool __fastcall AIScriptedInterface::Turret_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  return ?Turret_Start@AIScriptedInterface@@QEBA_NW4ai_state_t@@@Z(this, ePrevState);
}

/*
==============
AIActorInterface::UseTurret
==============
*/

int __fastcall AIActorInterface::UseTurret(AIActorInterface *this, gentity_s *pTurret)
{
  return ?UseTurret@AIActorInterface@@UEBAHPEAUgentity_s@@@Z(this, pTurret);
}

/*
==============
AIActorInterface::DetachTurret
==============
*/
void AIActorInterface::DetachTurret(AIActorInterface *this)
{
  gentity_s *pTurret; 
  __int64 v3; 
  int IsLinkedTo; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  __int64 v11; 
  const scrContext_t *v12; 
  EntityTagInfo *tagInfo; 
  GTurret *Turret; 
  __int64 v15; 
  __int64 v16; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 102, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !AICommonInterface::IsUsingTurret(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 104, ASSERT_TYPE_ASSERT, "(IsUsingTurret())", (const char *)&queryFormat, "IsUsingTurret()") )
    __debugbreak();
  pTurret = this->m_pAI->turret.pTurret;
  if ( !pTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 107, ASSERT_TYPE_ASSERT, "(pTurret)", (const char *)&queryFormat, "pTurret") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v3 = pTurret - g_entities;
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v15) = pTurret - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, 2048) )
      __debugbreak();
  }
  v3 = (__int16)v3;
  if ( (unsigned int)(__int16)v3 >= 0x800 )
  {
    LODWORD(v16) = 2048;
    LODWORD(v15) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 108, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( pTurret ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( pTurret ) )") )
    __debugbreak();
  if ( !pTurret->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 110, ASSERT_TYPE_ASSERT, "(pTurret->active)", (const char *)&queryFormat, "pTurret->active") )
    __debugbreak();
  IsLinkedTo = G_EntIsLinkedTo(pTurret, this->m_pAI->ent);
  G_Turret_DeactivateTurret(pTurret);
  number = pTurret->r.ownerNum.number;
  if ( !number )
    goto LABEL_78;
  v6 = number;
  v7 = number - 1;
  if ( v7 >= 0x800 )
  {
    LODWORD(v16) = 2048;
    LODWORD(v15) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v8 = v6 - 1;
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] )
  {
    LODWORD(v16) = pTurret->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v16) )
      __debugbreak();
  }
  v9 = pTurret->r.ownerNum.number;
  if ( !v9 )
    goto LABEL_78;
  if ( (unsigned int)v9 - 1 >= 0x7FF )
  {
    LODWORD(v16) = 2047;
    LODWORD(v15) = v9 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v10 = pTurret->r.ownerNum.number;
  if ( (unsigned int)(v10 - 1) >= 0x800 )
  {
    LODWORD(v16) = 2048;
    LODWORD(v15) = v10 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v11 = v10 - 1;
  if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v11] )
  {
    LODWORD(v16) = pTurret->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v16) )
      __debugbreak();
  }
  if ( &g_entities[pTurret->r.ownerNum.number - 1] != this->m_pAI->ent )
  {
LABEL_78:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 116, ASSERT_TYPE_ASSERT, "(pTurret->r.ownerNum.isDefined() && (pTurret->r.ownerNum.ent() == m_pAI->ent))", (const char *)&queryFormat, "pTurret->r.ownerNum.isDefined() && (pTurret->r.ownerNum.ent() == m_pAI->ent)") )
      __debugbreak();
  }
  EntHandle::setEnt(&pTurret->r.ownerNum, NULL);
  v12 = ScriptContext_Server();
  if ( Scr_IsSystemActive(v12, 1u) )
    GScr_Notify(pTurret, scr_const.turretownerchange, 0);
  if ( AICommonInterface::IsUsingTurret(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 123, ASSERT_TYPE_ASSERT, "(!IsUsingTurret())", (const char *)&queryFormat, "!IsUsingTurret()") )
    __debugbreak();
  if ( IsLinkedTo )
  {
    tagInfo = this->m_pAI->ent->tagInfo;
    if ( tagInfo )
      G_EntLinkTo(pTurret, tagInfo->parent, tagInfo->name, 0, NULL);
    else
      G_EntUnlink(pTurret);
  }
  if ( (_BYTE)GTurret::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.h", 76, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  Turret = GTurret::GetTurret(&pTurret->turretHandle);
  Turret->m_data.flags &= ~0x200000u;
}

/*
==============
AIActorInterface::StopUseTurret
==============
*/
void AIActorInterface::StopUseTurret(AIActorInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 401, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 402, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( AICommonInterface::IsUsingTurret(this) )
    this->DetachTurret(this);
  this->m_pAI->turret.pTurret = NULL;
}

/*
==============
AIScriptedInterface::Turret_Finish
==============
*/
void AIScriptedInterface::Turret_Finish(AIScriptedInterface *this, ai_state_t eNextState)
{
  sentient_s *sentient; 

  if ( AICommonInterface::IsUsingTurret(this) )
  {
    this->DetachTurret(this);
    sentient = this->m_pAI->sentient;
    if ( sentient->pClaimedNode )
      Path_RelinquishNodeNow(sentient);
    if ( eNextState == AIS_DEATH )
      this->m_pAI->bDropWeapon = 0;
  }
}

/*
==============
AIScriptedInterface::Turret_Pain
==============
*/
void AIScriptedInterface::Turret_Pain(AIScriptedInterface *this, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint)
{
  sentient_s *sentient; 
  sentient_s *v7; 
  bool v8; 
  unsigned int v12; 
  unsigned __int64 eTeam; 
  GTurret *Turret; 
  int flags; 
  GTurretSP *TurretSP; 
  __int64 v17; 
  bitarray<224> result; 

  if ( pAttacker->sentient && AICommonInterface::IsUsingTurret(this) )
  {
    sentient = pAttacker->sentient;
    v7 = this->m_pAI->sentient;
    if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 259, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
      __debugbreak();
    if ( level.teammode == TEAMMODE_FFA )
    {
      v8 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
      else
        _RAX = Com_TeamsMP_GetAllTeamFlags();
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovsd  xmm1, qword ptr [rax+10h]
      }
      v12 = _RAX->array[6] & 0xFFEFFFFF;
      __asm
      {
        vmovups xmmword ptr [rsp+98h+result.array], xmm0
        vmovsd  qword ptr [rsp+98h+result.array+10h], xmm1
      }
      if ( v8 )
        result.array[0] &= ~0x8000000u;
      result.array[6] = v12 & 0xFF9FFFFF;
    }
    else
    {
      Com_Teams_GetEnemyTeamFlags(&result, v7->eTeam);
    }
    eTeam = (unsigned int)sentient->eTeam;
    if ( (unsigned int)eTeam >= 0xE0 )
    {
      LODWORD(v17) = sentient->eTeam;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, 224) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (eTeam & 0x1F)) & result.array[eTeam >> 5]) != 0 )
    {
      if ( !this->m_pAI->turret.pTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 351, ASSERT_TYPE_ASSERT, "( m_pAI->turret.pTurret )", (const char *)&queryFormat, "m_pAI->turret.pTurret") )
        __debugbreak();
      Turret = GTurret::GetTurret(&this->m_pAI->turret.pTurret->turretHandle);
      flags = Turret->m_data.flags;
      if ( (flags & 0x1000000) == 0 )
      {
        if ( (flags & 0x20000) != 0 )
        {
          this->StopUseTurret(this);
        }
        else
        {
          Turret->m_data.flags = flags | 0x20000;
          TurretSP = GTurretSP::GetTurretSP(&this->m_pAI->turret.pTurret->turretHandle);
          SentientHandle::setSentient(&TurretSP->m_dataSP.detachSentient, pAttacker->sentient);
        }
      }
    }
  }
}

/*
==============
AIScriptedInterface::Turret_Start
==============
*/
char AIScriptedInterface::Turret_Start(AIScriptedInterface *this, ai_state_t ePrevState)
{
  gentity_s *pTurret; 
  __int64 v5; 
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  const scrContext_t *v10; 
  GTurret *Turret; 
  bool v12; 
  GTurretSP *TurretSP; 
  __int64 v15; 
  __int64 v16; 
  int v17; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 31, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 32, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  pTurret = this->m_pAI->turret.pTurret;
  if ( !pTurret )
    return 0;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = pTurret - g_entities;
  if ( (unsigned int)v5 >= 0x800 )
  {
    v17 = 2048;
    LODWORD(v15) = pTurret - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  v5 = (__int16)v5;
  if ( (unsigned int)(__int16)v5 >= 0x800 )
  {
    LODWORD(v16) = 2048;
    LODWORD(v15) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 35, ASSERT_TYPE_ASSERT, "(!pTurret || G_IsEntityInUse( G_GetEntityIndex( pTurret ) ))", (const char *)&queryFormat, "!pTurret || G_IsEntityInUse( G_GetEntityIndex( pTurret ) )") )
    __debugbreak();
  if ( pTurret->active )
    return 0;
  if ( AICommonInterface::IsUsingTurret(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 40, ASSERT_TYPE_ASSERT, "(!IsUsingTurret())", (const char *)&queryFormat, "!IsUsingTurret()") )
    __debugbreak();
  pTurret->active = 1;
  number = pTurret->r.ownerNum.number;
  if ( number )
  {
    v7 = number;
    v8 = number - 1;
    if ( v8 >= 0x800 )
    {
      LODWORD(v16) = 2048;
      LODWORD(v15) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v9 = v7 - 1;
    if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v9] )
    {
      LODWORD(v16) = pTurret->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v16) )
        __debugbreak();
    }
    if ( pTurret->r.ownerNum.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 44, ASSERT_TYPE_ASSERT, "(!pTurret->r.ownerNum.isDefined())", (const char *)&queryFormat, "!pTurret->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  EntHandle::setEnt(&pTurret->r.ownerNum, this->m_pAI->ent);
  v10 = ScriptContext_Server();
  if ( Scr_IsSystemActive(v10, 1u) )
    GScr_Notify(pTurret, scr_const.turretownerchange, 0);
  if ( !AICommonInterface::IsUsingTurret(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 51, ASSERT_TYPE_ASSERT, "(IsUsingTurret())", (const char *)&queryFormat, "IsUsingTurret()") )
    __debugbreak();
  G_Turret_ClearTargetEnt(pTurret);
  Turret = GTurret::GetTurret(&pTurret->turretHandle);
  Turret->m_data.flags &= 0xFFF7FF9F;
  Turret->m_data.flags |= 0x1140000u;
  Turret->m_data.arcmin.v[1] = Turret->m_data.initialYawmin;
  Turret->m_data.arcmax.v[1] = Turret->m_data.initialYawmax;
  v12 = (Turret->m_data.flags & 0x200000) == 0;
  Turret->m_data.startUseTime = level.time;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 68, ASSERT_TYPE_ASSERT, "(!(turretData->flags & TURRET_PITCH_CAP))", (const char *)&queryFormat, "!(turretData->flags & TURRET_PITCH_CAP)") )
    __debugbreak();
  AIScriptedInterface::CanAttackAll(this);
  if ( ePrevState != AIS_PAIN )
  {
    Turret->m_data.flags &= ~0x20000u;
    TurretSP = GTurretSP::GetTurretSP(&pTurret->turretHandle);
    SentientHandle::setSentient(&TurretSP->m_dataSP.detachSentient, NULL);
  }
  this->ClearKeepClaimedNode(this);
  Sentient_ClaimNode(this->m_pAI->sentient, NULL);
  this->ClearPath(this);
  return 1;
}

/*
==============
AIScriptedInterface::Turret_Suspend
==============
*/
void AIScriptedInterface::Turret_Suspend(AIScriptedInterface *this, ai_state_t eNextState)
{
  if ( AICommonInterface::IsUsingTurret(this) )
    this->DetachTurret(this);
}

/*
==============
AIScriptedInterface::Turret_Think
==============
*/
__int64 AIScriptedInterface::Turret_Think(AIScriptedInterface *this)
{
  gentity_s *pTurret; 
  __int64 v3; 
  GTurret *Turret; 
  unsigned int v6; 
  GTurretState state; 
  AIScriptedInterface_vtbl *v8; 
  AIScriptedInterface *v9; 
  const char *v10; 
  GameScriptData *v11; 
  gentity_s *v12; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  char *WeaponName; 
  const pathnode_t *v16; 
  pathnode_t *v17; 
  __int64 v20; 
  __int64 v21; 
  char output[1032]; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Actor_Turret_Think");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 203, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 204, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  this->ClearPath(this);
  this->ClearPileUp(this);
  if ( !AICommonInterface::IsUsingTurret(this) )
  {
    Com_PrintWarning(18, "WARNING: Actor_Turret_Think() aborting turret behavior since we don't think we're using the turret anymore, at the beginning.\n");
LABEL_42:
    this->StopUseTurret(this);
    v6 = 1;
    AIScriptedInterface::SetState(this, AIS_BEHAVE);
    goto LABEL_80;
  }
  pTurret = this->m_pAI->turret.pTurret;
  if ( !pTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 219, ASSERT_TYPE_ASSERT, "(pTurret)", (const char *)&queryFormat, "pTurret") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v3 = pTurret - g_entities;
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v20) = pTurret - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, 2048) )
      __debugbreak();
  }
  v3 = (__int16)v3;
  if ( (unsigned int)(__int16)v3 >= 0x800 )
  {
    LODWORD(v21) = 2048;
    LODWORD(v20) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 220, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( pTurret ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( pTurret ) )") )
    __debugbreak();
  if ( (_BYTE)GTurret::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.h", 76, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  Turret = GTurret::GetTurret(&pTurret->turretHandle);
  if ( !AICommonInterface::KnowAboutEnemy(this) )
    this->m_pAI->useEnemyGoal = 0;
  if ( !AIScriptedInterface::KeepClaimedNode(this) )
    AIScriptedInterface::UpdateGoalPos(this);
  if ( (Turret->m_data.flags & 0x800000) == 0 )
  {
    __asm { vmovss  xmm3, cs:__real@42b80000; buffer }
    if ( !AICommonInterface::PointNearGoal(this, &pTurret->r.currentOrigin, &this->m_pAI->codeGoal, *(float *)&_XMM3) )
    {
      Com_PrintWarning(18, "WARNING: Actor_Turret_Think() aborting turret behavior since we are not near our goal anymore.\n");
      goto LABEL_42;
    }
  }
  if ( (Turret->m_data.flags & 0x80000) != 0 )
  {
    Com_PrintWarning(18, "WARNING: Actor_Turret_Think() aborting turret behavior since we don't think we're not linked to the turret anymore.\n");
    goto LABEL_42;
  }
  AIScriptedInterface::PreThink(this);
  state = Turret->m_data.state;
  if ( state )
  {
    if ( state == INITIALIZING )
    {
      v8 = this->__vftable;
      v9 = this;
      if ( (Turret->m_data.flags & 4) != 0 )
        v10 = "auto_turret_firing_head";
      else
        v10 = "manual_turret_firing_head";
    }
    else
    {
      if ( state != SEARCHING )
      {
        LODWORD(v20) = Turret->m_data.state;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_turret.cpp", 283, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled case %i", v20) )
          __debugbreak();
        goto LABEL_57;
      }
      v8 = this->__vftable;
      v9 = this;
      if ( (Turret->m_data.flags & 4) != 0 )
        v10 = "auto_turret_firing_feet";
      else
        v10 = "manual_turret_firing_feet";
    }
  }
  else
  {
    v8 = this->__vftable;
    v9 = this;
    v10 = "auto_turret_idle";
    if ( (Turret->m_data.flags & 4) == 0 )
      v10 = "manual_turret_idle";
  }
  v8->SetDebugInfo(v9, v10);
LABEL_57:
  if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v11 = GameScriptData::ms_gScriptData;
  v12 = this->m_pAI->turret.pTurret;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(Instance, v12->s.weaponHandle);
  v6 = 1;
  if ( !*(&v11[1].ai_asm_getgenerichandler + 3 * Weapon->weaponIdx) )
  {
    WeaponName = BG_GetWeaponName(Weapon, output, 0x400u);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E58950, 622i64, WeaponName);
  }
  v16 = Sentient_NearestNode(this->m_pAI->sentient);
  v17 = (pathnode_t *)v16;
  if ( v16 && Path_CanClaimNode(v16, this->m_pAI->sentient) )
    Path_ForceClaimNode(v17, this->m_pAI->sentient);
  __asm { vmovss  xmm1, cs:__real@42800000; radius }
  Sentient_BanNodesInDirAndRadius(this->m_pAI->sentient, *(float *)&_XMM1);
  if ( AICommonInterface::IsUsingTurret(this) )
  {
    this->m_pAI->bUseGoalWeight = 0;
    AIScriptedInterface::PostThink(this);
    v6 = 0;
  }
  else
  {
    Com_PrintWarning(18, "WARNING: Actor_Turret_Think() aborting turret behavior since we don't think we're using the turret anymore, at the end.\n");
    this->StopUseTurret(this);
    AIScriptedInterface::SetState(this, AIS_BEHAVE);
  }
LABEL_80:
  Sys_ProfEndNamedEvent();
  return v6;
}

/*
==============
AIScriptedInterface::Turret_Touch
==============
*/
void AIScriptedInterface::Turret_Touch(AIScriptedInterface *this, gentity_s *pOther, __int64 a3)
{
  sentient_s *sentient; 

  sentient = pOther->sentient;
  if ( sentient )
  {
    LOBYTE(a3) = 24;
    this->GetPerfectInfo(this, sentient, a3);
  }
}

/*
==============
AIActorInterface::UseTurret
==============
*/
__int64 AIActorInterface::UseTurret(AIActorInterface *this, gentity_s *pTurret)
{
  bool CanUse; 
  actor_s *m_pAI; 

  CanUse = G_TurretSP_ActorCanUse(this->m_pAI, pTurret);
  m_pAI = this->m_pAI;
  if ( CanUse )
  {
    m_pAI->turret.pTurret = pTurret;
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 138, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    pTurret->flags.m_flags[1] |= 0x10u;
    return 1i64;
  }
  else
  {
    m_pAI->turret.pTurret = NULL;
    return 0i64;
  }
}

