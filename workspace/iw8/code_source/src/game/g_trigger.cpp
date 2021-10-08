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
  void *v16; 
  unsigned int v63; 
  gentity_s *v72; 
  unsigned int Instance; 
  int entityNum; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  vec3_t *end; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t dir; 
  Bounds bounds; 
  __int16 v87[2048]; 

  v16 = alloca(v7);
  __asm { vmovaps [rsp+1170h+var_40], xmm6 }
  _RSI = vStart;
  _RBX = vEnd;
  __asm
  {
    vmovaps [rsp+1170h+var_50], xmm7
    vmovaps [rsp+1170h+var_60], xmm8
    vmovaps [rsp+1170h+var_70], xmm9
    vmovaps [rsp+1170h+var_80], xmm10
    vmovaps [rsp+1170h+var_90], xmm11
    vmovaps [rsp+1170h+var_A0], xmm12
    vmovaps [rsp+1170h+var_B0], xmm13
  }
  end = (vec3_t *)vEnd;
  if ( (unsigned int)iMOD >= 0x19 )
  {
    entityNum = 25;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 932, ASSERT_TYPE_ASSERT, "(unsigned)( iMOD ) < (unsigned)( MOD_NUM )", "iMOD doesn't index MOD_NUM\n\t%i not in [0, %i)", iMOD, entityNum) )
      __debugbreak();
  }
  if ( !*g_combat_modNames[iMOD] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 933, ASSERT_TYPE_ASSERT, "(*g_combat_modNames[iMOD] != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*g_combat_modNames[iMOD] != NULL_SCR_STRING") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm6, dword ptr [rsi+4]
    vmovss  xmm3, dword ptr [rsi+8]
    vmovss  xmm2, dword ptr [rbx+8]
    vmovss  xmm7, dword ptr [rsi]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+4]
    vaddss  xmm0, xmm7, xmm4
    vmulss  xmm13, xmm0, xmm1
    vaddss  xmm0, xmm6, xmm5
    vmulss  xmm12, xmm0, xmm1
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm11, xmm0, xmm1
    vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm5, xmm5, xmm6
    vsubss  xmm8, xmm3, xmm11
    vandps  xmm8, xmm8, xmm1
    vsubss  xmm4, xmm4, xmm7
    vmulss  xmm0, xmm4, xmm4
    vsubss  xmm9, xmm6, xmm12
    vandps  xmm9, xmm9, xmm1
    vsubss  xmm6, xmm2, xmm3
  }
  collectedEnts.countMax = 2048;
  collectedEnts.ids = (unsigned __int16 *)v87;
  __asm
  {
    vsubss  xmm10, xmm7, xmm13
    vandps  xmm10, xmm10, xmm1
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+1070h+dir], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rbp+1070h+dir+8], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+1070h+dir+4], xmm1
    vsubss  xmm0, xmm12, xmm9
    vsubss  xmm1, xmm13, xmm10
    vmovss  dword ptr [rsp+1170h+aabbMin+4], xmm0
    vmovss  dword ptr [rsp+1170h+aabbMin], xmm1
    vaddss  xmm0, xmm10, xmm13
    vsubss  xmm1, xmm11, xmm8
    vmovss  dword ptr [rsp+1170h+aabbMax], xmm0
    vmovss  dword ptr [rsp+1170h+aabbMin+8], xmm1
    vaddss  xmm0, xmm8, xmm11
    vaddss  xmm1, xmm9, xmm12
  }
  collectedEnts.count = 0;
  __asm
  {
    vmovss  dword ptr [rsp+1170h+aabbMax+8], xmm0
    vmovss  dword ptr [rsp+1170h+aabbMax+4], xmm1
  }
  PhysicsQuery_TriggerAABBBroadphaseQuery(physicsWorld, &aabbMin, &aabbMax, 0x400000, &collectedEnts, NULL);
  v63 = 0;
  __asm
  {
    vmovaps xmm13, [rsp+1170h+var_B0]
    vmovaps xmm12, [rsp+1170h+var_A0]
    vmovaps xmm11, [rsp+1170h+var_90]
    vmovaps xmm10, [rsp+1170h+var_80]
    vmovaps xmm9, [rsp+1170h+var_70]
    vmovaps xmm8, [rsp+1170h+var_60]
    vmovaps xmm7, [rsp+1170h+var_50]
  }
  if ( collectedEnts.count )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      v72 = &g_entities[(unsigned __int16)v87[v63]];
      if ( v72->classname == scr_const.trigger_damage )
      {
        Instance = G_PhysicsObject_GetInstance(physicsWorld, v72->s.number);
        if ( PhysicsQuery_LegacyEntitySightTrace(physicsWorld, _RSI, end, &bounds_origin, -1, Instance, v72->s.number) )
        {
          if ( !isFirstTrace )
            goto LABEL_13;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vmovss  xmm1, dword ptr [rsi+4]
            vmovss  dword ptr [rbp+1070h+bounds.midPoint], xmm0
            vmovss  xmm0, dword ptr [rsi+8]
            vmovss  dword ptr [rbp+1070h+bounds.midPoint+8], xmm0
            vmovss  dword ptr [rbp+1070h+bounds.midPoint+4], xmm1
            vmovss  dword ptr [rbp+1070h+bounds.halfSize], xmm6
            vmovss  dword ptr [rbp+1070h+bounds.halfSize+4], xmm6
            vmovss  dword ptr [rbp+1070h+bounds.halfSize+8], xmm6
          }
          if ( !PhysicsQuery_LegacyEntityContactCapsule(physicsWorld, &bounds, Instance, v72) )
          {
LABEL_13:
            G_Combat_DamageNotifyNoWeapon(scr_const.damage, v72, pActivator, pActivator, &dir, NULL, iDamage, iMOD);
            G_Trigger_ActivateDamage(v72, pActivator, iDamage, iMOD);
            if ( !v72->c.item[0].clipAmmoCount[0] )
              v72->health = 32000;
          }
        }
      }
      ++v63;
    }
    while ( v63 < collectedEnts.count );
  }
  __asm { vmovaps xmm6, [rsp+1170h+var_40] }
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
  const vec3_t *v21; 
  const vec3_t *v23; 
  unsigned int v60; 
  gentity_s *v68; 
  unsigned int Instance; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t dir; 
  __int16 v74[2048]; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx+8]
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [r8+8]
    vmovss  xmm5, dword ptr [r8]
    vmovaps [rsp+1158h+var_58], xmm6
    vmovss  xmm6, dword ptr [r8+4]
    vmovaps [rsp+1158h+var_68], xmm7
    vmovss  xmm7, dword ptr [rdx]
    vmovaps [rsp+1158h+var_78], xmm8
    vmovaps [rsp+1158h+var_88], xmm9
  }
  v21 = vEnd;
  __asm
  {
    vmovaps [rsp+1158h+var_98], xmm10
    vaddss  xmm0, xmm7, xmm5
    vmovaps [rsp+1158h+var_A8], xmm11
  }
  v23 = vStart;
  __asm
  {
    vsubss  xmm5, xmm5, xmm7
    vmovaps [rsp+1158h+var_B8], xmm12
    vmovaps [rsp+1158h+var_C8], xmm13
    vmulss  xmm13, xmm0, xmm1
    vaddss  xmm0, xmm4, xmm6
    vmulss  xmm12, xmm0, xmm1
    vaddss  xmm0, xmm2, xmm3
    vmulss  xmm11, xmm0, xmm1
    vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm8, xmm2, xmm11
    vandps  xmm8, xmm8, xmm1
    vmulss  xmm0, xmm5, xmm5
    vsubss  xmm9, xmm4, xmm12
    vandps  xmm9, xmm9, xmm1
    vsubss  xmm4, xmm6, xmm4
    vsubss  xmm6, xmm3, xmm2
  }
  collectedEnts.ids = (unsigned __int16 *)v74;
  __asm
  {
    vsubss  xmm10, xmm7, xmm13
    vandps  xmm10, xmm10, xmm1
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+1158h+dir], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rsp+1158h+dir+8], xmm0
    vmulss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rsp+1158h+dir+4], xmm1
    vsubss  xmm0, xmm12, xmm9
    vsubss  xmm1, xmm13, xmm10
    vmovss  dword ptr [rsp+1158h+aabbMin+4], xmm0
    vmovss  dword ptr [rsp+1158h+aabbMin], xmm1
    vaddss  xmm0, xmm10, xmm13
    vsubss  xmm1, xmm11, xmm8
    vmovss  dword ptr [rsp+1158h+aabbMax], xmm0
    vmovss  dword ptr [rsp+1158h+aabbMin+8], xmm1
    vaddss  xmm0, xmm8, xmm11
    vaddss  xmm1, xmm9, xmm12
  }
  collectedEnts.count = 0;
  __asm
  {
    vmovss  dword ptr [rsp+1158h+aabbMax+8], xmm0
    vmovss  dword ptr [rsp+1158h+aabbMax+4], xmm1
  }
  collectedEnts.countMax = 2048;
  PhysicsQuery_TriggerAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 0x400000, &collectedEnts, NULL);
  __asm { vmovaps xmm13, [rsp+1158h+var_C8] }
  v60 = 0;
  __asm
  {
    vmovaps xmm12, [rsp+1158h+var_B8]
    vmovaps xmm11, [rsp+1158h+var_A8]
    vmovaps xmm10, [rsp+1158h+var_98]
    vmovaps xmm9, [rsp+1158h+var_88]
    vmovaps xmm8, [rsp+1158h+var_78]
    vmovaps xmm7, [rsp+1158h+var_68]
    vmovaps xmm6, [rsp+1158h+var_58]
  }
  if ( collectedEnts.count )
  {
    do
    {
      v68 = &g_entities[(unsigned __int16)v74[v60]];
      if ( v68->classname == scr_const.trigger_damage && (v68->flags.m_flags[0] & 0x2000) != 0 )
      {
        Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v68->s.number);
        if ( PhysicsQuery_LegacyEntitySightTrace(PHYSICS_WORLD_ID_FIRST, v23, v21, &bounds_origin, -1, Instance, v68->s.number) )
        {
          G_Combat_DamageNotifyNoWeapon(scr_const.damage, v68, pActivator, pActivator, &dir, NULL, iDamage, iMOD);
          G_Trigger_ActivateDamage(v68, pActivator, iDamage, iMOD);
          if ( !v68->c.item[0].clipAmmoCount[0] )
            v68->health = 32000;
        }
      }
      ++v60;
    }
    while ( v60 < collectedEnts.count );
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

