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
  cg_t *LocalClientGlobals; 
  unsigned int *v25; 

  world = rgp.world;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 488, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
    __debugbreak();
  primaryLightCount = world->primaryLightCount;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _R10 = s_primaryLightsSorted;
  LocalClientGlobals->refdef.radiantLiveLightCount = 0;
  _EAX = 0;
  if ( (_DWORD)primaryLightCount )
  {
    if ( (unsigned int)primaryLightCount >= 0x10 )
    {
      __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
      _EDX = 8;
      do
      {
        _RCX = _EAX;
        __asm
        {
          vmovd   xmm0, eax
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [r10+rcx*4], xmm1
        }
        _RCX = _EDX - 4;
        _EAX += 16;
        __asm
        {
          vmovd   xmm0, ecx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [r10+rcx*4], xmm1
        }
        _RCX = _EDX;
        __asm
        {
          vmovd   xmm0, edx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [r10+rcx*4], xmm1
        }
        _RCX = _EDX + 4;
        _EDX += 16;
        __asm
        {
          vmovd   xmm0, ecx
          vpshufd xmm0, xmm0, 0
          vpaddd  xmm1, xmm0, xmm2
          vmovdqu xmmword ptr [r10+rcx*4], xmm1
        }
      }
      while ( _EAX < (primaryLightCount & 0xFFFFFFF0) );
    }
    if ( _EAX < (unsigned int)primaryLightCount )
    {
      v25 = &s_primaryLightsSorted[_EAX];
      do
        *v25++ = _EAX++;
      while ( _EAX < (unsigned int)primaryLightCount );
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
  int v10; 
  __int64 v11; 
  const char *v12; 
  GfxLight *primaryLights; 
  signed int v14; 
  char *fmt; 
  __int64 v28; 
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
      v12 = "Turn off pirmary light(%d) at (%3.0f,%3.0f,%3.0f)\n";
LABEL_34:
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+lightOut.origin+8]
        vmovss  xmm1, dword ptr [rbp+57h+lightOut.origin+4]
        vmovss  xmm3, dword ptr [rbp+57h+lightOut.origin]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+100h+var_D8], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+100h+fmt], xmm1
      }
      Com_Printf(8, v12, (unsigned int)v10, _R9, fmt, v28);
      return;
    }
    if ( Light != -1 )
    {
      primaryLights = world->primaryLights;
      v14 = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount;
      _RDI = &primaryLights[Light];
      R_InitSelectedPrimaryLights(Light, Light, primaryLights);
      if ( v10 < v14 && _RDI->type == lightOut.type )
      {
        __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
        if ( VecNCompareCustomEpsilon(_RDI->colorLinearSrgb.v, lightOut.colorLinearSrgb.v, *(float *)&_XMM2, 3) )
        {
          __asm { vmovss  xmm2, cs:__real@3ba3d70a; epsilon }
          if ( VecNCompareCustomEpsilon(_RDI->dir.v, lightOut.dir.v, *(float *)&_XMM2, 3) )
          {
            __asm { vmovss  xmm2, cs:__real@3dcccccd; epsilon }
            if ( VecNCompareCustomEpsilon(_RDI->origin.v, lightOut.origin.v, *(float *)&_XMM2, 3) )
            {
              __asm
              {
                vmovss  xmm0, [rbp+57h+lightOut.radius]
                vucomiss xmm0, dword ptr [rdi+44h]
              }
            }
          }
        }
      }
      _RDI->flags |= 0x10u;
      if ( (_DWORD)v11 == -1 )
        LightUpdate_AddTempLight(v6, v10, &lightOut, (const RadiantLight *)v2);
      else
        LightUpdate_SetTempLight(v6, v10, v11, &lightOut, (const RadiantLight *)v2);
      v12 = "Create a new temp light for primary light(%d) at (%3.0f,%3.0f,%3.0f)\n";
      goto LABEL_34;
    }
    if ( (_DWORD)v11 == -1 )
      LightUpdate_AddTempLight(v6, -1, &lightOut, (const RadiantLight *)v2);
    else
      LightUpdate_SetTempLight(v6, -1, v11, &lightOut, (const RadiantLight *)v2);
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
  __int64 v7; 
  unsigned int v8; 
  unsigned int primaryLightCount; 
  GfxLight *primaryLights; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  __int64 v28; 
  char *fmt; 
  char *fmta; 
  double v39; 
  double v40; 

  v1 = *(unsigned int *)&commandData->radiantCommand->command[4];
  v2 = &commandData->radiantCommand->command[8];
  FirstActiveGameLocalClient = ClStatic::GetFirstActiveGameLocalClient(&cls);
  if ( !CL_IsLocalClientConnectedToAnyServer(FirstActiveGameLocalClient) )
    return;
  LocalClientGlobals = CG_GetLocalClientGlobals(FirstActiveGameLocalClient);
  world = rgp.world;
  _RBP = LocalClientGlobals;
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
      _RCX = (__int64)&world->primaryLights[v14];
      *(_DWORD *)(_RCX + 16) = 0;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+40h]
        vmovss  xmm3, dword ptr [rcx+38h]
        vmovss  xmm1, dword ptr [rcx+3Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+58h+var_30], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+58h+fmt], xmm1
      }
      Com_Printf(8, "Suppress pirmary light(%d) at (%3.0f,%3.0f,%3.0f)\n", (unsigned int)v14, *(double *)&_XMM3, *(double *)&fmt, v39);
    }
