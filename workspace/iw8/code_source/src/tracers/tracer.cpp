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

void __fastcall Tracer_Draw_Legacy(const vec3_t *start, const vec3_t *finish, const vec3_t *dir, double alphaScale, const TracerDrawFlags drawFlags, TracerInfo *const tracer)
{
  const dvar_t *v27; 
  bool v28; 
  bool v29; 
  const dvar_t *v48; 
  char v49; 
  bool v50; 
  Material *tracerThermalOverrideMat; 
  unsigned __int8 v62; 
  __int64 v78; 
  double v79; 
  FxBeam beam; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm5, xmm0, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm1, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+8]
  }
  _RBX = tracer;
  _R14 = finish;
  __asm
  {
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm5, xmm5
    vmovaps xmm9, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vcvtss2sd xmm1, xmm2, xmm2
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  _RSI = start;
  if ( (unsigned __int64)&v78 != _security_cookie )
  {
    v27 = DVARBOOL_tracer_debugDraw;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
    }
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_debugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled )
      CG_DebugLine(_RSI, _R14, &colorRed, 1, 1);
    v28 = tracer == NULL;
    if ( !tracer )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 234, ASSERT_TYPE_ASSERT, "(tracer)", (const char *)&queryFormat, "tracer");
      v28 = !v29;
      if ( v29 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  xmm2, dword ptr [r14]
      vmovss  xmm1, dword ptr [r14+8]
      vmovss  xmm4, dword ptr [rsi+4]
      vmovss  xmm3, dword ptr [rsi+8]
      vmovss  xmm5, dword ptr [rsi]
      vmovss  dword ptr [rsp+140h+beam.end], xmm2
      vsubss  xmm2, xmm2, xmm5
      vmovss  dword ptr [rsp+140h+beam.end+4], xmm0
      vsubss  xmm0, xmm0, xmm4
      vmovss  dword ptr [rsp+140h+beam.end+8], xmm1
      vmovss  dword ptr [rsp+140h+beam.begin+8], xmm3
      vsubss  xmm3, xmm1, xmm3
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm8, xmm2, xmm2
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm8, xmm7
      vmovss  dword ptr [rsp+140h+beam.begin], xmm5
      vmovss  dword ptr [rsp+140h+beam.begin+4], xmm4
    }
    *(_WORD *)&beam.type = 0;
    if ( v28 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm8, xmm8
        vmovsd  [rsp+140h+var_118], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 243, ASSERT_TYPE_SANITY, "( ( length > 0.f ) )", "( length ) = %g", v79) )
        __debugbreak();
    }
    __asm { vmovss  xmm6, dword ptr [rbx+74h] }
    if ( (drawFlags & 1) != 0 )
    {
      v48 = DVARFLT_tracer_thermalWidthMult;
      if ( !DVARFLT_tracer_thermalWidthMult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_thermalWidthMult") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v48);
      __asm { vmulss  xmm6, xmm6, dword ptr [rdi+28h] }
    }
    v49 = 0;
    v50 = tracer->isClientEmitter == 0;
    if ( tracer->isClientEmitter )
    {
      _RDI = DVARFLT_tracer_firstPersonMaxWidth;
      if ( !DVARFLT_tracer_firstPersonMaxWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_firstPersonMaxWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vminss  xmm6, xmm0, xmm6
      }
    }
    __asm { vcomiss xmm6, xmm7 }
    if ( v49 | v50 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+140h+var_118], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 257, ASSERT_TYPE_SANITY, "( ( width > 0.f ) )", "( width ) = %g", v79) )
        __debugbreak();
    }
    tracerThermalOverrideMat = cgMedia.tracerThermalOverrideMat;
    __asm
    {
      vmovss  [rsp+140h+beam.radius], xmm6
      vmovaps xmm6, [rsp+140h+var_48+8]
    }
    if ( (drawFlags & 1) == 0 )
      tracerThermalOverrideMat = tracer->material;
    beam.material = tracerThermalOverrideMat;
    if ( !tracerThermalOverrideMat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 263, ASSERT_TYPE_SANITY, "( beam.material )", (const char *)&queryFormat, "beam.material") )
      __debugbreak();
    __asm
    {
      vcomiss xmm7, dword ptr [rbx+78h]
      vmovaps xmm7, [rsp+140h+var_58+8]
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 265, ASSERT_TYPE_ASSERT, "(tracer->screwDist > 0.0f)", (const char *)&queryFormat, "tracer->screwDist > 0.0f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@41000000
      vdivss  xmm1, xmm0, dword ptr [rbx+78h]
      vmulss  xmm2, xmm1, xmm8
      vmovaps xmm8, [rsp+140h+var_68+8]
      vcvttss2si eax, xmm2
    }
    if ( _EAX > 255 )
      _EAX = 255;
    v62 = _EAX;
    if ( _EAX < 1 )
      v62 = 1;
    beam.segmentCount = v62;
    if ( !v62 )
    {
      LODWORD(v79) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 268, ASSERT_TYPE_SANITY, "( ( beam.segmentCount > 0 ) )", "( beam.segmentCount ) = %i", v79) )
        __debugbreak();
    }
    v28 = tracer->isClientEmitter == 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+7Ch]
      vmovss  dword ptr [rbp+40h+beam.___u9], xmm0
    }
    if ( !v28 )
    {
      _RDI = DVARFLT_tracer_firstPersonMaxScrewRadius;
      if ( !DVARFLT_tracer_firstPersonMaxScrewRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_firstPersonMaxScrewRadius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vminss  xmm1, xmm0, dword ptr [rbp+40h+beam.___u9]
        vmovss  dword ptr [rbp+40h+beam.___u9], xmm1
      }
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+80h]
      vmovups ymm3, ymmword ptr [rbx+0A0h]
      vmovups xmm4, xmmword ptr [rbx+0C0h]
      vmovups ymmword ptr [rsp+140h+beam.colors], ymm0
      vmulss  xmm2, xmm9, dword ptr [rsp+140h+beam.colors+1Ch]
      vmovups ymmword ptr [rbp+40h+beam.colors+20h], ymm3
      vshufps xmm0, xmm0, xmm0, 0FFh
      vmulss  xmm0, xmm0, xmm9
      vmovss  dword ptr [rsp+140h+beam.colors+0Ch], xmm0
      vmovups xmmword ptr [rbp+40h+beam.colors+40h], xmm4
      vshufps xmm3, xmm3, xmm3, 0FFh
      vmulss  xmm0, xmm3, xmm9
      vshufps xmm4, xmm4, xmm4, 0FFh
      vmovss  dword ptr [rbp+40h+beam.colors+2Ch], xmm0
      vmovss  dword ptr [rsp+140h+beam.colors+1Ch], xmm2
      vmulss  xmm2, xmm9, dword ptr [rbp+40h+beam.colors+3Ch]
      vmulss  xmm0, xmm4, xmm9
      vmovss  dword ptr [rbp+40h+beam.colors+4Ch], xmm0
      vmovss  dword ptr [rbp+40h+beam.colors+3Ch], xmm2
    }
    FX_Beam_Add(&beam);
  }
  __asm { vmovaps xmm9, [rsp+140h+var_78+8] }
}

