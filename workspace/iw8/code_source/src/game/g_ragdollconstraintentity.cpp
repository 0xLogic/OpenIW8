/*
==============
G_RagdollConstraintEntity_Spawn
==============
*/

gentity_s *__fastcall G_RagdollConstraintEntity_Spawn(gentity_s *corpseEnt, hitLocation_t hitLoc, scr_string_t boneName, const vec3_t *boneOffset, bool useSpikeVFX)
{
  return ?G_RagdollConstraintEntity_Spawn@@YAPEAUgentity_s@@PEAU1@W4hitLocation_t@@W4scr_string_t@@AEBTvec3_t@@_N@Z(corpseEnt, hitLoc, boneName, boneOffset, useSpikeVFX);
}

/*
==============
G_RagdollConstraintEntity_NotifyConstraintFree
==============
*/

void __fastcall G_RagdollConstraintEntity_NotifyConstraintFree(gentity_s *ent)
{
  ?G_RagdollConstraintEntity_NotifyConstraintFree@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_RagdollConstraintEntity_Update
==============
*/

void __fastcall G_RagdollConstraintEntity_Update(gentity_s *ent)
{
  ?G_RagdollConstraintEntity_Update@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_RagdollConstraintEntity_NotifyCorpseFree
==============
*/

void __fastcall G_RagdollConstraintEntity_NotifyCorpseFree(gentity_s *corpseEnt)
{
  ?G_RagdollConstraintEntity_NotifyCorpseFree@@YAXPEAUgentity_s@@@Z(corpseEnt);
}

/*
==============
G_RagdollConstraintEntity_NotifyConstraintFree
==============
*/
void G_RagdollConstraintEntity_NotifyConstraintFree(gentity_s *ent)
{
  __int64 number; 
  __int16 otherEntityNum; 
  __int64 v4; 
  gentity_s *v5; 
  unsigned int eType; 
  int v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 103, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v8) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 104, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ent->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( ent->s.number )") )
    __debugbreak();
  if ( ent->s.eType != ET_RAGDOLL_CONSTRAINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 105, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "ent->s.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  otherEntityNum = ent->s.otherEntityNum;
  if ( otherEntityNum && otherEntityNum != 2047 )
  {
    v4 = otherEntityNum;
    if ( (unsigned int)otherEntityNum >= 0x800 )
    {
      LODWORD(v9) = 2048;
      LODWORD(v8) = otherEntityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 109, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ent->s.otherEntityNum ))", (const char *)&queryFormat, "G_IsEntityInUse( ent->s.otherEntityNum )") )
      __debugbreak();
    v5 = &level.gentities[ent->s.otherEntityNum];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = (unsigned __int16)v5->s.eType;
    if ( (unsigned __int16)eType > 0x15u || (v7 = 2359300, !_bittest(&v7, eType)) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 111, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &corpseEnt->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &corpseEnt->s )") )
        __debugbreak();
    }
    v5->c.item[0].ammoCount = 2047;
  }
  ent->s.otherEntityNum = 2047;
}