LABEL_19:
    v24 = 0;
    v25 = _RBP->refdef.radiantLiveLightCount - 1;
    if ( v25 < 0 )
      goto LABEL_28;
    while ( 2 )
    {
      v26 = (v25 + v24) / 2;
      v27 = v26;
      v28 = v26;
      if ( _RBP->refdef.radiantLiveLights[v28].entityId > v8 )
      {
        v25 = v26 - 1;
        goto LABEL_24;
      }
      if ( _RBP->refdef.radiantLiveLights[v28].entityId < v8 )
      {
        v24 = v26 + 1;
LABEL_24:
        if ( v24 > v25 )
          goto LABEL_28;
        continue;
      }
      break;
    }
    if ( v26 != -1 )
    {
      _RBX = 152i64 * v26;
      LightUpdate_DelTempLight(_RBP, (v25 + v24) / 2);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rbp+6CA8h]
        vmovss  xmm3, dword ptr [rbx+rbp+6CA0h]
        vmovss  xmm1, dword ptr [rbx+rbp+6CA4h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+58h+var_30], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+58h+fmt], xmm1
      }
      Com_Printf(8, "Remove temp light(%d) at (%3.0f,%3.0f,%3.0f)\n", v27, *(double *)&_XMM3, *(double *)&fmta, v40);
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
  unsigned int updated; 
  char *fmt; 
  char *fmta; 
  __int64 v29; 
  double v30; 
  double v31; 
  __int64 v32; 
  double v33; 

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
              _RDI = (__int64)&world->primaryLights[Light];
              if ( (unsigned int)Light >= 0x1980 )
              {
                LODWORD(v32) = 6528;
                LODWORD(v29) = Light;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v29, v32) )
                  __debugbreak();
              }
              s_primaryLightsModified[v11 >> 5] |= 1 << (v11 & 0x1F);
              if ( v2->action == 1 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+40h]
                  vmovss  xmm3, dword ptr [rdi+38h]
                  vmovss  xmm1, dword ptr [rdi+3Ch]
                  vcvtss2sd xmm0, xmm0, xmm0
                  vcvtss2sd xmm3, xmm3, xmm3
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovsd  [rsp+68h+var_40], xmm0
                  vmovq   r9, xmm3
                  vmovsd  [rsp+68h+fmt], xmm1
                }
                Com_Printf(8, "Update pirmary light(%d) at (%3.0f,%3.0f,%3.0f)\n", (unsigned int)v11, *(double *)&_XMM3, *(double *)&fmta, v31);
                LightUpdate_RadiantLightToGfxLight(v2, (GfxLight *)_RDI);
              }
              else if ( v2->action == 2 )
              {
                if ( *(_BYTE *)_RDI == 1 )
                {
                  LightUpdate_RadiantLightToGfxLight(v2, (GfxLight *)_RDI);
                  Dvar_SetBoolByName("LRTMOMKOLS", 0);
                }
                else
                {
                  *(_DWORD *)(_RDI + 16) = 0;
                  updated = LightUpdate_AddTempLight_0(v7, -1, v2);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+40h]
                    vmovss  xmm1, dword ptr [rdi+3Ch]
                    vmovss  xmm2, dword ptr [rdi+38h]
                    vcvtss2sd xmm0, xmm0, xmm0
                    vmovsd  [rsp+68h+var_38], xmm0
                    vcvtss2sd xmm1, xmm1, xmm1
                    vcvtss2sd xmm2, xmm2, xmm2
                    vmovsd  [rsp+68h+var_40], xmm1
                    vmovsd  [rsp+68h+fmt], xmm2
                  }
                  Com_Printf(8, "Create a new temp light(%d) for pirmary light(%d) at (%3.0f,%3.0f,%3.0f)\n", updated, (unsigned int)v11, *(double *)&fmt, v30, v33);
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
  RadiantLightEffect::ColorMode colorMode; 
  GfxWorld *world; 
  GfxLight *v20; 
  int phase; 
  unsigned int isdefined; 
  int v44; 
  int v66; 
  unsigned int v67; 
  int v86; 
  int v110; 
  int v111; 
  unsigned int v112; 
  int v130; 
  int step_i; 
  int v178; 
  int v204; 
  char v220; 
  __int64 v225; 
  float outIntensity; 
  vec3_t inColorGammaSrgb; 
  vec3_t outColorLinearSrgb; 
  char v231; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rcx+65ECh]
    vmulss  xmm10, xmm0, cs:__real@3a83126f
    vmovss  xmm0, dword ptr [rdx+48h]
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm0, xmm9
  }
  _RDI = light;
  _RBX = anim;
  if ( (unsigned __int64)&v225 != _security_cookie )
    __asm { vsubss  xmm8, xmm0, xmm10 }
  else
    __asm { vxorps  xmm8, xmm8, xmm8 }
  colorMode = anim->effect.colorMode;
  if ( colorMode )
  {
    switch ( colorMode )
    {
      case COLOR_OFF:
        light->intensity = 0.0;
        goto LABEL_124;
      case COLOR_COLOR:
        goto LABEL_124;
      case COLOR_COLOR_01:
        __asm { vmovss  xmm1, dword ptr [rdx+20h]; inIntensity }
        GetGameColorAndIntensity(anim->effect.color, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
        goto LABEL_124;
      case COLOR_COLOR_02:
        __asm { vmovss  xmm1, dword ptr [rdx+24h]; inIntensity }
        GetGameColorAndIntensity(&anim->effect.color[1], *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
        goto LABEL_124;
      case COLOR_TOGGLE:
        __asm { vcomiss xmm8, xmm9 }
        phase = anim->phase;
        if ( !phase )
        {
          __asm { vmovss  xmm1, dword ptr [rdx+20h]; inIntensity }
          GetGameColorAndIntensity(anim->effect.color, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
          __asm { vmovss  xmm0, dword ptr [rbx+54h] }
          _RBX->phase = 1;
          __asm
          {
            vmaxss  xmm1, xmm0, dword ptr [rbx+5Ch]
            vaddss  xmm0, xmm8, xmm10
            vaddss  xmm2, xmm1, xmm0
            vmovss  dword ptr [rbx+48h], xmm2
          }
          goto LABEL_124;
        }
        if ( phase == 1 )
        {
          __asm { vmovss  xmm1, dword ptr [rdx+24h]; inIntensity }
          GetGameColorAndIntensity(&anim->effect.color[1], *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
          __asm { vmovss  xmm1, dword ptr [rbx+60h] }
          _RBX->phase = 0;
          __asm
          {
            vmaxss  xmm1, xmm1, dword ptr [rbx+58h]
            vaddss  xmm0, xmm8, xmm10
            vaddss  xmm2, xmm1, xmm0
            vmovss  dword ptr [rbx+48h], xmm2
          }
          goto LABEL_124;
        }
        isdefined = anim->effect.isdefined;
        __asm { vmovss  xmm1, cs:__real@3f800000 }
        if ( (isdefined & 1) != 0 )
          __asm { vmovss  xmm0, dword ptr [rbx+0Ch] }
        else
          __asm { vmovaps xmm0, xmm1 }
        __asm
        {
          vmovss  xmm3, cs:__real@40000000
          vdivss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbx+4Ch], xmm0
          vmaxss  xmm0, xmm1, cs:__real@3e800000
          vmovss  dword ptr [rbx+50h], xmm0
        }
        if ( (isdefined & 6) != 2 )
        {
          if ( (isdefined & 2) != 0 )
          {
            __asm { vmovss  xmm0, dword ptr [rbx+10h] }
LABEL_29:
            __asm
            {
              vmovss  xmm2, cs:__real@3d4ccccd
              vmulss  xmm0, xmm1, xmm0
              vmaxss  xmm0, xmm0, xmm2
              vmovss  dword ptr [rbx+54h], xmm0
            }
            if ( (_RBX->effect.isdefined & 4) != 0 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+18h]
                vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm2
              }
            }
            else
            {
              __asm
              {
                vmovaps xmm0, xmm3
                vdivss  xmm0, xmm3, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm2
              }
            }
            goto LABEL_36;
          }
          if ( (isdefined & 4) == 0 )
          {
            __asm { vmovaps xmm0, xmm3 }
            goto LABEL_29;
          }
        }
        if ( (isdefined & 2) != 0 )
          __asm { vmovss  xmm0, dword ptr [rbx+10h] }
        else
          __asm { vmovss  xmm0, dword ptr [rbx+18h] }
        __asm
        {
          vmovss  xmm2, cs:__real@3d4ccccd
          vmulss  xmm0, xmm1, xmm0
          vmaxss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rbx+54h], xmm1
        }
LABEL_36:
        __asm { vmovss  dword ptr [rbx+5Ch], xmm1 }
        v44 = _RBX->effect.isdefined & 8;
        if ( (_RBX->effect.isdefined & 0x18) != 8 )
        {
          if ( v44 )
          {
            __asm { vmovss  xmm0, dword ptr [rbx+14h] }
            goto LABEL_41;
          }
          if ( (_RBX->effect.isdefined & 0x10) == 0 )
          {
            __asm { vmovaps xmm0, xmm3 }
LABEL_41:
            __asm
            {
              vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
              vmaxss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rbx+58h], xmm1
            }
            if ( (_RBX->effect.isdefined & 0x10) != 0 )
              __asm { vmovss  xmm3, dword ptr [rbx+1Ch] }
            __asm
            {
              vdivss  xmm0, xmm3, dword ptr [rbx+4Ch]
              vmaxss  xmm1, xmm0, xmm2
            }
            goto LABEL_48;
          }
        }
        if ( v44 )
          __asm { vmovss  xmm0, dword ptr [rbx+14h] }
        else
          __asm { vmovss  xmm0, dword ptr [rbx+1Ch] }
        __asm
        {
          vdivss  xmm1, xmm0, dword ptr [rbx+4Ch]
          vmaxss  xmm1, xmm1, xmm2
          vmovss  dword ptr [rbx+58h], xmm1
        }
LABEL_48:
        __asm
        {
          vmovss  dword ptr [rbx+60h], xmm1
          vmovss  xmm1, dword ptr [rbx+20h]; inIntensity
        }
        GetGameColorAndIntensity(_RBX->effect.color, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+50h]; max
          vxorps  xmm0, xmm0, xmm0; min
        }
        *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vaddss  xmm1, xmm8, xmm10
          vaddss  xmm2, xmm0, xmm1
        }
        _RBX->phase = 0;
        __asm { vmovss  dword ptr [rbx+48h], xmm2 }
        goto LABEL_124;
      case COLOR_FLICKER:
        __asm { vcomiss xmm8, xmm9 }
        v66 = anim->phase;
        if ( !v66 )
        {
          __asm { vmovss  xmm1, dword ptr [rdx+20h]; inIntensity }
          GetGameColorAndIntensity(anim->effect.color, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+5Ch]; max
            vmovss  xmm0, dword ptr [rbx+54h]; min
          }
          *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vaddss  xmm1, xmm8, xmm10
            vaddss  xmm2, xmm0, xmm1
          }
          _RBX->phase = 1;
          __asm { vmovss  dword ptr [rbx+48h], xmm2 }
          goto LABEL_124;
        }
        if ( v66 == 1 )
        {
          __asm { vmovss  xmm1, dword ptr [rdx+24h]; inIntensity }
          GetGameColorAndIntensity(&anim->effect.color[1], *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+60h]; max
            vmovss  xmm0, dword ptr [rbx+58h]; min
          }
          *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vaddss  xmm1, xmm8, xmm10
            vaddss  xmm2, xmm0, xmm1
          }
          _RBX->phase = 0;
          __asm { vmovss  dword ptr [rbx+48h], xmm2 }
          goto LABEL_124;
        }
        v67 = anim->effect.isdefined;
        __asm { vmovss  xmm1, cs:__real@3f800000 }
        if ( (v67 & 1) != 0 )
          __asm { vmovss  xmm0, dword ptr [rbx+0Ch] }
        else
          __asm { vmovaps xmm0, xmm1 }
        __asm
        {
          vmovss  xmm3, cs:__real@3dcccccd
          vdivss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbx+4Ch], xmm0
          vmaxss  xmm0, xmm1, cs:__real@3e800000
          vmovss  dword ptr [rbx+50h], xmm0
        }
        if ( (v67 & 6) != 2 )
        {
          __asm { vmovss  xmm2, cs:__real@3d4ccccd }
          if ( (v67 & 2) != 0 )
          {
            __asm { vmovss  xmm0, dword ptr [rbx+10h] }
LABEL_63:
            __asm
            {
              vmulss  xmm0, xmm1, xmm0
              vmaxss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rbx+54h], xmm1
            }
            if ( (_RBX->effect.isdefined & 4) != 0 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+18h]
                vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm3
              }
            }
            else
            {
              __asm
              {
                vmovaps xmm0, xmm3
                vdivss  xmm0, xmm3, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm3
              }
            }
            goto LABEL_70;
          }
          if ( (v67 & 4) == 0 )
          {
            __asm { vmovaps xmm0, xmm2 }
            goto LABEL_63;
          }
        }
        if ( (v67 & 2) != 0 )
          __asm { vmovss  xmm0, dword ptr [rbx+10h] }
        else
          __asm { vmovss  xmm0, dword ptr [rbx+18h] }
        __asm
        {
          vmovss  xmm2, cs:__real@3d4ccccd
          vmulss  xmm0, xmm1, xmm0
          vmaxss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rbx+54h], xmm1
        }