/*
==============
Tracer_Draw_ParticleSystem
==============
*/
void Tracer_Draw_ParticleSystem(const vec3_t *start, const vec3_t *finish, const vec3_t *dir, const float alphaScale, const TracerDrawFlags drawFlags, TracerInfo *const tracer, void *data)
{
  __int64 v10; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle v53; 
  unsigned int v54; 
  ParticleSystem *v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  unsigned __int32 v59; 
  __int64 v61; 
  __int128 v130; 
  __int128 v131; 
  __int128 v132; 
  __int128 v133; 
  __int128 v134; 
  __int128 v135; 
  __int128 v136; 
  __int128 v137; 
  __int128 v138; 
  vec3_t forward; 
  vec3_t left; 
  vec3_t up; 
  char emitterOrientationMat[64]; 
  float4 emitterPos; 
  float4 endPos; 
  float4 startPos; 

  _RSI = finish;
  _R13 = start;
  if ( !tracer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 293, ASSERT_TYPE_ASSERT, "(tracer)", (const char *)&queryFormat, "tracer") )
    __debugbreak();
  if ( !tracer->particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 294, ASSERT_TYPE_ASSERT, "(tracer->particleSystemDef != nullptr)", (const char *)&queryFormat, "tracer->particleSystemDef != nullptr") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 295, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( *((_BYTE *)data + 301138) )
  {
    v10 = *((int *)data + 75283);
    if ( (drawFlags & 2) == 0 && tracer->particleSystem == PARTICLE_SYSTEM_INVALID_HANDLE )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0]
        vmovss  xmm2, dword ptr [rsi]
        vmovss  xmm4, dword ptr [rsi+4]
        vmovss  xmm5, dword ptr [rsi+8]
      }
      HIDWORD(v130) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+60h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r13+4], 10h
        vinsertps xmm3, xmm3, dword ptr [r13+8], 20h ; ' '
        vmovups xmmword ptr [rsp+60h], xmm3
      }
      HIDWORD(v131) = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+60h]
        vmovss  xmm0, xmm0, xmm2
        vinsertps xmm0, xmm0, xmm4, 10h
        vinsertps xmm0, xmm0, xmm5, 20h ; ' '
        vmovups xmmword ptr [rsp+60h], xmm0
        vmovups xmmword ptr [rsp+158h+endPos.v], xmm0
        vmovdqa xmmword ptr [rsp+158h+emitterPos.v], xmm0
        vmovups xmmword ptr [rsp+158h+startPos.v], xmm3
      }
      if ( tracer->isInstantaneousBeam )
      {
        __asm
        {
          vmovups ymm1, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B+20h; tmat44_t<vec4_t> const identityMatrix44
          vmovdqa xmmword ptr [rsp+158h+emitterPos.v], xmm3
          vmovups ymm3, ymmword ptr cs:?identityMatrix44@@3T?$tmat44_t@Tvec4_t@@@@B; tmat44_t<vec4_t> const identityMatrix44
          vmovups ymmword ptr [rsp+158h+emitterOrientationMat], ymm3
          vmovups ymmword ptr [rsp+158h+emitterOrientationMat+20h], ymm1
        }
      }
      else
      {
        _RAX = dir;
        __asm
        {
          vmovss  [rsp+158h+var_C4], xmm2
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  dword ptr [rsp+158h+forward], xmm0
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  dword ptr [rsp+158h+forward+8], xmm0
          vmovss  dword ptr [rsp+158h+forward+4], xmm1
          vmovss  [rsp+158h+var_C0], xmm4
          vmovss  [rsp+158h+var_BC], xmm5
        }
        Vec3Basis_RightHanded(&forward, &left, &up);
        __asm { vmovss  xmm0, dword ptr [rsp+158h+forward] }
        HIDWORD(v130) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+60h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+forward+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+forward+8], arg_18
          vmovss  xmm0, dword ptr [rsp+158h+left]
          vmovups xmmword ptr [rsp+60h], xmm3
          vmovups xmmword ptr [rsp+158h+emitterOrientationMat], xmm3
        }
        HIDWORD(v132) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+60h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+left+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+left+8], arg_18
          vmovss  xmm0, dword ptr [rsp+158h+up]
          vmovups xmmword ptr [rsp+60h], xmm3
          vmovups xmmword ptr [rsp+158h+emitterOrientationMat+10h], xmm3
        }
        HIDWORD(v133) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+60h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+up+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rsp+158h+up+8], arg_18
          vmovss  xmm0, [rsp+158h+var_C4]
          vmovups xmmword ptr [rsp+60h], xmm3
          vmovups xmmword ptr [rsp+158h+emitterOrientationMat+20h], xmm3
        }
        HIDWORD(v134) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+60h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, [rsp+158h+var_C0], 10h
          vinsertps xmm3, xmm3, [rsp+158h+var_BC], arg_18
          vxorps  xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
          vxorps  xmm2, xmm1, xmm3
          vmovups xmmword ptr [rsp+158h+emitterOrientationMat+30h], xmm2
          vmovups xmmword ptr [rsp+60h], xmm3
        }
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
      v53 = ParticleManager::AddSystem((ParticleManager *)data, (LocalClientNum_t)v10, tracer->particleSystemDef, &emitterPos, (const vector3 *)emitterOrientationMat, LocalClientGlobals->time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
      tracer->particleSystem = v53;
      if ( tracer->isInstantaneousBeam )
      {
        v54 = v53 & 0xFFF;
        v55 = NULL;
        if ( g_particleSystemsGeneration[4096 * v10 + (v53 & 0xFFF)].__all32 != v53 )
          v54 = 0;
        v56 = (v10 << 12) + v54;
        if ( g_particleSystems[0][v56] >= (ParticleSystem *)0x1000 )
          v55 = g_particleSystems[0][v56];
        if ( v55 )
          ParticleSystem::SetBeamPos(v55, &startPos, &endPos);
      }
    }
    v57 = v10 << 12;
    v58 = (v10 << 12) + (tracer->particleSystem & 0xFFF);
    v59 = 0;
    _R12 = NULL;
    if ( g_particleSystemsGeneration[v58].__all32 == tracer->particleSystem )
      v59 = tracer->particleSystem & 0xFFF;
    v61 = v57 + v59;
    if ( g_particleSystems[0][v61] >= (ParticleSystem *)0x1000 )
      _R12 = g_particleSystems[0][v61];
    if ( _R12 && !tracer->isInstantaneousBeam )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovaps [rsp+158h+var_38], xmm6
      }
      HIDWORD(v130) = 0;
      __asm
      {
        vmovups xmm6, xmmword ptr [rsp+60h]
        vmovss  xmm6, xmm6, xmm0
        vinsertps xmm6, xmm6, dword ptr [rsi+4], 10h
        vinsertps xmm6, xmm6, dword ptr [rsi+8], 20h ; ' '
        vmovups xmmword ptr [rsp+60h], xmm6
      }
      if ( (drawFlags & 2) != 0 )
      {
        __asm
        {
          vsubps  xmm1, xmm6, xmmword ptr [r12+30h]
          vmulps  xmm2, xmm1, xmm1
          vinsertps xmm0, xmm2, xmm2, 8
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm2, xmm1, xmm1
          vcomiss xmm2, cs:stopThresholdSq
        }
      }
      _RAX = dir;
      __asm
      {
        vmovups xmmword ptr [r12+30h], xmm6
        vmovups xmm1, xmmword ptr [r12+20h]
        vshufps xmm4, xmm1, xmmword ptr [r12+30h], 44h ; 'D'
        vshufps xmm5, xmm1, xmmword ptr [r12+30h], 0EEh ; 'î'
        vmovups xmm3, xmmword ptr [r12]
        vshufps xmm6, xmm3, xmmword ptr [r12+10h], 44h ; 'D'
        vshufps xmm2, xmm3, xmmword ptr [r12+10h], 0EEh ; 'î'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat], xmm0
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+10h], xmm1
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+20h], xmm0
        vmovups ymm0, ymmword ptr [rsp+158h+emitterOrientationMat]
        vmovups ymmword ptr [r12+40h], ymm0
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+30h], xmm1
        vmovups ymm1, ymmword ptr [rsp+158h+emitterOrientationMat+20h]
        vmovups ymmword ptr [r12+60h], ymm1
        vmovss  xmm0, dword ptr [rax]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  dword ptr [rsp+158h+forward], xmm0
        vmovss  xmm0, dword ptr [rax+8]
        vmovss  dword ptr [rsp+158h+forward+4], xmm1
        vmovss  xmm1, dword ptr [rsi]
        vmovss  dword ptr [rsp+158h+forward+8], xmm0
        vmovss  xmm0, dword ptr [rsi+4]
        vmovss  [rsp+158h+var_C4], xmm1
        vmovss  xmm1, dword ptr [rsi+8]
        vmovss  [rsp+158h+var_C0], xmm0
        vmovss  [rsp+158h+var_BC], xmm1
      }
      Vec3Basis_RightHanded(&forward, &left, &up);
      __asm { vmovss  xmm0, dword ptr [rsp+158h+forward] }
      HIDWORD(v135) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+60h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+forward+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+forward+8], arg_18
        vmovss  xmm0, dword ptr [rsp+158h+left]
        vmovups xmmword ptr [rsp+60h], xmm3
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat], xmm3
      }
      HIDWORD(v136) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+60h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+left+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+left+8], arg_18
        vmovss  xmm0, dword ptr [rsp+158h+up]
        vmovups xmmword ptr [rsp+60h], xmm3
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+10h], xmm3
      }
      HIDWORD(v137) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+60h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+up+4], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+158h+up+8], arg_18
        vmovss  xmm0, [rsp+158h+var_C4]
        vmovups xmmword ptr [rsp+60h], xmm3
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+20h], xmm3
      }
      HIDWORD(v138) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+60h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, [rsp+158h+var_C0], 10h
        vinsertps xmm3, xmm3, [rsp+158h+var_BC], arg_18
        vxorps  xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vxorps  xmm2, xmm1, xmm3
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+30h], xmm2
      }
      Particle_AssertFloat4IsNormalized((const float4 *)emitterOrientationMat);
      Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat[16]);
      Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat[32]);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+158h+emitterOrientationMat]
        vmovups ymm1, ymmword ptr [rsp+158h+emitterOrientationMat+20h]
        vmovups ymmword ptr [r12], ymm0
        vmovups ymmword ptr [r12+20h], ymm1
        vmovups xmm1, xmmword ptr [r12+20h]
        vshufps xmm4, xmm1, xmmword ptr [r12+30h], 44h ; 'D'
        vshufps xmm5, xmm1, xmmword ptr [r12+30h], 0EEh ; 'î'
        vmovups xmm3, xmmword ptr [r12]
        vshufps xmm6, xmm3, xmmword ptr [r12+10h], 44h ; 'D'
        vshufps xmm2, xmm3, xmmword ptr [r12+10h], 0EEh ; 'î'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovaps xmm6, [rsp+158h+var_38]
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+10h], xmm1
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat], xmm0
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+20h], xmm0
        vmovups ymm0, ymmword ptr [rsp+158h+emitterOrientationMat]
        vmovups xmmword ptr [rsp+158h+emitterOrientationMat+30h], xmm1
        vmovups ymm1, ymmword ptr [rsp+158h+emitterOrientationMat+20h]
        vmovups ymmword ptr [r12+40h], ymm0
        vmovups ymmword ptr [r12+60h], ymm1
      }
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
  __int64 v19; 
  int v20; 
  cg_t *LocalClientGlobals; 
  int clientNum; 
  char v23; 
  char v47; 
  bool v48; 
  const char *v50; 
  __int64 v60; 
  WeaponDef *v61; 
  const char *v63; 
  const char *WeaponName; 
  Material *material; 
  const ParticleSystemDef *particleSystemDef; 
  int *p_lastRenderTime; 
  signed __int64 v71; 
  __int64 v72; 
  bool v73; 
  int time; 
  const dvar_t *v95; 
  __int64 v105; 
  __int64 v106; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  vec3_t start; 
  char output[1024]; 
  char v118; 
  void *retaddr; 

  _RAX = &retaddr;
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
  }
  _RDI = pstart;
  v19 = localClientNum;
  if ( (unsigned int)instigatorEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 85, ASSERT_TYPE_ASSERT, "(unsigned)( instigatorEntNum ) < (unsigned)( ( 2048 ) )", "instigatorEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", instigatorEntNum, 2048) )
    __debugbreak();
  v20 = 0;
  if ( spawnDelay < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 86, ASSERT_TYPE_ASSERT, "( 0 ) <= ( spawnDelay )", "%s <= %s\n\t%i, %i", "0", "spawnDelay", 0i64, spawnDelay) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v19);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 89, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( instigatorEntNum != clientNum )
    goto LABEL_17;
  if ( !CgWeaponMap::ms_instance[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v19], &LocalClientGlobals->predictedPlayerState) || LocalClientGlobals->renderingThirdPerson )
