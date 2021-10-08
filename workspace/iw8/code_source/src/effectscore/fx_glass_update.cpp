/*
==============
Glass_Update
==============
*/

void __fastcall Glass_Update(const void *const cmd)
{
  ?Glass_Update@@YAXQEBX@Z(cmd);
}

/*
==============
Glass_Fall_GetLastPassedTraceTime
==============
*/
__int64 Glass_Fall_GetLastPassedTraceTime(int time, int traceTimeOffset)
{
  int v3; 
  int v5; 

  v3 = time + glass_trace_interval->current.integer - traceTimeOffset;
  if ( v3 < 0 )
  {
    v5 = time + glass_trace_interval->current.integer - traceTimeOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 49, ASSERT_TYPE_ASSERT, "( baseTime ) >= ( 0 )", "%s >= %s\n\t%i, %i", "baseTime", "0", v5, 0i64) )
      __debugbreak();
  }
  return (unsigned int)(traceTimeOffset + v3 - v3 % glass_trace_interval->current.integer - glass_trace_interval->current.integer);
}

/*
==============
Glass_Update
==============
*/
void Glass_Update(const void *const cmd)
{
  int v1; 
  FxSystem *System; 
  unsigned int v3; 
  unsigned int pieceWordCount; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  v1 = *(_DWORD *)cmd;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Glass_Update");
  Glass_InitPendingZones();
  System = FX_GetSystem(v1);
  v3 = 0;
  pieceWordCount = fxWorld.glassSys.pieceWordCount;
  fxWorld.glassSys.prevTime = fxWorld.glassSys.time;
  fxWorld.glassSys.time = System->msecNow;
  if ( fxWorld.glassSys.pieceWordCount )
  {
    v5 = 0i64;
    do
    {
      v6 = fxWorld.glassSys.isInUse[v5];
      while ( v6 )
      {
        v7 = __lzcnt(v6);
        if ( v7 >= 0x20 )
        {
          LODWORD(v9) = 32;
          LODWORD(v8) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        v6 &= ~(0x80000000 >> v7);
        Glass_UpdatePiece(&fxWorld.glassSys, 0, v7 | (32 * v3));
      }
      ++v3;
      ++v5;
    }
    while ( v3 < pieceWordCount );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Glass_UpdateFall
==============
*/
void Glass_UpdateFall(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  int time; 
  int v17; 
  int prevTime; 
  FxGlassPieceState *pieceStates; 
  __int64 v21; 
  unsigned __int64 v23; 
  int fallTime; 
  int v41; 
  int LastPassedTraceTime; 
  int v43; 
  int v75; 
  bool v145; 
  bool v146; 
  __int64 v147; 
  FxGlassPieceState *v148; 
  __int64 contentMask; 
  __int64 locational; 
  unsigned int traceTimeOffset; 
  unsigned int pieceIndexa; 
  float s[2]; 
  __int64 v181; 
  FxGlassDef *v182; 
  float c; 
  vec3_t start; 
  vec3_t normal; 
  vec3_t end; 
  vec3_t origin; 
  trace_t results; 
  char v197; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  time = glassSys->time;
  _RBX = glassSys;
  _R15 = glassSys->pieceDynamics;
  v17 = glassSys->time;
  prevTime = glassSys->prevTime;
  pieceStates = glassSys->pieceStates;
  __asm { vmovss  xmm13, cs:__real@3a83126f }
  v21 = pieceIndex;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v23 = pieceIndex;
  _RDI = &glassSys->piecePlaces[v23];
  v181 = v23 * 32;
  _R14 = v21;
  pieceIndexa = v21;
  fallTime = _R15[v21].fallTime;
  v182 = &fxWorld.glassGlob.defs[pieceStates[v23].defIndex];
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm12, xmm0, xmm13
    vmulss  xmm0, xmm12, dword ptr [r15+r14*8+0Ch]
    vaddss  xmm14, xmm0, dword ptr [rdi+10h]
    vmulss  xmm1, xmm12, dword ptr [r15+r14*8+10h]
    vaddss  xmm15, xmm1, dword ptr [rdi+14h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm13
    vmovss  xmm0, dword ptr [r15+r14*8+14h]
    vmulss  xmm2, xmm1, dword ptr [rax+28h]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm2, xmm1, xmm12
    vaddss  xmm0, xmm2, dword ptr [rdi+18h]
    vmovss  [rsp+210h+s], xmm0
  }
  traceTimeOffset = (unsigned int)(17 * v21) % glass_trace_interval->current.integer;
  if ( time < fallTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 90, ASSERT_TYPE_ASSERT, "( glassSys->time ) >= ( pieceDynamics->fallTime )", "%s >= %s\n\t%i, %i", "glassSys->time", "pieceDynamics->fallTime", time, fallTime) )
  {
    __debugbreak();
    v17 = _RBX->time;
  }
  v41 = _R15[_R14].fallTime;
  __asm
  {
    vmovaps xmmword ptr [rsp+210h+var_48+8], xmm6
    vmovaps [rsp+210h+var_58+8], xmm7
    vmovaps [rsp+210h+var_68+8], xmm8
  }
  if ( prevTime >= v41 )
    v41 = prevTime;
  __asm
  {
    vmovaps [rsp+210h+var_78+8], xmm9
    vmovaps [rsp+210h+var_88+8], xmm10
  }
  LastPassedTraceTime = Glass_Fall_GetLastPassedTraceTime(v41, traceTimeOffset);
  v43 = Glass_Fall_GetLastPassedTraceTime(v17, traceTimeOffset);
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  if ( v43 <= LastPassedTraceTime )
    goto LABEL_13;
  if ( v43 < _R15[_R14].fallTime )
  {
    LODWORD(locational) = _R15[_R14].fallTime;
    LODWORD(contentMask) = v43;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 110, ASSERT_TYPE_ASSERT, "( nextTraceTime ) >= ( pieceDynamics->fallTime )", "%s >= %s\n\t%i, %i", "nextTraceTime", "pieceDynamics->fallTime", contentMask, locational) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, dword ptr [r15+r14*8+14h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, xmm13
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm13
    vmulss  xmm2, xmm1, dword ptr [r8+28h]
    vmulss  xmm0, xmm4, dword ptr [r15+r14*8+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rdi+10h]
    vmulss  xmm0, xmm4, dword ptr [r15+r14*8+10h]
    vmovss  dword ptr [rbp+110h+start], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+14h]
    vsubss  xmm3, xmm10, xmm2
    vmovss  dword ptr [rbp+110h+start+4], xmm1
    vmulss  xmm0, xmm3, xmm4
    vaddss  xmm1, xmm0, dword ptr [rdi+18h]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+110h+start+8], xmm1
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, xmm13
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm13
    vmulss  xmm2, xmm1, dword ptr [r8+28h]
    vmulss  xmm0, xmm4, dword ptr [r15+r14*8+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rdi+10h]
    vsubss  xmm3, xmm10, xmm2
    vmulss  xmm2, xmm4, dword ptr [r15+r14*8+10h]
    vaddss  xmm0, xmm2, dword ptr [rdi+14h]
    vmovss  dword ptr [rbp+110h+end], xmm1
    vmulss  xmm1, xmm3, xmm4
    vaddss  xmm2, xmm1, dword ptr [rdi+18h]
    vmovss  dword ptr [rbp+110h+end+8], xmm2
    vmovss  dword ptr [rbp+110h+end+4], xmm0
  }
  PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, &results, &start, &end, &bounds_origin, 2047, 0, 41968017, 0, NULL, All);
  __asm
  {
    vmovss  xmm6, [rbp+110h+results.fraction]
    vcomiss xmm6, xmm11
  }
  if ( !v145 )
    goto LABEL_13;
  v75 = _RBX->time - _R15[_R14].fallTime;
  if ( !results.allsolid )
  {
    v145 = (unsigned int)v75 < 0xC8;
    v146 = (unsigned int)v75 <= 0xC8;
    if ( v75 > 200 )
    {
      v147 = v181;
      v148 = _RBX->pieceStates;
      goto LABEL_23;
    }
LABEL_20:
    v147 = v181;
    v148 = _RBX->pieceStates;
    v145 = 0;
    v146 = (*((_BYTE *)&v148->flags + v181) & 0x10) == 0;
    if ( (*((_BYTE *)&v148->flags + v181) & 0x10) == 0 )
    {
LABEL_29:
      Glass_FreePiece(_RBX, pieceIndexa);
      goto LABEL_18;
    }
LABEL_23:
    _RAX = glass_fx_chance;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vaddss  xmm2, xmm0, dword ptr [rbx+7Ch]
      vcomiss xmm2, xmm11
      vmovss  dword ptr [rbx+7Ch], xmm2
    }
    if ( !v145 || (v146 = (*((_BYTE *)&v148->flags + v147) & 0x10) == 0, (*((_BYTE *)&v148->flags + v147) & 0x10) != 0) )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rbp+110h+results.normal]
        vmovss  xmm5, dword ptr [rbp+110h+results.normal+4]
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm1, xmm1, xmm2, 1
        vsubss  xmm0, xmm2, xmm1
        vmovss  xmm1, dword ptr [rbp+110h+end]
        vmovss  dword ptr [rbx+7Ch], xmm0
        vsubss  xmm0, xmm1, dword ptr [rbp+110h+start]
        vmulss  xmm2, xmm0, xmm6
        vaddss  xmm3, xmm2, dword ptr [rbp+110h+start]
        vmovss  xmm0, dword ptr [rbp+110h+end+4]
        vsubss  xmm1, xmm0, dword ptr [rbp+110h+start+4]
        vmovss  xmm0, dword ptr [rbp+110h+end+8]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rbp+110h+start+8]
        vmovss  dword ptr [rbp+110h+origin], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbp+110h+start+4]
        vmulss  xmm2, xmm1, xmm6
        vmovss  xmm6, dword ptr [rbp+110h+results.normal+8]
        vmovss  dword ptr [rbp+110h+origin+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbp+110h+start+8]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vmovss  dword ptr [rbp+110h+origin+8], xmm3
        vaddss  xmm0, xmm2, xmm1
        vxorps  xmm3, xmm3, xmm3
        vcomiss xmm0, xmm3
      }
      if ( v146 )
      {
        __asm
        {
          vmovss  dword ptr [rbp+110h+normal], xmm3
          vmovss  dword ptr [rbp+110h+normal+4], xmm3
          vmovss  dword ptr [rbp+110h+normal+8], xmm11
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbp+110h+normal], xmm4
          vmovss  dword ptr [rbp+110h+normal+4], xmm5
          vmovss  dword ptr [rbp+110h+normal+8], xmm6
        }
      }
      Glass_PlayEffect(&v182->pieceBreakEffect, &origin, &normal);
    }
    goto LABEL_29;
  }
  if ( v75 > 200 )
    goto LABEL_20;