void __fastcall G_Trigger_DamageSpawn(gentity_s *pSelf, double _XMM1_8)
{
  float out; 

  G_SpawnInt(0x19u, "0", pSelf->c.item[0].clipAmmoCount);
  G_SpawnInt(0x440u, "0", (int *)&pSelf->c);
  pSelf->health = 32000;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&pSelf->s.lerp.eFlags, ACTIVE, 0x10u);
  pSelf->handler = 7;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &out) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+28h+out]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
  }
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
  __int64 v7; 
  unsigned int v8; 
  __int64 entNum; 
  int modelType; 
  bool v15; 
  int v16; 
  bool v17; 
  int v18; 

  v7 = 0i64;
  v8 = maxCollectedEnts;
  _RSI = aabbMax;
  _RDI = aabbMin;
  if ( s_numMathTriggers )
  {
    __asm
    {
      vmovaps [rsp+98h+var_48], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    while ( 1 )
    {
      if ( *outNumCollectedEnts >= v8 )
      {
LABEL_24:
        __asm { vmovaps xmm6, [rsp+98h+var_48] }
        return;
      }
      entNum = s_mathTriggers[v7].entNum;
      _RBX = &g_entities[entNum];
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0) && ((2 * (_RBX->c.trigger.flags & 4 | ((_RBX->c.trigger.flags & 2 | (4 * (_RBX->c.trigger.flags & 8 | ((_RBX->c.trigger.flags & 0x10) << 7)))) << 16))) & contents) != 0 )
      {
        modelType = _RBX->r.modelType;
        v15 = modelType == 0;
        v16 = modelType - 1;
        if ( v16 )
        {
          v17 = v16 == 0;
          v18 = v16 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [rbx+10Ch]
                vmovss  xmm2, dword ptr [rbx+130h]
                vsubss  xmm0, xmm2, xmm1
                vcomiss xmm0, dword ptr [rsi]
                vaddss  xmm0, xmm2, xmm1
                vcomiss xmm0, dword ptr [rdi]
                vmovss  xmm2, dword ptr [rbx+134h]
                vsubss  xmm0, xmm2, xmm1
                vcomiss xmm0, dword ptr [rsi+4]
                vaddss  xmm0, xmm2, xmm1
                vcomiss xmm0, dword ptr [rdi+4]
              }
              goto LABEL_18;
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+104h]
              vmaxss  xmm1, xmm0, dword ptr [rbx+100h]
              vmovss  xmm0, dword ptr [rbx+110h]
              vmaxss  xmm3, xmm1, dword ptr [rbx+108h]
              vmaxss  xmm1, xmm0, dword ptr [rbx+10Ch]
              vmaxss  xmm2, xmm1, dword ptr [rbx+114h]
              vmovss  xmm5, dword ptr [rbx+130h]
              vandps  xmm3, xmm3, xmm6
              vaddss  xmm4, xmm3, xmm2
              vsubss  xmm0, xmm5, xmm4
              vcomiss xmm0, dword ptr [rsi]
            }
            if ( v17 || (unsigned __int8)v18 == 0 )
            {
              __asm
              {
                vaddss  xmm0, xmm5, xmm4
                vcomiss xmm0, dword ptr [rdi]
              }
              if ( !v17 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rbx+134h]
                  vsubss  xmm0, xmm1, xmm4
                  vcomiss xmm0, dword ptr [rsi+4]
                  vaddss  xmm0, xmm1, xmm4
                  vcomiss xmm0, dword ptr [rdi+4]
                  vmovss  xmm1, dword ptr [rbx+138h]
                  vsubss  xmm0, xmm1, xmm4
                  vcomiss xmm0, dword ptr [rsi+8]
                  vaddss  xmm0, xmm1, xmm4
                  vcomiss xmm0, dword ptr [rdi+8]
                }
                if ( !v17 )
                  goto LABEL_18;
              }
            }
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+110h]
            vmaxss  xmm1, xmm0, dword ptr [rbx+10Ch]
            vmovss  xmm2, dword ptr [rbx+130h]
            vmaxss  xmm3, xmm1, dword ptr [rbx+114h]
            vaddss  xmm4, xmm2, dword ptr [rbx+100h]
            vsubss  xmm0, xmm4, xmm3
            vcomiss xmm0, dword ptr [rsi]
          }
          if ( v15 || (unsigned __int8)v16 == 0 )
          {
            __asm
            {
              vaddss  xmm0, xmm4, xmm3
              vcomiss xmm0, dword ptr [rdi]
            }
            if ( !v15 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+134h]
                vaddss  xmm2, xmm0, dword ptr [rbx+104h]
                vsubss  xmm1, xmm2, xmm3
                vcomiss xmm1, dword ptr [rsi+4]
                vaddss  xmm0, xmm2, xmm3
                vcomiss xmm0, dword ptr [rdi+4]
                vmovss  xmm0, dword ptr [rbx+138h]
                vaddss  xmm2, xmm0, dword ptr [rbx+108h]
                vsubss  xmm1, xmm2, xmm3
                vcomiss xmm1, dword ptr [rsi+8]
                vaddss  xmm0, xmm2, xmm3
                vcomiss xmm0, dword ptr [rdi+8]
              }
