/*
==============
Tracer_AdvanceDrawCounter
==============
*/

void __fastcall Tracer_AdvanceDrawCounter(const LocalClientNum_t localClientNum, const bitarray<64> *r_perks, const PlayerHandIndex hand, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  ?Tracer_AdvanceDrawCounter@@YAXW4LocalClientNum_t@@AEBV?$bitarray@$0EA@@@W4PlayerHandIndex@@AEBUWeapon@@_NH@Z(localClientNum, r_perks, hand, weapon, isAlternate, attackerEntNum);
}

/*
==============
Tracer_Draw_Legacy
==============
*/

void __fastcall Tracer_Draw_Legacy(const vec3_t *start, const vec3_t *finish, const vec3_t *dir, const float alphaScale, const TracerDrawFlags drawFlags, TracerInfo *const tracer, void *data)
{
  ?Tracer_Draw_Legacy@@YAXAEBTvec3_t@@00MW4TracerDrawFlags@@QEAUTracerInfo@@PEAX@Z(start, finish, dir, alphaScale, drawFlags, tracer, data);
}

/*
==============
Tracer_IsFirstInBurst
==============
*/

int __fastcall Tracer_IsFirstInBurst(const LocalClientNum_t localClientNum, const PlayerHandIndex hand, const int attackerEntNum)
{
  return ?Tracer_IsFirstInBurst@@YAHW4LocalClientNum_t@@W4PlayerHandIndex@@H@Z(localClientNum, hand, attackerEntNum);
}

/*
==============
Tracer_SetDrawCounter
==============
*/

void __fastcall Tracer_SetDrawCounter(const LocalClientNum_t localClientNum, const int entNum, const int *weaponShotCount)
{
  ?Tracer_SetDrawCounter@@YAXW4LocalClientNum_t@@HQEBH@Z(localClientNum, entNum, weaponShotCount);
}

/*
==============
Tracer_ShouldDraw
==============
*/

int __fastcall Tracer_ShouldDraw(const LocalClientNum_t localClientNum, const bitarray<64> *r_perks, const PlayerHandIndex hand, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  return ?Tracer_ShouldDraw@@YAHW4LocalClientNum_t@@AEBV?$bitarray@$0EA@@@W4PlayerHandIndex@@AEBUWeapon@@_NH@Z(localClientNum, r_perks, hand, weapon, isAlternate, attackerEntNum);
}

/*
==============
Tracer_SetDrawCounter
==============
*/

void __fastcall Tracer_SetDrawCounter(const LocalClientNum_t localClientNum, const int entNum, const PlayerHandIndex hand, const int weaponShotCount)
{
  ?Tracer_SetDrawCounter@@YAXW4LocalClientNum_t@@HW4PlayerHandIndex@@H@Z(localClientNum, entNum, hand, weaponShotCount);
}

/*
==============
Tracer_Draw_ParticleSystem
==============
*/

void __fastcall Tracer_Draw_ParticleSystem(const vec3_t *start, const vec3_t *finish, const vec3_t *dir, const float alphaScale, const TracerDrawFlags drawFlags, TracerInfo *const tracer, void *data)
{
  ?Tracer_Draw_ParticleSystem@@YAXAEBTvec3_t@@00MW4TracerDrawFlags@@QEAUTracerInfo@@PEAX@Z(start, finish, dir, alphaScale, drawFlags, tracer, data);
}

/*
==============
Tracer_Spawn
==============
*/

void __fastcall Tracer_Spawn(LocalClientNum_t localClientNum, const int bulletId, const bitarray<64> *r_perks, const vec3_t *pstart, const vec3_t *pend, const int instigatorEntNum, const Weapon *weapon, bool isAlternate, int spawnDelay)
{
  ?Tracer_Spawn@@YAXW4LocalClientNum_t@@HAEBV?$bitarray@$0EA@@@AEBTvec3_t@@2HAEBUWeapon@@_NH@Z(localClientNum, bulletId, r_perks, pstart, pend, instigatorEntNum, weapon, isAlternate, spawnDelay);
}

/*
==============
Tracer_AdvanceDrawCounter
==============
*/
void Tracer_AdvanceDrawCounter(const LocalClientNum_t localClientNum, const bitarray<64> *r_perks, const PlayerHandIndex hand, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  __int64 v7; 
  __int64 v9; 
  centity_t *Entity; 
  TracerDef *v11; 
  TracerDef *v12; 
  unsigned int drawInterval; 
  unsigned __int8 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 

  v7 = hand;
  v9 = localClientNum;
  if ( (unsigned int)attackerEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 451, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
    __debugbreak();
  if ( attackerEntNum != 2046 )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)v9, attackerEntNum);
    if ( (Entity->flags & 1) != 0 )
    {
      v11 = BG_TracerType(*r_perks, weapon, isAlternate);
      v12 = v11;
      if ( v11 )
      {
        drawInterval = v11->drawInterval;
        if ( drawInterval - 1 > 0xFE )
        {
          LODWORD(v17) = 1;
          LODWORD(v16) = drawInterval;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 469, ASSERT_TYPE_ASSERT, "( 1 ) <= ( tracerDef->drawInterval ) && ( tracerDef->drawInterval ) <= ( 255 )", "tracerDef->drawInterval not in [1, 255]\n\t%i not in [%i, %i]", v16, v17, 255) )
            __debugbreak();
        }
        v14 = truncate_cast<unsigned char,unsigned int>(v12->drawInterval);
        if ( (v14 & 1) == 0 )
        {
          if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          if ( ((Entity->nextState.eType - 12) & 0xFFFD) == 0 )
          {
            if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
            {
              LODWORD(v17) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v17) )
                __debugbreak();
            }
            if ( (unsigned int)v9 >= CgVehicleSystem::ms_allocatedCount )
            {
              LODWORD(v17) = CgVehicleSystem::ms_allocatedCount;
              LODWORD(v16) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
                __debugbreak();
            }
            if ( !CgVehicleSystem::ms_vehicleSystemArray[v9] )
            {
              LODWORD(v17) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v17) )
                __debugbreak();
            }
            if ( (unsigned int)(CgVehicleSystem::GetTurretFireType(CgVehicleSystem::ms_vehicleSystemArray[v9], Entity) - 1) <= 1 )
              ++v14;
          }
        }
        ++Entity->tracerDrawRateCounter[v7];
        if ( BG_IsCharacterEntity(&Entity->nextState) )
        {
          v15 = I_clamp(Entity->tracerDrawRateCounter[v7], 0, 255);
          Entity->tracerDrawRateCounter[v7] = truncate_cast<unsigned char,int>(v15);
        }
        else
        {
          Entity->tracerDrawRateCounter[v7] %= v14;
        }
      }
    }
  }
}

