/*
==============
SND_DoorPropagationWorker
==============
*/

void __fastcall SND_DoorPropagationWorker(const void *const cmdInfo)
{
  ?SND_DoorPropagationWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SND_UpdatePropagation
==============
*/

void __fastcall SND_UpdatePropagation(const SndPropagationWorkerCmd *const cmd)
{
  ?SND_UpdatePropagation@@YAXQEBUSndPropagationWorkerCmd@@@Z(cmd);
}

/*
==============
SND_RecalcPropagation
==============
*/

void SND_RecalcPropagation(void)
{
  ?SND_RecalcPropagation@@YAXXZ();
}

/*
==============
SND_UpdateDoorPropagation
==============
*/

void __fastcall SND_UpdateDoorPropagation(const SndDoorPropagationWorkerCmd *const cmd)
{
  ?SND_UpdateDoorPropagation@@YAXQEBUSndDoorPropagationWorkerCmd@@@Z(cmd);
}

/*
==============
SND_PropagationInit
==============
*/

void SND_PropagationInit(void)
{
  ?SND_PropagationInit@@YAXXZ();
}

/*
==============
SND_PropagationWorker
==============
*/

void __fastcall SND_PropagationWorker(const void *const cmdInfo)
{
  ?SND_PropagationWorker@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SND_DrawPropagationDebug
==============
*/

void __fastcall SND_DrawPropagationDebug(LocalClientNum_t localClientNum)
{
  ?SND_DrawPropagationDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DebugPrintPath
==============
*/
void DebugPrintPath(const SndPropagationPathWorkspace *workSpace, const __int16 pathEnd, const __int16 listener)
{
  __int16 v9; 
  __int16 v11; 
  char v17; 
  const char *v19; 
  const vec4_t *v20; 
  __int64 v21; 
  __int64 v22; 
  const vec4_t *v23; 
  int v28; 
  vec3_t outCenter; 
  void *retaddr; 

  _R11 = &retaddr;
  v9 = -1;
  v11 = pathEnd;
  if ( pathEnd != -1 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovss  xmm7, cs:__real@3d4ccccd
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovss  xmm8, cs:__real@3ae56042
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovss  xmm9, cs:__real@41200000
    }
    do
    {
      *(double *)&_XMM0 = SND_DistSqToNearestListener(&cm.mapEnts->audioPropNodes[v11].position);
      __asm
      {
        vsqrtss xmm1, xmm0, xmm0
        vcomiss xmm1, xmm9
      }
      if ( v17 )
        __asm { vmovaps xmm6, xmm7 }
      else
        __asm { vmulss  xmm6, xmm1, xmm8 }
      v19 = j_va("%d", (unsigned int)v11);
      v20 = &colorMagenta;
      if ( listener != v11 )
        v20 = &colorGreen;
      __asm { vmovss  [rsp+0D8h+var_B8], xmm6 }
      CL_AddDebugStarWithText(&cm.mapEnts->audioPropNodes[v11].position, v20, &colorWhite, v19, *(float *)&v28, 0, 1, 0);
      if ( v9 > -1 )
      {
        v21 = workSpace->cameFromPortal[v9];
        v22 = v9;
        if ( (_DWORD)v21 == -1 )
        {
          v23 = &colorWhite;
        }
        else
        {
          CG_GetTriggerCenter(LOCAL_CLIENT_0, v21, &outCenter);
          if ( g_audioTriggerDisabled[v21] )
          {
            CL_AddDebugStar(&outCenter, &colorRed, 0, 1, 0);
            v23 = &colorLtRed;
          }
          else
          {
            CL_AddDebugStar(&outCenter, &colorYellow, 0, 1, 0);
            v23 = &colorLtCyan;
          }
        }
        CL_AddDebugLine(&cm.mapEnts->audioPropNodes[v22].position, &cm.mapEnts->audioPropNodes[v11].position, v23, 0, 1, 0);
      }
      v9 = v11;
      v11 = workSpace->cameFrom[v11];
    }
    while ( v11 != -1 );
    __asm
    {
      vmovaps xmm9, [rsp+0D8h+var_78]
      vmovaps xmm8, [rsp+0D8h+var_68]
      vmovaps xmm7, [rsp+0D8h+var_58]
      vmovaps xmm6, [rsp+0D8h+var_48]
    }
  }
}

/*
==============
SND_DoorPropagationWorker
==============
*/
void SND_DoorPropagationWorker(const void *const cmdInfo)
{
  if ( SND_Active() )
    SND_UpdateDoorPropagation((const SndDoorPropagationWorkerCmd *const)cmdInfo);
}

/*
==============
SND_DrawPropagationDebug
==============
*/
void SND_DrawPropagationDebug(LocalClientNum_t localClientNum)
{
  __int64 v6; 
  bool v7; 
  __int16 NodeForPosition; 
  GfxFont *smallDevFont; 
  const char *s; 
  const dvar_t *v20; 
  MapEnts *mapEnts; 
  __int64 v22; 
  unsigned __int16 v34; 
  __int64 v37; 
  char v42; 
  const char *v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  AudioPropagationNode *v60; 
  const dvar_t *v61; 
  const vec4_t *v62; 
  __int64 v65; 
  unsigned __int16 v69; 
  ClientTriggerModel *models; 
  unsigned __int16 hullCount; 
  __int64 v86; 
  const dvar_t *v95; 
  float fmt; 
  float fmta; 
  int v107; 
  int v108; 
  signed int firstHull; 
  vec3_t outOrigin; 
  vec3_t mins; 
  vec3_t origin; 
  vec4_t v114; 
  vec3_t outCenter; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v6 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 775, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      _RDI = &scrPlaceViewDisplay[v6];
      goto LABEL_11;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v7 )
      __debugbreak();
  }
  _RDI = &scrPlaceFull;
LABEL_11:
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vsubss  xmm1, xmm0, dword ptr [rdi+28h]
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vaddss  xmm7, xmm2, dword ptr [rdi+28h]
    vmovss  xmm6, dword ptr [rdi+2Ch]
  }
  SND_GetListenerOrigin((const LocalClientNum_t)v6, &outOrigin);
  NodeForPosition = SND_PropagationFindNodeForPosition(&outOrigin);
  smallDevFont = cls.smallDevFont;
  s = j_va("Current listener node: %d", (unsigned int)NodeForPosition);
  __asm
  {
    vmovss  xmm3, cs:__real@3f0ccccd; xScale
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm7; x
    vmovss  dword ptr [rsp+140h+fmt], xmm3
  }
  CG_DrawDevString(_RDI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, s, &colorGreen, 5, smallDevFont);
  v20 = DCONST_DVARINT_snd_debugPropagation;
  if ( !DCONST_DVARINT_snd_debugPropagation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.integer > 1 )
  {
    mapEnts = cm.mapEnts;
    v22 = 0i64;
    v107 = 0;
    if ( cm.mapEnts->numAudioPropNodes )
    {
      __asm
      {
        vmovss  xmm7, cs:__real@3d4ccccd
        vmovaps [rsp+140h+var_58+8], xmm8
        vmovss  xmm8, cs:__real@3ae56042
        vmovaps [rsp+140h+var_68+8], xmm9
        vmovss  xmm9, cs:__real@41200000
      }
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+140h+outOrigin]
          vsubss  xmm3, xmm0, dword ptr [rax+rcx*4]
          vmovss  xmm1, dword ptr [rsp+140h+outOrigin+4]
          vsubss  xmm2, xmm1, dword ptr [rax+rcx*4+4]
          vmovss  xmm0, dword ptr [rsp+140h+outOrigin+8]
          vsubss  xmm4, xmm0, dword ptr [rax+rcx*4+8]
        }
        _RBX = DCONST_DVARFLT_snd_debugPropagationCullDist;
        _R14 = (__int64)&mapEnts->audioPropNodes[v22];
        v34 = *(_WORD *)(_R14 + 12);
        __asm
        {
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
        }
        v37 = (__int64)&mapEnts->audioPropEdges[*(unsigned int *)(_R14 + 16)];
        __asm
        {
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm6, xmm2, xmm2
        }
        if ( !DCONST_DVARFLT_snd_debugPropagationCullDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCullDist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vcomiss xmm6, dword ptr [rbx+28h] }
        if ( v42 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14]
            vsubss  xmm3, xmm0, dword ptr [rsp+140h+outOrigin]
            vmovss  xmm1, dword ptr [r14+4]
            vsubss  xmm2, xmm1, dword ptr [rsp+140h+outOrigin+4]
            vmovss  xmm0, dword ptr [r14+8]
            vsubss  xmm4, xmm0, dword ptr [rsp+140h+outOrigin+8]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcomiss xmm1, xmm9
          }
          if ( v42 )
            __asm { vmovaps xmm6, xmm7 }
          else
            __asm { vmulss  xmm6, xmm1, xmm8 }
          v56 = j_va("%d", (unsigned int)v22);
          __asm { vmovss  dword ptr [rsp+140h+fmt], xmm6 }
          CL_AddDebugStarWithText((const vec3_t *)_R14, &colorGreen, &colorWhite, v56, fmta, 0, 1, 0);
          v57 = 0i64;
          v58 = v34;
          if ( v34 )
          {
            do
            {
              v59 = *(__int16 *)(v37 + 4 * v57 + 2);
              v60 = &cm.mapEnts->audioPropNodes[*(__int16 *)(v37 + 4 * v57)];
              if ( (_DWORD)v59 == -1 || g_audioTriggerDisabled[v59] )
              {
                v61 = DCONST_DVARBOOL_snd_debugPropagationCull;
                if ( !DCONST_DVARBOOL_snd_debugPropagationCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCull") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v61);
                v62 = &colorWhite;
              }
              else
              {
                v61 = DCONST_DVARBOOL_snd_debugPropagationCull;
                if ( !DCONST_DVARBOOL_snd_debugPropagationCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCull") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v61);
                v62 = &colorLtCyan;
              }
              CL_AddDebugLine((const vec3_t *)_R14, &v60->position, v62, v61->current.color[0], 1, 0);
              ++v57;
            }
            while ( v57 < v58 );
            LODWORD(v22) = v107;
          }
        }
        mapEnts = cm.mapEnts;
        v22 = (unsigned int)(v22 + 1);
        v107 = v22;
      }
      while ( (unsigned int)v22 < cm.mapEnts->numAudioPropNodes );
      LODWORD(v6) = localClientNum;
      __asm
      {
        vmovaps xmm9, [rsp+140h+var_68+8]
        vmovaps xmm8, [rsp+140h+var_58+8]
      }
    }
    v65 = 0i64;
    v108 = 0;
    if ( mapEnts->clientTrigger.trigger.count )
    {
      __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
      do
      {
        _R14 = 3 * v65;
        _R12 = mapEnts->clientTrigger.origins;
        v69 = mapEnts->clientTrigger.triggerType[v65];
        if ( (v69 & 0x180) != 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+140h+outOrigin]
            vsubss  xmm3, xmm0, dword ptr [r12+r14*4]
            vmovss  xmm1, dword ptr [rsp+140h+outOrigin+4]
            vsubss  xmm2, xmm1, dword ptr [r12+r14*4+4]
            vmovss  xmm0, dword ptr [rsp+140h+outOrigin+8]
            vsubss  xmm4, xmm0, dword ptr [r12+r14*4+8]
          }
          _RDI = DCONST_DVARFLT_snd_debugPropagationCullDist;
          __asm
          {
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm7, xmm2, xmm2
          }
          if ( !DCONST_DVARFLT_snd_debugPropagationCullDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCullDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vcomiss xmm7, dword ptr [rdi+28h] }
          if ( v42 )
          {
            models = cm.mapEnts->clientTrigger.trigger.models;
            hullCount = models[v65].hullCount;
            firstHull = models[v65].firstHull;
            if ( (v69 & 0x100) != 0 )
            {
              __asm { vmovups xmm0, xmmword ptr cs:?colorRedHeat@@3Tvec4_t@@B; vec4_t const colorRedHeat }
            }
            else if ( g_audioTriggerDisabled[v65] )
            {
              __asm { vmovups xmm0, xmmword ptr cs:?colorPurple@@3Tvec4_t@@B; vec4_t const colorPurple }
            }
            else
            {
              __asm { vmovups xmm0, xmmword ptr cs:?colorLtCyan@@3Tvec4_t@@B; vec4_t const colorLtCyan }
            }
            __asm { vmovups xmmword ptr [rbp+40h+var_B0], xmm0 }
            CG_GetTriggerCenter((LocalClientNum_t)v6, v65, &outCenter);
            v86 = hullCount;
            if ( hullCount )
            {
              _RDI = firstHull;
              do
              {
                __asm { vmovss  xmm0, dword ptr [r12+r14*4] }
                _RBX = cm.mapEnts->clientTrigger.trigger.hulls;
                __asm
                {
                  vaddss  xmm1, xmm0, dword ptr [rdi+rbx]
                  vmovss  dword ptr [rbp+40h+origin], xmm1
                  vmovss  xmm2, dword ptr [rdi+rbx+4]
                  vaddss  xmm0, xmm2, dword ptr [r12+r14*4+4]
                  vmovss  dword ptr [rbp+40h+origin+4], xmm0
                  vmovss  xmm1, dword ptr [rdi+rbx+8]
                  vaddss  xmm2, xmm1, dword ptr [r12+r14*4+8]
                  vmovss  dword ptr [rbp+40h+origin+8], xmm2
                }
                AxisClear(&axis);
                v95 = DCONST_DVARBOOL_snd_debugPropagationCull;
                _RBX = &_RBX[_RDI].triggerSpaceBounds.halfSize;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx]
                  vxorps  xmm1, xmm0, xmm6
                  vmovss  dword ptr [rsp+140h+mins], xmm1
                  vmovss  xmm2, dword ptr [rbx+4]
                  vxorps  xmm0, xmm2, xmm6
                  vmovss  dword ptr [rsp+140h+mins+4], xmm0
                  vmovss  xmm1, dword ptr [rbx+8]
                  vxorps  xmm2, xmm1, xmm6
                  vmovss  dword ptr [rsp+140h+mins+8], xmm2
                }
                if ( !DCONST_DVARBOOL_snd_debugPropagationCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagationCull") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v95);
                CL_AddDebugBox(&axis, &origin, &mins, _RBX, &v114, v95->current.color[0], 1, 0);
                ++_RDI;
                --v86;
              }
              while ( v86 );
              LODWORD(v65) = v108;
            }
            CL_AddDebugStar(&outCenter, &v114, 0, 1, 0);
          }
          mapEnts = cm.mapEnts;
        }
        LODWORD(v6) = localClientNum;
        v65 = (unsigned int)(v65 + 1);
        v108 = v65;
      }
      while ( (unsigned int)v65 < mapEnts->clientTrigger.trigger.count );
    }
  }
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+140h+var_38+8]
    vmovaps xmm7, [rsp+140h+var_48+8]
  }
}

