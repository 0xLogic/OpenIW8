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
  char *p_z; 
  signed __int64 v8; 
  signed __int64 v9; 
  signed __int64 v10; 
  char *v11; 
  char *v12; 
  char *v13; 
  char *v14; 
  char *v15; 
  unsigned int v16; 
  __int64 v17; 
  char *v18; 
  char *v19; 
  char *v20; 
  signed __int64 v21; 
  __int64 v22; 
  char *v25; 
  hkVector4f planesWsa; 
  char v28; 
  char v29[4]; 
  char v30; 
  char v31[4]; 
  char v32[4]; 
  char v33[20]; 

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
  if ( v3 >= 4 )
  {
    p_z = (char *)&v4[1].xyz.z;
    v8 = (char *)&planesWsa.m_quad.m128_i16[2] - (char *)v4;
    v9 = (char *)&planesWsa.m_quad.m128_u16[4] - (char *)v4;
    v10 = (char *)&planesWsa.m_quad.m128_u32[3] - (char *)v4;
    v11 = (char *)(v29 - (char *)v4);
    v12 = (char *)((char *)&planesWsa - (char *)v4);
    v13 = (char *)(v31 - (char *)v4);
    v14 = (char *)(v32 - (char *)v4);
    v15 = (char *)(&v28 - (char *)v4);
    v25 = (char *)(&v30 - (char *)v4);
    v16 = ((v3 - 4) >> 2) + 1;
    v17 = v16;
    v6 = 4 * v16;
    v18 = (char *)(v33 - (char *)v4);
    v19 = (char *)((char *)&planesWsa - (char *)v4);
    do
    {
      *(_DWORD *)&v19[(_QWORD)p_z - 24] = *((_DWORD *)p_z - 6);
      *(_DWORD *)&p_z[v8 - 24] = *((_DWORD *)p_z - 5);
      *(_DWORD *)&p_z[v9 - 24] = *((_DWORD *)p_z - 4);
      *(float *)&p_z[v10 - 24] = 0.03125 * *((float *)p_z - 3);
      *(_DWORD *)&v15[(_QWORD)p_z - 24] = *((_DWORD *)p_z - 2);
      *(_DWORD *)&p_z[(_QWORD)v11 - 24] = *((_DWORD *)p_z - 1);
      *(_DWORD *)&v12[(_QWORD)p_z] = *(_DWORD *)p_z;
      *(float *)&p_z[v8] = 0.03125 * *((float *)p_z + 1);
      *(_DWORD *)&p_z[v9] = *((_DWORD *)p_z + 2);
      *(_DWORD *)&p_z[v10] = *((_DWORD *)p_z + 3);
      *(_DWORD *)&v15[(_QWORD)p_z] = *((_DWORD *)p_z + 4);
      *(float *)&p_z[(_QWORD)v11] = 0.03125 * *((float *)p_z + 5);
      *(_DWORD *)&v25[(_QWORD)p_z] = *((_DWORD *)p_z + 6);
      *(_DWORD *)&v13[(_QWORD)p_z] = *((_DWORD *)p_z + 7);
      *(_DWORD *)&v14[(_QWORD)p_z] = *((_DWORD *)p_z + 8);
      *(float *)&v18[(_QWORD)p_z] = 0.03125 * *((float *)p_z + 9);
      p_z += 64;
      --v17;
    }
    while ( v17 );
    v4 = planesWs;
    v3 = planeCount;
    v5 = cageId;
  }
  if ( v6 < v3 )
  {
    v20 = &planesWsa.m_quad.m128_i8[16 * v6 + 4];
    v21 = (char *)v4 - (char *)&planesWsa.m_quad.m128_i16[2];
    v22 = v3 - v6;
    do
    {
      *((_DWORD *)v20 - 1) = *(_DWORD *)&v20[v21];
      *(_DWORD *)v20 = *(_DWORD *)&v20[v21 + 4];
      *((_DWORD *)v20 + 1) = *(_DWORD *)&v20[v21 + 8];
      *((float *)v20 + 2) = 0.03125 * *(float *)&v20[v21 + 12];
      v20 += 16;
      --v22;
    }
    while ( v22 );
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
  newAabb.m_min.m_quad.m128_f32[0] = 0.03125 * minAabb->v[0];
  newAabb.m_min.m_quad.m128_f32[1] = 0.03125 * minAabb->v[1];
  newAabb.m_min.m_quad.m128_f32[2] = 0.03125 * minAabb->v[2];
  newAabb.m_min.m_quad.m128_f32[3] = 0.0;
  newAabb.m_max.m_quad.m128_f32[0] = 0.03125 * maxAabb->v[0];
  newAabb.m_max.m_quad.m128_f32[1] = 0.03125 * maxAabb->v[1];
  newAabb.m_max.m_quad.m128_f32[2] = 0.03125 * maxAabb->v[2];
  newAabb.m_max.m_quad.m128_f32[3] = 0.0;
  HavokPhysicsCage_Update(cageId, ignoreBodies, &newAabb);
  Sys_ProfEndNamedEvent();
}

