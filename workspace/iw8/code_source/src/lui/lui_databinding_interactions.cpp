/*
==============
LUI_DataBinding_Interactions_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_Interactions_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Interactions_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Interactions_GetLootItemFromScriptableIndex
==============
*/

const BG_SpawnGroup_Loot_ItemDef *__fastcall LUI_DataBinding_Interactions_GetLootItemFromScriptableIndex(LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?LUI_DataBinding_Interactions_GetLootItemFromScriptableIndex@@YAPEBUBG_SpawnGroup_Loot_ItemDef@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
LUI_DataBinding_Interactions_GetLootItemFromName
==============
*/

const BG_SpawnGroup_Loot_ItemDef *__fastcall LUI_DataBinding_Interactions_GetLootItemFromName(LocalClientNum_t localClientNum, const char *scriptableDefName)
{
  return ?LUI_DataBinding_Interactions_GetLootItemFromName@@YAPEBUBG_SpawnGroup_Loot_ItemDef@@W4LocalClientNum_t@@PEBD@Z(localClientNum, scriptableDefName);
}

/*
==============
LUI_DataBinding_Interactions_GetEntityNumber
==============
*/

int __fastcall LUI_DataBinding_Interactions_GetEntityNumber(LocalClientNum_t localClientNum)
{
  return ?LUI_DataBinding_Interactions_GetEntityNumber@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Interactions_GetLootItemFromCursor
==============
*/

const BG_SpawnGroup_Loot_ItemDef *__fastcall LUI_DataBinding_Interactions_GetLootItemFromCursor(LocalClientNum_t localClientNum)
{
  return ?LUI_DataBinding_Interactions_GetLootItemFromCursor@@YAPEBUBG_SpawnGroup_Loot_ItemDef@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Interactions_GetLootWeaponNumActiveAttachments
==============
*/

unsigned int __fastcall LUI_DataBinding_Interactions_GetLootWeaponNumActiveAttachments(const BG_SpawnGroup_Loot_ItemDef *const lootItemDef)
{
  return ?LUI_DataBinding_Interactions_GetLootWeaponNumActiveAttachments@@YAIQEBUBG_SpawnGroup_Loot_ItemDef@@@Z(lootItemDef);
}

/*
==============
LUI_DataBinding_Interactions_GetWeapon
==============
*/

Weapon *__fastcall LUI_DataBinding_Interactions_GetWeapon(Weapon *result, LocalClientNum_t localClientNum)
{
  return ?LUI_DataBinding_Interactions_GetWeapon@@YA?AUWeapon@@W4LocalClientNum_t@@@Z(result, localClientNum);
}

/*
==============
LUI_DataBinding_Interactions_SnapshotUpdate
==============
*/

void __fastcall LUI_DataBinding_Interactions_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Interactions_SnapshotUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Interactions_CanMantle
==============
*/
bool LUI_DataBinding_Interactions_CanMantle(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 

  if ( !CG_GetLocalClientGlobals(localClientNum)->hasMantleHint )
    return 0;
  v1 = DCONST_DVARMPBOOL_mantle_draw_hint;
  if ( !DCONST_DVARMPBOOL_mantle_draw_hint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_draw_hint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
LUI_DataBinding_Interactions_CanManualDeployParachute
==============
*/
bool LUI_DataBinding_Interactions_CanManualDeployParachute(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v2; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  char v4; 
  bool v5; 
  int pm_type; 
  bool v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = LocalClientGlobals;
  if ( ((LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] - 1) & 0xFB) != 0 || (p_pm_flags = &LocalClientGlobals->predictedPlayerState.pm_flags, !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x32u)) || (v2->predictedPlayerState.skydivePlayerState.flags[0] & 0x20) != 0 )
  {
    v4 = 0;
    p_pm_flags = &v2->predictedPlayerState.pm_flags;
  }
  else
  {
    v4 = 1;
  }
  v5 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x33u);
  pm_type = v2->predictedPlayerState.pm_type;
  v7 = pm_type == 1 || pm_type == 8;
  return (v4 || v5) && !v7;
}

/*
==============
LUI_DataBinding_Interactions_FrameUpdate
==============
*/
void LUI_DataBinding_Interactions_FrameUpdate(LocalClientNum_t localClientNum)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_Interactions_FrameUpdate");
  LUIBinding::PushFloat(&s_LUI_DataBinding_Progress, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_String, localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_DataBinding_Interactions_GetEntity
==============
*/
centity_t *LUI_DataBinding_Interactions_GetEntity(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  int cursorHintEntIndex; 
  centity_t *result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2335, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( p_predictedPlayerState->cursorHintClass )
    return 0i64;
  cursorHintEntIndex = p_predictedPlayerState->cursorHintEntIndex;
  if ( cursorHintEntIndex == 2047 )
    return 0i64;
  result = CG_GetEntity(localClientNum, cursorHintEntIndex);
  if ( (result->flags & 1) == 0 )
    return 0i64;
  return result;
}

/*
==============
LUI_DataBinding_Interactions_GetEntityNumber
==============
*/
__int64 LUI_DataBinding_Interactions_GetEntityNumber(LocalClientNum_t localClientNum)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  Entity = LUI_DataBinding_Interactions_GetEntity(localClientNum);
  if ( Entity )
    return (unsigned int)Entity->nextState.number;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.cursorHintClass == USE_CLASS_SCRIPTABLE )
  {
    v5 = UsableKeyEncode(LocalClientGlobals->predictedPlayerState.cursorHintEntIndex, USE_CLASS_SCRIPTABLE, LocalClientGlobals->predictedPlayerState.cursorHintData);
    v6 = v5;
    if ( v5 <= 0x800 )
    {
      v7 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 104, ASSERT_TYPE_ASSERT, "( useKey > ( 2048 ) )", "We encode the class 16 bits above the index and cursorHintClass is non zero, this should always be true (%i)", v7) )
      {
        __debugbreak();
        return v6;
      }
    }
  }
  else
  {
    return 2047;
  }
  return v6;
}