LABEL_13:
  __asm
  {
    vmovss  xmm0, [rsp+210h+s]
    vmovss  dword ptr [rdi+18h], xmm0
    vmovss  dword ptr [rdi+10h], xmm14
    vmovss  dword ptr [rdi+14h], xmm15
    vmovss  xmm8, dword ptr [r15+r14*8+1Ch]
    vmovss  xmm7, dword ptr [r15+r14*8+18h]
    vmovss  xmm9, dword ptr [r15+r14*8+20h]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm6, xmm11, xmm0
    vmulss  xmm0, xmm3, xmm12
    vmulss  xmm0, xmm0, cs:__real@3f000000; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s[1], &c);
  __asm
  {
    vmovss  xmm2, [rsp+210h+s+4]
    vmulss  xmm0, xmm7, xmm6
    vmulss  xmm13, xmm0, xmm2
    vmulss  xmm0, xmm8, xmm6
    vmulss  xmm1, xmm9, xmm6
    vmulss  xmm14, xmm0, xmm2
    vmulss  xmm15, xmm1, xmm2
    vmovss  [rbp+110h+var_18C], xmm14
    vmovss  [rbp+110h+var_190], xmm13
    vmovss  [rbp+110h+var_188], xmm15
  }
  if ( _RDI == (FxGlassPiecePlace *)&end )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm13, [rbp+110h+var_190]
      vmovss  xmm14, [rbp+110h+var_18C]
      vmovss  xmm15, [rbp+110h+var_188]
    }
  }
  __asm
  {
    vmovss  xmm11, dword ptr [rdi]
    vmovss  xmm10, dword ptr [rdi+0Ch]
    vmovss  xmm7, [rbp+110h+c]
    vmovss  xmm12, dword ptr [rdi+8]
    vmovss  xmm9, dword ptr [rdi+4]
    vmulss  xmm1, xmm10, xmm13
    vmulss  xmm0, xmm11, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm14
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm15
    vsubss  xmm8, xmm3, xmm0
    vmovss  dword ptr [rdi], xmm8
    vmulss  xmm2, xmm9, xmm7
    vmulss  xmm1, xmm12, xmm13
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm10, xmm14
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm11, xmm15
    vaddss  xmm6, xmm4, xmm1
    vmulss  xmm0, xmm12, xmm7
    vmulss  xmm2, xmm9, xmm13
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm11, xmm14
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm10, xmm15
    vaddss  xmm5, xmm4, xmm0
    vmulss  xmm1, xmm11, xmm13
    vmulss  xmm2, xmm10, xmm7
    vsubss  xmm3, xmm2, xmm1
    vmovss  dword ptr [rdi+4], xmm6
    vmulss  xmm0, xmm9, xmm14
    vsubss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm12, xmm15
    vsubss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm5
    vmovss  dword ptr [rdi+0Ch], xmm2
  }
  Glass_LinkPiece_Dynamic(_RBX, pieceIndexa);
