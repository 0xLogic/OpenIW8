/*
==============
CG_PhysicsCharacterProxy_Update
==============
*/

void __fastcall CG_PhysicsCharacterProxy_Update(LocalClientNum_t localClientNum, Physics_WorldId predictiveWorldId, Physics_WorldId authoritativeWorldId, Physics_WorldId detailWorldId)
{
  ?CG_PhysicsCharacterProxy_Update@@YAXW4LocalClientNum_t@@W4Physics_WorldId@@11@Z(localClientNum, predictiveWorldId, authoritativeWorldId, detailWorldId);
}

/*
==============
CG_PhysicsCharacterProxy_GetDetailPhysicsInstanceId
==============
*/

unsigned int __fastcall CG_PhysicsCharacterProxy_GetDetailPhysicsInstanceId(const LocalClientNum_t localClientNum, const centity_t *ent)
{
  return ?CG_PhysicsCharacterProxy_GetDetailPhysicsInstanceId@@YAIW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, ent);
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail
==============
*/

void __fastcall CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail(LocalClientNum_t localClientNum)
{
  ?CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth
==============
*/

void __fastcall CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth(LocalClientNum_t localClientNum)
{
  ?CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityData
==============
*/

void __fastcall CG_PhysicsCharacterProxy_DebugDrawEntityData(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?CG_PhysicsCharacterProxy_DebugDrawEntityData@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@PEAM2MM@Z(localClientNum, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
CG_PhysicsCharacterProxy_GetCollisionBounds
==============
*/

void __fastcall CG_PhysicsCharacterProxy_GetCollisionBounds(const DObj *dobj, const entityState_t *es, int suitIndex, EffectiveStance stance, bool quantized, Bounds *outCollisionBounds)
{
  ?CG_PhysicsCharacterProxy_GetCollisionBounds@@YAXPEBUDObj@@PEBUentityState_t@@HW4EffectiveStance@@_NPEAUBounds@@@Z(dobj, es, suitIndex, stance, quantized, outCollisionBounds);
}

/*
==============
CG_PhysicsCharacterProxy_MatchSnapshot
==============
*/

void __fastcall CG_PhysicsCharacterProxy_MatchSnapshot(LocalClientNum_t localClientNum, int gameTime)
{
  ?CG_PhysicsCharacterProxy_MatchSnapshot@@YAXW4LocalClientNum_t@@H@Z(localClientNum, gameTime);
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred
==============
*/

void __fastcall CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred(LocalClientNum_t localClientNum)
{
  ?CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PhysicsCharacterProxy_Init
==============
*/

void CG_PhysicsCharacterProxy_Init(void)
{
  ?CG_PhysicsCharacterProxy_Init@@YAXXZ();
}

/*
==============
CG_PhysicsCharacterProxy_Shutdown
==============
*/

void CG_PhysicsCharacterProxy_Shutdown(void)
{
  ?CG_PhysicsCharacterProxy_Shutdown@@YAXXZ();
}

/*
==============
CG_PhysicsCharacterProxy_AddCharacter
==============
*/

void __fastcall CG_PhysicsCharacterProxy_AddCharacter(LocalClientNum_t localClientNum, centity_t *entity, const vec3_t *position, const vec4_t *orientation)
{
  ?CG_PhysicsCharacterProxy_AddCharacter@@YAXW4LocalClientNum_t@@PEAUcentity_t@@AEBTvec3_t@@AEBTvec4_t@@@Z(localClientNum, entity, position, orientation);
}

/*
==============
CG_PhysicsCharacterProxy_Clear
==============
*/

void CG_PhysicsCharacterProxy_Clear(void)
{
  ?CG_PhysicsCharacterProxy_Clear@@YAXXZ();
}

/*
==============
CG_PhysicsCharacterProxy_IsRegistered
==============
*/

bool __fastcall CG_PhysicsCharacterProxy_IsRegistered(LocalClientNum_t localClientNum, centity_t *entity)
{
  return ?CG_PhysicsCharacterProxy_IsRegistered@@YA_NW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, entity);
}

/*
==============
CG_PhysicsCharacterProxy_AddCharacter
==============
*/
void CG_PhysicsCharacterProxy_AddCharacter(LocalClientNum_t localClientNum, centity_t *entity, const vec3_t *position, const vec4_t *orientation)
{
  __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int16 *v12; 
  __int64 v13; 

  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 508, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !entity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 509, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 153, ASSERT_TYPE_ASSERT, "( entity ) != ( nullptr )", "%s != %s\n\t%p, %p", "entity", "nullptr", NULL, NULL) )
      __debugbreak();
  }
  if ( (entity->nextState.eType != ET_SCRIPTMOVER || entity->nextState.un.scriptMoverType != 1) && !BG_IsCharacterEntity(&entity->nextState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 510, ASSERT_TYPE_ASSERT, "(CG_PhysicsCharacterProxy_IsEntityRightType( entity ))", (const char *)&queryFormat, "CG_PhysicsCharacterProxy_IsEntityRightType( entity )") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCharacterProxy_AddCharacter");
  v10 = &s_cg_physicsCharacterProxyEntityCount[v7];
  v11 = *v10;
  v12 = &s_cg_physicsCharacterProxyEntities[v7][v11];
  if ( *v12 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 537, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyEntities[localClientNum][entityIt] == -1)", (const char *)&queryFormat, "s_cg_physicsCharacterProxyEntities[localClientNum][entityIt] == -1") )
    __debugbreak();
  *v12 = entity->nextState.number;
  if ( *v10 >= 0xF8 )
  {
    LODWORD(v13) = 248;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 540, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyEntityCount[localClientNum] < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS)", "%s\n\tran out of character proxies on the client - we only support %i", "s_cg_physicsCharacterProxyEntityCount[localClientNum] < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS", v13) )
      __debugbreak();
  }
  ++*v10;
  CG_PhysicsCharacterProxy_CreatePhysics((LocalClientNum_t)v7, v11, position, orientation);
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
}

/*
==============
CG_PhysicsCharacterProxy_CalcEncapsulatingShapes
==============
*/
void CG_PhysicsCharacterProxy_CalcEncapsulatingShapes(LocalClientNum_t localClientNum, unsigned int characterIdx, PhysicsCharacterProxy_Capsule *capsules)
{
  __int64 v3; 
  centity_t *Entity; 
  bool v5; 
  const dvar_t *v6; 
  bool v7; 
  const DObj *v8; 
  const dvar_t *v9; 
  int suitIndex; 
  EffectiveStance v11; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  unsigned int number; 
  unsigned int v16; 
  unsigned int v17; 
  XModelCharCollBoundsType characterCollBoundsType; 
  Bounds *outCollisionBounds; 
  Bounds *outCollisionBoundsa; 
  __int64 v21; 
  Bounds bounds; 
  Bounds entityBounds; 

  v3 = localClientNum;
  Entity = CG_GetEntity(localClientNum, s_cg_physicsCharacterProxyEntities[localClientNum][characterIdx]);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 227, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v5 = Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT);
  v6 = DCONST_DVARBOOL_playerCharacterCollisionUseNew;
  v7 = v5;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionUseNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUseNew") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v8 = NULL;
  if ( v6->current.enabled )
  {
    v9 = DCONST_DVARBOOL_playerCharacterCollisionFullClientBound;
    if ( !DCONST_DVARBOOL_playerCharacterCollisionFullClientBound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionFullClientBound") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
      v7 = 0;
  }
  suitIndex = 0;
  v11 = PM_EFF_STANCE_DEFAULT;
  if ( (Entity->flags & 1) != 0 && BG_IsPlayerOrAgentEntity(&Entity->nextState) )
  {
    if ( !(_BYTE)CgStatic::ms_allocatedType )
    {
      LODWORD(v21) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v21) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v21 = CgStatic::ms_allocatedCount;
      LODWORD(outCollisionBounds) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", outCollisionBounds, v21) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v3] )
    {
      LODWORD(v21) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v21) )
        __debugbreak();
    }
    clientNum = Entity->nextState.clientNum;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[v3]->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v21) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(outCollisionBounds) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", outCollisionBounds, v21) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
    }
    suitIndex = CharacterInfo->suitIndex;
    v11 = BG_EstimateEffectiveStance(&Entity->nextState);
  }
  number = Entity->nextState.number;
  if ( number > 0x9E4 )
  {
    LODWORD(v21) = Entity->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v21) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v21) = 2;
    LODWORD(outCollisionBounds) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outCollisionBounds, v21) )
      __debugbreak();
  }
  v16 = 2533 * v3 + number;
  if ( v16 >= 0x13CA )
  {
    LODWORD(v21) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v21) )
      __debugbreak();
  }
  v17 = clientObjMap[v16];
  if ( v17 )
  {
    if ( v17 >= (unsigned int)s_objCount )
    {
      LODWORD(v21) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v21) )
        __debugbreak();
    }
    v8 = (const DObj *)s_objBuf[v17];
  }
  CG_PhysicsCharacterProxy_GetCollisionBounds(v8, &Entity->nextState, suitIndex, v11, v7, &entityBounds);
  if ( v8 && v8->numModels )
  {
    characterCollBoundsType = (*v8->models)->characterCollBoundsType;
    if ( (unsigned int)characterCollBoundsType >= CharCollBoundsType_Num )
    {
      LODWORD(v21) = 10;
      LODWORD(outCollisionBoundsa) = characterCollBoundsType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 271, ASSERT_TYPE_ASSERT, "(unsigned)( collBoundsType ) < (unsigned)( XModelCharCollBoundsType::CharCollBoundsType_Num )", "collBoundsType doesn't index XModelCharCollBoundsType::CharCollBoundsType_Num\n\t%i not in [0, %i)", outCollisionBoundsa, v21) )
        __debugbreak();
    }
  }
  else
  {
    characterCollBoundsType = CharCollBoundsType_Human;
  }
  PhysicsCharacterProxy_GetEncapsulatingBounds(&bounds, characterCollBoundsType);
  PhysicsCharacterProxy_CalcCapsule(&bounds, capsules);
  PhysicsCharacterProxy_CalcCapsule(&entityBounds, capsules + 1);
}

