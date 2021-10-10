/*
==============
ScriptableCommon_AssertCountsInitialized
==============
*/

void ScriptableCommon_AssertCountsInitialized(void)
{
  ?ScriptableCommon_AssertCountsInitialized@@YAXXZ();
}

/*
==============
ScriptableCommon_GetMapInstanceStartOffset
==============
*/

unsigned int __fastcall ScriptableCommon_GetMapInstanceStartOffset()
{
  return ?ScriptableCommon_GetMapInstanceStartOffset@@YAIXZ();
}

/*
==============
ScriptableCommon_GetLootInstanceCount
==============
*/

unsigned int __fastcall ScriptableCommon_GetLootInstanceCount()
{
  return ?ScriptableCommon_GetLootInstanceCount@@YAIXZ();
}

/*
==============
ScriptableCommon_GetMapInstance
==============
*/

bool __fastcall ScriptableCommon_GetMapInstance(const unsigned int scriptableIndex, const ScriptableInstance **outInstance)
{
  return ?ScriptableCommon_GetMapInstance@@YA_NIPEAPEBUScriptableInstance@@@Z(scriptableIndex, outInstance);
}

/*
==============
ScriptableReplicatedOrigin::Set
==============
*/

void __fastcall ScriptableReplicatedOrigin::Set(ScriptableReplicatedOrigin *this, const vec3_t *vecOrigin)
{
  ?Set@ScriptableReplicatedOrigin@@QEAAXAEBTvec3_t@@@Z(this, vecOrigin);
}

/*
==============
ScriptableCommon_HaveInstanceFieldsChanged
==============
*/

bool __fastcall ScriptableCommon_HaveInstanceFieldsChanged(const ScriptableReplicatedInstance *fromInstance, const ScriptableReplicatedInstance *toInstance)
{
  return ?ScriptableCommon_HaveInstanceFieldsChanged@@YA_NAEBUScriptableReplicatedInstance@@0@Z(fromInstance, toInstance);
}

/*
==============
ScriptableParentInfo::GetEntityNum
==============
*/

unsigned __int16 __fastcall ScriptableParentInfo::GetEntityNum(ScriptableParentInfo *this)
{
  return ?GetEntityNum@ScriptableParentInfo@@QEBAGXZ(this);
}

/*
==============
ScriptableCommon_AssertCountsInitialized
==============
*/
void ScriptableCommon_AssertCountsInitialized(void)
{
  int v0; 

  if ( !g_scriptableWorldCountsInitialized )
  {
    v0 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 59, ASSERT_TYPE_ASSERT, "( g_scriptableWorldCountsInitialized ) != ( 0 )", "%s != %s\n\t%i, %i", "g_scriptableWorldCountsInitialized", "0", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
ScriptableCommon_GetMapInstance
==============
*/
char ScriptableCommon_GetMapInstance(const unsigned int scriptableIndex, const ScriptableInstance **outInstance)
{
  unsigned int runtimeInstanceCount; 
  unsigned int v5; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  if ( !outInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 130, ASSERT_TYPE_ASSERT, "( outInstance )", (const char *)&queryFormat, "outInstance") )
    __debugbreak();
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  v5 = runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
  if ( scriptableIndex >= v5 )
  {
    v7 = scriptableIndex - v5;
    if ( (unsigned int)v7 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
    {
      LODWORD(v9) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
      LODWORD(v8) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    *outInstance = &cm.mapEnts->scriptableMapEnts.mapInstances[v7];
    return 1;
  }
  else
  {
    *outInstance = NULL;
    return 0;
  }
}

/*
==============
ScriptableCommon_GetLootInstanceCount
==============
*/
__int64 ScriptableCommon_GetLootInstanceCount()
{
  MapEnts *mapEnts; 

  mapEnts = cm.mapEnts;
  if ( !cm.mapEnts )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
      __debugbreak();
    mapEnts = cm.mapEnts;
  }
  return mapEnts->scriptableMapEnts.lootInstanceCount;
}

/*
==============
ScriptableCommon_GetMapInstanceStartOffset
==============
*/
__int64 ScriptableCommon_GetMapInstanceStartOffset()
{
  unsigned int runtimeInstanceCount; 

  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  return runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
}

/*
==============
ScriptableCommon_HaveInstanceFieldsChanged
==============
*/
char ScriptableCommon_HaveInstanceFieldsChanged(const ScriptableReplicatedInstance *fromInstance, const ScriptableReplicatedInstance *toInstance)
{
  unsigned __int16 defIndex; 
  unsigned __int16 v6; 
  unsigned __int16 payload; 
  unsigned __int16 v8; 
  unsigned __int16 extraPayload; 
  unsigned __int16 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 

  if ( fromInstance->replicatedType[0] )
  {
    if ( fromInstance->payload != toInstance->payload || fromInstance->extraPayload != toInstance->extraPayload || fromInstance->parent.m_data != toInstance->parent.m_data || fromInstance->origin.m_data != toInstance->origin.m_data || fromInstance->angles.m_pitch != toInstance->angles.m_pitch || fromInstance->angles.m_yaw != toInstance->angles.m_yaw || fromInstance->angles.m_roll != toInstance->angles.m_roll )
      return 1;
  }
  else
  {
    defIndex = fromInstance->defIndex;
    v6 = toInstance->defIndex;
    if ( defIndex != v6 )
    {
      v14 = v6;
      v12 = defIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 245, ASSERT_TYPE_ASSERT, "( fromInstance.defIndex ) == ( toInstance.defIndex )", "fromInstance.defIndex == toInstance.defIndex\n\t%i, %i", v12, v14) )
        __debugbreak();
    }
    payload = fromInstance->payload;
    v8 = toInstance->payload;
    if ( payload != v8 )
    {
      LODWORD(v13) = v8;
      LODWORD(v11) = payload;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 246, ASSERT_TYPE_ASSERT, "( fromInstance.payload ) == ( toInstance.payload )", "fromInstance.payload == toInstance.payload\n\t%i, %i", v11, v13) )
        __debugbreak();
    }
    extraPayload = fromInstance->extraPayload;
    v10 = toInstance->extraPayload;
    if ( extraPayload != v10 )
    {
      LODWORD(v13) = v10;
      LODWORD(v11) = extraPayload;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 247, ASSERT_TYPE_ASSERT, "( fromInstance.extraPayload ) == ( toInstance.extraPayload )", "fromInstance.extraPayload == toInstance.extraPayload\n\t%i, %i", v11, v13) )
        __debugbreak();
    }
    if ( fromInstance->parent.m_data != toInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 248, ASSERT_TYPE_ASSERT, "( !ScriptableCommon_AreInstanceParentsDifferent( fromInstance.parent, toInstance.parent ) )", (const char *)&queryFormat, "!ScriptableCommon_AreInstanceParentsDifferent( fromInstance.parent, toInstance.parent )") )
      __debugbreak();
    if ( fromInstance->origin.m_data != toInstance->origin.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 249, ASSERT_TYPE_ASSERT, "( !ScriptableCommon_AreInstanceOriginsDifferent( fromInstance.origin, toInstance.origin ) )", (const char *)&queryFormat, "!ScriptableCommon_AreInstanceOriginsDifferent( fromInstance.origin, toInstance.origin )") )
      __debugbreak();
    if ( (fromInstance->angles.m_pitch != toInstance->angles.m_pitch || fromInstance->angles.m_yaw != toInstance->angles.m_yaw || fromInstance->angles.m_roll != toInstance->angles.m_roll) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 250, ASSERT_TYPE_ASSERT, "( !ScriptableCommon_AreInstanceAnglesDifferent( fromInstance.angles, toInstance.angles ) )", (const char *)&queryFormat, "!ScriptableCommon_AreInstanceAnglesDifferent( fromInstance.angles, toInstance.angles )") )
      __debugbreak();
  }
  return 0;
}

