/*
==============
LerpEntityStatePrimaryLightPack
==============
*/

void __fastcall LerpEntityStatePrimaryLightPack(const LerpEntityStatePrimaryLightUnpacked *in, LerpEntityStatePrimaryLightPacked *out)
{
  ?LerpEntityStatePrimaryLightPack@@YAXPEBULerpEntityStatePrimaryLightUnpacked@@PEAULerpEntityStatePrimaryLightPacked@@@Z(in, out);
}

/*
==============
G_Spawn_reflection_probe
==============
*/

void __fastcall G_Spawn_reflection_probe(gentity_s *self)
{
  ?G_Spawn_reflection_probe@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_ScriptItem_Spawn
==============
*/

void __fastcall G_ScriptItem_Spawn(gentity_s *mSelf)
{
  ?G_ScriptItem_Spawn@@YAXPEAUgentity_s@@@Z(mSelf);
}

/*
==============
G_Spawn_light
==============
*/

void __fastcall G_Spawn_light(gentity_s *self)
{
  ?G_Spawn_light@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_IsAffector
==============
*/

bool __fastcall G_IsAffector(const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *const eFlags)
{
  return ?G_IsAffector@@YA_NQEBV?$GameModeFlagContainer@W4EntityStateFlagsCommon@@W4EntityStateFlagsSP@@W4EntityStateFlagsMP@@$0CA@@@@Z(eFlags);
}

/*
==============
G_SetAffector
==============
*/

void __fastcall G_SetAffector(gentity_s *ent, const EntityStateFlagsMP flag)
{
  ?G_SetAffector@@YAXPEAUgentity_s@@W4EntityStateFlagsMP@@@Z(ent, flag);
}

/*
==============
G_Spawn_info_notnull
==============
*/

void __fastcall G_Spawn_info_notnull(gentity_s *self)
{
  ?G_Spawn_info_notnull@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Spawn_info_volume
==============
*/

void __fastcall G_Spawn_info_volume(gentity_s *self)
{
  ?G_Spawn_info_volume@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Spawn_info_volume_grapple
==============
*/

void __fastcall G_Spawn_info_volume_grapple(gentity_s *self)
{
  ?G_Spawn_info_volume_grapple@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Spawn_sound_transient_soundbanks
==============
*/

void __fastcall G_Spawn_sound_transient_soundbanks(gentity_s *self)
{
  ?G_Spawn_sound_transient_soundbanks@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_ClearAffector
==============
*/

void __fastcall G_ClearAffector(gentity_s *const ent, GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *const eFlags)
{
  ?G_ClearAffector@@YAXQEAUgentity_s@@QEAV?$GameModeFlagContainer@W4EntityStateFlagsCommon@@W4EntityStateFlagsSP@@W4EntityStateFlagsMP@@$0CA@@@@Z(ent, eFlags);
}

/*
==============
G_Spawn_sound_blend
==============
*/

void __fastcall G_Spawn_sound_blend(gentity_s *self)
{
  ?G_Spawn_sound_blend@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
LerpEntityStatePrimaryLightUnpack
==============
*/

void __fastcall LerpEntityStatePrimaryLightUnpack(const LerpEntityStatePrimaryLightPacked *in, LerpEntityStatePrimaryLightUnpacked *out)
{
  ?LerpEntityStatePrimaryLightUnpack@@YAXPEBULerpEntityStatePrimaryLightPacked@@PEAULerpEntityStatePrimaryLightUnpacked@@@Z(in, out);
}

/*
==============
G_ClearAffector
==============
*/

void __fastcall G_ClearAffector(gentity_s *ent, const EntityStateFlagsMP flag)
{
  ?G_ClearAffector@@YAXPEAUgentity_s@@W4EntityStateFlagsMP@@@Z(ent, flag);
}

/*
==============
G_ClearAffector
==============
*/
void G_ClearAffector(gentity_s *ent, unsigned int flag)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  LerpEntityState *p_lerp; 
  scrContext_t *v7; 
  scrContext_t *v8; 
  playerState_s *EntityPlayerState; 

  v2 = 0i64;
  v3 = 0i64;
  while ( *(_DWORD *)&g_affectorFlags[v3] != flag )
  {
    v3 += 4i64;
    if ( v3 >= 8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 837, ASSERT_TYPE_ASSERT, "(found)", "%s\n\tThe specified flag %i is not an 'affector' flag.", "found", flag) )
        __debugbreak();
      break;
    }
  }
  p_lerp = &ent->s.lerp;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x1Eu) )
  {
    v7 = ScriptContext_Server();
    Scr_Error(COM_ERR_2598, v7, "Cannot change a 'willNeverChange' entity");
  }
  if ( ent->s.eType == ET_PLAYER )
  {
LABEL_17:
    EntityPlayerState = G_GetEntityPlayerState(ent);
    if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 861, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    p_lerp = (LerpEntityState *)&EntityPlayerState->eFlags;
    goto LABEL_21;
  }
  if ( ent->s.eType != ET_SCRIPTMOVER )
  {
    if ( ent->s.eType != ET_AGENT )
    {
      p_lerp = NULL;
      v8 = ScriptContext_Server();
      Scr_ParamError(COM_ERR_2599, v8, 0, "Can only be called on a script mover or player");
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  if ( flag == 20 )
    BG_ClearJammingType(&ent->s);
LABEL_21:
  if ( !p_lerp )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 875, ASSERT_TYPE_ASSERT, "(eFlags)", (const char *)&queryFormat, "eFlags") )
      __debugbreak();
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&p_lerp->eFlags, ACTIVE, flag);
  while ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, GameModeFlagValues::ms_mpValue, *(_DWORD *)&g_affectorFlags[v2]) )
  {
    v2 += 4i64;
    if ( v2 >= 8 )
    {
      SV_BotUnregisterEntAffecter(ent);
      return;
    }
  }
}

