/*
==============
FX_OnKillcamTransition
==============
*/

void __fastcall FX_OnKillcamTransition(LocalClientNum_t localClientNum)
{
  ?FX_OnKillcamTransition@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_OnKillcamTransition
==============
*/

void __fastcall FX_OnKillcamTransition(FxMarksSystem *marksSystem)
{
  ?FX_OnKillcamTransition@@YAXPEAUFxMarksSystem@@@Z(marksSystem);
}

/*
==============
FX_SystemIsNotLocked
==============
*/

int __fastcall FX_SystemIsNotLocked(void *data)
{
  return ?FX_SystemIsNotLocked@@YAHPEAX@Z(data);
}

/*
==============
DB_RestartEffects_Finish
==============
*/

void DB_RestartEffects_Finish(void)
{
  ?DB_RestartEffects_Finish@@YAXXZ();
}

/*
==============
FX_UpdateTeam
==============
*/

void __fastcall FX_UpdateTeam(LocalClientNum_t localClientNum, team_t team)
{
  ?FX_UpdateTeam@@YAXW4LocalClientNum_t@@W4team_t@@@Z(localClientNum, team);
}

/*
==============
FX_Update3
==============
*/

void __fastcall FX_Update3(LocalClientNum_t localClientNum)
{
  ?FX_Update3@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_RetriggerEffect
==============
*/

void __fastcall FX_RetriggerEffect(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle, int msecBegin)
{
  ?FX_RetriggerEffect@@YAXW4LocalClientNum_t@@W4ParticleSystemHandle@@H@Z(localClientNum, particleSystemHandle, msecBegin);
}

/*
==============
DB_FlushEffects
==============
*/

void DB_FlushEffects(void)
{
  ?DB_FlushEffects@@YAXXZ();
}

/*
==============
FX_SystemIsNotInPass4
==============
*/

int __fastcall FX_SystemIsNotInPass4(void *data)
{
  return ?FX_SystemIsNotInPass4@@YAHPEAX@Z(data);
}

/*
==============
FX_Update2
==============
*/

void __fastcall FX_Update2(LocalClientNum_t localClientNum, const refdef_t *refdef, const RefdefView *view, float zfar, int isThermalVision, int isZeroG, bool inPip)
{
  ?FX_Update2@@YAXW4LocalClientNum_t@@PEBUrefdef_t@@PEBURefdefView@@MHH_N@Z(localClientNum, refdef, view, zfar, isThermalVision, isZeroG, inPip);
}

/*
==============
FX_Update1
==============
*/

void __fastcall FX_Update1(LocalClientNum_t localClientNum)
{
  ?FX_Update1@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_ApplyVelocityModifier
==============
*/

void __fastcall FX_ApplyVelocityModifier(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle, const float4 *velocityModifierMin, const float4 *velocityModifierMax)
{
  ?FX_ApplyVelocityModifier@@YAXW4LocalClientNum_t@@W4ParticleSystemHandle@@AEBUfloat4@@2@Z(localClientNum, particleSystemHandle, velocityModifierMin, velocityModifierMax);
}

/*
==============
FX_RewindTo
==============
*/

void __fastcall FX_RewindTo(LocalClientNum_t localClientNum, int time, const int rewindTime)
{
  ?FX_RewindTo@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, time, rewindTime);
}

/*
==============
FX_SpawnUpdate2Cmds
==============
*/

void __fastcall FX_SpawnUpdate2Cmds(LocalClientNum_t localClientNum)
{
  ?FX_SpawnUpdate2Cmds@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_BeginUpdateView
==============
*/

void __fastcall FX_BeginUpdateView(LocalClientNum_t localClientNum)
{
  ?FX_BeginUpdateView@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_PropagateInstanceToDetailWorld
==============
*/

void __fastcall FX_PropagateInstanceToDetailWorld(Physics_WorldId authWorld, Physics_WorldId detailWorld, unsigned int instanceId, unsigned int detailInstanceId, const char *fxName)
{
  ?FX_PropagateInstanceToDetailWorld@@YAXW4Physics_WorldId@@0IIPEBD@Z(authWorld, detailWorld, instanceId, detailInstanceId, fxName);
}

/*
==============
FXW_SystemFlush
==============
*/

void __fastcall FXW_SystemFlush(FxSystem *const system, const LocalClientNum_t localClientNum)
{
  ?FXW_SystemFlush@@YAXQEAUFxSystem@@W4LocalClientNum_t@@@Z(system, localClientNum);
}

/*
==============
FX_SystemIsNotInPass2
==============
*/

int __fastcall FX_SystemIsNotInPass2(void *data)
{
  return ?FX_SystemIsNotInPass2@@YAHPEAX@Z(data);
}

/*
==============
FX_PropagateToDetailWorld
==============
*/

void __fastcall FX_PropagateToDetailWorld(LocalClientNum_t localClientNum)
{
  ?FX_PropagateToDetailWorld@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_Update0
==============
*/

void __fastcall FX_Update0(LocalClientNum_t localClientNum, int time)
{
  ?FX_Update0@@YAXW4LocalClientNum_t@@H@Z(localClientNum, time);
}

/*
==============
FX_ApplyScaleModifier
==============
*/

void __fastcall FX_ApplyScaleModifier(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle, const float4 *scaleModMin, const float4 *scaleModMax)
{
  ?FX_ApplyScaleModifier@@YAXW4LocalClientNum_t@@W4ParticleSystemHandle@@AEBUfloat4@@2@Z(localClientNum, particleSystemHandle, scaleModMin, scaleModMax);
}

/*
==============
DB_RestartEffects_Begin
==============
*/

void DB_RestartEffects_Begin(void)
{
  ?DB_RestartEffects_Begin@@YAXXZ();
}

/*
==============
FX_OnKillcamTransition
==============
*/
void FX_OnKillcamTransition(FxMarksSystem *marksSystem)
{
  FxMark *marks; 
  FxMark *v3; 
  GfxMarkContext *p_context; 
  unsigned __int16 *p_firstActiveWorldMarkHandle; 
  unsigned __int64 v6; 
  unsigned int MarkContext_DynEntModel; 
  DynEntityClient *Client; 

  if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 436, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
    __debugbreak();
  marks = marksSystem->marks;
  v3 = marks + 512;
  if ( marks != &marks[512] )
  {
    p_context = &marks->context;
    do
    {
      if ( *(_DWORD *)&p_context[-9].modelType != -1 && (p_context[3].lmapIndex & 0x2000) != 0 )
      {
        if ( R_DecalVolumesMarks_DebugEnabled() )
        {
          if ( !p_context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          Com_Printf(21, "D+ FX_FreeMark: material: %s, model type %d\n", **(const char ***)p_context[-2].typeSpecificIndex.modelIndex, p_context->modelType);
        }
        if ( !p_context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        switch ( p_context->modelType )
        {
          case 0u:
          case 1u:
            p_firstActiveWorldMarkHandle = &marksSystem->firstActiveWorldMarkHandle;
            goto LABEL_18;
          case 2u:
            p_firstActiveWorldMarkHandle = NULL;
            goto LABEL_18;
          case 3u:
            goto LABEL_38;
          case 4u:
            if ( FX_GetMarkContext_DObjIsViewmodel(p_context) )
            {
              if ( !p_context )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2019, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
                  __debugbreak();
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
                  __debugbreak();
              }
              if ( p_context->modelType != 4 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2020, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
                  __debugbreak();
                if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2012, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
                  __debugbreak();
              }
              if ( (p_context->surfIndex & 0x80u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2021, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_DObjIsViewmodel( context ))", (const char *)&queryFormat, "FX_GetMarkContext_DObjIsViewmodel( context )") )
                __debugbreak();
              v6 = ((unsigned __int64)p_context->surfIndex >> 5) & 3;
              FX_FreeMarkFromList(marksSystem, marks, &marksSystem->firstViewmodelMarkHandle[v6], -22);
              if ( !marksSystem->viewmodelMarksCount[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 356, ASSERT_TYPE_ASSERT, "(marksSystem->viewmodelMarksCount[vmClientIndex])", (const char *)&queryFormat, "marksSystem->viewmodelMarksCount[vmClientIndex]") )
                __debugbreak();
              --marksSystem->viewmodelMarksCount[v6];
            }
            else
            {
LABEL_38:
              p_firstActiveWorldMarkHandle = &marksSystem->entFirstMarkHandles[FX_GetMarkContext_EntNum(p_context)];
LABEL_18:
              FX_FreeMarkFromList(marksSystem, marks, p_firstActiveWorldMarkHandle, -22);
            }
LABEL_47:
            ++marksSystem->freedMarkCount;
            break;
          case 5u:
            MarkContext_DynEntModel = FX_GetMarkContext_DynEntModel(p_context);
            Client = DynEnt_GetClient(marksSystem->localClientNum, MarkContext_DynEntModel, DYNENT_BASIS_MODEL);
            if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 374, ASSERT_TYPE_ASSERT, "(dynEntityClient)", (const char *)&queryFormat, "dynEntityClient") )
              __debugbreak();
            FX_FreeMarkFromList(marksSystem, marks, &Client->fxMarkListHead, -22);
            goto LABEL_47;
          case 6u:
            p_firstActiveWorldMarkHandle = &marksSystem->firstGlassMarkHandle;
            goto LABEL_18;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 398, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled case.\n") )
              __debugbreak();
            goto LABEL_47;
        }
      }
      ++marks;
      p_context += 20;
    }
    while ( marks != v3 );
  }
}

/*
==============
DB_FlushEffects
==============
*/
void DB_FlushEffects(void)
{
  int i; 
  FxSystem *System; 

  for ( i = 0; i < fx_maxLocalClients; ++i )
  {
    System = FX_GetSystem(i);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 38, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
      __debugbreak();
    if ( System->singleClientOnly && i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 39, ASSERT_TYPE_ASSERT, "(!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0))", (const char *)&queryFormat, "!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0)") )
      __debugbreak();
    if ( (System->systemFlags & 0x10) != 0 )
    {
      FX_WaitEnterWriteSystemLock(System->lock);
      FXW_SystemFlush(System, (const LocalClientNum_t)i);
      FX_ExitWriteSystemLock(System->lock);
    }
  }
}

/*
==============
DB_RestartEffects_Begin
==============
*/
void DB_RestartEffects_Begin(void)
{
  int i; 
  FxSystem *System; 

  for ( i = 0; i < fx_maxLocalClients; ++i )
  {
    System = FX_GetSystem(i);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 38, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
      __debugbreak();
    if ( System->singleClientOnly && i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 39, ASSERT_TYPE_ASSERT, "(!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0))", (const char *)&queryFormat, "!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0)") )
      __debugbreak();
    if ( (System->systemFlags & 0x10) != 0 )
    {
      FX_WaitEnterWriteSystemLock(System->lock);
      FXW_SystemFlush(System, (const LocalClientNum_t)i);
      FX_ExitWriteSystemLock(System->lock);
    }
  }
}

/*
==============
DB_RestartEffects_Finish
==============
*/
void DB_RestartEffects_Finish(void)
{
  int i; 
  FxSystem *System; 

  for ( i = 0; i < fx_maxLocalClients; ++i )
  {
    System = FX_GetSystem(i);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 38, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
      __debugbreak();
    if ( System->singleClientOnly && i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 39, ASSERT_TYPE_ASSERT, "(!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0))", (const char *)&queryFormat, "!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0)") )
      __debugbreak();
    if ( (System->systemFlags & 0x10) != 0 )
    {
      FX_WaitEnterWriteSystemLock(System->lock);
      if ( fx_rewindToFinish )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 86, ASSERT_TYPE_ASSERT, "(!fx_rewindToFinish)", (const char *)&queryFormat, "!fx_rewindToFinish") )
          __debugbreak();
      }
      fx_rewindToFinish = 0;
      FX_ExitWriteSystemLock(System->lock);
    }
  }
}

