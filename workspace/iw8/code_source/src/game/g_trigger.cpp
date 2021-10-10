/*
==============
G_Trigger_MultiTouch
==============
*/

void __fastcall G_Trigger_MultiTouch(gentity_s *self, gentity_s *other, int bTouched)
{
  ?G_Trigger_MultiTouch@@YAXPEAUgentity_s@@0H@Z(self, other, bTouched);
}

/*
==============
G_Trigger_DamageGrenadeTouch
==============
*/

void __fastcall G_Trigger_DamageGrenadeTouch(gentity_s *pActivator, const vec3_t *vStart, const vec3_t *vEnd, int iDamage, int iMOD)
{
  ?G_Trigger_DamageGrenadeTouch@@YAXPEAUgentity_s@@AEBTvec3_t@@1HH@Z(pActivator, vStart, vEnd, iDamage, iMOD);
}

/*
==============
SP_trigger_use
==============
*/

void __fastcall SP_trigger_use(gentity_s *ent)
{
  ?SP_trigger_use@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Trigger_HurtTouch
==============
*/

void __fastcall G_Trigger_HurtTouch(gentity_s *self, gentity_s *other, int bTouched)
{
  ?G_Trigger_HurtTouch@@YAXPEAUgentity_s@@0H@Z(self, other, bTouched);
}

/*
==============
G_Trigger_DamagePain
==============
*/

void __fastcall G_Trigger_DamagePain(gentity_s *pSelf, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod, const vec3_t *vDir, const hitLocation_t hitLoc, const Weapon *r_weapon, bool isAlternate)
{
  ?G_Trigger_DamagePain@@YAXPEAUgentity_s@@0HPEBTvec3_t@@H1W4hitLocation_t@@AEBUWeapon@@_N@Z(pSelf, pAttacker, iDamage, vPoint, iMod, vDir, hitLoc, r_weapon, isAlternate);
}

/*
==============
SP_trigger_radius
==============
*/

void __fastcall SP_trigger_radius(gentity_s *ent)
{
  ?SP_trigger_radius@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Trigger_RegisterMathTrigger
==============
*/

void __fastcall G_Trigger_RegisterMathTrigger(unsigned __int16 entNum)
{
  ?G_Trigger_RegisterMathTrigger@@YAXG@Z(entNum);
}

/*
==============
G_Trigger_Write
==============
*/

void __fastcall G_Trigger_Write(MemoryFile *memFile)
{
  ?G_Trigger_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SP_trigger_use_touch
==============
*/

void __fastcall SP_trigger_use_touch(gentity_s *ent)
{
  ?SP_trigger_use_touch@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
SP_trigger_multiple
==============
*/

void __fastcall SP_trigger_multiple(gentity_s *ent)
{
  ?SP_trigger_multiple@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Trigger_MathTriggerAABBQuery
==============
*/

void __fastcall G_Trigger_MathTriggerAABBQuery(const vec3_t *aabbMin, const vec3_t *aabbMax, int contents, unsigned int maxCollectedEnts, unsigned int *outNumCollectedEnts, unsigned __int16 *outCollectedEnts)
{
  ?G_Trigger_MathTriggerAABBQuery@@YAXAEBTvec3_t@@0HIPEAIPEAG@Z(aabbMin, aabbMax, contents, maxCollectedEnts, outNumCollectedEnts, outCollectedEnts);
}

/*
==============
G_Trigger_UnRegisterMathTrigger
==============
*/

void __fastcall G_Trigger_UnRegisterMathTrigger(unsigned __int16 entNum)
{
  ?G_Trigger_UnRegisterMathTrigger@@YAXG@Z(entNum);
}

/*
==============
G_Trigger_SetHintFieldsForSpawn
==============
*/

void __fastcall G_Trigger_SetHintFieldsForSpawn(gentity_s *self)
{
  ?G_Trigger_SetHintFieldsForSpawn@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_Trigger_DamageSpawn
==============
*/

void __fastcall G_Trigger_DamageSpawn(gentity_s *pSelf)
{
  ?G_Trigger_DamageSpawn@@YAXPEAUgentity_s@@@Z(pSelf);
}

/*
==============
G_Trigger_InitSystem
==============
*/

void G_Trigger_InitSystem(void)
{
  ?G_Trigger_InitSystem@@YAXXZ();
}

/*
==============
G_Trigger_DamageDie
==============
*/

void __fastcall G_Trigger_DamageDie(gentity_s *pSelf, const gentity_s *pInflictor, gentity_s *pAttacker, int iDamage, int iDamageFlags, int iMod, const Weapon *r_weapon, bool isAlternate, const vec3_t *vDir, const hitLocation_t hitLoc, int timeOffset)
{
  ?G_Trigger_DamageDie@@YAXPEAUgentity_s@@PEBU1@0HHHAEBUWeapon@@_NPEBTvec3_t@@W4hitLocation_t@@H@Z(pSelf, pInflictor, pAttacker, iDamage, iDamageFlags, iMod, r_weapon, isAlternate, vDir, hitLoc, timeOffset);
}

/*
==============
G_Trigger_HurtSpawn
==============
*/

void __fastcall G_Trigger_HurtSpawn(gentity_s *self)
{
  ?G_Trigger_HurtSpawn@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_IsTriggerModelType
==============
*/

bool __fastcall G_IsTriggerModelType(gentity_s *ent)
{
  return ?G_IsTriggerModelType@@YA_NPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Trigger_DamageUse
==============
*/

void __fastcall G_Trigger_DamageUse(gentity_s *pEnt, gentity_s *pOther, gentity_s *pActivator)
{
  ?G_Trigger_DamageUse@@YAXPEAUgentity_s@@00@Z(pEnt, pOther, pActivator);
}

/*
==============
SP_trigger_disk
==============
*/

void __fastcall SP_trigger_disk(gentity_s *ent)
{
  ?SP_trigger_disk@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Trigger_DamageCheckHit
==============
*/

void __fastcall G_Trigger_DamageCheckHit(const Physics_WorldId physicsWorld, gentity_s *pActivator, bool isFirstTrace, const vec3_t *vStart, const vec3_t *vEnd, int iDamage, int iMOD)
{
  ?G_Trigger_DamageCheckHit@@YAXW4Physics_WorldId@@PEAUgentity_s@@_NAEBTvec3_t@@3HH@Z(physicsWorld, pActivator, isFirstTrace, vStart, vEnd, iDamage, iMOD);
}

/*
==============
G_Trigger_IsTeamTrigger
==============
*/

bool __fastcall G_Trigger_IsTeamTrigger(gentity_s *self, team_t team)
{
  return ?G_Trigger_IsTeamTrigger@@YA_NPEAUgentity_s@@W4team_t@@@Z(self, team);
}

/*
==============
G_Trigger_HurtUse
==============
*/

void __fastcall G_Trigger_HurtUse(gentity_s *self, gentity_s *other, gentity_s *activator)
{
  ?G_Trigger_HurtUse@@YAXPEAUgentity_s@@00@Z(self, other, activator);
}

/*
==============
G_Trigger_Read
==============
*/

void __fastcall G_Trigger_Read(SaveGame *save)
{
  ?G_Trigger_Read@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
SP_trigger_rotatable_radius
==============
*/

void __fastcall SP_trigger_rotatable_radius(gentity_s *ent)
{
  ?SP_trigger_rotatable_radius@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
multi_trigger
==============
*/

void __fastcall multi_trigger(gentity_s *ent, gentity_s *activator)
{
  ?multi_trigger@@YAXPEAUgentity_s@@0@Z(ent, activator);
}

/*
==============
G_Trigger_OnceSpawn
==============
*/

void __fastcall G_Trigger_OnceSpawn(gentity_s *ent)
{
  ?G_Trigger_OnceSpawn@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_IsTriggerModelType
==============
*/
bool G_IsTriggerModelType(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 131, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return (unsigned __int8)(ent->r.modelType - 1) <= 3u;
}

/*
==============
G_Trigger
==============
*/
void G_Trigger(gentity_s *self, gentity_s *other)
{
  signed __int64 v4; 
  signed __int64 v5; 
  const scrContext_t *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = self - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    v10 = 2048;
    LODWORD(v8) = self - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  v4 = (__int16)v4;
  if ( (unsigned int)(__int16)v4 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 277, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( self ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( self ) )") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = other - g_entities;
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v8) = other - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = (__int16)v5;
  if ( (unsigned int)(__int16)v5 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 278, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( other ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( other ) )") )
    __debugbreak();
  v6 = ScriptContext_Server();
  if ( Scr_IsSystemActive(v6, 1u) )
  {
    if ( level.pendingTriggerListSize == 512 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 284, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MAX_TRIGGER_LIST_SIZE exceeded") )
        __debugbreak();
      GScr_AddEntity(other);
      GScr_Notify(self, scr_const.trigger, 1u);
    }
    else
    {
      v7 = level.pendingTriggerListSize++;
      level.pendingTriggerList[v7].entnum = self->s.number;
      level.pendingTriggerList[v7].otherEntnum = other->s.number;
      level.pendingTriggerList[v7].useCount = self->useCount;
      level.pendingTriggerList[v7].otherUseCount = other->useCount;
    }
  }
}

/*
==============
G_Trigger_ActivateDamage
==============
*/
void G_Trigger_ActivateDamage(gentity_s *pEnt, gentity_s *pOther, int iDamage, int iMOD)
{
  int ammoCount; 
  int spawnflags; 
  unsigned int v10; 
  int v11; 
  int v12; 
  int v13; 

  ammoCount = pEnt->c.item[0].ammoCount;
  if ( ammoCount <= 0 || iDamage >= ammoCount )
  {
    spawnflags = pEnt->spawnflags;
    if ( ((spawnflags & 1) == 0 || iMOD != 1) && ((spawnflags & 2) == 0 || iMOD != 2) )
    {
      v10 = iMOD - 4;
      if ( ((spawnflags & 4) == 0 || v10 > 3) && ((spawnflags & 8) == 0 || iMOD != 3 && iMOD != 16 && (Com_GameMode_SupportsFeature((Com_GameMode_Feature)192) || v10 > 3)) )
      {
        v11 = pEnt->spawnflags;
        if ( ((v11 & 0x10) == 0 || ((iMOD - 5) & 0xFFFFFFFD) != 0) && ((v11 & 0x20) == 0 || iMOD != 8) && ((v11 & 0x100) == 0 || iMOD && (unsigned int)(iMOD - 12) > 3) )
        {
          v12 = pEnt->c.item[0].clipAmmoCount[0];
          v13 = pEnt->health - iDamage;
          pEnt->health = v13;
          if ( !v12 || 32000 - v13 >= v12 )
          {
            if ( iMOD != -1 )
            {
              G_Trigger(pEnt, pOther);
              v11 = pEnt->spawnflags;
            }
            pEnt->health = 32000;
            if ( (v11 & 0x200) != 0 )
              pEnt->flags.m_flags[0] |= 0x20000u;
          }
        }
      }
    }
  }
}

/*
==============
G_Trigger_DamageCheckHit
==============
*/
void G_Trigger_DamageCheckHit(const Physics_WorldId physicsWorld, gentity_s *pActivator, bool isFirstTrace, const vec3_t *vStart, const vec3_t *vEnd, int iDamage, int iMOD)
{
  signed __int64 v7; 
  void *v8; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  unsigned int i; 
  gentity_s *v31; 
  unsigned int Instance; 
  float v33; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  vec3_t *end; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t dir; 
  Bounds bounds; 
  __int16 v41[2048]; 

  v8 = alloca(v7);
  end = (vec3_t *)vEnd;
  if ( (unsigned int)iMOD >= 0x19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 932, ASSERT_TYPE_ASSERT, "(unsigned)( iMOD ) < (unsigned)( MOD_NUM )", "iMOD doesn't index MOD_NUM\n\t%i not in [0, %i)", iMOD, 25) )
    __debugbreak();
  if ( !*g_combat_modNames[iMOD] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 933, ASSERT_TYPE_ASSERT, "(*g_combat_modNames[iMOD] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*g_combat_modNames[iMOD] != NULL_SCR_STRING") )
    __debugbreak();
  v12 = vStart->v[1];
  v13 = vStart->v[2];
  v14 = vEnd->v[2];
  v15 = vStart->v[0];
  v16 = vEnd->v[1];
  v17 = (float)(vStart->v[0] + vEnd->v[0]) * 0.5;
  v18 = (float)(v12 + v16) * 0.5;
  v19 = (float)(v13 + v14) * 0.5;
  v21 = LODWORD(v16);
  v20 = v16 - v12;
  LODWORD(v22) = COERCE_UNSIGNED_INT(v13 - v19) & _xmm;
  v23 = vEnd->v[0] - vStart->v[0];
  LODWORD(v24) = COERCE_UNSIGNED_INT(v12 - v18) & _xmm;
  v25 = v14 - v13;
  collectedEnts.countMax = 2048;
  collectedEnts.ids = (unsigned __int16 *)v41;
  LODWORD(v26) = COERCE_UNSIGNED_INT(v15 - v17) & _xmm;
  *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)(v23 * v23)) + (float)(v25 * v25));
  _XMM3 = v21;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  dir.v[0] = v23 * (float)(1.0 / *(float *)&_XMM0);
  dir.v[2] = v25 * (float)(1.0 / *(float *)&_XMM0);
  dir.v[1] = v20 * (float)(1.0 / *(float *)&_XMM0);
  aabbMin.v[1] = v18 - v24;
  aabbMin.v[0] = v17 - v26;
  aabbMax.v[0] = v26 + v17;
  aabbMin.v[2] = v19 - v22;
  collectedEnts.count = 0;
  aabbMax.v[2] = v22 + v19;
  aabbMax.v[1] = v24 + v18;
  PhysicsQuery_TriggerAABBBroadphaseQuery(physicsWorld, &aabbMin, &aabbMax, 0x400000, &collectedEnts, NULL);
  for ( i = 0; i < collectedEnts.count; ++i )
  {
    v31 = &g_entities[(unsigned __int16)v41[i]];
    if ( v31->classname == scr_const.trigger_damage )
    {
      Instance = G_PhysicsObject_GetInstance(physicsWorld, v31->s.number);
      if ( PhysicsQuery_LegacyEntitySightTrace(physicsWorld, vStart, end, &bounds_origin, -1, Instance, v31->s.number) )
      {
        if ( !isFirstTrace || (v33 = vStart->v[1], bounds.midPoint.v[0] = vStart->v[0], bounds.midPoint.v[2] = vStart->v[2], bounds.midPoint.v[1] = v33, bounds.halfSize.v[0] = 0.0, bounds.halfSize.v[1] = 0.0, bounds.halfSize.v[2] = 0.0, !PhysicsQuery_LegacyEntityContactCapsule(physicsWorld, &bounds, Instance, v31)) )
        {
          G_Combat_DamageNotifyNoWeapon(scr_const.damage, v31, pActivator, pActivator, &dir, NULL, iDamage, iMOD);
          G_Trigger_ActivateDamage(v31, pActivator, iDamage, iMOD);
          if ( !v31->c.item[0].clipAmmoCount[0] )
            v31->health = 32000;
        }
      }
    }
  }
}

/*
==============
G_Trigger_DamageDie
==============
*/
void G_Trigger_DamageDie(gentity_s *pSelf, const gentity_s *pInflictor, gentity_s *pAttacker, int iDamage, int iDamageFlags, int iMod)
{
  G_Trigger_ActivateDamage(pSelf, pAttacker, iDamage, iMod);
  if ( !pSelf->c.item[0].clipAmmoCount[0] )
    pSelf->health = 32000;
}

/*
==============
G_Trigger_DamageGrenadeTouch
==============
*/
void G_Trigger_DamageGrenadeTouch(gentity_s *pActivator, const vec3_t *vStart, const vec3_t *vEnd, int iDamage, int iMOD)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v13; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  unsigned int i; 
  gentity_s *v28; 
  unsigned int Instance; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t dir; 
  __int16 v34[2048]; 

  v5 = vStart->v[2];
  v6 = vStart->v[1];
  v7 = vEnd->v[2];
  v8 = vEnd->v[1];
  v9 = vStart->v[0];
  v13 = vEnd->v[0] - vStart->v[0];
  v15 = (float)(vStart->v[0] + vEnd->v[0]) * 0.5;
  v16 = (float)(v6 + v8) * 0.5;
  v17 = (float)(v5 + v7) * 0.5;
  LODWORD(v18) = COERCE_UNSIGNED_INT(v5 - v17) & _xmm;
  LODWORD(v19) = COERCE_UNSIGNED_INT(v6 - v16) & _xmm;
  v21 = LODWORD(v8);
  v20 = v8 - v6;
  v22 = v7 - v5;
  collectedEnts.ids = (unsigned __int16 *)v34;
  LODWORD(v23) = COERCE_UNSIGNED_INT(v9 - v15) & _xmm;
  *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)(v13 * v13)) + (float)(v22 * v22));
  _XMM3 = v21;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  dir.v[0] = v13 * (float)(1.0 / *(float *)&_XMM0);
  dir.v[2] = v22 * (float)(1.0 / *(float *)&_XMM0);
  dir.v[1] = v20 * (float)(1.0 / *(float *)&_XMM0);
  aabbMin.v[1] = v16 - v19;
  aabbMin.v[0] = v15 - v23;
  aabbMax.v[0] = v23 + v15;
  aabbMin.v[2] = v17 - v18;
  collectedEnts.count = 0;
  aabbMax.v[2] = v18 + v17;
  aabbMax.v[1] = v19 + v16;
  collectedEnts.countMax = 2048;
  PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 0x400000, &collectedEnts, NULL);
  for ( i = 0; i < collectedEnts.count; ++i )
  {
    v28 = &g_entities[(unsigned __int16)v34[i]];
    if ( v28->classname == scr_const.trigger_damage && (v28->flags.m_flags[0] & 0x2000) != 0 )
    {
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v28->s.number);
      if ( PhysicsQuery_LegacyEntitySightTrace(PHYSICS_WORLD_ID_FIRST, vStart, vEnd, &bounds_origin, -1, Instance, v28->s.number) )
      {
        G_Combat_DamageNotifyNoWeapon(scr_const.damage, v28, pActivator, pActivator, &dir, NULL, iDamage, iMOD);
        G_Trigger_ActivateDamage(v28, pActivator, iDamage, iMOD);
        if ( !v28->c.item[0].clipAmmoCount[0] )
          v28->health = 32000;
      }
    }
  }
}

/*
==============
G_Trigger_DamagePain
==============
*/
void G_Trigger_DamagePain(gentity_s *pSelf, gentity_s *pAttacker, int iDamage, const vec3_t *vPoint, const int iMod)
{
  G_Trigger_ActivateDamage(pSelf, pAttacker, iDamage, iMod);
  if ( !pSelf->c.item[0].clipAmmoCount[0] )
    pSelf->health = 32000;
}

/*
==============
G_Trigger_DamageSpawn
==============
*/
void G_Trigger_DamageSpawn(gentity_s *pSelf)
{
  float out; 

  G_SpawnInt(0x19u, "0", pSelf->c.item[0].clipAmmoCount);
  G_SpawnInt(0x440u, "0", (int *)&pSelf->c);
  pSelf->health = 32000;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&pSelf->s.lerp.eFlags, ACTIVE, 0x10u);
  pSelf->handler = 7;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &out) && out <= 0.0 )
    pSelf->spawnflags |= 0x200u;
  if ( InitTrigger(pSelf) )
    SV_LinkEntity(pSelf);
}

