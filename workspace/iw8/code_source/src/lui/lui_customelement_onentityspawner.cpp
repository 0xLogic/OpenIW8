/*
==============
LUIOnEntityElementSpawner::DespawnForEntity
==============
*/

void __fastcall LUIOnEntityElementSpawner::DespawnForEntity(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum, int entityNum)
{
  ?DespawnForEntity@LUIOnEntityElementSpawner@@IEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, entityNum);
}

/*
==============
LUIOnEntityElementSpawner::SetSpawnAngleIsRelative
==============
*/

void __fastcall LUIOnEntityElementSpawner::SetSpawnAngleIsRelative(LUIOnEntityElementSpawner *this, const bool isRelativeToPlayerBox)
{
  ?SetSpawnAngleIsRelative@LUIOnEntityElementSpawner@@QEAAX_N@Z(this, isRelativeToPlayerBox);
}

/*
==============
LUIOnEntityElementSpawner::RemoveFilteredEntity
==============
*/

void __fastcall LUIOnEntityElementSpawner::RemoveFilteredEntity(const EntityFilter filter, const int entityNum)
{
  ?RemoveFilteredEntity@LUIOnEntityElementSpawner@@SAXW4EntityFilter@@H@Z(filter, entityNum);
}

/*
==============
LUIOnEntityElementSpawner::SetSpawnAngle
==============
*/

void __fastcall LUIOnEntityElementSpawner::SetSpawnAngle(LUIOnEntityElementSpawner *this, const float angle)
{
  ?SetSpawnAngle@LUIOnEntityElementSpawner@@QEAAXM@Z(this, angle);
}

/*
==============
LUIOnEntityElementSpawner::SetMaxElements
==============
*/

void __fastcall LUIOnEntityElementSpawner::SetMaxElements(LUIOnEntityElementSpawner *this, const int elements)
{
  ?SetMaxElements@LUIOnEntityElementSpawner@@QEAAXH@Z(this, elements);
}

/*
==============
LUIOnEntityElementSpawner::SetEntityFilter
==============
*/

void __fastcall LUIOnEntityElementSpawner::SetEntityFilter(LUIOnEntityElementSpawner *this, const int filter)
{
  ?SetEntityFilter@LUIOnEntityElementSpawner@@QEAAXH@Z(this, filter);
}

/*
==============
LUIOnEntityElementSpawner::GetSpawnAngle
==============
*/

double __fastcall LUIOnEntityElementSpawner::GetSpawnAngle(LUIOnEntityElementSpawner *this)
{
  double result; 

  *(float *)&result = ?GetSpawnAngle@LUIOnEntityElementSpawner@@QEBAMXZ(this);
  return result;
}

/*
==============
LUIOnEntityElementSpawner::Layout
==============
*/

