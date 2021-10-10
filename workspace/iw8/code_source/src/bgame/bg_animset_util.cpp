/*
==============
BG_Animset_GetAnimFromIndex
==============
*/

scr_anim_t __fastcall BG_Animset_GetAnimFromIndex(const scr_string_t animsetName, const scr_string_t stateName, int index)
{
  return ?BG_Animset_GetAnimFromIndex@@YA?BUscr_anim_t@@W4scr_string_t@@0H@Z(animsetName, stateName, index);
}

/*
==============
BG_Animset_GetNumEntriesForStateIndex
==============
*/

int __fastcall BG_Animset_GetNumEntriesForStateIndex(const Animset *animset, int stateIndex)
{
  return ?BG_Animset_GetNumEntriesForStateIndex@@YAHPEBUAnimset@@H@Z(animset, stateIndex);
}

/*
==============
BG_Animset_IsStateExecutionAttacker
==============
*/

bool __fastcall BG_Animset_IsStateExecutionAttacker(const Animset *pAnimset, int stateIndex)
{
  return ?BG_Animset_IsStateExecutionAttacker@@YA_NPEBUAnimset@@H@Z(pAnimset, stateIndex);
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/

void __fastcall BG_Animset_GetAnimIndexFromStateIndexAndEntry(const scr_string_t animsetName, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID)
{
  ?BG_Animset_GetAnimIndexFromStateIndexAndEntry@@YAXW4scr_string_t@@HHPEAI1PEAW4XAnimSubTreeID@@PEAW4XAnimCurveID@@@Z(animsetName, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimCurveID);
}

/*
==============
BG_Animset_GetStartStateAndEntry
==============
*/

void __fastcall BG_Animset_GetStartStateAndEntry(const scr_string_t animsetName, int *pOutStartState, int *pOutStartEntry)
{
  ?BG_Animset_GetStartStateAndEntry@@YAXW4scr_string_t@@PEAH1@Z(animsetName, pOutStartState, pOutStartEntry);
}

/*
==============
BG_Animset_GetStateInfoByIndex
==============
*/

bool __fastcall BG_Animset_GetStateInfoByIndex(const scr_string_t animsetName, int stateIndex, AnimsetState **outState)
{
  return ?BG_Animset_GetStateInfoByIndex@@YA_NW4scr_string_t@@HPEAPEAUAnimsetState@@@Z(animsetName, stateIndex, outState);
}

/*
==============
BG_Animset_GetAlwaysOnState
==============
*/

bool __fastcall BG_Animset_GetAlwaysOnState(const Animset *pAnimset, int *pOutAlwaysOnState)
{
  return ?BG_Animset_GetAlwaysOnState@@YA_NPEBUAnimset@@PEAH@Z(pAnimset, pOutAlwaysOnState);
}

/*
==============
Animset_InitAnims
==============
*/

void __fastcall Animset_InitAnims(int user, bool isFullInit)
{
  ?Animset_InitAnims@@YAXH_N@Z(user, isFullInit);
}

/*
==============
BG_Animset_GetClearKnob
==============
*/

unsigned int __fastcall BG_Animset_GetClearKnob(const scr_string_t animsetName)
{
  return ?BG_Animset_GetClearKnob@@YAIW4scr_string_t@@@Z(animsetName);
}

/*
==============
BG_Animset_IsLoaded
==============
*/

bool __fastcall BG_Animset_IsLoaded(const scr_string_t animsetName)
{
  return ?BG_Animset_IsLoaded@@YA_NW4scr_string_t@@@Z(animsetName);
}

/*
==============
BG_Animset_GetAllAnimIndicesForAlias
==============
*/

int __fastcall BG_Animset_GetAllAnimIndicesForAlias(const scr_string_t animsetName, const scr_string_t stateName, const scr_string_t aliasName, int *pIndices, unsigned int maxIndices)
{
  return ?BG_Animset_GetAllAnimIndicesForAlias@@YAHW4scr_string_t@@00PEAHI@Z(animsetName, stateName, aliasName, pIndices, maxIndices);
}

/*
==============
BG_Animset_GetNumStates
==============
*/

int __fastcall BG_Animset_GetNumStates(const scr_string_t animsetName)
{
  return ?BG_Animset_GetNumStates@@YAHW4scr_string_t@@@Z(animsetName);
}

/*
==============
BG_Animset_GetAnimFromIndex
==============
*/

scr_anim_t __fastcall BG_Animset_GetAnimFromIndex(const Animset *animset, const scr_string_t stateName, int index)
{
  return ?BG_Animset_GetAnimFromIndex@@YA?BUscr_anim_t@@PEBUAnimset@@W4scr_string_t@@H@Z(animset, stateName, index);
}

/*
==============
Animset_Register
==============
*/

Animset *__fastcall Animset_Register(const char *name)
{
  return ?Animset_Register@@YAPEAUAnimset@@PEBD@Z(name);
}

/*
==============
BG_Animset_GetStateInfoByIndex
==============
*/

bool __fastcall BG_Animset_GetStateInfoByIndex(const Animset *pAnimset, int stateIndex, AnimsetState **outState)
{
  return ?BG_Animset_GetStateInfoByIndex@@YA_NPEBUAnimset@@HPEAPEAUAnimsetState@@@Z(pAnimset, stateIndex, outState);
}

/*
==============
BG_Animset_GetAddonAnimsFromState
==============
*/

bool __fastcall BG_Animset_GetAddonAnimsFromState(const scr_string_t animsetName, int stateIndex, int entryIndex, AnimsetStateType addonType, const scr_string_t *aliases, int numAliases, int *outAnimIndices)
{
  return ?BG_Animset_GetAddonAnimsFromState@@YA_NW4scr_string_t@@HHW4AnimsetStateType@@PEBW41@HPEAH@Z(animsetName, stateIndex, entryIndex, addonType, aliases, numAliases, outAnimIndices);
}

/*
==============
BG_Animset_GetNumEntriesForStateIndex
==============
*/

int __fastcall BG_Animset_GetNumEntriesForStateIndex(const scr_string_t animsetName, int stateIndex)
{
  return ?BG_Animset_GetNumEntriesForStateIndex@@YAHW4scr_string_t@@H@Z(animsetName, stateIndex);
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/

void __fastcall BG_Animset_GetAnimIndexFromStateIndexAndEntry(const scr_string_t animsetName, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, const XAnim_s **pSubtreeAnims)
{
  ?BG_Animset_GetAnimIndexFromStateIndexAndEntry@@YAXW4scr_string_t@@HHPEAI1PEAPEBUXAnim_s@@@Z(animsetName, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pSubtreeAnims);
}

/*
==============
BG_Animset_IsStateExecutionVictim
==============
*/

bool __fastcall BG_Animset_IsStateExecutionVictim(const Animset *pAnimset, int stateIndex)
{
  return ?BG_Animset_IsStateExecutionVictim@@YA_NPEBUAnimset@@H@Z(pAnimset, stateIndex);
}

/*
==============
BG_Animset_GetAliasAndAnimFromStateIndexAndEntry
==============
*/

void __fastcall BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(const Animset *pAnimset, int stateIndex, int entryIndex, const AnimsetAlias **ppOutAlias, const AnimsetAnim **ppOutAnim)
{
  ?BG_Animset_GetAliasAndAnimFromStateIndexAndEntry@@YAXPEBUAnimset@@HHPEAPEBUAnimsetAlias@@PEAPEBUAnimsetAnim@@@Z(pAnimset, stateIndex, entryIndex, ppOutAlias, ppOutAnim);
}

/*
==============
BG_Animset_GetAddonAnimFromState
==============
*/

bool __fastcall BG_Animset_GetAddonAnimFromState(const scr_string_t animsetName, int stateIndex, int entryIndex, AnimsetStateType addonType, const scr_string_t alias, scr_anim_t *outAnim)
{
  return ?BG_Animset_GetAddonAnimFromState@@YA_NW4scr_string_t@@HHW4AnimsetStateType@@0PEAUscr_anim_t@@@Z(animsetName, stateIndex, entryIndex, addonType, alias, outAnim);
}

/*
==============
PlayerAnimset_ValidateAnimTrees
==============
*/

void PlayerAnimset_ValidateAnimTrees(void)
{
  ?PlayerAnimset_ValidateAnimTrees@@YAXXZ();
}

/*
==============
BG_Animset_IsAnimEntryValid
==============
*/

bool __fastcall BG_Animset_IsAnimEntryValid(const scr_string_t animsetName, const unsigned int stateIndex, const unsigned int entryIndex)
{
  return ?BG_Animset_IsAnimEntryValid@@YA_NW4scr_string_t@@II@Z(animsetName, stateIndex, entryIndex);
}

/*
==============
BG_Animset_GetCompleteAliasInfo
==============
*/

bool __fastcall BG_Animset_GetCompleteAliasInfo(const scr_string_t animsetName, const scr_string_t stateName, const scr_string_t aliasName, AnimsetAlias **outAlias)
{
  return ?BG_Animset_GetCompleteAliasInfo@@YA_NW4scr_string_t@@00PEAPEAUAnimsetAlias@@@Z(animsetName, stateName, aliasName, outAlias);
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/

void __fastcall BG_Animset_GetAnimIndexFromStateIndexAndEntry(const Animset *pAnimset, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, const XAnim_s **pSubtreeAnims)
{
  ?BG_Animset_GetAnimIndexFromStateIndexAndEntry@@YAXPEBUAnimset@@HHPEAI1PEAPEBUXAnim_s@@@Z(pAnimset, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pSubtreeAnims);
}

/*
==============
BG_Animset_GetAlwaysOnState
==============
*/

bool __fastcall BG_Animset_GetAlwaysOnState(const scr_string_t animsetName, int *pOutAlwaysOnState)
{
  return ?BG_Animset_GetAlwaysOnState@@YA_NW4scr_string_t@@PEAH@Z(animsetName, pOutAlwaysOnState);
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/

void __fastcall BG_Animset_GetAnimIndexFromStateIndexAndEntry(const scr_string_t animsetName, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID, int *pOutAnimtreeIndex, int user)
{
  ?BG_Animset_GetAnimIndexFromStateIndexAndEntry@@YAXW4scr_string_t@@HHPEAI1PEAW4XAnimSubTreeID@@PEAW4XAnimCurveID@@PEAHH@Z(animsetName, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimCurveID, pOutAnimtreeIndex, user);
}

/*
==============
BG_Animset_GetStateInfoByName
==============
*/

bool __fastcall BG_Animset_GetStateInfoByName(const scr_string_t animsetName, const scr_string_t stateName, AnimsetState **outState, int *pOutStateIndex)
{
  return ?BG_Animset_GetStateInfoByName@@YA_NW4scr_string_t@@0PEAPEAUAnimsetState@@PEAH@Z(animsetName, stateName, outState, pOutStateIndex);
}

/*
==============
BG_Animset_GetAddonFromState
==============
*/

bool __fastcall BG_Animset_GetAddonFromState(const Animset *pAnimset, const AnimsetState *pState, int entryIndex, AnimsetStateType addonType, AnimsetState **outState)
{
  return ?BG_Animset_GetAddonFromState@@YA_NPEBUAnimset@@PEBUAnimsetState@@HW4AnimsetStateType@@PEAPEAU2@@Z(pAnimset, pState, entryIndex, addonType, outState);
}

/*
==============
BG_Animset_GetNumEntriesForState
==============
*/

int __fastcall BG_Animset_GetNumEntriesForState(const scr_string_t animsetName, const scr_string_t stateName)
{
  return ?BG_Animset_GetNumEntriesForState@@YAHW4scr_string_t@@0@Z(animsetName, stateName);
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/

void __fastcall BG_Animset_GetAnimIndexFromStateIndexAndEntry(const Animset *pAnimset, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID)
{
  ?BG_Animset_GetAnimIndexFromStateIndexAndEntry@@YAXPEBUAnimset@@HHPEAI1PEAW4XAnimSubTreeID@@PEAW4XAnimCurveID@@@Z(pAnimset, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimCurveID);
}

/*
==============
Animset_Register
==============
*/

void __fastcall Animset_Register(Animset *pAnimset)
{
  ?Animset_Register@@YAXPEAUAnimset@@@Z(pAnimset);
}

/*
==============
PlayerAnimset_ValidateAddons
==============
*/

void __fastcall PlayerAnimset_ValidateAddons(unsigned int animClassIndex, const Animset *const pAnimset, XAnim_s *const anims, unsigned int stateIndex, const AnimsetAlias *const alias)
{
  ?PlayerAnimset_ValidateAddons@@YAXIQEBUAnimset@@QEAUXAnim_s@@IQEBUAnimsetAlias@@@Z(animClassIndex, pAnimset, anims, stateIndex, alias);
}

/*
==============
BG_Animset_GetNodeLeanAimPitchOffset
==============
*/

double __fastcall BG_Animset_GetNodeLeanAimPitchOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  double result; 

  *(float *)&result = ?BG_Animset_GetNodeLeanAimPitchOffset@@YAMW4scr_string_t@@0@Z(animsetName, nodeType);
  return result;
}

/*
==============
BG_Animset_GetStateNameFromIndex
==============
*/

scr_string_t __fastcall BG_Animset_GetStateNameFromIndex(const Animset *pAnimset, int index)
{
  return ?BG_Animset_GetStateNameFromIndex@@YA?AW4scr_string_t@@PEBUAnimset@@H@Z(pAnimset, index);
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/

void __fastcall BG_Animset_GetAnimIndexFromStateIndexAndEntry(const Animset *pAnimset, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID, int *pOutAnimtreeIndex, int user)
{
  ?BG_Animset_GetAnimIndexFromStateIndexAndEntry@@YAXPEBUAnimset@@HHPEAI1PEAW4XAnimSubTreeID@@PEAW4XAnimCurveID@@PEAHH@Z(pAnimset, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimCurveID, pOutAnimtreeIndex, user);
}

/*
==============
Animset_FindDefault
==============
*/

const Animset *__fastcall Animset_FindDefault()
{
  return ?Animset_FindDefault@@YAPEBUAnimset@@XZ();
}

/*
==============
BG_Animset_GetNodeHideYawOffset
==============
*/

double __fastcall BG_Animset_GetNodeHideYawOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  double result; 

  *(float *)&result = ?BG_Animset_GetNodeHideYawOffset@@YAMW4scr_string_t@@0@Z(animsetName, nodeType);
  return result;
}

/*
==============
BG_Animset_GetNodeLeanAimYawOffset
==============
*/

double __fastcall BG_Animset_GetNodeLeanAimYawOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  double result; 

  *(float *)&result = ?BG_Animset_GetNodeLeanAimYawOffset@@YAMW4scr_string_t@@0@Z(animsetName, nodeType);
  return result;
}

/*
==============
PlayerAnimset_FindPatchAlias
==============
*/

const AnimsetAlias *__fastcall PlayerAnimset_FindPatchAlias(const Animset *animset, scr_string_t stateName, scr_string_t aliasName)
{
  return ?PlayerAnimset_FindPatchAlias@@YAPEBUAnimsetAlias@@PEBUAnimset@@W4scr_string_t@@1@Z(animset, stateName, aliasName);
}

/*
==============
BG_Animset_GetAddonAnimsFromState
==============
*/

bool __fastcall BG_Animset_GetAddonAnimsFromState(const scr_string_t animsetName, int stateIndex, int entryIndex, AnimsetStateType addonType, bool bMatchSubtree, XAnimSubTreeID subtreeID, const scr_string_t *aliases, int numAliases, int *outAnimIndices)
{
  return ?BG_Animset_GetAddonAnimsFromState@@YA_NW4scr_string_t@@HHW4AnimsetStateType@@_NW4XAnimSubTreeID@@PEBW41@HPEAH@Z(animsetName, stateIndex, entryIndex, addonType, bMatchSubtree, subtreeID, aliases, numAliases, outAnimIndices);
}

/*
==============
Animset_Release
==============
*/

void __fastcall Animset_Release(Animset *pAnimset, bool unloadPackFileData)
{
  ?Animset_Release@@YAXPEAUAnimset@@_N@Z(pAnimset, unloadPackFileData);
}

/*
==============
BG_Animset_GetCompleteAliasInfo
==============
*/

bool __fastcall BG_Animset_GetCompleteAliasInfo(const Animset *pAnimset, const AnimsetState *pState, const scr_string_t aliasName, AnimsetAlias **outAlias)
{
  return ?BG_Animset_GetCompleteAliasInfo@@YA_NPEBUAnimset@@PEBUAnimsetState@@W4scr_string_t@@PEAPEAUAnimsetAlias@@@Z(pAnimset, pState, aliasName, outAlias);
}

/*
==============
BG_Animset_GetClearKnob
==============
*/

unsigned int __fastcall BG_Animset_GetClearKnob(const Animset *pAnimset)
{
  return ?BG_Animset_GetClearKnob@@YAIPEBUAnimset@@@Z(pAnimset);
}

/*
==============
BG_Animset_GetStateNameFromIndex
==============
*/

scr_string_t __fastcall BG_Animset_GetStateNameFromIndex(const scr_string_t animsetName, int index)
{
  return ?BG_Animset_GetStateNameFromIndex@@YA?AW4scr_string_t@@W41@H@Z(animsetName, index);
}

/*
==============
BG_Animset_GetAlwaysOnInDeathState
==============
*/

bool __fastcall BG_Animset_GetAlwaysOnInDeathState(const Animset *pAnimset, int *pOutAlwaysOnInDeathState)
{
  return ?BG_Animset_GetAlwaysOnInDeathState@@YA_NPEBUAnimset@@PEAH@Z(pAnimset, pOutAlwaysOnInDeathState);
}

/*
==============
Animset_Find
==============
*/

Animset *__fastcall Animset_Find(const scr_string_t name)
{
  return ?Animset_Find@@YAPEAUAnimset@@W4scr_string_t@@@Z(name);
}

/*
==============
BG_Animset_GetAnimTree
==============
*/

scr_string_t __fastcall BG_Animset_GetAnimTree(const scr_string_t animsetName)
{
  return ?BG_Animset_GetAnimTree@@YA?AW4scr_string_t@@W41@@Z(animsetName);
}

/*
==============
BG_Animset_GetAnimController
==============
*/

AnimationController __fastcall BG_Animset_GetAnimController(const scr_string_t animsetName)
{
  return ?BG_Animset_GetAnimController@@YA?AW4AnimationController@@W4scr_string_t@@@Z(animsetName);
}

/*
==============
AnimsetSP_ClonePlayerAnimTreesFromServer
==============
*/

void AnimsetSP_ClonePlayerAnimTreesFromServer(void)
{
  ?AnimsetSP_ClonePlayerAnimTreesFromServer@@YAXXZ();
}

/*
==============
BG_Animset_GetAddonAnimFromBlendtree
==============
*/

bool __fastcall BG_Animset_GetAddonAnimFromBlendtree(const scr_string_t animsetName, int stateIndex, int entryIndex, AnimsetStateType addonType, const scr_string_t alias, const scr_string_t blendtreeName, scr_anim_t *outAnim, XAnimSubTreeID *outSubtreeID)
{
  return ?BG_Animset_GetAddonAnimFromBlendtree@@YA_NW4scr_string_t@@HHW4AnimsetStateType@@00PEAUscr_anim_t@@PEAW4XAnimSubTreeID@@@Z(animsetName, stateIndex, entryIndex, addonType, alias, blendtreeName, outAnim, outSubtreeID);
}

/*
==============
PlayerAnimset_FindPatchAnimset
==============
*/

const Animset *__fastcall PlayerAnimset_FindPatchAnimset(const Animset *baseAnimSet)
{
  return ?PlayerAnimset_FindPatchAnimset@@YAPEBUAnimset@@PEBU1@@Z(baseAnimSet);
}

/*
==============
Animset_FindAnimTrees
==============
*/

void __fastcall Animset_FindAnimTrees(int animUser)
{
  ?Animset_FindAnimTrees@@YAXH@Z(animUser);
}

/*
==============
BG_Animset_GetNodeSnapYawOffset
==============
*/

double __fastcall BG_Animset_GetNodeSnapYawOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  double result; 

  *(float *)&result = ?BG_Animset_GetNodeSnapYawOffset@@YAMW4scr_string_t@@0@Z(animsetName, nodeType);
  return result;
}

/*
==============
BG_Animset_GetStateInfoByName
==============
*/

bool __fastcall BG_Animset_GetStateInfoByName(const Animset *animset, const scr_string_t stateName, AnimsetState **outState, int *pOutStateIndex)
{
  return ?BG_Animset_GetStateInfoByName@@YA_NPEBUAnimset@@W4scr_string_t@@PEAPEAUAnimsetState@@PEAH@Z(animset, stateName, outState, pOutStateIndex);
}

/*
==============
AnimsetStateCache::AnimsetStateCache
==============
*/

void __fastcall AnimsetStateCache::AnimsetStateCache(AnimsetStateCache *this)
{
  ??0AnimsetStateCache@@QEAA@XZ(this);
}

/*
==============
Animset_Register
==============
*/
Animset *Animset_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_load_obj.cpp", 3522, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_load_obj.cpp", 3513, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_ANIMSET, name, 0).animset;
}