LABEL_70:
        __asm { vmovss  dword ptr [rbx+5Ch], xmm1 }
        v86 = _RBX->effect.isdefined & 8;
        if ( (_RBX->effect.isdefined & 0x18) != 8 )
        {
          if ( v86 )
          {
            __asm { vmovss  xmm0, dword ptr [rbx+14h] }
LABEL_75:
            __asm
            {
              vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
              vmaxss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rbx+58h], xmm1
            }
            if ( (_RBX->effect.isdefined & 0x10) != 0 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+1Ch]
                vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm3
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, cs:__real@3f400000
                vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm3
              }
            }
LABEL_82:
            __asm
            {
              vmovss  dword ptr [rbx+60h], xmm1
              vmovss  xmm1, dword ptr [rbx+20h]; inIntensity
            }
            GetGameColorAndIntensity(_RBX->effect.color, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+50h]; max
              vxorps  xmm0, xmm0, xmm0; min
            }
            *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm
            {
              vaddss  xmm1, xmm8, xmm10
              vaddss  xmm2, xmm0, xmm1
            }
            _RBX->phase = 0;
            __asm { vmovss  dword ptr [rbx+48h], xmm2 }
            goto LABEL_124;
          }
          if ( (_RBX->effect.isdefined & 0x10) == 0 )
          {
            __asm { vmovaps xmm0, xmm2 }
            goto LABEL_75;
          }
        }
        if ( v86 )
          __asm { vmovss  xmm0, dword ptr [rbx+14h] }
        else
          __asm { vmovss  xmm0, dword ptr [rbx+1Ch] }
        __asm
        {
          vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
          vmaxss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rbx+58h], xmm1
        }
        goto LABEL_82;
    }
    __asm { vmovaps [rsp+0B8h+var_18], xmm6 }
    if ( colorMode != COLOR_PULSE )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000; inIntensity
        vsubss  xmm6, xmm10, dword ptr [rdx+44h]
        vmovss  dword ptr [rsp+0B8h+outColorLinearSrgb], xmm1
        vmovss  [rsp+0B8h+outIntensity], xmm1
        vmovss  dword ptr [rsp+0B8h+outColorLinearSrgb+4], xmm9
        vmovss  dword ptr [rsp+0B8h+outColorLinearSrgb+8], xmm9
      }
      GetGameColorAndIntensity(&outColorLinearSrgb, *(float *)&_XMM1, &outColorLinearSrgb, &outIntensity);
      __asm
      {
        vmovss  xmm1, cs:__real@40800000; Y
        vmovaps xmm0, xmm6; X
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vcomiss xmm0, cs:__real@40000000 }
      if ( v220 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0B8h+outColorLinearSrgb]
          vmovss  xmm1, dword ptr [rsp+0B8h+outColorLinearSrgb+4]
          vmovss  dword ptr [rdi+14h], xmm0
          vmovss  xmm0, dword ptr [rsp+0B8h+outColorLinearSrgb+8]
          vmovss  dword ptr [rdi+18h], xmm1
          vmovss  xmm1, [rsp+0B8h+outIntensity]
          vmovss  dword ptr [rdi+1Ch], xmm0
          vmovss  dword ptr [rdi+10h], xmm1
        }
      }
      else
      {
        *(_QWORD *)_RDI->colorLinearSrgb.v = 0i64;
        _RDI->colorLinearSrgb.v[2] = 0.0;
        _RDI->intensity = 0.0;
      }
      goto LABEL_123;
    }
    __asm { vcomiss xmm8, xmm9 }
    v110 = anim->phase;
    if ( !v110 )
    {
      __asm { vmovss  xmm1, dword ptr [rdx+20h]; inIntensity }
      GetGameColorAndIntensity(anim->effect.color, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+5Ch]; max
        vmovss  xmm0, dword ptr [rbx+54h]; min
      }
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vaddss  xmm1, xmm8, xmm10
        vaddss  xmm0, xmm0, xmm1
        vmovss  dword ptr [rbx+48h], xmm0
        vmovss  xmm1, dword ptr [rbx+60h]; max
        vmovss  xmm0, dword ptr [rbx+58h]; min
      }
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@41200000
        vcvttss2si eax, xmm1
      }
      _RBX->steps = _EAX;
      _RBX->phase = 1;
      if ( _EAX > 1 )
        _EAX = 1;
      _RBX->step_i = _EAX;
      goto LABEL_123;
    }
    __asm { vmovaps [rsp+0B8h+var_28], xmm7 }
    v111 = v110 - 1;
    if ( v111 )
    {
      if ( v111 != 1 )
      {
        v112 = anim->effect.isdefined;
        __asm { vmovss  xmm1, cs:__real@3f800000 }
        if ( (v112 & 1) != 0 )
          __asm { vmovss  xmm0, dword ptr [rbx+0Ch] }
        else
          __asm { vmovaps xmm0, xmm1 }
        __asm
        {
          vmovss  xmm3, cs:__real@3dcccccd
          vdivss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rbx+4Ch], xmm0
          vmaxss  xmm0, xmm1, cs:__real@40400000
          vmovss  dword ptr [rbx+50h], xmm0
        }
        if ( (v112 & 6) != 2 )
        {
          __asm { vmovss  xmm2, cs:__real@3d4ccccd }
          if ( (v112 & 2) != 0 )
          {
            __asm { vmovss  xmm0, dword ptr [rbx+10h] }
LABEL_98:
            __asm
            {
              vmulss  xmm0, xmm0, xmm1
              vmaxss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rbx+54h], xmm1
            }
            if ( (_RBX->effect.isdefined & 4) != 0 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+18h]
                vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm3
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, cs:__real@3f000000
                vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm3
              }
            }
            goto LABEL_105;
          }
          if ( (v112 & 4) == 0 )
          {
            __asm { vmovaps xmm0, xmm2 }
            goto LABEL_98;
          }
        }
        if ( (v112 & 2) != 0 )
          __asm { vmovss  xmm0, dword ptr [rbx+10h] }
        else
          __asm { vmovss  xmm0, dword ptr [rbx+18h] }
        __asm
        {
          vmovss  xmm2, cs:__real@3d4ccccd
          vmulss  xmm0, xmm1, xmm0
          vmaxss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rbx+54h], xmm1
        }
