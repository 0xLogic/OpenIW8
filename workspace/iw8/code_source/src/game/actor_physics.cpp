/*
==============
AIScriptedInterface::Physics_TestForLinkedGroundChange
==============
*/

void __fastcall AIScriptedInterface::Physics_TestForLinkedGroundChange(AIScriptedInterface *this)
{
  ?Physics_TestForLinkedGroundChange@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Physics_GroundTraceOnly
==============
*/

void __fastcall AIScriptedInterface::Physics_GroundTraceOnly(AIScriptedInterface *this)
{
  ?Physics_GroundTraceOnly@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIPhys_Init
==============
*/

void AIPhys_Init(void)
{
  ?AIPhys_Init@@YAXXZ();
}

/*
==============
AIPhys_Shutdown
==============
*/

void AIPhys_Shutdown(void)
{
  ?AIPhys_Shutdown@@YAXXZ();
}

/*
==============
AIScriptedInterface::Physics_UpdatePrevGround
==============
*/

void __fastcall AIScriptedInterface::Physics_UpdatePrevGround(actor_physics_t *pPhys)
{
  ?Physics_UpdatePrevGround@AIScriptedInterface@@SAXPEAUactor_physics_t@@@Z(pPhys);
}

/*
==============
AIPhys_DoGroundShapecast
==============
*/

void __fastcall AIPhys_DoGroundShapecast(trace_t *trace, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int entNum, int contentmask)
{
  ?AIPhys_DoGroundShapecast@@YAXPEAUtrace_t@@AEBTvec3_t@@1PEBUBounds@@HH@Z(trace, start, end, bounds, entNum, contentmask);
}

/*
==============
AIScriptedInterface::Physics_HandleMovingPlatformTeleport
==============
*/

void __fastcall AIScriptedInterface::Physics_HandleMovingPlatformTeleport(AIScriptedInterface *this)
{
  ?Physics_HandleMovingPlatformTeleport@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Physics_DoMovement
==============
*/

int __fastcall AIScriptedInterface::Physics_DoMovement(actor_physics_t *pPhys)
{
  return ?Physics_DoMovement@AIScriptedInterface@@SAHPEAUactor_physics_t@@@Z(pPhys);
}

/*
==============
AIScriptedInterface::Physics_Trace
==============
*/

void __fastcall AIScriptedInterface::Physics_Trace(AIScriptedInterface *this, const vec3_t *start, const vec3_t *end, trace_t *trace)
{
  ?Physics_Trace@AIScriptedInterface@@IEBAXAEBTvec3_t@@0PEAUtrace_t@@@Z(this, start, end, trace);
}

/*
==============
AIScriptedInterface::Physics_CharacterTrace
==============
*/

bool __fastcall AIScriptedInterface::Physics_CharacterTrace(AIScriptedInterface *this)
{
  return ?Physics_CharacterTrace@AIScriptedInterface@@IEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::PostPhysics
==============
*/

void __fastcall AIScriptedInterface::PostPhysics(AIScriptedInterface *this)
{
  ?PostPhysics@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIPhys_AddTouchEnt
==============
*/
void AIPhys_AddTouchEnt(int entityNum)
{
  __int64 v1; 
  actor_physics_t *v2; 
  gclient_s *client; 
  __int64 iNumTouch; 
  __int64 v5; 
  __int16 *iTouchEnts; 

  v1 = entityNum;
  if ( entityNum == 2047 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 96, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
      __debugbreak();
  }
  else if ( entityNum == 2046 )
  {
    return;
  }
  v2 = g_pPhys;
  if ( g_pPhys->iNumTouch != 32 )
  {
    client = g_entities[v1].client;
    if ( client )
    {
      if ( BGMovingPlatforms::IsOnMovingPlatform(&client->ps) )
        return;
      v2 = g_pPhys;
    }
    iNumTouch = v2->iNumTouch;
    if ( iNumTouch <= 0 )
    {
LABEL_13:
      if ( (unsigned int)(v1 + 0x8000) > 0xFFFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v1, "signed", v1) )
          __debugbreak();
        v2 = g_pPhys;
      }
      v2->iTouchEnts[v2->iNumTouch++] = v1;
    }
    else
    {
      v5 = 0i64;
      iTouchEnts = v2->iTouchEnts;
      while ( *iTouchEnts != (_DWORD)v1 )
      {
        ++v5;
        ++iTouchEnts;
        if ( v5 >= iNumTouch )
          goto LABEL_13;
      }
    }
  }
}

/*
==============
AIPhys_CharacterTrace
==============
*/
void AIPhys_CharacterTrace(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentmask)
{
  const vec3_t *v12; 
  int v18; 
  __int64 v74; 
  __int64 v75; 
  bool v77; 
  bool IsLinkedToAncestor; 
  __int64 v97; 
  __int64 v98; 
  const vec3_t *v99; 
  vec3_t *enda; 
  Bounds *boundsa; 
  __int128 v102; 
  __int128 v103; 
  __int128 v104; 
  __int128 v105; 
  __int128 v106; 
  __int128 v107; 
  char v115; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  v12 = start;
  boundsa = (Bounds *)bounds;
  enda = (vec3_t *)end;
  v99 = start;
  if ( (contentmask & 0xFDFFFFFF) != 0 )
  {
LABEL_22:
    AIPhys_Trace(results, v12, end, bounds, passEntityNum, contentmask);
    goto LABEL_23;
  }
  __asm
  {
    vmovups xmm3, xmmword ptr cs:?bounds_origin@@3UBounds@@B.midPoint; Bounds const bounds_origin
    vmovsd  xmm4, qword ptr cs:?bounds_origin@@3UBounds@@B.halfSize+4; Bounds const bounds_origin
    vmovss  xmm0, dword ptr [rdx]
    vmovups [rbp+47h+var_B0], xmm3
    vmovaps [rsp+120h+var_98+8], xmm10
    vmovaps xmm10, [rsp+120h+var_98+8]
  }
  v18 = 0;
  __asm
  {
    vshufps xmm1, xmm3, xmm3, 0AAh ; 'ª'
    vmovsd  [rbp+47h+var_A0], xmm4
  }
  HIDWORD(v102) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rbp-79h]
    vmovss  xmm5, xmm5, xmm0
    vinsertps xmm5, xmm5, dword ptr [rdx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdx+8], 20h ; ' '
    vshufps xmm0, xmm3, xmm3, 55h ; 'U'
    vmovups xmmword ptr [rbp-79h], xmm5
  }
  HIDWORD(v103) = 0;
  __asm
  {
    vmovups xmm2, xmmword ptr [rbp-79h]
    vmovss  xmm2, xmm2, xmm3
    vinsertps xmm2, xmm2, xmm0, 10h
    vinsertps xmm2, xmm2, xmm1, 20h ; ' '
    vmovups xmmword ptr [rbp-79h], xmm2
    vshufps xmm3, xmm3, xmm3, 0FFh
    vshufps xmm0, xmm4, xmm4, 55h ; 'U'
  }
  HIDWORD(v104) = 0;
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp-79h]
    vmovss  xmm1, xmm1, xmm3
    vinsertps xmm1, xmm1, xmm4, 10h
    vinsertps xmm1, xmm1, xmm0, 20h ; ' '
    vsubps  xmm0, xmm2, xmm1
    vmovups xmmword ptr [rbp-79h], xmm1
    vaddps  xmm1, xmm2, xmm1
    vminps  xmm3, xmm0, xmm5
    vmaxps  xmm0, xmm1, xmm5
    vaddps  xmm2, xmm3, xmm0
    vmulps  xmm5, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vmovss  xmm0, dword ptr [r8]
    vsubps  xmm9, xmm5, xmm3
  }
  HIDWORD(v105) = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rbp-79h]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [r8+4], 10h
    vinsertps xmm8, xmm8, dword ptr [r8+8], 20h ; ' '
    vmovups xmmword ptr [rbp-79h], xmm8
  }
  HIDWORD(v106) = 0;
  __asm
  {
    vmovups xmm2, xmmword ptr [rbp-79h]
    vmovss  xmm2, xmm2, xmm5
    vshufps xmm3, xmm5, xmm5, 55h ; 'U'
    vinsertps xmm2, xmm2, xmm3, 10h
    vshufps xmm4, xmm5, xmm5, 0AAh ; 'ª'
    vinsertps xmm2, xmm2, xmm4, 20h ; ' '
    vmovups xmmword ptr [rbp-79h], xmm2
    vshufps xmm6, xmm9, xmm9, 55h ; 'U'
    vshufps xmm7, xmm9, xmm9, 0AAh ; 'ª'
  }
  HIDWORD(v107) = 0;
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp-79h]
    vmovss  xmm1, xmm1, xmm9
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm7, 20h ; ' '
    vsubps  xmm0, xmm2, xmm1
    vminps  xmm3, xmm0, xmm8
    vaddps  xmm1, xmm2, xmm1
    vmaxps  xmm0, xmm1, xmm8
    vaddps  xmm1, xmm3, xmm0
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vsubps  xmm4, xmm2, xmm3
    vaddss  xmm9, xmm4, dword ptr [r9+0Ch]
    vshufps xmm0, xmm4, xmm4, 55h ; 'U'
    vaddss  xmm0, xmm0, dword ptr [r9+10h]
    vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
    vmovss  dword ptr [rbp+47h+var_A0], xmm0
    vaddss  xmm0, xmm1, dword ptr [r9+14h]
    vmovss  dword ptr [rbp+47h+var_A0+4], xmm0
    vmovss  dword ptr [rbp+47h+var_B0], xmm2
    vextractps dword ptr [rbp+47h+var_B0+4], xmm2, 1
    vextractps dword ptr [rbp+47h+var_B0+8], xmm2, 2
    vmovss  dword ptr [rbp+47h+var_B0+0Ch], xmm9
  }
  if ( level.maxclients > 0 )
  {
    __asm
    {
      vmovsd  xmm7, [rbp+47h+var_A0]
      vmovups xmm8, [rbp+47h+var_B0]
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    v74 = 0i64;
    v75 = 0i64;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= 0x800 )
      {
        LODWORD(v98) = 2048;
        LODWORD(v97) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v97, v98) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v75].r.isInUse != g_entityIsInUse[v74] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v74] )
      {
        _RBX = &g_entities[v75];
        v77 = (unsigned int)passEntityNum < 0x7FF;
        if ( passEntityNum == 2047 || (IsLinkedToAncestor = G_EntIsLinkedToAncestor(&g_entities[v75], &g_entities[passEntityNum]), v77 = 0, !IsLinkedToAncestor) )
        {
          __asm
          {
            vaddss  xmm2, xmm9, dword ptr [rbx+10Ch]
            vaddss  xmm3, xmm7, dword ptr [rbx+110h]
            vmovsd  [rbp+47h+var_A0], xmm7
            vmovss  xmm0, dword ptr [rbp+47h+var_A0+4]
            vaddss  xmm4, xmm0, dword ptr [rbx+114h]
            vmovss  xmm0, dword ptr [rbx+130h]
            vmovups [rbp+47h+var_B0], xmm8
            vsubss  xmm1, xmm0, dword ptr [rbp+47h+var_B0]
            vandps  xmm1, xmm1, xmm6
            vcomiss xmm1, xmm2
            vmovss  dword ptr [rbp+47h+var_A0+4], xmm4
          }
          if ( v77 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+134h]
              vsubss  xmm1, xmm0, dword ptr [rbp+47h+var_B0+4]
              vandps  xmm1, xmm1, xmm6
              vcomiss xmm1, xmm3
            }
            if ( v77 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+138h]
                vsubss  xmm1, xmm0, dword ptr [rbp+47h+var_B0+8]
                vandps  xmm1, xmm1, xmm6
                vcomiss xmm1, xmm4
              }
              if ( v77 )
                break;
            }
          }
        }
      }
      ++v18;
      ++v74;
      ++v75;
      if ( v18 >= level.maxclients )
        goto LABEL_20;
    }
    v12 = v99;
    end = enda;
    bounds = boundsa;
    goto LABEL_22;
  }
LABEL_20:
  results->fraction = 1.0;
LABEL_23:
  _R11 = &v115;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
AIPhys_ClearGroundState
==============
*/
void AIPhys_ClearGroundState(int movingGround)
{
  actor_physics_t *v1; 

  v1 = g_pPhys;
  *(_QWORD *)&g_apl.bIsWalking = 0i64;
  if ( !movingGround || g_pPhys->bSpace )
  {
    g_pPhys->groundEntNum = 2047;
    *(_QWORD *)v1->vPrevGroundOrigin.v = 0i64;
    *(_QWORD *)&v1->vPrevGroundOrigin.z = 0i64;
    *(_QWORD *)&v1->vPrevGroundAngles.y = 0i64;
  }
}

/*
==============
AIPhys_ClipAgainstCharacters
==============
*/
__int64 AIPhys_ClipAgainstCharacters(int gravity, int iNumPlanes, vec3_t *planes, bool *isWalkable, float fTimeLeft, vec3_t *vEndVelocity, vec3_t *pointOnNavmesh)
{
  __int64 v16; 
  bool v17; 
  __int64 result; 
  __int64 v20; 
  bool v21; 
  unsigned int v22; 
  int v23; 
  const dvar_t *v39; 
  const vec4_t *v46; 
  const char *v47; 
  char *Value; 
  int *v50; 
  _QWORD *v51; 
  char *v52; 
  __int64 v53; 
  unsigned __int64 v54; 
  __int32 v55; 
  actor_physics_t *v57; 
  unsigned __int16 v60; 
  int v78; 
  int v80; 
  int v81; 
  __int64 v82; 
  bool v86; 
  bool v87; 
  float *v88; 
  bool v104; 
  actor_physics_t *v105; 
  unsigned __int16 EntityHitId; 
  actor_physics_t *v107; 
  __int64 contentmask; 
  __int64 v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  float *v127; 
  vec3_t end; 
  trace_t results; 
  vec3_t vEndClipVelocity; 

  _R14 = pointOnNavmesh;
  v16 = iNumPlanes;
  v124 = g_apl.iTraceMask & 0x2004000;
  v123 = iNumPlanes;
  v17 = AIPhys_ClipVelocityToAllPlanes(iNumPlanes, planes, isWalkable, vEndVelocity, &vEndClipVelocity);
  _RDX = g_pPhys;
  if ( !v17 )
  {
    DropPointToGroundPlane(pointOnNavmesh, &g_pPhys->vOrigin, &g_pPhys->vOrigin);
    return 1i64;
  }
  v20 = v16;
  v21 = 0;
  v22 = 0;
  __asm { vmovaps [rsp+1A0h+var_50], xmm7 }
  v23 = 0;
  __asm
  {
    vmovaps [rsp+1A0h+var_60], xmm8
    vmovss  xmm8, [rbp+0A0h+fTimeLeft]
    vmovaps [rsp+1A0h+var_70], xmm9
    vmovss  xmm9, cs:__real@3f7d70a4
    vmovaps [rsp+1A0h+var_80], xmm10
    vmovss  xmm10, cs:__real@3e99999a
    vmovaps [rsp+1A0h+var_90], xmm11
    vmovss  xmm11, cs:__real@3c23d70a
    vmovaps [rsp+1A0h+var_A0], xmm12
    vmovss  xmm12, cs:__real@3f800000
    vmovaps [rsp+1A0h+var_40], xmm6
  }
  v127 = &planes[v16].v[2];
  __asm { vxorps  xmm7, xmm7, xmm7 }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+10h]
      vmovss  xmm4, dword ptr [rdx+0Ch]
      vmovss  xmm3, dword ptr [rdx+14h]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vcomiss xmm0, xmm11
    }
    if ( v21 )
    {
      DropPointToGroundPlane(pointOnNavmesh, &_RDX->vOrigin, &_RDX->vOrigin);
      result = 0i64;
      goto LABEL_80;
    }
    v39 = DCONST_DVARBOOL_ai_showNavPhysics;
    __asm
    {
      vmulss  xmm0, xmm4, xmm8
      vaddss  xmm1, xmm0, dword ptr [r14]
      vmovss  dword ptr [rsp+1A0h+end], xmm1
      vmulss  xmm0, xmm8, dword ptr [rdx+10h]
      vaddss  xmm1, xmm0, dword ptr [r14+4]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm1
      vmulss  xmm0, xmm8, dword ptr [rdx+14h]
      vaddss  xmm1, xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rsp+1A0h+end+8], xmm1
    }
    if ( !DCONST_DVARBOOL_ai_showNavPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavPhysics") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    if ( v39->current.enabled )
    {
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          v46 = &colorYellowHeat;
        }
        else
        {
          if ( v23 != 2 )
          {
LABEL_16:
            v47 = "distclip";
            __asm { vmovaps xmm2, xmm10; scale }
            if ( g_pPhys->navPhysicsState == NAVPHYS_NOCLIP )
              v47 = "noclip";
            G_Main_AddDebugString(pointOnNavmesh, &colorLtGreen, *(float *)&_XMM2, v47);
            goto LABEL_19;
          }
          v46 = &colorRedHeat;
        }
      }
      else
      {
        v46 = &colorLtGreen;
      }
      G_DebugLineWithDuration(pointOnNavmesh, &end, v46, 0, 1);
      goto LABEL_16;
    }
LABEL_19:
    Value = (char *)Sys_GetValue(0);
    v50 = (int *)(Value + 12576);
    if ( (unsigned int)(*((_DWORD *)Value + 3144) + 1) >= 3 )
    {
      LODWORD(v119) = 3;
      LODWORD(contentmask) = *((_DWORD *)Value + 3144) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", contentmask, v119) )
        __debugbreak();
    }
    if ( (unsigned int)++*v50 >= 3 )
    {
      LODWORD(v119) = 3;
      LODWORD(contentmask) = *v50;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", contentmask, v119) )
        __debugbreak();
    }
    v51 = Value + 2088;
    v52 = Value + 40;
    if ( *v51 < (unsigned __int64)v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v51 += 8i64;
    if ( *v51 >= (unsigned __int64)v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v51 = v50;
    if ( *v51 <= (unsigned __int64)v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v53 = *v50;
    v54 = __rdtsc();
    v50[v53 + 2] = v54;
    v55 = Sys_HasValidCurrentThreadContext() ? Sys_GetCurrentThreadContext() : 28;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, (ThreadContext)v55, 262, NULL, 0);
    AIPhys_CharacterTrace(&results, pointOnNavmesh, &end, &g_pPhys->bounds, g_pPhys->iEntNum, v124);
    Profile_EndInternal(NULL);
    __asm
    {
      vmovss  xmm0, [rbp+0A0h+results.fraction]
      vucomiss xmm0, xmm12
    }
    if ( v86 )
      break;
    if ( results.startsolid )
    {
      v105 = g_pPhys;
      g_pPhys->vVelocity.v[2] = 0.0;
      if ( v23 || !g_apl.groundTrace.startsolid )
      {
        DropPointToGroundPlane(pointOnNavmesh, &v105->vOrigin, &v105->vOrigin);
        if ( g_pPhys->iHitEntnum == 2047 )
        {
          EntityHitId = Trace_GetEntityHitId(&results);
          v107 = g_pPhys;
          g_pPhys->iHitEntnum = EntityHitId;
          v107->vHitOrigin = v107->vOrigin;
          v107->bStuck = 1;
        }
        result = 1i64;
      }
      else
      {
        result = 2i64;
      }
      goto LABEL_80;
    }
    v57 = g_pPhys;
    g_pPhys->bDeflected = 1;
    if ( !results.walkable && v57->iHitEntnum == 2047 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+results.normal]
        vucomiss xmm0, xmm7
      }
      if ( v57->iHitEntnum != 2047 )
        goto LABEL_43;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+results.normal+4]
        vucomiss xmm0, xmm7
      }
      if ( v57->iHitEntnum != 2047 )
      {
LABEL_43:
        v60 = Trace_GetEntityHitId(&results);
        _RCX = g_pPhys;
        g_pPhys->iHitEntnum = v60;
        _RCX->vHitOrigin = *pointOnNavmesh;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0A0h+results.normal]
          vmovss  dword ptr [rcx+10Ch], xmm0
          vmovss  xmm1, dword ptr [rbp+0A0h+results.normal+4]
          vmovss  dword ptr [rcx+110h], xmm1
          vmovss  xmm0, dword ptr [rbp+0A0h+results.normal+8]
          vmovss  dword ptr [rcx+114h], xmm0
        }
        _RCX->bStuck = 0;
      }
    }
    __asm
    {
      vmovss  xmm5, [rbp+0A0h+results.fraction]
      vmovss  xmm0, dword ptr [rsp+1A0h+end]
      vsubss  xmm1, xmm0, dword ptr [r14]
      vmovss  xmm0, dword ptr [rsp+1A0h+end+4]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm6, xmm1, dword ptr [r14]
      vsubss  xmm1, xmm0, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
      vmulss  xmm2, xmm1, xmm5
      vsubss  xmm1, xmm0, dword ptr [r14+8]
      vaddss  xmm3, xmm2, dword ptr [r14+4]
      vmovss  [rsp+1A0h+var_160], xmm6
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm0, xmm2, dword ptr [r14+8]
      vmovss  dword ptr [r14+8], xmm0
      vmovss  dword ptr [r14], xmm6
      vmovss  dword ptr [r14+4], xmm3
    }
    if ( (v120 & 0x7F800000) == 2139095040 )
      goto LABEL_83;
    __asm { vmovss  [rsp+1A0h+var_160], xmm3 }
    if ( (v121 & 0x7F800000) == 2139095040 )
      goto LABEL_83;
    __asm { vmovss  [rsp+1A0h+var_160], xmm0 }
    if ( (v122 & 0x7F800000) == 2139095040 )
    {
LABEL_83:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 618, ASSERT_TYPE_ASSERT, "(!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( pointOnNavmesh[2] ))", "%s\n\tActor_Physics: traceEndPos of AIPhys_Trace is invalid", "!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( pointOnNavmesh[2] )") )
        __debugbreak();
    }
    v78 = Trace_GetEntityHitId(&results);
    if ( v78 != 2047 )
      AIPhys_AddTouchEnt(v78);
    __asm { vmulss  xmm1, xmm8, [rbp+0A0h+results.fraction] }
    _RDX = g_pPhys;
    v80 = v123;
    __asm { vsubss  xmm8, xmm8, xmm1 }
    g_pPhys->bDeflected = 1;
    if ( v123 >= 5 )
    {
      *(_QWORD *)_RDX->vVelocity.v = 0i64;
      _RDX->vVelocity.v[2] = 0.0;
LABEL_68:
      DropPointToGroundPlane(pointOnNavmesh, &_RDX->vOrigin, &_RDX->vOrigin);
      result = 1i64;
      goto LABEL_80;
    }
    v81 = 0;
    v82 = 0i64;
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+0A0h+results.normal+8]
      vmovss  xmm5, dword ptr [rbp+0A0h+results.normal+4]
      vmovss  xmm3, dword ptr [rbp+0A0h+results.normal]
    }
    v86 = v20 == 0;
    v87 = v20 == 0;
    if ( v20 > 0 )
    {
      v88 = &planes->v[2];
      while ( 1 )
      {
        __asm
        {
          vmulss  xmm1, xmm5, dword ptr [rax-4]
          vmulss  xmm0, xmm3, dword ptr [rax-8]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, dword ptr [rax]
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm9
        }
        if ( !v87 )
          break;
        ++v81;
        ++v82;
        v88 += 3;
        v86 = v82 == v20;
        v87 = v82 <= (unsigned __int64)v20;
        if ( v82 >= v20 )
          goto LABEL_63;
      }
      __asm
      {
        vmovss  xmm0, [rbp+0A0h+results.fraction]
        vucomiss xmm0, xmm7
      }
      if ( v86 && _RDX->iHitEntnum == 2047 )
      {
        __asm { vucomiss xmm3, xmm7 }
        if ( _RDX->iHitEntnum != 2047 )
          goto LABEL_61;
        __asm { vucomiss xmm5, xmm7 }
        if ( _RDX->iHitEntnum != 2047 )
        {
LABEL_61:
          _RDX->vHitOrigin = *pointOnNavmesh;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0A0h+results.normal]
            vmovss  dword ptr [rdx+10Ch], xmm0
            vmovss  xmm1, dword ptr [rbp+0A0h+results.normal+4]
            vmovss  dword ptr [rdx+110h], xmm1
            vmovss  xmm0, dword ptr [rbp+0A0h+results.normal+8]
            vmovss  dword ptr [rdx+114h], xmm0
          }
          _RDX->bStuck = 0;
          __asm { vmovss  xmm3, dword ptr [rbp+0A0h+results.normal] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm3, dword ptr [rdx+0Ch]
        vmovss  dword ptr [rdx+0Ch], xmm0
        vmovss  xmm1, dword ptr [rbp+0A0h+results.normal+4]
        vaddss  xmm2, xmm1, dword ptr [rdx+10h]
        vmovss  dword ptr [rdx+10h], xmm2
        vmovss  xmm0, dword ptr [rbp+0A0h+results.normal+8]
        vaddss  xmm1, xmm0, dword ptr [rdx+14h]
        vmovss  dword ptr [rdx+14h], xmm1
        vmovss  xmm4, dword ptr [rbp+0A0h+results.normal+8]
        vmovss  xmm5, dword ptr [rbp+0A0h+results.normal+4]
        vmovss  xmm3, dword ptr [rbp+0A0h+results.normal]
      }
    }
LABEL_63:
    if ( v81 >= v123 )
    {
      _RDI = v127;
      __asm
      {
        vmovss  dword ptr [rdi-8], xmm3
        vmovss  dword ptr [rdi-4], xmm5
        vmovss  dword ptr [rdi], xmm4
      }
      isWalkable[v20] = 0;
      v127 += 3;
      ++v123;
      ++v20;
      v104 = AIPhys_ClipVelocityToAllPlanes(v80 + 1, planes, isWalkable, vEndVelocity, &vEndClipVelocity);
      _RDX = g_pPhys;
      if ( !v104 )
        goto LABEL_68;
    }
    v21 = (unsigned int)++v23 < 4;
    if ( v23 >= 4 )
      goto LABEL_76;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1A0h+end]
    vmovss  xmm1, dword ptr [rsp+1A0h+end+4]
  }
  _RDX = g_pPhys;
  __asm
  {
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
    vmovss  dword ptr [r14+8], xmm0
    vmovss  dword ptr [r14+4], xmm1
  }
