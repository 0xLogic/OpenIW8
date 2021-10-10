/*
==============
CG_ProcessLightmapCommand
==============
*/

void __fastcall CG_ProcessLightmapCommand(RadiantCommandData *commandData)
{
  ?CG_ProcessLightmapCommand@@YAXURadiantCommandData@@@Z(commandData);
}

/*
==============
CG_ProcessLightgridCommand
==============
*/

void __fastcall CG_ProcessLightgridCommand(RadiantCommandData *commandData)
{
  ?CG_ProcessLightgridCommand@@YAXURadiantCommandData@@@Z(commandData);
}

/*
==============
CG_InitLightUpdate
==============
*/

void __fastcall CG_InitLightUpdate(LocalClientNum_t localClientNum)
{
  ?CG_InitLightUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ProcessLightDeleteCommand
==============
*/

void __fastcall CG_ProcessLightDeleteCommand(RadiantCommandData *commandData)
{
  ?CG_ProcessLightDeleteCommand@@YAXURadiantCommandData@@@Z(commandData);
}

/*
==============
CG_ProcessLightSyncCommand
==============
*/

void __fastcall CG_ProcessLightSyncCommand(RadiantCommandData *commandData)
{
  ?CG_ProcessLightSyncCommand@@YAXURadiantCommandData@@@Z(commandData);
}

/*
==============
CG_LiveUpdateFindLight
==============
*/

bool __fastcall CG_LiveUpdateFindLight(unsigned int id, GfxLight **radiantLiveLight, RadiantLight **radiantLiveLightRaw)
{
  return ?CG_LiveUpdateFindLight@@YA_NIPEAPEAUGfxLight@@PEAPEAURadiantLight@@@Z(id, radiantLiveLight, radiantLiveLightRaw);
}

/*
==============
CG_UpdateRadiantLightEffects
==============
*/

void CG_UpdateRadiantLightEffects(void)
{
  ?CG_UpdateRadiantLightEffects@@YAXXZ();
}

/*
==============
CG_ProcessLightCommand
==============
*/

void __fastcall CG_ProcessLightCommand(RadiantCommandData *commandData)
{
  ?CG_ProcessLightCommand@@YAXURadiantCommandData@@@Z(commandData);
}

/*
==============
R_RadiantLive_IsModifiedLight
==============
*/

bool __fastcall R_RadiantLive_IsModifiedLight(unsigned int lightIndex)
{
  return ?R_RadiantLive_IsModifiedLight@@YA_NI@Z(lightIndex);
}

/*
==============
CG_InitLightUpdate
==============
*/
void CG_InitLightUpdate(LocalClientNum_t localClientNum)
{
  GfxWorld *world; 
  size_t primaryLightCount; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v9; 
  __int64 v16; 
  unsigned int *v20; 

  world = rgp.world;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 488, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
    __debugbreak();
  primaryLightCount = world->primaryLightCount;
  CG_GetLocalClientGlobals(localClientNum)->refdef.radiantLiveLightCount = 0;
  v4 = 0;
  if ( (_DWORD)primaryLightCount )
  {
    if ( (unsigned int)primaryLightCount >= 0x10 )
    {
      v5 = 8;
      do
      {
        _XMM0 = v4;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&s_primaryLightsSorted[v4] = _XMM1;
        v9 = v5 - 4;
        v4 += 16;
        _XMM0 = (unsigned int)v9;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&s_primaryLightsSorted[v9] = _XMM1;
        _XMM0 = v5;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&s_primaryLightsSorted[v5] = _XMM1;
        v16 = v5 + 4;
        v5 += 16;
        _XMM0 = (unsigned int)v16;
        __asm
        {
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
        }
        *(_OWORD *)&s_primaryLightsSorted[v16] = _XMM1;
      }
      while ( v4 < (primaryLightCount & 0xFFFFFFF0) );
    }
    if ( v4 < (unsigned int)primaryLightCount )
    {
      v20 = &s_primaryLightsSorted[v4];
      do
        *v20++ = v4++;
      while ( v4 < (unsigned int)primaryLightCount );
    }
  }
  *(_QWORD *)&s_primaryLightArray = world->primaryLights;
  qsort(s_primaryLightsSorted, primaryLightCount, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)LightUpdate_CompareLightID);
  *(_QWORD *)&s_primaryLightArray = 0i64;
  memset_0(s_primaryLightsModified, 0, sizeof(s_primaryLightsModified));
}

/*
==============
CG_LiveUpdateFindLight
==============
*/
char CG_LiveUpdateFindLight(unsigned int id, GfxLight **radiantLiveLight, RadiantLight **radiantLiveLightRaw)
{
  LocalClientNum_t FirstActiveGameLocalClient; 
  cg_t *LocalClientGlobals; 
  int v8; 
  cg_t *v9; 
  int v10; 
  int v11; 
  __int64 v12; 

  FirstActiveGameLocalClient = ClStatic::GetFirstActiveGameLocalClient(&cls);
  if ( !CL_IsLocalClientConnectedToAnyServer(FirstActiveGameLocalClient) )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(FirstActiveGameLocalClient);
  v8 = 0;
  v9 = LocalClientGlobals;
  v10 = LocalClientGlobals->refdef.radiantLiveLightCount - 1;
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    v11 = (v10 + v8) / 2;
    v12 = v11;
    if ( v9->refdef.radiantLiveLights[v12].entityId <= id )
      break;
    v10 = v11 - 1;
LABEL_7:
    if ( v8 > v10 )
      return 0;
  }
  if ( v9->refdef.radiantLiveLights[v12].entityId < id )
  {
    v8 = v11 + 1;
    goto LABEL_7;
  }
  if ( v11 == -1 )
    return 0;
  *radiantLiveLightRaw = &v9->refdef.radiantLiveLightsRaw[v11];
  *radiantLiveLight = &v9->refdef.radiantLiveLights[v12];
  return 1;
}