void __fastcall LUIOnEntityElementSpawner::Layout(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum)
{
  ?Layout@LUIOnEntityElementSpawner@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
LUIOnEntityElementSpawner::InsertFilteredEntity
==============
*/

void __fastcall LUIOnEntityElementSpawner::InsertFilteredEntity(const EntityFilter filter, const int entityNum)
{
  ?InsertFilteredEntity@LUIOnEntityElementSpawner@@SAXW4EntityFilter@@H@Z(filter, entityNum);
}

/*
==============
LUIOnEntityElementSpawner::GetSpawnDistance
==============
*/

double __fastcall LUIOnEntityElementSpawner::GetSpawnDistance(LUIOnEntityElementSpawner *this)
{
  double result; 

  *(float *)&result = ?GetSpawnDistance@LUIOnEntityElementSpawner@@QEBAMXZ(this);
  return result;
}

/*
==============
LUIOnEntityElementSpawner::ResetEntityFilters
==============
*/

void __fastcall LUIOnEntityElementSpawner::ResetEntityFilters(const LocalClientNum_t localClientNum)
{
  ?ResetEntityFilters@LUIOnEntityElementSpawner@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUIOnEntityElementSpawner::LUIOnEntityElementSpawner
==============
*/

void __fastcall LUIOnEntityElementSpawner::LUIOnEntityElementSpawner(LUIOnEntityElementSpawner *this, lua_State *luaVM, LUIElement *element)
{
  ??0LUIOnEntityElementSpawner@@QEAA@PEAUlua_State@@PEAULUIElement@@@Z(this, luaVM, element);
}

/*
==============
LUIOnEntityElementSpawner::DespawnForAllEntities
==============
*/

void __fastcall LUIOnEntityElementSpawner::DespawnForAllEntities(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum)
{
  ?DespawnForAllEntities@LUIOnEntityElementSpawner@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
LUIOnEntityElementSpawner::GetEntityFilter
==============
*/

int __fastcall LUIOnEntityElementSpawner::GetEntityFilter(LUIOnEntityElementSpawner *this)
{
  return ?GetEntityFilter@LUIOnEntityElementSpawner@@QEBAHXZ(this);
}

/*
==============
LUIOnEntityElementSpawner::SetSpawnDistance
==============
*/

void __fastcall LUIOnEntityElementSpawner::SetSpawnDistance(LUIOnEntityElementSpawner *this, const float distance)
{
  ?SetSpawnDistance@LUIOnEntityElementSpawner@@QEAAXM@Z(this, distance);
}

/*
==============
LUIOnEntityElementSpawner::SpawnForEntity
==============
*/

void __fastcall LUIOnEntityElementSpawner::SpawnForEntity(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum, int entityNum)
{
  ?SpawnForEntity@LUIOnEntityElementSpawner@@IEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, entityNum);
}

/*
==============
LUIOnEntityElementSpawner::GetEntityFilterEnumFromString
==============
*/

EntityFilter __fastcall LUIOnEntityElementSpawner::GetEntityFilterEnumFromString(const char *filterName)
{
  return ?GetEntityFilterEnumFromString@LUIOnEntityElementSpawner@@SA?AW4EntityFilter@@PEBD@Z(filterName);
}

/*
==============
LUIElement_EntitySpawner_DespawnForAllEntities
==============
*/
__int64 LUIElement_EntitySpawner_DespawnForAllEntities(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_EntitySpawner_DespawnForAllEntities_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_EntitySpawner_SetSpawnDistance
==============
*/
__int64 LUIElement_EntitySpawner_SetSpawnDistance(lua_State *const luaVM)
{
  LUIElement *v2; 
  float *customElementData; 
  double v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)v2->customElementData;
  v4 = lui_tonumber32(luaVM, 2);
  customElementData[68] = *(float *)&v4 * *(float *)&v4;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_EntitySpawner_SetSpawnAngle
==============
*/
__int64 LUIElement_EntitySpawner_SetSpawnAngle(lua_State *const luaVM)
{
  LUIElement *v2; 
  float *customElementData; 
  double v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)v2->customElementData;
  v4 = lui_tonumber32(luaVM, 2);
  customElementData[69] = *(float *)&v4;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_EntitySpawner_SetEntityFilter
==============
*/
__int64 LUIElement_EntitySpawner_SetEntityFilter(lua_State *const luaVM)
{
  LUIElement *v2; 
  _DWORD *customElementData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  customElementData[71] = lui_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_EntitySpawner_GetSpawnAngle
==============
*/
__int64 LUIElement_EntitySpawner_GetSpawnAngle(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  j_lua_pushnumber(luaVM, *((float *)v2->customElementData + 69));
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUIElement_EntitySpawner_GetSpawnDistance
==============
*/
__int64 LUIElement_EntitySpawner_GetSpawnDistance(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  j_lua_pushnumber(luaVM, fsqrt(*((float *)v2->customElementData + 68)));
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUIElement_EntitySpawner_GetEntityFilter
==============
*/
__int64 LUIElement_EntitySpawner_GetEntityFilter(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  j_lua_pushinteger(luaVM, *((int *)v2->customElementData + 71));
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUIOnEntityElementSpawner::LUIOnEntityElementSpawner
==============
*/
void LUIOnEntityElementSpawner::LUIOnEntityElementSpawner(LUIOnEntityElementSpawner *this, lua_State *luaVM, LUIElement *element)
{
  this->m_luaVM = luaVM;
  this->m_element = element;
  memset_0(&this->m_activeEntities, 0, sizeof(this->m_activeEntities));
  this->m_spawnAngle = 360.0;
  this->m_spawnAngleIsRelative = 0;
  this->m_maxElements = 5;
}

/*
==============
LUIOnEntityElementSpawner::DespawnForAllEntities
==============
*/
void LUIOnEntityElementSpawner::DespawnForAllEntities(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum)
{
  int v4; 
  __int64 v5; 
  char *v6; 
  __int64 v7; 
  char v10[256]; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 122, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( this->m_entityFilter )
  {
    memset_0(v10, 0, sizeof(v10));
    v4 = 0;
    v5 = 0i64;
    v6 = v10;
    v7 = 64i64;
    do
    {
      for ( _EBX = *(_DWORD *)&v6[(char *)this - v10 + 16] & ~*(_DWORD *)v6; _EBX; _EBX &= _EBX - 1 )
      {
        __asm { tzcnt   r8d, ebx }
        LUIOnEntityElementSpawner::DespawnForEntity(this, localClientNum, v4 + _ER8);
      }
      this->m_activeEntities.entityMembers[v5] = 0;
      v4 += 32;
      ++v5;
      v6 += 4;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
LUIOnEntityElementSpawner::DespawnForEntity
==============
*/
void LUIOnEntityElementSpawner::DespawnForEntity(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum, int entityNum)
{
  __int64 v8; 
  __int64 v10; 
  int v11; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v11) )
      __debugbreak();
  }
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v8) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( LUI_BeginEventWithElement(localClientNum, this->m_element, "onEntityElementDespawn", this->m_luaVM) )
  {
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, edi; value }
    LUI_SetTableNumber("entityNum", *(long double *)&_XMM1, this->m_luaVM);
    LUI_EndEventWithElement(this->m_luaVM);
  }
}

/*
==============
LUIOnEntityElementSpawner::GetEntityFilter
==============
*/
__int64 LUIOnEntityElementSpawner::GetEntityFilter(LUIOnEntityElementSpawner *this)
{
  return (unsigned int)this->m_entityFilter;
}

/*
==============
LUIOnEntityElementSpawner::GetEntityFilterEnumFromString
==============
*/
__int64 LUIOnEntityElementSpawner::GetEntityFilterEnumFromString(const char *filterName)
{
  const char *const *v1; 
  unsigned int i; 
  const char *v3; 
  int v4; 
  int v5; 

  v1 = ENTITY_FILTER_ENUM_STRINGS;
  for ( i = 0; ; ++i )
  {
    v3 = filterName;
    v4 = *filterName;
    if ( v4 + ((unsigned int)(v4 - 65) < 0x1A ? 0x20 : 0) == **(char **)v1 + ((unsigned int)(**(char **)v1 - 65) < 0x1A ? 0x20 : 0) )
      break;
LABEL_5:
    if ( (__int64)++v1 >= (__int64)&ENTITY_FILTER_ENUM_STRINGS[24] )
      return 0xFFFFFFFFi64;
  }
  while ( v4 )
  {
    v5 = (v3++)[*v1 - (const char *const)filterName + 1];
    v4 = *v3;
    if ( v4 + ((unsigned int)(v4 - 65) < 0x1A ? 0x20 : 0) != v5 + ((unsigned int)(v5 - 65) < 0x1A ? 0x20 : 0) )
      goto LABEL_5;
  }
  return i;
}

/*
==============
LUIOnEntityElementSpawner::GetSpawnAngle
==============
*/
float LUIOnEntityElementSpawner::GetSpawnAngle(LUIOnEntityElementSpawner *this)
{
  return this->m_spawnAngle;
}

/*
==============
LUIOnEntityElementSpawner::GetSpawnDistance
==============
*/
float LUIOnEntityElementSpawner::GetSpawnDistance(LUIOnEntityElementSpawner *this)
{
  return fsqrt(this->m_spawnDistanceSquared);
}

/*
==============
LUIOnEntityElementSpawner::InsertFilteredEntity
==============
*/
void LUIOnEntityElementSpawner::InsertFilteredEntity(unsigned int filter, const int entityNum)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  volatile signed __int32 *v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v2 = (int)filter;
  v3 = entityNum;
  if ( filter >= 0x18 )
  {
    v10 = 24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( filter ) < (unsigned)( NUM_FILTERS )", "filter doesn't index NUM_FILTERS\n\t%i not in [0, %i)", filter, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 53, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = 1 << (v3 & 0x1F);
  v5 = (v3 >> 5) + (v2 << 6);
  v6 = &LUIOnEntityElementSpawner::ms_filteredEntities[0].entityMembers[v5];
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (char *)LUIOnEntityElementSpawner::ms_filteredEntities + 4 * v5) )
    __debugbreak();
  _InterlockedOr(v6, v4);
}

/*
==============
LUIElement_EntitySpawner_DespawnForAllEntities_impl
==============
*/
__int64 LUIElement_EntitySpawner_DespawnForAllEntities_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIOnEntityElementSpawner *customElementData; 
  int v4; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t v6; 
  int v7; 
  __int64 v8; 
  char *v9; 
  __int64 v10; 
  __int64 v14; 
  char v15[256]; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUIOnEntityElementSpawner *)v2->customElementData;
  v4 = lui_tointeger32(luaVM, 2);
  ClientFromController = CL_Mgr_GetClientFromController(v4);
  v6 = ClientFromController;
  if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v14) = ClientFromController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, 2) )
      __debugbreak();
  }
  if ( v6 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 122, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( customElementData->m_entityFilter )
  {
    memset_0(v15, 0, sizeof(v15));
    v7 = 0;
    v8 = 0i64;
    v9 = v15;
    v10 = 64i64;
    do
    {
      for ( _EBX = *(_DWORD *)&v9[(char *)customElementData - v15 + 16] & ~*(_DWORD *)v9; _EBX; _EBX &= _EBX - 1 )
      {
        __asm { tzcnt   r8d, ebx }
        LUIOnEntityElementSpawner::DespawnForEntity(customElementData, v6, v7 + _ER8);
      }
      customElementData->m_activeEntities.entityMembers[v8] = 0;
      v7 += 32;
      ++v8;
      v9 += 4;
      --v10;
    }
    while ( v10 );
  }
  return 0i64;
}