LABEL_105:
        __asm { vmovss  dword ptr [rbx+5Ch], xmm1 }
        v130 = _RBX->effect.isdefined & 8;
        if ( (_RBX->effect.isdefined & 0x18) != 8 )
        {
          if ( v130 )
          {
            __asm { vmovss  xmm0, dword ptr [rbx+14h] }
LABEL_110:
            __asm
            {
              vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
              vmaxss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rbx+58h], xmm1
            }
            if ( (_RBX->effect.isdefined & 0x10) != 0 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+1Ch]
                vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm3
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, cs:__real@3f400000
                vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
                vmaxss  xmm1, xmm0, xmm3
              }
            }
LABEL_117:
            __asm
            {
              vmovss  dword ptr [rbx+60h], xmm1
              vmovss  xmm1, dword ptr [rbx+20h]; inIntensity
            }
            GetGameColorAndIntensity(_RBX->effect.color, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+60h]
              vmulss  xmm1, xmm0, cs:__real@41a00000
              vmovss  xmm0, cs:__real@40000000
              vcvttss2si eax, xmm1
              vxorps  xmm2, xmm2, xmm2
              vcvtsi2ss xmm2, xmm2, eax
              vdivss  xmm3, xmm0, xmm2
              vmovss  dword ptr [rbx+6Ch], xmm3
            }
            _RBX->steps = _EAX;
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+20h]
              vsubss  xmm0, xmm1, dword ptr [rbx+24h]
              vmovss  xmm1, dword ptr [rbx+50h]; max
              vmulss  xmm2, xmm0, xmm3
              vxorps  xmm0, xmm0, xmm0; min
              vmovss  dword ptr [rbx+70h], xmm2
            }
            *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm
            {
              vaddss  xmm1, xmm8, xmm10
              vaddss  xmm0, xmm0, xmm1
              vmovss  dword ptr [rbx+48h], xmm0
            }
