/*
==============
AIActorInterface::EntityIsPlayer
==============
*/

bool __fastcall AIActorInterface::EntityIsPlayer(const gentity_s *ent)
{
  return ?EntityIsPlayer@AIActorInterface@@SA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_ActorSP_PointCouldSeeSpawn
==============
*/

int __fastcall G_ActorSP_PointCouldSeeSpawn(const vec3_t *vEyePos, const vec3_t *vSpawnPos, int iIgnoreEnt1, int iIgnoreEnt2)
{
  return ?G_ActorSP_PointCouldSeeSpawn@@YAHAEBTvec3_t@@0HH@Z(vEyePos, vSpawnPos, iIgnoreEnt1, iIgnoreEnt2);
}

/*
==============
G_ActorSP_SpawnActorFromAitype
==============
*/

gentity_s *__fastcall G_ActorSP_SpawnActorFromAitype(const scr_string_t aitypeName, const vec3_t *origin, const vec3_t *angles, enumForceSpawn forceSpawn, const int spawnFlags)
{
  return ?G_ActorSP_SpawnActorFromAitype@@YAPEAUgentity_s@@W4scr_string_t@@AEBTvec3_t@@1W4enumForceSpawn@@H@Z(aitypeName, origin, angles, forceSpawn, spawnFlags);
}

/*
==============
G_ActorSP_SpawnActorFromEnt
==============
*/

gentity_s *__fastcall G_ActorSP_SpawnActorFromEnt(gentity_s *ent, const scr_string_t targetname, enumForceSpawn forceSpawn, int dontShareEnemyInfo)
{
  return ?G_ActorSP_SpawnActorFromEnt@@YAPEAUgentity_s@@PEAU1@W4scr_string_t@@W4enumForceSpawn@@H@Z(ent, targetname, forceSpawn, dontShareEnemyInfo);
}

/*
==============
G_DropActorSpawnersToFloor
==============
*/

void G_DropActorSpawnersToFloor(void)
{
  ?G_DropActorSpawnersToFloor@@YAXXZ();
}

/*
==============
G_ActorSP_SpawnActorFromSpawner
==============
*/

gentity_s *__fastcall G_ActorSP_SpawnActorFromSpawner(spawner_t *spawner, const scr_string_t targetname, enumForceSpawn forceSpawn, int dontShareEnemyInfo)
{
  return ?G_ActorSP_SpawnActorFromSpawner@@YAPEAUgentity_s@@PEAUspawner_t@@W4scr_string_t@@W4enumForceSpawn@@H@Z(spawner, targetname, forceSpawn, dontShareEnemyInfo);
}

/*
==============
AIActorInterface::IsLightweight
==============
*/

int __fastcall AIActorInterface::IsLightweight(AIActorInterface *this)
{
  return ?IsLightweight@AIActorInterface@@QEBAHXZ(this);
}

/*
==============
InitDroneEntity
==============
*/

void __fastcall InitDroneEntity(gentity_s *ent)
{
  ?InitDroneEntity@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
SpawnDroneFromEnt
==============
*/

gentity_s *__fastcall SpawnDroneFromEnt(gentity_s *spawner, const scr_string_t targetname)
{
  return ?SpawnDroneFromEnt@@YAPEAUgentity_s@@PEAU1@W4scr_string_t@@@Z(spawner, targetname);
}

/*
==============
SpawnDroneFromSpawner
==============
*/

gentity_s *__fastcall SpawnDroneFromSpawner(spawner_t *spawner, const scr_string_t targetname)
{
  return ?SpawnDroneFromSpawner@@YAPEAUgentity_s@@PEAUspawner_t@@W4scr_string_t@@@Z(spawner, targetname);
}

/*
==============
SP_actor_spawner
==============
*/

int __fastcall SP_actor_spawner(gentity_s *pEnt)
{
  return ?SP_actor_spawner@@YAHPEAUgentity_s@@@Z(pEnt);
}

/*
==============
AIActorInterface::EntityIsPlayer
==============
*/
bool AIActorInterface::EntityIsPlayer(const gentity_s *ent)
{
  signed __int64 v2; 
  __int64 v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 515, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = ent - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v4) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  return G_IsEntityInUse((__int16)v2) && ent->s.eType == ET_PLAYER;
}

/*
==============
G_ActorSP_PointCouldSeeSpawn
==============
*/
__int64 G_ActorSP_PointCouldSeeSpawn(const vec3_t *vEyePos, const vec3_t *vSpawnPos, int iIgnoreEnt1, int iIgnoreEnt2)
{
  bool v7; 
  bool v8; 
  bool v9; 
  int v22; 
  float *i; 
  vec3_t end; 

  _RBP = vEyePos;
  v7 = Com_GameMode_SupportsFeature(WEAPON_READY);
  v8 = !v7;
  if ( !v7 )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 49, ASSERT_TYPE_ASSERT, "(BG_ActorSystemEnabled())", "%s\n\tUsing FOG_FRACTION_OPAQUE_SP below, must be an SP mode", "BG_ActorSystemEnabled()");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm3, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbp+4]
    vsubss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm4, xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm2, cs:__real@3f2f826f
    vcomiss xmm1, cs:?level@@3Ulevel_locals_t@@A.fFogOpaqueDistSqrd; level_locals_t level
  }
  if ( !v8 )
    return 0i64;
  v22 = 0;
  for ( i = &g_vSpawnCheckPoints[0].v[1]; ; i += 3 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?actorBox@@3UBounds@@B.halfSize; Bounds const actorBox
      vmulss  xmm3, xmm0, dword ptr [rdi-4]
      vmovss  xmm1, dword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
      vaddss  xmm2, xmm1, dword ptr [rsi]
      vmovss  xmm1, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm3, xmm1, dword ptr [rdi]
      vmovss  dword ptr [rsp+88h+end], xmm0
      vmovss  xmm0, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+4; Bounds const actorBox
      vaddss  xmm2, xmm0, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox
      vaddss  xmm1, xmm3, xmm2
      vmulss  xmm3, xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+88h+end+4], xmm1
      vmovss  xmm1, dword ptr cs:?actorBox@@3UBounds@@B.midPoint+8; Bounds const actorBox
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vaddss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rsp+88h+end+8], xmm0
    }
    if ( !PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, _RBP, &end, &bounds_origin, iIgnoreEnt1, iIgnoreEnt2, 6145) )
      break;
    if ( (unsigned int)++v22 >= 0xB )
      return 0i64;
  }
  return 1i64;
}

