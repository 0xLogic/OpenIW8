/*
==============
PhysicsCharacterProxy_DoCapsulesVary
==============
*/

bool __fastcall PhysicsCharacterProxy_DoCapsulesVary(const PhysicsCharacterProxy_Capsule *capsuleA, const PhysicsCharacterProxy_Capsule *capsuleB)
{
  return ?PhysicsCharacterProxy_DoCapsulesVary@@YA_NPEBUPhysicsCharacterProxy_Capsule@@0@Z(capsuleA, capsuleB);
}

/*
==============
PhysicsCharacterProxy_GetEncapsulatingBounds
==============
*/

void __fastcall PhysicsCharacterProxy_GetEncapsulatingBounds(Bounds *bounds)
{
  ?PhysicsCharacterProxy_GetEncapsulatingBounds@@YAXPEAUBounds@@@Z(bounds);
}

/*
==============
PhysicsCharacterProxy_CalcCapsule
==============
*/

void __fastcall PhysicsCharacterProxy_CalcCapsule(const Bounds *entityBounds, PhysicsCharacterProxy_Capsule *capsule)
{
  ?PhysicsCharacterProxy_CalcCapsule@@YAXPEBUBounds@@PEAUPhysicsCharacterProxy_Capsule@@@Z(entityBounds, capsule);
}

/*
==============
PhysicsCharacterProxy_IsCharacterProxy
==============
*/

bool __fastcall PhysicsCharacterProxy_IsCharacterProxy(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?PhysicsCharacterProxy_IsCharacterProxy@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsCharacterProxy_GetCollisionBounds
==============
*/

void __fastcall PhysicsCharacterProxy_GetCollisionBounds(Bounds *bounds, bool quantized)
{
  ?PhysicsCharacterProxy_GetCollisionBounds@@YAXPEAUBounds@@_N@Z(bounds, quantized);
}

/*
==============
PhysicsCharacterProxy_GetCollisionBounds
==============
*/

void __fastcall PhysicsCharacterProxy_GetCollisionBounds(Bounds *bounds, const XModelCharCollBoundsType boundsType, bool quantized)
{
  ?PhysicsCharacterProxy_GetCollisionBounds@@YAXPEAUBounds@@W4XModelCharCollBoundsType@@_N@Z(bounds, boundsType, quantized);
}

/*
==============
PhysicsCharacterProxy_GetEncapsulatingBounds
==============
*/

void __fastcall PhysicsCharacterProxy_GetEncapsulatingBounds(Bounds *bounds, const XModelCharCollBoundsType boundsType)
{
  ?PhysicsCharacterProxy_GetEncapsulatingBounds@@YAXPEAUBounds@@W4XModelCharCollBoundsType@@@Z(bounds, boundsType);
}

/*
==============
PhysicsCharacterProxy_Init
==============
*/

void PhysicsCharacterProxy_Init(void)
{
  ?PhysicsCharacterProxy_Init@@YAXXZ();
}

/*
==============
PhysicsCharacterProxy_Shutdown
==============
*/

void PhysicsCharacterProxy_Shutdown(void)
{
  ?PhysicsCharacterProxy_Shutdown@@YAXXZ();
}

/*
==============
PhysicsCharacterProxy_CalcCapsule
==============
*/
void PhysicsCharacterProxy_CalcCapsule(const Bounds *entityBounds, PhysicsCharacterProxy_Capsule *capsule)
{
  vec3_t *p_halfSize; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  __int64 v12; 
  __int64 v13; 

  if ( !entityBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 149, ASSERT_TYPE_ASSERT, "(entityBounds)", (const char *)&queryFormat, "entityBounds") )
    __debugbreak();
  if ( !capsule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 150, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
    __debugbreak();
  p_halfSize = &entityBounds->halfSize;
  v5 = Vec3MajorAxis(&entityBounds->halfSize);
  v6 = Vec3MinorAxis(&entityBounds->halfSize);
  v7 = v6 == 0;
  if ( v7 == (_DWORD)v5 )
  {
    v7 = 3 - v6;
    if ( !v6 )
      v7 = 2;
  }
  capsule->center.v[0] = entityBounds->midPoint.v[0];
  capsule->center.v[1] = entityBounds->midPoint.v[1];
  capsule->center.v[2] = entityBounds->midPoint.v[2];
  if ( v7 >= 3 )
  {
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, 3) )
      __debugbreak();
  }
  capsule->radius = p_halfSize->v[v7];
  if ( (unsigned int)v5 >= 3 )
  {
    LODWORD(v13) = 3;
    LODWORD(v12) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  capsule->halfHeight = p_halfSize->v[v5] - capsule->radius;
  _XMM1 = LODWORD(FLOAT_1_0);
  __asm
  {
    vcmpltss xmm2, xmm0, xmm3
    vblendvps xmm0, xmm1, xmm3, xmm2
  }
  capsule->majorAxis = v5;
  capsule->radius = *(float *)&_XMM0;
}

