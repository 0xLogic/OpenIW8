/*
==============
HavokPhysicsFX_Debug_DrawFXShape
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXShape(int shapeId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXShape@@YAXHPEBUScreenPlacement@@PEAM1MM@Z(shapeId, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXShape
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXShape(PhysicsFXShape *shape, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXShape@@YAXPEAUPhysicsFXShape@@PEBUScreenPlacement@@PEAM2MM@Z(shape, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelineInstances
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXPipelineInstances(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXPipelineInstances@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawSounds
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawSounds(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawSounds@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXShapes
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXShapes(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXShapes@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_RegisterSoundEvent
==============
*/

void __fastcall HavokPhysicsFX_Debug_RegisterSoundEvent(const HavokPhysicsFX_QueuedSound *queuedSound)
{
  ?HavokPhysicsFX_Debug_RegisterSoundEvent@@YAXAEBUHavokPhysicsFX_QueuedSound@@@Z(queuedSound);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXParticles
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipeline)
{
  ?HavokPhysicsFX_Debug_DrawFXParticles@@YAXW4Physics_WorldId@@PEAVHavokPhysicsFX_Pipeline@@@Z(worldId, pipeline);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipeline
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXPipeline(PhysicsFXPipeline *pipeline, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXPipeline@@YAXPEAUPhysicsFXPipeline@@PEBUScreenPlacement@@PEAM2MM@Z(pipeline, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelineInstance
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXPipelineInstance(HavokPhysicsFX_Pipeline *pipeline, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXPipelineInstance@@YAXPEAVHavokPhysicsFX_Pipeline@@PEBUScreenPlacement@@PEAM2MM@Z(pipeline, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelineInstance
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXPipelineInstance(int pipelineId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXPipelineInstance@@YAXHPEBUScreenPlacement@@PEAM1MM@Z(pipelineId, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipeline
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXPipeline(int pipelineId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXPipeline@@YAXHPEBUScreenPlacement@@PEAM1MM@Z(pipelineId, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelines
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXPipelines(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsFX_Debug_DrawFXPipelines@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXParticles
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXParticles(int pipelineId)
{
  ?HavokPhysicsFX_Debug_DrawFXParticles@@YAXH@Z(pipelineId);
}

/*
==============
HavokPhysicsFX_Debug_DrawFXParticles
==============
*/
void HavokPhysicsFX_Debug_DrawFXParticles(int pipelineId)
{
  Physics_WorldId v3; 
  HavokPhysicsFX_World *FXWorld; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int numPipelineInstances; 
  HavokPhysicsFX_Pipeline **m_data; 
  int v8; 
  __int64 v9; 
  HavokPhysicsFX_Pipeline *v10; 
  hknpWorld *World; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v16; 
  Bounds bounds; 
  vec3_t position; 
  vec4_t orientation; 
  __int128 v38[2]; 
  _BYTE v39[64]; 
  tmat33_t<vec3_t> axis; 

  v3 = PHYSICS_WORLD_ID_CLIENT_FIRST;
  while ( 1 )
  {
    FXWorld = HavokPhysicsFX_GetFXWorld(v3);
    if ( !FXWorld )
      goto LABEL_7;
    if ( !FXWorld->isInitialized )
      goto LABEL_7;
    pipelineInstances = FXWorld->pipelineInstances;
    if ( !pipelineInstances )
      goto LABEL_7;
    numPipelineInstances = FXWorld->numPipelineInstances;
    if ( numPipelineInstances > pipelineId )
      break;
    pipelineId -= numPipelineInstances;
LABEL_7:
    if ( ++v3 > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
      return;
  }
  m_data = pipelineInstances->m_data;
  v8 = 0;
  v9 = (__int64)&pipelineInstances->m_data[pipelineInstances->m_size];
  if ( m_data == (HavokPhysicsFX_Pipeline **)v9 )
    return;
  while ( 2 )
  {
    v10 = *m_data;
    if ( !*m_data )
    {
LABEL_13:
      if ( ++m_data == (HavokPhysicsFX_Pipeline **)v9 )
        return;
      continue;
    }
    break;
  }
  if ( pipelineId != v8 )
  {
    ++v8;
    goto LABEL_13;
  }
  World = HavokPhysics_GetWorld(v3);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 713, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  v12 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))World->getParticlesCollider)(&World->hknpWorldReader, v10->m_colliderId.m_serialAndIndex);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 717, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
    __debugbreak();
  v13 = 0;
  if ( *(int *)(v12 + 5712) > 0 )
  {
    v14 = 0i64;
    __asm
    {
      vmovaps [rsp+130h+var_30], xmm6
      vmovss  xmm6, cs:__real@42000000
    }
    do
    {
      if ( *(_BYTE *)(v14 + *(_QWORD *)(v12 + 5704)) )
      {
        PhysicsFX_GetParticlePosition(v3, v10, v13, &position);
        PhysicsFX_GetParticleOrientation(v3, v10, v13, &orientation);
        QuatToAxis(&orientation, &axis);
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 24i64) + 8i64 * v10->m_shapeIndices.m_data[v14]) + 240i64);
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 742, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
          __debugbreak();
        __asm
        {
          vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
          vmovups [rbp+30h+var_A0], ymm0
          vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
          vmovups [rbp+30h+var_80], ymm0
        }
        (*(void (__fastcall **)(__int64, _BYTE *, __int128 *))(*(_QWORD *)v16 + 32i64))(v16, v39, v38);
        __asm
        {
          vmovups xmm2, [rbp+30h+var_B0]
          vaddps  xmm0, xmm2, [rsp+130h+var_C0]
          vmulps  xmm4, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
          vsubps  xmm0, xmm2, [rsp+130h+var_C0]
          vmulps  xmm5, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
          vmulss  xmm0, xmm4, xmm6
          vmovss  dword ptr [rsp+130h+bounds.midPoint], xmm0
          vshufps xmm1, xmm4, xmm4, 55h ; 'U'
          vmulss  xmm0, xmm1, xmm6
          vmovss  dword ptr [rsp+130h+bounds.midPoint+4], xmm0
          vshufps xmm1, xmm5, xmm5, 55h ; 'U'
          vshufps xmm4, xmm4, xmm4, 0AAh ; 'ª'
          vmulss  xmm0, xmm4, xmm6
          vmovss  dword ptr [rsp+130h+bounds.midPoint+8], xmm0
          vmulss  xmm0, xmm5, xmm6
          vmovss  dword ptr [rsp+130h+bounds.halfSize], xmm0
          vmulss  xmm0, xmm1, xmm6
          vshufps xmm5, xmm5, xmm5, 0AAh ; 'ª'
          vmovss  dword ptr [rsp+130h+bounds.halfSize+4], xmm0
          vmulss  xmm0, xmm5, xmm6
          vmovss  dword ptr [rsp+130h+bounds.halfSize+8], xmm0
        }
        CG_DebugBoxOriented(&position, &bounds, &axis, &colorWhite, 0, 1);
      }
      ++v13;
      ++v14;
    }
    while ( v13 < *(_DWORD *)(v12 + 5712) );
    __asm { vmovaps xmm6, [rsp+130h+var_30] }
  }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXParticles
==============
*/
void HavokPhysicsFX_Debug_DrawFXParticles(Physics_WorldId worldId, HavokPhysicsFX_Pipeline *pipeline)
{
  hknpWorld *World; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v10; 
  Bounds bounds; 
  vec3_t position; 
  vec4_t orientation; 
  __int128 v32[2]; 
  _BYTE v33[64]; 
  tmat33_t<vec3_t> axis; 

  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 713, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  v6 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))World->getParticlesCollider)(&World->hknpWorldReader, pipeline->m_colliderId.m_serialAndIndex);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 717, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
    __debugbreak();
  v7 = 0;
  if ( *(int *)(v6 + 5712) > 0 )
  {
    v8 = 0i64;
    __asm
    {
      vmovaps [rsp+140h+var_40], xmm6
      vmovss  xmm6, cs:__real@42000000
    }
    do
    {
      if ( *(_BYTE *)(v8 + *(_QWORD *)(v6 + 5704)) )
      {
        PhysicsFX_GetParticlePosition(worldId, pipeline, v7, &position);
        PhysicsFX_GetParticleOrientation(worldId, pipeline, v7, &orientation);
        QuatToAxis(&orientation, &axis);
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 24i64) + 8i64 * pipeline->m_shapeIndices.m_data[v8]) + 240i64);
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 742, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
          __debugbreak();
        __asm
        {
          vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
          vmovups [rbp+40h+var_B0], ymm0
          vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
          vmovups [rbp+40h+var_90], ymm0
        }
        (*(void (__fastcall **)(__int64, _BYTE *, __int128 *))(*(_QWORD *)v10 + 32i64))(v10, v33, v32);
        __asm
        {
          vmovups xmm2, [rbp+40h+var_C0]
          vaddps  xmm0, xmm2, [rsp+140h+var_D0]
          vmulps  xmm4, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
          vsubps  xmm0, xmm2, [rsp+140h+var_D0]
          vmulps  xmm5, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
          vmulss  xmm0, xmm4, xmm6
          vmovss  dword ptr [rsp+140h+bounds.midPoint], xmm0
          vshufps xmm1, xmm4, xmm4, 55h ; 'U'
          vmulss  xmm0, xmm1, xmm6
          vmovss  dword ptr [rsp+140h+bounds.midPoint+4], xmm0
          vshufps xmm1, xmm5, xmm5, 55h ; 'U'
          vshufps xmm4, xmm4, xmm4, 0AAh ; 'ª'
          vmulss  xmm0, xmm4, xmm6
          vmovss  dword ptr [rsp+140h+bounds.midPoint+8], xmm0
          vmulss  xmm0, xmm5, xmm6
          vmovss  dword ptr [rsp+140h+bounds.halfSize], xmm0
          vmulss  xmm0, xmm1, xmm6
          vshufps xmm5, xmm5, xmm5, 0AAh ; 'ª'
          vmovss  dword ptr [rsp+140h+bounds.halfSize+4], xmm0
          vmulss  xmm0, xmm5, xmm6
          vmovss  dword ptr [rsp+140h+bounds.halfSize+8], xmm0
        }
        CG_DebugBoxOriented(&position, &bounds, &axis, &colorWhite, 0, 1);
      }
      ++v7;
      ++v8;
    }
    while ( v7 < *(_DWORD *)(v6 + 5712) );
    __asm { vmovaps xmm6, [rsp+140h+var_40] }
  }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipeline
==============
*/
void HavokPhysicsFX_Debug_DrawFXPipeline(int pipelineId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *FXPipelines; 
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v12; 
  int v13; 
  int v14; 
  int v15; 
  PhysicsFXPipeline **m_data; 
  __int64 i; 
  PhysicsFXPipeline **v18; 
  __int64 v19; 
  float setColor; 
  int setColora; 
  int forceColor; 
  float v30; 
  char dest[256]; 

  __asm { vmovaps [rsp+198h+var_38], xmm6 }
  _RDI = y;
  _RBP = x;
  HavokPhysicsFX_LockAssetRead();
  FXPipelines = HavokPhysicsFX_GetFXPipelines();
  v12 = FXPipelines;
  if ( !FXPipelines )
  {
    Com_sprintf(dest, 0x100ui64, "No pipelines found");
LABEL_20:
    __asm
    {
      vmovss  xmm6, [rsp+198h+charHeight]
      vmovss  xmm2, dword ptr [rdi]; y
      vmovss  xmm1, dword ptr [rbp+0]; x
      vmovss  [rsp+198h+var_160], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v30, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
    }
    goto LABEL_21;
  }
  if ( pipelineId < 0 || pipelineId >= (FXPipelines->m_numElems & 0x7FFFFFFF) )
  {
    setColora = FXPipelines->m_numElems & 0x7FFFFFFF;
    Com_sprintf(dest, 0x100ui64, "%i is not a valid Pipeline - we only found %i", (unsigned int)pipelineId, setColora);
    goto LABEL_20;
  }
  v13 = 0;
  v14 = FXPipelines->m_elem.m_size - 1;
  v15 = 0;
  if ( v14 >= 0 )
  {
    m_data = FXPipelines->m_elem.m_data;
    for ( i = 0i64; i <= v14; ++i )
    {
      if ( *m_data != (PhysicsFXPipeline *)-1i64 )
        break;
      ++v15;
      ++m_data;
    }
  }
  if ( v15 <= v14 )
  {
    v18 = v12->m_elem.m_data;
    while ( pipelineId != v13 )
    {
      if ( ++v15 <= v14 )
      {
        v19 = v15;
        do
        {
          if ( v18[v19] != (PhysicsFXPipeline *)-1i64 )
            break;
          ++v15;
          ++v19;
        }
        while ( v19 <= v14 );
      }
      ++v13;
      if ( v15 > v14 )
        goto LABEL_21;
    }
    __asm
    {
      vmovss  xmm0, [rsp+198h+charHeight]
      vmovss  xmm1, [rsp+198h+tabWidth]
      vmovss  [rsp+198h+forceColor], xmm0
      vmovss  dword ptr [rsp+198h+setColor], xmm1
    }
    HavokPhysicsFX_Debug_DrawFXPipeline(v18[v15], scrPlace, _RBP, _RDI, setColor, *(float *)&forceColor);
  }
LABEL_21:
  HavokPhysicsFX_UnlockAssetRead();
  __asm { vmovaps xmm6, [rsp+198h+var_38] }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipeline
==============
*/
void HavokPhysicsFX_Debug_DrawFXPipeline(PhysicsFXPipeline *pipeline, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const char *name; 
  const char *v32; 
  const char *v36; 
  PhysicsFXPipelineIntegratorType type; 
  vec4_t *setColor; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  char dest[256]; 

  __asm { vmovaps [rsp+1B8h+var_48], xmm6 }
  _RBX = y;
  _RDI = x;
  _R14 = pipeline;
  if ( pipeline )
  {
    name = pipeline->name;
    __asm { vmovaps [rsp+1B8h+var_58], xmm7 }
    Com_sprintf(dest, 0x100ui64, "Name: %s", name);
    __asm
    {
      vmovss  xmm6, [rsp+1B8h+charHeight]
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v76, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    Com_sprintf(dest, 0x100ui64, "Number of Particles Per Instance: %i", (unsigned int)_R14->numParticlesPerInstance);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v77, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm3, dword ptr [r14+0Ch]
      vmovss  xmm1, dword ptr [r14+10h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   r9, xmm3
      vmovsd  [rsp+1B8h+setColor], xmm1
    }
    Com_sprintf(dest, 0x100ui64, "Friction: %.2f Restitution: %.2f", *(double *)&_XMM3, *(double *)&setColor);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v78, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    v32 = "Disabled";
    if ( _R14->particleParticleCollisions )
      v32 = "Enabled";
    Com_sprintf(dest, 0x100ui64, "Particle to Particle collisions are %s", v32);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v79, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    v36 = "n't";
    if ( _R14->raiseCollisionCallbacks )
      v36 = (char *)&queryFormat.fmt + 3;
    Com_sprintf(dest, 0x100ui64, "Does%s raise collision callbacks", v36);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v80, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  xmm7, [rsp+1B8h+tabWidth]
      vmovss  dword ptr [rbx], xmm0
    }
    if ( _R14->raiseCollisionCallbacks )
    {
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm3, dword ptr [r14+18h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x100ui64, "Collision callback Impulse Threshold %.2f", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [rdi]; x
        vmovss  [rsp+1B8h+var_180], xmm6
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v81, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr [rdi]
        vsubss  xmm2, xmm1, xmm7
        vmovss  dword ptr [rdi], xmm2
      }
    }
    type = _R14->integrator.type;
    if ( type )
    {
      if ( type == Types_PhysicsFXPipelineIntegrator_LinAngDamping )
      {
        Com_sprintf(dest, 0x100ui64, "Lin/Ang Damping Integrator");
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [rdi]; x
          vmovss  [rsp+1B8h+var_180], xmm6
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v82, 0);
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vaddss  xmm1, xmm7, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
          vmovss  xmm3, dword ptr [r14+24h]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x100ui64, "Linear Damping %.2f", *(double *)&_XMM3);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [rdi]; x
          vmovss  [rsp+1B8h+var_180], xmm6
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v83, 0);
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm3, dword ptr [r14+28h]
          vcvtss2sd xmm3, xmm3, xmm3
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x100ui64, "Angular Damping %.2f", *(double *)&_XMM3);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [rdi]; x
          vmovss  [rsp+1B8h+var_180], xmm6
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v84, 0);
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr [rdi]
          vsubss  xmm2, xmm1, xmm7
          vmovss  dword ptr [rdi], xmm2
        }
      }
    }
    else
    {
      Com_sprintf(dest, 0x100ui64, "Basic Integrator");
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [rdi]; x
        vmovss  [rsp+1B8h+var_180], xmm6
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v85, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
      }
    }
    __asm { vmovaps xmm7, [rsp+1B8h+var_58] }
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "No pipeline found");
    __asm
    {
      vmovss  xmm6, [rsp+1B8h+charHeight]
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [rdi]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v75, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+1B8h+var_48] }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelineInstance
==============
*/
void HavokPhysicsFX_Debug_DrawFXPipelineInstance(int pipelineId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  int v11; 
  Physics_WorldId v12; 
  HavokPhysicsFX_World *FXWorld; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int numPipelineInstances; 
  HavokPhysicsFX_Pipeline **m_data; 
  int v22; 
  __int64 i; 
  float setColor; 
  int forceColor; 
  float v28; 
  char dest[256]; 

  _RBP = y;
  _R15 = x;
  v11 = pipelineId;
  v12 = PHYSICS_WORLD_ID_CLIENT_FIRST;
  while ( 1 )
  {
    FXWorld = HavokPhysicsFX_GetFXWorld(v12);
    if ( !FXWorld )
      goto LABEL_7;
    if ( !FXWorld->isInitialized )
      goto LABEL_7;
    pipelineInstances = FXWorld->pipelineInstances;
    if ( !pipelineInstances )
      goto LABEL_7;
    numPipelineInstances = FXWorld->numPipelineInstances;
    if ( numPipelineInstances > v11 )
      break;
    v11 -= numPipelineInstances;
LABEL_7:
    if ( ++v12 > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
    {
      __asm { vmovaps [rsp+1A8h+var_48], xmm6 }
      Com_sprintf(dest, 0x100ui64, "%i is not a valid Pipeline Instance Id", (unsigned int)pipelineId);
      __asm
      {
        vmovss  xmm6, [rsp+1A8h+charHeight]
        vmovss  xmm2, dword ptr [rbp+0]; y
        vmovss  xmm1, dword ptr [r15]; x
        vmovss  [rsp+1A8h+var_170], xmm6
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v28, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rbp+0]
        vmovaps xmm6, [rsp+1A8h+var_48]
        vmovss  dword ptr [rbp+0], xmm0
      }
      return;
    }
  }
  m_data = pipelineInstances->m_data;
  v22 = 0;
  for ( i = (__int64)&pipelineInstances->m_data[pipelineInstances->m_size]; m_data != (HavokPhysicsFX_Pipeline **)i; ++m_data )
  {
    if ( *m_data )
    {
      if ( v11 == v22 )
      {
        __asm
        {
          vmovss  xmm0, [rsp+1A8h+charHeight]
          vmovss  xmm1, [rsp+1A8h+tabWidth]
          vmovss  [rsp+1A8h+forceColor], xmm0
          vmovss  dword ptr [rsp+1A8h+setColor], xmm1
        }
        HavokPhysicsFX_Debug_DrawFXPipelineInstance(*m_data, scrPlace, _R15, _RBP, setColor, *(float *)&forceColor);
        return;
      }
      ++v22;
    }
  }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelineInstance
==============
*/
void HavokPhysicsFX_Debug_DrawFXPipelineInstance(HavokPhysicsFX_Pipeline *pipeline, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  PhysicsFXPipeline *m_asset; 
  int v29; 
  __int64 v30; 
  HavokPhysicsFX_ScaledShapeAsset *m_data; 
  vec4_t *setColor; 
  __int64 forceColor; 
  double shadow; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  char dest[256]; 

  __asm { vmovaps [rsp+1C8h+var_58], xmm6 }
  _RSI = y;
  _R15 = x;
  if ( pipeline )
  {
    m_asset = pipeline->m_asset;
    __asm { vmovaps [rsp+1C8h+var_68], xmm7 }
    Com_sprintf(dest, 0x100ui64, "Pipeline: %s", m_asset->name);
    __asm
    {
      vmovss  xmm6, [rsp+1C8h+charHeight]
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r15]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v42, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
    LODWORD(setColor) = pipeline->m_asset->numParticlesPerInstance;
    Com_sprintf(dest, 0x100ui64, "%i/%i remaining particles", (unsigned int)pipeline->m_remainingParticles, setColor);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r15]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v43, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
    Com_sprintf(dest, 0x100ui64, "%i shapes", (unsigned int)pipeline->m_shapes.m_size);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r15]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v44, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rsi]
      vmovss  xmm7, [rsp+1C8h+tabWidth]
      vmovss  dword ptr [rsi], xmm0
      vaddss  xmm0, xmm7, dword ptr [r15]
      vmovss  dword ptr [r15], xmm0
    }
    v29 = 0;
    if ( pipeline->m_shapes.m_size > 0 )
    {
      v30 = 0i64;
      do
      {
        m_data = pipeline->m_shapes.m_data;
        *(double *)&_XMM0 = HavokPhysicsFX_GetShapeScale(m_data[v30].asset, m_data[v30].scaleShapeIndex);
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  qword ptr [rsp+1C8h+shadow], xmm1
        }
        LODWORD(forceColor) = m_data[v30].scaleShapeIndex;
        Com_sprintf(dest, 0x100ui64, "shape %i %s scaled to %i %.2f", (unsigned int)v29, m_data[v30].asset->name, forceColor, shadow);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]; y
          vmovss  xmm1, dword ptr [r15]; x
          vmovss  [rsp+1C8h+var_190], xmm6
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v45, 0);
        __asm { vaddss  xmm0, xmm6, dword ptr [rsi] }
        ++v29;
        ++v30;
        __asm { vmovss  dword ptr [rsi], xmm0 }
      }
      while ( v29 < pipeline->m_shapes.m_size );
      __asm { vmovss  xmm0, dword ptr [r15] }
    }
    __asm
    {
      vsubss  xmm0, xmm0, xmm7
      vmovaps xmm7, [rsp+1C8h+var_68]
      vmovss  dword ptr [r15], xmm0
    }
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "No pipeline instance found");
    __asm
    {
      vmovss  xmm6, [rsp+1C8h+charHeight]
      vmovss  xmm2, dword ptr [rsi]; y
      vmovss  xmm1, dword ptr [r15]; x
      vmovss  [rsp+1C8h+var_190], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v41, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+1C8h+var_58] }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelineInstances
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXPipelineInstances(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  int v13; 
  HavokPhysicsFX_World *FXWorld; 
  HavokPhysicsFX_World *v15; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v18; 
  HavokPhysicsFX_Pipeline *v19; 
  int numParticlesPerInstance; 
  const char *v21; 
  int v28; 
  unsigned int v29; 
  HavokPhysicsFX_World *v31; 
  HavokPhysicsFX_World *v32; 
  int numPipelineInstances; 
  const char *WorldName; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *v39; 
  int v40; 
  HavokPhysicsFX_Pipeline **v41; 
  HavokPhysicsFX_Pipeline *v42; 
  int v43; 
  PhysicsFXPipeline *m_asset; 
  char *fmt; 
  char *fmta; 
  __int64 shadow; 
  float v57; 
  float v58; 
  __int64 v59; 
  float v60; 
  Physics_WorldId worldId; 
  char dest[256]; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v8 = 0;
  worldId = PHYSICS_WORLD_ID_CLIENT_FIRST;
  v9 = 0;
  v10 = 2;
  v11 = 0;
  __asm { vmovaps xmm7, xmm3 }
  v13 = 0;
  do
  {
    FXWorld = HavokPhysicsFX_GetFXWorld((Physics_WorldId)v10);
    v15 = FXWorld;
    if ( FXWorld && FXWorld->isInitialized )
    {
      if ( !FXWorld->pipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 485, ASSERT_TYPE_ASSERT, "(fxWorld->pipelineInstances)", (const char *)&queryFormat, "fxWorld->pipelineInstances") )
        __debugbreak();
      pipelineInstances = v15->pipelineInstances;
      ++v9;
      v11 += v15->numPipelineInstances;
      m_data = pipelineInstances->m_data;
      v18 = (__int64)&pipelineInstances->m_data[pipelineInstances->m_size];
      if ( pipelineInstances->m_data != (HavokPhysicsFX_Pipeline **)v18 )
      {
        do
        {
          v19 = *m_data;
          if ( *m_data )
          {
            numParticlesPerInstance = v19->m_asset->numParticlesPerInstance;
            v8 += numParticlesPerInstance;
            v13 += numParticlesPerInstance - v19->m_remainingParticles;
          }
          ++m_data;
        }
        while ( m_data != (HavokPhysicsFX_Pipeline **)v18 );
      }
    }
    ++v10;
  }
  while ( v10 <= 4 );
  v21 = "s";
  if ( v9 == 1 )
    v21 = (char *)&queryFormat.fmt + 3;
  LODWORD(fmt) = v9;
  Com_sprintf(dest, 0x100ui64, "%i Pipeline Instances in %i world%s with %i particles used out of %i allocated", v11, fmt, v21, v13, v8);
  _R15 = y;
  _R14 = x;
  __asm
  {
    vmovss  xmm6, [rsp+1D8h+charHeight]
    vmovss  xmm2, dword ptr [r15]; y
    vmovss  xmm1, dword ptr [r14]; x
    vmovss  [rsp+1D8h+var_1A0], xmm6
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v57, 0);
  __asm { vaddss  xmm0, xmm6, dword ptr [r15] }
  v28 = 2;
  v29 = 0;
  __asm
  {
    vmovss  dword ptr [r15], xmm0
    vaddss  xmm1, xmm7, dword ptr [r14]
    vmovss  dword ptr [r14], xmm1
  }
  do
  {
    v31 = HavokPhysicsFX_GetFXWorld((Physics_WorldId)v28);
    v32 = v31;
    if ( v31 && v31->isInitialized )
    {
      if ( !v31->pipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 517, ASSERT_TYPE_ASSERT, "(fxWorld->pipelineInstances)", (const char *)&queryFormat, "fxWorld->pipelineInstances") )
        __debugbreak();
      numPipelineInstances = v32->numPipelineInstances;
      WorldName = Physics_GetWorldName((Physics_WorldId)v28);
      LODWORD(fmta) = numPipelineInstances;
      Com_sprintf(dest, 0x100ui64, "World %s has %i Pipeline Instances", WorldName, fmta);
      __asm
      {
        vmovss  xmm2, dword ptr [r15]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  [rsp+1D8h+var_1A0], xmm6
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v58, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [r15]
        vmovss  dword ptr [r15], xmm0
        vaddss  xmm1, xmm7, dword ptr [r14]
        vmovss  dword ptr [r14], xmm1
      }
      v39 = v32->pipelineInstances;
      v40 = 0;
      v41 = v39->m_data;
      if ( v41 != &v41[v39->m_size] )
      {
        do
        {
          v42 = *v41;
          v43 = v40 + 1;
          if ( *v41 )
          {
            m_asset = v42->m_asset;
            LODWORD(v59) = m_asset->numParticlesPerInstance;
            LODWORD(shadow) = v59 - v42->m_remainingParticles;
            LODWORD(fmta) = v40;
            Com_sprintf(dest, 0x100ui64, "%i: %i: %s (%i/%i)", v29, fmta, m_asset->name, shadow, v59);
            __asm
            {
              vmovss  xmm2, dword ptr [r15]; y
              vmovss  xmm1, dword ptr [r14]; x
              vmovss  [rsp+1D8h+var_1A0], xmm6
            }
            Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v60, 0);
            __asm
            {
              vaddss  xmm0, xmm6, dword ptr [r15]
              vmovss  dword ptr [r15], xmm0
            }
            ++v29;
          }
          ++v41;
          v40 = v43;
        }
        while ( v41 != &v32->pipelineInstances->m_data[v32->pipelineInstances->m_size] );
        __asm { vmovss  xmm1, dword ptr [r14] }
        v28 = worldId;
      }
      __asm
      {
        vsubss  xmm0, xmm1, xmm7
        vmovss  dword ptr [r14], xmm0
      }
    }
    worldId = ++v28;
  }
  while ( v28 <= 4 );
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [r14], xmm1
  }
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelines
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXPipelines(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *FXPipelines; 
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v12; 
  __int64 m_numElems; 
  int v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  PhysicsFXPipeline **m_data; 
  unsigned int v24; 
  int v28; 
  __int64 v29; 
  PhysicsFXPipeline **v30; 
  float v34; 
  float v35; 
  char dest[256]; 

  __asm
  {
    vmovaps [rsp+1B8h+var_58], xmm7
    vmovaps xmm7, xmm3
  }
  _R14 = y;
  _RBP = x;
  HavokPhysicsFX_LockAssetRead();
  FXPipelines = HavokPhysicsFX_GetFXPipelines();
  v12 = FXPipelines;
  if ( FXPipelines )
  {
    m_numElems = (unsigned int)FXPipelines->m_numElems;
    LODWORD(m_numElems) = m_numElems & 0x7FFFFFFF;
    __asm { vmovaps [rsp+1B8h+var_48], xmm6 }
    Com_sprintf(dest, 0x100ui64, "%i Pipelines", m_numElems);
    __asm
    {
      vmovss  xmm6, [rsp+1B8h+charHeight]
      vmovss  xmm2, dword ptr [r14]; y
      vmovss  xmm1, dword ptr [rbp+0]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v34, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [r14]
      vmovss  dword ptr [r14], xmm0
    }
    v18 = 0;
    v19 = v12->m_elem.m_size - 1;
    if ( v19 >= 0 )
    {
      v20 = v19;
      v21 = 0i64;
      m_data = v12->m_elem.m_data;
      do
      {
        if ( *m_data != (PhysicsFXPipeline *)-1i64 )
          break;
        ++v18;
        ++v21;
        ++m_data;
      }
      while ( v21 <= v20 );
    }
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm0
    }
    v24 = 0;
    if ( v18 <= v12->m_elem.m_size - 1 )
    {
      do
      {
        Com_sprintf(dest, 0x100ui64, "%i - %s", v24, v12->m_elem.m_data[v18]->name);
        __asm
        {
          vmovss  xmm2, dword ptr [r14]; y
          vmovss  xmm1, dword ptr [rbp+0]; x
          vmovss  [rsp+1B8h+var_180], xmm6
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v35, 0);
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [r14]
          vmovss  dword ptr [r14], xmm0
        }
        v28 = v12->m_elem.m_size - 1;
        if ( ++v18 <= v28 )
        {
          v29 = v18;
          v30 = &v12->m_elem.m_data[v18];
          do
          {
            if ( *v30 != (PhysicsFXPipeline *)-1i64 )
              break;
            ++v18;
            ++v29;
            ++v30;
          }
          while ( v29 <= v28 );
        }
        ++v24;
      }
      while ( v18 <= v28 );
      __asm { vmovss  xmm0, dword ptr [rbp+0] }
    }
    __asm
    {
      vmovaps xmm6, [rsp+1B8h+var_48]
      vsubss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  HavokPhysicsFX_UnlockAssetRead();
  __asm { vmovaps xmm7, [rsp+1B8h+var_58] }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXShape
==============
*/
void HavokPhysicsFX_Debug_DrawFXShape(int shapeId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *FXShapes; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v12; 
  int v13; 
  int v14; 
  int v15; 
  PhysicsFXShape **m_data; 
  __int64 i; 
  PhysicsFXShape *v18; 
  int v19; 
  __int64 v20; 
  PhysicsFXShape **v21; 
  int v24; 
  float fmt; 
  float v31; 
  float v32; 
  char dest[256]; 

  _R15 = y;
  _R13 = x;
  HavokPhysicsFX_LockAssetRead();
  FXShapes = HavokPhysicsFX_GetFXShapes();
  v12 = FXShapes;
  if ( FXShapes )
  {
    if ( shapeId < 0 || shapeId >= (FXShapes->m_numElems & 0x7FFFFFFF) )
    {
      v24 = FXShapes->m_numElems & 0x7FFFFFFF;
      __asm { vmovaps [rsp+1B8h+var_58], xmm6 }
      Com_sprintf(dest, 0x100ui64, "%i is not a valid Shape - we only found %i", (unsigned int)shapeId, v24);
      __asm
      {
        vmovss  xmm6, [rsp+1B8h+charHeight]
        vmovss  xmm2, dword ptr [r15]; y
        vmovss  xmm1, dword ptr [r13+0]; x
        vmovss  [rsp+1B8h+var_180], xmm6
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v32, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [r15]
        vmovaps xmm6, [rsp+1B8h+var_58]
        vmovss  dword ptr [r15], xmm0
      }
    }
    else
    {
      v13 = 0;
      v14 = FXShapes->m_elem.m_size - 1;
      v15 = 0;
      if ( v14 >= 0 )
      {
        m_data = FXShapes->m_elem.m_data;
        for ( i = 0i64; i <= v14; ++i )
        {
          if ( *m_data != (PhysicsFXShape *)-1i64 )
            break;
          ++v15;
          ++m_data;
        }
      }
      if ( v15 <= v14 )
      {
        while ( 1 )
        {
          v18 = v12->m_elem.m_data[v15];
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 400, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
            __debugbreak();
          if ( shapeId == v13 )
            break;
          v19 = v12->m_elem.m_size - 1;
          if ( ++v15 <= v19 )
          {
            v20 = v15;
            v21 = &v12->m_elem.m_data[v15];
            do
            {
              if ( *v21 != (PhysicsFXShape *)-1i64 )
                break;
              ++v15;
              ++v20;
              ++v21;
            }
            while ( v20 <= v19 );
          }
          ++v13;
          if ( v15 > v19 )
            goto LABEL_21;
        }
        __asm
        {
          vmovss  xmm0, [rsp+1B8h+charHeight]
          vmovss  xmm1, [rsp+1B8h+tabWidth]
          vmovss  [rsp+1B8h+var_190], xmm0
          vmovss  dword ptr [rsp+1B8h+fmt], xmm1
        }
        HavokPhysicsFX_Debug_DrawFXShape(v18, scrPlace, _R13, _R15, fmt, v31);
      }
    }
  }
LABEL_21:
  HavokPhysicsFX_UnlockAssetRead();
}

/*
==============
HavokPhysicsFX_Debug_DrawFXShape
==============
*/
void HavokPhysicsFX_Debug_DrawFXShape(PhysicsFXShape *shape, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const char *name; 
  const char *soundAlias; 
  __int64 v22; 
  vec4_t *setColor; 
  vec4_t *setColora; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  char dest[256]; 

  __asm { vmovaps [rsp+1B8h+var_48], xmm6 }
  _RBX = y;
  _R14 = x;
  _RSI = shape;
  if ( shape )
  {
    name = shape->name;
    __asm { vmovaps [rsp+1B8h+var_58], xmm7 }
    Com_sprintf(dest, 0x100ui64, "Name: %s", name);
    __asm
    {
      vmovss  xmm7, [rsp+1B8h+charHeight]
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r14]; x
      vmovss  [rsp+1B8h+var_180], xmm7
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v54, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    soundAlias = _RSI->soundAlias;
    if ( soundAlias )
    {
      v22 = -1i64;
      do
        ++v22;
      while ( soundAlias[v22] );
      if ( (_DWORD)v22 )
      {
        Com_sprintf(dest, 0x100ui64, "Audio Data");
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+1B8h+var_180], xmm7
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v55, 0);
        __asm
        {
          vaddss  xmm0, xmm7, dword ptr [rbx]
          vmovss  xmm6, [rsp+1B8h+tabWidth]
          vmovss  dword ptr [rbx], xmm0
          vaddss  xmm0, xmm6, dword ptr [r14]
          vmovss  dword ptr [r14], xmm0
        }
        Com_sprintf(dest, 0x100ui64, "Sound %s", _RSI->soundAlias);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+1B8h+var_180], xmm7
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v56, 0);
        __asm
        {
          vaddss  xmm0, xmm7, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm3, dword ptr [rsi+20h]
          vmovss  xmm1, dword ptr [rsi+24h]
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   r9, xmm3
          vmovsd  [rsp+1B8h+setColor], xmm1
        }
        Com_sprintf(dest, 0x100ui64, "Impulse Range %.2f %.2f", *(double *)&_XMM3, *(double *)&setColor);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+1B8h+var_180], xmm7
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v57, 0);
        __asm
        {
          vaddss  xmm0, xmm7, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm3, dword ptr [rsi+28h]
          vmovss  xmm1, dword ptr [rsi+2Ch]
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   r9, xmm3
          vmovsd  [rsp+1B8h+setColor], xmm1
        }
        Com_sprintf(dest, 0x100ui64, "Impulse Volume Range %.2f %.2f", *(double *)&_XMM3, *(double *)&setColora);
        __asm
        {
          vmovss  xmm2, dword ptr [rbx]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+1B8h+var_180], xmm7
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v58, 0);
        __asm
        {
          vaddss  xmm0, xmm7, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vmovss  xmm1, dword ptr [r14]
          vsubss  xmm2, xmm1, xmm6
          vmovss  dword ptr [r14], xmm2
        }
      }
    }
    __asm { vmovaps xmm7, [rsp+1B8h+var_58] }
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "No Shape found");
    __asm
    {
      vmovss  xmm6, [rsp+1B8h+charHeight]
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r14]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v53, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+1B8h+var_48] }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXShapes
==============
*/