/*
==============
SND_PropagationFindEdges
==============
*/
void SND_PropagationFindEdges(Physics_WorldId worldId, unsigned int startNodeIndex, AudioPropagationEdge *edgeArray, AudioPropagationNode *audioPropNodes, const unsigned int numAudioPropNodes)
{
  signed __int64 v5; 
  void *v8; 
  unsigned int v9; 
  Physics_WorldId v10; 
  scr_string_t String; 
  scr_string_t v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  int *v18; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  AudioPropagationNode *v21; 
  AudioPropagationNode *v22; 
  __int64 v23; 
  int v24; 
  int numEdges; 
  __int64 v39; 
  AudioPropagationEdge *v40; 
  int v41; 
  __int64 v42; 
  AudioPropagationEdge *v43; 
  hkMemoryAllocator *v44; 
  hkMemoryAllocator *v45; 
  __int64 parent; 
  __int64 siblings; 
  int inoutNumIgnoreEntities; 
  Physics_WorldId worldIda; 
  AudioPropagationNode *v52; 
  AudioPropagationEdge *v53; 
  HavokPhysics_CollisionQueryResult *v54; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v56; 
  __int64 v57; 
  vec3_t outIntersectPos; 
  int inoutIgnoreEntities[2048]; 

  v8 = alloca(v5);
  v57 = -2i64;
  __asm { vmovaps [rsp+2150h+var_50], xmm6 }
  v52 = audioPropNodes;
  v53 = edgeArray;
  v9 = startNodeIndex;
  v10 = worldId;
  worldIda = worldId;
  memset_0(inoutIgnoreEntities, 0, sizeof(inoutIgnoreEntities));
  inoutNumIgnoreEntities = 1;
  SND_PropagationIgnoreDynamicDoors(inoutIgnoreEntities, &inoutNumIgnoreEntities);
  String = SL_FindString("bake_shadow_brush");
  v12 = SL_FindString("bake_shadow_single_brush");
  v13 = 0;
  v14 = inoutNumIgnoreEntities;
  if ( level.num_entities > 0 )
  {
    v15 = 0i64;
    v16 = 0i64;
    do
    {
      if ( v13 >= 0x800 )
      {
        LODWORD(siblings) = 2048;
        LODWORD(parent) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", parent, siblings) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v16].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v15] )
      {
        if ( v13 >= 0x800 )
        {
          LODWORD(siblings) = 2048;
          LODWORD(parent) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", parent, siblings) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( String && g_entities[v16].targetname == String || v12 && g_entities[v16].targetname == v12 )
          inoutIgnoreEntities[v14++] = v13;
      }
      ++v13;
      ++v15;
      ++v16;
    }
    while ( (int)v13 < level.num_entities );
    v9 = startNodeIndex;
    v10 = worldIda;
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v56, v14, 0);
  v17 = 0;
  if ( v14 > 0 )
  {
    v18 = inoutIgnoreEntities;
    do
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v56, v17++, *v18++, 1, 1, 0, 1, 1);
    while ( v17 < v14 );
  }
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+2050h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 2097153;
  extendedData.ignoreBodies = &v56;
  AnyResult = PhysicsQuery_GetAnyResult(v10);
  v54 = AnyResult;
  if ( !AnyResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 242, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  v21 = v52;
  v22 = &v52[v9];
  v23 = 0i64;
  if ( numAudioPropNodes )
  {
    v24 = 0;
    __asm { vmovss  xmm6, cs:__real@4a742400 }
    do
    {
      if ( (_DWORD)v23 != v9 )
      {
        _RDI = &v21[v23];
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vsubss  xmm3, xmm0, dword ptr [r14]
          vmovss  xmm1, dword ptr [rdi+4]
          vsubss  xmm2, xmm1, dword ptr [r14+4]
          vmovss  xmm0, dword ptr [rdi+8]
          vsubss  xmm4, xmm0, dword ptr [r14+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm6
        }
        if ( (unsigned int)v23 <= v9 )
        {
          HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
          Physics_Raycast(worldIda, &v22->position, &_RDI->position, &extendedData, AnyResult);
          if ( !HavokPhysics_CollisionQueryResult::HasHit(AnyResult) && !CG_DoesLineSegmentIntersectTrigger(LOCAL_CLIENT_0, CLIENT_TRIGGER_AUDIO_PROP_OCCLUDER, &v22->position, &_RDI->position, (unsigned int *)&inoutNumIgnoreEntities, &outIntersectPos) )
          {
            numEdges = v22->numEdges;
            v22->numEdges = numEdges + 1;
            v39 = (int)(numEdges + numAudioPropNodes * startNodeIndex);
            if ( ((unsigned int)v23 > 0x7FFFFFFF || (unsigned int)(v23 + 0x8000) > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v23, "unsigned", (unsigned int)v23) )
              __debugbreak();
            v40 = v53;
            v53[v39].neighbor = v23;
            v40[v39].portalIndex = -1;
            if ( CG_DoesLineSegmentIntersectTrigger(LOCAL_CLIENT_0, CLIENT_TRIGGER_AUDIO_PROP_PORTAL, &v22->position, &_RDI->position, (unsigned int *)&inoutNumIgnoreEntities, &outIntersectPos) )
              v40[v39].portalIndex = truncate_cast<short,unsigned int>(inoutNumIgnoreEntities);
            v41 = _RDI->numEdges;
            _RDI->numEdges = v41 + 1;
            v42 = v24 + v41;
            v9 = startNodeIndex;
            if ( (startNodeIndex > 0x7FFFFFFF || startNodeIndex + 0x8000 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)startNodeIndex, "unsigned", startNodeIndex) )
              __debugbreak();
            v43 = v53;
            v53[v42].neighbor = startNodeIndex;
            v43[v42].portalIndex = v43[v39].portalIndex;
            AnyResult = v54;
            v21 = v52;
            goto LABEL_51;
          }
          v21 = v52;
        }
        v9 = startNodeIndex;
      }
LABEL_51:
      v23 = (unsigned int)(v23 + 1);
      v24 += numAudioPropNodes;
    }
    while ( (unsigned int)v23 < numAudioPropNodes );
  }
  v44 = hkMemHeapAllocator();
  v56.m_ignoreBodies.m_size = 0;
  if ( v56.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v44, v56.m_ignoreBodies.m_data, 4, v56.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v56.m_ignoreBodies.m_data = NULL;
  v56.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v45 = hkMemHeapAllocator();
  v56.m_ignoreEntities.m_size = 0;
  if ( v56.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v45, v56.m_ignoreEntities.m_data, 8, v56.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  __asm { vmovaps xmm6, [rsp+2150h+var_50] }
}

/*
==============
SND_PropagationFindNodeForPosition
==============
*/
__int64 SND_PropagationFindNodeForPosition(const vec3_t *position)
{
  MapEnts *mapEnts; 
  unsigned __int16 v5; 
  __int16 v6; 
  unsigned int numAudioPropNodes; 
  unsigned __int16 v8; 
  __int64 v10; 
  bool v11; 
  __int64 result; 

  mapEnts = cm.mapEnts;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovss  xmm6, cs:__real@7f800000
    vmovaps [rsp+98h+var_48], xmm7
  }
  v5 = -1;
  v6 = 0;
  while ( 1 )
  {
    numAudioPropNodes = mapEnts->numAudioPropNodes;
    v8 = v6;
    __asm { vmovaps xmm7, xmm6 }
    if ( numAudioPropNodes > 0x7FFFFFFF || numAudioPropNodes + 0x8000 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)numAudioPropNodes, "unsigned", numAudioPropNodes) )
        __debugbreak();
      mapEnts = cm.mapEnts;
    }
    if ( v6 >= (__int16)numAudioPropNodes )
      break;
    v10 = v6;
    v11 = (unsigned __int16)v6 < (unsigned __int16)numAudioPropNodes || v6 == -1;
    ++v6;
    _RCX = 5 * v10;
    _RAX = mapEnts->audioPropNodes;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rcx*4]
      vsubss  xmm3, xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [rax+rcx*4+4]
      vmovss  xmm0, dword ptr [rax+rcx*4+8]
      vsubss  xmm2, xmm1, dword ptr [r14+4]
      vsubss  xmm4, xmm0, dword ptr [r14+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm5, xmm3, xmm0
      vcomiss xmm7, xmm5
      vminss  xmm6, xmm5, xmm6
    }
    if ( v11 )
      v8 = v5;
    v5 = v8;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  result = v5;
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
  return result;
}

