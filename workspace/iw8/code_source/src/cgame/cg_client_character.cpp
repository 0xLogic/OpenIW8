/*
==============
CG_ClientCharacter_FindAnimTreeData
==============
*/

int __fastcall CG_ClientCharacter_FindAnimTreeData(const char *atrTreeName)
{
  return ?CG_ClientCharacter_FindAnimTreeData@@YAHPEBD@Z(atrTreeName);
}

/*
==============
CG_ClientCharacter_Shutdown
==============
*/

void __fastcall CG_ClientCharacter_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_ClientCharacter_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientCharacter_GetCharacterLoaded
==============
*/

bool __fastcall CG_ClientCharacter_GetCharacterLoaded(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  return ?CG_ClientCharacter_GetCharacterLoaded@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CG_ClientCharacter_ShutdownEntity
==============
*/

void __fastcall CG_ClientCharacter_ShutdownEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_ClientCharacter_ShutdownEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_ClientCharacter_ProcessNoteTrack
==============
*/

void __fastcall CG_ClientCharacter_ProcessNoteTrack(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const XAnimNotify *notify)
{
  ?CG_ClientCharacter_ProcessNoteTrack@@YAXW4LocalClientNum_t@@IPEBUXAnimNotify@@@Z(localClientNum, entityIndex, notify);
}

/*
==============
CG_ClientCharacter_FindAnimTrees
==============
*/

void CG_ClientCharacter_FindAnimTrees(void)
{
  ?CG_ClientCharacter_FindAnimTrees@@YAXXZ();
}

/*
==============
CG_ClientCharacter_UpdateCheckAnimPackages
==============
*/

void __fastcall CG_ClientCharacter_UpdateCheckAnimPackages(const LocalClientNum_t localClientNum)
{
  ?CG_ClientCharacter_UpdateCheckAnimPackages@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientCharacter_GetCharacterStreamed
==============
*/

bool __fastcall CG_ClientCharacter_GetCharacterStreamed(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  return ?CG_ClientCharacter_GetCharacterStreamed@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CG_ClientCharacter_HasCharacterModels
==============
*/

bool __fastcall CG_ClientCharacter_HasCharacterModels(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  return ?CG_ClientCharacter_HasCharacterModels@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CG_ClientCharacter_ResetEntity
==============
*/

void __fastcall CG_ClientCharacter_ResetEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_ClientCharacter_ResetEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_ClientCharacter_ProcessEntity
==============
*/

void __fastcall CG_ClientCharacter_ProcessEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_ClientCharacter_ProcessEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_ClientCharacter_PrintCharacterNotLoadedModels
==============
*/

void __fastcall CG_ClientCharacter_PrintCharacterNotLoadedModels(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  ?CG_ClientCharacter_PrintCharacterNotLoadedModels@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientIndex);
}

/*
==============
CG_ClientCharacter_Init
==============
*/

void __fastcall CG_ClientCharacter_Init(const LocalClientNum_t localClientNum)
{
  ?CG_ClientCharacter_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientCharacter_FindAnims
==============
*/

void CG_ClientCharacter_FindAnims(void)
{
  ?CG_ClientCharacter_FindAnims@@YAXXZ();
}

/*
==============
CG_ClientCharacter_AllocXAnim
==============
*/
void *CG_ClientCharacter_AllocXAnim(unsigned __int64 size)
{
  HunkUser *HunkUser; 

  HunkUser = CL_Main_GetHunkUser();
  return Mem_HunkUser_AllocInternal(HunkUser, size, 8ui64, "CG_ClientCharacter_AllocXAnim");
}

/*
==============
CG_ClientCharacter_AttachIKTarget
==============
*/
void CG_ClientCharacter_AttachIKTarget(const LocalClientNum_t localClientNum, const XAnimIKType targetType, const Weapon *r_heldWeapon, const bool useDefaultModel, const bool isDualWielding, DObjModel *models, CharacterModelType (*dobjModelTypes)[32], unsigned __int16 *modelCount, unsigned __int16 *heldWeapIndex, unsigned __int16 *stowWeapIndex, const XAnimWeaponIKModelsContainer *weaponIKModels)
{
  unsigned __int16 *v13; 
  __int64 v14; 
  XModel *ikTargetRight; 
  int v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  XAnimIKTagRequest result; 
  XAnimIKTagRequest tagRequest; 

  v13 = heldWeapIndex;
  v14 = localClientNum;
  if ( !models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 305, ASSERT_TYPE_ASSERT, "(models)", (const char *)&queryFormat, "models") )
    __debugbreak();
  if ( !modelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 306, ASSERT_TYPE_ASSERT, "(modelCount)", (const char *)&queryFormat, "modelCount") )
    __debugbreak();
  if ( !heldWeapIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 307, ASSERT_TYPE_ASSERT, "(heldWeapIndex)", (const char *)&queryFormat, "heldWeapIndex") )
    __debugbreak();
  if ( !stowWeapIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 308, ASSERT_TYPE_ASSERT, "(stowWeapIndex)", (const char *)&queryFormat, "stowWeapIndex") )
    __debugbreak();
  if ( !weaponIKModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 309, ASSERT_TYPE_ASSERT, "(weaponIKModels)", (const char *)&queryFormat, "weaponIKModels") )
    __debugbreak();
  if ( targetType )
  {
    if ( targetType != XANIM_IK_ACTOR_RIGHT_HAND )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 322, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid IK target specified for character") )
        __debugbreak();
      return;
    }
    ikTargetRight = s_characterAnimDataShared[v14].ikTargetRight;
  }
  else
  {
    ikTargetRight = s_characterAnimDataShared[v14].ikTargetLeft;
  }
  if ( !ikTargetRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 326, ASSERT_TYPE_ASSERT, "(targetModel != 0)", "%s\n\tTrying to attach IK targets to client character but the IK target models have not been loaded.", "targetModel != NULL") )
    __debugbreak();
  if ( XAnimWeaponIKModelsContainer::GetXModelCount((XAnimWeaponIKModelsContainer *)weaponIKModels) >= 1 )
  {
    tagRequest = *XAnimIKSetupTagRequest(&result, r_heldWeapon, 0, 0, 0, isDualWielding);
    v16 = XAnimIKAttachTargetToWeapon(targetType, ikTargetRight, weaponIKModels, &tagRequest, models, modelCount, dobjModelTypes);
    if ( v16 >= 0 )
    {
      v17 = 2i64;
      do
      {
        if ( *v13 != 0xFFFF )
        {
          v18 = *v13;
          if ( truncate_cast<unsigned short,int>(v16) < v18 )
            *v13 = v18 + 1;
        }
        ++v13;
        --v17;
      }
      while ( v17 );
      v19 = *stowWeapIndex;
      if ( truncate_cast<unsigned short,int>(v16) < v19 )
        *stowWeapIndex = v19 + 1;
    }
  }
}

/*
==============
CG_ClientCharacter_BuildDObj
==============
*/
void CG_ClientCharacter_BuildDObj(const LocalClientNum_t localClientNum, const centity_t *cent, const Weapon *r_heldWeapon, const Weapon *r_stowWeapon, const Weapon *r_weaponAccessory, const CharacterDObjLoadedFlags loadState)
{
  const Weapon *v6; 
  __int64 v7; 
  unsigned int number; 
  unsigned int v10; 
  unsigned int v11; 
  const UICharacterState *State; 
  bool v13; 
  const UICharacterState *v14; 
  bool v15; 
  CharacterDObjLoadedFlags v16; 
  unsigned int v17; 
  bool v18; 
  const char *v19; 
  const XModel *v20; 
  unsigned __int16 v21; 
  Weapon *v22; 
  __int64 v23; 
  PlayerHandIndex v24; 
  __int64 i; 
  scr_string_t tag_weapon_left; 
  XAnimWeaponIKModelsContainer *outWeaponIKModels; 
  unsigned __int16 v28; 
  unsigned __int16 v29; 
  __int64 v30; 
  CharacterModelType v31; 
  __int64 v32; 
  unsigned __int16 weaponIdx; 
  WeaponDef **v34; 
  unsigned __int16 v35; 
  __int64 v36; 
  CharacterModelType *v37; 
  unsigned __int16 v38; 
  unsigned __int16 *v39; 
  __int64 v40; 
  unsigned __int16 v41; 
  __int64 v42; 
  LocalClientNum_t v43; 
  Weapon *v44; 
  Weapon *v45; 
  bool v46; 
  bool v47; 
  centity_t *v48; 
  __int64 v49; 
  __int64 v50; 
  const XModel *v51; 
  scr_string_t String; 
  LocalClientNum_t v53; 
  XAnimTree *CurrentAnimTree; 
  DObj *v55; 
  Weapon *v56; 
  Weapon *v57; 
  DObjModel *outDObjModel; 
  __int64 attachBoneName; 
  __int64 maxDObjModels; 
  DObjModel *outDObjModels; 
  unsigned __int16 modelCount[2]; 
  unsigned __int16 stowWeapIndex[2]; 
  LocalClientNum_t localClientNuma; 
  unsigned __int16 heldWeapIndex[4]; 
  unsigned __int16 v66; 
  const UICharacterState *v67; 
  centity_t *centa; 
  Weapon *r_weapon; 
  Weapon *weapon; 
  Weapon *v71; 
  entityState_t *p_nextState; 
  DObjStickerSlotList result; 
  DObjStickerSlotList stickerSlots; 
  XAnimWeaponIKModelsContainer weaponIKModels; 
  CharacterModelType dobjModelTypes[32]; 
  DObjModel models[32]; 

  v6 = r_heldWeapon;
  v7 = localClientNum;
  localClientNuma = localClientNum;
  v71 = (Weapon *)r_weaponAccessory;
  weapon = (Weapon *)r_stowWeapon;
  r_weapon = (Weapon *)r_heldWeapon;
  centa = (centity_t *)cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 405, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 406, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(outDObjModel) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outDObjModel, 2) )
      __debugbreak();
  }
  number = cent->nextState.number;
  p_nextState = &cent->nextState;
  if ( number > 0x9E4 )
  {
    LODWORD(attachBoneName) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", attachBoneName) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(attachBoneName) = 2;
    LODWORD(outDObjModel) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outDObjModel, attachBoneName) )
      __debugbreak();
  }
  v10 = 2533 * v7 + number;
  if ( v10 >= 0x13CA )
  {
    LODWORD(attachBoneName) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", attachBoneName) )
      __debugbreak();
  }
  v11 = clientObjMap[v10];
  if ( v11 )
  {
    if ( v11 >= (unsigned int)s_objCount )
    {
      LODWORD(attachBoneName) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", attachBoneName) )
        __debugbreak();
    }
    if ( s_objBuf[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 408, ASSERT_TYPE_ASSERT, "(Com_GetClientDObj( cent->nextState.number, localClientNum ) == 0)", (const char *)&queryFormat, "Com_GetClientDObj( cent->nextState.number, localClientNum ) == NULL") )
      __debugbreak();
  }
  memset_0(dobjModelTypes, 0, sizeof(dobjModelTypes));
  State = CL_UICharacter_GetState((const LocalClientNum_t)v7, cent->nextState.clientNum);
  v13 = CgWeaponMap::ms_instance[v7] == NULL;
  v14 = State;
  v67 = State;
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v15 = BG_PlayerOrEntityDualWielding(CgWeaponMap::ms_instance[v7], NULL, &cent->nextState, NULL);
  v16 = loadState;
  v17 = 0;
  modelCount[0] = 0;
  v18 = v15;
  if ( (loadState & 1) != 0 )
  {
    if ( v14->modelState.bodyPartModelCount )
      goto LABEL_112;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 421, ASSERT_TYPE_ASSERT, "(requestedState->modelState.bodyPartModelCount > 0)", (const char *)&queryFormat, "requestedState->modelState.bodyPartModelCount > 0") )
      __debugbreak();
    if ( v14->modelState.bodyPartModelCount )
    {
LABEL_112:
      do
      {
        v19 = v14->modelState.bodyPartModels[(unsigned __int64)v17];
        if ( !*v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 425, ASSERT_TYPE_ASSERT, "(bodyPartModelName[0])", "%s\n\tShould not have empty string for body part", "bodyPartModelName[0]") )
          __debugbreak();
        v20 = R_RegisterModel(v19);
        DObjInitModel(v20, (scr_string_t)0, 1, 0, NULL, &models[modelCount[0]++]);
        ++v17;
      }
      while ( v17 < v14->modelState.bodyPartModelCount );
      v6 = r_weapon;
    }
  }
  *(_DWORD *)heldWeapIndex = -1;
  XAnimWeaponIKModelsContainer::XAnimWeaponIKModelsContainer(&weaponIKModels);
  if ( !v14->modelState.isHeldWeaponHidden && v6->weaponIdx )
  {
    v21 = modelCount[0];
    v13 = !v14->modelState.useAkimbo;
    stowWeapIndex[0] = modelCount[0];
    v22 = r_weapon;
    v23 = !v13;
    v24 = WEAPON_HAND_DEFAULT;
    for ( i = 0i64; i <= v23; ++i )
    {
      tag_weapon_left = scr_const.tag_weapon_left;
      heldWeapIndex[i] = v21;
      if ( v24 == WEAPON_HAND_DEFAULT )
        tag_weapon_left = scr_const.tag_weapon_right;
      outWeaponIKModels = &weaponIKModels;
      if ( v24 )
        outWeaponIKModels = NULL;
      CG_Weapons_BuildDObj(v24, v22, 0, 0, (loadState & 2) == 0, v18, tag_weapon_left, 0x20u, models, modelCount, outWeaponIKModels);
      v21 = modelCount[0];
      ++v24;
    }
    v28 = stowWeapIndex[0];
    v16 = loadState;
    if ( modelCount[0] != stowWeapIndex[0] )
    {
      v29 = heldWeapIndex[1];
      v30 = (unsigned __int16)(modelCount[0] - stowWeapIndex[0]);
      do
      {
        v31 = CHAR_MODEL_WEAPON_HELD;
        if ( v29 != 0xFFFF && v28 >= v29 )
          v31 = CHAR_MODEL_WEAPON_HELD_LEFT;
        v32 = v28++;
        dobjModelTypes[v32] = v31;
        --v30;
      }
      while ( v30 );
      v16 = loadState;
    }
  }
  stowWeapIndex[0] = modelCount[0];
  weaponIdx = weapon->weaponIdx;
  if ( weapon->weaponIdx )
  {
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(attachBoneName) = bg_lastParsedWeaponIndex;
      LODWORD(outDObjModel) = weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", outDObjModel, attachBoneName) )
        __debugbreak();
    }
    v34 = &bg_weaponDefs[weaponIdx];
    if ( !*v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    v35 = modelCount[0];
    CG_Weapons_BuildDObj(WEAPON_HAND_DEFAULT, weapon, 0, 1, (v16 & 4) == 0, v18, (*v34)->stowOffsetAttachTag, 0x20u, models, modelCount, NULL);
    LOWORD(v36) = modelCount[0] - v35;
    if ( modelCount[0] != v35 )
    {
      v36 = (unsigned __int16)v36;
      v37 = &dobjModelTypes[v35];
      while ( v36 )
      {
        *v37++ = CHAR_MODEL_WEAPON_STOWED;
        --v36;
      }
    }
  }
  v38 = modelCount[0];
  v39 = heldWeapIndex;
  v66 = modelCount[0];
  v40 = 2i64;
  do
  {
    v41 = *v39;
    if ( *v39 != 0xFFFF && v38 <= v41 )
    {
      LODWORD(outDObjModels) = v41;
      LODWORD(maxDObjModels) = v38;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 514, ASSERT_TYPE_ASSERT, "( accessoryWeaponModelIndex ) > ( heldWeaponModelIndex[hand] )", "%s > %s\n\t%i, %i", "accessoryWeaponModelIndex", "heldWeaponModelIndex[hand]", maxDObjModels, outDObjModels) )
        __debugbreak();
    }
    ++v39;
    --v40;
  }
  while ( v40 );
  v42 = (__int64)v67;
  v43 = localClientNuma;
  v44 = weapon;
  if ( v71->weaponIdx )
    CG_Weapons_BuildDObj(WEAPON_HAND_LEFT, v71, 0, 0, (loadState & 8) == 0, v18, (scr_string_t)0, 0x20u, models, modelCount, NULL);
  if ( *(_BYTE *)(v42 + 4853) || (v45 = r_weapon, !r_weapon->weaponIdx) || !memcmp_0(r_weapon, v44, 0x3Cui64) )
  {
    v47 = 0;
  }
  else
  {
    v46 = (loadState & 2) == 0;
    CG_ClientCharacter_AttachIKTarget(v43, XANIM_IK_ACTOR_LEFT_HAND, v45, v46, v18, models, (CharacterModelType (*)[32])dobjModelTypes, modelCount, heldWeapIndex, stowWeapIndex, &weaponIKModels);
    CG_ClientCharacter_AttachIKTarget(v43, XANIM_IK_ACTOR_RIGHT_HAND, v45, v46, v18, models, (CharacterModelType (*)[32])dobjModelTypes, modelCount, heldWeapIndex, stowWeapIndex, &weaponIKModels);
    v47 = 1;
  }
  v48 = centa;
  *(_QWORD *)heldWeapIndex = CG_ClientCharacter_GetCharacterState(v43, centa);
  v49 = *(_QWORD *)heldWeapIndex;
  if ( !*(_QWORD *)heldWeapIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 555, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  v50 = v49 + 5160;
  if ( v49 + 5160 != v49 + 9384 )
  {
    do
    {
      if ( *(_QWORD *)(v50 + 520) )
      {
        v51 = R_RegisterModel((const char *)v50);
        if ( !v51 )
        {
          if ( !*(_QWORD *)(v50 + 520) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 565, ASSERT_TYPE_ASSERT, "(itr->animParts)", (const char *)&queryFormat, "itr->animParts") )
            __debugbreak();
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144277D80, 420i64, v50, **(_QWORD **)(v50 + 520));
          v50 += 528i64;
        }
        String = SL_GetString((const char *)(v50 + 260), 0);
        if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 571, ASSERT_TYPE_ASSERT, "(attachTag != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "attachTag != NULL_SCR_STRING") )
          __debugbreak();
        DObjInitModel(v51, String, 1, 0, NULL, &models[modelCount[0]]);
        SL_RemoveRefToString(String);
        ++modelCount[0];
      }
      v50 += 528i64;
    }
    while ( v50 != v49 + 9384 );
    v49 = *(_QWORD *)heldWeapIndex;
    v38 = v66;
    v42 = (__int64)v67;
    v48 = centa;
  }
  if ( modelCount[0] )
  {
    v53 = localClientNuma;
    CurrentAnimTree = CG_ClientCharacter_GetCurrentAnimTree(localClientNuma, v48);
    if ( !CurrentAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 583, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    v55 = Com_ClientDObjCreate(models, modelCount[0], CurrentAnimTree, v48->nextState.number, v53, v47, v48->nextState.number);
    if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 586, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    DObjSetCamoMaterialOverride(v55, models, modelCount[0]);
    if ( !*(_BYTE *)(v42 + 4853) && (loadState & 2) != 0 )
    {
      v56 = r_weapon;
      CG_ClientCharacter_SetHidePartBits(v55, r_weapon, (const CharacterModelType (*)[32])dobjModelTypes, CHAR_MODEL_WEAPON_HELD, 0, v38 - 1);
      CG_ClientCharacter_SetHidePartBits(v55, v56, (const CharacterModelType (*)[32])dobjModelTypes, CHAR_MODEL_WEAPON_HELD_LEFT, 0, v38 - 1);
      centa = (centity_t *)0xD0000000Ci64;
      stickerSlots = *CG_Weapons_BuildStickerSlotList(&result, v53, (const CharacterModelType *)&centa, 2, v56);
      DObjSetStickerMaterialOverrides(v55, dobjModelTypes, &stickerSlots);
    }
    if ( (loadState & 4) != 0 )
    {
      v57 = weapon;
      CG_ClientCharacter_SetHidePartBits(v55, weapon, (const CharacterModelType (*)[32])dobjModelTypes, CHAR_MODEL_WEAPON_STOWED, 0, modelCount[0] - 1);
      localClientNuma = 15;
      stickerSlots = *CG_Weapons_BuildStickerSlotList(&result, v53, (const CharacterModelType *)&localClientNuma, 1, v57);
      DObjSetStickerMaterialOverrides(v55, dobjModelTypes, &stickerSlots);
    }
    if ( (loadState & 8) != 0 )
      CG_ClientCharacter_SetHidePartBits(v55, v71, (const CharacterModelType (*)[32])dobjModelTypes, CHAR_MODEL_WEAPON_HELD_LEFT, v38, modelCount[0] - 1);
    CG_Entity_CreateCloth(v53, p_nextState->number);
  }
  *(_BYTE *)(v49 + 4858) &= ~1u;
  *(_BYTE *)(v49 + 4858) |= 6u;
}