LABEL_76:
  if ( gravity )
    _RDX->vVelocity = *vEndVelocity;
  DropPointToGroundPlane(pointOnNavmesh, &_RDX->vOrigin, &_RDX->vOrigin);
  LOBYTE(v22) = v23 != 0;
  result = v22;
LABEL_80:
  __asm
  {
    vmovaps xmm6, [rsp+1A0h+var_40]
    vmovaps xmm10, [rsp+1A0h+var_80]
    vmovaps xmm9, [rsp+1A0h+var_70]
    vmovaps xmm8, [rsp+1A0h+var_60]
    vmovaps xmm7, [rsp+1A0h+var_50]
    vmovaps xmm11, [rsp+1A0h+var_90]
    vmovaps xmm12, [rsp+1A0h+var_A0]
  }
  return result;
}

/*
==============
AIPhys_ClipAgainstCharactersAndMesh
==============
*/
__int64 AIPhys_ClipAgainstCharactersAndMesh(int gravity, int iNumPlanes, vec3_t *planes, bool *isWalkable, float fTimeLeft, vec3_t *vEndVelocity, vec3_t *pointOnNavmesh)
{
  __int64 v20; 
  unsigned int v22; 
  AIScriptedInterface *m_pAI; 
  AINavigator *Navigator; 
  AINavigator2D *v26; 
  bfx::SpaceHandle *p_hSpace; 
  bool v32; 
  bool v34; 
  int v35; 
  int v36; 
  __int64 v37; 
  int v38; 
  const bfx::AreaHandle *hHintArea; 
  const dvar_t *v59; 
  const vec4_t *v60; 
  const char *v61; 
  char v63; 
  actor_physics_t *v102; 
  unsigned __int16 EntityHitId; 
  int v112; 
  char v118; 
  char v162; 
  int v246; 
  __int64 v247; 
  bool v248; 
  bool v249; 
  float *v250; 
  actor_physics_t *v268; 
  unsigned __int16 v269; 
  __int64 result; 
  unsigned int layer; 
  unsigned int layera; 
  unsigned int layerb; 
  unsigned int layerc; 
  unsigned int layerd; 
  unsigned int layere; 
  unsigned int layerf; 
  unsigned int layerg; 
  unsigned int layerh; 
  unsigned int layeri; 
  unsigned int layerj; 
  unsigned int layerk; 
  unsigned int layerm; 
  unsigned int layern; 
  unsigned int layero; 
  signed int layer_4; 
  nav_space_s *pSpace; 
  int contentmask; 
  float *v314; 
  AINavigator2D *v315; 
  bfx::AreaHandle pOutArea; 
  __int64 v318; 
  AIWrapper v319; 
  vec3_t end; 
  vec3_t cross; 
  vec3_t adjusted; 
  vec3_t outClosestPos; 
  vec3_t v324; 
  vec3_t start; 
  vec3_t endPos; 
  vec3_t v1; 
  nav_probe_results_s pOutResults; 
  bfx::PathSpec pPathSpec; 
  trace_t results; 
  vec3_t outUp; 
  vec3_t vEndClipVelocity; 
  char v333; 
  void *retaddr; 

  _RAX = &retaddr;
  v318 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  v20 = iNumPlanes;
  _RBX = pointOnNavmesh;
  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  v22 = 0;
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  __asm
  {
    vxorps  xmm15, xmm15, xmm15
    vmovss  [rbp+270h+pPathSpec.m_pathSharingPenalty], xmm15
    vmovss  [rbp+270h+pPathSpec.m_maxPathSharingPenalty], xmm15
    vmovss  [rbp+270h+pPathSpec.m_maxSearchDist], xmm15
  }
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  AIWrapper::AIWrapper(&v319, &g_entities[g_pPhys->iEntNum]);
  m_pAI = v319.m_pAI;
  if ( !v319.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 708, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Navigator = AICommonInterface::GetNavigator(m_pAI);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 711, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  layer_4 = Nav_GetLayer(Navigator);
  pSpace = Navigator->m_pSpace;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 717, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v26 = Navigator->Get2DNavigator(Navigator);
  v315 = v26;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 721, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  _RAX = AINavigator2D::GetPathSpec(v26);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+270h+pPathSpec.m_obstacleMode], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+270h+pPathSpec.m_maxSearchDist], ymm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbp+100h], xmm0
  }
  bfx::AreaHandle::AreaHandle(&pOutArea);
  p_hSpace = &pSpace->hSpace;
  Nav_GetSpaceUp(pSpace, &outUp);
  contentmask = g_apl.iTraceMask & 0x2004000;
  v32 = AIPhys_ClipVelocityToAllPlanes(v20, planes, isWalkable, vEndVelocity, &vEndClipVelocity);
  _RDX = g_pPhys;
  v34 = 0;
  if ( !v32 )
  {
    DropPointToGroundPlane(pointOnNavmesh, &g_pPhys->vOrigin, &g_pPhys->vOrigin);
    v35 = 1;
LABEL_116:
    v22 = v35;
LABEL_117:
    v38 = v22;
    goto LABEL_118;
  }
  v36 = 0;
  v37 = v20;
  v314 = &planes[v20].v[2];
  v38 = 1;
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdx+10h]
      vmovss  xmm0, dword ptr [rdx+0Ch]
      vmovss  xmm3, dword ptr [rdx+14h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vcomiss xmm0, cs:__real@3c23d70a
    }
    if ( v34 )
    {
      DropPointToGroundPlane(pointOnNavmesh, &_RDX->vOrigin, &_RDX->vOrigin);
      v35 = 0;
      goto LABEL_116;
    }
    hHintArea = AINavigator2D::GetCurArea(v315);
    if ( !Nav_GetClosestVerticalPosWithHint(pointOnNavmesh, &outUp, layer_4, p_hSpace, &pPathSpec, &outClosestPos, hHintArea, &pOutArea) )
    {
      _RAX = g_pPhys;
      __asm
      {
        vmovss  xmm4, [rbp+270h+fTimeLeft]
        vmulss  xmm0, xmm4, dword ptr [rax+0Ch]
        vaddss  xmm1, xmm0, dword ptr [rax]
        vmovss  dword ptr [rax], xmm1
        vmulss  xmm0, xmm4, dword ptr [rax+10h]
        vaddss  xmm1, xmm0, dword ptr [rax+4]
        vmovss  dword ptr [rax+4], xmm1
        vmulss  xmm0, xmm4, dword ptr [rax+14h]
        vaddss  xmm1, xmm0, dword ptr [rax+8]
        vmovss  dword ptr [rax+8], xmm1
      }
      goto LABEL_117;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+270h+var_250]
      vmovss  [rsp+370h+layer], xmm1
    }
    if ( (layer & 0x7F800000) == 2139095040 )
      goto LABEL_122;
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+270h+var_250+4]
      vmovss  [rsp+370h+layer], xmm3
    }
    if ( (layera & 0x7F800000) == 2139095040 )
      goto LABEL_122;
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+270h+var_250+8]
      vmovss  [rsp+370h+layer], xmm2
    }
    if ( (layerb & 0x7F800000) == 2139095040 )
    {
LABEL_122:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 759, ASSERT_TYPE_ASSERT, "(!IS_NAN( closestVerticalPos[0] ) && !IS_NAN( closestVerticalPos[1] ) && !IS_NAN( closestVerticalPos[2] ))", "%s\n\tActor_Physics: closestVerticalPos is NAN.", "!IS_NAN( closestVerticalPos[0] ) && !IS_NAN( closestVerticalPos[1] ) && !IS_NAN( closestVerticalPos[2] )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+270h+var_250]
        vmovss  xmm3, dword ptr [rbp+270h+var_250+4]
        vmovss  xmm2, dword ptr [rbp+270h+var_250+8]
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rbx+4], xmm3
      vmovss  dword ptr [rbx+8], xmm2
      vmovss  xmm4, [rbp+270h+fTimeLeft]
      vmulss  xmm0, xmm4, dword ptr [rax+0Ch]
      vaddss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rbp+270h+end], xmm1
      vmulss  xmm0, xmm4, dword ptr [rax+10h]
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+270h+end+4], xmm1
      vmulss  xmm0, xmm4, dword ptr [rax+14h]
      vaddss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rbp+270h+end+8], xmm1
    }
    v59 = DCONST_DVARBOOL_ai_showNavPhysics;
    if ( !DCONST_DVARBOOL_ai_showNavPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavPhysics") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    if ( v59->current.enabled )
    {
      if ( v36 )
      {
        if ( v36 == 1 )
        {
          v60 = &colorYellowHeat;
        }
        else
        {
          if ( v36 != 2 )
          {
LABEL_35:
            v61 = "distclip";
            if ( g_pPhys->navPhysicsState == NAVPHYS_NOCLIP )
              v61 = "noclip";
            __asm { vmovss  xmm2, cs:__real@3e99999a; scale }
            G_Main_AddDebugString(pointOnNavmesh, &colorLtGreen, *(float *)&_XMM2, v61);
            goto LABEL_38;
          }
          v60 = &colorRedHeat;
        }
      }
      else
      {
        v60 = &colorLtGreen;
      }
      G_DebugLineWithDuration(pointOnNavmesh, &end, v60, 0, 1);
      goto LABEL_35;
    }
LABEL_38:
    Nav_Trace(pSpace, pointOnNavmesh, &end, (AINavLayer)layer_4, &pPathSpec, &pOutResults);
    Profile_Begin(262);
    AIPhys_CharacterTrace(&results, pointOnNavmesh, &end, &g_pPhys->bounds, g_pPhys->iEntNum, contentmask);
    Profile_EndInternal(NULL);
    __asm
    {
      vmovss  xmm14, [rbp+270h+results.fraction]
      vucomiss xmm14, cs:__real@3f800000
    }
    if ( v118 )
    {
      v63 = 0;
      if ( !pOutResults.m_bCollided )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+270h+end]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr [rbp+270h+end+4]
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr [rbp+270h+end+8]
          vmovss  dword ptr [rbx+8], xmm0
        }
        _RDX = g_pPhys;
LABEL_104:
        if ( gravity )
        {
          _RCX = vEndVelocity;
          _RDX->vVelocity.v[0] = vEndVelocity->v[0];
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+4]
            vmovss  dword ptr [rdx+10h], xmm0
            vmovss  xmm1, dword ptr [rcx+8]
            vmovss  dword ptr [rdx+14h], xmm1
          }
        }
        DropPointToGroundPlane(pointOnNavmesh, &_RDX->vOrigin, &_RDX->vOrigin);
        LOBYTE(v22) = v36 != 0;
        goto LABEL_119;
      }
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rbx]
      vmovss  xmm10, dword ptr [rbp+270h+end]
      vsubss  xmm0, xmm10, xmm4
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm8, xmm1, xmm4
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  xmm11, dword ptr [rbp+270h+end+4]
      vsubss  xmm0, xmm11, xmm6
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm7, xmm1, xmm6
      vmovss  xmm5, dword ptr [rbx+8]
      vmovss  xmm12, dword ptr [rbp+270h+end+8]
      vsubss  xmm0, xmm12, xmm5
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm9, xmm1, xmm5
      vsubss  xmm2, xmm4, xmm8
      vsubss  xmm0, xmm6, xmm7
      vsubss  xmm3, xmm5, xmm9
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm13, xmm2, xmm1
      vsubss  xmm4, xmm4, xmm10
      vsubss  xmm0, xmm6, xmm11
      vsubss  xmm3, xmm5, xmm12
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
      vmovss  xmm3, [rbp+270h+pOutResults.m_DistTraveled]
      vcomiss xmm14, cs:__real@3f800000
    }
    if ( v63 )
    {
      __asm
      {
        vmulss  xmm0, xmm3, xmm3
        vcomiss xmm13, xmm0
      }
      if ( v63 )
        break;
    }
    if ( !pOutResults.m_bCollided )
      break;
    __asm
    {
      vmovss  xmm9, cs:__real@3a83126f
      vcomiss xmm6, xmm9
      vcomiss xmm3, xmm9
      vdivss  xmm0, xmm3, xmm6; val
      vmovss  xmm13, cs:__real@3f800000
      vmovaps xmm2, xmm13; max
      vmovaps xmm1, xmm15; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm14, xmm0
      vcomiss xmm0, cs:__real@3c23d70a
    }
    if ( v34 )
    {
      __asm
      {
        vmovss  xmm12, dword ptr [rbp+270h+end+8]
        vmovss  xmm11, dword ptr [rbp+270h+end+4]
        vmovss  xmm10, dword ptr [rbp+270h+end]
        vmovss  xmm7, [rbp+270h+fTimeLeft]
        vucomiss xmm7, cs:g_apl.fFrameTime
      }
      if ( !v118 )
        goto LABEL_75;
      _RDI = g_pPhys;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+68h]
        vucomiss xmm0, xmm15
      }
      if ( v118 )
      {
        __asm { vucomiss xmm15, dword ptr [rdi+6Ch] }
        if ( v118 )
        {
          __asm { vucomiss xmm15, dword ptr [rdi+70h] }
          if ( v118 )
            goto LABEL_75;
        }
      }
      __asm { vmovss  [rsp+370h+layer], xmm0 }
      if ( (layerf & 0x7F800000) == 2139095040 )
        goto LABEL_123;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+6Ch]
        vmovss  [rsp+370h+layer], xmm0
      }
      if ( (layerg & 0x7F800000) == 2139095040 )
        goto LABEL_123;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+70h]
        vmovss  [rsp+370h+layer], xmm0
      }
      if ( (layerh & 0x7F800000) == 2139095040 )
      {
LABEL_123:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 501, ASSERT_TYPE_ASSERT, "(!IS_NAN( nudgeDirection[0] ) && !IS_NAN( nudgeDirection[1] ) && !IS_NAN( nudgeDirection[2] ))", "%s\n\tAIPhys_NudgeOriginAlongEdge: nudgeDirection is NAN.", "!IS_NAN( nudgeDirection[0] ) && !IS_NAN( nudgeDirection[1] ) && !IS_NAN( nudgeDirection[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+370h+layer], xmm0
      }
      if ( (layeri & 0x7F800000) == 2139095040 )
        goto LABEL_124;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vmovss  [rsp+370h+layer], xmm0
      }
      if ( (layerj & 0x7F800000) == 2139095040 )
        goto LABEL_124;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  [rsp+370h+layer], xmm0
      }
      if ( (layerk & 0x7F800000) == 2139095040 )
      {
LABEL_124:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 502, ASSERT_TYPE_ASSERT, "(!IS_NAN( navmeshPos[0] ) && !IS_NAN( navmeshPos[1] ) && !IS_NAN( navmeshPos[2] ))", "%s\n\tAIPhys_NudgeOriginAlongEdge: navmeshPos is NAN.", "!IS_NAN( navmeshPos[0] ) && !IS_NAN( navmeshPos[1] ) && !IS_NAN( navmeshPos[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm8, cs:__real@3fc00000
        vmulss  xmm1, xmm8, dword ptr [rdi+68h]
        vaddss  xmm2, xmm1, dword ptr [rbx]
        vmovss  dword ptr [rbp+270h+endPos], xmm2
        vmulss  xmm1, xmm8, dword ptr [rdi+6Ch]
        vaddss  xmm2, xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rbp+270h+endPos+4], xmm2
        vmulss  xmm1, xmm8, dword ptr [rdi+70h]
        vaddss  xmm2, xmm1, dword ptr [rbx+8]
        vmovss  dword ptr [rbp+270h+endPos+8], xmm2
      }
      if ( Nav_IsStraightLineReachable(pSpace, pointOnNavmesh, &endPos, (AINavLayer)layer_4, &pPathSpec) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+270h+endPos]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr [rbp+270h+endPos+4]
          vmovss  dword ptr [rbx+4], xmm1
          vmovss  xmm0, dword ptr [rbp+270h+endPos+8]
          vmovss  dword ptr [rbx+8], xmm0
          vdivss  xmm1, xmm8, xmm6
          vaddss  xmm0, xmm1, xmm14; val
          vmovaps xmm2, xmm13; max
          vmovaps xmm1, xmm15; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm0, xmm7
          vsubss  xmm7, xmm7, xmm1
          vmovss  [rbp+270h+fTimeLeft], xmm7
        }
LABEL_100:
        _RDX = g_pPhys;
        goto LABEL_101;
      }
    }
    __asm
    {
      vmovss  xmm12, dword ptr [rbp+270h+end+8]
      vmovss  xmm11, dword ptr [rbp+270h+end+4]
      vmovss  xmm10, dword ptr [rbp+270h+end]
    }
LABEL_75:
    __asm
    {
      vsubss  xmm0, xmm10, dword ptr [rbx]
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm2, xmm1, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm2
      vsubss  xmm0, xmm11, dword ptr [rbx+4]
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm2
      vsubss  xmm0, xmm12, dword ptr [rbx+8]
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm2
      vmovss  xmm0, dword ptr [rbp+270h+pOutResults.m_edgeEndPos]
      vsubss  xmm6, xmm0, dword ptr [rbp+270h+pOutResults.m_edgeStartPos]
      vmovss  xmm1, dword ptr [rbp+270h+pOutResults.m_edgeEndPos+4]
      vsubss  xmm7, xmm1, dword ptr [rbp+270h+pOutResults.m_edgeStartPos+4]
      vmovss  xmm0, dword ptr [rbp+270h+pOutResults.m_edgeEndPos+8]
      vsubss  xmm8, xmm0, dword ptr [rbp+270h+pOutResults.m_edgeStartPos+8]
      vmovss  dword ptr [rbp+270h+adjusted], xmm15
      vmovss  dword ptr [rbp+270h+adjusted+4], xmm15
      vmovss  dword ptr [rbp+270h+adjusted+8], xmm15
      vmovaps xmm1, xmm13; height
    }
    AdjustUp(&adjusted, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vmovss  xmm11, cs:__real@80000000
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm1, xmm3, xmm13, xmm0
      vmovss  [rsp+370h+layer], xmm1
      vdivss  xmm0, xmm13, xmm1
      vmulss  xmm6, xmm6, xmm0
      vmovss  dword ptr [rbp+270h+v1], xmm6
      vmulss  xmm7, xmm0, xmm7
      vmovss  dword ptr [rbp+270h+v1+4], xmm7
      vmulss  xmm8, xmm0, xmm8
      vmovss  dword ptr [rbp+270h+v1+8], xmm8
      vmovss  xmm3, dword ptr [rbp+270h+adjusted+4]
      vmulss  xmm1, xmm7, xmm3
      vmovss  xmm4, dword ptr [rbp+270h+adjusted]
      vmulss  xmm0, xmm6, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm5, dword ptr [rbp+270h+adjusted+8]
      vmulss  xmm1, xmm8, xmm5
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm0, xmm0, xmm9
      vmovss  xmm10, cs:__real@3f7fbe77
      vcomiss xmm0, xmm10
    }
    if ( !(v162 | v118) )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rbp+270h+pOutResults.m_areaNormal]
        vmovss  dword ptr [rbp+270h+adjusted], xmm4
        vmovss  xmm3, dword ptr [rbp+270h+pOutResults.m_areaNormal+4]
        vmovss  dword ptr [rbp+270h+adjusted+4], xmm3
        vmovss  xmm5, dword ptr [rbp+270h+pOutResults.m_areaNormal+8]
        vmovss  dword ptr [rbp+270h+adjusted+8], xmm5
      }
    }
    __asm
    {
      vmulss  xmm1, xmm7, xmm3
      vmulss  xmm0, xmm6, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm5
      vaddss  xmm3, xmm2, xmm1
      vandps  xmm3, xmm3, xmm9
      vcomiss xmm3, xmm10
    }
    if ( v162 )
    {
      Vec3Cross(&adjusted, &v1, &cross);
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+270h+cross+4]
        vmulss  xmm1, xmm6, xmm6
        vmovss  xmm4, dword ptr [rbp+270h+cross]
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm5, dword ptr [rbp+270h+cross+8]
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, xmm11
        vblendvps xmm1, xmm3, xmm13, xmm0
        vmovss  [rsp+370h+layer], xmm1
        vdivss  xmm0, xmm13, xmm1
        vmulss  xmm9, xmm4, xmm0
        vmovss  dword ptr [rbp+270h+cross], xmm9
        vmulss  xmm8, xmm6, xmm0
        vmovss  dword ptr [rbp+270h+cross+4], xmm8
        vmulss  xmm10, xmm5, xmm0
        vmovss  dword ptr [rbp+270h+cross+8], xmm10
        vmovss  xmm4, cs:__real@3d4ccccd
        vmulss  xmm0, xmm9, xmm4
        vaddss  xmm2, xmm0, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm2
        vmulss  xmm1, xmm8, xmm4
        vaddss  xmm3, xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rbx+4], xmm3
        vmulss  xmm0, xmm10, xmm4
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
        vmovss  [rsp+370h+layer], xmm2
      }
      if ( (layerm & 0x7F800000) == 2139095040 )
        goto LABEL_125;
      __asm { vmovss  [rsp+370h+layer], xmm3 }
      if ( (layern & 0x7F800000) == 2139095040 )
        goto LABEL_125;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+270h+var_250+8]
        vmovss  [rsp+370h+layer], xmm0
      }
      if ( (layero & 0x7F800000) == 2139095040 )
      {
LABEL_125:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 918, ASSERT_TYPE_ASSERT, "(!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( closestVerticalPos[2] ))", "%s\n\tActor_Physics: pointOnNavmesh is NAN after backing away from edge.", "!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( closestVerticalPos[2] )") )
          __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rbp+270h+cross+4]
        vmovss  xmm9, dword ptr [rbp+270h+cross]
        vmovss  xmm10, dword ptr [rbp+270h+cross+8]
      }
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_showNavPhysics, "ai_showNavPhysics") )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+270h+pOutResults.m_edgeStartPos]
        vmovss  dword ptr [rbp+270h+start], xmm0
        vmovss  xmm1, dword ptr [rbp+270h+pOutResults.m_edgeStartPos+4]
        vmovss  dword ptr [rbp+270h+start+4], xmm1
        vaddss  xmm2, xmm13, dword ptr [rbp+270h+pOutResults.m_edgeStartPos+8]
        vmovss  dword ptr [rbp+270h+start+8], xmm2
        vmovss  xmm1, dword ptr [rbp+270h+pOutResults.m_edgeEndPos]
        vmovss  dword ptr [rbp+270h+var_240], xmm1
        vmovss  xmm0, dword ptr [rbp+270h+pOutResults.m_edgeEndPos+4]
        vmovss  dword ptr [rbp+270h+var_240+4], xmm0
        vaddss  xmm2, xmm13, dword ptr [rbp+270h+pOutResults.m_edgeEndPos+8]
        vmovss  dword ptr [rbp+270h+var_240+8], xmm2
      }
      G_DebugLineWithDuration(&start, &v324, &colorBlue, 0, 1);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+270h+var_240]
        vsubss  xmm2, xmm0, dword ptr [rbp+270h+start]
        vmovss  xmm1, dword ptr [rbp+270h+var_240+4]
        vsubss  xmm3, xmm1, dword ptr [rbp+270h+start+4]
        vmovss  xmm0, dword ptr [rbp+270h+var_240+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+270h+start+8]
        vmovss  xmm11, cs:__real@3f000000
        vmulss  xmm1, xmm2, xmm11
        vaddss  xmm5, xmm1, dword ptr [rbp+270h+start]
        vmovss  dword ptr [rbp+270h+start], xmm5
        vmulss  xmm0, xmm3, xmm11
        vaddss  xmm3, xmm0, dword ptr [rbp+270h+start+4]
        vmovss  dword ptr [rbp+270h+start+4], xmm3
        vmulss  xmm1, xmm4, xmm11
        vaddss  xmm4, xmm1, dword ptr [rbp+270h+start+8]
        vmovss  dword ptr [rbp+270h+start+8], xmm4
        vmovss  xmm6, cs:__real@41800000
        vmulss  xmm0, xmm9, xmm6
        vaddss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rbp+270h+var_240], xmm1
        vmulss  xmm2, xmm8, xmm6
        vaddss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbp+270h+var_240+4], xmm0
        vmulss  xmm1, xmm10, xmm6
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rbp+270h+var_240+8], xmm2
      }
      G_DebugLineWithDuration(&start, &v324, &colorCyan, 0, 1);
    }
LABEL_86:
    __asm
    {
      vmovss  xmm1, [rbp+270h+fTimeLeft]
      vmulss  xmm0, xmm14, xmm1
      vsubss  xmm1, xmm1, xmm0
      vmovss  [rbp+270h+fTimeLeft], xmm1
    }
    _RDX = g_pPhys;
    g_pPhys->bDeflected = 1;
    if ( (int)v20 >= 5 )
    {
      *(_QWORD *)_RDX->vVelocity.v = 0i64;
      _RDX->vVelocity.v[2] = 0.0;
      DropPointToGroundPlane(pointOnNavmesh, &_RDX->vOrigin, &_RDX->vOrigin);
      goto LABEL_118;
    }
    v246 = 0;
    v247 = 0i64;
    v248 = v37 == 0;
    v249 = v37 == 0;
    if ( v37 > 0 )
    {
      v250 = &planes->v[2];
      while ( 1 )
      {
        __asm
        {
          vmulss  xmm1, xmm9, dword ptr [rax-8]
          vmulss  xmm0, xmm8, dword ptr [rax-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm10, dword ptr [rax]
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, cs:__real@3f7d70a4
        }
        if ( !v249 )
          break;
        ++v246;
        ++v247;
        v250 += 3;
        v248 = v247 == v37;
        v249 = v247 <= (unsigned __int64)v37;
        if ( v247 >= v37 )
          goto LABEL_98;
      }
      __asm { vucomiss xmm14, xmm15 }
      if ( v248 && _RDX->iHitEntnum == 2047 )
      {
        __asm { vucomiss xmm9, xmm15 }
        if ( _RDX->iHitEntnum != 2047 )
          goto LABEL_96;
        __asm { vucomiss xmm8, xmm15 }
        if ( _RDX->iHitEntnum != 2047 )
        {
LABEL_96:
          _RDX->vHitOrigin.v[0] = pointOnNavmesh->v[0];
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vmovss  dword ptr [rdx+104h], xmm0
            vmovss  xmm1, dword ptr [rbx+8]
            vmovss  dword ptr [rdx+108h], xmm1
            vmovss  dword ptr [rdx+10Ch], xmm9
            vmovss  dword ptr [rdx+110h], xmm8
            vmovss  dword ptr [rdx+114h], xmm10
          }
          _RDX->bStuck = 0;
        }
      }
      __asm
      {
        vaddss  xmm0, xmm9, dword ptr [rdx+0Ch]
        vmovss  dword ptr [rdx+0Ch], xmm0
        vaddss  xmm1, xmm8, dword ptr [rdx+10h]
        vmovss  dword ptr [rdx+10h], xmm1
        vaddss  xmm0, xmm10, dword ptr [rdx+14h]
        vmovss  dword ptr [rdx+14h], xmm0
      }
    }