LABEL_18:
              if ( ((int)entNum < 0 || (unsigned int)entNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)entNum, "signed", entNum) )
                __debugbreak();
              outCollectedEnts[(*outNumCollectedEnts)++] = entNum;
            }
          }
        }
      }
      v8 = maxCollectedEnts;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= s_numMathTriggers )
        goto LABEL_24;
    }
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
  __int64 v11; 
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
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+trBase+8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rsp+58h+trBase+4]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsp+58h+trBase]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+58h+var_38], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_PrintError(1, "Killing trigger at (%f %f %f) because the brush model is invalid.\n", _R8, _R9, v11);
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
  int v2; 
  unsigned __int16 v14; 
  unsigned int v15; 
  __int16 v16; 
  char *fmt; 
  __int64 v18; 
  float out; 
  float v20; 

  _RBX = ent;
  v2 = G_SpawnFloat(0x30Eu, (const char *)&queryFormat.fmt + 3, &out);
  if ( !v2 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  xmm3, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+38h+var_10], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+38h+fmt], xmm1
    }
    Com_Error_impl((errorParm_t)((unsigned __int8)v2 + 1), (const ObfuscateErrorText)&stru_143FE7E80, 932i64, _R9, fmt, v18);
  }
  __asm
  {
    vmovss  xmm0, [rsp+38h+out]
    vaddss  xmm1, xmm0, cs:__real@42800000
  }
  _RBX->handler = 4;
  *(_QWORD *)_RBX->r.box.midPoint.v = 0i64;
  _RBX->r.box.midPoint.v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+10Ch], xmm1
    vmovss  dword ptr [rbx+110h], xmm1
  }
  _RBX->r.box.halfSize.v[2] = 100000.0;
  __asm { vmovss  [rsp+38h+out], xmm1 }
  if ( _RBX->r.isLinked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 576, ASSERT_TYPE_ASSERT, "(!ent->r.isLinked)", (const char *)&queryFormat, "!ent->r.isLinked") )
    __debugbreak();
  *(_WORD *)&_RBX->r.modelType = 259;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &v20) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+38h+arg_8]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
  }
  InitSentientTrigger(_RBX);
  v14 = truncate_cast<unsigned short,short>(_RBX->s.number);
  v15 = s_numMathTriggers;
  v16 = v14;
  if ( s_numMathTriggers >= 0x200 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7980, 927i64, 512i64);
    v15 = s_numMathTriggers;
  }
  s_numMathTriggers = v15 + 1;
  s_mathTriggers[v15].entNum = v16;
}