/*
==============
G_ClearAffector
==============
*/
void G_ClearAffector(gentity_s *const ent, GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *const eFlags)
{
  unsigned __int64 i; 

  for ( i = 0i64; i < 8; i += 4i64 )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, *(_DWORD *)&g_affectorFlags[i]);
  BG_ClearJammingType(&ent->s);
  SV_BotUnregisterEntAffecter(ent);
}

/*
==============
G_IsAffector
==============
*/
bool G_IsAffector(const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *const eFlags)
{
  unsigned __int64 v2; 
  bool result; 

  v2 = 0i64;
  while ( 1 )
  {
    result = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)eFlags, GameModeFlagValues::ms_mpValue, *(_DWORD *)&g_affectorFlags[v2]);
    if ( result )
      break;
    v2 += 4i64;
    if ( v2 >= 8 )
      return result;
  }
  return 1;
}

/*
==============
G_ScriptItem_Spawn
==============
*/
void G_ScriptItem_Spawn(gentity_s *mSelf)
{
  scrContext_t *v4; 
  int Int; 
  int NumParam; 
  const char *v8; 
  ComErrorCode v9; 
  unsigned __int8 *v10; 
  __int64 v11; 
  const char *String; 
  signed __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  unsigned int v19; 
  const char *v20; 
  const char *v24; 
  const char *v25; 
  const dvar_t *v26; 
  int spawnflags; 
  G_PhysicsObject *v44; 
  unsigned int v45; 
  unsigned int m_serialAndIndex; 
  int number; 
  char v54; 
  const char *v58; 
  const char *v59; 
  signed __int16 EntityHitId; 
  float fmt; 
  __int64 v78; 
  hknpBodyId result; 
  vec3_t v; 
  vec3_t v81; 
  vec3_t start; 
  vec3_t origin; 
  vec3_t angle; 
  vec3_t vectorValue; 
  Bounds bounds; 
  trace_t results; 
  char v88[1024]; 

  __asm { vmovaps [rsp+570h+var_30], xmm6 }
  _RBX = mSelf;
  v4 = ScriptContext_Server();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScriptItem_Spawn");
  G_ScrMover_InitScriptMover(_RBX);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+570h+var_518], xmm6
    vmovss  dword ptr [rsp+570h+var_518+4], xmm6
    vmovss  dword ptr [rsp+570h+var_518+8], xmm6
    vmovss  dword ptr [rbp+470h+vectorValue], xmm6
    vmovss  dword ptr [rbp+470h+vectorValue+4], xmm6
    vmovss  dword ptr [rbp+470h+vectorValue+8], xmm6
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 540, ASSERT_TYPE_ASSERT, "(mSelf)", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  if ( !level.spawnVar.spawnVarsValid )
  {
    NumParam = Scr_GetNumParam(v4);
    if ( NumParam >= 5 )
    {
      if ( NumParam >= 8 )
        Scr_GetVector(v4, 7u, &vectorValue);
      if ( NumParam >= 7 )
        Scr_GetVector(v4, 6u, &v81);
      if ( NumParam >= 6 )
      {
        if ( Scr_GetType(v4, 5u) == VAR_STRING )
        {
          v10 = (unsigned __int8 *)&queryFormat.fmt + 3;
          v11 = 0x7FFFFFFFi64;
          String = Scr_GetString(v4, 5u);
          if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v13 = String - ((const char *)&queryFormat.fmt + 3);
          do
          {
            v14 = v10[v13];
            v15 = v11;
            v16 = *v10++;
            --v11;
            if ( !v15 )
              break;
            if ( v14 != v16 )
            {
              v17 = v14 + 32;
              if ( (unsigned int)(v14 - 65) > 0x19 )
                v17 = v14;
              v14 = v17;
              v18 = v16 + 32;
              if ( (unsigned int)(v16 - 65) > 0x19 )
                v18 = v16;
              if ( v14 != v18 )
                goto LABEL_66;
            }
          }
          while ( v14 );
          v19 = 0;
        }
        else
        {
LABEL_66:
          if ( !GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 183, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem )", (const char *)&queryFormat, "ms_gScriptSystem") )
            __debugbreak();
          ((void (__fastcall *)(GScript *, scrContext_t *, __int64))GScript::ms_gScriptSystem->ConstructMessageString)(GScript::ms_gScriptSystem, v4, 5i64);
          if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
            __debugbreak();
          v19 = GConfigStrings::ms_gConfigStrings->GetHintStringIndex(GConfigStrings::ms_gConfigStrings, v88);
          if ( !v19 )
          {
            G_FreeEntity(_RBX);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E29F60, 524i64, v88);
LABEL_82:
            Sys_ProfEndNamedEvent();
            goto LABEL_83;
          }
        }
        _RBX->hint.hintString = v19;
        _RBX->hint.ownerHintString = 0;
      }
      v20 = Scr_GetString(v4, 4u);
      if ( v20 && *v20 )
      {
        G_Utils_SetModel(_RBX, v20);
        Int = Scr_GetInt(v4, 3u);
        Scr_GetVector(v4, 2u, &angle);
        Scr_GetVector(v4, 1u, &origin);
        G_SetOriginAndAngle(_RBX, &origin, &angle, 1, 1);
        _RBX->spawnflags = Int;
        goto LABEL_31;
      }
      G_FreeEntity(_RBX);
      v8 = "Error spawning script item, no model name provided";
      v9 = COM_ERR_2590;
    }
    else
    {
      G_FreeEntity(_RBX);
      v8 = "Expected at least 5 arguments, USAGE: SpawnScriptItem( classname, origin, angles, spawnflags, model, optional:hintstring, optional:impulseVector, optional:impulseContactPoint )";
      v9 = COM_ERR_2589;
    }
    Scr_Error(v9, v4, v8);
    goto LABEL_82;
  }
  G_Trigger_SetHintFieldsForSpawn(_RBX);
  Int = _RBX->spawnflags;