/*
==============
CG_ClientCharacter_CreateAnimTree
==============
*/
void CG_ClientCharacter_CreateAnimTree(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  CharacterAnimData *CharacterAnimData; 
  CGCharacterState *CharacterState; 
  XAnimOwner v6; 

  CharacterAnimData = CG_ClientCharacter_GetCharacterAnimData(cent);
  if ( !CharacterAnimData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1676, ASSERT_TYPE_ASSERT, "(characterAnimData)", (const char *)&queryFormat, "characterAnimData") )
    __debugbreak();
  if ( !CharacterAnimData->parsedTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1677, ASSERT_TYPE_ASSERT, "(characterAnimData->parsedTree)", (const char *)&queryFormat, "characterAnimData->parsedTree") )
    __debugbreak();
  if ( CharacterAnimData->animData.anims.m_size )
  {
    CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
    if ( !CharacterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1683, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
      __debugbreak();
    if ( CharacterState->animTree )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1684, ASSERT_TYPE_ASSERT, "(characterState->animTree == 0)", (const char *)&queryFormat, "characterState->animTree == NULL") )
        __debugbreak();
    }
    LOBYTE(v6) = 1;
    CharacterState->animTree = XAnimCreateTree(CharacterAnimData->animData.animTree.anims, CG_ClientCharacter_AllocXAnim, v6);
  }
}

/*
==============
CG_ClientCharacter_CreateNoteModel
==============
*/
void CG_ClientCharacter_CreateNoteModel(const LocalClientNum_t localClientNum, const centity_t *const cent, CGCharacterState *characterState, const char *modelName, const char *attachTag, const XAnimParts *animParts)
{
  CharacterNoteModel *noteTrackModels; 
  CharacterNoteModel *v10; 
  bool v11; 
  CharacterNoteModel *v12; 
  const char *name; 
  int v14; 

  if ( !characterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1889, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1890, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !attachTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1891, ASSERT_TYPE_ASSERT, "(attachTag)", (const char *)&queryFormat, "attachTag") )
    __debugbreak();
  if ( animParts )
  {
    noteTrackModels = characterState->noteTrackModels;
    v10 = NULL;
    if ( characterState->noteTrackModels == (CharacterNoteModel *)&characterState[1] )
    {
LABEL_34:
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144278F40, 425i64);
    }
    else
    {
      while ( noteTrackModels->animParts != animParts || I_strnicmp(noteTrackModels->attachTag, attachTag, 0x7FFFFFFFui64) || I_strnicmp(noteTrackModels->modelName, modelName, 0x7FFFFFFFui64) )
      {
        v11 = !noteTrackModels->animParts && !v10;
        v12 = noteTrackModels;
        if ( !v11 )
          v12 = v10;
        ++noteTrackModels;
        v10 = v12;
        if ( noteTrackModels == (CharacterNoteModel *)&characterState[1] )
        {
          if ( !v12 )
            goto LABEL_34;
          name = animParts->name;
          v14 = *animParts->name;
          if ( *animParts->name )
          {
            while ( (unsigned int)(v14 - 65) >= 0x1A )
            {
              v14 = *++name;
              if ( !v14 )
                goto LABEL_30;
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1929, ASSERT_TYPE_ASSERT, "(!IWString_AnyUpper( animParts->name ))", "%s\n\tClientCharacter_CreateNoteModel() internal error: animName (%s) has uppercase character", "!IWString_AnyUpper( animParts->name )", animParts->name) )
              __debugbreak();
          }
LABEL_30:
          if ( !CG_ClientCharacter_GetAnimIndex(localClientNum, cent, animParts->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1931, ASSERT_TYPE_ASSERT, "(animIndex != 0)", "%s\n\tClientCharacter_CreateNoteModel() internal error: encountered XModel (%s) spawned by an animation (%s) not found in this entity's anim tree.", "animIndex != 0", modelName, animParts->name) )
            __debugbreak();
          strncpy(v10->modelName, modelName, 0x104ui64);
          strncpy(v10->attachTag, attachTag, 0x104ui64);
          v10->animParts = animParts;
          characterState->flags |= 1u;
          return;
        }
      }
    }
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144278ED0, 424i64, modelName);
  }
}

