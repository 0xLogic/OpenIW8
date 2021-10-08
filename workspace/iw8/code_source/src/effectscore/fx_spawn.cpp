/*
==============
FX_InitSpawnCmd
==============
*/

ParticleSystemHandle __fastcall FX_InitSpawnCmd(FxSystem *localSystem, unsigned int localClientBits, unsigned int elem, unsigned int elemParent, unsigned int elemClass, int fxEntNum, int timeValue, int removeRef, const FXRegisteredDef *def, int msecBegin, const vec3_t *origin, const tmat33_t<vec3_t> *axis, int dobjHandle, int boneIndex, const orientation_t *boltOffset, unsigned int owner, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int markViewmodelClientIndex, unsigned __int8 markBoneIndex, unsigned __int16 initSpawnFlags, const Material *markMaterialOverride)
{
  return ?FX_InitSpawnCmd@@YA?AW4ParticleSystemHandle@@PEAUFxSystem@@IIIIHHHPEBVFXRegisteredDef@@HAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@HHPEBUorientation_t@@II_N5HEGPEBUMaterial@@@Z(localSystem, localClientBits, elem, elemParent, elemClass, fxEntNum, timeValue, removeRef, def, msecBegin, origin, axis, dobjHandle, boneIndex, boltOffset, owner, markEntnum, markGivenModelsOnly, markViewmodel, markViewmodelClientIndex, markBoneIndex, initSpawnFlags, markMaterialOverride);
}

/*
==============
FX_OnParticleSystemKilledEarly
==============
*/

void __fastcall FX_OnParticleSystemKilledEarly(const LocalClientNum_t localClientNum, const unsigned int fxEnt, ParticleSystem *const system)
{
  ?FX_OnParticleSystemKilledEarly@@YAXW4LocalClientNum_t@@IQEAVParticleSystem@@@Z(localClientNum, fxEnt, system);
}