/*
==============
CG_ProcessLightCommand
==============
*/
void CG_ProcessLightCommand(RadiantCommandData *commandData)
{
  int v1; 
  char *v2; 
  LocalClientNum_t FirstActiveGameLocalClient; 
  cg_t *LocalClientGlobals; 
  GfxWorld *world; 
  cg_t *v6; 
  signed int Light; 
  int v8; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 
  GfxLight *primaryLights; 
  signed int v13; 
  GfxLight *v14; 
  GfxLight lightOut; 

  v1 = *(_DWORD *)commandData->radiantCommand->command;
  v2 = &commandData->radiantCommand->command[4];
  memset_0(&lightOut, 0, sizeof(lightOut));
  if ( v1 != 244 )
    Com_Printf(8, "WARNING - ignore light update command because game and radiant are out of sync\n");
  FirstActiveGameLocalClient = ClStatic::GetFirstActiveGameLocalClient(&cls);
  if ( CL_IsLocalClientConnectedToAnyServer(FirstActiveGameLocalClient) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(FirstActiveGameLocalClient);
    world = rgp.world;
    v6 = LocalClientGlobals;
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 347, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
      __debugbreak();
    LightUpdate_RadiantLightToGfxLight((const RadiantLight *)v2, &lightOut);
    Light = LightUpdate_FindLight(world->primaryLights, world->primaryLightCount, s_primaryLightsSorted, lightOut.entityId);
    v8 = 0;
    v9 = v6->refdef.radiantLiveLightCount - 1;
    v10 = Light;
    if ( v9 >= 0 )
    {
      do
      {
        v11 = (v9 + v8) / 2;
        if ( v6->refdef.radiantLiveLights[v11].entityId <= lightOut.entityId )
        {
          if ( v6->refdef.radiantLiveLights[v11].entityId >= lightOut.entityId )
            goto LABEL_14;
          v8 = v11 + 1;
        }
        else
        {
          v9 = v11 - 1;
        }
      }
      while ( v8 <= v9 );
    }
    LODWORD(v11) = -1;
LABEL_14:
    if ( (v2[236] & 0x20) != 0 )
    {
      if ( Light != -1 )
        world->primaryLights[Light].flags |= 0x10u;
      if ( (_DWORD)v11 != -1 )
        LightUpdate_DelTempLight(v6, v11);
      Com_Printf(8, "Turn off pirmary light(%d) at (%3.0f,%3.0f,%3.0f)\n", v10, lightOut.origin.v[0], lightOut.origin.v[1], lightOut.origin.v[2]);
    }
    else if ( Light == -1 )
    {
      if ( (_DWORD)v11 == -1 )
        LightUpdate_AddTempLight(v6, -1, &lightOut, (const RadiantLight *)v2);
      else
        LightUpdate_SetTempLight(v6, -1, v11, &lightOut, (const RadiantLight *)v2);
    }
    else
    {
      primaryLights = world->primaryLights;
      v13 = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount;
      v14 = &primaryLights[Light];
      R_InitSelectedPrimaryLights(Light, Light, primaryLights);
      if ( (int)v10 < v13 && v14->type == lightOut.type && VecNCompareCustomEpsilon(v14->colorLinearSrgb.v, lightOut.colorLinearSrgb.v, 0.001, 3) && VecNCompareCustomEpsilon(v14->dir.v, lightOut.dir.v, 0.0049999999, 3) && VecNCompareCustomEpsilon(v14->origin.v, lightOut.origin.v, 0.1, 3) && lightOut.radius == v14->radius && lightOut.bulbRadius == v14->bulbRadius && VecNCompareCustomEpsilon(v14->bulbLength.v, lightOut.bulbLength.v, 0.001, 3) && lightOut.cosHalfFovOuter == v14->cosHalfFovOuter && !*((_DWORD *)v2 + 44) && !*((_DWORD *)v2 + 45) )
      {
        if ( v14->entityId != lightOut.entityId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 175, ASSERT_TYPE_SANITY, "( lightOut->entityId == lightSrc->entityId )", (const char *)&queryFormat, "lightOut->entityId == lightSrc->entityId") )
          __debugbreak();
        if ( v14->canUseShadowMap != lightOut.canUseShadowMap )
          v14->canUseShadowMap = lightOut.canUseShadowMap;
        if ( v14->needsDynamicShadows != lightOut.needsDynamicShadows )
          v14->needsDynamicShadows = lightOut.needsDynamicShadows;
        if ( v14->isVolumetric != lightOut.isVolumetric )
          v14->isVolumetric = lightOut.isVolumetric;
        if ( lightOut.uvIntensity != v14->uvIntensity )
          v14->uvIntensity = lightOut.uvIntensity;
        if ( lightOut.distanceFalloff != v14->distanceFalloff )
          v14->distanceFalloff = lightOut.distanceFalloff;
        if ( lightOut.intensity != v14->intensity )
          v14->intensity = lightOut.intensity;
        if ( lightOut.type != 1 )
        {
          if ( lightOut.fadeOffsetRt.v[0] != v14->fadeOffsetRt.v[0] || lightOut.fadeOffsetRt.v[1] != v14->fadeOffsetRt.v[1] )
            v14->fadeOffsetRt = lightOut.fadeOffsetRt;
          if ( lightOut.cosHalfFovInner != v14->cosHalfFovInner )
            v14->cosHalfFovInner = lightOut.cosHalfFovInner;
          if ( lightOut.shadowSoftness != v14->shadowSoftness )
            v14->shadowSoftness = lightOut.shadowSoftness;
          if ( lightOut.shadowBias != v14->shadowBias )
            v14->shadowBias = lightOut.shadowBias;
          if ( lightOut.shadowArea != v14->shadowArea )
            v14->shadowArea = lightOut.shadowArea;
          if ( lightOut.shadowNearPlaneBias != v14->shadowNearPlaneBias )
            v14->shadowNearPlaneBias = lightOut.shadowNearPlaneBias;
          if ( v14->def != lightOut.def )
            v14->def = lightOut.def;
        }
        if ( (_DWORD)v11 != -1 )
          LightUpdate_DelTempLight(v6, v11);
        Com_Printf(8, "Update primary light(%d) at (%3.0f,%3.0f,%3.0f)\n", v10, v14->origin.v[0], v14->origin.v[1], v14->origin.v[2]);
      }
      else
      {
        v14->flags |= 0x10u;
        if ( (_DWORD)v11 == -1 )
          LightUpdate_AddTempLight(v6, v10, &lightOut, (const RadiantLight *)v2);
        else
          LightUpdate_SetTempLight(v6, v10, v11, &lightOut, (const RadiantLight *)v2);
        Com_Printf(8, "Create a new temp light for primary light(%d) at (%3.0f,%3.0f,%3.0f)\n", v10, lightOut.origin.v[0], lightOut.origin.v[1], lightOut.origin.v[2]);
      }
    }
  }
}

/*
==============
CG_ProcessLightDeleteCommand
==============
*/
void CG_ProcessLightDeleteCommand(RadiantCommandData *commandData)
{
  __int64 v1; 
  char *v2; 
  LocalClientNum_t FirstActiveGameLocalClient; 
  cg_t *LocalClientGlobals; 
  GfxWorld *world; 
  cg_t *v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int primaryLightCount; 
  GfxLight *primaryLights; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 

  v1 = *(unsigned int *)&commandData->radiantCommand->command[4];
  v2 = &commandData->radiantCommand->command[8];
  FirstActiveGameLocalClient = ClStatic::GetFirstActiveGameLocalClient(&cls);
  if ( !CL_IsLocalClientConnectedToAnyServer(FirstActiveGameLocalClient) )
    return;
  LocalClientGlobals = CG_GetLocalClientGlobals(FirstActiveGameLocalClient);
  world = rgp.world;
  v6 = LocalClientGlobals;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 613, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
    __debugbreak();
  Com_Printf(8, "%d lights to delete\n", (unsigned int)v1);
  if ( !(_DWORD)v1 )
    return;
  v7 = v1;
  do
  {
    v8 = *(_DWORD *)v2;
    primaryLightCount = world->primaryLightCount;
    primaryLights = world->primaryLights;
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 40, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    v11 = primaryLightCount - 1;
    v12 = 0;
    if ( (int)(primaryLightCount - 1) < 0 )
      goto LABEL_19;
    while ( 1 )
    {
      v13 = (v11 + v12) / 2;
      v14 = (int)s_primaryLightsSorted[v13];
      v15 = (unsigned int)v14;
      if ( primaryLights[v15].entityId <= v8 )
        break;
      v11 = v13 - 1;
LABEL_15:
      if ( v12 > v11 )
        goto LABEL_19;
    }
    if ( primaryLights[v15].entityId < v8 )
    {
      v12 = v13 + 1;
      goto LABEL_15;
    }
    if ( (_DWORD)v14 != -1 )
    {
      v16 = (__int64)&world->primaryLights[v14];
      *(_DWORD *)(v16 + 16) = 0;
      Com_Printf(8, "Suppress pirmary light(%d) at (%3.0f,%3.0f,%3.0f)\n", (unsigned int)v14, *(float *)(v16 + 56), *(float *)(v16 + 60), *(float *)(v16 + 64));
    }
LABEL_19:
    v17 = 0;
    v18 = v6->refdef.radiantLiveLightCount - 1;
    if ( v18 < 0 )
      goto LABEL_28;
    while ( 2 )
    {
      v19 = (v18 + v17) / 2;
      v20 = v19;
      v21 = v19;
      if ( v6->refdef.radiantLiveLights[v21].entityId > v8 )
      {
        v18 = v19 - 1;
        goto LABEL_24;
      }
      if ( v6->refdef.radiantLiveLights[v21].entityId < v8 )
      {
        v17 = v19 + 1;
LABEL_24:
        if ( v17 > v18 )
          goto LABEL_28;
        continue;
      }
      break;
    }
    if ( v19 != -1 )
    {
      v22 = v19;
      LightUpdate_DelTempLight(v6, (v18 + v17) / 2);
      Com_Printf(8, "Remove temp light(%d) at (%3.0f,%3.0f,%3.0f)\n", v20, v6->refdef.radiantLiveLights[v22].origin.v[0], v6->refdef.radiantLiveLights[v22].origin.v[1], v6->refdef.radiantLiveLights[v22].origin.v[2]);
    }
LABEL_28:
    v2 += 4;
    --v7;
  }
  while ( v7 );
}