/*
==============
CG_ClientCharacter_FindAnimTreeData
==============
*/
__int64 CG_ClientCharacter_FindAnimTreeData(const char *atrTreeName)
{
  int i; 
  __int64 v3; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( (!atrTreeName || !*atrTreeName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1570, ASSERT_TYPE_ASSERT, "(atrTreeName && atrTreeName[0])", (const char *)&queryFormat, "atrTreeName && atrTreeName[0]") )
    __debugbreak();
  for ( i = 0; i < s_characterAnimTreeData.numEntries; ++i )
  {
    v3 = 62728i64 * i;
    v4 = 260i64;
    v5 = atrTreeName;
    if ( (CharacterAnimTreeData *)((char *)&s_characterAnimTreeData + v3) == (CharacterAnimTreeData *)-62465i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, (AssertType)(v3 + (unsigned int)&s_characterAnimTreeData + 62466), "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !atrTreeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = v3 - (_QWORD)atrTreeName;
    while ( 1 )
    {
      v7 = (unsigned __int8)s_characterAnimTreeData.entry[0].fileName[v6 + (_QWORD)v5];
      v8 = v4;
      v9 = *(unsigned __int8 *)v5++;
      --v4;
      if ( !v8 )
        return (unsigned int)i;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          break;
      }
      if ( !v7 )
        return (unsigned int)i;
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
CG_ClientCharacter_FindAnimTrees
==============
*/
void CG_ClientCharacter_FindAnimTrees(void)
{
  CharacterAnimDataInstance *v0; 
  unsigned int i; 
  AtrAnimData *p_animData; 
  XAssetHeader v3; 
  __int64 v4; 
  __int64 v5; 
  char *outName; 

  v0 = s_characterAnimDataInstance;
  for ( i = 0; i < 0x20; ++i )
  {
    if ( v0->treeDataIndex >= 0 )
    {
      if ( v0->treeDataIndex >= (unsigned int)s_characterAnimTreeData.numEntries )
      {
        LODWORD(v5) = s_characterAnimTreeData.numEntries;
        LODWORD(v4) = (CharacterAnimDataInstance)v0->treeDataIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1645, ASSERT_TYPE_ASSERT, "(unsigned)( s_characterAnimDataInstance[assetIdx].treeDataIndex ) < (unsigned)( s_characterAnimTreeData.numEntries )", "s_characterAnimDataInstance[assetIdx].treeDataIndex doesn't index s_characterAnimTreeData.numEntries\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      p_animData = &s_characterAnimTreeData.entry[v0->treeDataIndex].animData;
      if ( !p_animData[1].anims.m_data.m_buffer[0] )
      {
        if ( !NetConstStrings_GetClientCharacterName(i, (const char **)&outName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1656, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "How did we set parsedAnims to true if we didn't resolve the netconststring?") )
          __debugbreak();
        v3.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_CLIENTCHARACTER, outName, 0).physicsLibrary;
        if ( !v3.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1662, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "How did we set parsedAnims to true if we didn't find the asset?") )
          __debugbreak();
        BG_FindTreeForAtr(v3.physicsLibrary->havokData, v3.physicsLibrary[1].name, p_animData, 0);
        p_animData[1].anims.m_data.m_buffer[0] = 1;
      }
    }
    ++v0;
  }
}

/*
==============
CG_ClientCharacter_FindAnims
==============
*/
void CG_ClientCharacter_FindAnims(void)
{
  unsigned int v0; 
  CharacterAnimDataInstance *v1; 
  XAssetHeader v2; 
  char *havokData; 
  __int64 v4; 
  const char *name; 
  __int64 v6; 
  int numEntries; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  const char *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  AtrAnimData *p_animData; 
  char *outName; 

  v0 = 0;
  v1 = s_characterAnimDataInstance;
  do
  {
    if ( NetConstStrings_GetClientCharacterName(v0, (const char **)&outName) )
    {
      v2.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_CLIENTCHARACTER, outName, 0).physicsLibrary;
      if ( !v2.physicsLibrary )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B9D8, 421i64, outName);
      havokData = v2.physicsLibrary->havokData;
      if ( havokData )
      {
        v4 = -1i64;
        do
          ++v4;
        while ( havokData[v4] );
        if ( v4 )
        {
          name = v2.physicsLibrary[1].name;
          if ( name )
          {
            v6 = -1i64;
            do
              ++v6;
            while ( name[v6] );
            if ( v6 )
            {
              if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1570, ASSERT_TYPE_ASSERT, "(atrTreeName && atrTreeName[0])", (const char *)&queryFormat, "atrTreeName && atrTreeName[0]") )
                __debugbreak();
              numEntries = s_characterAnimTreeData.numEntries;
              v8 = 0;
              if ( s_characterAnimTreeData.numEntries > 0 )
              {
                while ( 2 )
                {
                  v9 = 260i64;
                  v10 = 62728i64 * v8;
                  v11 = name;
                  if ( (CharacterAnimTreeData *)((char *)&s_characterAnimTreeData + v10) == (CharacterAnimTreeData *)-62465i64 )
                  {
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    numEntries = s_characterAnimTreeData.numEntries;
                  }
                  while ( 1 )
                  {
                    v12 = (unsigned __int8)s_characterAnimTreeData.entry[0].fileName[v10 - (_QWORD)name + (_QWORD)v11];
                    v13 = v9;
                    v14 = *(unsigned __int8 *)v11++;
                    --v9;
                    if ( !v13 )
                    {
LABEL_29:
                      if ( v8 < 0 )
                        goto LABEL_32;
                      v1->treeDataIndex = v8;
                      goto LABEL_35;
                    }
                    if ( v12 != v14 )
                    {
                      v15 = v12 + 32;
                      if ( (unsigned int)(v12 - 65) > 0x19 )
                        v15 = v12;
                      v12 = v15;
                      v16 = v14 + 32;
                      if ( (unsigned int)(v14 - 65) > 0x19 )
                        v16 = v14;
                      if ( v12 != v16 )
                        break;
                    }
                    if ( !v12 )
                      goto LABEL_29;
                  }
                  if ( ++v8 < numEntries )
                    continue;
                  break;
                }
              }
LABEL_32:
              if ( numEntries >= 2 )
              {
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144278A40, 6500i64);
                numEntries = s_characterAnimTreeData.numEntries;
              }
              v1->treeDataIndex = numEntries;
              p_animData = &s_characterAnimTreeData.entry[numEntries].animData;
              BG_FindAnimsInAtr(v2.physicsLibrary->havokData, v2.physicsLibrary[1].name, p_animData, 0x258u, 0);
              Core_strcpy_and_fill_zero(&p_animData[1].anims.m_data.m_buffer[1], 0x104ui64, v2.physicsLibrary[1].name);
              ++s_characterAnimTreeData.numEntries;
            }
          }
        }
      }
    }
LABEL_35:
    ++v0;
    ++v1;
  }
  while ( v0 < 0x20 );
}

/*
==============
CG_ClientCharacter_GetAnimIndex
==============
*/
__int64 CG_ClientCharacter_GetAnimIndex(const LocalClientNum_t localClientNum, const centity_t *cent, const char *animName)
{
  CharacterAnimData *CharacterAnimData; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v8; 
  int v9; 
  int v10; 
  char p_destString[64]; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 742, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 743, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 744, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
    __debugbreak();
  if ( IWString_AnyUpper(animName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 745, ASSERT_TYPE_ASSERT, "(!IWString_AnyUpper( animName ))", "%s\n\tClientCharacter_GetAnimIndex() internal error: animName (%s) has uppercase character", "!IWString_AnyUpper( animName )", animName) )
    __debugbreak();
  CharacterAnimData = CG_ClientCharacter_GetCharacterAnimData(cent);
  if ( !CharacterAnimData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 748, ASSERT_TYPE_ASSERT, "(animData)", (const char *)&queryFormat, "animData") )
    __debugbreak();
  if ( !CharacterAnimData->parsedTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 749, ASSERT_TYPE_ASSERT, "(animData->parsedTree)", (const char *)&queryFormat, "animData->parsedTree") )
    __debugbreak();
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\string_storage.h", 41, ASSERT_TYPE_ASSERT, "( p_constString != 0 )", (const char *)&queryFormat, "p_constString != NULL") )
    __debugbreak();
  ntl::internal::string_assign(p_destString, 0x40ui64, animName);
  mp_parent = CharacterAnimData->animData.anims.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &CharacterAnimData->animData.anims.m_endNodeBase;
  while ( mp_parent )
  {
    v8 = mp_parent + 1;
    do
    {
      v9 = *((unsigned __int8 *)&v8->m_color + p_destString - (char *)&mp_parent[1]);
      v10 = LOBYTE(v8->m_color) - v9;
      if ( v10 )
        break;
      v8 = (ntl::red_black_tree_node_base *)((char *)v8 + 1);
    }
    while ( v9 );
    if ( v10 < 0 )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( p_m_endNodeBase == &CharacterAnimData->animData.anims.m_endNodeBase )
    goto LABEL_39;
  if ( p_m_endNodeBase == (ntl::red_black_tree_node_base *)-32i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\string_storage.h", 41, ASSERT_TYPE_ASSERT, "( p_constString != 0 )", (const char *)&queryFormat, "p_constString != NULL") )
    __debugbreak();
  if ( strcmp(p_destString, (const char *)&p_m_endNodeBase[1]) < 0 )
  {
LABEL_39:
    Com_PrintError(1, "Unknown animation requested for client character %d -- anim %s\n", (unsigned int)cent->nextState.clientNum, animName);
    return 0i64;
  }
  else
  {
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    return LOWORD(p_m_endNodeBase[3].m_color);
  }
}

/*
==============
CG_ClientCharacter_GetCharacterAnimData
==============
*/
CharacterAnimData *CG_ClientCharacter_GetCharacterAnimData(const centity_t *const cent)
{
  __int64 packedColorB_Fov; 
  __int64 treeDataIndex; 
  __int64 v5; 
  __int64 v6; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 171, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 172, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  packedColorB_Fov = cent->nextState.lerp.u.primaryLight.packedColorB_Fov;
  if ( (unsigned int)packedColorB_Fov >= 0x20 )
  {
    LODWORD(v6) = packedColorB_Fov;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( 32 )", "assetIndex doesn't index CLIENTCHARACTER_POOL_SIZE\n\t%i not in [0, %i)", v6, 32) )
      __debugbreak();
  }
  treeDataIndex = s_characterAnimDataInstance[packedColorB_Fov].treeDataIndex;
  if ( (int)treeDataIndex < 0 )
    return 0i64;
  v5 = 62728 * treeDataIndex;
  if ( !s_characterAnimTreeData.entry[treeDataIndex].parsedTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 184, ASSERT_TYPE_ASSERT, "(s_characterAnimTreeData.entry[entryIndex].parsedTree)", (const char *)&queryFormat, "s_characterAnimTreeData.entry[entryIndex].parsedTree") )
    __debugbreak();
  return (CharacterAnimData *)((char *)&s_characterAnimTreeData + v5);
}

/*
==============
CG_ClientCharacter_GetCharacterLoaded
==============
*/
bool CG_ClientCharacter_GetCharacterLoaded(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  return CG_ClientCharacter_GetCharacterLoadedInternal(localClientNum, clientIndex, 0);
}

/*
==============
CG_ClientCharacter_GetCharacterLoadedInternal
==============
*/
bool CG_ClientCharacter_GetCharacterLoadedInternal(const LocalClientNum_t localClientNum, const unsigned int clientIndex, const bool isVerbosePrint)
{
  __int64 v3; 
  const UICharacterState *State; 
  CharacterDObjLoadedFlags *outLoadedFlags; 
  __int64 isVerbosePrinta; 
  Weapon outAccessoryWeapon; 
  Weapon outStowWeapon; 
  Weapon outHeldWeapon; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2092, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientIndex >= 0x14 )
  {
    LODWORD(isVerbosePrinta) = 20;
    LODWORD(outLoadedFlags) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2093, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_CLIENT_CHARACTERS\n\t%i not in [0, %i)", outLoadedFlags, isVerbosePrinta) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(isVerbosePrinta) = 2;
    LODWORD(outLoadedFlags) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outLoadedFlags, isVerbosePrinta) )
      __debugbreak();
  }
  if ( clientUIActives[v3].connectionState != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2094, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForAnyServer( localClientNum ))", "%s\n\tShould not call this outside of an active game session", "CL_IsLocalClientConnectionActiveForAnyServer( localClientNum )") )
    __debugbreak();
  State = CL_UICharacter_GetState((const LocalClientNum_t)v3, clientIndex);
  CG_ClientCharacter_ResolveRequestedWeapons((const LocalClientNum_t)v3, State, &outHeldWeapon, &outStowWeapon, &outAccessoryWeapon);
  return CG_ClientCharacter_UpdateCharacterLoadedFlags((const LocalClientNum_t)v3, State, &outHeldWeapon, &outStowWeapon, &outAccessoryWeapon, NULL, isVerbosePrint);
}

/*
==============
CG_ClientCharacter_GetCharacterState
==============
*/
CGCharacterState *CG_ClientCharacter_GetCharacterState(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v2; 
  __int64 packedColorRG; 
  __int64 v6; 
  __int64 v7; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 145, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 146, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, 2) )
      __debugbreak();
  }
  packedColorRG = cent->nextState.lerp.u.primaryLight.packedColorRG;
  if ( (unsigned int)packedColorRG >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v6) = packedColorRG;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 150, ASSERT_TYPE_ASSERT, "(unsigned)( currentCharacterIndex ) < (unsigned)( MAX_CLIENT_CHARACTERS )", "currentCharacterIndex doesn't index MAX_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return &s_characterState[v2][packedColorRG];
}

/*
==============
CG_ClientCharacter_GetCharacterStreamed
==============
*/
bool CG_ClientCharacter_GetCharacterStreamed(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  __int64 v2; 
  __int64 EntityNum; 
  CgEntitySystem *EntitySystem; 
  __int64 v6; 
  CGCharacterState *CharacterState; 
  __int64 v9; 
  __int64 v10; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2113, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( clientIndex >= 0x14 )
  {
    LODWORD(v10) = 20;
    LODWORD(v9) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2114, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v10) = 2;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( clientUIActives[v2].connectionState != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2115, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForAnyServer( localClientNum ))", "%s\n\tShould not call this outside of an active game session", "CL_IsLocalClientConnectionActiveForAnyServer( localClientNum )") )
    __debugbreak();
  EntityNum = CL_UICharacter_GetEntityNum((const LocalClientNum_t)v2, clientIndex);
  if ( (unsigned int)EntityNum > 0x7FF )
    return 0;
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v2);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2124, ASSERT_TYPE_ASSERT, "( ( cgEntitySystem != nullptr ) )", "( cgEntitySystem ) = %p", NULL) )
    __debugbreak();
  if ( (unsigned int)EntityNum >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v9) = EntityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 534, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v6 = (__int64)&EntitySystem->m_entities[EntityNum];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2127, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (*(_BYTE *)(v6 + 648) & 1) == 0 )
    return 0;
  CharacterState = CG_ClientCharacter_GetCharacterState((const LocalClientNum_t)v2, (const centity_t *)v6);
  if ( !CharacterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2135, ASSERT_TYPE_ASSERT, "( ( characterState != nullptr ) )", "( characterState ) = %p", NULL) )
    __debugbreak();
  return !CG_ClientCharacter_IsDObjDirty((const LocalClientNum_t)v2, (const centity_t *)v6, (const CharacterDObjLoadedFlags)CharacterState->loadState, CharacterState->flags) && CharacterState->streamState;
}

/*
==============
CG_ClientCharacter_GetCurrentAnimTree
==============
*/
XAnimTree *CG_ClientCharacter_GetCurrentAnimTree(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v2; 
  __int64 packedColorRG; 
  __int64 v6; 
  __int64 v7; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 230, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 231, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 232, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, 2) )
      __debugbreak();
  }
  packedColorRG = cent->nextState.lerp.u.primaryLight.packedColorRG;
  if ( (unsigned int)packedColorRG >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v6) = packedColorRG;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 235, ASSERT_TYPE_ASSERT, "(unsigned)( currentCharacterIndex ) < (unsigned)( MAX_CLIENT_CHARACTERS )", "currentCharacterIndex doesn't index MAX_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return s_characterState[v2][packedColorRG].animTree;
}

/*
==============
CG_ClientCharacter_GetCurrentState
==============
*/
CGCharacterState *CG_ClientCharacter_GetCurrentState(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v2; 
  __int64 packedColorRG; 
  __int64 v6; 
  __int64 v7; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 158, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 159, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, 2) )
      __debugbreak();
  }
  packedColorRG = cent->nextState.lerp.u.primaryLight.packedColorRG;
  if ( (unsigned int)packedColorRG >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v6) = packedColorRG;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 163, ASSERT_TYPE_ASSERT, "(unsigned)( currentCharacterIndex ) < (unsigned)( MAX_CLIENT_CHARACTERS )", "currentCharacterIndex doesn't index MAX_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return &s_characterState[v2][packedColorRG];
}