/*
==============
FXI_GetValidSystem
==============
*/
FxSystem *FXI_GetValidSystem(const LocalClientNum_t localClientNum)
{
  FxSystem *System; 

  System = FX_GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 38, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( System->singleClientOnly && localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 39, ASSERT_TYPE_ASSERT, "(!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0))", (const char *)&queryFormat, "!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0)") )
    __debugbreak();
  if ( (System->systemFlags & 0x10) == 0 )
    return 0i64;
  return System;
}

/*
==============
FXI_InitCmd
==============
*/
FxSystem *FXI_InitCmd(LocalClientNum_t localClientNum, FxCmd *cmd)
{
  FxSystem *System; 
  FxSystem *result; 

  System = FX_GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 378, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  cmd->localClientNum = localClientNum;
  cmd->system = System;
  cmd->lock = System->lock;
  result = System;
  cmd->isLocked = 0;
  cmd->lockRequest = -1;
  return result;
}

/*
==============
FXI_InitPass4Cmd
==============
*/
FxSystem *FXI_InitPass4Cmd(LocalClientNum_t localClientNum, FxPass4Cmd *passCmd)
{
  FxSystem *inited; 

  inited = FXI_InitCmd(localClientNum, passCmd);
  if ( !inited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 639, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( !inited->command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 641, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  passCmd->fxEntityArray = cg_fxEntitiesArray;
  return inited;
}

/*
==============
FXI_ToggleSystemCommand
==============
*/
void FXI_ToggleSystemCommand(LocalClientNum_t localClientNum)
{
  FxSystem *System; 
  FxSystemCommand *command; 

  System = FX_GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 659, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  command = System->command;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 661, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  command->requestIndex ^= 1u;
  *(_QWORD *)&command->numStopBoltedEffectsRequest = 0i64;
  command->numKillEffectDefIndex = 0;
  *(_QWORD *)&command->numUpdatePass0 = 0i64;
}

/*
==============
FXW_SystemFlush
==============
*/
void FXW_SystemFlush(FxSystem *const system, const LocalClientNum_t localClientNum)
{
  unsigned int systemFlags; 
  FxSystemCommand *command; 
  FxPass4Cmd passCmd; 

  systemFlags = system->systemFlags;
  command = system->command;
  system->systemFlags = systemFlags | 1;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 433, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  *(_QWORD *)&command->numUpdatePass0 = 0i64;
  system->systemFlags = systemFlags;
  FXI_InitPass4Cmd(localClientNum, &passCmd);
  FXI_ToggleSystemCommand(localClientNum);
  FXW_UpdatePass4ProcessCommands(system, &passCmd);
}

/*
==============
FX_ApplyScaleModifier
==============
*/
void FX_ApplyScaleModifier(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle, const float4 *scaleModMin, const float4 *scaleModMax)
{
  __int64 v4; 
  ParticleSystem *v6; 
  unsigned __int32 v7; 
  __int64 v8; 
  __m128 v; 

  v4 = (__int64)(int)localClientNum << 12;
  v6 = NULL;
  v7 = 0;
  if ( g_particleSystemsGeneration[v4 + (particleSystemHandle & 0xFFF)].__all32 == particleSystemHandle )
    v7 = particleSystemHandle & 0xFFF;
  v8 = v4 + v7;
  if ( g_particleSystems[0][v8] >= (ParticleSystem *)0x1000 )
    v6 = g_particleSystems[0][v8];
  if ( v6 )
  {
    v6->m_scaleMod.min = (float4)scaleModMin->v;
    v = scaleModMax->v;
    v6->m_scaleOptions = PARTICLE_USE_SCALE_OPTION_MULT;
    v6->m_scaleMod.max.v = v;
    v6->m_flags |= 0x140000000ui64;
  }
}

/*
==============
FX_ApplyVelocityModifier
==============
*/
void FX_ApplyVelocityModifier(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle, const float4 *velocityModifierMin, const float4 *velocityModifierMax)
{
  __int64 v4; 
  ParticleSystem *v6; 
  unsigned __int32 v7; 
  __int64 v8; 
  __m128 v; 

  v4 = (__int64)(int)localClientNum << 12;
  v6 = NULL;
  v7 = 0;
  if ( g_particleSystemsGeneration[v4 + (particleSystemHandle & 0xFFF)].__all32 == particleSystemHandle )
    v7 = particleSystemHandle & 0xFFF;
  v8 = v4 + v7;
  if ( g_particleSystems[0][v8] >= (ParticleSystem *)0x1000 )
    v6 = g_particleSystems[0][v8];
  if ( v6 )
  {
    v6->m_velocityMod.min = (float4)velocityModifierMin->v;
    v = velocityModifierMax->v;
    v6->m_velocityOptions = PARTICLE_USE_VELOCITY_OPTION_MULT;
    v6->m_velocityMod.max.v = v;
    v6->m_flags |= 0x140000000ui64;
  }
}

/*
==============
FX_BeginUpdateView
==============
*/
void FX_BeginUpdateView(LocalClientNum_t localClientNum)
{
  FX_Beam_Begin();
  FX_PostLight_Begin();
  FX_SpriteBegin();
}

/*
==============
FX_OnKillcamTransition
==============
*/
void FX_OnKillcamTransition(LocalClientNum_t localClientNum)
{
  FxMarksSystem *MarksSystem; 

  if ( fx_marks_killOnKillcamTransition_enabled )
  {
    if ( fx_marks_killOnKillcamTransition_enabled->current.enabled )
    {
      MarksSystem = FX_GetMarksSystem(localClientNum);
      FX_OnKillcamTransition(MarksSystem);
    }
  }
}

/*
==============
FX_PropagateInstanceToDetailWorld
==============
*/
void FX_PropagateInstanceToDetailWorld(Physics_WorldId authWorld, Physics_WorldId detailWorld, unsigned int instanceId, unsigned int detailInstanceId, const char *fxName)
{
  unsigned int NumRigidBodys; 
  unsigned int RigidBodyID; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int i; 
  unsigned int m_serialAndIndex; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  hknpBodyId result; 
  hknpBodyId v21; 
  vec3_t position; 
  vec4_t orientation; 

  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 202, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( detailInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 203, ASSERT_TYPE_ASSERT, "(detailInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "detailInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( Physics_IsInstanceDetailBounded(detailWorld, detailInstanceId) )
  {
    NumRigidBodys = Physics_GetNumRigidBodys(detailWorld, detailInstanceId);
    if ( !Physics_GetNumRigidBodys(authWorld, instanceId) )
    {
      v18 = Physics_GetNumRigidBodys(authWorld, instanceId);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 210, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( authWorld, instanceId ) >= 1)", "%s\n\tPhysics Particle in FX %s doesn't have enough auth bodies %i", "Physics_GetNumRigidBodys( authWorld, instanceId ) >= 1", fxName, v18) )
        __debugbreak();
    }
    if ( NumRigidBodys <= 1 )
    {
      LODWORD(v17) = NumRigidBodys;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 211, ASSERT_TYPE_ASSERT, "(numBodiesDetail > 1)", "%s\n\tPhysics Particle in FX %s doesn't have enough detail bodies %i", "numBodiesDetail > 1", fxName, v17) )
        __debugbreak();
    }
    RigidBodyID = Physics_GetRigidBodyID(authWorld, instanceId, 0);
    v11 = Physics_GetRigidBodyID(detailWorld, detailInstanceId, NumRigidBodys - 1);
    Physics_GetRigidBodyTransform(authWorld, RigidBodyID, &position, &orientation);
    Physics_WarpRigidBodyTo(detailWorld, v11, &position, &orientation, 0, 0);
  }
  else
  {
    v12 = Physics_GetNumRigidBodys(authWorld, instanceId);
    if ( v12 != Physics_GetNumRigidBodys(detailWorld, detailInstanceId) )
    {
      v19 = Physics_GetNumRigidBodys(detailWorld, detailInstanceId);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 230, ASSERT_TYPE_ASSERT, "(numBodies == Physics_GetNumRigidBodys( detailWorld, detailInstanceId ))", "%s\n\tPhysics Particle in FX %s doesn't have the same number of bodies in physics asset in auth (%i) and detail (%i) worlds", "numBodies == Physics_GetNumRigidBodys( detailWorld, detailInstanceId )", fxName, v12, v19) )
        __debugbreak();
    }
    for ( i = 0; i < v12; ++i )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)authWorld > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v16) = authWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(v16) = authWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v16) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(authWorld - 2) <= 5 )
      {
        LODWORD(v16) = authWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v16) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)authWorld <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v16) = authWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v16) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, authWorld, instanceId, i)->m_serialAndIndex;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)detailWorld > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v16) = detailWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
          __debugbreak();
      }
      if ( detailInstanceId == -1 )
      {
        LODWORD(v16) = detailWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v16) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(detailWorld - 2) <= 5 )
      {
        LODWORD(v16) = detailWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v16) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)detailWorld <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v16) = detailWorld;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v16) )
          __debugbreak();
      }
      v15 = HavokPhysics_GetRigidBodyID(&v21, detailWorld, detailInstanceId, i)->m_serialAndIndex;
      Physics_GetRigidBodyTransform(authWorld, m_serialAndIndex, &position, &orientation);
      Physics_WarpRigidBodyTo(detailWorld, v15, &position, &orientation, 0, 0);
    }
  }
}