/*
==============
CG_ProcessLightSyncCommand
==============
*/
void CG_ProcessLightSyncCommand(RadiantCommandData *commandData)
{
  __int64 v1; 
  const RadiantLight *v2; 
  int v3; 
  LocalClientNum_t FirstActiveGameLocalClient; 
  cg_t *LocalClientGlobals; 
  GfxWorld *world; 
  cg_t *v7; 
  GfxLight *primaryLights; 
  __int64 v9; 
  int Light; 
  __int64 v11; 
  __int64 v12; 
  unsigned int updated; 
  __int64 v14; 
  __int64 v15; 

  v1 = *(unsigned int *)&commandData->radiantCommand->command[4];
  v2 = (const RadiantLight *)&commandData->radiantCommand->command[12];
  v3 = *(unsigned __int16 *)&commandData->radiantCommand->command[10];
  FirstActiveGameLocalClient = ClStatic::GetFirstActiveGameLocalClient(&cls);
  if ( CL_IsLocalClientConnectedToAnyServer(FirstActiveGameLocalClient) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(FirstActiveGameLocalClient);
    world = rgp.world;
    v7 = LocalClientGlobals;
    if ( rgp.world )
    {
      primaryLights = rgp.world->primaryLights;
      if ( !v3 )
      {
        R_InitPrimaryLights();
        v7->refdef.radiantLiveLightCount = 0;
      }
      Com_Printf(8, "Sync %d lights\n", (unsigned int)v1);
      if ( (_DWORD)v1 )
      {
        v9 = v1;
        do
        {
          if ( v2->action == 4 )
          {
            LightUpdate_AddTempLight_0(v7, -1, v2);
          }
          else
          {
            Light = LightUpdate_FindLight(primaryLights, world->primaryLightCount, s_primaryLightsSorted, v2->uniqueLightID);
            v11 = Light;
            if ( Light != -1 )
            {
              v12 = (__int64)&world->primaryLights[Light];
              if ( (unsigned int)Light >= 0x1980 )
              {
                LODWORD(v15) = 6528;
                LODWORD(v14) = Light;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v14, v15) )
                  __debugbreak();
              }
              s_primaryLightsModified[v11 >> 5] |= 1 << (v11 & 0x1F);
              if ( v2->action == 1 )
              {
                Com_Printf(8, "Update pirmary light(%d) at (%3.0f,%3.0f,%3.0f)\n", (unsigned int)v11, *(float *)(v12 + 56), *(float *)(v12 + 60), *(float *)(v12 + 64));
                LightUpdate_RadiantLightToGfxLight(v2, (GfxLight *)v12);
              }
              else if ( v2->action == 2 )
              {
                if ( *(_BYTE *)v12 == 1 )
                {
                  LightUpdate_RadiantLightToGfxLight(v2, (GfxLight *)v12);
                  Dvar_SetBoolByName("LRTMOMKOLS", 0);
                }
                else
                {
                  *(_DWORD *)(v12 + 16) = 0;
                  updated = LightUpdate_AddTempLight_0(v7, -1, v2);
                  Com_Printf(8, "Create a new temp light(%d) for pirmary light(%d) at (%3.0f,%3.0f,%3.0f)\n", updated, (unsigned int)v11, *(float *)(v12 + 56), *(float *)(v12 + 60), *(float *)(v12 + 64));
                }
              }
            }
          }
          ++v2;
          --v9;
        }
        while ( v9 );
      }
    }
  }
}

/*
==============
CG_ProcessLightgridCommand
==============
*/
void CG_ProcessLightgridCommand(RadiantCommandData *commandData)
{
  RadiantCommand *radiantCommand; 
  int v2; 
  unsigned int v3; 
  __int64 v4; 

  radiantCommand = commandData->radiantCommand;
  v2 = *(_DWORD *)commandData->radiantCommand->command;
  v3 = *(_DWORD *)&commandData->radiantCommand->command[4];
  if ( v2 )
    v4 = (v2 - 4) / 0x44u;
  else
    v4 = 0i64;
  if ( v2 && v2 != 68 * (_DWORD)v4 + 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 691, ASSERT_TYPE_ASSERT, "(commandSize == 0 || ( commandSize == 4 + probeCount * elemSize ))", (const char *)&queryFormat, "commandSize == 0 || ( commandSize == 4 + probeCount * elemSize )") )
    __debugbreak();
  if ( (_DWORD)v4 )
    R_UpdateLightgridsCPU(v3, v4, (const unsigned int *)&radiantCommand->command[8], (const GfxSHProbeData *)&radiantCommand->command[4 * v4 + 8]);
}

/*
==============
CG_ProcessLightmapCommand
==============
*/
void CG_ProcessLightmapCommand(RadiantCommandData *commandData)
{
  unsigned int v1; 
  char *v2; 
  unsigned int v3; 
  const char *v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  unsigned int v14; 
  char *fmt; 
  char *buffer; 
  __int64 bufferSize; 
  __int64 v18; 
  unsigned int x; 
  unsigned int y; 
  int v21; 

  v1 = *(_DWORD *)&commandData->radiantCommand->command[12];
  v2 = &commandData->radiantCommand->command[4];
  v3 = *(_DWORD *)&commandData->radiantCommand->command[16];
  v4 = &commandData->radiantCommand->command[28];
  v5 = *(_DWORD *)&commandData->radiantCommand->command[20];
  v6 = *(_DWORD *)commandData->radiantCommand->command;
  x = *(_DWORD *)v2;
  y = *(_DWORD *)&commandData->radiantCommand->command[8];
  v21 = *(_DWORD *)&commandData->radiantCommand->command[24];
  if ( __PAIR64__(v3, v1) != 0x4000000040i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 662, ASSERT_TYPE_ASSERT, "(width == MAX_LIVE_LIGHTMAP_SECTION_WIDTH && height == MAX_LIVE_LIGHTMAP_SECTION_HEIGHT)", (const char *)&queryFormat, "width == MAX_LIVE_LIGHTMAP_SECTION_WIDTH && height == MAX_LIVE_LIGHTMAP_SECTION_HEIGHT") )
    __debugbreak();
  v7 = -1;
  v8 = v4 - v2;
  if ( (v4 - v2 < 0 || v8 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v8, "signed", v4 - v2) )
    __debugbreak();
  v9 = v6 - v8;
  v10 = v4;
  v11 = v9;
  if ( v9 )
  {
    do
    {
      v12 = *(unsigned __int8 *)v10++;
      v7 = g_crc32Table[v12 ^ (unsigned __int8)v7] ^ (v7 >> 8);
      --v11;
    }
    while ( v11 );
  }
  v13 = ~v7;
  if ( v13 == v21 )
  {
    v14 = x;
  }
  else
  {
    LODWORD(v18) = v21;
    LODWORD(bufferSize) = v13;
    v14 = x;
    LODWORD(buffer) = y;
    LODWORD(fmt) = x;
    Com_Printf(8, "Error: lightmap(%d) channel(%d) tile(%d,%d) checksum %x != %x\n", v5 / 3, v5 % 3, fmt, buffer, bufferSize, v18);
  }
  R_UpdateLightmapsCPU(v14, y, v1, v3, v5, v4, v9);
}

/*
==============
CG_RadiantLightAnim_Update
==============
*/
void CG_RadiantLightAnim_Update(cg_t *cgameGlob, int radiantLightIndex)
{
  __int64 v2; 
  GfxLight *v4; 
  RadiantLightAnim *v5; 
  GfxWorld *world; 
  GfxLight *v7; 

  v2 = radiantLightIndex;
  if ( radiantLightIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 1022, ASSERT_TYPE_ASSERT, "(radiantLightIndex >= 0)", (const char *)&queryFormat, "radiantLightIndex >= 0") )
    __debugbreak();
  if ( (int)v2 >= (signed int)cgameGlob->refdef.radiantLiveLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 1023, ASSERT_TYPE_ASSERT, "(radiantLightIndex < int(cgameGlob->refdef.radiantLiveLightCount))", (const char *)&queryFormat, "radiantLightIndex < int(cgameGlob->refdef.radiantLiveLightCount)") )
    __debugbreak();
  v4 = &cgameGlob->refdef.radiantLiveLights[v2];
  v5 = &cgameGlob->refdef.radiantLiveLightsAnim[v2];
  if ( (*((_BYTE *)v5 + 120) & 1) != 0 )
  {
    world = rgp.world;
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 1035, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
      __debugbreak();
    CG_RadiantLightAnim_UpdateColorAndIntensity(cgameGlob, v5, v4);
    if ( v5->effect.positionMode == POSITION_FROM_SCRIPT && v5->compiledLightIndex != -1 )
    {
      if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 1004, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
        __debugbreak();
      v7 = &world->primaryLights[v5->compiledLightIndex];
      v4->origin.v[0] = v7->origin.v[0];
      v4->origin.v[1] = v7->origin.v[1];
      v4->origin.v[2] = v7->origin.v[2];
      v4->dir.v[0] = v7->dir.v[0];
      v4->dir.v[1] = v7->dir.v[1];
      v4->dir.v[2] = v7->dir.v[2];
      v4->up.v[0] = v7->up.v[0];
      v4->up.v[1] = v7->up.v[1];
      v4->up.v[2] = v7->up.v[2];
    }
  }
}