/*
==============
CG_ClientCharacter_HasCharacterModels
==============
*/
bool CG_ClientCharacter_HasCharacterModels(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2076, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( clientIndex >= 0x14 )
  {
    LODWORD(v7) = 20;
    LODWORD(v5) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2077, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( MAX_CLIENT_CHARACTERS )", "clientIndex doesn't index MAX_CLIENT_CHARACTERS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( clientUIActives[v2].connectionState != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2078, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForAnyServer( localClientNum ))", "%s\n\tShould not call this outside of an active game session", "CL_IsLocalClientConnectionActiveForAnyServer( localClientNum )") )
    __debugbreak();
  return CL_UICharacter_GetState((const LocalClientNum_t)v2, clientIndex)->modelState.bodyPartModelCount != 0;
}

/*
==============
CG_ClientCharacter_Init
==============
*/
void CG_ClientCharacter_Init(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  CG_ClientCharacter_Reset(localClientNum);
  v1 *= 24i64;
  *(XModel **)((char *)&s_characterAnimDataShared[0].ikTargetLeft + v1) = R_RegisterModel("tag_ik_target_left");
  *(XModel **)((char *)&s_characterAnimDataShared[0].ikTargetRight + v1) = R_RegisterModel("tag_ik_target_right");
  *(&s_characterAnimDataShared[0].checkAnimPackagesLoaded + v1) = 1;
}

/*
==============
CG_ClientCharacter_IsDObjDirty
==============
*/
char CG_ClientCharacter_IsDObjDirty(const LocalClientNum_t localClientNum, const centity_t *cent, const CharacterDObjLoadedFlags loadState, const unsigned __int8 dObjFlags)
{
  const UICharacterState *State; 
  CGCharacterState *CurrentState; 
  CGCharacterState *v10; 
  unsigned int bodyPartModelCount; 
  unsigned int v12; 
  CGCharacterState *CharacterState; 
  __int64 v15; 
  __int64 v16; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 243, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 244, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v15) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  if ( (dObjFlags & 1) == 0 )
  {
    State = CL_UICharacter_GetState(localClientNum, cent->nextState.clientNum);
    CurrentState = CG_ClientCharacter_GetCurrentState(localClientNum, cent);
    v10 = CurrentState;
    if ( State->modelState.useAkimbo == CurrentState->currentState.modelState.useAkimbo && !I_strcmp(State->modelState.heldWeapon, CurrentState->currentState.modelState.heldWeapon) && !I_strcmp(State->modelState.stowedWeapon, v10->currentState.modelState.stowedWeapon) && !I_strcmp(State->modelState.accessoryWeapon, v10->currentState.modelState.accessoryWeapon) && State->modelState.isHeldWeaponHidden == v10->currentState.modelState.isHeldWeaponHidden )
    {
      bodyPartModelCount = State->modelState.bodyPartModelCount;
      if ( bodyPartModelCount == v10->currentState.modelState.bodyPartModelCount )
      {
        v12 = 0;
        if ( bodyPartModelCount )
        {
          while ( !I_strcmp(State->modelState.bodyPartModels[(unsigned __int64)v12], v10->currentState.modelState.bodyPartModels[(unsigned __int64)v12]) )
          {
            if ( ++v12 >= State->modelState.bodyPartModelCount )
              goto LABEL_20;
          }
        }
        else
        {
LABEL_20:
          if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 192, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
            __debugbreak();
          if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(v16) = 2;
            LODWORD(v15) = localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
          if ( !CharacterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 196, ASSERT_TYPE_ASSERT, "( ( characterState != nullptr ) )", "( characterState ) = %p", NULL) )
            __debugbreak();
          if ( loadState == CharacterState->loadState )
            return 0;
        }
      }
    }
  }
  return 1;
}

/*
==============
CG_ClientCharacter_PlayAnimFromWeaponTable
==============
*/
void CG_ClientCharacter_PlayAnimFromWeaponTable(const LocalClientNum_t localClientNum, const centity_t *cent, const Weapon *r_heldWeapon)
{
  CGCharacterState *CharacterState; 
  XAnimTree *animTree; 
  const char *WeaponBaseName; 
  const char *v9; 
  AttachmentSlot v10; 
  const char *v11; 
  __int64 v12; 
  const WeaponAttachment *WeaponPrimaryAttachment; 
  const char *v14; 
  __int64 v15; 
  const char *v16; 
  unsigned int AnimIndex; 
  unsigned int weaponTableAnimIndex; 
  DObj *obj; 
  char *lookupKeys[3]; 
  StringTable *tablePtr; 
  int lookupColumns; 
  int v23; 

  CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
  if ( !CharacterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1311, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  obj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( obj )
  {
    animTree = CharacterState->animTree;
    if ( animTree )
    {
      if ( animTree->children && r_heldWeapon->weaponIdx && (CharacterState->flags & 4) != 0 )
      {
        WeaponBaseName = BG_GetWeaponBaseName(r_heldWeapon, 0);
        if ( !off_147F9F6D8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1275, ASSERT_TYPE_ASSERT, "(TABLE_PATH)", (const char *)&queryFormat, "TABLE_PATH") )
          __debugbreak();
        StringTable_GetAsset(off_147F9F6D8, (const StringTable **)&tablePtr);
        if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1278, ASSERT_TYPE_SANITY, "( table )", (const char *)&queryFormat, "table") )
          __debugbreak();
        v9 = StringTable_Lookup(tablePtr, 0, WeaponBaseName, 1);
        v10 = ATT_SLOT_RECEIVER;
        lookupColumns = 0;
        v11 = v9;
        v23 = 2;
        v12 = -1i64;
        while ( 1 )
        {
          WeaponPrimaryAttachment = BG_GetWeaponPrimaryAttachment(r_heldWeapon, v10);
          if ( WeaponPrimaryAttachment )
          {
            lookupKeys[1] = (char *)WeaponPrimaryAttachment->szInternalName;
            lookupKeys[0] = (char *)WeaponBaseName;
            v14 = StringTable_MultipleKeyLookup(tablePtr, &lookupColumns, (const char **)lookupKeys, 2, 1);
            v15 = -1i64;
            do
              ++v15;
            while ( v14[v15] );
            if ( v15 )
              break;
          }
          if ( (unsigned int)++v10 >= ATT_SLOT_OTHER )
            goto LABEL_23;
        }
        v11 = v14;
LABEL_23:
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1298, ASSERT_TYPE_SANITY, "( animName )", (const char *)&queryFormat, "animName") )
          __debugbreak();
        do
          ++v12;
        while ( v11[v12] );
        v16 = NULL;
        if ( v12 )
          v16 = v11;
        if ( v16 )
        {
          AnimIndex = CG_ClientCharacter_GetAnimIndex(localClientNum, cent, v16);
          if ( AnimIndex )
          {
LABEL_34:
            weaponTableAnimIndex = CharacterState->weaponTableAnimIndex;
            if ( weaponTableAnimIndex != AnimIndex )
            {
              if ( weaponTableAnimIndex )
                XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, weaponTableAnimIndex, 0.0, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
              if ( AnimIndex )
                XAnimSetCompleteGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, AnimIndex, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
              CharacterState->weaponTableAnimIndex = AnimIndex;
            }
            CharacterState->flags &= ~4u;
            return;
          }
        }
        else
        {
          AnimIndex = 0;
        }
        Com_PrintWarning(16, "PlayAnimFromWeaponTable - No anim specified for weapon ( %s ) in fe_charAnimsForWeapon.csv", WeaponBaseName);
        goto LABEL_34;
      }
    }
  }
}

/*
==============
CG_ClientCharacter_PlayAnimation
==============
*/
void CG_ClientCharacter_PlayAnimation(const LocalClientNum_t localClientNum, const centity_t *cent, const char *animName, const float blendTime, const float startTime)
{
  int number; 
  DObj *ClientDObj; 
  char *v10; 
  const char **v11; 
  __int64 v12; 
  const char *v13; 
  int v14; 
  unsigned int v15; 
  __int64 v16; 
  float goalTime; 
  unsigned __int8 v18; 
  unsigned int *v19; 
  unsigned int animIndex; 
  XAnimTree *tree; 
  CGCharacterState *CharacterState; 
  __int64 v24[6]; 
  char v25[24]; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 991, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 992, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 993, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  number = cent->nextState.number;
  v24[0] = (__int64)"ik_node";
  v24[1] = (__int64)"proc_node";
  v24[2] = (__int64)"ik_fingers_l";
  v24[3] = (__int64)"ik_fingers_r";
  v24[4] = (__int64)"add_weapon_placement";
  v24[5] = (__int64)"clothnode";
  ClientDObj = Com_GetClientDObj(number, localClientNum);
  if ( ClientDObj )
  {
    CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
    animIndex = CG_ClientCharacter_GetAnimIndex(localClientNum, cent, animName);
    tree = CG_ClientCharacter_GetCurrentAnimTree(localClientNum, cent);
    if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1012, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
    v10 = v25;
    v11 = (const char **)v24;
    v12 = 6i64;
    do
    {
      v13 = *v11;
      v14 = CG_ClientCharacter_GetAnimIndex(localClientNum, cent, *v11);
      if ( !v14 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442782C8, 1352i64, v13);
      *(_DWORD *)v10 = v14;
      ++v11;
      v10 += 4;
      --v12;
    }
    while ( v12 );
    v15 = CharacterState->animIndex;
    v16 = 6i64;
    goalTime = 0.0;
    if ( v15 )
    {
      if ( XAnimIsLooped(tree->anims, v15) || !XAnimHasFinished(tree, 0, XANIM_SUBTREE_DEFAULT, CharacterState->animIndex) )
        goalTime = blendTime;
      XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, CharacterState->animIndex, 0.0, goalTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    }
    if ( animIndex )
    {
      XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, animIndex, 1.0, goalTime, 1.0, (scr_string_t)0, 5u, 0, LINEAR, NULL);
      v18 = localClientNum;
      if ( startTime > 0.0 )
        CG_ClientCharacter_SetAnimationTime(localClientNum, cent->nextState.number, ClientDObj, tree, animIndex, startTime);
      CharacterState->animIndex = animIndex;
    }
    else
    {
      v18 = localClientNum;
    }
    v19 = (unsigned int *)v25;
    do
    {
      XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *v19++, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
      --v16;
    }
    while ( v16 );
    XAnimSetByteGameParameterByName(ClientDObj, scr_const.xanimClothLCN, v18);
  }
}