/*
==============
SND_PropagationFindPortalLocation
==============
*/
bool SND_PropagationFindPortalLocation(__int16 reverbTrigger, const __int16 listener, const vec3_t *listenerPos, __int16 emitter, vec3_t *outPortalLocation)
{
  vec3_t *v8; 
  __int16 v10; 
  __int16 v13; 
  __int64 numAudioPropNodes; 
  float *fScore; 
  __int16 *cameFromPortal; 
  unsigned int v17; 
  int v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int numValues; 
  MapEnts *mapEnts; 
  __int16 v24; 
  unsigned __int16 v25; 
  bool v27; 
  int v30; 
  int v31; 
  __int64 v32; 
  unsigned int v33; 
  int v34; 
  AudioPropagationNode *audioPropNodes; 
  __int64 v36; 
  __int64 numEdges; 
  __int64 v38; 
  int v40; 
  __int64 v41; 
  unsigned int v42; 
  MapEnts *v57; 
  const dvar_t *v70; 
  bool result; 
  const dvar_t *v72; 
  SndPropagationPathWorkspace workSpace; 

  v8 = outPortalLocation;
  _R14 = listenerPos;
  v10 = listener;
  memset_0(&workSpace.openSet, 0, 0x408ui64);
  v13 = -1;
  numAudioPropNodes = cm.mapEnts->numAudioPropNodes;
  if ( (_DWORD)numAudioPropNodes )
  {
    fScore = workSpace.fScore;
    cameFromPortal = workSpace.cameFromPortal;
    do
    {
      *(cameFromPortal - 4096) = -1;
      ++fScore;
      *cameFromPortal++ = -1;
      *(fScore - 4097) = INFINITY;
      *(fScore - 1) = INFINITY;
      --numAudioPropNodes;
    }
    while ( numAudioPropNodes );
  }
  workSpace.reverbTrigger = reverbTrigger;
  v17 = 0;
  workSpace.gScore[emitter] = 0.0;
  workSpace.fScore[emitter] = 1.0;
  v18 = 1 << (emitter & 0x1F);
  workSpace.openList[workSpace.openSet.numValues] = emitter;
  v19 = (__int64)emitter >> 5;
  v20 = workSpace.openSet.array[v19];
  if ( (v18 & v20) != 0 )
  {
    numValues = workSpace.openSet.numValues;
  }
  else
  {
    workSpace.openSet.array[v19] = v20 | v18;
    numValues = ++workSpace.openSet.numValues;
  }
  __asm
  {
    vmovaps [rsp+0E4F0h+var_40], xmm6
    vmovaps [rsp+0E4F0h+var_50], xmm7
    vmovaps [rsp+0E4F0h+var_60], xmm8
  }
  if ( numValues )
  {
    __asm { vmovss  xmm8, cs:__real@7f800000 }
    mapEnts = cm.mapEnts;
    while ( 1 )
    {
      v24 = -1;
      v25 = 0;
      __asm { vmovaps xmm1, xmm8 }
      v27 = numValues == 0;
      do
      {
        _RCX = workSpace.openList[v25];
        __asm
        {
          vmovss  xmm0, [rbp+rcx*4+0E3F0h+workSpace.fScore]
          vcomiss xmm1, xmm0
          vminss  xmm1, xmm0, xmm1
        }
        if ( v27 )
          LOWORD(_RCX) = v24;
        ++v25;
        v24 = _RCX;
        v27 = v25 <= numValues;
      }
      while ( v25 < numValues );
      if ( (_WORD)_RCX == v10 )
        break;
      v30 = 0;
      while ( workSpace.openList[v30] != (_WORD)_RCX )
      {
        if ( ++v30 >= numValues )
          goto LABEL_19;
      }
      workSpace.openList[v30] = workSpace.openList[numValues - 1];
      numValues = workSpace.openSet.numValues;
LABEL_19:
      v31 = 1 << (_RCX & 0x1F);
      v32 = (__int64)(__int16)_RCX >> 5;
      v33 = workSpace.openSet.array[v32];
      if ( (v31 & v33) != 0 )
      {
        workSpace.openSet.array[v32] = v33 & ~v31;
        numValues = --workSpace.openSet.numValues;
      }
      v34 = *(_DWORD *)&workSpace.openList[2 * v32 - 256];
      if ( (v31 & v34) == 0 )
      {
        *(_DWORD *)&workSpace.openList[2 * v32 - 256] = v34 | v31;
        ++workSpace.closedSet.numValues;
        numValues = workSpace.openSet.numValues;
      }
      audioPropNodes = mapEnts->audioPropNodes;
      v36 = 0i64;
      numEdges = audioPropNodes[v24].numEdges;
      v38 = (__int64)&mapEnts->audioPropEdges[audioPropNodes[v24].edgeStartIndex];
      if ( audioPropNodes[v24].numEdges )
      {
        do
        {
          _R11 = *(__int16 *)(v38 + 4 * v36);
          v40 = 1 << (*(_WORD *)(v38 + 4 * v36) & 0x1F);
          v41 = _R11 >> 5;
          if ( (v40 & *(_DWORD *)&workSpace.openList[2 * (_R11 >> 5) - 256]) == 0 )
          {
            workSpace.openList[numValues] = *(_WORD *)(v38 + 4 * v36);
            v42 = workSpace.openSet.array[v41];
            if ( (v40 & v42) != 0 )
            {
              numValues = workSpace.openSet.numValues;
            }
            else
            {
              workSpace.openSet.array[v41] = v42 | v40;
              numValues = ++workSpace.openSet.numValues;
            }
            mapEnts = cm.mapEnts;
            _RAX = 5 * _R11;
            _RCX = cm.mapEnts->audioPropNodes;
            __asm
            {
              vmovss  xmm6, dword ptr [rcx+rax*4+4]
              vsubss  xmm0, xmm6, dword ptr [rcx+rsi*4+4]
              vmovss  xmm4, dword ptr [rcx+rax*4]
              vsubss  xmm2, xmm4, dword ptr [rcx+rsi*4]
              vmovss  xmm7, dword ptr [rcx+rax*4+8]
              vsubss  xmm3, xmm7, dword ptr [rcx+rsi*4+8]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vaddss  xmm5, xmm2, [rbp+r12*4+0E3F0h+workSpace.gScore]
              vcomiss xmm5, [rbp+r11*4+0E3F0h+workSpace.gScore]
            }
          }
          ++v36;
        }
        while ( v36 < numEdges );
        v17 = 0;
      }
      v10 = listener;
      v13 = -1;
      if ( !numValues )
      {
        _R14 = listenerPos;
        v8 = outPortalLocation;
        goto LABEL_33;
      }
    }
    v72 = DCONST_DVARINT_snd_debugPropagation;
    if ( !DCONST_DVARINT_snd_debugPropagation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagation") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v72);
    if ( v72->current.integer == 1 && Sys_IsMainThread() )
      DebugPrintPath(&workSpace, v24, v10);
    result = SND_PropagationGetPortalLocation(&workSpace, v24, listenerPos, outPortalLocation);
  }
  else
  {
LABEL_33:
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_PropagationFindClosestPortal");
    v57 = cm.mapEnts;
    __asm { vmovss  xmm6, cs:__real@7f7fffff }
    if ( cm.mapEnts->numAudioPropNodes )
    {
      do
      {
        if ( workSpace.cameFromPortal[v17] != -1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14]
            vmovss  xmm1, dword ptr [r14+4]
            vsubss  xmm3, xmm0, dword ptr [rax+rcx*4]
            vmovss  xmm0, dword ptr [r14+8]
            vsubss  xmm2, xmm1, dword ptr [rax+rcx*4+4]
            vsubss  xmm4, xmm0, dword ptr [rax+rcx*4+8]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm5, xmm3, xmm0
            vcomiss xmm5, xmm6
          }
          if ( workSpace.cameFromPortal[v17] != -1 )
          {
            __asm { vmovaps xmm6, xmm5 }
            if ( v17 > 0x7FFFFFFF || v17 + 0x8000 > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v17, "unsigned", v17) )
                __debugbreak();
              v57 = cm.mapEnts;
            }
            v13 = v17;
          }
        }
        ++v17;
      }
      while ( v17 < v57->numAudioPropNodes );
      v10 = listener;
      v8 = outPortalLocation;
    }
    Sys_ProfEndNamedEvent();
    if ( v13 <= -1 )
    {
      result = 0;
    }
    else
    {
      v70 = DCONST_DVARINT_snd_debugPropagation;
      if ( !DCONST_DVARINT_snd_debugPropagation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_debugPropagation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v70);
      if ( v70->current.integer == 1 && Sys_IsMainThread() )
        DebugPrintPath(&workSpace, v13, v10);
      result = SND_PropagationGetPortalLocation(&workSpace, v13, _R14, v8);
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+0E4F0h+var_60]
    vmovaps xmm7, [rsp+0E4F0h+var_50]
    vmovaps xmm6, [rsp+0E4F0h+var_40]
  }
  return result;
}