LABEL_17:
    v23 = 0;
  else
    v23 = 1;
  _RAX = pend;
  __asm
  {
    vmovss  xmm9, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm7, dword ptr [rdi+8]
    vsubss  xmm6, xmm0, xmm9
    vmovss  xmm0, dword ptr [rax+4]
    vsubss  xmm5, xmm0, xmm8
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm4, xmm0, xmm7
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm10, xmm2, xmm2
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm11, xmm6, xmm1
    vmulss  xmm12, xmm5, xmm1
    vmulss  xmm13, xmm4, xmm1
    vmovss  dword ptr [rsp+558h+start], xmm9
    vmovss  dword ptr [rsp+558h+start+4], xmm8
    vmovss  dword ptr [rsp+558h+start+8], xmm7
  }
  v47 = 0;
  v48 = spawnDelay == 0;
  if ( spawnDelay <= 0 )
  {
    if ( v23 )
    {
      _RBX = DCONST_DVARFLT_tracer_muzzleOffsetViewmodel;
      if ( !DCONST_DVARFLT_tracer_muzzleOffsetViewmodel )
      {
        v50 = "tracer_muzzleOffsetViewmodel";
        goto LABEL_24;
      }
    }
    else
    {
      _RBX = DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel;
      if ( !DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel )
      {
        v50 = "tracer_muzzleOffsetWorldmodel";
LABEL_24:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v50) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vsubss  xmm10, xmm10, xmm0
      vxorps  xmm3, xmm10, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm11, xmm3
      vaddss  xmm1, xmm0, dword ptr [rax]
      vmulss  xmm2, xmm12, xmm3
      vaddss  xmm0, xmm2, dword ptr [rax+4]
      vmovss  dword ptr [rsp+558h+start], xmm1
      vmulss  xmm1, xmm13, xmm3
      vaddss  xmm2, xmm1, dword ptr [rax+8]
      vmovss  dword ptr [rsp+558h+start+8], xmm2
      vmovss  dword ptr [rsp+558h+start+4], xmm0
    }
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm10, xmm6
  }
  if ( v47 | v48 )
    goto LABEL_87;
  LODWORD(v60) = weapon->weaponIdx;
  if ( (unsigned int)v60 > bg_lastParsedWeaponIndex )
  {
    LODWORD(v106) = bg_lastParsedWeaponIndex;
    LODWORD(v105) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v105, v106) )
      __debugbreak();
  }
  v60 = (unsigned __int16)v60;
  if ( !bg_weaponDefs[(unsigned __int16)v60] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v61 = bg_weaponDefs[v60];
  if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 114, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !v61->ignoreMinTracerSpawnDistance )
  {
    if ( v23 )
    {
      _RBX = DCONST_DVARFLT_tracer_minimumTravelViewmodel;
      if ( DCONST_DVARFLT_tracer_minimumTravelViewmodel )
        goto LABEL_45;
      v63 = "tracer_minimumTravelViewmodel";
    }
    else
    {
      _RBX = DCONST_DVARFLT_tracer_minimumTravelWorldmodel;
      if ( DCONST_DVARFLT_tracer_minimumTravelWorldmodel )
        goto LABEL_45;
      v63 = "tracer_minimumTravelWorldmodel";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v63) )
      __debugbreak();