/*
==============
CG_ClientCharacter_PlayFacialAnimation
==============
*/
DObj *CG_ClientCharacter_PlayFacialAnimation(const LocalClientNum_t localClientNum, const centity_t *cent, const char *animName, const float blendTime, const float startTime)
{
  DObj *result; 
  DObj *v9; 
  CGCharacterState *CharacterState; 
  unsigned int AnimIndex; 
  XAnimTree *CurrentAnimTree; 
  unsigned int facialAnimIndex; 
  float goalTime; 
  unsigned int noteFacialAnimIndex; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1378, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1379, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1380, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  result = Com_GetClientDObj(cent->nextState.number, localClientNum);
  v9 = result;
  if ( result )
  {
    CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
    AnimIndex = CG_ClientCharacter_GetAnimIndex(localClientNum, cent, animName);
    CurrentAnimTree = CG_ClientCharacter_GetCurrentAnimTree(localClientNum, cent);
    if ( !CurrentAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1390, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
      __debugbreak();
    facialAnimIndex = CharacterState->facialAnimIndex;
    goalTime = 0.0;
    if ( facialAnimIndex )
    {
      if ( XAnimIsLooped(CurrentAnimTree->anims, facialAnimIndex) || !XAnimHasFinished(CurrentAnimTree, 0, XANIM_SUBTREE_DEFAULT, CharacterState->facialAnimIndex) )
        goalTime = blendTime;
      XAnimSetCompleteGoalWeight(v9, 0, XANIM_SUBTREE_DEFAULT, CharacterState->facialAnimIndex, 0.0, goalTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    }
    noteFacialAnimIndex = CharacterState->noteFacialAnimIndex;
    if ( noteFacialAnimIndex )
    {
      if ( XAnimIsLooped(CurrentAnimTree->anims, noteFacialAnimIndex) || !XAnimHasFinished(CurrentAnimTree, 0, XANIM_SUBTREE_DEFAULT, CharacterState->noteFacialAnimIndex) )
        goalTime = blendTime;
      XAnimSetCompleteGoalWeight(v9, 0, XANIM_SUBTREE_DEFAULT, CharacterState->noteFacialAnimIndex, 0.0, goalTime, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    }
    if ( AnimIndex )
    {
      XAnimSetCompleteGoalWeight(v9, 0, XANIM_SUBTREE_DEFAULT, AnimIndex, 1.0, goalTime, 1.0, (scr_string_t)0, 5u, 0, LINEAR, NULL);
      if ( startTime > 0.0 )
        CG_ClientCharacter_SetAnimationTime(localClientNum, cent->nextState.number, v9, CurrentAnimTree, AnimIndex, startTime);
    }
    return (DObj *)AnimIndex;
  }
  return result;
}

/*
==============
CG_ClientCharacter_PrintCharacterNotLoadedModels
==============
*/
void CG_ClientCharacter_PrintCharacterNotLoadedModels(const LocalClientNum_t localClientNum, const unsigned int clientIndex)
{
  CG_ClientCharacter_GetCharacterLoadedInternal(localClientNum, clientIndex, 1);
}

/*
==============
CG_ClientCharacter_ProcessAnimation
==============
*/
void CG_ClientCharacter_ProcessAnimation(const LocalClientNum_t localClientNum, centity_t *cent)
{
  XAnimTree *CurrentAnimTree; 
  CGCharacterState *CharacterState; 
  const UICharacterState *State; 
  unsigned int animQueueEnd; 
  unsigned int i; 
  char v9; 
  __int64 v10; 
  unsigned int animIndex; 
  char v12; 
  char v13; 
  char v14; 
  char v15; 
  unsigned int v16; 
  unsigned int animQueueStart; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1070, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1071, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  CurrentAnimTree = CG_ClientCharacter_GetCurrentAnimTree(localClientNum, cent);
  if ( CurrentAnimTree && Com_GetClientDObj(cent->nextState.number, localClientNum) )
  {
    CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
    State = CL_UICharacter_GetState(localClientNum, cent->nextState.clientNum);
    if ( CharacterState->currentState.animState.animQueueEnd > State->animState.animQueueEnd )
    {
      LODWORD(v20) = CharacterState->currentState.animState.animQueueEnd;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1089, ASSERT_TYPE_ASSERT, "( currentState->animState.animQueueEnd ) <= ( requestedState->animState.animQueueEnd )", "currentState->animState.animQueueEnd not in [0, requestedState->animState.animQueueEnd]\n\t%u not in [0, %u]", v20, State->animState.animQueueEnd) )
        __debugbreak();
    }
    animQueueEnd = CharacterState->currentState.animState.animQueueEnd;
    for ( i = State->animState.animQueueEnd; animQueueEnd < i; i = State->animState.animQueueEnd )
    {
      v9 = animQueueEnd++;
      v10 = v9 & 7;
      *(__m256i *)CharacterState->currentState.animState.animQueue[v10].animName = *(__m256i *)State->animState.animQueue[v10].animName;
      *(__m256i *)&CharacterState->currentState.animState.animQueue[v10].animName[32] = *(__m256i *)&State->animState.animQueue[v10].animName[32];
      *(__m256i *)CharacterState->currentState.animState.animQueue[v10].startNoteName = *(__m256i *)State->animState.animQueue[v10].startNoteName;
      *(__m256i *)&CharacterState->currentState.animState.animQueue[v10].startNoteName[32] = *(__m256i *)&State->animState.animQueue[v10].startNoteName[32];
      *(double *)&CharacterState->currentState.animState.animQueue[v10].blendTime = *(double *)&State->animState.animQueue[v10].blendTime;
    }
    animIndex = CharacterState->animIndex;
    if ( animIndex && CharacterState->currentState.animState.animQueueStart == State->animState.animQueueStart )
    {
      v12 = 0;
      if ( i - CharacterState->currentQueueIndex > 8 )
      {
        v13 = 1;
LABEL_20:
        if ( !XAnimIsLooped(CurrentAnimTree->anims, animIndex) && XAnimHasFinished(CurrentAnimTree, 0, XANIM_SUBTREE_DEFAULT, CharacterState->animIndex) )
        {
          v14 = 1;
LABEL_24:
          if ( !v13 && !v14 )
          {
            v15 = 0;
LABEL_28:
            v16 = State->animState.animQueueEnd;
            CharacterState->currentState.animState.animQueueEnd = v16;
            animQueueStart = State->animState.animQueueStart;
            CharacterState->currentState.animState.animQueueStart = animQueueStart;
            if ( v15 && v16 )
            {
              if ( v12 )
                CharacterState->currentQueueIndex = animQueueStart;
              else
                animQueueStart = CharacterState->currentQueueIndex;
              if ( v16 - animQueueStart <= 8 )
              {
                if ( v14 )
                {
                  if ( animQueueStart == v16 - 1 )
                  {
                    Com_PrintError(16, "UI Character animation has finished but there are no additional animations to play. This will cause the non-looping animation to play again.\n");
                    animQueueStart = CharacterState->currentQueueIndex;
                  }
                  else
                  {
                    CharacterState->currentQueueIndex = ++animQueueStart;
                  }
                }
              }
              else
              {
                Com_PrintError(16, "UI Character animation queue overflow\n");
                if ( CharacterState->currentQueueIndex < CharacterState->currentState.animState.animQueueStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1122, ASSERT_TYPE_ASSERT, "(characterState->currentQueueIndex >= currentState->animState.animQueueStart)", (const char *)&queryFormat, "characterState->currentQueueIndex >= currentState->animState.animQueueStart") )
                  __debugbreak();
                animQueueStart = CharacterState->currentState.animState.animQueueEnd - 8;
                CharacterState->currentQueueIndex = animQueueStart;
              }
              v18 = CharacterState->currentState.animState.animQueueEnd;
              if ( CharacterState->currentState.animState.animQueueStart > animQueueStart || animQueueStart > v18 - 1 )
              {
                LODWORD(v21) = CharacterState->currentState.animState.animQueueStart;
                LODWORD(v20) = animQueueStart;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1139, ASSERT_TYPE_ASSERT, "( currentState->animState.animQueueStart ) <= ( characterState->currentQueueIndex ) && ( characterState->currentQueueIndex ) <= ( currentState->animState.animQueueEnd - 1 )", "characterState->currentQueueIndex not in [currentState->animState.animQueueStart, currentState->animState.animQueueEnd - 1]\n\t%i not in [%i, %i]", v20, v21, v18 - 1) )
                  __debugbreak();
              }
              v19 = CharacterState->currentQueueIndex & 7;
              CG_ClientCharacter_PlayAnimation(localClientNum, cent, CharacterState->currentState.animState.animQueue[v19].animName, CharacterState->currentState.animState.animQueue[v19].blendTime, CharacterState->currentState.animState.animQueue[v19].startTime);
              CL_UICharacter_SetCurrentQueueIndex(localClientNum, cent->nextState.clientNum, CharacterState->currentQueueIndex);
            }
            return;
          }
LABEL_27:
          v15 = 1;
          goto LABEL_28;
        }
LABEL_23:
        v14 = 0;
        if ( v12 )
          goto LABEL_27;
        goto LABEL_24;
      }
    }
    else
    {
      v12 = 1;
    }
    v13 = 0;
    if ( v12 )
      goto LABEL_23;
    goto LABEL_20;
  }
}

/*
==============
CG_ClientCharacter_ProcessDObj
==============
*/
void CG_ClientCharacter_ProcessDObj(const LocalClientNum_t localClientNum, const centity_t *cent, const UICharacterState *const requestedState, const Weapon *r_heldWeapon, const Weapon *r_stowWeapon, const Weapon *r_weaponAccessory)
{
  const Weapon *v10; 
  const Weapon *v11; 
  CharacterDObjLoadedFlags v12; 
  CGCharacterState *CharacterState; 
  bool v14; 
  CGCharacterState *v15; 
  CGCharacterState *CurrentState; 
  CharacterDObjLoadedFlags *outLoadedFlags; 
  CharacterDObjLoadedFlags *outLoadedFlagsa; 
  __int64 isVerbosePrint; 
  unsigned __int8 outDObjFlags; 
  CharacterDObjLoadedFlags v21; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 835, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 836, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !requestedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 837, ASSERT_TYPE_ASSERT, "(requestedState)", (const char *)&queryFormat, "requestedState") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(outLoadedFlags) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 838, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outLoadedFlags, 2) )
      __debugbreak();
  }
  v10 = r_stowWeapon;
  v11 = r_weaponAccessory;
  CG_ClientCharacter_UpdateCharacterLoadedFlags(localClientNum, requestedState, r_heldWeapon, r_stowWeapon, r_weaponAccessory, &v21, 0);
  CG_ClientCharacter_ValidateNoteModels(localClientNum, cent, &outDObjFlags);
  v12 = v21;
  if ( CG_ClientCharacter_IsDObjDirty(localClientNum, cent, v21, outDObjFlags) )
  {
    if ( Com_GetClientDObj(cent->nextState.number, localClientNum) )
    {
      Com_SafeClientDObjFree(cent->nextState.number, localClientNum);
      CG_Entity_DestroyCloth(localClientNum, cent->nextState.number);
    }
    if ( (v12 & 1) != 0 )
    {
      CG_ClientCharacter_BuildDObj(localClientNum, cent, r_heldWeapon, v10, v11, v12);
    }
    else if ( v12 && requestedState->modelState.bodyPartModelCount )
    {
      Com_PrintWarning(13, "CG_ClientCharacter_ProcessDObj: Tried to add weapon models when body '%s' xmodel is not loaded yet.\n", (const char *)&requestedState->modelState);
    }
  }
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 205, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(isVerbosePrint) = 2;
    LODWORD(outLoadedFlagsa) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outLoadedFlagsa, isVerbosePrint) )
      __debugbreak();
  }
  CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
  if ( !CharacterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 209, ASSERT_TYPE_ASSERT, "( ( characterState != nullptr ) )", "( characterState ) = %p", NULL) )
    __debugbreak();
  CharacterState->loadState = v12;
  v14 = CG_Ents_TouchModelFrontEndScene(localClientNum, cent);
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 218, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(isVerbosePrint) = 2;
    LODWORD(outLoadedFlagsa) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", outLoadedFlagsa, isVerbosePrint) )
      __debugbreak();
  }
  v15 = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 222, ASSERT_TYPE_ASSERT, "( ( characterState != nullptr ) )", "( characterState ) = %p", NULL) )
    __debugbreak();
  v15->streamState = v14;
  CurrentState = CG_ClientCharacter_GetCurrentState(localClientNum, cent);
  memcpy_0(&CurrentState->currentState.modelState, &requestedState->modelState, sizeof(CurrentState->currentState.modelState));
}

/*
==============
CG_ClientCharacter_ProcessEntity
==============
*/
void CG_ClientCharacter_ProcessEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v3; 
  int clientNum; 
  __int16 EntityNum; 
  entityState_t *p_nextState; 
  __int16 number; 
  const UICharacterState *State; 
  unsigned __int8 ActiveGameMode; 
  __int64 v10; 
  const char *v11; 
  const DObj *ClientDObj; 
  unsigned int v13; 
  XAssetHeader v14; 
  const char **v15; 
  Weapon *r_weaponAccessory; 
  Weapon *r_weaponAccessorya; 
  unsigned int scriptableIndex[2]; 
  vec3_t outOrigin; 
  unsigned int outInstanceIndex[2]; 
  __int64 v21; 
  GfxSceneHudOutlineInfo v22; 
  shaderOverride_t v23; 
  Weapon outHeldWeapon; 
  Weapon outAccessoryWeapon; 
  Weapon outStowWeapon; 

  v21 = -2i64;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1774, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1775, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 727, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(r_weaponAccessory) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 728, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", r_weaponAccessory, 2) )
      __debugbreak();
  }
  clientNum = cent->nextState.clientNum;
  EntityNum = CL_UICharacter_GetEntityNum((const LocalClientNum_t)v3, clientNum);
  p_nextState = &cent->nextState;
  number = cent->nextState.number;
  if ( EntityNum != number )
    CL_UICharacter_SetEntityNum((const LocalClientNum_t)v3, clientNum, number);
  State = CL_UICharacter_GetState((const LocalClientNum_t)v3, cent->nextState.clientNum);
  if ( !CG_ClientCharacter_GetCharacterState((const LocalClientNum_t)v3, cent)->animTree )
    CG_ClientCharacter_CreateAnimTree((const LocalClientNum_t)v3, cent);
  CG_ClientCharacter_ProcessPose((const LocalClientNum_t)v3, cent);
  CG_ClientCharacter_ResolveRequestedWeapons((const LocalClientNum_t)v3, State, &outHeldWeapon, &outStowWeapon, &outAccessoryWeapon);
  CG_ClientCharacter_ProcessDObj((const LocalClientNum_t)v3, cent, State, &outHeldWeapon, &outStowWeapon, &outAccessoryWeapon);
  CG_ClientCharacter_ProcessAnimation((const LocalClientNum_t)v3, cent);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v10 = ActiveGameMode;
  if ( !ActiveGameMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1750, ASSERT_TYPE_ASSERT, "(activeGameMode)", (const char *)&queryFormat, "activeGameMode") )
    __debugbreak();
  v11 = s_fastfileNames[v10];
  if ( !v11 )
    s_characterAnimDataShared[v3].checkAnimPackagesLoaded = 0;
  if ( s_characterAnimDataShared[v3].checkAnimPackagesLoaded )
    s_characterAnimDataShared[v3].checkAnimPackagesLoaded = DB_PollFastfileState(v11) != AWAITING_COMMIT;
  CG_ClientCharacter_ProcessFingerPoseAnimation((const LocalClientNum_t)v3, cent, &outHeldWeapon, State->modelState.useAkimbo);
  CG_ClientCharacter_PlayAnimFromWeaponTable((const LocalClientNum_t)v3, cent, &outHeldWeapon);
  CG_ClientCharacter_ProcessFacialAnimation((const LocalClientNum_t)v3, cent);
  if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &cent->nextState, NULL) && !State->modelState.isHidden )
  {
    ClientDObj = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v3);
    if ( ClientDObj )
    {
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      outOrigin.v[2] = outOrigin.v[2] + 32.0;
      v13 = p_nextState->number;
      memset(&v22, 0, sizeof(v22));
      memset(&v23, 0, sizeof(v23));
      CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, ClientDObj, &cent->pose, v13, 0, &v23, &v22, &outOrigin, 0.0, 0);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v3, cent, scriptableIndex) )
    {
      ScriptableCl_UpdatePosition((const LocalClientNum_t)v3, scriptableIndex[0], cent);
      ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v3, scriptableIndex[0], p_nextState->number);
    }
    else if ( Com_GameMode_SupportsFeature(WEAPONSTATES_NUM|WEAPON_OFFHAND_END|0x80) && ScriptableCl_GetReservedIndexForEntity((const LocalClientNum_t)v3, p_nextState->number, outInstanceIndex) )
    {
      if ( !NetConstStrings_GetClientCharacterName(cent->nextState.lerp.u.primaryLight.packedColorB_Fov, (const char **)&outOrigin) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144278DE0, 422i64, cent->nextState.lerp.u.primaryLight.packedColorB_Fov);
      v14.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_CLIENTCHARACTER, *(const char **)outOrigin.v, 0).physicsLibrary;
      if ( !v14.physicsLibrary )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E1B9D8, 423i64, *(_QWORD *)outOrigin.v);
      v15 = *(const char ***)&v14.physicsLibrary->isMaterialList;
      if ( v15 && !ScriptableCl_BindEntityReservedDef((const LocalClientNum_t)v3, p_nextState->number, *(const ScriptableDef *const *)&v14.physicsLibrary->isMaterialList) )
      {
        LODWORD(r_weaponAccessorya) = p_nextState->number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1877, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ClientCharacter could not bind to %i scriptable %s (Character %s). Please bug this with a dump.\n", r_weaponAccessorya, *v15, v14.physicsLibrary->name) )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_ClientCharacter_ProcessFacialAnimation
==============
*/
void CG_ClientCharacter_ProcessFacialAnimation(const LocalClientNum_t localClientNum, centity_t *cent)
{
  const XAnimTree *CurrentAnimTree; 
  CGCharacterState *CharacterState; 
  UICharacterAnimItem *p_facialAnim; 
  int v7; 
  bool v8; 
  char v9; 
  unsigned int noteFacialAnimIndex; 
  bool v11; 
  const char *animName; 
  unsigned int facialAnimIndex; 
  unsigned int v14; 
  const DObj *ClientDObj; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1438, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1439, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  CurrentAnimTree = CG_ClientCharacter_GetCurrentAnimTree(localClientNum, cent);
  if ( CurrentAnimTree )
  {
    CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
    p_facialAnim = &CL_UICharacter_GetState(localClientNum, cent->nextState.clientNum)->animState.facialAnim;
    v7 = memcmp_0(&CharacterState->currentState.animState.facialAnim, p_facialAnim, 0x88ui64);
    v8 = v7 != 0;
    if ( v7 )
    {
      *(__m256i *)CharacterState->currentState.animState.facialAnim.animName = *(__m256i *)p_facialAnim->animName;
      *(__m256i *)&CharacterState->currentState.animState.facialAnim.animName[32] = *(__m256i *)&p_facialAnim->animName[32];
      *(__m256i *)CharacterState->currentState.animState.facialAnim.startNoteName = *(__m256i *)p_facialAnim->startNoteName;
      *(__m256i *)&CharacterState->currentState.animState.facialAnim.startNoteName[32] = *(__m256i *)&p_facialAnim->startNoteName[32];
      *(double *)&CharacterState->currentState.animState.facialAnim.blendTime = *(double *)&p_facialAnim->blendTime;
    }
    v9 = CharacterState->noteFacialAnim.animName[0];
    if ( v9 )
    {
      CharacterState->noteFacialAnimIndex = (unsigned int)CG_ClientCharacter_PlayFacialAnimation(localClientNum, cent, CharacterState->noteFacialAnim.animName, 0.2, 0.0);
      CharacterState->noteFacialAnim.animName[0] = 0;
    }
    noteFacialAnimIndex = CharacterState->noteFacialAnimIndex;
    v11 = noteFacialAnimIndex && XAnimHasFinished(CurrentAnimTree, 0, XANIM_SUBTREE_DEFAULT, noteFacialAnimIndex);
    if ( v8 )
    {
      animName = CharacterState->currentState.animState.facialAnim.animName;
      if ( v9 )
        CharacterState->facialAnimIndex = CG_ClientCharacter_GetAnimIndex(localClientNum, cent, animName);
      else
        *(_QWORD *)&CharacterState->facialAnimIndex = (unsigned int)CG_ClientCharacter_PlayFacialAnimation(localClientNum, cent, animName, CharacterState->currentState.animState.facialAnim.blendTime, CharacterState->currentState.animState.facialAnim.startTime);
    }
    else if ( v11 )
    {
      facialAnimIndex = CharacterState->facialAnimIndex;
      if ( facialAnimIndex && XAnimIsLooped(CurrentAnimTree->anims, facialAnimIndex) )
      {
        CharacterState->facialAnimIndex = (unsigned int)CG_ClientCharacter_PlayFacialAnimation(localClientNum, cent, CharacterState->currentState.animState.facialAnim.animName, CharacterState->currentState.animState.facialAnim.blendTime, CharacterState->currentState.animState.facialAnim.startTime);
      }
      else
      {
        Com_PrintWarning(16, "ProcessFacialAnimation - Blending out of a notetrack triggered anim but there is nothing to blend back to ( this will cause a pop ). To fix - Play a facial idle anim using lua function PlayCharacterFacialAnim on the character that triggering facial anims from their taunt anim notetrack.");
        v14 = CharacterState->noteFacialAnimIndex;
        if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1361, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
        if ( ClientDObj && v14 )
          XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, v14, 0.0, 0.2, 1.0, (scr_string_t)0, 0, 1, LINEAR, NULL);
      }
      CharacterState->noteFacialAnimIndex = 0;
    }
  }
}