/*
==============
FX_PropagateToDetailWorld
==============
*/
void FX_PropagateToDetailWorld(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int v3; 

  v1 = localClientNum;
  Profile_Begin(670);
  if ( (unsigned int)v1 >= 2 )
  {
    v3 = 2;
    v2 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  ParticleManager::PropagateToDetailWorld(&g_particleManager[v1]);
  Profile_EndInternal(NULL);
}

/*
==============
FX_RetriggerEffect
==============
*/
void FX_RetriggerEffect(LocalClientNum_t localClientNum, ParticleSystemHandle particleSystemHandle, int msecBegin)
{
  FxSystem *System; 
  FxSystemCommand *command; 

  System = FX_GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 277, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( (System->systemFlags & 0x10) != 0 && particleSystemHandle )
  {
    command = System->command;
    if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 283, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
      __debugbreak();
    if ( command->requestIndex > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 284, ASSERT_TYPE_ASSERT, "(command->requestIndex == 0 || command->requestIndex == 1)", (const char *)&queryFormat, "command->requestIndex == 0 || command->requestIndex == 1") )
      __debugbreak();
  }
}

/*
==============
FX_RewindTo
==============
*/
void FX_RewindTo(LocalClientNum_t localClientNum, int time, const int rewindTime)
{
  FxMarksSystem *MarksSystem; 
  FxSystem *ValidSystem; 
  FxSystem *v8; 

  if ( rewindTime < 0 )
  {
    MarksSystem = FX_GetMarksSystem(localClientNum);
    FX_FreeRewoundMarks(MarksSystem, time + rewindTime);
  }
  ValidSystem = FXI_GetValidSystem(localClientNum);
  v8 = ValidSystem;
  if ( ValidSystem )
  {
    FX_WaitEnterWriteSystemLock(ValidSystem->lock);
    if ( time <= v8->msecNow || rewindTime )
    {
      v8->msecNow = time;
      FXW_SystemFlush(v8, localClientNum);
    }
    if ( fx_rewindToFinish )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 86, ASSERT_TYPE_ASSERT, "(!fx_rewindToFinish)", (const char *)&queryFormat, "!fx_rewindToFinish") )
        __debugbreak();
    }
    fx_rewindToFinish = 0;
    FX_ExitWriteSystemLock(v8->lock);
  }
}

