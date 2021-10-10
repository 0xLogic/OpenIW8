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
  scrContext_t *v2; 
  int Int; 
  int NumParam; 
  const char *v5; 
  ComErrorCode v6; 
  unsigned __int8 *v7; 
  __int64 v8; 
  const char *String; 
  signed __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  const char *v17; 
  float v18; 
  const char *v19; 
  const char *v20; 
  const dvar_t *v21; 
  int spawnflags; 
  __int128 v24; 
  G_PhysicsObject *v27; 
  unsigned int v28; 
  unsigned int m_serialAndIndex; 
  float v30; 
  int number; 
  float v32; 
  const char *v33; 
  const char *v34; 
  __int16 EntityHitId; 
  __int64 v36; 
  hknpBodyId result; 
  vec3_t v; 
  vec3_t v39; 
  vec3_t start; 
  vec3_t origin; 
  vec3_t angle; 
  vec3_t vectorValue; 
  Bounds bounds; 
  trace_t results; 
  char v46[1024]; 

  v2 = ScriptContext_Server();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScriptItem_Spawn");
  G_ScrMover_InitScriptMover(mSelf);
  v39.v[0] = 0.0;
  v39.v[1] = 0.0;
  v39.v[2] = 0.0;
  vectorValue.v[0] = 0.0;
  vectorValue.v[1] = 0.0;
  vectorValue.v[2] = 0.0;
  if ( !mSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 540, ASSERT_TYPE_ASSERT, "(mSelf)", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  if ( !level.spawnVar.spawnVarsValid )
  {
    NumParam = Scr_GetNumParam(v2);
    if ( NumParam >= 5 )
    {
      if ( NumParam >= 8 )
        Scr_GetVector(v2, 7u, &vectorValue);
      if ( NumParam >= 7 )
        Scr_GetVector(v2, 6u, &v39);
      if ( NumParam >= 6 )
      {
        if ( Scr_GetType(v2, 5u) == VAR_STRING )
        {
          v7 = (unsigned __int8 *)&queryFormat.fmt + 3;
          v8 = 0x7FFFFFFFi64;
          String = Scr_GetString(v2, 5u);
          if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v10 = String - ((const char *)&queryFormat.fmt + 3);
          do
          {
            v11 = v7[v10];
            v12 = v8;
            v13 = *v7++;
            --v8;
            if ( !v12 )
              break;
            if ( v11 != v13 )
            {
              v14 = v11 + 32;
              if ( (unsigned int)(v11 - 65) > 0x19 )
                v14 = v11;
              v11 = v14;
              v15 = v13 + 32;
              if ( (unsigned int)(v13 - 65) > 0x19 )
                v15 = v13;
              if ( v11 != v15 )
                goto LABEL_66;
            }
          }
          while ( v11 );
          v16 = 0;
        }
        else
        {
LABEL_66:
          if ( !GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 183, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem )", (const char *)&queryFormat, "ms_gScriptSystem") )
            __debugbreak();
          ((void (__fastcall *)(GScript *, scrContext_t *, __int64))GScript::ms_gScriptSystem->ConstructMessageString)(GScript::ms_gScriptSystem, v2, 5i64);
          if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
            __debugbreak();
          v16 = GConfigStrings::ms_gConfigStrings->GetHintStringIndex(GConfigStrings::ms_gConfigStrings, v46);
          if ( !v16 )
          {
            G_FreeEntity(mSelf);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E29F60, 524i64, v46);
LABEL_82:
            Sys_ProfEndNamedEvent();
            return;
          }
        }
        mSelf->hint.hintString = v16;
        mSelf->hint.ownerHintString = 0;
      }
      v17 = Scr_GetString(v2, 4u);
      if ( v17 && *v17 )
      {
        G_Utils_SetModel(mSelf, v17);
        Int = Scr_GetInt(v2, 3u);
        Scr_GetVector(v2, 2u, &angle);
        Scr_GetVector(v2, 1u, &origin);
        G_SetOriginAndAngle(mSelf, &origin, &angle, 1, 1);
        mSelf->spawnflags = Int;
        goto LABEL_31;
      }
      G_FreeEntity(mSelf);
      v5 = "Error spawning script item, no model name provided";
      v6 = COM_ERR_2590;
    }
    else
    {
      G_FreeEntity(mSelf);
      v5 = "Expected at least 5 arguments, USAGE: SpawnScriptItem( classname, origin, angles, spawnflags, model, optional:hintstring, optional:impulseVector, optional:impulseContactPoint )";
      v6 = COM_ERR_2589;
    }
    Scr_Error(v6, v2, v5);
    goto LABEL_82;
  }
  G_Trigger_SetHintFieldsForSpawn(mSelf);
  Int = mSelf->spawnflags;
