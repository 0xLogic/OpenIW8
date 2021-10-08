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
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v9; 
  __int64 v10; 
  Physics_WorldId v11; 
  hknpShape *v14; 
  const entityState_t *p_nextState; 
  unsigned __int16 v16; 
  int Ref; 
  const float4 *v24; 
  float4 *v25; 
  int v26; 
  unsigned int v27; 
  unsigned int RigidBodyID; 
  char *optionalInplaceBuffer; 
  vec3_t outOrigin; 
  __int64 v31; 
  vec3_t majorAxis; 
  __int128 v33; 
  vec4_t orientationAsQuat; 
  PhysicsCharacterProxy_Capsule capsules; 
  vec3_t center; 
  unsigned int v39; 

  v31 = -2i64;
  v3 = entityId;
  v4 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "CG_PhysicsCharacterProxy_CreateAuthPhysics");
  CG_PhysicsCharacterProxy_CalcEncapsulatingShapes((LocalClientNum_t)v4, v3, &capsules);
  v5 = (unsigned int)v3;
  v6 = v3 + 248 * v4;
  _R15 = CG_GetEntity((const LocalClientNum_t)v4, s_cg_physicsCharacterProxyEntities[0][v6]);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 446, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+128h+majorAxis], xmm0
    vmovss  dword ptr [rsp+128h+majorAxis+4], xmm0
    vmovss  dword ptr [rsp+128h+majorAxis+8], xmm0
  }
  v9 = (int)v39;
  if ( v39 >= 3 )
  {
    LODWORD(optionalInplaceBuffer) = v39;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", optionalInplaceBuffer, 3) )
      __debugbreak();
  }
  majorAxis.v[v9] = 1.0;
  v10 = v5 + 744i64 * (_DWORD)v4;
  if ( s_cg_physicsCharacterProxyShapes[3 * (int)v4 + 1][v5][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 454, ASSERT_TYPE_ASSERT, "(!s_cg_physicsCharacterProxyShapes[( 1 + PHYSICS_NUM_CLIENT_PROXY_WORLDS * localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION])", (const char *)&queryFormat, "!s_cg_physicsCharacterProxyShapes[Physics_GetClientCharacterProxyAuthoritativeWorldIndex( localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION]") )
    __debugbreak();
  v11 = 3 * v4 + 3;
  __asm
  {
    vmovss  xmm3, [rsp+128h+var_50]; radius
    vmovss  xmm2, [rsp+128h+var_54]; halfHeight
  }
  v14 = Physics_CreateShapeCapsule(v11, &center, *(float *)&_XMM2, *(float *)&_XMM3, &majorAxis, NULL, 0, Permanent);
  s_cg_physicsCharacterProxyShapes[3 * (int)v4 + 1][v5][1] = v14;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 456, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyShapes[( 1 + PHYSICS_NUM_CLIENT_PROXY_WORLDS * localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION])", (const char *)&queryFormat, "s_cg_physicsCharacterProxyShapes[Physics_GetClientCharacterProxyAuthoritativeWorldIndex( localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION]") )
    __debugbreak();
  p_nextState = &_R15->nextState;
  v16 = truncate_cast<unsigned short,short>(_R15->nextState.number);
  Ref = Physics_MakeRef(Physics_RefSystem_GCharacterProxies, Physics_RelationshipSystem_None, 1u, v16);
  CG_GetPoseOrigin(&_R15->pose, &outOrigin);
  __asm { vmovss  xmm0, dword ptr [r15+48h] }
  HIDWORD(v33) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+90h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r15+4Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [r15+50h], 20h ; ' '
    vmulps  xmm0, xmm3, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
  }
  Float4RadianToQuat(v25, v24);
  __asm { vmovups xmmword ptr [rsp+128h+orientationAsQuat], xmm0 }
  v26 = 0x2000000;
  if ( _R15 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1976, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( _R15->nextState.eType == ET_AGENT || BG_IsActorEntity(p_nextState) || BG_IsFakeActor(p_nextState) )
    v26 = 0x4000;
  if ( s_cg_physicsCharacterProxyAuthInstances[0][v6] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 473, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyAuthInstances[localClientNum][entityId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_cg_physicsCharacterProxyAuthInstances[localClientNum][entityId] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v27 = Physics_InstantiateKeyframedBody(v11, s_cg_physicsCharacterProxyShapes[1][v10][1], Ref, "character proxy", "PM_Player_SoftContact", v26, &outOrigin, &orientationAsQuat, 1, 1, 0);
  s_cg_physicsCharacterProxyAuthInstances[0][v6] = v27;
  if ( v27 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 476, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyAuthInstances[localClientNum][entityId] != 0xFFFFFFFF)", (const char *)&queryFormat, "s_cg_physicsCharacterProxyAuthInstances[localClientNum][entityId] != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID(v11, s_cg_physicsCharacterProxyAuthInstances[0][v6], 0);
  s_cg_physicsCharacterProxyAuthBodies[0][v6] = RigidBodyID;
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
  __int64 v11; 
  __int16 *v19; 
  __int64 v20; 
  __int64 v21; 
  CgEntitySystem *v22; 
  centity_t *v23; 
  unsigned __int8 eType; 
  const char *v25; 
  const char *v26; 
  vec4_t *setColor; 
  __int64 forceColor; 
  __int64 shadow; 
  float v37; 
  float v38; 
  unsigned int v39; 
  char dest[256]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _R12 = x;
  v11 = localClientNum;
  _R13 = y;
  Com_sprintf(dest, 0x100ui64, "Client Entities");
  __asm
  {
    vmovss  xmm6, [rsp+1D8h+charHeight]
    vmovss  xmm2, dword ptr [r13+0]; y
    vmovss  xmm1, dword ptr [r12]; x
    vmovss  [rsp+1D8h+var_1A0], xmm6
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v37, 0);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [r13+0]
    vmovss  xmm7, [rsp+1D8h+tabWidth]
    vmovss  dword ptr [r13+0], xmm0
    vaddss  xmm0, xmm7, dword ptr [r12]
  }
  v39 = 0;
  __asm { vmovss  dword ptr [r12], xmm0 }
  v19 = s_cg_physicsCharacterProxyEntities[v11];
  v20 = 248i64;
  do
  {
    v21 = *v19;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(shadow) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", shadow) )
        __debugbreak();
    }
    if ( (unsigned int)v11 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(shadow) = CgEntitySystem::ms_allocatedCount;
      LODWORD(forceColor) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", forceColor, shadow) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v11] )
    {
      LODWORD(shadow) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", shadow) )
        __debugbreak();
    }
    v22 = CgEntitySystem::ms_entitySystemArray[v11];
    if ( (unsigned int)v21 >= 0x800 )
    {
      LODWORD(shadow) = 2048;
      LODWORD(forceColor) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", forceColor, shadow) )
        __debugbreak();
    }
    v23 = &v22->m_entities[v21];
    if ( (CgEntitySystem *)((char *)v22 + 760 * v21) != (CgEntitySystem *)-16i64 )
    {
      eType = v23->pose.eType;
      v25 = "UNSUPPORTED TYPE";
      if ( v23->pose.eType == 1 )
        v25 = "PLAYER";
      if ( eType == 17 )
        v25 = "AGENT";
      if ( eType == 19 )
        v25 = "ACTOR";
      if ( eType == 6 )
      {
        v26 = "DRONE";
        if ( v22->m_entities[v21].nextState.un.scriptMoverType != 1 )
          v26 = v25;
        v25 = v26;
      }
      LODWORD(setColor) = v22->m_entities[v21].nextState.number;
      Com_sprintf(dest, 0x100ui64, "%i entity %i %s", v39, setColor, v25);
      __asm
      {
        vmovss  xmm2, dword ptr [r13+0]; y
        vmovss  xmm1, dword ptr [r12]; x
        vmovss  [rsp+1D8h+var_1A0], xmm6
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v38, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [r13+0]
        vmovss  dword ptr [r13+0], xmm0
      }
      ++v39;
    }
    ++v19;
    --v20;
  }
  while ( v20 );
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [r12], xmm1
    vmovaps xmm6, [rsp+1D8h+var_58]
    vmovaps xmm7, [rsp+1D8h+var_68]
  }
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth
==============
*/
void CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth(LocalClientNum_t localClientNum)
{
  __int64 v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int16 *v12; 
  __int64 v15; 
  CgEntitySystem *v16; 
  __int64 v17; 
  bool v18; 
  unsigned int v19; 
  int v20; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v22; 
  hknpBodyId *RigidBodyID; 
  __int64 duration; 
  __int64 v57; 
  __int16 *v58; 
  __int64 v59; 
  hknpBodyId result; 
  vec3_t out; 
  vec3_t end; 
  int v63; 
  vec3_t in; 
  vec3_t v65; 
  vec3_t position; 
  vec4_t orientation; 
  char v71; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  v9 = localClientNum;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
  }
  v59 = 248i64;
  v10 = s_cg_physicsCharacterProxyAuthInstances[localClientNum];
  v11 = localClientNum;
  v12 = s_cg_physicsCharacterProxyEntities[localClientNum];
  v58 = v12;
  _R13 = &s_cg_physicsCharacterProxyCapsules[localClientNum][0][1].center.v[1];
  __asm { vxorps  xmm11, xmm11, xmm11 }
  do
  {
    v15 = *v12;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v57) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v57) )
        __debugbreak();
    }
    if ( (unsigned int)v9 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v57) = CgEntitySystem::ms_allocatedCount;
      LODWORD(duration) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v57) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v11] )
    {
      LODWORD(v57) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v57) )
        __debugbreak();
    }
    v16 = CgEntitySystem::ms_entitySystemArray[v11];
    if ( (unsigned int)v15 >= 0x800 )
    {
      LODWORD(v57) = 2048;
      LODWORD(duration) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, v57) )
        __debugbreak();
    }
    if ( (CgEntitySystem *)((char *)v16 + 760 * v15) != (CgEntitySystem *)-16i64 && *v10 != -1 )
    {
      if ( _R13 == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1145, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
        __debugbreak();
      v17 = *((int *)_R13 + 4);
      if ( (unsigned int)v17 >= 3 )
      {
        LODWORD(v57) = 3;
        *(float *)&duration = _R13[4];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v57) )
          __debugbreak();
      }
      v18 = !g_physicsInitialized;
      v19 = *v10;
      *(&v63 + v17) = 1065353216;
      v20 = 3 * v9 + 3;
      if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v20 > 7 )
      {
        LODWORD(v57) = 3 * v9 + 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v57) )
          __debugbreak();
      }
      if ( v19 == -1 )
      {
        LODWORD(v57) = 3 * v9 + 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v57) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v9 + 1) <= 5 )
      {
        LODWORD(v57) = 3 * v9 + 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v57) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        if ( v20 < 0 )
          goto LABEL_41;
        if ( v20 <= 1 )
        {
          LODWORD(v57) = 3 * v9 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v57) )
            __debugbreak();
        }
      }
      if ( (unsigned int)v20 <= 7 )
      {
LABEL_43:
        if ( v19 == -1 )
        {
          LODWORD(v57) = 3 * v9 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v57) )
            __debugbreak();
        }
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v20);
        if ( !ConstWorld->world )
        {
          LODWORD(v57) = 3 * v9 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v57) )
            __debugbreak();
        }
        if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v19) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1152, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( Physics_GetClientAuthoritativeWorldId( localClientNum ), s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( Physics_GetClientAuthoritativeWorldId( localClientNum ), s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx] ) == 1") )
          __debugbreak();
        v22 = *v10;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v20 > 7 )
        {
          LODWORD(v57) = 3 * v9 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v57) )
            __debugbreak();
        }
        if ( v22 == -1 )
        {
          LODWORD(v57) = 3 * v9 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v57) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v9 + 1) <= 5 )
        {
          LODWORD(v57) = 3 * v9 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v57) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
        {
          LODWORD(v57) = 3 * v9 + 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v57) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v20, v22, 0);
        Physics_GetRigidBodyTransform((const Physics_WorldId)v20, RigidBodyID->m_serialAndIndex, &position, &orientation);
        __asm
        {
          vmovss  xmm7, dword ptr [r13+8]
          vxorps  xmm2, xmm7, xmm10
          vmulss  xmm0, xmm2, [rsp+150h+var_D8]
          vaddss  xmm1, xmm0, dword ptr [r12]
          vmulss  xmm0, xmm2, [rsp+150h+var_D4]
          vmovss  dword ptr [rbp+50h+in], xmm1
          vaddss  xmm1, xmm0, dword ptr [r13+0]
          vmulss  xmm0, xmm2, [rbp+50h+var_D0]
          vmulss  xmm2, xmm7, [rsp+150h+var_D4]
          vmovss  dword ptr [rbp+50h+in+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [r13+4]
          vmulss  xmm0, xmm7, [rsp+150h+var_D8]
          vmovss  dword ptr [rbp+50h+in+8], xmm1
          vaddss  xmm1, xmm0, dword ptr [r12]
          vaddss  xmm0, xmm2, dword ptr [r13+0]
          vmovss  dword ptr [rbp+50h+var_B8], xmm1
          vmulss  xmm1, xmm7, [rbp+50h+var_D0]
          vaddss  xmm2, xmm1, dword ptr [r13+4]
          vmovss  dword ptr [rbp+50h+var_B8+8], xmm2
          vmovss  dword ptr [rbp+50h+var_B8+4], xmm0
        }
        QuatTransform(&orientation, &in, &out);
        QuatTransform(&orientation, &v65, &end);
        __asm
        {
          vucomiss xmm11, dword ptr [r13+8]
          vmovss  xmm5, dword ptr [rbp+50h+position]
          vaddss  xmm1, xmm5, dword ptr [rsp+150h+out]
          vmovss  xmm4, dword ptr [rbp+50h+position+4]
          vmovss  xmm3, dword ptr [rbp+50h+position+8]
          vaddss  xmm2, xmm4, dword ptr [rsp+150h+end+4]
          vaddss  xmm0, xmm5, dword ptr [rsp+150h+end]
          vmovss  dword ptr [rsp+150h+out], xmm1
          vaddss  xmm1, xmm4, dword ptr [rsp+150h+out+4]
          vmovss  dword ptr [rsp+150h+out+4], xmm1
          vaddss  xmm1, xmm3, dword ptr [rsp+150h+out+8]
          vmovss  dword ptr [rsp+150h+out+8], xmm1
          vaddss  xmm1, xmm3, dword ptr [rsp+150h+end+8]
          vmovss  dword ptr [rsp+150h+end+4], xmm2
          vmovss  xmm2, dword ptr [r13+0Ch]; radius
          vmovss  dword ptr [rsp+150h+end+8], xmm1
          vmovss  dword ptr [rsp+150h+end], xmm0
        }
        if ( v18 )
        {
          __asm { vmovaps xmm1, xmm2; radius }
          CG_DebugSphere(&out, *(float *)&_XMM1, &colorYellow, 1, 0);
        }
        else
        {
          CG_DebugCapsule(&out, &end, *(float *)&_XMM2, &colorYellow, 1, 0);
        }
        goto LABEL_72;
      }