/*
==============
G_RagdollConstraintEntity_NotifyCorpseFree
==============
*/
void G_RagdollConstraintEntity_NotifyCorpseFree(gentity_s *corpseEnt)
{
  __int64 number; 
  unsigned int eType; 
  int v4; 
  __int64 ammoCount; 
  gentity_s *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !corpseEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 120, ASSERT_TYPE_ASSERT, "(corpseEnt)", (const char *)&queryFormat, "corpseEnt") )
    __debugbreak();
  number = corpseEnt->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v7) = corpseEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 121, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( corpseEnt->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( corpseEnt->s.number )") )
    __debugbreak();
  eType = (unsigned __int16)corpseEnt->s.eType;
  if ( (unsigned __int16)eType > 0x15u || (v4 = 2359300, !_bittest(&v4, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 122, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &corpseEnt->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &corpseEnt->s )") )
      __debugbreak();
  }
  if ( corpseEnt->c.item[0].ammoCount >= 0x800u )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = corpseEnt->c.item[0].ammoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( corpseEnt->c.corpse.ragdollConstraintEnt ) < (unsigned)( ( 2048 ) )", "corpseEnt->c.corpse.ragdollConstraintEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  ammoCount = corpseEnt->c.item[0].ammoCount;
  if ( (_DWORD)ammoCount != 2047 )
  {
    if ( (unsigned int)ammoCount >= 0x800 )
    {
      LODWORD(v8) = 2048;
      LODWORD(v7) = corpseEnt->c.item[0].ammoCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[ammoCount].r.isInUse != g_entityIsInUse[ammoCount] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[ammoCount] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 128, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( corpseEnt->c.corpse.ragdollConstraintEnt ))", (const char *)&queryFormat, "G_IsEntityInUse( corpseEnt->c.corpse.ragdollConstraintEnt )") )
      __debugbreak();
    v6 = &level.gentities[corpseEnt->c.item[0].ammoCount];
    if ( v6->s.eType != ET_RAGDOLL_CONSTRAINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 130, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "ent->s.eType == ET_RAGDOLL_CONSTRAINT") )
      __debugbreak();
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v6);
    corpseEnt->c.item[0].ammoCount = 2047;
  }
}

/*
==============
G_RagdollConstraintEntity_Spawn
==============
*/
gentity_s *G_RagdollConstraintEntity_Spawn(gentity_s *corpseEnt, hitLocation_t hitLoc, scr_string_t boneName, const vec3_t *boneOffset, bool useSpikeVFX)
{
  __int128 v5; 
  gentity_s *v10; 
  scrContext_t *v11; 
  const char *BoneNameForHitLocation; 
  scrContext_t *v14; 
  const char *v15; 
  scr_string_t LowercaseString; 
  scrContext_t *v17; 
  const char *v18; 
  const char *v19; 
  __int64 v24; 
  __int64 v25; 
  vec3_t outBoneSpacePos; 
  vec3_t outWorldPos; 
  __int128 v28; 

  if ( !corpseEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 13, ASSERT_TYPE_ASSERT, "(corpseEnt)", (const char *)&queryFormat, "corpseEnt") )
    __debugbreak();
  if ( corpseEnt->s.number >= 0x7FFu )
  {
    LODWORD(v24) = corpseEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 14, ASSERT_TYPE_ASSERT, "(unsigned)( corpseEnt->s.number ) < (unsigned)( ENTITYNUM_NONE )", "corpseEnt->s.number doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v24, 2047) )
      __debugbreak();
  }
  if ( (unsigned int)hitLoc >= HITLOC_NUM )
  {
    LODWORD(v25) = 22;
    LODWORD(v24) = hitLoc;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 15, ASSERT_TYPE_ASSERT, "(unsigned)( hitLoc ) < (unsigned)( HITLOC_NUM )", "hitLoc doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  if ( !boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 16, ASSERT_TYPE_ASSERT, "(boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneName != NULL_SCR_STRING") )
    __debugbreak();
  v10 = G_Utils_SpawnEntity();
  memset_0(&v10->s.lerp, 0, sizeof(v10->s.lerp));
  v10->flags = 0i64;
  v10->flags.m_flags[0] |= 0x200u;
  Scr_SetString(&v10->script_classname, scr_const.ragdoll_constraint);
  v10->s.eType = ET_RAGDOLL_CONSTRAINT;
  SV_LinkEntity(v10);
  if ( G_Utils_DObjBoneSpacePosToWorld(corpseEnt, boneName, boneOffset, &outWorldPos) )
  {
    BoneNameForHitLocation = Ragdoll_GetBoneNameForHitLocation(hitLoc);
    if ( BoneNameForHitLocation || (LOBYTE(hitLoc) = 4, (BoneNameForHitLocation = Ragdoll_GetBoneNameForHitLocation(HITLOC_TORSO_UPR)) != NULL) )
    {
      LowercaseString = SL_FindLowercaseString(BoneNameForHitLocation);
      if ( !LowercaseString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 54, ASSERT_TYPE_ASSERT, "(hitLocationBoneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hitLocationBoneName != NULL_SCR_STRING") )
        __debugbreak();
      if ( G_Utils_DObjWorldPosToBoneSpace(corpseEnt, LowercaseString, &outWorldPos, &outBoneSpacePos) )
      {
        v10->s.otherEntityNum = corpseEnt->s.number;
        v10->s.lerp.u.actor.species = hitLoc;
        v28 = v5;
        _XMM7 = 0i64;
        __asm { vroundss xmm0, xmm7, xmm2, 1 }
        v10->s.lerp.u.actor.unittype = I_clamp((int)*(float *)&_XMM0, -253, 254);
        __asm { vroundss xmm0, xmm7, xmm2, 1 }
        v10->s.lerp.u.actor.stepMove = I_clamp((int)*(float *)&_XMM0, -253, 254);
        __asm { vroundss xmm0, xmm7, xmm2, 1 }
        v10->s.lerp.u.actor.flags = I_clamp((int)*(float *)&_XMM0, -253, 254);
        v10->s.lerp.u.anonymous.data[2] = useSpikeVFX;
        if ( corpseEnt->c.item[0].ammoCount != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 72, ASSERT_TYPE_ASSERT, "(corpseEnt->c.corpse.ragdollConstraintEnt == ENTITYNUM_NONE)", (const char *)&queryFormat, "corpseEnt->c.corpse.ragdollConstraintEnt == ENTITYNUM_NONE") )
          __debugbreak();
        corpseEnt->c.item[0].ammoCount = v10->s.number;
        return v10;
      }
      else
      {
        v17 = ScriptContext_Server();
        v18 = SL_ConvertToString(boneName);
        v19 = j_va("ERROR: G_RagdollConstraintEntity_Spawn(), failed to transform point into bone space for bone name %s.  Will not spawn.", v18);
        Scr_Error(COM_ERR_1843, v17, v19);
        return 0i64;
      }
    }
    else
    {
      v14 = ScriptContext_Server();
      v15 = j_va("ERROR: G_RagdollConstraintEntity_Spawn(), failed to find valid boneName for hitLoc %i.  Will not spawn.", 4i64);
      Scr_Error(COM_ERR_1842, v14, v15);
      return 0i64;
    }
  }
  else
  {
    v11 = ScriptContext_Server();
    Scr_Error(COM_ERR_1841, v11, "ERROR: G_RagdollConstraintEntity_Spawn(), failed to find bone.  Will not spawn.");
    return 0i64;
  }
}