/*
==============
G_ActorSP_SpawnActorFromAitype
==============
*/
gentity_s *G_ActorSP_SpawnActorFromAitype(const scr_string_t aitypeName, const vec3_t *origin, const vec3_t *angles, enumForceSpawn forceSpawn, const int spawnFlags)
{
  const dvar_t *v5; 
  const char *v14; 
  gentity_s *v15; 
  const char *v19; 
  AIScriptedInterface *m_pAI; 
  char *fmt; 
  char *fmta; 
  __int64 v23; 
  AIWrapper v24; 
  vec3_t vEyePosOut; 

  v5 = DVARBOOL_ai_disableSpawn;
  _RSI = origin;
  if ( !DVARBOOL_ai_disableSpawn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_disableSpawn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    Com_DPrintf(18, "Attempted spawn prevented by ai_disableSpawn.\n");
    return 0i64;
  }
  else
  {
    if ( forceSpawn || level.loading )
      goto LABEL_19;
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 269, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
      __debugbreak();
    Sentient_GetEyePosition(g_entities->sentient, &vEyePosOut);
    if ( !G_ActorSP_PointCouldSeeSpawn(&vEyePosOut, _RSI, g_entities->s.number, -1) )
    {
LABEL_19:
      v15 = G_Utils_SpawnEntity();
      Scr_SetString(&v15->classname, aitypeName);
      Scr_SetString(&v15->script_classname, aitypeName);
      G_SetOriginAndAngle(v15, _RSI, angles, 1, 1);
      v15->spawnflags = spawnFlags;
      if ( AIActorInterface::SpawnActor(v15) )
      {
        AIWrapper::AIWrapper(&v24, v15->actor);
        m_pAI = v24.m_pAI;
        if ( !v24.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 296, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        if ( AIScriptedInterface::InitSpawn(m_pAI, (v15->spawnflags & 8) != 0, (v15->spawnflags & 0x10) == 0) )
        {
          return v15;
        }
        else
        {
          G_FreeEntity(v15);
          return 0i64;
        }
      }
      else
      {
        __asm
        {
          vcvttss2si ebx, dword ptr [rsi+8]
          vcvttss2si edi, dword ptr [rsi+4]
          vcvttss2si esi, dword ptr [rsi]
        }
        v19 = SL_ConvertToString(aitypeName);
        LODWORD(v23) = _EBX;
        LODWORD(fmta) = _EDI;
        Com_DPrintf(18, "^3couldn't spawn aitype %s at (%i, %i, %i) because there are no free actors\n", v19, _ESI, fmta, v23);
        return 0i64;
      }
    }
    else
    {
      __asm
      {
        vcvttss2si ebx, dword ptr [rsi+8]
        vcvttss2si edi, dword ptr [rsi+4]
        vcvttss2si esi, dword ptr [rsi]
      }
      v14 = SL_ConvertToString(aitypeName);
      LODWORD(v23) = _EBX;
      LODWORD(fmt) = _EDI;
      Com_DPrintf(18, "^3couldn't spawn aitype %s at (%i, %i, %i) because player can see spawnpoint\n", v14, _ESI, fmt, v23);
      return 0i64;
    }
  }
}

/*
==============
G_ActorSP_SpawnActorFromEnt
==============
*/
gentity_s *G_ActorSP_SpawnActorFromEnt(gentity_s *ent, const scr_string_t targetname, enumForceSpawn forceSpawn, int dontShareEnemyInfo)
{
  const dvar_t *v4; 
  scr_string_t v10; 
  const char *v14; 
  gentity_s *v15; 
  scr_string_t v16; 
  const char *v20; 
  gentity_s *v21; 
  scr_string_t v22; 
  const char *v26; 
  AIScriptedInterface *m_pAI; 
  bool v28; 
  int count; 
  char *fmt; 
  __int64 v31; 
  AIWrapper v32; 
  vec3_t vEyePosOut; 

  v4 = DVARBOOL_ai_disableSpawn;
  _RBX = ent;
  if ( !DVARBOOL_ai_disableSpawn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_disableSpawn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    Com_DPrintf(18, "Attempted spawn prevented by ai_disableSpawn.\n");
    return 0i64;
  }
  else if ( _RBX->c.spawner.count )
  {
    if ( forceSpawn || level.loading )
      goto LABEL_27;
    if ( !G_IsEntityInUse(0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 131, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
      __debugbreak();
    v15 = g_entities;
    if ( g_entities->classname != scr_const.player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 76, ASSERT_TYPE_ASSERT, "(player->classname == scr_const.player)", (const char *)&queryFormat, "player->classname == scr_const.player") )
      __debugbreak();
    if ( !v15->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 77, ASSERT_TYPE_ASSERT, "(player->sentient)", (const char *)&queryFormat, "player->sentient") )
      __debugbreak();
    Sentient_GetEyePosition(v15->sentient, &vEyePosOut);
    if ( !G_ActorSP_PointCouldSeeSpawn(&vEyePosOut, &_RBX->r.currentOrigin, v15->s.number, _RBX->s.number) )
    {
LABEL_27:
      v21 = G_Utils_SpawnEntity();
      G_Spawn_DuplicateEntityFields(v21, _RBX);
      G_Spawn_DuplicateScriptFields(v21, _RBX);
      Scr_SetString(&v21->targetname, targetname);
      v21->spawnflags &= ~1u;
      if ( AIActorInterface::SpawnActor(v21) )
      {
        AIWrapper::AIWrapper(&v32, v21->actor);
        m_pAI = v32.m_pAI;
        if ( !v32.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 154, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        v28 = dontShareEnemyInfo || (_RBX->spawnflags & 0x10) == 0;
        if ( AIScriptedInterface::InitSpawn(m_pAI, (_RBX->spawnflags & 8) != 0, v28) )
        {
          GScr_AddEntity(v21);
          GScr_Notify(_RBX, scr_const.spawned, 1u);
          count = _RBX->c.spawner.count;
          if ( count > 0 )
            _RBX->c.spawner.count = count - 1;
          return v21;
        }
        else
        {
          G_FreeEntity(v21);
          return 0i64;
        }
      }
      else
      {
        v22 = _RBX->targetname;
        __asm
        {
          vcvttss2si edi, dword ptr [rbx+138h]
          vcvttss2si esi, dword ptr [rbx+134h]
          vcvttss2si ebp, dword ptr [rbx+130h]
        }
        if ( v22 )
          v26 = SL_ConvertToString(v22);
        else
          v26 = "<unnamed>";
        LODWORD(v31) = _EDI;
        LODWORD(fmt) = _ESI;
        Com_DPrintf(18, "^3couldn't spawn from %s at (%i, %i, %i) because there are no free actors\n", v26, _EBP, fmt, v31);
        return 0i64;
      }
    }
    else
    {
      v16 = _RBX->targetname;
      __asm
      {
        vcvttss2si edi, dword ptr [rbx+138h]
        vcvttss2si esi, dword ptr [rbx+134h]
        vcvttss2si ebp, dword ptr [rbx+130h]
      }
      if ( v16 )
        v20 = SL_ConvertToString(v16);
      else
        v20 = "<unnamed>";
      LODWORD(v31) = _EDI;
      LODWORD(fmt) = _ESI;
      Com_DPrintf(18, "^3couldn't spawn from %s at (%i, %i, %i) because player can see spawnpoint\n", v20, _EBP, fmt, v31);
      return 0i64;
    }
  }
  else
  {
    v10 = _RBX->targetname;
    __asm
    {
      vcvttss2si edi, dword ptr [rbx+138h]
      vcvttss2si esi, dword ptr [rbx+134h]
      vcvttss2si ebp, dword ptr [rbx+130h]
    }
    if ( v10 )
      v14 = SL_ConvertToString(v10);
    else
      v14 = "<unnamed>";
    LODWORD(v31) = _EDI;
    LODWORD(fmt) = _ESI;
    Com_DPrintf(18, "^3Warning: SpawnActor( %s ) at (%i, %i, %i) failed due to 0 count.\n", v14, _EBP, fmt, v31);
    return 0i64;
  }
}

/*
==============
G_ActorSP_SpawnActorFromSpawner
==============
*/
gentity_s *G_ActorSP_SpawnActorFromSpawner(spawner_t *spawner, const scr_string_t targetname, enumForceSpawn forceSpawn, int dontShareEnemyInfo)
{
  const dvar_t *v7; 
  const char *v9; 
  scr_string_t v10; 
  const char *v11; 
  gentity_s *v12; 
  char *v13; 
  scr_string_t v14; 
  const char *v15; 
  gentity_s *v16; 
  char *v17; 
  scr_string_t v18; 
  const char *v19; 
  AIScriptedInterface *m_pAI; 
  bool v21; 
  scrContext_t *v22; 
  AIWrapper v23; 
  vec3_t vEyePosOut; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ActorSP_SpawnActorFromSpawner");
  v7 = DVARBOOL_ai_disableSpawn;
  if ( !DVARBOOL_ai_disableSpawn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_disableSpawn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    Com_DPrintf(18, "Attempted spawn prevented by ai_disableSpawn.\n");
    Sys_ProfEndNamedEvent();
    return 0i64;
  }
  if ( !spawner->count )
  {
    v9 = vtos(&spawner->origin);
    v10 = spawner->spawner->targetname;
    if ( v10 )
      v11 = SL_ConvertToString(v10);
    else
      v11 = "<unnamed>";
    Com_DPrintf(18, "^3Warning: SpawnActor( %s ) at %s failed due to 0 count.\n", v11, v9);
    Sys_ProfEndNamedEvent();
    return 0i64;
  }
  if ( forceSpawn == CHECK_SPAWN && level.loading == LOADING_DONE )
  {
    if ( !G_IsEntityInUse(0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 203, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
      __debugbreak();
    v12 = g_entities;
    if ( g_entities->classname != scr_const.player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 88, ASSERT_TYPE_ASSERT, "(player->classname == scr_const.player)", (const char *)&queryFormat, "player->classname == scr_const.player") )
      __debugbreak();
    if ( !v12->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 89, ASSERT_TYPE_ASSERT, "(player->sentient)", (const char *)&queryFormat, "player->sentient") )
      __debugbreak();
    Sentient_GetEyePosition(v12->sentient, &vEyePosOut);
    if ( G_ActorSP_PointCouldSeeSpawn(&vEyePosOut, &spawner->origin, v12->s.number, -1) )
    {
      v13 = vtos(&spawner->origin);
      v14 = spawner->spawner->targetname;
      if ( v14 )
      {
        v15 = SL_ConvertToString(v14);
        Com_DPrintf(18, "^3couldn't spawn from %s at %s because player can see spawnpoint\n", v15, v13);
      }
      else
      {
        Com_DPrintf(18, "^3couldn't spawn from %s at %s because player can see spawnpoint\n", "<unnamed>", v13);
      }
LABEL_31:
      Sys_ProfEndNamedEvent();
      return 0i64;
    }
  }
  v16 = G_Utils_SpawnEntity();
  G_Spawner_DuplicateScriptFields(v16, spawner);
  Scr_SetString(&v16->classname, spawner->spawner->classname);
  G_SetOriginAndAngle(v16, &spawner->origin, &spawner->angles, 1, 1);
  v16->spawnflags &= ~0x20u;
  if ( !AIActorInterface::SpawnActor(v16) )
  {
    v17 = vtos(&spawner->origin);
    v18 = spawner->spawner->targetname;
    if ( v18 )
      v19 = SL_ConvertToString(v18);
    else
      v19 = "<unnamed>";
    Com_DPrintf(18, "^3couldn't spawn from %s at %s because there are no free actors\n", v19, v17);
    goto LABEL_31;
  }
  AIWrapper::AIWrapper(&v23, v16->actor);
  m_pAI = v23.m_pAI;
  if ( !v23.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 229, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v21 = dontShareEnemyInfo || (spawner->spawner->flags & 0x10) == 0;
  if ( AIScriptedInterface::InitSpawn(m_pAI, (spawner->spawner->flags & 8) != 0, v21) )
  {
    GScr_AddEntity(v16);
    v22 = ScriptContext_Server();
    Scr_NotifyNum(v22, spawner->number, ENTITY_CLASS_SPAWNER, scr_const.spawned, 1u, LOCAL_CLIENT_0);
    if ( spawner->count > 0 )
      --spawner->count;
    Sys_ProfEndNamedEvent();
    return v16;
  }
  else
  {
    G_FreeEntity(v16);
    Sys_ProfEndNamedEvent();
    return 0i64;
  }
}

/*
==============
G_DropActorSpawnersToFloor
==============
*/
void G_DropActorSpawnersToFloor()
{
  int v3; 
  __int64 v4; 
  __int64 v5; 
  const gentity_s *v6; 
  unsigned int Instance; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  int v20; 
  __int64 v23; 
  __int64 v24; 
  const gentity_s *v25; 
  unsigned int v26; 
  char *fmt; 
  __int64 v28; 
  double v29; 
  __int64 v30; 
  char v31[2048]; 

  memset_0(v31, 0, sizeof(v31));
  v3 = 0;
  if ( level.num_entities > 0 )
  {
    v4 = 0i64;
    v5 = 0i64;
    do
    {
      v6 = &level.gentities[v5];
      if ( (unsigned int)v3 >= 0x800 )
      {
        LODWORD(v30) = 2048;
        LODWORD(v28) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, v30) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v5].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v4] )
      {
        if ( Path_IsDynamicBlockingEntity(v6) )
        {
          Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v6);
          if ( Instance != -1 && G_PhysicsObject_IsPhysicsObjectShown(v6->s.number) )
          {
            v31[v4] = 1;
            Physics_RemoveInstanceFromWorld(PHYSICS_WORLD_ID_FIRST, Instance, 1);
          }
        }
      }
      ++v3;
      ++v4;
      ++v5;
    }
    while ( v3 < level.num_entities );
  }
  v8 = 0;
  if ( level.num_entities > 0 )
  {
    __asm { vmovaps [rsp+8A8h+var_38], xmm6 }
    v9 = 0i64;
    __asm { vmovaps [rsp+8A8h+var_48], xmm7 }
    v10 = 0i64;
    __asm { vmovaps [rsp+8A8h+var_58], xmm8 }
    do
    {
      _RBX = &level.gentities[v10];
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v30) = 2048;
        LODWORD(v28) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, v30) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v10].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v9] )
      {
        if ( _RBX->s.eType == ET_ACTOR_SPAWNER && (_RBX->spawnflags & 0x40) == 0 )
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rbx+130h]
            vmovss  xmm7, dword ptr [rbx+134h]
            vmovss  xmm8, dword ptr [rbx+138h]
          }
          if ( !AI_DropToFloor(_RBX) )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm8, xmm8
              vcvtss2sd xmm3, xmm6, xmm6
              vcvtss2sd xmm1, xmm7, xmm7
              vmovsd  [rsp+8A8h+var_880], xmm0
              vmovq   r9, xmm3
              vmovsd  [rsp+8A8h+fmt], xmm1
            }
            Com_Printf(18, "^3Spawner [%d] at (%g %g %g) is in solid\n", (unsigned int)_RBX->s.number, *(double *)&_XMM3, *(double *)&fmt, v29);
            _RBX->r.svFlags &= ~1u;
          }
        }
      }
      ++v8;
      ++v9;
      ++v10;
    }
    while ( v8 < level.num_entities );
    __asm { vmovaps xmm8, [rsp+8A8h+var_58] }
    v20 = 0;
    __asm
    {
      vmovaps xmm7, [rsp+8A8h+var_48]
      vmovaps xmm6, [rsp+8A8h+var_38]
    }
    if ( level.num_entities > 0 )
    {
      v23 = 0i64;
      v24 = 0i64;
      do
      {
        v25 = &level.gentities[v20];
        if ( (unsigned int)v20 >= 0x800 )
        {
          LODWORD(v30) = 2048;
          LODWORD(v28) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v28, v30) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v24].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v23] && v31[v23] )
        {
          v26 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v25);
          if ( v26 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 466, ASSERT_TYPE_ASSERT, "(physicsInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsInstanceId != PHYSICSINSTANCEID_INVALID") )
            __debugbreak();
          Physics_AddInstanceToWorld(PHYSICS_WORLD_ID_FIRST, v26, 1, 1);
        }
        ++v20;
        ++v23;
        ++v24;
      }
      while ( v20 < level.num_entities );
    }
  }
}