LABEL_45:
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vcomiss xmm10, xmm0
    }
    if ( v47 )
      goto LABEL_87;
  }
  _RDI = BG_TracerType(*r_perks, weapon, isAlternate);
  if ( !_RDI )
  {
    WeaponName = BG_GetWeaponName(weapon, output, 0x400u);
    Com_PrintWarning(17, "WARNING: Tracer_Spawn using default Tracer for weapon \"%s\".\n", WeaponName);
    _RDI = cgMedia.tracerDefault;
    if ( !cgMedia.tracerDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 141, (AssertType)(LODWORD(cgMedia.tracerDefault) + 1), "( tracerDef )", (const char *)&queryFormat, "tracerDef") )
      __debugbreak();
  }
  _RBX = CG_AllocLocalEntity(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 144, ASSERT_TYPE_SANITY, "( le )", (const char *)&queryFormat, "le") )
    __debugbreak();
  _RBX->leType = LE_MOVING_TRACER;
  __asm { vmovss  dword ptr [rbx+0B4h], xmm10 }
  LOBYTE(v20) = instigatorEntNum == clientNum;
  _RBX->u.tracer.isClientEmitter = v20;
  _RBX->u.tracer.length = _RDI->beamLength;
  _RBX->u.tracer.width = _RDI->beamWidth;
  _RBX->u.tracer.screwDist = _RDI->screwDist;
  _RBX->u.laser.cache.lastTrackedEntNum = LODWORD(_RDI->screwRadius);
  _RBX->u.tracer.bulletId = bulletId;
  _RBX->u.tracer.ballistics.isBallistic = 0;
  material = _RDI->material;
  _RBX->u.tracer.material = material;
  if ( !material && _RDI->drawLegacyTracer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 158, ASSERT_TYPE_SANITY, "( le->u.tracer.material || !tracerDef->drawLegacyTracer )", (const char *)&queryFormat, "le->u.tracer.material || !tracerDef->drawLegacyTracer") )
    __debugbreak();
  particleSystemDef = _RDI->effect.particleSystemDef;
  _RBX->u.tracer.particleSystemDef = particleSystemDef;
  if ( v23 )
  {
    if ( _RDI->viewmodelEffect.particleSystemDef )
      particleSystemDef = _RDI->viewmodelEffect.particleSystemDef;
    _RBX->u.tracer.particleSystemDef = particleSystemDef;
  }
  p_lastRenderTime = &_RBX->u.laser.cache.lastRenderTime;
  _RBX->u.tracer.drawLegacyTracer = _RDI->drawLegacyTracer;
  v71 = (char *)_RDI - (char *)_RBX;
  v72 = 5i64;
  do
  {
    *(p_lastRenderTime - 1) = *(int *)((char *)p_lastRenderTime + v71 - 140);
    *p_lastRenderTime = *(int *)((char *)p_lastRenderTime + v71 - 136);
    p_lastRenderTime[1] = *(int *)((char *)p_lastRenderTime + v71 - 132);
    p_lastRenderTime[2] = *(int *)((char *)p_lastRenderTime + v71 - 128);
    p_lastRenderTime += 4;
    v73 = v72-- == 0;
  }
  while ( v72 );
  __asm { vcomiss xmm6, dword ptr [rdi+1Ch] }
  if ( !v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 173, ASSERT_TYPE_ASSERT, "(tracerDef->speed > 0.0f)", (const char *)&queryFormat, "tracerDef->speed > 0.0f") )
    __debugbreak();
  time = LocalClientGlobals->time;
  if ( _RDI->fadeOverTime )
  {
    _RBX->u.tracer.isInstantaneousBeam = 1;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+24h]
      vmulss  xmm1, xmm0, cs:__real@c47a0000
      vcvttss2si eax, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@c47a0000
      vdivss  xmm1, xmm0, dword ptr [rdi+1Ch]
      vaddss  xmm2, xmm10, dword ptr [rdi+30h]
      vmulss  xmm2, xmm2, xmm1
      vcvttss2si eax, xmm2
    }
    time += spawnDelay;
  }
  _RBX->endTime = time - _EAX;
  if ( _RBX->u.tracer.particleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 186, ASSERT_TYPE_ASSERT, "(le->u.tracer.particleSystem == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "le->u.tracer.particleSystem == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  _RBX->addTime = LocalClientGlobals->time;
  _RBX->pos.trType = TR_LINEAR;
  _RBX->pos.trTime = time;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+558h+start]
    vmovss  dword ptr [rbx+20h], xmm0
    vmovss  xmm1, dword ptr [rsp+558h+start+4]
    vmovss  dword ptr [rbx+24h], xmm1
    vmovss  xmm0, dword ptr [rsp+558h+start+8]
    vmovss  dword ptr [rbx+28h], xmm0
    vmovss  xmm2, dword ptr [rdi+1Ch]
    vmulss  xmm0, xmm11, xmm2
    vmovss  dword ptr [rbx+2Ch], xmm0
    vmulss  xmm1, xmm12, xmm2
    vmulss  xmm0, xmm13, xmm2
    vmovss  dword ptr [rbx+34h], xmm0
    vmovss  dword ptr [rbx+30h], xmm1
    vmovss  xmm1, dword ptr [rbx+20h]
    vmovss  [rsp+558h+var_508], xmm1
  }
  if ( (v108 & 0x7F800000) == 2139095040 )
    goto LABEL_90;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  [rsp+558h+var_508], xmm0
  }
  if ( (v109 & 0x7F800000) == 2139095040 )
    goto LABEL_90;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+558h+var_508], xmm0
  }
  if ( (v110 & 0x7F800000) == 2139095040 )
  {
LABEL_90:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 193, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trBase )[0] ) && !IS_NAN( ( le->pos.trBase )[1] ) && !IS_NAN( ( le->pos.trBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trBase )[0] ) && !IS_NAN( ( le->pos.trBase )[1] ) && !IS_NAN( ( le->pos.trBase )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovss  [rsp+558h+var_508], xmm0
  }
  if ( (v111 & 0x7F800000) == 2139095040 )
    goto LABEL_91;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  [rsp+558h+var_508], xmm0
  }
  if ( (v112 & 0x7F800000) == 2139095040 )
    goto LABEL_91;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+34h]
    vmovss  [rsp+558h+var_508], xmm0
  }
  if ( (v113 & 0x7F800000) == 2139095040 )
  {
LABEL_91:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\tracers\\tracer.cpp", 194, ASSERT_TYPE_SANITY, "( !IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( le->pos.trDelta )[0] ) && !IS_NAN( ( le->pos.trDelta )[1] ) && !IS_NAN( ( le->pos.trDelta )[2] )") )
      __debugbreak();
  }
  Tracer_Spawn_ApplyOverrides(localClientNum, instigatorEntNum, weapon, isAlternate, &_RBX->u.tracer);
  v95 = DVARBOOL_tracer_debugDraw;
  if ( !DVARBOOL_tracer_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "tracer_debugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v95);
  if ( v95->current.enabled )
    CG_DebugLine(&start, pend, &colorYellow, 0, 300);
LABEL_87:
  _R11 = &v118;
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
  }
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