/*
==============
AnimsetStateCache::AnimsetStateCache
==============
*/
void AnimsetStateCache::AnimsetStateCache(AnimsetStateCache *this)
{
  this->animsetName = 0;
  memset_0(this->nameToStateMap, 255, sizeof(this->nameToStateMap));
  this->isEmpty = 1;
}

/*
==============
AnimsetSP_ClonePlayerAnimTreesFromServer
==============
*/
void AnimsetSP_ClonePlayerAnimTreesFromServer(void)
{
  __int64 v0; 
  BgStatic *ActiveStatics; 
  __int64 v2; 
  _QWORD *v3; 
  signed int v4; 
  __int64 v5; 
  __int64 v6; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 684, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tInvalid game mode. SP mode expected.", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v0 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 16i64))(*(_QWORD *)&GStatic::ms_gameStatics);
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 688, ASSERT_TYPE_ASSERT, "(serverBGAnim)", (const char *)&queryFormat, "serverBGAnim") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v2 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 692, ASSERT_TYPE_ASSERT, "(clientBGAnim)", (const char *)&queryFormat, "clientBGAnim") )
    __debugbreak();
  v3 = (_QWORD *)(v2 + 18504);
  v4 = 0;
  v5 = v0 - v2;
  do
  {
    if ( BG_PlayerASM_GetAnimsetNameByIndexNetConst(v4) )
    {
      *v3 = *(_QWORD *)((char *)v3 + v5);
      v6 = *(_QWORD *)((char *)v3 + v5 + 512);
    }
    else
    {
      *v3 = 0i64;
      v6 = 0i64;
    }
    v3[64] = v6;
    ++v4;
    ++v3;
  }
  while ( v4 < 64 );
  if ( PlayerASM_IsEnabled() )
    *(_QWORD *)(v2 + 17712) = *(_QWORD *)(v0 + 17712);
}

/*
==============
Animset_Find
==============
*/
ntl::red_black_tree_node_base *Animset_Find(const scr_string_t name)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  unsigned int v3; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  RawHash = j_SL_GetRawHash(name);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  v3 = RawHash;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( mp_parent[1].m_color < v3 )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || v3 < p_m_endNodeBase[1].m_color )
    return 0i64;
  else
    return p_m_endNodeBase[1].mp_parent;
}

/*
==============
Animset_FindAnimTrees
==============
*/
void Animset_FindAnimTrees(int animUser)
{
  Animset_FindAnimTreesPerMode(ASM_MODE_AI, animUser);
  Animset_FindAnimTreesPerMode(ASM_MODE_PLAYER, animUser);
}

/*
==============
Animset_FindAnimTreesPerMode
==============
*/
void Animset_FindAnimTreesPerMode(const ASM_Mode mode, int animUser)
{
  ASM_Mode v3; 
  BgStatic *ActiveStatics; 
  __int64 v5; 
  scrContext_t *v6; 
  ntl::red_black_tree_node_base **v7; 
  int i; 
  scr_string_t AnimsetNameByIndexNetConst; 
  scr_string_t v10; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v14; 
  scr_string_t mp_parent_high; 
  const char *v16; 
  char *v17; 
  scr_animtree_t v18; 
  XAnim_s *anims; 
  unsigned int v20; 
  ntl::red_black_tree_node_base *v21; 
  ntl::red_black_tree_node_base *v22; 
  ntl::red_black_tree_node_base *v23; 
  unsigned int v24; 
  ntl::red_black_tree_node_base *v25; 
  ntl::red_black_tree_node_base *v26; 
  ntl::red_black_tree_node_base *v27; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v31; 
  scr_string_t v32; 
  const char *v33; 
  char dest[64]; 

  v3 = mode;
  ActiveStatics = BgStatic::GetActiveStatics();
  v5 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 725, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v6 = ScriptContext_GetFromAnimUser(animUser);
  v7 = (ntl::red_black_tree_node_base **)(v5 + 19016);
  for ( i = 0; i < 64; ++i )
  {
    if ( v3 )
      AnimsetNameByIndexNetConst = BG_PlayerASM_GetAnimsetNameByIndexNetConst(i);
    else
      AnimsetNameByIndexNetConst = BG_AnimationState_GetAnimsetNameByIndex(i);
    v10 = AnimsetNameByIndexNetConst;
    if ( !AnimsetNameByIndexNetConst )
      goto LABEL_53;
    RawHash = j_SL_GetRawHash(AnimsetNameByIndexNetConst);
    mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
    p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
    if ( !g_animsetCache.m_endNodeBase.mp_parent )
      goto LABEL_17;
    do
    {
      if ( mp_parent[1].m_color < RawHash )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
LABEL_17:
      v14 = NULL;
    else
      v14 = p_m_endNodeBase[1].mp_parent;
    mp_parent_high = HIDWORD(v14->mp_parent);
    if ( mp_parent_high )
    {
      v16 = SL_ConvertToString(mp_parent_high);
      Core_strcpy(dest, 0x40ui64, v16);
      v17 = strstr_0(dest, ".atr");
      if ( v17 )
        *v17 = 0;
    }
    else
    {
      Core_strcpy(dest, 0x40ui64, "generic_human");
    }
    v18.anims = Scr_FindAnimTree(v6, dest).anims;
    anims = v18.anims;
    if ( v3 )
    {
      v20 = j_SL_GetRawHash(v10);
      v21 = g_animsetCache.m_endNodeBase.mp_parent;
      v22 = &g_animsetCache.m_endNodeBase;
      if ( !g_animsetCache.m_endNodeBase.mp_parent )
        goto LABEL_32;
      do
      {
        if ( v21[1].m_color < v20 )
        {
          v21 = v21->mp_right;
        }
        else
        {
          v22 = v21;
          v21 = v21->mp_left;
        }
      }
      while ( v21 );
      if ( v22 == &g_animsetCache.m_endNodeBase || v20 < v22[1].m_color )
LABEL_32:
        v23 = NULL;
      else
        v23 = v22[1].mp_parent;
      *v7 = v23;
      *(v7 - 64) = (ntl::red_black_tree_node_base *)anims;
    }
    else
    {
      *(v7 - 128) = (ntl::red_black_tree_node_base *)v18.anims;
    }
    v24 = j_SL_GetRawHash(v10);
    v25 = g_animsetCache.m_endNodeBase.mp_parent;
    v26 = &g_animsetCache.m_endNodeBase;
    if ( !g_animsetCache.m_endNodeBase.mp_parent )
      goto LABEL_43;
    do
    {
      if ( v25[1].m_color < v24 )
      {
        v25 = v25->mp_right;
      }
      else
      {
        v26 = v25;
        v25 = v25->mp_left;
      }
    }
    while ( v25 );
    if ( v26 == &g_animsetCache.m_endNodeBase || v24 < v26[1].m_color )
    {
LABEL_43:
      v27 = NULL;
LABEL_44:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 662, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
        __debugbreak();
      goto LABEL_46;
    }
    v27 = v26[1].mp_parent;
    if ( !v27 )
      goto LABEL_44;
LABEL_46:
    v28 = 0;
    if ( LODWORD(v27->mp_right) )
    {
      do
      {
        v29 = 0;
        v30 = (__int64)v27->mp_left + 112 * v28;
        if ( *(_DWORD *)(v30 + 32) )
        {
          do
          {
            v31 = *(_QWORD *)(v30 + 24) + 56i64 * v29;
            v32 = *(_DWORD *)(v31 + 8);
            if ( v32 )
            {
              v33 = SL_ConvertToString(v32);
              *(scr_animtree_t *)(v31 + 40) = Scr_FindAnimTree(v6, v33);
            }
            ++v29;
          }
          while ( v29 < *(_DWORD *)(v30 + 32) );
        }
        ++v28;
      }
      while ( v28 < LODWORD(v27->mp_right) );
      v3 = mode;
    }
LABEL_53:
    ++v7;
  }
}

/*
==============
Animset_FindDefault
==============
*/
ntl::red_black_tree_node_base *Animset_FindDefault()
{
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *result; 

  mp_left = g_animsetCache.m_endNodeBase.mp_left;
  if ( g_animsetCache.m_endNodeBase.mp_left == &g_animsetCache.m_endNodeBase )
    return 0i64;
  while ( 1 )
  {
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    result = mp_left[1].mp_parent;
    if ( result[1].m_color == RB_NODE_COLOR_BLACK )
    {
      if ( LOBYTE(result[1].mp_right[1].m_color) )
        break;
    }
    mp_left = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(mp_left);
    if ( mp_left == &g_animsetCache.m_endNodeBase )
      return 0i64;
  }
  return result;
}

/*
==============
Animset_FindState
==============
*/
AnimsetState *Animset_FindState(const Animset *pAnimset, const scr_string_t stateName)
{
  unsigned __int64 v4; 
  int v5; 
  AnimsetStateCache *v6; 
  __int64 v7; 
  AnimsetStateCache *v8; 
  __int64 v9; 
  __int64 v10; 
  signed int state; 
  unsigned __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 260, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  v4 = 0i64;
  v5 = 0;
  v6 = g_animsetStateMaps;
  while ( v6->animsetName != pAnimset->constName )
  {
    ++v5;
    if ( (__int64)++v6 >= (__int64)&s_animSetHashCollision )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 279, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find state map for animset %s", pAnimset->name) )
        __debugbreak();
      return 0i64;
    }
  }
  v7 = v5;
  if ( g_animsetStateMaps[v7].isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 266, ASSERT_TYPE_ASSERT, "(!g_animsetStateMaps[iMap].isEmpty)", "%s\n\tNo state entries for animset %s", "!g_animsetStateMaps[iMap].isEmpty", pAnimset->name) )
    __debugbreak();
  v8 = &g_animsetStateMaps[v7];
  if ( !stateName || (unsigned int)(16 * stateName) >= 0x800000 )
    return 0i64;
  v9 = j_SL_GetRawHash(stateName) & 0x3FF;
  LOWORD(v10) = v9;
  if ( v8->nameToStateMap[v9].name == stateName )
  {
    ++s_animSetHit;
    state = v8->nameToStateMap[v9].state;
  }
  else
  {
    ++s_animSetHashCollision;
    do
    {
      ++v4;
      v10 = ((_WORD)v10 + 1) & 0x3FF;
      if ( (_DWORD)v10 == (_DWORD)v9 )
      {
        ++s_animSetNotFound;
        return 0i64;
      }
    }
    while ( v8->nameToStateMap[v10].name != stateName );
    v12 = s_animSetMaxLinearSearch;
    if ( v4 > s_animSetMaxLinearSearch )
      v12 = v4;
    s_animSetTotalLinearSearch += v4;
    state = v8->nameToStateMap[v10].state;
    s_animSetMaxLinearSearch = v12;
  }
  if ( state < 0 )
    return 0i64;
  if ( state >= pAnimset->numStates )
  {
    LODWORD(v15) = pAnimset->numStates;
    LODWORD(v14) = state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 274, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  return &pAnimset->states[state];
}

/*
==============
Animset_GetAnimInfo_Internal
==============
*/
bool Animset_GetAnimInfo_Internal(const Animset *animset, const AnimsetState *pState, const scr_string_t aliasName, AnimsetAlias **outAlias)
{
  unsigned int numAnimAliases; 
  __int64 v8; 
  AnimsetAlias *v9; 

  if ( !outAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 935, ASSERT_TYPE_ASSERT, "(outAlias)", (const char *)&queryFormat, "outAlias") )
    __debugbreak();
  if ( !pState )
    return 0;
  numAnimAliases = pState->numAnimAliases;
  v8 = 0i64;
  if ( numAnimAliases )
  {
    while ( 1 )
    {
      v9 = &pState->animAliases[v8];
      if ( v9->name == aliasName )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= numAnimAliases )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v9 = NULL;
  }
  *outAlias = v9;
  return v9 != NULL;
}