/*
==============
FX_InitSpawnCmd
==============
*/
ParticleSystemHandle FX_InitSpawnCmd(FxSystem *localSystem, unsigned int localClientBits, unsigned int elem, unsigned int elemParent, unsigned int elemClass, int fxEntNum, int timeValue, int removeRef, const FXRegisteredDef *def, int msecBegin, const vec3_t *origin, const tmat33_t<vec3_t> *axis, int dobjHandle, int boneIndex, const orientation_t *boltOffset, unsigned int owner, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int markViewmodelClientIndex, unsigned __int8 markBoneIndex, unsigned __int16 initSpawnFlags, const Material *markMaterialOverride)
{
  const FXRegisteredDef *v23; 
  int v25; 
  unsigned int v26; 
  char v27; 
  const Material *v28; 
  __int64 v29; 
  char v30; 
  __int64 p1_low; 
  unsigned __int16 *v32; 
  const char *name; 
  Material *MaterialAtIndex; 
  unsigned __int16 v35; 
  char v36; 
  const DynEntityDef *v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 spawnTimeMsec; 
  FXRegisteredDef *v45; 

  v23 = def;
  if ( !def->m_particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 103, ASSERT_TYPE_ASSERT, "(def->IsValid())", (const char *)&queryFormat, "def->IsValid()") )
    __debugbreak();
  v25 = markViewmodelClientIndex;
  if ( markViewmodelClientIndex > 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 105, ASSERT_TYPE_ASSERT, "(markViewmodelClientIndex <= 0xf)", (const char *)&queryFormat, "markViewmodelClientIndex <= 0xf") )
    __debugbreak();
  v26 = markEntnum;
  BYTE2(def) = markBoneIndex;
  v27 = BYTE3(def) & 0xCF | (16 * (markGivenModelsOnly | (2 * markViewmodel)));
  HIDWORD(def) = markEntnum;
  BYTE3(def) = v27;
  if ( v25 < 0 || (unsigned int)v25 > 0xFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v25, "signed", v25) )
      __debugbreak();
    v27 = BYTE3(def);
  }
  v28 = markMaterialOverride;
  v29 = 0i64;
  v30 = v27 & 0xB0 | v25 & 0xF | (markMaterialOverride != NULL ? 0x40 : 0);
  BYTE3(def) = v30;
  if ( markMaterialOverride )
  {
    p1_low = LOWORD(markMaterialOverride->drawSurf.packed.p1);
    if ( (_DWORD)p1_low == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", markMaterialOverride->name) )
      __debugbreak();
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(v45) = rgp.materialCount;
      LODWORD(spawnTimeMsec) = p1_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", spawnTimeMsec, v45) )
        __debugbreak();
    }
    v32 = &rgp.sortedMaterials[p1_low];
    if ( DB_GetMaterialAtIndex(*v32) != v28 )
    {
      name = v28->name;
      if ( (unsigned int)p1_low >= rgp.materialCount )
      {
        LODWORD(v45) = rgp.materialCount;
        LODWORD(spawnTimeMsec) = p1_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", spawnTimeMsec, v45) )
          __debugbreak();
      }
      MaterialAtIndex = DB_GetMaterialAtIndex(*v32);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", MaterialAtIndex->name, name) )
        __debugbreak();
    }
    v35 = truncate_cast<unsigned short,unsigned int>(p1_low);
    v30 = BYTE3(def);
    LOWORD(def) = v35;
  }
  else
  {
    LOWORD(def) = 0;
  }
  v36 = initSpawnFlags;
  BYTE3(def) = v30 & 0x7F | ((unsigned __int8)(initSpawnFlags >> 1) << 7);
  if ( (initSpawnFlags & 2) != 0 )
  {
    v37 = DynEnt_GetDef(v26, DYNENT_BASIS_MODEL);
    if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 120, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
      __debugbreak();
    if ( (unsigned __int8)(v37->type - 1) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 121, ASSERT_TYPE_ASSERT, "(dynEntDef->type == DYNENT_TYPE_SCRIPTABLEINST || dynEntDef->type == DYNENT_TYPE_SCRIPTABLEPHYSICS || dynEntDef->type == DYNENT_TYPE_CLUTTER || dynEntDef->type == DYNENT_TYPE_CLUTTER_NOSHADOW)", (const char *)&queryFormat, "dynEntDef->type == DYNENT_TYPE_SCRIPTABLEINST || dynEntDef->type == DYNENT_TYPE_SCRIPTABLEPHYSICS || dynEntDef->type == DYNENT_TYPE_CLUTTER || dynEntDef->type == DYNENT_TYPE_CLUTTER_NOSHADOW") )
      __debugbreak();
    if ( v37->clientId[localSystem->localClientNum] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 123, ASSERT_TYPE_ASSERT, "(dynEntClientIndex != 0xFFFF)", (const char *)&queryFormat, "dynEntClientIndex != DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
  }
  if ( !localSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 127, ASSERT_TYPE_ASSERT, "(localSystem)", (const char *)&queryFormat, "localSystem") )
    __debugbreak();
  if ( (v36 & 0x10) != 0 )
  {
    v29 = 512i64;
  }
  else if ( (v36 & 0x20) != 0 )
  {
    v29 = 1024i64;
  }
  v38 = v29 | 4;
  if ( (v36 & 0x40) == 0 )
    v38 = v29;
  v39 = v38 | 0x2000;
  if ( (v36 & 8) == 0 )
    v39 = v38;
  v40 = v39 | 0x20000000;
  if ( (v36 & 4) == 0 )
    v40 = v39;
  v41 = v40 | 0x2000000000i64;
  if ( (v36 & 1) == 0 )
    v41 = v40;
  v42 = v41 | 0x4000000000i64;
  if ( (v36 & 0x80) == 0 )
    v42 = v41;
  return FX_SpawnParticleSystem(localSystem->localClientNum, origin, axis, fxEntNum, timeValue, msecBegin, v23, dobjHandle, boneIndex, boltOffset, &localSystem->camera, (const FxMarkSpawnData *)&def, (ParticleSystemFlags)v42);
}

/*
==============
FX_OnParticleSystemKilledEarly
==============
*/
void FX_OnParticleSystemKilledEarly(const LocalClientNum_t localClientNum, const unsigned int fxEnt, ParticleSystem *const system)
{
  __int64 v3; 
  ParticleSystemHandle *p_particleSystem; 
  centity_t *Entity; 
  __int64 v8; 
  __int64 v9; 

  v3 = fxEnt;
  if ( fxEnt >= 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 72, ASSERT_TYPE_ASSERT, "(unsigned)( fxEnt ) < (unsigned)( ENTITYNUM_NONE )", "fxEnt doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", fxEnt, 2047) )
    __debugbreak();
  if ( !system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 73, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_DETONATING) )
  {
    if ( (unsigned int)v3 >= 0x500 )
    {
      LODWORD(v9) = 1280;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( fxEnt ) < (unsigned)( 1280 )", "fxEnt doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( system->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
      __debugbreak();
    p_particleSystem = &cg_fxEntitiesArray[v3].particleSystem;
    if ( *p_particleSystem != system->m_systemHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 81, ASSERT_TYPE_ASSERT, "(cg_fxEntitiesArray[fxEnt].particleSystem == system->GetSystemHandle())", (const char *)&queryFormat, "cg_fxEntitiesArray[fxEnt].particleSystem == system->GetSystemHandle()") )
      __debugbreak();
    *p_particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
  else
  {
    Entity = CG_GetEntity(localClientNum, v3);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 87, ASSERT_TYPE_ASSERT, "(cent != 0)", (const char *)&queryFormat, "cent != NULL") )
      __debugbreak();
    if ( system->m_systemHandle == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
      __debugbreak();
    if ( Entity->pose.coverWall.coverGrid[1] != system->m_systemHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 88, ASSERT_TYPE_ASSERT, "(cent->pose.fx.particleSystem == system->GetSystemHandle())", (const char *)&queryFormat, "cent->pose.fx.particleSystem == system->GetSystemHandle()") )
      __debugbreak();
    Entity->pose.coverWall.coverGrid[1] = 0;
  }
  system->m_flags &= ~0x80ui64;
  system->m_fxEnt = 2047;
}