/*
==============
SND_PropagationGetPortalLocation
==============
*/
bool SND_PropagationGetPortalLocation(const SndPropagationPathWorkspace *workSpace, __int16 pathEnd, const vec3_t *listenerPos, vec3_t *outPortalLocation)
{
  __int16 v9; 
  char v11; 
  __int64 v12; 
  __int16 v13; 
  bool result; 

  v9 = -1;
  _RDI = outPortalLocation;
  v11 = 0;
  v12 = pathEnd;
  if ( workSpace->cameFrom[pathEnd] == -1 )
    return 0;
  do
  {
    v13 = workSpace->cameFromPortal[v12];
    if ( v13 != -1 )
    {
      if ( g_audioTriggerDisabled[v13] )
        return 0;
      if ( v9 == -1 )
      {
        v9 = workSpace->cameFromPortal[v12];
        v11 = 1;
      }
    }
    v12 = workSpace->cameFrom[v12];
  }
  while ( workSpace->cameFrom[v12] != -1 );
  if ( !v11 || !CG_GetTriggerCenter(LOCAL_CLIENT_0, v9, _RDI) )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm3, xmm0, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm4, xmm0, dword ptr [rbp+8]
    vmovaps [rsp+0E8h+var_28], xmm6
    vmulss  xmm2, xmm1, xmm1
    vmovaps [rsp+0E8h+var_38], xmm7
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm4, cs:__real@461c4000
    vmovaps [rsp+0E8h+var_48], xmm8
    vmovaps [rsp+0E8h+var_68], xmm10
  }
  result = 1;
  __asm
  {
    vmovaps xmm8, [rsp+0E8h+var_48]
    vmovaps xmm7, [rsp+0E8h+var_38]
    vmovaps xmm6, [rsp+0E8h+var_28]
    vmovaps xmm10, [rsp+0E8h+var_68]
  }
  return result;
}