/*
==============
Tracer_Draw_Legacy
==============
*/
void Tracer_Draw_Legacy(const vec3_t *start, const vec3_t *finish, const vec3_t *dir, const float alphaScale, const TracerDrawFlags drawFlags, TracerInfo *const tracer)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  float v9; 
  float v10; 
  const dvar_t *v14; 
  float v15; 
  __m128 v16; 
  float v17; 
  float v18; 
  float v19; 
  __m128 v20; 
  float v21; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  Material *tracerThermalOverrideMat; 
  int v27; 
  unsigned __int8 v28; 
  bool v29; 
  const dvar_t *v31; 
  __m256i v33; 
  __m128 v34; 
  __int64 v35; 
  FxBeam beam; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 

  v9 = finish->v[1] - start->v[1];
  v10 = finish->v[2] - start->v[2];
  if ( (float)((float)((float)(v9 * v9) + (float)((float)(finish->v[0] - start->v[0]) * (float)(finish->v[0] - start->v[0]))) + (float)(v10 * v10)) > 0.000001 )
  {
    v14 = DVARBOOL_tracer_debugDraw;
    v39 = v6;
    v38 = v7;
    v37 = v8;
    if ( !DVARBOOL_tracer_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_debugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
      CG_DebugLine(start, finish, &colorRed, 1, 1);
    if ( !tracer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 234, ASSERT_TYPE_ASSERT, "(tracer)", (const char *)&queryFormat, "tracer") )
      __debugbreak();
    v15 = finish->v[1];
    v16 = (__m128)LODWORD(finish->v[2]);
    v17 = start->v[1];
    v18 = start->v[2];
    v19 = start->v[0];
    beam.end.v[0] = finish->v[0];
    beam.end.v[1] = v15;
    beam.end.v[2] = v16.m128_f32[0];
    beam.begin.v[2] = v18;
    v20 = v16;
    v20.m128_f32[0] = v16.m128_f32[0] - v18;
    v21 = fsqrt((float)((float)((float)(v15 - v17) * (float)(v15 - v17)) + (float)((float)(beam.end.v[0] - v19) * (float)(beam.end.v[0] - v19))) + (float)(v20.m128_f32[0] * v20.m128_f32[0]));
    beam.begin.v[0] = v19;
    beam.begin.v[1] = v17;
    *(_WORD *)&beam.type = 0;
    if ( v21 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 243, ASSERT_TYPE_SANITY, "( ( length > 0.f ) )", "( length ) = %g", v21) )
      __debugbreak();
    *(float *)&_XMM6 = tracer->width;
    if ( (drawFlags & 1) != 0 )
    {
      v23 = DVARFLT_tracer_thermalWidthMult;
      if ( !DVARFLT_tracer_thermalWidthMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_thermalWidthMult") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      *(float *)&_XMM6 = *(float *)&_XMM6 * v23->current.value;
    }
    if ( tracer->isClientEmitter )
    {
      v24 = DVARFLT_tracer_firstPersonMaxWidth;
      if ( !DVARFLT_tracer_firstPersonMaxWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_firstPersonMaxWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      _XMM0 = v24->current.unsignedInt;
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    if ( *(float *)&_XMM6 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 257, ASSERT_TYPE_SANITY, "( ( width > 0.f ) )", "( width ) = %g", *(float *)&_XMM6) )
      __debugbreak();
    tracerThermalOverrideMat = cgMedia.tracerThermalOverrideMat;
    beam.radius = *(float *)&_XMM6;
    if ( (drawFlags & 1) == 0 )
      tracerThermalOverrideMat = tracer->material;
    beam.material = tracerThermalOverrideMat;
    if ( !tracerThermalOverrideMat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 263, ASSERT_TYPE_SANITY, "( beam.material )", (const char *)&queryFormat, "beam.material") )
      __debugbreak();
    if ( tracer->screwDist <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 265, ASSERT_TYPE_ASSERT, "(tracer->screwDist > 0.0f)", (const char *)&queryFormat, "tracer->screwDist > 0.0f") )
      __debugbreak();
    v27 = (int)(float)((float)(8.0 / tracer->screwDist) * v21);
    if ( v27 > 255 )
      v27 = 255;
    v28 = v27;
    if ( v27 < 1 )
      v28 = 1;
    beam.segmentCount = v28;
    if ( !v28 )
    {
      LODWORD(v35) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 268, ASSERT_TYPE_SANITY, "( ( beam.segmentCount > 0 ) )", "( beam.segmentCount ) = %i", v35) )
        __debugbreak();
    }
    v29 = tracer->isClientEmitter == 0;
    _XMM0 = (__m128)LODWORD(tracer->screwRadius);
    beam.tracer.wiggleDist = tracer->screwRadius;
    if ( !v29 )
    {
      v31 = DVARFLT_tracer_firstPersonMaxScrewRadius;
      if ( !DVARFLT_tracer_firstPersonMaxScrewRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_firstPersonMaxScrewRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      _XMM0 = (__m128)v31->current.unsignedInt;
      __asm { vminss  xmm1, xmm0, dword ptr [rbp+40h+beam.___u9] }
      beam.tracer.wiggleDist = *(float *)&_XMM1;
    }
    v33 = *(__m256i *)tracer->colors[2].v;
    v34 = (__m128)tracer->colors[4];
    *(__m256i *)beam.colors[0].v = *(__m256i *)tracer->colors[0].v;
    *(__m256i *)beam.colors[2].v = v33;
    beam.colors[0].v[3] = _mm_shuffle_ps(_XMM0, _XMM0, 255).m128_f32[0] * alphaScale;
    beam.colors[4] = (vec4_t)v34;
    beam.colors[2].v[3] = _mm_shuffle_ps(v20, v20, 255).m128_f32[0] * alphaScale;
    beam.colors[1].v[3] = alphaScale * beam.colors[1].v[3];
    beam.colors[4].v[3] = _mm_shuffle_ps(v34, v34, 255).m128_f32[0] * alphaScale;
    beam.colors[3].v[3] = alphaScale * beam.colors[3].v[3];
    FX_Beam_Add(&beam);
  }
}

