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
  Physics_WorldId v2; 
  HavokPhysicsFX_World *FXWorld; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int numPipelineInstances; 
  HavokPhysicsFX_Pipeline **m_data; 
  int v7; 
  __int64 v8; 
  HavokPhysicsFX_Pipeline *v9; 
  hknpWorld *World; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  __m128 v15; 
  __m128 v16; 
  Bounds bounds; 
  vec3_t position; 
  vec4_t orientation; 
  __m128 v20; 
  __m128 v21; 
  _BYTE v22[64]; 
  tmat33_t<vec3_t> axis; 

  v2 = PHYSICS_WORLD_ID_CLIENT_FIRST;
  while ( 1 )
  {
    FXWorld = HavokPhysicsFX_GetFXWorld(v2);
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
    if ( ++v2 > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
      return;
  }
  m_data = pipelineInstances->m_data;
  v7 = 0;
  v8 = (__int64)&pipelineInstances->m_data[pipelineInstances->m_size];
  if ( m_data == (HavokPhysicsFX_Pipeline **)v8 )
    return;
  while ( 2 )
  {
    v9 = *m_data;
    if ( !*m_data )
    {
LABEL_13:
      if ( ++m_data == (HavokPhysicsFX_Pipeline **)v8 )
        return;
      continue;
    }
    break;
  }
  if ( pipelineId != v7 )
  {
    ++v7;
    goto LABEL_13;
  }
  World = HavokPhysics_GetWorld(v2);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 713, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  v11 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))World->getParticlesCollider)(&World->hknpWorldReader, v9->m_colliderId.m_serialAndIndex);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 717, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
    __debugbreak();
  v12 = 0;
  if ( *(int *)(v11 + 5712) > 0 )
  {
    v13 = 0i64;
    do
    {
      if ( *(_BYTE *)(v13 + *(_QWORD *)(v11 + 5704)) )
      {
        PhysicsFX_GetParticlePosition(v2, v9, v12, &position);
        PhysicsFX_GetParticleOrientation(v2, v9, v12, &orientation);
        QuatToAxis(&orientation, &axis);
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 24i64) + 8i64 * v9->m_shapeIndices.m_data[v13]) + 240i64);
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 742, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
          __debugbreak();
        *(__m256i *)v22 = *(__m256i *)g_vectorfConstants[32].m128_f32;
        *(__m256i *)&v22[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
        (*(void (__fastcall **)(__int64, _BYTE *, __m128 *))(*(_QWORD *)v14 + 32i64))(v14, v22, &v20);
        v15 = _mm128_mul_ps(_mm128_add_ps(v21, v20), g_vectorfConstants[21]);
        v16 = _mm128_mul_ps(_mm128_sub_ps(v21, v20), g_vectorfConstants[21]);
        bounds.midPoint.v[0] = v15.m128_f32[0] * 32.0;
        bounds.midPoint.v[1] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0] * 32.0;
        bounds.midPoint.v[2] = _mm_shuffle_ps(v15, v15, 170).m128_f32[0] * 32.0;
        bounds.halfSize.v[0] = v16.m128_f32[0] * 32.0;
        bounds.halfSize.v[1] = _mm_shuffle_ps(v16, v16, 85).m128_f32[0] * 32.0;
        bounds.halfSize.v[2] = _mm_shuffle_ps(v16, v16, 170).m128_f32[0] * 32.0;
        CG_DebugBoxOriented(&position, &bounds, &axis, &colorWhite, 0, 1);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < *(_DWORD *)(v11 + 5712) );
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
  __int64 v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  __m128 v9; 
  __m128 v10; 
  Bounds bounds; 
  vec3_t position; 
  vec4_t orientation; 
  __m128 v14; 
  __m128 v15; 
  _BYTE v16[64]; 
  tmat33_t<vec3_t> axis; 

  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 713, ASSERT_TYPE_ASSERT, "(hknpWorld)", (const char *)&queryFormat, "hknpWorld") )
    __debugbreak();
  v5 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))World->getParticlesCollider)(&World->hknpWorldReader, pipeline->m_colliderId.m_serialAndIndex);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 717, ASSERT_TYPE_ASSERT, "(collider)", (const char *)&queryFormat, "collider") )
    __debugbreak();
  v6 = 0;
  if ( *(int *)(v5 + 5712) > 0 )
  {
    v7 = 0i64;
    do
    {
      if ( *(_BYTE *)(v7 + *(_QWORD *)(v5 + 5704)) )
      {
        PhysicsFX_GetParticlePosition(worldId, pipeline, v6, &position);
        PhysicsFX_GetParticleOrientation(worldId, pipeline, v6, &orientation);
        QuatToAxis(&orientation, &axis);
        v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 24i64) + 8i64 * pipeline->m_shapeIndices.m_data[v7]) + 240i64);
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 742, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
          __debugbreak();
        *(__m256i *)v16 = *(__m256i *)g_vectorfConstants[32].m128_f32;
        *(__m256i *)&v16[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
        (*(void (__fastcall **)(__int64, _BYTE *, __m128 *))(*(_QWORD *)v8 + 32i64))(v8, v16, &v14);
        v9 = _mm128_mul_ps(_mm128_add_ps(v15, v14), g_vectorfConstants[21]);
        v10 = _mm128_mul_ps(_mm128_sub_ps(v15, v14), g_vectorfConstants[21]);
        bounds.midPoint.v[0] = v9.m128_f32[0] * 32.0;
        bounds.midPoint.v[1] = _mm_shuffle_ps(v9, v9, 85).m128_f32[0] * 32.0;
        bounds.midPoint.v[2] = _mm_shuffle_ps(v9, v9, 170).m128_f32[0] * 32.0;
        bounds.halfSize.v[0] = v10.m128_f32[0] * 32.0;
        bounds.halfSize.v[1] = _mm_shuffle_ps(v10, v10, 85).m128_f32[0] * 32.0;
        bounds.halfSize.v[2] = _mm_shuffle_ps(v10, v10, 170).m128_f32[0] * 32.0;
        CG_DebugBoxOriented(&position, &bounds, &axis, &colorWhite, 0, 1);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < *(_DWORD *)(v5 + 5712) );
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
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v11; 
  int v12; 
  int v13; 
  int v14; 
  PhysicsFXPipeline **m_data; 
  __int64 i; 
  PhysicsFXPipeline **v17; 
  __int64 v18; 
  int setColor; 
  char dest[256]; 

  HavokPhysicsFX_LockAssetRead();
  FXPipelines = HavokPhysicsFX_GetFXPipelines();
  v11 = FXPipelines;
  if ( !FXPipelines )
  {
    Com_sprintf(dest, 0x100ui64, "No pipelines found");
LABEL_20:
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    goto LABEL_21;
  }
  if ( pipelineId < 0 || pipelineId >= (FXPipelines->m_numElems & 0x7FFFFFFF) )
  {
    setColor = FXPipelines->m_numElems & 0x7FFFFFFF;
    Com_sprintf(dest, 0x100ui64, "%i is not a valid Pipeline - we only found %i", (unsigned int)pipelineId, setColor);
    goto LABEL_20;
  }
  v12 = 0;
  v13 = FXPipelines->m_elem.m_size - 1;
  v14 = 0;
  if ( v13 >= 0 )
  {
    m_data = FXPipelines->m_elem.m_data;
    for ( i = 0i64; i <= v13; ++i )
    {
      if ( *m_data != (PhysicsFXPipeline *)-1i64 )
        break;
      ++v14;
      ++m_data;
    }
  }
  if ( v14 <= v13 )
  {
    v17 = v11->m_elem.m_data;
    while ( pipelineId != v12 )
    {
      if ( ++v14 <= v13 )
      {
        v18 = v14;
        do
        {
          if ( v17[v18] != (PhysicsFXPipeline *)-1i64 )
            break;
          ++v14;
          ++v18;
        }
        while ( v18 <= v13 );
      }
      ++v12;
      if ( v14 > v13 )
        goto LABEL_21;
    }
    HavokPhysicsFX_Debug_DrawFXPipeline(v17[v14], scrPlace, x, y, tabWidth, charHeight);
  }
