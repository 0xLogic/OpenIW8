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
  int v6; 
  unsigned int v7; 
  __int64 v15; 
  __int64 v16; 

  _RDI = capsule;
  if ( !entityBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 149, ASSERT_TYPE_ASSERT, "(entityBounds)", (const char *)&queryFormat, "entityBounds") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 150, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
    __debugbreak();
  _R14 = &entityBounds->halfSize;
  _RBP = Vec3MajorAxis(&entityBounds->halfSize);
  v6 = Vec3MinorAxis(&entityBounds->halfSize);
  v7 = v6 == 0;
  if ( v7 == (_DWORD)_RBP )
  {
    v7 = 3 - v6;
    if ( !v6 )
      v7 = 2;
  }
  _RDI->center.v[0] = entityBounds->midPoint.v[0];
  _RDI->center.v[1] = entityBounds->midPoint.v[1];
  _RDI->center.v[2] = entityBounds->midPoint.v[2];
  if ( v7 >= 3 )
  {
    LODWORD(v15) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, 3) )
      __debugbreak();
  }
  _RDI->radius = _R14->v[v7];
  if ( (unsigned int)_RBP >= 3 )
  {
    LODWORD(v16) = 3;
    LODWORD(v15) = _RBP;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+rbp*4]
    vmovss  xmm3, dword ptr [rdi+10h]
    vsubss  xmm1, xmm0, xmm3
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmovss  xmm1, cs:__real@3f800000
    vcmpltss xmm2, xmm0, xmm3
    vblendvps xmm0, xmm1, xmm3, xmm2
  }
  _RDI->majorAxis = _RBP;
  __asm
  {
    vmovss  dword ptr [rdi+10h], xmm0
    vmovss  [rsp+58h+arg_0], xmm0
  }
}

/*
==============
PhysicsCharacterProxy_DoCapsulesVary
==============
*/
bool PhysicsCharacterProxy_DoCapsulesVary(const PhysicsCharacterProxy_Capsule *capsuleA, const PhysicsCharacterProxy_Capsule *capsuleB)
{
  bool result; 

  _RBX = capsuleB;
  _RDI = capsuleA;
  if ( !capsuleA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 181, ASSERT_TYPE_ASSERT, "( capsuleA )", (const char *)&queryFormat, "capsuleA") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 182, ASSERT_TYPE_ASSERT, "( capsuleB )", (const char *)&queryFormat, "capsuleB") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx] }
  result = 1;
  __asm
  {
    vucomiss xmm0, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rbx+4]
    vucomiss xmm0, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vucomiss xmm0, dword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vucomiss xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm0, dword ptr [rbx+10h]
    vucomiss xmm0, dword ptr [rdi+10h]
  }
  if ( _RDI->majorAxis == _RBX->majorAxis )
    return 0;
  return result;
}

/*
==============
PhysicsCharacterProxy_GetCollisionBounds
==============
*/
void PhysicsCharacterProxy_GetCollisionBounds(Bounds *bounds, const XModelCharCollBoundsType boundsType, bool quantized)
{
  __int64 v3; 

  v3 = boundsType;
  _RBX = bounds;
  if ( (unsigned int)(boundsType - 1) > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 133, ASSERT_TYPE_ASSERT, "((boundsType > XModelCharCollBoundsType::CharCollBoundsType_None) && (boundsType < XModelCharCollBoundsType::CharCollBoundsType_Num))", (const char *)&queryFormat, "(boundsType > XModelCharCollBoundsType::CharCollBoundsType_None) && (boundsType < XModelCharCollBoundsType::CharCollBoundsType_Num)") )
    __debugbreak();
  _RCX = 3 * v3;
  _RAX = 0x140000000ui64;
  if ( quantized )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr ds:rva s_physicsCharacterProxy_BoundsQuantized.midPoint[rax+rcx*8]
      vmovsd  xmm1, qword ptr ds:(rva s_physicsCharacterProxy_BoundsQuantized.halfSize+4)[rax+rcx*8]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr ds:rva s_physicsCharacterProxy_Bounds.midPoint[rax+rcx*8]
      vmovsd  xmm1, qword ptr ds:(rva s_physicsCharacterProxy_Bounds.halfSize+4)[rax+rcx*8]
    }
  }
  __asm
  {
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  qword ptr [rbx+10h], xmm1
  }
}

/*
==============
PhysicsCharacterProxy_GetCollisionBounds
==============
*/
void PhysicsCharacterProxy_GetCollisionBounds(Bounds *bounds, bool quantized)
{
  if ( quantized )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:s_physicsCharacterProxy_BoundsQuantized.midPoint+18h
      vmovsd  xmm1, qword ptr cs:s_physicsCharacterProxy_BoundsQuantized.halfSize+1Ch
      vmovups xmmword ptr [rcx], xmm0
      vmovsd  qword ptr [rcx+10h], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:s_physicsCharacterProxy_Bounds.midPoint+18h
      vmovsd  xmm1, qword ptr cs:s_physicsCharacterProxy_Bounds.halfSize+1Ch
      vmovups xmmword ptr [rcx], xmm0
      vmovsd  qword ptr [rcx+10h], xmm1
    }
  }
}

/*
==============
PhysicsCharacterProxy_GetEncapsulatingBounds
==============
*/
void PhysicsCharacterProxy_GetEncapsulatingBounds(Bounds *bounds)
{
  __asm
  {
    vmovups xmm0, xmmword ptr cs:s_physicsCharacterProxy_EncapsulatingBounds.midPoint+18h
    vmovsd  xmm1, qword ptr cs:s_physicsCharacterProxy_EncapsulatingBounds.halfSize+1Ch
    vmovups xmmword ptr [rcx], xmm0
    vmovsd  qword ptr [rcx+10h], xmm1
  }
}

/*
==============
PhysicsCharacterProxy_GetEncapsulatingBounds
==============
*/
void PhysicsCharacterProxy_GetEncapsulatingBounds(Bounds *bounds, const XModelCharCollBoundsType boundsType)
{
  __int64 v2; 

  v2 = boundsType;
  _RDI = bounds;
  if ( (unsigned int)(boundsType - 1) > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscharacterproxy.cpp", 110, ASSERT_TYPE_ASSERT, "((boundsType > XModelCharCollBoundsType::CharCollBoundsType_None) && (boundsType < XModelCharCollBoundsType::CharCollBoundsType_Num))", (const char *)&queryFormat, "(boundsType > XModelCharCollBoundsType::CharCollBoundsType_None) && (boundsType < XModelCharCollBoundsType::CharCollBoundsType_Num)") )
    __debugbreak();
  _RCX = 3 * v2;
  _RAX = s_physicsCharacterProxy_EncapsulatingBounds;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+rcx*8]
    vmovsd  xmm1, qword ptr [rax+rcx*8+10h]
    vmovups xmmword ptr [rdi], xmm0
    vmovsd  qword ptr [rdi+10h], xmm1
  }
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