/*
==============
CG_PhysicsCharacterProxy_Clear
==============
*/
void CG_PhysicsCharacterProxy_Clear(void)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v1; 
  int v2; 
  __int64 v3; 
  unsigned int *v4; 
  unsigned int i; 
  hkMonitorStream *v6; 
  hkMonitorStream *v7; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v1 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCharacterProxy_Clear");
  v2 = 0;
  v3 = 0i64;
  v4 = s_cg_physicsCharacterProxyEntityCount;
  do
  {
    for ( i = 0; i < *v4; ++i )
    {
      v6 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
      v7 = v6;
      if ( v6 )
        hkMonitorStream::timerBegin(v6, "TtCG_PhysicsCharacterProxy_RemovePhysics");
      CG_PhysicsCharacterProxy_RemovePhysics_0((LocalClientNum_t)v2, i, PHYSICS_CHARACTERPROXY_TYPE_COLLISION);
      CG_PhysicsCharacterProxy_RemovePhysics_0((LocalClientNum_t)v2, i, PHYSICS_CHARACTERPROXY_TYPE_DETAIL);
      if ( v7 )
        hkMonitorStream::timerEnd(v7, "Et");
      s_cg_physicsCharacterProxyEntities[v3][i] = -1;
    }
    *v4 = 0;
    ++v2;
    ++v3;
    ++v4;
  }
  while ( v2 < 2 );
  if ( v1 )
    hkMonitorStream::timerEnd(v1, "Et");
}

/*
==============
CG_PhysicsCharacterProxy_CreateAuthPhysics
==============
*/
void CG_PhysicsCharacterProxy_CreateAuthPhysics(LocalClientNum_t localClientNum, unsigned int entityId)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  centity_t *Entity; 
  __int64 v7; 
  __int64 v8; 
  Physics_WorldId v9; 
  hknpShape *v10; 
  const entityState_t *p_nextState; 
  unsigned __int16 v12; 
  int Ref; 
  float v14; 
  __int128 v16; 
  vec4_t v19; 
  const float4 *v20; 
  float4 *v21; 
  int v22; 
  unsigned int v23; 
  unsigned int RigidBodyID; 
  char *optionalInplaceBuffer; 
  vec3_t outOrigin; 
  __int64 v27; 
  vec3_t majorAxis; 
  __int128 v29; 
  vec4_t orientationAsQuat; 
  PhysicsCharacterProxy_Capsule capsules; 
  vec3_t center; 
  float v33; 
  float v34; 
  unsigned int v35; 

  v27 = -2i64;
  v2 = entityId;
  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "CG_PhysicsCharacterProxy_CreateAuthPhysics");
  CG_PhysicsCharacterProxy_CalcEncapsulatingShapes((LocalClientNum_t)v3, v2, &capsules);
  v4 = (unsigned int)v2;
  v5 = v2 + 248 * v3;
  Entity = CG_GetEntity((const LocalClientNum_t)v3, s_cg_physicsCharacterProxyEntities[0][v5]);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 446, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  majorAxis.v[0] = 0.0;
  majorAxis.v[1] = 0.0;
  majorAxis.v[2] = 0.0;
  v7 = (int)v35;
  if ( v35 >= 3 )
  {
    LODWORD(optionalInplaceBuffer) = v35;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", optionalInplaceBuffer, 3) )
      __debugbreak();
  }
  majorAxis.v[v7] = 1.0;
  v8 = v4 + 744i64 * (_DWORD)v3;
  if ( s_cg_physicsCharacterProxyShapes[3 * (int)v3 + 1][v4][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 454, ASSERT_TYPE_ASSERT, "(!s_cg_physicsCharacterProxyShapes[( 1 + PHYSICS_NUM_CLIENT_PROXY_WORLDS * localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION])", (const char *)&queryFormat, "!s_cg_physicsCharacterProxyShapes[Physics_GetClientCharacterProxyAuthoritativeWorldIndex( localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION]") )
    __debugbreak();
  v9 = 3 * v3 + 3;
  v10 = Physics_CreateShapeCapsule(v9, &center, v33, v34, &majorAxis, NULL, 0, Permanent);
  s_cg_physicsCharacterProxyShapes[3 * (int)v3 + 1][v4][1] = v10;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 456, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyShapes[( 1 + PHYSICS_NUM_CLIENT_PROXY_WORLDS * localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION])", (const char *)&queryFormat, "s_cg_physicsCharacterProxyShapes[Physics_GetClientCharacterProxyAuthoritativeWorldIndex( localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION]") )
    __debugbreak();
  p_nextState = &Entity->nextState;
  v12 = truncate_cast<unsigned short,short>(Entity->nextState.number);
  Ref = Physics_MakeRef(Physics_RefSystem_GCharacterProxies, Physics_RelationshipSystem_None, 1u, v12);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  v14 = Entity->pose.angles.v[0];
  HIDWORD(v29) = 0;
  v16 = v29;
  *(float *)&v16 = v14;
  _XMM3 = v16;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r15+4Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [r15+50h], 20h ; ' '
  }
  v19 = (vec4_t)_mm128_mul_ps(_XMM3, g_degreeToRadian.v);
  Float4RadianToQuat(v21, v20);
  orientationAsQuat = v19;
  v22 = 0x2000000;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1976, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( Entity->nextState.eType == ET_AGENT || BG_IsActorEntity(p_nextState) || BG_IsFakeActor(p_nextState) )
    v22 = 0x4000;
  if ( s_cg_physicsCharacterProxyAuthInstances[0][v5] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 473, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyAuthInstances[localClientNum][entityId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_cg_physicsCharacterProxyAuthInstances[localClientNum][entityId] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v23 = Physics_InstantiateKeyframedBody(v9, s_cg_physicsCharacterProxyShapes[1][v8][1], Ref, "character proxy", "PM_Player_SoftContact", v22, &outOrigin, &orientationAsQuat, 1, 1, 0);
  s_cg_physicsCharacterProxyAuthInstances[0][v5] = v23;
  if ( v23 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 476, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyAuthInstances[localClientNum][entityId] != 0xFFFFFFFF)", (const char *)&queryFormat, "s_cg_physicsCharacterProxyAuthInstances[localClientNum][entityId] != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID(v9, s_cg_physicsCharacterProxyAuthInstances[0][v5], 0);
  s_cg_physicsCharacterProxyAuthBodies[0][v5] = RigidBodyID;
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 479, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][entityId] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][entityId] )") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_PhysicsCharacterProxy_CreatePhysics
==============
*/
void CG_PhysicsCharacterProxy_CreatePhysics(LocalClientNum_t localClientNum, unsigned int characterIdx, const vec3_t *position, const vec4_t *orientation)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  PhysicsCharacterProxy_Capsule capsules; 
  PhysicsCharacterProxy_Capsule capsule; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCharacterProxy_CreatePhysics");
  CG_PhysicsCharacterProxy_CalcEncapsulatingShapes(localClientNum, characterIdx, &capsules);
  CG_PhysicsCharacterProxy_CreatePhysics_0(localClientNum, characterIdx, PHYSICS_CHARACTERPROXY_TYPE_DETAIL, position, orientation, &capsules);
  CG_PhysicsCharacterProxy_CreatePhysics_0(localClientNum, characterIdx, PHYSICS_CHARACTERPROXY_TYPE_COLLISION, position, orientation, &capsule);
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityData
==============
*/
void CG_PhysicsCharacterProxy_DebugDrawEntityData(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  __int64 v8; 
  __int16 *v10; 
  __int64 v11; 
  __int64 v12; 
  CgEntitySystem *v13; 
  centity_t *v14; 
  unsigned __int8 eType; 
  const char *v16; 
  const char *v17; 
  vec4_t *setColor; 
  __int64 forceColor; 
  __int64 shadow; 
  unsigned int v21; 
  char dest[256]; 

  v8 = localClientNum;
  Com_sprintf(dest, 0x100ui64, "Client Entities");
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  v21 = 0;
  *x = tabWidth + *x;
  v10 = s_cg_physicsCharacterProxyEntities[v8];
  v11 = 248i64;
  do
  {
    v12 = *v10;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(shadow) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", shadow) )
        __debugbreak();
    }
    if ( (unsigned int)v8 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(shadow) = CgEntitySystem::ms_allocatedCount;
      LODWORD(forceColor) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v8] )
    {
      LODWORD(shadow) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", shadow) )
        __debugbreak();
    }
    v13 = CgEntitySystem::ms_entitySystemArray[v8];
    if ( (unsigned int)v12 >= 0x800 )
    {
      LODWORD(shadow) = 2048;
      LODWORD(forceColor) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", forceColor, shadow) )
        __debugbreak();
    }
    v14 = &v13->m_entities[v12];
    if ( (CgEntitySystem *)((char *)v13 + 760 * v12) != (CgEntitySystem *)-16i64 )
    {
      eType = v14->pose.eType;
      v16 = "UNSUPPORTED TYPE";
      if ( v14->pose.eType == 1 )
        v16 = "PLAYER";
      if ( eType == 17 )
        v16 = "AGENT";
      if ( eType == 19 )
        v16 = "ACTOR";
      if ( eType == 6 )
      {
        v17 = "DRONE";
        if ( v13->m_entities[v12].nextState.un.scriptMoverType != 1 )
          v17 = v16;
        v16 = v17;
      }
      LODWORD(setColor) = v13->m_entities[v12].nextState.number;
      Com_sprintf(dest, 0x100ui64, "%i entity %i %s", v21, setColor, v16);
      Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
      *y = charHeight + *y;
      ++v21;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  *x = *x - tabWidth;
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth
==============
*/
void CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int *v2; 
  __int64 v3; 
  __int16 *v4; 
  float *v5; 
  __int64 v6; 
  CgEntitySystem *v7; 
  float *v8; 
  __int64 v9; 
  bool v10; 
  unsigned int v11; 
  int v12; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v14; 
  hknpBodyId *RigidBodyID; 
  float v16; 
  float v17; 
  float v18; 
  __int64 duration; 
  __int64 v20; 
  __int16 *v21; 
  __int64 v22; 
  hknpBodyId result; 
  vec3_t out; 
  vec3_t end; 
  float v26; 
  float v27; 
  float v28; 
  vec3_t in; 
  vec3_t v30; 
  vec3_t position; 
  vec4_t orientation; 

  v1 = localClientNum;
  v22 = 248i64;
  v2 = s_cg_physicsCharacterProxyAuthInstances[localClientNum];
  v3 = localClientNum;
  v4 = s_cg_physicsCharacterProxyEntities[localClientNum];
  v21 = v4;
  v5 = &s_cg_physicsCharacterProxyCapsules[localClientNum][0][1].center.v[1];
  do
  {
    v6 = *v4;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v20) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v20) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v20) = CgEntitySystem::ms_allocatedCount;
      LODWORD(duration) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v20) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v3] )
    {
      LODWORD(v20) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v20) )
        __debugbreak();
    }
    v7 = CgEntitySystem::ms_entitySystemArray[v3];
    if ( (unsigned int)v6 >= 0x800 )
    {
      LODWORD(v20) = 2048;
      LODWORD(duration) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, v20) )
        __debugbreak();
    }
    if ( (CgEntitySystem *)((char *)v7 + 760 * v6) != (CgEntitySystem *)-16i64 && *v2 != -1 )
    {
      v8 = v5 - 1;
      if ( v5 == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1145, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
        __debugbreak();
      v9 = *((int *)v5 + 4);
      if ( (unsigned int)v9 >= 3 )
      {
        LODWORD(v20) = 3;
        *(float *)&duration = v5[4];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v20) )
          __debugbreak();
      }
      v10 = !g_physicsInitialized;
      v11 = *v2;
      *(&v26 + v9) = 1.0;
      v12 = 3 * v1 + 3;
      if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v12 > 7 )
      {
        LODWORD(v20) = 3 * v1 + 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
          __debugbreak();
      }
      if ( v11 == -1 )
      {
        LODWORD(v20) = 3 * v1 + 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v20) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v1 + 1) <= 5 )
      {
        LODWORD(v20) = 3 * v1 + 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v20) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        if ( v12 < 0 )
          goto LABEL_41;
        if ( v12 <= 1 )
        {
          LODWORD(v20) = 3 * v1 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
            __debugbreak();
        }
      }
      if ( (unsigned int)v12 <= 7 )
      {
LABEL_43:
        if ( v11 == -1 )
        {
          LODWORD(v20) = 3 * v1 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v20) )
            __debugbreak();
        }
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v12);
        if ( !ConstWorld->world )
        {
          LODWORD(v20) = 3 * v1 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v20) )
            __debugbreak();
        }
        if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v11) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1152, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( Physics_GetClientAuthoritativeWorldId( localClientNum ), s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( Physics_GetClientAuthoritativeWorldId( localClientNum ), s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx] ) == 1") )
          __debugbreak();
        v14 = *v2;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(v20) = 3 * v1 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
            __debugbreak();
        }
        if ( v14 == -1 )
        {
          LODWORD(v20) = 3 * v1 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v20) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v1 + 1) <= 5 )
        {
          LODWORD(v20) = 3 * v1 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v20) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(v20) = 3 * v1 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v12, v14, 0);
        Physics_GetRigidBodyTransform((const Physics_WorldId)v12, RigidBodyID->m_serialAndIndex, &position, &orientation);
        v16 = v5[2];
        in.v[0] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) * v26) + *v8;
        in.v[1] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) * v27) + *v5;
        in.v[2] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) * v28) + v5[1];
        v17 = (float)(v16 * v27) + *v5;
        v30.v[0] = (float)(v16 * v26) + *v8;
        v30.v[2] = (float)(v16 * v28) + v5[1];
        v30.v[1] = v17;
        QuatTransform(&orientation, &in, &out);
        QuatTransform(&orientation, &v30, &end);
        v10 = v5[2] == 0.0;
        out.v[0] = position.v[0] + out.v[0];
        out.v[1] = position.v[1] + out.v[1];
        out.v[2] = position.v[2] + out.v[2];
        end.v[1] = position.v[1] + end.v[1];
        v18 = v5[3];
        end.v[2] = position.v[2] + end.v[2];
        end.v[0] = position.v[0] + end.v[0];
        if ( v10 )
          CG_DebugSphere(&out, v18, &colorYellow, 1, 0);
        else
          CG_DebugCapsule(&out, &end, v18, &colorYellow, 1, 0);
        goto LABEL_72;
      }