LABEL_98:
    if ( v246 >= (int)v20 )
    {
      _RDI = v314;
      __asm
      {
        vmovss  dword ptr [rdi-8], xmm9
        vmovss  dword ptr [rdi-4], xmm8
        vmovss  dword ptr [rdi], xmm10
      }
      isWalkable[v37] = 0;
      LODWORD(v20) = v20 + 1;
      ++v37;
      v314 += 3;
      if ( !AIPhys_ClipVelocityToAllPlanes(v20, planes, isWalkable, vEndVelocity, &vEndClipVelocity) )
      {
        DropPointToGroundPlane(pointOnNavmesh, &g_pPhys->vOrigin, &g_pPhys->vOrigin);
        goto LABEL_118;
      }
      goto LABEL_100;
    }
LABEL_101:
    v34 = (unsigned int)++v36 < 4;
    if ( v36 >= 4 )
      goto LABEL_104;
    p_hSpace = &pSpace->hSpace;
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm8
    vmovss  dword ptr [rbx+4], xmm7
    vmovss  dword ptr [rbx+8], xmm9
    vmovss  [rsp+370h+layer], xmm8
  }
  if ( (layerc & 0x7F800000) == 2139095040 )
    goto LABEL_126;
  __asm { vmovss  [rsp+370h+layer], xmm7 }
  if ( (layerd & 0x7F800000) == 2139095040 )
    goto LABEL_126;
  __asm { vmovss  [rsp+370h+layer], xmm9 }
  if ( (layere & 0x7F800000) == 2139095040 )
  {
LABEL_126:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 821, ASSERT_TYPE_ASSERT, "(!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( pointOnNavmesh[2] ))", "%s\n\tActor_Physics: traceEndPos of AIPhys_Trace is invalid", "!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( pointOnNavmesh[2] )") )
      __debugbreak();
    __asm { vmovss  xmm14, [rbp+270h+results.fraction] }
  }
  __asm
  {
    vmovss  xmm9, dword ptr [rbp+270h+results.normal]
    vmovss  dword ptr [rbp+270h+cross], xmm9
    vmovss  xmm8, dword ptr [rbp+270h+results.normal+4]
    vmovss  dword ptr [rbp+270h+cross+4], xmm8
    vmovss  xmm10, dword ptr [rbp+270h+results.normal+8]
    vmovss  dword ptr [rbp+270h+cross+8], xmm10
  }
  Trace_GetEntityHitId(&results);
  if ( !results.startsolid )
  {
    v102 = g_pPhys;
    g_pPhys->bDeflected = 1;
    if ( !results.walkable && v102->iHitEntnum == 2047 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+270h+results.normal]
        vucomiss xmm0, xmm15
      }
      if ( v102->iHitEntnum != 2047 )
        goto LABEL_54;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+270h+results.normal+4]
        vucomiss xmm0, xmm15
      }
      if ( v102->iHitEntnum != 2047 )
      {
LABEL_54:
        EntityHitId = Trace_GetEntityHitId(&results);
        _RCX = g_pPhys;
        g_pPhys->iHitEntnum = EntityHitId;
        _RCX->vHitOrigin.v[0] = pointOnNavmesh->v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  dword ptr [rcx+104h], xmm0
          vmovss  xmm1, dword ptr [rbx+8]
          vmovss  dword ptr [rcx+108h], xmm1
          vmovss  xmm0, dword ptr [rbp+270h+results.normal]
          vmovss  dword ptr [rcx+10Ch], xmm0
          vmovss  xmm1, dword ptr [rbp+270h+results.normal+4]
          vmovss  dword ptr [rcx+110h], xmm1
          vmovss  xmm0, dword ptr [rbp+270h+results.normal+8]
          vmovss  dword ptr [rcx+114h], xmm0
        }
        _RCX->bStuck = 0;
      }
    }
    v112 = Trace_GetEntityHitId(&results);
    if ( v112 != 2047 )
      AIPhys_AddTouchEnt(v112);
    goto LABEL_86;
  }
  v268 = g_pPhys;
  g_pPhys->vVelocity.v[2] = 0.0;
  if ( !v36 && g_apl.groundTrace.startsolid )
  {
    v22 = 2;
    goto LABEL_117;
  }
  DropPointToGroundPlane(pointOnNavmesh, &v268->vOrigin, &v268->vOrigin);
  if ( g_pPhys->iHitEntnum == 2047 )
  {
    v269 = Trace_GetEntityHitId(&results);
    _RCX = g_pPhys;
    g_pPhys->iHitEntnum = v269;
    _RCX->vHitOrigin.v[0] = _RCX->vOrigin.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+4]
      vmovss  dword ptr [rcx+104h], xmm0
      vmovss  xmm1, dword ptr [rcx+8]
      vmovss  dword ptr [rcx+108h], xmm1
    }
    _RCX->bStuck = 1;
  }
LABEL_118:
  v22 = v38;
LABEL_119:
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  result = v22;
  _R11 = &v333;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
AIPhys_ClipVelocity
==============
*/
void AIPhys_ClipVelocity(const vec3_t *in, const vec3_t *normal, bool isWalkable, vec3_t *out)
{
  int v33; 
  bool v35; 
  __int64 v42; 
  __int64 v43; 

  _RDI = in;
  if ( isWalkable )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rcx+4]
      vmovss  xmm4, dword ptr [rcx]
      vmovss  xmm3, dword ptr [rcx+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vcomiss xmm2, xmm1
      vmulss  xmm0, xmm4, dword ptr [rdx]
      vmulss  xmm1, xmm5, dword ptr [rdx+4]
      vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      vsubss  xmm0, xmm2, xmm1
      vmovss  dword ptr [r9+8], xmm0
      vmovss  xmm1, dword ptr [rdx+8]
      vmulss  xmm0, xmm1, dword ptr [rcx]
      vmovss  dword ptr [r9], xmm0
      vmovss  xmm2, dword ptr [rdx+8]
      vmulss  xmm1, xmm2, dword ptr [rcx+4]
      vmovss  dword ptr [r9+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+4]
      vmulss  xmm3, xmm0, dword ptr [rdx+4]
      vmovss  xmm1, dword ptr [rcx]
      vmulss  xmm2, xmm1, dword ptr [rdx]
      vmovss  xmm0, dword ptr [rcx+8]
      vmulss  xmm1, xmm0, dword ptr [rdx+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm3, xmm4, xmm1
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm3, xmm2
      vmovaps [rsp+68h+var_18], xmm6
      vmovaps [rsp+68h+var_28], xmm7
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm0, xmm0, [rsp+68h+overbounce]
    }
    v33 = 0;
    _RBP = (char *)out - (char *)in;
    v35 = 1;
    __asm { vmulss  xmm7, xmm0, xmm3 }
    do
    {
      if ( !v35 )
      {
        LODWORD(v43) = 3;
        LODWORD(v42) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      __asm { vmulss  xmm6, xmm7, dword ptr [rsi+rdi] }
      if ( (unsigned int)v33 >= 3 )
      {
        LODWORD(v43) = 3;
        LODWORD(v42) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm6, xmm0, xmm6
      }
      if ( (unsigned int)v33 >= 3 )
      {
        LODWORD(v43) = 3;
        LODWORD(v42) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi+rbp], xmm6 }
      _RDI = (const vec3_t *)((char *)_RDI + 4);
      v35 = (unsigned int)++v33 < 3;
    }
    while ( v33 < 3 );
    __asm
    {
      vmovaps xmm7, [rsp+68h+var_28]
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
}

/*
==============
AIPhys_ClipVelocityToAllPlanes
==============
*/
bool AIPhys_ClipVelocityToAllPlanes(const int iNumPlanes, const vec3_t *planes, const bool *walkable, vec3_t *vEndVelocity, vec3_t *vEndClipVelocity)
{
  vec3_t *v16; 
  __int64 v17; 
  int v20; 
  float *v22; 
  __int64 v24; 
  bool v25; 
  unsigned __int64 v26; 
  bool result; 
  __int64 v38; 
  int v46; 
  unsigned __int64 v47; 
  const vec3_t *v48; 
  int v49; 
  char *v53; 
  const vec3_t *v58; 
  __int64 v107; 
  float *v129; 
  actor_physics_t *v149; 
  float *v157; 
  vec3_t out; 
  char v159[16]; 

  _R13 = vEndClipVelocity;
  v16 = vEndVelocity;
  v17 = iNumPlanes;
  if ( iNumPlanes > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 409, ASSERT_TYPE_ASSERT, "(iNumPlanes <= 5)", (const char *)&queryFormat, "iNumPlanes <= MAX_CLIP_PLANES") )
    __debugbreak();
  v20 = 0;
  __asm
  {
    vmovaps [rsp+158h+var_48], xmm6
    vmovaps [rsp+158h+var_A8], xmm12
  }
  if ( (int)v17 <= 0 )
  {
LABEL_8:
    result = 1;
    goto LABEL_37;
  }
  _R10 = g_pPhys;
  v22 = &planes->v[2];
  __asm { vmovss  xmm12, cs:__real@3dcccccd }
  v24 = v17;
  v157 = &planes->v[2];
  v25 = 0;
  v26 = 0i64;
  __asm
  {
    vmovss  xmm5, dword ptr [r10+10h]
    vmovss  xmm6, dword ptr [r10+0Ch]
    vmovss  xmm4, dword ptr [r10+14h]
  }
  while ( 1 )
  {
    __asm
    {
      vmulss  xmm1, xmm5, dword ptr [rax-4]
      vmulss  xmm0, xmm6, dword ptr [rax-8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, dword ptr [rax]
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm12
    }
    if ( v25 )
      break;
    ++v20;
    ++v26;
    v22 += 3;
    v25 = v26 < v17;
    if ( (__int64)v26 >= v17 )
      goto LABEL_8;
  }
  __asm
  {
    vmovss  xmm1, cs:g_apl.fImpactSpeed
    vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
    vmovaps [rsp+158h+var_78], xmm9
  }
  v38 = v20;
  __asm
  {
    vmovaps [rsp+158h+var_88], xmm10
    vmovaps [rsp+158h+var_98], xmm11
    vmovaps [rsp+158h+var_B8], xmm13
    vmovss  xmm13, cs:__real@3f8020c5
    vcmpltss xmm0, xmm1, xmm2
    vmovaps [rsp+158h+var_C8], xmm14
    vblendvps xmm0, xmm1, xmm2, xmm0
    vmovaps [rsp+158h+var_D8], xmm15
    vmovss  cs:g_apl.fImpactSpeed, xmm0
    vmovss  dword ptr [rsp+158h+fmt], xmm13
  }
  AIPhys_ClipVelocity(&g_pPhys->vVelocity, &planes[v38], walkable[v38], &out);
  __asm { vmovss  dword ptr [rsp+158h+fmt], xmm13 }
  AIPhys_ClipVelocity(v16, &planes[v38], walkable[v38], vEndClipVelocity);
  __asm
  {
    vmovss  xmm14, cs:__real@3f800000
    vmovss  xmm9, dword ptr [rsp+158h+out+8]
    vmovss  xmm10, dword ptr [rsp+158h+out+4]
    vmovss  xmm11, dword ptr [rsp+158h+out]
  }
  v46 = 0;
  __asm { vmovaps [rsp+158h+var_58], xmm7 }
  v47 = 0i64;
  __asm { vmovaps [rsp+158h+var_68], xmm8 }
  v48 = planes;
  v49 = v17;
  _R15 = &planes->v[1];
  __asm { vxorps  xmm15, xmm15, xmm15 }
  while ( v47 == v26 )
  {
LABEL_34:
    ++v46;
    ++v47;
    _R15 += 3;
    if ( v46 >= v49 )
    {
      _RCX = g_pPhys;
      __asm
      {
        vsubss  xmm0, xmm11, dword ptr [rcx+0Ch]
        vsubss  xmm1, xmm10, dword ptr [rcx+10h]
        vsubss  xmm2, xmm9, dword ptr [rcx+14h]
      }
      g_pPhys->vHitOrigin = g_pPhys->vOrigin;
      __asm
      {
        vmovss  dword ptr [rcx+10Ch], xmm0
        vmovss  dword ptr [rcx+110h], xmm1
        vmovss  dword ptr [rcx+114h], xmm2
      }
      _RCX->bStuck = 0;
      __asm
      {
        vmovss  dword ptr [rcx+0Ch], xmm11
        vmovss  dword ptr [rcx+10h], xmm10
        vmovss  dword ptr [rcx+14h], xmm9
      }
      *v16 = *vEndClipVelocity;
      result = 1;
      goto LABEL_36;
    }
  }
  __asm { vmulss  xmm0, xmm10, dword ptr [r15] }
  v53 = (char *)(_R15 - 1);
  __asm
  {
    vmulss  xmm1, xmm11, dword ptr [rbp+0]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [r15+4]
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, xmm12
  }
  if ( v47 >= v26 )
    goto LABEL_33;
  __asm { vmovss  dword ptr [rsp+158h+fmt], xmm13 }
  v58 = &v48[v46];
  AIPhys_ClipVelocity(&out, v58, walkable[v47], &out);
  __asm { vmovss  dword ptr [rsp+158h+fmt], xmm13 }
  AIPhys_ClipVelocity(vEndClipVelocity, v58, walkable[v47], vEndClipVelocity);
  v48 = planes;
  __asm
  {
    vmovss  xmm10, dword ptr [rsp+158h+out+4]
    vmulss  xmm1, xmm10, dword ptr [rdx+rax*4+4]
    vmovss  xmm11, dword ptr [rsp+158h+out]
    vmulss  xmm0, xmm11, dword ptr [rdx+rax*4]
    vmovss  xmm9, dword ptr [rsp+158h+out+8]
  }
  _RBX = (char *)&planes[v26];
  __asm
  {
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm9, dword ptr [rbx+8]
    vaddss  xmm1, xmm2, xmm0
    vcomiss xmm1, xmm15
  }
  if ( !v25 )
  {
    v49 = v24;
LABEL_33:
    v16 = vEndVelocity;
    goto LABEL_34;
  }
  if ( _RBX == v159 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( v53 == v159 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [r15+4]
    vmovss  xmm4, dword ptr [rbx+8]
    vmovss  xmm6, dword ptr [r15]
    vmovss  xmm7, dword ptr [rbx+4]
    vmulss  xmm2, xmm6, dword ptr [rbx]
    vmulss  xmm0, xmm6, xmm4
    vmulss  xmm1, xmm7, xmm5
    vsubss  xmm8, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbp+0]
    vmulss  xmm0, xmm5, dword ptr [rbx]
    vsubss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rbp+0]
    vsubss  xmm6, xmm2, xmm1
    vmulss  xmm3, xmm4, xmm4
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm14, xmm0
    vdivss  xmm1, xmm14, xmm0
    vmulss  xmm5, xmm8, xmm1
    vmulss  xmm0, xmm5, dword ptr [rax+0Ch]
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm3, xmm6, xmm1
    vmulss  xmm1, xmm4, dword ptr [rax+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rax+14h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm11, xmm5, xmm0
    vmulss  xmm10, xmm4, xmm0
    vmulss  xmm9, xmm3, xmm0
    vmovss  dword ptr [rsp+158h+out], xmm11
    vmovss  dword ptr [rsp+158h+out+4], xmm10
    vmovss  dword ptr [rsp+158h+out+8], xmm9
  }
  if ( _RBX == v159 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( v53 == v159 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [r15+4]
    vmovss  xmm4, dword ptr [rbx+8]
    vmovss  xmm6, dword ptr [r15]
    vmulss  xmm2, xmm6, dword ptr [rbx]
    vmovss  xmm7, dword ptr [rbx+4]
    vmulss  xmm0, xmm6, xmm4
    vmulss  xmm1, xmm5, xmm7
    vsubss  xmm8, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbp+0]
    vmulss  xmm0, xmm5, dword ptr [rbx]
    vsubss  xmm4, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rbp+0]
  }
  v16 = vEndVelocity;
  v107 = 0i64;
  __asm
  {
    vsubss  xmm5, xmm2, xmm1
    vmulss  xmm3, xmm4, xmm4
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm14, xmm0
    vdivss  xmm1, xmm14, xmm0
    vmulss  xmm6, xmm8, xmm1
    vmulss  xmm0, xmm6, dword ptr [rbp+0]
    vmulss  xmm5, xmm5, xmm1
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm1, xmm4, dword ptr [rbp+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbp+8]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm3, xmm6
    vmovss  dword ptr [r13+0], xmm0
    vmulss  xmm0, xmm5, xmm3
    vmulss  xmm1, xmm4, xmm3
    vmovss  dword ptr [r13+8], xmm0
    vmovss  dword ptr [r13+4], xmm1
  }
  if ( v24 <= 0 )
  {
LABEL_31:
    v48 = planes;
    v49 = v24;
    goto LABEL_34;
  }
  v129 = v157;
  while ( 1 )
  {
    if ( v107 != v26 && v107 != v47 )
    {
      __asm
      {
        vmulss  xmm1, xmm11, dword ptr [rcx-8]
        vmulss  xmm0, xmm10, dword ptr [rcx-4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, dword ptr [rcx]
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm12
      }
      if ( v107 < v47 )
        break;
    }
    ++v107;
    v129 += 3;
    if ( v107 >= v24 )
      goto LABEL_31;
  }
  v149 = g_pPhys;
  *(_QWORD *)g_pPhys->vVelocity.v = 0i64;
  v149->vVelocity.v[2] = 0.0;
  result = 0;
LABEL_36:
  __asm
  {
    vmovaps xmm8, [rsp+158h+var_68]
    vmovaps xmm7, [rsp+158h+var_58]
    vmovaps xmm11, [rsp+158h+var_98]
    vmovaps xmm10, [rsp+158h+var_88]
    vmovaps xmm9, [rsp+158h+var_78]
    vmovaps xmm13, [rsp+158h+var_B8]
    vmovaps xmm14, [rsp+158h+var_C8]
    vmovaps xmm15, [rsp+158h+var_D8]
  }
LABEL_37:
  __asm
  {
    vmovaps xmm12, [rsp+158h+var_A8]
    vmovaps xmm6, [rsp+158h+var_48]
  }
  return result;
}

/*
==============
AIPhys_DetermineStairsState
==============
*/

actor_physics_t *__fastcall AIPhys_DetermineStairsState(__int64 a1, double _XMM1_8)
{
  actor_physics_t *result; 
  AIScriptedInterface *m_pAI; 
  bool v4; 
  __int64 v5; 
  bool v6; 
  actor_physics_t *v8; 
  AIWrapper v10; 

  result = g_pPhys;
  if ( !g_pPhys->bSpace )
  {
    AIWrapper::AIWrapper(&v10, &g_entities[g_pPhys->iEntNum]);
    m_pAI = v10.m_pAI;
    result = g_pPhys;
    if ( !v10.m_pAI )
      goto LABEL_10;
    if ( g_pPhys->bAllSlopesAreStairs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2584, ASSERT_TYPE_ASSERT, "( !g_pPhys->bAllSlopesAreStairs )", "Unimplemented feature since it's probably obsolete.") )
      __debugbreak();
    v4 = !Path_TraceHitStairs(&g_apl.groundTrace);
    result = g_pPhys;
    if ( v4 )
    {
LABEL_10:
      result->stairsState = AI_STAIRS_NONE;
    }
    else
    {
      v6 = g_pPhys->stairsState != AI_STAIRS_NONE;
      __asm { vxorps  xmm1, xmm1, xmm1 }
      result = (actor_physics_t *)((__int64 (__fastcall *)(AIScriptedInterface *, __int64, bool))m_pAI->GetStairsStateWithinDist)(m_pAI, v5, v6);
      v8 = g_pPhys;
      g_pPhys->stairsState = (int)result;
      if ( !(_DWORD)result )
      {
        __asm { vmovss  xmm1, cs:__real@41700000 }
        result = (actor_physics_t *)((__int64 (__fastcall *)(AIScriptedInterface *, actor_physics_t *, bool))m_pAI->GetStairsStateWithinDist)(m_pAI, v8, v6);
        g_pPhys->stairsState = (int)result;
      }
    }
  }
  return result;
}

/*
==============
AIPhys_DoGroundShapecast
==============
*/
void AIPhys_DoGroundShapecast(trace_t *trace, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int entNum, int contentmask)
{
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hknpShape *ShapeCapsuleUpAxis; 
  hkMemoryAllocator *v19; 
  hkMemoryAllocator *v20; 
  HavokPhysics_IgnoreBodies v21; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v23; 
  char optionalInplaceBuffer[432]; 

  v23 = -2i64;
  _RBX = bounds;
  ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_FIRST);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  HavokPhysics_CollisionQueryResult::Reset(g_physicsQueryStartResult, 1);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+0Ch]; radius
    vmovss  xmm0, dword ptr [rbx+14h]
    vsubss  xmm2, xmm0, xmm3; halfHeight
  }
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &_RBX->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+2B8h+extendedData.startTolerance], xmm1
    vmovss  xmm0, cs:__real@3c83126f
    vmovss  [rsp+2B8h+extendedData.accuracy], xmm0
  }
  extendedData.simplifyStart = 0;
  __asm
  {
    vmovss  [rsp+2B8h+extendedData.collisionBuffer], xmm1
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2B8h+extendedData.nonBrushShape], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = contentmask;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v21, entNum != 2047, 0);
  if ( entNum != 2047 )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v21, 0, entNum, 1, 1, 0, 1, 1);
  extendedData.ignoreBodies = &v21;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, ClosestResult, g_physicsQueryStartResult);
  Physics_ConvertShapeQueryResultToLegacyTrace(ClosestResult, g_physicsQueryStartResult, trace);
  v19 = hkMemHeapAllocator();
  v21.m_ignoreBodies.m_size = 0;
  if ( v21.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v19, v21.m_ignoreBodies.m_data, 4, v21.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v21.m_ignoreBodies.m_data = NULL;
  v21.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v20 = hkMemHeapAllocator();
  v21.m_ignoreEntities.m_size = 0;
  if ( v21.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v20, v21.m_ignoreEntities.m_data, 8, v21.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
AIPhys_DoGroundTrace
==============
*/
void AIPhys_DoGroundTrace(trace_t *trace, const vec3_t *start, const vec3_t *end)
{
  char v3; 
  int contentmask; 
  const dvar_t *v18; 
  int iEntNum; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hkMemoryAllocator *v22; 
  hkMemoryAllocator *v23; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v25; 
  __int64 v26; 
  Bounds bounds; 

  v26 = -2i64;
  _RAX = g_pPhys;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax+88h]
    vmovups xmmword ptr [rbp+57h+bounds.midPoint], xmm1
    vmovsd  xmm3, qword ptr [rax+98h]
    vshufps xmm1, xmm1, xmm1, 0FFh
    vaddss  xmm2, xmm1, cs:__real@bfc00000
    vmovss  dword ptr [rbp+57h+bounds.halfSize], xmm2
    vmovsd  qword ptr [rbp+57h+bounds.halfSize+4], xmm3
  }
  bounds.halfSize.v[2] = *((float *)&_RT0 + 1);
  __asm
  {
    vaddss  xmm0, xmm3, cs:__real@bfc00000
    vmovss  dword ptr [rbp+57h+bounds.halfSize+4], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+bounds.halfSize+8]
    vsubss  xmm3, xmm1, cs:__real@40a00000
    vcomiss xmm3, xmm2
  }
  if ( !v3 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+bounds.midPoint+8]
      vaddss  xmm1, xmm0, cs:__real@c0a00000
      vmovss  dword ptr [rbp+57h+bounds.midPoint+8], xmm1
      vmovss  dword ptr [rbp+57h+bounds.halfSize+8], xmm3
    }
  }
  contentmask = g_apl.iTraceMask & 0xFDFFBFFF;
  v18 = DCONST_DVARBOOL_ai_useLegacyGroundTrace;
  if ( !DCONST_DVARBOOL_ai_useLegacyGroundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useLegacyGroundTrace") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AIPhys_DoGroundTrace");
    AIPhys_Trace(trace, start, end, &bounds, g_pPhys->iEntNum, contentmask);
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AIPhys_DoGroundTrace");
    AIPhys_DoGroundShapecast(trace, start, end, &bounds, g_pPhys->iEntNum, contentmask);
  }
  Sys_ProfEndNamedEvent();
  if ( !trace->walkable || trace->startsolid )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AIPhys_DoGroundRaycast");
    iEntNum = g_pPhys->iEntNum;
    ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_FIRST);
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    HavokPhysics_CollisionQueryResult::Reset(g_physicsQueryStartResult, 1);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rbp+57h+extendedData.collisionBuffer], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = contentmask;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v25, iEntNum != 2047, 0);
    if ( iEntNum != 2047 )
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v25, 0, iEntNum, 1, 1, 0, 1, 1);
    extendedData.ignoreBodies = &v25;
    Physics_Raycast(PHYSICS_WORLD_ID_FIRST, start, end, &extendedData, ClosestResult);
    Physics_ConvertRayQueryResultToLegacyTrace(ClosestResult, NULL, NULL, trace);
    v22 = hkMemHeapAllocator();
    v25.m_ignoreBodies.m_size = 0;
    if ( v25.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v22, v25.m_ignoreBodies.m_data, 4, v25.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v25.m_ignoreBodies.m_data = NULL;
    v25.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v23 = hkMemHeapAllocator();
    v25.m_ignoreEntities.m_size = 0;
    if ( v25.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v23, v25.m_ignoreEntities.m_data, 8, v25.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
AIPhys_DoTrace
==============
*/
void AIPhys_DoTrace(trace_t *trace, const vec3_t *start, const vec3_t *end)
{
  char v3; 
  Bounds bounds; 

  _RAX = g_pPhys;
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+98h]
    vmovups xmm2, xmmword ptr [rax+88h]
    vshufps xmm1, xmm0, xmm0, 55h ; 'U'
    vsubss  xmm3, xmm1, cs:__real@40a00000
    vmovups xmmword ptr [rsp+68h+bounds.midPoint], xmm2
    vshufps xmm2, xmm2, xmm2, 0FFh
    vcomiss xmm3, xmm2
    vmovsd  qword ptr [rsp+68h+bounds.halfSize+4], xmm0
  }
  if ( !v3 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+bounds.midPoint+8]
      vaddss  xmm1, xmm0, cs:__real@c0a00000
      vmovss  dword ptr [rsp+68h+bounds.midPoint+8], xmm1
      vmovss  dword ptr [rsp+68h+bounds.halfSize+8], xmm3
    }
  }
  Profile_Begin(268);
  AIPhys_Trace(trace, start, end, &bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
  Profile_EndInternal(NULL);
}