/*
==============
G_Trigger_DamageUse
==============
*/
void G_Trigger_DamageUse(gentity_s *pEnt, gentity_s *pOther, gentity_s *pActivator)
{
  int ammoCount; 
  int v5; 
  int v6; 
  int v7; 
  bool v8; 

  ammoCount = pEnt->c.item[0].ammoCount;
  v5 = pEnt->c.item[0].clipAmmoCount[0] + 1;
  if ( ammoCount <= 0 || v5 >= ammoCount )
  {
    if ( (pEnt->spawnflags & 8) != 0 )
      Com_GameMode_SupportsFeature((Com_GameMode_Feature)192);
    v6 = pEnt->c.item[0].clipAmmoCount[0];
    v7 = pEnt->health - v5;
    pEnt->health = v7;
    if ( !v6 || 32000 - v7 >= v6 )
    {
      v8 = (pEnt->spawnflags & 0x200) == 0;
      pEnt->health = 32000;
      if ( !v8 )
        pEnt->flags.m_flags[0] |= 0x20000u;
    }
  }
}

/*
==============
G_Trigger_HurtSpawn
==============
*/
void G_Trigger_HurtSpawn(gentity_s *self)
{
  if ( InitTrigger(self) )
  {
    if ( !self->c.spawner.count )
      self->c.spawner.count = 5;
    self->c.trigger.flags |= 0x1Eu;
    UpdateTriggerContents(self);
    SV_LinkEntity(self);
    self->handler = ((self->spawnflags & 1) == 0) + 5;
  }
}