/*
==============
Animset_InitAliasList
==============
*/
void Animset_InitAliasList(const char *defaultAnimtreeName, const Animset *pAnimset, AnimsetState *pState, AnimsetAlias *aliasList, int user, const Animset *patchAnimset)
{
  __int64 v6; 
  AnimsetState *v7; 
  const Animset *v8; 
  int v9; 
  const char *v10; 
  AnimsetAlias *v11; 
  unsigned int blenderIndex; 
  scr_string_t blendtreeName; 
  bool v14; 
  scr_string_t name; 
  scr_string_t v16; 
  unsigned int numStates; 
  unsigned int v18; 
  AnimsetState *states; 
  __int64 v20; 
  unsigned int numAnimAliases; 
  __int64 v22; 
  const AnimsetAlias *v23; 
  __int64 i; 
  AnimsetAnim *anims; 
  __int64 v26; 
  scr_string_t v27; 
  const char *v28; 
  scr_string_t animAlias; 
  AnimsetAlias_Union v30; 
  __int64 v31; 
  scr_anim_t *p_anim; 
  const char *v33; 
  scr_string_t v34; 
  scr_string_t v35; 
  __int64 v36; 
  __int64 v37; 
  int v38; 
  const char *v39; 
  AnimsetAlias *v42; 

  v42 = aliasList;
  v39 = defaultAnimtreeName;
  v6 = 0i64;
  v7 = pState;
  v8 = pAnimset;
  v38 = 0;
  if ( pState->numAnimAliases )
  {
    v9 = user;
    do
    {
      v10 = defaultAnimtreeName;
      v11 = &aliasList[v6];
      blenderIndex = v11->blenderIndex;
      if ( blenderIndex != -1 )
      {
        if ( blenderIndex >= v7->numBlendtreeAliases )
        {
          LODWORD(v37) = v7->numBlendtreeAliases;
          LODWORD(v36) = v11->blenderIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 550, ASSERT_TYPE_ASSERT, "(unsigned)( alias->blenderIndex ) < (unsigned)( pState->numBlendtreeAliases )", "alias->blenderIndex doesn't index pState->numBlendtreeAliases\n\t%i not in [0, %i)", v36, v37) )
            __debugbreak();
        }
        blendtreeName = v7->blendtreeAliases[v11->blenderIndex].blendtreeName;
        if ( blendtreeName )
          v10 = SL_ConvertToString(blendtreeName);
      }
      v14 = v8->mode == ASM_MODE_PLAYER && LOBYTE(v11->u.m_AIAnimsetAlias[6].numRedAnims);
      if ( patchAnimset && v14 )
      {
        name = v7->name;
        v16 = v11->name;
        if ( !v7->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 379, ASSERT_TYPE_ASSERT, "(stateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
          __debugbreak();
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 380, ASSERT_TYPE_ASSERT, "(aliasName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "aliasName != NULL_SCR_STRING") )
          __debugbreak();
        if ( !patchAnimset->u.m_AIAnimset->coverLeftCrouchOffset.leanPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 381, ASSERT_TYPE_ASSERT, "(animset->u.m_PlayerAnimset->patchName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "animset->u.m_PlayerAnimset->patchName != NULL_SCR_STRING") )
          __debugbreak();
        numStates = patchAnimset->numStates;
        v18 = 0;
        if ( numStates )
        {
          states = patchAnimset->states;
          while ( 1 )
          {
            v20 = v18;
            if ( states[v20].name == name )
            {
              numAnimAliases = states[v20].numAnimAliases;
              v22 = 0i64;
              if ( numAnimAliases )
                break;
            }
LABEL_30:
            if ( ++v18 >= numStates )
              goto LABEL_34;
          }
          while ( 1 )
          {
            v23 = &states[v20].animAliases[v22];
            if ( v23->name == v16 )
              break;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= numAnimAliases )
              goto LABEL_30;
          }
          if ( v23 )
            PlayerAnimset_PatchAlias(pAnimset, patchAnimset, v11, v23);
LABEL_34:
          v9 = user;
        }
      }
      for ( i = 0i64; (unsigned int)i < v11->numAnims; i = (unsigned int)(i + 1) )
      {
        anims = v11->anims;
        v26 = i;
        v27 = anims[i].name;
        if ( !v14 || v27 )
        {
          v28 = SL_ConvertToString(v27);
          Scr_FindAnim(v10, v28, &anims[v26].anim, v9);
          animAlias = v11->animAlias;
          if ( animAlias )
          {
            if ( v11->anims[v26].name )
              Scr_RegisterAlias(v10, animAlias, v27, v9);
          }
        }
      }
      v8 = pAnimset;
      if ( pAnimset->mode == ASM_MODE_AI )
      {
        v30.m_AIAnimsetAlias = (AIAnimsetAlias *)v11->u;
        v31 = 0i64;
        if ( v30.m_AIAnimsetAlias->numRedAnims )
        {
          do
          {
            p_anim = &v30.m_AIAnimsetAlias->redAnims[v31].anim;
            v33 = SL_ConvertToString(v30.m_AIAnimsetAlias->redAnims[v31].name);
            Scr_FindAnim(v10, v33, p_anim, v9);
            v34 = v11->animAlias;
            if ( v34 )
            {
              v35 = v11->u.m_AIAnimsetAlias->redAnims[v31].name;
              if ( v35 )
                Scr_RegisterAlias(v10, v34, v35, v9);
            }
            v30.m_AIAnimsetAlias = (AIAnimsetAlias *)v11->u;
            v31 = (unsigned int)(v31 + 1);
          }
          while ( (unsigned int)v31 < v30.m_AIAnimsetAlias->numRedAnims );
          v8 = pAnimset;
        }
      }
      v7 = pState;
      v6 = (unsigned int)(v38 + 1);
      aliasList = v42;
      defaultAnimtreeName = v39;
      v38 = v6;
    }
    while ( (unsigned int)v6 < pState->numAnimAliases );
  }
}

/*
==============
Animset_InitAnims
==============
*/
void Animset_InitAnims(int user, bool isFullInit)
{
  ntl::red_black_tree_node_base *mp_left; 
  bool v3; 
  int v4; 
  ntl::red_black_tree_node_base *mp_parent; 
  const Animset *patchAnimset; 
  unsigned int v7; 
  DB_AssetEntryFlags *p_m_headEntries; 
  unsigned int v9; 
  DB_AssetEntryPool *AssetEntryPool; 
  char *v11; 
  __int64 assetCount; 
  const Animset *v13; 
  scr_string_t v14; 
  const char *v15; 
  unsigned int v16; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  unsigned int i; 
  __int64 v21; 
  scr_string_t v22; 
  const char *v23; 
  scr_string_t v24; 
  const char *v25; 
  __int64 v26; 
  scrContext_t *v27; 
  int j; 
  scr_string_t AnimsetNameByIndex; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *v31; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v33; 
  unsigned int v34; 
  ntl::red_black_tree_node_base *v35; 
  unsigned int v36; 
  __int64 v37; 
  ntl::red_black_tree_node_base *v38; 
  scr_string_t v39; 
  scrContext_t *v40; 
  signed int k; 
  scr_string_t AnimsetNameByIndexNetConst; 
  unsigned int v43; 
  ntl::red_black_tree_node_base *v44; 
  ntl::red_black_tree_node_base *v45; 
  ntl::red_black_tree_node_base *v46; 
  unsigned int v47; 
  ntl::red_black_tree_node_base *v48; 
  unsigned int v49; 
  __int64 v50; 
  ntl::red_black_tree_node_base *v51; 
  scr_string_t v52; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *v56; 
  GetAllXAssetFunctor functor; 
  char v58[512]; 

  mp_left = g_animsetCache.m_endNodeBase.mp_left;
  v3 = isFullInit;
  v4 = user;
  next = g_animsetCache.m_endNodeBase.mp_left;
  if ( g_animsetCache.m_endNodeBase.mp_left != &g_animsetCache.m_endNodeBase )
  {
    do
    {
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_parent = mp_left[1].mp_parent;
      patchAnimset = NULL;
      v56 = mp_parent;
      if ( v3 && mp_parent[1].m_color == RB_NODE_COLOR_BLACK && !HIDWORD(mp_parent[1].mp_right->mp_right) )
      {
        functor.type = ASSET_TYPE_ANIMSET;
        functor.assets = (XAssetHeader *)v58;
        functor.assetCount = 0;
        functor.maxCount = 64;
        DB_LockHashRead();
        v7 = 0;
        p_m_headEntries = &s_assetManager.table.m_headEntries;
        v9 = 0;
        AssetEntryPool = DB_GetAssetEntryPool();
        do
        {
          DB_AssetEntryPool::MutableForEachInBlock<GetAllXAssetFunctor>(AssetEntryPool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v7, &functor);
          v7 += 64;
          ++v9;
          p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
        }
        while ( v9 < 0x1768 );
        DB_UnlockHashRead();
        mp_left = next;
        if ( functor.assetCount )
        {
          v11 = v58;
          assetCount = (unsigned int)functor.assetCount;
          do
          {
            v13 = *(const Animset **)v11;
            if ( *(_DWORD *)(*(_QWORD *)v11 + 32i64) == 1 )
            {
              v14 = (scr_string_t)mp_parent->mp_parent;
              if ( v14 == v13->u.m_AIAnimset->coverLeftCrouchOffset.leanPitch )
              {
                if ( patchAnimset )
                {
                  v15 = SL_ConvertToString(v14);
                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AA90, 1347i64, v15);
                }
                patchAnimset = v13;
              }
            }
            v11 += 8;
            --assetCount;
          }
          while ( assetCount );
        }
      }
      v16 = 0;
      v17 = SL_ConvertToString((scr_string_t)HIDWORD(mp_parent->mp_parent));
      if ( LODWORD(mp_parent->mp_right) )
      {
        v18 = user;
        do
        {
          v19 = (__int64)mp_parent->mp_left + 112 * v16;
          Animset_InitAliasList(v17, (const Animset *)mp_parent, (AnimsetState *)v19, *(AnimsetAlias **)(v19 + 8), v18, patchAnimset);
          for ( i = 0; i < *(_DWORD *)(v19 + 32); ++i )
          {
            v21 = *(_QWORD *)(v19 + 24) + 56i64 * i;
            v22 = *(_DWORD *)(v21 + 4);
            if ( v22 )
            {
              v23 = SL_ConvertToString(v22);
              Scr_FindAnim(v17, v23, (scr_anim_t *)(v21 + 32), v18);
            }
          }
          v24 = *(_DWORD *)(v19 + 44);
          if ( v24 )
          {
            v25 = SL_ConvertToString(v24);
            Scr_FindAnim(v17, v25, (scr_anim_t *)(v19 + 48), v18);
          }
          if ( *(_BYTE *)(v19 + 101) && *(_DWORD *)(v19 + 16) == 5 )
          {
            v26 = 0i64;
            do
            {
              if ( (_DWORD)v26 != 2 && *(_DWORD *)(*(_QWORD *)(v19 + 8) + 80 * v26 + 16) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 646, ASSERT_TYPE_ASSERT, "(state->animAliases[iAlias].numAnims == 1)", (const char *)&queryFormat, "state->animAliases[iAlias].numAnims == 1") )
                __debugbreak();
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (unsigned int)v26 < *(_DWORD *)(v19 + 16) );
            mp_parent = v56;
            v18 = user;
          }
          ++v16;
        }
        while ( v16 < LODWORD(mp_parent->mp_right) );
        mp_left = next;
      }
      v3 = isFullInit;
      next = ntl::red_black_tree_node_base::get_next(mp_left);
      mp_left = next;
    }
    while ( next != &g_animsetCache.m_endNodeBase );
    v4 = user;
  }
  v27 = ScriptContext_GetFromAnimUser(v4);
  for ( j = 0; j < 64; ++j )
  {
    AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(j);
    if ( AnimsetNameByIndex )
    {
      RawHash = j_SL_GetRawHash(AnimsetNameByIndex);
      v31 = g_animsetCache.m_endNodeBase.mp_parent;
      p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
      if ( !g_animsetCache.m_endNodeBase.mp_parent )
        goto LABEL_49;
      do
      {
        if ( v31[1].m_color < RawHash )
        {
          v31 = v31->mp_right;
        }
        else
        {
          p_m_endNodeBase = v31;
          v31 = v31->mp_left;
        }
      }
      while ( v31 );
      if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
LABEL_49:
        v33 = NULL;
      else
        v33 = p_m_endNodeBase[1].mp_parent;
      Scr_RegisterSharedParameterAIASMTreeName(v27, SHIDWORD(v33->mp_parent));
      v34 = 0;
      if ( LODWORD(v33->mp_right) )
      {
        v35 = v33->mp_left;
        do
        {
          v36 = 0;
          v37 = 112i64 * v34;
          if ( *(ntl::red_black_tree_node_base::ENodeColor *)((char *)&v35[1].m_color + v37) )
          {
            v38 = v35;
            do
            {
              v39 = *((_DWORD *)&(*(ntl::red_black_tree_node_base **)((char *)&v38->mp_right + v37))->mp_parent + 14 * v36);
              if ( v39 )
              {
                Scr_RegisterSharedParameterAIASMTreeName(v27, v39);
                v35 = v33->mp_left;
                v38 = v35;
              }
              ++v36;
            }
            while ( v36 < *(ntl::red_black_tree_node_base::ENodeColor *)((char *)&v38[1].m_color + v37) );
          }
          ++v34;
        }
        while ( v34 < LODWORD(v33->mp_right) );
      }
    }
  }
  v40 = ScriptContext_GetFromAnimUser(v4);
  for ( k = 0; k < 64; ++k )
  {
    AnimsetNameByIndexNetConst = BG_PlayerASM_GetAnimsetNameByIndexNetConst(k);
    if ( AnimsetNameByIndexNetConst )
    {
      v43 = j_SL_GetRawHash(AnimsetNameByIndexNetConst);
      v44 = g_animsetCache.m_endNodeBase.mp_parent;
      v45 = &g_animsetCache.m_endNodeBase;
      if ( !g_animsetCache.m_endNodeBase.mp_parent )
        goto LABEL_69;
      do
      {
        if ( v44[1].m_color < v43 )
        {
          v44 = v44->mp_right;
        }
        else
        {
          v45 = v44;
          v44 = v44->mp_left;
        }
      }
      while ( v44 );
      if ( v45 == &g_animsetCache.m_endNodeBase || v43 < v45[1].m_color )
LABEL_69:
        v46 = NULL;
      else
        v46 = v45[1].mp_parent;
      Scr_RegisterSharedParameterPlayerTreeName(v40, SHIDWORD(v46->mp_parent));
      v47 = 0;
      if ( LODWORD(v46->mp_right) )
      {
        v48 = v46->mp_left;
        do
        {
          v49 = 0;
          v50 = 112i64 * v47;
          if ( *(ntl::red_black_tree_node_base::ENodeColor *)((char *)&v48[1].m_color + v50) )
          {
            v51 = v48;
            do
            {
              v52 = *((_DWORD *)&(*(ntl::red_black_tree_node_base **)((char *)&v51->mp_right + v50))->mp_parent + 14 * v49);
              if ( v52 )
              {
                Scr_RegisterSharedParameterPlayerTreeName(v40, v52);
                v48 = v46->mp_left;
                v51 = v48;
              }
              ++v49;
            }
            while ( v49 < *(ntl::red_black_tree_node_base::ENodeColor *)((char *)&v51[1].m_color + v50) );
          }
          ++v47;
        }
        while ( v47 < LODWORD(v46->mp_right) );
      }
    }
  }
}

/*
==============
Animset_Register
==============
*/
void Animset_Register(Animset *pAnimset)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  unsigned int v5; 
  bool v6; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v9; 
  signed int v10; 
  int v11; 
  AnimsetStateCache *v12; 
  int v13; 
  AnimsetStateCache *v14; 
  scr_string_t name; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 hintInsertLessElement; 
  ntl::pair<unsigned int,Animset *> r_element; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,Animset *> >,ntl::pair<unsigned int,Animset *> *,ntl::pair<unsigned int,Animset *> &> result; 

  RawHash = j_SL_GetRawHash(pAnimset->constName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  r_element.first = RawHash;
  v5 = RawHash;
  r_element.second = pAnimset;
  v6 = 1;
  while ( mp_parent )
  {
    p_m_endNodeBase = mp_parent;
    v6 = v5 < mp_parent[1].m_color;
    if ( v5 >= mp_parent[1].m_color )
      mp_parent = mp_parent->mp_right;
    else
      mp_parent = mp_parent->mp_left;
  }
  mp_left = p_m_endNodeBase;
  if ( !v6 )
    goto LABEL_21;
  if ( p_m_endNodeBase != g_animsetCache.m_endNodeBase.mp_left )
  {
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_left = p_m_endNodeBase->mp_left;
      if ( mp_left )
      {
        for ( i = mp_left->mp_right; i; i = i->mp_right )
          mp_left = i;
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_left->mp_left )
        {
          do
          {
            v9 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v9 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
LABEL_21:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < v5 )
      ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Animset *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Animset *>>,64,8>,ntl::return_pair_first<unsigned int,Animset *>,ntl::less<unsigned int,unsigned int>>::insert_node(&g_animsetCache, &result, p_m_endNodeBase, &r_element, 0, 0);
    goto LABEL_26;
  }
  ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,Animset *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,Animset *>>,64,8>,ntl::return_pair_first<unsigned int,Animset *>,ntl::less<unsigned int,unsigned int>>::insert_node(&g_animsetCache, &result, p_m_endNodeBase, &r_element, 1, 0);
LABEL_26:
  v10 = 0;
  v11 = 0;
  v12 = g_animsetStateMaps;
  v13 = -1;
  do
  {
    if ( v12->animsetName || v13 >= 0 )
    {
      if ( v12->animsetName == pAnimset->constName )
        return;
    }
    else
    {
      v13 = v11;
    }
    ++v11;
    ++v12;
  }
  while ( v11 < 68 );
  if ( v13 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 156, ASSERT_TYPE_ASSERT, "(iEmptyAnimset >= 0)", "%s\n\tRan out of room in g_aiAnimsetStateMaps", "iEmptyAnimset >= 0") )
    __debugbreak();
  if ( (unsigned int)v13 >= 0x44 )
  {
    LODWORD(hintInsertLessElement) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( iEmptyAnimset ) < (unsigned)( ((1 << 6) + (1 << 2)) )", "iEmptyAnimset doesn't index MAX_ANIMSETS_ALL_MODES_COUNT\n\t%i not in [0, %i)", hintInsertLessElement, 68) )
      __debugbreak();
  }
  v14 = &g_animsetStateMaps[v13];
  v14->animsetName = pAnimset->constName;
  if ( !v14->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 160, ASSERT_TYPE_ASSERT, "(g_animsetStateMaps[ iEmptyAnimset ].isEmpty)", "%s\n\tAttemping to use animset that was not properly cleaned up.", "g_animsetStateMaps[ iEmptyAnimset ].isEmpty") )
    __debugbreak();
  if ( pAnimset->numStates )
  {
    do
    {
      name = pAnimset->states[v10].name;
      if ( v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 101, ASSERT_TYPE_ASSERT, "(state >= 0)", (const char *)&queryFormat, "state >= 0") )
        __debugbreak();
      if ( name && (unsigned int)(16 * name) < 0x800000 )
      {
        v16 = j_SL_GetRawHash(name) & 0x3FF;
        LODWORD(v17) = v16;
        v18 = (unsigned int)v16;
        if ( v14->nameToStateMap[v16].state == -1 )
        {
LABEL_51:
          v14->nameToStateMap[(unsigned int)v17].name = name;
          v14->nameToStateMap[(unsigned int)v17].state = v10;
          v14->isEmpty = 0;
        }
        else
        {
          while ( 1 )
          {
            if ( v14->nameToStateMap[v18].name == name )
            {
              v14->nameToStateMap[v18].state = v10;
              goto LABEL_52;
            }
            v17 = ((_WORD)v17 + 1) & 0x3FF;
            if ( (_DWORD)v17 == (_DWORD)v16 )
              break;
            v18 = (unsigned int)v17;
            if ( v14->nameToStateMap[v17].state == -1 )
              goto LABEL_51;
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 119, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AnimsetStateCache is full") )
            __debugbreak();
        }
      }
LABEL_52:
      ++v10;
    }
    while ( v10 < pAnimset->numStates );
  }
}