LABEL_41:
      LODWORD(v20) = 3 * v1 + 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
        __debugbreak();
      goto LABEL_43;
    }
LABEL_72:
    v4 = v21 + 1;
    v5 += 12;
    ++v21;
    ++v2;
    v10 = v22-- == 1;
    v3 = v1;
  }
  while ( !v10 );
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail
==============
*/
void CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  CgEntitySystem *v7; 
  int v8; 
  __int64 v9; 
  float *v10; 
  unsigned int *v11; 
  float *v12; 
  __int64 v13; 
  bool v14; 
  unsigned int v15; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v17; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int64 duration; 
  __int64 v28; 
  unsigned int v29; 
  __int64 v31; 
  hknpBodyId result; 
  __int64 v33; 
  vec3_t center; 
  vec3_t end; 
  float v36; 
  float v37; 
  float v38; 
  vec3_t in; 
  vec3_t v40; 
  vec4_t out; 

  v1 = localClientNum;
  v2 = 0i64;
  v3 = 248i64 * (int)localClientNum;
  v29 = 0;
  v33 = v3;
  v4 = v1;
  v31 = 0i64;
  do
  {
    v5 = v3 + v2;
    v6 = s_cg_physicsCharacterProxyEntities[0][v3 + v2];
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v28) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v28) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v28) = CgEntitySystem::ms_allocatedCount;
      LODWORD(duration) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v28) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v4] )
    {
      LODWORD(v28) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v28) )
        __debugbreak();
    }
    v7 = CgEntitySystem::ms_entitySystemArray[v4];
    if ( (unsigned int)v6 >= 0x800 )
    {
      LODWORD(v28) = 2048;
      LODWORD(duration) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, v28) )
        __debugbreak();
    }
    if ( (CgEntitySystem *)((char *)v7 + 760 * v6) != (CgEntitySystem *)-16i64 )
    {
      v8 = 3 * v1 + 4;
      v9 = 2i64;
      v10 = &s_cg_physicsCharacterProxyCapsules[0][v5][0].center.v[1];
      v11 = s_cg_physicsCharacterProxyDetailInstances[0][v5];
      while ( 1 )
      {
        v12 = v10 - 1;
        if ( v10 == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1210, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
          __debugbreak();
        v13 = *((int *)v10 + 4);
        v36 = 0.0;
        v37 = 0.0;
        v38 = 0.0;
        if ( (unsigned int)v13 >= 3 )
        {
          LODWORD(v28) = 3;
          LODWORD(duration) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v28) )
            __debugbreak();
        }
        v14 = !g_physicsInitialized;
        v15 = *v11;
        *(&v36 + v13) = 1.0;
        if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( v15 == -1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v28) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          if ( v8 < 0 )
            goto LABEL_41;
          if ( v8 <= 1 )
          {
            LODWORD(v28) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
              __debugbreak();
          }
        }
        if ( (unsigned int)v8 > 7 )
        {
LABEL_41:
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( v15 == -1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v28) )
            __debugbreak();
        }
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v8);
        if ( !ConstWorld->world )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v28) )
            __debugbreak();
        }
        if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v15) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1218, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( localClientNum ), s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( localClientNum ), s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type] ) == 1") )
          __debugbreak();
        v17 = *v11;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( v17 == -1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v28) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, v17, 0)->m_serialAndIndex;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v28) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
            __debugbreak();
        }
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v28) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v8)->world;
        if ( !world )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v28) )
            __debugbreak();
        }
        v20 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
        v21 = 32.0 * v20[1].m[0].v[0];
        v22 = 32.0 * v20[1].m[0].v[1];
        v23 = 32.0 * v20[1].m[0].v[2];
        Axis34ToQuat(v20, &out);
        v24 = v10[2];
        in.v[0] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v36) + *v12;
        in.v[1] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v37) + *v10;
        in.v[2] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v38) + v10[1];
        v25 = (float)(v24 * v37) + *v10;
        v40.v[0] = (float)(v24 * v36) + *v12;
        v40.v[2] = (float)(v24 * v38) + v10[1];
        v40.v[1] = v25;
        QuatTransform(&out, &in, &center);
        QuatTransform(&out, &v40, &end);
        v14 = v10[2] == 0.0;
        center.v[2] = v23 + center.v[2];
        center.v[0] = v21 + center.v[0];
        center.v[1] = v22 + center.v[1];
        end.v[2] = v23 + end.v[2];
        v26 = v10[3];
        end.v[0] = v21 + end.v[0];
        end.v[1] = v22 + end.v[1];
        if ( v14 )
          CG_DebugSphere(&center, v26, &colorYellow, 1, 0);
        else
          CG_DebugCapsule(&center, &end, v26, &colorYellow, 1, 0);
        v10 += 6;
        ++v11;
        if ( !--v9 )
        {
          LODWORD(v1) = localClientNum;
          break;
        }
      }
    }
    v4 = (int)v1;
    v2 = v31 + 1;
    ++v29;
    ++v31;
    v3 = v33;
  }
  while ( v29 < 0xF8 );
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred
==============
*/
void CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  CgEntitySystem *v7; 
  int v8; 
  __int64 v9; 
  float *v10; 
  unsigned int *v11; 
  float *v12; 
  __int64 v13; 
  bool v14; 
  unsigned int v15; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v17; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int64 duration; 
  __int64 v28; 
  unsigned int v29; 
  __int64 v31; 
  hknpBodyId result; 
  __int64 v33; 
  vec3_t center; 
  vec3_t end; 
  float v36; 
  float v37; 
  float v38; 
  vec3_t in; 
  vec3_t v40; 
  vec4_t out; 

  v1 = localClientNum;
  v2 = 0i64;
  v3 = 248i64 * (int)localClientNum;
  v29 = 0;
  v33 = v3;
  v4 = v1;
  v31 = 0i64;
  do
  {
    v5 = v3 + v2;
    v6 = s_cg_physicsCharacterProxyEntities[0][v3 + v2];
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v28) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v28) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v28) = CgEntitySystem::ms_allocatedCount;
      LODWORD(duration) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v28) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v4] )
    {
      LODWORD(v28) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v28) )
        __debugbreak();
    }
    v7 = CgEntitySystem::ms_entitySystemArray[v4];
    if ( (unsigned int)v6 >= 0x800 )
    {
      LODWORD(v28) = 2048;
      LODWORD(duration) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, v28) )
        __debugbreak();
    }
    if ( (CgEntitySystem *)((char *)v7 + 760 * v6) != (CgEntitySystem *)-16i64 )
    {
      v8 = 3 * v1 + 2;
      v9 = 2i64;
      v10 = &s_cg_physicsCharacterProxyCapsules[0][v5][0].center.v[1];
      v11 = s_cg_physicsCharacterProxyPredInstances[0][v5];
      while ( 1 )
      {
        v12 = v10 - 1;
        if ( v10 == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1075, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
          __debugbreak();
        v13 = *((int *)v10 + 4);
        v36 = 0.0;
        v37 = 0.0;
        v38 = 0.0;
        if ( (unsigned int)v13 >= 3 )
        {
          LODWORD(v28) = 3;
          LODWORD(duration) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v28) )
            __debugbreak();
        }
        v14 = !g_physicsInitialized;
        v15 = *v11;
        *(&v36 + v13) = 1.0;
        if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( v15 == -1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v28) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          if ( v8 < 0 )
            goto LABEL_41;
          if ( v8 <= 1 )
          {
            LODWORD(v28) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
              __debugbreak();
          }
        }
        if ( (unsigned int)v8 > 7 )
        {
LABEL_41:
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( v15 == -1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v28) )
            __debugbreak();
        }
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v8);
        if ( !ConstWorld->world )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v28) )
            __debugbreak();
        }
        if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v15) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1083, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( Physics_GetClientPredictiveWorldId( localClientNum ), s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( Physics_GetClientPredictiveWorldId( localClientNum ), s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type] ) == 1") )
          __debugbreak();
        v17 = *v11;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( v17 == -1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v28) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, v17, 0)->m_serialAndIndex;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v28) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
            __debugbreak();
        }
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v28) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v8)->world;
        if ( !world )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v28) )
            __debugbreak();
        }
        v20 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
        v21 = 32.0 * v20[1].m[0].v[0];
        v22 = 32.0 * v20[1].m[0].v[1];
        v23 = 32.0 * v20[1].m[0].v[2];
        Axis34ToQuat(v20, &out);
        v24 = v10[2];
        in.v[0] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v36) + *v12;
        in.v[1] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v37) + *v10;
        in.v[2] = (float)(COERCE_FLOAT(LODWORD(v24) ^ _xmm) * v38) + v10[1];
        v25 = (float)(v24 * v37) + *v10;
        v40.v[0] = (float)(v24 * v36) + *v12;
        v40.v[2] = (float)(v24 * v38) + v10[1];
        v40.v[1] = v25;
        QuatTransform(&out, &in, &center);
        QuatTransform(&out, &v40, &end);
        v14 = v10[2] == 0.0;
        center.v[2] = v23 + center.v[2];
        center.v[0] = v21 + center.v[0];
        center.v[1] = v22 + center.v[1];
        end.v[2] = v23 + end.v[2];
        v26 = v10[3];
        end.v[0] = v21 + end.v[0];
        end.v[1] = v22 + end.v[1];
        if ( v14 )
          CG_DebugSphere(&center, v26, &colorYellow, 1, 0);
        else
          CG_DebugCapsule(&center, &end, v26, &colorYellow, 1, 0);
        v10 += 6;
        ++v11;
        if ( !--v9 )
        {
          LODWORD(v1) = localClientNum;
          break;
        }
      }
    }
    v4 = (int)v1;
    v2 = v31 + 1;
    ++v29;
    ++v31;
    v3 = v33;
  }
  while ( v29 < 0xF8 );
}