/*
==============
SND_PropagationIgnoreDynamicDoors
==============
*/
void SND_PropagationIgnoreDynamicDoors(int *inoutIgnoreEntities, int *inoutNumIgnoreEntities)
{
  int *v2; 
  scr_string_t v4; 
  scr_string_t v5; 
  unsigned int v6; 
  scr_string_t v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  gentity_s *v11; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  gentity_s *v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  scr_string_t v25; 
  scr_string_t String; 

  v2 = inoutIgnoreEntities;
  String = SL_FindString("dynamic_door");
  v4 = String;
  v5 = SL_FindString("lean_dynamic_door");
  v6 = 0;
  v7 = v5;
  v25 = v5;
  if ( level.num_entities > 0 )
  {
    v8 = 0i64;
    v9 = 0i64;
    v23 = v5;
    v22 = 0i64;
    v10 = v5;
    do
    {
      if ( v6 >= 0x800 )
      {
        LODWORD(v21) = 2048;
        LODWORD(v20) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( *(&g_entities->r.isInUse + v9) != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v8] )
      {
        if ( v6 >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v20) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( (v11 = g_entities, v4) && *(scr_string_t *)((char *)&g_entities->targetname + v9) == v4 || v10 && *(scr_string_t *)((char *)&g_entities->targetname + v9) == v7 )
        {
          v2[(*inoutNumIgnoreEntities)++] = v6;
          v12 = *(scr_string_t *)((char *)&v11->target + v9);
          if ( v12 )
          {
            v13 = 0;
            v14 = 0i64;
            if ( level.num_entities <= 0 )
            {
LABEL_45:
              v2 = inoutIgnoreEntities;
            }
            else
            {
              v15 = 0i64;
              while ( 1 )
              {
                if ( v13 >= 0x800 )
                {
                  LODWORD(v21) = 2048;
                  LODWORD(v20) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
                    __debugbreak();
                }
                if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                  __debugbreak();
                if ( g_entities[v15].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                  __debugbreak();
                if ( g_entityIsInUse[v14] )
                {
                  if ( v13 >= 0x800 )
                  {
                    LODWORD(v21) = 2048;
                    LODWORD(v20) = v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
                      __debugbreak();
                  }
                  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                    __debugbreak();
                  v16 = &g_entities[v15];
                  if ( g_entities[v15].targetname == v12 )
                    break;
                }
                ++v13;
                ++v14;
                ++v15;
                if ( (int)v13 >= level.num_entities )
                {
                  v9 = v22;
                  v10 = v23;
                  goto LABEL_45;
                }
              }
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              v17 = (__int64)((unsigned __int128)(((char *)v16 - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
              v18 = (v17 >> 63) + v17;
              if ( (unsigned int)v18 >= 0x800 )
              {
                LODWORD(v21) = 2048;
                LODWORD(v20) = v18;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
                  __debugbreak();
              }
              v2 = inoutIgnoreEntities;
              v10 = v23;
              v19 = (__int16)v18;
              v9 = v22;
              inoutIgnoreEntities[(*inoutNumIgnoreEntities)++] = v19;
            }
            v4 = String;
          }
          v7 = v25;
        }
      }
      v9 += 1456i64;
      ++v6;
      v22 = v9;
      ++v8;
    }
    while ( (int)v6 < level.num_entities );
  }
}

/*
==============
SND_PropagationInit
==============
*/
void SND_PropagationInit()
{
  ntl::fixed_hash_map<unsigned int,PropagationPortalToDoubleDoorData,256,389,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v9; 
  unsigned int v10; 
  const ScriptableDef *def; 
  __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v41; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *mp_next; 
  unsigned int v43; 
  unsigned __int64 v44; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v45; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v46; 
  unsigned __int64 v49; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v50; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v51; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v52; 
  __int64 v53; 
  char *fmt; 
  __int64 v62; 
  unsigned int outTrigger; 
  vec3_t outOrigin; 
  unsigned __int64 v65; 
  _BYTE v66[12]; 
  _QWORD v67[4]; 
  char v68; 
  vec3_t angles; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  v67[0] = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_PropagationInit");
  s_numscriptableDoors = 0;
  p_m_buckets = (ntl::fixed_hash_map<unsigned int,PropagationPortalToDoubleDoorData,256,389,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_portalToDoubleDoorMap.m_buckets;
  do
  {
    for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; s_portalToDoubleDoorMap.m_freelist.m_head.mp_next = v9 )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v9 = i;
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = i->mp_next;
      v9->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_portalToDoubleDoorMap.m_freelist.m_head;
    }
    *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
    p_m_buckets = (ntl::fixed_hash_map<unsigned int,PropagationPortalToDoubleDoorData,256,389,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)((char *)p_m_buckets + 8);
  }
  while ( p_m_buckets != (ntl::fixed_hash_map<unsigned int,PropagationPortalToDoubleDoorData,256,389,ntl::hash<unsigned int>,ntl::equal_to<unsigned int> > *)&s_portalToDoubleDoorMap.m_currentNumItems );
  s_portalToDoubleDoorMap.m_currentNumItems = 0i64;
  s_nextDoorToUpdate = 0;
  if ( !CL_TransientsWorldMP_IsActive() )
  {
    v10 = 0;
    ScriptableCommon_AssertCountsInitialized();
    if ( g_scriptableWorldCounts.totalInstanceCount )
    {
      __asm { vxorps  xmm11, xmm11, xmm11 }
      while ( 1 )
      {
        def = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v10)->def;
        if ( !def || (def->flags & 0x180000) == 0 )
          goto LABEL_54;
        _RBX = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, v10);
        ScriptableInstanceContextSecure::GetOrigin(_RBX, v10, &outOrigin);
        if ( def->numXModels )
        {
          if ( !*def->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 80, ASSERT_TYPE_ASSERT, "(def->models[0])", (const char *)&queryFormat, "def->models[0]") )
            __debugbreak();
          _RCX = *def->models;
          __asm
          {
            vmovups xmm1, xmmword ptr [rcx+2Ch]
            vshufps xmm7, xmm1, xmm1, 0AAh ; 'ª'
            vmovups xmmword ptr [rsp+170h+var_100+8], xmm1
            vmovss  xmm8, dword ptr [rsp+170h+var_100+0Ch]
            vmovss  xmm9, dword ptr [rsp+170h+var_100+8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm9, dword ptr [rsp+170h+outOrigin]
            vmovss  xmm8, dword ptr [rsp+170h+outOrigin+4]
            vmovss  xmm7, dword ptr [rsp+170h+outOrigin+8]
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+18h]
          vmovss  dword ptr [rbp+70h+angles], xmm11
          vmovss  dword ptr [rbp+70h+angles+4], xmm0
          vmovss  dword ptr [rbp+70h+angles+8], xmm11
        }
        AnglesToAxis(&angles, &axis);
        __asm
        {
          vmulss  xmm3, xmm8, dword ptr [rbp+70h+axis+0Ch]
          vmulss  xmm2, xmm9, dword ptr [rbp+70h+axis]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm1, xmm7, dword ptr [rbp+70h+axis+18h]
          vaddss  xmm6, xmm4, xmm1
          vmulss  xmm3, xmm8, dword ptr [rbp+70h+axis+10h]
          vmulss  xmm1, xmm9, dword ptr [rbp+70h+axis+4]
          vaddss  xmm4, xmm3, xmm1
          vmulss  xmm0, xmm7, dword ptr [rbp+70h+axis+1Ch]
          vaddss  xmm5, xmm4, xmm0
          vmulss  xmm3, xmm8, dword ptr [rbp+70h+axis+14h]
          vmulss  xmm2, xmm9, dword ptr [rbp+70h+axis+8]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm0, xmm7, dword ptr [rbp+70h+axis+20h]
          vaddss  xmm3, xmm4, xmm0
          vaddss  xmm2, xmm6, dword ptr [rsp+170h+outOrigin]
          vmovss  dword ptr [rbp+70h+point], xmm2
          vaddss  xmm0, xmm5, dword ptr [rsp+170h+outOrigin+4]
          vmovss  dword ptr [rbp+70h+point+4], xmm0
          vaddss  xmm1, xmm3, dword ptr [rsp+170h+outOrigin+8]
          vmovss  dword ptr [rbp+70h+point+8], xmm1
        }
        if ( CG_FindAudioPropagationPortalAtPoint(LOCAL_CLIENT_0, &point, &outTrigger) )
          break;
LABEL_53:
        memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_54:
        ++v10;
        ScriptableCommon_AssertCountsInitialized();
        if ( v10 >= g_scriptableWorldCounts.totalInstanceCount )
          goto LABEL_83;
      }
      v38 = s_numscriptableDoors;
      if ( s_numscriptableDoors >= 0x100 )
      {
        Com_PrintError(9, "Exceeded MAX_DOOR_PROPAGATION_PORTALS (%d). Some door portals will not function!\n", 256i64);
        memset(&outOrigin, 0, sizeof(outOrigin));
        goto LABEL_83;
      }
      s_scriptableDoorData[s_numscriptableDoors].scriptableDoorIndex = v10;
      v39 = outTrigger;
      s_scriptableDoorData[v38].portalTrigger = outTrigger;
      s_numscriptableDoors = v38 + 1;
      if ( !s_portalToDoubleDoorMap.m_currentNumItems )
        goto LABEL_34;
      v40 = (unsigned int)v39 - 389 * ((unsigned __int64)(((v39 * (unsigned __int128)0x50F22E111C4C56DFui64) >> 64) + ((unsigned __int64)((unsigned int)v39 - ((v39 * (unsigned __int128)0x50F22E111C4C56DFui64) >> 64)) >> 1)) >> 8);
      if ( v40 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v41 = &s_portalToDoubleDoorMap.m_buckets.ntl::internal::hash_table<unsigned int,PropagationPortalToDoubleDoorData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData>,256,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> >,389>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v40];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v41->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v41->m_listHead.m_sentinel.mp_next == v41 )
      {
LABEL_34:
        v65 = v10 | 0xFFFFFFFF00000000ui64;
        v43 = outTrigger;
        *(_DWORD *)v66 = outTrigger;
        *(_QWORD *)&v66[4] = v65;
        v44 = outTrigger % 0x185ui64;
        if ( v44 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        v45 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&s_portalToDoubleDoorMap.m_buckets.ntl::internal::hash_table<unsigned int,PropagationPortalToDoubleDoorData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData>,256,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> >,389>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v44];
        v46 = *v45;
        if ( *v45 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v45 )
        {
LABEL_43:
          if ( !s_portalToDoubleDoorMap.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !s_portalToDoubleDoorMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<24> *)s_portalToDoubleDoorMap.m_freelist.m_head.mp_next == &s_portalToDoubleDoorMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x100ui64) )
            __debugbreak();
          _RCX = s_portalToDoubleDoorMap.m_freelist.m_head.mp_next;
          s_portalToDoubleDoorMap.m_freelist.m_head.mp_next = s_portalToDoubleDoorMap.m_freelist.m_head.mp_next->mp_next;
          _RCX->mp_next = NULL;
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+170h+var_110]
            vmovsd  qword ptr [rcx+8], xmm0
          }
          LODWORD(_RCX[2].mp_next) = *(_DWORD *)&v66[8];
          _RCX->mp_next = *v45;
          *v45 = _RCX;
          ++s_portalToDoubleDoorMap.m_currentNumItems;
          v67[1] = _RCX;
          v68 = 1;
        }
        else
        {
          while ( 1 )
          {
            if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( LODWORD(v46[1].mp_next) == v43 )
              break;
            v46 = v46->mp_next;
            if ( v46 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v45 )
              goto LABEL_43;
          }
          v67[1] = 0i64;
          v68 = 0;
          LODWORD(fmt) = 256;
          Com_PrintError(9, "Failed to add propagation portal mapping for scriptable door %d. %lu of %d entries used.\n", v10, s_portalToDoubleDoorMap.m_currentNumItems, fmt);
        }
        goto LABEL_53;
      }
      while ( 1 )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == outTrigger )
          break;
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)mp_next->m_listHead.m_sentinel.mp_next;
        if ( mp_next == v41 )
          goto LABEL_34;
      }
      v49 = outTrigger % 0x185ui64;
      if ( v49 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v50 = &s_portalToDoubleDoorMap.m_buckets.ntl::internal::hash_table<unsigned int,PropagationPortalToDoubleDoorData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData>,256,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> >,389>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[v49];
      v51 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v50->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v50->m_listHead.m_sentinel.mp_next == v50 )
      {
LABEL_65:
        v51 = NULL;
      }
      else
      {
        while ( 1 )
        {
          if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LODWORD(v51[1].m_listHead.m_sentinel.mp_next) == outTrigger )
            break;
          v51 = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v51->m_listHead.m_sentinel.mp_next;
          if ( v51 == v50 )
            goto LABEL_65;
        }
        if ( v51 )
        {
          v52 = v51;
LABEL_67:
          if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v53 = (__int64)&v52[2];
          if ( !v52 )
            v53 = 8i64;
          if ( *(_DWORD *)v53 != -1 )
          {
            LODWORD(v62) = outTrigger;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 126, ASSERT_TYPE_ASSERT, "(iter->second.secondDoor == -1)", "%s\n\tMore than two doors linked to propagation portal %d", "iter->second.secondDoor == -1", v62) )
              __debugbreak();
          }
          if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          *(_DWORD *)v53 = v10;
          goto LABEL_53;
        }
      }
      v52 = NULL;
      goto LABEL_67;
    }
  }
