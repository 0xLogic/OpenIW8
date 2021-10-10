/*
==============
FXW_UpdatePass4Internal
==============
*/

void __fastcall FXW_UpdatePass4Internal(const void *const createCmdInfo)
{
  ?FXW_UpdatePass4Internal@@YAXQEBX@Z(createCmdInfo);
}

/*
==============
FXW_UpdatePass5Internal
==============
*/

void __fastcall FXW_UpdatePass5Internal(const void *const passCmdInfo)
{
  ?FXW_UpdatePass5Internal@@YAXQEBX@Z(passCmdInfo);
}

/*
==============
FXW_UpdatePass4ProcessCommands
==============
*/

void __fastcall FXW_UpdatePass4ProcessCommands(FxSystem *localSystem, const FxPass4Cmd *const passCmd)
{
  ?FXW_UpdatePass4ProcessCommands@@YAXPEAUFxSystem@@QEBUFxPass4Cmd@@@Z(localSystem, passCmd);
}

/*
==============
FXW_UpdatePass2Internal
==============
*/

void __fastcall FXW_UpdatePass2Internal(const void *const passCmdInfo)
{
  ?FXW_UpdatePass2Internal@@YAXQEBX@Z(passCmdInfo);
}

/*
==============
FXW_UpdatePass0Internal
==============
*/

void __fastcall FXW_UpdatePass0Internal(const void *const passCmdInfo)
{
  ?FXW_UpdatePass0Internal@@YAXQEBX@Z(passCmdInfo);
}

/*
==============
FXW_UpdateBoneMapCacheAndSpawnPass2
==============
*/

void __fastcall FXW_UpdateBoneMapCacheAndSpawnPass2(const void *const cmdInfo)
{
  ?FXW_UpdateBoneMapCacheAndSpawnPass2@@YAXQEBX@Z(cmdInfo);
}

/*
==============
FXW_UpdateBoneMapCacheAndSpawnPass2
==============
*/
void FXW_UpdateBoneMapCacheAndSpawnPass2(const void *const cmdInfo)
{
  __int64 v1; 

  v1 = *(int *)cmdInfo;
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", *(_DWORD *)cmdInfo, 2) )
    __debugbreak();
  ParticleManager::UpdateBoneMapCache(&g_particleManager[v1]);
  FX_SpawnUpdate2Cmds((LocalClientNum_t)v1);
}