/*
==============
Animset_Release
==============
*/
void Animset_Release(Animset *pAnimset, bool unloadPackFileData)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  AnimsetStateCache *v6; 
  int v7; 
  __int64 v8; 
  unsigned int i; 
  AnimsetState *states; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  AnimsetState *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  scr_string_t *v19; 

  if ( unloadPackFileData )
  {
    RawHash = j_SL_GetRawHash(pAnimset->constName);
    mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
    p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
    if ( g_animsetCache.m_endNodeBase.mp_parent )
    {
      do
      {
        if ( mp_parent[1].m_color < RawHash )
        {
          mp_parent = mp_parent->mp_right;
        }
        else
        {
          p_m_endNodeBase = mp_parent;
          mp_parent = mp_parent->mp_left;
        }
      }
      while ( mp_parent );
      if ( p_m_endNodeBase != &g_animsetCache.m_endNodeBase && RawHash >= p_m_endNodeBase[1].m_color )
      {
        if ( !g_animsetCache.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        ntl::red_black_tree_node_base::get_next(p_m_endNodeBase);
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
          __debugbreak();
        if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
          __debugbreak();
        ntl::red_black_tree_node_base::rebalance_for_erase(p_m_endNodeBase, &g_animsetCache.m_endNodeBase.mp_parent, &g_animsetCache.m_endNodeBase.mp_left, &g_animsetCache.m_endNodeBase.mp_right);
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        *(_QWORD *)&p_m_endNodeBase->m_color = g_animsetCache.m_freelist.m_head.mp_next;
        --g_animsetCache.m_size;
        g_animsetCache.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_endNodeBase;
      }
    }
    v6 = g_animsetStateMaps;
    v7 = 0;
    while ( v6->animsetName != pAnimset->constName )
    {
      ++v7;
      if ( (__int64)++v6 >= (__int64)&s_animSetHashCollision )
        goto LABEL_30;
    }
    v8 = v7;
    g_animsetStateMaps[v8].animsetName = 0;
    memset_0(g_animsetStateMaps[v8].nameToStateMap, 255, sizeof(g_animsetStateMaps[v8].nameToStateMap));
    g_animsetStateMaps[v8].isEmpty = 1;
LABEL_30:
    if ( pAnimset->mode == ASM_MODE_PLAYER )
    {
      for ( i = 0; i < pAnimset->numStates; ++i )
      {
        states = pAnimset->states;
        v11 = 0i64;
        v12 = 112i64 * i;
        if ( states[(unsigned __int64)v12 / 0x70].numAnimAliases )
        {
          v13 = v12 + 8;
          v14 = v12 + 16;
          do
          {
            v15 = states;
            v16 = *(_QWORD *)((char *)&states->name + v13) + 80 * v11;
            v17 = *(_QWORD *)(v16 + 72);
            if ( *(_BYTE *)(v17 + 104) )
            {
              v18 = 0i64;
              if ( *(_DWORD *)(v17 + 120) )
              {
                do
                {
                  v19 = (scr_string_t *)(*(_QWORD *)(v17 + 112) + 4 * v18);
                  if ( *v19 )
                    Scr_SetString(v19, (scr_string_t)0);
                  v17 = *(_QWORD *)(v16 + 72);
                  v18 = (unsigned int)(v18 + 1);
                }
                while ( (unsigned int)v18 < *(_DWORD *)(v17 + 120) );
                v15 = pAnimset->states;
              }
            }
            v11 = (unsigned int)(v11 + 1);
            states = v15;
          }
          while ( (unsigned int)v11 < *(scr_string_t *)((char *)&v15->name + v14) );
        }
      }
    }
  }
}

/*
==============
BG_Animset_GetAddonAnimFromBlendtree
==============
*/
char BG_Animset_GetAddonAnimFromBlendtree(const scr_string_t animsetName, int stateIndex, int entryIndex, AnimsetStateType addonType, const scr_string_t alias, const scr_string_t blendtreeName, scr_anim_t *outAnim, XAnimSubTreeID *outSubtreeID)
{
  __int64 v9; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v15; 
  const AnimsetState *v16; 
  AnimsetAlias *AliasFromStateByEntryIndex; 
  AnimsetAlias *v18; 
  __int64 v19; 
  scr_string_t v20; 
  unsigned int v21; 
  ntl::red_black_tree_node_base *v22; 
  ntl::red_black_tree_node_base *v23; 
  const Animset *v24; 
  AnimsetState *State; 
  unsigned int numBlendtreeAliases; 
  unsigned int i; 
  unsigned int numAnimAliases; 
  __int64 v29; 
  AnimsetAlias *animAliases; 

  v9 = stateIndex;
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return 0;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase )
    return 0;
  if ( RawHash < p_m_endNodeBase[1].m_color )
    return 0;
  v15 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !v15 )
    return 0;
  if ( (unsigned int)v9 >= v15->numStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v9, v15->numStates) )
    __debugbreak();
  v16 = &v15->states[v9];
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1494, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  AliasFromStateByEntryIndex = BG_Animset_GetAliasFromStateByEntryIndex(v15, v16, entryIndex);
  v18 = AliasFromStateByEntryIndex;
  if ( !AliasFromStateByEntryIndex )
    return 0;
  v19 = 0i64;
  if ( !AliasFromStateByEntryIndex->numAddons )
    return 0;
  while ( 1 )
  {
    v20 = v18->addons[v19];
    v21 = j_SL_GetRawHash(animsetName);
    v22 = g_animsetCache.m_endNodeBase.mp_parent;
    v23 = &g_animsetCache.m_endNodeBase;
    if ( g_animsetCache.m_endNodeBase.mp_parent )
    {
      do
      {
        if ( v22[1].m_color < v21 )
        {
          v22 = v22->mp_right;
        }
        else
        {
          v23 = v22;
          v22 = v22->mp_left;
        }
      }
      while ( v22 );
      if ( v23 != &g_animsetCache.m_endNodeBase && v21 >= v23[1].m_color )
      {
        v24 = (const Animset *)v23[1].mp_parent;
        if ( v24 )
        {
          State = Animset_FindState(v24, v20);
          if ( State )
          {
            if ( State->stateType == addonType )
            {
              if ( !State->numBlendtreeAliases && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1507, ASSERT_TYPE_ASSERT, "(pAddon->numBlendtreeAliases > 0)", (const char *)&queryFormat, "pAddon->numBlendtreeAliases > 0") )
                __debugbreak();
              numBlendtreeAliases = State->numBlendtreeAliases;
              for ( i = 0; i < numBlendtreeAliases; ++i )
              {
                if ( State->blendtreeAliases[i].name == blendtreeName )
                  break;
              }
              if ( i == numBlendtreeAliases )
                return 0;
              numAnimAliases = State->numAnimAliases;
              v29 = 0i64;
              if ( numAnimAliases )
                break;
            }
          }
        }
      }
    }
LABEL_39:
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v18->numAddons )
      return 0;
  }
  animAliases = State->animAliases;
  while ( animAliases[v29].name != alias || animAliases[v29].blenderIndex != i )
  {
    v29 = (unsigned int)(v29 + 1);
    if ( (unsigned int)v29 >= numAnimAliases )
      goto LABEL_39;
  }
  *outAnim = animAliases[v29].anims->anim;
  if ( outSubtreeID )
    *outSubtreeID = State->blendtreeAliases[i].blendtree.anims->subTreeID;
  return 1;
}

/*
==============
BG_Animset_GetAddonAnimFromState
==============
*/
char BG_Animset_GetAddonAnimFromState(const scr_string_t animsetName, int stateIndex, int entryIndex, AnimsetStateType addonType, const scr_string_t alias, scr_anim_t *outAnim)
{
  __int64 v7; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v12; 
  const AnimsetState *v13; 
  AnimsetAlias *AliasFromStateByEntryIndex; 
  AnimsetAlias *v15; 
  __int64 v16; 
  AnimsetState *State; 
  unsigned int numAnimAliases; 
  __int64 v19; 
  AnimsetAlias *animAliases; 

  v7 = stateIndex;
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return 0;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase )
    return 0;
  if ( RawHash < p_m_endNodeBase[1].m_color )
    return 0;
  v12 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !v12 )
    return 0;
  if ( (unsigned int)v7 >= v12->numStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v7, v12->numStates) )
    __debugbreak();
  v13 = &v12->states[v7];
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1551, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  AliasFromStateByEntryIndex = BG_Animset_GetAliasFromStateByEntryIndex(v12, v13, entryIndex);
  v15 = AliasFromStateByEntryIndex;
  if ( !AliasFromStateByEntryIndex )
    return 0;
  v16 = 0i64;
  if ( !AliasFromStateByEntryIndex->numAddons )
    return 0;
  while ( 1 )
  {
    State = Animset_FindState(v12, (const scr_string_t)v15->addons[v16]);
    if ( State )
    {
      if ( State->stateType == addonType )
      {
        numAnimAliases = State->numAnimAliases;
        v19 = 0i64;
        if ( numAnimAliases )
          break;
      }
    }
LABEL_23:
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= v15->numAddons )
      return 0;
  }
  animAliases = State->animAliases;
  while ( animAliases[v19].name != alias )
  {
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= numAnimAliases )
      goto LABEL_23;
  }
  *outAnim = animAliases[v19].anims->anim;
  return 1;
}

/*
==============
BG_Animset_GetAddonAnimsFromState
==============
*/
bool BG_Animset_GetAddonAnimsFromState(const scr_string_t animsetName, int stateIndex, int entryIndex, AnimsetStateType addonType, const scr_string_t *aliases, int numAliases, int *outAnimIndices)
{
  return BG_Animset_GetAddonAnimsFromState(animsetName, stateIndex, entryIndex, addonType, 0, XANIM_SUBTREE_DEFAULT, aliases, numAliases, outAnimIndices);
}

/*
==============
BG_Animset_GetAddonAnimsFromState
==============
*/
char BG_Animset_GetAddonAnimsFromState(const scr_string_t animsetName, int stateIndex, int entryIndex, AnimsetStateType addonType, bool bMatchSubtree, XAnimSubTreeID subtreeID, const scr_string_t *aliases, int numAliases, int *outAnimIndices)
{
  __int64 v9; 
  int *v13; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v17; 
  const AnimsetState *v18; 
  AnimsetAlias *AliasFromStateByEntryIndex; 
  AnimsetAlias *v20; 
  __int64 v21; 
  AnimsetState *State; 
  __int64 v24; 
  __int64 v25; 
  unsigned int numAnimAliases; 
  __int64 v27; 
  unsigned int v28; 
  const XAnim_s *anims; 
  __int64 v30; 
  __int64 v31; 

  v9 = stateIndex;
  if ( !aliases && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1615, ASSERT_TYPE_ASSERT, "(aliases)", (const char *)&queryFormat, "aliases") )
    __debugbreak();
  v13 = outAnimIndices;
  if ( !outAnimIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1616, ASSERT_TYPE_ASSERT, "(outAnimIndices)", (const char *)&queryFormat, "outAnimIndices") )
    __debugbreak();
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return 0;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase )
    return 0;
  if ( RawHash < p_m_endNodeBase[1].m_color )
    return 0;
  v17 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !v17 )
    return 0;
  if ( (unsigned int)v9 >= v17->numStates )
  {
    LODWORD(v30) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v30, v17->numStates) )
      __debugbreak();
  }
  v18 = &v17->states[v9];
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1625, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  AliasFromStateByEntryIndex = BG_Animset_GetAliasFromStateByEntryIndex(v17, v18, entryIndex);
  v20 = AliasFromStateByEntryIndex;
  if ( !AliasFromStateByEntryIndex )
    return 0;
  v21 = 0i64;
  if ( !AliasFromStateByEntryIndex->numAddons )
    return 0;
  while ( 1 )
  {
    State = Animset_FindState(v17, (const scr_string_t)v20->addons[v21]);
    if ( State )
    {
      if ( State->stateType == addonType )
        break;
    }
    v21 = (unsigned int)(v21 + 1);
    if ( (unsigned int)v21 >= v20->numAddons )
      return 0;
  }
  v24 = numAliases;
  if ( numAliases > 0 )
  {
    do
    {
      *v13 = -1;
      v25 = 0i64;
      numAnimAliases = State->numAnimAliases;
      if ( numAnimAliases )
      {
        while ( 1 )
        {
          v27 = (__int64)&State->animAliases[v25];
          if ( *(_DWORD *)v27 == *(int *)((char *)v13 + (char *)aliases - (char *)outAnimIndices) )
            break;
          v25 = (unsigned int)(v25 + 1);
          if ( (unsigned int)v25 >= numAnimAliases )
            goto LABEL_40;
        }
        if ( !bMatchSubtree )
          goto LABEL_39;
        v28 = *(_DWORD *)(v27 + 56);
        if ( v28 == -1 )
          goto LABEL_39;
        if ( v28 >= State->numBlendtreeAliases )
        {
          LODWORD(v31) = State->numBlendtreeAliases;
          LODWORD(v30) = *(_DWORD *)(v27 + 56);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1648, ASSERT_TYPE_ASSERT, "(unsigned)( pAddonAlias->blenderIndex ) < (unsigned)( pAddon->numBlendtreeAliases )", "pAddonAlias->blenderIndex doesn't index pAddon->numBlendtreeAliases\n\t%i not in [0, %i)", v30, v31) )
            __debugbreak();
        }
        anims = State->blendtreeAliases[*(int *)(v27 + 56)].blendtree.anims;
        if ( !anims || XAnimGetSubTreeID(anims) == subtreeID )
LABEL_39:
          *v13 = *(unsigned __int16 *)(*(_QWORD *)(v27 + 8) + 16i64);
      }
LABEL_40:
      ++v13;
      --v24;
    }
    while ( v24 );
  }
  return 1;
}

/*
==============
BG_Animset_GetAddonFromState
==============
*/
char BG_Animset_GetAddonFromState(const Animset *pAnimset, const AnimsetState *pState, int entryIndex, AnimsetStateType addonType, AnimsetState **outState)
{
  AnimsetAlias *AliasFromStateByEntryIndex; 
  AnimsetAlias *v10; 
  __int64 v11; 
  AnimsetState *State; 

  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1583, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1584, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1585, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  AliasFromStateByEntryIndex = BG_Animset_GetAliasFromStateByEntryIndex(pAnimset, pState, entryIndex);
  v10 = AliasFromStateByEntryIndex;
  if ( !AliasFromStateByEntryIndex )
    return 0;
  v11 = 0i64;
  if ( !AliasFromStateByEntryIndex->numAddons )
    return 0;
  while ( 1 )
  {
    if ( pAnimset )
    {
      State = Animset_FindState(pAnimset, (const scr_string_t)v10->addons[v11]);
      if ( State )
      {
        if ( State->stateType == addonType )
          break;
      }
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v10->numAddons )
      return 0;
  }
  *outState = State;
  return 1;
}