LABEL_31:
  if ( (Int & 0xC) == 12 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+570h+v], xmm0
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  dword ptr [rsp+570h+v+8], xmm0
      vmovss  dword ptr [rsp+570h+v+4], xmm1
    }
    G_FreeEntity(_RBX);
    v24 = vtos(&v);
    v25 = j_va("Error spawning script_item at pos %s, it is neither touchable or usable", v24);
    Scr_Error(COM_ERR_2591, v4, v25);
    Int = _RBX->spawnflags;
  }
  if ( (Int & 4) == 0 )
  {
    v26 = DCONST_DVARMODEFLT_player_itemUseRadius;
    if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    LODWORD(_RBX->hint.useRadius) = v26->current.integer;
    G_PlayerUse_SetEntityUsable(_RBX, 1);
    if ( !_RBX->hint.hintType )
      _RBX->hint.hintType = 1;
  }
  _RBX->flags.m_flags[0] |= 0x2000000u;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  __asm { vmovaps [rsp+570h+var_40], xmm7 }
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, _RBX, 1);
  spawnflags = _RBX->spawnflags;
  if ( (spawnflags & 2) != 0 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+570h+var_518]
      vmovss  xmm5, dword ptr [rsp+570h+var_518+4]
      vmovss  xmm3, dword ptr [rsp+570h+var_518+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm7, xmm0, xmm0
      vcmpless xmm0, xmm7, cs:__real@80000000
      vblendvps xmm0, xmm7, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+570h+v], xmm0
      vmulss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rsp+570h+v+8], xmm0
      vmovss  dword ptr [rsp+570h+v+4], xmm1
    }
    G_Items_EnablePhysics(_RBX);
    v44 = G_PhysicsObject_Get(_RBX);
    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 688, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    if ( v44->physicsInstances[0] == -1 )
    {
      G_FreeEntity(_RBX);
      Scr_Error(COM_ERR_2592, v4, "failed to create physics for script item");
    }
    if ( v44->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH )
    {
      __asm { vcomiss xmm7, xmm6 }
      if ( v44->mapping > (unsigned int)PHYSICSOBJECT_MAPPING_PHYSICS_AUTH )
      {
        v45 = v44->physicsInstances[0];
        if ( !Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v45) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 698, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, physInstanceId ) > 0)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, physInstanceId ) > 0") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v45 == -1 )
        {
          LODWORD(v78) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v78) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v78) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v78) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v45, 0)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 701, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        __asm { vmovss  dword ptr [rsp+570h+fmt], xmm7 }
        Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &vectorValue, &v, fmt);
      }
    }
  }
  else if ( (spawnflags & 1) == 0 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+130h]
      vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
      vmovss  xmm1, dword ptr [rbx+138h]
      vmovss  xmm6, cs:__real@3f800000
    }
    number = _RBX->s.number;
    __asm
    {
      vmovss  dword ptr [rsp+570h+start], xmm2
      vmovss  dword ptr [rsp+570h+v], xmm2
      vsubss  xmm2, xmm1, cs:__real@45800000
      vmovups xmmword ptr [rbp+470h+bounds.midPoint], xmm0
      vmovss  xmm0, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+570h+start+4], xmm0
      vmovss  dword ptr [rsp+570h+v+4], xmm0
      vmovss  dword ptr [rsp+570h+v+8], xmm2
      vmovss  dword ptr [rbp+470h+bounds.halfSize+4], xmm6
      vmovss  dword ptr [rbp+470h+bounds.halfSize+8], xmm6
      vmovss  dword ptr [rsp+570h+start+8], xmm1
    }
    G_Main_TraceCapsule(&results, &start, &v, &bounds, number, 1169);
    v54 = 0;
    if ( results.startsolid )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  dword ptr [rsp+570h+origin], xmm0
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  dword ptr [rbp+470h+origin+8], xmm0
        vmovss  dword ptr [rsp+570h+origin+4], xmm1
      }
      G_FreeEntity(_RBX);
      v58 = vtos(&origin);
      v59 = j_va("ERROR: script_item - at pos %s is in solid, item not created.\n", v58);
      Scr_Error(COM_ERR_2593, v4, v59);
    }
    __asm
    {
      vmovss  xmm0, [rbp+470h+results.fraction]
      vcomiss xmm0, xmm6
    }
    if ( v54 )
    {
      EntityHitId = Trace_GetEntityHitId(&results);
      _RBX->s.groundEntityNum = EntityHitId;
      g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
      __asm
      {
        vmovss  xmm5, [rbp+470h+results.fraction]
        vmovss  xmm0, dword ptr [rsp+570h+v]
        vsubss  xmm1, xmm0, dword ptr [rsp+570h+start]
        vmulss  xmm1, xmm1, xmm5
        vaddss  xmm0, xmm1, dword ptr [rsp+570h+start]
        vmovss  xmm1, dword ptr [rsp+570h+v+4]
        vmovss  dword ptr [rbp+470h+angle], xmm0
        vsubss  xmm0, xmm1, dword ptr [rsp+570h+start+4]
        vmulss  xmm2, xmm0, xmm5
        vaddss  xmm3, xmm2, dword ptr [rsp+570h+start+4]
        vmovss  xmm0, dword ptr [rsp+570h+v+8]
        vsubss  xmm1, xmm0, dword ptr [rsp+570h+start+8]
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rbp+470h+angle+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsp+570h+start+8]
        vmovss  dword ptr [rbp+470h+angle+8], xmm3
      }
      G_SetOrigin(_RBX, &angle, 1, 1);
    }
  }
  SV_LinkEntity(_RBX);
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm7, [rsp+570h+var_40] }
LABEL_83:
  __asm { vmovaps xmm6, [rsp+570h+var_30] }
}