/*
==============
FX_SpawnUpdate2Cmds
==============
*/
void FX_SpawnUpdate2Cmds(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  FxPass2Cmd *p_data; 
  __int64 v3; 
  FxAccessLock *m_fxThreadLocks; 
  FxPass2Cmd *v5; 
  unsigned int v6; 
  void **p_lock; 
  FxSystem *System; 
  FxSystem *v9; 
  signed __int32 v10; 
  volatile signed __int32 *v11; 
  FxPass2Cmd data; 

  v1 = localClientNum;
  p_data = &data;
  v3 = 4i64;
  do
  {
    FxPass2Cmd::FxPass2Cmd(p_data++);
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  m_fxThreadLocks = g_particleManager[v1].m_fxThreadLocks;
  if ( !m_fxThreadLocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 613, ASSERT_TYPE_ASSERT, "(pThreadLockList)", (const char *)&queryFormat, "pThreadLockList") )
    __debugbreak();
  v5 = &data;
  v6 = 0;
  p_lock = &data.updateCmd.lock;
  do
  {
    *((_DWORD *)p_lock + 4) = v6;
    System = FX_GetSystem(v1);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 378, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
      __debugbreak();
    *(p_lock - 7) = System;
    *((_DWORD *)p_lock - 12) = v1;
    *(p_lock - 5) = System->lock;
    *((_DWORD *)p_lock - 8) = 0;
    *((_BYTE *)p_lock - 28) = -1;
    if ( !System->command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 558, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
      __debugbreak();
    v9 = FX_GetSystem(v1);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 378, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
      __debugbreak();
    *(p_lock - 2) = v9;
    *((_DWORD *)p_lock - 2) = v1;
    *p_lock = v9->lock;
    *((_DWORD *)p_lock + 2) = 0;
    *((_BYTE *)p_lock + 12) = -1;
    if ( !v9->command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 452, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
      __debugbreak();
    p_lock[3] = NULL;
    *(p_lock - 5) = m_fxThreadLocks;
    *p_lock = m_fxThreadLocks;
    if ( ((unsigned __int8)m_fxThreadLocks & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", m_fxThreadLocks) )
      __debugbreak();
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)m_fxThreadLocks, 0x10000u);
    v11 = (volatile signed __int32 *)*(p_lock - 5);
    *((_BYTE *)p_lock - 28) = BYTE2(v10);
    if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v11) )
      __debugbreak();
    *((_BYTE *)p_lock + 12) = (unsigned int)_InterlockedExchangeAdd(v11, 0x10000u) >> 16;
    Sys_AddWorkerCmd(WRKCMD_UPDATE_FX_PASS_2, v5);
    ++v6;
    ++m_fxThreadLocks;
    ++v5;
    p_lock += 11;
  }
  while ( v6 < 4 );
}

