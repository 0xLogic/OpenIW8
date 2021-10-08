/*
==============
Turret_PlaceSentry_Internal
==============
*/

int __fastcall Turret_PlaceSentry_Internal(const turret_handler handler, const LocalClientNum_t clientNum, const int moverEntNum, const vec3_t *moverOrigin, const vec3_t *viewOrigin, const float viewHeightStand, const vec3_t *viewAngles, vec3_t *outOrigin, vec3_t *outAngles, int *placeEnt, float radius)
{
  return ?Turret_PlaceSentry_Internal@@YAHW4turret_handler@@W4LocalClientNum_t@@HAEBTvec3_t@@2M2AEAT3@3PEAHM@Z(handler, clientNum, moverEntNum, moverOrigin, viewOrigin, viewHeightStand, viewAngles, outOrigin, outAngles, placeEnt, radius);
}

/*
==============
Turret_PlaceSentry_Server
==============
*/

int __fastcall Turret_PlaceSentry_Server(const playerState_s *ps, vec3_t *outOrigin, vec3_t *outAngles, int *placeEnt, float radius)
{
  return ?Turret_PlaceSentry_Server@@YAHPEBUplayerState_s@@AEATvec3_t@@1PEAHM@Z(ps, outOrigin, outAngles, placeEnt, radius);
}

/*
==============
Turret_PlaceSentry_Client
==============
*/

void __fastcall Turret_PlaceSentry_Client(const LocalClientNum_t localClientNum, const entityState_t *es, vec3_t *outOrigin, vec3_t *outAngles, float radius)
{
  ?Turret_PlaceSentry_Client@@YAXW4LocalClientNum_t@@PEBUentityState_t@@AEATvec3_t@@2M@Z(localClientNum, es, outOrigin, outAngles, radius);
}

/*
==============
GetTurretWorldId
==============
*/

Physics_WorldId __fastcall GetTurretWorldId(const turret_handler handler, const LocalClientNum_t clientNum)
{
  return ?GetTurretWorldId@@YA?AW4Physics_WorldId@@W4turret_handler@@W4LocalClientNum_t@@@Z(handler, clientNum);
}

/*
==============
GetTurretWorldId
==============
*/
__int64 GetTurretWorldId(const turret_handler handler, const LocalClientNum_t clientNum)
{
  if ( handler == TURRET_HANDLER_CLIENT )
    return (unsigned int)(3 * clientNum + 2);
  if ( handler == TURRET_HANDLER_SERVER )
    return 0i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 55, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret handler") )
    __debugbreak();
  return 0xFFFFFFFFi64;
}

/*
==============
Turret_PlaceSentry_Client
==============
*/
void Turret_PlaceSentry_Client(const LocalClientNum_t localClientNum, const entityState_t *es, vec3_t *outOrigin, vec3_t *outAngles, float radius)
{
  __int64 v6; 
  unsigned int m_mapEntryId; 
  const SuitDef *SuitDef; 
  int v10; 
  CgStatic *v22; 
  centity_t *Entity; 
  entityType_s eType; 
  __int64 number; 
  cg_t *LocalClientGlobals; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 viewHeightStand; 
  float viewHeightStanda; 
  vec3_t *viewAngles; 
  float v54; 
  vec3_t viewOrigin; 
  vec3_t moverOrigin; 
  vec3_t *v57; 
  vec3_t *v58; 
  __int64 v59; 
  vec3_t v60; 

  v59 = -2i64;
  v57 = outAngles;
  v58 = outOrigin;
  *(_QWORD *)v60.v = es;
  v6 = localClientNum;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 380, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  m_mapEntryId = es->staticState.player.stowedWeaponHandle.m_mapEntryId;
  if ( m_mapEntryId != 2047 )
  {
    if ( (unsigned int)v6 >= LODWORD(cl_maxLocalClients) )
    {
      LODWORD(viewHeightStand) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", viewHeightStand, cl_maxLocalClients) )
        __debugbreak();
    }
    _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 389, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( m_mapEntryId >= ComCharacterLimits::ms_gameData.m_clientCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(viewAngles) = ComCharacterLimits::ms_gameData.m_clientCount;
      LODWORD(viewHeightStand) = m_mapEntryId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 392, ASSERT_TYPE_ASSERT, "(unsigned)( carrierEntNum ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "carrierEntNum doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", viewHeightStand, viewAngles) )
        __debugbreak();
    }
    SuitDef = BG_GetSuitDef(_RBX->predictedPlayerState.suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 395, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    if ( _RBX->renderingThirdPerson )
      goto LABEL_29;
    if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v6], &_RBX->predictedPlayerState) )