/*
==============
Tracer_Draw_ParticleSystem
==============
*/
void Tracer_Draw_ParticleSystem(const vec3_t *start, const vec3_t *finish, const vec3_t *dir, const float alphaScale, const TracerDrawFlags drawFlags, TracerInfo *const tracer, void *data)
{
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  __m128 v14; 
  __m128 v18; 
  float v21; 
  __m128 v23; 
  vec4_t v27; 
  vec4_t v31; 
  vec4_t v35; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle v39; 
  unsigned int v40; 
  ParticleSystem *v41; 
  __int64 v42; 
  ParticleSystemHandle particleSystem; 
  __int64 v44; 
  __int64 v45; 
  unsigned __int32 v46; 
  ParticleSystem *v47; 
  __int64 v48; 
  __m128 v50; 
  __m128 v53; 
  __m128 v; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v62; 
  float v63; 
  float v64; 
  __m128 v66; 
  vec4_t v70; 
  vec4_t v74; 
  vec4_t v78; 
  __m256i v81; 
  __m128 v82; 
  __m128 v83; 
  __m128 v84; 
  __m128 v85; 
  __m128 v86; 
  __m256i v87; 
  __m128 v89; 
  __m128 v90; 
  vec4_t v91; 
  vec4_t v92; 
  vec4_t v93; 
  __m128 v94; 
  vec4_t v95; 
  vec4_t v96; 
  vec4_t v97; 
  vec3_t forward; 
  vec3_t left; 
  vec3_t up; 
  float v101; 
  float v102; 
  float v103; 
  tmat44_t<vec4_t> emitterOrientationMat; 
  float4 emitterPos; 
  float4 endPos; 
  float4 startPos; 

  if ( !tracer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 293, ASSERT_TYPE_ASSERT, "(tracer)", (const char *)&queryFormat, "tracer") )
    __debugbreak();
  if ( !tracer->particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 294, ASSERT_TYPE_ASSERT, "(tracer->particleSystemDef != nullptr)", (const char *)&queryFormat, "tracer->particleSystemDef != nullptr") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 295, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( *((_BYTE *)data + 301138) )
  {
    v9 = *((int *)data + 75283);
    if ( (drawFlags & 2) == 0 && tracer->particleSystem == PARTICLE_SYSTEM_INVALID_HANDLE )
    {
      v10 = finish->v[0];
      v11 = finish->v[1];
      v12 = finish->v[2];
      v89.m128_i32[3] = 0;
      v14 = v89;
      v14.m128_f32[0] = start->v[0];
      _XMM3 = v14;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r13+4], 10h
        vinsertps xmm3, xmm3, dword ptr [r13+8], 20h ; ' '
      }
      v90 = _XMM3;
      v90.m128_i32[3] = 0;
      v18 = v90;
      v18.m128_f32[0] = finish->v[0];
      _XMM0 = v18;
      __asm
      {
        vinsertps xmm0, xmm0, xmm4, 10h
        vinsertps xmm0, xmm0, xmm5, 20h ; ' '
      }
      v89 = _XMM0;
      endPos.v = _XMM0;
      emitterPos.v = _XMM0;
      startPos.v = _XMM3;
      if ( tracer->isInstantaneousBeam )
      {
        emitterPos.v = _XMM3;
        emitterOrientationMat = identityMatrix44;
      }
      else
      {
        v101 = v10;
        v21 = dir->v[1];
        forward.v[0] = dir->v[0];
        forward.v[2] = dir->v[2];
        forward.v[1] = v21;
        v102 = v11;
        v103 = v12;
        Vec3Basis_RightHanded(&forward, &left, &up);
        v89.m128_i32[3] = 0;
        v23 = v89;
        v23.m128_f32[0] = forward.v[0];
        _XMM3 = v23;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+forward+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+forward+8], arg_18
        }
        v91 = _XMM3;
        emitterOrientationMat.m[0] = _XMM3;
        v91.v[3] = 0.0;
        v27 = v91;
        v27.v[0] = left.v[0];
        _XMM3 = v27;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+left+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+left+8], arg_18
        }
        v92 = _XMM3;
        emitterOrientationMat.m[1] = _XMM3;
        v92.v[3] = 0.0;
        v31 = v92;
        v31.v[0] = up.v[0];
        _XMM3 = v31;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+up+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+up+8], arg_18
        }
        v93 = _XMM3;
        emitterOrientationMat.m[2] = _XMM3;
        v93.v[3] = 0.0;
        v35 = v93;
        v35.v[0] = v101;
        _XMM3 = v35;
        __asm
        {
          vinsertps xmm3, xmm3, [rsp+158h+var_C0], 10h
          vinsertps xmm3, xmm3, [rsp+158h+var_BC], arg_18
        }
        emitterOrientationMat.row3 = (vec4_t)((*(_OWORD *)&_XMM3 ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v ^ *(_OWORD *)&_XMM3);
        v89 = _XMM3;
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
      v39 = ParticleManager::AddSystem((ParticleManager *)data, (LocalClientNum_t)v9, tracer->particleSystemDef, &emitterPos, (const vector3 *)&emitterOrientationMat, LocalClientGlobals->time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
      tracer->particleSystem = v39;
      if ( tracer->isInstantaneousBeam )
      {
        v40 = v39 & 0xFFF;
        v41 = NULL;
        if ( g_particleSystemsGeneration[4096 * v9 + (v39 & 0xFFF)].__all32 != v39 )
          v40 = 0;
        v42 = (v9 << 12) + v40;
        if ( g_particleSystems[0][v42] >= (ParticleSystem *)0x1000 )
          v41 = g_particleSystems[0][v42];
        if ( v41 )
          ParticleSystem::SetBeamPos(v41, &startPos, &endPos);
      }
    }
    particleSystem = tracer->particleSystem;
    v44 = v9 << 12;
    v45 = (v9 << 12) + (particleSystem & 0xFFF);
    v46 = 0;
    v47 = NULL;
    if ( g_particleSystemsGeneration[v45].__all32 == particleSystem )
      v46 = tracer->particleSystem & 0xFFF;
    v48 = v44 + v46;
    if ( g_particleSystems[0][v48] >= (ParticleSystem *)0x1000 )
      v47 = g_particleSystems[0][v48];
    if ( v47 && !tracer->isInstantaneousBeam )
    {
      v89.m128_i32[3] = 0;
      v50 = v89;
      v50.m128_f32[0] = finish->v[0];
      _XMM6 = v50;
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [rsi+4], 10h
        vinsertps xmm6, xmm6, dword ptr [rsi+8], 20h ; ' '
      }
      v94 = _XMM6;
      if ( (drawFlags & 2) != 0 )
      {
        v53 = _mm128_sub_ps(_XMM6, v47->m_systemTransform.w.v);
        _XMM2 = _mm128_mul_ps(v53, v53);
        __asm
        {
          vinsertps xmm0, xmm2, xmm2, 8
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm2, xmm1, xmm1
        }
        if ( *(float *)&_XMM2 <= stopThresholdSq )
        {
          ParticleManager::StopSystem((ParticleManager *)data, particleSystem);
          tracer->particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
        }
      }
      v47->m_systemTransform.w.v = _XMM6;
      v = v47->m_systemTransform.z.v;
      v59 = _mm_shuffle_ps(v, v47->m_systemTransform.w.v, 68);
      v60 = _mm_shuffle_ps(v, v47->m_systemTransform.w.v, 238);
      v61 = _mm_shuffle_ps(v47->m_systemTransform.x.v, v47->m_systemTransform.y.v, 68);
      v62 = _mm_shuffle_ps(v47->m_systemTransform.x.v, v47->m_systemTransform.y.v, 238);
      emitterOrientationMat.m[0] = (vec4_t)_mm_shuffle_ps(v61, v59, 136);
      emitterOrientationMat.m[1] = (vec4_t)_mm_shuffle_ps(v61, v59, 221);
      emitterOrientationMat.m[2] = (vec4_t)_mm_shuffle_ps(v62, v60, 136);
      *(__m256i *)v47->m_systemTransformTranspose.x.v.m128_f32 = *(__m256i *)emitterOrientationMat.m[0].v;
      emitterOrientationMat.m[3] = (vec4_t)_mm_shuffle_ps(v62, v60, 221);
      *(__m256i *)v47->m_systemTransformTranspose.z.v.m128_f32 = *(__m256i *)emitterOrientationMat.row2.v;
      v.m128_i32[0] = LODWORD(dir->v[1]);
      forward.v[0] = dir->v[0];
      v63 = dir->v[2];
      forward.v[1] = v.m128_f32[0];
      v.m128_i32[0] = LODWORD(finish->v[0]);
      forward.v[2] = v63;
      v64 = finish->v[1];
      v101 = v.m128_f32[0];
      v.m128_i32[0] = LODWORD(finish->v[2]);
      v102 = v64;
      v103 = v.m128_f32[0];
      Vec3Basis_RightHanded(&forward, &left, &up);
      v94.m128_i32[3] = 0;
      v66 = v94;
      v66.m128_f32[0] = forward.v[0];
      _XMM3 = v66;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+forward+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+forward+8], arg_18
      }
      v95 = _XMM3;
      emitterOrientationMat.m[0] = _XMM3;
      v95.v[3] = 0.0;
      v70 = v95;
      v70.v[0] = left.v[0];
      _XMM3 = v70;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+left+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+left+8], arg_18
      }
      v96 = _XMM3;
      emitterOrientationMat.m[1] = _XMM3;
      v96.v[3] = 0.0;
      v74 = v96;
      v74.v[0] = up.v[0];
      _XMM3 = v74;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+up+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+up+8], arg_18
      }
      v97 = _XMM3;
      emitterOrientationMat.m[2] = _XMM3;
      v97.v[3] = 0.0;
      v78 = v97;
      v78.v[0] = v101;
      _XMM3 = v78;
      __asm
      {
        vinsertps xmm3, xmm3, [rsp+158h+var_C0], 10h
        vinsertps xmm3, xmm3, [rsp+158h+var_BC], arg_18
      }
      emitterOrientationMat.row3 = (vec4_t)((_XMM3 ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v ^ _XMM3);
      Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat);
      Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat.row1);
      Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat.row2);
      v81 = *(__m256i *)emitterOrientationMat.row2.v;
      *(__m256i *)v47->m_systemTransform.x.v.m128_f32 = *(__m256i *)emitterOrientationMat.m[0].v;
      *(__m256i *)v47->m_systemTransform.z.v.m128_f32 = v81;
      v82 = v47->m_systemTransform.z.v;
      v83 = _mm_shuffle_ps(v82, v47->m_systemTransform.w.v, 68);
      v84 = _mm_shuffle_ps(v82, v47->m_systemTransform.w.v, 238);
      v85 = _mm_shuffle_ps(v47->m_systemTransform.x.v, v47->m_systemTransform.y.v, 68);
      v86 = _mm_shuffle_ps(v47->m_systemTransform.x.v, v47->m_systemTransform.y.v, 238);
      emitterOrientationMat.m[1] = (vec4_t)_mm_shuffle_ps(v85, v83, 221);
      emitterOrientationMat.m[0] = (vec4_t)_mm_shuffle_ps(v85, v83, 136);
      emitterOrientationMat.m[2] = (vec4_t)_mm_shuffle_ps(v86, v84, 136);
      emitterOrientationMat.m[3] = (vec4_t)_mm_shuffle_ps(v86, v84, 221);
      v87 = *(__m256i *)emitterOrientationMat.row2.v;
      *(__m256i *)v47->m_systemTransformTranspose.x.v.m128_f32 = *(__m256i *)emitterOrientationMat.m[0].v;
      *(__m256i *)v47->m_systemTransformTranspose.z.v.m128_f32 = v87;
    }
  }
  else
  {
    tracer->particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
}