/*
==============
G_Trigger_HurtTouch
==============
*/
void G_Trigger_HurtTouch(gentity_s *self, gentity_s *other, int bTouched)
{
  int health; 
  GCombat_vtbl *v6; 
  playerState_s *EntityPlayerState; 
  int count; 
  __int16 v9; 

  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&other->s.lerp.eFlags, ACTIVE, 0x10u) && ((self->spawnflags & 2) == 0 || !other->actor || !Com_GameMode_SupportsFeature((Com_GameMode_Feature)192)) && self->c.item[0].clipAmmoCount[1] <= level.time )
  {
    Com_GameMode_SupportsFeature((Com_GameMode_Feature)192);
    G_Trigger(self, other);
    health = other->health;
    if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
      __debugbreak();
    v6 = GCombat::ms_gCombatSystem->__vftable;
    count = self->c.spawner.count;
    v9 = 0;
    v6->Damage(GCombat::ms_gCombatSystem, other, self, self, NULL, NULL, count, 0, 15, &NULL_WEAPON, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, (const GExtraDamageParams *)&v9);
    if ( health != other->health )
    {
      if ( (self->spawnflags & 0x10) != 0 )
      {
        self->c.item[0].clipAmmoCount[1] = level.time + 1000;
      }
      else
      {
        if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
          __debugbreak();
        self->c.item[0].clipAmmoCount[1] = level.time + level.frameDuration;
      }
    }
    if ( other->health <= 0 && ((other->s.eType - 1) & 0xFFEF) == 0 )
    {
      EntityPlayerState = G_GetEntityPlayerState(other);
      if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 656, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&EntityPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x32u);
    }
    if ( (self->spawnflags & 0x20) != 0 )
    {
      if ( self->handler != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 663, ASSERT_TYPE_ASSERT, "(self->handler == ENT_HANDLER_TRIGGER_HURT_TOUCH)", (const char *)&queryFormat, "self->handler == ENT_HANDLER_TRIGGER_HURT_TOUCH") )
        __debugbreak();
      self->handler = 5;
    }
  }
}