/*
==============
BG_Animset_GetAliasAndAnimFromStateIndexAndEntry
==============
*/
void BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(const Animset *pAnimset, int stateIndex, int entryIndex, const AnimsetAlias **ppOutAlias, const AnimsetAnim **ppOutAnim)
{
  __int64 v5; 
  __int64 v7; 
  AnimsetState *v9; 
  const char *v10; 
  __int64 aliasIndex; 
  const char *v12; 
  const AnimsetAlias *v13; 
  __int64 aliasAnimEntryIndex; 
  const char *v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v18; 
  const char *name; 

  v5 = entryIndex;
  v7 = stateIndex;
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1043, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( !ppOutAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1044, ASSERT_TYPE_ASSERT, "(ppOutAlias)", (const char *)&queryFormat, "ppOutAlias") )
    __debugbreak();
  if ( !ppOutAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1045, ASSERT_TYPE_ASSERT, "(ppOutAnim)", (const char *)&queryFormat, "ppOutAnim") )
    __debugbreak();
  if ( (unsigned int)v7 >= pAnimset->numStates )
  {
    LODWORD(v17) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1046, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v17, pAnimset->numStates) )
      __debugbreak();
  }
  v9 = &pAnimset->states[v7];
  if ( !v9->animEntryMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1049, ASSERT_TYPE_ASSERT, "(pState->animEntryMap)", (const char *)&queryFormat, "pState->animEntryMap") )
    __debugbreak();
  if ( (int)v5 < 0 || (int)v5 >= BG_Animset_GetNumEntriesForStateIndex(pAnimset, v7) )
  {
    v10 = SL_ConvertToString(v9->name);
    name = pAnimset->name;
    LODWORD(v18) = BG_Animset_GetNumEntriesForStateIndex(pAnimset, v7);
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1051, ASSERT_TYPE_ASSERT, "( entryIndex >= 0 && entryIndex < BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex ) )", "%d not in [0, %d): animset %s state %s", v17, v18, name, v10) )
      __debugbreak();
  }
  aliasIndex = v9->animEntryMap[v5].aliasIndex;
  if ( (unsigned int)aliasIndex >= v9->numAnimAliases )
  {
    v12 = SL_ConvertToString(v9->name);
    LODWORD(v18) = v9->numAnimAliases;
    LODWORD(v17) = aliasIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1054, ASSERT_TYPE_ASSERT, "( aliasIndex >= 0 && aliasIndex < pState->numAnimAliases )", "%d not in [0, %d): animset %s state %s", v17, v18, pAnimset->name, v12) )
      __debugbreak();
  }
  v13 = &v9->animAliases[aliasIndex];
  aliasAnimEntryIndex = v9->animEntryMap[v5].aliasAnimEntryIndex;
  if ( (unsigned int)aliasAnimEntryIndex >= v13->numAnims )
  {
    v15 = SL_ConvertToString(v13->name);
    v16 = SL_ConvertToString(v9->name);
    LODWORD(v18) = v13->numAnims;
    LODWORD(v17) = aliasAnimEntryIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1058, ASSERT_TYPE_ASSERT, "( animEntryIndex >= 0 && animEntryIndex < pAlias->numAnims )", "%d not in [0, %d): animset %s state %s alias %s", v17, v18, pAnimset->name, v16, v15) )
      __debugbreak();
  }
  *ppOutAlias = v13;
  *ppOutAnim = &v13->anims[aliasAnimEntryIndex];
}

/*
==============
BG_Animset_GetAliasFromStateByEntryIndex
==============
*/
AnimsetAlias *BG_Animset_GetAliasFromStateByEntryIndex(const Animset *pAnimset, const AnimsetState *pState, int entryIndex)
{
  unsigned int numAnimAliases; 
  __int64 v6; 
  AnimsetAlias *animAliases; 
  int numAnims; 

  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1467, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( !pState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1468, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  numAnimAliases = pState->numAnimAliases;
  v6 = 0i64;
  if ( !numAnimAliases )
    return 0i64;
  while ( 1 )
  {
    animAliases = pState->animAliases;
    numAnims = animAliases[v6].numAnims;
    if ( entryIndex < numAnims )
      break;
    entryIndex -= numAnims;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= numAnimAliases )
      return 0i64;
  }
  return &animAliases[v6];
}

/*
==============
BG_Animset_GetAllAnimIndicesForAlias
==============
*/
__int64 BG_Animset_GetAllAnimIndicesForAlias(const scr_string_t animsetName, const scr_string_t stateName, const scr_string_t aliasName, int *pIndices, unsigned int maxIndices)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v11; 
  AnimsetState *State; 
  unsigned int numAnimAliases; 
  __int64 v14; 
  int v15; 
  int v16; 
  AnimsetAlias *v17; 
  __int64 result; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase )
    return 0i64;
  if ( RawHash < p_m_endNodeBase[1].m_color )
    return 0i64;
  v11 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !v11 )
    return 0i64;
  State = Animset_FindState(v11, stateName);
  if ( !State )
    return 0i64;
  numAnimAliases = State->numAnimAliases;
  v14 = 0i64;
  v15 = 0;
  v16 = 0;
  if ( !numAnimAliases )
    return 0i64;
  while ( 1 )
  {
    v17 = &State->animAliases[v16];
    if ( v17->name == aliasName )
      break;
    v15 += v17->numAnims;
    if ( ++v16 >= numAnimAliases )
      return 0i64;
  }
  result = v17->numAnims;
  if ( maxIndices < (unsigned int)result )
    return 0xFFFFFFFFi64;
  if ( (_DWORD)result )
  {
    do
    {
      pIndices[v14] = v14 + v15;
      v14 = (unsigned int)(v14 + 1);
      result = v17->numAnims;
    }
    while ( (unsigned int)v14 < (unsigned int)result );
  }
  return result;
}

/*
==============
BG_Animset_GetAlwaysOnInDeathState
==============
*/
bool BG_Animset_GetAlwaysOnInDeathState(const Animset *pAnimset, int *pOutAlwaysOnInDeathState)
{
  AnimsetState *State; 
  AnimsetState *v5; 
  __int128 v6; 

  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1403, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( !pAnimset )
    return 0;
  State = Animset_FindState(pAnimset, (const scr_string_t)scr_const.always_on_in_death);
  v5 = State;
  if ( pOutAlwaysOnInDeathState )
  {
    if ( !State )
      return 0;
    v6 = ((char *)State - (char *)pAnimset->states) * (__int128)0x4924924924924925i64;
    *pOutAlwaysOnInDeathState = (*((_QWORD *)&v6 + 1) >> 63) + (*((__int64 *)&v6 + 1) >> 5);
  }
  return v5 != NULL;
}

/*
==============
BG_Animset_GetAlwaysOnState
==============
*/
bool BG_Animset_GetAlwaysOnState(const Animset *pAnimset, int *pOutAlwaysOnState)
{
  scr_string_t alwaysOnStateName; 
  AnimsetState *State; 
  AnimsetState *v6; 
  __int128 v7; 

  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1389, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  alwaysOnStateName = pAnimset->alwaysOnStateName;
  if ( !alwaysOnStateName )
    return 0;
  State = Animset_FindState(pAnimset, alwaysOnStateName);
  v6 = State;
  if ( pOutAlwaysOnState )
  {
    if ( !State )
      return 0;
    v7 = ((char *)State - (char *)pAnimset->states) * (__int128)0x4924924924924925i64;
    *pOutAlwaysOnState = (*((_QWORD *)&v7 + 1) >> 63) + (*((__int64 *)&v7 + 1) >> 5);
  }
  return v6 != NULL;
}

/*
==============
BG_Animset_GetAlwaysOnState
==============
*/
char BG_Animset_GetAlwaysOnState(const scr_string_t animsetName, int *pOutAlwaysOnState)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v6; 
  scr_string_t alwaysOnStateName; 
  AnimsetState *State; 
  AnimsetState *v9; 
  __int128 v10; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v6 = NULL;
  }
  else
  {
    v6 = (const Animset *)p_m_endNodeBase[1].mp_parent;
    if ( v6 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1389, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
LABEL_13:
  alwaysOnStateName = v6->alwaysOnStateName;
  if ( alwaysOnStateName )
  {
    State = Animset_FindState(v6, alwaysOnStateName);
    v9 = State;
    if ( pOutAlwaysOnState )
    {
      if ( !State )
        return 0;
      v10 = ((char *)State - (char *)v6->states) * (__int128)0x4924924924924925i64;
      *pOutAlwaysOnState = (*((_QWORD *)&v10 + 1) >> 63) + (*((__int64 *)&v10 + 1) >> 5);
    }
    if ( v9 )
      return 1;
  }
  return 0;
}

/*
==============
BG_Animset_GetAnimController
==============
*/
__int64 BG_Animset_GetAnimController(const scr_string_t animsetName)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v4; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v4 = NULL;
  }
  else
  {
    v4 = p_m_endNodeBase[1].mp_parent;
    if ( v4 )
      return HIDWORD(v4->mp_right);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1309, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  return HIDWORD(v4->mp_right);
}

/*
==============
BG_Animset_GetAnimFromIndex
==============
*/
scr_anim_t BG_Animset_GetAnimFromIndex(const Animset *animset, const scr_string_t stateName, int index)
{
  AnimsetState *State; 
  unsigned int numAnimAliases; 
  __int64 v6; 
  AnimsetAlias *animAliases; 

  if ( !animset )
    return UNDEFINED_ANIM;
  State = Animset_FindState(animset, stateName);
  if ( !State )
    return UNDEFINED_ANIM;
  numAnimAliases = State->numAnimAliases;
  v6 = 0i64;
  if ( !numAnimAliases )
    return UNDEFINED_ANIM;
  animAliases = State->animAliases;
  while ( index >= (signed int)animAliases[v6].numAnims )
  {
    index -= animAliases[v6].numAnims;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= numAnimAliases )
      return UNDEFINED_ANIM;
  }
  return (scr_anim_t)animAliases[v6].anims[index].anim.linkPointer;
}

/*
==============
BG_Animset_GetAnimFromIndex
==============
*/
scr_anim_t BG_Animset_GetAnimFromIndex(const scr_string_t animsetName, const scr_string_t stateName, int index)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v8; 
  AnimsetState *State; 
  unsigned int numAnimAliases; 
  __int64 v11; 
  AnimsetAlias *animAliases; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return UNDEFINED_ANIM;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase )
    return UNDEFINED_ANIM;
  if ( RawHash < p_m_endNodeBase[1].m_color )
    return UNDEFINED_ANIM;
  v8 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !v8 )
    return UNDEFINED_ANIM;
  State = Animset_FindState(v8, stateName);
  if ( !State )
    return UNDEFINED_ANIM;
  numAnimAliases = State->numAnimAliases;
  v11 = 0i64;
  if ( !numAnimAliases )
    return UNDEFINED_ANIM;
  animAliases = State->animAliases;
  while ( index >= (signed int)animAliases[v11].numAnims )
  {
    index -= animAliases[v11].numAnims;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= numAnimAliases )
      return UNDEFINED_ANIM;
  }
  return (scr_anim_t)animAliases[v11].anims[index].anim.linkPointer;
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/
void BG_Animset_GetAnimIndexFromStateIndexAndEntry(const Animset *pAnimset, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, const XAnim_s **pSubtreeAnims)
{
  __int64 v6; 
  unsigned int *v10; 
  const XAnim_s **v11; 
  const XAnim_s **v12; 
  unsigned int v13; 
  AnimsetState *v14; 
  __int64 v15; 
  __int64 v16; 

  v6 = stateIndex;
  if ( !pOutAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1162, ASSERT_TYPE_ASSERT, "(pOutAnimIndex)", (const char *)&queryFormat, "pOutAnimIndex") )
    __debugbreak();
  v10 = pOutGraftNode;
  if ( !pOutGraftNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1163, ASSERT_TYPE_ASSERT, "(pOutGraftNode)", (const char *)&queryFormat, "pOutGraftNode") )
    __debugbreak();
  v11 = pSubtreeAnims;
  if ( !pSubtreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1164, ASSERT_TYPE_ASSERT, "(pSubtreeAnims)", (const char *)&queryFormat, "pSubtreeAnims") )
    __debugbreak();
  *v10 = 0;
  *v11 = NULL;
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(pAnimset, v6, entryIndex, (const AnimsetAlias **)&pSubtreeAnims, (const AnimsetAnim **)&pOutGraftNode);
  v12 = pSubtreeAnims;
  *pOutAnimIndex = *((unsigned __int16 *)pOutGraftNode + 8);
  v13 = *((_DWORD *)v12 + 14);
  if ( v13 != -1 )
  {
    v14 = &pAnimset->states[v6];
    if ( v13 >= v14->numBlendtreeAliases )
    {
      LODWORD(v16) = *((_DWORD *)v12 + 14);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1178, ASSERT_TYPE_ASSERT, "(unsigned)( pAlias->blenderIndex ) < (unsigned)( pState->numBlendtreeAliases )", "pAlias->blenderIndex doesn't index pState->numBlendtreeAliases\n\t%i not in [0, %i)", v16, v14->numBlendtreeAliases) )
        __debugbreak();
    }
    v15 = (__int64)&v14->blendtreeAliases[*((int *)v12 + 14)];
    *v10 = *(unsigned __int16 *)(v15 + 32);
    *v11 = *(const XAnim_s **)(v15 + 40);
  }
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/
void BG_Animset_GetAnimIndexFromStateIndexAndEntry(const Animset *pAnimset, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID)
{
  __int64 v7; 
  unsigned int *v11; 
  XAnimSubTreeID *v12; 
  XAnimSubTreeID *v13; 
  unsigned int v14; 
  AnimsetState *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v7 = stateIndex;
  if ( !pOutAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1125, ASSERT_TYPE_ASSERT, "(pOutAnimIndex)", (const char *)&queryFormat, "pOutAnimIndex") )
    __debugbreak();
  v11 = pOutGraftNode;
  if ( !pOutGraftNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1126, ASSERT_TYPE_ASSERT, "(pOutGraftNode)", (const char *)&queryFormat, "pOutGraftNode") )
    __debugbreak();
  v12 = pOutAnimSubtreeID;
  if ( !pOutAnimSubtreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1127, ASSERT_TYPE_ASSERT, "(pOutAnimSubtreeID)", (const char *)&queryFormat, "pOutAnimSubtreeID") )
    __debugbreak();
  *v11 = 0;
  *v12 = XANIM_SUBTREE_DEFAULT;
  if ( pOutAnimCurveID )
    *pOutAnimCurveID = LINEAR;
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(pAnimset, v7, entryIndex, (const AnimsetAlias **)&pOutAnimSubtreeID, (const AnimsetAnim **)&pOutGraftNode);
  v13 = pOutAnimSubtreeID;
  *pOutAnimIndex = *((unsigned __int16 *)pOutGraftNode + 8);
  v14 = *((_DWORD *)v13 + 14);
  if ( v14 != -1 )
  {
    v15 = &pAnimset->states[v7];
    if ( v14 >= v15->numBlendtreeAliases )
    {
      LODWORD(v18) = *((_DWORD *)v13 + 14);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1143, ASSERT_TYPE_ASSERT, "(unsigned)( pAlias->blenderIndex ) < (unsigned)( pState->numBlendtreeAliases )", "pAlias->blenderIndex doesn't index pState->numBlendtreeAliases\n\t%i not in [0, %i)", v18, v15->numBlendtreeAliases) )
        __debugbreak();
    }
    v16 = (__int64)&v15->blendtreeAliases[*((int *)v13 + 14)];
    *v11 = *(unsigned __int16 *)(v16 + 32);
    v17 = *(_QWORD *)(v16 + 40);
    if ( v17 )
      *v12 = *(XAnimSubTreeID *)(v17 + 60);
  }
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/
void BG_Animset_GetAnimIndexFromStateIndexAndEntry(const Animset *pAnimset, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID, int *pOutAnimtreeIndex, int user)
{
  __int64 v9; 
  unsigned int *v13; 
  XAnimSubTreeID *v14; 
  int *v15; 
  XAnimSubTreeID *v16; 
  unsigned int v17; 
  AnimsetState *v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 

  v9 = stateIndex;
  if ( !pOutAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1196, ASSERT_TYPE_ASSERT, "(pOutAnimIndex)", (const char *)&queryFormat, "pOutAnimIndex") )
    __debugbreak();
  v13 = pOutGraftNode;
  if ( !pOutGraftNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1197, ASSERT_TYPE_ASSERT, "(pOutGraftNode)", (const char *)&queryFormat, "pOutGraftNode") )
    __debugbreak();
  v14 = pOutAnimSubtreeID;
  if ( !pOutAnimSubtreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1198, ASSERT_TYPE_ASSERT, "(pOutAnimSubtreeID)", (const char *)&queryFormat, "pOutAnimSubtreeID") )
    __debugbreak();
  v15 = pOutAnimtreeIndex;
  if ( !pOutAnimtreeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1199, ASSERT_TYPE_ASSERT, "(pOutAnimtreeIndex)", (const char *)&queryFormat, "pOutAnimtreeIndex") )
    __debugbreak();
  *v13 = 0;
  *v14 = XANIM_SUBTREE_DEFAULT;
  if ( pOutAnimCurveID )
    *pOutAnimCurveID = LINEAR;
  *v15 = -1;
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(pAnimset, v9, entryIndex, (const AnimsetAlias **)&pOutAnimSubtreeID, (const AnimsetAnim **)&pOutGraftNode);
  v16 = pOutAnimSubtreeID;
  *pOutAnimIndex = *((unsigned __int16 *)pOutGraftNode + 8);
  v17 = *((_DWORD *)v16 + 14);
  if ( v17 != -1 )
  {
    v18 = &pAnimset->states[v9];
    if ( v17 >= v18->numBlendtreeAliases )
    {
      LODWORD(v22) = *((_DWORD *)v16 + 14);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1216, ASSERT_TYPE_ASSERT, "(unsigned)( pAlias->blenderIndex ) < (unsigned)( pState->numBlendtreeAliases )", "pAlias->blenderIndex doesn't index pState->numBlendtreeAliases\n\t%i not in [0, %i)", v22, v18->numBlendtreeAliases) )
        __debugbreak();
    }
    v19 = (__int64)&v18->blendtreeAliases[*((int *)v16 + 14)];
    *v13 = *(unsigned __int16 *)(v19 + 32);
    v20 = *(_QWORD *)(v19 + 40);
    if ( v20 )
    {
      v21 = user;
      *v14 = *(XAnimSubTreeID *)(v20 + 60);
      *v15 = Scr_GetAnimsIndex(*(const XAnim_s **)(v19 + 40), v21);
    }
  }
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/
void BG_Animset_GetAnimIndexFromStateIndexAndEntry(const scr_string_t animsetName, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, const XAnim_s **pSubtreeAnims)
{
  __int64 v7; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v12; 
  unsigned int *v13; 
  const XAnim_s **v14; 
  const XAnim_s **v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v7 = stateIndex;
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_9;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
LABEL_9:
    v12 = NULL;
  else
    v12 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !pOutAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1162, ASSERT_TYPE_ASSERT, "(pOutAnimIndex)", (const char *)&queryFormat, "pOutAnimIndex") )
    __debugbreak();
  v13 = pOutGraftNode;
  if ( !pOutGraftNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1163, ASSERT_TYPE_ASSERT, "(pOutGraftNode)", (const char *)&queryFormat, "pOutGraftNode") )
    __debugbreak();
  v14 = pSubtreeAnims;
  if ( !pSubtreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1164, ASSERT_TYPE_ASSERT, "(pSubtreeAnims)", (const char *)&queryFormat, "pSubtreeAnims") )
    __debugbreak();
  *v13 = 0;
  *v14 = NULL;
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(v12, v7, entryIndex, (const AnimsetAlias **)&pSubtreeAnims, (const AnimsetAnim **)&pOutGraftNode);
  v15 = pSubtreeAnims;
  *pOutAnimIndex = *((unsigned __int16 *)pOutGraftNode + 8);
  v16 = *((_DWORD *)v15 + 14);
  if ( v16 != -1 )
  {
    v17 = (__int64)&v12->states[v7];
    if ( v16 >= *(_DWORD *)(v17 + 32) )
    {
      LODWORD(v19) = *((_DWORD *)v15 + 14);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1178, ASSERT_TYPE_ASSERT, "(unsigned)( pAlias->blenderIndex ) < (unsigned)( pState->numBlendtreeAliases )", "pAlias->blenderIndex doesn't index pState->numBlendtreeAliases\n\t%i not in [0, %i)", v19, *(_DWORD *)(v17 + 32)) )
        __debugbreak();
    }
    v18 = *(_QWORD *)(v17 + 24) + 56i64 * *((int *)v15 + 14);
    *v13 = *(unsigned __int16 *)(v18 + 32);
    *v14 = *(const XAnim_s **)(v18 + 40);
  }
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/
void BG_Animset_GetAnimIndexFromStateIndexAndEntry(const scr_string_t animsetName, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID)
{
  __int64 v8; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v13; 
  unsigned int *v14; 
  XAnimSubTreeID *v15; 
  XAnimCurveID *v16; 
  XAnimSubTreeID *v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v8 = stateIndex;
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_9;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
LABEL_9:
    v13 = NULL;
  else
    v13 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !pOutAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1125, ASSERT_TYPE_ASSERT, "(pOutAnimIndex)", (const char *)&queryFormat, "pOutAnimIndex") )
    __debugbreak();
  v14 = pOutGraftNode;
  if ( !pOutGraftNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1126, ASSERT_TYPE_ASSERT, "(pOutGraftNode)", (const char *)&queryFormat, "pOutGraftNode") )
    __debugbreak();
  v15 = pOutAnimSubtreeID;
  if ( !pOutAnimSubtreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1127, ASSERT_TYPE_ASSERT, "(pOutAnimSubtreeID)", (const char *)&queryFormat, "pOutAnimSubtreeID") )
    __debugbreak();
  v16 = pOutAnimCurveID;
  *v14 = 0;
  *v15 = XANIM_SUBTREE_DEFAULT;
  if ( v16 )
    *v16 = LINEAR;
  BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(v13, v8, entryIndex, (const AnimsetAlias **)&pOutAnimSubtreeID, (const AnimsetAnim **)&pOutGraftNode);
  v17 = pOutAnimSubtreeID;
  *pOutAnimIndex = *((unsigned __int16 *)pOutGraftNode + 8);
  v18 = *((_DWORD *)v17 + 14);
  if ( v18 != -1 )
  {
    v19 = (__int64)&v13->states[v8];
    if ( v18 >= *(_DWORD *)(v19 + 32) )
    {
      LODWORD(v22) = *((_DWORD *)v17 + 14);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1143, ASSERT_TYPE_ASSERT, "(unsigned)( pAlias->blenderIndex ) < (unsigned)( pState->numBlendtreeAliases )", "pAlias->blenderIndex doesn't index pState->numBlendtreeAliases\n\t%i not in [0, %i)", v22, *(_DWORD *)(v19 + 32)) )
        __debugbreak();
    }
    v20 = *(_QWORD *)(v19 + 24) + 56i64 * *((int *)v17 + 14);
    *v14 = *(unsigned __int16 *)(v20 + 32);
    v21 = *(_QWORD *)(v20 + 40);
    if ( v21 )
      *v15 = *(XAnimSubTreeID *)(v21 + 60);
  }
}