LABEL_41:
      LODWORD(v57) = 3 * v9 + 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v57) )
        __debugbreak();
      goto LABEL_43;
    }
LABEL_72:
    v12 = v58 + 1;
    _R13 += 12;
    ++v58;
    ++v10;
    v18 = v59-- == 1;
    v11 = v9;
  }
  while ( !v18 );
  __asm
  {
    vmovaps xmm9, [rsp+150h+var_68+8]
    vmovaps xmm8, [rsp+150h+var_58+8]
    vmovaps xmm7, [rsp+150h+var_48+8]
    vmovaps xmm6, xmmword ptr [rsp+150h+var_38+8]
  }
  _R11 = &v71;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail
==============
*/
void CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail(LocalClientNum_t localClientNum)
{
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v19; 
  __int64 v20; 
  CgEntitySystem *v21; 
  int v22; 
  __int64 v23; 
  unsigned int *v25; 
  __int64 v26; 
  bool v27; 
  unsigned int v28; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v30; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v33; 
  __int64 duration; 
  __int64 v71; 
  unsigned int v72; 
  __int64 v74; 
  hknpBodyId result; 
  __int64 v76; 
  vec3_t center; 
  vec3_t end; 
  int v79[4]; 
  vec3_t in; 
  vec3_t v81; 
  vec4_t out; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
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
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm14, cs:__real@42000000
  }
  v14 = localClientNum;
  v15 = 0i64;
  v16 = 248i64 * (int)localClientNum;
  v72 = 0;
  v76 = v16;
  v17 = v14;
  v74 = 0i64;
  __asm { vxorps  xmm13, xmm13, xmm13 }
  do
  {
    v19 = v16 + v15;
    v20 = s_cg_physicsCharacterProxyEntities[0][v16 + v15];
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v71) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v71) )
        __debugbreak();
    }
    if ( (unsigned int)v14 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v71) = CgEntitySystem::ms_allocatedCount;
      LODWORD(duration) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v71) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v17] )
    {
      LODWORD(v71) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v71) )
        __debugbreak();
    }
    v21 = CgEntitySystem::ms_entitySystemArray[v17];
    if ( (unsigned int)v20 >= 0x800 )
    {
      LODWORD(v71) = 2048;
      LODWORD(duration) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, v71) )
        __debugbreak();
    }
    if ( (CgEntitySystem *)((char *)v21 + 760 * v20) != (CgEntitySystem *)-16i64 )
    {
      v22 = 3 * v14 + 4;
      v23 = 2i64;
      _R14 = &s_cg_physicsCharacterProxyCapsules[0][v19][0].center.v[1];
      v25 = s_cg_physicsCharacterProxyDetailInstances[0][v19];
      while ( 1 )
      {
        if ( _R14 == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1210, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
          __debugbreak();
        v26 = *((int *)_R14 + 4);
        __asm
        {
          vmovss  [rbp+90h+var_110], xmm13
          vmovss  [rbp+90h+var_10C], xmm13
          vmovss  [rbp+90h+var_108], xmm13
        }
        if ( (unsigned int)v26 >= 3 )
        {
          LODWORD(v71) = 3;
          LODWORD(duration) = v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v71) )
            __debugbreak();
        }
        v27 = !g_physicsInitialized;
        v28 = *v25;
        v79[v26] = 1065353216;
        if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v22 > 7 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( v28 == -1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v71) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v22 - 2) <= 5 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v71) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          if ( v22 < 0 )
            goto LABEL_41;
          if ( v22 <= 1 )
          {
            LODWORD(v71) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v71) )
              __debugbreak();
          }
        }
        if ( (unsigned int)v22 > 7 )
        {
LABEL_41:
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( v28 == -1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v71) )
            __debugbreak();
        }
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v22);
        if ( !ConstWorld->world )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v71) )
            __debugbreak();
        }
        if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v28) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1218, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( localClientNum ), s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( localClientNum ), s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type] ) == 1") )
          __debugbreak();
        v30 = *v25;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v22 > 7 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( v30 == -1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v71) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v22 - 2) <= 5 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v71) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v22 <= 1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v71) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v22, v30, 0)->m_serialAndIndex;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v22 > 7 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v71) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v22 - 2) <= 5 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v71) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v22 <= 1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v71) )
            __debugbreak();
        }
        if ( (unsigned int)v22 > 7 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v71) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v22)->world;
        if ( !world )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v71) )
            __debugbreak();
        }
        v33 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
        __asm
        {
          vmulss  xmm10, xmm14, dword ptr [rax+30h]
          vmulss  xmm11, xmm14, dword ptr [rax+34h]
          vmulss  xmm12, xmm14, dword ptr [rax+38h]
        }
        Axis34ToQuat(v33, &out);
        __asm
        {
          vmovss  xmm7, dword ptr [r14+8]
          vxorps  xmm2, xmm7, xmm15
          vmulss  xmm0, xmm2, [rbp+90h+var_110]
          vaddss  xmm1, xmm0, dword ptr [r12]
          vmulss  xmm0, xmm2, [rbp+90h+var_10C]
          vmovss  dword ptr [rbp+90h+in], xmm1
          vaddss  xmm1, xmm0, dword ptr [r14]
          vmulss  xmm0, xmm2, [rbp+90h+var_108]
          vmulss  xmm2, xmm7, [rbp+90h+var_10C]
          vmovss  dword ptr [rbp+90h+in+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [r14+4]
          vmulss  xmm0, xmm7, [rbp+90h+var_110]
          vmovss  dword ptr [rbp+90h+in+8], xmm1
          vaddss  xmm1, xmm0, dword ptr [r12]
          vaddss  xmm0, xmm2, dword ptr [r14]
          vmovss  dword ptr [rbp+90h+var_F0], xmm1
          vmulss  xmm1, xmm7, [rbp+90h+var_108]
          vaddss  xmm2, xmm1, dword ptr [r14+4]
          vmovss  dword ptr [rbp+90h+var_F0+8], xmm2
          vmovss  dword ptr [rbp+90h+var_F0+4], xmm0
        }
        QuatTransform(&out, &in, &center);
        QuatTransform(&out, &v81, &end);
        __asm
        {
          vucomiss xmm13, dword ptr [r14+8]
          vaddss  xmm2, xmm12, dword ptr [rsp+190h+center+8]
          vaddss  xmm1, xmm10, dword ptr [rsp+190h+center]
          vaddss  xmm0, xmm11, dword ptr [rsp+190h+center+4]
          vmovss  dword ptr [rsp+190h+center+8], xmm2
          vaddss  xmm2, xmm12, dword ptr [rsp+190h+end+8]
          vmovss  dword ptr [rsp+190h+center], xmm1
          vaddss  xmm1, xmm10, dword ptr [rsp+190h+end]
          vmovss  dword ptr [rsp+190h+center+4], xmm0
          vaddss  xmm0, xmm11, dword ptr [rsp+190h+end+4]
          vmovss  dword ptr [rsp+190h+end+8], xmm2
          vmovss  xmm2, dword ptr [r14+0Ch]; radius
          vmovss  dword ptr [rsp+190h+end], xmm1
          vmovss  dword ptr [rsp+190h+end+4], xmm0
        }
        if ( v27 )
        {
          __asm { vmovaps xmm1, xmm2; radius }
          CG_DebugSphere(&center, *(float *)&_XMM1, &colorYellow, 1, 0);
        }
        else
        {
          CG_DebugCapsule(&center, &end, *(float *)&_XMM2, &colorYellow, 1, 0);
        }
        _R14 += 6;
        ++v25;
        if ( !--v23 )
        {
          LODWORD(v14) = localClientNum;
          break;
        }
      }
    }
    v17 = (int)v14;
    v15 = v74 + 1;
    ++v72;
    ++v74;
    v16 = v76;
  }
  while ( v72 < 0xF8 );
  _R11 = &v83;
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
}