/*
==============
SP_trigger_multiple
==============
*/

void __fastcall SP_trigger_multiple(gentity_s *ent, double _XMM1_8)
{
  float out; 

  ent->handler = 4;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &out) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+28h+out]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
  }
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
  int v3; 
  int v11; 
  scrContext_t *v19; 
  unsigned __int16 v25; 
  unsigned int v26; 
  __int16 v27; 
  char *fmt; 
  char *fmta; 
  __int64 v30; 
  __int64 v31; 
  float v32; 
  float out; 
  float v34; 

  _RBX = ent;
  if ( level.spawnVar.spawnVarsValid )
  {
    v3 = G_SpawnFloat(0x30Eu, (const char *)&queryFormat.fmt + 3, &out);
    if ( !v3 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm3, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+38h+var_10], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+38h+fmt], xmm1
      }
      Com_Error_impl((errorParm_t)((unsigned __int8)v3 + 1), (const ObfuscateErrorText)&stru_143FE7C00, 928i64, _R9, fmt, v30);
    }
    v11 = G_SpawnFloat(0x1E9u, (const char *)&queryFormat.fmt + 3, &v32);
    if ( !v11 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm3, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+38h+var_10], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+38h+fmt], xmm1
      }
      Com_Error_impl((errorParm_t)((unsigned __int8)v11 + 1), (const ObfuscateErrorText)&stru_143FE7C60, 929i64, _R9, fmta, v31);
    }
  }
  else
  {
    v19 = ScriptContext_Server();
    if ( Scr_GetNumParam(v19) < 5 )
      Scr_Error(COM_ERR_3431, v19, "USAGE: spawn( \"trigger_radius\", <origin>, <spawnflags>, <radius>, <height> )");
    *(double *)&_XMM0 = Scr_GetFloat(v19, 3u);
    __asm { vmovss  [rsp+38h+out], xmm0 }
    *(double *)&_XMM0 = Scr_GetFloat(v19, 4u);
    __asm { vmovss  [rsp+38h+arg_0], xmm0 }
  }
  __asm
  {
    vmovss  xmm0, [rsp+38h+arg_0]
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmovss  xmm0, [rsp+38h+out]
  }
  _RBX->handler = 4;
  __asm { vmovss  dword ptr [rbx+108h], xmm1 }
  *(_QWORD *)_RBX->r.box.midPoint.v = 0i64;
  __asm
  {
    vmovss  dword ptr [rbx+10Ch], xmm0
    vmovss  dword ptr [rbx+110h], xmm0
    vmovss  dword ptr [rbx+114h], xmm1
  }
  if ( _RBX->r.isLinked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 496, ASSERT_TYPE_ASSERT, "(!ent->r.isLinked)", (const char *)&queryFormat, "!ent->r.isLinked") )
    __debugbreak();
  *(_WORD *)&_RBX->r.modelType = 257;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &v34) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+38h+arg_10]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
  }
  InitSentientTrigger(_RBX);
  v25 = truncate_cast<unsigned short,short>(_RBX->s.number);
  v26 = s_numMathTriggers;
  v27 = v25;
  if ( s_numMathTriggers >= 0x200 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7980, 927i64, 512i64);
    v26 = s_numMathTriggers;
  }
  s_numMathTriggers = v26 + 1;
  s_mathTriggers[v26].entNum = v27;
}