/*
==============
FX_SystemIsNotInPass2
==============
*/
__int64 FX_SystemIsNotInPass2(void *data)
{
  int v2; 
  unsigned int v3; 
  bool v4; 
  BOOL v5; 

  if ( Sys_IsRenderThread() || Sys_ExistsWorkerCmdsOfType(WRKCMD_BOUNDS_ENT_DELAYED) )
    return 1i64;
  v2 = *((_DWORD *)data + 6);
  v3 = 0;
  v4 = v2 == 0;
  if ( !v2 )
  {
    v5 = *((_BYTE *)data + 28) == **((_BYTE **)data + 2);
    *((_DWORD *)data + 6) = v5;
    v4 = !v5;
  }
  LOBYTE(v3) = v4;
  return v3;
}

/*
==============
FX_SystemIsNotInPass4
==============
*/
__int64 FX_SystemIsNotInPass4(void *data)
{
  int v2; 
  unsigned int v3; 
  bool v4; 
  BOOL v5; 

  if ( Sys_IsRenderThread() || Sys_IsWorkerCmdWaiting(WRKCMD_DPVS_CELL_GLASS, NULL) )
    return 1i64;
  v2 = *((_DWORD *)data + 6);
  v3 = 0;
  v4 = v2 == 0;
  if ( !v2 )
  {
    v5 = *((_BYTE *)data + 28) == **((_BYTE **)data + 2);
    *((_DWORD *)data + 6) = v5;
    v4 = !v5;
  }
  LOBYTE(v3) = v4;
  return v3;
}