/*
==============
LUI_DataBinding_Interactions_GetHintParam
==============
*/
char LUI_DataBinding_Interactions_GetHintParam(LocalClientNum_t localClientNum, int hintParamIndex, char *outString, unsigned __int64 outStringSize)
{
  ClConfigStrings *ClConfigStrings; 
  const char *v10; 
  const char *v11; 
  int v15; 
  int v16; 

  _RDI = hintParamIndex;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)_RDI >= 2 )
  {
    v16 = 2;
    v15 = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( hintParamIndex ) < (unsigned)( ( sizeof( *array_counter( ps->cursorHintParams.types ) ) + 0 ) )", "hintParamIndex doesn't index ARRAY_COUNT( ps->cursorHintParams.types )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  switch ( _RBX->predictedPlayerState.cursorHintParams.types[_RDI] )
  {
    case 0:
      return 0;
    case 1:
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+rdi*4+2F8h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(outString, (int)outStringSize, "%f", *(double *)&_XMM3);
      return 1;
    case 2:
      Com_sprintf(outString, (int)outStringSize, "%d", _RBX->predictedPlayerState.cursorHintParams.values[_RDI].stringVal);
      return 1;
    case 3:
      ClConfigStrings = ClConfigStrings::GetClConfigStrings();
      v10 = ClConfigStrings->GetHintString(ClConfigStrings, _RBX->predictedPlayerState.cursorHintParams.values[_RDI].intVal);
      v11 = SEH_LocalizeTextMessage(v10, "ui string", LOCMSG_NOERR);
      if ( v11 )
        v10 = v11;
      Core_strcpy(outString, outStringSize, v10);
      return 1;
    default:
      if ( _RBX->predictedPlayerState.cursorHintParams.types[_RDI] != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 231, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown hint parameter type") )
        __debugbreak();
      return 0;
  }
}

/*
==============
LUI_DataBinding_Interactions_GetLootItemFromCursor
==============
*/
const BG_SpawnGroup_Loot_ItemDef *LUI_DataBinding_Interactions_GetLootItemFromCursor(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const BG_SpawnGroup_Loot_ItemDef *result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.cursorHintClass != USE_CLASS_SCRIPTABLE )
    return 0i64;
  result = ScriptableCl_GetLootItemDef(localClientNum, LocalClientGlobals->predictedPlayerState.cursorHintEntIndex);
  if ( !result )
    return 0i64;
  return result;
}

/*
==============
LUI_DataBinding_Interactions_GetLootItemFromName
==============
*/

const BG_SpawnGroup_Loot_ItemDef *__fastcall LUI_DataBinding_Interactions_GetLootItemFromName(LocalClientNum_t localClientNum, const char *scriptableDefName)
{
  return ScriptableCl_GetLootItemDefByName(localClientNum, scriptableDefName);
}

/*
==============
LUI_DataBinding_Interactions_GetLootItemFromScriptableIndex
==============
*/

const BG_SpawnGroup_Loot_ItemDef *__fastcall LUI_DataBinding_Interactions_GetLootItemFromScriptableIndex(LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
}

/*
==============
LUI_DataBinding_Interactions_GetLootWeaponNumActiveAttachments
==============
*/

unsigned int __fastcall LUI_DataBinding_Interactions_GetLootWeaponNumActiveAttachments(const BG_SpawnGroup_Loot_ItemDef *const lootItemDef)
{
  return ScriptableCl_GetLootItemActiveAttachmentCount(lootItemDef);
}

/*
==============
LUI_DataBinding_Interactions_GetObjectString
==============
*/
void LUI_DataBinding_Interactions_GetObjectString(LocalClientNum_t localClientNum, char *outString, unsigned __int64 outStringSize)
{
  cg_t *LocalClientGlobals; 
  ClConfigStrings *ClConfigStrings; 
  const char *v8; 
  const char *v9; 
  int v10; 
  char *p_outStringa; 
  char *v12; 
  int argCount; 
  __int64 v14; 
  __int64 v15; 
  ConversionArguments arguments; 
  char outStringa; 
  char outputString[1024]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.cursorHintString && (ClConfigStrings = ClConfigStrings::GetClConfigStrings(), (v8 = ClConfigStrings->GetHintString(ClConfigStrings, LocalClientGlobals->predictedPlayerState.cursorHintString)) != NULL) && *v8 )
  {
    v9 = SEH_LocalizeTextMessage(v8, "Hint String", LOCMSG_SAFE);
    v10 = 0;
    p_outStringa = &outStringa;
    arguments.argCount = 0;
    v12 = j_va(&byte_1444661C0, v9);
    do
    {
      if ( LUI_DataBinding_Interactions_GetHintParam(localClientNum, v10, p_outStringa, 0x40ui64) )
      {
        argCount = arguments.argCount;
        if ( arguments.argCount >= 9u )
        {
          LODWORD(v15) = 9;
          LODWORD(v14) = arguments.argCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 362, ASSERT_TYPE_ASSERT, "(unsigned)( convArgs.argCount ) < (unsigned)( ( sizeof( *array_counter( convArgs.args ) ) + 0 ) )", "convArgs.argCount doesn't index ARRAY_COUNT( convArgs.args )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
          argCount = arguments.argCount;
        }
        arguments.args[argCount] = p_outStringa;
        ++arguments.argCount;
      }
      ++v10;
      p_outStringa += 64;
    }
    while ( v10 < 2 );
    if ( arguments.argCount > 0 )
    {
      UI_ReplaceConversions(v12, &arguments, outputString, 0x400ui64);
      v12 = outputString;
    }
    UI_ReplaceDirective(localClientNum, v12, outString, outStringSize, 0);
  }
  else
  {
    *outString = 0;
  }
}