/*
==============
G_SetAffector
==============
*/
void G_SetAffector(gentity_s *ent, unsigned int flag)
{
  LerpEntityState *p_lerp; 
  unsigned __int64 v4; 
  scrContext_t *v6; 
  scrContext_t *v7; 
  gentity_s *Entity; 
  __int16 *p_number; 
  scrContext_t *v10; 
  __int16 v11; 
  playerState_s *EntityPlayerState; 
  scrContext_t *v13; 

  p_lerp = NULL;
  v4 = 0i64;
  while ( *(_DWORD *)&g_affectorFlags[v4] != flag )
  {
    v4 += 4i64;
    if ( v4 >= 8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 771, ASSERT_TYPE_ASSERT, "(found)", "%s\n\tThe specified flag %i is not an 'affector' flag.", "found", flag) )
        __debugbreak();
      break;
    }
  }
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x1Eu) )
  {
    v6 = ScriptContext_Server();
    Scr_Error(COM_ERR_2594, v6, "Cannot change a 'willNeverChange' entity");
  }
  switch ( ent->s.eType )
  {
    case ET_PLAYER:
      goto LABEL_19;
    case ET_SCRIPTMOVER:
      Entity = GScr_GetEntity(0);
      p_number = &Entity->s.number;
      if ( !Entity->client || Entity->s.number >= level.maxclients )
      {
        v10 = ScriptContext_Server();
        Scr_ParamError(COM_ERR_2595, v10, 0, "Owner entity is not a player\n");
      }
      v11 = *p_number;
      p_lerp = &ent->s.lerp;
      ent->s.otherEntityNum = v11;
LABEL_23:
      if ( p_lerp )
        goto LABEL_26;
      goto LABEL_24;
    case ET_AGENT:
LABEL_19:
      EntityPlayerState = G_GetEntityPlayerState(ent);
      if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 800, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
        __debugbreak();
      p_lerp = (LerpEntityState *)&EntityPlayerState->eFlags;
      goto LABEL_23;
  }
  v7 = ScriptContext_Server();
  Scr_ParamError(COM_ERR_2596, v7, 0, "Can only be called on a script mover or player");