/*
==============
CG_PhysicsCharacterProxy_GetCollisionBounds
==============
*/
void CG_PhysicsCharacterProxy_GetCollisionBounds(const DObj *dobj, const entityState_t *es, int suitIndex, EffectiveStance stance, bool quantized, Bounds *outCollisionBounds)
{
  unsigned int characterCollBoundsType; 
  float v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 669, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !outCollisionBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 670, ASSERT_TYPE_ASSERT, "(outCollisionBounds)", (const char *)&queryFormat, "outCollisionBounds") )
    __debugbreak();
  *outCollisionBounds = playerBox;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((es->eType - 1) & 0xFFEF) == 0 )
  {
    if ( (unsigned int)stance >= PM_EFF_STANCE_COUNT )
    {
      LODWORD(v12) = stance;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 678, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( stance ) ) < (unsigned)( static_cast<int>( PM_EFF_STANCE_COUNT ) )", "static_cast<int>( stance ) doesn't index static_cast<int>( PM_EFF_STANCE_COUNT )\n\t%i not in [0, %i)", v12, 4) )
        __debugbreak();
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END|0x80) || es->eType != ET_PLAYER )
      stance = PM_EFF_STANCE_DEFAULT;
    *outCollisionBounds = *BG_Suit_GetBounds(suitIndex, stance);
  }
  if ( quantized )
  {
    outCollisionBounds->midPoint.v[0] = outCollisionBounds->midPoint.v[0] - 1.0;
    outCollisionBounds->midPoint.v[1] = outCollisionBounds->midPoint.v[1] - 1.0;
    outCollisionBounds->midPoint.v[2] = outCollisionBounds->midPoint.v[2] - 1.0;
  }
  if ( dobj && dobj->numModels )
  {
    characterCollBoundsType = (*dobj->models)->characterCollBoundsType;
    if ( characterCollBoundsType >= 0xA )
    {
      LODWORD(v13) = 10;
      LODWORD(v12) = (*dobj->models)->characterCollBoundsType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 697, ASSERT_TYPE_ASSERT, "(unsigned)( collBoundsType ) < (unsigned)( XModelCharCollBoundsType::CharCollBoundsType_Num )", "collBoundsType doesn't index XModelCharCollBoundsType::CharCollBoundsType_Num\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( characterCollBoundsType == 1 )
    {
      if ( ((es->eType - 19) & 0xFFFD) == 0 && (es->lerp.u.actor.flags & 1) != 0 )
      {
        *outCollisionBounds = actorBox;
        v11 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&actorBox.halfSize.y, (__m128)*(unsigned __int64 *)&actorBox.halfSize.y, 85).m128_f32[0];
        outCollisionBounds->midPoint.v[2] = v11 - 41.0;
        outCollisionBounds->halfSize.v[2] = v11;
      }
    }
    else
    {
      PhysicsCharacterProxy_GetCollisionBounds(outCollisionBounds, quantized);
    }
  }
}

/*
==============
CG_PhysicsCharacterProxy_GetDetailPhysicsInstanceId
==============
*/
__int64 CG_PhysicsCharacterProxy_GetDetailPhysicsInstanceId(const LocalClientNum_t localClientNum, const centity_t *ent)
{
  __int64 v2; 
  entityState_t *p_nextState; 
  entityType_s eType; 
  __int64 v6; 
  __int16 *i; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 643, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 644, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 645, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  p_nextState = &ent->nextState;
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = p_nextState->eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 646, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->nextState )") )
    __debugbreak();
  v6 = 0i64;
  for ( i = s_cg_physicsCharacterProxyEntities[v2]; p_nextState->number != *i; ++i )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0xF8 )
      return 0xFFFFFFFFi64;
  }
  return s_cg_physicsCharacterProxyDetailInstances[v2][v6][0];
}

/*
==============
CG_PhysicsCharacterProxy_Init
==============
*/
void CG_PhysicsCharacterProxy_Init(void)
{
  __int64 v0; 
  __int64 v1; 
  unsigned int (*v2)[248]; 
  __int64 v3; 
  unsigned int (*v4)[248]; 
  __int64 v5; 

  memset_0(s_cg_physicsCharacterProxyEntities, -1, sizeof(s_cg_physicsCharacterProxyEntities));
  v0 = 0i64;
  *(_QWORD *)s_cg_physicsCharacterProxyEntityCount = 0i64;
  memset_0(s_cg_physicsCharacterProxyShapes, 0, sizeof(s_cg_physicsCharacterProxyShapes));
  v1 = 31i64;
  v2 = s_cg_physicsCharacterProxyAuthInstances;
  v3 = 31i64;
  do
  {
    *(_QWORD *)v2 = -1i64;
    *(_QWORD *)&(*v2)[2] = -1i64;
    *(_QWORD *)&(*v2)[4] = -1i64;
    v2 = (unsigned int (*)[248])((char *)v2 + 64);
    *(_QWORD *)&(*v2)[-10] = -1i64;
    *(_QWORD *)&(*v2)[-8] = -1i64;
    *(_QWORD *)&(*v2)[-6] = -1i64;
    *(_QWORD *)&(*v2)[-4] = -1i64;
    *(_QWORD *)&(*v2)[-2] = -1i64;
    --v3;
  }
  while ( v3 );
  v4 = s_cg_physicsCharacterProxyAuthBodies;
  do
  {
    *(_QWORD *)v4 = 0xFFFFFF00FFFFFFi64;
    *(_QWORD *)&(*v4)[2] = 0xFFFFFF00FFFFFFi64;
    *(_QWORD *)&(*v4)[4] = 0xFFFFFF00FFFFFFi64;
    v4 = (unsigned int (*)[248])((char *)v4 + 64);
    *(_QWORD *)&(*v4)[-10] = 0xFFFFFF00FFFFFFi64;
    *(_QWORD *)&(*v4)[-8] = 0xFFFFFF00FFFFFFi64;
    *(_QWORD *)&(*v4)[-6] = 0xFFFFFF00FFFFFFi64;
    *(_QWORD *)&(*v4)[-4] = 0xFFFFFF00FFFFFFi64;
    *(_QWORD *)&(*v4)[-2] = 0xFFFFFF00FFFFFFi64;
    --v1;
  }
  while ( v1 );
  do
  {
    v5 = 248i64;
    do
    {
      *(_QWORD *)&s_cg_physicsCharacterProxyPredInstances[0][v0][0] = -1i64;
      *(_QWORD *)&s_cg_physicsCharacterProxyDetailInstances[0][v0][0] = -1i64;
      s_cg_physicsCharacterProxyPredBodies[0][v0][0] = 0xFFFFFF;
      s_cg_physicsCharacterProxyDetailBodies[0][v0][0] = 0xFFFFFF;
      s_cg_physicsCharacterProxyPredBodies[0][v0][1] = 0xFFFFFF;
      s_cg_physicsCharacterProxyDetailBodies[0][v0++][1] = 0xFFFFFF;
      --v5;
    }
    while ( v5 );
  }
  while ( v0 < 496 );
}

