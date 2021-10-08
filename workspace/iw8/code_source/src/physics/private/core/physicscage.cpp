/*
==============
PhysicsCage_DrawDebug
==============
*/

void __fastcall PhysicsCage_DrawDebug(unsigned int cageId, unsigned int planesCount)
{
  ?PhysicsCage_DrawDebug@@YAXII@Z(cageId, planesCount);
}

/*
==============
PhysicsCage_ClipPlanes
==============
*/

void __fastcall PhysicsCage_ClipPlanes(unsigned int cageId, const vec4_t *planesWs, unsigned int planeCount)
{
  ?PhysicsCage_ClipPlanes@@YAXIPEBTvec4_t@@I@Z(cageId, planesWs, planeCount);
}

/*
==============
PhysicsCage_Destroy
==============
*/

void __fastcall PhysicsCage_Destroy(unsigned int cageId)
{
  ?PhysicsCage_Destroy@@YAXI@Z(cageId);
}

/*
==============
PhysicsCage_Invalidate
==============
*/

void __fastcall PhysicsCage_Invalidate(unsigned int cageId)
{
  ?PhysicsCage_Invalidate@@YAXI@Z(cageId);
}

/*
==============
PhysicsCage_ResetAll
==============
*/

void PhysicsCage_ResetAll(void)
{
  ?PhysicsCage_ResetAll@@YAXXZ();
}

/*
==============
PhysicsCage_Point3DWorldSpaceToPoint2DInPlane
==============
*/

void __fastcall PhysicsCage_Point3DWorldSpaceToPoint2DInPlane(unsigned int cageId, unsigned int planeIndex, const vec3_t *pointWs, vec2_t *outPoint)
{
  ?PhysicsCage_Point3DWorldSpaceToPoint2DInPlane@@YAXIIAEBTvec3_t@@AEATvec2_t@@@Z(cageId, planeIndex, pointWs, outPoint);
}

/*
==============
PhysicsCage_Update
==============
*/

void __fastcall PhysicsCage_Update(unsigned int cageId, HavokPhysics_IgnoreBodies *ignoreBodies, const vec3_t *minAabb, const vec3_t *maxAabb)
{
  ?PhysicsCage_Update@@YAXIPEAVHavokPhysics_IgnoreBodies@@AEBTvec3_t@@1@Z(cageId, ignoreBodies, minAabb, maxAabb);
}

/*
==============
PhysicsCage_Create
==============
*/

unsigned int __fastcall PhysicsCage_Create(Physics_WorldId worldId, PhysicsCage_Type cageType)
{
  return ?PhysicsCage_Create@@YAIW4Physics_WorldId@@W4PhysicsCage_Type@@@Z(worldId, cageType);
}

/*
==============
PhysicsCage_SegmentCastInPlane
==============
*/

bool __fastcall PhysicsCage_SegmentCastInPlane(unsigned int cageId, const vec3_t *startWs, const vec3_t *endWs, unsigned int planeIndex, float *outFrac)
{
  return ?PhysicsCage_SegmentCastInPlane@@YA_NIAEBTvec3_t@@0IAEAM@Z(cageId, startWs, endWs, planeIndex, outFrac);
}