LABEL_24:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 814, ASSERT_TYPE_ASSERT, "(eFlags)", (const char *)&queryFormat, "eFlags") )
    __debugbreak();
LABEL_26:
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&p_lerp->eFlags, ACTIVE, flag);
  if ( !SV_BotRegisterEntAffecter(ent) )
  {
    v13 = ScriptContext_Server();
    Scr_Error(COM_ERR_2597, v13, "Could not register entity as bot affecter");
  }
}

/*
==============
G_Spawn_info_notnull
==============
*/
void G_Spawn_info_notnull(gentity_s *self)
{
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Spawn_info_notnull");
  G_SetOrigin(self, &self->r.currentOrigin, 1, 1);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Spawn_info_volume
==============
*/
void G_Spawn_info_volume(gentity_s *self)
{
  G_Spawn_info_volume_internal(self, "info_volume", ET_FIRST);
}

/*
==============
G_Spawn_info_volume_grapple
==============
*/
void G_Spawn_info_volume_grapple(gentity_s *self)
{
  G_Spawn_info_volume_internal(self, "info_volume_grapple", ET_INFO_VOLUME_GRAPPLE);
}

/*
==============
G_Spawn_info_volume_internal
==============
*/
void G_Spawn_info_volume_internal(gentity_s *self, const char *classname, entityType_s eType)
{
  bool v6; 
  unsigned int Instance; 
  unsigned int v22; 
  char *fmt; 
  __int64 v24; 
  int v25[8]; 
  int *v26; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 34, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self", -2i64) )
    __debugbreak();
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 35, ASSERT_TYPE_ASSERT, "(classname)", (const char *)&queryFormat, "classname") )
    __debugbreak();
  if ( self->r.modelType == 5 )
    v6 = SV_Game_SetBrushModel(self);
  else
    v6 = SV_Game_SetTriggerModel(self);
  if ( v6 )
  {
    self->s.eType = eType;
    self->r.svFlags = 1;
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, self);
    v22 = Instance;
    if ( Instance != -1 )
      Physics_SetInstanceContents(PHYSICS_WORLD_ID_FIRST, Instance, 0);
    if ( G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, self) != -1 )
      Physics_SetInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, v22, 0);
    SV_LinkEntity(self);
  }
  else
  {
    _RDI = &self->s.lerp.pos;
    if ( self == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)self + 123, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
    {
      v26 = v25;
      v25[2] = LODWORD(self->s.lerp.pos.trBase.v[1]) ^ LODWORD(self->s.lerp.pos.trBase.v[2]) ^ s_trbase_aab_Z;
      v25[1] = LODWORD(self->s.lerp.pos.trBase.v[0]) ^ LODWORD(self->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Y;
      v25[0] = LODWORD(self->s.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
      memset(&v26, 0, sizeof(v26));
      __asm
      {
        vmovss  xmm0, [rsp+58h+var_20]
        vmovss  dword ptr [rsp+58h+arg_0], xmm0
      }
      if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
        goto LABEL_29;
      __asm
      {
        vmovss  xmm0, [rsp+58h+var_1C]
        vmovss  dword ptr [rsp+58h+arg_0], xmm0
      }
      if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
        goto LABEL_29;
      __asm
      {
        vmovss  xmm0, [rsp+58h+var_18]
        vmovss  dword ptr [rsp+58h+arg_0], xmm0
      }
      if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
      {
LABEL_29:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovss  [rsp+58h+var_20], xmm0
        vmovss  xmm1, dword ptr [rdi+10h]
        vmovss  [rsp+58h+var_1C], xmm1
        vmovss  xmm0, dword ptr [rdi+14h]
        vmovss  [rsp+58h+var_18], xmm0
      }
    }
    __asm
    {
      vmovss  xmm0, [rsp+58h+var_18]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, [rsp+58h+var_1C]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm3, [rsp+58h+var_20]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+58h+var_30], xmm0
      vmovsd  [rsp+58h+fmt], xmm1
      vmovq   r9, xmm3
    }
    Com_PrintError(1, "Killing %s at (%f %f %f) because the model is invalid.\n", classname, _R9, fmt, v24);
    G_FreeEntity(self);
    memset(v25, 0, 0xCui64);
  }
}