/*
==============
CG_RadiantLightAnim_UpdateColorAndIntensity
==============
*/
void CG_RadiantLightAnim_UpdateColorAndIntensity(cg_t *cgameGlob, RadiantLightAnim *anim, GfxLight *light)
{
  float v3; 
  float waitTime; 
  float v7; 
  RadiantLightEffect::ColorMode colorMode; 
  GfxWorld *world; 
  float *p_type; 
  int phase; 
  unsigned int isdefined; 
  float speed_scale; 
  __int128 v14; 
  __int128 v16; 
  float v18; 
  __int128 v22; 
  __int128 v25; 
  float v26; 
  unsigned int v28; 
  __int128 v29; 
  __int128 v31; 
  __int128 v34; 
  __int128 v36; 
  __int128 v38; 
  double v39; 
  int v44; 
  unsigned int v45; 
  float v46; 
  __int128 v48; 
  __int128 v50; 
  float v51; 
  __int128 v55; 
  __int128 v58; 
  float v59; 
  unsigned int v61; 
  __int128 v62; 
  __int128 v64; 
  __int128 v67; 
  __int128 v69; 
  __int128 v70; 
  __int128 v72; 
  double v73; 
  double v74; 
  int v75; 
  int v76; 
  unsigned int v77; 
  float v78; 
  __int128 v80; 
  __int128 v82; 
  __int128 v84; 
  __int128 v87; 
  __int128 v90; 
  float v91; 
  unsigned int v93; 
  __int128 v94; 
  __int128 v96; 
  __int128 v99; 
  __int128 v102; 
  __int128 v103; 
  __int128 v105; 
  int v106; 
  float v107; 
  float on_off_time; 
  double v109; 
  float step_i; 
  float v111; 
  float v112; 
  float v113; 
  __int128 v114; 
  float v115; 
  float v116; 
  __int128 v118; 
  int v120; 
  int v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  __int128 v126; 
  float v127; 
  float v128; 
  __int128 v130; 
  int v132; 
  double v133; 
  double v134; 
  int v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float outIntensity; 
  vec3_t inColorGammaSrgb; 
  vec3_t outColorLinearSrgb; 

  v3 = (float)cgameGlob->time * 0.001;
  waitTime = anim->waitTime;
  if ( waitTime == 0.0 )
    v7 = 0.0;
  else
    v7 = waitTime - v3;
  colorMode = anim->effect.colorMode;
  if ( colorMode == COLOR_FROM_SCRIPT )
  {
    if ( anim->compiledLightIndex != -1 )
    {
      world = rgp.world;
      if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 790, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
        __debugbreak();
      p_type = (float *)&world->primaryLights[anim->compiledLightIndex].type;
      light->colorLinearSrgb.v[0] = p_type[5];
      light->colorLinearSrgb.v[1] = p_type[6];
      light->colorLinearSrgb.v[2] = p_type[7];
      light->intensity = p_type[4];
    }
    return;
  }
  if ( colorMode == COLOR_OFF )
  {
    light->intensity = 0.0;
    return;
  }
  if ( colorMode != COLOR_COLOR )
  {
    switch ( colorMode )
    {
      case COLOR_COLOR_01:
        GetGameColorAndIntensity(anim->effect.color, anim->effect.intensity[0], &light->colorLinearSrgb, &light->intensity);
        return;
      case COLOR_COLOR_02:
        GetGameColorAndIntensity(&anim->effect.color[1], anim->effect.intensity[1], &light->colorLinearSrgb, &light->intensity);
        return;
      case COLOR_TOGGLE:
        if ( v7 > 0.0 )
          return;
        phase = anim->phase;
        if ( !phase )
        {
          GetGameColorAndIntensity(anim->effect.color, anim->effect.intensity[0], &light->colorLinearSrgb, &light->intensity);
          _XMM0 = LODWORD(anim->wait_min[0]);
          anim->phase = 1;
          __asm { vmaxss  xmm1, xmm0, dword ptr [rbx+5Ch] }
          anim->waitTime = *(float *)&_XMM1 + (float)(v7 + v3);
          return;
        }
        if ( phase == 1 )
        {
          GetGameColorAndIntensity(&anim->effect.color[1], anim->effect.intensity[1], &light->colorLinearSrgb, &light->intensity);
          _XMM1 = LODWORD(anim->wait_max[1]);
          anim->phase = 0;
          __asm { vmaxss  xmm1, xmm1, dword ptr [rbx+58h] }
          anim->waitTime = *(float *)&_XMM1 + (float)(v7 + v3);
          return;
        }
        isdefined = anim->effect.isdefined;
        if ( (isdefined & 1) != 0 )
          speed_scale = anim->effect.speed_scale;
        else
          speed_scale = FLOAT_1_0;
        v14 = LODWORD(FLOAT_2_0);
        v16 = LODWORD(FLOAT_1_0);
        *(float *)&v16 = 1.0 / speed_scale;
        _XMM1 = v16;
        anim->speed_scale = speed_scale;
        __asm { vmaxss  xmm0, xmm1, cs:__real@3e800000 }
        anim->on_off_time = *(float *)&_XMM0;
        if ( (isdefined & 6) != 2 )
        {
          if ( (isdefined & 2) != 0 )
          {
            v18 = anim->effect.wait_min[0];
LABEL_29:
            *(float *)&v16 = *(float *)&v16 * v18;
            _XMM0 = v16;
            __asm { vmaxss  xmm0, xmm0, xmm2 }
            anim->wait_min[0] = *(float *)&_XMM0;
            if ( (anim->effect.isdefined & 4) != 0 )
            {
              v22 = LODWORD(anim->effect.wait_max[0]);
              *(float *)&v22 = anim->effect.wait_max[0] / anim->speed_scale;
              _XMM0 = v22;
              __asm { vmaxss  xmm1, xmm0, xmm2 }
            }
            else
            {
              v25 = LODWORD(FLOAT_2_0);
              *(float *)&v25 = 2.0 / anim->speed_scale;
              _XMM0 = v25;
              __asm { vmaxss  xmm1, xmm0, xmm2 }
            }
LABEL_36:
            anim->wait_max[0] = *(float *)&_XMM1;
            v28 = anim->effect.isdefined & 8;
            if ( (anim->effect.isdefined & 0x18) != 8 )
            {
              if ( v28 )
              {
                v29 = LODWORD(anim->effect.wait_min[1]);
                goto LABEL_41;
              }
              if ( (anim->effect.isdefined & 0x10) == 0 )
              {
                v29 = LODWORD(FLOAT_2_0);
LABEL_41:
                v31 = v29;
                *(float *)&v31 = *(float *)&v29 / anim->speed_scale;
                _XMM0 = v31;
                __asm { vmaxss  xmm1, xmm0, xmm2 }
                anim->wait_min[1] = *(float *)&_XMM1;
                if ( (anim->effect.isdefined & 0x10) != 0 )
                  v14 = LODWORD(anim->effect.wait_max[1]);
                v34 = v14;
                *(float *)&v34 = *(float *)&v14 / anim->speed_scale;
                _XMM0 = v34;
                __asm { vmaxss  xmm1, xmm0, xmm2 }
                goto LABEL_48;
              }
            }
            if ( v28 )
              v36 = LODWORD(anim->effect.wait_min[1]);
            else
              v36 = LODWORD(anim->effect.wait_max[1]);
            v38 = v36;
            *(float *)&v38 = *(float *)&v36 / anim->speed_scale;
            _XMM1 = v38;
            __asm { vmaxss  xmm1, xmm1, xmm2 }
            anim->wait_min[1] = *(float *)&_XMM1;
LABEL_48:
            anim->wait_max[1] = *(float *)&_XMM1;
            GetGameColorAndIntensity(anim->effect.color, anim->effect.intensity[0], &light->colorLinearSrgb, &light->intensity);
            v39 = G_flrand(0.0, anim->on_off_time);
            anim->phase = 0;
            anim->waitTime = *(float *)&v39 + (float)(v7 + v3);
            return;
          }
          if ( (isdefined & 4) == 0 )
          {
            v18 = FLOAT_2_0;
            goto LABEL_29;
          }
        }
        if ( (isdefined & 2) != 0 )
          v26 = anim->effect.wait_min[0];
        else
          v26 = anim->effect.wait_max[0];
        *(float *)&v16 = *(float *)&v16 * v26;
        _XMM0 = v16;
        __asm { vmaxss  xmm1, xmm0, xmm2 }
        anim->wait_min[0] = *(float *)&_XMM1;
        goto LABEL_36;
      case COLOR_FLICKER:
        if ( v7 > 0.0 )
          return;
        v44 = anim->phase;
        if ( !v44 )
        {
          GetGameColorAndIntensity(anim->effect.color, anim->effect.intensity[0], &light->colorLinearSrgb, &light->intensity);
          v74 = G_flrand(anim->wait_min[0], anim->wait_max[0]);
          anim->phase = 1;
          anim->waitTime = *(float *)&v74 + (float)(v7 + v3);
          return;
        }
        if ( v44 == 1 )
        {
          GetGameColorAndIntensity(&anim->effect.color[1], anim->effect.intensity[1], &light->colorLinearSrgb, &light->intensity);
          v73 = G_flrand(anim->wait_min[1], anim->wait_max[1]);
          anim->phase = 0;
          anim->waitTime = *(float *)&v73 + (float)(v7 + v3);
          return;
        }
        v45 = anim->effect.isdefined;
        if ( (v45 & 1) != 0 )
          v46 = anim->effect.speed_scale;
        else
          v46 = FLOAT_1_0;
        v48 = LODWORD(FLOAT_1_0);
        *(float *)&v48 = 1.0 / v46;
        _XMM1 = v48;
        anim->speed_scale = v46;
        __asm { vmaxss  xmm0, xmm1, cs:__real@3e800000 }
        anim->on_off_time = *(float *)&_XMM0;
        if ( (v45 & 6) != 2 )
        {
          v50 = LODWORD(FLOAT_0_050000001);
          if ( (v45 & 2) != 0 )
          {
            v51 = anim->effect.wait_min[0];
LABEL_63:
            *(float *)&v48 = *(float *)&v48 * v51;
            _XMM0 = v48;
            __asm { vmaxss  xmm1, xmm0, xmm2 }
            anim->wait_min[0] = *(float *)&_XMM1;
            if ( (anim->effect.isdefined & 4) != 0 )
            {
              v55 = LODWORD(anim->effect.wait_max[0]);
              *(float *)&v55 = anim->effect.wait_max[0] / anim->speed_scale;
              _XMM0 = v55;
              __asm { vmaxss  xmm1, xmm0, xmm3 }
            }
            else
            {
              v58 = LODWORD(FLOAT_0_1);
              *(float *)&v58 = 0.1 / anim->speed_scale;
              _XMM0 = v58;
              __asm { vmaxss  xmm1, xmm0, xmm3 }
            }
            goto LABEL_70;
          }
          if ( (v45 & 4) == 0 )
          {
            v51 = FLOAT_0_050000001;
            goto LABEL_63;
          }
        }
        if ( (v45 & 2) != 0 )
          v59 = anim->effect.wait_min[0];
        else
          v59 = anim->effect.wait_max[0];
        v50 = LODWORD(FLOAT_0_050000001);
        *(float *)&v48 = *(float *)&v48 * v59;
        _XMM0 = v48;
        __asm { vmaxss  xmm1, xmm0, xmm2 }
        anim->wait_min[0] = *(float *)&_XMM1;
LABEL_70:
        anim->wait_max[0] = *(float *)&_XMM1;
        v61 = anim->effect.isdefined & 8;
        if ( (anim->effect.isdefined & 0x18) != 8 )
        {
          if ( v61 )
          {
            v62 = LODWORD(anim->effect.wait_min[1]);
LABEL_75:
            v64 = v62;
            *(float *)&v64 = *(float *)&v62 / anim->speed_scale;
            _XMM0 = v64;
            __asm { vmaxss  xmm1, xmm0, xmm2 }
            anim->wait_min[1] = *(float *)&_XMM1;
            if ( (anim->effect.isdefined & 0x10) != 0 )
            {
              v67 = LODWORD(anim->effect.wait_max[1]);
              *(float *)&v67 = anim->effect.wait_max[1] / anim->speed_scale;
              _XMM0 = v67;
              __asm { vmaxss  xmm1, xmm0, xmm3 }
            }
            else
            {
              v69 = LODWORD(FLOAT_0_75);
              *(float *)&v69 = 0.75 / anim->speed_scale;
              _XMM0 = v69;
              __asm { vmaxss  xmm1, xmm0, xmm3 }
            }
            goto LABEL_48;
          }
          if ( (anim->effect.isdefined & 0x10) == 0 )
          {
            v62 = v50;
            goto LABEL_75;
          }
        }
        if ( v61 )
          v70 = LODWORD(anim->effect.wait_min[1]);
        else
          v70 = LODWORD(anim->effect.wait_max[1]);
        v72 = v70;
        *(float *)&v72 = *(float *)&v70 / anim->speed_scale;
        _XMM0 = v72;
        __asm { vmaxss  xmm1, xmm0, xmm2 }
        anim->wait_min[1] = *(float *)&_XMM1;
        goto LABEL_48;
    }
    if ( colorMode != COLOR_PULSE )
    {
      v136 = v3 - anim->activationTime;
      outColorLinearSrgb.v[0] = FLOAT_1_0;
      outIntensity = FLOAT_1_0;
      outColorLinearSrgb.v[1] = 0.0;
      outColorLinearSrgb.v[2] = 0.0;
      GetGameColorAndIntensity(&outColorLinearSrgb, 1.0, &outColorLinearSrgb, &outIntensity);
      if ( fmodf_0(v136, 4.0) >= 2.0 )
      {
        *(_QWORD *)light->colorLinearSrgb.v = 0i64;
        light->colorLinearSrgb.v[2] = 0.0;
        light->intensity = 0.0;
      }
      else
      {
        v137 = outColorLinearSrgb.v[1];
        light->colorLinearSrgb.v[0] = outColorLinearSrgb.v[0];
        v138 = outColorLinearSrgb.v[2];
        light->colorLinearSrgb.v[1] = v137;
        v139 = outIntensity;
        light->colorLinearSrgb.v[2] = v138;
        light->intensity = v139;
      }
      return;
    }
    if ( v7 > 0.0 )
      return;
    v75 = anim->phase;
    if ( v75 )
    {
      v76 = v75 - 1;
      if ( v76 )
      {
        if ( v76 != 1 )
        {
          v77 = anim->effect.isdefined;
          if ( (v77 & 1) != 0 )
            v78 = anim->effect.speed_scale;
          else
            v78 = FLOAT_1_0;
          v80 = LODWORD(FLOAT_1_0);
          *(float *)&v80 = 1.0 / v78;
          _XMM1 = v80;
          anim->speed_scale = v78;
          __asm { vmaxss  xmm0, xmm1, cs:__real@40400000 }
          anim->on_off_time = *(float *)&_XMM0;
          if ( (v77 & 6) != 2 )
          {
            if ( (v77 & 2) != 0 )
            {
              v82 = LODWORD(anim->effect.wait_min[0]);
LABEL_97:
              v84 = v82;
              *(float *)&v84 = *(float *)&v82 * *(float *)&_XMM1;
              _XMM0 = v84;
              __asm { vmaxss  xmm1, xmm0, xmm2 }
              anim->wait_min[0] = *(float *)&_XMM1;
              if ( (anim->effect.isdefined & 4) != 0 )
              {
                v87 = LODWORD(anim->effect.wait_max[0]);
                *(float *)&v87 = anim->effect.wait_max[0] / anim->speed_scale;
                _XMM0 = v87;
                __asm { vmaxss  xmm1, xmm0, xmm3 }
              }
              else
              {
                v90 = LODWORD(FLOAT_0_5);
                *(float *)&v90 = 0.5 / anim->speed_scale;
                _XMM0 = v90;
                __asm { vmaxss  xmm1, xmm0, xmm3 }
              }
              goto LABEL_104;
            }
            if ( (v77 & 4) == 0 )
            {
              v82 = LODWORD(FLOAT_0_050000001);
              goto LABEL_97;
            }
          }
          if ( (v77 & 2) != 0 )
            v91 = anim->effect.wait_min[0];
          else
            v91 = anim->effect.wait_max[0];
          *(float *)&v80 = *(float *)&v80 * v91;
          _XMM0 = v80;
          __asm { vmaxss  xmm1, xmm0, xmm2 }
          anim->wait_min[0] = *(float *)&_XMM1;
LABEL_104:
          anim->wait_max[0] = *(float *)&_XMM1;
          v93 = anim->effect.isdefined & 8;
          if ( (anim->effect.isdefined & 0x18) != 8 )
          {
            if ( v93 )
            {
              v94 = LODWORD(anim->effect.wait_min[1]);
LABEL_109:
              v96 = v94;
              *(float *)&v96 = *(float *)&v94 / anim->speed_scale;
              _XMM0 = v96;
              __asm { vmaxss  xmm1, xmm0, xmm2 }
              anim->wait_min[1] = *(float *)&_XMM1;
              if ( (anim->effect.isdefined & 0x10) != 0 )
              {
                v99 = LODWORD(anim->effect.wait_max[1]);
                *(float *)&v99 = anim->effect.wait_max[1] / anim->speed_scale;
                _XMM0 = v99;
                __asm { vmaxss  xmm1, xmm0, xmm3 }
              }
              else
              {
                v102 = LODWORD(FLOAT_0_75);
                *(float *)&v102 = 0.75 / anim->speed_scale;
                _XMM0 = v102;
                __asm { vmaxss  xmm1, xmm0, xmm3 }
              }
LABEL_116:
              anim->wait_max[1] = *(float *)&_XMM1;
              GetGameColorAndIntensity(anim->effect.color, anim->effect.intensity[0], &light->colorLinearSrgb, &light->intensity);
              v106 = (int)(float)(anim->wait_max[1] * 20.0);
              v107 = 2.0 / (float)v106;
              anim->step_inc = v107;
              anim->steps = v106;
              on_off_time = anim->on_off_time;
              anim->intensity_inc = (float)(anim->effect.intensity[0] - anim->effect.intensity[1]) * v107;
              v109 = G_flrand(0.0, on_off_time);
              anim->waitTime = *(float *)&v109 + (float)(v7 + v3);
LABEL_117:
              anim->phase = 0;
              return;
            }
            if ( (anim->effect.isdefined & 0x10) == 0 )
            {
              v94 = LODWORD(FLOAT_0_25);
              goto LABEL_109;
            }
          }
          if ( v93 )
            v103 = LODWORD(anim->effect.wait_min[1]);
          else
            v103 = LODWORD(anim->effect.wait_max[1]);
          v105 = v103;
          *(float *)&v105 = *(float *)&v103 / anim->speed_scale;
          _XMM0 = v105;
          __asm { vmaxss  xmm1, xmm0, xmm2 }
          anim->wait_min[1] = *(float *)&_XMM1;
          goto LABEL_116;
        }
        step_i = (float)anim->step_i;
        v111 = step_i * anim->step_inc;
        v112 = (float)(anim->effect.color[1].v[1] - anim->effect.color[0].v[1]) * v111;
        v113 = anim->effect.color[1].v[2] - anim->effect.color[0].v[2];
        v114 = LODWORD(anim->effect.intensity[0]);
        inColorGammaSrgb.v[0] = (float)((float)(anim->effect.color[1].v[0] - anim->effect.color[0].v[0]) * v111) + anim->effect.color[0].v[0];
        v115 = step_i * anim->intensity_inc;
        inColorGammaSrgb.v[1] = v112 + anim->effect.color[0].v[1];
        v116 = (float)(v113 * v111) + anim->effect.color[0].v[2];
        v118 = v114;
        *(float *)&v118 = *(float *)&v114 - v115;
        _XMM2 = v118;
        __asm { vmaxss  xmm1, xmm2, xmm9; inIntensity }
        inColorGammaSrgb.v[2] = v116;
        GetGameColorAndIntensity(&inColorGammaSrgb, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
        v120 = anim->step_i;
        anim->waitTime = (float)(v7 + v3) + 0.050000001;
        if ( v120 == 1 )
          goto LABEL_117;
        v121 = v120 - 1;
      }
      else
      {
        v122 = (float)anim->step_i;
        v123 = v122 * anim->step_inc;
        v124 = (float)(anim->effect.color[1].v[1] - anim->effect.color[0].v[1]) * v123;
        v125 = anim->effect.color[1].v[2] - anim->effect.color[0].v[2];
        v126 = LODWORD(anim->effect.intensity[0]);
        inColorGammaSrgb.v[0] = (float)((float)(anim->effect.color[1].v[0] - anim->effect.color[0].v[0]) * v123) + anim->effect.color[0].v[0];
        v127 = v122 * anim->intensity_inc;
        inColorGammaSrgb.v[1] = v124 + anim->effect.color[0].v[1];
        v128 = (float)(v125 * v123) + anim->effect.color[0].v[2];
        v130 = v126;
        *(float *)&v130 = *(float *)&v126 - v127;
        _XMM2 = v130;
        __asm { vmaxss  xmm1, xmm2, xmm9; inIntensity }
        inColorGammaSrgb.v[2] = v128;
        GetGameColorAndIntensity(&inColorGammaSrgb, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
        v132 = anim->step_i;
        anim->waitTime = (float)(v7 + v3) + 0.050000001;
        if ( v132 == anim->steps )
        {
          anim->phase = 2;
          return;
        }
        v121 = v132 + 1;
      }
      anim->step_i = v121;
      return;
    }
    GetGameColorAndIntensity(anim->effect.color, anim->effect.intensity[0], &light->colorLinearSrgb, &light->intensity);
    v133 = G_flrand(anim->wait_min[0], anim->wait_max[0]);
    anim->waitTime = *(float *)&v133 + (float)(v7 + v3);
    v134 = G_flrand(anim->wait_min[1], anim->wait_max[1]);
    v135 = (int)(float)(*(float *)&v134 * 10.0);
    anim->steps = v135;
    anim->phase = 1;
    if ( v135 > 1 )
      v135 = 1;
    anim->step_i = v135;
  }
}

/*
==============
CG_UpdateRadiantLightEffects
==============
*/
void CG_UpdateRadiantLightEffects(void)
{
  LocalClientNum_t FirstActiveGameLocalClient; 
  cg_t *LocalClientGlobals; 
  unsigned int v2; 
  cg_t *i; 

  FirstActiveGameLocalClient = ClStatic::GetFirstActiveGameLocalClient(&cls);
  if ( CL_IsLocalClientConnectedToAnyServer(FirstActiveGameLocalClient) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(FirstActiveGameLocalClient);
    v2 = 0;
    for ( i = LocalClientGlobals; v2 < i->refdef.radiantLiveLightCount; ++v2 )
      CG_RadiantLightAnim_Update(i, v2);
  }
}

/*
==============
GetGameColorAndIntensity
==============
*/
void GetGameColorAndIntensity(const vec3_t *inColorGammaSrgb, float inIntensity, vec3_t *outColorLinearSrgb, float *outIntensity)
{
  float v4; 
  float v6; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  v4 = inColorGammaSrgb->v[0];
  outColorLinearSrgb->v[0] = inColorGammaSrgb->v[0];
  v6 = inColorGammaSrgb->v[1];
  outColorLinearSrgb->v[1] = v6;
  v8 = inColorGammaSrgb->v[2];
  if ( v4 > 0.039280001 )
    v9 = powf_0((float)(v4 * 0.94786733) + 0.052132703, 2.4000001);
  else
    v9 = v4 * 0.077399381;
  outColorLinearSrgb->v[0] = v9;
  if ( v6 > 0.039280001 )
    v10 = powf_0((float)(v6 * 0.94786733) + 0.052132703, 2.4000001);
  else
    v10 = v6 * 0.077399381;
  outColorLinearSrgb->v[1] = v10;
  if ( v8 > 0.039280001 )
    v11 = powf_0((float)(v8 * 0.94786733) + 0.052132703, 2.4000001);
  else
    v11 = v8 * 0.077399381;
  outColorLinearSrgb->v[2] = v11;
  v12 = (float)((float)(v9 * 0.21259999) + (float)(v10 * 0.71520001)) + (float)(v11 * 0.0722);
  if ( v12 > 0.0 )
  {
    outColorLinearSrgb->v[0] = v9 * (float)(1.0 / v12);
    outColorLinearSrgb->v[2] = v11 * (float)(1.0 / v12);
    outColorLinearSrgb->v[1] = v10 * (float)(1.0 / v12);
  }
  *outIntensity = inIntensity * 493.38132;
}

/*
==============
LightUpdate_AddTempLight
==============
*/
__int64 LightUpdate_AddTempLight(cg_t *cgameGlob, int compiledLightIndex, const GfxLight *lightSrc, const RadiantLight *lightRadiant)
{
  __int64 radiantLiveLightCount; 
  __int64 v9; 
  RadiantLight *v10; 
  RadiantLightAnim *v11; 
  float *v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  __m256i v16; 
  double v17; 
  __int128 v18; 
  int v19; 
  __m256i v20; 
  __m256i v21; 
  __m256i v22; 
  __int128 v23; 
  double v24; 
  unsigned int action; 
  __m256i v27; 
  __m256i v28; 
  __m256i v29; 
  __m256i v30; 
  __m256i v31; 
  __m256i v32; 
  __m256i v33; 
  __int128 v34; 

  if ( lightSrc->type == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 239, ASSERT_TYPE_ASSERT, "(lightSrc->type != 1)", (const char *)&queryFormat, "lightSrc->type != GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  radiantLiveLightCount = (int)cgameGlob->refdef.radiantLiveLightCount;
  if ( (unsigned int)radiantLiveLightCount >= 0x80 )
  {
    Com_Printf(8, "WARNING: Please recompile map. Running out of Radiant light update primary light array.\n");
    return 0xFFFFFFFFi64;
  }
  else
  {
    cgameGlob->refdef.radiantLiveLightCount = radiantLiveLightCount + 1;
    LightUpdate_SetTempLight(cgameGlob, compiledLightIndex, radiantLiveLightCount, lightSrc, lightRadiant);
    v9 = radiantLiveLightCount;
    if ( (int)radiantLiveLightCount <= 0 )
    {
      return (unsigned int)radiantLiveLightCount;
    }
    else
    {
      v10 = &cgameGlob->refdef.radiantLiveLightsRaw[radiantLiveLightCount];
      v11 = &cgameGlob->refdef.radiantLiveLightsAnim[radiantLiveLightCount];
      v12 = &cgameGlob->refdef.dofPhysicalFocusState.focusDistance + 38 * radiantLiveLightCount;
      do
      {
        if ( *((_DWORD *)v12 + 64) >= *((_DWORD *)v12 + 26) )
          break;
        v13 = *(__m256i *)(v12 + 38);
        v14 = *(__m256i *)(v12 + 46);
        v15 = *(__m256i *)(v12 + 54);
        v16 = *(__m256i *)(v12 + 62);
        v17 = *((double *)v12 + 37);
        v18 = *(_OWORD *)(v12 + 70);
        *(__m256i *)(v12 + 38) = *(__m256i *)v12;
        *(__m256i *)(v12 + 46) = *(__m256i *)(v12 + 8);
        *(__m256i *)(v12 + 54) = *(__m256i *)(v12 + 16);
        *(__m256i *)(v12 + 62) = *(__m256i *)(v12 + 24);
        *(_OWORD *)(v12 + 70) = *((_OWORD *)v12 + 8);
        *((double *)v12 + 37) = *((double *)v12 + 18);
        *(__m256i *)v12 = v13;
        *((__m256i *)v12 + 1) = v14;
        *((__m256i *)v12 + 2) = v15;
        *((__m256i *)v12 + 3) = v16;
        *((_OWORD *)v12 + 8) = v18;
        *((double *)v12 + 18) = v17;
        v19 = *((_DWORD *)v11 + 30);
        v20 = *(__m256i *)&v11->effect.isdefined;
        v21 = *(__m256i *)v11->effect.intensity;
        v22 = *(__m256i *)&v11->phase;
        v23 = *(_OWORD *)&v11->wait_max[1];
        v24 = *(double *)&v11->intensity_inc;
        *(__m256i *)&v11->effect.isdefined = *(__m256i *)&v11[-1].effect.isdefined;
        *(__m256i *)v11->effect.intensity = *(__m256i *)v11[-1].effect.intensity;
        *(__m256i *)&v11->phase = *(__m256i *)&v11[-1].phase;
        *(_OWORD *)&v11->wait_max[1] = *(_OWORD *)&v11[-1].wait_max[1];
        *(double *)&v11->intensity_inc = *(double *)&v11[-1].intensity_inc;
        *((_DWORD *)v11 + 30) = *((_DWORD *)&v11[-1] + 30);
        *(__m256i *)&v11[-1].effect.isdefined = v20;
        *(__m256i *)v11[-1].effect.intensity = v21;
        *(__m256i *)&v11[-1].phase = v22;
        *(_OWORD *)&v11[-1].wait_max[1] = v23;
        *(double *)&v11[-1].intensity_inc = v24;
        *((_DWORD *)&v11[-1] + 30) = v19;
        action = v10->action;
        v27 = *(__m256i *)&v10->uniqueLightID;
        v28 = *(__m256i *)&v10->bulbLength.y;
        v29 = *(__m256i *)&v10->bounceColorLinearSrgb.y;
        v30 = *(__m256i *)&v10->sunDir.z;
        v31 = *(__m256i *)&v10->shadowBias;
        v32 = *(__m256i *)&v10->lightDef[20];
        v33 = *(__m256i *)&v10->effect.wait_min[1];
        v34 = *(_OWORD *)v10->effect.color[1].v;
        *(__m256i *)&v10->uniqueLightID = *(__m256i *)&v10[-1].uniqueLightID;
        *(__m256i *)&v10->bulbLength.y = *(__m256i *)&v10[-1].bulbLength.y;
        *(__m256i *)&v10->bounceColorLinearSrgb.y = *(__m256i *)&v10[-1].bounceColorLinearSrgb.y;
        *(__m256i *)&v10->sunDir.z = *(__m256i *)&v10[-1].sunDir.z;
        *(__m256i *)&v10->shadowBias = *(__m256i *)&v10[-1].shadowBias;
        *(__m256i *)&v10->lightDef[20] = *(__m256i *)&v10[-1].lightDef[20];
        *(__m256i *)&v10->effect.wait_min[1] = *(__m256i *)&v10[-1].effect.wait_min[1];
        *(_OWORD *)v10->effect.color[1].v = *(_OWORD *)v10[-1].effect.color[1].v;
        v10->action = v10[-1].action;
        LODWORD(radiantLiveLightCount) = radiantLiveLightCount - 1;
        *(__m256i *)&v10[-1].uniqueLightID = v27;
        *(__m256i *)&v10[-1].bulbLength.y = v28;
        *(__m256i *)&v10[-1].bounceColorLinearSrgb.y = v29;
        *(__m256i *)&v10[-1].sunDir.z = v30;
        *(__m256i *)&v10[-1].shadowBias = v31;
        *(__m256i *)&v10[-1].lightDef[20] = v32;
        *(__m256i *)&v10[-1].effect.wait_min[1] = v33;
        --v9;
        *(_OWORD *)v10[-1].effect.color[1].v = v34;
        v10[-1].action = action;
        v12 -= 38;
        --v10;
        --v11;
      }
      while ( v9 > 0 );
      return (unsigned int)radiantLiveLightCount;
    }
  }
}

/*
==============
LightUpdate_CompareLightID
==============
*/
__int64 LightUpdate_CompareLightID(const void *p0, const void *p1)
{
  __int64 v2; 
  __int64 result; 

  v2 = *(_QWORD *)&s_primaryLightArray;
  if ( !*(_QWORD *)&s_primaryLightArray )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", s_primaryLightArray + 30, s_primaryLightArray, "(s_primaryLightArray)", (const char *)&queryFormat, "s_primaryLightArray") )
      __debugbreak();
    v2 = *(_QWORD *)&s_primaryLightArray;
  }
  result = 1i64;
  if ( *(_DWORD *)(152i64 * *(unsigned int *)p0 + v2 + 104) < *(_DWORD *)(152i64 * *(unsigned int *)p1 + v2 + 104) )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
LightUpdate_DelTempLight
==============
*/
void LightUpdate_DelTempLight(cg_t *cgameGlob, int tempLightIndex)
{
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  v3 = --cgameGlob->refdef.radiantLiveLightCount - tempLightIndex;
  if ( v3 )
  {
    v4 = tempLightIndex;
    v5 = v3;
    v6 = tempLightIndex + 1;
    memcpy_0(&cgameGlob->refdef.radiantLiveLights[tempLightIndex], &cgameGlob->refdef.radiantLiveLights[v6], 152i64 * v3);
    memcpy_0(&cgameGlob->refdef.radiantLiveLightsRaw[v4], &cgameGlob->refdef.radiantLiveLightsRaw[v6], 244 * v5);
    memcpy_0(&cgameGlob->refdef.radiantLiveLightsAnim[v4], &cgameGlob->refdef.radiantLiveLightsAnim[v6], 124 * v5);
  }
}

/*
==============
LightUpdate_FindLight
==============
*/
__int64 LightUpdate_FindLight(const GfxLight *lightArray, unsigned int lightCount, const unsigned int *sortedLightIndex, unsigned int id)
{
  signed int v8; 
  signed int v9; 
  int v10; 
  __int64 v11; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 40, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  v8 = 0;
  v9 = lightCount - 1;
  if ( (int)(lightCount - 1) < 0 )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    v10 = (v9 + v8) / 2;
    v11 = sortedLightIndex[v10];
    if ( lightArray[v11].entityId <= id )
      break;
    v9 = v10 - 1;
LABEL_9:
    if ( v8 > v9 )
      return 0xFFFFFFFFi64;
  }
  if ( lightArray[v11].entityId < id )
  {
    v8 = v10 + 1;
    goto LABEL_9;
  }
  return (unsigned int)v11;
}

/*
==============
LightUpdate_RadiantLightToGfxLight
==============
*/
void LightUpdate_RadiantLightToGfxLight(const RadiantLight *lightSrc, GfxLight *lightOut)
{
  unsigned __int8 v4; 
  float distanceFalloff; 
  double v6; 
  vec3_t *p_up; 
  vec3_t *p_bulbLength; 
  float v13; 
  __int128 v14; 
  float v15; 
  __int128 fovOuter_low; 
  __int128 v21; 

  if ( (*((_DWORD *)lightSrc + 59) & 0x80u) == 0 )
    v4 = ((*((_DWORD *)lightSrc + 59) & 0x40) == 0) | 2;
  else
    v4 = 1;
  lightOut->type = v4;
  if ( (*((_BYTE *)lightSrc + 236) & 1) == 0 )
    lightOut->flags |= 0x40u;
  lightOut->entityId = lightSrc->uniqueLightID;
  lightOut->canUseShadowMap = (*((_DWORD *)lightSrc + 59) & 8) != 0;
  lightOut->needsDynamicShadows = (*((_DWORD *)lightSrc + 59) & 0x10) != 0;
  lightOut->isVolumetric = BYTE1(*((_DWORD *)lightSrc + 59)) & 1;
  lightOut->uvIntensity = lightSrc->uvIntensity;
  distanceFalloff = lightSrc->distanceFalloff;
  if ( distanceFalloff == 0.0 )
    *(float *)&v6 = FLOAT_0_2;
  else
    v6 = I_fclamp(distanceFalloff, 0.1, 1.0);
  lightOut->distanceFalloff = *(float *)&v6;
  lightOut->intensity = lightSrc->directIntensity;
  p_up = &lightOut->up;
  lightOut->colorLinearSrgb.v[0] = lightSrc->directColorLinearSrgb.v[0];
  lightOut->colorLinearSrgb.v[1] = lightSrc->directColorLinearSrgb.v[1];
  lightOut->colorLinearSrgb.v[2] = lightSrc->directColorLinearSrgb.v[2];
  lightOut->dir.v[0] = lightSrc->spotDir.v[0];
  lightOut->dir.v[1] = lightSrc->spotDir.v[1];
  lightOut->dir.v[2] = lightSrc->spotDir.v[2];
  lightOut->up.v[0] = 0.0;
  *(_QWORD *)&lightOut->up.y = 1065353216i64;
  if ( *((char *)lightSrc + 236) >= 0 )
  {
    lightOut->origin.v[0] = lightSrc->origin.v[0];
    lightOut->origin.v[1] = lightSrc->origin.v[1];
    lightOut->origin.v[2] = lightSrc->origin.v[2];
    _XMM0 = LODWORD(lightSrc->radius);
    __asm { vmaxss  xmm1, xmm0, cs:__real@3f8147ae }
    lightOut->radius = *(float *)&_XMM1;
    lightOut->fadeOffsetRt.v[0] = lightSrc->fadeOffset.v[0];
    lightOut->fadeOffsetRt.v[1] = lightSrc->fadeOffset.v[1];
    R_LightFadeOffsetRuntimeEncoding(&lightOut->fadeOffsetRt, lightOut->type);
    _XMM0 = LODWORD(lightSrc->bulbRadius);
    p_bulbLength = &lightOut->bulbLength;
    __asm { vmaxss  xmm1, xmm0, xmm7 }
    lightOut->bulbRadius = *(float *)&_XMM1;
    *(float *)&_XMM0 = lightSrc->bulbLength.v[0];
    lightOut->bulbLength.v[0] = *(float *)&_XMM0;
    lightOut->bulbLength.v[1] = lightSrc->bulbLength.v[1];
    lightOut->bulbLength.v[2] = lightSrc->bulbLength.v[2];
    if ( *(float *)&_XMM0 == 0.0 && lightOut->bulbLength.v[1] == 0.0 && lightOut->bulbLength.v[2] == 0.0 )
    {
      p_bulbLength->v[0] = 0.0039215689;
      lightOut->bulbLength.v[1] = 0.0039215689;
      lightOut->bulbLength.v[2] = 0.0039215689;
    }
    else
    {
      if ( &lightOut->dir == p_up && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
        __debugbreak();
      if ( p_bulbLength == p_up && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
        __debugbreak();
      v13 = (float)(lightOut->dir.v[1] * lightOut->bulbLength.v[2]) - (float)(lightOut->bulbLength.v[1] * lightOut->dir.v[2]);
      p_up->v[0] = v13;
      v14 = LODWORD(lightOut->dir.v[2]);
      *(float *)&v14 = (float)(lightOut->dir.v[2] * lightOut->bulbLength.v[0]) - (float)(lightOut->dir.v[0] * lightOut->bulbLength.v[2]);
      lightOut->up.v[1] = *(float *)&v14;
      v15 = (float)(lightOut->bulbLength.v[1] * lightOut->dir.v[0]) - (float)(lightOut->dir.v[1] * lightOut->bulbLength.v[0]);
      lightOut->up.v[2] = v15;
      *(float *)&v14 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13)) + (float)(v15 * v15));
      _XMM3 = v14;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
      }
      p_up->v[0] = v13 * (float)(1.0 / *(float *)&_XMM0);
      lightOut->up.v[1] = (float)(1.0 / *(float *)&_XMM0) * lightOut->up.v[1];
      lightOut->up.v[2] = (float)(1.0 / *(float *)&_XMM0) * lightOut->up.v[2];
    }
    lightOut->cosHalfFovCollimation = lightSrc->fovCollimation;
    fovOuter_low = LODWORD(lightSrc->fovOuter);
    *(double *)&fovOuter_low = I_fclamp(*(float *)&fovOuter_low, 0.001, 0.99900001);
    lightOut->cosHalfFovOuter = *(float *)&fovOuter_low;
    v21 = fovOuter_low;
    *(float *)&v21 = *(float *)&fovOuter_low + 0.001;
    _XMM0 = v21;
    __asm { vmaxss  xmm1, xmm0, dword ptr [rdi+64h] }
    lightOut->cosHalfFovInner = *(float *)&_XMM1;
    lightOut->shadowSoftness = lightSrc->shadowSoftness;
    lightOut->shadowBias = lightSrc->shadowBias;
    lightOut->shadowArea = lightSrc->shadowArea;
    lightOut->shadowNearPlaneBias = lightSrc->shadowNearPlaneBias;
    lightOut->def = R_RegisterLightDef(lightSrc->lightDef);
  }
}