/*
==============
Tracer_IsFirstInBurst
==============
*/
_BOOL8 Tracer_IsFirstInBurst(const LocalClientNum_t localClientNum, const PlayerHandIndex hand, const int attackerEntNum)
{
  __int64 v3; 
  centity_t *Entity; 
  unsigned __int8 v8; 

  v3 = hand;
  if ( (unsigned int)attackerEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 426, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
    __debugbreak();
  if ( attackerEntNum == 2046 )
    return 1i64;
  Entity = CG_GetEntity(localClientNum, attackerEntNum);
  return (Entity->flags & 1) != 0 && (v8 = Entity->tracerDrawRateCounter[v3]) != 0 && v8 == 1;
}

/*
==============
Tracer_SetDrawCounter
==============
*/
void Tracer_SetDrawCounter(const LocalClientNum_t localClientNum, const int entNum, const int *weaponShotCount)
{
  __int64 i; 
  unsigned int v7; 
  centity_t *Entity; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 522, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  for ( i = 0i64; i < 2; ++i )
  {
    v7 = weaponShotCount[i];
    if ( (unsigned int)entNum >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 503, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( v7 > 0x1F )
    {
      LODWORD(v12) = 31;
      LODWORD(v10) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 504, ASSERT_TYPE_ASSERT, "( 0 ) <= ( weaponShotCount ) && ( weaponShotCount ) <= ( ( ( 1 << 5 ) - 1 ) )", "weaponShotCount not in [0, PLAYER_WEAPONSHOTCOUNT_MAX]\n\t%i not in [%i, %i]", v10, 0i64, v12) )
        __debugbreak();
    }
    Entity = CG_GetEntity(localClientNum, entNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 507, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( v7 != 31 || Entity->tracerDrawRateCounter[i] < 0x1Fu )
    {
      v9 = 0;
      if ( (int)(v7 - 1) > 0 )
        v9 = v7 - 1;
      Entity->tracerDrawRateCounter[i] = truncate_cast<unsigned char,int>(v9);
    }
  }
}

/*
==============
Tracer_SetDrawCounter
==============
*/
void Tracer_SetDrawCounter(const LocalClientNum_t localClientNum, const int entNum, const PlayerHandIndex hand, const int weaponShotCount)
{
  __int64 v4; 
  int v8; 
  centity_t *Entity; 
  __int64 v10; 

  v4 = hand;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 503, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v8 = 0;
  if ( (unsigned int)weaponShotCount > 0x1F )
  {
    LODWORD(v10) = weaponShotCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 504, ASSERT_TYPE_ASSERT, "( 0 ) <= ( weaponShotCount ) && ( weaponShotCount ) <= ( ( ( 1 << 5 ) - 1 ) )", "weaponShotCount not in [0, PLAYER_WEAPONSHOTCOUNT_MAX]\n\t%i not in [%i, %i]", v10, 0i64, 31) )
      __debugbreak();
  }
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 507, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( weaponShotCount != 31 || Entity->tracerDrawRateCounter[v4] < 0x1Fu )
  {
    if ( weaponShotCount - 1 > 0 )
      v8 = weaponShotCount - 1;
    Entity->tracerDrawRateCounter[v4] = truncate_cast<unsigned char,int>(v8);
  }
}