/*
==============
G_Trigger_HurtUse
==============
*/
void G_Trigger_HurtUse(gentity_s *self, gentity_s *other, gentity_s *activator)
{
  unsigned __int8 handler; 

  handler = self->handler;
  if ( handler == 6 )
  {
    self->handler = 5;
  }
  else
  {
    if ( handler != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 677, ASSERT_TYPE_ASSERT, "(self->handler == ENT_HANDLER_TRIGGER_HURT)", (const char *)&queryFormat, "self->handler == ENT_HANDLER_TRIGGER_HURT") )
      __debugbreak();
    self->handler = 6;
  }
}

/*
==============
G_Trigger_InitSystem
==============
*/
void G_Trigger_InitSystem(void)
{
  s_numMathTriggers = 0;
}

/*
==============
G_Trigger_IsTeamTrigger
==============
*/
char G_Trigger_IsTeamTrigger(gentity_s *self, team_t team)
{
  if ( !self )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 402, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 131, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
  }
  if ( (unsigned __int8)(self->r.modelType - 1) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 403, ASSERT_TYPE_ASSERT, "( G_IsTriggerModelType( self ) )", (const char *)&queryFormat, "G_IsTriggerModelType( self )") )
    __debugbreak();
  if ( (self->c.trigger.flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 404, ASSERT_TYPE_ASSERT, "( self->c.trigger.flags & (1<<1) )", (const char *)&queryFormat, "self->c.trigger.flags & TR_FLAG_SENTIENT_TRIGGER") )
    __debugbreak();
  switch ( team )
  {
    case TEAM_ZERO:
      return 1;
    case TEAM_ONE:
      return self->spawnflags & 1;
    case TEAM_TWO:
      return (self->spawnflags & 2) != 0;
  }
  if ( (unsigned int)(team - 3) > 1 )
    return 0;
  return (self->spawnflags & 4) != 0;
}