LABEL_118:
            _RBX->phase = 0;
LABEL_122:
            __asm { vmovaps xmm7, [rsp+0B8h+var_28] }
LABEL_123:
            __asm { vmovaps xmm6, [rsp+0B8h+var_18] }
            goto LABEL_124;
          }
          if ( (_RBX->effect.isdefined & 0x10) == 0 )
          {
            __asm { vmovss  xmm0, cs:__real@3e800000 }
            goto LABEL_110;
          }
        }
        if ( v130 )
          __asm { vmovss  xmm0, dword ptr [rbx+14h] }
        else
          __asm { vmovss  xmm0, dword ptr [rbx+1Ch] }
        __asm
        {
          vdivss  xmm0, xmm0, dword ptr [rbx+4Ch]
          vmaxss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rbx+58h], xmm1
        }
        goto LABEL_117;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+34h]
        vsubss  xmm1, xmm0, dword ptr [rdx+28h]
        vmovss  xmm0, dword ptr [rdx+38h]
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, dword ptr [rdx+68h]
        vmulss  xmm6, xmm7, dword ptr [rdx+6Ch]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rdx+28h]
        vsubss  xmm1, xmm0, dword ptr [rdx+2Ch]
        vmovss  xmm0, dword ptr [rdx+3Ch]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rdx+30h]
        vmovss  xmm0, dword ptr [rdx+20h]
        vmovss  dword ptr [rsp+0B8h+inColorGammaSrgb], xmm3
        vaddss  xmm3, xmm2, dword ptr [rdx+2Ch]
        vmulss  xmm2, xmm1, xmm6
        vmulss  xmm1, xmm7, dword ptr [rdx+70h]
        vmovss  dword ptr [rsp+0B8h+inColorGammaSrgb+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rdx+30h]
        vsubss  xmm2, xmm0, xmm1
        vmaxss  xmm1, xmm2, xmm9; inIntensity
        vmovss  dword ptr [rsp+0B8h+inColorGammaSrgb+8], xmm3
      }
      GetGameColorAndIntensity(&inColorGammaSrgb, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
      step_i = _RBX->step_i;
      __asm
      {
        vaddss  xmm0, xmm8, xmm10
        vaddss  xmm1, xmm0, cs:__real@3d4ccccd
        vmovss  dword ptr [rbx+48h], xmm1
      }
      if ( step_i == 1 )
        goto LABEL_118;
      v178 = step_i - 1;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+34h]
        vsubss  xmm1, xmm0, dword ptr [rdx+28h]
        vmovss  xmm0, dword ptr [rdx+38h]
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, dword ptr [rdx+68h]
        vmulss  xmm6, xmm7, dword ptr [rdx+6Ch]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rdx+28h]
        vsubss  xmm1, xmm0, dword ptr [rdx+2Ch]
        vmovss  xmm0, dword ptr [rdx+3Ch]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rdx+30h]
        vmovss  xmm0, dword ptr [rdx+20h]
        vmovss  dword ptr [rsp+0B8h+inColorGammaSrgb], xmm3
        vaddss  xmm3, xmm2, dword ptr [rdx+2Ch]
        vmulss  xmm2, xmm1, xmm6
        vmulss  xmm1, xmm7, dword ptr [rdx+70h]
        vmovss  dword ptr [rsp+0B8h+inColorGammaSrgb+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rdx+30h]
        vsubss  xmm2, xmm0, xmm1
        vmaxss  xmm1, xmm2, xmm9; inIntensity
        vmovss  dword ptr [rsp+0B8h+inColorGammaSrgb+8], xmm3
      }
      GetGameColorAndIntensity(&inColorGammaSrgb, *(float *)&_XMM1, &light->colorLinearSrgb, &light->intensity);
      v204 = _RBX->step_i;
      __asm
      {
        vaddss  xmm0, xmm8, xmm10
        vaddss  xmm1, xmm0, cs:__real@3d4ccccd
        vmovss  dword ptr [rbx+48h], xmm1
      }
      if ( v204 == _RBX->steps )
      {
        _RBX->phase = 2;
        goto LABEL_122;
      }
      v178 = v204 + 1;
    }
    _RBX->step_i = v178;
    goto LABEL_122;
  }
  if ( anim->compiledLightIndex != -1 )
  {
    world = rgp.world;
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\radiant_remote_lighting.cpp", 790, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
      __debugbreak();
    v20 = &world->primaryLights[_RBX->compiledLightIndex];
    _RDI->colorLinearSrgb.v[0] = v20->colorLinearSrgb.v[0];
    _RDI->colorLinearSrgb.v[1] = v20->colorLinearSrgb.v[1];
    _RDI->colorLinearSrgb.v[2] = v20->colorLinearSrgb.v[2];
    _RDI->intensity = v20->intensity;
  }
LABEL_124:
  _R11 = &v231;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
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