/*
==============
CG_ClientCharacter_ProcessFingerPoseAnimation
==============
*/
void CG_ClientCharacter_ProcessFingerPoseAnimation(const LocalClientNum_t localClientNum, const centity_t *const cent, const Weapon *r_heldWeapon, const bool isDualWield)
{
  __int64 v4; 
  CGCharacterState *CharacterState; 
  const DObj *ClientDObj; 
  __int64 animTree; 
  const dvar_t *v11; 
  unsigned __int8 flags; 
  XAnimParts *v13; 
  XAnimParts *v14; 
  unsigned int *fingerPoseAnimIndex; 
  __int64 v16; 
  unsigned int *v17; 
  unsigned int v18; 
  __int64 v19; 
  const XAnimInfo *AnimInfo; 
  unsigned int v21; 
  __int64 v22; 
  XAnimParts *outFingerPoseRightAnim; 
  XAnimParts *outFingerPoseLeftAnimSecondary; 
  XAnimParts *outFingerPoseRightAnimSecondary; 
  XAnimParts *outAltOverrideAnim; 
  __int64 v27; 
  XAnimParts *outFingerPoseLeftAnim; 

  v4 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1154, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1155, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  CharacterState = CG_ClientCharacter_GetCharacterState((const LocalClientNum_t)v4, cent);
  if ( !CharacterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1158, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v4);
  if ( ClientDObj )
  {
    animTree = (__int64)CharacterState->animTree;
    v27 = animTree;
    if ( animTree )
    {
      if ( *(_WORD *)(animTree + 20) )
      {
        v11 = DCONST_DVARBOOL_xanim_finger_pose_disable;
        v22 = 0i64;
        if ( !DCONST_DVARBOOL_xanim_finger_pose_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_finger_pose_disable") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( v11->current.enabled || !r_heldWeapon->weaponIdx )
        {
          CharacterState->flags |= 2u;
        }
        else
        {
          flags = CharacterState->flags;
          if ( s_characterAnimDataShared[v4].checkAnimPackagesLoaded )
          {
            CharacterState->flags = flags | 2;
          }
          else if ( (flags & 2) != 0 )
          {
            outFingerPoseRightAnim = NULL;
            outFingerPoseRightAnimSecondary = NULL;
            outFingerPoseLeftAnim = NULL;
            outFingerPoseLeftAnimSecondary = NULL;
            outAltOverrideAnim = NULL;
            if ( BG_Get3PWeaponAnims(r_heldWeapon, isDualWield, 0, &outFingerPoseRightAnim, &outFingerPoseRightAnimSecondary, &outFingerPoseLeftAnim, &outFingerPoseLeftAnimSecondary, &outAltOverrideAnim) )
            {
              v13 = outFingerPoseLeftAnim;
              v14 = outFingerPoseRightAnim;
              if ( outFingerPoseLeftAnimSecondary )
                v13 = outFingerPoseLeftAnimSecondary;
              outFingerPoseLeftAnim = v13;
              if ( outFingerPoseRightAnimSecondary )
                v14 = outFingerPoseRightAnimSecondary;
              outFingerPoseRightAnim = v14;
              if ( v14 )
              {
                HIDWORD(v22) = CG_ClientCharacter_GetAnimIndex((const LocalClientNum_t)v4, cent, v14->name);
                if ( !HIDWORD(v22) )
                  Com_PrintWarning(16, "ProcessFingerPoseAnimation : %s missing in client_character.atr", outFingerPoseRightAnim->name);
                v13 = outFingerPoseLeftAnim;
              }
              if ( v13 )
              {
                LODWORD(v22) = CG_ClientCharacter_GetAnimIndex((const LocalClientNum_t)v4, cent, v13->name);
                if ( !(_DWORD)v22 )
                  Com_PrintWarning(16, "ProcessFingerPoseAnimation : %s missing in client_character.atr", outFingerPoseLeftAnim->name);
              }
            }
            CharacterState->flags &= ~2u;
          }
          else
          {
            v22 = *(_QWORD *)CharacterState->fingerPoseAnimIndex;
          }
        }
        fingerPoseAnimIndex = CharacterState->fingerPoseAnimIndex;
        v16 = 2i64;
        v17 = CharacterState->fingerPoseAnimIndex;
        do
        {
          v18 = *(unsigned int *)((char *)v17 + (char *)&v22 - (char *)CharacterState->fingerPoseAnimIndex);
          if ( *v17 != v18 )
          {
            XAnimSetGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *v17, 0.0, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
            *v17 = v18;
          }
          ++v17;
          --v16;
        }
        while ( v16 );
        if ( CharacterState->fingerPoseAnimIndex[1] || *fingerPoseAnimIndex )
        {
          v19 = v27;
          outFingerPoseLeftAnim = NULL;
          outAltOverrideAnim = NULL;
          if ( !*(_WORD *)(v27 + 20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1248, ASSERT_TYPE_ASSERT, "(animTree->children)", (const char *)&queryFormat, "animTree->children") )
            __debugbreak();
          AnimInfo = GetAnimInfo(*(_WORD *)(v19 + 20));
          BG_CalcFingerPoseWeights(AnimInfo, (float *)&outFingerPoseLeftAnim, (float *)&outAltOverrideAnim);
          v21 = CharacterState->fingerPoseAnimIndex[1];
          if ( v21 )
            XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, v21, *((float *)&outFingerPoseLeftAnim + 1), 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          if ( *fingerPoseAnimIndex )
            XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *fingerPoseAnimIndex, *(float *)&outFingerPoseLeftAnim, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
      }
    }
  }
}

/*
==============
CG_ClientCharacter_ProcessNoteTrack
==============
*/
void CG_ClientCharacter_ProcessNoteTrack(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const XAnimNotify *notify)
{
  __int64 v4; 
  CgEntitySystem *EntitySystem; 
  __int64 v7; 
  CGCharacterState *CharacterState; 
  scr_string_t noteName; 
  const char *v10; 
  int v11; 
  char *v12; 
  const char *v13; 
  __int64 v14; 
  signed __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  char *v21; 
  const char *v22; 
  __int64 v23; 
  signed __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  char *v30; 
  char *v31; 
  const XAnimParts *animParts; 
  CharacterNoteModel *noteTrackModels; 
  CGCharacterState *v34; 
  char *v35; 
  const char *v36; 
  __int64 v37; 
  signed __int64 v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  int v42; 
  int v43; 
  char *v44; 
  const char *v45; 
  __int64 v46; 
  __int64 v47; 
  signed __int64 v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  int v52; 
  int v53; 
  char *v54; 
  const char *v55; 
  signed __int64 v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  int v60; 
  int v61; 
  DObj *ClientDObj; 
  unsigned int currentQueueIndex; 
  unsigned int v64; 
  __int64 animName; 
  const char *v66; 
  char **outParam; 
  char **outTarget; 
  char *outCommand; 
  char *modelName; 
  char *attachTag; 
  const XAnimNotify *v72; 
  char targetBuf[272]; 
  char paramBuf[272]; 
  char commandBuf[272]; 

  v72 = notify;
  v4 = (int)entityIndex;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2007, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(outTarget) = 2048;
    LODWORD(outParam) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2008, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outParam, outTarget) )
      __debugbreak();
  }
  if ( !notify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2009, ASSERT_TYPE_ASSERT, "(notify)", (const char *)&queryFormat, "notify") )
    __debugbreak();
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(outTarget) = 2048;
    LODWORD(outParam) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outParam, outTarget) )
      __debugbreak();
  }
  v7 = (__int64)&EntitySystem->m_entities[v4];
  if ( (EntitySystem->m_entities[v4].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2012, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( EntitySystem->m_entities[v4].nextState.eType != ET_CLIENT_CHARACTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 2013, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_CLIENT_CHARACTER)", (const char *)&queryFormat, "cent->nextState.eType == ET_CLIENT_CHARACTER") )
    __debugbreak();
  CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, &EntitySystem->m_entities[v4]);
  if ( !CharacterState->animTree )
    CG_ClientCharacter_CreateAnimTree(localClientNum, &EntitySystem->m_entities[v4]);
  memset_0(commandBuf, 0, 0x104ui64);
  memset_0(paramBuf, 0, 0x104ui64);
  memset_0(targetBuf, 0, 0x104ui64);
  noteName = notify->noteName;
  outCommand = NULL;
  modelName = NULL;
  attachTag = NULL;
  v10 = SL_ConvertToString(noteName);
  v11 = Com_ParseNoteTrack(v10, commandBuf, paramBuf, targetBuf, (const char **)&outCommand, (const char **)&modelName, (const char **)&attachTag);
  switch ( v11 )
  {
    case 3:
      v12 = outCommand;
      v13 = "cc_xm_createontag";
      v14 = 0x7FFFFFFFi64;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v15 = v12 - "cc_xm_createontag";
      while ( 1 )
      {
        v16 = (unsigned __int8)v13[v15];
        v17 = v14;
        v18 = *(unsigned __int8 *)v13++;
        --v14;
        if ( !v17 )
        {
LABEL_34:
          CG_ClientCharacter_CreateNoteModel(localClientNum, (const centity_t *const)v7, CharacterState, modelName, attachTag, v72->animParts);
          return;
        }
        if ( v16 != v18 )
        {
          v19 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v19 = v16;
          v16 = v19;
          v20 = v18 + 32;
          if ( (unsigned int)(v18 - 65) > 0x19 )
            v20 = v18;
          if ( v16 != v20 )
            break;
        }
        if ( !v16 )
          goto LABEL_34;
      }
      v21 = outCommand;
      v22 = "cc_xm_destroyontag";
      v23 = 0x7FFFFFFFi64;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v24 = v21 - "cc_xm_destroyontag";
      do
      {
        v25 = (unsigned __int8)v22[v24];
        v26 = v23;
        v27 = *(unsigned __int8 *)v22++;
        --v23;
        if ( !v26 )
          break;
        if ( v25 != v27 )
        {
          v28 = v25 + 32;
          if ( (unsigned int)(v25 - 65) > 0x19 )
            v28 = v25;
          v25 = v28;
          v29 = v27 + 32;
          if ( (unsigned int)(v27 - 65) > 0x19 )
            v29 = v27;
          if ( v25 != v29 )
            return;
        }
      }
      while ( v25 );
      v30 = modelName;
      v31 = attachTag;
      animParts = v72->animParts;
      if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1945, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
        __debugbreak();
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1946, ASSERT_TYPE_ASSERT, "(attachTag)", (const char *)&queryFormat, "attachTag") )
        __debugbreak();
      noteTrackModels = CharacterState->noteTrackModels;
      v34 = CharacterState + 1;
      if ( CharacterState->noteTrackModels != (CharacterNoteModel *)&CharacterState[1] )
      {
        while ( noteTrackModels->animParts != animParts || I_strnicmp(noteTrackModels->attachTag, v31, 0x7FFFFFFFui64) || I_strnicmp(noteTrackModels->modelName, v30, 0x7FFFFFFFui64) )
        {
          if ( ++noteTrackModels == (CharacterNoteModel *)v34 )
            return;
        }
        if ( noteTrackModels != (CharacterNoteModel *)v34 )
        {
          memset_0(noteTrackModels, 0, sizeof(CharacterNoteModel));
          CharacterState->flags |= 1u;
        }
      }
      break;
    case 2:
      v35 = outCommand;
      v36 = "cc_xa_facial";
      v37 = 0x7FFFFFFFi64;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v38 = v35 - "cc_xa_facial";
      do
      {
        v39 = (unsigned __int8)v36[v38];
        v40 = v37;
        v41 = *(unsigned __int8 *)v36++;
        --v37;
        if ( !v40 )
          break;
        if ( v39 != v41 )
        {
          v42 = v39 + 32;
          if ( (unsigned int)(v39 - 65) > 0x19 )
            v42 = v39;
          v39 = v42;
          v43 = v41 + 32;
          if ( (unsigned int)(v41 - 65) > 0x19 )
            v43 = v41;
          if ( v39 != v43 )
            return;
        }
      }
      while ( v39 );
      if ( modelName )
      {
        Core_strcpy(CharacterState->noteFacialAnim.animName, 0x104ui64, modelName);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1979, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
      {
        __debugbreak();
      }
      break;
    case 1:
      v44 = outCommand;
      v45 = "cc_weapon_unhide";
      v46 = 0x7FFFFFFFi64;
      v47 = 0x7FFFFFFFi64;
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v48 = v44 - "cc_weapon_unhide";
      while ( 1 )
      {
        v49 = (unsigned __int8)v45[v48];
        v50 = v47;
        v51 = *(unsigned __int8 *)v45++;
        --v47;
        if ( !v50 )
        {
LABEL_91:
          CL_UICharacter_SetCharacterWeaponVisible(localClientNum, *(_DWORD *)(v7 + 544), 1);
          return;
        }
        if ( v49 != v51 )
        {
          v52 = v49 + 32;
          if ( (unsigned int)(v49 - 65) > 0x19 )
            v52 = v49;
          v49 = v52;
          v53 = v51 + 32;
          if ( (unsigned int)(v51 - 65) > 0x19 )
            v53 = v51;
          if ( v49 != v53 )
            break;
        }
        if ( !v49 )
          goto LABEL_91;
      }
      v54 = outCommand;
      v55 = "cc_sling_hide";
      if ( !outCommand && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v56 = v54 - "cc_sling_hide";
      while ( 1 )
      {
        v57 = (unsigned __int8)v55[v56];
        v58 = v46;
        v59 = *(unsigned __int8 *)v55++;
        --v46;
        if ( !v58 )
        {
LABEL_105:
          if ( (*(_BYTE *)(v7 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1992, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
            __debugbreak();
          ClientDObj = Com_GetClientDObj(*(__int16 *)(v7 + 400), localClientNum);
          if ( ClientDObj )
            BG_HideSlingBonesForDObj(ClientDObj, 1);
          return;
        }
        if ( v57 != v59 )
        {
          v60 = v57 + 32;
          if ( (unsigned int)(v57 - 65) > 0x19 )
            v60 = v57;
          v57 = v60;
          v61 = v59 + 32;
          if ( (unsigned int)(v59 - 65) > 0x19 )
            v61 = v59;
          if ( v57 != v61 )
            break;
        }
        if ( !v57 )
          goto LABEL_105;
      }
      currentQueueIndex = CharacterState->currentQueueIndex;
      v64 = currentQueueIndex + 1;
      if ( currentQueueIndex )
      {
        if ( v64 != CharacterState->currentState.animState.animQueueEnd )
        {
          animName = (__int64)CharacterState->currentState.animState.animQueue[v64 & 7].animName;
          v66 = SL_ConvertToString(v72->noteName);
          if ( !I_strcmp(v66, (const char *)(animName + 64)) )
          {
            CG_ClientCharacter_PlayAnimation(localClientNum, (const centity_t *)v7, (const char *)animName, *(const float *)(animName + 128), *(const float *)(animName + 132));
            ++CharacterState->currentQueueIndex;
          }
        }
      }
      break;
  }
}

/*
==============
CG_ClientCharacter_ProcessPose
==============
*/
void CG_ClientCharacter_ProcessPose(const LocalClientNum_t localClientNum, centity_t *cent)
{
  const UICharacterState *State; 
  CGCharacterState *CurrentState; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  float value; 
  float v9; 
  float v10; 
  vec3_t outOrigin; 
  float s[2]; 
  __int64 v13; 
  vec3_t end; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v13 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 891, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 892, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  State = CL_UICharacter_GetState(localClientNum, cent->nextState.clientNum);
  CurrentState = CG_ClientCharacter_GetCurrentState(localClientNum, cent);
  FastSinCos(State->poseState.rotation.v[1] * -0.017453292, s, &s[1]);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  v6 = DVARBOOL_rc_draw_axis;
  if ( !DVARBOOL_rc_draw_axis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "rc_draw_axis") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    end.v[0] = outOrigin.v[0];
    end.v[1] = outOrigin.v[1];
    end.v[2] = outOrigin.v[2] + 96.0;
    CL_AddDebugLine(&outOrigin, &end, &colorRed, 0, 1, 0);
  }
  v7 = DVARVEC3_rc_override;
  if ( !DVARVEC3_rc_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "rc_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  v9 = v7->current.vector.v[1];
  v10 = v7->current.vector.v[2];
  if ( value == 0.0 && v9 == 0.0 && v10 == 0.0 )
  {
    outOrigin.v[0] = outOrigin.v[0] - State->poseState.offset.v[0];
    outOrigin.v[0] = (float)((float)(s[0] * State->poseState.offset.v[1]) + (float)(s[1] * State->poseState.offset.v[0])) + outOrigin.v[0];
    outOrigin.v[1] = outOrigin.v[1] - State->poseState.offset.v[1];
    outOrigin.v[1] = (float)((float)(s[1] * State->poseState.offset.v[1]) - (float)(s[0] * State->poseState.offset.v[0])) + outOrigin.v[1];
    outOrigin.v[2] = outOrigin.v[2] + State->poseState.offset.v[2];
  }
  else
  {
    outOrigin.v[0] = (float)((float)(v9 * s[0]) + (float)(value * s[1])) + (float)(outOrigin.v[0] - value);
    outOrigin.v[1] = (float)((float)(v9 * s[1]) - (float)(value * s[0])) + (float)(outOrigin.v[1] - v9);
    outOrigin.v[2] = v10 + outOrigin.v[2];
  }
  CG_SetPoseOrigin(&cent->pose, &outOrigin);
  AnglesToAxis(&cent->pose.angles, &axis);
  AnglesToAxis(&State->poseState.rotation, &in2);
  MatrixMultiply(&axis, &in2, &out);
  AxisToAngles(&out, &cent->pose.angles);
  *(_OWORD *)CurrentState->currentState.poseState.offset.v = *(_OWORD *)State->poseState.offset.v;
  *(double *)&CurrentState->currentState.poseState.rotation.y = *(double *)&State->poseState.rotation.y;
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_ClientCharacter_Reset
==============
*/
void CG_ClientCharacter_Reset(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  __int64 v3; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  __int64 v6; 
  __int64 v7; 
  XAnimTree **p_animTree; 

  v1 = localClientNum;
  p_m_endNodeBase = &s_characterAnimTreeData.entry[0].animData.anims.m_endNodeBase;
  v3 = 2i64;
  do
  {
    if ( *(_QWORD *)&p_m_endNodeBase[1].m_color )
    {
      mp_parent = p_m_endNodeBase->mp_parent;
      if ( mp_parent )
      {
        do
        {
          ntl::red_black_tree<ntl::fixed_string<64>,ntl::pair<ntl::fixed_string<64>,scr_anim_t>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t>>,600,8>,ntl::return_pair_first<ntl::fixed_string<64>,scr_anim_t>,ntl::less<ntl::fixed_string<64>,ntl::fixed_string<64>>>::erase_tree((ntl::red_black_tree<ntl::fixed_string<64>,ntl::pair<ntl::fixed_string<64>,scr_anim_t>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t> >,600,8>,ntl::return_pair_first<ntl::fixed_string<64>,scr_anim_t>,ntl::less<ntl::fixed_string<64>,ntl::fixed_string<64> > > *)&p_m_endNodeBase[-1951].mp_right, (ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t> > *)mp_parent->mp_right);
          mp_left = mp_parent->mp_left;
          *(_QWORD *)&mp_parent->m_color = p_m_endNodeBase[-1].mp_right;
          p_m_endNodeBase[-1].mp_right = mp_parent;
          mp_parent = mp_left;
        }
        while ( mp_left );
      }
      p_m_endNodeBase->mp_parent = NULL;
      p_m_endNodeBase->mp_left = p_m_endNodeBase;
      p_m_endNodeBase->mp_right = p_m_endNodeBase;
      *(_QWORD *)&p_m_endNodeBase[1].m_color = 0i64;
    }
    LOWORD(p_m_endNodeBase[1].mp_right) = 0;
    p_m_endNodeBase = (ntl::red_black_tree_node_base *)((char *)p_m_endNodeBase + 62728);
    --v3;
  }
  while ( v3 );
  v6 = v1;
  s_characterAnimTreeData.numEntries = 0;
  s_characterAnimDataShared[v6].ikTargetLeft = NULL;
  v7 = 20i64;
  s_characterAnimDataShared[v6].ikTargetRight = NULL;
  s_characterAnimDataShared[v6].checkAnimPackagesLoaded = 0;
  p_animTree = &s_characterState[v1][0].animTree;
  *(__m256i *)&s_characterAnimDataInstance[0].treeDataIndex = _ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
  *(__m256i *)&s_characterAnimDataInstance[8].treeDataIndex = _ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
  *(__m256i *)&s_characterAnimDataInstance[16].treeDataIndex = _ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
  *(__m256i *)&s_characterAnimDataInstance[24].treeDataIndex = _ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
  do
  {
    if ( *p_animTree )
      XAnimFreeTree(*p_animTree, NULL);
    memset_0(p_animTree - 608, 0, 0x24A8ui64);
    p_animTree += 1173;
    --v7;
  }
  while ( v7 );
}

/*
==============
CG_ClientCharacter_ResetEntity
==============
*/
void CG_ClientCharacter_ResetEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  CGCharacterState *CharacterState; 
  XAnimTree *animTree; 
  __int64 v6; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1709, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v6) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1710, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, 2) )
      __debugbreak();
  }
  if ( (cent->flags & 1) != 0 )
  {
    if ( cent->nextState.eType != ET_CLIENT_CHARACTER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1714, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_CLIENT_CHARACTER)", (const char *)&queryFormat, "cent->nextState.eType == ET_CLIENT_CHARACTER") )
      __debugbreak();
    CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
    memset_0(CharacterState, 0, 0x12F8ui64);
    animTree = CharacterState->animTree;
    if ( animTree )
      XAnimClearTreeNoObj(animTree);
    CharacterState->animIndex = 0;
    CharacterState->loadState = CHARACTER_DOBJ_LOADED_NONE;
    CharacterState->weaponTableAnimIndex = 0;
    *(_QWORD *)CharacterState->fingerPoseAnimIndex = 0i64;
  }
}