/*
==============
AIPhys_FoliageSounds
==============
*/
void AIPhys_FoliageSounds()
{
  char v12; 
  const dvar_t *v13; 
  const dvar_t *v16; 
  char v19; 
  const dvar_t *v24; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  Bounds bounds; 
  trace_t results; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RAX = g_pPhys;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+0Ch]
    vmovss  xmm0, dword ptr [rax+10h]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm7, xmm2, xmm2
  }
  _RBX = DCONST_DVARFLT_bg_foliagesnd_minspeed;
  if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm7, dword ptr [rbx+28h] }
  if ( v12 )
  {
    v13 = DCONST_DVARINT_bg_foliagesnd_resetinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_resetinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_resetinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( g_pPhys->foliageSoundTime + v13->current.integer < level.time )
      g_pPhys->foliageSoundTime = 0;
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "AIPhys_FoliageSounds");
    _RBX = DCONST_DVARFLT_bg_foliagesnd_maxspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_maxspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_maxspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v16 = DCONST_DVARFLT_bg_foliagesnd_minspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    __asm
    {
      vsubss  xmm1, xmm6, dword ptr [rbx+28h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( v12 | v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2540, ASSERT_TYPE_SANITY, "( Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_foliagesnd_maxspeed, \"bg_foliagesnd_maxspeed\" ) - Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_foliagesnd_minspeed, \"bg_foliagesnd_minspeed\" ) > 0 )", (const char *)&queryFormat, "Dconst_GetFloat( bg_foliagesnd_maxspeed ) - Dconst_GetFloat( bg_foliagesnd_minspeed ) > 0") )
      __debugbreak();
    _RBX = DCONST_DVARFLT_bg_foliagesnd_minspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_bg_foliagesnd_maxspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_maxspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_maxspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v24 = DCONST_DVARFLT_bg_foliagesnd_minspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    __asm
    {
      vsubss  xmm1, xmm7, xmm8
      vsubss  xmm0, xmm6, dword ptr [rbx+28h]
      vdivss  xmm1, xmm1, xmm0
      vminss  xmm6, xmm1, cs:__real@3f800000
    }
    v29 = DCONST_DVARINT_bg_foliagesnd_fastinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_fastinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_fastinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v30 = DCONST_DVARINT_bg_foliagesnd_slowinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_slowinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_slowinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v31 = DCONST_DVARINT_bg_foliagesnd_slowinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_slowinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_slowinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vmulss  xmm2, xmm0, xmm6
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rbx+28h]
      vaddss  xmm2, xmm2, xmm1
      vcvttss2si ecx, xmm2
    }
    _RDX = g_pPhys;
    if ( g_pPhys->foliageSoundTime + _ECX < level.time )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@3f400000
        vmulss  xmm0, xmm3, dword ptr [rdx+88h]
        vmovss  dword ptr [rsp+118h+bounds.midPoint], xmm0
        vmulss  xmm2, xmm3, dword ptr [rdx+8Ch]
        vmovss  dword ptr [rsp+118h+bounds.midPoint+4], xmm2
        vmulss  xmm5, xmm3, dword ptr [rdx+90h]
        vmovss  dword ptr [rsp+118h+bounds.midPoint+8], xmm5
        vmulss  xmm1, xmm3, dword ptr [rdx+94h]
        vmovss  dword ptr [rsp+118h+bounds.halfSize], xmm1
        vmulss  xmm0, xmm3, dword ptr [rdx+98h]
        vmovss  dword ptr [rsp+118h+bounds.halfSize+4], xmm0
        vmulss  xmm4, xmm3, dword ptr [rdx+9Ch]
        vmovss  dword ptr [rsp+118h+bounds.halfSize+8], xmm4
        vmovss  xmm0, dword ptr [rdx+9Ch]
        vaddss  xmm1, xmm0, dword ptr [rdx+90h]
        vmulss  xmm2, xmm1, cs:__real@3d99999a
        vaddss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rsp+118h+bounds.midPoint+8], xmm0
        vmovss  xmm0, dword ptr [rdx+9Ch]
        vaddss  xmm1, xmm0, dword ptr [rdx+90h]
        vmulss  xmm2, xmm1, cs:__real@3d99999a
        vaddss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rsp+118h+bounds.halfSize+8], xmm0
      }
      G_Main_TraceCapsule(&results, &g_pPhys->vOrigin, &g_pPhys->vOrigin, &bounds, g_pPhys->iEntNum, 2);
      if ( results.startsolid )
      {
        G_Utils_AddEvent(&g_entities[g_pPhys->iEntNum], 1u, 0);
        g_pPhys->foliageSoundTime = level.time;
      }
    }
    Sys_ProfEndNamedEvent();
  }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
AIPhys_Footsteps
==============
*/
void AIPhys_Footsteps()
{
  actor_physics_t *v0; 
  int iFootstepTimer; 
  aiphys_t ePhysicsType; 
  actor_physics_t *v3; 
  int v4; 
  __int64 iEntNum; 
  gentity_s *v6; 
  bool v7; 
  unsigned int v11; 
  AIWrapper v12; 
  bitarray<224> result; 

  v0 = g_pPhys;
  iFootstepTimer = g_pPhys->iFootstepTimer;
  g_pPhys->iFootstepTimer = 0;
  if ( v0->groundEntNum != 2047 )
  {
    ePhysicsType = v0->ePhysicsType;
    if ( (unsigned int)(ePhysicsType - 1) <= 1 || (unsigned int)(ePhysicsType - 6) <= 1 )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "AIPhys_Footsteps");
      v3 = g_pPhys;
      v4 = iFootstepTimer + g_pPhys->iMsec;
      g_pPhys->iFootstepTimer = v4;
      if ( v4 >= 500 )
      {
        iEntNum = v3->iEntNum;
        if ( (unsigned int)iEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", iEntNum, 2048) )
          __debugbreak();
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[iEntNum].r.isInUse != g_entityIsInUse[iEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[iEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2494, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( g_pPhys->iEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( g_pPhys->iEntNum )") )
          __debugbreak();
        v6 = &level.gentities[g_pPhys->iEntNum];
        AIWrapper::AIWrapper(&v12, v6);
        if ( !v12.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2498, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        if ( !v6->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2499, ASSERT_TYPE_ASSERT, "(ent->sentient)", (const char *)&queryFormat, "ent->sentient") )
          __debugbreak();
        if ( level.teammode == TEAMMODE_FFA )
        {
          v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
          else
            _RAX = Com_TeamsMP_GetAllTeamFlags();
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+0D8h+result.array], xmm0
            vmovsd  xmm1, qword ptr [rax+10h]
            vmovsd  qword ptr [rsp+0D8h+result.array+10h], xmm1
          }
          v11 = _RAX->array[6] & 0xFFEFFFFF;
          if ( v7 )
            result.array[0] &= ~0x8000000u;
          result.array[6] = v11 & 0xFF9FFFFF;
        }
        else
        {
          Com_Teams_GetEnemyTeamFlags(&result, v6->sentient->eTeam);
        }
        Actor_BroadcastPointEvent(v6, AI_EV_FOOTSTEP, &result, &g_pPhys->vOrigin);
        g_pPhys->iFootstepTimer %= 500;
      }
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
AIPhys_GetGroundEntDeltas
==============
*/
bool AIPhys_GetGroundEntDeltas(const actor_physics_t *pPhys, vec3_t *dOrigin, vec3_t *dAngles)
{
  unsigned __int16 groundEntNum; 

  _RDI = dOrigin;
  groundEntNum = pPhys->groundEntNum;
  _RBX = dAngles;
  if ( (unsigned __int16)(groundEntNum - 2046) > 1u && G_IsEntityInUse(groundEntNum) )
    _RAX = &g_entities[pPhys->groundEntNum];
  else
    _RAX = NULL;
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+130h]
      vsubss  xmm1, xmm0, dword ptr [rsi+2Ch]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rax+134h]
      vsubss  xmm0, xmm2, dword ptr [rsi+30h]
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm1, dword ptr [rax+138h]
      vsubss  xmm2, xmm1, dword ptr [rsi+34h]
      vmovss  dword ptr [rdi+8], xmm2
      vmovss  xmm0, dword ptr [rax+13Ch]
      vsubss  xmm1, xmm0, dword ptr [rsi+38h]
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm2, dword ptr [rax+140h]
      vsubss  xmm0, xmm2, dword ptr [rsi+3Ch]
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm1, dword ptr [rax+144h]
      vsubss  xmm2, xmm1, dword ptr [rsi+40h]
      vmovss  dword ptr [rbx+8], xmm2
    }
    LOBYTE(_RAX) = 1;
  }
  else
  {
    *(_QWORD *)_RDI->v = 0i64;
    _RDI->v[2] = 0.0;
    *(_QWORD *)_RBX->v = 0i64;
    _RBX->v[2] = 0.0;
  }
  return (char)_RAX;
}

/*
==============
AIPhys_GetGroundTraceInfo
==============
*/
void AIPhys_GetGroundTraceInfo(vec3_t *start, vec3_t *end, int movingGround)
{
  actor_physics_t *v4; 
  unsigned __int16 groundEntNum; 
  bool v24; 

  v4 = g_pPhys;
  _RBX = end;
  _RDI = start;
  *start = g_pPhys->groundTraceOrigin;
  *end = v4->groundTraceOrigin;
  if ( movingGround && (groundEntNum = v4->groundEntNum, (unsigned __int16)(groundEntNum - 2046) > 1u) && G_IsEntityInUse(groundEntNum) && &g_entities[v4->groundEntNum] )
  {
    __asm
    {
      vmovss  xmm4, cs:__real@41900000
      vmulss  xmm0, xmm4, dword ptr [rax+44h]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmulss  xmm0, xmm4, dword ptr [rax+48h]
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rdi+4], xmm1
      vmulss  xmm0, xmm4, dword ptr [rax+4Ch]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm1
      vmulss  xmm2, xmm4, dword ptr [rax+44h]
      vmovss  xmm1, dword ptr [rbx]
      vsubss  xmm2, xmm1, xmm2
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbx], xmm2
      vmulss  xmm3, xmm4, dword ptr [rax+48h]
      vsubss  xmm2, xmm1, xmm3
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+4], xmm2
      vmulss  xmm3, xmm4, dword ptr [rax+4Ch]
      vsubss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbx+8], xmm2
    }
  }
  else
  {
    v24 = AIPhys_UseNavmeshCollision();
    __asm { vmovss  xmm0, dword ptr [rdi+8] }
    if ( v24 )
    {
      __asm
      {
        vaddss  xmm0, xmm0, cs:__real@41900000
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  xmm1, dword ptr [rbx+8]
        vsubss  xmm2, xmm1, cs:__real@41900000
        vmovss  dword ptr [rbx+8], xmm2
      }
    }
    else
    {
      _RAX = g_pPhys;
      __asm
      {
        vaddss  xmm0, xmm0, cs:__real@41200000
        vxorps  xmm1, xmm1, xmm1
        vmovss  dword ptr [rdi+8], xmm0
        vcomiss xmm1, dword ptr [rax+14h]
      }
      if ( _RAX->groundEntNum == 2047 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vsubss  xmm1, xmm0, cs:__real@3e800000
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vsubss  xmm1, xmm0, cs:__real@41900000
        }
      }
      __asm { vmovss  dword ptr [rbx+8], xmm1 }
    }
  }
}

/*
==============
AIPhys_GroundTrace
==============
*/
int AIPhys_GroundTrace()
{
  int groundEntNum; 
  int IsGroundMoving; 
  const dvar_t *v6; 
  char v22; 
  bool v23; 
  bool walkable; 
  unsigned __int16 EntityHitId; 
  unsigned __int16 forcedGroundEntNum; 
  bool v50; 
  unsigned __int16 v72; 
  actor_physics_t *v73; 
  int result; 
  __int64 contentmask; 
  vec3_t start; 
  vec3_t end; 
  Bounds v82; 
  trace_t trace; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  Profile_Begin(269);
  groundEntNum = g_pPhys->groundEntNum;
  IsGroundMoving = AIPhys_IsGroundMoving();
  AIPhys_GetGroundTraceInfo(&start, &end, IsGroundMoving);
  AIPhys_DoGroundTrace(&trace, &start, &end);
  v6 = DCONST_DVARBOOL_ai_showNavPhysics;
  if ( !DCONST_DVARBOOL_ai_showNavPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavPhysics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( v6->current.enabled )
  {
    __asm
    {
      vmovss  xmm5, [rbp+30h+trace.fraction]
      vmovss  xmm0, dword ptr [rsp+130h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+130h+start]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+130h+start]
      vmovss  xmm1, dword ptr [rsp+130h+end+4]
      vmovss  dword ptr [rsp+130h+var_D0], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+130h+start+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+130h+start+4]
      vmovss  xmm0, dword ptr [rsp+130h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+130h+start+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+130h+var_D0+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+130h+start+8]
      vmovss  dword ptr [rsp+130h+var_D0+8], xmm3
    }
    G_DebugLineWithDuration(&start, &v82.midPoint, &colorLtGreen, 0, 1);
    __asm
    {
      vmovss  xmm0, [rbp+30h+trace.fraction]
      vcomiss xmm0, xmm6
    }
    if ( v22 )
      G_DebugLineWithDuration(&v82.midPoint, &end, &colorRed, 0, 1);
  }
  v23 = Path_TraceHitStairs(&trace);
  walkable = trace.walkable;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+30h+trace.fraction]
    vmovups ymm1, ymmword ptr [rbp+30h+trace.contents]
  }
  if ( v23 )
    walkable = 1;
  trace.walkable = walkable;
  __asm
  {
    vmovups xmm2, xmmword ptr [rbp-40h]
    vpextrb rax, xmm2, 1
    vmovups ymmword ptr cs:g_apl.groundTrace.fraction, ymm0
    vmovsd  xmm0, [rbp+30h+trace.debugHitName]
    vmovups ymmword ptr cs:g_apl.groundTrace.contents, ymm1
    vmovups xmmword ptr cs:g_apl.groundTrace.allsolid, xmm2
    vmovsd  cs:g_apl.groundTrace.debugHitName, xmm0
  }
  if ( (_BYTE)_RAX )
  {
    _RAX = g_pPhys;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  dword ptr [rsp+130h+start], xmm0
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rsp+130h+start+4], xmm1
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  dword ptr [rsp+130h+start+8], xmm0
    }
    AIPhys_DoGroundTrace(&trace, &start, &end);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+30h+trace.fraction]
      vmovups xmm2, xmmword ptr [rbp-40h]
      vmovups ymm1, ymmword ptr [rbp+30h+trace.contents]
      vmovups ymmword ptr cs:g_apl.groundTrace.fraction, ymm0
      vmovsd  xmm0, [rbp+30h+trace.debugHitName]
      vpextrb rax, xmm2, 1
      vmovsd  cs:g_apl.groundTrace.debugHitName, xmm0
      vmovups ymmword ptr cs:g_apl.groundTrace.contents, ymm1
      vmovups xmmword ptr cs:g_apl.groundTrace.allsolid, xmm2
    }
    if ( (_BYTE)_RAX )
    {
      if ( IsGroundMoving )
      {
        __asm
        {
          vmovss  xmm0, [rbp+30h+trace.fraction]
          vucomiss xmm0, xmm6
        }
      }
      EntityHitId = Trace_GetEntityHitId(&trace);
      g_pPhys->groundEntNum = EntityHitId;
      if ( !EntityHitId || EntityHitId > 0x7FFu )
      {
        LODWORD(contentmask) = EntityHitId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2344, ASSERT_TYPE_ASSERT, "( ( g_pPhys->groundEntNum >= 1 && g_pPhys->groundEntNum <= ENTITYNUM_NONE ) )", "( g_pPhys->groundEntNum ) = %i", contentmask) )
          __debugbreak();
      }
      *(_QWORD *)&g_apl.bIsWalking = 1i64;
      goto LABEL_41;
    }
  }
  _RCX = g_pPhys;
  forcedGroundEntNum = g_pPhys->forcedGroundEntNum;
  if ( forcedGroundEntNum != 2047 )
  {
    g_pPhys->groundEntNum = forcedGroundEntNum;
    *(_QWORD *)&g_apl.bIsWalking = 0i64;
    goto LABEL_41;
  }
  __asm
  {
    vmovss  xmm5, [rbp+30h+trace.fraction]
    vucomiss xmm5, xmm6
  }
  if ( g_pPhys->groundEntNum < 0x7FEu )
  {
    AIPhys_GetGroundTraceInfo(&start, &end, 1);
    _RAX = g_pPhys;
    __asm
    {
      vmovsd  xmm0, qword ptr [rax+98h]
      vmovups xmm2, xmmword ptr [rax+88h]
      vshufps xmm1, xmm0, xmm0, 55h ; 'U'
      vsubss  xmm3, xmm1, cs:__real@40a00000
      vmovups xmmword ptr [rsp+130h+var_D0], xmm2
      vshufps xmm2, xmm2, xmm2, 0FFh
      vcomiss xmm3, xmm2
      vmovsd  [rsp+130h+var_C0], xmm0
    }
    if ( !(v22 | v50) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+130h+var_D0+8]
        vaddss  xmm1, xmm0, cs:__real@c0a00000
        vmovss  dword ptr [rsp+130h+var_D0+8], xmm1
        vmovss  dword ptr [rsp+130h+var_C0+4], xmm3
      }
    }
    Profile_Begin(268);
    AIPhys_Trace(&trace, &start, &end, &v82, g_pPhys->iEntNum, g_apl.iTraceMask);
    Profile_EndInternal(NULL);
    __asm
    {
      vmovss  xmm5, [rbp+30h+trace.fraction]
      vucomiss xmm5, xmm6
    }
    _RCX = g_pPhys;
    if ( !v50 )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+30h+trace.fraction]
        vmovups ymm1, ymmword ptr [rbp+30h+trace.contents]
        vmovups ymmword ptr cs:g_apl.groundTrace.fraction, ymm0
        vmovups xmm0, xmmword ptr [rbp-40h]
        vmovups ymmword ptr cs:g_apl.groundTrace.contents, ymm1
        vmovsd  xmm1, [rbp+30h+trace.debugHitName]
        vmovups xmmword ptr cs:g_apl.groundTrace.allsolid, xmm0
        vmovsd  cs:g_apl.groundTrace.debugHitName, xmm1
      }
      if ( !g_pPhys->bSpace )
      {
        if ( g_pPhys->stairsState == AI_STAIRS_NONE )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcomiss xmm0, dword ptr [rcx+14h]
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+130h+end]
          vsubss  xmm1, xmm0, dword ptr [rsp+130h+start]
          vmovss  xmm0, dword ptr [rsp+130h+end+4]
          vmulss  xmm2, xmm1, xmm5
          vsubss  xmm1, xmm0, dword ptr [rsp+130h+start+4]
          vmovss  xmm0, dword ptr [rsp+130h+end+8]
          vmovaps xmmword ptr [rsp+130h+var_38+8], xmm7
          vaddss  xmm7, xmm2, dword ptr [rsp+130h+start]
          vmulss  xmm2, xmm1, xmm5
          vsubss  xmm1, xmm0, dword ptr [rsp+130h+start+8]
          vmovaps [rsp+130h+var_48+8], xmm8
          vaddss  xmm8, xmm2, dword ptr [rsp+130h+start+4]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm6, xmm2, dword ptr [rsp+130h+start+8]
          vcomiss xmm6, dword ptr [rcx+8]
        }
        if ( (unsigned int)(g_pPhys->ePhysicsType - 6) > 1 && (unsigned __int16)(g_pPhys->groundEntNum - 2046) <= 1u )
        {
          if ( !AIPhys_UseNavmeshCollision() )
          {
LABEL_38:
            g_apl.bGroundPlane = 1;
            g_apl.bIsWalking = 1;
            v72 = Trace_GetEntityHitId(&trace);
            v73 = g_pPhys;
            __asm
            {
              vmovaps xmm8, [rsp+130h+var_48+8]
              vmovaps xmm7, xmmword ptr [rsp+130h+var_38+8]
            }
            g_pPhys->groundEntNum = v72;
            if ( groundEntNum != v72 )
            {
              AIPhys_HandleMovingPlatformGroundChange();
              v73 = g_pPhys;
            }
            AIPhys_AddTouchEnt(v73->groundEntNum);
            goto LABEL_41;
          }
          _RCX = g_pPhys;
        }
        v50 = BGMovingPlatforms::IsMovingPlatform(_RCX->groundEntNum) == 0;
        _RAX = g_pPhys;
        __asm { vmovss  dword ptr [rax+8], xmm6 }
        if ( !v50 )
        {
          __asm
          {
            vmovss  dword ptr [rax], xmm7
            vmovss  dword ptr [rax+4], xmm8
          }
        }
        goto LABEL_38;
      }
    }
  }
  *(_QWORD *)&g_apl.bIsWalking = 0i64;
  if ( !IsGroundMoving || _RCX->bSpace )
  {
    _RCX->groundEntNum = 2047;
    *(_QWORD *)_RCX->vPrevGroundOrigin.v = 0i64;
    *(_QWORD *)&_RCX->vPrevGroundOrigin.z = 0i64;
    *(_QWORD *)&_RCX->vPrevGroundAngles.y = 0i64;
  }
LABEL_41:
  result = Profile_EndInternal(NULL);
  _R11 = &v86;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
AIPhys_HandleMovingPlatformGroundChange
==============
*/

actor_physics_t *__fastcall AIPhys_HandleMovingPlatformGroundChange(double _XMM0_8)
{
  bool v3; 
  actor_physics_t *result; 
  __int64 groundEntNum; 

  v3 = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) == 0;
  result = g_pPhys;
  if ( v3 )
  {
    *(_QWORD *)g_pPhys->vPrevGroundOrigin.v = 0i64;
    *(_QWORD *)&result->vPrevGroundOrigin.z = 0i64;
    *(_QWORD *)&result->vPrevGroundAngles.y = 0i64;
  }
  else
  {
    groundEntNum = g_pPhys->groundEntNum;
    _RBX = &g_entities[groundEntNum];
    if ( (unsigned int)groundEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", g_pPhys->groundEntNum, 2048) )
      __debugbreak();
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[(int)groundEntNum].r.isInUse != g_entityIsInUse[(int)groundEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[(int)groundEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2245, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( g_pPhys->groundEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( g_pPhys->groundEntNum )") )
      __debugbreak();
    if ( _RBX->s.eType == ET_VEHICLE )
    {
      __asm
      {
        vmovaps [rsp+68h+var_18], xmm6
        vmovaps [rsp+68h+var_28], xmm7
      }
      _XMM0_8 = G_Level_GetFrameDurationInSeconds();
      __asm { vmovaps xmm7, xmm0 }
      if ( !_RBX->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2251, ASSERT_TYPE_ASSERT, "(parent->vehicle)", (const char *)&queryFormat, "parent->vehicle") )
        __debugbreak();
      result = (actor_physics_t *)_RBX->vehicle;
      __asm { vmovss  xmm0, dword ptr [rbx+130h] }
      _RCX = g_pPhys;
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rax+138h]
        vmovss  xmm6, dword ptr [rax+170h]
        vmovss  xmm2, dword ptr [rax+13Ch]
        vmovss  xmm3, dword ptr [rax+140h]
        vmovss  xmm4, dword ptr [rax+168h]
        vmovss  xmm5, dword ptr [rax+16Ch]
        vsubss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rcx+2Ch], xmm1
        vmovss  xmm0, dword ptr [rbx+134h]
        vmulss  xmm2, xmm7, xmm2
        vsubss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rcx+30h], xmm1
        vmovss  xmm0, dword ptr [rbx+138h]
        vmulss  xmm3, xmm7, xmm3
        vsubss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rcx+34h], xmm1
        vmovss  xmm0, dword ptr [rbx+13Ch]
        vmulss  xmm3, xmm7, xmm6
        vmovaps xmm6, [rsp+68h+var_18]
        vmulss  xmm1, xmm7, xmm4
        vsubss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rcx+38h], xmm1
        vmovss  xmm0, dword ptr [rbx+140h]
        vmulss  xmm2, xmm7, xmm5
        vmovaps xmm7, [rsp+68h+var_28]
        vsubss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rcx+3Ch], xmm1
        vmovss  xmm0, dword ptr [rbx+144h]
        vsubss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rcx+40h], xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vsubss  xmm1, xmm0, dword ptr [rbx+2A8h]
      }
      result = g_pPhys;
      __asm
      {
        vmovss  dword ptr [rax+2Ch], xmm1
        vmovss  xmm2, dword ptr [rbx+134h]
        vsubss  xmm0, xmm2, dword ptr [rbx+2ACh]
        vmovss  dword ptr [rax+30h], xmm0
        vmovss  xmm1, dword ptr [rbx+138h]
        vsubss  xmm2, xmm1, dword ptr [rbx+2B0h]
        vmovss  dword ptr [rax+34h], xmm2
        vmovss  xmm0, dword ptr [rbx+13Ch]
        vsubss  xmm1, xmm0, dword ptr [rbx+2B4h]
        vmovss  dword ptr [rax+38h], xmm1
        vmovss  xmm2, dword ptr [rbx+140h]
        vsubss  xmm0, xmm2, dword ptr [rbx+2B8h]
        vmovss  dword ptr [rax+3Ch], xmm0
        vmovss  xmm1, dword ptr [rbx+144h]
        vsubss  xmm2, xmm1, dword ptr [rbx+2BCh]
        vmovss  dword ptr [rax+40h], xmm2
      }
    }
  }
  return result;
}

/*
==============
AIPhys_Init
==============
*/
void AIPhys_Init(void)
{
  g_physicsQueryStartResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST);
}