LABEL_21:
  HavokPhysicsFX_UnlockAssetRead();
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipeline
==============
*/
void HavokPhysicsFX_Debug_DrawFXPipeline(PhysicsFXPipeline *pipeline, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const char *v10; 
  const char *v11; 
  PhysicsFXPipelineIntegratorType type; 
  char dest[256]; 

  if ( pipeline )
  {
    Com_sprintf(dest, 0x100ui64, "Name: %s", pipeline->name);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    Com_sprintf(dest, 0x100ui64, "Number of Particles Per Instance: %i", (unsigned int)pipeline->numParticlesPerInstance);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    Com_sprintf(dest, 0x100ui64, "Friction: %.2f Restitution: %.2f", pipeline->friction, pipeline->restitution);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v10 = "Disabled";
    if ( pipeline->particleParticleCollisions )
      v10 = "Enabled";
    Com_sprintf(dest, 0x100ui64, "Particle to Particle collisions are %s", v10);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v11 = "n't";
    if ( pipeline->raiseCollisionCallbacks )
      v11 = (char *)&queryFormat.fmt + 3;
    Com_sprintf(dest, 0x100ui64, "Does%s raise collision callbacks", v11);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    if ( pipeline->raiseCollisionCallbacks )
    {
      *x = tabWidth + *x;
      Com_sprintf(dest, 0x100ui64, "Collision callback Impulse Threshold %.2f", pipeline->callbackImpulseThreshold);
      Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
      *y = charHeight + *y;
      *x = *x - tabWidth;
    }
    type = pipeline->integrator.type;
    if ( type )
    {
      if ( type == Types_PhysicsFXPipelineIntegrator_LinAngDamping )
      {
        Com_sprintf(dest, 0x100ui64, "Lin/Ang Damping Integrator");
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        *x = tabWidth + *x;
        Com_sprintf(dest, 0x100ui64, "Linear Damping %.2f", pipeline->integrator.u.linVelDampingIntegrator.linearDamping);
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        Com_sprintf(dest, 0x100ui64, "Angular Damping %.2f", pipeline->integrator.u.linVelDampingIntegrator.angularDamping);
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        *x = *x - tabWidth;
      }
    }
    else
    {
      Com_sprintf(dest, 0x100ui64, "Basic Integrator");
      Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
      *y = charHeight + *y;
    }
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "No pipeline found");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
  }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelineInstance
==============
*/
void HavokPhysicsFX_Debug_DrawFXPipelineInstance(int pipelineId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  int v10; 
  Physics_WorldId v11; 
  HavokPhysicsFX_World *FXWorld; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  int numPipelineInstances; 
  HavokPhysicsFX_Pipeline **m_data; 
  int v16; 
  __int64 i; 
  char dest[256]; 

  v10 = pipelineId;
  v11 = PHYSICS_WORLD_ID_CLIENT_FIRST;
  while ( 1 )
  {
    FXWorld = HavokPhysicsFX_GetFXWorld(v11);
    if ( !FXWorld )
      goto LABEL_7;
    if ( !FXWorld->isInitialized )
      goto LABEL_7;
    pipelineInstances = FXWorld->pipelineInstances;
    if ( !pipelineInstances )
      goto LABEL_7;
    numPipelineInstances = FXWorld->numPipelineInstances;
    if ( numPipelineInstances > v10 )
      break;
    v10 -= numPipelineInstances;
LABEL_7:
    if ( ++v11 > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
    {
      Com_sprintf(dest, 0x100ui64, "%i is not a valid Pipeline Instance Id", (unsigned int)pipelineId);
      Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
      *y = charHeight + *y;
      return;
    }
  }
  m_data = pipelineInstances->m_data;
  v16 = 0;
  for ( i = (__int64)&pipelineInstances->m_data[pipelineInstances->m_size]; m_data != (HavokPhysicsFX_Pipeline **)i; ++m_data )
  {
    if ( *m_data )
    {
      if ( v10 == v16 )
      {
        HavokPhysicsFX_Debug_DrawFXPipelineInstance(*m_data, scrPlace, x, y, tabWidth, charHeight);
        return;
      }
      ++v16;
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
  float v10; 
  int v11; 
  __int64 v12; 
  HavokPhysicsFX_ScaledShapeAsset *m_data; 
  double ShapeScale; 
  vec4_t *setColor; 
  __int64 forceColor; 
  char dest[256]; 

  if ( pipeline )
  {
    Com_sprintf(dest, 0x100ui64, "Pipeline: %s", pipeline->m_asset->name);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    LODWORD(setColor) = pipeline->m_asset->numParticlesPerInstance;
    Com_sprintf(dest, 0x100ui64, "%i/%i remaining particles", (unsigned int)pipeline->m_remainingParticles, setColor);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    Com_sprintf(dest, 0x100ui64, "%i shapes", (unsigned int)pipeline->m_shapes.m_size);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v10 = tabWidth + *x;
    *x = v10;
    v11 = 0;
    if ( pipeline->m_shapes.m_size > 0 )
    {
      v12 = 0i64;
      do
      {
        m_data = pipeline->m_shapes.m_data;
        ShapeScale = HavokPhysicsFX_GetShapeScale(m_data[v12].asset, m_data[v12].scaleShapeIndex);
        LODWORD(forceColor) = m_data[v12].scaleShapeIndex;
        Com_sprintf(dest, 0x100ui64, "shape %i %s scaled to %i %.2f", (unsigned int)v11, m_data[v12].asset->name, forceColor, *(float *)&ShapeScale);
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        ++v11;
        ++v12;
        *y = charHeight + *y;
      }
      while ( v11 < pipeline->m_shapes.m_size );
      v10 = *x;
    }
    *x = v10 - tabWidth;
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "No pipeline instance found");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
  }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelineInstances
==============
*/
void HavokPhysicsFX_Debug_DrawFXPipelineInstances(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  int v5; 
  int v6; 
  int v7; 
  unsigned int v8; 
  int v9; 
  HavokPhysicsFX_World *FXWorld; 
  HavokPhysicsFX_World *v11; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *pipelineInstances; 
  HavokPhysicsFX_Pipeline **m_data; 
  __int64 v14; 
  HavokPhysicsFX_Pipeline *v15; 
  int numParticlesPerInstance; 
  const char *v17; 
  int v18; 
  unsigned int v19; 
  HavokPhysicsFX_World *v20; 
  HavokPhysicsFX_World *v21; 
  int numPipelineInstances; 
  const char *WorldName; 
  float v24; 
  hkArray<HavokPhysicsFX_Pipeline *,hkContainerHeapAllocator> *v25; 
  int v26; 
  HavokPhysicsFX_Pipeline **v27; 
  HavokPhysicsFX_Pipeline *v28; 
  int v29; 
  PhysicsFXPipeline *m_asset; 
  char *fmt; 
  char *fmta; 
  __int64 shadow; 
  __int64 v34; 
  Physics_WorldId worldId; 
  char dest[256]; 

  v5 = 0;
  worldId = PHYSICS_WORLD_ID_CLIENT_FIRST;
  v6 = 0;
  v7 = 2;
  v8 = 0;
  v9 = 0;
  do
  {
    FXWorld = HavokPhysicsFX_GetFXWorld((Physics_WorldId)v7);
    v11 = FXWorld;
    if ( FXWorld && FXWorld->isInitialized )
    {
      if ( !FXWorld->pipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 485, ASSERT_TYPE_ASSERT, "(fxWorld->pipelineInstances)", (const char *)&queryFormat, "fxWorld->pipelineInstances") )
        __debugbreak();
      pipelineInstances = v11->pipelineInstances;
      ++v6;
      v8 += v11->numPipelineInstances;
      m_data = pipelineInstances->m_data;
      v14 = (__int64)&pipelineInstances->m_data[pipelineInstances->m_size];
      if ( pipelineInstances->m_data != (HavokPhysicsFX_Pipeline **)v14 )
      {
        do
        {
          v15 = *m_data;
          if ( *m_data )
          {
            numParticlesPerInstance = v15->m_asset->numParticlesPerInstance;
            v5 += numParticlesPerInstance;
            v9 += numParticlesPerInstance - v15->m_remainingParticles;
          }
          ++m_data;
        }
        while ( m_data != (HavokPhysicsFX_Pipeline **)v14 );
      }
    }
    ++v7;
  }
  while ( v7 <= 4 );
  v17 = "s";
  if ( v6 == 1 )
    v17 = (char *)&queryFormat.fmt + 3;
  LODWORD(fmt) = v6;
  Com_sprintf(dest, 0x100ui64, "%i Pipeline Instances in %i world%s with %i particles used out of %i allocated", v8, fmt, v17, v9, v5);
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
  v18 = 2;
  v19 = 0;
  *y = charHeight + *y;
  *x = tabWidth + *x;
  do
  {
    v20 = HavokPhysicsFX_GetFXWorld((Physics_WorldId)v18);
    v21 = v20;
    if ( v20 && v20->isInitialized )
    {
      if ( !v20->pipelineInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 517, ASSERT_TYPE_ASSERT, "(fxWorld->pipelineInstances)", (const char *)&queryFormat, "fxWorld->pipelineInstances") )
        __debugbreak();
      numPipelineInstances = v21->numPipelineInstances;
      WorldName = Physics_GetWorldName((Physics_WorldId)v18);
      LODWORD(fmta) = numPipelineInstances;
      Com_sprintf(dest, 0x100ui64, "World %s has %i Pipeline Instances", WorldName, fmta);
      Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
      *y = charHeight + *y;
      v24 = tabWidth + *x;
      *x = v24;
      v25 = v21->pipelineInstances;
      v26 = 0;
      v27 = v25->m_data;
      if ( v27 != &v27[v25->m_size] )
      {
        do
        {
          v28 = *v27;
          v29 = v26 + 1;
          if ( *v27 )
          {
            m_asset = v28->m_asset;
            LODWORD(v34) = m_asset->numParticlesPerInstance;
            LODWORD(shadow) = v34 - v28->m_remainingParticles;
            LODWORD(fmta) = v26;
            Com_sprintf(dest, 0x100ui64, "%i: %i: %s (%i/%i)", v19, fmta, m_asset->name, shadow, v34);
            Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
            *y = charHeight + *y;
            ++v19;
          }
          ++v27;
          v26 = v29;
        }
        while ( v27 != &v21->pipelineInstances->m_data[v21->pipelineInstances->m_size] );
        v24 = *x;
        v18 = worldId;
      }
      *x = v24 - tabWidth;
    }
    worldId = ++v18;
  }
  while ( v18 <= 4 );
  *x = *x - tabWidth;
}

/*
==============
HavokPhysicsFX_Debug_DrawFXPipelines
==============
*/
void HavokPhysicsFX_Debug_DrawFXPipelines(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *FXPipelines; 
  hkSet<PhysicsFXPipeline *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXPipeline *> > *v9; 
  __int64 m_numElems; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  PhysicsFXPipeline **m_data; 
  float v16; 
  unsigned int v17; 
  int v18; 
  __int64 v19; 
  PhysicsFXPipeline **v20; 
  char dest[256]; 

  HavokPhysicsFX_LockAssetRead();
  FXPipelines = HavokPhysicsFX_GetFXPipelines();
  v9 = FXPipelines;
  if ( FXPipelines )
  {
    m_numElems = (unsigned int)FXPipelines->m_numElems;
    LODWORD(m_numElems) = m_numElems & 0x7FFFFFFF;
    Com_sprintf(dest, 0x100ui64, "%i Pipelines", m_numElems);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v11 = 0;
    v12 = v9->m_elem.m_size - 1;
    if ( v12 >= 0 )
    {
      v13 = v12;
      v14 = 0i64;
      m_data = v9->m_elem.m_data;
      do
      {
        if ( *m_data != (PhysicsFXPipeline *)-1i64 )
          break;
        ++v11;
        ++v14;
        ++m_data;
      }
      while ( v14 <= v13 );
    }
    v16 = tabWidth + *x;
    *x = v16;
    v17 = 0;
    if ( v11 <= v9->m_elem.m_size - 1 )
    {
      do
      {
        Com_sprintf(dest, 0x100ui64, "%i - %s", v17, v9->m_elem.m_data[v11]->name);
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        v18 = v9->m_elem.m_size - 1;
        if ( ++v11 <= v18 )
        {
          v19 = v11;
          v20 = &v9->m_elem.m_data[v11];
          do
          {
            if ( *v20 != (PhysicsFXPipeline *)-1i64 )
              break;
            ++v11;
            ++v19;
            ++v20;
          }
          while ( v19 <= v18 );
        }
        ++v17;
      }
      while ( v11 <= v18 );
      v16 = *x;
    }
    *x = v16 - tabWidth;
  }
  HavokPhysicsFX_UnlockAssetRead();
}

/*
==============
HavokPhysicsFX_Debug_DrawFXShape
==============
*/
void HavokPhysicsFX_Debug_DrawFXShape(int shapeId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *FXShapes; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v11; 
  int v12; 
  int v13; 
  int v14; 
  PhysicsFXShape **m_data; 
  __int64 i; 
  PhysicsFXShape *v17; 
  int v18; 
  __int64 v19; 
  PhysicsFXShape **v20; 
  char dest[256]; 

  HavokPhysicsFX_LockAssetRead();
  FXShapes = HavokPhysicsFX_GetFXShapes();
  v11 = FXShapes;
  if ( FXShapes )
  {
    if ( shapeId < 0 || shapeId >= (FXShapes->m_numElems & 0x7FFFFFFF) )
    {
      Com_sprintf(dest, 0x100ui64, "%i is not a valid Shape - we only found %i", (unsigned int)shapeId, FXShapes->m_numElems & 0x7FFFFFFF);
      Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
      *y = charHeight + *y;
    }
    else
    {
      v12 = 0;
      v13 = FXShapes->m_elem.m_size - 1;
      v14 = 0;
      if ( v13 >= 0 )
      {
        m_data = FXShapes->m_elem.m_data;
        for ( i = 0i64; i <= v13; ++i )
        {
          if ( *m_data != (PhysicsFXShape *)-1i64 )
            break;
          ++v14;
          ++m_data;
        }
      }
      if ( v14 <= v13 )
      {
        while ( 1 )
        {
          v17 = v11->m_elem.m_data[v14];
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 400, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
            __debugbreak();
          if ( shapeId == v12 )
            break;
          v18 = v11->m_elem.m_size - 1;
          if ( ++v14 <= v18 )
          {
            v19 = v14;
            v20 = &v11->m_elem.m_data[v14];
            do
            {
              if ( *v20 != (PhysicsFXShape *)-1i64 )
                break;
              ++v14;
              ++v19;
              ++v20;
            }
            while ( v19 <= v18 );
          }
          ++v12;
          if ( v14 > v18 )
            goto LABEL_21;
        }
        HavokPhysicsFX_Debug_DrawFXShape(v17, scrPlace, x, y, tabWidth, charHeight);
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
  const char *soundAlias; 
  __int64 v11; 
  char dest[256]; 

  if ( shape )
  {
    Com_sprintf(dest, 0x100ui64, "Name: %s", shape->name);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    soundAlias = shape->soundAlias;
    if ( soundAlias )
    {
      v11 = -1i64;
      do
        ++v11;
      while ( soundAlias[v11] );
      if ( (_DWORD)v11 )
      {
        Com_sprintf(dest, 0x100ui64, "Audio Data");
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        *x = tabWidth + *x;
        Com_sprintf(dest, 0x100ui64, "Sound %s", shape->soundAlias);
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        Com_sprintf(dest, 0x100ui64, "Impulse Range %.2f %.2f", shape->soundMinImpulse, shape->soundMaxImpulse);
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        Com_sprintf(dest, 0x100ui64, "Impulse Volume Range %.2f %.2f", shape->soundMinImpulseVolume, shape->soundMaxImpulseVolume);
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        *x = *x - tabWidth;
      }
    }
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "No Shape found");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
  }
}

/*
==============
HavokPhysicsFX_Debug_DrawFXShapes
==============
*/
void HavokPhysicsFX_Debug_DrawFXShapes(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *FXShapes; 
  hkSet<PhysicsFXShape *,hkContainerHeapAllocator,hkMapOperations<PhysicsFXShape *> > *v9; 
  __int64 m_numElems; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  PhysicsFXShape **m_data; 
  float v16; 
  unsigned int v17; 
  const char **p_name; 
  int v19; 
  __int64 v20; 
  PhysicsFXShape **v21; 
  char dest[256]; 

  HavokPhysicsFX_LockAssetRead();
  FXShapes = HavokPhysicsFX_GetFXShapes();
  v9 = FXShapes;
  if ( FXShapes )
  {
    m_numElems = (unsigned int)FXShapes->m_numElems;
    LODWORD(m_numElems) = m_numElems & 0x7FFFFFFF;
    Com_sprintf(dest, 0x100ui64, "%i Shapes", m_numElems);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v11 = 0;
    v12 = v9->m_elem.m_size - 1;
    if ( v12 >= 0 )
    {
      v13 = v12;
      v14 = 0i64;
      m_data = v9->m_elem.m_data;
      do
      {
        if ( *m_data != (PhysicsFXShape *)-1i64 )
          break;
        ++v11;
        ++v14;
        ++m_data;
      }
      while ( v14 <= v13 );
    }
    v16 = tabWidth + *x;
    *x = v16;
    v17 = 0;
    if ( v11 <= v9->m_elem.m_size - 1 )
    {
      do
      {
        p_name = &v9->m_elem.m_data[v11]->name;
        if ( !p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsfxdebug.cpp", 349, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
          __debugbreak();
        Com_sprintf(dest, 0x100ui64, "%i - %s", v17, *p_name);
        Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
        *y = charHeight + *y;
        v19 = v9->m_elem.m_size - 1;
        if ( ++v11 <= v19 )
        {
          v20 = v11;
          v21 = &v9->m_elem.m_data[v11];
          do
          {
            if ( *v21 != (PhysicsFXShape *)-1i64 )
              break;
            ++v11;
            ++v20;
            ++v21;
          }
          while ( v20 <= v19 );
        }
        ++v17;
      }
      while ( v11 <= v19 );
      v16 = *x;
    }
    *x = v16 - tabWidth;
  }
  HavokPhysicsFX_UnlockAssetRead();
}

/*
==============
HavokPhysicsFX_Debug_DrawSounds
==============
*/
void HavokPhysicsFX_Debug_DrawSounds(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  unsigned int i; 
  const char *v9; 
  char dest[256]; 

  Com_sprintf(dest, 0x100ui64, "Showing %i recent sounds", s_havokPhysicsFXNumQueuedSounds);
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  Com_sprintf(dest, 0x100ui64, "Entry shows sound, volume, impulse, surfType");
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  for ( i = 0; i < s_havokPhysicsFXNumQueuedSounds; ++i )
  {
    v9 = j_va("%s:%.2f:%.2f:%s", s_havokPhysicsFXQueuedSounds[i].soundAlias, s_havokPhysicsFXQueuedSounds[i].volume, s_havokPhysicsFXQueuedSounds[i].impulse, s_PhysicsFX_SurfTypeNames[(s_havokPhysicsFXQueuedSounds[i].surfFlags >> 19) & 0x3F]);
    CL_AddDebugString(&s_havokPhysicsFXQueuedSounds[i].position, &colorWhite, 0.25, v9, 0, 0);
  }
}

/*
==============
HavokPhysicsFX_Debug_RegisterSoundEvent
==============
*/
void HavokPhysicsFX_Debug_RegisterSoundEvent(const HavokPhysicsFX_QueuedSound *queuedSound)
{
  char v1; 
  unsigned int v2; 

  v1 = s_havokPhysicsFXNumQueuedSoundStart;
  s_havokPhysicsFXQueuedSounds[s_havokPhysicsFXNumQueuedSoundStart] = *queuedSound;
  v2 = 128;
  s_havokPhysicsFXNumQueuedSoundStart = (v1 + 1) & 0x7F;
  if ( (int)(s_havokPhysicsFXNumQueuedSounds + 1) < 128 )
    v2 = s_havokPhysicsFXNumQueuedSounds + 1;
  s_havokPhysicsFXNumQueuedSounds = v2;
}

