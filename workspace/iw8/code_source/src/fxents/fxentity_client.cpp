/*
==============
CG_FXEntitiesResetEnt
==============
*/

void __fastcall CG_FXEntitiesResetEnt(ClientFxEntity *fxEnt)
{
  ?CG_FXEntitiesResetEnt@@YAXPEAUClientFxEntity@@@Z(fxEnt);
}

/*
==============
CG_SaveFXEntities
==============
*/

void __fastcall CG_SaveFXEntities(MemoryFile *memFile)
{
  ?CG_SaveFXEntities@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
CG_LoadFXEntities
==============
*/

void __fastcall CG_LoadFXEntities(SaveGame *save)
{
  ?CG_LoadFXEntities@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
CG_FXEntitiesShutdownEnt
==============
*/

void __fastcall CG_FXEntitiesShutdownEnt(ClientFxEntity *fxEnt)
{
  ?CG_FXEntitiesShutdownEnt@@YAXPEAUClientFxEntity@@@Z(fxEnt);
}

/*
==============
CG_FXEntities_Init
==============
*/

void CG_FXEntities_Init(void)
{
  ?CG_FXEntities_Init@@YAXXZ();
}

/*
==============
CG_FXEntitiesAddPacketEnt
==============
*/

void __fastcall CG_FXEntitiesAddPacketEnt(int fxEntNum)
{
  ?CG_FXEntitiesAddPacketEnt@@YAXH@Z(fxEntNum);
}

/*
==============
CG_FXEntitiesAddPacketEnt
==============
*/
void CG_FXEntitiesAddPacketEnt(int fxEntNum)
{
  __int64 v1; 
  ClientFxEntity *v2; 
  int v3; 
  int v4; 

  v1 = fxEntNum;
  CL_GetOnlyLocalClientNum();
  if ( (unsigned int)v1 >= 0x500 )
  {
    v4 = 1280;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = &cg_fxEntitiesArray[v1];
  if ( (v2->info.flags & 0x20) != 0 )
    CG_LoopFx(v1, v2);
  else
    CG_Fx(v1, v2);
}

/*
==============
CG_FXEntitiesResetEnt
==============
*/
void CG_FXEntitiesResetEnt(ClientFxEntity *fxEnt)
{
  unsigned __int8 flags; 
  int v3; 
  ParticleSystemHandle particleSystem; 
  LocalClientNum_t OnlyLocalClientNum; 

  if ( !fxEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.cpp", 131, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
    __debugbreak();
  if ( (fxEnt->info.flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.cpp", 132, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( &fxEnt->info ))", (const char *)&queryFormat, "FXEntity_IsValid( &fxEnt->info )") )
    __debugbreak();
  flags = fxEnt->info.flags;
  v3 = flags & 0xF;
  if ( v3 != fxEnt->prevUsageCount )
  {
    particleSystem = fxEnt->particleSystem;
    if ( particleSystem )
    {
      OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
      CG_DoneWithEffect(OnlyLocalClientNum, particleSystem);
      fxEnt->particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
      flags = fxEnt->info.flags;
    }
    fxEnt->info.flags = flags & 0xEF;
    *(_QWORD *)&fxEnt->triggerTime = 0i64;
    fxEnt->prevUsageCount = v3;
    fxEnt->info.flags |= 0x10u;
  }
}

/*
==============
CG_FXEntitiesShutdownEnt
==============
*/
void CG_FXEntitiesShutdownEnt(ClientFxEntity *fxEnt)
{
  ParticleSystemHandle particleSystem; 
  LocalClientNum_t OnlyLocalClientNum; 

  if ( !fxEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.cpp", 115, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
    __debugbreak();
  particleSystem = fxEnt->particleSystem;
  if ( particleSystem )
  {
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    CG_DoneWithEffect(OnlyLocalClientNum, particleSystem);
    fxEnt->particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
  fxEnt->info.flags &= ~0x10u;
}

/*
==============
CG_FXEntities_Init
==============
*/
void CG_FXEntities_Init(void)
{
  memset_0(cg_fxEntitiesArray, 0, sizeof(cg_fxEntitiesArray));
}

/*
==============
CG_Fx
==============
*/
void CG_Fx(int fxEntNum, ClientFxEntity *fxEnt)
{
  ParticleSystemHandle particleSystem; 
  LocalClientNum_t OnlyLocalClientNum; 
  FxEntity::<unnamed_type_un1> v6; 

  if ( !fxEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.cpp", 44, ASSERT_TYPE_ASSERT, "(fxEnt)", (const char *)&queryFormat, "fxEnt") )
    __debugbreak();
  if ( (fxEnt->info.flags & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.cpp", 45, ASSERT_TYPE_ASSERT, "(FXEntity_IsValid( &fxEnt->info ))", (const char *)&queryFormat, "FXEntity_IsValid( &fxEnt->info )") )
    __debugbreak();
  if ( (fxEnt->info.flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.cpp", 46, ASSERT_TYPE_ASSERT, "(!FXEntity_IsLoopingType( &fxEnt->info ))", (const char *)&queryFormat, "!FXEntity_IsLoopingType( &fxEnt->info )") )
    __debugbreak();
  if ( (fxEnt->info.flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity.h", 96, ASSERT_TYPE_ASSERT, "(!FXEntity_IsLoopingType( fxEnt ))", "%s\n\tTried to get trigger time on a looping-type FX entity.", "!FXEntity_IsLoopingType( fxEnt )") )
    __debugbreak();
  if ( fxEnt->triggerTime != fxEnt->info.un1.triggerTime )
  {
    particleSystem = fxEnt->particleSystem;
    if ( particleSystem )
    {
      OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
      CG_DoneWithEffect(OnlyLocalClientNum, particleSystem);
      fxEnt->particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    if ( (fxEnt->info.flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity.h", 96, ASSERT_TYPE_ASSERT, "(!FXEntity_IsLoopingType( fxEnt ))", "%s\n\tTried to get trigger time on a looping-type FX entity.", "!FXEntity_IsLoopingType( fxEnt )") )
      __debugbreak();
    v6.triggerTime = (int)fxEnt->info.un1;
    if ( (fxEnt->info.flags & 0x20) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity.h", 96, ASSERT_TYPE_ASSERT, "(!FXEntity_IsLoopingType( fxEnt ))", "%s\n\tTried to get trigger time on a looping-type FX entity.", "!FXEntity_IsLoopingType( fxEnt )") )
      __debugbreak();
    CG_StartFxOnFXEnt(fxEntNum, fxEnt, fxEnt->info.un1.triggerTime, v6.triggerTime);
  }
}

/*
==============
CG_LoadFXEntities
==============
*/
void CG_LoadFXEntities(SaveGame *save)
{
  int i; 
  __int64 v3; 
  ParticleSystemHandle v4; 
  __int64 v5; 
  char *fmt; 
  __int64 v7; 
  __int64 v8; 
  int buffer; 
  ParticleSystemHandle v10; 

  SaveMemory_LoadRead(&buffer, 4, save);
  for ( i = buffer; buffer >= 0; i = buffer )
  {
    if ( i >= 1280 )
    {
      LODWORD(fmt) = 1280;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14434FE10, 803i64, (unsigned int)i, fmt);
      i = buffer;
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
      __debugbreak();
    if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
      __debugbreak();
    if ( (unsigned int)i >= 0x500 )
    {
      LODWORD(v8) = 1280;
      LODWORD(v7) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v3 = i;
    SaveMemory_LoadRead(&cg_fxEntitiesArray[v3].triggerTime, 4, save);
    SaveMemory_LoadRead(&v10, 4, save);
    v4 = v10;
    if ( v10 )
    {
      cg_fxEntitiesArray[v3].particleSystem = v10;
      if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
        __debugbreak();
      if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
        __debugbreak();
      v5 = v4 & 0xFFF;
      if ( g_particleSystemsGeneration[v5].__all32 != v4 || g_particleSystems[0][v5] < (ParticleSystem *)0x1000 )
        cg_fxEntitiesArray[v3].triggerTime = 0;
    }
    SaveMemory_LoadRead(&buffer, 4, save);
  }
}

/*
==============
CG_LoopFx
==============
*/
void CG_LoopFx(int fxEntNum, ClientFxEntity *fxEnt)
{
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v6; 
  char v7; 
  cg_t *LocalClientGlobals; 
  cg_t *v11; 
  char v12; 
  int triggerTime; 
  unsigned int v26; 
  __int64 v27; 
  ParticleSystem *v28; 
  __int64 v29; 
  int time; 
  int v31; 
  __int64 v32; 
  unsigned int v33; 
  ParticleSystem *v34; 
  __int64 v35; 

  _RBX = fxEnt;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v6 = OnlyLocalClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+18h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm5, xmm0
  }
  v11 = LocalClientGlobals;
  if ( v12 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm3, xmm0, dword ptr [rax+38h]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm2, xmm1, dword ptr [rax+3Ch]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm4, xmm0, dword ptr [rax+40h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vcomiss xmm4, xmm1
  }
  if ( v7 )
  {
LABEL_30:
    if ( (_RBX->info.flags & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity.h", 84, ASSERT_TYPE_ASSERT, "(FXEntity_IsLoopingType( fxEnt ))", "%s\n\tTried to get looping period on a non looping-type FX entity.", "FXEntity_IsLoopingType( fxEnt )") )
      __debugbreak();
    triggerTime = _RBX->info.un1.triggerTime;
    if ( triggerTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.cpp", 75, ASSERT_TYPE_ASSERT, "(period > 0)", (const char *)&queryFormat, "period > 0") )
      __debugbreak();
    if ( _RBX->particleSystem == PARTICLE_SYSTEM_INVALID_HANDLE )
    {
      CG_StartFxOnFXEnt(fxEntNum, _RBX, v11->time, v11->time + triggerTime);
      v26 = 0;
      if ( g_particleSystemsGeneration[4096 * v6 + (_RBX->particleSystem & 0xFFF)].__all32 == _RBX->particleSystem )
        v26 = _RBX->particleSystem & 0xFFF;
      v27 = v26;
      v28 = NULL;
      v29 = (v6 << 12) + v27;
      if ( g_particleSystems[0][v29] >= (ParticleSystem *)0x1000 )
        v28 = g_particleSystems[0][v29];
      if ( v28 )
        ParticleSystem::SetLoopedFxEnt(v28, fxEntNum);
    }
    time = v11->time;
    v31 = _RBX->triggerTime;
    if ( time >= v31 )
    {
      v32 = v6 << 12;
      do
      {
        CG_StartFxOnFXEnt(fxEntNum, _RBX, time, v31);
        v33 = 0;
        if ( g_particleSystemsGeneration[v32 + (_RBX->particleSystem & 0xFFF)].__all32 == _RBX->particleSystem )
          v33 = _RBX->particleSystem & 0xFFF;
        v34 = NULL;
        v35 = v32 + v33;
        if ( g_particleSystems[0][v35] >= (ParticleSystem *)0x1000 )
          v34 = g_particleSystems[0][v35];
        if ( v34 )
        {
          if ( fxEntNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 205, ASSERT_TYPE_ASSERT, "(loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT)", (const char *)&queryFormat, "loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT") )
            __debugbreak();
          v34->m_loopedFxEnt = fxEntNum;
          v34->m_flags |= 0x400000ui64;
        }
        v31 = triggerTime + _RBX->triggerTime;
        _RBX->triggerTime = v31;
        time = v11->time;
      }
      while ( time >= v31 );
    }
  }
}

/*
==============
CG_SaveFXEntities
==============
*/
void CG_SaveFXEntities(MemoryFile *memFile)
{
  int i; 
  __int64 v3; 
  ParticleSystemHandle particleSystem; 
  __int64 v5; 
  ParticleSystem *v6; 
  ParticleSystem *v7; 
  __int64 v8; 
  __int64 v9; 
  int p; 
  ParticleSystemHandle v11; 

  p = 0;
  for ( i = 0; i < 1280; p = i )
  {
    v11 = PARTICLE_SYSTEM_INVALID_HANDLE;
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
      __debugbreak();
    if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
      __debugbreak();
    if ( (unsigned int)i >= 0x500 )
    {
      LODWORD(v9) = 1280;
      LODWORD(v8) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( fxEntindex ) < (unsigned)( 1280 )", "fxEntindex doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v3 = i;
    if ( (cg_fxEntitiesArray[v3].info.flags & 0x10) != 0 )
    {
      particleSystem = cg_fxEntitiesArray[v3].particleSystem;
      if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
        __debugbreak();
      if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
        __debugbreak();
      v5 = 0i64;
      if ( g_particleSystemsGeneration[particleSystem & 0xFFF].__all32 == particleSystem )
        v5 = particleSystem & 0xFFF;
      v6 = NULL;
      v7 = g_particleSystems[0][v5];
      if ( (unsigned __int64)v7 >= 0x1000 )
        v6 = v7;
      if ( v6 && (v6->m_flags & 0x10) == 0 )
        v11 = cg_fxEntitiesArray[v3].particleSystem;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, 4ui64, &cg_fxEntitiesArray[v3].triggerTime);
      MemFile_WriteData(memFile, 4ui64, &v11);
    }
    i = p + 1;
  }
  p = -1;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
CG_StartFxOnFXEnt
==============
*/
void CG_StartFxOnFXEnt(int fxEntNum, ClientFxEntity *fxEnt, int startAtTime, const int triggerTime)
{
  CgDynamicMedia *CgDynamicMedia; 
  FXRegisteredDef *Fx; 
  const Material *markMaterialOverride; 
  LocalClientNum_t OnlyLocalClientNum; 
  tmat33_t<vec3_t> axis; 

  AnglesToAxis(&fxEnt->info.angles, &axis);
  CgDynamicMedia = CgDynamicMedia::GetCgDynamicMedia();
  Fx = CgDynamicMedia::GetFx(CgDynamicMedia, fxEnt->info.fxId);
  if ( !Fx->m_particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\fxents\\fxentity_client.cpp", 36, ASSERT_TYPE_ASSERT, "(effectDef->IsValid())", (const char *)&queryFormat, "effectDef->IsValid()") )
    __debugbreak();
  markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_8;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  FX_SpawnOrientedEffectForClientEffect(OnlyLocalClientNum, Fx, startAtTime, &fxEnt->info.origin, &axis, fxEntNum, triggerTime, markMaterialOverride);
}