/*
==============
CG_ClientCharacter_ResolveRequestedWeapons
==============
*/
void CG_ClientCharacter_ResolveRequestedWeapons(const LocalClientNum_t localClientNum, const UICharacterState *character, Weapon *outHeldWeapon, Weapon *outStowWeapon, Weapon *outAccessoryWeapon)
{
  Weapon *WeaponForName; 
  __int128 v10; 
  double v11; 
  int v12; 
  Weapon *v13; 
  __int128 v14; 
  double v15; 
  int v16; 
  Weapon *v17; 
  __int128 v18; 
  double v19; 
  int v20; 
  __int64 v21; 
  Weapon result; 

  if ( !character && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 810, ASSERT_TYPE_ASSERT, "(character)", (const char *)&queryFormat, "character") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v21) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 811, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, 2) )
      __debugbreak();
  }
  if ( character->modelState.heldWeapon[0] )
  {
    WeaponForName = CG_Weapons_GetWeaponForName(&result, character->modelState.heldWeapon);
    v10 = *(_OWORD *)&WeaponForName->attachmentVariationIndices[5];
    v11 = *(double *)&WeaponForName->attachmentVariationIndices[21];
    v12 = *(_DWORD *)&WeaponForName->weaponCamo;
    *(__m256i *)&outHeldWeapon->weaponIdx = *(__m256i *)&WeaponForName->weaponIdx;
    *(_OWORD *)&outHeldWeapon->attachmentVariationIndices[5] = v10;
    *(double *)&outHeldWeapon->attachmentVariationIndices[21] = v11;
    *(_DWORD *)&outHeldWeapon->weaponCamo = v12;
  }
  else
  {
    *outHeldWeapon = NULL_WEAPON;
  }
  if ( character->modelState.stowedWeapon[0] )
  {
    v13 = CG_Weapons_GetWeaponForName(&result, character->modelState.stowedWeapon);
    v14 = *(_OWORD *)&v13->attachmentVariationIndices[5];
    v15 = *(double *)&v13->attachmentVariationIndices[21];
    v16 = *(_DWORD *)&v13->weaponCamo;
    *(__m256i *)&outStowWeapon->weaponIdx = *(__m256i *)&v13->weaponIdx;
    *(_OWORD *)&outStowWeapon->attachmentVariationIndices[5] = v14;
    *(double *)&outStowWeapon->attachmentVariationIndices[21] = v15;
    *(_DWORD *)&outStowWeapon->weaponCamo = v16;
  }
  else
  {
    *outStowWeapon = NULL_WEAPON;
  }
  if ( character->modelState.accessoryWeapon[0] )
  {
    v17 = CG_Weapons_GetWeaponForName(&result, character->modelState.accessoryWeapon);
    v18 = *(_OWORD *)&v17->attachmentVariationIndices[5];
    v19 = *(double *)&v17->attachmentVariationIndices[21];
    v20 = *(_DWORD *)&v17->weaponCamo;
    *(__m256i *)&outAccessoryWeapon->weaponIdx = *(__m256i *)&v17->weaponIdx;
    *(_OWORD *)&outAccessoryWeapon->attachmentVariationIndices[5] = v18;
    *(double *)&outAccessoryWeapon->attachmentVariationIndices[21] = v19;
    *(_DWORD *)&outAccessoryWeapon->weaponCamo = v20;
  }
  else
  {
    *outAccessoryWeapon = NULL_WEAPON;
  }
}