/*
==============
CG_PhysicsCharacterProxy_IsEntityRightType
==============
*/
bool CG_PhysicsCharacterProxy_IsEntityRightType(const centity_t *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 153, ASSERT_TYPE_ASSERT, "( entity ) != ( nullptr )", "%s != %s\n\t%p, %p", "entity", "nullptr", NULL, NULL) )
    __debugbreak();
  return entity->nextState.eType == ET_SCRIPTMOVER && entity->nextState.un.scriptMoverType == 1 || BG_IsCharacterEntity(&entity->nextState);
}

/*
==============
CG_PhysicsCharacterProxy_IsRegistered
==============
*/
char CG_PhysicsCharacterProxy_IsRegistered(LocalClientNum_t localClientNum, centity_t *entity)
{
  __int64 v2; 
  int v4; 
  unsigned int v5; 

  v2 = localClientNum;
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 601, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v4 = 0;
  v5 = s_cg_physicsCharacterProxyEntityCount[v2];
  if ( !v5 )
    return 0;
  while ( s_cg_physicsCharacterProxyEntities[v2][v4] != entity->nextState.number )
  {
    if ( ++v4 >= v5 )
      return 0;
  }
  return 1;
}

/*
==============
CG_PhysicsCharacterProxy_MatchSnapshot
==============
*/
void CG_PhysicsCharacterProxy_MatchSnapshot(LocalClientNum_t localClientNum, int gameTime)
{
  __int64 v2; 
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  cg_t *LocalClientGlobals; 
  cg_t *v6; 
  float v7; 
  float v8; 
  centity_t *Entity; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  centity_t *v13; 
  hkMonitorStream *v14; 
  vec3_t outOrigin; 
  __int64 v16; 
  hkMonitorStream *v17; 
  vec3_t viewPos; 
  vec3_t viewDir; 
  vec3_t angles; 
  vec4_t quat; 

  v16 = -2i64;
  v2 = localClientNum;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  v14 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCharacterProxy_MatchSnapshot");
  v17 = v4;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  v6 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  if ( !v6->renderingThirdPerson || v6->playerTeleported )
  {
    viewPos.v[0] = v6->refdef.viewOffset.v[0];
    v7 = v6->refdef.viewOffset.v[1];
    v8 = v6->refdef.viewOffset.v[2];
  }
  else
  {
    viewPos.v[0] = v6->lastFrameViewPos.v[0];
    v7 = v6->lastFrameViewPos.v[1];
    v8 = v6->lastFrameViewPos.v[2];
  }
  viewPos.v[2] = v8;
  viewPos.v[1] = v7;
  viewDir = LocalClientGlobals->refdef.view.axis.m[0];
  Entity = CG_GetEntity((const LocalClientNum_t)v2, 0);
  v10 = 0;
  if ( s_cg_physicsCharacterProxyEntityCount[v2] )
  {
    while ( 1 )
    {
      v11 = 248 * v2 + v10;
      v12 = s_cg_physicsCharacterProxyEntities[0][v11];
      v13 = &Entity[v12];
      if ( v13 )
      {
        if ( (v13->flags & 1) == 0 || !CG_PhysicsCharacterProxy_IsEntityRightType(&Entity[v12]) || (unsigned int)(v13->prevState.pos.trType - 23) <= 5 )
        {
          CG_PhysicsChracterProxy_RemoveCharacter((LocalClientNum_t)v2, v10);
          goto LABEL_20;
        }
        if ( !CG_PhysicsCharacterProxy_ShouldEntityHavePhysics(v13, &viewPos, &viewDir) )
        {
          if ( s_cg_physicsCharacterProxyPredInstances[0][v11][1] != -1 )
            CG_PhysicsCharacterProxy_RemovePhysics((LocalClientNum_t)v2, v10);
LABEL_18:
          ++v10;
          goto LABEL_20;
        }
        if ( s_cg_physicsCharacterProxyPredInstances[0][v11][1] != -1 )
          goto LABEL_18;
        CG_GetPoseOrigin(&v13->pose, &outOrigin);
        angles = v13->pose.angles;
        AnglesToQuat(&angles, &quat);
        CG_PhysicsCharacterProxy_CreatePhysics((LocalClientNum_t)v2, v10, &outOrigin, &quat);
        memset(&outOrigin, 0, sizeof(outOrigin));
        ++v10;
      }
      else
      {
        ++v10;
      }
LABEL_20:
      if ( v10 >= s_cg_physicsCharacterProxyEntityCount[v2] )
      {
        v4 = v14;
        break;
      }
    }
  }
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
}

