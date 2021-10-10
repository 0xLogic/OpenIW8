/*
==============
PatchCollision_HasCollision
==============
*/

bool __fastcall PatchCollision_HasCollision()
{
  return ?PatchCollision_HasCollision@@YA_NXZ();
}

/*
==============
PatchCollision_GetShapeForLoad
==============
*/

const hknpShape *__fastcall PatchCollision_GetShapeForLoad(const Physics_WorldId worldId, const unsigned int instanceId)
{
  return ?PatchCollision_GetShapeForLoad@@YAPEBVhknpShape@@W4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
PatchCollision_GetStringTable
==============
*/

const StringTable *__fastcall PatchCollision_GetStringTable()
{
  return ?PatchCollision_GetStringTable@@YAPEBUStringTable@@XZ();
}

/*
==============
PatchCollision_InstantiateCollision
==============
*/

void __fastcall PatchCollision_InstantiateCollision(const Physics_WorldId worldId, const char *const mapName)
{
  ?PatchCollision_InstantiateCollision@@YAXW4Physics_WorldId@@QEBD@Z(worldId, mapName);
}

/*
==============
PatchCollision_Shutdown
==============
*/

void PatchCollision_Shutdown(void)
{
  ?PatchCollision_Shutdown@@YAXXZ();
}

/*
==============
PatchCollision_MyChangesSaveAndShutdown
==============
*/

void PatchCollision_MyChangesSaveAndShutdown(void)
{
  ?PatchCollision_MyChangesSaveAndShutdown@@YAXXZ();
}

/*
==============
PatchCollision_MyChangesInitAndLoad
==============
*/

void PatchCollision_MyChangesInitAndLoad(void)
{
  ?PatchCollision_MyChangesInitAndLoad@@YAXXZ();
}

/*
==============
PatchCollision_ShutdownCollision
==============
*/

void __fastcall PatchCollision_ShutdownCollision(const Physics_WorldId worldId)
{
  ?PatchCollision_ShutdownCollision@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PatchCollision_Load
==============
*/

void __fastcall PatchCollision_Load(SaveGame *save)
{
  ?PatchCollision_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
PatchCollision_HasCollisionForWorld
==============
*/

bool __fastcall PatchCollision_HasCollisionForWorld(const Physics_WorldId worldId)
{
  return ?PatchCollision_HasCollisionForWorld@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PatchCollision_Init
==============
*/

void PatchCollision_Init(void)
{
  ?PatchCollision_Init@@YAXXZ();
}

/*
==============
PatchCollision_Write
==============
*/

void __fastcall PatchCollision_Write(MemoryFile *memFile)
{
  ?PatchCollision_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
PatchCollisions_HasShapeData
==============
*/

bool __fastcall PatchCollisions_HasShapeData()
{
  return ?PatchCollisions_HasShapeData@@YA_NXZ();
}

/*
==============
PatchCollision_CreateShapes
==============
*/

void __fastcall PatchCollision_CreateShapes(double _XMM0_8)
{
  XAssetHeader v1; 
  const StringTable *physicsLibrary; 
  int RowCount; 
  unsigned int v4; 
  int v5; 
  const char *ColumnValueForRow; 
  const char *v7; 
  const PhysicsAsset *physicsAsset; 
  const XModelDetailCollision *modelDetailCollision; 
  hkMemoryAllocator *v16; 
  __int64 v17; 
  hkRefPtr<hknpShape const > *p_m_shape; 
  hkMemoryAllocator *v19; 
  __int64 v20; 
  hkRefPtr<hknpShape const > *v21; 
  hkArray<hknpShapeInstance,hkContainerHeapAllocator> v22; 
  hkArray<hknpShapeInstance,hkContainerHeapAllocator> instanceArray; 
  __int64 v24; 
  char *v25; 
  char *v26; 
  char *v27; 
  char *v28; 
  char *v29; 
  char *v30; 
  __int64 v31; 
  vec3_t origin; 
  vec3_t angles; 
  vec4_t quat; 
  char dest[64]; 

  v31 = -2i64;
  if ( s_patchCollision_ShapesRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 142, ASSERT_TYPE_ASSERT, "( s_patchCollision_ShapesRefCount ) == ( 0 )", "%s == %s\n\t%u, %u", "s_patchCollision_ShapesRefCount", "0", s_patchCollision_ShapesRefCount, 0i64) )
    __debugbreak();
  if ( s_patchCollision_SimulationShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 143, ASSERT_TYPE_ASSERT, "( s_patchCollision_SimulationShape ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_patchCollision_SimulationShape", "nullptr", s_patchCollision_SimulationShape, NULL) )
    __debugbreak();
  if ( s_patchCollision_DetailShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 144, ASSERT_TYPE_ASSERT, "( s_patchCollision_DetailShape ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_patchCollision_DetailShape", "nullptr", s_patchCollision_DetailShape, NULL) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PatchCollision_CreateShapes");
  if ( s_patchCollision_MapName[0] )
  {
    Com_sprintf<64>((char (*)[64])dest, "patchcollision/%s.csv", s_patchCollision_MapName);
    if ( DB_XAssetExists(ASSET_TYPE_STRINGTABLE, dest) )
    {
      v1.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_STRINGTABLE, dest, 0).physicsLibrary;
      physicsLibrary = (const StringTable *)v1.physicsLibrary;
      if ( v1.physicsLibrary )
      {
        RowCount = StringTable_GetRowCount(v1.stringTable);
        LODWORD(v24) = RowCount;
        if ( RowCount )
        {
          if ( (unsigned int)(StringTable_GetColumnCount(physicsLibrary) - 8) <= 1 )
          {
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Collect Shape Instances");
            v4 = 0;
            instanceArray.m_data = NULL;
            instanceArray.m_size = 0;
            instanceArray.m_capacityAndFlags = 0x80000000;
            v22.m_data = NULL;
            v22.m_size = 0;
            v22.m_capacityAndFlags = 0x80000000;
            v5 = 0;
            if ( RowCount > 0 )
            {
              do
              {
                ColumnValueForRow = StringTable_GetColumnValueForRow(physicsLibrary, v5, 0);
                v7 = StringTable_GetColumnValueForRow(physicsLibrary, v5, 1);
                v25 = (char *)StringTable_GetColumnValueForRow(physicsLibrary, v5, 2);
                v26 = (char *)StringTable_GetColumnValueForRow(physicsLibrary, v5, 3);
                v27 = (char *)StringTable_GetColumnValueForRow(physicsLibrary, v5, 4);
                v28 = (char *)StringTable_GetColumnValueForRow(physicsLibrary, v5, 5);
                v29 = (char *)StringTable_GetColumnValueForRow(physicsLibrary, v5, 6);
                v30 = (char *)StringTable_GetColumnValueForRow(physicsLibrary, v5, 7);
                physicsAsset = DB_FindXAssetHeader(ASSET_TYPE_PHYSICSASSET, ColumnValueForRow, 0).physicsAsset;
                if ( *v7 )
                  modelDetailCollision = DB_FindXAssetHeader(ASSET_TYPE_XMODEL_DETAIL_COLLISION, v7, 0).modelDetailCollision;
                else
                  modelDetailCollision = NULL;
                _XMM0_8 = atof(v25);
                __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
                _XMM0_8 = atof(v26);
                __asm { vcvtsd2ss xmm8, xmm0, xmm0 }
                _XMM0_8 = atof(v27);
                __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
                _XMM0_8 = atof(v28);
                __asm { vcvtsd2ss xmm10, xmm0, xmm0 }
                _XMM0_8 = atof(v29);
                __asm { vcvtsd2ss xmm11, xmm0, xmm0 }
                _XMM0_8 = atof(v30);
                __asm { vcvtsd2ss xmm12, xmm0, xmm0 }
                if ( !physicsAsset )
                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E937D8, 6379i64, ColumnValueForRow);
                if ( *v7 && !modelDetailCollision )
                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E93828, 6380i64, v7);
                if ( DB_IsXAssetTransientNonLocking(ASSET_TYPE_PHYSICSASSET, ColumnValueForRow) )
                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E93880, 6381i64, ColumnValueForRow);
                if ( modelDetailCollision && DB_IsXAssetTransientNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, v7) )
                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E938F0, 6382i64, v7);
                origin.v[0] = *(float *)&_XMM7;
                origin.v[1] = *(float *)&_XMM8;
                origin.v[2] = *(float *)&_XMM9;
                angles.v[0] = *(float *)&_XMM10;
                angles.v[1] = *(float *)&_XMM11;
                angles.v[2] = *(float *)&_XMM12;
                AnglesToQuat(&angles, &quat);
                Physics_AddPhysicsAssetShapesToInstanceList(physicsAsset, &origin, 1.0, &quat, &instanceArray);
                v4 |= Physics_GetPhysicsAssetContents(physicsAsset);
                if ( modelDetailCollision )
                {
                  Physics_AddDetailCollisionShapesToInstanceList(modelDetailCollision, &origin, 1.0, &quat, &v22);
                  v4 |= Physics_GetDetailCollisionContents(modelDetailCollision);
                }
                else
                {
                  Physics_AddPhysicsAssetShapesToInstanceList(physicsAsset, &origin, 1.0, &quat, &v22);
                }
                ++v5;
              }
              while ( v5 < (int)v24 );
            }
            Sys_ProfEndNamedEvent();
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Make simulation shape");
            if ( s_patchCollision_SimulationShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 246, ASSERT_TYPE_ASSERT, "( s_patchCollision_SimulationShape ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_patchCollision_SimulationShape", "nullptr", s_patchCollision_SimulationShape, NULL) )
              __debugbreak();
            s_patchCollision_SimulationShape = Physics_CreateShapeCompound(&instanceArray);
            if ( !s_patchCollision_SimulationShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 248, ASSERT_TYPE_ASSERT, "( s_patchCollision_SimulationShape ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_patchCollision_SimulationShape", "nullptr", NULL, NULL) )
              __debugbreak();
            Sys_ProfEndNamedEvent();
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Make detail shape");
            if ( s_patchCollision_DetailShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 252, ASSERT_TYPE_ASSERT, "( s_patchCollision_DetailShape ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_patchCollision_DetailShape", "nullptr", s_patchCollision_DetailShape, NULL) )
              __debugbreak();
            s_patchCollision_DetailShape = Physics_CreateShapeCompound(&v22);
            if ( !s_patchCollision_DetailShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 254, ASSERT_TYPE_ASSERT, "( s_patchCollision_DetailShape ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_patchCollision_DetailShape", "nullptr", NULL, NULL) )
              __debugbreak();
            Sys_ProfEndNamedEvent();
            s_patchCollision_ShapeContents = v4;
            Core_strcpy(s_patchCollision_ShapeName, 0x40ui64, "patch collision");
            v16 = hkMemHeapAllocator();
            v17 = v22.m_size - 1;
            if ( v22.m_size - 1 >= 0 )
            {
              p_m_shape = &v22.m_data[v17].m_shape;
              do
              {
                if ( p_m_shape->m_ptr )
                  hkReferencedObject::removeReference(&p_m_shape->m_ptr->hkReferencedObject);
                p_m_shape -= 14;
                --v17;
              }
              while ( v17 >= 0 );
            }
            v22.m_size = 0;
            if ( v22.m_capacityAndFlags >= 0 )
              hkMemoryAllocator::bufFree2(v16, v22.m_data, 112, v22.m_capacityAndFlags & 0x3FFFFFFF);
            v22.m_data = NULL;
            v22.m_capacityAndFlags = 0x80000000;
            v19 = hkMemHeapAllocator();
            v20 = instanceArray.m_size - 1;
            if ( instanceArray.m_size - 1 >= 0 )
            {
              v21 = &instanceArray.m_data[v20].m_shape;
              do
              {
                if ( v21->m_ptr )
                  hkReferencedObject::removeReference(&v21->m_ptr->hkReferencedObject);
                v21 -= 14;
                --v20;
              }
              while ( v20 >= 0 );
            }
            instanceArray.m_size = 0;
            if ( instanceArray.m_capacityAndFlags >= 0 )
              hkMemoryAllocator::bufFree2(v19, instanceArray.m_data, 112, instanceArray.m_capacityAndFlags & 0x3FFFFFFF);
            instanceArray.m_data = NULL;
            instanceArray.m_capacityAndFlags = 0x80000000;
          }
          else
          {
            Com_PrintWarning(20, "Patch Collision has an incorrect number of columns\n");
          }
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PatchCollision_GetShapeForLoad
==============
*/
hknpShape *PatchCollision_GetShapeForLoad(const Physics_WorldId worldId, const unsigned int instanceId)
{
  bool IsDetailWorld; 
  hknpShape *v5; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 543, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_LAST )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_LAST]\n\t%i not in [%i, %i]", worldId, 0i64, 7) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 544, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  IsDetailWorld = Physics_IsDetailWorld(worldId);
  v5 = s_patchCollision_SimulationShape;
  if ( IsDetailWorld )
    return s_patchCollision_DetailShape;
  return v5;
}

