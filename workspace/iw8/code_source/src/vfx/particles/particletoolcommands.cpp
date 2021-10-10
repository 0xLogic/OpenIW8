/*
==============
Particle_ToolGetCurrentSystem
==============
*/

const ParticleSystem *__fastcall Particle_ToolGetCurrentSystem(LocalClientNum_t localClientNum)
{
  return ?Particle_ToolGetCurrentSystem@@YAPEBVParticleSystem@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Particle_ToolCommandClose
==============
*/

void Particle_ToolCommandClose(void)
{
  ?Particle_ToolCommandClose@@YAXXZ();
}

/*
==============
Particle_ToolCommandInit
==============
*/

void Particle_ToolCommandInit(void)
{
  ?Particle_ToolCommandInit@@YAXXZ();
}

/*
==============
Particle_ToolCommandRestoreCurrentEffect
==============
*/

void __fastcall Particle_ToolCommandRestoreCurrentEffect(LocalClientNum_t localClientNum)
{
  ?Particle_ToolCommandRestoreCurrentEffect@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Particle_FindSystemDef
==============
*/

const ParticleSystemDef *__fastcall Particle_FindSystemDef(const char *vfxName)
{
  return ?Particle_FindSystemDef@@YAPEBUParticleSystemDef@@PEBD@Z(vfxName);
}

/*
==============
Particle_ToolAddToQueue
==============
*/

bool __fastcall Particle_ToolAddToQueue(const char *command, char *responseBuffer, unsigned int responseBufferSize)
{
  return ?Particle_ToolAddToQueue@@YA_NPEBDPEADI@Z(command, responseBuffer, responseBufferSize);
}

/*
==============
Particle_ToolCommandRemoveCurrentEffect
==============
*/

void __fastcall Particle_ToolCommandRemoveCurrentEffect(LocalClientNum_t localClientNum)
{
  ?Particle_ToolCommandRemoveCurrentEffect@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Particle_FindSystemDef
==============
*/
const ParticleSystemDef *Particle_FindSystemDef(const char *vfxName)
{
  return 0i64;
}

/*
==============
Particle_GetLocalClientTime
==============
*/
__int64 Particle_GetLocalClientTime(LocalClientNum_t localClientNum)
{
  int v4; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->time;
}

/*
==============
Particle_ToolAddToQueue
==============
*/
char Particle_ToolAddToQueue(const char *command, char *responseBuffer, unsigned int responseBufferSize)
{
  Particle_ToolCommandTweakVFXFile(command, responseBuffer, responseBufferSize);
  return 1;
}

/*
==============
Particle_ToolCommandClose
==============
*/
void Particle_ToolCommandClose(void)
{
  s_toolCommandInit = 0;
  s_pCurrentSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
}

/*
==============
Particle_ToolCommandInit
==============
*/
void Particle_ToolCommandInit(void)
{
  s_toolCommandInit = 1;
}

/*
==============
Particle_ToolCommandRemoveCurrentEffect
==============
*/
void Particle_ToolCommandRemoveCurrentEffect(LocalClientNum_t localClientNum)
{
  ParticleManager *ParticleManager; 

  if ( s_pCurrentSystem )
  {
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    ParticleManager::KillSystem(ParticleManager, s_pCurrentSystem);
    s_pCurrentSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
}

/*
==============
Particle_ToolCommandRestoreCurrentEffect
==============
*/
void Particle_ToolCommandRestoreCurrentEffect(LocalClientNum_t localClientNum)
{
  char *v2; 
  char *v3; 
  XAssetHeader v4; 
  const ParticleSystemDef *physicsLibrary; 
  ParticleManager *ParticleManager; 
  const FxCamera *pCamera; 
  ParticleManager *v8; 
  int spawnTimeMsec; 
  float4 emitterOrientationQuat; 
  float4 emitterPos; 

  if ( s_vfxName[0] )
  {
    v2 = strrchr_0(s_vfxName, 46);
    v3 = v2;
    if ( v2 )
      *v2 = 0;
    v4.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_VFX, s_vfxName, 0).physicsLibrary;
    physicsLibrary = (const ParticleSystemDef *)v4.physicsLibrary;
    if ( v3 )
      *v3 = 46;
    if ( v4.physicsLibrary )
    {
      ParticleManager = ParticleManager::GetParticleManager(localClientNum);
      emitterPos.v = 0i64;
      emitterOrientationQuat.v = 0i64;
      pCamera = &ParticleManager->m_pFxSystem->camera;
      v8 = ParticleManager;
      spawnTimeMsec = Particle_GetLocalClientTime(localClientNum);
      s_pCurrentSystem = ParticleManager::AddSystem(v8, localClientNum, physicsLibrary, &emitterPos, &emitterOrientationQuat, spawnTimeMsec, PARTICLE_SYSTEM_FLAG_NONE, 0xFFFu, 0xFFFFu, NULL, pCamera, NULL);
    }
  }
}

/*
==============
Particle_ToolCommandTweakParticleTypes
==============
*/
void Particle_ToolCommandTweakParticleTypes(ParticleSystemDef *pSystemDef, Particle_ToolCommandType commandType)
{
  char v3; 
  char *v4; 
  unsigned int v5; 
  __int64 i; 
  char *v7; 
  ParticleStateDef *v8; 
  char *v9; 
  int numEmitters; 
  ParticleEmitterDef *v11; 
  ParticleEmitterDef *v12; 
  ParticleEmitterDef *v13; 
  __int64 v14; 
  ParticleEmitterDef *v15; 
  __int64 v16; 
  ParticleModule *v17; 
  const ParticleCurveDef *ModuleCurveList; 
  int ModuleNumCurves; 
  int outNumEmittersTotal; 
  char *ppData; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 

  if ( !pSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particletoolcommands.cpp", 289, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  v3 = 0;
  v4 = strtok(NULL, ",");
  if ( I_strnicmp(v4, s_systemName, s_systemNameLength) )
  {
    if ( I_strnicmp(v4, s_emitterName, s_emitterNameLength) )
    {
      if ( I_strnicmp(v4, s_scriptedInputNodeNameBase, s_scriptedInputNodeNameBaseLength) )
      {
        if ( I_strnicmp(v4, s_stateName, s_stateNameLength) )
        {
          if ( I_strnicmp(v4, s_moduleGroupNameBase, s_moduleGroupNameBaseLength) )
          {
            if ( I_strnicmp(v4, s_moduleNameBase, s_moduleNameBaseLength) )
            {
              if ( I_strnicmp(v4, s_curveName, s_curveNameLength) )
              {
                if ( I_strnicmp(v4, s_controlPointName, s_controlPointNameLength) )
                {
                  Com_PrintError(21, "Invalid particle tweak type");
                  return;
                }
                v5 = 6;
              }
              else
              {
                v5 = 5;
              }
            }
            else
            {
              v5 = 4;
            }
          }
          else
          {
            v5 = 3;
          }
        }
        else
        {
          v5 = 2;
        }
      }
      else
      {
        v5 = 1;
        v3 = 1;
      }
    }
    else
    {
      v5 = 1;
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v5 )
  {
    for ( i = 0i64; i < v5; *(&v22 + i++) = atoi(v7) )
      v7 = strtok(NULL, ",");
  }
  v9 = strtok(NULL, ",");
  ppData = v9;
  switch ( v5 )
  {
    case 0u:
      outNumEmittersTotal = 0;
      ParseSystemMembers(v9, pSystemDef, &outNumEmittersTotal);
      break;
    case 1u:
      numEmitters = pSystemDef->numEmitters;
      if ( v3 )
      {
        if ( v22 < numEmitters || v22 - numEmitters >= pSystemDef->numScriptedInputNodes )
          goto LABEL_53;
        Particle_ParseToScriptedInputNodeDef(pSystemDef, &pSystemDef->scriptedInputNodeDefs[v22 - numEmitters], v9);
      }
      else
      {
        if ( v22 >= numEmitters )
          goto LABEL_53;
        ParseEmitterMembers(v9, pSystemDef, &pSystemDef->emitterDefs[v22], 0);
      }
      break;
    case 2u:
      if ( v22 >= pSystemDef->numEmitters )
        goto LABEL_53;
      v11 = &pSystemDef->emitterDefs[v22];
      if ( v23 >= v11->numStates )
        goto LABEL_53;
      ParseStateMembers(v9, pSystemDef, &v11->stateDefs[v23], NULL, 0);
      break;
    case 3u:
      if ( v22 >= pSystemDef->numEmitters )
        goto LABEL_53;
      v12 = &pSystemDef->emitterDefs[v22];
      if ( v23 >= v12->numStates || v24 >= 3 )
        goto LABEL_53;
      ParseModuleGroupMembers(v9, &v12->stateDefs[v23].moduleGroupDefs[v24]);
      break;
    case 4u:
      if ( v22 >= pSystemDef->numEmitters )
        goto LABEL_53;
      v13 = &pSystemDef->emitterDefs[v22];
      if ( v23 >= v13->numStates )
        goto LABEL_53;
      v8 = &v13->stateDefs[v23];
      if ( v24 >= 3 )
        goto LABEL_53;
      v14 = (__int64)&v8->moduleGroupDefs[v24];
      if ( v25 >= *(_DWORD *)(v14 + 8) )
        goto LABEL_53;
      ParticleModule::ParseToModuleDef(pSystemDef, v13, v8, (ParticleModuleDef *)(*(_QWORD *)v14 + 240i64 * v25), v9);
      break;
    case 5u:
      return;
    case 6u:
      if ( v22 < pSystemDef->numEmitters )
      {
        v15 = &pSystemDef->emitterDefs[v22];
        if ( v23 < v15->numStates && v24 < 3 )
        {
          v16 = (__int64)&v15->stateDefs[v23].moduleGroupDefs[v24];
          if ( v25 < *(_DWORD *)(v16 + 8) )
          {
            v17 = (ParticleModule *)(240i64 * v25 + *(_QWORD *)v16 + 16);
            ModuleCurveList = ParticleModule::GetModuleCurveList(v17);
            if ( ModuleCurveList )
            {
              ModuleNumCurves = GetModuleNumCurves(v17->m_type, pSystemDef->version);
              if ( v26 < ModuleNumCurves && v27 < ModuleCurveList[v26].numControlPoints )
              {
                ParseControlPoint(NULL, (const char **)&ppData, &ModuleCurveList[v26].controlPoints[v27], 0);
                return;
              }
            }
            else
            {
              Com_PrintWarning(21, "COMET TWEAKING: Trying to tweak a control point on unsupported module type: %d", (unsigned int)v17->m_type);
            }
          }
        }
      }
LABEL_53:
      Com_PrintWarning(21, "COMET TWEAKING: Data is out of sync, please restart effect.\n", v8);
      break;
  }
}

/*
==============
Particle_ToolCommandTweakVFXFile
==============
*/
void Particle_ToolCommandTweakVFXFile(const char *commandList, char *responseCommandBuffer, unsigned int responseCommandBufferSize)
{
  char v4; 
  unsigned __int64 v5; 
  char *v6; 
  unsigned int v7; 
  unsigned int v8; 
  ParticleManager *ParticleManager; 
  XAssetHeader v10; 
  char *v11; 
  const char *v12; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  cg_t *v17; 
  float v18; 
  float v19; 
  float v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  ParticleSystemHandle v24; 
  __int64 v25; 
  ParticleSystem *v26; 
  ParticleSystem *v27; 
  const ParticleSystemDef *Def; 
  bool v29; 
  const ParticleSystemDef *v30; 
  ParticleManager *v31; 
  char *v32; 
  char *v33; 
  __int64 v34; 
  ParticleSystem *v35; 
  ParticleSystem *v36; 
  bool v37; 
  __m128 v38; 
  FxSystem *m_pFxSystem; 
  int spawnTimeMsec; 
  float4 emitterOrientationQuat; 
  float4 emitterPos; 

  v4 = s_toolCommandInit;
  v5 = responseCommandBufferSize;
  if ( !s_toolCommandInit )
    v4 = 1;
  s_toolCommandInit = v4;
  v6 = strtok((char *)commandList, ",");
  v7 = atoi(v6);
  v8 = v7;
  if ( v7 > 8 )
  {
    Com_PrintWarning(21, "Unsupported COMET command %d", v7);
    return;
  }
  if ( v7 == 5 )
  {
    Dvar_SetBool_Internal(particle_update, 0);
    return;
  }
  if ( v7 == 6 )
  {
    Dvar_SetBool_Internal(particle_update, 1);
    return;
  }
  if ( v7 )
  {
    if ( v7 == 7 )
    {
      Particle_OutputSystemNamesToBuffer(responseCommandBuffer, v5, 7u);
      return;
    }
    if ( v7 == 8 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      p_view = &LocalClientGlobals->refdef.view;
      if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
        __debugbreak();
      refdefViewOrg_aab = p_view->refdefViewOrg_aab;
      v = (_DWORD *)p_view->org.org.v;
      if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
        __debugbreak();
      emitterOrientationQuat.v.m128_i32[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
      emitterOrientationQuat.v.m128_i32[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
      emitterOrientationQuat.v.m128_i32[2] = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
      v17 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      v18 = v17->refdef.view.axis.m[0].v[0];
      v19 = v17->refdef.view.axis.m[0].v[1];
      v20 = v17->refdef.view.axis.m[0].v[2];
      v21 = j_sprintf_s(responseCommandBuffer, v5, "%d,", 8i64);
      v22 = j_sprintf_s(&responseCommandBuffer[v21], (unsigned int)(v5 - v21), "%.2f,%.2f,%.2f,", emitterOrientationQuat.v.m128_f32[0], emitterOrientationQuat.v.m128_f32[1], emitterOrientationQuat.v.m128_f32[2]);
      j_sprintf_s(&responseCommandBuffer[v22 + v21], (unsigned int)(v5 - (v22 + v21)), "%.2f,%.2f,%.2f,", v18, v19, v20);
      return;
    }
  }
  else
  {
    g_debugZoneCompileStartTime = Sys_Milliseconds();
  }
  ParticleManager = ParticleManager::GetParticleManager(LOCAL_CLIENT_0);
  v10.physicsLibrary = NULL;
  v11 = strtok(NULL, ",");
  v12 = v11;
  if ( !v11 )
  {
    Com_PrintWarning(21, "Could not get the file name from the command.");
    return;
  }
  I_strlwr(v11);
  v23 = -1i64;
  do
    ++v23;
  while ( v12[v23] );
  if ( (unsigned int)v23 >= 0x80 )
  {
    Com_PrintWarning(21, "The effect name %s (%d characters) is longer than the max length of %d", v12, (unsigned int)v23, 128);
    return;
  }
  v24 = s_pCurrentSystem;
  v25 = 0i64;
  if ( g_particleSystemsGeneration[s_pCurrentSystem & 0xFFF].__all32 == s_pCurrentSystem )
    v25 = s_pCurrentSystem & 0xFFF;
  v26 = NULL;
  v27 = g_particleSystems[0][v25];
  if ( (unsigned __int64)v27 >= 0x1000 )
    v26 = v27;
  if ( v26 )
  {
    Def = ParticleSystem::GetDef(v26);
    v29 = I_strnicmp(Def->name, v12, (unsigned int)(v23 - 4)) != 0;
    if ( v8 == 4 || v8 == 1 || v29 )
    {
      v24 = s_pCurrentSystem;
      if ( s_pCurrentSystem )
      {
        v31 = ParticleManager::GetParticleManager(LOCAL_CLIENT_0);
        ParticleManager::KillSystem(v31, s_pCurrentSystem);
        v24 = PARTICLE_SYSTEM_INVALID_HANDLE;
        s_pCurrentSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
    }
    else
    {
      v30 = ParticleSystem::GetDef(v26);
      v24 = s_pCurrentSystem;
      v10.physicsLibrary = (PhysicsLibrary *)v30;
    }
  }
  if ( (v8 & 0xFFFFFFFB) == 0 )
    goto LABEL_59;
  if ( v10.physicsLibrary )
    goto LABEL_46;
  v32 = strrchr_0(v12, 46);
  v33 = v32;
  if ( v32 )
    *v32 = 0;
  if ( DB_XAssetExists(ASSET_TYPE_VFX, v12) )
    v10.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_VFX, v12, 0).physicsLibrary;
  if ( v33 )
    *v33 = 46;
  v24 = s_pCurrentSystem;
  if ( v10.physicsLibrary )
  {
LABEL_46:
    if ( v8 == 2 )
    {
      g_lastParticleToolTweakTime = Sys_Milliseconds();
      Particle_ToolCommandTweakParticleTypes(v10.vfx, PARTICLE_TOOL_COMMAND_TWEAK);
      return;
    }
  }
  if ( v8 == 1 && v10.physicsLibrary )
  {
    v34 = 0i64;
    if ( g_particleSystemsGeneration[v24 & 0xFFF].__all32 == v24 )
      v34 = v24 & 0xFFF;
    v35 = NULL;
    v36 = g_particleSystems[0][v34];
    if ( (unsigned __int64)v36 >= 0x1000 )
      v35 = v36;
    if ( !v35 || ParticleSystem::GetDef(v35) != v10.vfx )
    {
      v37 = SHIDWORD(v10.physicsLibrary[1].name) <= 0;
      v38 = *(__m128 *)&v10.physicsLibrary[4].havokData;
      emitterPos.v = *(__m128 *)&v10.physicsLibrary[4].name;
      emitterOrientationQuat.v = v38;
      if ( !v37 )
      {
        m_pFxSystem = ParticleManager->m_pFxSystem;
        spawnTimeMsec = Particle_GetLocalClientTime(LOCAL_CLIENT_0);
        s_pCurrentSystem = ParticleManager::AddSystem(ParticleManager, LOCAL_CLIENT_0, v10.vfx, &emitterPos, &emitterOrientationQuat, spawnTimeMsec, PARTICLE_SYSTEM_FLAG_NONE, &m_pFxSystem->camera, NULL);
LABEL_59:
        Core_strcpy(s_vfxName, 0x80ui64, v12);
      }
    }
  }
}

/*
==============
Particle_ToolGetCurrentSystem
==============
*/
ParticleSystem *Particle_ToolGetCurrentSystem(LocalClientNum_t localClientNum)
{
  ParticleSystem *result; 
  __int64 v2; 
  unsigned __int32 v3; 
  __int64 v4; 

  result = NULL;
  if ( s_toolCommandInit )
  {
    v2 = (__int64)(int)localClientNum << 12;
    v3 = 0;
    if ( g_particleSystemsGeneration[v2 + (s_pCurrentSystem & 0xFFF)].__all32 == s_pCurrentSystem )
      v3 = s_pCurrentSystem & 0xFFF;
    v4 = v2 + v3;
    if ( g_particleSystems[0][v4] >= (ParticleSystem *)0x1000 )
      return g_particleSystems[0][v4];
  }
  return result;
}