/*
==============
FX_SystemIsNotLocked
==============
*/
__int64 FX_SystemIsNotLocked(void *data)
{
  int v3; 
  unsigned int v4; 
  bool v5; 
  BOOL v6; 

  if ( Sys_IsRenderThread() )
    return 1i64;
  v3 = *((_DWORD *)data + 6);
  v4 = 0;
  v5 = v3 == 0;
  if ( !v3 )
  {
    v6 = *((_BYTE *)data + 28) == **((_BYTE **)data + 2);
    *((_DWORD *)data + 6) = v6;
    v5 = !v6;
  }
  LOBYTE(v4) = v5;
  return v4;
}

/*
==============
FX_Update0
==============
*/
void FX_Update0(LocalClientNum_t localClientNum, int time)
{
  __int64 v3; 
  FxPass0Cmd *p_data; 
  __int64 v5; 
  FxSystem *System; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  int msecNow; 
  FxSystemCommand *command; 
  int frameCount; 
  int v19; 
  ParticleManager *v20; 
  FxAccessLock *m_fxThreadLocks; 
  unsigned int v22; 
  FxPass0Cmd *v23; 
  void **p_lock; 
  FxSystem *v25; 
  __int64 v26; 
  __int64 v27; 
  FxPass0Cmd data; 

  v3 = localClientNum;
  p_data = &data;
  v5 = 4i64;
  do
  {
    FxPass0Cmd::FxPass0Cmd(p_data++);
    --v5;
  }
  while ( v5 );
  Sys_ProfBeginNamedEvent(0xFFFFFF00, "FX_Update0");
  System = FX_GetSystem(v3);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 479, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( System->singleClientOnly && (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 480, ASSERT_TYPE_ASSERT, "(!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0))", (const char *)&queryFormat, "!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0)") )
    __debugbreak();
  FX_WaitEnterWriteSystemLock(System->lock);
  v7 = System->systemFlags & 0xFFFFFFFE;
  if ( !fx_enable->current.enabled )
    v7 = System->systemFlags | 1;
  System->systemFlags = v7;
  v8 = v7 | 2;
  v9 = v7 & 0xFFFFFFFD;
  if ( !fx_draw->current.enabled )
    v9 = v8;
  System->systemFlags = v9;
  v10 = v9 | 4;
  v11 = v9 & 0xFFFFFFFB;
  if ( !fx_draw_spotLight->current.enabled )
    v11 = v10;
  System->systemFlags = v11;
  v12 = v11 & 0xFFFFFFBF;
  v13 = v11 | 0x40;
  if ( !fx_deferelem->current.enabled )
    v13 = v12;
  System->systemFlags = v13;
  v14 = v13 | 0x80;
  v15 = v13 & 0xFFFFFF7F;
  msecNow = System->msecNow;
  if ( !fx_draw_omniLight->current.enabled )
    v15 = v14;
  System->systemFlags = v15;
  if ( time < msecNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 413, ASSERT_TYPE_ASSERT, "( time ) >= ( system->msecNow )", "%s >= %s\n\t%i, %i", "time", "system->msecNow", time, msecNow) )
    __debugbreak();
  command = System->command;
  System->camera.isValid = 0;
  System->msecDelta = time - System->msecNow;
  frameCount = System->frameCount;
  System->msecDraw = time;
  System->msecNow = time;
  v19 = frameCount + 1;
  if ( frameCount < 0 )
    v19 = 1;
  System->frameCount = v19;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 433, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  *(_QWORD *)&command->numUpdatePass0 = 0i64;
  FX_ExitWriteSystemLock(System->lock);
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v27) = 2;
    LODWORD(v26) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  v20 = &g_particleManager[v3];
  ParticleManager::PreUpdate(v20, System);
  m_fxThreadLocks = v20->m_fxThreadLocks;
  if ( v20 == (ParticleManager *)-312872i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 499, ASSERT_TYPE_ASSERT, "(pThreadLockList)", (const char *)&queryFormat, "pThreadLockList") )
    __debugbreak();
  ParticleManager::UpdateSounds(&g_particleManager[v3]);
  v22 = 0;
  v23 = &data;
  p_lock = &data.lock;
  do
  {
    *((_DWORD *)p_lock + 4) = v22;
    v25 = FX_GetSystem(v3);
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 378, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
      __debugbreak();
    *(p_lock - 2) = v25;
    *((_DWORD *)p_lock - 2) = v3;
    *p_lock = v25->lock;
    *((_DWORD *)p_lock + 2) = 0;
    *((_BYTE *)p_lock + 12) = -1;
    if ( !v25->command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 452, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
      __debugbreak();
    *((_DWORD *)p_lock + 6) = 1;
    *((_DWORD *)p_lock + 7) = (v25->systemFlags >> 6) & 1;
    *p_lock = m_fxThreadLocks;
    if ( ((unsigned __int8)m_fxThreadLocks & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", m_fxThreadLocks) )
      __debugbreak();
    *((_BYTE *)p_lock + 12) = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)m_fxThreadLocks, 0x10000u) >> 16;
    Sys_AddWorkerCmd(WRKCMD_UPDATE_FX_PASS_0, v23);
    ++v22;
    ++m_fxThreadLocks;
    ++v23;
    p_lock += 6;
  }
  while ( v22 < 4 );
  Sys_ProfEndNamedEvent();
}