/*
==============
AIPhys_IsGroundMoving
==============
*/
_BOOL8 AIPhys_IsGroundMoving()
{
  actor_physics_t *v2; 
  unsigned __int16 groundEntNum; 
  gentity_s *v4; 
  vec3_t dAngles; 
  vec3_t dOrigin; 

  AIPhys_GetGroundEntDeltas(g_pPhys, &dOrigin, &dAngles);
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  if ( !VecNCompareCustomEpsilon(dAngles.v, ZERO_VEC_0.v, *(float *)&_XMM2, 3) )
    return 1i64;
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  if ( !VecNCompareCustomEpsilon(dOrigin.v, ZERO_VEC_0.v, *(float *)&_XMM2, 3) )
    return 1i64;
  v2 = g_pPhys;
  groundEntNum = g_pPhys->groundEntNum;
  if ( (unsigned __int16)(groundEntNum - 2046) <= 1u )
    return 0i64;
  if ( !G_IsEntityInUse(groundEntNum) )
    return 0i64;
  v4 = &g_entities[v2->groundEntNum];
  if ( !v4 )
    return 0i64;
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  return !VecNCompareCustomEpsilon(v4->r.currentAngles.v, ZERO_VEC_0.v, *(float *)&_XMM2, 3);
}

/*
==============
AIPhys_Shutdown
==============
*/
void AIPhys_Shutdown(void)
{
  if ( g_physicsQueryStartResult )
  {
    Physics_FreeCollisionQueryResult(g_physicsQueryStartResult);
    g_physicsQueryStartResult = NULL;
  }
}

/*
==============
AIPhys_SlideMove
==============
*/
SlideMoveResult AIPhys_SlideMove(int gravity, int zonly)
{
  AINavigator *Navigator; 

  if ( !AIPhys_UseNavmeshCollision() )
    return AIPhys_SlideMoveWorld(gravity, zonly);
  Navigator = Nav_GetNavigator(&g_entities[g_pPhys->iEntNum]);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1636, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( Navigator->Get2DNavigator(Navigator) )
    return AIPhys_SlideMoveNav2D(gravity, zonly);
  if ( !Navigator->Get3DNavigator(Navigator) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1643, ASSERT_TYPE_ASSERT, "( pNav->Get3DNavigator() )", (const char *)&queryFormat, "pNav->Get3DNavigator()") )
    __debugbreak();
  return AIPhys_SlideMoveNav3D(gravity, zonly);
}

/*
==============
AIPhys_SlideMoveNav2D
==============
*/
__int64 AIPhys_SlideMoveNav2D(int gravity, int zonly)
{
  unsigned int v11; 
  AIScriptedInterface *m_pAI; 
  AINavigator *Navigator; 
  unsigned int Layer; 
  bool v20; 
  nav_space_s *m_pSpace; 
  AINavigator2D *v42; 
  const bfx::AreaHandle *hHintArea; 
  __int64 result; 
  char v58; 
  char v101; 
  bool v106; 
  bool v127; 
  unsigned int v128; 
  unsigned int v132; 
  float fmta; 
  float fmtb; 
  int v142; 
  int v143; 
  int v144; 
  bfx::AreaHandle hStartArea; 
  __int64 v146; 
  AIWrapper v147; 
  vec3_t pt2; 
  vec3_t vEndVelocity; 
  vec3_t v1; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  nav_probe_results_s pOutResults; 
  vec3_t cross[5]; 
  bool isWalkable[8]; 
  char v156; 
  void *retaddr; 

  _RAX = &retaddr;
  v146 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v11 = 0;
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+140h+pPathSpec.m_pathSharingPenalty], xmm0
    vmovss  [rbp+140h+pPathSpec.m_maxPathSharingPenalty], xmm0
    vmovss  [rbp+140h+pPathSpec.m_maxSearchDist], xmm0
  }
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  AIWrapper::AIWrapper(&v147, &g_entities[g_pPhys->iEntNum]);
  m_pAI = v147.m_pAI;
  if ( !v147.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1023, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Navigator = AICommonInterface::GetNavigator(m_pAI);
  Layer = Nav_GetLayer(Navigator);
  _RCX = g_pPhys;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rbp+140h+vEndVelocity], xmm7
    vmovss  xmm8, dword ptr [rcx+10h]
    vmovss  dword ptr [rbp+140h+vEndVelocity+4], xmm8
    vmovss  xmm9, dword ptr [rcx+14h]
    vmovss  dword ptr [rbp+140h+vEndVelocity+8], xmm9
  }
  v20 = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) != 0;
  if ( gravity )
  {
    __asm { vmovss  xmm0, cs:g_apl.fFrameTime }
    if ( v20 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rax+80h]
        vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
      }
      if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
      {
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rcx+44h]
          vaddss  xmm7, xmm0, xmm7
          vmovss  dword ptr [rbp+140h+vEndVelocity], xmm7
          vmulss  xmm0, xmm6, dword ptr [rcx+48h]
          vaddss  xmm8, xmm0, xmm8
          vmovss  dword ptr [rbp+140h+vEndVelocity+4], xmm8
          vmulss  xmm0, xmm6, dword ptr [rcx+4Ch]
          vaddss  xmm1, xmm0, xmm9
        }
      }
      else
      {
        __asm { vaddss  xmm1, xmm9, xmm6 }
      }
      __asm { vmovss  dword ptr [rbp+140h+vEndVelocity+8], xmm1 }
      _RCX = &g_pPhys->vVelocity;
      __asm
      {
        vaddss  xmm2, xmm7, dword ptr [rcx]
        vmovss  dword ptr [rcx], xmm2
        vaddss  xmm0, xmm8, dword ptr [rcx+4]
        vmovss  dword ptr [rcx+4], xmm0
        vaddss  xmm1, xmm1, dword ptr [rcx+8]
        vmovss  dword ptr [rcx+8], xmm1
        vmovss  xmm3, cs:__real@3f000000
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rcx], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx+4]
        vmovss  dword ptr [rcx+4], xmm2
        vmulss  xmm1, xmm3, dword ptr [rcx+8]
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rax+80h]
        vsubss  xmm2, xmm9, xmm1
        vmovss  dword ptr [rbp+140h+vEndVelocity+8], xmm2
      }
      _RCX = &g_pPhys->vVelocity;
      __asm
      {
        vaddss  xmm0, xmm2, dword ptr [rcx+8]
        vmulss  xmm1, xmm0, cs:__real@3f000000
      }
    }
    __asm { vmovss  dword ptr [rcx+8], xmm1 }
    if ( g_apl.bGroundPlane )
    {
      if ( !zonly )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f8020c5
          vmovss  dword ptr [rsp+240h+fmt], xmm0
        }
        AIPhys_ClipVelocity(_RCX, &g_apl.groundTrace.normal, g_apl.groundTrace.walkable, _RCX);
      }
    }
  }
  __asm { vmovss  xmm7, cs:g_apl.fFrameTime }
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1056, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  m_pSpace = Navigator->m_pSpace;
  if ( !m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1058, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v42 = Navigator->Get2DNavigator(Navigator);
  if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1061, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  _RAX = AINavigator2D::GetPathSpec(v42);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+140h+pPathSpec.m_obstacleMode], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+140h+pPathSpec.m_maxSearchDist], ymm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbp+30h], xmm0
  }
  bfx::AreaHandle::AreaHandle(&hStartArea);
  Nav_GetSpaceUp(m_pSpace, &outUp);
  _RCX = g_pPhys;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr [rsp+240h+var_200], xmm0
  }
  if ( (v142 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+240h+var_200], xmm0
  }
  if ( (v143 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+240h+var_200], xmm0
  }
  if ( (v144 & 0x7F800000) == 2139095040 )
  {
LABEL_54:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1070, ASSERT_TYPE_ASSERT, "(!IS_NAN( g_pPhys->vOrigin[0] ) && !IS_NAN( g_pPhys->vOrigin[1] ) && !IS_NAN( g_pPhys->vOrigin[2] ))", "%s\n\tActor_Physics: g_pPhys->vOrigin is NAN.", "!IS_NAN( g_pPhys->vOrigin[0] ) && !IS_NAN( g_pPhys->vOrigin[1] ) && !IS_NAN( g_pPhys->vOrigin[2] )") )
      __debugbreak();
  }
  hHintArea = AINavigator2D::GetCurArea(v42);
  if ( !Nav_GetClosestVerticalPosWithHint(&g_pPhys->vOrigin, &outUp, Layer, &m_pSpace->hSpace, &pPathSpec, &pt2, hHintArea, &hStartArea) )
  {
    _RAX = g_pPhys;
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rax+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rax]
      vmovss  dword ptr [rax], xmm1
      vmulss  xmm0, xmm7, dword ptr [rax+10h]
      vaddss  xmm1, xmm0, dword ptr [rax+4]
      vmovss  dword ptr [rax+4], xmm1
      vmulss  xmm0, xmm7, dword ptr [rax+14h]
      vaddss  xmm1, xmm0, dword ptr [rax+8]
      vmovss  dword ptr [rax+8], xmm1
    }
    bfx::AreaHandle::~AreaHandle(&hStartArea);
    result = 0i64;
    goto LABEL_51;
  }
  *(double *)&_XMM0 = Nav_Get2DDistanceSqWithUp(&g_pPhys->vOrigin, &pt2, &outUp);
  __asm { vcomiss xmm0, cs:__real@3dcccccd }
  v58 = v101;
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  _RDX = g_pPhys;
  if ( !v101 && g_pPhys->navPhysicsState == NAVPHYS_DISTANCECLIP )
  {
    bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
    if ( Nav_Trace(&pt2, &hStartArea, &g_pPhys->vOrigin, &pPathSpec, &pOutResults) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+140h+pOutResults.m_edgeEndPos]
        vsubss  xmm1, xmm0, dword ptr [rbp+140h+pOutResults.m_edgeStartPos]
        vmovss  dword ptr [rbp+140h+v1], xmm1
        vmovss  xmm2, dword ptr [rbp+140h+pOutResults.m_edgeEndPos+4]
        vsubss  xmm0, xmm2, dword ptr [rbp+140h+pOutResults.m_edgeStartPos+4]
        vmovss  dword ptr [rbp+140h+v1+4], xmm0
        vmovss  xmm1, dword ptr [rbp+140h+pOutResults.m_edgeEndPos+8]
        vsubss  xmm2, xmm1, dword ptr [rbp+140h+pOutResults.m_edgeStartPos+8]
        vmovss  dword ptr [rbp+140h+v1+8], xmm2
      }
      Vec3Cross(&outUp, &v1, cross);
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+140h+cross]
        vmulss  xmm1, xmm6, xmm6
        vmovss  xmm5, dword ptr [rbp+140h+cross+4]
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm4, dword ptr [rbp+140h+cross+8]
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm8, xmm0
        vdivss  xmm0, xmm8, xmm1
        vmulss  xmm10, xmm6, xmm0
        vmulss  xmm6, xmm5, xmm0
        vmulss  xmm9, xmm4, xmm0
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_showNavPhysics, "ai_showNavPhysics") )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@41800000
          vmulss  xmm0, xmm10, xmm3
          vaddss  xmm1, xmm0, dword ptr [rbp+140h+pt2]
          vmovss  dword ptr [rbp+140h+v1], xmm1
          vmulss  xmm2, xmm6, xmm3
          vaddss  xmm0, xmm2, dword ptr [rbp+140h+pt2+4]
          vmovss  dword ptr [rbp+140h+v1+4], xmm0
          vmulss  xmm1, xmm9, xmm3
          vaddss  xmm2, xmm1, dword ptr [rbp+140h+pt2+8]
          vmovss  dword ptr [rbp+140h+v1+8], xmm2
        }
        G_DebugLine(&pt2, &v1, &colorYellow, 0);
      }
      isWalkable[0] = 0;
      __asm
      {
        vmulss  xmm1, xmm10, xmm10
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, xmm9
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm8, xmm0
        vdivss  xmm2, xmm8, xmm1
        vmulss  xmm0, xmm10, xmm2
        vmovss  dword ptr [rbp+140h+cross], xmm0
        vmulss  xmm1, xmm2, xmm6
        vmovss  dword ptr [rbp+140h+cross+4], xmm1
        vmulss  xmm0, xmm2, xmm9
        vmovss  dword ptr [rbp+140h+cross+8], xmm0
      }
      v11 = 1;
    }
    bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
    _RDX = g_pPhys;
  }
  v101 = 0;
  if ( g_apl.bGroundPlane )
  {
    _RAX = 3i64 * v11;
    __asm
    {
      vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal
      vmovss  dword ptr [rbp+rax*4+140h+cross], xmm0
      vmovss  xmm1, dword ptr cs:g_apl.groundTrace.normal+4
      vmovss  dword ptr [rbp+rax*4+140h+cross+4], xmm1
      vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal+8
      vmovss  dword ptr [rbp+rax*4+140h+cross+8], xmm0
    }
    isWalkable[v11] = 1;
  }
  else
  {
    v101 = 0;
    v106 = v58 == 0;
    if ( !v58 )
      goto LABEL_42;
    _RBX = 3i64 * v11;
    _RAX = bfx::AreaHandle::GetNormal(&hStartArea, (bfx::Vector3 *)&v1);
    __asm
    {
      vmovss  xmm1, dword ptr [rax+8]
      vmovss  xmm0, dword ptr [rax+4]
    }
    cross[v11].v[0] = _RAX->m_x;
    __asm
    {
      vmovss  dword ptr [rbp+rbx*4+140h+cross+4], xmm0
      vmovss  dword ptr [rbp+rbx*4+140h+cross+8], xmm1
    }
    isWalkable[v11] = 1;
    _RDX = g_pPhys;
  }
  v106 = ++v11 == 0;
LABEL_42:
  _RAX = 3i64 * v11;
  __asm
  {
    vmovss  xmm5, dword ptr [rdx+10h]
    vmovss  xmm4, dword ptr [rdx+0Ch]
    vmovss  xmm6, dword ptr [rdx+14h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+rax*4+140h+cross], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+rax*4+140h+cross+4], xmm1
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rbp+rax*4+140h+cross+8], xmm0
    vcomiss xmm6, cs:__real@3f333333
  }
  v127 = !(v101 | v106) || _RDX->stairsState;
  isWalkable[v11] = v127;
  if ( v58 && _RDX->navPhysicsState )
  {
    __asm { vmovss  dword ptr [rsp+240h+fmt], xmm7 }
    v128 = AIPhys_ClipAgainstCharactersAndMesh(gravity, v11 + 1, cross, isWalkable, fmta, &vEndVelocity, &pt2);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vmovss  dword ptr [rbp+140h+pt2], xmm0
      vmovss  xmm1, dword ptr [rdx+4]
      vmovss  dword ptr [rbp+140h+pt2+4], xmm1
      vmovss  xmm0, dword ptr [rdx+8]
      vmovss  dword ptr [rbp+140h+pt2+8], xmm0
      vmovss  dword ptr [rsp+240h+fmt], xmm7
    }
    v128 = AIPhys_ClipAgainstCharacters(gravity, v11 + 1, cross, isWalkable, fmtb, &vEndVelocity, &pt2);
  }
  v132 = v128;
  bfx::AreaHandle::~AreaHandle(&hStartArea);
  result = v132;
LABEL_51:
  _R11 = &v156;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
AIPhys_SlideMoveNav3D
==============
*/
__int64 AIPhys_SlideMoveNav3D(int gravity, int zonly)
{
  AIScriptedInterface *m_pAI; 
  AINavigator *Navigator; 
  bool v23; 
  nav_space_s *m_pSpace; 
  bool IsPosInside; 
  const dvar_t *v52; 
  const char *v53; 
  navphys_t navPhysicsState; 
  __int64 result; 
  unsigned int v104; 
  unsigned int v105; 
  bool v106; 
  bool v127; 
  __int64 v128; 
  __int64 v129; 
  bool v130; 
  int v131; 
  bfx::VolumeHandle v142; 
  const vec4_t *v148; 
  bool v149; 
  unsigned __int16 EntityHitId; 
  int v210; 
  __int64 v211; 
  bool v212; 
  bool v213; 
  float *v214; 
  bool enabled; 
  bfx::VolumeHandle pClosestVolume; 
  int v247; 
  __int64 v248; 
  bfx::Path3DSpec pPathSpec; 
  int contentmask; 
  bfx::Vector3 pos; 
  __int64 v252; 
  AIWrapper v253; 
  vec3_t origin; 
  vec3_t end; 
  vec3_t vEndVelocity; 
  vec3_t outClosestPos; 
  vec3_t vEndClipVelocity; 
  nav_probe_results_3D_s pOutResults; 
  trace_t results; 
  vec3_t planes[5]; 
  bool walkable[8]; 
  char v263; 
  void *retaddr; 

  _RAX = &retaddr;
  v252 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  LODWORD(v248) = gravity;
  *(_QWORD *)&pPathSpec.m_volumeUsageFlags = -1i64;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+2C0h+pPathSpec.m_maxSearchDist], xmm0
  }
  AIWrapper::AIWrapper(&v253, &g_entities[g_pPhys->iEntNum]);
  m_pAI = v253.m_pAI;
  if ( !v253.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1189, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Navigator = AICommonInterface::GetNavigator(m_pAI);
  _RCX = g_pPhys;
  __asm
  {
    vmovss  xmm6, dword ptr [rcx+0Ch]
    vmovss  dword ptr [rbp+1C0h+vEndVelocity], xmm6
    vmovss  xmm7, dword ptr [rcx+10h]
    vmovss  dword ptr [rbp+1C0h+vEndVelocity+4], xmm7
    vmovss  xmm8, dword ptr [rcx+14h]
    vmovss  dword ptr [rbp+1C0h+vEndVelocity+8], xmm8
  }
  v23 = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) != 0;
  if ( gravity )
  {
    __asm { vmovss  xmm0, cs:g_apl.fFrameTime }
    if ( v23 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rax+80h]
        vxorps  xmm9, xmm0, cs:__xmm@80000000800000008000000080000000
      }
      if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
      {
        __asm
        {
          vmulss  xmm0, xmm9, dword ptr [rcx+44h]
          vaddss  xmm6, xmm0, xmm6
          vmovss  dword ptr [rbp+1C0h+vEndVelocity], xmm6
          vmulss  xmm0, xmm9, dword ptr [rcx+48h]
          vaddss  xmm7, xmm0, xmm7
          vmovss  dword ptr [rbp+1C0h+vEndVelocity+4], xmm7
          vmulss  xmm0, xmm9, dword ptr [rcx+4Ch]
          vaddss  xmm1, xmm0, xmm8
        }
      }
      else
      {
        __asm { vaddss  xmm1, xmm8, xmm9 }
      }
      __asm { vmovss  dword ptr [rbp+1C0h+vEndVelocity+8], xmm1 }
      _RCX = &g_pPhys->vVelocity;
      __asm
      {
        vaddss  xmm2, xmm6, dword ptr [rcx]
        vmovss  dword ptr [rcx], xmm2
        vaddss  xmm0, xmm7, dword ptr [rcx+4]
        vmovss  dword ptr [rcx+4], xmm0
        vaddss  xmm1, xmm1, dword ptr [rcx+8]
        vmovss  dword ptr [rcx+8], xmm1
        vmovss  xmm3, cs:__real@3f000000
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rcx], xmm0
        vmulss  xmm2, xmm3, dword ptr [rcx+4]
        vmovss  dword ptr [rcx+4], xmm2
        vmulss  xmm1, xmm3, dword ptr [rcx+8]
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rax+80h]
        vsubss  xmm2, xmm8, xmm1
        vmovss  dword ptr [rbp+1C0h+vEndVelocity+8], xmm2
      }
      _RCX = &g_pPhys->vVelocity;
      __asm
      {
        vaddss  xmm0, xmm2, dword ptr [rcx+8]
        vmulss  xmm1, xmm0, cs:__real@3f000000
      }
    }
    __asm { vmovss  dword ptr [rcx+8], xmm1 }
    if ( g_apl.bGroundPlane )
    {
      if ( !zonly )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f8020c5
          vmovss  dword ptr [rsp+2C0h+fmt], xmm0
        }
        AIPhys_ClipVelocity(_RCX, &g_apl.groundTrace.normal, g_apl.groundTrace.walkable, _RCX);
      }
    }
  }
  __asm { vmovss  xmm10, cs:g_apl.fFrameTime }
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1220, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  m_pSpace = Navigator->m_pSpace;
  if ( !m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1222, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  _RBX = (__int64)Navigator->Get3DNavigator(Navigator);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1225, ASSERT_TYPE_ASSERT, "( pNav3D )", (const char *)&queryFormat, "pNav3D") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx+0DCh]
    vmovsd  qword ptr [rsp+2C0h+pPathSpec.m_volumeUsageFlags], xmm0
  }
  pPathSpec.m_maxSearchDist = *(float *)(_RBX + 228);
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  v106 = !Nav3D_GetClosestVolume(m_pSpace, &g_pPhys->vOrigin, &pPathSpec, &pClosestVolume);
  _RAX = g_pPhys;
  if ( v106 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+2C0h+pos.m_x], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  [rsp+2C0h+pos.m_y], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rbp+1C0h+pos.m_z], xmm0
  }
  IsPosInside = bfx::VolumeHandle::IsPosInside(&pClosestVolume, &pos);
  v52 = DCONST_DVARBOOL_ai_showNavPhysics;
  if ( !DCONST_DVARBOOL_ai_showNavPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavPhysics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  enabled = v52->current.enabled;
  if ( enabled )
  {
    v53 = "distclip";
    if ( g_pPhys->navPhysicsState == NAVPHYS_NOCLIP )
      v53 = "noclip";
    __asm { vmovss  xmm2, cs:__real@3e99999a; scale }
    G_Main_AddDebugString(&g_pPhys->vOrigin, &colorLtGreen, *(float *)&_XMM2, v53);
  }
  if ( IsPosInside )
  {
    _RCX = g_pPhys;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vmovss  dword ptr [rbp+1C0h+origin], xmm0
      vmovss  xmm1, dword ptr [rcx+4]
      vmovss  dword ptr [rbp+1C0h+origin+4], xmm1
      vmovss  xmm0, dword ptr [rcx+8]
      vmovss  dword ptr [rbp+1C0h+origin+8], xmm0
    }
    v104 = 0;
    v105 = 0;
    v106 = g_apl.bGroundPlane == 0;
    if ( g_apl.bGroundPlane )
    {
      __asm
      {
        vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal
        vmovss  dword ptr [rbp+1C0h+planes], xmm0
        vmovss  xmm1, dword ptr cs:g_apl.groundTrace.normal+4
        vmovss  dword ptr [rbp+1C0h+planes+4], xmm1
        vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal+8
        vmovss  dword ptr [rbp+1C0h+planes+8], xmm0
      }
      walkable[0] = 1;
      v105 = 1;
    }
    _RAX = 3i64 * v105;
    __asm
    {
      vmovss  xmm5, dword ptr [rcx+10h]
      vmovss  xmm4, dword ptr [rcx+0Ch]
      vmovss  xmm6, dword ptr [rcx+14h]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vmovss  xmm7, cs:__real@3f800000
      vblendvps xmm1, xmm3, xmm7, xmm0
      vmovss  [rsp+2C0h+var_270], xmm1
      vdivss  xmm2, xmm7, xmm1
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rbp+rax*4+1C0h+planes], xmm0
      vmulss  xmm1, xmm2, xmm5
      vmovss  dword ptr [rbp+rax*4+1C0h+planes+4], xmm1
      vmulss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rbp+rax*4+1C0h+planes+8], xmm0
      vcomiss xmm6, cs:__real@3f333333
    }
    v127 = !v106 || _RCX->stairsState;
    walkable[v105] = v127;
    v128 = v105 + 1;
    v129 = (unsigned int)v128;
    v130 = 0;
    contentmask = g_apl.iTraceMask & 0x2004000;
    v131 = 0;
    _R15 = &planes[v128].v[2];
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+10h]
        vmovss  xmm0, dword ptr [rcx+0Ch]
        vmovss  xmm3, dword ptr [rcx+14h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vcomiss xmm0, cs:__real@3c23d70a
      }
      if ( v130 )
        goto LABEL_41;
      bfx::VolumeHandle::VolumeHandle((bfx::VolumeHandle *)&outClosestPos, &pClosestVolume);
      v106 = !Nav3D_GetClosestReachablePos(v142, &origin, &pPathSpec, &origin);
      _RAX = g_pPhys;
      __asm { vmulss  xmm0, xmm10, dword ptr [rax+0Ch] }
      if ( v106 )
        goto LABEL_40;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rbp+1C0h+origin]
        vmovss  dword ptr [rbp+1C0h+end], xmm1
        vmulss  xmm0, xmm10, dword ptr [rax+10h]
        vaddss  xmm1, xmm0, dword ptr [rbp+1C0h+origin+4]
        vmovss  dword ptr [rbp+1C0h+end+4], xmm1
        vmulss  xmm0, xmm10, dword ptr [rax+14h]
        vaddss  xmm1, xmm0, dword ptr [rbp+1C0h+origin+8]
        vmovss  dword ptr [rbp+1C0h+end+8], xmm1
      }
      if ( enabled )
      {
        if ( v131 )
        {
          if ( v131 == 1 )
          {
            v148 = &colorYellowHeat;
          }
          else
          {
            if ( v131 != 2 )
              goto LABEL_60;
            v148 = &colorRedHeat;
          }
        }
        else
        {
          v148 = &colorLtGreen;
        }
        G_DebugLineWithDuration(&origin, &end, v148, 0, 1);
      }
LABEL_60:
      v149 = Nav_Trace3DAllowEdgeHit(m_pSpace, &origin, &end, &pPathSpec, &pOutResults);
      Profile_Begin(262);
      AIPhys_Trace(&results, &origin, &end, &g_pPhys->bounds, g_pPhys->iEntNum, contentmask);
      Profile_EndInternal(NULL);
      _RCX = g_pPhys;
      __asm
      {
        vmovss  xmm9, [rbp+1C0h+results.fraction]
        vucomiss xmm9, xmm7
      }
      if ( v106 )
      {
        if ( g_pPhys->navPhysicsState == NAVPHYS_NOCLIP )
        {
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+1C0h+end]
            vmovsd  qword ptr [rbp+1C0h+origin], xmm0
          }
          origin.v[2] = end.v[2];
          goto LABEL_93;
        }
        if ( !v149 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1C0h+pOutResults.m_EndPos]
            vmovss  dword ptr [rbp+1C0h+origin], xmm0
            vmovss  xmm1, dword ptr [rbp+1C0h+pOutResults.m_EndPos+4]
            vmovss  dword ptr [rbp+1C0h+origin+4], xmm1
            vmovss  xmm0, dword ptr [rbp+1C0h+pOutResults.m_EndPos+8]
            vmovss  dword ptr [rbp+1C0h+origin+8], xmm0
          }