/*
==============
PhysicsCage_ClipPlanes
==============
*/
void PhysicsCage_ClipPlanes(unsigned int cageId, const vec4_t *planesWs, unsigned int planeCount)
{
  unsigned int v3; 
  const vec4_t *v4; 
  unsigned int v5; 
  unsigned int v6; 
  char *v10; 
  char *v13; 
  char *v14; 
  char *v15; 
  char *v16; 
  unsigned int v17; 
  __int64 v18; 
  char *v20; 
  signed __int64 v26; 
  __int64 v27; 
  char *v31; 
  hkVector4f planesWsa; 
  char v34; 
  char v35[4]; 
  char v36; 
  char v37[4]; 
  char v38[4]; 
  char v39[20]; 

  v3 = planeCount;
  v4 = planesWs;
  v5 = cageId;
  Sys_ProfBeginNamedEvent(0xFF808080, "PhysicsCage_ClipPlanes");
  if ( v5 - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 69, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 70, ASSERT_TYPE_ASSERT, "(planesWs != 0)", "%s\n\tPhysicsCage_ClipPlanes: Invalid planesWs array", "planesWs != NULL") )
    __debugbreak();
  if ( v3 - 1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 71, ASSERT_TYPE_ASSERT, "(planeCount > 0 && planeCount <= MAX_MIDCAGE_CLIPPLANES)", "%s\n\tPhysicsCage_ClipPlanes: Max number of allowed planes to clip is %d", "planeCount > 0 && planeCount <= MAX_MIDCAGE_CLIPPLANES", 2) )
    __debugbreak();
  v6 = 0;
  __asm { vmovss  xmm2, cs:__real@3d000000 }
  if ( v3 >= 4 )
  {
    _RCX = (_DWORD *)&v4[1].v[2];
    _RDX = (char *)((char *)&planesWsa.m_quad.m128_i16[2] - (char *)v4);
    v10 = (char *)((char *)&planesWsa.m_quad.m128_u16[4] - (char *)v4);
    _R10 = (char *)((char *)&planesWsa.m_quad.m128_u32[3] - (char *)v4);
    _R11 = (char *)(v35 - (char *)v4);
    v13 = (char *)((char *)&planesWsa - (char *)v4);
    v14 = (char *)(v37 - (char *)v4);
    v15 = (char *)(v38 - (char *)v4);
    v16 = (char *)(&v34 - (char *)v4);
    v31 = (char *)(&v36 - (char *)v4);
    v17 = ((v3 - 4) >> 2) + 1;
    v18 = v17;
    v6 = 4 * v17;
    _RSI = (char *)(v39 - (char *)v4);
    v20 = (char *)((char *)&planesWsa - (char *)v4);
    do
    {
      *(_DWORD *)&v20[(_QWORD)_RCX - 24] = *(_RCX - 6);
      *(_DWORD *)((char *)_RCX + (_QWORD)_RDX - 24) = *(_RCX - 5);
      *(_DWORD *)((char *)_RCX + (_QWORD)v10 - 24) = *(_RCX - 4);
      __asm
      {
        vmulss  xmm1, xmm2, dword ptr [rcx-0Ch]
        vmovss  dword ptr [r10+rcx-18h], xmm1
      }
      *(_DWORD *)&v16[(_QWORD)_RCX - 24] = *(_RCX - 2);
      *(_DWORD *)((char *)_RCX + (_QWORD)_R11 - 24) = *(_RCX - 1);
      *(_DWORD *)&v13[(_QWORD)_RCX] = *_RCX;
      __asm
      {
        vmulss  xmm1, xmm2, dword ptr [rcx+4]
        vmovss  dword ptr [rdx+rcx], xmm1
      }
      *(_DWORD *)((char *)_RCX + (_QWORD)v10) = _RCX[2];
      *(_DWORD *)((char *)_RCX + (_QWORD)_R10) = _RCX[3];
      *(_DWORD *)&v16[(_QWORD)_RCX] = _RCX[4];
      __asm
      {
        vmulss  xmm1, xmm2, dword ptr [rcx+14h]
        vmovss  dword ptr [r11+rcx], xmm1
      }
      *(_DWORD *)&v31[(_QWORD)_RCX] = _RCX[6];
      *(_DWORD *)&v14[(_QWORD)_RCX] = _RCX[7];
      *(_DWORD *)&v15[(_QWORD)_RCX] = _RCX[8];
      __asm
      {
        vmulss  xmm1, xmm2, dword ptr [rcx+24h]
        vmovss  dword ptr [rcx+rsi], xmm1
      }
      _RCX += 16;
      --v18;
    }
    while ( v18 );
    v4 = planesWs;
    v3 = planeCount;
    v5 = cageId;
  }
  if ( v6 < v3 )
  {
    _RDX = &planesWsa.m_quad.m128_i32[4 * v6 + 1];
    v26 = (char *)v4 - (char *)&planesWsa.m_quad.m128_i16[2];
    v27 = v3 - v6;
    do
    {
      *(_RDX - 1) = *(int *)((char *)_RDX + v26);
      *_RDX = *(int *)((char *)_RDX + v26 + 4);
      _RDX[1] = *(int *)((char *)_RDX + v26 + 8);
      __asm
      {
        vmulss  xmm1, xmm2, dword ptr [rbx+rdx+0Ch]
        vmovss  dword ptr [rdx+8], xmm1
      }
      _RDX += 4;
      --v27;
    }
    while ( v27 );
  }
  HavokPhysicsCage_ClipPlanes(v5, &planesWsa, v3);
  Sys_ProfEndNamedEvent();
}