/*
==============
G_Spawn_light
==============
*/
void G_Spawn_light(gentity_s *self)
{
  const vec3_t *p_origin; 
  int v22; 
  int firstScriptablePrimaryLight; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v47; 
  int v48; 
  int v49; 
  char *fmt; 
  __int64 v67; 
  __int64 v68; 
  int out; 
  int v70; 
  int v71; 
  vec3_t vec; 
  vec3_t angles; 

  _RDI = self;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Spawn_light");
  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 363, ASSERT_TYPE_ASSERT, "(level.spawnVar.spawnVarsValid)", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  if ( !G_SpawnInt(1u, "0", &out) )
    goto LABEL_8;
  if ( G_SpawnInt(0x39Du, "0", &v71) )
  {
    if ( (v71 & 0x10) != 0 )
    {
      Com_PrintError(1, "GSC scripted primary light also flagged as used by the Scriptables system - this is not allowed\n");
LABEL_8:
      G_FreeEntity(_RDI);
      goto LABEL_9;
    }
    if ( (v71 & 0x80u) != 0 )
      goto LABEL_8;
  }
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 21, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( out >= (int)comWorld.primaryLightCount )
  {
    Com_PrintError(1, "Scriptable primary light added since last compile.  Ignoring light entity\n");
    goto LABEL_8;
  }
  __asm { vmovss  xmm2, cs:__real@3f800000; epsilon }
  _RSI = Com_GetPrimaryLight(out);
  p_origin = &_RSI->origin;
  if ( !VecNCompareCustomEpsilon(_RSI->origin.v, _RDI->r.currentOrigin.v, *(float *)&_XMM2, 3) )
  {
    out = Com_FindClosestPrimaryLight(&_RDI->r.currentOrigin);
    __asm { vmovss  xmm2, cs:__real@3f800000; epsilon }
    _RSI = Com_GetPrimaryLight(out);
    p_origin = &_RSI->origin;
    if ( !VecNCompareCustomEpsilon(_RSI->origin.v, _RDI->r.currentOrigin.v, *(float *)&_XMM2, 3) )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+134h]
        vmovss  xmm2, dword ptr [rdi+130h]
        vmovss  xmm0, dword ptr [rdi+138h]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+128h+fmt], xmm0
      }
      Com_PrintError(1, "No primary light was found at (%.0f %.0f %.0f).  You may have added, deleted, or moved a primary light since the last full map compile.  You should recompile the map before using MyMapEnts to avoid issues with primary lights.\n", _R8, _R9, fmt);
    }
  }
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 411, ASSERT_TYPE_ASSERT, "(primaryLightIndex != 0)", (const char *)&queryFormat, "primaryLightIndex != PRIMARY_LIGHT_NONE") )
    __debugbreak();
  v22 = out;
  if ( (out < (int)comWorld.firstScriptablePrimaryLight || out >= (int)comWorld.primaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 113, ASSERT_TYPE_ASSERT, "(primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount ))", (const char *)&queryFormat, "primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount )") )
    __debugbreak();
  _RDI->s.staticState.general.xmodel = v22 - comWorld.firstScriptablePrimaryLight;
  firstScriptablePrimaryLight = comWorld.firstScriptablePrimaryLight;
  if ( !comWorld.firstScriptablePrimaryLight || !comWorld.scriptablePrimaryLightCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 415, ASSERT_TYPE_ASSERT, "(comWorld.firstScriptablePrimaryLight && comWorld.scriptablePrimaryLightCount)", (const char *)&queryFormat, "comWorld.firstScriptablePrimaryLight && comWorld.scriptablePrimaryLightCount") )
      __debugbreak();
    firstScriptablePrimaryLight = comWorld.firstScriptablePrimaryLight;
  }
  if ( out < firstScriptablePrimaryLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 416, ASSERT_TYPE_ASSERT, "( primaryLightIndex ) >= ( static_cast<int>( comWorld.firstScriptablePrimaryLight ) )", "%s >= %s\n\t%i, %i", "primaryLightIndex", "static_cast<int>( comWorld.firstScriptablePrimaryLight )", out, firstScriptablePrimaryLight) )
    __debugbreak();
  if ( _RDI->s.staticState.general.xmodel >= out )
  {
    LODWORD(v68) = out;
    LODWORD(v67) = _RDI->s.staticState.general.xmodel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 417, ASSERT_TYPE_ASSERT, "( self->s.staticState.primaryLight.offset ) < ( static_cast<uint>( primaryLightIndex ) )", "%s < %s\n\t%i, %i", "self->s.staticState.primaryLight.offset", "static_cast<uint>( primaryLightIndex )", v67, v68) )
      __debugbreak();
  }
  if ( _RDI->s.staticState.general.xmodel >= 0x400 )
  {
    Com_PrintError(1, "Too many scriptable primary lights. Limited to %i\n", 1024i64);
    goto LABEL_8;
  }
  __asm
  {
    vmovaps [rsp+128h+var_28], xmm7
    vmovss  xmm7, cs:__real@437f0000
    vmulss  xmm1, xmm7, dword ptr [rsi+70h]
    vaddss  xmm0, xmm1, cs:__real@3f000000; val
    vmovaps [rsp+128h+var_38], xmm8
    vmovss  xmm8, dword ptr [rsi+6Ch]
    vmovaps [rsp+128h+var_48], xmm9
    vmovss  xmm9, dword ptr [rsi+20h]
    vmovaps [rsp+128h+var_58], xmm10
    vmovss  xmm10, dword ptr [rsi+24h]
    vmovaps [rsp+128h+var_68], xmm11
    vmovss  xmm11, dword ptr [rsi+28h]
    vmovaps [rsp+128h+var_78], xmm12
    vmovss  xmm12, dword ptr [rsi+50h]
    vmovaps [rsp+128h+var_88], xmm13
    vmovss  xmm13, dword ptr [rsi+10h]
    vmovaps [rsp+128h+var_98], xmm14
    vmovss  xmm14, dword ptr [rsi+14h]
    vandps  xmm14, xmm14, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm3, xmm7, xmm8
    vcvttss2si ebx, xmm0
    vaddss  xmm0, xmm3, cs:__real@3f000000; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  [rsp+128h+var_D4], xmm9 }
  v42 = v70;
  __asm { vmovss  [rsp+128h+var_D4], xmm10 }
  v43 = v70;
  v44 = v70;
  __asm { vmovss  [rsp+128h+var_D4], xmm11 }
  v45 = (int)((2 * v42) ^ 0x80003FFF) >> 14;
  __asm { vcvttss2si r10d, xmm0 }
  if ( v45 > 0x3FFF )
    v45 = 0x3FFF;
  v47 = (int)((2 * v43) ^ 0x80003FFF) >> 14;
  if ( v47 > 0x3FFF )
    v47 = 0x3FFF;
  if ( v47 < -16384 )
    v47 = -16384;
  v48 = ((v43 >> 16) ^ ((v44 >> 16) ^ v47) & 0x3FFF) << 16;
  if ( v45 < -16384 )
    LOWORD(v45) = -16384;
  _RDI->s.lerp.u.anonymous.data[0] = (v42 >> 16) & 0xC000 | v45 & 0x3FFF | v48;
  v49 = (int)((2 * v70) ^ 0x80003FFF) >> 14;
  if ( v49 > 0x3FFF )
    v49 = 0x3FFF;
  if ( v49 < -16384 )
    LOWORD(v49) = -16384;
  __asm { vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000 }
  _RDI->s.lerp.u.anonymous.data[1] = v49 & 0x3FFF | (v70 >> 16) & 0xC000 | (((unsigned __int8)_EBX | ((unsigned __int8)_ER10 << 8)) << 16);
  __asm
  {
    vmovss  dword ptr [rdi+68h], xmm12
    vmovss  dword ptr [rdi+60h], xmm13
    vmovss  dword ptr [rdi+64h], xmm14
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmovss  xmm1, dword ptr [rsi+30h]
    vxorps  xmm0, xmm0, xmm3
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+128h+vec], xmm0
    vmovss  xmm0, dword ptr [rsi+34h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+128h+vec+8], xmm1
    vmovss  dword ptr [rsp+128h+vec+4], xmm2
  }
  vectoangles(&vec, &angles);
  G_SetOriginAndAngle(_RDI, p_origin, &angles, 1, 1);
  __asm { vmovss  xmm0, dword ptr [rsi+50h] }
  *(_QWORD *)_RDI->r.box.midPoint.v = 0i64;
  _RDI->r.box.midPoint.v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rdi+10Ch], xmm0
    vmovss  dword ptr [rdi+110h], xmm0
    vmovss  dword ptr [rdi+114h], xmm0
  }
  _RDI->s.eType = ET_PRIMARY_LIGHT;
  _RDI->handler = 23;
  SV_LinkEntity(_RDI);
  __asm
  {
    vmovaps xmm14, [rsp+128h+var_98]
    vmovaps xmm13, [rsp+128h+var_88]
    vmovaps xmm12, [rsp+128h+var_78]
    vmovaps xmm11, [rsp+128h+var_68]
    vmovaps xmm10, [rsp+128h+var_58]
    vmovaps xmm9, [rsp+128h+var_48]
    vmovaps xmm8, [rsp+128h+var_38]
    vmovaps xmm7, [rsp+128h+var_28]
  }
  _RDI->flags = 0i64;
  _RDI->flags.m_flags[0] |= 0x200u;