void __fastcall HavokPhysicsFX_Debug_DrawFXShapes(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *FXShapes; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v12; 
  __int64 m_numElems; 
  int v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  PhysicsFXShape **m_data; 
  unsigned int v24; 
  const char **p_name; 
  int v29; 
  __int64 v30; 
  PhysicsFXShape **v31; 
  float v35; 
  float v36; 
  char dest[256]; 

  __asm
  {
    vmovaps [rsp+1B8h+var_58], xmm7
    vmovaps xmm7, xmm3
  }
  _R15 = y;
  _R14 = x;
  HavokPhysicsFX_LockAssetRead();
  FXShapes = HavokPhysicsFX_GetFXShapes();
  v12 = FXShapes;
  if ( FXShapes )
  {
    m_numElems = (unsigned int)FXShapes->m_numElems;
    LODWORD(m_numElems) = m_numElems & 0x7FFFFFFF;
    __asm { vmovaps [rsp+1B8h+var_48], xmm6 }
    Com_sprintf(dest, 0x100ui64, "%i Shapes", m_numElems);
    __asm
    {
      vmovss  xmm6, [rsp+1B8h+charHeight]
      vmovss  xmm2, dword ptr [r15]; y
      vmovss  xmm1, dword ptr [r14]; x
      vmovss  [rsp+1B8h+var_180], xmm6
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v35, 0);
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [r15]
      vmovss  dword ptr [r15], xmm0
    }
    v18 = 0;
    v19 = v12->m_elem.m_size - 1;
    if ( v19 >= 0 )
    {
      v20 = v19;
      v21 = 0i64;
      m_data = v12->m_elem.m_data;
      do
      {
        if ( *m_data != (PhysicsFXShape *)-1i64 )
          break;
        ++v18;
        ++v21;
        ++m_data;
      }
      while ( v21 <= v20 );
    }
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r14]
      vmovss  dword ptr [r14], xmm0
    }
    v24 = 0;
    if ( v18 <= v12->m_elem.m_size - 1 )
    {
      do
      {
        p_name = &v12->m_elem.m_data[v18]->name;
        if ( !p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 349, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
          __debugbreak();
        Com_sprintf(dest, 0x100ui64, "%i - %s", v24, *p_name);
        __asm
        {
          vmovss  xmm2, dword ptr [r15]; y
          vmovss  xmm1, dword ptr [r14]; x
          vmovss  [rsp+1B8h+var_180], xmm6
        }
        Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v36, 0);
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [r15]
          vmovss  dword ptr [r15], xmm0
        }
        v29 = v12->m_elem.m_size - 1;
        if ( ++v18 <= v29 )
        {
          v30 = v18;
          v31 = &v12->m_elem.m_data[v18];
          do
          {
            if ( *v31 != (PhysicsFXShape *)-1i64 )
              break;
            ++v18;
            ++v30;
            ++v31;
          }
          while ( v30 <= v29 );
        }
        ++v24;
      }
      while ( v18 <= v29 );
      __asm { vmovss  xmm0, dword ptr [r14] }
    }
    __asm
    {
      vmovaps xmm6, [rsp+1B8h+var_48]
      vsubss  xmm0, xmm0, xmm7
      vmovss  dword ptr [r14], xmm0
    }
  }
  HavokPhysicsFX_UnlockAssetRead();
  __asm { vmovaps xmm7, [rsp+1B8h+var_58] }
}