/*
==============
ScriptableParentInfo::GetEntityNum
==============
*/
unsigned __int16 ScriptableParentInfo::GetEntityNum(ScriptableParentInfo *this)
{
  if ( !this->m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 323, ASSERT_TYPE_ASSERT, "(HasEntity())", (const char *)&queryFormat, "HasEntity()") )
    __debugbreak();
  return this->m_data - 1;
}

/*
==============
ScriptableReplicatedOrigin::Set
==============
*/
void ScriptableReplicatedOrigin::Set(ScriptableReplicatedOrigin *this, const vec3_t *vecOrigin)
{
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  _XMM6 = 0i64;
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  if ( (unsigned int)((int)*(float *)&_XMM2 + 0x200000) > 0x3FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 264, ASSERT_TYPE_ASSERT, "( SCRIPTABLE_ORIGIN_XY_MIN ) <= ( xRound ) && ( xRound ) <= ( SCRIPTABLE_ORIGIN_XY_MAX )", "xRound not in [SCRIPTABLE_ORIGIN_XY_MIN, SCRIPTABLE_ORIGIN_XY_MAX]\n\t%i not in [%i, %i]", (int)*(float *)&_XMM2, -2097152, 0x1FFFFF) )
    __debugbreak();
  this->m_data &= 0xFFFFFFFFFFC00000ui64;
  this->m_data |= (int)*(float *)&_XMM2 & 0x3FFFFF;
  __asm { vroundss xmm0, xmm6, xmm2, 1 }
  if ( (unsigned int)((int)*(float *)&_XMM0 + 0x200000) > 0x3FFFFF )
  {
    LODWORD(v9) = 0x1FFFFF;
    LODWORD(v8) = -2097152;
    LODWORD(v7) = (int)*(float *)&_XMM0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 268, ASSERT_TYPE_ASSERT, "( SCRIPTABLE_ORIGIN_XY_MIN ) <= ( yRound ) && ( yRound ) <= ( SCRIPTABLE_ORIGIN_XY_MAX )", "yRound not in [SCRIPTABLE_ORIGIN_XY_MIN, SCRIPTABLE_ORIGIN_XY_MAX]\n\t%i not in [%i, %i]", v7, v8, v9) )
      __debugbreak();
  }
  this->m_data &= 0xFFFFF000003FFFFFui64;
  this->m_data |= (unsigned __int64)((int)*(float *)&_XMM0 & 0x3FFFFF) << 22;
  __asm { vroundss xmm0, xmm6, xmm2, 1 }
  if ( (unsigned int)((int)*(float *)&_XMM0 + 0x80000) > 0xFFFFF )
  {
    LODWORD(v9) = 0x7FFFF;
    LODWORD(v8) = -524288;
    LODWORD(v7) = (int)*(float *)&_XMM0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 272, ASSERT_TYPE_ASSERT, "( SCRIPTABLE_ORIGIN_Z_MIN ) <= ( zRound ) && ( zRound ) <= ( SCRIPTABLE_ORIGIN_Z_MAX )", "zRound not in [SCRIPTABLE_ORIGIN_Z_MIN, SCRIPTABLE_ORIGIN_Z_MAX]\n\t%i not in [%i, %i]", v7, v8, v9) )
      __debugbreak();
  }
  this->m_data &= 0xFFFFFFFFFFFui64;
  this->m_data |= (__int64)(int)*(float *)&_XMM0 << 44;
}