/*
==============
CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred
==============
*/
void CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred(LocalClientNum_t localClientNum)
{
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v19; 
  __int64 v20; 
  CgEntitySystem *v21; 
  int v22; 
  __int64 v23; 
  unsigned int *v25; 
  __int64 v26; 
  bool v27; 
  unsigned int v28; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v30; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v33; 
  __int64 duration; 
  __int64 v71; 
  unsigned int v72; 
  __int64 v74; 
  hknpBodyId result; 
  __int64 v76; 
  vec3_t center; 
  vec3_t end; 
  int v79[4]; 
  vec3_t in; 
  vec3_t v81; 
  vec4_t out; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
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
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm14, cs:__real@42000000
  }
  v14 = localClientNum;
  v15 = 0i64;
  v16 = 248i64 * (int)localClientNum;
  v72 = 0;
  v76 = v16;
  v17 = v14;
  v74 = 0i64;
  __asm { vxorps  xmm13, xmm13, xmm13 }
  do
  {
    v19 = v16 + v15;
    v20 = s_cg_physicsCharacterProxyEntities[0][v16 + v15];
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v71) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v71) )
        __debugbreak();
    }
    if ( (unsigned int)v14 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v71) = CgEntitySystem::ms_allocatedCount;
      LODWORD(duration) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, v71) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v17] )
    {
      LODWORD(v71) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v71) )
        __debugbreak();
    }
    v21 = CgEntitySystem::ms_entitySystemArray[v17];
    if ( (unsigned int)v20 >= 0x800 )
    {
      LODWORD(v71) = 2048;
      LODWORD(duration) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, v71) )
        __debugbreak();
    }
    if ( (CgEntitySystem *)((char *)v21 + 760 * v20) != (CgEntitySystem *)-16i64 )
    {
      v22 = 3 * v14 + 2;
      v23 = 2i64;
      _R14 = &s_cg_physicsCharacterProxyCapsules[0][v19][0].center.v[1];
      v25 = s_cg_physicsCharacterProxyPredInstances[0][v19];
      while ( 1 )
      {
        if ( _R14 == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1075, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
          __debugbreak();
        v26 = *((int *)_R14 + 4);
        __asm
        {
          vmovss  [rbp+90h+var_110], xmm13
          vmovss  [rbp+90h+var_10C], xmm13
          vmovss  [rbp+90h+var_108], xmm13
        }
        if ( (unsigned int)v26 >= 3 )
        {
          LODWORD(v71) = 3;
          LODWORD(duration) = v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v71) )
            __debugbreak();
        }
        v27 = !g_physicsInitialized;
        v28 = *v25;
        v79[v26] = 1065353216;
        if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v22 > 7 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( v28 == -1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v71) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v22 - 2) <= 5 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v71) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          if ( v22 < 0 )
            goto LABEL_41;
          if ( v22 <= 1 )
          {
            LODWORD(v71) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v71) )
              __debugbreak();
          }
        }
        if ( (unsigned int)v22 > 7 )
        {
LABEL_41:
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( v28 == -1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v71) )
            __debugbreak();
        }
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v22);
        if ( !ConstWorld->world )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v71) )
            __debugbreak();
        }
        if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v28) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 1083, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( Physics_GetClientPredictiveWorldId( localClientNum ), s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( Physics_GetClientPredictiveWorldId( localClientNum ), s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type] ) == 1") )
          __debugbreak();
        v30 = *v25;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v22 > 7 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( v30 == -1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v71) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v22 - 2) <= 5 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v71) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v22 <= 1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v71) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v22, v30, 0)->m_serialAndIndex;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v22 > 7 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v71) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v22 - 2) <= 5 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v71) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v22 <= 1 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v71) )
            __debugbreak();
        }
        if ( (unsigned int)v22 > 7 )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v71) )
            __debugbreak();
        }
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v71) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v22)->world;
        if ( !world )
        {
          LODWORD(v71) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v71) )
            __debugbreak();
        }
        v33 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
        __asm
        {
          vmulss  xmm10, xmm14, dword ptr [rax+30h]
          vmulss  xmm11, xmm14, dword ptr [rax+34h]
          vmulss  xmm12, xmm14, dword ptr [rax+38h]
        }
        Axis34ToQuat(v33, &out);
        __asm
        {
          vmovss  xmm7, dword ptr [r14+8]
          vxorps  xmm2, xmm7, xmm15
          vmulss  xmm0, xmm2, [rbp+90h+var_110]
          vaddss  xmm1, xmm0, dword ptr [r12]
          vmulss  xmm0, xmm2, [rbp+90h+var_10C]
          vmovss  dword ptr [rbp+90h+in], xmm1
          vaddss  xmm1, xmm0, dword ptr [r14]
          vmulss  xmm0, xmm2, [rbp+90h+var_108]
          vmulss  xmm2, xmm7, [rbp+90h+var_10C]
          vmovss  dword ptr [rbp+90h+in+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [r14+4]
          vmulss  xmm0, xmm7, [rbp+90h+var_110]
          vmovss  dword ptr [rbp+90h+in+8], xmm1
          vaddss  xmm1, xmm0, dword ptr [r12]
          vaddss  xmm0, xmm2, dword ptr [r14]
          vmovss  dword ptr [rbp+90h+var_F0], xmm1
          vmulss  xmm1, xmm7, [rbp+90h+var_108]
          vaddss  xmm2, xmm1, dword ptr [r14+4]
          vmovss  dword ptr [rbp+90h+var_F0+8], xmm2
          vmovss  dword ptr [rbp+90h+var_F0+4], xmm0
        }
        QuatTransform(&out, &in, &center);
        QuatTransform(&out, &v81, &end);
        __asm
        {
          vucomiss xmm13, dword ptr [r14+8]
          vaddss  xmm2, xmm12, dword ptr [rsp+190h+center+8]
          vaddss  xmm1, xmm10, dword ptr [rsp+190h+center]
          vaddss  xmm0, xmm11, dword ptr [rsp+190h+center+4]
          vmovss  dword ptr [rsp+190h+center+8], xmm2
          vaddss  xmm2, xmm12, dword ptr [rsp+190h+end+8]
          vmovss  dword ptr [rsp+190h+center], xmm1
          vaddss  xmm1, xmm10, dword ptr [rsp+190h+end]
          vmovss  dword ptr [rsp+190h+center+4], xmm0
          vaddss  xmm0, xmm11, dword ptr [rsp+190h+end+4]
          vmovss  dword ptr [rsp+190h+end+8], xmm2
          vmovss  xmm2, dword ptr [r14+0Ch]; radius
          vmovss  dword ptr [rsp+190h+end], xmm1
          vmovss  dword ptr [rsp+190h+end+4], xmm0
        }
        if ( v27 )
        {
          __asm { vmovaps xmm1, xmm2; radius }
          CG_DebugSphere(&center, *(float *)&_XMM1, &colorYellow, 1, 0);
        }
        else
        {
          CG_DebugCapsule(&center, &end, *(float *)&_XMM2, &colorYellow, 1, 0);
        }
        _R14 += 6;
        ++v25;
        if ( !--v23 )
        {
          LODWORD(v14) = localClientNum;
          break;
        }
      }
    }
    v17 = (int)v14;
    v15 = v74 + 1;
    ++v72;
    ++v74;
    v16 = v76;
  }
  while ( v72 < 0xF8 );
  _R11 = &v83;
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
}