void __fastcall GetGameColorAndIntensity(const vec3_t *inColorGammaSrgb, double inIntensity, vec3_t *outColorLinearSrgb, float *outIntensity)
{
  char v17; 
  char v18; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, cs:__real@3d20e411
    vmovaps [rsp+68h+var_18], xmm6
  }
  _RDI = outIntensity;
  __asm
  {
    vmovss  dword ptr [r8], xmm0
    vmovss  xmm6, dword ptr [rcx+4]
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RBX = outColorLinearSrgb;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm9
    vmovss  dword ptr [r8+4], xmm6
    vmovss  xmm9, dword ptr [rcx+8]
    vmovaps [rsp+68h+var_48], xmm11
    vmovaps xmm11, xmm1
    vmulss  xmm0, xmm0, cs:__real@3f72a76f
    vaddss  xmm0, xmm0, cs:__real@3d55891a; X
    vmovss  xmm1, cs:__real@4019999a; Y
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vcomiss xmm6, cs:__real@3d20e411
    vmovss  dword ptr [rbx], xmm7
  }
  if ( v17 | v18 )
  {
    __asm { vmulss  xmm6, xmm6, cs:__real@3d9e8391 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@3f72a76f
      vaddss  xmm0, xmm0, cs:__real@3d55891a; X
      vmovss  xmm1, cs:__real@4019999a; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vcomiss xmm9, cs:__real@3d20e411
    vmovss  dword ptr [rbx+4], xmm6
  }
  if ( v17 | v18 )
  {
    __asm { vmulss  xmm4, xmm9, cs:__real@3d9e8391 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm9, cs:__real@3f72a76f
      vaddss  xmm0, xmm0, cs:__real@3d55891a; X
      vmovss  xmm1, cs:__real@4019999a; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm4, xmm0 }
  }
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm4
    vmulss  xmm2, xmm7, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B; vec3_t const luminanceCoefficientsBT709
    vmulss  xmm1, xmm6, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B+4; vec3_t const luminanceCoefficientsBT709
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm4, dword ptr cs:?luminanceCoefficientsBT709@@3Tvec3_t@@B+8; vec3_t const luminanceCoefficientsBT709
    vaddss  xmm0, xmm3, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( !(v17 | v18) )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm7, xmm2
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
  __asm
  {
    vmulss  xmm1, xmm11, cs:__real@43f6b0cf
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm9, [rsp+68h+var_38]
    vmovaps xmm11, [rsp+68h+var_48]
    vmovss  dword ptr [rdi], xmm1
  }
}