LABEL_9:
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Spawn_reflection_probe
==============
*/
void G_Spawn_reflection_probe(gentity_s *self)
{
  int v2; 
  int out; 

  self->flags = 0i64;
  G_ScrMover_InitScriptMover(self);
  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 206, ASSERT_TYPE_ASSERT, "(level.spawnVar.spawnVarsValid)", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  if ( G_SpawnInt(0x200u, "0", &out) )
  {
    v2 = out;
    self->s.eType = ET_SCRIPTMOVER;
    self->s.un.scriptMoverType = 3;
    self->handler = 8;
    if ( (v2 < 0 || (unsigned int)v2 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v2, "signed", v2) )
      __debugbreak();
    self->s.staticState.player.stowedWeaponHandle.m_mapEntryId = (unsigned __int16)v2;
    SV_LinkEntity(self);
  }
  else
  {
    G_FreeEntity(self);
  }
}

/*
==============
G_Spawn_sound_blend
==============
*/
void G_Spawn_sound_blend(gentity_s *self)
{
  self->s.eType = ET_SOUND;
  self->s.lerp.u.anonymous.data[0] = 0;
  self->s.lerp.pos.trType = TR_STATIONARY;
  self->s.lerp.apos.trType = TR_STATIONARY;
  *(_OWORD *)self->s.lerp.u.actor.threatSight = 0ui64;
  SV_LinkEntity(self);
}