/*
==============
CG_ClientCharacter_SetAnimationTime
==============
*/
void CG_ClientCharacter_SetAnimationTime(const LocalClientNum_t localClientNum, const unsigned int entityIndex, DObj *const dobj, XAnimTree *const animTree, const unsigned int animIndex, const float time)
{
  __int128 v6; 
  __int128 v7; 
  double v13; 
  float v14; 
  const XAnim_s *Anims; 
  const XAnimParts *Parts; 
  unsigned __int64 i; 
  XAnimNotifyInfo *v18; 
  float v19; 
  XAnimNotify notify; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 

  v23 = v6;
  v22 = v7;
  v21 = _XMM11;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 945, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 946, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 947, ASSERT_TYPE_ASSERT, "(animIndex != 0)", (const char *)&queryFormat, "animIndex != 0") )
    __debugbreak();
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( (time < 0.0 || time > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 948, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", time, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  v13 = XAnimGetTime(animTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  v14 = *(float *)&v13;
  if ( (*(float *)&v13 < 0.0 || *(float *)&v13 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 951, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( currentTime ) && ( currentTime ) <= ( 1.0f )", "currentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v13, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  XAnimSetTime(animTree, 0, XANIM_SUBTREE_DEFAULT, animIndex, time);
  if ( time > *(float *)&v13 )
  {
    Anims = XAnimGetAnims(animTree);
    if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 963, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    Parts = XAnimGetParts(Anims, animIndex);
    if ( !Parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 965, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
      __debugbreak();
    for ( i = 0i64; i < Parts->notifyCount; ++i )
    {
      v18 = Parts->notify;
      v19 = v18[i].time;
      if ( v14 <= v19 && v19 <= time )
      {
        notify.noteName = v18[i].name;
        notify.notifyName = 0;
        notify.timeFrac = time;
        notify.notifyType = 5;
        notify.animParts = Parts;
        CG_ClientCharacter_ProcessNoteTrack(localClientNum, entityIndex, &notify);
      }
    }
  }
}

/*
==============
CG_ClientCharacter_SetHidePartBits
==============
*/
void CG_ClientCharacter_SetHidePartBits(DObj *obj, const Weapon *weapon, const CharacterModelType (*dobjModelTypes)[32], const CharacterModelType modelTypeToApply, const int searchRangeStart, const int searchRangeFinish)
{
  int NumModels; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int *outFirst; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  int lastModelInclusive; 
  int startModel; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 365, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !dobjModelTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 366, ASSERT_TYPE_ASSERT, "(dobjModelTypes)", (const char *)&queryFormat, "dobjModelTypes") )
    __debugbreak();
  startModel = -1;
  lastModelInclusive = -1;
  NumModels = DObjGetNumModels(obj);
  v11 = searchRangeStart;
  v20 = NumModels;
  v12 = NumModels - 1;
  if ( searchRangeStart < 0 || searchRangeStart > v12 )
  {
    LODWORD(outFirst) = searchRangeStart;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 372, ASSERT_TYPE_ASSERT, "( 0 ) <= ( searchRangeStart ) && ( searchRangeStart ) <= ( (numModels - 1) )", "searchRangeStart not in [0, (numModels - 1)]\n\t%i not in [%i, %i]", outFirst, 0i64, NumModels - 1) )
      __debugbreak();
  }
  v13 = searchRangeFinish;
  if ( searchRangeFinish < 0 || searchRangeFinish > v12 )
  {
    LODWORD(v18) = v12;
    LODWORD(outFirst) = searchRangeFinish;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 373, ASSERT_TYPE_ASSERT, "( 0 ) <= ( searchRangeFinish ) && ( searchRangeFinish ) <= ( (numModels - 1) )", "searchRangeFinish not in [0, (numModels - 1)]\n\t%i not in [%i, %i]", outFirst, 0i64, v18) )
      __debugbreak();
  }
  if ( BG_GetCharacterModelRangeByType(obj, dobjModelTypes, modelTypeToApply, v11, v13, &startModel, &lastModelInclusive) )
  {
    do
    {
      v14 = lastModelInclusive;
      if ( lastModelInclusive > v13 )
      {
        LODWORD(v19) = v13;
        LODWORD(v18) = lastModelInclusive;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 379, ASSERT_TYPE_ASSERT, "( lastModel ) <= ( searchRangeFinish )", "%s <= %s\n\t%i, %i", "lastModel", "searchRangeFinish", v18, v19) )
          __debugbreak();
        v14 = lastModelInclusive;
      }
      BG_UpdateWeaponHidePartBitsForDObjByModelRange(obj, weapon, 0, startModel, v14);
      BG_UpdatedWeaponBonesByModelRange(weapon, obj, startModel, lastModelInclusive);
      v15 = lastModelInclusive;
      v16 = startModel;
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 355, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      BG_HideBoneByModelRange((const scr_string_t)scr_const.tag_zerog_off, obj, &obj->hidePartBits, v16, v15);
      BG_HideBoneByModelRange((const scr_string_t)scr_const.tag_zerog_off2, obj, &obj->hidePartBits, v16, v15);
      BG_HideBoneByModelRange((const scr_string_t)scr_const.j_loose_round, obj, &obj->hidePartBits, v16, v15);
      BG_HideSlingBonesForDObj(obj, 1);
    }
    while ( lastModelInclusive + 1 < v20 && BG_GetCharacterModelRangeByType(obj, dobjModelTypes, modelTypeToApply, lastModelInclusive + 1, v13, &startModel, &lastModelInclusive) );
  }
}

/*
==============
CG_ClientCharacter_Shutdown
==============
*/

void __fastcall CG_ClientCharacter_Shutdown(const LocalClientNum_t localClientNum)
{
  CG_ClientCharacter_Reset(localClientNum);
}

/*
==============
CG_ClientCharacter_ShutdownEntity
==============
*/
void CG_ClientCharacter_ShutdownEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  if ( !cent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1693, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 291, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
  }
  if ( Com_GetClientDObj(cent->nextState.number, localClientNum) )
    Com_SafeClientDObjFree(cent->nextState.number, localClientNum);
  if ( ScriptableCl_IsReservedScriptableEntity(localClientNum, cent->nextState.number) )
    ScriptableCl_UnbindEntityReservedDef(localClientNum, cent->nextState.number);
}

/*
==============
CG_ClientCharacter_UpdateCharacterLoadedFlags
==============
*/
__int64 CG_ClientCharacter_UpdateCharacterLoadedFlags(const LocalClientNum_t localClientNum, const UICharacterState *character, const Weapon *r_heldWeapon, const Weapon *r_stowWeapon, const Weapon *r_weaponAccessory, CharacterDObjLoadedFlags *outLoadedFlags, bool isVerbosePrint)
{
  __int64 v7; 
  const Weapon *v8; 
  ClGameModeApplication *ActiveClientApplication; 
  CgWeaponSystem *v11; 
  unsigned __int8 v12; 
  CharacterDObjLoadedFlags v13; 
  unsigned int v14; 
  const char *v15; 
  const char *WeaponBaseName; 
  const char *v17; 
  const char *v18; 
  __int64 v20; 
  __int64 v21; 

  v7 = localClientNum;
  v8 = r_stowWeapon;
  if ( !character && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 635, ASSERT_TYPE_ASSERT, "(character)", (const char *)&queryFormat, "character") )
    __debugbreak();
  ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v7) )
    __debugbreak();
  if ( (unsigned int)v7 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v21) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v20) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v7] )
  {
    LODWORD(v21) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v21) )
      __debugbreak();
  }
  v11 = CgWeaponSystem::ms_weaponSystemArray[v7];
  v12 = 1;
  v13 = CHARACTER_DOBJ_LOADED_NONE;
  if ( character->modelState.bodyPartModelCount )
  {
    v13 = CHARACTER_DOBJ_LOADED_BODY_PARTS;
    v14 = 0;
    while ( 1 )
    {
      v15 = character->modelState.bodyPartModels[(unsigned __int64)v14];
      if ( !*v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 650, ASSERT_TYPE_ASSERT, "(bodyPartModelName[0])", "%s\n\tShould not have empty string for body part", "bodyPartModelName[0]") )
        __debugbreak();
      if ( !ActiveClientApplication->IsModelNameLoaded(ActiveClientApplication, v15) )
        break;
      if ( ++v14 >= character->modelState.bodyPartModelCount )
        goto LABEL_24;
    }
    if ( isVerbosePrint )
      Com_Printf(14, "Client Character Missing Body: %s\n", v15);
    v13 = CHARACTER_DOBJ_LOADED_NONE;
    v12 = 0;
LABEL_24:
    v8 = r_stowWeapon;
  }
  if ( r_heldWeapon->weaponIdx )
  {
    if ( v11->IsWeaponWorldModelLoaded(v11, r_heldWeapon) )
    {
      v13 |= 2u;
    }
    else
    {
      if ( isVerbosePrint )
      {
        WeaponBaseName = BG_GetWeaponBaseName(r_heldWeapon, 0);
        Com_Printf(14, "Client Character Missing Held Weapon: %s\n", WeaponBaseName);
      }
      v12 = 0;
    }
  }
  if ( v8->weaponIdx )
  {
    if ( v11->IsWeaponWorldModelLoaded(v11, v8) )
    {
      v13 |= 4u;
    }
    else
    {
      if ( isVerbosePrint )
      {
        v17 = BG_GetWeaponBaseName(v8, 0);
        Com_Printf(14, "Client Character Missing Stow Weapon: %s\n", v17);
      }
      v12 = 0;
    }
  }
  if ( r_weaponAccessory->weaponIdx )
  {
    if ( v11->IsWeaponWorldModelLoaded(v11, r_weaponAccessory) )
    {
      v13 |= 8u;
    }
    else
    {
      if ( isVerbosePrint )
      {
        v18 = BG_GetWeaponBaseName(r_weaponAccessory, 0);
        Com_Printf(14, "Client Character Missing Accessory Weapon: %s\n", v18);
      }
      v12 = 0;
    }
  }
  if ( outLoadedFlags )
    *outLoadedFlags = v13;
  return v12;
}

/*
==============
CG_ClientCharacter_UpdateCheckAnimPackages
==============
*/
void CG_ClientCharacter_UpdateCheckAnimPackages(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned __int8 ActiveGameMode; 
  __int64 v3; 
  const char *v4; 

  v1 = localClientNum;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v3 = ActiveGameMode;
  if ( !ActiveGameMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 1750, ASSERT_TYPE_ASSERT, "(activeGameMode)", (const char *)&queryFormat, "activeGameMode") )
    __debugbreak();
  v4 = s_fastfileNames[v3];
  if ( !v4 )
    s_characterAnimDataShared[v1].checkAnimPackagesLoaded = 0;
  if ( s_characterAnimDataShared[v1].checkAnimPackagesLoaded )
    s_characterAnimDataShared[v1].checkAnimPackagesLoaded = DB_PollFastfileState(v4) != AWAITING_COMMIT;
}

/*
==============
CG_ClientCharacter_ValidateNoteModels
==============
*/
void CG_ClientCharacter_ValidateNoteModels(const LocalClientNum_t localClientNum, const centity_t *cent, unsigned __int8 *outDObjFlags)
{
  unsigned __int8 *v3; 
  CGCharacterState *CharacterState; 
  const XAnimTree *CurrentAnimTree; 
  CharacterNoteModel *noteTrackModels; 
  const char **p_name; 
  unsigned int AnimIndex; 

  v3 = outDObjFlags;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 768, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 769, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 770, ASSERT_TYPE_ASSERT, "(outDObjFlags)", (const char *)&queryFormat, "outDObjFlags") )
    __debugbreak();
  CharacterState = CG_ClientCharacter_GetCharacterState(localClientNum, cent);
  if ( !CharacterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 773, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  CurrentAnimTree = CG_ClientCharacter_GetCurrentAnimTree(localClientNum, cent);
  if ( CurrentAnimTree )
  {
    noteTrackModels = CharacterState->noteTrackModels;
    if ( CharacterState->noteTrackModels != (CharacterNoteModel *)&CharacterState[1] )
    {
      do
      {
        p_name = &noteTrackModels->animParts->name;
        if ( p_name )
        {
          AnimIndex = CG_ClientCharacter_GetAnimIndex(localClientNum, cent, *p_name);
          if ( !AnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_character.cpp", 793, ASSERT_TYPE_ASSERT, "(animIndex != 0)", "%s\n\tClientCharacter_ValidateNoteTrackModels(): encountered XModel (%s) spawned by an animation (%s) not found in this entity's anim tree.", "animIndex != 0", noteTrackModels->modelName, noteTrackModels->animParts->name) )
            __debugbreak();
          if ( XAnimHasFinished(CurrentAnimTree, 0, XANIM_SUBTREE_DEFAULT, AnimIndex) )
          {
            memset_0(noteTrackModels, 0, sizeof(CharacterNoteModel));
            CharacterState->flags |= 1u;
          }
        }
        ++noteTrackModels;
      }
      while ( noteTrackModels != (CharacterNoteModel *)&CharacterState[1] );
      v3 = outDObjFlags;
    }
    *v3 = CharacterState->flags;
  }
}