LABEL_83:
  Sys_ProfEndNamedEvent();
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
SND_PropagationWorker
==============
*/
void SND_PropagationWorker(const void *const cmdInfo)
{
  int v2; 
  __int16 NodeForPosition; 
  int v4; 
  __int16 v5; 
  __int16 v6; 
  __int16 v7; 
  __int16 v8; 

  if ( SND_Active() )
  {
    v2 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "snd prop kd tree");
    NodeForPosition = SND_PropagationFindNodeForPosition((const vec3_t *)cmdInfo + 3);
    g_snd.propagationKdTreeUsec = Sys_Microseconds() - v2;
    Sys_ProfEndNamedEvent();
    v4 = Sys_Microseconds();
    Sys_ProfBeginNamedEvent(0xFFD8BFD8, "snd prop path time");
    if ( NodeForPosition != -1 )
    {
      if ( *(_BYTE *)cmdInfo )
      {
        ++g_snd.propagationCount;
        v5 = SND_PropagationFindNodeForPosition((const vec3_t *)cmdInfo + 1);
        if ( v5 != -1 )
        {
          v6 = truncate_cast<short,unsigned int>(*((_DWORD *)cmdInfo + 1));
          if ( SND_PropagationFindPortalLocation(v6, NodeForPosition, (const vec3_t *)cmdInfo + 3, v5, &g_snd.reverbPortalPropagationOutputA) )
            g_snd.reverbTriggerOutputNumberA = *((_DWORD *)cmdInfo + 1);
          else
            g_snd.reverbTriggerOutputNumberA = 1024;
        }
      }
      if ( *((_BYTE *)cmdInfo + 1) )
      {
        ++g_snd.propagationCount;
        v7 = SND_PropagationFindNodeForPosition((const vec3_t *)cmdInfo + 2);
        if ( v7 != -1 )
        {
          v8 = truncate_cast<short,unsigned int>(*((_DWORD *)cmdInfo + 2));
          if ( SND_PropagationFindPortalLocation(v8, NodeForPosition, (const vec3_t *)cmdInfo + 3, v7, &g_snd.reverbPortalPropagationOutputB) )
            g_snd.reverbTriggerOutputNumberB = *((_DWORD *)cmdInfo + 2);
          else
            g_snd.reverbTriggerOutputNumberB = 1024;
        }
      }
    }
    g_snd.propagationPathUsec = Sys_Microseconds() - v4;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
SND_RecalcPropagation
==============
*/
void SND_RecalcPropagation(void)
{
  AudioPropagationEdge *v0; 
  unsigned int numAudioPropNodes; 
  AudioPropagationNode *audioPropNodes; 
  unsigned int v3; 
  unsigned __int16 *p_numEdges; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int *p_edgeStartIndex; 
  unsigned int v8; 
  int v9; 

  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_propagation.cpp", 362, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  v0 = edgeMem;
  if ( !edgeMem )
  {
    v0 = (AudioPropagationEdge *)SD_Alloc("sd_dev_propagation", 0x4000000u, (int)edgeMem + 16);
    edgeMem = v0;
  }
  cm.mapEnts->numAudioPropEdges = 0x1000000;
  cm.mapEnts->audioPropEdges = v0;
  numAudioPropNodes = cm.mapEnts->numAudioPropNodes;
  audioPropNodes = cm.mapEnts->audioPropNodes;
  Com_Printf(9, "Sound Propagation Processing...\n");
  Com_Printf(9, "\tprocessing %d nodes.\n", numAudioPropNodes);
  v3 = 0;
  if ( numAudioPropNodes )
  {
    p_numEdges = &audioPropNodes->numEdges;
    v5 = numAudioPropNodes;
    do
    {
      *p_numEdges = 0;
      p_numEdges += 10;
      --v5;
    }
    while ( v5 );
  }
  v6 = 0;
  if ( numAudioPropNodes )
  {
    p_edgeStartIndex = &audioPropNodes->edgeStartIndex;
    v8 = 0;
    do
    {
      SND_PropagationFindEdges(PHYSICS_WORLD_ID_CLIENT_FIRST, v6, v0, audioPropNodes, numAudioPropNodes);
      v9 = *((unsigned __int16 *)p_edgeStartIndex - 2);
      ++v6;
      *p_edgeStartIndex = v8;
      p_edgeStartIndex += 5;
      v3 += v9;
      v8 += numAudioPropNodes;
    }
    while ( v6 < numAudioPropNodes );
  }
  Com_Printf(9, "\tfound %d edges.\n", v3);
}

/*
==============
SND_UpdateDoorPropagation
==============
*/
void SND_UpdateDoorPropagation(const SndDoorPropagationWorkerCmd *const cmd)
{
  unsigned int v3; 
  unsigned int v4; 
  __int64 v7; 
  __int64 scriptableDoorIndex; 
  unsigned __int64 portalTrigger; 
  char v14; 
  char v15; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v16; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *mp_next; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *v18; 
  __int64 v19; 
  __int64 v26; 
  __int64 v27; 

  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "SND_UpdateDoorPropagation");
  v3 = 20;
  if ( (int)s_numscriptableDoors < 20 )
    v3 = s_numscriptableDoors;
  if ( v3 )
  {
    v4 = s_nextDoorToUpdate;
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+88h+var_48], xmm7
      vmovss  xmm7, cs:__real@3c23d70a
    }
    v7 = v3;
    while ( 1 )
    {
      scriptableDoorIndex = s_scriptableDoorData[v4].scriptableDoorIndex;
      portalTrigger = s_scriptableDoorData[v4].portalTrigger;
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)scriptableDoorIndex >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v27) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v26) = scriptableDoorIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      _RSI = &g_scriptableCl_instanceContexts[0][scriptableDoorIndex];
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+18h]; angle2
        vmovss  xmm0, dword ptr [rsi+30h]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, xmm7
      }
      v15 = v14;
      if ( !v14 )
        goto LABEL_46;
      if ( portalTrigger % 0x185 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v16 = &s_portalToDoubleDoorMap.m_buckets.ntl::internal::hash_table<unsigned int,PropagationPortalToDoubleDoorData,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData>,256,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> >,389>,ntl::hash<unsigned int>,ntl::equal_to<unsigned int>,ntl::integral_constant<bool,1> >::m_data[portalTrigger % 0x185];
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v16->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)v16->m_listHead.m_sentinel.mp_next == v16 )
        break;
      while ( 1 )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)portalTrigger )
          break;
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,PropagationPortalToDoubleDoorData> > *)mp_next->m_listHead.m_sentinel.mp_next;
        if ( mp_next == v16 )
          goto LABEL_21;
      }
      if ( !mp_next )
        goto LABEL_22;
      v18 = mp_next;