/*
==============
PhysicsCharacterProxy_DoCapsulesVary
==============
*/
bool PhysicsCharacterProxy_DoCapsulesVary(const PhysicsCharacterProxy_Capsule *capsuleA, const PhysicsCharacterProxy_Capsule *capsuleB)
{
  char v4; 
  char v5; 
  char v6; 

  if ( !capsuleA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 181, ASSERT_TYPE_ASSERT, "( capsuleA )", (const char *)&queryFormat, "capsuleA") )
    __debugbreak();
  if ( !capsuleB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 182, ASSERT_TYPE_ASSERT, "( capsuleB )", (const char *)&queryFormat, "capsuleB") )
    __debugbreak();
  v4 = 0;
  v5 = 1;
  if ( capsuleB->center.v[0] != capsuleA->center.v[0] || capsuleB->center.v[1] != capsuleA->center.v[1] || (v6 = 0, capsuleB->center.v[2] != capsuleA->center.v[2]) )
    v6 = 1;
  if ( capsuleB->radius != capsuleA->radius )
    v4 = 1;
  if ( capsuleA->majorAxis == capsuleB->majorAxis )
    v5 = v4;
  return (capsuleB->halfHeight != capsuleA->halfHeight) | v6 | v5;
}

/*
==============
PhysicsCharacterProxy_GetCollisionBounds
==============
*/
void PhysicsCharacterProxy_GetCollisionBounds(Bounds *bounds, const XModelCharCollBoundsType boundsType, bool quantized)
{
  __int64 v3; 
  __int128 v6; 
  double v7; 

  v3 = boundsType;
  if ( (unsigned int)(boundsType - 1) > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 133, ASSERT_TYPE_ASSERT, "((boundsType > XModelCharCollBoundsType::CharCollBoundsType_None) && (boundsType < XModelCharCollBoundsType::CharCollBoundsType_Num))", (const char *)&queryFormat, "(boundsType > XModelCharCollBoundsType::CharCollBoundsType_None) && (boundsType < XModelCharCollBoundsType::CharCollBoundsType_Num)") )
    __debugbreak();
  if ( quantized )
  {
    v6 = *(_OWORD *)s_physicsCharacterProxy_BoundsQuantized[v3].midPoint.v;
    v7 = *(double *)&s_physicsCharacterProxy_BoundsQuantized[v3].halfSize.y;
  }
  else
  {
    v6 = *(_OWORD *)s_physicsCharacterProxy_Bounds[v3].midPoint.v;
    v7 = *(double *)&s_physicsCharacterProxy_Bounds[v3].halfSize.y;
  }
  *(_OWORD *)bounds->midPoint.v = v6;
  *(double *)&bounds->halfSize.y = v7;
}

/*
==============
PhysicsCharacterProxy_GetCollisionBounds
==============
*/
void PhysicsCharacterProxy_GetCollisionBounds(Bounds *bounds, bool quantized)
{
  if ( quantized )
    *bounds = s_physicsCharacterProxy_BoundsQuantized[1];
  else
    *bounds = s_physicsCharacterProxy_Bounds[1];
}

/*
==============
PhysicsCharacterProxy_GetEncapsulatingBounds
==============
*/
void PhysicsCharacterProxy_GetEncapsulatingBounds(Bounds *bounds)
{
  *bounds = s_physicsCharacterProxy_EncapsulatingBounds[1];
}

/*
==============
PhysicsCharacterProxy_GetEncapsulatingBounds
==============
*/
void PhysicsCharacterProxy_GetEncapsulatingBounds(Bounds *bounds, const XModelCharCollBoundsType boundsType)
{
  __int64 v2; 
  double v4; 

  v2 = boundsType;
  if ( (unsigned int)(boundsType - 1) > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 110, ASSERT_TYPE_ASSERT, "((boundsType > XModelCharCollBoundsType::CharCollBoundsType_None) && (boundsType < XModelCharCollBoundsType::CharCollBoundsType_Num))", (const char *)&queryFormat, "(boundsType > XModelCharCollBoundsType::CharCollBoundsType_None) && (boundsType < XModelCharCollBoundsType::CharCollBoundsType_Num)") )
    __debugbreak();
  v4 = *(double *)&s_physicsCharacterProxy_EncapsulatingBounds[v2].halfSize.y;
  *(_OWORD *)bounds->midPoint.v = *(_OWORD *)s_physicsCharacterProxy_EncapsulatingBounds[v2].midPoint.v;
  *(double *)&bounds->halfSize.y = v4;
}

/*
==============
PhysicsCharacterProxy_Init
==============
*/
void PhysicsCharacterProxy_Init(void)
{
  G_PhysicsCharacterProxy_Init();
  CG_PhysicsCharacterProxy_Init();
}

/*
==============
PhysicsCharacterProxy_IsCharacterProxy
==============
*/
bool PhysicsCharacterProxy_IsCharacterProxy(Physics_WorldId worldId, unsigned int bodyId)
{
  int Ref; 

  Ref = Physics_GetRef(worldId, bodyId);
  return ((Physics_GetRefSystem(Ref) - 3) & 0xFFFFFFFD) == 0;
}

/*
==============
PhysicsCharacterProxy_Shutdown
==============
*/
void PhysicsCharacterProxy_Shutdown(void)
{
  G_PhysicsCharacterProxy_Shutdown();
  CG_PhysicsCharacterProxy_Shutdown();
}