/*
==============
PatchCollision_GetStringTable
==============
*/
const StringTable *PatchCollision_GetStringTable()
{
  char dest[64]; 

  if ( !s_patchCollision_MapName[0] )
    return 0i64;
  Com_sprintf<64>((char (*)[64])dest, "patchcollision/%s.csv", s_patchCollision_MapName);
  if ( !DB_XAssetExists(ASSET_TYPE_STRINGTABLE, dest) )
    return 0i64;
  return DB_FindXAssetHeader(ASSET_TYPE_STRINGTABLE, dest, 0).stringTable;
}

/*
==============
PatchCollision_HasCollision
==============
*/
char PatchCollision_HasCollision()
{
  int v0; 
  unsigned int *v1; 
  bool v2; 
  __int64 v4; 
  __int64 v5; 

  v0 = 0;
  v1 = s_patchCollision_PhysicsInstances;
  v2 = 1;
  while ( 1 )
  {
    if ( !v2 )
    {
      LODWORD(v5) = 8;
      LODWORD(v4) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 458, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( *v1 != -1 )
      break;
    ++v0;
    ++v1;
    v2 = (unsigned int)v0 < 8;
    if ( v0 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
PatchCollision_HasCollisionForWorld
==============
*/
bool PatchCollision_HasCollisionForWorld(const Physics_WorldId worldId)
{
  __int64 v1; 
  int v4; 

  v1 = worldId;
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 458, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( PHYSICS_WORLD_ID_COUNT )", "worldId doesn't index PHYSICS_WORLD_ID_COUNT\n\t%i not in [0, %i)", worldId, v4) )
      __debugbreak();
  }
  return s_patchCollision_PhysicsInstances[v1] != -1;
}

/*
==============
PatchCollision_Init
==============
*/
void PatchCollision_Init(void)
{
  Dvar_BeginPermanentRegistration();
  DVARBOOL_patchCollision_debugList = Dvar_RegisterBool("LMLKROTKKP", 0, 4u, "Debug Draw Patch Collision Summary");
  DVARINT_patchCollision_debugDisplayOffsetX = Dvar_RegisterInt("NTRPOKLSNM", 0, -500, 500, 4u, "Move the Patch Collisions Debug Display in the X direction");
  DVARINT_patchCollision_debugDisplayOffsetY = Dvar_RegisterInt("LRPNKPNTQT", 0, -45000, 500, 4u, "Move the Patch Collisions Debug Display in the Y direction");
  DVARBOOL_patchCollision_debugDump = Dvar_RegisterBool("MSPKTNQQSN", 0, 4u, "Dump Patch Collision Debug Display to TTY");
  Dvar_EndPermanentRegistration();
  *(_QWORD *)s_patchCollision_PhysicsInstances = -1i64;
  s_patchCollision_SimulationShape = NULL;
  *(_QWORD *)s_patchCollision_ShapeName = 0i64;
  *(_QWORD *)&s_patchCollision_ShapeName[8] = 0i64;
  *(_QWORD *)&s_patchCollision_ShapeName[16] = 0i64;
  *(_QWORD *)&s_patchCollision_ShapeName[24] = 0i64;
  *(_QWORD *)&s_patchCollision_ShapeName[32] = 0i64;
  *(_QWORD *)&s_patchCollision_ShapeName[40] = 0i64;
  *(_QWORD *)&s_patchCollision_ShapeName[48] = 0i64;
  *(_QWORD *)&s_patchCollision_ShapeName[56] = 0i64;
  s_patchCollision_DetailShape = NULL;
  s_patchCollision_ShapeContents = 0;
  *(_QWORD *)&s_patchCollision_PhysicsInstances[2] = -1i64;
  *(_QWORD *)&s_patchCollision_PhysicsInstances[4] = -1i64;
  *(_QWORD *)&s_patchCollision_PhysicsInstances[6] = -1i64;
  *(_QWORD *)s_patchCollision_CollisionInstantiatedForWorld = 0i64;
}

/*
==============
PatchCollision_InstantiateCollision
==============
*/
void PatchCollision_InstantiateCollision(const Physics_WorldId worldId, const char *const mapName)
{
  double v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  char *v7; 
  __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  bool IsDetailWorld; 
  const hknpShape *v13; 
  int Ref; 

  v3 = worldId;
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 332, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( mapName[v6] );
  if ( !(_DWORD)v6 )
  {
    do
      ++v5;
    while ( mapName[v5] );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 333, ASSERT_TYPE_ASSERT, "( I_strlen( mapName ) ) > ( 0 )", "%s > %s\n\t%u, %u", "I_strlen( mapName )", "0", v5, 0i64) )
      __debugbreak();
  }
  if ( s_patchCollision_CollisionInstantiatedForWorld[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 334, ASSERT_TYPE_ASSERT, "(!s_patchCollision_CollisionInstantiatedForWorld[worldId])", (const char *)&queryFormat, "!s_patchCollision_CollisionInstantiatedForWorld[worldId]") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_PATCH_COLLISION);
  if ( s_patchCollision_ShapesRefCount )
  {
    v7 = s_patchCollision_MapName;
    v8 = 64i64;
    if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v9 = v7[mapName - s_patchCollision_MapName];
      v10 = v8;
      v11 = *v7++;
      --v8;
      if ( !v10 )
        break;
      if ( v9 != v11 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 366, ASSERT_TYPE_ASSERT, "(!I_strncmp( mapName, s_patchCollision_MapName, ( 64 ) ))", "%s\n\tPatch Collision Map Names Don't match: %s %s", "!I_strncmp( mapName, s_patchCollision_MapName, MAX_QPATH )", mapName, s_patchCollision_MapName) )
          __debugbreak();
        break;
      }
    }
    while ( v9 );
  }
  else
  {
    if ( s_patchCollision_MapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 359, ASSERT_TYPE_ASSERT, "(s_patchCollision_MapName[0] == '\\0')", (const char *)&queryFormat, "s_patchCollision_MapName[0] == '\\0'") )
      __debugbreak();
    Core_strncpy(s_patchCollision_MapName, 0x40ui64, mapName, 0x40ui64);
    PatchCollision_CreateShapes(v2);
  }
  ++s_patchCollision_ShapesRefCount;
  Sys_LeaveCriticalSection(CRITSECT_PATCH_COLLISION);
  if ( s_patchCollision_PhysicsInstances[v3] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 295, ASSERT_TYPE_ASSERT, "(s_patchCollision_PhysicsInstances[worldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_patchCollision_PhysicsInstances[worldId] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  IsDetailWorld = Physics_IsDetailWorld((Physics_WorldId)v3);
  v13 = s_patchCollision_SimulationShape;
  if ( IsDetailWorld )
    v13 = s_patchCollision_DetailShape;
  if ( v13 )
  {
    Ref = Physics_MakeRef(Physics_RefSystem_WorldGeo, Physics_RelationshipSystem_None, 2u, 0);
    s_patchCollision_PhysicsInstances[v3] = Physics_InstantiateStaticBody((Physics_WorldId)v3, v13, Ref, s_patchCollision_ShapeName, NULL, s_patchCollision_ShapeContents, &vec3_origin, &quat_identity, 1, 1, 0);
  }
  s_patchCollision_CollisionInstantiatedForWorld[v3] = 1;
}