/*
==============
CG_PhysicsCharacterProxy_RemovePhysics
==============
*/
void CG_PhysicsCharacterProxy_RemovePhysics(LocalClientNum_t localClientNum, unsigned int characterIdx)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCharacterProxy_RemovePhysics");
  CG_PhysicsCharacterProxy_RemovePhysics_0(localClientNum, characterIdx, PHYSICS_CHARACTERPROXY_TYPE_COLLISION);
  CG_PhysicsCharacterProxy_RemovePhysics_0(localClientNum, characterIdx, PHYSICS_CHARACTERPROXY_TYPE_DETAIL);
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
CG_PhysicsCharacterProxy_ShouldEntityHavePhysics
==============
*/
bool CG_PhysicsCharacterProxy_ShouldEntityHavePhysics(const centity_t *entity, const vec3_t *viewPos, const vec3_t *viewDir)
{
  bool v6; 
  bool v7; 
  const dvar_t *v8; 
  float value; 
  const dvar_t *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  vec3_t outOrigin; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 192, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v6 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->prevState.eFlags, ACTIVE, 0xCu) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->prevState.eFlags, ACTIVE, 0);
  v7 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->prevState.eFlags, ACTIVE, 0x11u);
  if ( v6 || v7 )
    return 0;
  v8 = DCONST_DVARFLT_physics_characterProxyClientDistance;
  if ( !DCONST_DVARFLT_physics_characterProxyClientDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_characterProxyClientDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v10 = DCONST_DVARFLT_physics_characterProxyClientCosFOV;
  if ( !DCONST_DVARFLT_physics_characterProxyClientCosFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_characterProxyClientCosFOV") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  CG_GetPoseOrigin(&entity->pose, &outOrigin);
  v12 = outOrigin.v[0] - viewPos->v[0];
  v13 = outOrigin.v[1] - viewPos->v[1];
  v14 = outOrigin.v[2] - viewPos->v[2];
  v15 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  if ( v15 > -0.0 )
    v16 = (float)((float)((float)(v13 * viewDir->v[1]) + (float)(v12 * viewDir->v[0])) + (float)(v14 * viewDir->v[2])) / v15;
  else
    v16 = FLOAT_1_0;
  return v15 < value || v16 > v11;
}

/*
==============
CG_PhysicsCharacterProxy_Shutdown
==============
*/
void CG_PhysicsCharacterProxy_Shutdown(void)
{
  if ( s_cg_physicsCharacterProxyEntityCount[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 111, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyEntityCount[LOCAL_CLIENT_0] == 0)", (const char *)&queryFormat, "s_cg_physicsCharacterProxyEntityCount[LOCAL_CLIENT_0] == 0") )
      __debugbreak();
  }
}

/*
==============
CG_PhysicsCharacterProxy_Update
==============
*/
void CG_PhysicsCharacterProxy_Update(LocalClientNum_t localClientNum, Physics_WorldId predictiveWorldId, Physics_WorldId authoritativeWorldId, Physics_WorldId detailWorldId)
{
  signed __int64 v4; 
  void *v5; 
  int m_serialAndIndex; 
  unsigned __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  cg_t *LocalClientGlobals; 
  cg_t *v11; 
  float v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  centity_t *Entity; 
  unsigned int v18; 
  centity_t *v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  __int64 v23; 
  unsigned __int64 v24; 
  const centity_t *v25; 
  int *v26; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  const float4 *v28; 
  float4 *v29; 
  __int128 v33; 
  float v43; 
  __int128 v45; 
  __m128 v48; 
  vec4_t *v49; 
  hkMonitorStream *v50; 
  vec3_t *v51; 
  __int64 v52; 
  unsigned int *v53; 
  __int64 v54; 
  int v55; 
  PhysicsCharacterProxy_Capsule *capsule; 
  char *v57; 
  bool v58; 
  __int64 v59; 
  int *v60; 
  __int64 v61; 
  const dvar_t *v62; 
  __int64 v63; 
  const char *v64; 
  unsigned __int64 v65; 
  int *v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  unsigned __int64 v70; 
  unsigned int v71; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v73; 
  const char *v74; 
  vec3_t *v75; 
  int *v76; 
  __int64 v77; 
  Physics_WorldId v78; 
  __int64 v79; 
  char *v80; 
  unsigned int v81; 
  const HavokPhysicsWorld *v82; 
  unsigned int v83; 
  const char *v84; 
  vec3_t *v85; 
  int *v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  unsigned int v91; 
  const HavokPhysicsWorld *v92; 
  unsigned int v93; 
  hknpBodyId v94; 
  __int64 updateBroadphaseIfWarping; 
  unsigned int v103; 
  hknpBodyId result; 
  Physics_WorldId worldId; 
  int *v106; 
  hkMonitorStream *v107; 
  vec3_t *position; 
  __int64 v109; 
  hkMonitorStream *v110; 
  vec3_t viewDir; 
  __m128 v112; 
  hkVector4f viewPos; 
  hkQuaternionf hkOrientation; 
  PhysicsCharacterProxy_Capsule capsules; 
  int v116[248]; 
  int ptr[744]; 
  vec4_t orientation[248]; 

  v5 = alloca(v4);
  v109 = -2i64;
  worldId = authoritativeWorldId;
  m_serialAndIndex = predictiveWorldId;
  result.m_serialAndIndex = predictiveWorldId;
  v7 = localClientNum;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  v107 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCharacterProxy_Update");
  v110 = v9;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  v11 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  if ( !v11->renderingThirdPerson || v11->playerTeleported )
  {
    v12 = v11->refdef.viewOffset.v[0];
    v13 = v11->refdef.viewOffset.v[1];
    v14 = v11->refdef.viewOffset.v[2];
  }
  else
  {
    v12 = v11->lastFrameViewPos.v[0];
    v13 = v11->lastFrameViewPos.v[1];
    v14 = v11->lastFrameViewPos.v[2];
  }
  viewPos.m_quad.m128_f32[2] = v14;
  viewPos.m_quad.m128_f32[1] = v13;
  viewPos.m_quad.m128_f32[0] = v12;
  viewDir = LocalClientGlobals->refdef.view.axis.m[0];
  v15 = DCONST_DVARFLT_physics_characterSoftBodyDistance;
  if ( !DCONST_DVARFLT_physics_characterSoftBodyDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_characterSoftBodyDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value * v15->current.value;
  Entity = CG_GetEntity((const LocalClientNum_t)v7, 0);
  v112.m128_u64[0] = (unsigned __int64)Entity;
  Profile_Begin(644);
  hkOrientation.m_vec.m_quad.m128_u64[0] = v7;
  Physics_SetCGCharacterProxyPredictiveDebugData((LocalClientNum_t)v7, s_cg_physicsCharacterProxyEntityCount[v7]);
  v18 = 0;
  if ( s_cg_physicsCharacterProxyEntityCount[v7] )
  {
    do
    {
      v19 = &Entity[s_cg_physicsCharacterProxyEntities[v7][v18]];
      if ( !v19 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 832, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 169, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
          __debugbreak();
      }
      if ( (v19->flags & 1) != 0 && CG_PhysicsCharacterProxy_IsEntityRightType(v19) && (unsigned int)(v19->prevState.pos.trType - 23) > 5 )
        ++v18;
      else
        CG_PhysicsChracterProxy_RemoveCharacter((LocalClientNum_t)v7, v18);
    }
    while ( v18 < s_cg_physicsCharacterProxyEntityCount[v7] );
    v9 = v107;
    m_serialAndIndex = result.m_serialAndIndex;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(645);
  v20 = 0;
  v103 = 0;
  `eh vector constructor iterator'(ptr, 0xCui64, 0xF8ui64, (void (__fastcall *)(void *))SecureVec3::SecureVec3, (void (__fastcall *)(void *))SecureVec3::~SecureVec3);
  v21 = 0i64;
  v22 = v7;
  if ( s_cg_physicsCharacterProxyEntityCount[v7] )
  {
    v23 = 248 * v7;
    v24 = v112.m128_u64[0];
    do
    {
      v106 = (int *)(v21 + v23);
      v25 = (const centity_t *)(v24 + 760i64 * s_cg_physicsCharacterProxyEntities[0][v21 + v23]);
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 858, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      v26 = &ptr[3 * v21];
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !v25->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v25->pose.origin.Get_origin, &v25->pose);
      FunctionPointer_origin(&v25->pose.origin.origin.origin, (vec3_t *)&ptr[3 * v21]);
      if ( v25->pose.isPosePrecise )
      {
        _XMM0 = (unsigned int)*v26;
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v33 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v33;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        *v26 = _XMM2;
        _XMM0 = (unsigned int)v26[1];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v33 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v33;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v26[1] = _XMM2;
        _XMM0 = (unsigned int)v26[2];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v33 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v33;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v26[2] = _XMM2;
      }
      v43 = v25->pose.angles.v[0];
      v112.m128_i32[3] = 0;
      v45 = (__int128)v112;
      *(float *)&v45 = v43;
      _XMM3 = v45;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsi+4Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+50h], 20h ; ' '
      }
      v112 = _XMM3;
      v48 = _mm128_mul_ps(_XMM3, g_degreeToRadian.v);
      Float4RadianToQuat(v29, v28);
      v49 = &orientation[(unsigned int)v21];
      *v49 = (vec4_t)v48;
      if ( CG_PhysicsCharacterProxy_ShouldEntityHavePhysics(v25, (const vec3_t *)&viewPos, &viewDir) )
      {
        if ( s_cg_physicsCharacterProxyPredInstances[0][(_QWORD)v106][1] == -1 )
          CG_PhysicsCharacterProxy_CreatePhysics((LocalClientNum_t)v7, v21, (const vec3_t *)&ptr[3 * v21], v49);
        v116[v103] = v21;
        v20 = ++v103;
      }
      else
      {
        if ( s_cg_physicsCharacterProxyPredInstances[0][(_QWORD)v106][1] != -1 )
        {
          v50 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
          v51 = (vec3_t *)v50;
          if ( v50 )
            hkMonitorStream::timerBegin(v50, "TtCG_PhysicsCharacterProxy_RemovePhysics");
          position = v51;
          CG_PhysicsCharacterProxy_RemovePhysics_0((LocalClientNum_t)v7, v21, PHYSICS_CHARACTERPROXY_TYPE_COLLISION);
          CG_PhysicsCharacterProxy_RemovePhysics_0((LocalClientNum_t)v7, v21, PHYSICS_CHARACTERPROXY_TYPE_DETAIL);
          if ( v51 )
            hkMonitorStream::timerEnd((hkMonitorStream *)v51, "Et");
        }
        v20 = v103;
      }
      v21 = (unsigned int)(v21 + 1);
      v22 = v7;
    }
    while ( (unsigned int)v21 < s_cg_physicsCharacterProxyEntityCount[v7] );
    v9 = v107;
    m_serialAndIndex = result.m_serialAndIndex;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(646);
  if ( v20 )
  {
    v52 = 248 * v22;
    v112.m128_u64[0] = 248 * v22;
    v53 = (unsigned int *)v116;
    v106 = v116;
    *(_QWORD *)viewDir.v = v20;
    do
    {
      v54 = *v53;
      CG_PhysicsCharacterProxy_CalcEncapsulatingShapes((LocalClientNum_t)v7, *v53, &capsules);
      v55 = 0;
      capsule = &capsules;
      v57 = (char *)s_cg_physicsCharacterProxyCapsules + 48 * (v54 + v52) - (_QWORD)&capsules;
      do
      {
        if ( (unsigned int)v54 >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 288, ASSERT_TYPE_ASSERT, "(entityId < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS)", (const char *)&queryFormat, "entityId < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS") )
          __debugbreak();
        if ( PhysicsCharacterProxy_DoCapsulesVary((const PhysicsCharacterProxy_Capsule *)((char *)capsule + (_QWORD)v57), capsule) )
        {
          CG_PhysicsCharacterProxy_RemovePhysics_0((LocalClientNum_t)v7, v54, (Physics_CharacterProxy_Type)v55);
          CG_PhysicsCharacterProxy_CreatePhysics_0((LocalClientNum_t)v7, v54, (Physics_CharacterProxy_Type)v55, (const vec3_t *)&ptr[3 * v54], &orientation[v54], capsule);
        }
        ++v55;
        ++capsule;
      }
      while ( v55 < 2 );
      v53 = (unsigned int *)++v106;
      v58 = (*(_QWORD *)viewDir.v)-- == 1i64;
      v52 = v112.m128_u64[0];
    }
    while ( !v58 );
    v9 = v107;
    m_serialAndIndex = result.m_serialAndIndex;
    v20 = v103;
  }
  Profile_EndInternal(NULL);
  if ( worldId != PHYSICS_WORLD_ID_INVALID && Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_LADDER_AIM|0x80) )
  {
    Profile_Begin(647);
    if ( v20 )
    {
      v59 = 248 * v7;
      v60 = v116;
      *(_QWORD *)viewDir.v = v20;
      do
      {
        v61 = (unsigned int)*v60;
        v62 = DVARBOOL_physics_enableCharacterSoftBody;
        if ( s_cg_physicsCharacterProxyAuthInstances[0][v61 + v59] == -1 )
        {
          if ( !DVARBOOL_physics_enableCharacterSoftBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_enableCharacterSoftBody") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v62);
          if ( v62->current.enabled && (float)((float)((float)((float)(*(float *)&ptr[3 * v61 + 1] - v13) * (float)(*(float *)&ptr[3 * v61 + 1] - v13)) + (float)((float)(*(float *)&ptr[3 * v61] - v12) * (float)(*(float *)&ptr[3 * v61] - v12))) + (float)((float)(*(float *)&ptr[3 * v61 + 2] - v14) * (float)(*(float *)&ptr[3 * v61 + 2] - v14))) < v16 )
            CG_PhysicsCharacterProxy_CreateAuthPhysics((LocalClientNum_t)v7, v61);
        }
        else
        {
          if ( !DVARBOOL_physics_enableCharacterSoftBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_enableCharacterSoftBody") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v62);
          if ( !v62->current.enabled || (float)((float)((float)((float)(*(float *)&ptr[3 * v61 + 1] - v13) * (float)(*(float *)&ptr[3 * v61 + 1] - v13)) + (float)((float)(*(float *)&ptr[3 * v61] - v12) * (float)(*(float *)&ptr[3 * v61] - v12))) + (float)((float)(*(float *)&ptr[3 * v61 + 2] - v14) * (float)(*(float *)&ptr[3 * v61 + 2] - v14))) > v16 )
          {
            Sys_ProfBeginNamedEvent(0xFFFF00FF, "CG_PhysicsCharacterProxy_DestroyAuthPhysics");
            v63 = v61 + v59;
            if ( (s_cg_physicsCharacterProxyAuthBodies[0][v61 + v59] & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 490, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][entityId] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][entityId] )") )
              __debugbreak();
            s_cg_physicsCharacterProxyAuthBodies[0][v63] = 0xFFFFFF;
            Physics_DestroyInstance((Physics_WorldId)(3 * v7 + 3), s_cg_physicsCharacterProxyAuthInstances[0][v63], 0);
            s_cg_physicsCharacterProxyAuthInstances[0][v63] = -1;
            if ( !s_cg_physicsCharacterProxyShapes[3 * v7 + 1][v61][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 496, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyShapes[( 1 + PHYSICS_NUM_CLIENT_PROXY_WORLDS * localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION])", (const char *)&queryFormat, "s_cg_physicsCharacterProxyShapes[Physics_GetClientCharacterProxyAuthoritativeWorldIndex( localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION]") )
              __debugbreak();
            Physics_ReleaseShape((Physics_WorldId)(3 * v7 + 3), s_cg_physicsCharacterProxyShapes[3 * v7 + 1][v61][1], 1);
            s_cg_physicsCharacterProxyShapes[3 * v7 + 1][v61][1] = NULL;
            Sys_ProfEndNamedEvent();
          }
        }
        ++v60;
        --*(_QWORD *)viewDir.v;
      }
      while ( *(_QWORD *)viewDir.v );
      v9 = v107;
      m_serialAndIndex = result.m_serialAndIndex;
      v20 = v103;
    }
    Profile_EndInternal(NULL);
  }
  Profile_Begin(648);
  if ( m_serialAndIndex == -1 )
    goto LABEL_146;
  v64 = j_va("ClientCharacterProxyUpdatePredictiveMovePhysicsPred %i", v20);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v64);
  if ( !v20 )
    goto LABEL_145;
  v65 = 248 * hkOrientation.m_vec.m_quad.m128_u64[0];
  v112.m128_u64[0] = 248 * hkOrientation.m_vec.m_quad.m128_u64[0];
  v66 = v116;
  *(_QWORD *)viewDir.v = v116;
  v106 = (int *)v20;
  do
  {
    v67 = 0i64;
    v68 = (unsigned int)*v66;
    viewPos.m_quad.m128_u64[0] = (unsigned __int64)&orientation[v68];
    position = (vec3_t *)&ptr[3 * v68];
    v69 = 2 * (v65 + v68);
    do
    {
      v70 = v67 + 2 * (v65 + v68);
      if ( (s_cg_physicsCharacterProxyPredBodies[0][0][v70] & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 953, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyPredBodies[localClientNum][characterIdx][type] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyPredBodies[localClientNum][characterIdx][type] )") )
        __debugbreak();
      v71 = s_cg_physicsCharacterProxyPredInstances[0][0][v70];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)m_serialAndIndex > 7 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v71 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(m_serialAndIndex - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
        goto LABEL_110;
      if ( m_serialAndIndex >= 0 )
      {
        if ( m_serialAndIndex <= 1 )
        {
          LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
LABEL_110:
        if ( (unsigned int)m_serialAndIndex <= 7 )
          goto LABEL_113;
      }
      LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
        __debugbreak();
LABEL_113:
      if ( v71 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)m_serialAndIndex);
      if ( !ConstWorld->world )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v71) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 954, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( predictiveWorldId, s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( predictiveWorldId, s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type] ) == 1") )
        __debugbreak();
      v73 = s_cg_physicsCharacterProxyPredInstances[0][0][v69];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)m_serialAndIndex > 7 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v73 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(m_serialAndIndex - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)m_serialAndIndex <= 1 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)m_serialAndIndex, v73, 0)->m_serialAndIndex != s_cg_physicsCharacterProxyPredBodies[0][0][v69] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 955, ASSERT_TYPE_ASSERT, "(Physics_GetRigidBodyID( predictiveWorldId, s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type], 0 ) == s_cg_physicsCharacterProxyPredBodies[localClientNum][characterIdx][type])", (const char *)&queryFormat, "Physics_GetRigidBodyID( predictiveWorldId, s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type], 0 ) == s_cg_physicsCharacterProxyPredBodies[localClientNum][characterIdx][type]") )
        __debugbreak();
      Physics_KeyframeRigidBodyTo((Physics_WorldId)m_serialAndIndex, s_cg_physicsCharacterProxyPredBodies[0][0][v69], position, &orientation[v68], 1.0, 1, 0, 0.0);
      ++v67;
      ++v69;
      v65 = v112.m128_u64[0];
    }
    while ( v67 < 2 );
    v66 = (int *)(*(_QWORD *)viewDir.v + 4i64);
    *(_QWORD *)viewDir.v += 4i64;
    v106 = (int *)((char *)v106 - 1);
  }
  while ( v106 );
  v9 = v107;
  v20 = v103;
LABEL_145:
  Sys_ProfEndNamedEvent();
LABEL_146:
  if ( worldId == PHYSICS_WORLD_ID_INVALID )
    goto LABEL_207;
  v74 = j_va("ClientCharacterProxyUpdatePredictiveMovePhysicsAuth %i", v20);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v74);
  if ( !v20 )
    goto LABEL_206;
  v75 = (vec3_t *)(248 * hkOrientation.m_vec.m_quad.m128_u64[0]);
  position = (vec3_t *)(248 * hkOrientation.m_vec.m_quad.m128_u64[0]);
  v76 = v116;
  v77 = v20;
  v78 = worldId;
  while ( 2 )
  {
    v79 = (unsigned int)*v76;
    v80 = (char *)v75 + v79;
    if ( s_cg_physicsCharacterProxyAuthInstances[0][(_QWORD)v75 + v79] != -1 )
    {
      if ( (s_cg_physicsCharacterProxyAuthBodies[0][(_QWORD)v80] & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 974, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][characterIdx] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][characterIdx] )") )
        __debugbreak();
      v81 = s_cg_physicsCharacterProxyAuthInstances[0][(_QWORD)v80];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v78 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v81 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v78 - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
      {
LABEL_171:
        if ( (unsigned int)v78 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          goto LABEL_172;
      }
      else
      {
        if ( v78 >= PHYSICS_WORLD_ID_FIRST )
        {
          if ( v78 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            LODWORD(updateBroadphaseIfWarping) = v78;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
              __debugbreak();
          }
          goto LABEL_171;
        }
LABEL_172:
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v81 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      v82 = HavokPhysics_GetConstWorld(v78);
      if ( !v82->world )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&v82->instanceManager, v81) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 975, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( authoritativeWorldId, s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( authoritativeWorldId, s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx] ) == 1") )
        __debugbreak();
      v83 = s_cg_physicsCharacterProxyAuthInstances[0][(_QWORD)v80];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v78 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v83 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v78 - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v78 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v78;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysics_GetRigidBodyID((hknpBodyId *)&worldId, v78, v83, 0)->m_serialAndIndex != s_cg_physicsCharacterProxyAuthBodies[0][(_QWORD)v80] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 976, ASSERT_TYPE_ASSERT, "(Physics_GetRigidBodyID( authoritativeWorldId, s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx], 0 ) == s_cg_physicsCharacterProxyAuthBodies[localClientNum][characterIdx])", (const char *)&queryFormat, "Physics_GetRigidBodyID( authoritativeWorldId, s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx], 0 ) == s_cg_physicsCharacterProxyAuthBodies[localClientNum][characterIdx]") )
        __debugbreak();
      Physics_KeyframeRigidBodyTo(v78, s_cg_physicsCharacterProxyAuthBodies[0][(_QWORD)v80], (const vec3_t *)&ptr[3 * v79], &orientation[v79], 1.0, 1, 0, 0.0);
      v75 = position;
    }
    ++v76;
    if ( --v77 )
      continue;
    break;
  }
  v9 = v107;
  v20 = v103;
LABEL_206:
  Sys_ProfEndNamedEvent();
LABEL_207:
  if ( detailWorldId == PHYSICS_WORLD_ID_INVALID )
    goto LABEL_288;
  v84 = j_va("ClientCharacterProxyUpdatePredictiveMovePhysicsDetail %i", v20);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v84);
  if ( !v20 )
    goto LABEL_287;
  v85 = (vec3_t *)(248 * hkOrientation.m_vec.m_quad.m128_u64[0]);
  position = (vec3_t *)(248 * hkOrientation.m_vec.m_quad.m128_u64[0]);
  v86 = v116;
  *(_QWORD *)viewDir.v = v116;
  v106 = (int *)v20;
  while ( 2 )
  {
    v87 = (unsigned int)*v86;
    v88 = v87;
    v89 = 3 * v87;
    v90 = 2 * ((_QWORD)v85 + v87);
    v112.m128_u64[0] = 2i64;
    while ( 2 )
    {
      if ( (s_cg_physicsCharacterProxyDetailBodies[0][0][v90] & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 996, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyDetailBodies[localClientNum][characterIdx][type] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyDetailBodies[localClientNum][characterIdx][type] )") )
        __debugbreak();
      v91 = s_cg_physicsCharacterProxyDetailInstances[0][0][v90];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)detailWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v91 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(detailWorldId - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
      {
LABEL_232:
        if ( (unsigned int)detailWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          goto LABEL_233;
      }
      else
      {
        if ( detailWorldId >= PHYSICS_WORLD_ID_FIRST )
        {
          if ( detailWorldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            LODWORD(updateBroadphaseIfWarping) = detailWorldId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
              __debugbreak();
          }
          goto LABEL_232;
        }
LABEL_233:
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v91 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      v92 = HavokPhysics_GetConstWorld(detailWorldId);
      if ( !v92->world )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&v92->instanceManager, v91) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 997, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( detailWorldId, s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( detailWorldId, s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type] ) == 1") )
        __debugbreak();
      v93 = s_cg_physicsCharacterProxyDetailInstances[0][0][v90];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)detailWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v93 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(detailWorldId - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)detailWorldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysics_GetRigidBodyID((hknpBodyId *)&worldId, detailWorldId, v93, 0)->m_serialAndIndex != s_cg_physicsCharacterProxyDetailBodies[0][0][v90] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 998, ASSERT_TYPE_ASSERT, "(Physics_GetRigidBodyID( detailWorldId, s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type], 0 ) == s_cg_physicsCharacterProxyDetailBodies[localClientNum][characterIdx][type])", (const char *)&queryFormat, "Physics_GetRigidBodyID( detailWorldId, s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type], 0 ) == s_cg_physicsCharacterProxyDetailBodies[localClientNum][characterIdx][type]") )
        __debugbreak();
      v94.m_serialAndIndex = s_cg_physicsCharacterProxyDetailBodies[0][0][v90];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)detailWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (v94.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(updateBroadphaseIfWarping) = detailWorldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( ((ptr[v89] & 0x7F800000) == 2139095040 || (ptr[v89 + 1] & 0x7F800000) == 2139095040 || (ptr[v89 + 2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
        __debugbreak();
      if ( ((LODWORD(orientation[v88].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientation[v88].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientation[v88].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientation[v88].v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
        __debugbreak();
      viewPos.m_quad.m128_f32[0] = 0.03125 * *(float *)&ptr[v89];
      viewPos.m_quad.m128_f32[1] = 0.03125 * *(float *)&ptr[v89 + 1];
      viewPos.m_quad.m128_f32[2] = 0.03125 * *(float *)&ptr[v89 + 2];
      viewPos.m_quad.m128_f32[3] = 0.0;
      _XMM4 = LODWORD(orientation[v88].v[0]);
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rbp+r15*8+1F90h+orientation+4], 1F90h+var_1FA0+20h
        vinsertps xmm4, xmm4, dword ptr [rbp+r15*8+1F90h+orientation+8], 1F90h+var_1FA0+30h
        vinsertps xmm4, xmm4, dword ptr [rbp+r15*8+1F90h+orientation+0Ch], 1F90h+var_1FA0+40h
        vdpps   xmm0, xmm4, xmm4, 0FFh
        vrsqrtps xmm1, xmm0
      }
      hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM0), _XMM1)), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM4);
      HavokPhysics_WarpRigidBodyTo(detailWorldId, v94, &viewPos, &hkOrientation, 0, 0);
      ++v90;
      if ( --v112.m128_u64[0] )
        continue;
      break;
    }
    v86 = (int *)(*(_QWORD *)viewDir.v + 4i64);
    *(_QWORD *)viewDir.v += 4i64;
    v58 = v106 == (int *)1;
    v106 = (int *)((char *)v106 - 1);
    v85 = position;
    if ( !v58 )
      continue;
    break;
  }
  v9 = v107;
LABEL_287:
  Sys_ProfEndNamedEvent();
LABEL_288:
  Profile_EndInternal(NULL);
  `eh vector destructor iterator'(ptr, 0xCui64, 0xF8ui64, (void (__fastcall *)(void *))SecureVec3::~SecureVec3);
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
}

/*
==============
CG_PhysicsChracterProxy_RemoveCharacter
==============
*/
void CG_PhysicsChracterProxy_RemoveCharacter(LocalClientNum_t localClientNum, unsigned int characterIdx)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int128 v23; 
  __int64 v24; 

  v2 = localClientNum;
  v3 = characterIdx;
  CG_PhysicsCharacterProxy_RemovePhysics(localClientNum, characterIdx);
  v4 = (unsigned int)v3;
  v5 = --s_cg_physicsCharacterProxyEntityCount[v2];
  v6 = v2;
  v7 = 248 * v2 + v5;
  v8 = 248 * v2 + v3;
  v9 = v8;
  s_cg_physicsCharacterProxyEntities[0][v9] = s_cg_physicsCharacterProxyEntities[0][v7];
  s_cg_physicsCharacterProxyEntities[0][v7] = -1;
  v10 = 3 * (int)v2;
  v11 = 248 * v10;
  v12 = 248 * v10 + v4;
  v13 = 248 * (v10 + 1);
  v14 = v4 + v13;
  v15 = 248 * (v10 + 2);
  v16 = v4 + v15;
  v17 = v11 + v5;
  v18 = v13 + v5;
  v19 = v15 + v5;
  v20 = v6 * 248 + v5;
  v21 = 6 * v8;
  *(_OWORD *)&s_cg_physicsCharacterProxyCapsules[0][0][0].center.v[2 * v21] = *(_OWORD *)s_cg_physicsCharacterProxyCapsules[v6][v5][0].center.v;
  *((double *)&s_cg_physicsCharacterProxyCapsules[0][0][0].radius + v21) = *(double *)&s_cg_physicsCharacterProxyCapsules[v6][v5][0].radius;
  v22 = 6 * (v6 * 248 + v5) + 3;
  v23 = *(_OWORD *)&s_cg_physicsCharacterProxyCapsules[0][0][0].center.v[2 * v22];
  s_cg_physicsCharacterProxyShapes[0][v12][0] = s_cg_physicsCharacterProxyShapes[0][v17][0];
  s_cg_physicsCharacterProxyShapes[0][v14][0] = s_cg_physicsCharacterProxyShapes[0][v18][0];
  s_cg_physicsCharacterProxyShapes[0][v16][0] = s_cg_physicsCharacterProxyShapes[0][v19][0];
  LODWORD(v21) = s_cg_physicsCharacterProxyPredInstances[v6][v5][0];
  s_cg_physicsCharacterProxyShapes[0][v17][0] = NULL;
  s_cg_physicsCharacterProxyShapes[0][v18][0] = NULL;
  s_cg_physicsCharacterProxyPredInstances[0][v9][0] = v21;
  LODWORD(v21) = s_cg_physicsCharacterProxyDetailInstances[v6][v5][0];
  s_cg_physicsCharacterProxyShapes[0][v19][0] = NULL;
  s_cg_physicsCharacterProxyDetailInstances[0][v9][0] = v21;
  s_cg_physicsCharacterProxyPredBodies[0][v9][0] = s_cg_physicsCharacterProxyPredBodies[v6][v5][0];
  s_cg_physicsCharacterProxyDetailBodies[0][v9][0] = s_cg_physicsCharacterProxyDetailBodies[v6][v5][0];
  v24 = 6 * v8 + 3;
  *(_OWORD *)&s_cg_physicsCharacterProxyCapsules[0][0][0].center.v[2 * v24] = v23;
  *((double *)&s_cg_physicsCharacterProxyCapsules[0][0][0].radius + v24) = *((double *)&s_cg_physicsCharacterProxyCapsules[0][0][0].radius + v22);
  s_cg_physicsCharacterProxyShapes[0][v12][1] = s_cg_physicsCharacterProxyShapes[0][v17][1];
  s_cg_physicsCharacterProxyShapes[0][v14][1] = s_cg_physicsCharacterProxyShapes[0][v18][1];
  s_cg_physicsCharacterProxyShapes[0][v16][1] = s_cg_physicsCharacterProxyShapes[0][v19][1];
  s_cg_physicsCharacterProxyShapes[0][v17][1] = NULL;
  s_cg_physicsCharacterProxyShapes[0][v18][1] = NULL;
  s_cg_physicsCharacterProxyPredInstances[0][v20][0] = -1;
  LODWORD(v24) = s_cg_physicsCharacterProxyPredInstances[v6][v5][1];
  s_cg_physicsCharacterProxyShapes[0][v19][1] = NULL;
  s_cg_physicsCharacterProxyDetailInstances[0][v20][0] = -1;
  s_cg_physicsCharacterProxyPredBodies[0][v20][0] = 0xFFFFFF;
  s_cg_physicsCharacterProxyDetailBodies[0][v20][0] = 0xFFFFFF;
  s_cg_physicsCharacterProxyPredInstances[0][v9][1] = v24;
  s_cg_physicsCharacterProxyDetailInstances[0][v9][1] = s_cg_physicsCharacterProxyDetailInstances[v6][v5][1];
  s_cg_physicsCharacterProxyPredBodies[0][v9][1] = s_cg_physicsCharacterProxyPredBodies[v6][v5][1];
  s_cg_physicsCharacterProxyDetailBodies[0][v9][1] = s_cg_physicsCharacterProxyDetailBodies[v6][v5][1];
  s_cg_physicsCharacterProxyAuthInstances[0][v8] = s_cg_physicsCharacterProxyAuthInstances[0][v7];
  s_cg_physicsCharacterProxyAuthBodies[0][v8] = s_cg_physicsCharacterProxyAuthBodies[0][v7];
  s_cg_physicsCharacterProxyAuthBodies[0][v7] = 0xFFFFFF;
  s_cg_physicsCharacterProxyPredInstances[0][v20][1] = -1;
  s_cg_physicsCharacterProxyDetailInstances[0][v20][1] = -1;
  s_cg_physicsCharacterProxyPredBodies[0][v20][1] = 0xFFFFFF;
  s_cg_physicsCharacterProxyDetailBodies[0][v20][1] = 0xFFFFFF;
  s_cg_physicsCharacterProxyAuthInstances[0][v7] = -1;
}