/*
==============
HavokPhysicsFX_Debug_DrawSounds
==============
*/
void HavokPhysicsFX_Debug_DrawSounds(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int v16; 
  const char *v26; 
  float v29; 
  float v30; 
  char dest[256]; 

  __asm { vmovaps [rsp+198h+var_38], xmm6 }
  _RSI = y;
  _RDI = x;
  Com_sprintf(dest, 0x100ui64, "Showing %i recent sounds", s_havokPhysicsFXNumQueuedSounds);
  __asm
  {
    vmovss  xmm6, [rsp+198h+charHeight]
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rdi]; x
    vmovss  [rsp+198h+var_160], xmm6
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v29, 0);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm0
  }
  Com_sprintf(dest, 0x100ui64, "Entry shows sound, volume, impulse, surfType");
  __asm
  {
    vmovss  xmm2, dword ptr [rsi]; y
    vmovss  xmm1, dword ptr [rdi]; x
    vmovss  [rsp+198h+var_160], xmm6
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v30, 0);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm0
  }
  v16 = 0;
  if ( s_havokPhysicsFXNumQueuedSounds )
  {
    __asm { vmovss  xmm6, cs:__real@3e800000 }
    _RSI = 0x140000000ui64;
    do
    {
      _RCX = 5i64 * v16;
      __asm
      {
        vmovss  xmm3, rva s_havokPhysicsFXQueuedSounds.impulse[rsi+rcx*8]
        vmovss  xmm2, rva s_havokPhysicsFXQueuedSounds.volume[rsi+rcx*8]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      v26 = j_va("%s:%.2f:%.2f:%s", s_havokPhysicsFXQueuedSounds[v16].soundAlias, _R8, _R9, s_PhysicsFX_SurfTypeNames[(s_havokPhysicsFXQueuedSounds[v16].surfFlags >> 19) & 0x3F]);
      __asm { vmovaps xmm2, xmm6; scale }
      CL_AddDebugString(&s_havokPhysicsFXQueuedSounds[v16++].position, &colorWhite, *(float *)&_XMM2, v26, 0, 0);
    }
    while ( v16 < s_havokPhysicsFXNumQueuedSounds );
  }
  __asm { vmovaps xmm6, [rsp+198h+var_38] }
}

/*
==============
HavokPhysicsFX_Debug_RegisterSoundEvent
==============
*/
void HavokPhysicsFX_Debug_RegisterSoundEvent(const HavokPhysicsFX_QueuedSound *queuedSound)
{
  char v2; 
  unsigned int v6; 

  __asm { vmovups ymm0, ymmword ptr [rcx] }
  v2 = s_havokPhysicsFXNumQueuedSoundStart;
  _RAX = s_havokPhysicsFXQueuedSounds;
  _RDX = 5i64 * s_havokPhysicsFXNumQueuedSoundStart;
  __asm
  {
    vmovups ymmword ptr [rax+rdx*8], ymm0
    vmovsd  xmm1, qword ptr [rcx+20h]
    vmovsd  qword ptr [rax+rdx*8+20h], xmm1
  }
  v6 = 128;
  s_havokPhysicsFXNumQueuedSoundStart = (v2 + 1) & 0x7F;
  if ( (int)(s_havokPhysicsFXNumQueuedSounds + 1) < 128 )
    v6 = s_havokPhysicsFXNumQueuedSounds + 1;
  s_havokPhysicsFXNumQueuedSounds = v6;
}