LABEL_29:
      v10 = 1;
    else
      v10 = 0;
    if ( m_mapEntryId == _RBX->predictedPlayerState.clientNum && !v10 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+38h]
        vmovss  dword ptr [rbp+4Fh+viewOrigin], xmm0
        vmovss  xmm1, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbp+4Fh+viewOrigin+4], xmm1
        vmovss  xmm2, dword ptr [rbx+40h]
        vmovss  dword ptr [rbp+4Fh+viewOrigin+8], xmm2
        vaddss  xmm0, xmm2, dword ptr [rbx+1F0h]
        vmovss  dword ptr [rbp+4Fh+viewOrigin+8], xmm0
        vmovss  xmm1, dword ptr [rbx+1E0h]
        vmovss  dword ptr [rbp+4Fh+var_58], xmm1
        vmovss  xmm0, dword ptr [rbx+1E4h]
        vmovss  dword ptr [rbp+4Fh+var_58+4], xmm0
        vmovss  xmm1, dword ptr [rbx+1E8h]
        vmovss  dword ptr [rbp+4Fh+var_58+8], xmm1
        vmovss  xmm0, dword ptr [rbx+38h]
        vmovss  dword ptr [rbp+4Fh+moverOrigin], xmm0
        vmovss  xmm1, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rbp+4Fh+moverOrigin+4], xmm1
        vmovss  xmm0, dword ptr [rbx+40h]
        vmovss  dword ptr [rbp+4Fh+moverOrigin+8], xmm0
      }
LABEL_74:
      CG_EntityWorkers_AcquireReadLock_Physics(BASE);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [r12+200h]
        vmovss  xmm0, [rbp+4Fh+radius]
        vmovss  [rsp+0F0h+var_A0], xmm0
        vmovss  [rsp+0F0h+viewHeightStand], xmm1
      }
      Turret_PlaceSentry_Internal(TURRET_HANDLER_CLIENT, (const LocalClientNum_t)v6, m_mapEntryId, &moverOrigin, &viewOrigin, viewHeightStanda, &v60, v58, v57, NULL, v54);
      CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
      goto LABEL_78;
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING|0x80) )
    {
      if ( !(_BYTE)CgStatic::ms_allocatedType )
      {
        LODWORD(viewAngles) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", viewAngles) )
          __debugbreak();
      }
      if ( (unsigned int)v6 >= LODWORD(CgStatic::ms_allocatedCount) )
      {
        *(float *)&viewAngles = CgStatic::ms_allocatedCount;
        LODWORD(viewHeightStand) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", viewHeightStand, viewAngles) )
          __debugbreak();
      }
      if ( !CgStatic::ms_cgameStaticsArray[v6] )
      {
        LODWORD(viewAngles) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", viewAngles) )
          __debugbreak();
      }
      v22 = CgStatic::ms_cgameStaticsArray[v6];
      Entity = CG_GetEntity((const LocalClientNum_t)v6, m_mapEntryId);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 416, ASSERT_TYPE_SANITY, "( carrierEnt )", (const char *)&queryFormat, "carrierEnt") )
        __debugbreak();
      if ( (Entity->flags & 1) == 0 )
        goto LABEL_75;
      if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = Entity->nextState.eType;
      if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
        goto LABEL_75;
      number = Entity->nextState.number;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v22->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)number >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(viewAngles) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(viewHeightStand) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", viewHeightStand, viewAngles) )
            __debugbreak();
        }
        _RAX = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * number);
      }
      else
      {
        _RAX = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, number);
      }
      if ( !_RAX || !_RAX->infoValid )
      {
LABEL_75:
        Com_Printf(17, "Sentry [%d] is being carried but the client info [%d] is invalid! If there was a client disconnect then script should ensure that this doesn't happen - otherwise this is OK for one frame.\n", (unsigned int)(__int16)**(_WORD **)v60.v, m_mapEntryId);
        goto LABEL_78;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rax+9C0h]
        vmovss  dword ptr [rbp+4Fh+var_58], xmm0
        vmovss  xmm1, dword ptr [rax+9C4h]
        vmovss  dword ptr [rbp+4Fh+var_58+4], xmm1
        vmovss  xmm0, dword ptr [rax+9C8h]
        vmovss  dword ptr [rbp+4Fh+var_58+8], xmm0
      }
      if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
      FunctionPointer_origin(&Entity->pose.origin.origin.origin, &moverOrigin);
      if ( Entity->pose.isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, dword ptr [rbp+4Fh+moverOrigin]
          vcvtdq2pd xmm0, xmm0
          vmovsd  xmm3, cs:__real@3f30000000000000
          vmulsd  xmm0, xmm0, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rbp+4Fh+moverOrigin], xmm1
          vmovd   xmm2, dword ptr [rbp+4Fh+moverOrigin+4]
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rbp+4Fh+moverOrigin+4], xmm1
          vmovd   xmm2, dword ptr [rbp+4Fh+moverOrigin+8]
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rbp+4Fh+moverOrigin+8], xmm1
        }
      }
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+4Fh+moverOrigin]
        vmovsd  qword ptr [rbp+4Fh+viewOrigin], xmm0
      }
      viewOrigin.v[2] = moverOrigin.v[2];
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 4u) )
      {
        BG_Suit_GetProneViewHeight(SuitDef);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
        }
      }
      else
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 3u) )
          __asm { vcvtsi2ss xmm1, xmm1, dword ptr [r12+204h] }
        else
          __asm { vcvtsi2ss xmm1, xmm1, dword ptr [r12+200h] }
      }
      __asm
      {
        vaddss  xmm1, xmm1, dword ptr [rbp+4Fh+viewOrigin+8]
        vmovss  dword ptr [rbp+4Fh+viewOrigin+8], xmm1
      }
      goto LABEL_74;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 450, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Shouldn't get here without running online CoOp at this point!") )
      __debugbreak();
  }