/*
==============
FX_SpawnParticleSystem
==============
*/
__int64 FX_SpawnParticleSystem(LocalClientNum_t localClientNum, const vec3_t *origin, const tmat33_t<vec3_t> *axis, int fxEntNum, int fxTriggerTime, int spawnTimeMsec, const FXRegisteredDef *def, int dobjHandle, int boneIndex, const orientation_t *boltOffset, const FxCamera *pCamera, const FxMarkSpawnData *pMarkSpawnData, ParticleSystemFlags initSpawnFlags)
{
  __int64 v18; 
  __int64 v19; 
  ParticleSystemHandle v21; 
  __int64 v22; 
  ParticleSystemHandle v23; 
  ParticleSystem *v24; 
  __int64 v25; 
  centity_t *Entity; 
  __int64 v28; 
  ParticleSystemFlags particleSystemFlags; 
  vec4_t out; 
  float4 emitterOrientationQuat; 
  float4 emitterPos; 

  __asm { vmovss  xmm0, dword ptr [rdx] }
  out.v[3] = 0.0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+60h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rdx+8], 20h ; ' '
  }
  v18 = localClientNum;
  v19 = fxEntNum;
  __asm
  {
    vmovups xmmword ptr [rsp+0E8h+out], xmm3
    vmovups xmmword ptr [rsp+0E8h+emitterPos.v], xmm3
  }
  AxisToQuat(axis, &out);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0E8h+out]
    vmovups xmmword ptr [rsp+0E8h+emitterOrientationQuat.v], xmm0
  }
  if ( (unsigned int)v18 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, 2) )
    __debugbreak();
  v21 = ParticleManager::AddSystem(&g_particleManager[v18], (LocalClientNum_t)v18, def->m_particleSystemDef, &emitterPos, &emitterOrientationQuat, spawnTimeMsec, (ParticleSystemFlags)(initSpawnFlags | 8), dobjHandle, boneIndex, boltOffset, pCamera, pMarkSpawnData);
  v22 = (v21 & 0xFFF) + (v18 << 12);
  v23 = v21;
  if ( g_particleSystemsGeneration[v22].__all32 != v21 && v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  v24 = g_particleSystems[0][v22];
  if ( v24 && (int)v19 >= 0 )
  {
    if ( (_DWORD)v19 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 213, ASSERT_TYPE_ASSERT, "(fxEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "fxEnt != ENTITYNUM_NONE") )
      __debugbreak();
    if ( SLOBYTE(v24->m_flags) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 214, ASSERT_TYPE_ASSERT, "(!HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT ))", (const char *)&queryFormat, "!HasFlag( PARTICLE_SYSTEM_FLAG_HAS_FX_ENT )") )
      __debugbreak();
    v24->m_flags |= 0x80ui64;
    v24->m_fxEnt = v19;
    if ( Com_GameMode_SupportsFeature(WEAPON_DETONATING) )
    {
      if ( (unsigned int)v19 >= 0x500 )
      {
        LODWORD(particleSystemFlags) = 1280;
        LODWORD(v28) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 50, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntNum ) < (unsigned)( 1280 )", "fxEntNum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v28, particleSystemFlags) )
          __debugbreak();
      }
      v25 = v19;
      cg_fxEntitiesArray[v25].triggerTime = fxTriggerTime;
      cg_fxEntitiesArray[v25].particleSystem = v23;
    }
    else
    {
      Entity = CG_GetEntity((const LocalClientNum_t)v18, v19);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_spawn.cpp", 57, ASSERT_TYPE_ASSERT, "(cent != 0)", (const char *)&queryFormat, "cent != NULL") )
        __debugbreak();
      Entity->pose.coverWall.coverGrid[0] = fxTriggerTime;
      Entity->pose.coverWall.coverGrid[1] = v23;
    }
  }
  return (unsigned int)v23;
}