/*
==============
SP_trigger_rotatable_radius
==============
*/
void SP_trigger_rotatable_radius(gentity_s *ent)
{
  int v3; 
  int v11; 
  scrContext_t *v19; 
  unsigned __int16 v25; 
  unsigned int v26; 
  __int16 v27; 
  char *fmt; 
  char *fmta; 
  __int64 v30; 
  __int64 v31; 
  float v32; 
  float out; 
  float v34; 

  _RBX = ent;
  if ( level.spawnVar.spawnVarsValid )
  {
    v3 = G_SpawnFloat(0x30Eu, (const char *)&queryFormat.fmt + 3, &out);
    if ( !v3 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm3, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+38h+var_10], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+38h+fmt], xmm1
      }
      Com_Error_impl((errorParm_t)((unsigned __int8)v3 + 1), (const ObfuscateErrorText)&stru_143FE7D50, 930i64, _R9, fmt, v30);
    }
    v11 = G_SpawnFloat(0x1E9u, (const char *)&queryFormat.fmt + 3, &v32);
    if ( !v11 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm3, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+38h+var_10], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+38h+fmt], xmm1
      }
      Com_Error_impl((errorParm_t)((unsigned __int8)v11 + 1), (const ObfuscateErrorText)&stru_143FE7DB0, 931i64, _R9, fmta, v31);
    }
  }
  else
  {
    v19 = ScriptContext_Server();
    if ( Scr_GetNumParam(v19) < 5 )
      Scr_Error(COM_ERR_3432, v19, "USAGE: spawn( \"trigger_rotatable_radius\", <origin>, <spawnflags>, <radius>, <height> )");
    *(double *)&_XMM0 = Scr_GetFloat(v19, 3u);
    __asm { vmovss  [rsp+38h+out], xmm0 }
    *(double *)&_XMM0 = Scr_GetFloat(v19, 4u);
    __asm { vmovss  [rsp+38h+arg_0], xmm0 }
  }
  __asm
  {
    vmovss  xmm0, [rsp+38h+arg_0]
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmovss  xmm0, [rsp+38h+out]
  }
  _RBX->handler = 4;
  __asm { vmovss  dword ptr [rbx+108h], xmm1 }
  *(_QWORD *)_RBX->r.box.midPoint.v = 0i64;
  __asm
  {
    vmovss  dword ptr [rbx+10Ch], xmm0
    vmovss  dword ptr [rbx+110h], xmm0
    vmovss  dword ptr [rbx+114h], xmm1
  }
  if ( _RBX->r.isLinked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 539, ASSERT_TYPE_ASSERT, "(!ent->r.isLinked)", (const char *)&queryFormat, "!ent->r.isLinked") )
    __debugbreak();
  *(_WORD *)&_RBX->r.modelType = 258;
  if ( level.spawnVar.spawnVarsValid && G_SpawnFloat(0x499u, (const char *)&queryFormat.fmt + 3, &v34) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+38h+arg_10]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
  }
  InitSentientTrigger(_RBX);
  v25 = truncate_cast<unsigned short,short>(_RBX->s.number);
  v26 = s_numMathTriggers;
  v27 = v25;
  if ( s_numMathTriggers >= 0x200 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7980, 927i64, 512i64);
    v26 = s_numMathTriggers;
  }
  s_numMathTriggers = v26 + 1;
  s_mathTriggers[v26].entNum = v27;
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
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  char *fmt; 
  vec3_t trBase; 
  __int64 v19; 

  _RBX = self;
  if ( self->s.eType == ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 1087, ASSERT_TYPE_ASSERT, "( self->s.eType != ET_MISSILE )", (const char *)&queryFormat, "self->s.eType != ET_MISSILE", -2i64) )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)192) )
  {
    eType = _RBX->s.eType;
    if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_trigger.cpp", 1088, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRIGGERS_SINGLEPLAYER ) || !BG_IsCharacterEntity( &self->s ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRIGGERS_SINGLEPLAYER ) || !BG_IsCharacterEntity( &self->s )") )
      __debugbreak();
  }
  if ( SV_Game_SetTriggerModel(_RBX) )
  {
    G_PlayerUse_SetEntityUsable(_RBX, 1);
    _RBX->c.trigger.flags |= 0x1Eu;
    UpdateTriggerContents(_RBX);
    SV_LinkEntity(_RBX);
    _RBX->c.item[0].weapon.stickerIndices[1] = 2047;
    _RBX->c.trigger.team = 0;
    _RBX->s.lerp.pos.trType = TR_STATIONARY;
    if ( _RBX == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( _RBX->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vmovss  dword ptr [rsp+58h+arg_0], xmm0
      }
      if ( (v19 & 0x7F800000) == 2139095040 )
        goto LABEL_27;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+134h]
        vmovss  dword ptr [rsp+58h+arg_0], xmm0
      }
      if ( (v19 & 0x7F800000) == 2139095040 )
        goto LABEL_27;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  dword ptr [rsp+58h+arg_0], xmm0
      }
      if ( (v19 & 0x7F800000) == 2139095040 )
      {
LABEL_27:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v14 = LODWORD(_RBX->r.currentOrigin.v[0]) ^ ~s_trbase_aab_X;
      v15 = v14 ^ s_trbase_aab_Y ^ LODWORD(_RBX->r.currentOrigin.v[1]);
      v16 = v15 ^ s_trbase_aab_Z ^ LODWORD(_RBX->r.currentOrigin.v[2]);
      LODWORD(_RBX->s.lerp.pos.trBase.v[0]) = v14;
      LODWORD(_RBX->s.lerp.pos.trBase.v[1]) = v15;
      LODWORD(_RBX->s.lerp.pos.trBase.v[2]) = v16;
      memset(&v19, 0, sizeof(v19));
    }
    else
    {
      _RBX->s.lerp.pos.trBase.v[0] = _RBX->r.currentOrigin.v[0];
      _RBX->s.lerp.pos.trBase.v[1] = _RBX->r.currentOrigin.v[1];
      _RBX->s.lerp.pos.trBase.v[2] = _RBX->r.currentOrigin.v[2];
    }
    _RBX->r.svFlags = 1;
    if ( !_RBX->model )
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0xCu);
    _RBX->handler = 0;
    _RBX->hint.hintType = 1;
    G_Trigger_SetHintFieldsForSpawn(_RBX);
  }
  else
  {
    Trajectory_GetTrBase(&_RBX->s.lerp.pos, &trBase);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+trBase+8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rsp+58h+trBase+4]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsp+58h+trBase]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+58h+fmt], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_PrintError(1, "Killing trigger_use_shared at (%f %f %f) because the brush model is invalid.\n", _R8, _R9, fmt);
    G_FreeEntity(_RBX);
    memset(&trBase, 0, sizeof(trBase));
  }
}