LABEL_78:
  memset(&viewOrigin, 0, sizeof(viewOrigin));
  memset(&moverOrigin, 0, sizeof(moverOrigin));
}

/*
==============
Turret_PlaceSentry_Internal
==============
*/
__int64 Turret_PlaceSentry_Internal(const turret_handler handler, const LocalClientNum_t clientNum, const int moverEntNum, const vec3_t *moverOrigin, const vec3_t *viewOrigin, const float viewHeightStand, const vec3_t *viewAngles, vec3_t *outOrigin, vec3_t *outAngles, int *placeEnt, float radius)
{
  const vec3_t *v19; 
  __int32 v25; 
  const dvar_t *v28; 
  const dvar_t *v36; 
  const dvar_t *v48; 
  bool v52; 
  char v67; 
  __int64 v70; 
  entityType_s eType; 
  __int64 result; 
  __int64 skipEntity; 
  __int64 skipChildren; 
  vec3_t v96; 
  vec3_t origin; 
  vec3_t forward; 
  vec3_t end; 
  Bounds bounds; 
  tmat33_t<vec3_t> v1; 
  vec3_t angles; 
  trace_t results; 
  trace_t trace; 
  char v105; 
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
  }
  v19 = viewAngles;
  __asm { vmovss  xmm11, [rbp+170h+viewHeightStand] }
  _RDI = outOrigin;
  if ( (unsigned int)moverEntNum >= level.maxclients )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( moverEntNum ) < (unsigned)( level.maxclients )", "moverEntNum doesn't index level.maxclients\n\t%i not in [0, %i)", moverEntNum, level.maxclients) )
      __debugbreak();
    v19 = viewAngles;
  }
  if ( placeEnt )
    *placeEnt = 2047;
  __asm { vmovss  xmm8, [rbp+170h+radius] }
  *(_QWORD *)outAngles->v = 0i64;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm8, xmm10
  }
  *(_QWORD *)&outAngles->y = LODWORD(v19->v[1]);
  if ( handler )
  {
    if ( handler == TURRET_HANDLER_SERVER )
    {
      v25 = 0;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 55, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret handler") )
        __debugbreak();
      v25 = -1;
    }
  }
  else
  {
    v25 = 3 * clientNum + 2;
  }
  _RBX = DVARFLT_sentry_placement_trace_dist;
  if ( !DVARFLT_sentry_placement_trace_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_trace_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v28 = DVARFLT_sentry_placement_trace_radius_canon_safety;
  if ( !DVARFLT_sentry_placement_trace_radius_canon_safety && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_trace_radius_canon_safety") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  __asm { vaddss  xmm9, xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_sentry_placement_trace_pitch;
  if ( !DVARFLT_sentry_placement_trace_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_trace_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RAX = viewAngles;
  __asm
  {
    vmovss  dword ptr [rbp+170h+angles], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rbp+170h+angles+4], xmm1
    vmovss  dword ptr [rbp+170h+angles+8], xmm10
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmulss  xmm0, xmm9, dword ptr [rbp+170h+forward]
    vmulss  xmm1, xmm9, dword ptr [rbp+170h+forward+8]
  }
  v36 = DVARBOOL_sentry_placement_debug;
  __asm
  {
    vaddss  xmm6, xmm0, dword ptr [rax]
    vaddss  xmm2, xmm11, dword ptr [rax+8]
    vmulss  xmm0, xmm9, dword ptr [rbp+170h+forward+4]
    vaddss  xmm4, xmm0, dword ptr [rax+4]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm8, dword ptr [rbp+170h+forward]
    vsubss  xmm0, xmm3, xmm11
    vmovss  dword ptr [rbp+170h+var_1F0+8], xmm0
    vmulss  xmm0, xmm8, dword ptr [rbp+170h+forward+4]
    vaddss  xmm2, xmm1, xmm6
    vaddss  xmm1, xmm0, xmm4
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rbp+170h+bounds.midPoint], xmm0
    vmovss  dword ptr [rbp+170h+origin], xmm6
    vmovss  dword ptr [rbp+170h+origin+4], xmm4
    vmovss  dword ptr [rbp+170h+origin+8], xmm3
    vmovss  dword ptr [rbp+170h+var_1F0], xmm6
    vmovss  dword ptr [rbp+170h+var_1F0+4], xmm4
    vmovss  dword ptr [rbp+170h+end], xmm2
    vmovss  dword ptr [rbp+170h+end+4], xmm1
    vmovss  dword ptr [rbp+170h+end+8], xmm3
    vmovss  dword ptr [rbp+170h+bounds.halfSize+4], xmm10
    vmovss  dword ptr [rbp+170h+bounds.halfSize+8], xmm10
  }
  if ( !DVARBOOL_sentry_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  if ( v36->current.enabled )
    G_DebugLine(viewOrigin, &end, &colorBlue, 0);
  PhysicsQuery_LegacyTrace((Physics_WorldId)v25, &results, viewOrigin, &end, &bounds, moverEntNum, 1, 33636369, 0, NULL, All);
  if ( *(_WORD *)&results.allsolid || Trace_GetEntityHitId(&results) != 2047 )
  {
    _R9 = moverOrigin;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+170h+origin]
      vmovss  xmm1, dword ptr [rbp+170h+origin+4]
      vmovss  xmm2, dword ptr [r9+8]
      vmovss  dword ptr [rdi+8], xmm2
      vmovss  dword ptr [rdi], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
    goto LABEL_75;
  }
  v48 = DVARBOOL_sentry_placement_debug;
  __asm
  {
    vmovss  dword ptr [rbp+170h+bounds.halfSize], xmm8
    vmovss  dword ptr [rbp+170h+bounds.halfSize+4], xmm8
    vmovss  dword ptr [rbp+170h+bounds.halfSize+8], xmm8
  }
  if ( !DVARBOOL_sentry_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  if ( v48->current.enabled )
  {
    G_DebugLine(&origin, &v96, &colorBlue, 0);
    _RBX = viewAngles;
    __asm { vmovss  xmm2, dword ptr [rbx+4]; yaw }
    G_DebugBox(&origin, &bounds, *(float *)&_XMM2, &colorYellow, 0, 0);
    __asm { vmovss  xmm2, dword ptr [rbx+4]; yaw }
    G_DebugBox(&v96, &bounds, *(float *)&_XMM2, &colorGreen, 0, 0);
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)v25, &results, &origin, &v96, &bounds, moverEntNum, 1, 33636369, 0, NULL, All);
  v52 = !results.startsolid;
  __asm
  {
    vmovss  xmm5, [rbp+170h+results.fraction]
    vmovss  xmm0, dword ptr [rbp+170h+var_1F0]
    vsubss  xmm1, xmm0, dword ptr [rbp+170h+origin]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [rbp+170h+origin]
    vmovss  xmm1, dword ptr [rbp+170h+var_1F0+4]
    vmovss  dword ptr [rdi], xmm0
    vsubss  xmm0, xmm1, dword ptr [rbp+170h+origin+4]
    vmulss  xmm2, xmm0, xmm5
    vaddss  xmm3, xmm2, dword ptr [rbp+170h+origin+4]
    vmovss  xmm0, dword ptr [rbp+170h+var_1F0+8]
    vsubss  xmm1, xmm0, dword ptr [rbp+170h+origin+8]
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbp+170h+origin+8]
    vmovss  dword ptr [rdi+8], xmm3
  }
  if ( !v52 )
    goto LABEL_73;
  if ( results.allsolid )
    goto LABEL_73;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_sentry_placement_trace_min_normal, "sentry_placement_trace_min_normal");
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+170h+results.normal+8]
    vcomiss xmm1, xmm0
  }
  if ( v67 )
  {
LABEL_73:
    outOrigin->v[2] = moverOrigin->v[2];
LABEL_75:
    result = 0i64;
    goto LABEL_76;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rdi+8], xmm1
  }
  LOWORD(v70) = Trace_GetEntityHitId(&results);
  if ( (unsigned __int16)v70 >= 0x800u )
  {
    LODWORD(skipChildren) = 2048;
    LODWORD(skipEntity) = (unsigned __int16)v70;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 306, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntId ) < (unsigned)( ( 2048 ) )", "hitEntId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntity, skipChildren) )
      __debugbreak();
  }
  if ( (_WORD)v70 == 2046 )
  {
    if ( placeEnt )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+170h+var_1F0+8]
        vaddss  xmm1, xmm0, cs:__real@c1a00000
        vmovss  dword ptr [rbp+170h+var_1F0+8], xmm1
      }
      PhysicsQuery_LegacyTrace((Physics_WorldId)v25, &trace, &origin, &v96, &bounds_origin, moverEntNum, 1, 33636369, 0, NULL, All);
      LODWORD(v70) = Trace_GetEntityHitId(&trace);
      if ( BGMovingPlatforms::IsMovingPlatform(v70) )