/*
==============
PatchCollision_Load
==============
*/
void PatchCollision_Load(SaveGame *save)
{
  SaveGame *v1; 
  bool *v2; 
  int v3; 
  unsigned int *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  bool v7; 
  unsigned int v8; 
  unsigned int v9; 
  bool IsDetailWorld; 
  __int64 v11; 
  __int64 v12; 

  v1 = save;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 499, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  v2 = s_patchCollision_CollisionInstantiatedForWorld;
  v3 = 0;
  v4 = s_patchCollision_PhysicsInstances;
  v5 = 0i64;
  v6 = 0i64;
  do
  {
    if ( s_patchCollision_CollisionInstantiatedForWorld[v5] )
    {
      if ( v6 >= 8 )
      {
        j___report_rangecheckfailure(save);
        JUMPOUT(0x140E798E4i64);
      }
      v7 = s_patchCollision_MapName[0] == 0;
      s_patchCollision_CollisionInstantiatedForWorld[v5] = 0;
      if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 410, ASSERT_TYPE_ASSERT, "(s_patchCollision_MapName[0] != '\\0')", (const char *)&queryFormat, "s_patchCollision_MapName[0] != '\\0'") )
        __debugbreak();
      v8 = s_patchCollision_PhysicsInstances[v6];
      if ( v8 != -1 )
      {
        Physics_DestroyInstance((Physics_WorldId)v3, v8, 0);
        s_patchCollision_PhysicsInstances[v6] = -1;
      }
      Sys_EnterCriticalSection(CRITSECT_PATCH_COLLISION);
      v9 = s_patchCollision_ShapesRefCount;
      if ( !s_patchCollision_ShapesRefCount )
      {
        LODWORD(v12) = s_patchCollision_ShapesRefCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 422, ASSERT_TYPE_ASSERT, "( s_patchCollision_ShapesRefCount ) > ( 0 )", "%s > %s\n\t%u, %u", "s_patchCollision_ShapesRefCount", "0", v12, 0i64) )
          __debugbreak();
        v9 = s_patchCollision_ShapesRefCount;
      }
      s_patchCollision_ShapesRefCount = v9 - 1;
      Sys_LeaveCriticalSection(CRITSECT_PATCH_COLLISION);
    }
    IsDetailWorld = Physics_IsDetailWorld((Physics_WorldId)v3);
    save = (SaveGame *)s_patchCollision_DetailShape;
    if ( !IsDetailWorld )
      save = (SaveGame *)s_patchCollision_SimulationShape;
    if ( save )
      Physics_AddShapeReference((hknpShape *)save);
    ++v3;
    ++v5;
    ++v6;
  }
  while ( v3 <= 1 );
  v11 = 2i64;
  do
  {
    MemFile_ReadData(&v1->memFile, 4ui64, v4);
    ++s_patchCollision_ShapesRefCount;
    ++v4;
    *v2++ = 1;
    --v11;
  }
  while ( v11 );
}