/*
==============
FX_Update1
==============
*/
void FX_Update1(LocalClientNum_t localClientNum)
{
  FxSystem *System; 
  __int64 data; 
  FxAccessLock *lock; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 

  System = FX_GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 378, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  LODWORD(data) = localClientNum;
  lock = System->lock;
  LODWORD(v5) = 0;
  BYTE4(v5) = -1;
  if ( !System->command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 452, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command", System, data, lock, v5) )
    __debugbreak();
  v6 = 1;
  v7 = (System->systemFlags >> 6) & 1;
  if ( !System->command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 530, ASSERT_TYPE_ASSERT, "(system->command)", (const char *)&queryFormat, "system->command") )
    __debugbreak();
  if ( System->singleClientOnly && localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 531, ASSERT_TYPE_ASSERT, "(!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0))", (const char *)&queryFormat, "!system->singleClientOnly || (localClientNum == LOCAL_CLIENT_0)") )
    __debugbreak();
  Sys_AddWorkerCmd(WRKCMD_UPDATE_GLASS, &data);
}

/*
==============
FX_Update2
==============
*/
void FX_Update2(LocalClientNum_t localClientNum, const refdef_t *refdef, const RefdefView *view, float zfar, int isThermalVision, int isZeroG, LocalClientNum_t inPip)
{
  FxSystem *System; 
  FxCamera *p_camera; 
  double FarPlaneDist; 

  if ( !(_BYTE)inPip )
  {
    Sys_ProfBeginNamedEvent(0xFFF5DEB3, "FX_Update2");
    System = FX_GetSystem(localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 579, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system", -2i64) )
      __debugbreak();
    p_camera = &System->command->camera;
    FarPlaneDist = R_GetFarPlaneDist();
    FX_SetUpdateCamera(refdef, *(float *)&FarPlaneDist, isThermalVision, isZeroG, p_camera, localClientNum);
    inPip = localClientNum;
    Sys_AddWorkerCmd(WRKCMD_UPDATE_FX_BONE_MAP_CACHE_AND_SPAWN_PASS_2, &inPip);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
FX_Update3
==============
*/
void FX_Update3(LocalClientNum_t localClientNum)
{
  FxSystem *System; 
  FxSystemCommand *command; 
  volatile signed __int32 *v4; 
  FxSystem *data; 
  __int64 v6; 
  FxAccessLock *lock; 
  __int64 v8; 
  volatile int *p_pass5iterator; 
  volatile int *p_pass5count; 
  FxPass4Cmd passCmd; 
  FxGenerateMarkVertsCmd genMarkVertsCmd; 

  FXI_InitPass4Cmd(localClientNum, &passCmd);
  FXI_ToggleSystemCommand(localClientNum);
  System = FX_GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 378, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  data = System;
  LODWORD(v6) = localClientNum;
  lock = System->lock;
  LODWORD(v8) = 0;
  BYTE4(v8) = -1;
  command = System->command;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_api.cpp", 682, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command", data, v6, lock, v8) )
    __debugbreak();
  p_pass5iterator = &command->pass5iterator;
  p_pass5count = &command->pass5count;
  command->pass5count = 1;
  v4 = (volatile signed __int32 *)passCmd.lock;
  if ( ((__int64)passCmd.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", passCmd.lock) )
    __debugbreak();
  passCmd.lockRequest = (unsigned int)_InterlockedExchangeAdd(v4, 0x10000u) >> 16;
  Sys_AddWorkerCmd(WRKCMD_UPDATE_FX_PASS_4, &passCmd);
  Sys_AddWorkerCmd(WRKCMD_UPDATE_FX_PASS_5, &data);
  FX_FillGenerateMarkVertsCmd(&passCmd, &genMarkVertsCmd);
  Sys_AddWorkerCmd(WRKCMD_GENERATE_MARK_VERTS, &genMarkVertsCmd);
}

/*
==============
FX_UpdateTeam
==============
*/
void FX_UpdateTeam(LocalClientNum_t localClientNum, team_t team)
{
  FX_GetSystem(localClientNum)->team = team;
}