LABEL_69:
        *placeEnt = v70;
    }
  }
  else
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING|0x80) )
    {
      if ( !placeEnt )
        goto LABEL_75;
      LODWORD(v70) = (unsigned __int16)v70;
      if ( !BGMovingPlatforms::IsMovingPlatform((unsigned __int16)v70) )
        goto LABEL_75;
      goto LABEL_69;
    }
    if ( (_WORD)v70 == 2047 )
      goto LABEL_75;
    v70 = (unsigned __int16)v70;
    if ( (unsigned int)handler >= TURRET_HANDLER_COUNT )
    {
      LODWORD(skipChildren) = 2;
      LODWORD(skipEntity) = handler;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( handler ) < (unsigned)( TURRET_HANDLER_COUNT )", "handler doesn't index TURRET_HANDLER_COUNT\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    if ( (unsigned int)v70 >= 0x800 )
    {
      LODWORD(skipChildren) = 2048;
      LODWORD(skipEntity) = v70;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 84, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntity, skipChildren) )
        __debugbreak();
    }
    if ( handler == TURRET_HANDLER_SERVER )
    {
      eType = g_entities[v70].s.eType;
    }
    else
    {
      if ( handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 93, ASSERT_TYPE_ASSERT, "(handler == TURRET_HANDLER_CLIENT)", (const char *)&queryFormat, "handler == TURRET_HANDLER_CLIENT") )
        __debugbreak();
      if ( clientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 94, ASSERT_TYPE_ASSERT, "(clientNum != -1)", (const char *)&queryFormat, "clientNum != CLIENTNUM_NONE") )
        __debugbreak();
      if ( (unsigned int)clientNum >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&skipChildren = cl_maxLocalClients;
        LODWORD(skipEntity) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 95, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( (cl_maxLocalClients) )", "clientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", skipEntity, skipChildren) )
          __debugbreak();
      }
      eType = CG_GetEntity(clientNum, v70)->nextState.eType;
    }
    if ( eType != ET_SCRIPTMOVER )
      goto LABEL_75;
  }
  if ( Trace_GetGlassHitId(&results) )
    goto LABEL_75;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+170h+forward]
    vmovss  xmm1, dword ptr [rbp+170h+forward+4]
    vmovss  dword ptr [rbp+170h+v1], xmm0
    vmovss  xmm0, dword ptr [rbp+170h+forward+8]
    vmovss  dword ptr [rbp+170h+v1+4], xmm1
    vmovss  xmm1, dword ptr [rbp+170h+results.normal]
    vmovss  dword ptr [rbp+170h+v1+8], xmm0
    vmovss  xmm0, dword ptr [rbp+170h+results.normal+4]
    vmovss  dword ptr [rbp+170h+v0], xmm1
    vmovss  xmm1, dword ptr [rbp+170h+results.normal+8]
    vmovss  dword ptr [rbp+170h+v0+4], xmm0
    vmovss  dword ptr [rbp+170h+v0+8], xmm1
  }
  Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
  Vec3Cross(&v1.m[1], &v1.m[2], v1.m);
  AxisToAngles(&v1, outAngles);
  if ( !Turret_PlaceSentry_UpdateFooting(handler, clientNum, moverEntNum, &results, outOrigin, &v1) )
    goto LABEL_75;
  AxisToAngles(&v1, outAngles);
  result = 1i64;