/*
==============
PhysicsCage_Create
==============
*/
unsigned int PhysicsCage_Create(Physics_WorldId worldId, PhysicsCage_Type cageType)
{
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 20, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysicsCage_Create: Invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( cageType != PhysicsCage_Midphase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 21, ASSERT_TYPE_ASSERT, "(cageType == PhysicsCage_Type::PhysicsCage_Midphase)", "%s\n\tPhysicsCage_Create: Only PhysicsCage_Midphase is supported", "cageType == PhysicsCage_Type::PhysicsCage_Midphase") )
    __debugbreak();
  return HavokPhysicsCage_Create(worldId, cageType);
}

/*
==============
PhysicsCage_Destroy
==============
*/
void PhysicsCage_Destroy(unsigned int cageId)
{
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 58, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  HavokPhysicsCage_Destroy(cageId);
}

/*
==============
PhysicsCage_DrawDebug
==============
*/
void PhysicsCage_DrawDebug(unsigned int cageId, unsigned int planesCount)
{
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 120, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  HavokPhysicsCage_DrawDebug(cageId, planesCount);
}

/*
==============
PhysicsCage_Invalidate
==============
*/
void PhysicsCage_Invalidate(unsigned int cageId)
{
  if ( cageId >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 48, ASSERT_TYPE_ASSERT, "(cageId >= 0 && cageId < MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId >= 0 && cageId < MAX_CAGE_COUNT") )
    __debugbreak();
  HavokPhysicsCage_Invalidate(cageId);
}

/*
==============
PhysicsCage_Point3DWorldSpaceToPoint2DInPlane
==============
*/
void PhysicsCage_Point3DWorldSpaceToPoint2DInPlane(unsigned int cageId, unsigned int planeIndex, const vec3_t *pointWs, vec2_t *outPoint)
{
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 86, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  HavokPhysicsCage_Point3DWorldSpaceToPoint2DInPlane(cageId, planeIndex, pointWs, outPoint);
}

/*
==============
PhysicsCage_ResetAll
==============
*/

void PhysicsCage_ResetAll(void)
{
  HavokPhysicsCage_ResetAll();
}

/*
==============
PhysicsCage_SegmentCastInPlane
==============
*/
bool PhysicsCage_SegmentCastInPlane(unsigned int cageId, const vec3_t *startWs, const vec3_t *endWs, unsigned int planeIndex, float *outFrac)
{
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 97, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT") )
    __debugbreak();
  if ( planeIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 98, ASSERT_TYPE_ASSERT, "(planeIndex >= 0 && planeIndex < MAX_MIDCAGE_CLIPPLANES)", (const char *)&queryFormat, "planeIndex >= 0 && planeIndex < MAX_MIDCAGE_CLIPPLANES") )
    __debugbreak();
  return HavokPhysicsCage_SegmentCastInPlane(cageId, startWs, endWs, planeIndex, outFrac);
}

/*
==============
PhysicsCage_Update
==============
*/
void PhysicsCage_Update(unsigned int cageId, HavokPhysics_IgnoreBodies *ignoreBodies, const vec3_t *minAabb, const vec3_t *maxAabb)
{
  hkAabb newAabb; 

  Sys_ProfBeginNamedEvent(0xFF808080, "PhysicsCage_Update");
  if ( cageId - 1 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicscage.cpp", 34, ASSERT_TYPE_ASSERT, "(cageId > 0 && cageId <= MAX_CAGE_COUNT)", (const char *)&queryFormat, "cageId > 0 && cageId <= MAX_CAGE_COUNT", -2i64) )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, cs:__real@3d000000
    vmulss  xmm0, xmm4, dword ptr [rsi]
    vmovss  dword ptr [rsp+88h+newAabb.m_min.m_quad], xmm0
    vmulss  xmm2, xmm4, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+88h+newAabb.m_min.m_quad+4], xmm2
    vmulss  xmm1, xmm4, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+88h+newAabb.m_min.m_quad+8], xmm1
    vxorps  xmm3, xmm3, xmm3
    vmovss  dword ptr [rsp+88h+newAabb.m_min.m_quad+0Ch], xmm3
    vmulss  xmm1, xmm4, dword ptr [rdi]
    vmovss  dword ptr [rsp+88h+newAabb.m_max.m_quad], xmm1
    vmulss  xmm0, xmm4, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+88h+newAabb.m_max.m_quad+4], xmm0
    vmulss  xmm2, xmm4, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+88h+newAabb.m_max.m_quad+8], xmm2
    vmovss  dword ptr [rsp+88h+newAabb.m_max.m_quad+0Ch], xmm3
  }
  HavokPhysicsCage_Update(cageId, ignoreBodies, &newAabb);
  Sys_ProfEndNamedEvent();
}