/*
==============
FXW_UpdatePass0Internal
==============
*/
void FXW_UpdatePass0Internal(const void *const passCmdInfo)
{
  __int64 v2; 
  __int64 v3; 

  Profile2_UpdateEntry(71);
  if ( ((unsigned __int8)&dword_14FDE80EC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80EC) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80EC);
  Profile2_UpdateEntry(72);
  if ( ((unsigned __int8)dword_14FDE80F0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", dword_14FDE80F0) )
    __debugbreak();
  _InterlockedIncrement(dword_14FDE80F0);
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "fx update new");
  v2 = *(int *)(*(_QWORD *)passCmdInfo + 40i64);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v3) = *(_DWORD *)(*(_QWORD *)passCmdInfo + 40i64);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
  }
  ParticleManager::Update(&g_particleManager[v2], *(_DWORD *)(*(_QWORD *)passCmdInfo + 24i64), (const FxCamera *)(*(_QWORD *)passCmdInfo + 96i64));
  FX_ExitWriteSystemLock(*((FxAccessLock **)passCmdInfo + 2));
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(72);
  if ( ((unsigned __int64)dword_14FDE80F0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", dword_14FDE80F0) )
    __debugbreak();
  _InterlockedDecrement(dword_14FDE80F0);
  Profile2_UpdateEntry(71);
  if ( ((unsigned __int64)&dword_14FDE80EC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80EC) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE80EC);
}

/*
==============
FXW_UpdatePass2Internal
==============
*/
void FXW_UpdatePass2Internal(const void *const passCmdInfo)
{
  __int64 v1; 
  float v3; 
  __int64 v4; 
  float v5; 
  __int64 v6; 
  int v7; 

  v1 = *(_QWORD *)passCmdInfo;
  FxCamera::operator=((FxCamera *)(*(_QWORD *)passCmdInfo + 96i64), (const FxCamera *)(*(_QWORD *)(*(_QWORD *)passCmdInfo + 80i64) + 256i64));
  Profile2_UpdateEntry(78);
  if ( ((unsigned __int8)&dword_14FDE8108 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8108) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8108);
  CG_Draw_AddSceneTracerEffects(*(LocalClientNum_t *)(*(_QWORD *)passCmdInfo + 40i64));
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "fx update bolting new and draw lights");
  Profile2_UpdateEntry(81);
  if ( ((unsigned __int8)&dword_14FDE8114 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8114) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8114);
  v3 = (float)*(int *)(v1 + 28);
  v4 = *(int *)(v1 + 40);
  v5 = v3 * 0.001;
  if ( (unsigned int)v4 >= 2 )
  {
    v7 = 2;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  ParticleManager::UpdateBoltingAndDrawLights(&g_particleManager[v4], v5);
  Profile2_UpdateEntry(81);
  if ( ((unsigned __int64)&dword_14FDE8114 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8114) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8114);
  Sys_ProfEndNamedEvent();
  FX_ExitWriteSystemLock(*((FxAccessLock **)passCmdInfo + 2));
  Profile2_UpdateEntry(78);
  if ( ((unsigned __int64)&dword_14FDE8108 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8108) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8108);
  FX_ExitWriteSystemLock(*((FxAccessLock **)passCmdInfo + 7));
}

/*
==============
FXW_UpdatePass4Internal
==============
*/
void FXW_UpdatePass4Internal(const void *const createCmdInfo)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  CgDrawSystem *v6; 
  __int64 v7; 
  __int64 v8; 

  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "fx update 4");
  Profile2_UpdateEntry(84);
  if ( ((unsigned __int8)&dword_14FDE8120 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8120) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8120);
  v2 = *(_QWORD *)createCmdInfo;
  if ( (*(_BYTE *)(*(_QWORD *)createCmdInfo + 72i64) & 1) == 0 )
  {
    if ( !*(_DWORD *)(v2 + 108) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update.cpp", 86, ASSERT_TYPE_ASSERT, "(localSystem->camera.isValid)", (const char *)&queryFormat, "localSystem->camera.isValid") )
      __debugbreak();
    FxCamera::operator=((FxCamera *)(v2 + 320), (const FxCamera *)(v2 + 96));
  }
  v3 = *(int *)(v2 + 40);
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = *(_DWORD *)(v2 + 40);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  ParticleManager::InstancePoolPass(&g_particleManager[v3], (const FxCamera *)(v2 + 96));
  v4 = *(int *)(v2 + 40);
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = *(_DWORD *)(v2 + 40);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  ParticleManager::ProcessDeferredRequestsAndSort(&g_particleManager[v4], *(LocalClientNum_t *)(v2 + 40));
  v5 = *((int *)createCmdInfo + 2);
  if ( !(_BYTE)CgDrawSystem::ms_allocatedType )
  {
    LODWORD(v8) = *((_DWORD *)createCmdInfo + 2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 176, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type is not known\n", "ms_allocatedType != GameModeType::NONE", v8) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v8) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[v5] )
  {
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 178, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v8) )
      __debugbreak();
  }
  v6 = CgDrawSystem::ms_drawSystemArray[v5];
  CG_Draw_AddSceneTracerBeams(*((LocalClientNum_t *)createCmdInfo + 2));
  v6->GenerateSceneVerts(v6);
  FX_ExitWriteSystemLock(*((FxAccessLock **)createCmdInfo + 2));
  Profile2_UpdateEntry(84);
  if ( ((unsigned __int64)&dword_14FDE8120 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8120) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8120);
  Sys_ProfEndNamedEvent();
}

/*
==============
FXW_UpdatePass4ProcessCommands
==============
*/
void FXW_UpdatePass4ProcessCommands(FxSystem *localSystem, const FxPass4Cmd *const passCmd)
{
  __int64 localClientNum; 

  localClientNum = localSystem->localClientNum;
  if ( (unsigned int)localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localSystem->localClientNum, 2) )
    __debugbreak();
  ParticleManager::ProcessDeferredRequestsAndSort(&g_particleManager[localClientNum], localSystem->localClientNum);
}

/*
==============
FXW_UpdatePass5Internal
==============
*/
void FXW_UpdatePass5Internal(const void *const passCmdInfo)
{
  __int64 v2; 
  volatile signed __int32 *v3; 
  ParticleManager *ParticleManager; 
  FxGenerateVertsCmd genVertsCmd; 

  v2 = *(_QWORD *)passCmdInfo;
  Sys_ProfBeginNamedEvent(0xFF9ACD32, "fx surfs");
  Profile2_UpdateEntry(85);
  if ( ((unsigned __int8)&dword_14FDE8124 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8124) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8124);
  v3 = (volatile signed __int32 *)*((_QWORD *)passCmdInfo + 6);
  if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v3) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
  {
    Profile2_UpdateEntry(86);
    if ( ((unsigned __int8)&dword_14FDE8128 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8128) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE8128);
    if ( (*(_BYTE *)(v2 + 72) & 3) == 0 )
    {
      ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)*(_DWORD *)(v2 + 40));
      ParticleManager::DrawNonSpriteParticles(ParticleManager, (FxSystem *)v2);
    }
    Profile2_UpdateEntry(86);
    if ( ((unsigned __int64)&dword_14FDE8128 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8128) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8128);
    if ( !fx_umbra_culling->current.enabled )
    {
      FX_FillGenerateVertsCmd(*(LocalClientNum_t *)(v2 + 40), GFX_CODE_SURFLIST_EMISSIVE, &genVertsCmd);
      Sys_AddWorkerCmd(WRKCMD_END_FRONTEND_NONEMISSIVE, &genVertsCmd);
    }
  }
  Profile2_UpdateEntry(85);
  if ( ((unsigned __int64)&dword_14FDE8124 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8124) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8124);
  Sys_ProfEndNamedEvent();
}