/*
==============
InitDroneEntity
==============
*/
void InitDroneEntity(gentity_s *ent)
{
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 397, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RBX->r.svFlags &= ~4u;
  _RBX->r.svFlags |= 2u;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
    vmovups xmmword ptr [rbx+100h], xmm0
    vmovsd  xmm1, qword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
    vmovsd  qword ptr [rbx+110h], xmm1
  }
  _RBX->flags.m_flags[0] |= 0x80000200;
  _RBX->s.un.scriptMoverType = 1;
  G_PhysicsCharacterProxy_AddCharacter(_RBX);
}

/*
==============
AIActorInterface::IsLightweight
==============
*/
__int64 AIActorInterface::IsLightweight(AIActorInterface *this)
{
  return 0i64;
}

/*
==============
SP_actor_spawner
==============
*/
__int64 SP_actor_spawner(gentity_s *pEnt)
{
  bool v2; 
  int v3; 
  char *(*spawnVars)[2]; 
  char *v5; 
  __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 

  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 482, ASSERT_TYPE_ASSERT, "(level.spawnVar.spawnVarsValid)", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  if ( !pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_spawner.cpp", 98, ASSERT_TYPE_ASSERT, "(pEnt)", (const char *)&queryFormat, "pEnt") )
    __debugbreak();
  v2 = pEnt->c.spawner.count == 0;
  pEnt->s.eType = ET_ACTOR_SPAWNER;
  pEnt->clipmask = 0;
  pEnt->r.svFlags = 1;
  pEnt->c.item[0].clipAmmoCount[0] = -1;
  pEnt->c.item[0].ammoCount = 0;
  if ( v2 )
  {
    v3 = 0;
    pEnt->c.spawner.count = 1;
    if ( level.spawnVar.numSpawnVars > 0 )
    {
      spawnVars = level.spawnVar.spawnVars;
      do
      {
        v5 = (*spawnVars)[0];
        v6 = 0x7FFFFFFFi64;
        v7 = "count";
        if ( !(*spawnVars)[0] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v8 = v5 - "count";
        while ( 1 )
        {
          v9 = (unsigned __int8)v7[v8];
          v10 = v6;
          v11 = *(unsigned __int8 *)v7++;
          --v6;
          if ( !v10 )
          {
LABEL_22:
            pEnt->c.spawner.count = 0;
            return 1i64;
          }
          if ( v9 != v11 )
          {
            v12 = v9 + 32;
            if ( (unsigned int)(v9 - 65) > 0x19 )
              v12 = v9;
            v9 = v12;
            v13 = v11 + 32;
            if ( (unsigned int)(v11 - 65) > 0x19 )
              v13 = v11;
            if ( v9 != v13 )
              break;
          }
          if ( !v9 )
            goto LABEL_22;
        }
        ++v3;
        ++spawnVars;
      }
      while ( v3 < level.spawnVar.numSpawnVars );
    }
  }
  return 1i64;
}

/*
==============
SpawnDroneFromEnt
==============
*/
gentity_s *SpawnDroneFromEnt(gentity_s *spawner, const scr_string_t targetname)
{
  gentity_s *v4; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "SpawnDroneFromEnt");
  v4 = G_Utils_SpawnEntity();
  G_Spawn_DuplicateEntityFields(v4, spawner);
  G_Spawn_DuplicateScriptFields(v4, spawner);
  Scr_SetString(&v4->targetname, targetname);
  v4->spawnflags &= ~1u;
  v4->s.eType = ET_SCRIPTMOVER;
  v4->handler = 8;
  InitDroneEntity(v4);
  G_SetOriginAndAngle(v4, &v4->r.currentOrigin, &v4->r.currentAngles, 1, 1);
  AIActorInterface::RunAITypeScript(v4);
  Scr_SetString(&v4->classname, scr_const.script_model);
  Scr_SetString(&v4->script_classname, scr_const.script_model);
  if ( AI_DropToFloor(v4) )
    G_SetOrigin(v4, &v4->r.currentOrigin, 1, 1);
  SV_LinkEntity(v4);
  spawner->c.item[0].clipAmmoCount[0] = level.time;
  Sys_ProfEndNamedEvent();
  return v4;
}

/*
==============
SpawnDroneFromSpawner
==============
*/
gentity_s *SpawnDroneFromSpawner(spawner_t *spawner, const scr_string_t targetname)
{
  gentity_s *v4; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "SpawnDroneFromSpawner");
  v4 = G_Utils_SpawnEntity();
  G_Spawner_DuplicateScriptFields(v4, spawner);
  Scr_SetString(&v4->targetname, targetname);
  Scr_SetString(&v4->classname, spawner->spawner->classname);
  G_SetOriginAndAngle(v4, &spawner->origin, &spawner->angles, 1, 1);
  v4->spawnflags &= ~0x20u;
  v4->s.eType = ET_SCRIPTMOVER;
  v4->handler = 8;
  InitDroneEntity(v4);
  AIActorInterface::RunAITypeScript(v4);
  Scr_SetString(&v4->classname, scr_const.script_model);
  Scr_SetString(&v4->script_classname, scr_const.script_model);
  if ( AI_DropToFloor(v4) )
    G_SetOrigin(v4, &v4->r.currentOrigin, 1, 1);
  SV_LinkEntity(v4);
  spawner->timestamp = level.time;
  Sys_ProfEndNamedEvent();
  return v4;
}