/*
==============
LUI_DataBinding_Interactions_GetWeapon
==============
*/
Weapon *LUI_DataBinding_Interactions_GetWeapon(Weapon *result, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  UsableClass cursorHintClass; 
  centity_t *Entity; 
  const char *Weapon; 
  int v12; 
  const entityState_t *p_nextState; 
  CgWeaponMap *Instance; 
  BgWeaponHandle v15; 
  CgWeaponMap *v16; 
  Weapon resulta; 

  _RDI = result;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  cursorHintClass = LocalClientGlobals->predictedPlayerState.cursorHintClass;
  if ( cursorHintClass == USE_CLASS_GENTITY )
  {
    Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.cursorHintEntIndex);
    if ( (Entity->flags & 1) != 0 && LocalClientGlobals->predictedPlayerState.cursorHint == HINT_WEAPON )
    {
      if ( Entity->nextState.eType == ET_SCRIPTMOVER && Entity->nextState.un.scriptMoverType == 5 )
      {
        Weapon = CL_UIWeapon_GetWeapon(localClientNum, Entity->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId);
        _RAX = CG_Weapons_GetWeaponForName(&resulta, Weapon);
      }
      else
      {
        p_nextState = &Entity->nextState;
        Instance = CgWeaponMap::GetInstance(localClientNum);
        _RAX = (Weapon *)BG_GetWeaponForEntity(Instance, p_nextState);
      }
      goto LABEL_7;
    }
LABEL_12:
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    }
    v12 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    __asm
    {
      vmovups ymmword ptr [rdi], ymm0
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
    goto LABEL_13;
  }
  if ( cursorHintClass != USE_CLASS_SCRIPTABLE )
    goto LABEL_12;
  v15.m_mapEntryId = ScriptableCl_GetLootItemWeaponHandleValidated(localClientNum, LocalClientGlobals->predictedPlayerState.cursorHintEntIndex, 0);
  if ( !v15.m_mapEntryId )
    goto LABEL_12;
  v16 = CgWeaponMap::GetInstance(localClientNum);
  _RAX = (Weapon *)BgWeaponMap::GetWeapon(v16, v15);
LABEL_7:
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups ymmword ptr [rdi], ymm0
    vmovsd  xmm0, qword ptr [rax+30h]
  }
  v12 = *(_DWORD *)&_RAX->weaponCamo;
LABEL_13:
  __asm
  {
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovsd  qword ptr [rdi+30h], xmm0
  }
  *(_DWORD *)&_RDI->weaponCamo = v12;
  return _RDI;
}

/*
==============
LUI_DataBinding_Interactions_GetWeaponAttachmentsIndexString
==============
*/
void LUI_DataBinding_Interactions_GetWeaponAttachmentsIndexString(const Weapon *r_weapon, char *outString, unsigned __int64 outStringSize)
{
  unsigned int weaponCamo; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  unsigned __int64 v23; 
  unsigned int v24; 
  unsigned __int64 v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  unsigned int v28; 
  unsigned __int64 v29; 
  unsigned int weaponOthers; 
  char _Buffer[16]; 

  weaponCamo = r_weapon->weaponCamo;
  v7 = 0i64;
  v8 = outStringSize - 1;
  v9 = j_sprintf(_Buffer, "%d", r_weapon->weaponCamo) + 1;
  if ( v9 < v8 )
  {
    Com_sprintf(outString, outStringSize, "%d ", weaponCamo);
    v7 = v9;
  }
  v10 = r_weapon->weaponAttachments[9];
  v11 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[9]) + 1;
  if ( v11 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v10);
    v7 = v11;
  }
  v12 = r_weapon->weaponAttachments[10];
  v13 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[10]) + 1;
  if ( v13 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v12);
    v7 = v13;
  }
  v14 = r_weapon->weaponAttachments[5];
  v15 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[5]) + 1;
  if ( v15 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v14);
    v7 = v15;
  }
  v16 = r_weapon->weaponAttachments[0];
  v17 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[0]) + 1;
  if ( v17 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v16);
    v7 = v17;
  }
  v18 = r_weapon->weaponAttachments[1];
  v19 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[1]) + 1;
  if ( v19 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v18);
    v7 = v19;
  }
  v20 = r_weapon->weaponAttachments[2];
  v21 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[2]) + 1;
  if ( v21 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v20);
    v7 = v21;
  }
  v22 = r_weapon->weaponAttachments[3];
  v23 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[3]) + 1;
  if ( v23 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v22);
    v7 = v23;
  }
  v24 = r_weapon->weaponAttachments[6];
  v25 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[6]) + 1;
  if ( v25 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v24);
    v7 = v25;
  }
  v26 = r_weapon->weaponAttachments[11];
  v27 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[11]) + 1;
  if ( v27 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v26);
    v7 = v27;
  }
  v28 = r_weapon->weaponAttachments[8];
  v29 = v7 + j_sprintf(_Buffer, "%d", r_weapon->weaponAttachments[8]) + 1;
  if ( v29 < v8 )
  {
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", v28);
    v7 = v29;
  }
  weaponOthers = r_weapon->weaponOthers;
  if ( v7 + j_sprintf(_Buffer, "%d", weaponOthers) + 1 < v8 )
    Com_sprintf(&outString[v7], outStringSize - v7, "%d ", weaponOthers);
}