/*
==============
LightUpdate_SetTempLight
==============
*/
void LightUpdate_SetTempLight(cg_t *cgameGlob, int compiledLightIndex, int tempLightIndex, const GfxLight *lightSrc, const RadiantLight *lightRadiant)
{
  __int64 v5; 

  v5 = tempLightIndex;
  cgameGlob->refdef.radiantLiveLightsRaw[tempLightIndex] = *lightRadiant;
  cgameGlob->refdef.radiantLiveLights[tempLightIndex] = *lightSrc;
  cgameGlob->refdef.radiantLiveLightsAnim[v5].effect = lightRadiant->effect;
  cgameGlob->refdef.radiantLiveLightsAnim[v5].compiledLightIndex = compiledLightIndex;
  *((_DWORD *)&cgameGlob->refdef.radiantLiveLightsAnim[v5] + 30) ^= (*((_DWORD *)&cgameGlob->refdef.radiantLiveLightsAnim[v5] + 30) ^ *((_DWORD *)lightRadiant + 59)) & 1;
  cgameGlob->refdef.radiantLiveLightsAnim[v5].activationTime = (float)cgameGlob->time * 0.001;
  cgameGlob->refdef.radiantLiveLightsAnim[v5].waitTime = 0.0;
  cgameGlob->refdef.radiantLiveLightsAnim[v5].phase = -1;
  CG_RadiantLightAnim_Update(cgameGlob, tempLightIndex);
}

/*
==============
R_RadiantLive_IsModifiedLight
==============
*/
unsigned __int8 R_RadiantLive_IsModifiedLight(unsigned int lightIndex)
{
  __int64 v1; 
  unsigned int v2; 
  int v5; 

  v1 = (int)lightIndex;
  if ( lightIndex >= 0x1980 )
  {
    v5 = 6528;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", lightIndex, v5) )
      __debugbreak();
  }
  v2 = s_primaryLightsModified[v1 >> 5];
  return _bittest((const int *)&v2, v1 & 0x1F);
}