LABEL_31:
  if ( (Int & 0xC) == 12 )
  {
    v18 = mSelf->r.currentOrigin.v[1];
    v.v[0] = mSelf->r.currentOrigin.v[0];
    v.v[2] = mSelf->r.currentOrigin.v[2];
    v.v[1] = v18;
    G_FreeEntity(mSelf);
    v19 = vtos(&v);
    v20 = j_va("Error spawning script_item at pos %s, it is neither touchable or usable", v19);
    Scr_Error(COM_ERR_2591, v2, v20);
    Int = mSelf->spawnflags;
  }
  if ( (Int & 4) == 0 )
  {
    v21 = DCONST_DVARMODEFLT_player_itemUseRadius;
    if ( !DCONST_DVARMODEFLT_player_itemUseRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_itemUseRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    LODWORD(mSelf->hint.useRadius) = v21->current.integer;
    G_PlayerUse_SetEntityUsable(mSelf, 1);
    if ( !mSelf->hint.hintType )
      mSelf->hint.hintType = 1;
  }
  mSelf->flags.m_flags[0] |= 0x2000000u;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, mSelf, 1);
  spawnflags = mSelf->spawnflags;
  if ( (spawnflags & 2) != 0 )
  {
    v24 = LODWORD(v39.v[0]);
    *(float *)&v24 = fsqrt((float)((float)(*(float *)&v24 * *(float *)&v24) + (float)(v39.v[1] * v39.v[1])) + (float)(v39.v[2] * v39.v[2]));
    _XMM7 = v24;
    __asm
    {
      vcmpless xmm0, xmm7, cs:__real@80000000
      vblendvps xmm0, xmm7, xmm1, xmm0
    }
    v.v[0] = v39.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v.v[2] = v39.v[2] * (float)(1.0 / *(float *)&_XMM0);
    v.v[1] = v39.v[1] * (float)(1.0 / *(float *)&_XMM0);
    G_Items_EnablePhysics(mSelf);
    v27 = G_PhysicsObject_Get(mSelf);
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 688, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    if ( v27->physicsInstances[0] == -1 )
    {
      G_FreeEntity(mSelf);
      Scr_Error(COM_ERR_2592, v2, "failed to create physics for script item");
    }
    if ( v27->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH && *(float *)&v24 > 0.0 )
    {
      v28 = v27->physicsInstances[0];
      if ( !Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 698, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, physInstanceId ) > 0)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, physInstanceId ) > 0") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v28 == -1 )
      {
        LODWORD(v36) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v36) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v36) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v36) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v28, 0)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 701, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &vectorValue, &v, *(float *)&v24);
    }
  }
  else if ( (spawnflags & 1) == 0 )
  {
    v30 = mSelf->r.currentOrigin.v[2];
    number = mSelf->s.number;
    start.v[0] = mSelf->r.currentOrigin.v[0];
    v.v[0] = start.v[0];
    *(_OWORD *)bounds.midPoint.v = _xmm;
    start.v[1] = mSelf->r.currentOrigin.v[1];
    v.v[1] = start.v[1];
    v.v[2] = v30 - 4096.0;
    bounds.halfSize.v[1] = FLOAT_1_0;
    bounds.halfSize.v[2] = FLOAT_1_0;
    start.v[2] = v30;
    G_Main_TraceCapsule(&results, &start, &v, &bounds, number, 1169);
    if ( results.startsolid )
    {
      v32 = mSelf->r.currentOrigin.v[1];
      origin.v[0] = mSelf->r.currentOrigin.v[0];
      origin.v[2] = mSelf->r.currentOrigin.v[2];
      origin.v[1] = v32;
      G_FreeEntity(mSelf);
      v33 = vtos(&origin);
      v34 = j_va("ERROR: script_item - at pos %s is in solid, item not created.\n", v33);
      Scr_Error(COM_ERR_2593, v2, v34);
    }
    if ( results.fraction < 1.0 )
    {
      EntityHitId = Trace_GetEntityHitId(&results);
      mSelf->s.groundEntityNum = EntityHitId;
      g_entities[EntityHitId].flags.m_flags[0] |= 0x200000u;
      angle.v[0] = (float)((float)(v.v[0] - start.v[0]) * results.fraction) + start.v[0];
      angle.v[1] = (float)((float)(v.v[1] - start.v[1]) * results.fraction) + start.v[1];
      angle.v[2] = (float)((float)(v.v[2] - start.v[2]) * results.fraction) + start.v[2];
      G_SetOrigin(mSelf, &angle, 1, 1);
    }
  }
  SV_LinkEntity(mSelf);
  Sys_ProfEndNamedEvent();
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
  unsigned int v8; 
  int v9[8]; 
  int *v10; 

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
    v8 = Instance;
    if ( Instance != -1 )
      Physics_SetInstanceContents(PHYSICS_WORLD_ID_FIRST, Instance, 0);
    if ( G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, self) != -1 )
      Physics_SetInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, v8, 0);
    SV_LinkEntity(self);
  }
  else
  {
    if ( self == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)self + 123, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( self->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
    {
      v10 = v9;
      v9[2] = LODWORD(self->s.lerp.pos.trBase.v[1]) ^ LODWORD(self->s.lerp.pos.trBase.v[2]) ^ s_trbase_aab_Z;
      v9[1] = LODWORD(self->s.lerp.pos.trBase.v[0]) ^ LODWORD(self->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Y;
      v9[0] = LODWORD(self->s.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
      memset(&v10, 0, sizeof(v10));
      *(float *)&v10 = *(float *)v9;
      if ( (v9[0] & 0x7F800000) == 2139095040 || (*(float *)&v10 = *(float *)&v9[1], (v9[1] & 0x7F800000) == 2139095040) || (*(float *)&v10 = *(float *)&v9[2], (v9[2] & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      v9[0] = LODWORD(self->s.lerp.pos.trBase.v[0]);
      v9[1] = LODWORD(self->s.lerp.pos.trBase.v[1]);
      v9[2] = LODWORD(self->s.lerp.pos.trBase.v[2]);
    }
    Com_PrintError(1, "Killing %s at (%f %f %f) because the model is invalid.\n", classname, v9[0], v9[1], v9[2]);
    G_FreeEntity(self);
    memset(v9, 0, 0xCui64);
  }
}

/*
==============
G_Spawn_light
==============
*/
void G_Spawn_light(gentity_s *self)
{
  const ComPrimaryLight *PrimaryLight; 
  const vec3_t *p_origin; 
  int v4; 
  int firstScriptablePrimaryLight; 
  float cosHalfFovOuter; 
  int v7; 
  int v8; 
  float v9; 
  float radius; 
  float intensity; 
  float v12; 
  double v13; 
  int v14; 
  double v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  __int64 v23; 
  int out; 
  float v25; 
  int v26; 
  vec3_t vec; 
  vec3_t angles; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Spawn_light");
  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 363, ASSERT_TYPE_ASSERT, "(level.spawnVar.spawnVarsValid)", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  if ( !G_SpawnInt(1u, "0", &out) )
    goto LABEL_8;
  if ( G_SpawnInt(0x39Du, "0", &v26) )
  {
    if ( (v26 & 0x10) != 0 )
    {
      Com_PrintError(1, "GSC scripted primary light also flagged as used by the Scriptables system - this is not allowed\n");
LABEL_8:
      G_FreeEntity(self);
      goto LABEL_9;
    }
    if ( (v26 & 0x80u) != 0 )
      goto LABEL_8;
  }
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 21, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
    __debugbreak();
  if ( out >= (int)comWorld.primaryLightCount )
  {
    Com_PrintError(1, "Scriptable primary light added since last compile.  Ignoring light entity\n");
    goto LABEL_8;
  }
  PrimaryLight = Com_GetPrimaryLight(out);
  p_origin = &PrimaryLight->origin;
  if ( !VecNCompareCustomEpsilon(PrimaryLight->origin.v, self->r.currentOrigin.v, 1.0, 3) )
  {
    out = Com_FindClosestPrimaryLight(&self->r.currentOrigin);
    PrimaryLight = Com_GetPrimaryLight(out);
    p_origin = &PrimaryLight->origin;
    if ( !VecNCompareCustomEpsilon(PrimaryLight->origin.v, self->r.currentOrigin.v, 1.0, 3) )
      Com_PrintError(1, "No primary light was found at (%.0f %.0f %.0f).  You may have added, deleted, or moved a primary light since the last full map compile.  You should recompile the map before using MyMapEnts to avoid issues with primary lights.\n", self->r.currentOrigin.v[0], self->r.currentOrigin.v[1], self->r.currentOrigin.v[2]);
  }
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 411, ASSERT_TYPE_ASSERT, "(primaryLightIndex != 0)", (const char *)&queryFormat, "primaryLightIndex != PRIMARY_LIGHT_NONE") )
    __debugbreak();
  v4 = out;
  if ( (out < (int)comWorld.firstScriptablePrimaryLight || out >= (int)comWorld.primaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 113, ASSERT_TYPE_ASSERT, "(primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount ))", (const char *)&queryFormat, "primaryLightIndex >= static_cast<int>( comWorld.firstScriptablePrimaryLight ) && primaryLightIndex < static_cast<int>( comWorld.primaryLightCount )") )
    __debugbreak();
  self->s.staticState.general.xmodel = v4 - comWorld.firstScriptablePrimaryLight;
  firstScriptablePrimaryLight = comWorld.firstScriptablePrimaryLight;
  if ( !comWorld.firstScriptablePrimaryLight || !comWorld.scriptablePrimaryLightCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 415, ASSERT_TYPE_ASSERT, "(comWorld.firstScriptablePrimaryLight && comWorld.scriptablePrimaryLightCount)", (const char *)&queryFormat, "comWorld.firstScriptablePrimaryLight && comWorld.scriptablePrimaryLightCount") )
      __debugbreak();
    firstScriptablePrimaryLight = comWorld.firstScriptablePrimaryLight;
  }
  if ( out < firstScriptablePrimaryLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 416, ASSERT_TYPE_ASSERT, "( primaryLightIndex ) >= ( static_cast<int>( comWorld.firstScriptablePrimaryLight ) )", "%s >= %s\n\t%i, %i", "primaryLightIndex", "static_cast<int>( comWorld.firstScriptablePrimaryLight )", out, firstScriptablePrimaryLight) )
    __debugbreak();
  if ( self->s.staticState.general.xmodel >= out )
  {
    LODWORD(v23) = out;
    LODWORD(v22) = self->s.staticState.general.xmodel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_misc.cpp", 417, ASSERT_TYPE_ASSERT, "( self->s.staticState.primaryLight.offset ) < ( static_cast<uint>( primaryLightIndex ) )", "%s < %s\n\t%i, %i", "self->s.staticState.primaryLight.offset", "static_cast<uint>( primaryLightIndex )", v22, v23) )
      __debugbreak();
  }
  if ( self->s.staticState.general.xmodel >= 0x400 )
  {
    Com_PrintError(1, "Too many scriptable primary lights. Limited to %i\n", 1024i64);
    goto LABEL_8;
  }
  cosHalfFovOuter = PrimaryLight->cosHalfFovOuter;
  v7 = LODWORD(PrimaryLight->colorLinearSrgb.v[0]);
  v8 = LODWORD(PrimaryLight->colorLinearSrgb.v[1]);
  v9 = PrimaryLight->colorLinearSrgb.v[2];
  radius = PrimaryLight->radius;
  intensity = PrimaryLight->intensity;
  LODWORD(v12) = LODWORD(PrimaryLight->uvIntensity) & _xmm;
  v13 = I_fclamp((float)(255.0 * PrimaryLight->cosHalfFovInner) + 0.5, 0.0, 255.0);
  v14 = (int)*(float *)&v13;
  v15 = I_fclamp((float)(255.0 * cosHalfFovOuter) + 0.5, 0.0, 255.0);
  v25 = v9;
  v16 = (int)((2 * v7) ^ 0x80003FFF) >> 14;
  if ( v16 > 0x3FFF )
    v16 = 0x3FFF;
  v17 = (int)((2 * v8) ^ 0x80003FFF) >> 14;
  if ( v17 > 0x3FFF )
    v17 = 0x3FFF;
  if ( v17 < -16384 )
    v17 = -16384;
  v18 = ((v8 >> 16) ^ ((v8 >> 16) ^ v17) & 0x3FFF) << 16;
  if ( v16 < -16384 )
    LOWORD(v16) = -16384;
  self->s.lerp.u.anonymous.data[0] = (v7 >> 16) & 0xC000 | v16 & 0x3FFF | v18;
  v19 = (int)((2 * LODWORD(v25)) ^ 0x80003FFF) >> 14;
  if ( v19 > 0x3FFF )
    v19 = 0x3FFF;
  if ( v19 < -16384 )
    LOWORD(v19) = -16384;
  self->s.lerp.u.anonymous.data[1] = v19 & 0x3FFF | (SLODWORD(v25) >> 16) & 0xC000 | (((unsigned __int8)v14 | ((unsigned __int8)(int)*(float *)&v15 << 8)) << 16);
  self->s.lerp.u.actor.impactVector.v[1] = radius;
  self->s.lerp.u.turret.gunAngles.v[2] = intensity;
  self->s.lerp.u.actor.impactVector.v[0] = v12;
  LODWORD(v20) = LODWORD(PrimaryLight->dir.v[1]) ^ _xmm;
  LODWORD(vec.v[0]) = LODWORD(PrimaryLight->dir.v[0]) ^ _xmm;
  LODWORD(vec.v[2]) = LODWORD(PrimaryLight->dir.v[2]) ^ _xmm;
  vec.v[1] = v20;
  vectoangles(&vec, &angles);
  G_SetOriginAndAngle(self, p_origin, &angles, 1, 1);
  v21 = PrimaryLight->radius;
  *(_QWORD *)self->r.box.midPoint.v = 0i64;
  self->r.box.midPoint.v[2] = 0.0;
  self->r.box.halfSize.v[0] = v21;
  self->r.box.halfSize.v[1] = v21;
  self->r.box.halfSize.v[2] = v21;
  self->s.eType = ET_PRIMARY_LIGHT;
  self->handler = 23;
  SV_LinkEntity(self);
  self->flags = 0i64;
  self->flags.m_flags[0] |= 0x200u;
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
  double v4; 
  int v5; 
  double v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  v4 = I_fclamp((float)(255.0 * in->cosHalfFovInner) + 0.5, 0.0, 255.0);
  v5 = (int)*(float *)&v4;
  v6 = I_fclamp((float)(255.0 * in->cosHalfFovOuter) + 0.5, 0.0, 255.0);
  v7 = LODWORD(in->colorLinearSrgb.v[1]);
  v8 = (int)((2 * LODWORD(in->colorLinearSrgb.v[0])) ^ 0x80003FFF) >> 14;
  if ( v8 > 0x3FFF )
    v8 = 0x3FFF;
  v9 = (int)((2 * v7) ^ 0x80003FFF) >> 14;
  if ( v9 > 0x3FFF )
    v9 = 0x3FFF;
  if ( v9 < -16384 )
    v9 = -16384;
  v10 = ((v7 >> 16) ^ ((v7 >> 16) ^ v9) & 0x3FFF) << 16;
  if ( v8 < -16384 )
    LOWORD(v8) = -16384;
  out->packedColorRG = (SLODWORD(in->colorLinearSrgb.v[0]) >> 16) & 0xC000 | v8 & 0x3FFF | v10;
  v11 = LODWORD(in->colorLinearSrgb.v[2]);
  v12 = (int)((2 * v11) ^ 0x80003FFF) >> 14;
  if ( v12 > 0x3FFF )
    v12 = 0x3FFF;
  if ( v12 < -16384 )
    LOWORD(v12) = -16384;
  out->packedColorB_Fov = v12 & 0x3FFF | (v11 >> 16) & 0xC000 | (((unsigned __int8)v5 | ((unsigned __int8)(int)*(float *)&v6 << 8)) << 16);
  out->radius = in->radius;
  out->intensity = in->intensity;
  out->uvIntensity = in->uvIntensity;
}