LABEL_93:
          if ( (_DWORD)v248 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+1C0h+vEndVelocity]
              vmovss  dword ptr [rcx+0Ch], xmm0
              vmovss  xmm1, dword ptr [rbp+1C0h+vEndVelocity+4]
              vmovss  dword ptr [rcx+10h], xmm1
              vmovss  xmm0, dword ptr [rbp+1C0h+vEndVelocity+8]
              vmovss  dword ptr [rcx+14h], xmm0
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1C0h+origin]
            vmovss  dword ptr [rcx], xmm0
            vmovss  xmm1, dword ptr [rbp+1C0h+origin+4]
            vmovss  dword ptr [rcx+4], xmm1
            vmovss  xmm0, dword ptr [rbp+1C0h+origin+8]
            vmovss  dword ptr [rcx+8], xmm0
          }
          LOBYTE(v104) = v131 != 0;
          bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
          result = v104;
          goto LABEL_42;
        }
      }
      __asm
      {
        vmovss  xmm14, dword ptr [rbp+1C0h+end]
        vmovss  xmm11, dword ptr [rbp+1C0h+origin]
        vsubss  xmm0, xmm14, xmm11
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm7, xmm1, xmm11
        vmovss  xmm15, dword ptr [rbp+1C0h+end+4]
        vmovss  xmm12, dword ptr [rbp+1C0h+origin+4]
        vsubss  xmm0, xmm15, xmm12
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm5, xmm1, xmm12
        vmovss  xmm13, dword ptr [rbp+1C0h+origin+8]
        vmovss  xmm8, dword ptr [rbp+1C0h+end+8]
        vsubss  xmm0, xmm8, xmm13
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm6, xmm1, xmm13
        vsubss  xmm2, xmm11, xmm7
        vsubss  xmm0, xmm12, xmm5
        vsubss  xmm3, xmm13, xmm6
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm0, xmm2, xmm1
        vmovss  [rsp+2C0h+var_270], xmm0
        vsubss  xmm4, xmm11, xmm14
        vsubss  xmm0, xmm12, xmm15
        vsubss  xmm3, xmm13, xmm8
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm4, xmm2, xmm2
      }
      if ( g_pPhys->navPhysicsState )
      {
        __asm
        {
          vmovss  xmm1, [rbp+1C0h+pOutResults.m_DistTraveled]
          vmulss  xmm0, xmm1, xmm1
          vmovss  xmm2, [rsp+2C0h+var_270]
          vcomiss xmm2, xmm0
          vmovss  xmm6, dword ptr [rbp+1C0h+pOutResults.m_Normal]
          vmovss  xmm7, dword ptr [rbp+1C0h+pOutResults.m_Normal+4]
          vmovss  xmm8, dword ptr [rbp+1C0h+pOutResults.m_Normal+8]
          vmovss  xmm0, cs:__real@3a83126f
          vcomiss xmm4, xmm0
          vcomiss xmm1, xmm0
          vdivss  xmm0, xmm1, xmm4; val
          vmovss  xmm2, cs:__real@3f800000; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm9, xmm0
          vmovss  xmm13, dword ptr [rbp+1C0h+origin+8]
          vmovss  xmm12, dword ptr [rbp+1C0h+origin+4]
          vmovss  xmm11, dword ptr [rbp+1C0h+origin]
        }
        _RCX = g_pPhys;
        __asm
        {
          vmovss  xmm15, dword ptr [rbp+1C0h+end+4]
          vmovss  xmm14, dword ptr [rbp+1C0h+end]
          vsubss  xmm0, xmm14, xmm11
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm11, xmm1
          vmovss  dword ptr [rbp+1C0h+origin], xmm2
          vsubss  xmm0, xmm15, xmm12
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm12, xmm1
          vmovss  dword ptr [rbp+1C0h+origin+4], xmm2
          vmovss  xmm0, dword ptr [rbp+1C0h+end+8]
          vsubss  xmm0, xmm0, xmm13
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm13, xmm1
          vmovss  dword ptr [rbp+1C0h+origin+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbp+1C0h+origin], xmm7
          vmovss  dword ptr [rbp+1C0h+origin+4], xmm5
          vmovss  dword ptr [rbp+1C0h+origin+8], xmm6
          vmovss  [rsp+2C0h+var_270], xmm7
        }
        if ( (v247 & 0x7F800000) == 2139095040 )
          goto LABEL_103;
        __asm { vmovss  [rsp+2C0h+var_270], xmm5 }
        if ( (v247 & 0x7F800000) == 2139095040 )
          goto LABEL_103;
        __asm { vmovss  [rsp+2C0h+var_270], xmm6 }
        if ( (v247 & 0x7F800000) == 2139095040 )
        {
LABEL_103:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1380, ASSERT_TYPE_ASSERT, "(!IS_NAN( navPos[0] ) && !IS_NAN( navPos[1] ) && !IS_NAN( navPos[2] ))", "%s\n\tPhysics: Trying to fire Shapecast with invalid start", "!IS_NAN( navPos[0] ) && !IS_NAN( navPos[1] ) && !IS_NAN( navPos[2] )") )
            __debugbreak();
          __asm { vmovss  xmm9, [rbp+1C0h+results.fraction] }
        }
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+1C0h+results.normal]
          vmovss  xmm7, dword ptr [rbp+1C0h+results.normal+4]
          vmovss  xmm8, dword ptr [rbp+1C0h+results.normal+8]
        }
        if ( Trace_GetEntityHitId(&results) != 2047 )
        {
          EntityHitId = Trace_GetEntityHitId(&results);
          AIPhys_AddTouchEnt(EntityHitId);
        }
        _RCX = g_pPhys;
      }
      __asm
      {
        vmulss  xmm0, xmm9, xmm10
        vsubss  xmm10, xmm10, xmm0
      }
      _RCX->bDeflected = 1;
      if ( (int)v128 >= 5 )
      {
        *(_QWORD *)_RCX->vVelocity.v = 0i64;
        _RCX->vVelocity.v[2] = 0.0;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1C0h+origin]
          vmovss  dword ptr [rcx], xmm0
          vmovss  xmm1, dword ptr [rbp+1C0h+origin+4]
          vmovss  dword ptr [rcx+4], xmm1
          vmovss  xmm0, dword ptr [rbp+1C0h+origin+8]
          vmovss  dword ptr [rcx+8], xmm0
        }
        bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
        result = 1i64;
        goto LABEL_42;
      }
      v210 = 0;
      v211 = 0i64;
      v212 = v129 == 0;
      v213 = v129 == 0;
      if ( v129 > 0 )
      {
        v214 = &planes[0].v[2];
        while ( 1 )
        {
          __asm
          {
            vmulss  xmm1, xmm6, dword ptr [rax-8]
            vmulss  xmm0, xmm7, dword ptr [rax-4]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm8, dword ptr [rax]
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, cs:__real@3f7d70a4
          }
          if ( !v213 )
            break;
          ++v210;
          ++v211;
          v214 += 3;
          v212 = v211 == v129;
          v213 = v211 <= (unsigned __int64)v129;
          if ( v211 >= v129 )
            goto LABEL_86;
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm9, xmm0
        }
        if ( v212 && _RCX->iHitEntnum == 2047 )
        {
          __asm { vucomiss xmm6, xmm0 }
          if ( _RCX->iHitEntnum != 2047 )
            goto LABEL_84;
          __asm { vucomiss xmm7, xmm0 }
          if ( _RCX->iHitEntnum != 2047 )
          {
LABEL_84:
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+1C0h+origin]
              vmovss  dword ptr [rcx+100h], xmm0
              vmovss  xmm1, dword ptr [rbp+1C0h+origin+4]
              vmovss  dword ptr [rcx+104h], xmm1
              vmovss  xmm0, dword ptr [rbp+1C0h+origin+8]
              vmovss  dword ptr [rcx+108h], xmm0
              vmovss  dword ptr [rcx+10Ch], xmm6
              vmovss  dword ptr [rcx+110h], xmm7
              vmovss  dword ptr [rcx+114h], xmm8
            }
            _RCX->bStuck = 0;
          }
        }
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rcx+0Ch]
          vmovss  dword ptr [rcx+0Ch], xmm0
          vaddss  xmm1, xmm7, dword ptr [rcx+10h]
          vmovss  dword ptr [rcx+10h], xmm1
          vaddss  xmm0, xmm8, dword ptr [rcx+14h]
          vmovss  dword ptr [rcx+14h], xmm0
        }
      }
LABEL_86:
      if ( v210 >= (int)v128 )
      {
        __asm
        {
          vmovss  dword ptr [r15-8], xmm6
          vmovss  dword ptr [r15-4], xmm7
          vmovss  dword ptr [r15], xmm8
        }
        if ( (unsigned __int64)v129 >= 5 )
        {
          j___report_rangecheckfailure(_RCX);
          JUMPOUT(0x1411D56D8i64);
        }
        walkable[v129] = 0;
        LODWORD(v128) = v128 + 1;
        ++v129;
        _R15 += 3;
        if ( !AIPhys_ClipVelocityToAllPlanes(v128, planes, walkable, &vEndVelocity, &vEndClipVelocity) )
        {
          _RAX = g_pPhys;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1C0h+origin]
            vmovss  dword ptr [rax], xmm0
            vmovss  xmm1, dword ptr [rbp+1C0h+origin+4]
            vmovss  dword ptr [rax+4], xmm1
            vmovss  xmm0, dword ptr [rbp+1C0h+origin+8]
            vmovss  dword ptr [rax+8], xmm0
          }
          bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
          result = 1i64;
          goto LABEL_42;
        }
        _RCX = g_pPhys;
      }
      v130 = (unsigned int)++v131 < 4;
      if ( v131 >= 4 )
        goto LABEL_93;
      __asm { vmovss  xmm7, cs:__real@3f800000 }
    }
  }
  _RAX = g_pPhys;
  navPhysicsState = g_pPhys->navPhysicsState;
  if ( navPhysicsState == NAVPHYS_DISTANCECLIP )
  {
    Nav3D_GetClosestPointOnMesh(m_pSpace, &pPathSpec, &g_pPhys->vOrigin, &outClosestPos);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1C0h+outClosestPos]
      vsubss  xmm4, xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rbp+1C0h+outClosestPos+4]
      vsubss  xmm5, xmm1, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rbp+1C0h+outClosestPos+8]
      vsubss  xmm6, xmm0, dword ptr [rax+8]
    }
    walkable[0] = 0;
    __asm
    {
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm3, xmm2, xmm0
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbp+1C0h+planes], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+1C0h+planes+4], xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rbp+1C0h+planes+8], xmm0
    }
    if ( !AIPhys_ClipVelocityToAllPlanes(1, planes, walkable, &vEndVelocity, &vEndClipVelocity) )
    {
      __asm { vmulss  xmm1, xmm10, dword ptr [rbp+1C0h+vEndClipVelocity] }
      _RCX = g_pPhys;
      __asm
      {
        vaddss  xmm1, xmm1, dword ptr [rcx]
        vmovss  dword ptr [rcx], xmm1
        vmulss  xmm1, xmm10, dword ptr [rbp+1C0h+vEndClipVelocity+4]
        vaddss  xmm2, xmm1, dword ptr [rcx+4]
        vmovss  dword ptr [rcx+4], xmm2
        vmulss  xmm1, xmm10, dword ptr [rbp+1C0h+vEndClipVelocity+8]
        vaddss  xmm2, xmm1, dword ptr [rcx+8]
        vmovss  dword ptr [rcx+8], xmm2
      }
      bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
      result = 1i64;
      goto LABEL_42;
    }
    goto LABEL_38;
  }
  if ( navPhysicsState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1284, ASSERT_TYPE_ASSERT, "(g_pPhys->navPhysicsState == NAVPHYS_NOCLIP)", (const char *)&queryFormat, "g_pPhys->navPhysicsState == NAVPHYS_NOCLIP") )
      __debugbreak();
LABEL_38:
    _RAX = g_pPhys;
  }
LABEL_39:
  __asm { vmulss  xmm0, xmm10, dword ptr [rax+0Ch] }
LABEL_40:
  __asm
  {
    vaddss  xmm1, xmm0, dword ptr [rax]
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm0, xmm10, dword ptr [rax+10h]
    vaddss  xmm1, xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rax+4], xmm1
    vmulss  xmm0, xmm10, dword ptr [rax+14h]
    vaddss  xmm1, xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rax+8], xmm1
  }
LABEL_41:
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  result = 0i64;
LABEL_42:
  _R11 = &v263;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
AIPhys_SlideMoveWorld
==============
*/
__int64 AIPhys_SlideMoveWorld(int gravity, int zonly)
{
  int IsMovingPlatform; 
  int v17; 
  bool *p_walkable; 
  int v38; 
  __int64 v58; 
  unsigned int v59; 
  int v60; 
  char *Value; 
  int *v69; 
  _QWORD *v70; 
  char *v71; 
  __int64 v72; 
  unsigned __int64 v73; 
  ThreadContext CurrentThreadContext; 
  char v75; 
  char v78; 
  unsigned __int16 v94; 
  unsigned __int16 v99; 
  int v102; 
  __int64 v103; 
  bool v107; 
  bool v108; 
  float *v109; 
  __int64 result; 
  unsigned __int16 v120; 
  actor_physics_t *v129; 
  actor_physics_t *v130; 
  unsigned __int16 EntityHitId; 
  actor_physics_t *v132; 
  __int64 contentmask; 
  __int64 v141; 
  float *v143; 
  vec3_t vEndVelocity; 
  vec3_t end; 
  trace_t results; 
  vec3_t vEndClipVelocity; 
  vec3_t planes; 
  char v149; 
  bool walkable; 
  char v151; 
  char v152; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _R8 = g_pPhys;
  __asm
  {
    vmovss  xmm6, dword ptr [r8+0Ch]
    vmovss  xmm7, dword ptr [r8+10h]
    vmovss  xmm8, dword ptr [r8+14h]
    vmovss  dword ptr [rsp+1A0h+vEndVelocity], xmm6
    vmovss  dword ptr [rsp+1A0h+vEndVelocity+4], xmm7
    vmovss  dword ptr [rsp+1A0h+vEndVelocity+8], xmm8
  }
  if ( gravity )
  {
    IsMovingPlatform = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum);
    __asm { vmovss  xmm0, cs:g_apl.fFrameTime }
    if ( IsMovingPlatform )
    {
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rax+80h]
        vxorps  xmm9, xmm0, cs:__xmm@80000000800000008000000080000000
      }
      v17 = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum);
      _R8 = g_pPhys;
      if ( v17 )
      {
        __asm
        {
          vmulss  xmm0, xmm9, dword ptr [r8+44h]
          vaddss  xmm6, xmm0, xmm6
          vmulss  xmm0, xmm9, dword ptr [r8+48h]
          vaddss  xmm7, xmm0, xmm7
          vmulss  xmm0, xmm9, dword ptr [r8+4Ch]
          vaddss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rsp+1A0h+vEndVelocity], xmm6
          vmovss  dword ptr [rsp+1A0h+vEndVelocity+4], xmm7
        }
      }
      else
      {
        __asm { vaddss  xmm1, xmm8, xmm9 }
      }
      __asm
      {
        vaddss  xmm2, xmm6, dword ptr [r8+0Ch]
        vmovss  xmm3, cs:__real@3f000000
        vmovss  dword ptr [r8+0Ch], xmm2
        vaddss  xmm0, xmm7, dword ptr [r8+10h]
        vmovss  dword ptr [r8+10h], xmm0
        vmovss  dword ptr [rsp+1A0h+vEndVelocity+8], xmm1
        vaddss  xmm1, xmm1, dword ptr [r8+14h]
        vmovss  dword ptr [r8+14h], xmm1
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [r8+0Ch], xmm0
        vmulss  xmm2, xmm3, dword ptr [r8+10h]
        vmovss  dword ptr [r8+10h], xmm2
        vmulss  xmm1, xmm3, dword ptr [r8+14h]
      }
    }
    else
    {
      _R8 = g_pPhys;
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [r8+80h]
        vsubss  xmm1, xmm8, xmm0
        vaddss  xmm0, xmm1, dword ptr [r8+14h]
        vmovss  dword ptr [rsp+1A0h+vEndVelocity+8], xmm1
        vmulss  xmm1, xmm0, cs:__real@3f000000
      }
    }
    __asm { vmovss  dword ptr [r8+14h], xmm1 }
    if ( g_apl.bGroundPlane )
    {
      if ( !zonly )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f8020c5
          vmovss  dword ptr [rsp+1A0h+fmt], xmm0
        }
        AIPhys_ClipVelocity(&_R8->vVelocity, &g_apl.groundTrace.normal, g_apl.groundTrace.walkable, &_R8->vVelocity);
        _R8 = g_pPhys;
      }
    }
  }
  __asm { vmovss  xmm8, cs:g_apl.fFrameTime }
  if ( g_apl.bGroundPlane )
  {
    __asm { vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal }
    p_walkable = (bool *)&v151;
    __asm
    {
      vmovss  xmm1, dword ptr cs:g_apl.groundTrace.normal+4
      vmovss  dword ptr [rbp+0A0h+planes], xmm0
      vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal+8
    }
    walkable = g_apl.groundTrace.walkable;
    v38 = 2;
    __asm
    {
      vmovss  dword ptr [rbp+0A0h+planes+8], xmm0
      vmovss  dword ptr [rbp+0A0h+planes+4], xmm1
    }
    _RAX = (vec3_t *)&v149;
  }
  else
  {
    v38 = 1;
    p_walkable = &walkable;
    _RAX = &planes;
  }
  __asm
  {
    vmovss  xmm6, dword ptr [r8+14h]
    vmovss  xmm5, dword ptr [r8+10h]
    vmovss  xmm4, dword ptr [r8+0Ch]
    vmovss  xmm10, cs:__real@3f800000
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm0
    vmulss  xmm1, xmm2, xmm5
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rax+4], xmm1
    vmovss  xmm1, cs:__real@3f333333
    vcomiss xmm1, xmm6
    vmovss  dword ptr [rax], xmm0
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rax+8], xmm0
    vmovss  xmm9, cs:__real@3f7d70a4
  }
  *p_walkable = _R8->stairsState != AI_STAIRS_NONE;
  v58 = (unsigned int)v38;
  v59 = 0;
  v60 = 0;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  v143 = &planes.v[3 * v38 + 2];
  do
  {
    __asm
    {
      vmulss  xmm0, xmm8, dword ptr [r8+0Ch]
      vaddss  xmm1, xmm0, dword ptr [r8]
      vmovss  dword ptr [rsp+1A0h+end], xmm1
      vmulss  xmm0, xmm8, dword ptr [r8+10h]
      vaddss  xmm1, xmm0, dword ptr [r8+4]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm1
      vmulss  xmm0, xmm8, dword ptr [r8+14h]
      vaddss  xmm1, xmm0, dword ptr [r8+8]
      vmovss  dword ptr [rsp+1A0h+end+8], xmm1
    }
    Value = (char *)Sys_GetValue(0);
    v69 = (int *)(Value + 12816);
    if ( (unsigned int)(*((_DWORD *)Value + 3204) + 1) >= 3 )
    {
      LODWORD(v141) = 3;
      LODWORD(contentmask) = *((_DWORD *)Value + 3204) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", contentmask, v141) )
        __debugbreak();
    }
    if ( (unsigned int)++*v69 >= 3 )
    {
      LODWORD(v141) = 3;
      LODWORD(contentmask) = *v69;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", contentmask, v141) )
        __debugbreak();
    }
    v70 = Value + 2088;
    v71 = Value + 40;
    if ( *v70 < (unsigned __int64)v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v70 += 8i64;
    if ( *v70 >= (unsigned __int64)v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v70 = v69;
    if ( *v70 <= (unsigned __int64)v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v72 = *v69;
    v73 = __rdtsc();
    v69[v72 + 2] = v73;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 268, NULL, 0);
    AIPhys_Trace(&results, &g_pPhys->vOrigin, &end, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
    Profile_EndInternal(NULL);
    __asm
    {
      vmovss  xmm5, [rsp+1A0h+results.fraction]
      vcomiss xmm5, xmm7
    }
    _R8 = g_pPhys;
    if ( v78 | v75 )
    {
      if ( results.startsolid )
      {
        v130 = g_pPhys;
        g_pPhys->vVelocity.v[2] = 0.0;
        if ( !v60 && g_apl.groundTrace.startsolid )
        {
          result = 2i64;
          goto LABEL_68;
        }
        if ( v130->iHitEntnum == 2047 )
        {
          EntityHitId = Trace_GetEntityHitId(&results);
          v132 = g_pPhys;
          g_pPhys->iHitEntnum = EntityHitId;
          v132->vHitOrigin = v132->vOrigin;
          v132->bStuck = 1;
        }
        goto LABEL_67;
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1A0h+end]
        vsubss  xmm1, xmm0, dword ptr [r8]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [r8]
        vmovss  dword ptr [r8], xmm3
        vmovss  xmm0, dword ptr [rsp+1A0h+end+4]
        vsubss  xmm1, xmm0, dword ptr [r8+4]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [r8+4]
        vmovss  dword ptr [r8+4], xmm3
        vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
        vsubss  xmm1, xmm0, dword ptr [r8+8]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [r8+8]
        vmovss  dword ptr [r8+8], xmm3
        vmovss  xmm0, [rsp+1A0h+results.fraction]
        vucomiss xmm0, xmm10
      }
      if ( v75 )
        break;
    }
    _R8->bDeflected = 1;
    if ( !results.walkable && _R8->iHitEntnum == 2047 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+results.normal]
        vucomiss xmm0, xmm7
      }
      if ( _R8->iHitEntnum != 2047 )
        goto LABEL_41;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+results.normal+4]
        vucomiss xmm0, xmm7
      }
      if ( _R8->iHitEntnum != 2047 )
      {
LABEL_41:
        v94 = Trace_GetEntityHitId(&results);
        _RCX = g_pPhys;
        g_pPhys->iHitEntnum = v94;
        _RCX->vHitOrigin = _RCX->vOrigin;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0A0h+results.normal]
          vmovss  dword ptr [rcx+10Ch], xmm0
          vmovss  xmm1, dword ptr [rbp+0A0h+results.normal+4]
          vmovss  dword ptr [rcx+110h], xmm1
          vmovss  xmm0, dword ptr [rbp+0A0h+results.normal+8]
          vmovss  dword ptr [rcx+114h], xmm0
        }
        _RCX->bStuck = 0;
      }
    }
    v99 = Trace_GetEntityHitId(&results);
    AIPhys_AddTouchEnt(v99);
    __asm
    {
      vmovss  xmm6, [rsp+1A0h+results.fraction]
      vmulss  xmm0, xmm6, xmm8
      vsubss  xmm8, xmm8, xmm0
    }
    if ( v38 >= 5 )
    {
      v129 = g_pPhys;
      *(_QWORD *)g_pPhys->vVelocity.v = 0i64;
      v129->vVelocity.v[2] = 0.0;
LABEL_67:
      result = 1i64;
      goto LABEL_68;
    }
    v102 = 0;
    v103 = 0i64;
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+0A0h+results.normal+8]
      vmovss  xmm4, dword ptr [rbp+0A0h+results.normal+4]
      vmovss  xmm3, dword ptr [rbp+0A0h+results.normal]
    }
    v107 = v58 == 0;
    v108 = v58 == 0;
    if ( v58 <= 0 )
    {
LABEL_47:
      _R8 = g_pPhys;
    }
    else
    {
      v109 = &planes.v[2];
      while ( 1 )
      {
        __asm
        {
          vmulss  xmm1, xmm4, dword ptr [rax-4]
          vmulss  xmm0, xmm3, dword ptr [rax-8]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, dword ptr [rax]
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm9
        }
        if ( !v108 )
          break;
        ++v102;
        ++v103;
        v109 += 3;
        v107 = v103 == v58;
        v108 = v103 <= (unsigned __int64)v58;
        if ( v103 >= v58 )
          goto LABEL_47;
      }
      __asm { vucomiss xmm6, xmm7 }
      _R8 = g_pPhys;
      if ( v107 && g_pPhys->iHitEntnum == 2047 )
      {
        __asm { vucomiss xmm3, xmm7 }
        if ( g_pPhys->iHitEntnum != 2047 )
          goto LABEL_59;
        __asm { vucomiss xmm4, xmm7 }
        if ( g_pPhys->iHitEntnum != 2047 )
        {
LABEL_59:
          v120 = Trace_GetEntityHitId(&results);
          _R8 = g_pPhys;
          g_pPhys->iHitEntnum = v120;
          _R8->vHitOrigin = _R8->vOrigin;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+0A0h+results.normal]
            vmovss  dword ptr [r8+10Ch], xmm0
            vmovss  xmm1, dword ptr [rbp+0A0h+results.normal+4]
            vmovss  dword ptr [r8+110h], xmm1
            vmovss  xmm0, dword ptr [rbp+0A0h+results.normal+8]
            vmovss  dword ptr [r8+114h], xmm0
          }
          _R8->bStuck = 0;
          __asm { vmovss  xmm3, dword ptr [rbp+0A0h+results.normal] }
        }
      }
      __asm
      {
        vaddss  xmm0, xmm3, dword ptr [r8+0Ch]
        vmovss  dword ptr [r8+0Ch], xmm0
        vmovss  xmm1, dword ptr [rbp+0A0h+results.normal+4]
        vaddss  xmm2, xmm1, dword ptr [r8+10h]
        vmovss  dword ptr [r8+10h], xmm2
        vmovss  xmm0, dword ptr [rbp+0A0h+results.normal+8]
        vaddss  xmm1, xmm0, dword ptr [r8+14h]
        vmovss  dword ptr [r8+14h], xmm1
        vmovss  xmm5, dword ptr [rbp+0A0h+results.normal+8]
        vmovss  xmm4, dword ptr [rbp+0A0h+results.normal+4]
        vmovss  xmm3, dword ptr [rbp+0A0h+results.normal]
      }
    }
    if ( v102 >= v38 )
    {
      _RBX = v143;
      *(&walkable + v58) = results.walkable;
      ++v38;
      __asm
      {
        vmovss  dword ptr [rbx-8], xmm3
        vmovss  dword ptr [rbx-4], xmm4
        vmovss  dword ptr [rbx], xmm5
      }
      v143 += 3;
      ++v58;
      if ( !AIPhys_ClipVelocityToAllPlanes(v38, &planes, &walkable, &vEndVelocity, &vEndClipVelocity) )
        goto LABEL_67;
      _R8 = g_pPhys;
    }
    ++v60;
  }
  while ( v60 < 4 );
  if ( gravity )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+vEndVelocity]
      vmovss  xmm1, dword ptr [rsp+1A0h+vEndVelocity+4]
      vmovss  dword ptr [r8+0Ch], xmm0
      vmovss  xmm0, dword ptr [rsp+1A0h+vEndVelocity+8]
      vmovss  dword ptr [r8+14h], xmm0
      vmovss  dword ptr [r8+10h], xmm1
    }
  }
  LOBYTE(v59) = v60 != 0;
  result = v59;