/*
==============
Tracer_ShouldDraw
==============
*/
__int64 Tracer_ShouldDraw(const LocalClientNum_t localClientNum, const bitarray<64> *r_perks, const PlayerHandIndex hand, const Weapon *weapon, const bool isAlternate, const int attackerEntNum)
{
  __int64 v7; 
  centity_t *Entity; 
  TracerDef *v12; 
  TracerDef *v13; 
  unsigned __int8 v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 

  v7 = hand;
  if ( (unsigned int)attackerEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 397, ASSERT_TYPE_ASSERT, "(unsigned)( attackerEntNum ) < (unsigned)( ( 2048 ) )", "attackerEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", attackerEntNum, 2048) )
    __debugbreak();
  if ( attackerEntNum == 2046 )
    return 1i64;
  Entity = CG_GetEntity(localClientNum, attackerEntNum);
  if ( (Entity->flags & 1) == 0 )
    return 0i64;
  v12 = BG_TracerType(*r_perks, weapon, isAlternate);
  v13 = v12;
  if ( !v12 )
    return 0i64;
  if ( v12->drawInterval - 1 > 0xFE )
  {
    LODWORD(v19) = 1;
    LODWORD(v18) = v12->drawInterval;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 415, ASSERT_TYPE_ASSERT, "( 1 ) <= ( tracerDef->drawInterval ) && ( tracerDef->drawInterval ) <= ( 255 )", "tracerDef->drawInterval not in [1, 255]\n\t%i not in [%i, %i]", v18, v19, 255) )
      __debugbreak();
  }
  v14 = truncate_cast<unsigned char,unsigned int>(v13->drawInterval);
  v15 = 0;
  v16 = v14;
  v17 = 0;
  if ( Entity->tracerDrawRateCounter[v7] - 1 > 0 )
    v17 = Entity->tracerDrawRateCounter[v7] - 1;
  LOBYTE(v15) = v17 % v16 == 0;
  return v15;
}