/*
==============
LUIElement_OnEntitySpawner_Layout
==============
*/
void LUIElement_OnEntitySpawner_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *i; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  LUIOnEntityElementSpawner::Layout((LUIOnEntityElementSpawner *)element->customElementData, localClientNum);
  for ( i = element->firstChild; i; i = i->nextSibling )
    LUIElement_Layout(localClientNum, i, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_LuaCall_LUIElement_SetupOnEntityElementSpawner
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupOnEntityElementSpawner(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupOnEntityElementSpawner_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupOnEntityElementSpawner_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupOnEntityElementSpawner_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  char *v4; 
  int v6; 
  int v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->layoutFunction = LUIElement_OnEntitySpawner_Layout;
  v3->usageFlags |= 2u;
  LUI_LUIElement_RegisterMethods(v3, luaVM, s_entitySpawnerMethods);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v3, luaVM);
  v4 = (char *)j_lua_newuserdata(luaVM, 0x128ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v3->customElementData = v4;
  *((_DWORD *)v4 + 68) = 0;
  *(_DWORD *)(v4 + 281) = 0;
  *(_WORD *)(v4 + 285) = 0;
  v4[287] = 0;
  *((_DWORD *)v4 + 73) = 0;
  *(_QWORD *)v4 = luaVM;
  *((_QWORD *)v4 + 1) = v3;
  memset_0(v4 + 16, 0, 0x100ui64);
  *((_DWORD *)v4 + 69) = 1135869952;
  v4[280] = 0;
  *((_DWORD *)v4 + 72) = 5;
  j_lua_getfield(luaVM, 2, "spawnDistance");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm0, xmm0, xmm6 }
    *((float *)v4 + 68) = *(float *)&_XMM0 * *(float *)&_XMM0;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "spawnAngle");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm0, xmm0, xmm6 }
    *((float *)v4 + 69) = *(float *)&_XMM0;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "isSpawnAngleRelative");
  if ( j_lua_type(luaVM, -1) == 1 )
    v4[280] = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "targetEntities");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v6 = lui_tointeger32(luaVM, -1);
    if ( v6 < 0 )
      v6 = 0;
    *((_DWORD *)v4 + 71) = v6;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxVisibleElements");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v7 = lui_tointeger32(luaVM, -1);
    if ( v7 < 0 )
      v7 = 0;
    *((_DWORD *)v4 + 72) = v7;
  }
  j_lua_settop(luaVM, -2);
  return 0i64;
}

