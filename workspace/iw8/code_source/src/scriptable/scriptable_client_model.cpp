/*
==============
ScriptableCl_SetClientModelInstanceModels
==============
*/

void __fastcall ScriptableCl_SetClientModelInstanceModels(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_SetClientModelInstanceModels@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_SpawnClientModelInstance
==============
*/

void __fastcall ScriptableCl_SpawnClientModelInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_SpawnClientModelInstance@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_DespawnClientModelInstance
==============
*/

void __fastcall ScriptableCl_DespawnClientModelInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_DespawnClientModelInstance@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCL_InitClientModelData
==============
*/

void __fastcall ScriptableCL_InitClientModelData(const LocalClientNum_t localClientNum)
{
  ?ScriptableCL_InitClientModelData@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ClientModelInstancesAvailable
==============
*/

bool __fastcall ScriptableCl_ClientModelInstancesAvailable(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_ClientModelInstancesAvailable@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCL_InitClientModelData
==============
*/
void ScriptableCL_InitClientModelData(const LocalClientNum_t localClientNum)
{
  __int64 v3; 

  __asm
  {
    vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000
    vmovdqu xmm3, cs:__xmm@000000ff000000ff000000ff000000ff
  }
  v3 = localClientNum;
  _EAX = 8;
  _RDX = &s_availableIds[v3].m_ids[8];
  do
  {
    _ECX = _EAX - 8;
    __asm
    {
      vmovd   xmm0, ecx
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm0, xmm0, xmm2
      vpsubd  xmm1, xmm3, xmm0
      vmovdqu xmmword ptr [rdx-20h], xmm1
    }
    _ECX = _EAX - 4;
    __asm
    {
      vmovd   xmm0, ecx
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm0, xmm0, xmm2
      vpsubd  xmm1, xmm3, xmm0
      vmovdqu xmmword ptr [rdx-10h], xmm1
    }
    _ECX = _EAX + 4;
    __asm
    {
      vmovd   xmm0, eax
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm0, xmm0, xmm2
      vpsubd  xmm1, xmm3, xmm0
      vmovdqu xmmword ptr [rdx], xmm1
      vmovd   xmm0, ecx
    }
    _EAX += 16;
    _RDX += 16;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm0, xmm0, xmm2
      vpsubd  xmm1, xmm3, xmm0
      vmovdqu xmmword ptr [rdx-30h], xmm1
    }
  }
  while ( (unsigned int)(_EAX - 8) < 0x100 );
  s_availableIds[v3].m_count = 256;
}

/*
==============
ScriptableCl_ClientModelInstancesAvailable
==============
*/
bool ScriptableCl_ClientModelInstancesAvailable(const LocalClientNum_t localClientNum)
{
  return s_availableIds[localClientNum].m_count != 0;
}

/*
==============
ScriptableCl_DespawnClientModelInstance
==============
*/
void ScriptableCl_DespawnClientModelInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  unsigned int LinkObject; 
  unsigned int v5; 
  AvailableClientModelIndex *v6; 
  __int64 v7; 
  unsigned int totalInstanceCount; 

  v2 = localClientNum;
  if ( !ScriptableCl_IsInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 182, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsInitialized( localClientNum ))", (const char *)&queryFormat, "ScriptableCl_IsInitialized( localClientNum )") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(v7) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v7, totalInstanceCount) )
      __debugbreak();
  }
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 184, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 188, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( ScriptableCl_GetLinkType((const LocalClientNum_t)v2, scriptableIndex) != SCRIPTABLE_LINK_CLIENTMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 189, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetLinkType( localClientNum, scriptableIndex ) == SCRIPTABLE_LINK_CLIENTMODEL)", (const char *)&queryFormat, "ScriptableCl_GetLinkType( localClientNum, scriptableIndex ) == SCRIPTABLE_LINK_CLIENTMODEL") )
    __debugbreak();
  LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v2, scriptableIndex);
  v5 = LinkObject - cm.mapEnts->numClientModels;
  v6 = &s_availableIds[v2];
  if ( v5 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 46, ASSERT_TYPE_ASSERT, "(id < CLIENT_MODEL_SCRIPTABLE_POOL_SIZE)", (const char *)&queryFormat, "id < CLIENT_MODEL_SCRIPTABLE_POOL_SIZE") )
    __debugbreak();
  v6->m_ids[v6->m_count++] = v5;
  CG_ClientModel_ScriptableUnlink((const LocalClientNum_t)v2, LinkObject);
  ScriptableCl_ClearLink((const LocalClientNum_t)v2, scriptableIndex);
}