LABEL_68:
  _R11 = &v152;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

/*
==============
AIPhys_StepSlideMove_Internal
==============
*/
__int64 AIPhys_StepSlideMove_Internal(int gravity, int zonly)
{
  SlideMoveResult v20; 
  char v34; 
  bool v35; 
  __int64 v65; 
  __int64 v67; 
  bool v73; 
  __int64 v74; 
  __int64 v93; 
  __int64 result; 
  bool v132; 
  bool walkable; 
  vec3_t end; 
  vec3_t v163; 
  vec3_t start; 
  trace_t results; 
  char v166; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm13
    vmovaps xmmword ptr [rax-78h], xmm14
    vmovaps xmmword ptr [rax-88h], xmm15
  }
  _RAX = g_pPhys;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rbp+200h+start], xmm0
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rbp+200h+start+8], xmm0
    vmovss  dword ptr [rbp+200h+start+4], xmm1
    vmovss  xmm9, dword ptr [rax+0Ch]
    vmovss  xmm14, dword ptr [rax+10h]
    vmovss  xmm15, dword ptr [rax+14h]
  }
  v20 = AIPhys_SlideMove(gravity, zonly);
  if ( v20 == SLIDEMOVE_COMPLETE )
  {
    _RAX = g_pPhys;
    if ( !g_pPhys->bSpace )
    {
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm7, dword ptr [rax+14h]
      }
      if ( !g_apl.bIsWalking )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+200h+end], xmm0
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  dword ptr [rbp+200h+end+4], xmm1
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  xmm1, cs:g_apl.stepheight
          vxorps  xmm6, xmm1, cs:__xmm@80000000800000008000000080000000
          vmovss  dword ptr [rbp+200h+end+8], xmm0
        }
        if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
        {
          __asm
          {
            vmulss  xmm1, xmm6, dword ptr [rax+44h]
            vaddss  xmm1, xmm1, dword ptr [rbp+200h+end]
            vmovss  dword ptr [rbp+200h+end], xmm1
            vmulss  xmm2, xmm6, dword ptr [rax+48h]
            vaddss  xmm1, xmm2, dword ptr [rbp+200h+end+4]
            vmovss  dword ptr [rbp+200h+end+4], xmm1
            vmulss  xmm2, xmm6, dword ptr [rax+4Ch]
            vaddss  xmm1, xmm2, dword ptr [rbp+200h+end+8]
          }
        }
        else
        {
          __asm { vaddss  xmm1, xmm6, dword ptr [rbp+200h+end+8] }
        }
        __asm { vmovss  dword ptr [rbp+200h+end+8], xmm1 }
        Profile_Begin(268);
        AIPhys_Trace(&results, &g_pPhys->vOrigin, &end, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
        Profile_EndInternal(NULL);
        _RAX = g_pPhys;
        __asm { vcomiss xmm7, dword ptr [rax+14h] }
        if ( v34 )
        {
          __asm
          {
            vmovss  xmm5, [rbp+200h+results.fraction]
            vmovss  xmm0, dword ptr [rbp+200h+end]
            vsubss  xmm1, xmm0, dword ptr [rax]
            vmulss  xmm2, xmm1, xmm5
            vaddss  xmm3, xmm2, dword ptr [rax]
            vmovss  dword ptr [rax], xmm3
            vmovss  xmm0, dword ptr [rbp+200h+end+4]
            vsubss  xmm1, xmm0, dword ptr [rax+4]
            vmulss  xmm2, xmm1, xmm5
            vaddss  xmm3, xmm2, dword ptr [rax+4]
            vmovss  dword ptr [rax+4], xmm3
            vmovss  xmm0, dword ptr [rbp+200h+end+8]
            vsubss  xmm1, xmm0, dword ptr [rax+8]
            vmulss  xmm2, xmm1, xmm5
            vaddss  xmm3, xmm2, dword ptr [rax+8]
            vmovss  dword ptr [rax+8], xmm3
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+200h+start+8]
          vsubss  xmm1, xmm0, dword ptr [rax+8]
          vcomiss xmm1, cs:__real@3f800000
        }
        if ( !(v34 | v35) && !g_apl.groundTrace.walkable && !results.walkable )
          g_pPhys->iHitEntnum = Trace_GetEntityHitId(&g_apl.groundTrace);
      }
    }
    goto LABEL_41;
  }
  if ( v20 != SLIDEMOVE_FAIL )
  {
    if ( v20 != SLIDEMOVE_CLIPPED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1701, ASSERT_TYPE_ASSERT, "(moveResult == SLIDEMOVE_CLIPPED)", (const char *)&queryFormat, "moveResult == SLIDEMOVE_CLIPPED") )
      __debugbreak();
    __asm { vmovss  xmm6, cs:g_apl.stepheight }
    if ( AIPhys_UseNavmeshCollision() )
      goto LABEL_41;
    _RCX = g_pPhys;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm7, dword ptr [rcx+14h]
      vmovsd  xmm0, qword ptr [rbp+200h+start]
      vmovsd  qword ptr [rbp+200h+var_240], xmm0
    }
    v163.v[2] = start.v[2];
    if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
    {
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rax+44h]
        vaddss  xmm1, xmm1, dword ptr [rbp+200h+var_240]
        vmovss  dword ptr [rbp+200h+var_240], xmm1
        vmulss  xmm2, xmm6, dword ptr [rax+48h]
        vaddss  xmm1, xmm2, dword ptr [rbp+200h+var_240+4]
        vmovss  dword ptr [rbp+200h+var_240+4], xmm1
        vmulss  xmm2, xmm6, dword ptr [rax+4Ch]
        vaddss  xmm1, xmm2, dword ptr [rbp+200h+var_240+8]
      }
    }
    else
    {
      __asm { vaddss  xmm1, xmm6, dword ptr [rbp+200h+var_240+8] }
    }
    __asm { vmovss  dword ptr [rbp+200h+var_240+8], xmm1 }
    Profile_Begin(268);
    AIPhys_Trace(&results, &v163, &v163, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
    Profile_EndInternal(NULL);
    if ( results.allsolid )
    {
      __asm
      {
        vmovss  xmm0, [rbp+200h+results.fraction]
        vucomiss xmm0, xmm7
      }
LABEL_41:
      result = 1i64;
      goto LABEL_42;
    }
    _R8 = g_pPhys;
    _RDX = &v166;
    v65 = 2i64;
    _RCX = g_pPhys;
    v67 = 2i64;
    do
    {
      _RDX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups xmm1, xmmword ptr [rcx+70h]
      }
      _RCX = (actor_physics_t *)((char *)_RCX + 128);
      __asm
      {
        vmovups ymmword ptr [rdx-80h], ymm0
        vmovups ymm0, ymmword ptr [rcx-60h]
        vmovups ymmword ptr [rdx-60h], ymm0
        vmovups ymm0, ymmword ptr [rcx-40h]
        vmovups ymmword ptr [rdx-40h], ymm0
        vmovups xmm0, xmmword ptr [rcx-20h]
        vmovups xmmword ptr [rdx-20h], xmm0
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      v73 = v67-- == 0;
    }
    while ( v67 );
    v74 = *(_QWORD *)&_RCX->bHasGroundPlane;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups xmm11, xmmword ptr cs:g_apl.vPrevVelocity+8
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm0, ymmword ptr cs:g_apl.fFrameTime
      vmovups ymmword ptr [rsp+300h+contentmask+8], ymm0
      vmovups ymm0, ymmword ptr cs:g_apl.groundTrace.normal
      vmovups [rsp+300h+var_2B8+8], ymm0
      vmovups ymm0, ymmword ptr cs:g_apl.groundTrace.fractionForHitType
      vmovups [rsp+300h+var_298+8], ymm0
      vmovups ymm0, ymmword ptr cs:g_apl.groundTrace.debugHitName
    }
    *((_QWORD *)_RDX + 4) = v74;
    LODWORD(v74) = _RCX->iSurfaceType;
    _R8->iHitEntnum = 2047;
    __asm
    {
      vmovss  xmm8, dword ptr [rbp+200h+var_240]
      vmovss  xmm13, dword ptr [rbp+200h+var_240+4]
      vmovss  xmm6, dword ptr [rbp+200h+var_240+8]
    }
    g_apl.bGroundPlane = 0;
    __asm
    {
      vmovss  dword ptr [r8], xmm8
      vmovss  dword ptr [r8+4], xmm13
      vmovss  dword ptr [r8+8], xmm6
      vmovss  dword ptr [r8+0Ch], xmm9
      vmovss  dword ptr [r8+10h], xmm14
      vmovss  dword ptr [r8+14h], xmm15
      vmovups [rbp+200h+var_270], ymm0
      vmovss  xmm0, [rbp+200h+results.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
    *((_DWORD *)_RDX + 10) = v74;
    if ( v73 )
    {
      __asm { vcomiss xmm7, xmm15 }
      if ( v73 )
        _R8->vVelocity.v[2] = 0.0;
    }
    if ( AIPhys_SlideMove(gravity, zonly) != SLIDEMOVE_FAIL )
    {
      _RAX = g_pPhys;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  dword ptr [rbp+200h+end], xmm0
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  dword ptr [rbp+200h+end+4], xmm1
        vmovss  xmm0, dword ptr [rax+8]
        vmovss  dword ptr [rbp+200h+end+8], xmm0
      }
      v35 = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) == 0;
      _RAX = g_pPhys;
      if ( v35 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  xmm1, dword ptr [rbp+200h+start+8]
          vmaxss  xmm2, xmm0, xmm6
          vsubss  xmm3, xmm1, xmm2
          vaddss  xmm2, xmm3, dword ptr [rbp+200h+end+8]
          vmovss  dword ptr [rbp+200h+end+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vsubss  xmm9, xmm8, dword ptr [rbp+200h+start]
          vsubss  xmm8, xmm0, dword ptr [rbp+200h+start]
          vmovss  xmm1, dword ptr [rax+4]
          vsubss  xmm5, xmm1, dword ptr [rbp+200h+start+4]
          vsubss  xmm4, xmm13, dword ptr [rbp+200h+start+4]
          vmovss  xmm0, dword ptr [rax+8]
          vsubss  xmm7, xmm6, dword ptr [rbp+200h+start+8]
          vsubss  xmm6, xmm0, dword ptr [rbp+200h+start+8]
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm1, xmm9, xmm9
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm4, xmm2, xmm2
          vmulss  xmm0, xmm8, xmm8
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vminss  xmm3, xmm4, xmm0
          vxorps  xmm1, xmm3, cs:__xmm@80000000800000008000000080000000; height
        }
        AdjustUp(&end, *(float *)&_XMM1);
      }
      Profile_Begin(268);
      AIPhys_Trace(&results, &g_pPhys->vOrigin, &end, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
      Profile_EndInternal(NULL);
      v132 = Path_TraceHitStairs(&results);
      walkable = results.walkable;
      _RCX = g_pPhys;
      if ( v132 )
        walkable = 1;
      results.walkable = walkable;
      if ( !results.startsolid )
      {
        __asm
        {
          vmovss  xmm5, [rbp+200h+results.fraction]
          vmovss  xmm0, dword ptr [rbp+200h+end]
          vsubss  xmm1, xmm0, dword ptr [rcx]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm3, xmm2, dword ptr [rcx]
          vmovss  dword ptr [rcx], xmm3
          vmovss  xmm0, dword ptr [rbp+200h+end+4]
          vsubss  xmm1, xmm0, dword ptr [rcx+4]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm3, xmm2, dword ptr [rcx+4]
          vmovss  dword ptr [rcx+4], xmm3
          vmovss  xmm0, dword ptr [rbp+200h+end+8]
          vsubss  xmm1, xmm0, dword ptr [rcx+8]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm3, xmm2, dword ptr [rcx+8]
          vmovss  dword ptr [rcx+8], xmm3
        }
      }
      __asm
      {
        vmovss  xmm0, [rbp+200h+results.fraction]
        vcomiss xmm0, cs:__real@3f800000
      }
      goto LABEL_41;
    }
    _RCX = g_pPhys;
    _RDX = &v166;
    do
    {
      _RCX = (actor_physics_t *)((char *)_RCX + 128);
      __asm
      {
        vmovups ymm0, ymmword ptr [rdx]
        vmovups xmm1, xmmword ptr [rdx+70h]
      }
      _RDX += 128;
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rdx-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rdx-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rdx-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v65;
    }
    while ( v65 );
    __asm { vmovups ymm0, ymmword ptr [rdx] }
    v93 = *((_QWORD *)_RDX + 4);
    __asm
    {
      vmovups ymm1, [rsp+300h+var_2B8+8]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rsp+300h+contentmask+8]
    }
    *(_QWORD *)&_RCX->bHasGroundPlane = v93;
    _RCX->iSurfaceType = *((_DWORD *)_RDX + 10);
    __asm
    {
      vmovups ymmword ptr cs:g_apl.fFrameTime, ymm0
      vmovups ymm0, [rsp+300h+var_298+8]
      vmovups ymmword ptr cs:g_apl.groundTrace.normal, ymm1
      vmovups ymm1, [rbp+200h+var_270]
      vmovups ymmword ptr cs:g_apl.groundTrace.fractionForHitType, ymm0
      vmovups ymmword ptr cs:g_apl.groundTrace.debugHitName, ymm1
      vmovups xmmword ptr cs:g_apl.vPrevVelocity+8, xmm11
    }
  }
  result = 0i64;
LABEL_42:
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-60h]
    vmovaps xmm14, xmmword ptr [r11-70h]
    vmovaps xmm15, xmmword ptr [r11-80h]
  }
  return result;
}

/*
==============
AIPhys_Trace
==============
*/
void AIPhys_Trace(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentmask)
{
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hknpShape *ShapeCapsuleUpAxis; 
  int v19; 
  hkMemoryAllocator *v28; 
  hkMemoryAllocator *v29; 
  HavokPhysics_IgnoreBodies v30; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v32; 
  char optionalInplaceBuffer[432]; 

  v32 = -2i64;
  _RBX = bounds;
  _RDI = results;
  ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_FIRST);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  HavokPhysics_CollisionQueryResult::Reset(g_physicsQueryStartResult, 1);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+0Ch]; radius
    vmovss  xmm0, dword ptr [rbx+14h]
    vsubss  xmm2, xmm0, xmm3; halfHeight
  }
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &_RBX->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+2B8h+extendedData.startTolerance], xmm1
    vmovss  xmm0, cs:__real@3c83126f
    vmovss  [rsp+2B8h+extendedData.accuracy], xmm0
  }
  extendedData.simplifyStart = 0;
  __asm
  {
    vmovss  [rsp+2B8h+extendedData.collisionBuffer], xmm1
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2B8h+extendedData.nonBrushShape], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = contentmask;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v30, passEntityNum != 2047, 0);
  if ( passEntityNum != 2047 )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v30, 0, passEntityNum, 1, 1, 0, 1, 1);
  extendedData.ignoreBodies = &v30;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, ClosestResult, g_physicsQueryStartResult);
  Physics_ConvertShapeQueryResultToLegacyTrace(ClosestResult, g_physicsQueryStartResult, _RDI);
  if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
  {
    v19 = GMovingPlatforms::TraceHitMovingPlatform(_RDI);
    if ( v19 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+14h]
        vmulss  xmm3, xmm0, dword ptr [rax+48h]
        vmovss  xmm1, dword ptr [rdi+10h]
        vmulss  xmm2, xmm1, dword ptr [rax+44h]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rdi+18h]
        vmulss  xmm1, xmm0, dword ptr [rax+4Ch]
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, cs:__real@3f333333
      }
      _RDI->walkable = v19 != 0;
    }
  }
  v28 = hkMemHeapAllocator();
  v30.m_ignoreBodies.m_size = 0;
  if ( v30.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, v30.m_ignoreBodies.m_data, 4, v30.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v30.m_ignoreBodies.m_data = NULL;
  v30.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v29 = hkMemHeapAllocator();
  v30.m_ignoreEntities.m_size = 0;
  if ( v30.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v29, v30.m_ignoreEntities.m_data, 8, v30.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
AIPhys_UseNavmeshCollision
==============
*/
char AIPhys_UseNavmeshCollision()
{
  actor_physics_t *v0; 
  AIScriptedInterface *m_pAI; 
  int v2; 
  AIWrapper v4; 

  v0 = g_pPhys;
  if ( g_pPhys->bSpace )
  {
    if ( !Nav_AnyVolumesLoaded() )
      return 0;
    v0 = g_pPhys;
  }
  if ( (unsigned int)(v0->ePhysicsType - 4) > 1 || v0->bSpace )
  {
    AIWrapper::AIWrapper(&v4, &g_entities[v0->iEntNum]);
    m_pAI = v4.m_pAI;
    if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 221, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    v2 = *(_DWORD *)(m_pAI->GetAI(m_pAI) + 2420);
    if ( v2 != 11 && v2 != 5 && Nav_MeshLoaded() && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_useNavActorPhysics, "ai_useNavActorPhysics") )
      return 1;
  }
  return 0;
}

/*
==============
AIPhys_WalkMove
==============
*/
__int64 AIPhys_WalkMove()
{
  actor_physics_t *v5; 
  char v18; 
  char v26; 
  char v42; 
  __int64 result; 
  vec3_t dOrigin; 
  vec3_t dAngles; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  v5 = g_pPhys;
  __asm
  {
    vmovss  xmm2, cs:__real@3f8020c5
    vmovss  xmm8, cs:__real@3f800000
    vdivss  xmm1, xmm8, cs:g_apl.fFrameTime
    vmulss  xmm0, xmm1, dword ptr [rax+5Ch]
  }
  _RCX = &g_pPhys->vVelocity;
  __asm
  {
    vmovss  dword ptr [rcx], xmm0
    vmulss  xmm1, xmm1, dword ptr [rax+60h]
    vmovss  dword ptr [rcx+4], xmm1
  }
  v5->vVelocity.v[2] = 0.0;
  __asm
  {
    vmovss  xmm7, dword ptr [rcx+4]
    vmovss  xmm6, dword ptr [rcx]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm9, xmm1, xmm1
    vmovss  dword ptr [rsp+0A8h+fmt], xmm2
  }
  AIPhys_ClipVelocity(_RCX, &g_apl.groundTrace.normal, g_apl.groundTrace.walkable, _RCX);
  _RAX = g_pPhys;
  __asm
  {
    vmovss  xmm4, dword ptr [rax+10h]
    vmovss  xmm5, dword ptr [rax+0Ch]
    vmulss  xmm1, xmm5, xmm6
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm2, xmm1, xmm0
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm2, xmm6
  }
  if ( !(v26 | v18) )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rax+14h]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm8, xmm0
      vdivss  xmm2, xmm8, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rax+0Ch], xmm0
      vmulss  xmm1, xmm2, dword ptr [rax+10h]
      vmovss  dword ptr [rax+10h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rax+14h]
      vmovss  dword ptr [rax+14h], xmm0
      vmulss  xmm0, xmm9, dword ptr [rax+0Ch]
      vmovss  dword ptr [rax+0Ch], xmm0
      vmulss  xmm1, xmm9, dword ptr [rax+10h]
      vmovss  dword ptr [rax+10h], xmm1
      vmulss  xmm0, xmm9, dword ptr [rax+14h]
      vmovss  dword ptr [rax+14h], xmm0
    }
  }
  __asm { vucomiss xmm6, dword ptr [rax+0Ch] }
  if ( !v18 )
    goto LABEL_17;
  __asm { vucomiss xmm6, dword ptr [rax+10h] }
  if ( !v18 )
    goto LABEL_17;
  if ( !g_apl.bGroundPlane )
    goto LABEL_17;
  AIPhys_GetGroundEntDeltas(g_pPhys, &dOrigin, &dAngles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+dOrigin]
    vucomiss xmm0, xmm6
  }
  if ( !v42 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+dOrigin+4]
    vucomiss xmm0, xmm6
  }
  if ( !v42 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+dOrigin+8]
    vucomiss xmm0, xmm6
  }
  if ( v42 )
  {
    result = 1i64;
  }
  else
  {
LABEL_17:
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    _RAX = g_pPhys;
    __asm
    {
      vmovss  xmm0, cs:__real@461c4000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vdivss  xmm1, xmm0, xmm1
      vminss  xmm2, xmm1, dword ptr [rax+14h]
      vmovss  dword ptr [rax+14h], xmm2
    }
    result = AIPhys_StepSlideMove_Internal(0, 0);
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  return result;
}

/*
==============
AdjustUp
==============
*/

void __fastcall AdjustUp(vec3_t *adjusted, double height)
{
  _RBX = adjusted;
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rax+44h]
      vaddss  xmm2, xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm2
      vmulss  xmm0, xmm6, dword ptr [rax+48h]
      vaddss  xmm1, xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm6, dword ptr [rax+4Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx+8]
      vmovaps xmm6, [rsp+38h+var_18]
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
}

/*
==============
DropPointToGroundPlane
==============
*/
bool DropPointToGroundPlane(const vec3_t *point, const vec3_t *pointOnGroundTrace, vec3_t *outCollidePos)
{
  bool result; 
  int IsMovingPlatform; 
  bool v18; 
  actor_physics_t *v19; 
  unsigned __int16 groundEntNum; 
  int IsEntityInUse; 
  __int64 v22; 

  _RBX = outCollidePos;
  _RBP = pointOnGroundTrace;
  _RDI = point;
  if ( g_apl.bGroundPlane )
  {
    __asm
    {
      vmovss  xmm0, cs:g_apl.groundTrace.fraction
      vmovaps [rsp+0B8h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vcomiss xmm0, xmm6
      vmovaps [rsp+0B8h+var_28], xmm7
      vmovaps [rsp+0B8h+var_38], xmm11
      vmovaps [rsp+0B8h+var_48], xmm12
      vmovaps [rsp+0B8h+var_58], xmm13
      vmovaps [rsp+0B8h+var_68], xmm14
      vmovaps [rsp+0B8h+var_78], xmm15
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 339, ASSERT_TYPE_ASSERT, "(g_apl.groundTrace.fraction < 1.f)", (const char *)&queryFormat, "g_apl.groundTrace.fraction < 1.f") )
      __debugbreak();
    IsMovingPlatform = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum);
    v18 = IsMovingPlatform == 0;
    if ( IsMovingPlatform )
    {
      v19 = g_pPhys;
      groundEntNum = g_pPhys->groundEntNum;
      v18 = (unsigned __int16)(groundEntNum - 2046) <= 1u;
      if ( (unsigned __int16)(groundEntNum - 2046) > 1u && (IsEntityInUse = G_IsEntityInUse(groundEntNum), v18 = IsEntityInUse == 0, IsEntityInUse) && (v22 = v19->groundEntNum, v18 = __CFADD__(g_entities, 1456 * v22) || &g_entities[v22] == NULL, &g_entities[v22]) )
      {
        _RAX = g_pPhys;
        __asm
        {
          vmovss  xmm5, dword ptr [rax+44h]
          vmovss  xmm7, dword ptr [rax+48h]
          vmovss  xmm6, dword ptr [rax+4Ch]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm5, [rsp+0B8h+var_88]
          vmovss  xmm7, [rsp+0B8h+var_88]
          vmovss  xmm6, [rsp+0B8h+var_88]
        }
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm5, xmm5, xmm5
        vxorps  xmm7, xmm7, xmm7
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [rdi+8]
      vmovss  xmm12, dword ptr [rbp+4]
      vmovss  xmm13, dword ptr [rbp+8]
      vmulss  xmm2, xmm7, dword ptr cs:g_apl.groundTrace.normal+4
      vmovss  xmm11, dword ptr [rbp+0]
      vmovss  xmm4, dword ptr [rdi]
      vsubss  xmm15, xmm0, xmm12
      vsubss  xmm0, xmm1, xmm13
      vmulss  xmm1, xmm6, dword ptr cs:g_apl.groundTrace.normal+8
      vmovss  [rsp+0B8h+var_88], xmm0
      vmulss  xmm0, xmm5, dword ptr cs:g_apl.groundTrace.normal
      vaddss  xmm3, xmm2, xmm0
      vaddss  xmm3, xmm3, xmm1
      vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
      vsubss  xmm14, xmm4, xmm11
    }
    if ( v18 )
    {
      __asm { vmovss  dword ptr [rbx], xmm4 }
      _RBX->v[1] = _RDI->v[1];
      __asm { vmovss  xmm0, dword ptr [rdi+8] }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm15, dword ptr cs:g_apl.groundTrace.normal+4
        vmulss  xmm0, xmm14, dword ptr cs:g_apl.groundTrace.normal
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, [rsp+0B8h+var_88]
        vmulss  xmm1, xmm0, dword ptr cs:g_apl.groundTrace.normal+8
        vaddss  xmm2, xmm2, xmm1
        vdivss  xmm0, xmm2, xmm3
        vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm1, xmm5, xmm3
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rbx], xmm2
        vmulss  xmm0, xmm7, xmm3
        vaddss  xmm1, xmm0, dword ptr [rdi+4]
        vmulss  xmm2, xmm6, xmm3
        vmovss  dword ptr [rbx+4], xmm1
        vaddss  xmm0, xmm2, dword ptr [rdi+8]
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+8], xmm0
      vsubss  xmm0, xmm12, dword ptr [rbx+4]
      vsubss  xmm1, xmm11, dword ptr [rbx]
      vmovaps xmm15, [rsp+0B8h+var_78]
      vmovaps xmm14, [rsp+0B8h+var_68]
      vmovaps xmm12, [rsp+0B8h+var_48]
      vmovaps xmm11, [rsp+0B8h+var_38]
      vmulss  xmm2, xmm1, xmm5
      vmulss  xmm3, xmm0, xmm7
      vsubss  xmm0, xmm13, dword ptr [rbx+8]
      vmovaps xmm13, [rsp+0B8h+var_58]
      vmulss  xmm1, xmm0, xmm6
      vmovss  xmm0, cs:g_apl.fFrameTime
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm0, dword ptr [rax+80h]
      vcomiss xmm2, xmm1
    }
    if ( !v18 )
    {
      __asm
      {
        vsubss  xmm3, xmm1, xmm2
        vmulss  xmm0, xmm5, xmm3
        vaddss  xmm1, xmm0, dword ptr [rbx]
        vmulss  xmm2, xmm7, xmm3
        vaddss  xmm0, xmm2, dword ptr [rbx+4]
        vmovss  dword ptr [rbx], xmm1
        vmulss  xmm1, xmm6, xmm3
        vaddss  xmm2, xmm1, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm2
        vmovss  dword ptr [rbx+4], xmm0
      }
    }
    __asm { vmovaps xmm7, [rsp+0B8h+var_28] }
    result = 1;
    __asm { vmovaps xmm6, [rsp+0B8h+var_18] }
  }
  else
  {
    *outCollidePos = *point;
    return 0;
  }
  return result;
}