/*
==============
LUI_DataBinding_Interactions_GetWeaponDisplayName
==============
*/
void LUI_DataBinding_Interactions_GetWeaponDisplayName(LocalClientNum_t localClientNum, const Weapon *r_weapon, char *outString, unsigned __int64 outStringSize)
{
  LocalClientNum_t v4; 
  unsigned __int64 v7; 
  int v8; 
  __int64 v9; 
  ClConfigStrings *ClConfigStrings; 
  const char *v13; 
  const char *v14; 
  __int64 v18; 
  unsigned __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  char dest[64]; 

  v4 = localClientNum;
  CG_GetWeaponDisplayName(r_weapon, 0, outString, outStringSize, 0);
  v7 = -1i64;
  do
    ++v7;
  while ( outString[v7] );
  if ( v7 < outStringSize - 1 )
  {
    v8 = 0;
    v9 = 0i64;
    _R14 = 752i64;
    do
    {
      _RBX = CG_GetLocalClientGlobals(v4);
      if ( (unsigned int)v8 >= 2 )
      {
        LODWORD(v22) = 2;
        LODWORD(v21) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( hintParamIndex ) < (unsigned)( ( sizeof( *array_counter( ps->cursorHintParams.types ) ) + 0 ) )", "hintParamIndex doesn't index ARRAY_COUNT( ps->cursorHintParams.types )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      switch ( _RBX->predictedPlayerState.cursorHintParams.types[v9] )
      {
        case 0:
          goto LABEL_24;
        case 1:
          __asm
          {
            vmovss  xmm3, dword ptr [r14+rbx+8]
            vcvtss2sd xmm3, xmm3, xmm3
            vmovq   r9, xmm3
          }
          Com_sprintf(dest, 0x40ui64, "%f", *(double *)&_XMM3);
          break;
        case 2:
          Com_sprintf(dest, 0x40ui64, "%d", *(unsigned int *)((char *)&_RBX->predictedPlayerState.commandTime + _R14));
          break;
        case 3:
          ClConfigStrings = ClConfigStrings::GetClConfigStrings();
          v13 = ClConfigStrings->GetHintString(ClConfigStrings, *(int *)((char *)&_RBX->predictedPlayerState.commandTime + _R14));
          v14 = SEH_LocalizeTextMessage(v13, "ui string", LOCMSG_NOERR);
          if ( v14 )
            v13 = v14;
          Core_strcpy(dest, 0x40ui64, v13);
          break;
        default:
          if ( _RBX->predictedPlayerState.cursorHintParams.types[v9] != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 231, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown hint parameter type") )
            __debugbreak();
          goto LABEL_24;
      }
      v18 = -1i64;
      while ( dest[++v18] != 0 )
        ;
      v20 = v18 + v7 + 1;
      if ( v20 >= outStringSize - 1 )
        return;
      Com_sprintf(&outString[v7], outStringSize - v7, " %s", dest);
      v7 = v20;
LABEL_24:
      v4 = localClientNum;
      ++v8;
      ++v9;
      _R14 += 4i64;
    }
    while ( v8 < 2 );
  }
}

/*
==============
LUI_DataBinding_Interactions_SnapshotUpdate
==============
*/
void LUI_DataBinding_Interactions_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  LUIBinding::PushBool(&s_LUI_DataBinding_CanMantle, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_CanDeployParachute, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_CanCutParachute, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_HasPopup, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_HasButton, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_ButtonStyle, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_ButtonIcon, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_PopupUsesIcon, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_PopupHideButton, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_TargetEntityTag, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_Range, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_Obstructed, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_Operable, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_RequiresMashing, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_RequiresHolding, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_IsHintValid, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_IsBulletWeapon, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_KeyBind, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_Icon, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_ProgressDuration, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_HideProgressBar, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_ProgressEntity, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_TargetEntity, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_WeaponLootIndex, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_WeaponBaseName, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_WeaponName, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_AmmoName, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_WeaponAttachmentsIndexString, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_ContextualPingHintEntityNum, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_ContextualPingHintVisible, localClientNum);
  LUIBinding::PushFloat(&s_LUI_DataBinding_ContextualPingHintWorldPosX, localClientNum);
  LUIBinding::PushFloat(&s_LUI_DataBinding_ContextualPingHintWorldPosY, localClientNum);
  LUIBinding::PushFloat(&s_LUI_DataBinding_ContextualPingHintWorldPosZ, localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_ButtonIcon
==============
*/
bool s_LUI_DataBinding_Get_ButtonIcon(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  int v4; 
  cg_t *LocalClientGlobals; 
  int v7; 
  __int16 cursorHintBinding; 

  v4 = outStringSize;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 11;
  cursorHintBinding = LocalClientGlobals->predictedPlayerState.cursorHintBinding;
  if ( cursorHintBinding )
    v7 = cursorHintBinding;
  return FontIcons_GetIconNameForBindButton(localClientNum, v7, v4, outString);
}

/*
==============
s_LUI_DataBinding_Get_ButtonStyle
==============
*/
_BOOL8 s_LUI_DataBinding_Get_ButtonStyle(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHint == HINT_BUDDY_BOOST;
}

/*
==============
s_LUI_DataBinding_Get_CanCutParachute
==============
*/
bool s_LUI_DataBinding_Get_CanCutParachute(LocalClientNum_t localClientNum)
{
  SkydivePlayerState *p_skydivePlayerState; 
  char v2; 
  bool result; 

  p_skydivePlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.skydivePlayerState;
  result = 0;
  if ( p_skydivePlayerState->state[0] == 3 )
  {
    v2 = p_skydivePlayerState->flags[0];
    if ( (v2 & 0x10) == 0 && (v2 & 0x20) == 0 && p_skydivePlayerState->animState == 2 )
      return 1;
  }
  return result;
}

/*
==============
s_LUI_DataBinding_Get_CanDeployParachute
==============
*/

bool __fastcall s_LUI_DataBinding_Get_CanDeployParachute(LocalClientNum_t localClientNum)
{
  return LUI_DataBinding_Interactions_CanManualDeployParachute(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_CanMantle
==============
*/

bool __fastcall s_LUI_DataBinding_Get_CanMantle(LocalClientNum_t localClientNum)
{
  return LUI_DataBinding_Interactions_CanMantle(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_ContextualPingHintEntityNum
==============
*/
__int64 s_LUI_DataBinding_Get_ContextualPingHintEntityNum(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 result; 
  const ContextualPingTarget *ContextualPingTarget; 
  ContextualPingTargetType type; 
  unsigned int v6; 

  v1 = DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled;
  if ( !DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_contextualPingDetectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 0xFFFFFFFFi64;
  ContextualPingTarget = CG_CalloutMarkerPing_GetContextualPingTarget(localClientNum);
  type = ContextualPingTarget->type;
  if ( ContextualPingTarget->type == 1 )
    return (unsigned int)ContextualPingTarget->data.entity.entNum;
  if ( (unsigned int)(type - 2) <= 1 )
  {
    v6 = UsableKeyEncode(ContextualPingTarget->data.scriptable.scriptableIndex, USE_CLASS_SCRIPTABLE, 0);
    if ( v6 <= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 813, ASSERT_TYPE_ASSERT, "(useKey > ( 2048 ))", (const char *)&queryFormat, "useKey > MAX_GENTITIES") )
      __debugbreak();
    return v6;
  }
  else
  {
    result = 0xFFFFFFFFi64;
    if ( type == Menu )
      return 4294967286i64;
  }
  return result;
}

/*
==============
s_LUI_DataBinding_Get_ContextualPingHintVisible
==============
*/
bool s_LUI_DataBinding_Get_ContextualPingHintVisible(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  char v6; 
  const ContextualPingTarget *ContextualPingTarget; 
  ContextualPingTargetType type; 
  int objectiveIndex; 
  unsigned int scriptableIndex; 

  v2 = DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled;
  if ( !DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_contextualPingDetectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rax+738h]
    }
    if ( !v6 )
    {
      ContextualPingTarget = CG_CalloutMarkerPing_GetContextualPingTarget(localClientNum);
      type = ContextualPingTarget->type;
      if ( ContextualPingTarget->type == 1 )
        return CG_CalloutMarkerPing_CheckSquadPingsForTarget(localClientNum, ContextualPingTarget->data.entity.entNum, 0xFFFFFFFF, -1) == 53;
      if ( (unsigned int)(type - 2) <= 1 )
      {
        scriptableIndex = ContextualPingTarget->data.scriptable.scriptableIndex;
        objectiveIndex = -1;
        return CG_CalloutMarkerPing_CheckSquadPingsForTarget(localClientNum, 2047, scriptableIndex, objectiveIndex) == 53;
      }
      if ( type == Menu )
      {
        objectiveIndex = ContextualPingTarget->data.objective.objectiveIndex;
        scriptableIndex = -1;
        return CG_CalloutMarkerPing_CheckSquadPingsForTarget(localClientNum, 2047, scriptableIndex, objectiveIndex) == 53;
      }
    }
  }
  return 0;
}

/*
==============
s_LUI_DataBinding_Get_ContextualPingHintWorldPosX
==============
*/
float s_LUI_DataBinding_Get_ContextualPingHintWorldPosX(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  const ContextualPingTarget *ContextualPingTarget; 
  vec3_t outDrawPos; 

  v2 = DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled;
  if ( !DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_contextualPingDetectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && (ContextualPingTarget = CG_CalloutMarkerPing_GetContextualPingTarget(localClientNum), ContextualPingTarget->type) && CG_CalloutMarkerPing_GetDrawPos(localClientNum, ContextualPingTarget, &outDrawPos) )
    __asm { vmovss  xmm0, dword ptr [rsp+68h+outDrawPos] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
s_LUI_DataBinding_Get_ContextualPingHintWorldPosY
==============
*/
float s_LUI_DataBinding_Get_ContextualPingHintWorldPosY(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  const ContextualPingTarget *ContextualPingTarget; 
  vec3_t outDrawPos; 

  v2 = DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled;
  if ( !DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_contextualPingDetectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && (ContextualPingTarget = CG_CalloutMarkerPing_GetContextualPingTarget(localClientNum), ContextualPingTarget->type) && CG_CalloutMarkerPing_GetDrawPos(localClientNum, ContextualPingTarget, &outDrawPos) )
    __asm { vmovss  xmm0, dword ptr [rsp+68h+outDrawPos+4] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
s_LUI_DataBinding_Get_ContextualPingHintWorldPosZ
==============
*/
float s_LUI_DataBinding_Get_ContextualPingHintWorldPosZ(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  const ContextualPingTarget *ContextualPingTarget; 
  vec3_t outDrawPos; 

  v2 = DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled;
  if ( !DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "calloutmarkerping_contextualPingDetectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && (ContextualPingTarget = CG_CalloutMarkerPing_GetContextualPingTarget(localClientNum), ContextualPingTarget->type) && CG_CalloutMarkerPing_GetDrawPos(localClientNum, ContextualPingTarget, &outDrawPos) )
    __asm { vmovss  xmm0, dword ptr [rsp+68h+outDrawPos+8] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
s_LUI_DataBinding_Get_HasButton
==============
*/
bool s_LUI_DataBinding_Get_HasButton(LocalClientNum_t localClientNum)
{
  return ((CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHint - 2) & 0xFD) == 0;
}

/*
==============
s_LUI_DataBinding_Get_HasPopup
==============
*/
bool s_LUI_DataBinding_Get_HasPopup(LocalClientNum_t localClientNum)
{
  playerState_s *p_predictedPlayerState; 
  bool CanMantle; 
  bool CanManualDeployParachute; 
  cg_t *LocalClientGlobals; 
  char v6; 
  bool v7; 
  bool v8; 
  centity_t *Entity; 
  bool inAltWeaponMode; 
  bool v15; 
  Weapon result; 
  Weapon r_weapon; 

  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  CanMantle = LUI_DataBinding_Interactions_CanMantle(localClientNum);
  CanManualDeployParachute = LUI_DataBinding_Interactions_CanManualDeployParachute(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0;
  if ( LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] == 3 )
  {
    v6 = LocalClientGlobals->predictedPlayerState.skydivePlayerState.flags[0];
    if ( (v6 & 0x10) == 0 && (v6 & 0x20) == 0 && LocalClientGlobals->predictedPlayerState.skydivePlayerState.animState == 2 )
      v7 = 1;
  }
  v8 = p_predictedPlayerState->cursorHintRange == USE_RANGE && ((p_predictedPlayerState->cursorHint - 1) & 0xFB) == 0 || p_predictedPlayerState->cursorHint == HINT_WEAPON;
  _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0C8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0C8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0C8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  Entity = LUI_DataBinding_Interactions_GetEntity(localClientNum);
  inAltWeaponMode = 0;
  if ( Entity )
    inAltWeaponMode = Entity->nextState.inAltWeaponMode;
  v15 = BG_HideWarningIcons(&r_weapon, inAltWeaponMode);
  return (CanMantle || CanManualDeployParachute || v7 || v8) && !v15;
}

/*
==============
s_LUI_DataBinding_Get_HideProgressBar
==============
*/
bool s_LUI_DataBinding_Get_HideProgressBar(LocalClientNum_t localClientNum)
{
  return (CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHintFlags & 0x20) != 0;
}

/*
==============
s_LUI_DataBinding_Get_Icon
==============
*/
char s_LUI_DataBinding_Get_Icon(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v7; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  CgWeaponMap *Instance; 
  Material *v12; 
  char *outName; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.cursorHint == HINT_BUTTON )
  {
    v7 = DCONST_DVARSTR_hint_button_defaultIconMaterial;
    if ( !DCONST_DVARSTR_hint_button_defaultIconMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hint_button_defaultIconMaterial") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    Core_strcpy(outString, outStringSize, v7->current.string);
    if ( LocalClientGlobals->predictedPlayerState.cursorHintParams.types[0] == 4 && NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_IMAGE, LocalClientGlobals->predictedPlayerState.cursorHintParams.values[0].stringVal, (const char **)&outName) && outName )
    {
      if ( *outName )
        Core_strcpy(outString, outStringSize, outName);
    }
    return 1;
  }
  else
  {
    Entity = LUI_DataBinding_Interactions_GetEntity(localClientNum);
    if ( Entity && (p_nextState = &Entity->nextState, Instance = CgWeaponMap::GetInstance(localClientNum), (v12 = cgMedia.objectiveMaterials[BG_GetWeaponForEntity(Instance, p_nextState)->weaponIdx - 552]) != NULL) )
    {
      Core_strcpy(outString, outStringSize, v12->name);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

/*
==============
s_LUI_DataBinding_Get_IsBulletWeapon
==============
*/

bool __fastcall s_LUI_DataBinding_Get_IsBulletWeapon(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  Weapon result; 
  Weapon r_weapon; 

  _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovd   eax, xmm2 }
  return (_WORD)_RAX && BG_GetWeaponType(&r_weapon, 0) == WEAPTYPE_BULLET;
}

/*
==============
s_LUI_DataBinding_Get_IsHintValid
==============
*/
char s_LUI_DataBinding_Get_IsHintValid(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_KeyBind
==============
*/
char s_LUI_DataBinding_Get_KeyBind(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  int v4; 
  cg_t *LocalClientGlobals; 
  const char *v7; 
  __int16 cursorHintBinding; 
  int v9; 
  const char *CommandForBinding; 

  v4 = outStringSize;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 609, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( CL_Input_IsGamepadEnabled(localClientNum) )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = "COMMON";
  cursorHintBinding = LocalClientGlobals->predictedPlayerState.cursorHintBinding;
  if ( cursorHintBinding )
  {
    v9 = cursorHintBinding;
    v7 = "ONFOOT";
    if ( cursorHintBinding == 69 )
      v7 = "COMMON";
  }
  else
  {
    v9 = 69;
  }
  CommandForBinding = Com_Keys_GetCommandForBinding(v9);
  Com_sprintf(outString, v4, "^3[{%s:%s}]", v7, CommandForBinding);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_Obstructed
==============
*/
bool s_LUI_DataBinding_Get_Obstructed(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHintFlags & 1;
}

/*
==============
s_LUI_DataBinding_Get_Operable
==============
*/
bool s_LUI_DataBinding_Get_Operable(LocalClientNum_t localClientNum)
{
  return (CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHintFlags & 8) == 0;
}

/*
==============
s_LUI_DataBinding_Get_PopupHideButton
==============
*/
bool s_LUI_DataBinding_Get_PopupHideButton(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHint == HINT_NOBUTTON;
}

/*
==============
s_LUI_DataBinding_Get_PopupUsesIcon
==============
*/

bool __fastcall s_LUI_DataBinding_Get_PopupUsesIcon(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  cg_t *LocalClientGlobals; 
  bool v8; 
  Weapon result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovd   ecx, xmm2
  }
  v8 = 0;
  if ( (_WORD)_ECX )
    v8 = cgMedia.objectiveMaterials[(unsigned __int16)_ECX - 552] != NULL;
  return !LocalClientGlobals->predictedPlayerState.throwbackGrenadeTimeLeft && v8;
}

/*
==============
s_LUI_DataBinding_Get_Progress
==============
*/

double __fastcall s_LUI_DataBinding_Get_Progress(LocalClientNum_t localClientNum, double _XMM1_8)
{
  cg_t *LocalClientGlobals; 
  int UseHoldTime; 

  CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _ESI = LocalClientGlobals->predictedPlayerState.cursorHintProgressStartTime;
  UseHoldTime = BG_PlayerUse_GetUseHoldTime((const HintHoldDuration)LocalClientGlobals->predictedPlayerState.cursorHintProgressDuration);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm5, xmm5, xmm5
  }
  if ( UseHoldTime <= 0 )
  {
    __asm { vmovd   xmm0, esi }
    _EAX = 0;
    __asm
    {
      vmovd   xmm3, eax
      vpcmpeqd xmm4, xmm0, xmm3
      vblendvps xmm0, xmm2, xmm5, xmm4; val
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm0, xmm1, xmm0
    }
  }
  __asm { vxorps  xmm1, xmm1, xmm1; min }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
s_LUI_DataBinding_Get_ProgressDuration
==============
*/
int s_LUI_DataBinding_Get_ProgressDuration(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return BG_PlayerUse_GetUseHoldTime((const HintHoldDuration)LocalClientGlobals->predictedPlayerState.cursorHintProgressDuration);
}

/*
==============
s_LUI_DataBinding_Get_ProgressEntity
==============
*/
__int64 s_LUI_DataBinding_Get_ProgressEntity(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int v3; 
  unsigned int v4; 
  int cursorHintProgressEntIndex; 
  centity_t *Entity; 
  unsigned int v8; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.cursorHintProgressClass == USE_CLASS_GENTITY )
  {
    cursorHintProgressEntIndex = LocalClientGlobals->predictedPlayerState.cursorHintProgressEntIndex;
    if ( cursorHintProgressEntIndex != 2047 )
    {
      Entity = CG_GetEntity(localClientNum, cursorHintProgressEntIndex);
      if ( (Entity->flags & 1) != 0 )
        return (unsigned int)Entity->nextState.number;
    }
    return 2047i64;
  }
  if ( LocalClientGlobals->predictedPlayerState.cursorHintProgressClass != USE_CLASS_SCRIPTABLE )
    return 2047i64;
  v3 = UsableKeyEncode(LocalClientGlobals->predictedPlayerState.cursorHintProgressEntIndex, USE_CLASS_SCRIPTABLE, LocalClientGlobals->predictedPlayerState.cursorHintProgressData);
  v4 = v3;
  if ( v3 <= 0x800 )
  {
    v8 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 783, ASSERT_TYPE_ASSERT, "( useKey > ( 2048 ) )", "We encode the class 16 bits above the index and cursorHintClass is non zero, this should always be true (%i)", v8) )
      __debugbreak();
  }
  return v4;
}

/*
==============
s_LUI_DataBinding_Get_Range
==============
*/
__int64 s_LUI_DataBinding_Get_Range(LocalClientNum_t localClientNum)
{
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHintRange;
}

/*
==============
s_LUI_DataBinding_Get_RequiresHolding
==============
*/
bool s_LUI_DataBinding_Get_RequiresHolding(LocalClientNum_t localClientNum)
{
  return (CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHintFlags & 4) != 0;
}

/*
==============
s_LUI_DataBinding_Get_RequiresMashing
==============
*/
bool s_LUI_DataBinding_Get_RequiresMashing(LocalClientNum_t localClientNum)
{
  return (CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHintFlags & 2) != 0;
}

/*
==============
s_LUI_DataBinding_Get_String
==============
*/
char s_LUI_DataBinding_Get_String(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  cg_t *v17; 
  const char *v18; 
  Weapon v20; 
  Weapon result; 
  Weapon r_weapon; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+108h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+108h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+108h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( !(_WORD)_RAX )
  {
    if ( LocalClientGlobals->predictedPlayerState.cursorHint )
      goto LABEL_3;
LABEL_11:
    *outString = 0;
    return 1;
  }
  if ( BG_GetWeaponClass(&r_weapon, 0) != WEAPCLASS_TURRET )
  {
    _RAX = LUI_DataBinding_Interactions_GetWeapon(&v20, localClientNum);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+108h+result.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+108h+result.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+108h+result.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&result.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    Entity = LUI_DataBinding_Interactions_GetEntity(localClientNum);
    if ( !Entity || Entity->nextState.eType != ET_MISSILE || BG_GetWeaponClass(&result, 0) == WEAPCLASS_THROWINGKNIFE )
    {
      LUI_DataBinding_Interactions_GetWeaponDisplayName(localClientNum, &result, outString, outStringSize);
      return 1;
    }
    v17 = CG_GetLocalClientGlobals(localClientNum);
    if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v17->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x33u) )
    {
      v18 = UI_SafeTranslateString("PLATFORM/THROWBACKGRENADE");
      Core_strcpy(outString, outStringSize, v18);
      return 1;
    }
    goto LABEL_11;
  }
LABEL_3:
  LUI_DataBinding_Interactions_GetObjectString(localClientNum, outString, outStringSize);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_TargetEntity
==============
*/
__int64 s_LUI_DataBinding_Get_TargetEntity(LocalClientNum_t localClientNum)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  Entity = LUI_DataBinding_Interactions_GetEntity(localClientNum);
  if ( Entity )
    return (unsigned int)Entity->nextState.number;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.cursorHintClass == USE_CLASS_SCRIPTABLE )
  {
    v5 = UsableKeyEncode(LocalClientGlobals->predictedPlayerState.cursorHintEntIndex, USE_CLASS_SCRIPTABLE, LocalClientGlobals->predictedPlayerState.cursorHintData);
    v6 = v5;
    if ( v5 <= 0x800 )
    {
      v7 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_interactions.cpp", 104, ASSERT_TYPE_ASSERT, "( useKey > ( 2048 ) )", "We encode the class 16 bits above the index and cursorHintClass is non zero, this should always be true (%i)", v7) )
      {
        __debugbreak();
        return v6;
      }
    }
  }
  else
  {
    return 2047;
  }
  return v6;
}

/*
==============
s_LUI_DataBinding_Get_TargetEntityTag
==============
*/
__int64 s_LUI_DataBinding_Get_TargetEntityTag(LocalClientNum_t localClientNum)
{
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.cursorHintTag;
}

/*
==============
s_LUI_DataBinding_Get_WeaponBaseName
==============
*/
bool s_LUI_DataBinding_Get_WeaponBaseName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  int v5; 
  __int64 v6; 
  bool v7; 
  const char ***v8; 
  Weapon result; 

  *outString = 0;
  v5 = *(_DWORD *)&LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum)->weaponIdx;
  if ( (_WORD)v5 )
  {
    v6 = (unsigned __int16)v5;
    if ( (unsigned __int16)v5 > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", (unsigned __int16)v5, bg_lastParsedWeaponIndex) )
      __debugbreak();
    v7 = bg_weaponCompleteDefs[v6] == NULL;
    v8 = (const char ***)&bg_weaponCompleteDefs[v6];
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    Core_strcpy(outString, outStringSize, **v8);
    LOBYTE(v5) = 1;
  }
  return v5;
}

/*
==============
s_LUI_DataBinding_Get_WeaponLootIndex
==============
*/

__int64 __fastcall s_LUI_DataBinding_Get_WeaponLootIndex(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  int v6; 
  Weapon result; 

  _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum);
  __asm { vmovups ymm2, ymmword ptr [rax] }
  v6 = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( (_WORD)_RAX && BYTE1(v6) )
    return (unsigned int)BYTE1(v6) - 1;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
s_LUI_DataBinding_Get_WeaponName
==============
*/
bool s_LUI_DataBinding_Get_WeaponName(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  unsigned int v4; 
  Weapon result; 
  Weapon r_weapon; 

  v4 = outStringSize;
  *outString = 0;
  _RAX = LUI_DataBinding_Interactions_GetWeapon(&result, localClientNum);
  __asm
  {
    vmovups ymm2, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm2
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm0
    vmovsd  xmm1, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  __asm { vmovd   eax, xmm2 }
  if ( (_WORD)_EAX )
  {
    BG_GetWeaponName(&r_weapon, outString, v4);
    LOBYTE(_EAX) = 1;
  }
  return _EAX;
}