LABEL_18:
  __asm
  {
    vmovaps xmm10, [rsp+210h+var_88+8]
    vmovaps xmm9, [rsp+210h+var_78+8]
    vmovaps xmm8, [rsp+210h+var_68+8]
    vmovaps xmm7, [rsp+210h+var_58+8]
    vmovaps xmm6, xmmword ptr [rsp+210h+var_48+8]
  }
  _R11 = &v197;
  __asm
  {
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
Glass_UpdatePhysics
==============
*/
void Glass_UpdatePhysics(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  FxGlassPieceDynamics *pieceDynamics; 
  __int64 v4; 
  FxGlassPiecePlace *v6; 
  FxGlassPieceDynamics *v7; 
  unsigned int physicsInstance; 
  unsigned int m_serialAndIndex; 
  unsigned int v10; 
  unsigned __int32 v11; 
  __int64 v12; 
  __int64 v13; 
  hknpBodyId result; 

  pieceDynamics = glassSys->pieceDynamics;
  v4 = pieceIndex;
  v6 = &glassSys->piecePlaces[v4];
  glassSys->pieceStates[v4].flags |= 8u;
  v7 = &pieceDynamics[pieceIndex];
  if ( v7->physicsInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 175, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v7->physicsInstance) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 176, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance ) == 1") )
    __debugbreak();
  physicsInstance = v7->physicsInstance;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( physicsInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", 3) )
    __debugbreak();
  if ( !g_physicsClientWorldsCreated )
  {
    LODWORD(v13) = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v13) )
      __debugbreak();
  }
  m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, physicsInstance, 0)->m_serialAndIndex;
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 178, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, m_serialAndIndex, &v6->frame.origin, &v6->frame.quat);
  if ( glassSys->time >= v7->fallTime && Physics_GetNumConstraints(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v7->physicsInstance) )
  {
    v10 = v7->physicsInstance;
    if ( ((unsigned __int8)g_particleDeferredPhysicsGlassDestroyListCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)g_particleDeferredPhysicsGlassDestroyListCount) )
      __debugbreak();
    v11 = _InterlockedExchangeAdd(g_particleDeferredPhysicsGlassDestroyListCount, 1u);
    if ( v11 >= 0x800 )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 570, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    g_particleDeferredPhysicsGlassDestroyList[0][v11].physicsInstance = v10;
    Glass_StartDelayedFall(glassSys, pieceIndex);
  }
  Glass_LinkPiece_Dynamic(glassSys, pieceIndex);
}

/*
==============
Glass_UpdatePiece
==============
*/
void Glass_UpdatePiece(FxGlassSystem *glassSys, unsigned int unused, unsigned int pieceIndex)
{
  FxGlassPieceDynamics *v5; 
  const dvar_t *v6; 

  v5 = &glassSys->pieceDynamics[pieceIndex];
  if ( v5->physicsInstance == -1 )
  {
    if ( v5->fallTime < glassSys->time )
    {
      v6 = DCONST_DVARMPINT_glass_simple_duration;
      if ( !DCONST_DVARMPINT_glass_simple_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_simple_duration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v5->fallTime >= glassSys->time - v6->current.integer )
      {
        if ( v5->physicsInstance == -1 )
        {
          Glass_UpdateFall(glassSys, pieceIndex);
        }
        else
        {
          Glass_FreePiecePhysicsObject(v5);
          Glass_StartDelayedFall(glassSys, pieceIndex);
        }
      }
      else
      {
        Glass_FreePiece(glassSys, pieceIndex);
      }
    }
  }
  else
  {
    Glass_UpdatePhysics(glassSys, pieceIndex);
  }
}