/*
==============
LUIOnEntityElementSpawner::Layout
==============
*/
void LUIOnEntityElementSpawner::Layout(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  int v6; 
  unsigned int refdefViewOrg_aab; 
  __int64 v8; 
  float v9; 
  float v10; 
  unsigned int v14; 
  int v16; 
  CgEntitySystem *v17; 
  __int64 v18; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v23; 
  float v33; 
  float m_spawnDistanceSquared; 
  float v35; 
  float v36; 
  __int128 v37; 
  float v41; 
  cg_t *v42; 
  float v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v49; 
  CgGlobalsSP *v51; 
  float v52; 
  characterInfo_t *CharacterInfo; 
  const SuitDef *SuitDef; 
  float v55; 
  __int128 v57; 
  double *v58; 
  __int64 *v59; 
  __int64 v60; 
  bool v61; 
  __int64 v62; 
  int v63; 
  unsigned __int64 v64; 
  double *v65; 
  int v66; 
  int v67; 
  volatile int *v68; 
  signed __int64 v69; 
  __int64 v70; 
  volatile int v71; 
  int v72; 
  LUIOnEntityElementSpawner *v74; 
  LocalClientNum_t v75; 
  LUIOnEntityElementSpawner *v78; 
  LocalClientNum_t v79; 
  unsigned int v81; 
  int *v84; 
  int *v85; 
  bool v86; 
  __int64 v87; 
  __int64 v88; 
  unsigned int v89; 
  int v90; 
  volatile int v91; 
  __int64 v92; 
  double v93; 
  float v94; 
  int v95[3]; 
  int v96[4]; 
  __int64 v97; 
  LocalClientNum_t localClientNuma; 
  CgGlobalsSP *LocalClientGlobals; 
  int *v100; 
  LUIOnEntityElementSpawner *v101; 
  unsigned int v102; 
  __int64 v103; 
  CgGlobalsSP *p_z; 
  double v105; 
  int v106[148]; 
  unsigned __int64 v107; 
  int v108[64]; 

  v103 = -2i64;
  v2 = localClientNum;
  localClientNuma = localClientNum;
  v101 = this;
  v4 = 0i64;
  v5 = 0i64;
  v107 = 0i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (int)v2 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 279, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( this->m_entityFilter )
  {
    Sys_ProfBeginNamedEvent(0xFF0F0F0F, "LUIOnEntityElementSpawner");
    memset_0(v108, 0, sizeof(v108));
    v6 = 0;
    v90 = 0;
    LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( LocalClientGlobals == (CgGlobalsSP *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (CgGlobalsSP *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v95[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    v95[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    p_z = (CgGlobalsSP *)&LocalClientGlobals->refdef.view.org.org.z;
    v102 = refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944);
    v95[2] = (v102 * (v102 + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    v89 = 0;
    v8 = 0i64;
    v100 = NULL;
    v9 = *(float *)&v95[1];
    v10 = *(float *)v95;
    while ( 1 )
    {
      _EDI = -1;
      LODWORD(v97) = -1;
      _EDX = this->m_entityFilter;
      if ( _EDX )
      {
        do
        {
          __asm { tzcnt   ecx, edx }
          _EDI &= LUIOnEntityElementSpawner::ms_filteredEntities[(unsigned __int64)_ECX].entityMembers[v8];
          _EDX &= _EDX - 1;
        }
        while ( _EDX );
        LODWORD(v97) = _EDI;
        v5 = v107;
        v9 = *(float *)&v95[1];
        v10 = *(float *)v95;
        if ( !_EDI )
        {
          v14 = v89;
          goto LABEL_88;
        }
      }
      do
      {
        __asm { tzcnt   r15d, edi }
        v16 = _ER15 + v90;
        if ( _ER15 + v90 >= 0x800 )
        {
          LODWORD(v88) = 2048;
          LODWORD(v87) = _ER15 + v90;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 322, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v87, v88) )
            __debugbreak();
        }
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v88) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v88) )
            __debugbreak();
        }
        if ( (unsigned int)v2 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v88) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v87) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v87, v88) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v2] )
        {
          LODWORD(v88) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v88) )
            __debugbreak();
        }
        v17 = CgEntitySystem::ms_entitySystemArray[v2];
        if ( (unsigned int)v16 >= 0x800 )
        {
          LODWORD(v88) = 2048;
          LODWORD(v87) = _ER15 + v90;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v87, v88) )
            __debugbreak();
        }
        v18 = (__int64)&v17->m_entities[v16];
        if ( (*(_BYTE *)(v18 + 648) & 1) != 0 )
        {
          if ( !*(_QWORD *)(v18 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v18 + 48), (const cpose_t *)v18);
          FunctionPointer_origin((const vec4_t *)(v18 + 56), (vec3_t *)v96);
          if ( *(_BYTE *)(v18 + 2) )
          {
            _XMM0 = (unsigned int)v96[0];
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v23 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v23;
            __asm { vcvtsd2ss xmm5, xmm1, xmm1 }
            v96[0] = _XMM5;
            _XMM0 = (unsigned int)v96[1];
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v23 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v23;
            __asm { vcvtsd2ss xmm6, xmm1, xmm1 }
            v96[1] = _XMM6;
            _XMM0 = (unsigned int)v96[2];
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v23 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v23;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            v96[2] = _XMM2;
          }
          else
          {
            LODWORD(_XMM2) = v96[2];
            _XMM6 = (unsigned int)v96[1];
            LODWORD(_XMM5) = v96[0];
          }
          v33 = (float)((float)((float)(v9 - *(float *)&_XMM6) * (float)(v9 - *(float *)&_XMM6)) + (float)((float)(v10 - *(float *)&_XMM5) * (float)(v10 - *(float *)&_XMM5))) + (float)((float)(*(float *)&v95[2] - *(float *)&_XMM2) * (float)(*(float *)&v95[2] - *(float *)&_XMM2));
          m_spawnDistanceSquared = this->m_spawnDistanceSquared;
          if ( m_spawnDistanceSquared <= 0.0 || (float)((float)((float)((float)(v9 - *(float *)&_XMM6) * (float)(v9 - *(float *)&_XMM6)) + (float)((float)(v10 - *(float *)&_XMM5) * (float)(v10 - *(float *)&_XMM5))) + (float)((float)(*(float *)&v95[2] - *(float *)&_XMM2) * (float)(*(float *)&v95[2] - *(float *)&_XMM2))) <= m_spawnDistanceSquared )
          {
            v35 = *(float *)&_XMM5 - v10;
            v37 = _XMM6;
            v36 = *(float *)&_XMM6 - v9;
            *(float *)&v37 = fsqrt((float)(v36 * v36) + (float)(v35 * v35));
            _XMM2 = v37;
            __asm
            {
              vcmpless xmm0, xmm2, cs:__real@80000000
              vblendvps xmm1, xmm2, xmm15, xmm0
            }
            v41 = 1.0 / *(float *)&_XMM1;
            v42 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
            v43 = v42->refdef.view.axis.m[0].v[0];
            v44 = LODWORD(v42->refdef.view.axis.m[0].v[1]);
            v45 = v44;
            *(float *)&v45 = fsqrt((float)(*(float *)&v44 * *(float *)&v44) + (float)(v43 * v43));
            _XMM2 = v45;
            __asm
            {
              vcmpless xmm0, xmm2, cs:__real@80000000
              vblendvps xmm1, xmm2, xmm15, xmm0
            }
            v49 = LODWORD(FLOAT_1_0);
            *(float *)&v49 = acosf_0((float)((float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&v44) * (float)(v41 * v36)) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * v43) * (float)(v41 * v35))) * 57.295776;
            _XMM7 = v49;
            if ( this->m_spawnAngleIsRelative )
            {
              v51 = LocalClientGlobals;
              if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v16) )
              {
                if ( v33 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 355, ASSERT_TYPE_ASSERT, "(distanceSquared >= 0.0f)", (const char *)&queryFormat, "distanceSquared >= 0.0f") )
                  __debugbreak();
                v52 = fsqrt(v33);
                if ( v51->IsMP(v51) )
                {
                  if ( (unsigned int)v16 >= *(_DWORD *)&v51->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
                  {
                    LODWORD(v88) = *(_DWORD *)&v51->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28];
                    LODWORD(v87) = _ER15 + v90;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v87, v88) )
                      __debugbreak();
                  }
                  CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792i64 * v16);
                }
                else
                {
                  CharacterInfo = CgGlobalsSP::GetCharacterInfo(v51, v16);
                }
                if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 359, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
                  __debugbreak();
                SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
                if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 362, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
                  __debugbreak();
                v55 = atan2f_0((float)SuitDef->bounds_radius, v52) * 57.295776;
                if ( (LODWORD(v55) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 367, ASSERT_TYPE_SANITY, "( !IS_NAN( boundRadiusAngle ) )", (const char *)&queryFormat, "!IS_NAN( boundRadiusAngle )") )
                  __debugbreak();
                v57 = _XMM7;
                *(float *)&v57 = *(float *)&_XMM7 - v55;
                _XMM0 = v57;
                __asm { vmaxss  xmm7, xmm0, xmm10 }
              }
            }
            if ( *(float *)&_XMM7 <= this->m_spawnAngle )
            {
              if ( v5 )
              {
                if ( v5 - 1 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                  __debugbreak();
                if ( v33 < *(float *)&v106[3 * v5 - 3] )
                  goto LABEL_71;
              }
              if ( v5 < this->m_maxElements )
              {
LABEL_71:
                if ( v5 >= this->m_maxElements )
                {
                  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
                    __debugbreak();
                  v107 = --v5;
                }
                v14 = v89;
                v93 = COERCE_DOUBLE(__PAIR64__(_ER15, v89));
                v94 = v33;
                if ( !v5 )
                {
                  v105 = v93;
                  *(float *)v106 = v94;
                  v5 = 1i64;
                  v107 = 1i64;
                  goto LABEL_86;
                }
                v58 = &v105;
                v59 = (__int64 *)&v106[3 * v5 - 2];
                if ( &v105 == (double *)v59 )
                {
LABEL_81:
                  if ( v5 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
                    __debugbreak();
                  v60 = 3 * v5;
                  *(double *)&v106[v60 - 2] = v93;
                  *(float *)&v106[v60] = v94;
                  v5 = ++v107;
                }
                else
                {
                  while ( v33 >= *((float *)v58 + 2) )
                  {
                    v58 = (double *)((char *)v58 + 12);
                    if ( v58 == (double *)v59 )
                      goto LABEL_81;
                  }
                  if ( v5 == 50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
                    __debugbreak();
                  if ( (v58 < &v105 || v58 > (double *)&v106[3 * v5 - 2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
                    __debugbreak();
                  if ( (char *)v58 - (char *)&v105 != 12 * (((char *)v58 - (char *)&v105) / 0xCui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
                    __debugbreak();
                  if ( &v93 >= v58 && &v93 < (double *)&v106[3 * v5 - 2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
                    __debugbreak();
                  v84 = &v106[3 * v5 - 2];
                  if ( v58 != (double *)v84 )
                  {
                    v85 = &v106[3 * v5 + 1];
                    if ( v58 == (double *)v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                      __debugbreak();
                    if ( v84 == v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                      __debugbreak();
                    v86 = v84 <= (int *)v58;
                    if ( v84 < (int *)v58 )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                        __debugbreak();
                      v86 = v84 <= (int *)v58;
                    }
                    if ( !v86 )
                    {
                      do
                      {
                        v84 -= 3;
                        v85 -= 3;
                        *(double *)v85 = *(double *)v84;
                        v85[2] = v84[2];
                      }
                      while ( v84 > (int *)v58 );
                      v5 = v107;
                    }
                  }
                  v107 = v5 + 1;
                  *v58 = v93;
                  *((float *)v58 + 2) = v94;
                  v5 = v107;
                }
              }
            }
          }
        }
        v14 = v89;
LABEL_86:
        v61 = (((_DWORD)v97 - 1) & (unsigned int)v97) == 0;
        _EDI = (v97 - 1) & v97;
        LODWORD(v97) = _EDI;
      }
      while ( !v61 );
      v6 = v90;
      v8 = (__int64)v100;
LABEL_88:
      v6 += 32;
      v90 = v6;
      v89 = v14 + 1;
      v100 = (int *)++v8;
      if ( (int)(v14 + 1) >= 64 )
      {
        v62 = 0i64;
        v63 = 0;
        if ( v5 )
        {
          v64 = 0i64;
          v65 = &v105;
          do
          {
            if ( v63 >= this->m_maxElements )
              break;
            if ( v64 >= v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v64 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v66 = 1 << *((_DWORD *)v65 + 1);
            if ( v64 >= v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v64 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v108[*(int *)v65] |= v66;
            ++v63;
            ++v64;
            v65 = (double *)((char *)v65 + 12);
            v5 = v107;
          }
          while ( v63 < v107 );
          v62 = 0i64;
        }
        v67 = 0;
        v92 = 0i64;
        v68 = v108;
        v100 = v108;
        v69 = (char *)this - (char *)v108;
        v97 = (char *)this - (char *)v108;
        v70 = 64i64;
        LocalClientGlobals = (CgGlobalsSP *)64;
        do
        {
          v71 = *v68;
          v91 = *v68;
          v72 = *(volatile int *)((char *)v68 + v69 + 16);
          _EBX = v72 & ~*v68;
          if ( _EBX )
          {
            v74 = v101;
            v75 = localClientNuma;
            do
            {
              __asm { tzcnt   r8d, ebx }
              LUIOnEntityElementSpawner::DespawnForEntity(v74, v75, v67 + _ER8);
              _EBX &= _EBX - 1;
            }
            while ( _EBX );
            v71 = v91;
            v62 = v92;
          }
          _EDI = v71 & ~v72;
          if ( _EDI )
          {
            v78 = v101;
            v79 = localClientNuma;
            do
            {
              __asm { tzcnt   ebx, edi }
              v81 = v67 + _EBX;
              if ( (unsigned int)v79 >= LOCAL_CLIENT_COUNT )
              {
                LODWORD(v88) = 2;
                LODWORD(v87) = v79;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v87, v88) )
                  __debugbreak();
              }
              if ( v81 >= 0x800 )
              {
                LODWORD(v88) = 2048;
                LODWORD(v87) = v81;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v87, v88) )
                  __debugbreak();
              }
              if ( LUI_BeginEventWithElement(v79, v78->m_element, "onEntityElementSpawn", v78->m_luaVM) )
              {
                _XMM1 = 0i64;
                __asm { vcvtsi2sd xmm1, xmm1, ebx; value }
                LUI_SetTableNumber("entityNum", *(long double *)&_XMM1, v78->m_luaVM);
                LUI_EndEventWithElement(v78->m_luaVM);
              }
              _EDI &= _EDI - 1;
            }
            while ( _EDI );
            v68 = v100;
            v71 = v91;
            v62 = v92;
            v70 = (__int64)LocalClientGlobals;
          }
          *(volatile int *)((char *)v101->m_activeEntities.entityMembers + v62) = v71;
          v67 += 32;
          v62 += 4i64;
          v92 = v62;
          v100 = (int *)++v68;
          LocalClientGlobals = (CgGlobalsSP *)--v70;
          v69 = v97;
        }
        while ( v70 );
        Sys_ProfEndNamedEvent();
        memset(v95, 0, sizeof(v95));
        memset(v96, 0, 0xCui64);
        v5 = v107;
        v4 = 0i64;
        break;
      }
    }
  }
  if ( v5 )
  {
    do
    {
      if ( v4 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v4;
    }
    while ( v4 < v5 );
  }
}

/*
==============
LUIOnEntityElementSpawner::RemoveFilteredEntity
==============
*/
void LUIOnEntityElementSpawner::RemoveFilteredEntity(unsigned int filter, const int entityNum)
{
  __int64 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  volatile signed __int32 *v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v2 = (int)filter;
  v3 = entityNum;
  if ( filter >= 0x18 )
  {
    v10 = 24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 71, ASSERT_TYPE_ASSERT, "(unsigned)( filter ) < (unsigned)( NUM_FILTERS )", "filter doesn't index NUM_FILTERS\n\t%i not in [0, %i)", filter, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 72, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = ~(1 << (v3 & 0x1F));
  v5 = (v3 >> 5) + (v2 << 6);
  v6 = &LUIOnEntityElementSpawner::ms_filteredEntities[0].entityMembers[v5];
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (char *)LUIOnEntityElementSpawner::ms_filteredEntities + 4 * v5) )
    __debugbreak();
  _InterlockedAnd(v6, v4);
}

/*
==============
LUIOnEntityElementSpawner::ResetEntityFilters
==============
*/
void LUIOnEntityElementSpawner::ResetEntityFilters(const LocalClientNum_t localClientNum)
{
  memset_0(LUIOnEntityElementSpawner::ms_filteredEntities, 0, sizeof(LUIOnEntityElementSpawner::ms_filteredEntities));
}

/*
==============
LUIOnEntityElementSpawner::SetEntityFilter
==============
*/
void LUIOnEntityElementSpawner::SetEntityFilter(LUIOnEntityElementSpawner *this, const int filter)
{
  this->m_entityFilter = filter;
}

/*
==============
LUIOnEntityElementSpawner::SetMaxElements
==============
*/
void LUIOnEntityElementSpawner::SetMaxElements(LUIOnEntityElementSpawner *this, const int elements)
{
  if ( elements >= 0 )
  {
    this->m_maxElements = elements;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 504, ASSERT_TYPE_ASSERT, "(elements >= 0)", "%s\n\tLUIOnEntityElementSpawner: Can't set max elements to a negative number.", "elements >= 0") )
  {
    __debugbreak();
  }
}

/*
==============
LUIOnEntityElementSpawner::SetSpawnAngle
==============
*/
void LUIOnEntityElementSpawner::SetSpawnAngle(LUIOnEntityElementSpawner *this, const float angle)
{
  this->m_spawnAngle = angle;
}

/*
==============
LUIOnEntityElementSpawner::SetSpawnAngleIsRelative
==============
*/
void LUIOnEntityElementSpawner::SetSpawnAngleIsRelative(LUIOnEntityElementSpawner *this, const bool isRelativeToPlayerBox)
{
  this->m_spawnAngleIsRelative = isRelativeToPlayerBox;
}

/*
==============
LUIOnEntityElementSpawner::SetSpawnDistance
==============
*/
void LUIOnEntityElementSpawner::SetSpawnDistance(LUIOnEntityElementSpawner *this, const float distance)
{
  this->m_spawnDistanceSquared = distance * distance;
}

/*
==============
LUIOnEntityElementSpawner::SpawnForEntity
==============
*/
void LUIOnEntityElementSpawner::SpawnForEntity(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum, int entityNum)
{
  __int64 v8; 
  __int64 v10; 
  int v11; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v11) )
      __debugbreak();
  }
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v8) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( LUI_BeginEventWithElement(localClientNum, this->m_element, "onEntityElementSpawn", this->m_luaVM) )
  {
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, edi; value }
    LUI_SetTableNumber("entityNum", *(long double *)&_XMM1, this->m_luaVM);
    LUI_EndEventWithElement(this->m_luaVM);
  }
}