/*
==============
G_Spawn_sound_transient_soundbanks
==============
*/
void G_Spawn_sound_transient_soundbanks(gentity_s *self)
{
  self->s.lerp.u.anonymous.data[0] = 3;
  self->s.eType = ET_SOUND;
  self->s.lerp.pos.trType = TR_STATIONARY;
  self->s.lerp.apos.trType = TR_STATIONARY;
  *(_OWORD *)self->s.lerp.u.actor.threatSight = 0ui64;
  SV_LinkEntity(self);
}

/*
==============
LerpEntityStatePrimaryLightPack
==============
*/
void LerpEntityStatePrimaryLightPack(const LerpEntityStatePrimaryLightUnpacked *in, LerpEntityStatePrimaryLightPacked *out)
{
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v23; 
  int v26; 
  int v27; 
  int v28; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm7
    vmovss  xmm7, cs:__real@437f0000
    vmulss  xmm1, xmm7, dword ptr [rcx+10h]
    vaddss  xmm0, xmm1, cs:__real@3f000000; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm7; max
  }
  _RDI = in;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcvttss2si ebx, xmm0
    vmulss  xmm0, xmm7, dword ptr [rdi+0Ch]
    vaddss  xmm0, xmm0, cs:__real@3f000000; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vcvttss2si r10d, xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+38h+arg_0], xmm1
  }
  v18 = v26;
  __asm { vmovss  [rsp+38h+arg_0], xmm0 }
  v19 = (int)((2 * v18) ^ 0x80003FFF) >> 14;
  if ( v19 > 0x3FFF )
    v19 = 0x3FFF;
  v20 = (int)((2 * v27) ^ 0x80003FFF) >> 14;
  if ( v20 > 0x3FFF )
    v20 = 0x3FFF;
  if ( v20 < -16384 )
    v20 = -16384;
  v21 = ((v27 >> 16) ^ ((v27 >> 16) ^ v20) & 0x3FFF) << 16;
  if ( v19 < -16384 )
    LOWORD(v19) = -16384;
  out->packedColorRG = (v18 >> 16) & 0xC000 | v19 & 0x3FFF | v21;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  v23 = (int)((2 * v28) ^ 0x80003FFF) >> 14;
  if ( v23 > 0x3FFF )
    v23 = 0x3FFF;
  if ( v23 < -16384 )
    LOWORD(v23) = -16384;
  out->packedColorB_Fov = v23 & 0x3FFF | (v28 >> 16) & 0xC000 | (((unsigned __int8)_EBX | ((unsigned __int8)_ER10 << 8)) << 16);
  out->radius = _RDI->radius;
  out->intensity = _RDI->intensity;
  out->uvIntensity = _RDI->uvIntensity;
  __asm { vmovaps xmm7, [rsp+38h+var_18] }
}

/*
==============
LerpEntityStatePrimaryLightUnpack
==============
*/
void LerpEntityStatePrimaryLightUnpack(const LerpEntityStatePrimaryLightPacked *in, LerpEntityStatePrimaryLightUnpacked *out)
{
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 

  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( LOWORD(in->packedColorRG) )
  {
    v13 = ((in->packedColorRG & 0x8000) << 16) | (((((in->packedColorRG & 0x3FFF) << 14) - (~(LOWORD(in->packedColorRG) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm1, [rsp+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm { vmovss  dword ptr [rdx], xmm1 }
  if ( HIWORD(in->packedColorRG) )
  {
    v14 = ((HIWORD(in->packedColorRG) & 0x8000) << 16) | (((((HIWORD(in->packedColorRG) & 0x3FFF) << 14) - (~(HIWORD(in->packedColorRG) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm1, [rsp+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm { vmovss  dword ptr [rdx+4], xmm1 }
  if ( LOWORD(in->packedColorB_Fov) )
  {
    v15 = ((in->packedColorB_Fov & 0x8000) << 16) | (((((in->packedColorB_Fov & 0x3FFF) << 14) - (~(LOWORD(in->packedColorB_Fov) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, [rsp+arg_0] }
  }
  __asm
  {
    vmovss  dword ptr [rdx+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@3b808081
    vmovss  dword ptr [rdx+10h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, cs:__real@3b808081
    vmovss  dword ptr [rdx+0Ch], xmm0
  }
  out->radius = in->radius;
  out->intensity = in->intensity;
  out->uvIntensity = in->uvIntensity;
}