/*
==============
G_RagdollConstraintEntity_Update
==============
*/
void G_RagdollConstraintEntity_Update(gentity_s *ent)
{
  __int16 otherEntityNum; 
  __int64 v3; 
  gentity_s *v4; 
  unsigned int eType; 
  int v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 81, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType != ET_RAGDOLL_CONSTRAINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 82, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "ent->s.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  if ( ent->tagInfo )
    G_GeneralLink(ent);
  otherEntityNum = ent->s.otherEntityNum;
  if ( (unsigned __int16)otherEntityNum >= 0x800u )
  {
    LODWORD(v7) = otherEntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.otherEntityNum ) < (unsigned)( ( 2048 ) )", "ent->s.otherEntityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
  }
  v3 = ent->s.otherEntityNum;
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = ent->s.otherEntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 93, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ent->s.otherEntityNum ))", (const char *)&queryFormat, "G_IsEntityInUse( ent->s.otherEntityNum )") )
    __debugbreak();
  v4 = &level.gentities[ent->s.otherEntityNum];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)v4->s.eType;
  if ( (unsigned __int16)eType > 0x15u || (v6 = 2359300, !_bittest(&v6, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 95, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &corpseEnt->s ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &corpseEnt->s )") )
      __debugbreak();
  }
  if ( v4->c.item[0].ammoCount != ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ragdollconstraintentity.cpp", 96, ASSERT_TYPE_ASSERT, "(corpseEnt->c.corpse.ragdollConstraintEnt == ent->s.number)", (const char *)&queryFormat, "corpseEnt->c.corpse.ragdollConstraintEnt == ent->s.number") )
    __debugbreak();
}