/*
==============
LightUpdate_AddTempLight
==============
*/
__int64 LightUpdate_AddTempLight(cg_t *cgameGlob, int compiledLightIndex, const GfxLight *lightSrc, const RadiantLight *lightRadiant)
{
  __int64 radiantLiveLightCount; 
  __int64 v11; 
  int v28; 
  int action; 
  __int64 result; 
  char v68[240]; 
  int v69; 

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
    v11 = radiantLiveLightCount;
    if ( (int)radiantLiveLightCount <= 0 )
    {
      return (unsigned int)radiantLiveLightCount;
    }
    else
    {
      __asm
      {
        vmovaps [rsp+168h+var_28], xmm6
        vmovaps [rsp+168h+var_38], xmm7
      }
      _R11 = &cgameGlob->refdef.radiantLiveLightsRaw[radiantLiveLightCount];
      _R9 = &cgameGlob->refdef.radiantLiveLightsAnim[radiantLiveLightCount];
      _RCX = &cgameGlob->refdef.dofPhysicalFocusState.focusDistance + 38 * radiantLiveLightCount;
      do
      {
        if ( *((_DWORD *)_RCX + 64) >= *((_DWORD *)_RCX + 26) )
          break;
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymm3, ymmword ptr [rcx+98h]
          vmovups ymm4, ymmword ptr [rcx+0B8h]
          vmovups ymm5, ymmword ptr [rcx+0D8h]
          vmovups ymm6, ymmword ptr [rcx+0F8h]
          vmovsd  xmm2, qword ptr [rcx+128h]
          vmovups xmm7, xmmword ptr [rcx+118h]
          vmovups ymmword ptr [rcx+98h], ymm0
          vmovups ymm1, ymmword ptr [rcx+20h]
          vmovups ymmword ptr [rcx+0B8h], ymm1
          vmovups ymm0, ymmword ptr [rcx+40h]
          vmovups ymmword ptr [rcx+0D8h], ymm0
          vmovups ymm1, ymmword ptr [rcx+60h]
          vmovups ymmword ptr [rcx+0F8h], ymm1
          vmovups xmm0, xmmword ptr [rcx+80h]
          vmovups xmmword ptr [rcx+118h], xmm0
          vmovsd  xmm1, qword ptr [rcx+90h]
          vmovsd  qword ptr [rcx+128h], xmm1
          vmovups ymmword ptr [rcx], ymm3
          vmovups ymmword ptr [rcx+20h], ymm4
          vmovups ymmword ptr [rcx+40h], ymm5
          vmovups ymmword ptr [rcx+60h], ymm6
          vmovups xmmword ptr [rcx+80h], xmm7
          vmovsd  qword ptr [rcx+90h], xmm2
          vmovups ymm0, ymmword ptr [r9-7Ch]
        }
        v28 = *((_DWORD *)_R9 + 30);
        __asm
        {
          vmovups ymm3, ymmword ptr [r9]
          vmovups ymm4, ymmword ptr [r9+20h]
          vmovups ymm5, ymmword ptr [r9+40h]
          vmovups xmm6, xmmword ptr [r9+60h]
          vmovsd  xmm2, qword ptr [r9+70h]
          vmovups ymmword ptr [r9], ymm0
          vmovups ymm1, ymmword ptr [r9-5Ch]
          vmovups ymmword ptr [r9+20h], ymm1
          vmovups ymm0, ymmword ptr [r9-3Ch]
          vmovups ymmword ptr [r9+40h], ymm0
          vmovups xmm1, xmmword ptr [r9-1Ch]
          vmovups xmmword ptr [r9+60h], xmm1
          vmovsd  xmm0, qword ptr [r9-0Ch]
          vmovsd  qword ptr [r9+70h], xmm0
        }
        *((_DWORD *)_R9 + 30) = *((_DWORD *)&_R9[-1] + 30);
        __asm
        {
          vmovups ymmword ptr [r9-7Ch], ymm3
          vmovups ymmword ptr [r9-5Ch], ymm4
          vmovups ymmword ptr [r9-3Ch], ymm5
          vmovups xmmword ptr [r9-1Ch], xmm6
          vmovsd  qword ptr [r9-0Ch], xmm2
        }
        *((_DWORD *)&_R9[-1] + 30) = v28;
        _RDX = v68;
        __asm { vmovups ymm0, ymmword ptr [r11] }
        action = _R11->action;
        __asm
        {
          vmovups ymmword ptr [rdx], ymm0
          vmovups ymm0, ymmword ptr [r11+20h]
          vmovups ymmword ptr [rdx+20h], ymm0
          vmovups ymm0, ymmword ptr [r11+40h]
          vmovups ymmword ptr [rdx+40h], ymm0
          vmovups ymm0, ymmword ptr [r11+60h]
          vmovups ymmword ptr [rdx+60h], ymm0
          vmovups ymm0, ymmword ptr [r11+80h]
          vmovups ymmword ptr [rdx+80h], ymm0
          vmovups ymm0, ymmword ptr [r11+0A0h]
          vmovups ymmword ptr [rdx+0A0h], ymm0
          vmovups ymm0, ymmword ptr [r11+0C0h]
          vmovups ymmword ptr [rdx+0C0h], ymm0
          vmovups xmm0, xmmword ptr [r11+0E0h]
          vmovups xmmword ptr [rdx+0E0h], xmm0
          vmovups ymm0, ymmword ptr [r11-0F4h]
          vmovups ymmword ptr [r11], ymm0
          vmovups ymm0, ymmword ptr [r11-0D4h]
          vmovups ymmword ptr [r11+20h], ymm0
          vmovups ymm0, ymmword ptr [r11-0B4h]
          vmovups ymmword ptr [r11+40h], ymm0
          vmovups ymm0, ymmword ptr [r11-94h]
          vmovups ymmword ptr [r11+60h], ymm0
          vmovups ymm0, ymmword ptr [r11-74h]
          vmovups ymmword ptr [r11+80h], ymm0
          vmovups ymm0, ymmword ptr [r11-54h]
          vmovups ymmword ptr [r11+0A0h], ymm0
          vmovups ymm0, ymmword ptr [r11-34h]
          vmovups ymmword ptr [r11+0C0h], ymm0
        }
        v69 = action;
        __asm
        {
          vmovups xmm0, xmmword ptr [r11-14h]
          vmovups xmmword ptr [r11+0E0h], xmm0
        }
        _RDX = v68;
        __asm { vmovups ymm0, ymmword ptr [rdx] }
        _R11->action = _R11[-1].action;
        LODWORD(radiantLiveLightCount) = radiantLiveLightCount - 1;
        __asm
        {
          vmovups ymmword ptr [r11-0F4h], ymm0
          vmovups ymm0, ymmword ptr [rdx+20h]
          vmovups ymmword ptr [r11-0D4h], ymm0
          vmovups ymm0, ymmword ptr [rdx+40h]
          vmovups ymmword ptr [r11-0B4h], ymm0
          vmovups ymm0, ymmword ptr [rdx+60h]
          vmovups ymmword ptr [r11-94h], ymm0
          vmovups ymm0, ymmword ptr [rdx+80h]
          vmovups ymmword ptr [r11-74h], ymm0
          vmovups ymm0, ymmword ptr [rdx+0A0h]
          vmovups ymmword ptr [r11-54h], ymm0
          vmovups ymm0, ymmword ptr [rdx+0C0h]
          vmovups ymmword ptr [r11-34h], ymm0
          vmovups xmm0, xmmword ptr [rdx+0E0h]
        }
        LODWORD(_RDX) = v69;
        --v11;
        __asm { vmovups xmmword ptr [r11-14h], xmm0 }
        _R11[-1].action = (unsigned int)_RDX;
        _RCX -= 38;
        --_R11;
        --_R9;
      }
      while ( v11 > 0 );
      __asm { vmovaps xmm6, [rsp+168h+var_28] }
      result = (unsigned int)radiantLiveLightCount;
      __asm { vmovaps xmm7, [rsp+168h+var_38] }
    }
  }
  return result;
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
  unsigned __int8 v6; 
  bool v16; 

  _RBX = lightOut;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RDI = lightSrc;
  __asm { vmovaps [rsp+68h+var_38], xmm7 }
  if ( (*((_DWORD *)lightSrc + 59) & 0x80u) == 0 )
    v6 = ((*((_DWORD *)lightSrc + 59) & 0x40) == 0) | 2;
  else
    v6 = 1;
  lightOut->type = v6;
  if ( (*((_BYTE *)lightSrc + 236) & 1) == 0 )
    lightOut->flags |= 0x40u;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  lightOut->entityId = lightSrc->uniqueLightID;
  lightOut->canUseShadowMap = (*((_DWORD *)lightSrc + 59) & 8) != 0;
  lightOut->needsDynamicShadows = (*((_DWORD *)lightSrc + 59) & 0x10) != 0;
  v16 = (*((_DWORD *)lightSrc + 59) & 0x100) == 0;
  lightOut->isVolumetric = BYTE1(*((_DWORD *)lightSrc + 59)) & 1;
  lightOut->uvIntensity = lightSrc->uvIntensity;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+54h]; val
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
  }
  if ( v16 )
  {
    __asm { vmovss  xmm0, cs:__real@3e4ccccd }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3dcccccd; min
      vmovaps xmm2, xmm7; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  __asm { vmovss  dword ptr [rbx+84h], xmm0 }
  _R15 = &_RBX->dir;
  _RBX->intensity = _RDI->directIntensity;
  _R14 = &_RBX->up;
  _RBX->colorLinearSrgb.v[0] = _RDI->directColorLinearSrgb.v[0];
  _RBX->colorLinearSrgb.v[1] = _RDI->directColorLinearSrgb.v[1];
  _RBX->colorLinearSrgb.v[2] = _RDI->directColorLinearSrgb.v[2];
  _RBX->dir.v[0] = _RDI->spotDir.v[0];
  _RBX->dir.v[1] = _RDI->spotDir.v[1];
  _RBX->dir.v[2] = _RDI->spotDir.v[2];
  _RBX->up.v[0] = 0.0;
  *(_QWORD *)&_RBX->up.y = 1065353216i64;
  if ( *((char *)_RDI + 236) >= 0 )
  {
    _RBX->origin.v[0] = _RDI->origin.v[0];
    _RBX->origin.v[1] = _RDI->origin.v[1];
    _RBX->origin.v[2] = _RDI->origin.v[2];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+14h]
      vmaxss  xmm1, xmm0, cs:__real@3f8147ae
      vmovss  dword ptr [rbx+44h], xmm1
    }
    _RBX->fadeOffsetRt.v[0] = _RDI->fadeOffset.v[0];
    _RBX->fadeOffsetRt.v[1] = _RDI->fadeOffset.v[1];
    R_LightFadeOffsetRuntimeEncoding(&_RBX->fadeOffsetRt, _RBX->type);
    __asm { vmovss  xmm0, dword ptr [rdi+18h] }
    _RSI = &_RBX->bulbLength;
    __asm
    {
      vmaxss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx+50h], xmm1
      vmovss  xmm0, dword ptr [rdi+1Ch]
      vucomiss xmm0, xmm6
      vmovss  dword ptr [rsi], xmm0
    }
    _RBX->bulbLength.v[1] = _RDI->bulbLength.v[1];
    _RBX->bulbLength.v[2] = _RDI->bulbLength.v[2];
    if ( !v16 )
      goto LABEL_25;
    __asm { vucomiss xmm6, dword ptr [rbx+58h] }
    if ( !v16 )
      goto LABEL_25;
    __asm { vucomiss xmm6, dword ptr [rbx+5Ch] }
    if ( v16 )
    {
      _RSI->v[0] = 0.0039215689;
      _RBX->bulbLength.v[1] = 0.0039215689;
      _RBX->bulbLength.v[2] = 0.0039215689;
    }
    else
    {
LABEL_25:
      if ( _R15 == _R14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
        __debugbreak();
      if ( _RSI == _R14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [r15+4]
        vmulss  xmm3, xmm0, dword ptr [rsi+8]
        vmovss  xmm1, dword ptr [rsi+4]
        vmulss  xmm2, xmm1, dword ptr [r15+8]
        vsubss  xmm6, xmm3, xmm2
        vmovss  dword ptr [r14], xmm6
        vmovss  xmm0, dword ptr [r15+8]
        vmulss  xmm3, xmm0, dword ptr [rsi]
        vmovss  xmm1, dword ptr [r15]
        vmulss  xmm2, xmm1, dword ptr [rsi+8]
        vsubss  xmm5, xmm3, xmm2
        vmovss  dword ptr [r14+4], xmm5
        vmovss  xmm0, dword ptr [rsi+4]
        vmulss  xmm3, xmm0, dword ptr [r15]
        vmovss  xmm1, dword ptr [r15+4]
        vmulss  xmm2, xmm1, dword ptr [rsi]
        vsubss  xmm4, xmm3, xmm2
        vmovss  dword ptr [r14+8], xmm4
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm2, xmm7, xmm0
        vmulss  xmm0, xmm6, xmm2
        vmovss  dword ptr [r14], xmm0
        vmulss  xmm1, xmm2, dword ptr [r14+4]
        vmovss  dword ptr [r14+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [r14+8]
        vmovss  dword ptr [r14+8], xmm0
      }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@3f7fbe77; max
      vmovss  xmm1, cs:__real@3a83126f; min
    }
    _RBX->cosHalfFovCollimation = _RDI->fovCollimation;
    __asm { vmovss  xmm0, dword ptr [rdi+68h]; val }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rbx+60h], xmm0
      vaddss  xmm0, xmm0, cs:__real@3a83126f
      vmaxss  xmm1, xmm0, dword ptr [rdi+64h]
      vmovss  dword ptr [rbx+64h], xmm1
    }
    _RBX->shadowSoftness = _RDI->shadowSoftness;
    _RBX->shadowBias = _RDI->shadowBias;
    _RBX->shadowArea = _RDI->shadowArea;
    _RBX->shadowNearPlaneBias = _RDI->shadowNearPlaneBias;
    _RBX->def = R_RegisterLightDef(_RDI->lightDef);
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
}