/*
==============
G_Trigger_MathTriggerAABBQuery
==============
*/
void G_Trigger_MathTriggerAABBQuery(const vec3_t *aabbMin, const vec3_t *aabbMax, int contents, unsigned int maxCollectedEnts, unsigned int *outNumCollectedEnts, unsigned __int16 *outCollectedEnts)
{
  __int64 v6; 
  unsigned int v7; 
  __int64 entNum; 
  gentity_s *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v28; 
  float v29; 
  float v30; 

  v6 = 0i64;
  v7 = maxCollectedEnts;
  while ( (unsigned int)v6 < s_numMathTriggers )
  {
    if ( *outNumCollectedEnts >= v7 )
      return;
    entNum = s_mathTriggers[v6].entNum;
    v11 = &g_entities[entNum];
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v11->s.lerp.eFlags, ACTIVE, 0) && ((2 * (v11->c.trigger.flags & 4 | ((v11->c.trigger.flags & 2 | (4 * (v11->c.trigger.flags & 8 | ((v11->c.trigger.flags & 0x10) << 7)))) << 16))) & contents) != 0 )
    {
      switch ( v11->r.modelType )
      {
        case 1u:
          _XMM0 = LODWORD(v11->r.box.halfSize.v[1]);
          __asm
          {
            vmaxss  xmm1, xmm0, dword ptr [rbx+10Ch]
            vmaxss  xmm3, xmm1, dword ptr [rbx+114h]
          }
          v28 = v11->r.currentOrigin.v[0] + v11->r.box.midPoint.v[0];
          if ( (float)(v28 - *(float *)&_XMM3) <= aabbMax->v[0] && (float)(v28 + *(float *)&_XMM3) >= aabbMin->v[0] )
          {
            v29 = v11->r.currentOrigin.v[1] + v11->r.box.midPoint.v[1];
            if ( (float)(v29 - *(float *)&_XMM3) <= aabbMax->v[1] && (float)(v29 + *(float *)&_XMM3) >= aabbMin->v[1] )
            {
              v30 = v11->r.currentOrigin.v[2] + v11->r.box.midPoint.v[2];
              if ( (float)(v30 - *(float *)&_XMM3) <= aabbMax->v[2] && (float)(v30 + *(float *)&_XMM3) >= aabbMin->v[2] )
              {
LABEL_26:
                if ( ((int)entNum < 0 || (unsigned int)entNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)entNum, "signed", entNum) )
                  __debugbreak();
                outCollectedEnts[(*outNumCollectedEnts)++] = entNum;
              }
            }
          }
          break;
        case 2u:
          _XMM0 = LODWORD(v11->r.box.midPoint.v[1]);
          __asm { vmaxss  xmm1, xmm0, dword ptr [rbx+100h] }
          _XMM0 = LODWORD(v11->r.box.halfSize.v[1]);
          __asm
          {
            vmaxss  xmm3, xmm1, dword ptr [rbx+108h]
            vmaxss  xmm1, xmm0, dword ptr [rbx+10Ch]
            vmaxss  xmm2, xmm1, dword ptr [rbx+114h]
          }
          v21 = v11->r.currentOrigin.v[0];
          v22 = COERCE_FLOAT(_XMM3 & _xmm) + *(float *)&_XMM2;
          if ( (float)(v21 - v22) <= aabbMax->v[0] && (float)(v21 + v22) >= aabbMin->v[0] )
          {
            v23 = v11->r.currentOrigin.v[1];
            if ( (float)(v23 - v22) <= aabbMax->v[1] && (float)(v23 + v22) >= aabbMin->v[1] )
            {
              v24 = v11->r.currentOrigin.v[2];
              if ( (float)(v24 - v22) <= aabbMax->v[2] && (float)(v24 + v22) >= aabbMin->v[2] )
                goto LABEL_26;
            }
          }
          break;
        case 3u:
          v12 = v11->r.box.halfSize.v[0];
          v13 = v11->r.currentOrigin.v[0];
          if ( (float)(v13 - v12) <= aabbMax->v[0] && (float)(v13 + v12) >= aabbMin->v[0] )
          {
            v14 = v11->r.currentOrigin.v[1];
            if ( (float)(v14 - v12) <= aabbMax->v[1] && (float)(v14 + v12) >= aabbMin->v[1] )
              goto LABEL_26;
          }
          break;
      }
    }
    v7 = maxCollectedEnts;
    v6 = (unsigned int)(v6 + 1);
  }
}

/*
==============
G_Trigger_MultiTouch
==============
*/
void G_Trigger_MultiTouch(gentity_s *self, gentity_s *other, int bTouched)
{
  G_Trigger(self, other);
  if ( (self->spawnflags & 0x40) != 0 )
    self->flags.m_flags[0] |= 0x20000u;
}

/*
==============
G_Trigger_OnceSpawn
==============
*/
void G_Trigger_OnceSpawn(gentity_s *ent)
{
  ent->spawnflags |= 0x40u;
  ent->handler = 4;
  if ( InitTrigger(ent) )
    InitSentientTrigger(ent);
}