LABEL_23:
      if ( mp_next )
      {
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v19 = (__int64)&v18[1].m_listHead.m_sentinel.mp_next + 4;
        if ( !v18 )
          v19 = 4i64;
        if ( *(_DWORD *)v19 == (_DWORD)scriptableDoorIndex )
        {
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v19 = (__int64)&v18[2];
          if ( !v18 )
            v19 = 8i64;
        }
        else if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 117, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        {
          __debugbreak();
        }
        if ( *(_DWORD *)v19 == -1 )
        {
          if ( (_RSI->commonContext.def->flags & 0x100000) != 0 )
            Com_PrintWarning(9, "Scriptable double door %d has no associated second door.\n", (unsigned int)scriptableDoorIndex);
        }
        else
        {
          _RAX = ScriptableCl_GetInstanceCommonContext(LOCAL_CLIENT_0, *(_DWORD *)v19);
          __asm
          {
            vmovss  xmm1, dword ptr [rax+18h]; angle2
            vmovss  xmm0, dword ptr [rax+30h]; angle1
          }
          *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
          __asm
          {
            vandps  xmm0, xmm0, xmm6
            vcomiss xmm0, xmm7
          }
          v15 &= v14;
        }
      }
      else
      {
        Com_PrintWarning(9, "Scriptable door %d has no associated propagation portal mapping.\n", (unsigned int)scriptableDoorIndex);
      }