/*
==============
ScriptableCl_SetClientModelInstanceModels
==============
*/
void ScriptableCl_SetClientModelInstanceModels(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  unsigned int LinkObject; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  BgWeaponHandle v7; 
  const Weapon *Weapon; 
  const dvar_t *v9; 
  unsigned int unsignedInt; 
  __int64 renderMode; 

  v2 = localClientNum;
  if ( !ScriptableCl_IsInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 80, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsInitialized( localClientNum ))", (const char *)&queryFormat, "ScriptableCl_IsInitialized( localClientNum )") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(renderMode) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 81, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", renderMode, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 82, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v2, scriptableIndex, SCRIPTABLE_LINK_CLIENTMODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 83, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_CLIENTMODEL ))", (const char *)&queryFormat, "ScriptableCl_GetLinkTypeEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_CLIENTMODEL )") )
    __debugbreak();
  LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v2, scriptableIndex);
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex);
  if ( InstanceCommonContext->dataType != SCRIPTABLE_DATA_TYPE_XMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 87, ASSERT_TYPE_ASSERT, "(context.dataType == SCRIPTABLE_DATA_TYPE_XMODEL)", "%s\n\tComposite model not supported for SCRIPTABLE_LINK_CLIENTMODEL", "context.dataType == SCRIPTABLE_DATA_TYPE_XMODEL") )
    __debugbreak();
  if ( !InstanceCommonContext->data.compositeModel )
    goto LABEL_35;
  LootItemDef = ScriptableCl_GetLootItemDef((const LocalClientNum_t)v2, scriptableIndex);
  v7.m_mapEntryId = ScriptableCl_GetLootItemWeaponHandleValidated((const LocalClientNum_t)v2, scriptableIndex, 1);
  if ( v7.m_mapEntryId )
  {
    if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(CgWeaponMap::ms_instance[v2], v7);
    CG_ClientModel_SetWeapon((const LocalClientNum_t)v2, LinkObject, Weapon);
    goto LABEL_25;
  }
  if ( LootItemDef && ScriptableCl_IsLootWeapon((const LocalClientNum_t)v2, scriptableIndex) )
  {
LABEL_35:
    CG_ClientModel_SetModel((const LocalClientNum_t)v2, LinkObject, NULL);
    return;
  }
  CG_ClientModel_SetModel((const LocalClientNum_t)v2, LinkObject, InstanceCommonContext->data.model);
LABEL_25:
  if ( LootItemDef )
  {
    v9 = DVARINT_scriptable_lootOutlineColor;
    if ( !DVARINT_scriptable_lootOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_lootOutlineColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    unsignedInt = v9->current.unsignedInt;
    if ( unsignedInt )
    {
      if ( unsignedInt != 1 )
        unsignedInt = ScriptableCl_GetLootItemRarityColor((const LocalClientNum_t)v2, LootItemDef->rarity);
    }
    else
    {
      unsignedInt = -1;
    }
    CG_ClientModel_SetHudOutline_CustomColor((const LocalClientNum_t)v2, LinkObject, (*((_BYTE *)InstanceCommonContext + 60) & 8) != 0, unsignedInt, (*((_BYTE *)InstanceCommonContext + 60) & 0x10) != 0, 1u, 1u);
  }
  else
  {
    CG_ClientModel_SetHudOutline((const LocalClientNum_t)v2, LinkObject, (*((_BYTE *)InstanceCommonContext + 60) & 8) != 0, InstanceCommonContext->hudOutlineColor, (*((_BYTE *)InstanceCommonContext + 60) & 0x10) != 0);
  }
}

/*
==============
ScriptableCl_SpawnClientModelInstance
==============
*/
void ScriptableCl_SpawnClientModelInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v3; 
  AvailableClientModelIndex *v4; 
  unsigned int v5; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  XAnim_s *v7; 
  __int64 animationTreeName; 
  unsigned int animations; 
  vec3_t outOrigin; 

  v3 = localClientNum;
  if ( !ScriptableCl_IsInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 150, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsInitialized( localClientNum ))", (const char *)&queryFormat, "ScriptableCl_IsInitialized( localClientNum )") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    animations = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(animationTreeName) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 151, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", animationTreeName, animations) )
      __debugbreak();
  }
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 152, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 156, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( ScriptableCl_IsLinked((const LocalClientNum_t)v3, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 157, ASSERT_TYPE_ASSERT, "(!ScriptableCl_IsLinked( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "!ScriptableCl_IsLinked( localClientNum, scriptableIndex )") )
    __debugbreak();
  v4 = &s_availableIds[v3];
  if ( !v4->m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_model.cpp", 39, ASSERT_TYPE_ASSERT, "(m_count > 0)", (const char *)&queryFormat, "m_count > 0") )
    __debugbreak();
  v5 = cm.mapEnts->numClientModels + v4->m_ids[--v4->m_count];
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, scriptableIndex);
  v7 = InstanceCommonContext->def->animationTreeDef[0];
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  CG_ClientModel_ScriptableLink((const LocalClientNum_t)v3, v5, &outOrigin, &InstanceCommonContext->angles, InstanceCommonContext->data.model, InstanceCommonContext->def->animationTreeName, v7, NULL, 0i64);
  ScriptableCl_SetLink((const LocalClientNum_t)v3, scriptableIndex, SCRIPTABLE_LINK_CLIENTMODEL, v5);
  if ( InstanceCommonContext->dataType == SCRIPTABLE_DATA_TYPE_XMODEL )
    ScriptableCl_SetClientModelInstanceModels((const LocalClientNum_t)v3, scriptableIndex);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