/*
==============
BG_Animset_GetAnimIndexFromStateIndexAndEntry
==============
*/
void BG_Animset_GetAnimIndexFromStateIndexAndEntry(const scr_string_t animsetName, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID, int *pOutAnimtreeIndex, int user)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v15; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_9;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
LABEL_9:
    v15 = NULL;
  else
    v15 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(v15, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimCurveID, pOutAnimtreeIndex, user);
}

/*
==============
BG_Animset_GetAnimTree
==============
*/
__int64 BG_Animset_GetAnimTree(const scr_string_t animsetName)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  unsigned int v3; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  v3 = RawHash;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return MEMORY[0xC];
  do
  {
    if ( mp_parent[1].m_color < v3 )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || v3 < p_m_endNodeBase[1].m_color )
    return MEMORY[0xC];
  else
    return HIDWORD(p_m_endNodeBase[1].mp_parent->mp_parent);
}

/*
==============
BG_Animset_GetClearKnob
==============
*/
__int64 BG_Animset_GetClearKnob(const Animset *pAnimset)
{
  scr_string_t clearStateName; 
  AnimsetState *State; 
  unsigned int numAnimAliases; 
  __int64 v5; 
  AnimsetAlias *animAliases; 

  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1356, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  clearStateName = pAnimset->clearStateName;
  if ( !clearStateName )
    return 0i64;
  if ( !pAnimset->clearAliasName )
    return 0i64;
  State = Animset_FindState(pAnimset, clearStateName);
  if ( !State )
    return 0i64;
  numAnimAliases = State->numAnimAliases;
  v5 = 0i64;
  if ( !numAnimAliases )
    return 0i64;
  animAliases = State->animAliases;
  while ( animAliases[v5].name != pAnimset->clearAliasName || !animAliases[v5].numAnims )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= numAnimAliases )
      return 0i64;
  }
  return animAliases[v5].anims->anim.index;
}

/*
==============
BG_Animset_GetClearKnob
==============
*/
__int64 BG_Animset_GetClearKnob(const scr_string_t animsetName)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v4; 
  scr_string_t mp_parent_high; 
  AnimsetState *State; 
  unsigned int numAnimAliases; 
  __int64 v8; 
  AnimsetAlias *animAliases; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v4 = NULL;
  }
  else
  {
    v4 = p_m_endNodeBase[1].mp_parent;
    if ( v4 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1356, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
LABEL_13:
  mp_parent_high = HIDWORD(v4[1].mp_parent);
  if ( !mp_parent_high )
    return 0i64;
  if ( !LODWORD(v4[1].mp_left) )
    return 0i64;
  State = Animset_FindState((const Animset *)v4, mp_parent_high);
  if ( !State )
    return 0i64;
  numAnimAliases = State->numAnimAliases;
  v8 = 0i64;
  if ( !numAnimAliases )
    return 0i64;
  animAliases = State->animAliases;
  while ( animAliases[v8].name != LODWORD(v4[1].mp_left) || !animAliases[v8].numAnims )
  {
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= numAnimAliases )
      return 0i64;
  }
  return animAliases[v8].anims->anim.index;
}

/*
==============
BG_Animset_GetCompleteAliasInfo
==============
*/
_BOOL8 BG_Animset_GetCompleteAliasInfo(const Animset *pAnimset, const AnimsetState *pState, const scr_string_t aliasName, AnimsetAlias **outAlias)
{
  bool AnimInfo_Internal; 

  if ( !outAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 979, ASSERT_TYPE_ASSERT, "(outAlias)", (const char *)&queryFormat, "outAlias") )
    __debugbreak();
  Profile_Begin(290);
  AnimInfo_Internal = Animset_GetAnimInfo_Internal(pAnimset, pState, aliasName, outAlias);
  Profile_EndInternal(NULL);
  return AnimInfo_Internal;
}

/*
==============
BG_Animset_GetCompleteAliasInfo
==============
*/
bool BG_Animset_GetCompleteAliasInfo(const scr_string_t animsetName, const scr_string_t stateName, const scr_string_t aliasName, AnimsetAlias **outAlias)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v11; 
  const AnimsetState *State; 
  bool AnimInfo_Internal; 

  if ( !outAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 965, ASSERT_TYPE_ASSERT, "(outAlias)", (const char *)&queryFormat, "outAlias") )
    __debugbreak();
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return 0;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase )
    return 0;
  if ( RawHash < p_m_endNodeBase[1].m_color )
    return 0;
  v11 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !v11 )
    return 0;
  Profile_Begin(290);
  if ( !outAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 957, ASSERT_TYPE_ASSERT, "(outAlias)", (const char *)&queryFormat, "outAlias") )
    __debugbreak();
  State = Animset_FindState(v11, stateName);
  AnimInfo_Internal = Animset_GetAnimInfo_Internal(v11, State, aliasName, outAlias);
  Profile_EndInternal(NULL);
  return AnimInfo_Internal;
}

/*
==============
BG_Animset_GetNodeHideYawOffset
==============
*/
float BG_Animset_GetNodeHideYawOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  const AIAnimsetNodeOffset *NodeOffset; 
  float result; 

  NodeOffset = BG_Animset_GetNodeOffset(animsetName, nodeType);
  result = 0.0;
  if ( NodeOffset )
    return (float)NodeOffset->hideYaw;
  return result;
}

/*
==============
BG_Animset_GetNodeLeanAimPitchOffset
==============
*/
float BG_Animset_GetNodeLeanAimPitchOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  const AIAnimsetNodeOffset *NodeOffset; 
  float result; 

  NodeOffset = BG_Animset_GetNodeOffset(animsetName, nodeType);
  result = 0.0;
  if ( NodeOffset )
    return (float)NodeOffset->leanPitch;
  return result;
}

/*
==============
BG_Animset_GetNodeLeanAimYawOffset
==============
*/
float BG_Animset_GetNodeLeanAimYawOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  const AIAnimsetNodeOffset *NodeOffset; 
  float result; 

  NodeOffset = BG_Animset_GetNodeOffset(animsetName, nodeType);
  result = 0.0;
  if ( NodeOffset )
    return (float)NodeOffset->leanYaw;
  return result;
}

/*
==============
BG_Animset_GetNodeOffset
==============
*/
ntl::red_black_tree_node_base *BG_Animset_GetNodeOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v6; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_9;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
LABEL_9:
    v6 = NULL;
  else
    v6 = p_m_endNodeBase[1].mp_parent;
  if ( v6[1].m_color && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1414, ASSERT_TYPE_ASSERT, "(pAnimset->mode == ASM_MODE_AI)", (const char *)&queryFormat, "pAnimset->mode == ASM_MODE_AI") )
    __debugbreak();
  if ( nodeType == scr_const.cover_left_cc )
    return v6[1].mp_right;
  if ( nodeType == scr_const.cover_left_crouch_cc )
    return (ntl::red_black_tree_node_base *)&v6[1].mp_right->mp_left;
  if ( nodeType == scr_const.cover_right_cc )
    return v6[1].mp_right + 1;
  if ( nodeType == scr_const.cover_right_crouch_cc )
    return (ntl::red_black_tree_node_base *)((char *)v6[1].mp_right + 48);
  if ( nodeType == scr_const.cover_crouch_cc || nodeType == scr_const.cover_crouch_window_cc || nodeType == scr_const.conceal_crouch_cc )
    return v6[1].mp_right + 2;
  if ( nodeType == scr_const.cover_stand_cc || nodeType == scr_const.conceal_stand_cc )
    return (ntl::red_black_tree_node_base *)((char *)v6[1].mp_right + 80);
  return 0i64;
}

/*
==============
BG_Animset_GetNodeSnapYawOffset
==============
*/
float BG_Animset_GetNodeSnapYawOffset(const scr_string_t animsetName, const scr_string_t nodeType)
{
  ntl::red_black_tree_node_base *NodeOffset; 
  float result; 

  NodeOffset = BG_Animset_GetNodeOffset(animsetName, nodeType);
  result = 0.0;
  if ( NodeOffset )
    return (float)*((int *)&NodeOffset->m_color + 1);
  return result;
}

/*
==============
BG_Animset_GetNumEntriesForState
==============
*/

__int64 __fastcall BG_Animset_GetNumEntriesForState(const scr_string_t animsetName, const scr_string_t stateName, double _XMM2_8)
{
  int v4; 
  unsigned int v6; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v10; 
  AnimsetState *State; 
  unsigned int numAnimAliases; 
  unsigned int v13; 
  int v14; 
  AnimsetAlias *animAliases; 
  __int64 v18; 
  __int64 v24; 
  int v35; 
  AnimsetAlias *v36; 
  __int64 v37; 
  unsigned int v38; 
  __int64 v39; 

  v4 = 0;
  v6 = 0;
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase )
    return 0i64;
  if ( RawHash < p_m_endNodeBase[1].m_color )
    return 0i64;
  v10 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  if ( !v10 )
    return 0i64;
  State = Animset_FindState(v10, stateName);
  if ( !State )
    return v6;
  numAnimAliases = State->numAnimAliases;
  v13 = 0;
  if ( numAnimAliases >= 8 )
  {
    v14 = 2;
    animAliases = State->animAliases;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      v18 = v13;
      v13 += 8;
      _XMM0 = animAliases[v18].numAnims;
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [r14+rdx*8+10h], 1
        vpinsrd xmm0, xmm0, dword ptr [r14+r8*8+10h], 2
        vpinsrd xmm0, xmm0, dword ptr [r14+r10*8+10h], 3
        vpaddd  xmm1, xmm0, xmm1
      }
      v24 = (unsigned int)(v14 + 2);
      v14 += 8;
      _XMM0 = animAliases[v24].numAnims;
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [r14+rdx*8+10h], 1
        vpinsrd xmm0, xmm0, dword ptr [r14+r8*8+10h], 2
        vpinsrd xmm0, xmm0, dword ptr [r14+r9*8+10h], 3
        vpaddd  xmm2, xmm0, xmm2
      }
    }
    while ( v13 < (numAnimAliases & 0xFFFFFFF8) );
    __asm
    {
      vpaddd  xmm1, xmm1, xmm2
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
    }
    v6 = _XMM0;
  }
  v35 = 0;
  if ( v13 >= numAnimAliases )
    return v6;
  if ( numAnimAliases - v13 >= 2 )
  {
    v36 = State->animAliases;
    v37 = v13;
    v38 = ((numAnimAliases - v13 - 2) >> 1) + 1;
    v39 = v38;
    v13 += 2 * v38;
    do
    {
      v4 += v36[v37].numAnims;
      v35 += v36[v37 + 1].numAnims;
      v37 += 2i64;
      --v39;
    }
    while ( v39 );
  }
  if ( v13 < numAnimAliases )
    v6 += State->animAliases[v13].numAnims;
  return v6 + v35 + v4;
}

/*
==============
BG_Animset_GetNumEntriesForStateIndex
==============
*/
__int64 BG_Animset_GetNumEntriesForStateIndex(const Animset *animset, int stateIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = stateIndex;
  if ( !animset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1285, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  if ( (unsigned int)v2 >= animset->numStates )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1286, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v5, animset->numStates) )
      __debugbreak();
  }
  return animset->states[v2].numAnims;
}

/*
==============
BG_Animset_GetNumEntriesForStateIndex
==============
*/
int BG_Animset_GetNumEntriesForStateIndex(const scr_string_t animsetName, int stateIndex)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return BG_Animset_GetNumEntriesForStateIndex(NULL, stateIndex);
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
    return BG_Animset_GetNumEntriesForStateIndex(NULL, stateIndex);
  else
    return BG_Animset_GetNumEntriesForStateIndex((const Animset *)p_m_endNodeBase[1].mp_parent, stateIndex);
}