LABEL_76:
  _R11 = &v105;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
Turret_PlaceSentry_Server
==============
*/
int Turret_PlaceSentry_Server(const playerState_s *ps, vec3_t *outOrigin, vec3_t *outAngles, int *placeEnt, float radius)
{
  int suitIndex; 
  float viewHeightStand; 
  float v19; 
  vec3_t viewOrigin; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 474, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  xmm1, dword ptr [rbx+34h]
  }
  suitIndex = _RBX->suitIndex;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+viewOrigin], xmm0
    vmovss  xmm0, dword ptr [rbx+1E8h]
    vaddss  xmm2, xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+0B8h+viewOrigin+8], xmm2
    vmovss  dword ptr [rsp+0B8h+viewOrigin+4], xmm1
  }
  if ( !BG_GetSuitDef(suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 481, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+0B8h+radius]
    vmovss  [rsp+0B8h+var_68], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rsi+200h]
    vmovss  [rsp+0B8h+viewHeightStand], xmm1
  }
  return Turret_PlaceSentry_Internal(TURRET_HANDLER_SERVER, LOCAL_CLIENT_INVALID, _RBX->clientNum, &_RBX->origin, &viewOrigin, viewHeightStand, &_RBX->viewangles, outOrigin, outAngles, placeEnt, v19);
}