/*
==============
PatchCollision_MyChangesInitAndLoad
==============
*/
void PatchCollision_MyChangesInitAndLoad(double a1)
{
  LocalClientNum_t v1; 
  bool *v2; 
  unsigned int *v3; 
  int i; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  bool IsDetailWorld; 
  const hknpShape *v12; 
  int Ref; 
  int j; 
  Physics_WorldId v15; 
  Physics_WorldId v16; 
  vec4_t *orientationAsQuat; 

  v1 = LOCAL_CLIENT_0;
  if ( s_patchCollision_ShapesRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 604, ASSERT_TYPE_ASSERT, "( s_patchCollision_ShapesRefCount ) == ( 0 )", "%s == %s\n\t%u, %u", "s_patchCollision_ShapesRefCount", "0", s_patchCollision_ShapesRefCount, 0i64) )
    __debugbreak();
  if ( s_patchCollision_MychangesMapName[0] )
  {
    if ( Physics_AreServerWorldsCreated() )
    {
      v2 = s_patchCollision_CollisionInstantiatedForWorld;
      v3 = s_patchCollision_PhysicsInstances;
      for ( i = 0; i <= 1; ++i )
      {
        v5 = -1i64;
        do
          ++v5;
        while ( s_patchCollision_MychangesMapName[v5] );
        if ( !(_DWORD)v5 )
        {
          LODWORD(orientationAsQuat) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 333, ASSERT_TYPE_ASSERT, "( I_strlen( mapName ) ) > ( 0 )", "%s > %s\n\t%u, %u", "I_strlen( mapName )", "0", orientationAsQuat, 0i64) )
            __debugbreak();
        }
        if ( *v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 334, ASSERT_TYPE_ASSERT, "(!s_patchCollision_CollisionInstantiatedForWorld[worldId])", (const char *)&queryFormat, "!s_patchCollision_CollisionInstantiatedForWorld[worldId]") )
          __debugbreak();
        Sys_EnterCriticalSection(CRITSECT_PATCH_COLLISION);
        if ( s_patchCollision_ShapesRefCount )
        {
          v6 = 64i64;
          v7 = 0i64;
          do
          {
            v8 = s_patchCollision_MychangesMapName[v7];
            v9 = v6;
            v10 = s_patchCollision_MapName[v7++];
            --v6;
            if ( !v9 )
              break;
            if ( v8 != v10 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 366, ASSERT_TYPE_ASSERT, "(!I_strncmp( mapName, s_patchCollision_MapName, ( 64 ) ))", "%s\n\tPatch Collision Map Names Don't match: %s %s", "!I_strncmp( mapName, s_patchCollision_MapName, MAX_QPATH )", s_patchCollision_MychangesMapName, s_patchCollision_MapName) )
                __debugbreak();
              break;
            }
          }
          while ( v8 );
        }
        else
        {
          if ( s_patchCollision_MapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 359, ASSERT_TYPE_ASSERT, "(s_patchCollision_MapName[0] == '\\0')", (const char *)&queryFormat, "s_patchCollision_MapName[0] == '\\0'") )
            __debugbreak();
          Core_strncpy(s_patchCollision_MapName, 0x40ui64, s_patchCollision_MychangesMapName, 0x40ui64);
          PatchCollision_CreateShapes(a1);
        }
        ++s_patchCollision_ShapesRefCount;
        Sys_LeaveCriticalSection(CRITSECT_PATCH_COLLISION);
        if ( *v3 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 295, ASSERT_TYPE_ASSERT, "(s_patchCollision_PhysicsInstances[worldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_patchCollision_PhysicsInstances[worldId] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        IsDetailWorld = Physics_IsDetailWorld((Physics_WorldId)i);
        v12 = s_patchCollision_SimulationShape;
        if ( IsDetailWorld )
          v12 = s_patchCollision_DetailShape;
        if ( v12 )
        {
          Ref = Physics_MakeRef(Physics_RefSystem_WorldGeo, Physics_RelationshipSystem_None, 2u, 0);
          *v3 = Physics_InstantiateStaticBody((Physics_WorldId)i, v12, Ref, s_patchCollision_ShapeName, NULL, s_patchCollision_ShapeContents, &vec3_origin, &quat_identity, 1, 1, 0);
        }
        *v2++ = 1;
        ++v3;
      }
    }
    for ( j = 2; j <= 5; j += 3 )
    {
      if ( Physics_AreClientWorldsCreated(v1) )
      {
        v15 = j + 2;
        v16 = j;
        if ( !__OFSUB__(j, v15) || j == v15 )
        {
          do
            PatchCollision_InstantiateCollision(v16++, s_patchCollision_MychangesMapName);
          while ( v16 <= v15 );
        }
      }
      ++v1;
    }
    s_patchCollision_MychangesMapName[0] = 0;
  }
}