/*
==============
BG_Animset_GetNumStates
==============
*/
__int64 BG_Animset_GetNumStates(const scr_string_t animsetName)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v4; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v4 = NULL;
  }
  else
  {
    v4 = p_m_endNodeBase[1].mp_parent;
    if ( v4 )
      return LODWORD(v4->mp_right);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1302, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  return LODWORD(v4->mp_right);
}

/*
==============
BG_Animset_GetStartStateAndEntry
==============
*/
void BG_Animset_GetStartStateAndEntry(const scr_string_t animsetName, int *pOutStartState, int *pOutStartEntry)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  unsigned int v8; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v10; 
  scr_string_t v11; 
  unsigned int v12; 
  ntl::red_black_tree_node_base *v13; 
  ntl::red_black_tree_node_base *v14; 
  const Animset *v15; 
  AnimsetState *v16; 
  AnimsetAlias *v17; 
  AnimsetState *outState; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  v8 = 0;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v10 = NULL;
  }
  else
  {
    v10 = p_m_endNodeBase[1].mp_parent;
    if ( v10 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1318, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
LABEL_13:
  *pOutStartState = 0;
  *pOutStartEntry = 0;
  v11 = *((_DWORD *)&v10[1].m_color + 1);
  if ( v11 )
  {
    outState = NULL;
    v12 = j_SL_GetRawHash(animsetName);
    v13 = g_animsetCache.m_endNodeBase.mp_parent;
    v14 = &g_animsetCache.m_endNodeBase;
    if ( !g_animsetCache.m_endNodeBase.mp_parent )
      goto LABEL_22;
    do
    {
      if ( v13[1].m_color < v12 )
      {
        v13 = v13->mp_right;
      }
      else
      {
        v14 = v13;
        v13 = v13->mp_left;
      }
    }
    while ( v13 );
    if ( v14 == &g_animsetCache.m_endNodeBase || v12 < v14[1].m_color )
LABEL_22:
      v15 = NULL;
    else
      v15 = (const Animset *)v14[1].mp_parent;
    if ( BG_Animset_GetStateInfoByName(v15, v11, &outState, pOutStartState) )
    {
      if ( LODWORD(v10[1].mp_parent) )
      {
        v16 = outState;
        if ( outState->numAnimAliases )
        {
          do
          {
            v17 = &v16->animAliases[v8];
            if ( v17->name == LODWORD(v10[1].mp_parent) )
              break;
            ++v8;
            *pOutStartEntry += v17->numAnims;
          }
          while ( v8 < v16->numAnimAliases );
        }
      }
    }
  }
}

/*
==============
BG_Animset_GetStateInfoByIndex
==============
*/
bool BG_Animset_GetStateInfoByIndex(const Animset *pAnimset, int stateIndex, AnimsetState **outState)
{
  __int64 v3; 
  bool result; 
  __int64 v7; 

  v3 = stateIndex;
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1019, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  if ( !pAnimset )
    return 0;
  if ( (unsigned int)v3 >= pAnimset->numStates )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v7, pAnimset->numStates) )
      __debugbreak();
  }
  result = 1;
  *outState = &pAnimset->states[v3];
  return result;
}

/*
==============
BG_Animset_GetStateInfoByIndex
==============
*/
bool BG_Animset_GetStateInfoByIndex(const scr_string_t animsetName, int stateIndex, AnimsetState **outState)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v8; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_9;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
LABEL_9:
    v8 = NULL;
  else
    v8 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  return BG_Animset_GetStateInfoByIndex(v8, stateIndex, outState);
}

/*
==============
BG_Animset_GetStateInfoByName
==============
*/
bool BG_Animset_GetStateInfoByName(const Animset *animset, const scr_string_t stateName, AnimsetState **outState, int *pOutStateIndex)
{
  AnimsetState *State; 

  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 990, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  if ( !animset )
    return 0;
  State = Animset_FindState(animset, stateName);
  *outState = State;
  if ( pOutStateIndex )
  {
    if ( State )
      *pOutStateIndex = State - animset->states;
  }
  return *outState != NULL;
}

/*
==============
BG_Animset_GetStateInfoByName
==============
*/
bool BG_Animset_GetStateInfoByName(const scr_string_t animsetName, const scr_string_t stateName, AnimsetState **outState, int *pOutStateIndex)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v11; 

  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1004, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_12;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
LABEL_12:
    v11 = NULL;
  else
    v11 = (const Animset *)p_m_endNodeBase[1].mp_parent;
  return BG_Animset_GetStateInfoByName(v11, stateName, outState, pOutStateIndex);
}

/*
==============
BG_Animset_GetStateNameFromIndex
==============
*/
__int64 BG_Animset_GetStateNameFromIndex(const Animset *pAnimset, int index)
{
  __int64 v2; 
  __int64 v5; 

  v2 = index;
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1077, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( (unsigned int)v2 >= pAnimset->numStates )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1078, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( pAnimset->numStates )", "index doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v5, pAnimset->numStates) )
      __debugbreak();
  }
  return (unsigned int)pAnimset->states[v2].name;
}

/*
==============
BG_Animset_GetStateNameFromIndex
==============
*/
__int64 BG_Animset_GetStateNameFromIndex(const scr_string_t animsetName, int index)
{
  __int64 v2; 
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v7; 
  const char *v8; 
  __int64 v10; 
  __int64 v11; 

  v2 = index;
  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v7 = NULL;
  }
  else
  {
    v7 = p_m_endNodeBase[1].mp_parent;
    if ( v7 )
      goto LABEL_15;
  }
  v8 = SL_ConvertToString(animsetName);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1086, ASSERT_TYPE_ASSERT, "(pAnimset)", "%s\n\tunable to find animset by name %s", "pAnimset", v8) )
    __debugbreak();
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1077, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
LABEL_15:
  if ( (unsigned int)v2 >= LODWORD(v7->mp_right) )
  {
    LODWORD(v11) = v7->mp_right;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1078, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( pAnimset->numStates )", "index doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return *((unsigned int *)&v7->mp_left->m_color + 28 * v2);
}

/*
==============
BG_Animset_IsAnimEntryValid
==============
*/
bool BG_Animset_IsAnimEntryValid(const scr_string_t animsetName, const unsigned int stateIndex, const unsigned int entryIndex)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const Animset *v8; 
  __int64 v10; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    goto LABEL_10;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &g_animsetCache.m_endNodeBase || RawHash < p_m_endNodeBase[1].m_color )
  {
LABEL_10:
    v8 = NULL;
  }
  else
  {
    v8 = (const Animset *)p_m_endNodeBase[1].mp_parent;
    if ( v8 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1068, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
LABEL_13:
  if ( stateIndex >= v8->numStates )
  {
    LODWORD(v10) = stateIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1069, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v10, v8->numStates) )
      __debugbreak();
  }
  return entryIndex < BG_Animset_GetNumEntriesForStateIndex(v8, stateIndex);
}

/*
==============
BG_Animset_IsLoaded
==============
*/
bool BG_Animset_IsLoaded(const scr_string_t animsetName)
{
  unsigned int RawHash; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  RawHash = j_SL_GetRawHash(animsetName);
  mp_parent = g_animsetCache.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &g_animsetCache.m_endNodeBase;
  if ( !g_animsetCache.m_endNodeBase.mp_parent )
    return 0;
  do
  {
    if ( mp_parent[1].m_color < RawHash )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  return p_m_endNodeBase != &g_animsetCache.m_endNodeBase && RawHash >= p_m_endNodeBase[1].m_color && p_m_endNodeBase[1].mp_parent != NULL;
}

/*
==============
BG_Animset_IsStateExecutionAttacker
==============
*/
bool BG_Animset_IsStateExecutionAttacker(const Animset *pAnimset, int stateIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = stateIndex;
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1669, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( (unsigned int)v2 >= pAnimset->numStates )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1670, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v5, pAnimset->numStates) )
      __debugbreak();
  }
  return pAnimset->states[v2].stateType == ANIMSTATE_EXECUTION_ATTACKER;
}

/*
==============
BG_Animset_IsStateExecutionVictim
==============
*/
bool BG_Animset_IsStateExecutionVictim(const Animset *pAnimset, int stateIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = stateIndex;
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1676, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( (unsigned int)v2 >= pAnimset->numStates )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 1677, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v5, pAnimset->numStates) )
      __debugbreak();
  }
  return pAnimset->states[v2].stateType == ANIMSTATE_EXECUTION_VICTIM;
}

/*
==============
PlayerAnimSet_SetString
==============
*/
void PlayerAnimSet_SetString(AnimsetAlias *alias, scr_string_t *to, scr_string_t from, unsigned int *inoutStringRefCount)
{
  const char *v8; 
  char *fmt; 

  if ( !alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 404, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  if ( from && *to != from )
  {
    if ( *inoutStringRefCount >= 0x24 )
    {
      v8 = SL_ConvertToString(alias->name);
      LODWORD(fmt) = 36;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AC60, 1348i64, v8, fmt);
    }
    SL_AddRefToString(from);
    *to = from;
    *((_DWORD *)&alias->u.m_AIAnimsetAlias[7].redAnims->name + (*inoutStringRefCount)++) = from;
  }
}

/*
==============
PlayerAnimset_FindPatchAlias
==============
*/
AnimsetAlias *PlayerAnimset_FindPatchAlias(const Animset *animset, scr_string_t stateName, scr_string_t aliasName)
{
  unsigned int numStates; 
  unsigned int v7; 
  AnimsetState *states; 
  __int64 v9; 
  unsigned int numAnimAliases; 
  __int64 v11; 
  AnimsetAlias *animAliases; 

  if ( !animset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 378, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  if ( !stateName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 379, ASSERT_TYPE_ASSERT, "(stateName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 380, ASSERT_TYPE_ASSERT, "(aliasName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "aliasName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !animset->u.m_AIAnimset->coverLeftCrouchOffset.leanPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 381, ASSERT_TYPE_ASSERT, "(animset->u.m_PlayerAnimset->patchName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "animset->u.m_PlayerAnimset->patchName != NULL_SCR_STRING") )
    __debugbreak();
  numStates = animset->numStates;
  v7 = 0;
  if ( !numStates )
    return 0i64;
  states = animset->states;
  while ( 1 )
  {
    v9 = v7;
    if ( states[v9].name == stateName )
    {
      numAnimAliases = states[v9].numAnimAliases;
      v11 = 0i64;
      if ( numAnimAliases )
        break;
    }
LABEL_20:
    if ( ++v7 >= numStates )
      return 0i64;
  }
  animAliases = states[v9].animAliases;
  while ( animAliases[v11].name != aliasName )
  {
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= numAnimAliases )
      goto LABEL_20;
  }
  return &animAliases[v11];
}

/*
==============
PlayerAnimset_FindPatchAnimset
==============
*/
const Animset *PlayerAnimset_FindPatchAnimset(const Animset *baseAnimSet)
{
  __int64 v3; 
  unsigned int v4; 
  DB_AssetEntryFlags *p_m_headEntries; 
  DB_AssetEntryPool *AssetEntryPool; 
  unsigned int v7; 
  char *v8; 
  __int64 assetCount; 
  __int64 v10; 
  scr_string_t constName; 
  const char *v12; 
  GetAllXAssetFunctor functor; 
  char v14[512]; 

  if ( !baseAnimSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 342, ASSERT_TYPE_ASSERT, "(baseAnimSet)", (const char *)&queryFormat, "baseAnimSet") )
    __debugbreak();
  if ( baseAnimSet->u.m_AIAnimset->coverLeftCrouchOffset.leanPitch )
    return 0i64;
  v3 = 0i64;
  functor.assetCount = 0;
  functor.type = ASSET_TYPE_ANIMSET;
  functor.assets = (XAssetHeader *)v14;
  functor.maxCount = 64;
  DB_LockHashRead();
  v4 = 0;
  p_m_headEntries = &s_assetManager.table.m_headEntries;
  AssetEntryPool = DB_GetAssetEntryPool();
  v7 = 0;
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<GetAllXAssetFunctor>(AssetEntryPool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v7, &functor);
    v7 += 64;
    ++v4;
    p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
  }
  while ( v4 < 0x1768 );
  DB_UnlockHashRead();
  if ( functor.assetCount )
  {
    v8 = v14;
    assetCount = (unsigned int)functor.assetCount;
    do
    {
      v10 = *(_QWORD *)v8;
      if ( *(_DWORD *)(*(_QWORD *)v8 + 32i64) == 1 )
      {
        constName = baseAnimSet->constName;
        if ( constName == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 28i64) )
        {
          if ( v3 )
          {
            v12 = SL_ConvertToString(constName);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AA90, 1347i64, v12);
          }
          v3 = v10;
        }
      }
      v8 += 8;
      --assetCount;
    }
    while ( assetCount );
  }
  return (const Animset *)v3;
}