/*
==============
CG_PhysicsCharacterProxy_GetCollisionBounds
==============
*/
void CG_PhysicsCharacterProxy_GetCollisionBounds(const DObj *dobj, const entityState_t *es, int suitIndex, EffectiveStance stance, bool quantized, Bounds *outCollisionBounds)
{
  unsigned int characterCollBoundsType; 
  __int64 v28; 
  __int64 v29; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 669, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  _RBX = outCollisionBounds;
  if ( !outCollisionBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 670, ASSERT_TYPE_ASSERT, "(outCollisionBounds)", (const char *)&queryFormat, "outCollisionBounds") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?playerBox@@3UBounds@@B.midPoint; Bounds const playerBox
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr cs:?playerBox@@3UBounds@@B.halfSize+4; Bounds const playerBox
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((es->eType - 1) & 0xFFEF) == 0 )
  {
    if ( (unsigned int)stance >= PM_EFF_STANCE_COUNT )
    {
      LODWORD(v28) = stance;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 678, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( stance ) ) < (unsigned)( static_cast<int>( PM_EFF_STANCE_COUNT ) )", "static_cast<int>( stance ) doesn't index static_cast<int>( PM_EFF_STANCE_COUNT )\n\t%i not in [0, %i)", v28, 4) )
        __debugbreak();
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END|0x80) || es->eType != ET_PLAYER )
      stance = PM_EFF_STANCE_DEFAULT;
    _RAX = BG_Suit_GetBounds(suitIndex, stance);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbx+10h], xmm1
    }
  }
  if ( quantized )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm2, cs:__real@3f800000
      vsubss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr [rbx+4]
      vsubss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm1, dword ptr [rbx+8]
      vsubss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  if ( dobj && dobj->numModels )
  {
    characterCollBoundsType = (*dobj->models)->characterCollBoundsType;
    if ( characterCollBoundsType >= 0xA )
    {
      LODWORD(v29) = 10;
      LODWORD(v28) = (*dobj->models)->characterCollBoundsType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 697, ASSERT_TYPE_ASSERT, "(unsigned)( collBoundsType ) < (unsigned)( XModelCharCollBoundsType::CharCollBoundsType_Num )", "collBoundsType doesn't index XModelCharCollBoundsType::CharCollBoundsType_Num\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    if ( characterCollBoundsType == 1 )
    {
      if ( ((es->eType - 19) & 0xFFFD) == 0 && (es->lerp.u.actor.flags & 1) != 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
          vmovups xmmword ptr [rbx], xmm0
          vmovsd  xmm1, qword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
          vshufps xmm2, xmm1, xmm1, 55h ; 'U'
          vsubss  xmm0, xmm2, cs:__real@42240000
          vmovsd  qword ptr [rbx+10h], xmm1
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  dword ptr [rbx+14h], xmm2
        }
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
  centity_t *Entity; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  hkMonitorStream *v22; 
  vec3_t outOrigin; 
  __int64 v24; 
  hkMonitorStream *v25; 
  vec3_t viewPos; 
  vec3_t viewDir; 
  vec3_t angles; 
  vec4_t quat; 

  v24 = -2i64;
  v2 = localClientNum;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  v22 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCharacterProxy_MatchSnapshot");
  v25 = v4;
  _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  if ( !_RAX->renderingThirdPerson || _RAX->playerTeleported )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+699Ch]
      vmovss  dword ptr [rsp+0B8h+viewPos], xmm0
      vmovss  xmm1, dword ptr [rax+69A0h]
      vmovss  xmm0, dword ptr [rax+69A4h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+59680h]
      vmovss  dword ptr [rsp+0B8h+viewPos], xmm0
      vmovss  xmm1, dword ptr [rax+59684h]
      vmovss  xmm0, dword ptr [rax+59688h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+viewPos+8], xmm0
    vmovss  dword ptr [rsp+0B8h+viewPos+4], xmm1
    vmovss  xmm0, dword ptr [rdi+6944h]
    vmovss  dword ptr [rsp+0B8h+viewDir], xmm0
    vmovss  xmm1, dword ptr [rdi+6948h]
    vmovss  dword ptr [rsp+0B8h+viewDir+4], xmm1
    vmovss  xmm0, dword ptr [rdi+694Ch]
    vmovss  dword ptr [rsp+0B8h+viewDir+8], xmm0
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v2, 0);
  v15 = 0;
  if ( s_cg_physicsCharacterProxyEntityCount[v2] )
  {
    while ( 1 )
    {
      v16 = 248 * v2 + v15;
      v17 = s_cg_physicsCharacterProxyEntities[0][v16];
      _RDI = &Entity[v17];
      if ( _RDI )
      {
        if ( (_RDI->flags & 1) == 0 || !CG_PhysicsCharacterProxy_IsEntityRightType(&Entity[v17]) || (unsigned int)(_RDI->prevState.pos.trType - 23) <= 5 )
        {
          CG_PhysicsChracterProxy_RemoveCharacter((LocalClientNum_t)v2, v15);
          goto LABEL_20;
        }
        if ( !CG_PhysicsCharacterProxy_ShouldEntityHavePhysics(_RDI, &viewPos, &viewDir) )
        {
          if ( s_cg_physicsCharacterProxyPredInstances[0][v16][1] != -1 )
            CG_PhysicsCharacterProxy_RemovePhysics((LocalClientNum_t)v2, v15);
LABEL_18:
          ++v15;
          goto LABEL_20;
        }
        if ( s_cg_physicsCharacterProxyPredInstances[0][v16][1] != -1 )
          goto LABEL_18;
        CG_GetPoseOrigin(&_RDI->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+48h]
          vmovss  dword ptr [rsp+0B8h+angles], xmm0
          vmovss  xmm1, dword ptr [rdi+4Ch]
          vmovss  dword ptr [rsp+0B8h+angles+4], xmm1
          vmovss  xmm0, dword ptr [rdi+50h]
          vmovss  dword ptr [rsp+0B8h+angles+8], xmm0
        }
        AnglesToQuat(&angles, &quat);
        CG_PhysicsCharacterProxy_CreatePhysics((LocalClientNum_t)v2, v15, &outOrigin, &quat);
        memset(&outOrigin, 0, sizeof(outOrigin));
        ++v15;
      }
      else
      {
        ++v15;
      }
LABEL_20:
      if ( v15 >= s_cg_physicsCharacterProxyEntityCount[v2] )
      {
        v4 = v22;
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
char CG_PhysicsCharacterProxy_ShouldEntityHavePhysics(const centity_t *entity, const vec3_t *viewPos, const vec3_t *viewDir)
{
  bool v8; 
  bool v9; 
  char v14; 
  char v15; 
  vec3_t outOrigin; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 192, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v8 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->prevState.eFlags, ACTIVE, 0xCu) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->prevState.eFlags, ACTIVE, 0);
  v9 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->prevState.eFlags, ACTIVE, 0x11u);
  if ( v8 || v9 )
    return 0;
  _RBX = DCONST_DVARFLT_physics_characterProxyClientDistance;
  __asm
  {
    vmovaps [rsp+0B8h+var_28], xmm6
    vmovaps [rsp+0B8h+var_38], xmm7
    vmovaps [rsp+0B8h+var_48], xmm8
    vmovaps [rsp+0B8h+var_58], xmm9
  }
  if ( !DCONST_DVARFLT_physics_characterProxyClientDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_characterProxyClientDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_physics_characterProxyClientCosFOV;
  if ( !DCONST_DVARFLT_physics_characterProxyClientCosFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_characterProxyClientCosFOV") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  CG_GetPoseOrigin(&entity->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin]
    vsubss  xmm5, xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin+4]
    vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin+8]
    vsubss  xmm8, xmm1, dword ptr [r14+4]
    vsubss  xmm9, xmm0, dword ptr [r14+8]
    vmulss  xmm2, xmm8, xmm8
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcomiss xmm4, cs:__real@80000000
  }
  if ( v14 | v15 )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm8, dword ptr [rbp+4]
      vmulss  xmm0, xmm5, dword ptr [rbp+0]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, dword ptr [rbp+8]
      vaddss  xmm0, xmm2, xmm1
      vdivss  xmm0, xmm0, xmm4
    }
  }
  __asm
  {
    vmovaps xmm9, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_48]
    vcomiss xmm4, xmm6
    vmovaps xmm6, [rsp+0B8h+var_28]
  }
  if ( v14 )
    goto LABEL_22;
  __asm { vcomiss xmm0, xmm7 }
  if ( !(v14 | v15) )
  {
LABEL_22:
    __asm { vmovaps xmm7, [rsp+0B8h+var_38] }
    return 1;
  }
  else
  {
    __asm { vmovaps xmm7, [rsp+0B8h+var_38] }
    return 0;
  }
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
  void *v10; 
  int m_serialAndIndex; 
  unsigned __int64 v12; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  centity_t *Entity; 
  unsigned int v27; 
  centity_t *v28; 
  unsigned int v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  __int64 v34; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  const float4 *v38; 
  float4 *v39; 
  hkMonitorStream *v59; 
  vec3_t *v60; 
  __int64 v61; 
  unsigned int *v62; 
  __int64 v63; 
  int v64; 
  PhysicsCharacterProxy_Capsule *capsule; 
  char *v66; 
  bool v67; 
  __int64 v68; 
  int *v69; 
  __int64 v70; 
  const dvar_t *v71; 
  __int64 v96; 
  const char *v99; 
  unsigned __int64 v100; 
  int *v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  unsigned __int64 v105; 
  unsigned int v106; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v108; 
  const char *v109; 
  vec3_t *v110; 
  int *v111; 
  __int64 v112; 
  Physics_WorldId v113; 
  __int64 v114; 
  char *v115; 
  unsigned int v116; 
  const HavokPhysicsWorld *v117; 
  unsigned int v118; 
  Physics_WorldId v119; 
  const char *v120; 
  vec3_t *v121; 
  int *v122; 
  __int64 v124; 
  __int64 v127; 
  unsigned int v128; 
  const HavokPhysicsWorld *v129; 
  unsigned int v130; 
  hknpBodyId v131; 
  float fmt; 
  float fmta; 
  __int64 updateBroadphaseIfWarping; 
  float v165; 
  float v166; 
  Physics_WorldId v168; 
  Physics_WorldId v169; 
  Physics_WorldId v170; 
  Physics_WorldId v171; 
  Physics_WorldId v172; 
  Physics_WorldId v173; 
  Physics_WorldId v174; 
  unsigned int v175; 
  hknpBodyId result; 
  Physics_WorldId worldId; 
  int *v178; 
  hkMonitorStream *v179; 
  vec3_t *position; 
  __int64 v181; 
  hkMonitorStream *v182; 
  vec3_t viewDir; 
  __int128 v184; 
  hkVector4f viewPos; 
  hkQuaternionf hkOrientation; 
  PhysicsCharacterProxy_Capsule capsules; 
  int v188[248]; 
  int ptr[744]; 
  vec4_t orientation[248]; 
  char v196; 

  v10 = alloca(v4);
  v181 = -2i64;
  __asm
  {
    vmovaps [rsp+2090h+var_50], xmm6
    vmovaps [rsp+2090h+var_60], xmm7
    vmovaps [rsp+2090h+var_70], xmm8
    vmovaps [rsp+2090h+var_80], xmm9
    vmovaps [rsp+2090h+var_90], xmm10
  }
  worldId = authoritativeWorldId;
  m_serialAndIndex = predictiveWorldId;
  result.m_serialAndIndex = predictiveWorldId;
  v12 = localClientNum;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  v179 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCharacterProxy_Update");
  v182 = v14;
  _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  if ( !_RAX->renderingThirdPerson || _RAX->playerTeleported )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rax+699Ch]
      vmovss  xmm8, dword ptr [rax+69A0h]
      vmovss  xmm9, dword ptr [rax+69A4h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rax+59680h]
      vmovss  xmm8, dword ptr [rax+59684h]
      vmovss  xmm9, dword ptr [rax+59688h]
    }
  }
  __asm
  {
    vmovss  dword ptr [rbp+1F90h+viewPos+8], xmm9
    vmovss  dword ptr [rbp+1F90h+viewPos+4], xmm8
    vmovss  dword ptr [rbp+1F90h+viewPos], xmm7
    vmovss  xmm0, dword ptr [rsi+6944h]
    vmovss  dword ptr [rsp+2090h+viewDir], xmm0
    vmovss  xmm1, dword ptr [rsi+6948h]
    vmovss  dword ptr [rsp+2090h+viewDir+4], xmm1
    vmovss  xmm0, dword ptr [rsi+694Ch]
    vmovss  dword ptr [rbp+1F90h+viewDir+8], xmm0
  }
  _RSI = DCONST_DVARFLT_physics_characterSoftBodyDistance;
  if ( !DCONST_DVARFLT_physics_characterSoftBodyDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_characterSoftBodyDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vmulss  xmm10, xmm0, xmm0
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v12, 0);
  *(_QWORD *)&v184 = Entity;
  Profile_Begin(644);
  hkOrientation.m_vec.m_quad.m128_u64[0] = v12;
  Physics_SetCGCharacterProxyPredictiveDebugData((LocalClientNum_t)v12, s_cg_physicsCharacterProxyEntityCount[v12]);
  v27 = 0;
  if ( s_cg_physicsCharacterProxyEntityCount[v12] )
  {
    do
    {
      v28 = &Entity[s_cg_physicsCharacterProxyEntities[v12][v27]];
      if ( !v28 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 832, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 169, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
          __debugbreak();
      }
      if ( (v28->flags & 1) != 0 && CG_PhysicsCharacterProxy_IsEntityRightType(v28) && (unsigned int)(v28->prevState.pos.trType - 23) > 5 )
        ++v27;
      else
        CG_PhysicsChracterProxy_RemoveCharacter((LocalClientNum_t)v12, v27);
    }
    while ( v27 < s_cg_physicsCharacterProxyEntityCount[v12] );
    v14 = v179;
    m_serialAndIndex = result.m_serialAndIndex;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(645);
  v29 = 0;
  v175 = 0;
  `eh vector constructor iterator'(ptr, 0xCui64, 0xF8ui64, (void (__fastcall *)(void *))SecureVec3::SecureVec3, (void (__fastcall *)(void *))SecureVec3::~SecureVec3);
  v30 = 0i64;
  v31 = v12;
  if ( s_cg_physicsCharacterProxyEntityCount[v12] )
  {
    v32 = 248 * v12;
    __asm { vmovsd  xmm6, cs:__real@3f30000000000000 }
    v34 = v184;
    do
    {
      v178 = (int *)(v30 + v32);
      _RSI = (const centity_t *)(v34 + 760i64 * s_cg_physicsCharacterProxyEntities[0][v30 + v32]);
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 858, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      _R14 = &ptr[3 * v30];
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !_RSI->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(_RSI->pose.origin.Get_origin, &_RSI->pose);
      FunctionPointer_origin(&_RSI->pose.origin.origin.origin, (vec3_t *)&ptr[3 * v30]);
      if ( _RSI->pose.isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, dword ptr [r14]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [r14], xmm2
          vmovd   xmm0, dword ptr [r14+4]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [r14+4], xmm2
          vmovd   xmm0, dword ptr [r14+8]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [r14+8], xmm2
        }
      }
      __asm { vmovss  xmm0, dword ptr [rsi+48h] }
      HIDWORD(v184) = 0;
      __asm
      {
        vmovups xmm3, [rbp+1F90h+var_2000]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsi+4Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+50h], 20h ; ' '
        vmovups [rbp+1F90h+var_2000], xmm3
        vmulps  xmm0, xmm3, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
      }
      Float4RadianToQuat(v39, v38);
      _R12 = &orientation[(unsigned int)v30];
      __asm { vmovups xmmword ptr [r12], xmm0 }
      if ( CG_PhysicsCharacterProxy_ShouldEntityHavePhysics(_RSI, (const vec3_t *)&viewPos, &viewDir) )
      {
        if ( s_cg_physicsCharacterProxyPredInstances[0][(_QWORD)v178][1] == -1 )
          CG_PhysicsCharacterProxy_CreatePhysics((LocalClientNum_t)v12, v30, (const vec3_t *)&ptr[3 * v30], _R12);
        v188[v175] = v30;
        v29 = ++v175;
      }
      else
      {
        if ( s_cg_physicsCharacterProxyPredInstances[0][(_QWORD)v178][1] != -1 )
        {
          v59 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
          v60 = (vec3_t *)v59;
          if ( v59 )
            hkMonitorStream::timerBegin(v59, "TtCG_PhysicsCharacterProxy_RemovePhysics");
          position = v60;
          CG_PhysicsCharacterProxy_RemovePhysics_0((LocalClientNum_t)v12, v30, PHYSICS_CHARACTERPROXY_TYPE_COLLISION);
          CG_PhysicsCharacterProxy_RemovePhysics_0((LocalClientNum_t)v12, v30, PHYSICS_CHARACTERPROXY_TYPE_DETAIL);
          if ( v60 )
            hkMonitorStream::timerEnd((hkMonitorStream *)v60, "Et");
        }
        v29 = v175;
      }
      v30 = (unsigned int)(v30 + 1);
      v31 = v12;
    }
    while ( (unsigned int)v30 < s_cg_physicsCharacterProxyEntityCount[v12] );
    v14 = v179;
    m_serialAndIndex = result.m_serialAndIndex;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(646);
  if ( v29 )
  {
    v61 = 248 * v31;
    *(_QWORD *)&v184 = 248 * v31;
    v62 = (unsigned int *)v188;
    v178 = v188;
    *(_QWORD *)viewDir.v = v29;
    do
    {
      v63 = *v62;
      CG_PhysicsCharacterProxy_CalcEncapsulatingShapes((LocalClientNum_t)v12, *v62, &capsules);
      v64 = 0;
      capsule = &capsules;
      v66 = (char *)s_cg_physicsCharacterProxyCapsules + 48 * (v63 + v61) - (_QWORD)&capsules;
      do
      {
        if ( (unsigned int)v63 >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 288, ASSERT_TYPE_ASSERT, "(entityId < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS)", (const char *)&queryFormat, "entityId < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS") )
          __debugbreak();
        if ( PhysicsCharacterProxy_DoCapsulesVary((const PhysicsCharacterProxy_Capsule *)((char *)capsule + (_QWORD)v66), capsule) )
        {
          CG_PhysicsCharacterProxy_RemovePhysics_0((LocalClientNum_t)v12, v63, (Physics_CharacterProxy_Type)v64);
          CG_PhysicsCharacterProxy_CreatePhysics_0((LocalClientNum_t)v12, v63, (Physics_CharacterProxy_Type)v64, (const vec3_t *)&ptr[3 * v63], &orientation[v63], capsule);
        }
        ++v64;
        ++capsule;
      }
      while ( v64 < 2 );
      v62 = (unsigned int *)++v178;
      v67 = (*(_QWORD *)viewDir.v)-- == 1i64;
      v61 = v184;
    }
    while ( !v67 );
    v14 = v179;
    m_serialAndIndex = result.m_serialAndIndex;
    v29 = v175;
  }
  Profile_EndInternal(NULL);
  if ( worldId != PHYSICS_WORLD_ID_INVALID && Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_LADDER_AIM|0x80) )
  {
    Profile_Begin(647);
    if ( v29 )
    {
      v68 = 248 * v12;
      v69 = v188;
      *(_QWORD *)viewDir.v = v29;
      do
      {
        v70 = (unsigned int)*v69;
        v71 = DVARBOOL_physics_enableCharacterSoftBody;
        if ( s_cg_physicsCharacterProxyAuthInstances[0][v70 + v68] == -1 )
        {
          if ( !DVARBOOL_physics_enableCharacterSoftBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_enableCharacterSoftBody") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v71);
          if ( v71->current.enabled )
          {
            _RAX = 3 * v70;
            __asm
            {
              vmovss  xmm0, [rbp+rax*4+1F90h+ptr]
              vsubss  xmm3, xmm0, xmm7
              vmovss  xmm1, [rbp+rax*4+1F90h+var_1BBC]
              vsubss  xmm2, xmm1, xmm8
              vmovss  xmm0, [rbp+rax*4+1F90h+var_1BB8]
              vsubss  xmm4, xmm0, xmm9
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm0
              vcomiss xmm2, xmm10
            }
          }
        }
        else
        {
          if ( !DVARBOOL_physics_enableCharacterSoftBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_enableCharacterSoftBody") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v71);
          if ( !v71->current.enabled )
            goto LABEL_74;
          _RAX = 3 * v70;
          __asm
          {
            vmovss  xmm0, [rbp+rax*4+1F90h+ptr]
            vsubss  xmm3, xmm0, xmm7
            vmovss  xmm1, [rbp+rax*4+1F90h+var_1BBC]
            vsubss  xmm2, xmm1, xmm8
            vmovss  xmm0, [rbp+rax*4+1F90h+var_1BB8]
            vsubss  xmm4, xmm0, xmm9
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vcomiss xmm2, xmm10
          }
          if ( v71->current.enabled )
          {
LABEL_74:
            Sys_ProfBeginNamedEvent(0xFFFF00FF, "CG_PhysicsCharacterProxy_DestroyAuthPhysics");
            v96 = v70 + v68;
            if ( (s_cg_physicsCharacterProxyAuthBodies[0][v70 + v68] & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 490, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][entityId] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][entityId] )") )
              __debugbreak();
            s_cg_physicsCharacterProxyAuthBodies[0][v96] = 0xFFFFFF;
            Physics_DestroyInstance((Physics_WorldId)(3 * v12 + 3), s_cg_physicsCharacterProxyAuthInstances[0][v96], 0);
            s_cg_physicsCharacterProxyAuthInstances[0][v96] = -1;
            if ( !s_cg_physicsCharacterProxyShapes[3 * v12 + 1][v70][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 496, ASSERT_TYPE_ASSERT, "(s_cg_physicsCharacterProxyShapes[( 1 + PHYSICS_NUM_CLIENT_PROXY_WORLDS * localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION])", (const char *)&queryFormat, "s_cg_physicsCharacterProxyShapes[Physics_GetClientCharacterProxyAuthoritativeWorldIndex( localClientNum )][entityId][PHYSICS_CHARACTERPROXY_TYPE_COLLISION]") )
              __debugbreak();
            Physics_ReleaseShape((Physics_WorldId)(3 * v12 + 3), s_cg_physicsCharacterProxyShapes[3 * v12 + 1][v70][1], 1);
            s_cg_physicsCharacterProxyShapes[3 * v12 + 1][v70][1] = NULL;
            Sys_ProfEndNamedEvent();
          }
        }
        ++v69;
        --*(_QWORD *)viewDir.v;
      }
      while ( *(_QWORD *)viewDir.v );
      v14 = v179;
      m_serialAndIndex = result.m_serialAndIndex;
      v29 = v175;
    }
    Profile_EndInternal(NULL);
  }
  Profile_Begin(648);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm6, cs:__real@3f800000
  }
  if ( m_serialAndIndex == -1 )
    goto LABEL_145;
  v99 = j_va("ClientCharacterProxyUpdatePredictiveMovePhysicsPred %i", v29);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v99);
  if ( !v29 )
    goto LABEL_144;
  v100 = 248 * hkOrientation.m_vec.m_quad.m128_u64[0];
  *(_QWORD *)&v184 = 248 * hkOrientation.m_vec.m_quad.m128_u64[0];
  v101 = v188;
  *(_QWORD *)viewDir.v = v188;
  v178 = (int *)v29;
  do
  {
    v102 = 0i64;
    v103 = (unsigned int)*v101;
    viewPos.m_quad.m128_u64[0] = (unsigned __int64)&orientation[v103];
    position = (vec3_t *)&ptr[3 * v103];
    v104 = 2 * (v100 + v103);
    do
    {
      v105 = v102 + 2 * (v100 + v103);
      if ( (s_cg_physicsCharacterProxyPredBodies[0][0][v105] & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 953, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyPredBodies[localClientNum][characterIdx][type] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyPredBodies[localClientNum][characterIdx][type] )") )
        __debugbreak();
      v106 = s_cg_physicsCharacterProxyPredInstances[0][0][v105];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)m_serialAndIndex > 7 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v106 == -1 )
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
        goto LABEL_109;
      if ( m_serialAndIndex >= 0 )
      {
        if ( m_serialAndIndex <= 1 )
        {
          LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
LABEL_109:
        if ( (unsigned int)m_serialAndIndex <= 7 )
          goto LABEL_112;
      }
      LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
        __debugbreak();
LABEL_112:
      if ( v106 == -1 )
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
      if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v106) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 954, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( predictiveWorldId, s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( predictiveWorldId, s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type] ) == 1") )
        __debugbreak();
      v108 = s_cg_physicsCharacterProxyPredInstances[0][0][v104];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)m_serialAndIndex > 7 )
      {
        LODWORD(updateBroadphaseIfWarping) = m_serialAndIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v108 == -1 )
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
      if ( HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)m_serialAndIndex, v108, 0)->m_serialAndIndex != s_cg_physicsCharacterProxyPredBodies[0][0][v104] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 955, ASSERT_TYPE_ASSERT, "(Physics_GetRigidBodyID( predictiveWorldId, s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type], 0 ) == s_cg_physicsCharacterProxyPredBodies[localClientNum][characterIdx][type])", (const char *)&queryFormat, "Physics_GetRigidBodyID( predictiveWorldId, s_cg_physicsCharacterProxyPredInstances[localClientNum][characterIdx][type], 0 ) == s_cg_physicsCharacterProxyPredBodies[localClientNum][characterIdx][type]") )
        __debugbreak();
      __asm
      {
        vmovss  [rsp+2090h+var_2058], xmm7
        vmovss  dword ptr [rsp+2090h+fmt], xmm6
      }
      Physics_KeyframeRigidBodyTo((Physics_WorldId)m_serialAndIndex, s_cg_physicsCharacterProxyPredBodies[0][0][v104], position, &orientation[v103], fmt, 1, 0, v165);
      ++v102;
      ++v104;
      v100 = v184;
    }
    while ( v102 < 2 );
    v101 = (int *)(*(_QWORD *)viewDir.v + 4i64);
    *(_QWORD *)viewDir.v += 4i64;
    v178 = (int *)((char *)v178 - 1);
  }
  while ( v178 );
  v14 = v179;
  v29 = v175;
LABEL_144:
  Sys_ProfEndNamedEvent();
LABEL_145:
  if ( worldId == PHYSICS_WORLD_ID_INVALID )
    goto LABEL_206;
  v109 = j_va("ClientCharacterProxyUpdatePredictiveMovePhysicsAuth %i", v29);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v109);
  if ( !v29 )
    goto LABEL_205;
  v110 = (vec3_t *)(248 * hkOrientation.m_vec.m_quad.m128_u64[0]);
  position = (vec3_t *)(248 * hkOrientation.m_vec.m_quad.m128_u64[0]);
  v111 = v188;
  v112 = v29;
  v113 = worldId;
  while ( 2 )
  {
    v114 = (unsigned int)*v111;
    v115 = (char *)v110 + v114;
    if ( s_cg_physicsCharacterProxyAuthInstances[0][(_QWORD)v110 + v114] != -1 )
    {
      if ( (s_cg_physicsCharacterProxyAuthBodies[0][(_QWORD)v115] & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 974, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][characterIdx] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyAuthBodies[localClientNum][characterIdx] )") )
        __debugbreak();
      v116 = s_cg_physicsCharacterProxyAuthInstances[0][(_QWORD)v115];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v113 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v116 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v113 - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
      {
LABEL_170:
        if ( (unsigned int)v113 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          goto LABEL_171;
      }
      else
      {
        if ( v113 >= PHYSICS_WORLD_ID_FIRST )
        {
          if ( v113 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            LODWORD(updateBroadphaseIfWarping) = v113;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
              __debugbreak();
          }
          goto LABEL_170;
        }
LABEL_171:
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v116 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      v117 = HavokPhysics_GetConstWorld(v113);
      if ( !v117->world )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&v117->instanceManager, v116) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 975, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( authoritativeWorldId, s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( authoritativeWorldId, s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx] ) == 1") )
        __debugbreak();
      v118 = s_cg_physicsCharacterProxyAuthInstances[0][(_QWORD)v115];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v113 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v118 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v113 - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v113 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v113;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysics_GetRigidBodyID((hknpBodyId *)&worldId, v113, v118, 0)->m_serialAndIndex != s_cg_physicsCharacterProxyAuthBodies[0][(_QWORD)v115] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 976, ASSERT_TYPE_ASSERT, "(Physics_GetRigidBodyID( authoritativeWorldId, s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx], 0 ) == s_cg_physicsCharacterProxyAuthBodies[localClientNum][characterIdx])", (const char *)&queryFormat, "Physics_GetRigidBodyID( authoritativeWorldId, s_cg_physicsCharacterProxyAuthInstances[localClientNum][characterIdx], 0 ) == s_cg_physicsCharacterProxyAuthBodies[localClientNum][characterIdx]") )
        __debugbreak();
      __asm
      {
        vmovss  [rsp+2090h+var_2058], xmm7
        vmovss  dword ptr [rsp+2090h+fmt], xmm6
      }
      Physics_KeyframeRigidBodyTo(v113, s_cg_physicsCharacterProxyAuthBodies[0][(_QWORD)v115], (const vec3_t *)&ptr[3 * v114], &orientation[v114], fmta, 1, 0, v166);
      v110 = position;
    }
    ++v111;
    if ( --v112 )
      continue;
    break;
  }
  v14 = v179;
  v29 = v175;
LABEL_205:
  Sys_ProfEndNamedEvent();
LABEL_206:
  v119 = detailWorldId;
  if ( detailWorldId == PHYSICS_WORLD_ID_INVALID )
    goto LABEL_287;
  v120 = j_va("ClientCharacterProxyUpdatePredictiveMovePhysicsDetail %i", v29);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v120);
  if ( !v29 )
    goto LABEL_286;
  v121 = (vec3_t *)(248 * hkOrientation.m_vec.m_quad.m128_u64[0]);
  position = (vec3_t *)(248 * hkOrientation.m_vec.m_quad.m128_u64[0]);
  v122 = v188;
  *(_QWORD *)viewDir.v = v188;
  v178 = (int *)v29;
  __asm { vmovss  xmm6, cs:__real@3d000000 }
  while ( 2 )
  {
    v124 = (unsigned int)*v122;
    _R15 = 2 * v124;
    _R12 = 3 * v124;
    v127 = 2 * ((_QWORD)v121 + v124);
    *(_QWORD *)&v184 = 2i64;
    while ( 2 )
    {
      if ( (s_cg_physicsCharacterProxyDetailBodies[0][0][v127] & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 996, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyDetailBodies[localClientNum][characterIdx][type] ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( s_cg_physicsCharacterProxyDetailBodies[localClientNum][characterIdx][type] )") )
        __debugbreak();
      v128 = s_cg_physicsCharacterProxyDetailInstances[0][0][v127];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v119 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v128 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v119 - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
      {
LABEL_231:
        if ( (unsigned int)v119 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          goto LABEL_232;
      }
      else
      {
        if ( v119 >= PHYSICS_WORLD_ID_FIRST )
        {
          if ( v119 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            LODWORD(updateBroadphaseIfWarping) = v119;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
              __debugbreak();
          }
          goto LABEL_231;
        }
LABEL_232:
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v128 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      v129 = HavokPhysics_GetConstWorld(v119);
      if ( !v129->world )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&v129->instanceManager, v128) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 997, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( detailWorldId, s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( detailWorldId, s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type] ) == 1") )
        __debugbreak();
      v130 = s_cg_physicsCharacterProxyDetailInstances[0][0][v127];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v119 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v130 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v119 - 2) <= 5 )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v119 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysics_GetRigidBodyID((hknpBodyId *)&worldId, v119, v130, 0)->m_serialAndIndex != s_cg_physicsCharacterProxyDetailBodies[0][0][v127] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\cg_physicscharacterproxy.cpp", 998, ASSERT_TYPE_ASSERT, "(Physics_GetRigidBodyID( detailWorldId, s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type], 0 ) == s_cg_physicsCharacterProxyDetailBodies[localClientNum][characterIdx][type])", (const char *)&queryFormat, "Physics_GetRigidBodyID( detailWorldId, s_cg_physicsCharacterProxyDetailInstances[localClientNum][characterIdx][type], 0 ) == s_cg_physicsCharacterProxyDetailBodies[localClientNum][characterIdx][type]") )
        __debugbreak();
      v131.m_serialAndIndex = s_cg_physicsCharacterProxyDetailBodies[0][0][v127];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v119 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (v131.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(updateBroadphaseIfWarping) = v119;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rbp+r12*4+1F90h+ptr]
        vmovss  [rsp+2090h+var_2050], xmm0
      }
      if ( (v168 & 0x7F800000) == 2139095040 )
        goto LABEL_292;
      __asm
      {
        vmovss  xmm0, [rbp+r12*4+1F90h+var_1BBC]
        vmovss  [rsp+2090h+var_2050], xmm0
      }
      if ( (v169 & 0x7F800000) == 2139095040 )
        goto LABEL_292;
      __asm
      {
        vmovss  xmm0, [rbp+r12*4+1F90h+var_1BB8]
        vmovss  [rsp+2090h+var_2050], xmm0
      }
      if ( (v170 & 0x7F800000) == 2139095040 )
      {
LABEL_292:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+r15*8+1F90h+orientation]
        vmovss  [rsp+2090h+var_2050], xmm0
      }
      if ( (v171 & 0x7F800000) == 2139095040 )
        goto LABEL_293;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+r15*8+1F90h+orientation+4]
        vmovss  [rsp+2090h+var_2050], xmm0
      }
      if ( (v172 & 0x7F800000) == 2139095040 )
        goto LABEL_293;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+r15*8+1F90h+orientation+8]
        vmovss  [rsp+2090h+var_2050], xmm0
      }
      if ( (v173 & 0x7F800000) == 2139095040 )
        goto LABEL_293;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+r15*8+1F90h+orientation+0Ch]
        vmovss  [rsp+2090h+var_2050], xmm0
      }
      if ( (v174 & 0x7F800000) == 2139095040 )
      {
LABEL_293:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm6, [rbp+r12*4+1F90h+ptr]
        vmovss  dword ptr [rbp+1F90h+viewPos], xmm1
        vmulss  xmm0, xmm6, [rbp+r12*4+1F90h+var_1BBC]
        vmovss  dword ptr [rbp+1F90h+viewPos+4], xmm0
        vmulss  xmm2, xmm6, [rbp+r12*4+1F90h+var_1BB8]
        vmovss  dword ptr [rbp+1F90h+viewPos+8], xmm2
        vmovss  [rbp+1F90h+var_1FE4], xmm7
        vmovss  xmm4, dword ptr [rbp+r15*8+1F90h+orientation]
        vinsertps xmm4, xmm4, dword ptr [rbp+r15*8+1F90h+orientation+4], 1F90h+var_1FA0+20h
        vinsertps xmm4, xmm4, dword ptr [rbp+r15*8+1F90h+orientation+8], 1F90h+var_1FA0+30h
        vinsertps xmm4, xmm4, dword ptr [rbp+r15*8+1F90h+orientation+0Ch], 1F90h+var_1FA0+40h
        vdpps   xmm0, xmm4, xmm4, 0FFh
        vmovups xmmword ptr [rbp+1F90h+hkOrientation.m_vec.m_quad], xmm0
        vrsqrtps xmm1, xmm0
        vmulps  xmm2, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
        vmulps  xmm0, xmm1, xmm0
        vmulps  xmm1, xmm0, xmm1
        vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
        vsubps  xmm1, xmm0, xmm1
        vmulps  xmm2, xmm1, xmm2
        vmulps  xmm0, xmm2, xmm4
        vmovups xmmword ptr [rbp+1F90h+hkOrientation.m_vec.m_quad], xmm0
      }
      HavokPhysics_WarpRigidBodyTo(v119, v131, &viewPos, &hkOrientation, 0, 0);
      ++v127;
      *(_QWORD *)&v184 = v184 - 1;
      if ( (_QWORD)v184 )
        continue;
      break;
    }
    v122 = (int *)(*(_QWORD *)viewDir.v + 4i64);
    *(_QWORD *)viewDir.v += 4i64;
    v67 = v178 == (int *)1;
    v178 = (int *)((char *)v178 - 1);
    v121 = position;
    if ( !v67 )
      continue;
    break;
  }
  v14 = v179;
LABEL_286:
  Sys_ProfEndNamedEvent();
LABEL_287:
  Profile_EndInternal(NULL);
  `eh vector destructor iterator'(ptr, 0xCui64, 0xF8ui64, (void (__fastcall *)(void *))SecureVec3::~SecureVec3);
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
  _R11 = &v196;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
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

  v2 = localClientNum;
  v3 = characterIdx;
  CG_PhysicsCharacterProxy_RemovePhysics(localClientNum, characterIdx);
  _R13 = 0x140000000ui64;
  v5 = (unsigned int)v3;
  v6 = --s_cg_physicsCharacterProxyEntityCount[v2];
  v7 = v2;
  v8 = 248 * v2 + v6;
  v9 = 248 * v2 + v3;
  v10 = v9;
  s_cg_physicsCharacterProxyEntities[0][v10] = s_cg_physicsCharacterProxyEntities[0][v8];
  s_cg_physicsCharacterProxyEntities[0][v8] = -1;
  v11 = 3 * (int)v2;
  v12 = 248 * v11;
  v13 = 248 * v11 + v5;
  v14 = 248 * (v11 + 1);
  v15 = v5 + v14;
  v16 = 248 * (v11 + 2);
  v17 = v5 + v16;
  v18 = v12 + v6;
  v19 = v14 + v6;
  v20 = v16 + v6;
  v21 = v7 * 248 + v6;
  _RCX = 6 * (v7 * 248 + v6);
  __asm { vmovups xmm0, xmmword ptr rva s_cg_physicsCharacterProxyCapsules.center[r13+rcx*8] }
  _RAX = 6 * v9;
  __asm
  {
    vmovups xmmword ptr rva s_cg_physicsCharacterProxyCapsules.center[r13+rax*8], xmm0
    vmovsd  xmm1, qword ptr rva s_cg_physicsCharacterProxyCapsules.radius[r13+rcx*8]
    vmovsd  qword ptr rva s_cg_physicsCharacterProxyCapsules.radius[r13+rax*8], xmm1
  }
  _RCX += 3i64;
  __asm { vmovups xmm0, xmmword ptr rva s_cg_physicsCharacterProxyCapsules.center[r13+rcx*8] }
  s_cg_physicsCharacterProxyShapes[0][v13][0] = s_cg_physicsCharacterProxyShapes[0][v18][0];
  s_cg_physicsCharacterProxyShapes[0][v15][0] = s_cg_physicsCharacterProxyShapes[0][v19][0];
  s_cg_physicsCharacterProxyShapes[0][v17][0] = s_cg_physicsCharacterProxyShapes[0][v20][0];
  LODWORD(_RAX) = s_cg_physicsCharacterProxyPredInstances[v7][v6][0];
  s_cg_physicsCharacterProxyShapes[0][v18][0] = NULL;
  s_cg_physicsCharacterProxyShapes[0][v19][0] = NULL;
  s_cg_physicsCharacterProxyPredInstances[0][v10][0] = _RAX;
  LODWORD(_RAX) = s_cg_physicsCharacterProxyDetailInstances[v7][v6][0];
  s_cg_physicsCharacterProxyShapes[0][v20][0] = NULL;
  s_cg_physicsCharacterProxyDetailInstances[0][v10][0] = _RAX;
  s_cg_physicsCharacterProxyPredBodies[0][v10][0] = s_cg_physicsCharacterProxyPredBodies[v7][v6][0];
  s_cg_physicsCharacterProxyDetailBodies[0][v10][0] = s_cg_physicsCharacterProxyDetailBodies[v7][v6][0];
  _RAX = 6 * v9 + 3;
  __asm
  {
    vmovups xmmword ptr rva s_cg_physicsCharacterProxyCapsules.center[r13+rax*8], xmm0
    vmovsd  xmm1, qword ptr rva s_cg_physicsCharacterProxyCapsules.radius[r13+rcx*8]
    vmovsd  qword ptr rva s_cg_physicsCharacterProxyCapsules.radius[r13+rax*8], xmm1
  }
  s_cg_physicsCharacterProxyShapes[0][v13][1] = s_cg_physicsCharacterProxyShapes[0][v18][1];
  s_cg_physicsCharacterProxyShapes[0][v15][1] = s_cg_physicsCharacterProxyShapes[0][v19][1];
  s_cg_physicsCharacterProxyShapes[0][v17][1] = s_cg_physicsCharacterProxyShapes[0][v20][1];
  s_cg_physicsCharacterProxyShapes[0][v18][1] = NULL;
  s_cg_physicsCharacterProxyShapes[0][v19][1] = NULL;
  s_cg_physicsCharacterProxyPredInstances[0][v21][0] = -1;
  LODWORD(_RAX) = s_cg_physicsCharacterProxyPredInstances[v7][v6][1];
  s_cg_physicsCharacterProxyShapes[0][v20][1] = NULL;
  s_cg_physicsCharacterProxyDetailInstances[0][v21][0] = -1;
  s_cg_physicsCharacterProxyPredBodies[0][v21][0] = 0xFFFFFF;
  s_cg_physicsCharacterProxyDetailBodies[0][v21][0] = 0xFFFFFF;
  s_cg_physicsCharacterProxyPredInstances[0][v10][1] = _RAX;
  s_cg_physicsCharacterProxyDetailInstances[0][v10][1] = s_cg_physicsCharacterProxyDetailInstances[v7][v6][1];
  s_cg_physicsCharacterProxyPredBodies[0][v10][1] = s_cg_physicsCharacterProxyPredBodies[v7][v6][1];
  s_cg_physicsCharacterProxyDetailBodies[0][v10][1] = s_cg_physicsCharacterProxyDetailBodies[v7][v6][1];
  s_cg_physicsCharacterProxyAuthInstances[0][v9] = s_cg_physicsCharacterProxyAuthInstances[0][v8];
  s_cg_physicsCharacterProxyAuthBodies[0][v9] = s_cg_physicsCharacterProxyAuthBodies[0][v8];
  s_cg_physicsCharacterProxyAuthBodies[0][v8] = 0xFFFFFF;
  s_cg_physicsCharacterProxyPredInstances[0][v21][1] = -1;
  s_cg_physicsCharacterProxyDetailInstances[0][v21][1] = -1;
  s_cg_physicsCharacterProxyPredBodies[0][v21][1] = 0xFFFFFF;
  s_cg_physicsCharacterProxyDetailBodies[0][v21][1] = 0xFFFFFF;
  s_cg_physicsCharacterProxyAuthInstances[0][v8] = -1;
}