/*
==============
G_Trigger_Read
==============
*/
void G_Trigger_Read(SaveGame *save)
{
  MemoryFile *p_memFile; 
  unsigned int p; 

  p_memFile = &save->memFile;
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  s_numMathTriggers = p;
  MemFile_ReadData(p_memFile, 2i64 * p, s_mathTriggers);
}

/*
==============
G_Trigger_RegisterMathTrigger
==============
*/
void G_Trigger_RegisterMathTrigger(unsigned __int16 entNum)
{
  unsigned int v1; 

  v1 = s_numMathTriggers;
  if ( s_numMathTriggers >= 0x200 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7980, 927i64, 512i64);
    v1 = s_numMathTriggers;
  }
  s_numMathTriggers = v1 + 1;
  s_mathTriggers[v1].entNum = entNum;
}

/*
==============
G_Trigger_SetHintFieldsForSpawn
==============
*/
void G_Trigger_SetHintFieldsForSpawn(gentity_s *self)
{
  int v2; 
  char *v3; 
  __int64 v4; 
  const char *v5; 
  signed __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  int BindingForCommand; 
  int v13; 
  scrContext_t *v14; 
  const char *v15; 
  const dvar_t *v16; 
  unsigned int v17; 
  int integer; 
  char *s0; 
  char *out; 
  char dest[16]; 

  if ( G_LevelSpawnString(0x111u, (const char *)&queryFormat.fmt + 3, (const char **)&s0) )
  {
    if ( I_stricmp(s0, "HINT_NODISPLAY") )
    {
      v2 = 1;
LABEL_5:
      v3 = s0;
      v4 = 0x7FFFFFFFi64;
      v5 = hintStrings[v2];
      if ( !s0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v6 = v3 - v5;
      do
      {
        v7 = (unsigned __int8)v5[v6];
        v8 = v4;
        v9 = *(unsigned __int8 *)v5++;
        --v4;
        if ( !v8 )
          break;
        if ( v7 != v9 )
        {
          v10 = v7 + 32;
          if ( (unsigned int)(v7 - 65) > 0x19 )
            v10 = v7;
          v7 = v10;
          v11 = v9 + 32;
          if ( (unsigned int)(v9 - 65) > 0x19 )
            v11 = v9;
          if ( v7 != v11 )
          {
            if ( ++v2 >= 6 )
              goto LABEL_24;
            goto LABEL_5;
          }
        }
      }
      while ( v7 );
      if ( (unsigned int)(v2 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v2, "signed", v2) )
        __debugbreak();
      self->hint.hintType = v2;
    }
    else
    {
      self->hint.hintType = 3;
    }
  }
LABEL_24:
  out = NULL;
  if ( G_LevelSpawnString(0x471u, (const char *)&queryFormat.fmt + 3, (const char **)&out) )
  {
    BindingForCommand = Com_Keys_GetBindingForCommand(out);
    v13 = BindingForCommand;
    if ( (BindingForCommand & 1) == 0 || (unsigned int)(BindingForCommand - 117) <= 0x83 || BindingForCommand >= 255 || !BindingForCommand )
    {
      v14 = ScriptContext_Server();
      v15 = j_va("Failed to spawn trigger_use; useCommand value is invalid (%s).", out);
      Scr_Error(COM_ERR_3433, v14, v15);
    }
    self->hint.useBinding = v13;
  }
  v16 = DCONST_DVARMPINT_g_defaultUsePriority;
  if ( !DCONST_DVARMPINT_g_defaultUsePriority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_defaultUsePriority") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  integer = v16->current.integer;
  Com_sprintf(dest, 0x10ui64, "%i", (unsigned int)integer);
  G_SpawnInt(0x472u, dest, &integer);
  self->hint.priority = integer;
  *(_QWORD *)&self->hint.hintString = 0i64;
  if ( G_LevelSpawnString(0x1F2u, (const char *)&queryFormat.fmt + 3, (const char **)&s0) )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v17 = GConfigStrings::ms_gConfigStrings->GetHintStringIndex(GConfigStrings::ms_gConfigStrings, s0);
    if ( !v17 )
      Com_PrintError(15, "Could not find or allocate hint string for trigger_use entities for '%s'. See console log for details.\n", s0);
    self->hint.hintString = v17;
  }
}

/*
==============
G_Trigger_UnRegisterMathTrigger
==============
*/
void G_Trigger_UnRegisterMathTrigger(unsigned __int16 entNum)
{
  unsigned int v1; 
  int v2; 
  MathTrigger *i; 

  v1 = s_numMathTriggers;
  v2 = 0;
  if ( s_numMathTriggers )
  {
    for ( i = s_mathTriggers; i->entNum != entNum; ++i )
    {
      if ( ++v2 >= s_numMathTriggers )
        return;
    }
    --s_numMathTriggers;
    s_mathTriggers[v2] = s_mathTriggers[v1 - 1];
  }
}

/*
==============
G_Trigger_Write
==============
*/
void G_Trigger_Write(MemoryFile *memFile)
{
  unsigned int p; 

  p = s_numMathTriggers;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 2i64 * s_numMathTriggers, s_mathTriggers);
}

/*
==============
InitSentientTrigger
==============
*/
void InitSentientTrigger(gentity_s *self)
{
  int spawnflags; 
  unsigned __int8 v3; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 372, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  spawnflags = self->spawnflags;
  v3 = self->c.trigger.flags & 0xE1;
  self->c.trigger.flags = v3;
  if ( (spawnflags & 8) == 0 )
  {
    v3 |= 0x10u;
    self->c.trigger.flags = v3;
  }
  if ( (spawnflags & 7) != 0 )
    self->c.trigger.flags = v3 | 2;
  if ( (spawnflags & 0x10) != 0 && Com_GameMode_SupportsFeature((Com_GameMode_Feature)192) )
    self->c.trigger.flags |= 4u;
  UpdateTriggerContents(self);
  SV_LinkEntity(self);
}