/*
==============
Tracer_Spawn
==============
*/
void Tracer_Spawn(LocalClientNum_t localClientNum, const int bulletId, const bitarray<64> *r_perks, const vec3_t *pstart, const vec3_t *pend, const int instigatorEntNum, const Weapon *weapon, bool isAlternate, int spawnDelay)
{
  __int64 v10; 
  int v11; 
  cg_t *LocalClientGlobals; 
  int clientNum; 
  char v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v21; 
  float v24; 
  float v25; 
  float v26; 
  const dvar_t *v27; 
  const char *v28; 
  float v29; 
  __int64 v30; 
  WeaponDef *v31; 
  const dvar_t *v32; 
  const char *v33; 
  TracerDef *tracerDefault; 
  const char *WeaponName; 
  localEntity_s *v36; 
  Material *material; 
  const ParticleSystemDef *particleSystemDef; 
  int *p_lastRenderTime; 
  signed __int64 v40; 
  __int64 v41; 
  int time; 
  int v43; 
  float speed; 
  const dvar_t *v45; 
  __int64 v46; 
  __int64 v47; 
  vec3_t start; 
  char output[1024]; 

  v10 = localClientNum;
  if ( (unsigned int)instigatorEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 85, ASSERT_TYPE_ASSERT, "(unsigned)( instigatorEntNum ) < (unsigned)( ( 2048 ) )", "instigatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", instigatorEntNum, 2048) )
    __debugbreak();
  v11 = 0;
  if ( spawnDelay < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 86, ASSERT_TYPE_ASSERT, "( 0 ) <= ( spawnDelay )", "%s <= %s\n\t%i, %i", "0", "spawnDelay", 0i64, spawnDelay) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 89, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( instigatorEntNum != clientNum )
    goto LABEL_17;
  if ( !CgWeaponMap::ms_instance[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v10], &LocalClientGlobals->predictedPlayerState) || LocalClientGlobals->renderingThirdPerson )