/*
==============
PatchCollision_MyChangesSaveAndShutdown
==============
*/
void PatchCollision_MyChangesSaveAndShutdown(void)
{
  int i; 
  LocalClientNum_t v1; 
  int j; 
  Physics_WorldId v3; 
  Physics_WorldId v4; 
  unsigned int v5; 

  Core_strncpy(s_patchCollision_MychangesMapName, 0x40ui64, s_patchCollision_MapName, 0x40ui64);
  if ( s_patchCollision_ShapesRefCount )
  {
    if ( Physics_AreServerWorldsCreated() )
    {
      for ( i = 0; i <= 1; ++i )
        PatchCollision_ShutdownCollision_Internal((const Physics_WorldId)i, 1);
    }
    v1 = LOCAL_CLIENT_0;
    for ( j = 2; j <= 5; j += 3 )
    {
      if ( Physics_AreClientWorldsCreated(v1) )
      {
        v3 = j + 2;
        v4 = j;
        if ( !__OFSUB__(j, v3) || j == v3 )
        {
          do
            PatchCollision_ShutdownCollision_Internal(v4++, 1);
          while ( v4 <= v3 );
        }
      }
      ++v1;
    }
    if ( s_patchCollision_ShapesRefCount )
    {
      v5 = s_patchCollision_ShapesRefCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 594, ASSERT_TYPE_ASSERT, "( s_patchCollision_ShapesRefCount ) == ( 0 )", "%s == %s\n\t%u, %u", "s_patchCollision_ShapesRefCount", "0", v5, 0i64) )
        __debugbreak();
    }
  }
}