/*
==============
AIScriptedInterface::Physics_CharacterTrace
==============
*/
__int64 AIScriptedInterface::Physics_CharacterTrace(AIScriptedInterface *this)
{
  actor_physics_t *v4; 
  int iTraceMask; 
  ai_scripted_t *m_pAI; 
  AIScriptedInterface *v7; 
  AINavigator *Navigator; 
  signed int Layer; 
  nav_space_s *m_pSpace; 
  AINavigator2D *v11; 
  const bfx::AreaHandle *hHintArea; 
  bool ClosestVerticalPosWithHint; 
  bool v19; 
  int v20; 
  unsigned __int8 v29; 
  __int64 result; 
  bfx::AreaHandle pOutArea; 
  __int64 v34; 
  AIWrapper v35; 
  vec3_t point; 
  vec3_t endPos; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  nav_probe_results_s pOutResults; 
  trace_t results; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  v34 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  bfx::AreaHandle::AreaHandle(&pOutArea);
  v4 = g_pPhys;
  iTraceMask = g_apl.iTraceMask;
  m_pAI = this->m_pAI;
  g_pPhys = &m_pAI->Physics;
  g_apl.iTraceMask = m_pAI->Physics.iTraceMask;
  AIWrapper::AIWrapper(&v35, &g_entities[m_pAI->Physics.iEntNum]);
  v7 = v35.m_pAI;
  if ( !v35.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2885, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Navigator = AICommonInterface::GetNavigator(v7);
  Layer = Nav_GetLayer(Navigator);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2889, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  m_pSpace = Navigator->m_pSpace;
  if ( !m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2891, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v11 = Navigator->Get2DNavigator(Navigator);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2894, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  _RAX = AINavigator2D::GetPathSpec(v11);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+120h+pPathSpec.m_obstacleMode], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbp+120h+pPathSpec.m_maxSearchDist], ymm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbp+120h+pPathSpec.m_penaltyTable.m_perFlagPenalties+18h], xmm0
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rbp+120h+results.fraction], xmm6
  }
  Nav_GetSpaceUp(m_pSpace, &outUp);
  __asm
  {
    vmovss  dword ptr [rbp+120h+point], xmm6
    vmovss  dword ptr [rbp+120h+point+4], xmm6
    vmovss  dword ptr [rbp+120h+point+8], xmm6
  }
  hHintArea = AINavigator2D::GetCurArea(v11);
  ClosestVerticalPosWithHint = Nav_GetClosestVerticalPosWithHint(&g_pPhys->vOrigin, &outUp, Layer, &m_pSpace->hSpace, &pPathSpec, &point, hHintArea, &pOutArea);
  v19 = !ClosestVerticalPosWithHint;
  if ( ClosestVerticalPosWithHint )
  {
    bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
    v20 = g_apl.iTraceMask & 0x2004000;
    DropPointToGroundPlane(&point, &g_pPhys->vOrigin, &g_pPhys->vOrigin);
    __asm
    {
      vmovss  xmm2, cs:g_apl.fFrameTime
      vmulss  xmm0, xmm2, dword ptr [rax+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rbp+120h+point]
      vmovss  dword ptr [rbp+120h+endPos], xmm1
      vmulss  xmm0, xmm2, dword ptr [rax+10h]
      vaddss  xmm1, xmm0, dword ptr [rbp+120h+point+4]
      vmovss  dword ptr [rbp+120h+endPos+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rax+14h]
      vaddss  xmm1, xmm0, dword ptr [rbp+120h+point+8]
      vmovss  dword ptr [rbp+120h+endPos+8], xmm1
    }
    Nav_Trace(m_pSpace, &point, &endPos, (AINavLayer)Layer, &pPathSpec, &pOutResults);
    Profile_Begin(262);
    AIPhys_CharacterTrace(&results, &point, &endPos, &g_pPhys->bounds, g_pPhys->iEntNum, v20);
    Profile_EndInternal(NULL);
    bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  }
  g_apl.iTraceMask = iTraceMask;
  g_pPhys = v4;
  __asm
  {
    vmovss  xmm0, [rbp+120h+results.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  v29 = v19;
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  result = v29;
  _R11 = &v42;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
AIScriptedInterface::Physics_DoMovement
==============
*/

__int64 __fastcall AIScriptedInterface::Physics_DoMovement(actor_physics_t *pPhys, __int64 a2, double _XMM2_8)
{
  unsigned int v9; 
  aiphys_t ePhysicsType; 
  SlideMoveResult v47; 
  actor_physics_t *v48; 
  __int64 iHitEntnum; 
  __int64 v50; 
  unsigned int v57; 
  unsigned __int16 v72; 
  bool v73; 
  __int64 result; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBX = pPhys;
  Profile_Begin(261);
  _ESI = 0;
  SV_Profile_BeginEvent(SVPROF_AI_ACTOR_PHYSICS);
  g_pPhys = _RBX;
  _RBX->iHitEntnum = 2047;
  _RBX->iNumTouch = 0;
  _RBX->bDeflected = 0;
  v9 = 1;
  if ( _RBX->groundEntNum != 2046 )
    goto LABEL_7;
  if ( !_RBX->bHasInited )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rbx+5Ch]
  }
  if ( _RBX->bHasInited )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rbx+60h]
  }
  if ( _RBX->bHasInited )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
    vucomiss xmm0, dword ptr [rbx+64h]
  }
  if ( _RBX->bHasInited )
  {
LABEL_7:
    _RBX->bHasInited = 1;
    memset_0(&g_apl, 0, sizeof(g_apl));
    g_apl.iTraceMask = _RBX->iTraceMask;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  dword ptr cs:g_apl.vPrevOrigin, xmm0
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr cs:g_apl.vPrevOrigin+4, xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr cs:g_apl.vPrevOrigin+8, xmm0
      vmovss  xmm1, dword ptr [rbx+0Ch]
      vmovss  dword ptr cs:g_apl.vPrevVelocity, xmm1
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovss  dword ptr cs:g_apl.vPrevVelocity+4, xmm0
      vmovss  xmm1, dword ptr [rbx+14h]
      vmovss  dword ptr cs:g_apl.vPrevVelocity+8, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+84h]
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmovss  cs:g_apl.fFrameTime, xmm1
    }
    if ( _RBX->iMsec <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2658, ASSERT_TYPE_ASSERT, "(g_pPhys->iMsec > 0)", (const char *)&queryFormat, "g_pPhys->iMsec > 0") )
        __debugbreak();
      _RBX = g_pPhys;
    }
    _RBX->stepMove = 0;
    if ( _RBX->bIsAlive )
    {
      __asm
      {
        vmovd   xmm1, esi
        vmovd   xmm0, dword ptr [rbx+11Ch]
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm2, cs:__real@41200000
        vmovss  xmm1, cs:__real@41900000
        vblendvps xmm0, xmm1, xmm2, xmm3
        vmovss  cs:g_apl.stepheight, xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@40800000
        vmovss  cs:g_apl.stepheight, xmm0
      }
    }
    *(_QWORD *)&_RBX->bHasGroundPlane = 0i64;
    ePhysicsType = _RBX->ePhysicsType;
    if ( ePhysicsType == AIPHYS_NOCLIP )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+5Ch]
        vaddss  xmm1, xmm0, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
        vmovss  xmm0, dword ptr [rbx+60h]
        vaddss  xmm1, xmm0, dword ptr [rbx+4]
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm0, dword ptr [rbx+64h]
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
        vxorps  xmm2, xmm2, xmm2
        vmovss  xmm0, cs:g_apl.fFrameTime
        vcomiss xmm0, xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1987, ASSERT_TYPE_ASSERT, "( g_apl.fFrameTime > 0.f )", (const char *)&queryFormat, "g_apl.fFrameTime > 0.f") )
        __debugbreak();
      _RBX = g_pPhys;
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm2, xmm0, cs:g_apl.fFrameTime
        vmulss  xmm0, xmm2, dword ptr [rbx+5Ch]
        vmovss  dword ptr [rbx+0Ch], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+60h]
        vmovss  dword ptr [rbx+10h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+64h]
        vmovss  dword ptr [rbx+14h], xmm0
      }
      AIScriptedInterface::Physics_UpdatePrevGround(_RBX);
      Profile_EndInternal(NULL);
    }
    else if ( (unsigned int)(ePhysicsType - 4) > 1 || _RBX->bSpace )
    {
      AIPhys_GroundTrace();
      AIPhys_DetermineStairsState(v50, *(double *)&_XMM1);
      _RCX = g_pPhys;
      if ( (unsigned int)(g_pPhys->ePhysicsType - 6) <= 1 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vdivss  xmm1, xmm0, cs:g_apl.fFrameTime
          vmulss  xmm0, xmm1, dword ptr [rcx+5Ch]
          vmovss  dword ptr [rcx+0Ch], xmm0
          vmulss  xmm1, xmm1, dword ptr [rcx+60h]
          vmovss  dword ptr [rcx+10h], xmm1
        }
        _RCX->vVelocity.v[2] = 0.0;
        v57 = AIPhys_StepSlideMove_Internal(0, 0);
        if ( AIPhys_UseNavmeshCollision() )
        {
          _RCX = g_pPhys;
        }
        else
        {
          _RAX = g_pPhys;
          __asm
          {
            vmovss  xmm6, dword ptr [rax+0Ch]
            vmovss  xmm7, dword ptr [rax+10h]
            vmovss  xmm8, dword ptr [rax+14h]
            vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
            vmovss  dword ptr [rax+0Ch], xmm0
            vmovss  xmm1, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
            vmovss  dword ptr [rax+10h], xmm1
            vmovss  xmm0, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
            vmovss  dword ptr [rax+14h], xmm0
          }
          AIPhys_StepSlideMove_Internal(1, 1);
          _RCX = g_pPhys;
          __asm
          {
            vmovss  dword ptr [rcx+0Ch], xmm6
            vmovss  dword ptr [rcx+10h], xmm7
            vmovss  dword ptr [rcx+14h], xmm8
          }
        }
      }
      else if ( g_pPhys->bSpace )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vdivss  xmm2, xmm0, cs:g_apl.fFrameTime
          vmulss  xmm1, xmm2, dword ptr [rcx+5Ch]
          vmovss  dword ptr [rcx+0Ch], xmm1
          vmulss  xmm0, xmm2, dword ptr [rcx+60h]
          vmovss  dword ptr [rcx+10h], xmm0
          vmulss  xmm1, xmm2, dword ptr [rcx+64h]
          vmovss  dword ptr [rcx+14h], xmm1
        }
        v57 = AIPhys_StepSlideMove_Internal(0, 0);
        _RCX = g_pPhys;
      }
      else
      {
        if ( g_apl.bIsWalking )
          v57 = AIPhys_WalkMove();
        else
          v57 = AIPhys_StepSlideMove_Internal(1, 0);
        _RCX = g_pPhys;
      }
      if ( g_apl.bGroundPlane )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal+8
          vcomiss xmm0, cs:__real@3e99999a
        }
        _RCX->bHasGroundPlane = 1;
        __asm
        {
          vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal+8
          vmovss  dword ptr [rcx+24h], xmm0
        }
        _RCX->iSurfaceType = (g_apl.groundTrace.surfaceFlags >> 19) & 0x3F;
        v72 = _RCX->groundEntNum - 2046;
        v73 = v72 == 1;
        __asm { vmovd   xmm1, esi }
        _EAX = v72 > 1u;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm3, xmm0, xmm1
          vmovss  xmm2, cs:__real@40400000
          vmovss  xmm1, cs:__real@41a00000
          vblendvps xmm5, xmm1, xmm2, xmm3
          vmovss  xmm0, dword ptr cs:g_apl.vPrevOrigin+8
          vsubss  xmm4, xmm0, dword ptr [rcx+8]
          vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm4, xmm5
        }
        _RCX->stepMove = _RCX->groundEntNum != 2046 && !v73;
      }
      else
      {
        _RCX->iSurfaceType = 0;
      }
      AIScriptedInterface::Physics_UpdatePrevGround(_RCX);
      Profile_EndInternal(NULL);
      v9 = v57;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm2, xmm0, cs:g_apl.fFrameTime
        vmulss  xmm1, xmm2, dword ptr [rbx+5Ch]
        vmovss  dword ptr [rbx+0Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+60h]
        vmovss  dword ptr [rbx+10h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+64h]
        vmovss  dword ptr [rbx+14h], xmm1
      }
      v47 = AIPhys_SlideMove(0, 1);
      v48 = g_pPhys;
      if ( v47 == SLIDEMOVE_CLIPPED )
      {
        if ( g_pPhys->bStuck )
        {
          iHitEntnum = g_pPhys->iHitEntnum;
          if ( (_DWORD)iHitEntnum != 2047 )
          {
            if ( g_entities[iHitEntnum].client )
            {
              g_pPhys->bStuck = 0;
              g_apl.iTraceMask &= ~0x2000000u;
              AIPhys_SlideMove(0, 1);
              v48 = g_pPhys;
            }
          }
        }
      }
      AIScriptedInterface::Physics_UpdatePrevGround(v48);
      Profile_EndInternal(NULL);
    }
  }
  else
  {
    *(_QWORD *)_RBX->vVelocity.v = 0i64;
    _RBX->vVelocity.v[2] = 0.0;
    Profile_EndInternal(NULL);
  }
  SV_Profile_EndEvent(SVPROF_AI_ACTOR_PHYSICS);
  result = v9;
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
AIScriptedInterface::Physics_GroundTraceOnly
==============
*/
void AIScriptedInterface::Physics_GroundTraceOnly(AIScriptedInterface *this)
{
  aiphys_t ePhysicsType; 
  __int64 v21; 
  unsigned __int16 v28; 
  bool v29; 

  Profile_Begin(261);
  _RBX = &this->m_pAI->Physics;
  _EDI = 0;
  g_pPhys = _RBX;
  _RBX->iHitEntnum = 2047;
  _RBX->iNumTouch = 0;
  _RBX->bDeflected = 0;
  _RBX->bHasInited = 1;
  memset_0(&g_apl, 0, sizeof(g_apl));
  g_apl.iTraceMask = _RBX->iTraceMask;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  dword ptr cs:g_apl.vPrevOrigin, xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr cs:g_apl.vPrevOrigin+4, xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr cs:g_apl.vPrevOrigin+8, xmm0
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vmovss  dword ptr cs:g_apl.vPrevVelocity, xmm1
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  dword ptr cs:g_apl.vPrevVelocity+4, xmm0
    vmovss  xmm1, dword ptr [rbx+14h]
    vmovss  dword ptr cs:g_apl.vPrevVelocity+8, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+84h]
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  cs:g_apl.fFrameTime, xmm1
  }
  if ( _RBX->iMsec <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2788, ASSERT_TYPE_ASSERT, "(g_pPhys->iMsec > 0)", (const char *)&queryFormat, "g_pPhys->iMsec > 0") )
      __debugbreak();
    _RBX = g_pPhys;
  }
  _RBX->stepMove = 0;
  if ( _RBX->bIsAlive )
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rbx+11Ch]
      vmovss  xmm2, cs:__real@41200000
      vmovd   xmm1, edi
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@41900000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  cs:g_apl.stepheight, xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@40800000
      vmovss  cs:g_apl.stepheight, xmm0
    }
  }
  ePhysicsType = _RBX->ePhysicsType;
  *(_QWORD *)&_RBX->bHasGroundPlane = 0i64;
  if ( ePhysicsType == AIPHYS_NOCLIP || (unsigned int)(ePhysicsType - 4) <= 1 && !_RBX->bSpace )
  {
    _RCX = _RBX;
  }
  else
  {
    AIPhys_GroundTrace();
    AIPhys_DetermineStairsState(v21, *(double *)&_XMM1);
    _RCX = g_pPhys;
    if ( g_apl.bGroundPlane )
    {
      __asm
      {
        vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal+8
        vcomiss xmm0, cs:__real@3e99999a
        vmovss  xmm2, cs:__real@40400000
      }
      g_pPhys->bHasGroundPlane = 1;
      __asm
      {
        vmovss  xmm0, dword ptr cs:g_apl.groundTrace.normal+8
        vmovss  dword ptr [rcx+24h], xmm0
      }
      _RCX->iSurfaceType = (g_apl.groundTrace.surfaceFlags >> 19) & 0x3F;
      __asm
      {
        vmovss  xmm0, dword ptr cs:g_apl.vPrevOrigin+8
        vsubss  xmm4, xmm0, dword ptr [rcx+8]
        vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      }
      v28 = _RCX->groundEntNum - 2046;
      v29 = v28 == 1;
      __asm { vmovd   xmm1, edi }
      _EAX = v28 > 1u;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@41a00000
        vblendvps xmm0, xmm1, xmm2, xmm3
        vcomiss xmm4, xmm0
      }
      _RCX->stepMove = _RCX->groundEntNum != 2046 && !v29;
    }
    else
    {
      g_pPhys->iSurfaceType = 0;
    }
  }
  AIScriptedInterface::Physics_UpdatePrevGround(_RCX);
  Profile_EndInternal(NULL);
}

/*
==============
AIScriptedInterface::Physics_HandleMovingPlatformTeleport
==============
*/
void AIScriptedInterface::Physics_HandleMovingPlatformTeleport(AIScriptedInterface *this)
{
  actor_physics_t *p_Physics; 
  int iTraceMask; 
  int v3; 
  actor_physics_t *v4; 
  int IsGroundMoving; 
  actor_physics_t *v6; 
  unsigned __int16 v7; 
  actor_physics_t *v8; 
  vec3_t end; 
  vec3_t start; 
  trace_t trace; 

  p_Physics = &this->m_pAI->Physics;
  if ( this->m_pAI->Physics.bSpace && BGMovingPlatforms::IsMovingPlatform(this->m_pAI->Physics.groundEntNum) )
  {
    iTraceMask = p_Physics->iTraceMask;
    v3 = g_apl.iTraceMask;
    v4 = g_pPhys;
    g_pPhys = p_Physics;
    g_apl.iTraceMask = iTraceMask;
    IsGroundMoving = AIPhys_IsGroundMoving();
    AIPhys_GetGroundTraceInfo(&start, &end, IsGroundMoving);
    AIPhys_DoGroundTrace(&trace, &start, &end);
    if ( g_pPhys->groundEntNum != trace.hitId )
    {
      if ( GMovingPlatforms::TraceHitMovingPlatform(&trace) )
      {
        v7 = truncate_cast<unsigned short,unsigned int>(trace.hitId);
        v8 = g_pPhys;
        g_pPhys->groundEntNum = v7;
        AIScriptedInterface::Physics_UpdatePrevGround(v8);
      }
      else
      {
        v6 = g_pPhys;
        g_pPhys->groundEntNum = 2047;
        *(_QWORD *)v6->vPrevGroundOrigin.v = 0i64;
        *(_QWORD *)&v6->vPrevGroundOrigin.z = 0i64;
        *(_QWORD *)&v6->vPrevGroundAngles.y = 0i64;
      }
    }
    g_apl.iTraceMask = v3;
    g_pPhys = v4;
  }
}

/*
==============
AIScriptedInterface::Physics_TestForLinkedGroundChange
==============
*/
void AIScriptedInterface::Physics_TestForLinkedGroundChange(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  int IsLinked; 
  bool v4; 
  ai_scripted_t *v5; 
  int iTraceMask; 
  actor_physics_t *v9; 
  vec3_t end; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 

  if ( BGMovingPlatforms::IsMovingPlatform(this->m_pAI->Physics.groundEntNum) )
  {
    m_pAI = this->m_pAI;
    if ( !g_entities[m_pAI->Physics.groundEntNum].vehicle )
    {
      IsLinked = G_EntIsLinked(m_pAI->ent);
      v4 = IsLinked == 0;
      if ( IsLinked )
      {
        v5 = this->m_pAI;
        __asm { vmovss  xmm3, cs:__real@42480000 }
        iTraceMask = g_apl.iTraceMask;
        _RAX = v5->ent;
        v9 = g_pPhys;
        g_pPhys = &v5->Physics;
        __asm
        {
          vmovss  xmm1, dword ptr [rax+130h]
          vmovss  dword ptr [rsp+0E8h+start], xmm1
          vmovss  xmm4, dword ptr [rax+134h]
          vmovss  dword ptr [rsp+0E8h+start+4], xmm4
          vmovss  xmm5, dword ptr [rax+138h]
          vmovss  dword ptr [rsp+0E8h+start+8], xmm5
          vmulss  xmm0, xmm3, dword ptr [rbx+870h]
          vsubss  xmm1, xmm1, xmm0
          vmovss  dword ptr [rsp+0E8h+end], xmm1
          vmulss  xmm0, xmm3, dword ptr [rbx+874h]
          vsubss  xmm1, xmm4, xmm0
          vmovss  dword ptr [rsp+0E8h+end+4], xmm1
          vmulss  xmm0, xmm3, dword ptr [rbx+878h]
          vsubss  xmm1, xmm5, xmm0
          vmovss  dword ptr [rsp+0E8h+end+8], xmm1
        }
        g_apl.iTraceMask = v5->Physics.iTraceMask;
        __asm
        {
          vmovsd  xmm0, qword ptr [rcx+98h]
          vmovups xmm2, xmmword ptr [rcx+88h]
          vshufps xmm1, xmm0, xmm0, 55h ; 'U'
          vsubss  xmm3, xmm1, cs:__real@40a00000
          vmovups xmmword ptr [rsp+0E8h+bounds.midPoint], xmm2
          vshufps xmm2, xmm2, xmm2, 0FFh
          vcomiss xmm3, xmm2
          vmovsd  qword ptr [rsp+0E8h+bounds.halfSize+4], xmm0
        }
        if ( !v4 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0E8h+bounds.midPoint+8]
            vaddss  xmm1, xmm0, cs:__real@c0a00000
            vmovss  dword ptr [rsp+0E8h+bounds.midPoint+8], xmm1
            vmovss  dword ptr [rsp+0E8h+bounds.halfSize+8], xmm3
          }
        }
        Profile_Begin(268);
        AIPhys_Trace(&results, &start, &end, &bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
        Profile_EndInternal(NULL);
        g_apl.iTraceMask = iTraceMask;
        g_pPhys = v9;
        if ( GMovingPlatforms::TraceHitMovingPlatform(&results) )
        {
          if ( results.hitId != v5->Physics.groundEntNum )
          {
            v5->Physics.groundEntNum = truncate_cast<unsigned short,unsigned int>(results.hitId);
            AIPhys_HandleMovingPlatformGroundChange(*(double *)&_XMM0);
          }
        }
      }
    }
  }
}

/*
==============
AIScriptedInterface::Physics_Trace
==============
*/
void AIScriptedInterface::Physics_Trace(AIScriptedInterface *this, const vec3_t *start, const vec3_t *end, trace_t *trace)
{
  ai_scripted_t *m_pAI; 
  actor_physics_t *v5; 
  int iTraceMask; 

  m_pAI = this->m_pAI;
  v5 = g_pPhys;
  iTraceMask = g_apl.iTraceMask;
  g_pPhys = &m_pAI->Physics;
  g_apl.iTraceMask = m_pAI->Physics.iTraceMask;
  AIPhys_DoTrace(trace, start, end);
  g_apl.iTraceMask = iTraceMask;
  g_pPhys = v5;
}

/*
==============
AIScriptedInterface::Physics_UpdatePrevGround
==============
*/
void AIScriptedInterface::Physics_UpdatePrevGround(actor_physics_t *pPhys)
{
  unsigned __int16 groundEntNum; 
  gentity_s *v3; 

  groundEntNum = pPhys->groundEntNum;
  if ( (unsigned __int16)(groundEntNum - 2046) > 1u && G_IsEntityInUse(groundEntNum) )
  {
    v3 = &g_entities[pPhys->groundEntNum];
    if ( v3 )
    {
      pPhys->vPrevGroundOrigin.v[0] = v3->r.currentOrigin.v[0];
      pPhys->vPrevGroundOrigin.v[1] = v3->r.currentOrigin.v[1];
      pPhys->vPrevGroundOrigin.v[2] = v3->r.currentOrigin.v[2];
      pPhys->vPrevGroundAngles.v[0] = v3->r.currentAngles.v[0];
      pPhys->vPrevGroundAngles.v[1] = v3->r.currentAngles.v[1];
      pPhys->vPrevGroundAngles.v[2] = v3->r.currentAngles.v[2];
    }
  }
}

/*
==============
AIScriptedInterface::PostPhysics
==============
*/
void AIScriptedInterface::PostPhysics(AIScriptedInterface *this)
{
  Profile_Begin(261);
  g_pPhys = &this->m_pAI->Physics;
  if ( g_pPhys->bIsAlive )
    AIPhys_Footsteps();
  AIPhys_FoliageSounds();
  Profile_EndInternal(NULL);
}

