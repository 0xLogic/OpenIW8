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
  char *v3; 
  char *v4; 
  XAssetHeader v5; 
  const ParticleSystemDef *physicsLibrary; 
  ParticleManager *ParticleManager; 
  const FxCamera *pCamera; 
  ParticleManager *v10; 
  int spawnTimeMsec; 
  float4 emitterOrientationQuat; 
  float4 emitterPos; 

  if ( s_vfxName[0] )
  {
    v3 = strrchr_0(s_vfxName, 46);
    v4 = v3;
    if ( v3 )
      *v3 = 0;
    v5.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_VFX, s_vfxName, 0).physicsLibrary;
    physicsLibrary = (const ParticleSystemDef *)v5.physicsLibrary;
    if ( v4 )
      *v4 = 46;
    if ( v5.physicsLibrary )
    {
      ParticleManager = ParticleManager::GetParticleManager(localClientNum);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rsp+98h+emitterPos.v], xmm0
        vmovups xmmword ptr [rsp+98h+var_38.v], xmm0
      }
      pCamera = &ParticleManager->m_pFxSystem->camera;
      v10 = ParticleManager;
      spawnTimeMsec = Particle_GetLocalClientTime(localClientNum);
      s_pCurrentSystem = ParticleManager::AddSystem(v10, localClientNum, physicsLibrary, &emitterPos, &emitterOrientationQuat, spawnTimeMsec, PARTICLE_SYSTEM_FLAG_NONE, 0xFFFu, 0xFFFFu, NULL, pCamera, NULL);
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
  char v7; 
  unsigned __int64 v8; 
  char *v9; 
  unsigned int v10; 
  unsigned int v11; 
  ParticleManager *ParticleManager; 
  char *v14; 
  const char *v15; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  int v24; 
  int v32; 
  int v33; 
  __int64 v41; 
  ParticleSystemHandle v42; 
  __int64 v43; 
  ParticleSystem *v44; 
  ParticleSystem *v45; 
  const ParticleSystemDef *Def; 
  bool v47; 
  const ParticleSystemDef *v48; 
  ParticleManager *v49; 
  char *v50; 
  char *v51; 
  __int64 v52; 
  ParticleSystem *v53; 
  ParticleSystem *v54; 
  bool v55; 
  FxSystem *m_pFxSystem; 
  int LocalClientTime; 
  char *fmt; 
  char *fmta; 
  double spawnTimeMsec; 
  double spawnTimeMseca; 
  float4 emitterOrientationQuat; 
  float4 emitterPos; 

  v7 = s_toolCommandInit;
  v8 = responseCommandBufferSize;
  if ( !s_toolCommandInit )
    v7 = 1;
  s_toolCommandInit = v7;
  v9 = strtok((char *)commandList, ",");
  v10 = atoi(v9);
  v11 = v10;
  if ( v10 > 8 )
  {
    Com_PrintWarning(21, "Unsupported COMET command %d", v10);
    return;
  }
  if ( v10 == 5 )
  {
    Dvar_SetBool_Internal(particle_update, 0);
    return;
  }
  if ( v10 == 6 )
  {
    Dvar_SetBool_Internal(particle_update, 1);
    return;
  }
  if ( v10 )
  {
    if ( v10 == 7 )
    {
      Particle_OutputSystemNamesToBuffer(responseCommandBuffer, v8, 7u);
      return;
    }
    if ( v10 == 8 )
    {
      __asm
      {
        vmovaps [rsp+0E8h+var_48], xmm6
        vmovaps [rsp+0E8h+var_58], xmm7
        vmovaps [rsp+0E8h+var_68], xmm8
      }
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
      _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      __asm
      {
        vmovss  xmm8, dword ptr [rax+6944h]
        vmovss  xmm7, dword ptr [rax+6948h]
        vmovss  xmm6, dword ptr [rax+694Ch]
      }
      v24 = j_sprintf_s(responseCommandBuffer, v8, "%d,", 8i64);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+emitterOrientationQuat.v+8]
        vmovss  xmm3, dword ptr [rsp+0E8h+emitterOrientationQuat.v]
        vmovss  xmm1, dword ptr [rsp+0E8h+emitterOrientationQuat.v+4]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+0E8h+spawnTimeMsec], xmm0
        vmovq   r9, xmm3
      }
      v32 = v24;
      __asm { vmovsd  [rsp+0E8h+fmt], xmm1 }
      v33 = j_sprintf_s(&responseCommandBuffer[v24], (unsigned int)(v8 - v24), "%.2f,%.2f,%.2f,", *(double *)&_XMM3, *(double *)&fmt, spawnTimeMsec);
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vcvtss2sd xmm3, xmm8, xmm8
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  qword ptr [rsp+0E8h+spawnTimeMsec], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+0E8h+fmt], xmm1
      }
      j_sprintf_s(&responseCommandBuffer[v33 + v32], (unsigned int)(v8 - (v33 + v32)), "%.2f,%.2f,%.2f,", *(double *)&_XMM3, *(double *)&fmta, spawnTimeMseca);
      __asm
      {
        vmovaps xmm8, [rsp+0E8h+var_68]
        vmovaps xmm7, [rsp+0E8h+var_58]
        vmovaps xmm6, [rsp+0E8h+var_48]
      }
      return;
    }
  }
  else
  {
    g_debugZoneCompileStartTime = Sys_Milliseconds();
  }
  ParticleManager = ParticleManager::GetParticleManager(LOCAL_CLIENT_0);
  _RBP = NULL;
  v14 = strtok(NULL, ",");
  v15 = v14;
  if ( !v14 )
  {
    Com_PrintWarning(21, "Could not get the file name from the command.");
    return;
  }
  I_strlwr(v14);
  v41 = -1i64;
  do
    ++v41;
  while ( v15[v41] );
  if ( (unsigned int)v41 >= 0x80 )
  {
    Com_PrintWarning(21, "The effect name %s (%d characters) is longer than the max length of %d", v15, (unsigned int)v41, 128);
    return;
  }
  v42 = s_pCurrentSystem;
  v43 = 0i64;
  if ( g_particleSystemsGeneration[s_pCurrentSystem & 0xFFF].__all32 == s_pCurrentSystem )
    v43 = s_pCurrentSystem & 0xFFF;
  v44 = NULL;
  v45 = g_particleSystems[0][v43];
  if ( (unsigned __int64)v45 >= 0x1000 )
    v44 = v45;
  if ( v44 )
  {
    Def = ParticleSystem::GetDef(v44);
    v47 = I_strnicmp(Def->name, v15, (unsigned int)(v41 - 4)) != 0;
    if ( v11 == 4 || v11 == 1 || v47 )
    {
      v42 = s_pCurrentSystem;
      if ( s_pCurrentSystem )
      {
        v49 = ParticleManager::GetParticleManager(LOCAL_CLIENT_0);
        ParticleManager::KillSystem(v49, s_pCurrentSystem);
        v42 = PARTICLE_SYSTEM_INVALID_HANDLE;
        s_pCurrentSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
    }
    else
    {
      v48 = ParticleSystem::GetDef(v44);
      v42 = s_pCurrentSystem;
      _RBP = (ParticleSystemDef *)v48;
    }
  }
  if ( (v11 & 0xFFFFFFFB) == 0 )
    goto LABEL_59;
  if ( _RBP )
    goto LABEL_46;
  v50 = strrchr_0(v15, 46);
  v51 = v50;
  if ( v50 )
    *v50 = 0;
  if ( DB_XAssetExists(ASSET_TYPE_VFX, v15) )
    _RBP = DB_FindXAssetHeader(ASSET_TYPE_VFX, v15, 0).vfx;
  if ( v51 )
    *v51 = 46;
  v42 = s_pCurrentSystem;
  if ( _RBP )
  {
LABEL_46:
    if ( v11 == 2 )
    {
      g_lastParticleToolTweakTime = Sys_Milliseconds();
      Particle_ToolCommandTweakParticleTypes(_RBP, PARTICLE_TOOL_COMMAND_TWEAK);
      return;
    }
  }
  if ( v11 == 1 && _RBP )
  {
    v52 = 0i64;
    if ( g_particleSystemsGeneration[v42 & 0xFFF].__all32 == v42 )
      v52 = v42 & 0xFFF;
    v53 = NULL;
    v54 = g_particleSystems[0][v52];
    if ( (unsigned __int64)v54 >= 0x1000 )
      v53 = v54;
    if ( !v53 || ParticleSystem::GetDef(v53) != _RBP )
    {
      v55 = _RBP->numEmitters <= 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+60h]
        vmovups xmm1, xmmword ptr [rbp+70h]
        vmovups xmmword ptr [rsp+0E8h+emitterPos.v], xmm0
        vmovups xmmword ptr [rsp+0E8h+emitterOrientationQuat.v], xmm1
      }
      if ( !v55 )
      {
        m_pFxSystem = ParticleManager->m_pFxSystem;
        LocalClientTime = Particle_GetLocalClientTime(LOCAL_CLIENT_0);
        s_pCurrentSystem = ParticleManager::AddSystem(ParticleManager, LOCAL_CLIENT_0, _RBP, &emitterPos, &emitterOrientationQuat, LocalClientTime, PARTICLE_SYSTEM_FLAG_NONE, &m_pFxSystem->camera, NULL);
LABEL_59:
        Core_strcpy(s_vfxName, 0x80ui64, v15);
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