/*
==============
LightUpdate_SetTempLight
==============
*/
void LightUpdate_SetTempLight(cg_t *cgameGlob, int compiledLightIndex, int tempLightIndex, const GfxLight *lightSrc, const RadiantLight *lightRadiant)
{
  _RBX = lightRadiant;
  _RDI = tempLightIndex;
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  _R10 = &cgameGlob->refdef.radiantLiveLightsRaw[tempLightIndex];
  __asm
  {
    vmovups xmmword ptr [r10], xmm0
    vmovups xmm1, xmmword ptr [rbx+10h]
    vmovups xmmword ptr [r10+10h], xmm1
    vmovups xmm0, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [r10+20h], xmm0
    vmovups xmm1, xmmword ptr [rbx+30h]
    vmovups xmmword ptr [r10+30h], xmm1
    vmovups xmm0, xmmword ptr [rbx+40h]
    vmovups xmmword ptr [r10+40h], xmm0
    vmovups xmm1, xmmword ptr [rbx+50h]
    vmovups xmmword ptr [r10+50h], xmm1
    vmovups xmm0, xmmword ptr [rbx+60h]
    vmovups xmmword ptr [r10+60h], xmm0
    vmovups xmm0, xmmword ptr [rbx+70h]
    vmovups xmmword ptr [r10+70h], xmm0
    vmovups xmm1, xmmword ptr [rbx+80h]
    vmovups xmmword ptr [r10+80h], xmm1
    vmovups xmm0, xmmword ptr [rbx+90h]
    vmovups xmmword ptr [r10+90h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0A0h]
    vmovups xmmword ptr [r10+0A0h], xmm1
    vmovups xmm0, xmmword ptr [rbx+0B0h]
    vmovups xmmword ptr [r10+0B0h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0C0h]
    vmovups xmmword ptr [r10+0C0h], xmm1
    vmovups xmm0, xmmword ptr [rbx+0D0h]
    vmovups xmmword ptr [r10+0D0h], xmm0
    vmovups xmm1, xmmword ptr [rbx+0E0h]
    vmovups xmmword ptr [r10+0E0h], xmm1
  }
  _R10->action = lightRadiant->action;
  __asm { vmovups ymm0, ymmword ptr [r9] }
  _RAX = 152i64 * tempLightIndex;
  __asm
  {
    vmovups ymmword ptr [rax+rcx+6C68h], ymm0
    vmovups ymm1, ymmword ptr [r9+20h]
    vmovups ymmword ptr [rax+rcx+6C88h], ymm1
    vmovups ymm0, ymmword ptr [r9+40h]
    vmovups ymmword ptr [rax+rcx+6CA8h], ymm0
    vmovups ymm1, ymmword ptr [r9+60h]
    vmovups ymmword ptr [rax+rcx+6CC8h], ymm1
    vmovups xmm0, xmmword ptr [r9+80h]
    vmovups xmmword ptr [rax+rcx+6CE8h], xmm0
    vmovsd  xmm1, qword ptr [r9+90h]
    vmovsd  qword ptr [rax+rcx+6CF8h], xmm1
    vmovups ymm0, ymmword ptr [rbx+0ACh]
    vmovups ymmword ptr [rdi+rcx+13268h], ymm0
    vmovups ymm1, ymmword ptr [rbx+0CCh]
    vmovups ymmword ptr [rdi+rcx+13288h], ymm1
  }
  cgameGlob->refdef.radiantLiveLightsAnim[_RDI].compiledLightIndex = compiledLightIndex;
  *((_DWORD *)&cgameGlob->refdef.radiantLiveLightsAnim[_RDI] + 30) ^= (*((_DWORD *)&cgameGlob->refdef.radiantLiveLightsAnim[_RDI] + 30) ^ *((_DWORD *)lightRadiant + 59)) & 1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rcx+65ECh]
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  dword ptr [rdi+rcx+132ACh], xmm1
  }
  cgameGlob->refdef.radiantLiveLightsAnim[_RDI].waitTime = 0.0;
  cgameGlob->refdef.radiantLiveLightsAnim[_RDI].phase = -1;
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