/*
==============
PlayerAnimset_PatchAlias
==============
*/
void PlayerAnimset_PatchAlias(const Animset *toAnimset, const Animset *fromAnimset, AnimsetAlias *toAlias, const AnimsetAlias *fromAliasC)
{
  const char *v8; 
  const char *v9; 
  scr_string_t animAlias; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  __int128 v17; 
  AnimsetAnim *anims; 
  unsigned __int64 v19; 
  scr_string_t aimsetName; 
  const char *v21; 
  __int64 v22; 
  AnimsetAnim *v23; 
  scr_string_t name; 
  const char *v25; 
  __int64 v26; 
  __int128 v27; 
  __int64 i; 
  AnimsetAnim *v29; 
  unsigned int numFuncs; 
  unsigned int v31; 
  ASM_Function *funcs; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  ASM_Function *v36; 
  ASM_Function_Param *m_Params; 
  scr_string_t m_String; 
  ASM_Function_Param *v39; 
  const char *v40; 
  __int64 v41; 
  AnimsetAlias_Union v42; 
  scr_string_t redAnims; 
  const char *v44; 
  __int64 v45; 
  AnimsetAlias_Union v46; 
  scr_string_t redAnims_high; 
  const char *v48; 
  __int64 v49; 
  AnimsetAlias_Union v50; 
  signed int numRedAnims; 
  const char *v52; 
  __int64 v53; 
  AnimsetAlias_Union v54; 
  scr_string_t v55; 
  const char *v56; 
  char *fmt; 
  __int64 v58; 
  __int64 v59; 
  unsigned int inoutStringRefCount; 

  if ( !fromAliasC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 427, ASSERT_TYPE_ASSERT, "(fromAliasC)", (const char *)&queryFormat, "fromAliasC") )
    __debugbreak();
  if ( !toAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 428, ASSERT_TYPE_ASSERT, "(toAlias)", (const char *)&queryFormat, "toAlias") )
    __debugbreak();
  if ( !fromAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 429, ASSERT_TYPE_ASSERT, "(fromAnimset)", (const char *)&queryFormat, "fromAnimset") )
    __debugbreak();
  if ( !toAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 430, ASSERT_TYPE_ASSERT, "(toAnimset)", (const char *)&queryFormat, "toAnimset") )
    __debugbreak();
  if ( fromAnimset->animTree != toAnimset->animTree )
  {
    v8 = SL_ConvertToString(fromAnimset->constName);
    v9 = SL_ConvertToString(toAnimset->constName);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AD70, 1349i64, v9, v8);
  }
  if ( fromAliasC->numAnims )
  {
    animAlias = fromAliasC->animAlias;
    inoutStringRefCount = 0;
    PlayerAnimSet_SetString(toAlias, &toAlias->animAlias, animAlias, &inoutStringRefCount);
    toAlias->blendtime = fromAliasC->blendtime;
    if ( fromAliasC->numAddons )
    {
      v11 = SL_ConvertToString(fromAnimset->constName);
      v12 = SL_ConvertToString(toAnimset->constName);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9ADE0, 5783i64, v12, v11);
    }
    if ( LODWORD(fromAliasC->u.m_AIAnimsetAlias[6].redAnims) )
    {
      v13 = SL_ConvertToString(fromAnimset->constName);
      v14 = SL_ConvertToString(toAnimset->constName);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AE40, 5784i64, v14, v13);
    }
    PlayerAnimSet_SetString(toAlias, &toAlias->curveName, fromAliasC->curveName, &inoutStringRefCount);
    if ( fromAliasC->numAnims > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 464, ASSERT_TYPE_ASSERT, "( fromAlias->numAnims ) <= ( (1) )", "%s <= %s\n\t%i, %i", "fromAlias->numAnims", "PLAYERASM_MAX_NUM_PATCHABLE_ANIMS_PER_ALIAS", fromAliasC->numAnims, 1) )
      __debugbreak();
    if ( toAlias->numAnims != 1 )
    {
      LODWORD(v59) = 1;
      LODWORD(v58) = toAlias->numAnims;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 465, ASSERT_TYPE_ASSERT, "( toAlias->numAnims ) == ( (1) )", "%s == %s\n\t%i, %i", "toAlias->numAnims", "PLAYERASM_MAX_NUM_PATCHABLE_ANIMS_PER_ALIAS", v58, v59) )
        __debugbreak();
    }
    v15 = 0i64;
    v16 = inoutStringRefCount;
    v17 = 0i64;
    if ( fromAliasC->numAnims )
    {
      anims = toAlias->anims;
      do
      {
        v19 = v15;
        aimsetName = fromAliasC->anims[v15].aimsetName;
        if ( aimsetName && anims[v15].aimsetName != aimsetName )
        {
          if ( v16 >= 0x24 )
          {
            v21 = SL_ConvertToString(toAlias->name);
            LODWORD(fmt) = 36;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AC60, 1348i64, v21, fmt);
          }
          SL_AddRefToString(aimsetName);
          anims[v15].aimsetName = aimsetName;
          v22 = v16++;
          *((_DWORD *)&toAlias->u.m_AIAnimsetAlias[7].redAnims->name + v22) = aimsetName;
        }
        v23 = toAlias->anims;
        name = fromAliasC->anims[v15].name;
        if ( name && v23[v15].name != name )
        {
          if ( v16 >= 0x24 )
          {
            v25 = SL_ConvertToString(toAlias->name);
            LODWORD(fmt) = 36;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AC60, 1348i64, v25, fmt);
          }
          SL_AddRefToString(name);
          v23[v15].name = name;
          v26 = v16++;
          *((_DWORD *)&toAlias->u.m_AIAnimsetAlias[7].redAnims->name + v26) = name;
        }
        v15 = (unsigned int)(v15 + 1);
        toAlias->anims[v19].weight = fromAliasC->anims[v19].weight;
        anims = toAlias->anims;
        v27 = v17;
        *(float *)&v27 = *(float *)&v17 + anims[v19].weight;
        v17 = v27;
      }
      while ( (unsigned int)v15 < fromAliasC->numAnims );
    }
    for ( i = 0i64; (unsigned int)i < toAlias->numAnims; i = (unsigned int)(i + 1) )
    {
      v29 = toAlias->anims;
      if ( *(float *)&v17 == 0.0 || !v29[i].name )
        v29[i].weight = 0.0;
      else
        v29[i].weight = v29[i].weight / *(float *)&v17;
    }
    if ( fromAliasC->numFuncs > 3 )
    {
      LODWORD(v59) = 3;
      LODWORD(v58) = fromAliasC->numFuncs;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 492, ASSERT_TYPE_ASSERT, "( fromAlias->numFuncs ) <= ( (3) )", "%s <= %s\n\t%i, %i", "fromAlias->numFuncs", "PLAYERASM_MAX_NUM_PATCHABLE_CONDITIONS_PER_ALIAS", v58, v59) )
        __debugbreak();
    }
    numFuncs = fromAliasC->numFuncs;
    v31 = 0;
    toAlias->numFuncs = numFuncs;
    inoutStringRefCount = 0;
    if ( numFuncs )
    {
      funcs = toAlias->funcs;
      do
      {
        v33 = v31;
        funcs[v33].m_bBuiltin = fromAliasC->funcs[v33].m_bBuiltin;
        toAlias->funcs[v33].m_bNegate = fromAliasC->funcs[v33].m_bNegate;
        toAlias->funcs[v33].m_Flags = fromAliasC->funcs[v33].m_Flags;
        toAlias->funcs[v33].m_FuncID = fromAliasC->funcs[v33].m_FuncID;
        if ( toAlias->funcs[v33].m_NumParams > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 502, ASSERT_TYPE_ASSERT, "(toAlias->funcs[funcIndex].m_NumParams <= (8))", (const char *)&queryFormat, "toAlias->funcs[funcIndex].m_NumParams <= PLAYERASM_MAX_NUM_PATCHABLE_PARAMETERS_PER_CONDITION") )
          __debugbreak();
        v34 = 0;
        toAlias->funcs[v33].m_NumParams = fromAliasC->funcs[v33].m_NumParams;
        funcs = toAlias->funcs;
        if ( funcs[v33].m_NumParams > 0 )
        {
          v35 = 0i64;
          do
          {
            funcs[v33].m_Params[v35].m_Type = fromAliasC->funcs[v33].m_Params[v35].m_Type;
            v36 = toAlias->funcs;
            m_Params = fromAliasC->funcs[v33].m_Params;
            if ( v36[v33].m_Params[v35].m_Type == ParamType_String )
            {
              m_String = m_Params[v35].u.m_String;
              v39 = v36[v33].m_Params;
              if ( m_String && v39[v35].u.m_Int != m_String )
              {
                if ( v16 >= 0x24 )
                {
                  v40 = SL_ConvertToString(toAlias->name);
                  LODWORD(fmt) = 36;
                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AC60, 1348i64, v40, fmt);
                }
                SL_AddRefToString(m_String);
                v39[v35].u.m_Int = m_String;
                v41 = v16++;
                *((_DWORD *)&toAlias->u.m_AIAnimsetAlias[7].redAnims->name + v41) = m_String;
              }
            }
            else
            {
              v36[v33].m_Params[v35].u.m_Int = m_Params[v35].u.m_Int;
            }
            funcs = toAlias->funcs;
            ++v34;
            ++v35;
          }
          while ( v34 < funcs[v33].m_NumParams );
        }
        v31 = inoutStringRefCount + 1;
        inoutStringRefCount = v31;
      }
      while ( v31 < toAlias->numFuncs );
    }
    LODWORD(toAlias->u.m_AIAnimsetAlias->redAnims) = fromAliasC->u.m_AIAnimsetAlias->redAnims;
    HIDWORD(toAlias->u.m_AIAnimsetAlias->redAnims) = HIDWORD(fromAliasC->u.m_AIAnimsetAlias->redAnims);
    *(_QWORD *)&toAlias->u.m_AIAnimsetAlias->numRedAnims = *(_QWORD *)&fromAliasC->u.m_AIAnimsetAlias->numRedAnims;
    *(__m256i *)&toAlias->u.m_AIAnimsetAlias[1].redAnims = *(__m256i *)&fromAliasC->u.m_AIAnimsetAlias[1].redAnims;
    v42.m_AIAnimsetAlias = (AIAnimsetAlias *)toAlias->u;
    redAnims = (scr_string_t)fromAliasC->u.m_AIAnimsetAlias[3].redAnims;
    if ( redAnims && LODWORD(v42.m_AIAnimsetAlias[3].redAnims) != redAnims )
    {
      if ( v16 >= 0x24 )
      {
        v44 = SL_ConvertToString(toAlias->name);
        LODWORD(fmt) = 36;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AC60, 1348i64, v44, fmt);
      }
      SL_AddRefToString(redAnims);
      LODWORD(v42.m_AIAnimsetAlias[3].redAnims) = redAnims;
      v45 = v16++;
      *((_DWORD *)&toAlias->u.m_AIAnimsetAlias[7].redAnims->name + v45) = redAnims;
    }
    v46.m_AIAnimsetAlias = (AIAnimsetAlias *)toAlias->u;
    redAnims_high = HIDWORD(fromAliasC->u.m_AIAnimsetAlias[3].redAnims);
    if ( redAnims_high && HIDWORD(v46.m_AIAnimsetAlias[3].redAnims) != redAnims_high )
    {
      if ( v16 >= 0x24 )
      {
        v48 = SL_ConvertToString(toAlias->name);
        LODWORD(fmt) = 36;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AC60, 1348i64, v48, fmt);
      }
      SL_AddRefToString(redAnims_high);
      HIDWORD(v46.m_AIAnimsetAlias[3].redAnims) = redAnims_high;
      v49 = v16++;
      *((_DWORD *)&toAlias->u.m_AIAnimsetAlias[7].redAnims->name + v49) = redAnims_high;
    }
    v50.m_AIAnimsetAlias = (AIAnimsetAlias *)toAlias->u;
    numRedAnims = fromAliasC->u.m_AIAnimsetAlias[3].numRedAnims;
    if ( numRedAnims && v50.m_AIAnimsetAlias[3].numRedAnims != numRedAnims )
    {
      if ( v16 >= 0x24 )
      {
        v52 = SL_ConvertToString(toAlias->name);
        LODWORD(fmt) = 36;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AC60, 1348i64, v52, fmt);
      }
      SL_AddRefToString((scr_string_t)numRedAnims);
      v50.m_AIAnimsetAlias[3].numRedAnims = numRedAnims;
      v53 = v16++;
      *((_DWORD *)&toAlias->u.m_AIAnimsetAlias[7].redAnims->name + v53) = numRedAnims;
    }
    v54.m_AIAnimsetAlias = (AIAnimsetAlias *)toAlias->u;
    v55 = *(&fromAliasC->u.m_AIAnimsetAlias[3].numRedAnims + 1);
    if ( v55 && *(&v54.m_AIAnimsetAlias[3].numRedAnims + 1) != v55 )
    {
      if ( v16 >= 0x24 )
      {
        v56 = SL_ConvertToString(toAlias->name);
        LODWORD(fmt) = 36;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9AC60, 1348i64, v56, fmt);
      }
      SL_AddRefToString(v55);
      *(&v54.m_AIAnimsetAlias[3].numRedAnims + 1) = v55;
      *((_DWORD *)&toAlias->u.m_AIAnimsetAlias[7].redAnims->name + v16) = v55;
    }
    LODWORD(toAlias->u.m_AIAnimsetAlias[4].redAnims) = fromAliasC->u.m_AIAnimsetAlias[4].redAnims;
    HIDWORD(toAlias->u.m_AIAnimsetAlias[4].redAnims) = HIDWORD(fromAliasC->u.m_AIAnimsetAlias[4].redAnims);
    toAlias->u.m_AIAnimsetAlias[4].numRedAnims = fromAliasC->u.m_AIAnimsetAlias[4].numRedAnims;
    *(&toAlias->u.m_AIAnimsetAlias[4].numRedAnims + 1) = *(&fromAliasC->u.m_AIAnimsetAlias[4].numRedAnims + 1);
    LOBYTE(toAlias->u.m_AIAnimsetAlias[5].redAnims) = fromAliasC->u.m_AIAnimsetAlias[5].redAnims;
    LOBYTE(toAlias->u.m_AIAnimsetAlias[8].numRedAnims) = fromAliasC->u.m_AIAnimsetAlias[8].numRedAnims;
  }
}

/*
==============
PlayerAnimset_ValidateAddons
==============
*/
void PlayerAnimset_ValidateAddons(unsigned int animClassIndex, const Animset *const pAnimset, XAnim_s *const anims, unsigned int stateIndex, const AnimsetAlias *const alias)
{
  unsigned int v6; 
  const AnimsetAlias *v7; 
  AnimsetAlias_Union v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  scr_string_t v13; 
  AnimsetState *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int TreeParent; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  AnimsetState *outState; 
  int pOutStateIndex; 
  unsigned int v28; 

  v28 = stateIndex;
  v6 = animClassIndex;
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 808, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 809, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  v7 = alias;
  if ( !alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 810, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  v8.m_AIAnimsetAlias = (AIAnimsetAlias *)v7->u;
  if ( !v8.m_AIAnimsetAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 813, ASSERT_TYPE_ASSERT, "(playerAlias)", (const char *)&queryFormat, "playerAlias") )
    __debugbreak();
  v9 = 0;
  if ( LODWORD(v8.m_AIAnimsetAlias[6].redAnims) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)&v8.m_AIAnimsetAlias[5].numRedAnims;
      v11 = 32i64 * v9;
      v12 = *(_DWORD *)(v11 + v10 + 4);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v11 + v10);
        if ( v13 )
        {
          if ( BG_PlayerASM_GetStateInfoByName(v6, v13, &outState, &pOutStateIndex) )
          {
            v14 = outState;
            v15 = 0i64;
            if ( outState->numAnimAliases )
              break;
          }
        }
      }
LABEL_28:
      if ( ++v9 >= LODWORD(v8.m_AIAnimsetAlias[6].redAnims) )
        return;
    }
    while ( 1 )
    {
      v16 = (__int64)&v14->animAliases[v15];
      if ( *(_DWORD *)v16 == v12 )
      {
        v17 = 0i64;
        if ( *(_DWORD *)(v16 + 16) )
          break;
      }
LABEL_26:
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= v14->numAnimAliases )
      {
        v6 = animClassIndex;
        goto LABEL_28;
      }
    }
    while ( 1 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      v19 = *(unsigned __int16 *)(v18 + 24 * v17 + 16);
      if ( *(_WORD *)(v18 + 24 * v17 + 16) )
      {
        if ( XAnimIsLeafNode(anims, *(unsigned __int16 *)(v18 + 24 * v17 + 16)) )
        {
          TreeParent = XAnimGetTreeParent(anims, v19);
          if ( TreeParent )
          {
            if ( XAnimBlendSpace_IsBlendspaceNode(anims, TreeParent) )
              break;
          }
        }
      }
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 16) )
      {
        v14 = outState;
        goto LABEL_26;
      }
    }
    v21 = SL_ConvertToString((scr_string_t)*(_DWORD *)v16);
    v22 = SL_ConvertToString(alias->name);
    v23 = SL_ConvertToString(pAnimset->states[v28].name);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9B4A0, 6438i64, pAnimset->name, v23, v22, v21);
  }
}

/*
==============
PlayerAnimset_ValidateAnimTrees
==============
*/
void PlayerAnimset_ValidateAnimTrees(void)
{
  BgStatic *ActiveStatics; 
  __int64 v1; 
  unsigned int v2; 
  const Animset **v3; 
  XAnim_s *v4; 
  const Animset *v5; 
  unsigned int v6; 
  AnimsetState *states; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  const AnimsetAlias *v12; 
  SuitDef *outSuit; 
  int SuitMaxFacialTypes; 
  const Animset **v15; 

  if ( PlayerASM_IsEnabled() )
  {
    ActiveStatics = BgStatic::GetActiveStatics();
    v1 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 879, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v2 = 0;
    SuitMaxFacialTypes = BG_GetSuitMaxFacialTypes((const SuitDef **)&outSuit);
    v3 = (const Animset **)(v1 + 19016);
    v15 = v3;
    do
    {
      v4 = (XAnim_s *)*(v3 - 64);
      if ( v4 )
      {
        XAnimCustomNodeVisitBindingsByParameterName(v4, scr_const.playerASM_facial_type, DYNAMIC, PlayerAnimset_ValidateFacialAnimNodes, &outSuit);
        if ( *v3 )
        {
          if ( (*v3)->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 902, ASSERT_TYPE_ASSERT, "(bgameAnim->playerAnimset[animClassIndex]->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "bgameAnim->playerAnimset[animClassIndex]->mode == ASM_MODE_PLAYER") )
            __debugbreak();
          v5 = *v3;
          v6 = 0;
          if ( (*v3)->numStates )
          {
            do
            {
              states = v5->states;
              v8 = 0i64;
              v9 = 112i64 * v6;
              if ( states[(unsigned __int64)v9 / 0x70].numAnimAliases )
              {
                v10 = v9 + 8;
                v11 = v9 + 16;
                do
                {
                  v12 = (const AnimsetAlias *)(*(_QWORD *)((char *)&states->name + v10) + 80 * v8);
                  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 911, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
                    __debugbreak();
                  PlayerAnimset_ValidateAddons(v2, v5, v4, v6, v12);
                  states = v5->states;
                  v8 = (unsigned int)(v8 + 1);
                }
                while ( (unsigned int)v8 < *(scr_string_t *)((char *)&states->name + v11) );
              }
              ++v6;
            }
            while ( v6 < v5->numStates );
            v3 = v15;
          }
        }
      }
      ++v3;
      ++v2;
      v15 = v3;
    }
    while ( v2 < 0x40 );
  }
}

/*
==============
PlayerAnimset_ValidateFacialAnimNodes
==============
*/
void PlayerAnimset_ValidateFacialAnimNodes(const XAnim_s *anims, scr_string_t gameParameterName, const XAnimParameterBinding *binding, void *funcData)
{
  __int64 destAnimIndex; 
  XAnimEntry *v8; 
  int NumChildren; 
  const char **v10; 
  char *debugName; 
  int v12; 
  const char *v13; 
  const char *AnimDebugName; 
  char *fmt; 
  __int64 v16; 

  if ( !binding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 780, ASSERT_TYPE_ASSERT, "(binding)", (const char *)&queryFormat, "binding") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 781, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !funcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 782, ASSERT_TYPE_ASSERT, "(funcData)", (const char *)&queryFormat, "funcData") )
    __debugbreak();
  destAnimIndex = binding->destAnimIndex;
  v8 = &anims->entries[destAnimIndex];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 786, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  if ( XAnimIsCustomNodeType(v8->nodeType) && !XAnimIsLeafNode(anims, destAnimIndex) )
  {
    NumChildren = XAnimGetNumChildren(anims, destAnimIndex);
    if ( NumChildren < *((_DWORD *)funcData + 2) )
    {
      if ( !*(_QWORD *)funcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animset_util.cpp", 795, ASSERT_TYPE_ASSERT, "(facialFuncData->suitDef)", (const char *)&queryFormat, "facialFuncData->suitDef") )
        __debugbreak();
      v10 = *(const char ***)funcData;
      debugName = "<null anim>";
      v12 = *((_DWORD *)funcData + 2);
      v13 = *v10;
      if ( anims )
        debugName = anims->debugName;
      AnimDebugName = XAnimGetAnimDebugName(anims, destAnimIndex);
      LODWORD(v16) = v12;
      LODWORD(fmt) = NumChildren;
      Com_PrintError(19, "PlayerASM facial node '%s' in '%s' tree has only (%d) child anim(s) but found facial type index (%d) in suit '%s'. Check the suit definition or add more child animations.\n", AnimDebugName, debugName, fmt, v16, v13);
    }
  }
}