/*
==============
LerpEntityStatePrimaryLightUnpack
==============
*/
void LerpEntityStatePrimaryLightUnpack(const LerpEntityStatePrimaryLightPacked *in, LerpEntityStatePrimaryLightUnpacked *out)
{
  float v2; 
  float v3; 
  float v4; 

  v2 = 0.0;
  if ( LOWORD(in->packedColorRG) )
    LODWORD(v3) = ((in->packedColorRG & 0x8000) << 16) | (((((in->packedColorRG & 0x3FFF) << 14) - (~(LOWORD(in->packedColorRG) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v3 = 0.0;
  out->colorLinearSrgb.v[0] = v3;
  if ( HIWORD(in->packedColorRG) )
    LODWORD(v4) = ((HIWORD(in->packedColorRG) & 0x8000) << 16) | (((((HIWORD(in->packedColorRG) & 0x3FFF) << 14) - (~(HIWORD(in->packedColorRG) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v4 = 0.0;
  out->colorLinearSrgb.v[1] = v4;
  if ( LOWORD(in->packedColorB_Fov) )
    LODWORD(v2) = ((in->packedColorB_Fov & 0x8000) << 16) | (((((in->packedColorB_Fov & 0x3FFF) << 14) - (~(LOWORD(in->packedColorB_Fov) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  out->colorLinearSrgb.v[2] = v2;
  out->cosHalfFovInner = (float)BYTE2(in->packedColorB_Fov) * 0.0039215689;
  out->cosHalfFovOuter = (float)HIBYTE(in->packedColorB_Fov) * 0.0039215689;
  out->radius = in->radius;
  out->intensity = in->intensity;
  out->uvIntensity = in->uvIntensity;
}