LABEL_17:
    v14 = 0;
  else
    v14 = 1;
  v15 = pstart->v[1];
  v16 = pstart->v[2];
  v17 = pend->v[0] - pstart->v[0];
  v21 = LODWORD(pend->v[1]);
  v18 = pend->v[1] - v15;
  v19 = pend->v[2] - v16;
  *(float *)&v21 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
  _XMM10 = v21;
  __asm
  {
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
  }
  v24 = v17 * (float)(1.0 / *(float *)&_XMM0);
  v25 = v18 * (float)(1.0 / *(float *)&_XMM0);
  v26 = v19 * (float)(1.0 / *(float *)&_XMM0);
  start.v[0] = pstart->v[0];
  start.v[1] = v15;
  start.v[2] = v16;
  if ( spawnDelay <= 0 )
  {
    if ( v14 )
    {
      v27 = DCONST_DVARFLT_tracer_muzzleOffsetViewmodel;
      if ( !DCONST_DVARFLT_tracer_muzzleOffsetViewmodel )
      {
        v28 = "tracer_muzzleOffsetViewmodel";
        goto LABEL_24;
      }
    }
    else
    {
      v27 = DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel;
      if ( !DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel )
      {
        v28 = "tracer_muzzleOffsetWorldmodel";
LABEL_24:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v28) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v27);
    *(float *)&_XMM10 = *(float *)&v21 - v27->current.value;
    v29 = (float)(v25 * COERCE_FLOAT(_XMM10 ^ _xmm)) + pend->v[1];
    start.v[0] = (float)(v24 * COERCE_FLOAT(_XMM10 ^ _xmm)) + pend->v[0];
    start.v[2] = (float)(v26 * COERCE_FLOAT(_XMM10 ^ _xmm)) + pend->v[2];
    start.v[1] = v29;
  }
  if ( *(float *)&_XMM10 <= 0.0 )
    return;
  LODWORD(v30) = weapon->weaponIdx;
  if ( (unsigned int)v30 > bg_lastParsedWeaponIndex )
  {
    LODWORD(v47) = bg_lastParsedWeaponIndex;
    LODWORD(v46) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v46, v47) )
      __debugbreak();
  }
  v30 = (unsigned __int16)v30;
  if ( !bg_weaponDefs[(unsigned __int16)v30] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v31 = bg_weaponDefs[v30];
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 114, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !v31->ignoreMinTracerSpawnDistance )
  {
    if ( v14 )
    {
      v32 = DCONST_DVARFLT_tracer_minimumTravelViewmodel;
      if ( DCONST_DVARFLT_tracer_minimumTravelViewmodel )
        goto LABEL_45;
      v33 = "tracer_minimumTravelViewmodel";
    }
    else
    {
      v32 = DCONST_DVARFLT_tracer_minimumTravelWorldmodel;
      if ( DCONST_DVARFLT_tracer_minimumTravelWorldmodel )
        goto LABEL_45;
      v33 = "tracer_minimumTravelWorldmodel";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v33) )
      __debugbreak();