/*
==============
PatchCollision_Shutdown
==============
*/
void PatchCollision_Shutdown(void)
{
  __int64 i; 

  for ( i = 0i64; i < 8; ++i )
  {
    if ( s_patchCollision_CollisionInstantiatedForWorld[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 107, ASSERT_TYPE_ASSERT, "(!s_patchCollision_CollisionInstantiatedForWorld[worldId])", (const char *)&queryFormat, "!s_patchCollision_CollisionInstantiatedForWorld[worldId]") )
      __debugbreak();
    if ( s_patchCollision_PhysicsInstances[i] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 108, ASSERT_TYPE_ASSERT, "(s_patchCollision_PhysicsInstances[worldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "s_patchCollision_PhysicsInstances[worldId] == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
  }
  if ( s_patchCollision_DetailShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 110, ASSERT_TYPE_ASSERT, "( s_patchCollision_DetailShape ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_patchCollision_DetailShape", "nullptr", s_patchCollision_DetailShape, NULL) )
    __debugbreak();
  if ( s_patchCollision_SimulationShape )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 111, ASSERT_TYPE_ASSERT, "( s_patchCollision_SimulationShape ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_patchCollision_SimulationShape", "nullptr", s_patchCollision_SimulationShape, NULL) )
      __debugbreak();
  }
}