/*
==============
InitTrigger
==============
*/
char InitTrigger(gentity_s *self)
{
  char result; 
  vec3_t trBase; 

  if ( (self->spawnflags & 0x180) == 128 )
  {
    G_FreeEntity(self);
    return 0;
  }
  else if ( SV_Game_SetTriggerModel(self) )
  {
    self->c.trigger.flags |= 0x1Eu;
    self->r.svFlags = 1;
    UpdateTriggerContents(self);
    if ( !self->model )
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0xCu);
    return 1;
  }
  else
  {
    Trajectory_GetTrBase(&self->s.lerp.pos, &trBase);
    Com_PrintError(1, "Killing trigger at (%f %f %f) because the brush model is invalid.\n", trBase.v[0], trBase.v[1], trBase.v[2]);
    G_FreeEntity(self);
    result = 0;
    memset(&trBase, 0, sizeof(trBase));
  }
  return result;
}

/*
==============
SP_trigger_disk
==============
*/
void SP_trigger_disk(gentity_s *ent)
{
  float v2; 
  unsigned __int16 v3; 
  unsigned int v4; 
  __int16 v5; 
  float out; 
  float v7; 

  if ( !G_SpawnFloat(0x30Eu, (const char *)&queryFormat.fmt + 3, &out) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7E80, 932i64, ent->r.currentOrigin.v[0], ent->r.currentOrigin.v[1], ent->r.currentOrigin.v[2]);
  v2 = out + 64.0;
  ent->handler = 4;
  *(_QWORD *)ent->r.box.midPoint.v = 0i64;
  ent->r.box.midPoint.v[2] = 0.0;
  ent->r.box.halfSize.v[0] = v2;
  ent->r.box.halfSize.v[1] = v2;
  ent->r.box.halfSize.v[2] = 100000.0;
  out = v2;
  if ( ent->r.isLinked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 576, ASSERT_TYPE_ASSERT, "(!ent->r.isLinked)", (const char *)&queryFormat, "!ent->r.isLinked") )
    __debugbreak();
  *(_WORD *)&ent->r.modelType = 259;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &v7) && v7 <= 0.0 )
    ent->spawnflags |= 0x40u;
  InitSentientTrigger(ent);
  v3 = truncate_cast<unsigned short,short>(ent->s.number);
  v4 = s_numMathTriggers;
  v5 = v3;
  if ( s_numMathTriggers >= 0x200 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7980, 927i64, 512i64);
    v4 = s_numMathTriggers;
  }
  s_numMathTriggers = v4 + 1;
  s_mathTriggers[v4].entNum = v5;
}

/*
==============
SP_trigger_multiple
==============
*/
void SP_trigger_multiple(gentity_s *ent)
{
  float out; 

  ent->handler = 4;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &out) && out <= 0.0 )
    ent->spawnflags |= 0x40u;
  if ( InitTrigger(ent) )
    InitSentientTrigger(ent);
}

/*
==============
SP_trigger_radius
==============
*/
void SP_trigger_radius(gentity_s *ent)
{
  scrContext_t *v2; 
  double Float; 
  double v4; 
  float v5; 
  float v6; 
  unsigned __int16 v7; 
  unsigned int v8; 
  __int16 v9; 
  float v10; 
  float out; 
  float v12; 

  if ( level.spawnVar.spawnVarsValid )
  {
    if ( !G_SpawnFloat(0x30Eu, (const char *)&queryFormat.fmt + 3, &out) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7C00, 928i64, ent->r.currentOrigin.v[0], ent->r.currentOrigin.v[1], ent->r.currentOrigin.v[2]);
    if ( !G_SpawnFloat(0x1E9u, (const char *)&queryFormat.fmt + 3, &v10) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7C60, 929i64, ent->r.currentOrigin.v[0], ent->r.currentOrigin.v[1], ent->r.currentOrigin.v[2]);
  }
  else
  {
    v2 = ScriptContext_Server();
    if ( Scr_GetNumParam(v2) < 5 )
      Scr_Error(COM_ERR_3431, v2, "USAGE: spawn( \"trigger_radius\", <origin>, <spawnflags>, <radius>, <height> )");
    Float = Scr_GetFloat(v2, 3u);
    out = *(float *)&Float;
    v4 = Scr_GetFloat(v2, 4u);
    v10 = *(float *)&v4;
  }
  v5 = v10 * 0.5;
  v6 = out;
  ent->handler = 4;
  ent->r.box.midPoint.v[2] = v5;
  *(_QWORD *)ent->r.box.midPoint.v = 0i64;
  ent->r.box.halfSize.v[0] = v6;
  ent->r.box.halfSize.v[1] = v6;
  ent->r.box.halfSize.v[2] = v5;
  if ( ent->r.isLinked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 496, ASSERT_TYPE_ASSERT, "(!ent->r.isLinked)", (const char *)&queryFormat, "!ent->r.isLinked") )
    __debugbreak();
  *(_WORD *)&ent->r.modelType = 257;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &v12) && v12 <= 0.0 )
    ent->spawnflags |= 0x40u;
  InitSentientTrigger(ent);
  v7 = truncate_cast<unsigned short,short>(ent->s.number);
  v8 = s_numMathTriggers;
  v9 = v7;
  if ( s_numMathTriggers >= 0x200 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7980, 927i64, 512i64);
    v8 = s_numMathTriggers;
  }
  s_numMathTriggers = v8 + 1;
  s_mathTriggers[v8].entNum = v9;
}