LABEL_45:
    Dvar_CheckFrontendServerThread(v32);
    if ( *(float *)&_XMM10 < v32->current.value )
      return;
  }
  tracerDefault = BG_TracerType(*r_perks, weapon, isAlternate);
  if ( !tracerDefault )
  {
    WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
    Com_PrintWarning(17, "WARNING: Tracer_Spawn using default Tracer for weapon \"%s\".\n", WeaponName);
    tracerDefault = cgMedia.tracerDefault;
    if ( !cgMedia.tracerDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 141, (AssertType)(LODWORD(cgMedia.tracerDefault) + 1), "( tracerDef )", (const char *)&queryFormat, "tracerDef") )
      __debugbreak();
  }
  v36 = CG_AllocLocalEntity(localClientNum);
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 144, ASSERT_TYPE_SANITY, "( le )", (const char *)&queryFormat, "le") )
    __debugbreak();
  v36->leType = LE_MOVING_TRACER;
  v36->u.tracer.clipDist = *(float *)&_XMM10;
  LOBYTE(v11) = instigatorEntNum == clientNum;
  v36->u.tracer.isClientEmitter = v11;
  v36->u.tracer.length = tracerDefault->beamLength;
  v36->u.tracer.width = tracerDefault->beamWidth;
  v36->u.tracer.screwDist = tracerDefault->screwDist;
  v36->u.laser.cache.lastTrackedEntNum = LODWORD(tracerDefault->screwRadius);
  v36->u.tracer.bulletId = bulletId;
  v36->u.tracer.ballistics.isBallistic = 0;
  material = tracerDefault->material;
  v36->u.tracer.material = material;
  if ( !material && tracerDefault->drawLegacyTracer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 158, ASSERT_TYPE_SANITY, "( le->u.tracer.material || !tracerDef->drawLegacyTracer )", (const char *)&queryFormat, "le->u.tracer.material || !tracerDef->drawLegacyTracer") )
    __debugbreak();
  particleSystemDef = tracerDefault->effect.particleSystemDef;
  v36->u.tracer.particleSystemDef = particleSystemDef;
  if ( v14 )
  {
    if ( tracerDefault->viewmodelEffect.particleSystemDef )
      particleSystemDef = tracerDefault->viewmodelEffect.particleSystemDef;
    v36->u.tracer.particleSystemDef = particleSystemDef;
  }
  p_lastRenderTime = &v36->u.laser.cache.lastRenderTime;
  v36->u.tracer.drawLegacyTracer = tracerDefault->drawLegacyTracer;
  v40 = (char *)tracerDefault - (char *)v36;
  v41 = 5i64;
  do
  {
    *(p_lastRenderTime - 1) = *(int *)((char *)p_lastRenderTime + v40 - 140);
    *p_lastRenderTime = *(int *)((char *)p_lastRenderTime + v40 - 136);
    p_lastRenderTime[1] = *(int *)((char *)p_lastRenderTime + v40 - 132);
    p_lastRenderTime[2] = *(int *)((char *)p_lastRenderTime + v40 - 128);
    p_lastRenderTime += 4;
    --v41;
  }
  while ( v41 );
  if ( tracerDefault->speed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 173, ASSERT_TYPE_ASSERT, "(tracerDef->speed > 0.0f)", (const char *)&queryFormat, "tracerDef->speed > 0.0f") )
    __debugbreak();
  time = LocalClientGlobals->time;
  if ( tracerDefault->fadeOverTime )
  {
    v36->u.tracer.isInstantaneousBeam = 1;
    v43 = (int)(float)(tracerDefault->fadeTime * -1000.0);
  }
  else
  {
    v43 = (int)(float)((float)(*(float *)&_XMM10 + tracerDefault->beamLength) * (float)(-1000.0 / tracerDefault->speed));
    time += spawnDelay;
  }
  v36->endTime = time - v43;
  if ( v36->u.tracer.particleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 186, ASSERT_TYPE_ASSERT, "(le->u.tracer.particleSystem == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "le->u.tracer.particleSystem == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  v36->addTime = LocalClientGlobals->time;
  v36->pos.trType = TR_LINEAR;
  v36->pos.trTime = time;
  v36->pos.trBase = start;
  speed = tracerDefault->speed;
  v36->pos.trDelta.v[0] = v24 * speed;
  v36->pos.trDelta.v[2] = v26 * speed;
  v36->pos.trDelta.v[1] = v25 * speed;
  if ( ((LODWORD(v36->pos.trBase.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v36->pos.trBase.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v36->pos.trBase.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 193, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trBase )[0] ) && !IS_NAN( ( le->pos.trBase )[1] ) && !IS_NAN( ( le->pos.trBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trBase )[0] ) && !IS_NAN( ( le->pos.trBase )[1] ) && !IS_NAN( ( le->pos.trBase )[2] )") )
    __debugbreak();
  if ( ((LODWORD(v36->pos.trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v36->pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v36->pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 194, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] )") )
    __debugbreak();
  Tracer_Spawn_ApplyOverrides(localClientNum, instigatorEntNum, weapon, isAlternate, &v36->u.tracer);
  v45 = DVARBOOL_tracer_debugDraw;
  if ( !DVARBOOL_tracer_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_debugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  if ( v45->current.enabled )
    CG_DebugLine(&start, pend, &colorYellow, 0, 300);
}

/*
==============
Tracer_Spawn_ApplyOverrides
==============
*/
void Tracer_Spawn_ApplyOverrides(LocalClientNum_t localClientNum, const int instigatorEntNum, const Weapon *weapon, bool isAlternate, TracerInfo *tracer)
{
  __int64 v6; 
  __int64 v8; 
  CgStatic *v9; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  __int64 v15; 
  __int64 v16; 
  bitarray<64> perks; 

  v6 = instigatorEntNum;
  v8 = localClientNum;
  if ( (unsigned int)instigatorEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 36, ASSERT_TYPE_ASSERT, "(unsigned)( instigatorEntNum ) < (unsigned)( ( 2048 ) )", "instigatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", instigatorEntNum, 2048) )
    __debugbreak();
  if ( !tracer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 37, ASSERT_TYPE_ASSERT, "(tracer)", (const char *)&queryFormat, "tracer") )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType )
  {
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v16) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v16 = CgStatic::ms_allocatedCount;
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v8] )
  {
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v16) )
      __debugbreak();
  }
  v9 = CgStatic::ms_cgameStaticsArray[v8];
  Entity = CG_GetEntity((const LocalClientNum_t)v8, v6);
  if ( (Entity->flags & 1) == 0 || !BG_IsCharacterEntity(&Entity->nextState) )
    goto LABEL_30;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)v6 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v16) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
      LODWORD(v15) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v6);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v6);
  }
  if ( CharacterInfo && CharacterInfo->infoValid )
    perks = CharacterInfo->perks;
  else
LABEL_30:
    perks = 0i64;
  v13 = DVARBOOL_tracer_explosiveOverride;
  if ( !DVARBOOL_tracer_explosiveOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_explosiveOverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled && BG_WeaponBulletFire_ExplodeOnImpact(perks, weapon, isAlternate) )
  {
    Dvar_GetVec4_Internal_DebugName(DVARVEC4_tracer_explosiveColor1, "tracer_explosiveColor1", tracer->colors);
    Dvar_GetVec4_Internal_DebugName(DVARVEC4_tracer_explosiveColor2, "tracer_explosiveColor2", &tracer->colors[1]);
    Dvar_GetVec4_Internal_DebugName(DVARVEC4_tracer_explosiveColor3, "tracer_explosiveColor3", &tracer->colors[2]);
    Dvar_GetVec4_Internal_DebugName(DVARVEC4_tracer_explosiveColor4, "tracer_explosiveColor4", &tracer->colors[3]);
    Dvar_GetVec4_Internal_DebugName(DVARVEC4_tracer_explosiveColor5, "tracer_explosiveColor5", &tracer->colors[4]);
    v14 = DVARFLT_tracer_explosiveWidth;
    if ( !DVARFLT_tracer_explosiveWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_explosiveWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    LODWORD(tracer->width) = v14->current.integer;
  }
}