/*
==============
PatchCollision_ShutdownCollision
==============
*/
void PatchCollision_ShutdownCollision(const Physics_WorldId worldId)
{
  PatchCollision_ShutdownCollision_Internal(worldId, 1);
}

/*
==============
PatchCollision_ShutdownCollision_Internal
==============
*/
void PatchCollision_ShutdownCollision_Internal(__int64 worldId, const bool allowShapeShutdown)
{
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  v3 = (int)worldId;
  if ( s_patchCollision_CollisionInstantiatedForWorld[(int)worldId] )
  {
    if ( (unsigned __int64)(int)worldId >= 8 )
    {
      j___report_rangecheckfailure(worldId);
      JUMPOUT(0x140E7A324i64);
    }
    s_patchCollision_CollisionInstantiatedForWorld[(int)worldId] = 0;
    if ( !s_patchCollision_MapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 410, ASSERT_TYPE_ASSERT, "(s_patchCollision_MapName[0] != '\\0')", (const char *)&queryFormat, "s_patchCollision_MapName[0] != '\\0'") )
      __debugbreak();
    v4 = s_patchCollision_PhysicsInstances[v3];
    if ( v4 != -1 )
    {
      Physics_DestroyInstance((Physics_WorldId)v3, v4, 0);
      s_patchCollision_PhysicsInstances[v3] = -1;
    }
    Sys_EnterCriticalSection(CRITSECT_PATCH_COLLISION);
    v5 = s_patchCollision_ShapesRefCount;
    if ( !s_patchCollision_ShapesRefCount )
    {
      v7 = s_patchCollision_ShapesRefCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 422, ASSERT_TYPE_ASSERT, "( s_patchCollision_ShapesRefCount ) > ( 0 )", "%s > %s\n\t%u, %u", "s_patchCollision_ShapesRefCount", "0", v7, 0i64) )
        __debugbreak();
      v5 = s_patchCollision_ShapesRefCount;
    }
    v6 = v5 - 1;
    s_patchCollision_ShapesRefCount = v6;
    if ( allowShapeShutdown && !v6 )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "PatchCollision_DestroyShapes");
      *(_QWORD *)s_patchCollision_ShapeName = 0i64;
      *(_QWORD *)&s_patchCollision_ShapeName[8] = 0i64;
      *(_QWORD *)&s_patchCollision_ShapeName[16] = 0i64;
      *(_QWORD *)&s_patchCollision_ShapeName[24] = 0i64;
      *(_QWORD *)&s_patchCollision_ShapeName[32] = 0i64;
      *(_QWORD *)&s_patchCollision_ShapeName[40] = 0i64;
      *(_QWORD *)&s_patchCollision_ShapeName[48] = 0i64;
      *(_QWORD *)&s_patchCollision_ShapeName[56] = 0i64;
      s_patchCollision_ShapeContents = 0;
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Release Detail shape");
      if ( s_patchCollision_DetailShape )
      {
        Physics_ReleaseShape(PHYSICS_WORLD_ID_INVALID, s_patchCollision_DetailShape, 1);
        s_patchCollision_DetailShape = NULL;
      }
      Sys_ProfEndNamedEvent();
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Release Simulation shape");
      if ( s_patchCollision_SimulationShape )
      {
        Physics_ReleaseShape(PHYSICS_WORLD_ID_INVALID, s_patchCollision_SimulationShape, 1);
        s_patchCollision_SimulationShape = NULL;
      }
      Sys_ProfEndNamedEvent();
      Sys_ProfEndNamedEvent();
      s_patchCollision_MapName[0] = 0;
    }
    Sys_LeaveCriticalSection(CRITSECT_PATCH_COLLISION);
  }
}

/*
==============
PatchCollision_Write
==============
*/
void PatchCollision_Write(MemoryFile *memFile)
{
  unsigned int *v2; 
  __int64 v3; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\patchcollision\\patchcollision.cpp", 484, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  v2 = s_patchCollision_PhysicsInstances;
  v3 = 2i64;
  do
  {
    MemFile_WriteData(memFile, 4ui64, v2++);
    --v3;
  }
  while ( v3 );
}

/*
==============
PatchCollisions_HasShapeData
==============
*/
bool PatchCollisions_HasShapeData()
{
  return s_patchCollision_SimulationShape || s_patchCollision_DetailShape;
}