/*
==============
Turret_PlaceSentry_UpdateFooting
==============
*/
__int64 Turret_PlaceSentry_UpdateFooting(const turret_handler handler, LocalClientNum_t localClientNum, const int moverEntNum, trace_t *trace, vec3_t *outOrigin, tmat33_t<vec3_t> *outAxis)
{
  unsigned int v85; 
  const vec3_t *v96; 
  __int64 v98; 
  const dvar_t *v102; 
  const vec4_t *v104; 
  const dvar_t *v105; 
  vec3_t *v165; 
  vec3_t *v166; 
  __int64 result; 
  int v192; 
  int v193; 
  int v194; 
  int v195; 
  int v196; 
  int v197; 
  int v198; 
  int v199; 
  int v200; 
  int v201; 
  int v202; 
  int v203; 
  unsigned int v204; 
  int v205; 
  Physics_WorldId worldId; 
  unsigned int v207; 
  int skipEntity[2]; 
  vec3_t *v0; 
  vec3_t *v1; 
  vec3_t cross; 
  vec3_t end; 
  __int128 v213; 
  __int128 v216; 
  char v225; 
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
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R15 = outOrigin;
  _RBX = outAxis;
  *(_QWORD *)cross.v = outOrigin;
  v1 = (vec3_t *)outAxis;
  skipEntity[0] = moverEntNum;
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 123, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v192 & 0x7F800000) == 2139095040 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v193 & 0x7F800000) == 2139095040 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v194 & 0x7F800000) == 2139095040 )
  {
LABEL_61:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 124, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outOrigin )[0] ) && !IS_NAN( ( outOrigin )[1] ) && !IS_NAN( ( outOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outOrigin )[0] ) && !IS_NAN( ( outOrigin )[1] ) && !IS_NAN( ( outOrigin )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v195 & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v196 & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v197 & 0x7F800000) == 2139095040 )
  {
LABEL_62:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 125, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAxis[0] )[0] ) && !IS_NAN( ( outAxis[0] )[1] ) && !IS_NAN( ( outAxis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAxis[0] )[0] ) && !IS_NAN( ( outAxis[0] )[1] ) && !IS_NAN( ( outAxis[0] )[2] )") )
      __debugbreak();
  }
  _RDI = &outAxis->m[1];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  v0 = &outAxis->m[1];
  if ( (v198 & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v199 & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v200 & 0x7F800000) == 2139095040 )
  {
LABEL_63:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 126, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAxis[1] )[0] ) && !IS_NAN( ( outAxis[1] )[1] ) && !IS_NAN( ( outAxis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAxis[1] )[0] ) && !IS_NAN( ( outAxis[1] )[1] ) && !IS_NAN( ( outAxis[1] )[2] )") )
      __debugbreak();
  }
  _RSI = &outAxis->m[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v201 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v202 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rsp+1D0h+var_170], xmm0
  }
  if ( (v203 & 0x7F800000) == 2139095040 )
  {
LABEL_64:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 127, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAxis[2] )[0] ) && !IS_NAN( ( outAxis[2] )[1] ) && !IS_NAN( ( outAxis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAxis[2] )[0] ) && !IS_NAN( ( outAxis[2] )[1] ) && !IS_NAN( ( outAxis[2] )[2] )") )
      __debugbreak();
  }
  _RDI = DVARVEC3_sentry_placement_feet_offset;
  if ( !DVARVEC3_sentry_placement_feet_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_feet_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm15, dword ptr [rdi+28h]
    vmovss  xmm4, dword ptr [rdi+30h]
    vmovss  xmm11, dword ptr [rdi+2Ch]
    vmovss  xmm12, dword ptr [rbx]
    vmovss  xmm13, dword ptr [rbx+4]
    vmovss  xmm14, dword ptr [rbx+8]
    vmulss  xmm1, xmm11, dword ptr [rbx+0Ch]
    vmulss  xmm0, xmm15, xmm12
    vaddss  xmm2, xmm0, dword ptr [r15]
    vmulss  xmm0, xmm4, dword ptr [rsi]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm11, dword ptr [rbx+10h]
    vaddss  xmm7, xmm3, xmm0
    vmulss  xmm0, xmm15, xmm13
    vaddss  xmm2, xmm0, dword ptr [r15+4]
    vmulss  xmm0, xmm4, dword ptr [rsi+4]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm11, dword ptr [rbx+14h]
    vaddss  xmm6, xmm3, xmm0
    vmulss  xmm0, xmm15, xmm14
    vaddss  xmm2, xmm0, dword ptr [r15+8]
    vmulss  xmm0, xmm4, dword ptr [rsi+8]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm15, cs:__real@c0000000
    vmulss  xmm1, xmm2, xmm13
    vmovss  [rsp+1D0h+var_16C], xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm0, xmm2, xmm12
    vaddss  xmm3, xmm0, xmm7
    vmulss  xmm0, xmm2, xmm14
    vmulss  xmm2, xmm11, cs:__real@c0000000
    vmovss  dword ptr [rbp+0D0h+var_110+4], xmm6
    vaddss  xmm6, xmm1, xmm6
    vmulss  xmm1, xmm2, dword ptr [rbx+10h]
    vaddss  xmm5, xmm1, xmm6
  }
  _ER15 = 0;
  v207 = 0;
  __asm
  {
    vmovss  dword ptr [rbp+0D0h+var_110], xmm7
    vaddss  xmm7, xmm0, xmm4
    vmulss  xmm0, xmm2, dword ptr [rbx+0Ch]
    vmovss  dword ptr [rbp+0D0h+var_110+8], xmm4
    vaddss  xmm4, xmm0, xmm3
    vmulss  xmm0, xmm2, dword ptr [rbx+14h]
    vmovss  dword ptr [rbp+0D0h+var_110+0Ch], xmm3
    vmulss  xmm3, xmm15, cs:__real@40000000
    vmulss  xmm2, xmm3, xmm13
    vmovss  [rbp+0D0h+var_100], xmm6
    vaddss  xmm6, xmm0, xmm7
    vmulss  xmm0, xmm3, xmm12
    vaddss  xmm1, xmm0, xmm4
    vaddss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbp+0D0h+var_F8+0Ch], xmm1
    vmulss  xmm1, xmm3, xmm14
    vaddss  xmm2, xmm1, xmm6
    vmovss  [rbp+0D0h+var_E4], xmm2
    vmovss  [rbp+0D0h+var_FC], xmm7
    vmovss  dword ptr [rbp+0D0h+var_F8], xmm4
    vmovss  dword ptr [rbp+0D0h+var_F8+4], xmm5
    vmovss  dword ptr [rbp+0D0h+var_F8+8], xmm6
    vmovss  [rbp+0D0h+var_E8], xmm0
  }
  if ( handler )
  {
    if ( handler == TURRET_HANDLER_SERVER )
    {
      worldId = PHYSICS_WORLD_ID_FIRST;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\turret\\turret_placement.cpp", 55, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret handler") )
        __debugbreak();
      worldId = PHYSICS_WORLD_ID_INVALID;
    }
  }
  else
  {
    worldId = 3 * localClientNum + 2;
  }
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm6, [rsp+1D0h+var_16C]
  }
  v85 = 0;
  v204 = 0;
  _RDI = 0i64;
  _RBX = (char *)&v216 + 8;
  do
  {
    _R14 = DVARFLT_sentry_placement_feet_trace_dist_z;
    if ( !DVARFLT_sentry_placement_feet_trace_dist_z && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_feet_trace_dist_z") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+28h]
      vxorps  xmm2, xmm0, xmm9
      vmulss  xmm1, xmm2, dword ptr [rsi]
      vaddss  xmm0, xmm1, dword ptr [rbx-8]
      vmovss  dword ptr [rbp+0D0h+end], xmm0
      vmulss  xmm0, xmm2, dword ptr [rsi+4]
      vaddss  xmm1, xmm0, dword ptr [rbx-4]
      vmulss  xmm0, xmm2, dword ptr [rsi+8]
    }
    v96 = (const vec3_t *)((char *)&v216 + 12 * v85);
    __asm
    {
      vmovss  dword ptr [rbp+0D0h+end+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbp+0D0h+end+8], xmm1
    }
    PhysicsQuery_LegacyTrace(worldId, trace, v96, &end, &bounds_origin, skipEntity[0], 1, 33636369, 0, NULL, All);
    if ( trace->hitType == TRACE_HITTYPE_BEGIN || Trace_GetGlassHitId(trace) )
    {
      ++v207;
      if ( _RDI >= 4 )
      {
        j___report_rangecheckfailure(v98);
        JUMPOUT(0x14199BADDi64);
      }
      v105 = DVARBOOL_sentry_placement_debug;
      *((_BYTE *)&v205 + _RDI) = 0;
      *((_DWORD *)&v213 + _RDI) = 0;
      if ( !v105 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v105);
      if ( v105->current.enabled )
      {
        v104 = &colorRed;
        goto LABEL_54;
      }
    }
    else
    {
      _R14 = DVARFLT_sentry_placement_feet_trace_dist_z;
      *((_BYTE *)&v205 + _RDI) = 1;
      if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_feet_trace_dist_z") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+28h]
        vmulss  xmm1, xmm0, dword ptr [r12]
      }
      v102 = DVARBOOL_sentry_placement_debug;
      __asm
      {
        vsubss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbp+rdi*4+0D0h+var_128], xmm2
      }
      if ( !v102 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sentry_placement_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v102);
      if ( v102->current.enabled )
      {
        v104 = &colorGreen;
LABEL_54:
        G_DebugLine(v96, &end, v104, 0);
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rdi*4+0D0h+var_128]
      vmovss  xmm8, dword ptr [rsi]
      vxorps  xmm2, xmm0, xmm9
      vmulss  xmm0, xmm8, xmm2
      vaddss  xmm1, xmm0, dword ptr [rbx-8]
      vmulss  xmm0, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rbx-8], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx-4]
      vmulss  xmm0, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rbx-4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx]
    }
    v85 = v204 + 1;
    ++_RDI;
    __asm { vmovss  dword ptr [rbx], xmm1 }
    _RBX += 12;
    v204 = v85;
  }
  while ( v85 < 4 );
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+0D0h+var_128+8]
    vmovss  xmm5, dword ptr [rbp+0D0h+var_128+0Ch]
  }
  _EAX = (unsigned __int8)v205;
  __asm { vmovd   xmm0, eax }
  _EAX = BYTE1(v205);
  __asm
  {
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, dword ptr [rbp+0D0h+var_128]
    vblendvps xmm7, xmm0, xmm3, xmm2
    vmovd   xmm0, eax
  }
  _EAX = BYTE2(v205);
  __asm
  {
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, dword ptr [rbp+0D0h+var_128+4]
    vblendvps xmm6, xmm0, xmm5, xmm2
    vmovd   xmm0, eax
  }
  _EAX = HIBYTE(v205);
  __asm
  {
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm4, xmm3, xmm7, xmm2
    vmovd   xmm0, eax
  }
  _RAX = *(_QWORD *)cross.v;
  __asm
  {
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm3, xmm5, xmm6, xmm2
    vaddss  xmm0, xmm7, xmm4
    vmulss  xmm2, xmm0, cs:__real@3f000000
    vaddss  xmm0, xmm6, xmm3
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmaxss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rbp+0D0h+var_128+0Ch], xmm3
    vxorps  xmm3, xmm2, xmm9
    vmulss  xmm0, xmm8, xmm3
    vaddss  xmm1, xmm0, dword ptr [rax]
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm0, xmm3, dword ptr [rsi+4]
    vaddss  xmm1, xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rax+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [rsi+8]
    vaddss  xmm1, xmm0, dword ptr [rax+8]
    vmovups xmm0, [rbp+0D0h+var_110]
    vsubps  xmm0, xmm0, [rbp+0D0h+var_F8]
    vmovss  dword ptr [rax+8], xmm1
    vmovss  xmm1, [rbp+0D0h+var_100]
    vsubss  xmm2, xmm1, [rbp+0D0h+var_E8]
    vmovss  dword ptr [rbp+0D0h+var_128], xmm7
    vmovss  dword ptr [rbp+0D0h+var_128+4], xmm6
    vmovss  dword ptr [rbp+0D0h+var_128+8], xmm4
    vmovups [rbp+0D0h+var_128], xmm0
    vmovss  xmm0, [rbp+0D0h+var_FC]
    vsubss  xmm1, xmm0, [rbp+0D0h+var_E4]
    vmovss  [rbp+0D0h+var_114], xmm1
    vmovss  [rbp+0D0h+var_118], xmm2
  }
  Vec3Cross((const vec3_t *)&v213, (const vec3_t *)&v213 + 1, &cross);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+0D0h+cross+4]
    vmovss  xmm4, dword ptr [rbp+0D0h+cross+8]
    vmovss  xmm6, dword ptr [rbp+0D0h+cross]
  }
  v165 = v0;
  v166 = v1;
  __asm
  {
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm6, xmm1
    vmulss  xmm3, xmm5, xmm1
    vmulss  xmm0, xmm4, xmm1
    vmovss  dword ptr [rsi], xmm2
    vmovss  dword ptr [rsi+4], xmm3
    vmovss  dword ptr [rsi+8], xmm0
  }
  Vec3Cross(_RSI, v166, v165);
  Vec3Cross(v0, _RSI, v1);
  LOBYTE(_ER15) = v207 <= 1;
  result = _ER15;
  _R11 = &v225;
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