LABEL_46:
      CG_EnableAudioTriggerByIndex(portalTrigger, v15 != 1);
      v4 = (s_nextDoorToUpdate + 1) % s_numscriptableDoors;
      s_nextDoorToUpdate = v4;
      if ( !--v7 )
      {
        __asm
        {
          vmovaps xmm7, [rsp+88h+var_48]
          vmovaps xmm6, [rsp+88h+var_38]
        }
        goto LABEL_48;
      }
    }
LABEL_21:
    mp_next = NULL;
LABEL_22:
    v18 = NULL;
    goto LABEL_23;
  }
LABEL_48:
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_UpdatePropagation
==============
*/
void SND_UpdatePropagation(const SndPropagationWorkerCmd *const cmd)
{
  int v2; 
  __int16 NodeForPosition; 
  int v4; 
  __int16 v5; 
  __int16 v6; 
  __int16 v7; 
  __int16 v8; 

  v2 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "snd prop kd tree");
  NodeForPosition = SND_PropagationFindNodeForPosition(&cmd->reverbListenerOrigin);
  g_snd.propagationKdTreeUsec = Sys_Microseconds() - v2;
  Sys_ProfEndNamedEvent();
  v4 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "snd prop path time");
  if ( NodeForPosition != -1 )
  {
    if ( cmd->runPropagationForReverbA )
    {
      ++g_snd.propagationCount;
      v5 = SND_PropagationFindNodeForPosition(&cmd->reverbTriggerPropagationInputA);
      if ( v5 != -1 )
      {
        v6 = truncate_cast<short,unsigned int>(cmd->reverbTriggerInputNumberA);
        if ( SND_PropagationFindPortalLocation(v6, NodeForPosition, &cmd->reverbListenerOrigin, v5, &g_snd.reverbPortalPropagationOutputA) )
          g_snd.reverbTriggerOutputNumberA = cmd->reverbTriggerInputNumberA;
        else
          g_snd.reverbTriggerOutputNumberA = 1024;
      }
    }
    if ( cmd->runPropagationForReverbB )
    {
      ++g_snd.propagationCount;
      v7 = SND_PropagationFindNodeForPosition(&cmd->reverbTriggerPropagationInputB);
      if ( v7 != -1 )
      {
        v8 = truncate_cast<short,unsigned int>(cmd->reverbTriggerInputNumberB);
        if ( SND_PropagationFindPortalLocation(v8, NodeForPosition, &cmd->reverbListenerOrigin, v7, &g_snd.reverbPortalPropagationOutputB) )
          g_snd.reverbTriggerOutputNumberB = cmd->reverbTriggerInputNumberB;
        else
          g_snd.reverbTriggerOutputNumberB = 1024;
      }
    }
  }
  g_snd.propagationPathUsec = Sys_Microseconds() - v4;
  Sys_ProfEndNamedEvent();
}

