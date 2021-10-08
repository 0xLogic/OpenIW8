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
  LUIElement *v3; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  if ( !v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = v3->customElementData;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+110h], xmm1
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
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
  LUIElement *v3; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  if ( !v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = v3->customElementData;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovss  dword ptr [rbx+114h], xmm0 }
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
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RAX = v2->customElementData;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+114h]
    vcvtss2sd xmm1, xmm1, xmm1; n
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
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
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RAX = v2->customElementData;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+110h]
    vsqrtss xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm0, xmm0; n
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
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
  __int64 v9; 
  __int64 v11; 
  int v12; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v12) )
      __debugbreak();
  }
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v11) = 2048;
    LODWORD(v9) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  if ( LUI_BeginEventWithElement(localClientNum, this->m_element, "onEntityElementDespawn", this->m_luaVM) )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, edi; value
    }
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
  __asm { vmovss  xmm0, dword ptr [rcx+114h] }
  return *(float *)&_XMM0;
}

/*
==============
LUIOnEntityElementSpawner::GetSpawnDistance
==============
*/
float LUIOnEntityElementSpawner::GetSpawnDistance(LUIOnEntityElementSpawner *this)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+110h]
    vsqrtss xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
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

void __fastcall LUIElement_OnEntitySpawner_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *i; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  LUIOnEntityElementSpawner::Layout((LUIOnEntityElementSpawner *)element->customElementData, localClientNum);
  for ( i = element->firstChild; i; i = i->nextSibling )
  {
    __asm { vmovaps xmm2, xmm6; unitScale }
    LUIElement_Layout(localClientNum, i, *(float *)&_XMM2, deltaTime, luaVM);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  LUIElement *v4; 
  int v9; 
  int v10; 
  __int64 result; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v4 = LUI_ToElement(luaVM, 1);
  v4->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_OnEntitySpawner_Layout;
  v4->usageFlags |= 2u;
  LUI_LUIElement_RegisterMethods(v4, luaVM, s_entitySpawnerMethods);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v4, luaVM);
  _RDI = (char *)j_lua_newuserdata(luaVM, 0x128ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v4->customElementData = _RDI;
  *((_DWORD *)_RDI + 68) = 0;
  *(_DWORD *)(_RDI + 281) = 0;
  *(_WORD *)(_RDI + 285) = 0;
  _RDI[287] = 0;
  *((_DWORD *)_RDI + 73) = 0;
  *(_QWORD *)_RDI = luaVM;
  *((_QWORD *)_RDI + 1) = v4;
  memset_0(_RDI + 16, 0, 0x100ui64);
  *((_DWORD *)_RDI + 69) = 1135869952;
  _RDI[280] = 0;
  *((_DWORD *)_RDI + 72) = 5;
  j_lua_getfield(luaVM, 2, "spawnDistance");
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vmaxss  xmm0, xmm0, xmm6
      vmulss  xmm1, xmm0, xmm0
      vmovss  dword ptr [rdi+110h], xmm1
    }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "spawnAngle");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vmaxss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rdi+114h], xmm0
    }
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "isSpawnAngleRelative");
  if ( j_lua_type(luaVM, -1) == 1 )
    _RDI[280] = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "targetEntities");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lui_tointeger32(luaVM, -1);
    if ( v9 < 0 )
      v9 = 0;
    *((_DWORD *)_RDI + 71) = v9;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxVisibleElements");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v10 = lui_tointeger32(luaVM, -1);
    if ( v10 < 0 )
      v10 = 0;
    *((_DWORD *)_RDI + 72) = v10;
  }
  j_lua_settop(luaVM, -2);
  result = 0i64;
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
LUIOnEntityElementSpawner::Layout
==============
*/
void LUIOnEntityElementSpawner::Layout(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum)
{
  __int64 v14; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  int v18; 
  unsigned int refdefViewOrg_aab; 
  __int64 v20; 
  unsigned int v30; 
  int v32; 
  CgEntitySystem *v33; 
  __int64 v34; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  bool v36; 
  bool v85; 
  CgGlobalsSP *v86; 
  bool v87; 
  characterInfo_t *CharacterInfo; 
  bool v93; 
  bool v95; 
  bool v96; 
  __int64 *v100; 
  bool v101; 
  __int64 v104; 
  int v105; 
  unsigned __int64 v106; 
  __int64 *v107; 
  int v108; 
  int v109; 
  volatile int *v110; 
  __int64 v111; 
  __int64 v112; 
  volatile int v113; 
  int v114; 
  LUIOnEntityElementSpawner *v116; 
  LocalClientNum_t v117; 
  LUIOnEntityElementSpawner *v120; 
  LocalClientNum_t v121; 
  unsigned int v123; 
  bool v138; 
  __int64 v141; 
  __int64 v142; 
  unsigned int v143; 
  int v144; 
  volatile int v145; 
  int v148; 
  __int64 v149; 
  unsigned __int64 v150; 
  int v151; 
  int v152[3]; 
  int v153[4]; 
  __int64 v154; 
  LocalClientNum_t localClientNuma; 
  CgGlobalsSP *LocalClientGlobals; 
  int *v157; 
  LUIOnEntityElementSpawner *v158; 
  unsigned int v159; 
  __int64 v160; 
  CgGlobalsSP *p_z; 
  __int64 v162; 
  int v163[148]; 
  unsigned __int64 v164; 
  int v165[64]; 
  char v166; 
  void *retaddr; 

  _RAX = &retaddr;
  v160 = -2i64;
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
  v14 = localClientNum;
  localClientNuma = localClientNum;
  _R13 = this;
  v158 = this;
  v16 = 0i64;
  v17 = 0i64;
  v164 = 0i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (int)v14 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 279, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( _R13->m_entityFilter )
  {
    Sys_ProfBeginNamedEvent(0xFF0F0F0F, "LUIOnEntityElementSpawner");
    memset_0(v165, 0, sizeof(v165));
    v18 = 0;
    v144 = 0;
    LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals((const LocalClientNum_t)v14);
    if ( LocalClientGlobals == (CgGlobalsSP *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (CgGlobalsSP *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v152[0] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    v152[1] = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    p_z = (CgGlobalsSP *)&LocalClientGlobals->refdef.view.org.org.z;
    v159 = refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944);
    v152[2] = (v159 * (v159 + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    v143 = 0;
    v20 = 0i64;
    v157 = NULL;
    __asm
    {
      vmovsd  xmm11, cs:__real@3f30000000000000
      vxorps  xmm10, xmm10, xmm10
      vmovss  xmm15, cs:__real@3f800000
      vmovss  xmm14, cs:__real@42652ee0
      vmovss  xmm12, [rsp+500h+var_49C]
      vmovss  xmm13, [rsp+500h+var_4A0]
    }
    while ( 1 )
    {
      _EDI = -1;
      LODWORD(v154) = -1;
      _EDX = _R13->m_entityFilter;
      if ( _EDX )
      {
        do
        {
          __asm { tzcnt   ecx, edx }
          _EDI &= LUIOnEntityElementSpawner::ms_filteredEntities[(unsigned __int64)_ECX].entityMembers[v20];
          _EDX &= _EDX - 1;
        }
        while ( _EDX );
        LODWORD(v154) = _EDI;
        v17 = v164;
        __asm
        {
          vmovss  xmm12, [rsp+500h+var_49C]
          vmovss  xmm13, [rsp+500h+var_4A0]
        }
        if ( !_EDI )
        {
          v30 = v143;
          goto LABEL_85;
        }
      }
      do
      {
        __asm { tzcnt   r15d, edi }
        v32 = _ER15 + v144;
        if ( _ER15 + v144 >= 0x800 )
        {
          LODWORD(v142) = 2048;
          LODWORD(v141) = _ER15 + v144;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 322, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v141, v142) )
            __debugbreak();
        }
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v142) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v142) )
            __debugbreak();
        }
        if ( (unsigned int)v14 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v142) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v141) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v141, v142) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v14] )
        {
          LODWORD(v142) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v142) )
            __debugbreak();
        }
        v33 = CgEntitySystem::ms_entitySystemArray[v14];
        if ( (unsigned int)v32 >= 0x800 )
        {
          LODWORD(v142) = 2048;
          LODWORD(v141) = _ER15 + v144;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v141, v142) )
            __debugbreak();
        }
        v34 = (__int64)&v33->m_entities[v32];
        if ( (*(_BYTE *)(v34 + 648) & 1) != 0 )
        {
          if ( !*(_QWORD *)(v34 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v34 + 48), (const cpose_t *)v34);
          FunctionPointer_origin((const vec4_t *)(v34 + 56), (vec3_t *)v153);
          v36 = *(_BYTE *)(v34 + 2) == 0;
          if ( *(_BYTE *)(v34 + 2) )
          {
            __asm
            {
              vmovd   xmm0, [rsp+500h+var_490]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm11
              vcvtsd2ss xmm5, xmm1, xmm1
              vmovss  [rsp+500h+var_490], xmm5
              vmovd   xmm0, [rsp+500h+var_48C]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm11
              vcvtsd2ss xmm6, xmm1, xmm1
              vmovss  [rsp+500h+var_48C], xmm6
              vmovd   xmm0, [rsp+500h+var_488]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm11
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  [rsp+500h+var_488], xmm2
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm2, [rsp+500h+var_488]
              vmovss  xmm6, [rsp+500h+var_48C]
              vmovss  xmm5, [rsp+500h+var_490]
            }
          }
          __asm
          {
            vsubss  xmm3, xmm13, xmm5
            vsubss  xmm1, xmm12, xmm6
            vmovss  xmm0, [rsp+500h+var_498]
            vsubss  xmm4, xmm0, xmm2
            vmulss  xmm2, xmm1, xmm1
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm9, xmm3, xmm0
            vmovss  xmm1, dword ptr [r13+110h]
            vcomiss xmm1, xmm10
          }
          if ( v36 )
            goto LABEL_43;
          __asm { vcomiss xmm9, xmm1 }
          if ( v36 )
          {
LABEL_43:
            __asm
            {
              vsubss  xmm8, xmm5, xmm13
              vsubss  xmm7, xmm6, xmm12
              vmulss  xmm1, xmm7, xmm7
              vmulss  xmm0, xmm8, xmm8
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm2, xmm1, xmm1
              vcmpless xmm0, xmm2, cs:__real@80000000
              vblendvps xmm1, xmm2, xmm15, xmm0
              vmovss  dword ptr [rsp+500h+var_4B8], xmm1
              vdivss  xmm6, xmm15, xmm1
            }
            _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v14);
            __asm
            {
              vmovss  xmm4, dword ptr [rax+6944h]
              vmovss  xmm3, dword ptr [rax+6948h]
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm1, xmm1, xmm0
              vsqrtss xmm2, xmm1, xmm1
              vcmpless xmm0, xmm2, cs:__real@80000000
              vblendvps xmm1, xmm2, xmm15, xmm0
              vmovss  dword ptr [rsp+500h+var_4B8], xmm1
              vdivss  xmm2, xmm15, xmm1
              vmulss  xmm1, xmm2, xmm3
              vmulss  xmm0, xmm6, xmm7
              vmulss  xmm3, xmm1, xmm0
              vmulss  xmm2, xmm2, xmm4
              vmulss  xmm1, xmm6, xmm8
              vmulss  xmm0, xmm2, xmm1
              vaddss  xmm0, xmm3, xmm0; X
            }
            *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
            __asm { vmulss  xmm7, xmm0, xmm14 }
            v85 = !_R13->m_spawnAngleIsRelative;
            if ( _R13->m_spawnAngleIsRelative )
            {
              v86 = LocalClientGlobals;
              v87 = LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v32);
              v85 = !v87;
              if ( v87 )
              {
                __asm
                {
                  vcomiss xmm9, xmm10
                  vsqrtss xmm6, xmm9, xmm9
                }
                if ( v86->IsMP(v86) )
                {
                  if ( (unsigned int)v32 >= *(_DWORD *)&v86->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
                  {
                    LODWORD(v142) = *(_DWORD *)&v86->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28];
                    LODWORD(v141) = _ER15 + v144;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v141, v142) )
                      __debugbreak();
                  }
                  CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792i64 * v32);
                }
                else
                {
                  CharacterInfo = CgGlobalsSP::GetCharacterInfo(v86, v32);
                }
                if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 359, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
                  __debugbreak();
                if ( !BG_GetSuitDef(CharacterInfo->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 362, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
                  __debugbreak();
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, dword ptr [rdi+220h]; Y
                  vmovaps xmm1, xmm6; X
                }
                *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
                __asm
                {
                  vmulss  xmm6, xmm0, xmm14
                  vmovss  dword ptr [rsp+500h+var_4B8], xmm6
                }
                v85 = (v148 & 0x7F800000u) <= 0x7F800000;
                if ( (v148 & 0x7F800000) == 2139095040 )
                {
                  v93 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 367, ASSERT_TYPE_SANITY, "( !IS_NAN( boundRadiusAngle ) )", (const char *)&queryFormat, "!IS_NAN( boundRadiusAngle )");
                  v85 = !v93;
                  if ( v93 )
                    __debugbreak();
                }
                __asm
                {
                  vsubss  xmm0, xmm7, xmm6
                  vmaxss  xmm7, xmm0, xmm10
                }
              }
            }
            __asm { vcomiss xmm7, dword ptr [r13+114h] }
            if ( v85 )
            {
              if ( v17 )
              {
                v95 = v17 - 1 < 0x32;
                if ( v17 - 1 >= 0x32 )
                {
                  v96 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements");
                  v95 = 0;
                  if ( v96 )
                    __debugbreak();
                }
                _RAX = 3 * (v17 - 1);
                __asm { vcomiss xmm9, [rbp+rax*4+400h+var_438] }
                if ( v95 )
                  goto LABEL_68;
              }
              if ( v17 < _R13->m_maxElements )
              {
LABEL_68:
                if ( v17 >= _R13->m_maxElements )
                {
                  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
                    __debugbreak();
                  v164 = --v17;
                }
                v30 = v143;
                v150 = __PAIR64__(_ER15, v143);
                __asm { vmovss  [rsp+500h+var_4A8], xmm9 }
                if ( !v17 )
                {
                  __asm
                  {
                    vmovsd  xmm0, qword ptr [rsp+500h+var_4B0]
                    vmovsd  [rbp+400h+var_440], xmm0
                  }
                  v163[0] = v151;
                  v17 = 1i64;
                  v164 = 1i64;
                  goto LABEL_83;
                }
                _RDI = &v162;
                v100 = (__int64 *)&v163[3 * v17 - 2];
                v101 = &v162 < v100;
                if ( &v162 == v100 )
                {
LABEL_78:
                  if ( v17 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
                    __debugbreak();
                  _RCX = 3 * v17;
                  __asm
                  {
                    vmovsd  xmm0, qword ptr [rsp+500h+var_4B0]
                    vmovsd  [rbp+rcx*4+400h+var_440], xmm0
                  }
                  v163[_RCX] = v151;
                  v17 = ++v164;
                }
                else
                {
                  while ( 1 )
                  {
                    __asm { vcomiss xmm9, dword ptr [rdi+8] }
                    if ( v101 )
                      break;
                    _RDI = (__int64 *)((char *)_RDI + 12);
                    v101 = _RDI < v100;
                    if ( _RDI == v100 )
                      goto LABEL_78;
                  }
                  if ( v17 == 50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
                    __debugbreak();
                  if ( (_RDI < &v162 || _RDI > (__int64 *)&v163[3 * v17 - 2]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
                    __debugbreak();
                  if ( (char *)_RDI - (char *)&v162 != 12 * (((char *)_RDI - (char *)&v162) / 0xCui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
                    __debugbreak();
                  if ( &v150 >= (unsigned __int64 *)_RDI && &v150 < (unsigned __int64 *)&v163[3 * v17 - 2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
                    __debugbreak();
                  _RBX = &v163[3 * v17 - 2];
                  if ( _RDI != (__int64 *)_RBX )
                  {
                    _RSI = &v163[3 * v17 + 1];
                    if ( _RDI == (__int64 *)_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                      __debugbreak();
                    if ( _RBX == _RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                      __debugbreak();
                    v138 = _RBX <= (int *)_RDI;
                    if ( _RBX < (int *)_RDI )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                        __debugbreak();
                      v138 = _RBX <= (int *)_RDI;
                    }
                    if ( !v138 )
                    {
                      do
                      {
                        _RBX -= 3;
                        _RSI -= 3;
                        __asm
                        {
                          vmovsd  xmm0, qword ptr [rbx]
                          vmovsd  qword ptr [rsi], xmm0
                        }
                        _RSI[2] = _RBX[2];
                      }
                      while ( _RBX > (int *)_RDI );
                      v17 = v164;
                    }
                  }
                  v164 = v17 + 1;
                  __asm
                  {
                    vmovsd  xmm0, qword ptr [rsp+500h+var_4B0]
                    vmovsd  qword ptr [rdi], xmm0
                  }
                  *((_DWORD *)_RDI + 2) = v151;
                  v17 = v164;
                }
              }
            }
          }
        }
        v30 = v143;
LABEL_83:
        v36 = (((_DWORD)v154 - 1) & (unsigned int)v154) == 0;
        _EDI = (v154 - 1) & v154;
        LODWORD(v154) = _EDI;
      }
      while ( !v36 );
      v18 = v144;
      v20 = (__int64)v157;
LABEL_85:
      v18 += 32;
      v144 = v18;
      v143 = v30 + 1;
      v157 = (int *)++v20;
      if ( (int)(v30 + 1) >= 64 )
      {
        v104 = 0i64;
        v105 = 0;
        if ( v17 )
        {
          v106 = 0i64;
          v107 = &v162;
          do
          {
            if ( v105 >= _R13->m_maxElements )
              break;
            if ( v106 >= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v106 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v108 = 1 << *((_DWORD *)v107 + 1);
            if ( v106 >= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v106 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v165[*(int *)v107] |= v108;
            ++v105;
            ++v106;
            v107 = (__int64 *)((char *)v107 + 12);
            v17 = v164;
          }
          while ( v105 < v164 );
          v104 = 0i64;
        }
        v109 = 0;
        v149 = 0i64;
        v110 = v165;
        v157 = v165;
        v111 = (char *)_R13 - (char *)v165;
        v154 = (char *)_R13 - (char *)v165;
        v112 = 64i64;
        LocalClientGlobals = (CgGlobalsSP *)64;
        do
        {
          v113 = *v110;
          v145 = *v110;
          v114 = *(volatile int *)((char *)v110 + v111 + 16);
          _EBX = v114 & ~*v110;
          if ( _EBX )
          {
            v116 = v158;
            v117 = localClientNuma;
            do
            {
              __asm { tzcnt   r8d, ebx }
              LUIOnEntityElementSpawner::DespawnForEntity(v116, v117, v109 + _ER8);
              _EBX &= _EBX - 1;
            }
            while ( _EBX );
            v113 = v145;
            v104 = v149;
          }
          _EDI = v113 & ~v114;
          if ( _EDI )
          {
            v120 = v158;
            v121 = localClientNuma;
            do
            {
              __asm { tzcnt   ebx, edi }
              v123 = v109 + _EBX;
              if ( (unsigned int)v121 >= LOCAL_CLIENT_COUNT )
              {
                LODWORD(v142) = 2;
                LODWORD(v141) = v121;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v141, v142) )
                  __debugbreak();
              }
              if ( v123 >= 0x800 )
              {
                LODWORD(v142) = 2048;
                LODWORD(v141) = v123;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v141, v142) )
                  __debugbreak();
              }
              if ( LUI_BeginEventWithElement(v121, v120->m_element, "onEntityElementSpawn", v120->m_luaVM) )
              {
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2sd xmm1, xmm1, ebx; value
                }
                LUI_SetTableNumber("entityNum", *(long double *)&_XMM1, v120->m_luaVM);
                LUI_EndEventWithElement(v120->m_luaVM);
              }
              _EDI &= _EDI - 1;
            }
            while ( _EDI );
            v110 = v157;
            v113 = v145;
            v104 = v149;
            v112 = (__int64)LocalClientGlobals;
          }
          *(volatile int *)((char *)v158->m_activeEntities.entityMembers + v104) = v113;
          v109 += 32;
          v104 += 4i64;
          v149 = v104;
          v157 = (int *)++v110;
          LocalClientGlobals = (CgGlobalsSP *)--v112;
          v111 = v154;
        }
        while ( v112 );
        Sys_ProfEndNamedEvent();
        memset(v152, 0, sizeof(v152));
        memset(v153, 0, 0xCui64);
        v17 = v164;
        v16 = 0i64;
        break;
      }
    }
  }
  if ( v17 )
  {
    do
    {
      if ( v16 >= 0x32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v16;
    }
    while ( v16 < v17 );
  }
  _R11 = &v166;
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

void __fastcall LUIOnEntityElementSpawner::SetSpawnAngle(LUIOnEntityElementSpawner *this, double angle)
{
  __asm { vmovss  dword ptr [rcx+114h], xmm1 }
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

void __fastcall LUIOnEntityElementSpawner::SetSpawnDistance(LUIOnEntityElementSpawner *this, double distance)
{
  __asm
  {
    vmulss  xmm0, xmm1, xmm1
    vmovss  dword ptr [rcx+110h], xmm0
  }
}

/*
==============
LUIOnEntityElementSpawner::SpawnForEntity
==============
*/
void LUIOnEntityElementSpawner::SpawnForEntity(LUIOnEntityElementSpawner *this, const LocalClientNum_t localClientNum, int entityNum)
{
  __int64 v9; 
  __int64 v11; 
  int v12; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v12) )
      __debugbreak();
  }
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v11) = 2048;
    LODWORD(v9) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_onentityspawner.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  if ( LUI_BeginEventWithElement(localClientNum, this->m_element, "onEntityElementSpawn", this->m_luaVM) )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, edi; value
    }
    LUI_SetTableNumber("entityNum", *(long double *)&_XMM1, this->m_luaVM);
    LUI_EndEventWithElement(this->m_luaVM);
  }
}