/*
==============
SP_trigger_rotatable_radius
==============
*/
void SP_trigger_rotatable_radius(gentity_s *ent)
{
  scrContext_t *v2; 
  double Float; 
  double v4; 
  float v5; 
  float v6; 
  unsigned __int16 v7; 
  unsigned int v8; 
  __int16 v9; 
  float v10; 
  float out; 
  float v12; 

  if ( level.spawnVar.spawnVarsValid )
  {
    if ( !G_SpawnFloat(0x30Eu, (const char *)&queryFormat.fmt + 3, &out) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7D50, 930i64, ent->r.currentOrigin.v[0], ent->r.currentOrigin.v[1], ent->r.currentOrigin.v[2]);
    if ( !G_SpawnFloat(0x1E9u, (const char *)&queryFormat.fmt + 3, &v10) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7DB0, 931i64, ent->r.currentOrigin.v[0], ent->r.currentOrigin.v[1], ent->r.currentOrigin.v[2]);
  }
  else
  {
    v2 = ScriptContext_Server();
    if ( Scr_GetNumParam(v2) < 5 )
      Scr_Error(COM_ERR_3432, v2, "USAGE: spawn( \"trigger_rotatable_radius\", <origin>, <spawnflags>, <radius>, <height> )");
    Float = Scr_GetFloat(v2, 3u);
    out = *(float *)&Float;
    v4 = Scr_GetFloat(v2, 4u);
    v10 = *(float *)&v4;
  }
  v5 = v10 * 0.5;
  v6 = out;
  ent->handler = 4;
  ent->r.box.midPoint.v[2] = v5;
  *(_QWORD *)ent->r.box.midPoint.v = 0i64;
  ent->r.box.halfSize.v[0] = v6;
  ent->r.box.halfSize.v[1] = v6;
  ent->r.box.halfSize.v[2] = v5;
  if ( ent->r.isLinked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 539, ASSERT_TYPE_ASSERT, "(!ent->r.isLinked)", (const char *)&queryFormat, "!ent->r.isLinked") )
    __debugbreak();
  *(_WORD *)&ent->r.modelType = 258;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &v12) && v12 <= 0.0 )
    ent->spawnflags |= 0x40u;
  InitSentientTrigger(ent);
  v7 = truncate_cast<unsigned short,short>(ent->s.number);
  v8 = s_numMathTriggers;
  v9 = v7;
  if ( s_numMathTriggers >= 0x200 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7980, 927i64, 512i64);
    v8 = s_numMathTriggers;
  }
  s_numMathTriggers = v8 + 1;
  s_mathTriggers[v8].entNum = v9;
}

/*
==============
SP_trigger_use
==============
*/

void __fastcall SP_trigger_use(gentity_s *ent)
{
  trigger_use_shared(ent);
}

/*
==============
SP_trigger_use_touch
==============
*/

void __fastcall SP_trigger_use_touch(gentity_s *ent)
{
  trigger_use_shared(ent);
}

/*
==============
UpdateTriggerContents
==============
*/
void UpdateTriggerContents(gentity_s *self)
{
  int v2; 
  unsigned int Instance; 
  unsigned int v4; 

  v2 = 2 * (self->c.trigger.flags & 4 | ((self->c.trigger.flags & 2 | (4 * (self->c.trigger.flags & 8 | ((self->c.trigger.flags & 0x10) << 7)))) << 16));
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, self);
  if ( Instance != -1 )
    Physics_SetInstanceContents(PHYSICS_WORLD_ID_FIRST, Instance, v2);
  v4 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, self);
  if ( v4 != -1 )
    Physics_SetInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, v4, v2);
}

/*
==============
multi_trigger
==============
*/
void multi_trigger(gentity_s *ent, gentity_s *activator)
{
  if ( (ent->spawnflags & 0x40) != 0 )
    ent->flags.m_flags[0] |= 0x20000u;
}

/*
==============
trigger_use_shared
==============
*/
void trigger_use_shared(gentity_s *self)
{
  entityType_s eType; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  vec3_t trBase; 
  __int64 v7; 

  if ( self->s.eType == ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 1087, ASSERT_TYPE_ASSERT, "( self->s.eType != ET_MISSILE )", (const char *)&queryFormat, "self->s.eType != ET_MISSILE", -2i64) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)192) )
  {
    eType = self->s.eType;
    if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 1088, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRIGGERS_SINGLEPLAYER ) || !BG_IsCharacterEntity( &self->s ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRIGGERS_SINGLEPLAYER ) || !BG_IsCharacterEntity( &self->s )") )
      __debugbreak();
  }
  if ( SV_Game_SetTriggerModel(self) )
  {
    G_PlayerUse_SetEntityUsable(self, 1);
    self->c.trigger.flags |= 0x1Eu;
    UpdateTriggerContents(self);
    SV_LinkEntity(self);
    self->c.item[0].weapon.stickerIndices[1] = 2047;
    self->c.trigger.team = 0;
    self->s.lerp.pos.trType = TR_STATIONARY;
    if ( self == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( self->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
    {
      *(float *)&v7 = self->r.currentOrigin.v[0];
      if ( (v7 & 0x7F800000) == 2139095040 || (*(float *)&v7 = self->r.currentOrigin.v[1], (v7 & 0x7F800000) == 2139095040) || (*(float *)&v7 = self->r.currentOrigin.v[2], (v7 & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v3 = LODWORD(self->r.currentOrigin.v[0]) ^ ~s_trbase_aab_X;
      v4 = v3 ^ s_trbase_aab_Y ^ LODWORD(self->r.currentOrigin.v[1]);
      v5 = v4 ^ s_trbase_aab_Z ^ LODWORD(self->r.currentOrigin.v[2]);
      LODWORD(self->s.lerp.pos.trBase.v[0]) = v3;
      LODWORD(self->s.lerp.pos.trBase.v[1]) = v4;
      LODWORD(self->s.lerp.pos.trBase.v[2]) = v5;
      memset(&v7, 0, sizeof(v7));
    }
    else
    {
      self->s.lerp.pos.trBase.v[0] = self->r.currentOrigin.v[0];
      self->s.lerp.pos.trBase.v[1] = self->r.currentOrigin.v[1];
      self->s.lerp.pos.trBase.v[2] = self->r.currentOrigin.v[2];
    }
    self->r.svFlags = 1;
    if ( !self->model )
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&self->s.lerp.eFlags, ACTIVE, 0xCu);
    self->handler = 0;
    self->hint.hintType = 1;
    G_Trigger_SetHintFieldsForSpawn(self);
  }
  else
  {
    Trajectory_GetTrBase(&self->s.lerp.pos, &trBase);
    Com_PrintError(1, "Killing trigger_use_shared at (%f %f %f) because the brush model is invalid.\n", trBase.v[0], trBase.v[1], trBase.v[2]);
    G_FreeEntity(self);
    memset(&trBase, 0, sizeof(trBase));
  }
}

