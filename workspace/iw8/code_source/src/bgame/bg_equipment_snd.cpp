/*
==============
BG_PackHardLandingEventParm
==============
*/

int __fastcall BG_PackHardLandingEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int damage, int isSoftLanding, int viewDip, int surfType)
{
  return ?BG_PackHardLandingEventParm@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@HHHH@Z(weaponMap, ps, damage, isSoftLanding, viewDip, surfType);
}

/*
==============
BG_UnpackSoftLandingEventParm
==============
*/

void __fastcall BG_UnpackSoftLandingEventParm(int eventParm, unsigned int *viewDip, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *surfType)
{
  ?BG_UnpackSoftLandingEventParm@@YAXHPEAI000@Z(eventParm, viewDip, clothType, weaponRattleType, surfType);
}

/*
==============
BG_UnpackMeleeParam
==============
*/

void __fastcall BG_UnpackMeleeParam(int param, MeleeAnimType *outAttackerAnim, WeaponMaterialType *outMaterial, bool *outIsAltMelee, int *outVariant)
{
  ?BG_UnpackMeleeParam@@YAXHPEAW4MeleeAnimType@@PEAW4WeaponMaterialType@@PEA_NPEAH@Z(param, outAttackerAnim, outMaterial, outIsAltMelee, outVariant);
}

/*
==============
BG_ChooseEquipmentSound
==============
*/

SndAliasList *__fastcall BG_ChooseEquipmentSound(unsigned int clothType, unsigned int weaponRattleType, EquipmentMoveType_t moveType, int isPlayerView, unsigned int *holdRand)
{
  return ?BG_ChooseEquipmentSound@@YAPEAUSndAliasList@@IIW4EquipmentMoveType_t@@HPEAI@Z(clothType, weaponRattleType, moveType, isPlayerView, holdRand);
}

/*
==============
BG_UnpackMeleeCharacterImpactParam
==============
*/

void __fastcall BG_UnpackMeleeCharacterImpactParam(int param, int *outClothType, MeleeAnimType *outAttackerAnim, WeaponMaterialType *outMaterial, bool *outIsAltMelee, int *outVariant, MeleeResult *outResult, float *outImpactHeight)
{
  ?BG_UnpackMeleeCharacterImpactParam@@YAXHPEAHPEAW4MeleeAnimType@@PEAW4WeaponMaterialType@@PEA_N0PEAW4MeleeResult@@PEAM@Z(param, outClothType, outAttackerAnim, outMaterial, outIsAltMelee, outVariant, outResult, outImpactHeight);
}

/*
==============
BG_GetWeaponAccentSound
==============
*/

SndAliasList *__fastcall BG_GetWeaponAccentSound(EquipmentMoveType_t moveType, int isPlayerView)
{
  return ?BG_GetWeaponAccentSound@@YAPEAUSndAliasList@@W4EquipmentMoveType_t@@H@Z(moveType, isPlayerView);
}

/*
==============
BG_PackEquipSoundEventParam
==============
*/

unsigned int __fastcall BG_PackEquipSoundEventParam(MovementLeadType_t leadType, unsigned __int8 clothType, unsigned __int8 rattleSoundType, EquipmentMoveType_t moveType)
{
  return ?BG_PackEquipSoundEventParam@@YAIW4MovementLeadType_t@@EEW4EquipmentMoveType_t@@@Z(leadType, clothType, rattleSoundType, moveType);
}

/*
==============
BG_GetClothFoleyMovementSound
==============
*/

SndAliasList *__fastcall BG_GetClothFoleyMovementSound(unsigned int clothType, MovementLeadType_t leadType, EquipmentMoveType_t moveType, int isPlayerView)
{
  return ?BG_GetClothFoleyMovementSound@@YAPEAUSndAliasList@@IW4MovementLeadType_t@@W4EquipmentMoveType_t@@H@Z(clothType, leadType, moveType, isPlayerView);
}

/*
==============
BG_UnpackFootstepEventParm
==============
*/

void __fastcall BG_UnpackFootstepEventParm(int eventParm, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *surfType, FootstepActionType_t *outActionType, bool *isLeft)
{
  ?BG_UnpackFootstepEventParm@@YAXHPEAI00PEAW4FootstepActionType_t@@PEA_N@Z(eventParm, clothType, weaponRattleType, surfType, outActionType, isLeft);
}

/*
==============
BG_UnpackStanceEventParm
==============
*/

void __fastcall BG_UnpackStanceEventParm(int eventParm, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *surfType)
{
  ?BG_UnpackStanceEventParm@@YAXHPEAI00@Z(eventParm, clothType, weaponRattleType, surfType);
}

/*
==============
BG_FindEquipmentSoundClothIndex
==============
*/

int __fastcall BG_FindEquipmentSoundClothIndex(const char *szClothName)
{
  return ?BG_FindEquipmentSoundClothIndex@@YAHPEBD@Z(szClothName);
}

/*
==============
BG_GetMeleeWorldImpactSound
==============
*/

SndAliasList *__fastcall BG_GetMeleeWorldImpactSound(MeleeAnimType attackerAnim, WeaponMaterialType material, bool isAltMelee, unsigned int variant, bool isPlayerView)
{
  return ?BG_GetMeleeWorldImpactSound@@YAPEAUSndAliasList@@W4MeleeAnimType@@W4WeaponMaterialType@@_NI2@Z(attackerAnim, material, isAltMelee, variant, isPlayerView);
}

/*
==============
BG_GetEquipmentSoundFoleyName
==============
*/

const char *__fastcall BG_GetEquipmentSoundFoleyName(int clothIndex)
{
  return ?BG_GetEquipmentSoundFoleyName@@YAPEBDH@Z(clothIndex);
}

/*
==============
BG_PackMeleeCharacterImpactParam
==============
*/

int __fastcall BG_PackMeleeCharacterImpactParam(int clothType, MeleeAnimType attackerAnim, WeaponMaterialType material, bool isAltMelee, int variant, MeleeResult result, float impactHeight)
{
  return ?BG_PackMeleeCharacterImpactParam@@YAHHW4MeleeAnimType@@W4WeaponMaterialType@@_NHW4MeleeResult@@M@Z(clothType, attackerAnim, material, isAltMelee, variant, result, impactHeight);
}

/*
==============
BG_PackSoftLandingEventParm
==============
*/

int __fastcall BG_PackSoftLandingEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int viewDip, int surfType)
{
  return ?BG_PackSoftLandingEventParm@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@HH@Z(weaponMap, ps, viewDip, surfType);
}

/*
==============
BG_UnpackMeleeAttackAnimParam
==============
*/

void __fastcall BG_UnpackMeleeAttackAnimParam(int param, MeleeAnimType *outAnimType, MeleeResult *outResult, bool *outIsAltMelee, int *outVariant)
{
  ?BG_UnpackMeleeAttackAnimParam@@YAXHPEAW4MeleeAnimType@@PEAW4MeleeResult@@PEA_NPEAH@Z(param, outAnimType, outResult, outIsAltMelee, outVariant);
}

/*
==============
BG_PackMeleeAttackAnimParam
==============
*/

int __fastcall BG_PackMeleeAttackAnimParam(MeleeAnimType animType, MeleeResult meleeResult, bool isAltMelee, int variant)
{
  return ?BG_PackMeleeAttackAnimParam@@YAHW4MeleeAnimType@@W4MeleeResult@@_NH@Z(animType, meleeResult, isAltMelee, variant);
}

/*
==============
BG_GetStanceTransitionSound
==============
*/

SndAliasList *__fastcall BG_GetStanceTransitionSound(unsigned int clothType, EquipmentStanceType_t stanceType, int isPlayerView)
{
  return ?BG_GetStanceTransitionSound@@YAPEAUSndAliasList@@IW4EquipmentStanceType_t@@H@Z(clothType, stanceType, isPlayerView);
}

/*
==============
BG_UnpackHardLandingEventParm
==============
*/

void __fastcall BG_UnpackHardLandingEventParm(int eventParm, unsigned int *damage, int *isSoftLanding, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *viewDip, unsigned int *surfType)
{
  ?BG_UnpackHardLandingEventParm@@YAXHPEAIPEAH0000@Z(eventParm, damage, isSoftLanding, clothType, weaponRattleType, viewDip, surfType);
}

/*
==============
BG_PackMantleEventParm
==============
*/

unsigned int __fastcall BG_PackMantleEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int mantleSoundFlavorPLR, int mantleSoundFlavorNPC, const gestureAnimType_t mantleType)
{
  return ?BG_PackMantleEventParm@@YAIPEBVBgWeaponMap@@PEBUplayerState_s@@HHW4gestureAnimType_t@@@Z(weaponMap, ps, mantleSoundFlavorPLR, mantleSoundFlavorNPC, mantleType);
}

/*
==============
BG_GetClothFootstepMovementSound
==============
*/

SndAliasList *__fastcall BG_GetClothFootstepMovementSound(unsigned int clothType, FootstepActionType_t actionType, FootstepMoveType_t moveType, int isLeftFoot, int isPlayerView)
{
  return ?BG_GetClothFootstepMovementSound@@YAPEAUSndAliasList@@IW4FootstepActionType_t@@W4FootstepMoveType_t@@HH@Z(clothType, actionType, moveType, isLeftFoot, isPlayerView);
}

/*
==============
BG_PackStanceEventParm
==============
*/

int __fastcall BG_PackStanceEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int surfType)
{
  return ?BG_PackStanceEventParm@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, surfType);
}

/*
==============
BG_GetWeaponRattleSound
==============
*/

SndAliasList *__fastcall BG_GetWeaponRattleSound(unsigned int weaponRattleType, EquipmentMoveType_t moveType, int isPlayerView)
{
  return ?BG_GetWeaponRattleSound@@YAPEAUSndAliasList@@IW4EquipmentMoveType_t@@H@Z(weaponRattleType, moveType, isPlayerView);
}

/*
==============
BG_GetActionCamSubmixName
==============
*/

const char *__fastcall BG_GetActionCamSubmixName()
{
  return ?BG_GetActionCamSubmixName@@YAPEBDXZ();
}

/*
==============
BG_GetClothMeleeAttackSoundPLR
==============
*/

SndAliasList *__fastcall BG_GetClothMeleeAttackSoundPLR(unsigned int clothType, MeleeImpactType attackerImpactType, WeaponMaterialType materialType, bool isAltMelee, unsigned int variant, MeleeResult result)
{
  return ?BG_GetClothMeleeAttackSoundPLR@@YAPEAUSndAliasList@@IW4MeleeImpactType@@W4WeaponMaterialType@@_NIW4MeleeResult@@@Z(clothType, attackerImpactType, materialType, isAltMelee, variant, result);
}

/*
==============
BG_BuildMountImpactSound
==============
*/

void __fastcall BG_BuildMountImpactSound(bool isMountTop, const char *customString, bool isPlayerView, char *outResultString, int resultSize, SndAliasList **outAliasList)
{
  ?BG_BuildMountImpactSound@@YAX_NPEBD0PEADHPEAPEAUSndAliasList@@@Z(isMountTop, customString, isPlayerView, outResultString, resultSize, outAliasList);
}

/*
==============
BG_GetClothFootstepCeilingSound
==============
*/

SndAliasList *__fastcall BG_GetClothFootstepCeilingSound(unsigned int clothType, FootstepActionType_t actionType, FootstepMoveType_t moveType, int isLeftFoot, int isPlayerView)
{
  return ?BG_GetClothFootstepCeilingSound@@YAPEAUSndAliasList@@IW4FootstepActionType_t@@W4FootstepMoveType_t@@HH@Z(clothType, actionType, moveType, isLeftFoot, isPlayerView);
}

/*
==============
BG_GetEquipmentSoundFootstepName
==============
*/

const char *__fastcall BG_GetEquipmentSoundFootstepName(int clothIndex)
{
  return ?BG_GetEquipmentSoundFootstepName@@YAPEBDH@Z(clothIndex);
}

/*
==============
BG_GetClothMeleeCharacterImpactSound
==============
*/

SndAliasList *__fastcall BG_GetClothMeleeCharacterImpactSound(unsigned int clothType, MeleeAnimType attackerAnim, WeaponMaterialType material, bool isAltMelee, unsigned int variant, MeleeResult result, bool isPlayerView)
{
  return ?BG_GetClothMeleeCharacterImpactSound@@YAPEAUSndAliasList@@IW4MeleeAnimType@@W4WeaponMaterialType@@_NIW4MeleeResult@@2@Z(clothType, attackerAnim, material, isAltMelee, variant, result, isPlayerView);
}

/*
==============
BG_UnpackMantleEventParm
==============
*/

void __fastcall BG_UnpackMantleEventParm(unsigned int eventParm, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *mantleSoundFlavorPLR, unsigned int *mantleSoundFlavorNPC, gestureAnimType_t *mantleType)
{
  ?BG_UnpackMantleEventParm@@YAXIPEAI000PEAW4gestureAnimType_t@@@Z(eventParm, clothType, weaponRattleType, mantleSoundFlavorPLR, mantleSoundFlavorNPC, mantleType);
}

/*
==============
BG_PackFootstepEventParm
==============
*/

int __fastcall BG_PackFootstepEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int surfType, FootstepActionType_t actionType, bool isLeft)
{
  return ?BG_PackFootstepEventParm@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@HW4FootstepActionType_t@@_N@Z(weaponMap, ps, surfType, actionType, isLeft);
}

/*
==============
BG_GetClothMeleeAttackSoundNPC
==============
*/

SndAliasList *__fastcall BG_GetClothMeleeAttackSoundNPC(unsigned int clothType, MeleeAnimType attackerAnim, WeaponMaterialType materialType, bool isAltMelee, unsigned int variant, MeleeResult result)
{
  return ?BG_GetClothMeleeAttackSoundNPC@@YAPEAUSndAliasList@@IW4MeleeAnimType@@W4WeaponMaterialType@@_NIW4MeleeResult@@@Z(clothType, attackerAnim, materialType, isAltMelee, variant, result);
}

/*
==============
BG_PackMeleeParam
==============
*/

int __fastcall BG_PackMeleeParam(MeleeAnimType attackerAnim, WeaponMaterialType material, bool isAltMelee, int variant)
{
  return ?BG_PackMeleeParam@@YAHW4MeleeAnimType@@W4WeaponMaterialType@@_NH@Z(attackerAnim, material, isAltMelee, variant);
}

/*
==============
BG_BuildMountEnterExitSound
==============
*/

void __fastcall BG_BuildMountEnterExitSound(const EquipmentSoundTable *soundTable, bool isMountEnter, bool isMountTop, const char *customString, int clothType, bool isPlayerView, char *outResultString, int resultSize, SndAliasList **outAliasList)
{
  ?BG_BuildMountEnterExitSound@@YAXPEBUEquipmentSoundTable@@_N1PEBDH1PEADHPEAPEAUSndAliasList@@@Z(soundTable, isMountEnter, isMountTop, customString, clothType, isPlayerView, outResultString, resultSize, outAliasList);
}

/*
==============
BG_FindEquipmentSoundAliases
==============
*/

void BG_FindEquipmentSoundAliases(void)
{
  ?BG_FindEquipmentSoundAliases@@YAXXZ();
}

/*
==============
BG_GetEquipmentMoveType
==============
*/

EquipmentMoveType_t __fastcall BG_GetEquipmentMoveType(const char *szMoveTypeName)
{
  return ?BG_GetEquipmentMoveType@@YA?AW4EquipmentMoveType_t@@PEBD@Z(szMoveTypeName);
}

/*
==============
BG_GetMantleSound
==============
*/

SndAliasList *__fastcall BG_GetMantleSound(unsigned int clothType, gestureAnimType_t mantleGestureType, int isPlayerView)
{
  return ?BG_GetMantleSound@@YAPEAUSndAliasList@@IW4gestureAnimType_t@@H@Z(clothType, mantleGestureType, isPlayerView);
}

/*
==============
BG_BuildFootstepSound
==============
*/
void BG_BuildFootstepSound(const EquipmentSoundTable *soundTable, int clothType, FootstepActionType_t actionType, FootstepMoveType_t moveType, int isLeftFoot, int isPlayerView, const char *suffix, char *resultString, int resultSize)
{
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  const char *v13; 
  const char **v14; 
  bool v15; 
  __int64 v16; 
  const char **v17; 
  EquipmentClothData *clothTypes; 
  const char *footstepName; 
  unsigned int v20; 
  char v21; 
  unsigned int v22; 
  const char *v23; 
  size_t v24; 
  char *fmt; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char **v30; 
  const char **v31; 
  char dest[64]; 
  char v33[64]; 
  char v34[64]; 
  char v35[192]; 

  LODWORD(v30) = isPlayerView;
  v10 = moveType;
  v11 = actionType;
  v12 = clothType;
  if ( !soundTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 250, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
    __debugbreak();
  if ( (unsigned int)v12 >= soundTable->numClothTypes )
  {
    LODWORD(v27) = soundTable->numClothTypes;
    LODWORD(v26) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( (unsigned int)v11 >= 4 )
  {
    LODWORD(v27) = 4;
    LODWORD(v26) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 252, ASSERT_TYPE_ASSERT, "(unsigned)( actionType ) < (unsigned)( FOOTSTEP_ACTION_TYPE_COUNT )", "actionType doesn't index FOOTSTEP_ACTION_TYPE_COUNT\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= 0xB )
  {
    LODWORD(v27) = 11;
    LODWORD(v26) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 253, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( FOOTSTEP_MOVE_TYPE_COUNT )", "moveType doesn't index FOOTSTEP_MOVE_TYPE_COUNT\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( !resultString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 254, ASSERT_TYPE_ASSERT, "(resultString)", (const char *)&queryFormat, "resultString") )
    __debugbreak();
  memset_0(dest, 0, 0x180ui64);
  v29 = suffix;
  v13 = szFootstepActionTypeNames[v11];
  v14 = &szFootstepMoveTypeNames[v10];
  v15 = (_DWORD)v30 != 0;
  LODWORD(v30) = -(int)v30;
  v31 = (const char **)((char *)szIsLeftNames + (isLeftFoot != 0 ? 8 : 0));
  v16 = v12;
  v17 = (const char **)((char *)szIsPlrNames + (v15 ? 8 : 0));
  clothTypes = soundTable->clothTypes;
  v28 = *v31;
  v27 = *v14;
  v26 = *v17;
  footstepName = clothTypes[v12].footstepName;
  v30 = v17;
  Com_sprintf(dest, 0x40ui64, "%s_%s_%s_%s_%s%s", v13, footstepName, v26, v27, v28, suffix);
  Com_sprintf(v33, 0x40ui64, "%s_%s_%s_%s%s", szFootstepActionTypeNames[v11], soundTable->clothTypes[v12].footstepName, *v17, *v14, suffix);
  v20 = 2;
  if ( (unsigned int)(v11 - 2) <= 1 )
  {
    v21 = 1;
    Com_sprintf(v34, 0x40ui64, "%s_%s_%s_%s_%s%s", szFootstepActionTypeNames[1], soundTable->clothTypes[v16].footstepName, *v30, *v14, *v31, suffix);
    Com_sprintf(v35, 0x40ui64, "%s_%s_%s_%s%s", szFootstepActionTypeNames[1], soundTable->clothTypes[v16].footstepName, *v30, *v14, suffix);
    v20 = 4;
  }
  else
  {
    v21 = 0;
  }
  if ( (_DWORD)v11 == 1 || v21 )
  {
    Com_sprintf(&dest[64 * (unsigned __int64)v20], 0x40ui64, "%s_%s_%s_%s_%s%s", szFootstepActionTypeNames[0], soundTable->clothTypes[v16].footstepName, *v30, *v14, *v31, suffix);
    Com_sprintf(&dest[64 * (unsigned __int64)(v20 + 1)], 0x40ui64, "%s_%s_%s_%s%s", szFootstepActionTypeNames[0], soundTable->clothTypes[v16].footstepName, *v30, *v14, suffix);
    v20 += 2;
  }
  if ( v20 > 6 )
  {
    LODWORD(v29) = 6;
    LODWORD(v28) = v20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 321, ASSERT_TYPE_ASSERT, "( aliasCount ) <= ( ( sizeof( *array_counter( footstepAlias ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "aliasCount", "ARRAY_COUNT( footstepAlias )", v28, v29) )
      __debugbreak();
  }
  v22 = 0;
  *resultString = 0;
  if ( v20 )
  {
    while ( 1 )
    {
      if ( v22 > 6 )
      {
        LODWORD(v29) = 6;
        LODWORD(v28) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 327, ASSERT_TYPE_ASSERT, "( index ) <= ( ( sizeof( *array_counter( footstepAlias ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "index", "ARRAY_COUNT( footstepAlias )", v28, v29) )
          __debugbreak();
      }
      v23 = &dest[64 * (__int64)(int)v22];
      if ( BG_Equipment_Snd_FindAlias(v23, 0) )
        break;
      if ( (int)++v22 >= (int)v20 )
      {
        v24 = resultSize;
        goto LABEL_33;
      }
    }
    v24 = resultSize;
    strncpy(resultString, v23, resultSize);
LABEL_33:
    if ( !*resultString )
      strncpy(resultString, (const char *)&(&fmt)[8 * (unsigned __int64)v20], v24);
  }
}

/*
==============
BG_BuildMantleSound
==============
*/
void BG_BuildMantleSound(const EquipmentSoundTable *soundTable, int clothType, gestureAnimType_t mantleGestureType, int isPlayerView, char *resultString, int resultSize)
{
  __int64 v7; 
  __int64 v9; 
  EquipmentClothData *clothTypes; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  const char *v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  const char *v49; 

  v7 = mantleGestureType;
  v9 = clothType;
  if ( !soundTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 546, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
    __debugbreak();
  if ( (unsigned int)v9 >= soundTable->numClothTypes )
  {
    LODWORD(v13) = soundTable->numClothTypes;
    LODWORD(v12) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 547, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)(v7 - 3) > 0x22 )
  {
    LODWORD(v14) = 37;
    LODWORD(v13) = 3;
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 548, ASSERT_TYPE_ASSERT, "( GESTUREANIMTYPE_MANTLE_FIRST ) <= ( mantleGestureType ) && ( mantleGestureType ) <= ( GESTUREANIMTYPE_MANTLE_LAST )", "mantleGestureType not in [GESTUREANIMTYPE_MANTLE_FIRST, GESTUREANIMTYPE_MANTLE_LAST]\n\t%i not in [%i, %i]", v12, v13, v14) )
      __debugbreak();
  }
  if ( !resultString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 549, ASSERT_TYPE_ASSERT, "(resultString)", (const char *)&queryFormat, "resultString") )
    __debugbreak();
  clothTypes = soundTable->clothTypes;
  v15 = "on_forward_low";
  v16 = "on_forward_middle";
  v11 = "npc";
  v17 = "on_forward_high";
  if ( isPlayerView )
    v11 = "plr";
  v18 = "on_forward_extreme";
  v19 = "on_backward_low";
  v20 = "on_backward_middle";
  v21 = "on_backward_high";
  v22 = "on_backward_extreme";
  v23 = "on_left_low";
  v24 = "on_left_middle";
  v25 = "on_left_high";
  v26 = "on_left_extreme";
  v27 = "on_right_low";
  v28 = "on_right_middle";
  v29 = "on_right_high";
  v30 = "on_right_extreme";
  v31 = "over_forward_low";
  v32 = "over_forward_middle";
  v33 = "over_forward_high";
  v34 = "over_forward_extreme";
  v35 = "over_backward_low";
  v36 = "over_backward_middle";
  v37 = "over_backward_high";
  v38 = "over_backward_extreme";
  v39 = "over_left_low";
  v40 = "over_left_middle";
  v41 = "over_left_high";
  v42 = "over_left_extreme";
  v43 = "over_right_low";
  v44 = "over_right_middle";
  v45 = "over_right_high";
  v46 = "over_right_extreme";
  v47 = "ladder_low";
  v48 = "ladder_midle";
  v49 = "ladder_high";
  Com_sprintf(resultString, resultSize, "%s_%s_%s_%s", "mantle", clothTypes[v9].foleyName, v11, (const char *)*(&v12 + v7));
}

/*
==============
BG_BuildMeleeAttackSoundPLR
==============
*/
void BG_BuildMeleeAttackSoundPLR(const EquipmentSoundTable *soundTable, const char *prefix, int clothType, MeleeImpactType impactType, WeaponMaterialType materialType, bool isAltMelee, int variant, MeleeResult resultType, int isPlayerView, char *resultString, int resultSize)
{
  __int64 v12; 
  __int64 v13; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v12 = impactType;
  v13 = clothType;
  if ( !soundTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 347, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
    __debugbreak();
  if ( !prefix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 348, ASSERT_TYPE_ASSERT, "(prefix)", (const char *)&queryFormat, "prefix") )
    __debugbreak();
  if ( (unsigned int)v13 >= soundTable->numClothTypes )
  {
    LODWORD(v16) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 349, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", v16, soundTable->numClothTypes) )
      __debugbreak();
  }
  if ( (unsigned int)v12 >= 0xE )
  {
    LODWORD(v17) = 14;
    LODWORD(v16) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 350, ASSERT_TYPE_ASSERT, "(unsigned)( impactType ) < (unsigned)( MELEE_IMPACT_TYPE_COUNT )", "impactType doesn't index MELEE_IMPACT_TYPE_COUNT\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( (unsigned int)materialType >= (COUNT|DODGE) )
  {
    LODWORD(v17) = 3;
    LODWORD(v16) = materialType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 351, ASSERT_TYPE_ASSERT, "(unsigned)( materialType ) < (unsigned)( WeaponMaterialType::COUNT )", "materialType doesn't index WeaponMaterialType::COUNT\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( (unsigned __int8)isAltMelee >= 2u )
  {
    LODWORD(v17) = 2;
    LODWORD(v16) = isAltMelee;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 352, ASSERT_TYPE_ASSERT, "(unsigned)( isAltMelee ) < (unsigned)( 2 )", "isAltMelee doesn't index 2\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( (unsigned int)variant >= 4 )
  {
    LODWORD(v17) = 4;
    LODWORD(v16) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 353, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( (unsigned int)resultType >= NUM_RESULT )
  {
    LODWORD(v17) = 3;
    LODWORD(v16) = resultType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 354, ASSERT_TYPE_ASSERT, "(unsigned)( resultType ) < (unsigned)( MeleeResult::NUM_RESULT )", "resultType doesn't index MeleeResult::NUM_RESULT\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( !resultString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 355, ASSERT_TYPE_ASSERT, "(resultString)", (const char *)&queryFormat, "resultString") )
    __debugbreak();
  v15 = v13;
  Com_sprintf(resultString, resultSize, "%s_%s_%s_%s_%s_%s_%s_%s", prefix, soundTable->clothTypes[v15].foleyName, szMeleeImpactTypeNames[v12], szWeaponMaterialNames[materialType], szMeleeAlternateTypeNames[isAltMelee], szMeleeVariantNames[variant], szMeleeResultNames[resultType], szIsPlrNames[isPlayerView]);
  if ( !BG_Equipment_Snd_FindAlias(resultString, 0) )
    Com_sprintf(resultString, resultSize, "%s_%s_%s_%s_%s_%s_%s_%s", prefix, soundTable->clothTypes[v15].foleyName, szMeleeImpactTypeNames[2], szWeaponMaterialNames[0], szMeleeAlternateTypeNames[0], szMeleeVariantNames[0], szMeleeResultNames[0], szIsPlrNames[1]);
}

/*
==============
BG_BuildMeleeSound
==============
*/
void BG_BuildMeleeSound(const EquipmentSoundTable *soundTable, const char *prefix, int clothType, MeleeAnimType wmAnimType, WeaponMaterialType materialType, bool isAltMelee, int variant, MeleeResult resultType, MeleeResult fallbackResultType, int isPlayerView, char *resultString, int resultSize)
{
  __int64 v13; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v13 = wmAnimType;
  if ( !soundTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 389, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
    __debugbreak();
  if ( !prefix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 390, ASSERT_TYPE_ASSERT, "(prefix)", (const char *)&queryFormat, "prefix") )
    __debugbreak();
  if ( clothType >= soundTable->numClothTypes )
  {
    LODWORD(v17) = clothType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 391, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", v17, soundTable->numClothTypes) )
      __debugbreak();
  }
  if ( (unsigned int)v13 >= 8 )
  {
    LODWORD(v18) = 8;
    LODWORD(v17) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 392, ASSERT_TYPE_ASSERT, "(unsigned)( wmAnimType ) < (unsigned)( MeleeAnimType::COUNT )", "wmAnimType doesn't index MeleeAnimType::COUNT\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (unsigned int)materialType >= (COUNT|DODGE) )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = materialType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 393, ASSERT_TYPE_ASSERT, "(unsigned)( materialType ) < (unsigned)( WeaponMaterialType::COUNT )", "materialType doesn't index WeaponMaterialType::COUNT\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (unsigned __int8)isAltMelee >= 2u )
  {
    LODWORD(v18) = 2;
    LODWORD(v17) = isAltMelee;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 394, ASSERT_TYPE_ASSERT, "(unsigned)( isAltMelee ) < (unsigned)( 2 )", "isAltMelee doesn't index 2\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (unsigned int)variant >= 4 )
  {
    LODWORD(v18) = 4;
    LODWORD(v17) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 395, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (unsigned int)resultType >= NUM_RESULT )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = resultType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( resultType ) < (unsigned)( MeleeResult::NUM_RESULT )", "resultType doesn't index MeleeResult::NUM_RESULT\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (unsigned int)fallbackResultType >= NUM_RESULT )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = fallbackResultType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 397, ASSERT_TYPE_ASSERT, "(unsigned)( fallbackResultType ) < (unsigned)( MeleeResult::NUM_RESULT )", "fallbackResultType doesn't index MeleeResult::NUM_RESULT\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( !resultString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 398, ASSERT_TYPE_ASSERT, "(resultString)", (const char *)&queryFormat, "resultString") )
    __debugbreak();
  v16 = clothType;
  Com_sprintf(resultString, resultSize, "%s_%s_%s_%s_%s_%s_%s_%s", prefix, soundTable->clothTypes[v16].foleyName, szMeleeWmAnimTypeNames[v13], szWeaponMaterialNames[materialType], szMeleeAlternateTypeNames[isAltMelee], szMeleeVariantNames[variant], szMeleeResultNames[resultType], szIsPlrNames[isPlayerView]);
  if ( !BG_Equipment_Snd_FindAlias(resultString, 0) )
    Com_sprintf(resultString, resultSize, "%s_%s_%s_%s_%s_%s_%s_%s", prefix, soundTable->clothTypes[v16].foleyName, szMeleeWmAnimTypeNames[3], szWeaponMaterialNames[0], szMeleeAlternateTypeNames[0], szMeleeVariantNames[0], szMeleeResultNames[fallbackResultType], szIsPlrNames[0]);
}

/*
==============
BG_BuildMeleeWorldSound
==============
*/
void BG_BuildMeleeWorldSound(const EquipmentSoundTable *soundTable, const char *prefix, MeleeAnimType wmAnimType, WeaponMaterialType materialType, bool isAltMelee, int variant, int isPlayerView, char *resultString, int resultSize)
{
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v9 = materialType;
  v11 = wmAnimType;
  if ( !soundTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 432, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
    __debugbreak();
  if ( !prefix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 433, ASSERT_TYPE_ASSERT, "(prefix)", (const char *)&queryFormat, "prefix") )
    __debugbreak();
  if ( (unsigned int)v11 >= 8 )
  {
    LODWORD(v12) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 434, ASSERT_TYPE_ASSERT, "(unsigned)( wmAnimType ) < (unsigned)( MeleeAnimType::COUNT )", "wmAnimType doesn't index MeleeAnimType::COUNT\n\t%i not in [0, %i)", v12, 8) )
      __debugbreak();
  }
  if ( (unsigned int)v9 >= 3 )
  {
    LODWORD(v13) = 3;
    LODWORD(v12) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialType ) < (unsigned)( WeaponMaterialType::COUNT )", "materialType doesn't index WeaponMaterialType::COUNT\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned __int8)isAltMelee >= 2u )
  {
    LODWORD(v13) = 2;
    LODWORD(v12) = isAltMelee;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 436, ASSERT_TYPE_ASSERT, "(unsigned)( isAltMelee ) < (unsigned)( 2 )", "isAltMelee doesn't index 2\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)variant >= 4 )
  {
    LODWORD(v13) = 4;
    LODWORD(v12) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 437, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( !resultString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 438, ASSERT_TYPE_ASSERT, "(resultString)", (const char *)&queryFormat, "resultString") )
    __debugbreak();
  Com_sprintf(resultString, resultSize, "%s_%s_%s_%s_%s_%s", prefix, szMeleeWmAnimTypeNames[v11], szWeaponMaterialNames[v9], szMeleeAlternateTypeNames[isAltMelee], szMeleeVariantNames[variant], szIsPlrNames[isPlayerView]);
  if ( !BG_Equipment_Snd_FindAlias(resultString, 0) )
    Com_sprintf(resultString, resultSize, "%s_%s_%s_%s_%s_%s", prefix, szMeleeWmAnimTypeNames[3], szWeaponMaterialNames[0], szMeleeAlternateTypeNames[0], szMeleeVariantNames[0], szIsPlrNames[0]);
}

/*
==============
BG_BuildMountEnterExitSound
==============
*/
void BG_BuildMountEnterExitSound(const EquipmentSoundTable *soundTable, bool isMountEnter, bool isMountTop, const char *customString, int clothType, bool isPlayerView, char *outResultString, int resultSize, SndAliasList **outAliasList)
{
  const char **v13; 
  const char **v14; 
  const char *v15; 
  const char **v16; 
  SndAliasList *Alias; 
  __int64 v18; 

  if ( !soundTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 468, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
    __debugbreak();
  if ( !customString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 469, ASSERT_TYPE_ASSERT, "(customString)", (const char *)&queryFormat, "customString") )
    __debugbreak();
  if ( clothType >= soundTable->numClothTypes )
  {
    LODWORD(v18) = clothType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", v18, soundTable->numClothTypes) )
      __debugbreak();
  }
  if ( !outResultString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 471, ASSERT_TYPE_ASSERT, "(outResultString)", (const char *)&queryFormat, "outResultString") )
    __debugbreak();
  if ( !outAliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 472, ASSERT_TYPE_ASSERT, "(outAliasList)", (const char *)&queryFormat, "outAliasList") )
    __debugbreak();
  v13 = &szIsPlrNames[isPlayerView];
  v14 = &szMountIsTopNames[isMountTop];
  v15 = szMountIsEnterNames[isMountEnter];
  v16 = &szMountIsEnterNames[isMountEnter];
  Com_sprintf(outResultString, resultSize, "%s_%s_%s_%s_%s", v15, *v14, customString, soundTable->clothTypes[clothType].foleyName, *v13);
  Alias = SND_TryFindAlias(outResultString);
  *outAliasList = Alias;
  if ( !Alias )
  {
    Com_sprintf(outResultString, resultSize, "%s_%s_%s_%s_%s", *v16, *v14, customString, "vestlight", *v13);
    *outAliasList = SND_TryFindAlias(outResultString);
  }
}

/*
==============
BG_BuildMountImpactSound
==============
*/
void BG_BuildMountImpactSound(bool isMountTop, const char *customString, bool isPlayerView, char *outResultString, int resultSize, SndAliasList **outAliasList)
{
  if ( !customString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 509, ASSERT_TYPE_ASSERT, "(customString)", (const char *)&queryFormat, "customString") )
    __debugbreak();
  if ( !outResultString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 510, ASSERT_TYPE_ASSERT, "(outResultString)", (const char *)&queryFormat, "outResultString") )
    __debugbreak();
  if ( !outAliasList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 511, ASSERT_TYPE_ASSERT, "(outAliasList)", (const char *)&queryFormat, "outAliasList") )
    __debugbreak();
  Com_sprintf(outResultString, resultSize, "mount_impact_%s_%s_%s", szMountIsTopNames[isMountTop], customString, szIsPlrNames[isPlayerView]);
  *outAliasList = SND_TryFindAlias(outResultString);
}

/*
==============
BG_BuildStanceSound
==============
*/
void BG_BuildStanceSound(const EquipmentSoundTable *soundTable, int clothType, EquipmentStanceType_t stanceType, int isPlayerView, char *resultString, int resultSize)
{
  __int64 v6; 
  const char *v10; 
  __int32 v11; 
  __int32 v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 

  v6 = clothType;
  if ( !soundTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 596, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
    __debugbreak();
  if ( (unsigned int)v6 >= soundTable->numClothTypes )
  {
    LODWORD(v14) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 597, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", v14, soundTable->numClothTypes) )
      __debugbreak();
  }
  if ( stanceType >= soundTable->numStanceTypes )
  {
    LODWORD(v15) = soundTable->numStanceTypes;
    LODWORD(v14) = stanceType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 598, ASSERT_TYPE_ASSERT, "(unsigned)( stanceType ) < (unsigned)( soundTable->numStanceTypes )", "stanceType doesn't index soundTable->numStanceTypes\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !resultString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 599, ASSERT_TYPE_ASSERT, "(resultString)", (const char *)&queryFormat, "resultString") )
    __debugbreak();
  v10 = NULL;
  if ( stanceType )
  {
    v11 = stanceType - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v10 = "to_stand";
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 617, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tUnexpected stance type encountered in BuildStanceSound()", "false") )
        {
          __debugbreak();
        }
      }
      else
      {
        v10 = "stand_to_crouch";
      }
    }
    else
    {
      v10 = "prone_to_crouch";
    }
  }
  else
  {
    v10 = "to_prone";
  }
  v13 = "npc";
  if ( isPlayerView )
    v13 = "plr";
  Com_sprintf(resultString, resultSize, "%s_%s_%s_%s", "stance", soundTable->clothTypes[v6].foleyName, v13, v10);
}

/*
==============
BG_ChooseEquipmentSound
==============
*/
SndAliasList *BG_ChooseEquipmentSound(unsigned int clothType, unsigned int weaponRattleType, EquipmentMoveType_t moveType, int isPlayerView, unsigned int *holdRand)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  double v9; 
  EquipmentSoundTable *equipmentSoundTable; 
  EquipmentChanceRattleTypes *chancesPLR; 
  EquipmentSndChance *chances; 
  EquipmentSoundTable *v13; 
  EquipmentSoundSet *v14; 
  EquipmentSoundTable *v16; 
  EquipmentSoundSet *soundSets; 
  __int64 v18; 
  __int64 v19; 

  v6 = moveType;
  v7 = weaponRattleType;
  v8 = clothType;
  if ( weaponRattleType == 15 )
    return 0i64;
  v9 = BG_flrand(0.0, 1.0, holdRand);
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( (unsigned int)v8 >= cgMedia.equipmentSoundTable->numClothTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1065, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", v8, cgMedia.equipmentSoundTable->numClothTypes) )
    __debugbreak();
  if ( (unsigned int)v7 >= equipmentSoundTable->numWeaponRattleTypes )
  {
    LODWORD(v19) = equipmentSoundTable->numWeaponRattleTypes;
    LODWORD(v18) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1066, ASSERT_TYPE_ASSERT, "(unsigned)( weaponRattleType ) < (unsigned)( soundTable->numWeaponRattleTypes )", "weaponRattleType doesn't index soundTable->numWeaponRattleTypes\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 8 )
  {
    LODWORD(v19) = 8;
    LODWORD(v18) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1067, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( EQUIPMENT_MOVE_TYPE_TOTAL )", "moveType doesn't index EQUIPMENT_MOVE_TYPE_TOTAL\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( isPlayerView )
    chancesPLR = equipmentSoundTable->chancesPLR;
  else
    chancesPLR = equipmentSoundTable->chancesNPC;
  chances = chancesPLR[v8].chances[v7].chances;
  if ( *(float *)&v9 < chances[v6].rattleChance )
  {
    v13 = cgMedia.equipmentSoundTable;
    if ( cgMedia.equipmentSoundTable )
    {
      if ( (unsigned int)v7 >= cgMedia.equipmentSoundTable->numWeaponRattleTypes )
      {
        LODWORD(v19) = cgMedia.equipmentSoundTable->numWeaponRattleTypes;
        LODWORD(v18) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 979, ASSERT_TYPE_ASSERT, "(unsigned)( weaponRattleType ) < (unsigned)( soundTable->numWeaponRattleTypes )", "weaponRattleType doesn't index soundTable->numWeaponRattleTypes\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( (unsigned int)v6 >= 8 )
      {
        LODWORD(v19) = 8;
        LODWORD(v18) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 980, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( EQUIPMENT_MOVE_TYPE_TOTAL )", "moveType doesn't index EQUIPMENT_MOVE_TYPE_TOTAL\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v14 = &v13->mvmtRattleSoundSets[v7].soundSets[v6];
      if ( isPlayerView )
        return v14->soundPLR;
      else
        return v14->soundNPC;
    }
    return 0i64;
  }
  if ( *(float *)&v9 >= chances[v6].accentChance )
    return 0i64;
  v16 = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( (unsigned int)v6 >= 8 )
  {
    LODWORD(v19) = 8;
    LODWORD(v18) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 994, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( EQUIPMENT_MOVE_TYPE_TOTAL )", "moveType doesn't index EQUIPMENT_MOVE_TYPE_TOTAL\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  soundSets = v16->mvmtAccentSoundSets.soundSets;
  if ( isPlayerView )
    return soundSets[v6].soundPLR;
  else
    return soundSets[v6].soundNPC;
}

/*
==============
BG_ChooseWeaponRattleTypeForEquipmentSound
==============
*/
unsigned __int8 BG_ChooseWeaponRattleTypeForEquipmentSound(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  char v4; 
  EquipmentSoundTable *equipmentSoundTable; 
  float v6; 
  int v8; 
  BgWeaponHandle *weaponsEquipped; 
  const Weapon *Weapon; 
  const WeaponDef *v11; 
  const WeaponDef *v12; 
  WeaponSFXPackage *sfxPackage; 
  unsigned __int8 rattleSoundType; 
  float priority; 
  const Weapon *v16; 
  WeaponSFXPackage *v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1092, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1093, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    v4 = 15;
    equipmentSoundTable = cgMedia.equipmentSoundTable;
    v6 = FLOAT_N1_0;
    if ( cgMedia.equipmentSoundTable )
    {
      v8 = 0;
      weaponsEquipped = ps->weaponsEquipped;
      do
      {
        if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( (unsigned int)v8 >= 0xF )
        {
          LODWORD(v19) = 15;
          LODWORD(v18) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, (BgWeaponHandle)weaponsEquipped->m_mapEntryId);
        if ( Weapon->weaponIdx )
        {
          v11 = BG_WeaponDef(Weapon, 0);
          v12 = v11;
          sfxPackage = v11->sfxPackage;
          if ( sfxPackage )
          {
            if ( v11->weapType != WEAPTYPE_GRENADE )
            {
              rattleSoundType = sfxPackage->rattleSoundType;
              if ( rattleSoundType == 15 )
              {
                priority = 0.0;
              }
              else
              {
                if ( rattleSoundType >= equipmentSoundTable->numWeaponRattleTypes )
                {
                  LODWORD(v19) = equipmentSoundTable->numWeaponRattleTypes;
                  LODWORD(v18) = rattleSoundType;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1131, ASSERT_TYPE_ASSERT, "(unsigned)( weapDef->sfxPackage->rattleSoundType ) < (unsigned)( soundTable->numWeaponRattleTypes )", "weapDef->sfxPackage->rattleSoundType doesn't index soundTable->numWeaponRattleTypes\n\t%i not in [0, %i)", v18, v19) )
                    __debugbreak();
                }
                sfxPackage = v12->sfxPackage;
                priority = equipmentSoundTable->weaponRattleTypes[sfxPackage->rattleSoundType].priority;
              }
              if ( priority > v6 )
              {
                v4 = sfxPackage->rattleSoundType;
                v6 = priority;
              }
            }
          }
        }
        ++v8;
        ++weaponsEquipped;
      }
      while ( v8 < 15 );
      return v4;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v16 = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weapCommon.weaponHandle);
    if ( v16->weaponIdx && (v17 = BG_WeaponDef(v16, 0)->sfxPackage) != NULL )
      return v17->rattleSoundType;
    else
      return 15;
  }
}

/*
==============
BG_Equipment_Snd_FindAlias
==============
*/
SndAliasList *BG_Equipment_Snd_FindAlias(const char *name, bool notifyOnMissing)
{
  SndAliasList *result; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  result = SND_TryFindAlias(name);
  if ( !result )
  {
    if ( notifyOnMissing )
      goto LABEL_13;
    v5 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
    if ( !DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
      return result;
    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
    if ( v5->current.enabled )
    {
LABEL_13:
      if ( SND_Active() )
      {
        v6 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v6->current.enabled) )
          Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", name);
        else
          Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", name);
      }
    }
    return 0i64;
  }
  return result;
}

/*
==============
BG_FindEquipmentSoundAliases
==============
*/
void BG_FindEquipmentSoundAliases(void)
{
  MeleeAnimType v0; 
  EquipmentSoundTable *equipSndTable; 
  EquipmentSoundTable *equipmentSoundTable; 
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  const char **v8; 
  EquipmentSoundTable *v9; 
  SndAliasList *Alias; 
  const dvar_t *v11; 
  SndAliasList *v12; 
  const dvar_t *v13; 
  SndAliasList *v14; 
  const dvar_t *v15; 
  SndAliasList *v16; 
  const dvar_t *v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  SndAliasList **v26; 
  SndAliasList *v27; 
  const dvar_t *v28; 
  SndAliasList *v29; 
  const dvar_t *v30; 
  EquipmentSoundSet *v31; 
  SndAliasList *v32; 
  const dvar_t *v33; 
  SndAliasList *v34; 
  const dvar_t *v35; 
  __int64 v36; 
  SndAliasList *v37; 
  const dvar_t *v38; 
  SndAliasList *v39; 
  const dvar_t *v40; 
  __int64 v41; 
  int i; 
  SndAliasList *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  SndAliasList *v46; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  EquipmentStanceType_t v49; 
  unsigned __int64 v50; 
  SndAliasList *v51; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  SndAliasList *v54; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  WeaponMaterialType v57; 
  unsigned int v58; 
  unsigned int v59; 
  bool v60; 
  MeleeResult v61; 
  __int64 v62; 
  MeleeImpactType v63; 
  __int64 v64; 
  SndAliasList *v65; 
  const dvar_t *v66; 
  const dvar_t *v67; 
  __int64 v68; 
  MeleeAnimType v69; 
  __int64 v70; 
  SndAliasList *v71; 
  const dvar_t *v72; 
  const dvar_t *v73; 
  __int64 v74; 
  __int64 v75; 
  SndAliasList *v76; 
  const dvar_t *v77; 
  const dvar_t *v78; 
  SndAliasList *v79; 
  const dvar_t *v80; 
  const dvar_t *v81; 
  SndAliasList **p_soundNPC; 
  WeaponMaterialType v83; 
  unsigned int v84; 
  bool j; 
  SndAliasList *v86; 
  const dvar_t *v87; 
  const dvar_t *v88; 
  SndAliasList *v89; 
  const dvar_t *v90; 
  const dvar_t *v91; 
  unsigned int v92; 
  EquipmentSoundTable *v93; 
  __int64 v94; 
  unsigned int k; 
  unsigned int m; 
  const char **v97; 
  SndAliasList *v98; 
  const dvar_t *v99; 
  SndAliasList *v100; 
  const dvar_t *v101; 
  __int64 v102; 
  const char **v103; 
  SndAliasList *v104; 
  const dvar_t *v105; 
  SndAliasList *v106; 
  const dvar_t *v107; 
  __int64 isPlayerView; 
  __int64 isPlayerViewa; 
  __int64 isPlayerViewb; 
  __int64 isPlayerViewc; 
  __int64 isPlayerViewd; 
  __int64 isPlayerViewe; 
  char *suffix; 
  char *suffixa; 
  char *suffixb; 
  char *suffixc; 
  char *suffixd; 
  char *suffixe; 
  bool v120; 
  unsigned int clothType; 
  EquipmentSoundTable *soundTable; 
  WeaponMaterialType materialType; 
  int variant; 
  unsigned int v125; 
  unsigned int v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 
  __int64 v130; 
  __int64 v131; 
  __int64 v132; 
  __int64 v133; 
  __int64 v134; 
  char dest[64]; 

  v0 = MOVEMENT;
  equipSndTable = DB_FindXAssetHeader(ASSET_TYPE_EQUIPMENT_SND_TABLE, "sound/settings/equipment_snd.def", 0).equipSndTable;
  if ( !equipSndTable || DB_IsXAssetDefault(ASSET_TYPE_EQUIPMENT_SND_TABLE, "sound/settings/equipment_snd.def") )
  {
    Com_PrintError(10, "Missing equipment sound table \"%s\".\n", "sound/settings/equipment_snd.def");
    equipSndTable = NULL;
  }
  cgMedia.equipmentSoundTable = equipSndTable;
  if ( !equipSndTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 648, ASSERT_TYPE_ASSERT, "(cgMedia.equipmentSoundTable)", (const char *)&queryFormat, "cgMedia.equipmentSoundTable") )
    __debugbreak();
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  v3 = 0;
  soundTable = cgMedia.equipmentSoundTable;
  for ( clothType = 0; v3 < soundTable->numClothTypes; clothType = v3 )
  {
    v4 = 0;
    v5 = v3;
    v6 = (int)v3;
    v7 = 0i64;
    v134 = v3;
    while ( 1 )
    {
      if ( v3 >= equipmentSoundTable->numClothTypes )
      {
        LODWORD(suffix) = equipmentSoundTable->numClothTypes;
        LODWORD(isPlayerView) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", isPlayerView, suffix) )
          __debugbreak();
      }
      v8 = &szEquipmentMoveTypeNames[v4];
      v9 = soundTable;
      Com_sprintf(dest, 0x40ui64, "%s_%s_%s_%s%s", "mvmt", soundTable->clothTypes[v6].foleyName, "npc", *v8, szLeadNames[1]);
      Alias = SND_TryFindAlias(dest);
      if ( !Alias && SND_Active() )
      {
        v11 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v11->current.enabled) )
          Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        else
          Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        v9 = soundTable;
      }
      v9->mvmtClothFoleySoundSets[v5].soundSetsPre[v7].soundNPC = Alias;
      if ( clothType >= v9->numClothTypes )
      {
        LODWORD(suffixa) = v9->numClothTypes;
        LODWORD(isPlayerViewa) = clothType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", isPlayerViewa, suffixa) )
          __debugbreak();
      }
      Com_sprintf(dest, 0x40ui64, "%s_%s_%s_%s%s", "mvmt", v9->clothTypes[v6].foleyName, "npc", *v8, szLeadNames[2]);
      v12 = SND_TryFindAlias(dest);
      if ( !v12 && SND_Active() )
      {
        v13 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v13->current.enabled) )
          Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        else
          Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        v9 = soundTable;
      }
      v9->mvmtClothFoleySoundSets[v5].soundSetsPost[v7].soundNPC = v12;
      if ( clothType >= v9->numClothTypes )
      {
        LODWORD(suffixb) = v9->numClothTypes;
        LODWORD(isPlayerViewb) = clothType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", isPlayerViewb, suffixb) )
          __debugbreak();
      }
      Com_sprintf(dest, 0x40ui64, "%s_%s_%s_%s%s", "mvmt", v9->clothTypes[v6].foleyName, "plr", *v8, szLeadNames[1]);
      v14 = SND_TryFindAlias(dest);
      if ( !v14 && SND_Active() )
      {
        v15 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v15->current.enabled) )
          Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        else
          Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        v9 = soundTable;
      }
      v9->mvmtClothFoleySoundSets[v5].soundSetsPre[v7].soundPLR = v14;
      if ( clothType >= v9->numClothTypes )
      {
        LODWORD(suffixc) = v9->numClothTypes;
        LODWORD(isPlayerViewc) = clothType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", isPlayerViewc, suffixc) )
          __debugbreak();
      }
      Com_sprintf(dest, 0x40ui64, "%s_%s_%s_%s%s", "mvmt", v9->clothTypes[v6].foleyName, "plr", *v8, szLeadNames[2]);
      v16 = SND_TryFindAlias(dest);
      if ( !v16 && SND_Active() )
      {
        v17 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v17->current.enabled) )
          Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        else
          Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
      }
      equipmentSoundTable = soundTable;
      ++v4;
      soundTable->mvmtClothFoleySoundSets[v5].soundSetsPost[v7++].soundPLR = v16;
      if ( v4 >= 8 )
        break;
      v3 = clothType;
    }
    v18 = 0;
    v130 = 0i64;
    v19 = 0i64;
    v20 = 4 * v134;
    do
    {
      v127 = 0i64;
      v21 = 22 * (v19 + v20);
      v22 = 0;
      v23 = 0i64;
      v132 = v21;
      v24 = 0i64;
      do
      {
        v25 = v23 + v21;
        v26 = (SndAliasList **)((char *)equipmentSoundTable->mvmtClothFootstepSoundSets + 16 * v23 + 16 * v21);
        BG_BuildFootstepSound(equipmentSoundTable, clothType, (FootstepActionType_t)v18, (FootstepMoveType_t)v22, 1, 0, (const char *)&queryFormat.fmt + 3, dest, 64);
        v27 = SND_TryFindAlias(dest);
        if ( !v27 && SND_Active() )
        {
          v28 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
          if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v28->current.enabled) )
            Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          else
            Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        }
        v26[1] = v27;
        BG_BuildFootstepSound(soundTable, clothType, (FootstepActionType_t)v18, (FootstepMoveType_t)v22, 1, 1, (const char *)&queryFormat.fmt + 3, dest, 64);
        v29 = SND_TryFindAlias(dest);
        if ( !v29 && SND_Active() )
        {
          v30 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
          if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v30->current.enabled) )
            Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          else
            Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        }
        *v26 = v29;
        v31 = &soundTable->mvmtClothFootstepSoundSets->actionType[0].right[v25];
        BG_BuildFootstepSound(soundTable, clothType, (FootstepActionType_t)v18, (FootstepMoveType_t)v22, 0, 0, (const char *)&queryFormat.fmt + 3, dest, 64);
        v32 = SND_TryFindAlias(dest);
        if ( !v32 && SND_Active() )
        {
          v33 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
          if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v33->current.enabled) )
            Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          else
            Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        }
        v31->soundNPC = v32;
        BG_BuildFootstepSound(soundTable, clothType, (FootstepActionType_t)v18, (FootstepMoveType_t)v22, 0, 1, (const char *)&queryFormat.fmt + 3, dest, 64);
        v34 = SND_TryFindAlias(dest);
        if ( !v34 && SND_Active() )
        {
          v35 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
          if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v35->current.enabled) )
            Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          else
            Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        }
        v31->soundPLR = v34;
        v36 = (__int64)&soundTable->mvmtClothFootstepCeilingSoundSets[v134].actionType[v130];
        BG_BuildFootstepSound(soundTable, clothType, (FootstepActionType_t)v18, (FootstepMoveType_t)v22, 1, 0, "_ceiling", dest, 64);
        v37 = SND_TryFindAlias(dest);
        if ( !v37 && SND_Active() )
        {
          v38 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
          if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v38->current.enabled) )
            Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          else
            Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        }
        *(_QWORD *)(v36 + v24 + 8) = v37;
        BG_BuildFootstepSound(soundTable, clothType, (FootstepActionType_t)v18, (FootstepMoveType_t)v22, 1, 0, "_ceiling", dest, 64);
        v39 = SND_TryFindAlias(dest);
        if ( !v39 && SND_Active() )
        {
          v40 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
          if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v40->current.enabled) )
            Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          else
            Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        }
        ++v22;
        v21 = v132;
        v23 = v127 + 1;
        equipmentSoundTable = soundTable;
        *(_QWORD *)(v36 + v24 + 184) = v39;
        v24 += 16i64;
        ++v127;
      }
      while ( v22 < 11 );
      v20 = 4 * v134;
      v19 = v130 + 1;
      ++v18;
      ++v130;
    }
    while ( v18 < 4 );
    v41 = 35 * v134;
    for ( i = 3; i <= 37; ++i )
    {
      BG_BuildMantleSound(equipmentSoundTable, clothType, (gestureAnimType_t)i, 0, dest, 64);
      v43 = SND_TryFindAlias(dest);
      if ( !v43 )
      {
        v44 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
        {
          Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
          if ( v44->current.enabled && SND_Active() )
          {
            v45 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
            if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v45->current.enabled) )
              Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
            else
              Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          }
        }
      }
      soundTable->mvmtMantleSoundSets->soundSets[v41].soundNPC = v43;
      BG_BuildMantleSound(soundTable, clothType, (gestureAnimType_t)i, 1, dest, 64);
      v46 = SND_TryFindAlias(dest);
      if ( !v46 )
      {
        v47 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
        {
          Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
          if ( v47->current.enabled && SND_Active() )
          {
            v48 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
            if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v48->current.enabled) )
              Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
            else
              Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          }
        }
      }
      equipmentSoundTable = soundTable;
      soundTable->mvmtMantleSoundSets->soundSets[v41++].soundPLR = v46;
    }
    v0 = MOVEMENT;
    v49 = EQUIPMENT_STANCE_TO_PRONE;
    v50 = (unsigned __int64)clothType << 6;
    do
    {
      BG_BuildStanceSound(equipmentSoundTable, clothType, v49, 0, dest, 64);
      v51 = SND_TryFindAlias(dest);
      if ( !v51 )
      {
        v52 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
        {
          Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
          if ( v52->current.enabled && SND_Active() )
          {
            v53 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
            if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v53->current.enabled) )
              Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
            else
              Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          }
        }
      }
      *(SndAliasList **)((char *)&soundTable->mvmtStanceSoundSets->soundSets[0].soundNPC + v50) = v51;
      BG_BuildStanceSound(soundTable, clothType, v49, 1, dest, 64);
      v54 = SND_TryFindAlias(dest);
      if ( !v54 )
      {
        v55 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
        {
          Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
          if ( v55->current.enabled && SND_Active() )
          {
            v56 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
            if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v56->current.enabled) )
              Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
            else
              Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
          }
        }
      }
      equipmentSoundTable = soundTable;
      ++v49;
      *(SndAliasList **)((char *)&soundTable->mvmtStanceSoundSets->soundSets[0].soundPLR + v50) = v54;
      v50 += 16i64;
    }
    while ( (unsigned int)v49 < EQUIPMENT_STANCE_COUNT );
    v57 = MOVEMENT;
    v131 = 0i64;
    materialType = MOVEMENT;
    do
    {
      v58 = 0;
      v129 = 0i64;
      v125 = 0;
      do
      {
        v133 = 0i64;
        v59 = 0;
        v60 = v58 != 0;
        variant = 0;
        v120 = v60;
        do
        {
          v61 = MISS;
          v128 = 0i64;
          v62 = 0i64;
          do
          {
            v63 = MELEE_IMPACT_TYPE_NONE;
            v64 = 0i64;
            do
            {
              if ( v63 )
              {
                BG_BuildMeleeAttackSoundPLR(equipmentSoundTable, "melee_attack", clothType, v63, v57, v60, v59, v61, 1, dest, 64);
                v65 = SND_TryFindAlias(dest);
                if ( !v65 )
                {
                  v66 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
                  if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
                  {
                    Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
                    if ( v66->current.enabled && SND_Active() )
                    {
                      v67 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
                      if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v67->current.enabled) )
                        Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                      else
                        Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                    }
                  }
                }
                equipmentSoundTable = soundTable;
                v57 = materialType;
                v68 = v133 + 4 * (v129 + 2 * (v131 + 2 * (v64 + 14 * v134) + v64 + 14 * v134));
                soundTable->meleeAttackVMSoundSets->soundSets[0][0][0][0][2 * v68 + v62 + v68].soundPLR = v65;
                v59 = variant;
                v60 = v120;
              }
              ++v63;
              ++v64;
            }
            while ( (unsigned int)v63 < MELEE_IMPACT_TYPE_COUNT );
            v69 = MOVEMENT;
            v70 = 0i64;
            do
            {
              BG_BuildMeleeSound(equipmentSoundTable, "melee_attack", clothType, v69, v57, v60, v59, v61, MISS, 0, dest, 64);
              v71 = SND_TryFindAlias(dest);
              if ( !v71 )
              {
                v72 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
                if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
                {
                  Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
                  if ( v72->current.enabled && SND_Active() )
                  {
                    v73 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
                    if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v73->current.enabled) )
                      Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                    else
                      Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                  }
                }
              }
              v74 = v133 + 4 * (v129 + 2 * (v131 + 2 * (v70 + 8 * v134) + v70 + 8 * v134));
              v75 = v128 + 2 * v74 + v74;
              soundTable->meleeAttackWMSoundSets->soundSets[0][0][0][0][v75].soundNPC = v71;
              BG_BuildMeleeSound(soundTable, "melee_character", clothType, v69, materialType, v120, variant, v61, HIT, 0, dest, 64);
              v76 = SND_TryFindAlias(dest);
              if ( !v76 )
              {
                v77 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
                if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
                {
                  Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
                  if ( v77->current.enabled && SND_Active() )
                  {
                    v78 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
                    if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v78->current.enabled) )
                      Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                    else
                      Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                  }
                }
              }
              soundTable->meleeCharacterSoundSets->soundSets[0][0][0][0][v75].soundNPC = v76;
              BG_BuildMeleeSound(soundTable, "melee_character", clothType, v69, materialType, v120, variant, v61, HIT, 1, dest, 64);
              v79 = SND_TryFindAlias(dest);
              if ( !v79 )
              {
                v80 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
                if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
                {
                  Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
                  if ( v80->current.enabled && SND_Active() )
                  {
                    v81 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
                    if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v81->current.enabled) )
                      Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                    else
                      Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                  }
                }
              }
              equipmentSoundTable = soundTable;
              ++v69;
              v60 = v120;
              ++v70;
              v57 = materialType;
              soundTable->meleeCharacterSoundSets->soundSets[0][0][0][0][v75].soundPLR = v79;
              v59 = variant;
            }
            while ( (unsigned int)v69 < 8 );
            ++v61;
            v62 = ++v128;
          }
          while ( (unsigned int)v61 < NUM_RESULT );
          ++v133;
          v59 = variant + 1;
          variant = v59;
        }
        while ( v59 < 4 );
        ++v129;
        v58 = v125 + 1;
        v125 = v58;
      }
      while ( v58 < 2 );
      ++v131;
      v57 = materialType + 1;
      materialType = v57;
    }
    while ( (unsigned int)v57 < (COUNT|DODGE) );
    v3 = clothType + 1;
  }
  p_soundNPC = &equipmentSoundTable->meleeWorldSoundSets.soundSets[0][0][0][0].soundNPC;
  v83 = MOVEMENT;
  v126 = 0;
  v84 = 0;
  for ( j = 0; ; j = 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          BG_BuildMeleeWorldSound(equipmentSoundTable, "melee_world", v0, v83, j, v84, 0, dest, 64);
          v86 = SND_TryFindAlias(dest);
          if ( !v86 )
          {
            v87 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
            if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
            {
              Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
              if ( v87->current.enabled && SND_Active() )
              {
                v88 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
                if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v88->current.enabled) )
                  Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                else
                  Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
              }
            }
          }
          *p_soundNPC = v86;
          BG_BuildMeleeWorldSound(soundTable, "melee_world", v0, v83, j, v84, 1, dest, 64);
          v89 = SND_TryFindAlias(dest);
          if ( !v89 )
          {
            v90 = DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds;
            if ( DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds )
            {
              Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_notifyAllMissingEquipmentSounds);
              if ( v90->current.enabled && SND_Active() )
              {
                v91 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
                if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v91->current.enabled) )
                  Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
                else
                  Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
              }
            }
          }
          *(p_soundNPC - 1) = v89;
          ++v84;
          p_soundNPC += 2;
          if ( v84 >= 4 )
            break;
          equipmentSoundTable = soundTable;
        }
        v92 = v126 + 1;
        v126 = v92;
        if ( v92 >= 2 )
          break;
        equipmentSoundTable = soundTable;
        v84 = 0;
        j = v92 != 0;
      }
      if ( (unsigned int)++v83 >= (COUNT|DODGE) )
        break;
      equipmentSoundTable = soundTable;
      v84 = 0;
      v126 = 0;
      j = 0;
    }
    if ( (unsigned int)++v0 >= 8 )
      break;
    equipmentSoundTable = soundTable;
    v83 = MOVEMENT;
    v126 = 0;
    v84 = 0;
  }
  v93 = soundTable;
  v94 = 0i64;
  for ( k = 0; k < v93->numWeaponRattleTypes; v94 = 0i64 )
  {
    for ( m = 0; m < 8; ++m )
    {
      if ( k >= v93->numWeaponRattleTypes )
      {
        LODWORD(suffixd) = v93->numWeaponRattleTypes;
        LODWORD(isPlayerViewd) = k;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 527, ASSERT_TYPE_ASSERT, "(unsigned)( weaponRattleType ) < (unsigned)( soundTable->numWeaponRattleTypes )", "weaponRattleType doesn't index soundTable->numWeaponRattleTypes\n\t%i not in [0, %i)", isPlayerViewd, suffixd) )
          __debugbreak();
      }
      v97 = &szEquipmentMoveTypeNames[m];
      Com_sprintf(dest, 0x40ui64, "%s_%s_%s_%s", "weap", v93->weaponRattleTypes[k].szName, "npc", *v97);
      v98 = SND_TryFindAlias(dest);
      if ( !v98 && SND_Active() )
      {
        v99 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v99->current.enabled) )
          Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        else
          Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        v93 = soundTable;
      }
      *(SndAliasList **)((char *)&v93->mvmtRattleSoundSets[k].soundSets->soundNPC + v94) = v98;
      if ( k >= v93->numWeaponRattleTypes )
      {
        LODWORD(suffixe) = v93->numWeaponRattleTypes;
        LODWORD(isPlayerViewe) = k;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 527, ASSERT_TYPE_ASSERT, "(unsigned)( weaponRattleType ) < (unsigned)( soundTable->numWeaponRattleTypes )", "weaponRattleType doesn't index soundTable->numWeaponRattleTypes\n\t%i not in [0, %i)", isPlayerViewe, suffixe) )
          __debugbreak();
      }
      Com_sprintf(dest, 0x40ui64, "%s_%s_%s_%s", "weap", v93->weaponRattleTypes[k].szName, "plr", *v97);
      v100 = SND_TryFindAlias(dest);
      if ( !v100 && SND_Active() )
      {
        v101 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
        if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v101->current.enabled) )
          Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        else
          Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
        v93 = soundTable;
      }
      *(SndAliasList **)((char *)&v93->mvmtRattleSoundSets[k].soundSets->soundPLR + v94) = v100;
      v94 += 16i64;
    }
    ++k;
  }
  v102 = 0i64;
  do
  {
    v103 = &szEquipmentMoveTypeNames[(int)v94];
    Com_sprintf(dest, 0x40ui64, "%s_%s_%s", "accent", "npc", *v103);
    v104 = SND_TryFindAlias(dest);
    if ( !v104 && SND_Active() )
    {
      v105 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
      if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v105->current.enabled) )
        Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
      else
        Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
    }
    soundTable->mvmtAccentSoundSets.soundSets[v102].soundNPC = v104;
    Com_sprintf(dest, 0x40ui64, "%s_%s_%s", "accent", "plr", *v103);
    v106 = SND_TryFindAlias(dest);
    if ( !v106 && SND_Active() )
    {
      v107 = DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds;
      if ( DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds && (Dvar_CheckFrontendServerThread(DCONST_DVARBOOL_snd_errorOnMissingEquipmentSounds), v107->current.enabled) )
        Com_PrintError(9, "Error: BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
      else
        Com_Printf(9, "BG_Equipment_Snd cannot find a sound alias: %s.  This may be fine as some equipment types are not supported in every level, but we output here for future error tracking.\n", dest);
    }
    LODWORD(v94) = v94 + 1;
    soundTable->mvmtAccentSoundSets.soundSets[v102++].soundPLR = v106;
  }
  while ( (unsigned int)v94 < 8 );
}

/*
==============
BG_FindEquipmentSoundClothIndex
==============
*/
__int64 BG_FindEquipmentSoundClothIndex(const char *szClothName)
{
  unsigned int v3; 
  XAssetHeader v4; 
  __int64 v5; 
  const char *v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  if ( !I_stricmp(szClothName, "none") )
    return 15i64;
  v3 = 0;
  v4.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_EQUIPMENT_SND_TABLE, "sound/settings/equipment_snd.def", 0).physicsLibrary;
  if ( !v4.physicsLibrary || DB_IsXAssetDefault(ASSET_TYPE_EQUIPMENT_SND_TABLE, "sound/settings/equipment_snd.def") )
  {
    Com_PrintError(10, "Missing equipment sound table \"%s\".\n", "sound/settings/equipment_snd.def");
    v4.physicsLibrary = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 120, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
      __debugbreak();
  }
  if ( *(_DWORD *)&v4.physicsLibrary->isMaterialList )
  {
    do
    {
      v5 = 0x7FFFFFFFi64;
      v6 = *(const char **)&v4.physicsLibrary[1].name[16 * v3];
      if ( !szClothName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v7 = (const char *)(szClothName - v6);
      while ( 1 )
      {
        v8 = (unsigned __int8)v6[(_QWORD)v7];
        v9 = v5;
        v10 = *(unsigned __int8 *)v6++;
        --v5;
        if ( !v9 )
          return v3;
        if ( v8 != v10 )
        {
          v11 = v8 + 32;
          if ( (unsigned int)(v8 - 65) > 0x19 )
            v11 = v8;
          v8 = v11;
          v12 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v12 = v10;
          if ( v8 != v12 )
            break;
        }
        if ( !v8 )
          return v3;
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)&v4.physicsLibrary->isMaterialList );
  }
  return 0xFFFFFFFFi64;
}

/*
==============
BG_GetActionCamSubmixName
==============
*/
const char *BG_GetActionCamSubmixName()
{
  return "iw8_camera_submix";
}

/*
==============
BG_GetClothFoleyMovementSound
==============
*/
SndAliasList *BG_GetClothFoleyMovementSound(unsigned int clothType, MovementLeadType_t leadType, EquipmentMoveType_t moveType, int isPlayerView)
{
  __int64 v4; 
  __int64 v6; 
  EquipmentSoundTable *equipmentSoundTable; 
  EquipSoundSetMoveLeadTypes *v9; 
  EquipmentSoundSet *soundSetsPre; 
  __int64 v12; 
  __int64 v13; 

  v4 = moveType;
  v6 = clothType;
  if ( clothType == 15 )
    return 0i64;
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( clothType >= cgMedia.equipmentSoundTable->numClothTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 832, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", clothType, cgMedia.equipmentSoundTable->numClothTypes) )
    __debugbreak();
  if ( (unsigned int)v4 >= 8 )
  {
    LODWORD(v13) = 8;
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 833, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( EQUIPMENT_MOVE_TYPE_TOTAL )", "moveType doesn't index EQUIPMENT_MOVE_TYPE_TOTAL\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v9 = &equipmentSoundTable->mvmtClothFoleySoundSets[v6];
  if ( leadType == MOVEMENT_LEAD_TYPE_PRE )
    soundSetsPre = v9->soundSetsPre;
  else
    soundSetsPre = v9->soundSetsPost;
  if ( isPlayerView )
    return soundSetsPre[v4].soundPLR;
  else
    return soundSetsPre[v4].soundNPC;
}

/*
==============
BG_GetClothFootstepCeilingSound
==============
*/
SndAliasList *BG_GetClothFootstepCeilingSound(unsigned int clothType, FootstepActionType_t actionType, FootstepMoveType_t moveType, int isLeftFoot, int isPlayerView)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  EquipmentSoundTable *equipmentSoundTable; 
  __int64 v10; 
  __int64 v11; 
  EquipSoundSetFootsteps *mvmtClothFootstepCeilingSoundSets; 
  __int64 v14; 
  __int64 v15; 

  v5 = moveType;
  v7 = actionType;
  v8 = clothType;
  if ( clothType == 15 )
    return 0i64;
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( clothType >= cgMedia.equipmentSoundTable->numClothTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 855, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", clothType, cgMedia.equipmentSoundTable->numClothTypes) )
    __debugbreak();
  if ( (unsigned int)v7 >= 4 )
  {
    LODWORD(v15) = 4;
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 856, ASSERT_TYPE_ASSERT, "(unsigned)( actionType ) < (unsigned)( FOOTSTEP_ACTION_TYPE_COUNT )", "actionType doesn't index FOOTSTEP_ACTION_TYPE_COUNT\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0xB )
  {
    LODWORD(v15) = 11;
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 857, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( FOOTSTEP_MOVE_TYPE_COUNT )", "moveType doesn't index FOOTSTEP_MOVE_TYPE_COUNT\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v10 = 16 * v5;
  if ( !isLeftFoot )
    v10 = 16 * v5 + 176;
  v11 = 352 * (v7 + 4 * v8) + v10;
  mvmtClothFootstepCeilingSoundSets = equipmentSoundTable->mvmtClothFootstepCeilingSoundSets;
  if ( isPlayerView )
    return *(SndAliasList **)((char *)&mvmtClothFootstepCeilingSoundSets->actionType[0].left[0].soundPLR + v11);
  else
    return *(SndAliasList **)((char *)&mvmtClothFootstepCeilingSoundSets->actionType[0].left[0].soundNPC + v11);
}

/*
==============
BG_GetClothFootstepMovementSound
==============
*/
SndAliasList *BG_GetClothFootstepMovementSound(unsigned int clothType, FootstepActionType_t actionType, FootstepMoveType_t moveType, int isLeftFoot, int isPlayerView)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  EquipmentSoundTable *equipmentSoundTable; 
  __int64 v10; 
  __int64 v11; 
  EquipSoundSetFootsteps *mvmtClothFootstepSoundSets; 
  __int64 v14; 
  __int64 v15; 

  v5 = moveType;
  v7 = actionType;
  v8 = clothType;
  if ( clothType == 15 )
    return 0i64;
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( clothType >= cgMedia.equipmentSoundTable->numClothTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 957, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", clothType, cgMedia.equipmentSoundTable->numClothTypes) )
    __debugbreak();
  if ( (unsigned int)v7 >= 4 )
  {
    LODWORD(v15) = 4;
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 958, ASSERT_TYPE_ASSERT, "(unsigned)( actionType ) < (unsigned)( FOOTSTEP_ACTION_TYPE_COUNT )", "actionType doesn't index FOOTSTEP_ACTION_TYPE_COUNT\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0xB )
  {
    LODWORD(v15) = 11;
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 959, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( FOOTSTEP_MOVE_TYPE_COUNT )", "moveType doesn't index FOOTSTEP_MOVE_TYPE_COUNT\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v10 = 16 * v5;
  if ( !isLeftFoot )
    v10 = 16 * v5 + 176;
  v11 = 352 * (v7 + 4 * v8) + v10;
  mvmtClothFootstepSoundSets = equipmentSoundTable->mvmtClothFootstepSoundSets;
  if ( isPlayerView )
    return *(SndAliasList **)((char *)&mvmtClothFootstepSoundSets->actionType[0].left[0].soundPLR + v11);
  else
    return *(SndAliasList **)((char *)&mvmtClothFootstepSoundSets->actionType[0].left[0].soundNPC + v11);
}

/*
==============
BG_GetClothMeleeAttackSoundNPC
==============
*/
SndAliasList *BG_GetClothMeleeAttackSoundNPC(unsigned int clothType, MeleeAnimType attackerAnim, WeaponMaterialType materialType, bool isAltMelee, unsigned int variant, MeleeResult result)
{
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  EquipmentSoundTable *equipmentSoundTable; 
  __int64 v12; 
  __int64 v13; 

  v6 = materialType;
  v8 = attackerAnim;
  v9 = clothType;
  if ( clothType == 15 )
    return 0i64;
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( clothType >= cgMedia.equipmentSoundTable->numClothTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 931, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", clothType, cgMedia.equipmentSoundTable->numClothTypes) )
    __debugbreak();
  if ( (unsigned int)v8 >= 8 )
  {
    LODWORD(v13) = 8;
    LODWORD(v12) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 932, ASSERT_TYPE_ASSERT, "(unsigned)( attackerAnim ) < (unsigned)( static_cast<int>(MeleeAnimType::COUNT) )", "attackerAnim doesn't index static_cast<int>(MeleeAnimType::COUNT)\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 3 )
  {
    LODWORD(v13) = 3;
    LODWORD(v12) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 933, ASSERT_TYPE_ASSERT, "(unsigned)( materialType ) < (unsigned)( static_cast<int>(WeaponMaterialType::COUNT) )", "materialType doesn't index static_cast<int>(WeaponMaterialType::COUNT)\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( variant >= 4 )
  {
    LODWORD(v13) = 4;
    LODWORD(v12) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 934, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)result >= NUM_RESULT )
  {
    LODWORD(v13) = 3;
    LODWORD(v12) = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 935, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( static_cast<int>(MeleeResult::NUM_RESULT) )", "result doesn't index static_cast<int>(MeleeResult::NUM_RESULT)\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  return equipmentSoundTable->meleeAttackWMSoundSets[v9].soundSets[v8][v6][isAltMelee][variant][result].soundNPC;
}

/*
==============
BG_GetClothMeleeAttackSoundPLR
==============
*/
SndAliasList *BG_GetClothMeleeAttackSoundPLR(unsigned int clothType, MeleeImpactType attackerImpactType, WeaponMaterialType materialType, bool isAltMelee, unsigned int variant, MeleeResult result)
{
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  EquipmentSoundTable *equipmentSoundTable; 
  __int64 v12; 
  __int64 v13; 

  v6 = materialType;
  v8 = attackerImpactType;
  v9 = clothType;
  if ( clothType == 15 )
    return 0i64;
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( clothType >= cgMedia.equipmentSoundTable->numClothTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 905, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", clothType, cgMedia.equipmentSoundTable->numClothTypes) )
    __debugbreak();
  if ( (unsigned int)v8 >= 0xE )
  {
    LODWORD(v13) = 14;
    LODWORD(v12) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 906, ASSERT_TYPE_ASSERT, "(unsigned)( attackerImpactType ) < (unsigned)( MELEE_IMPACT_TYPE_COUNT )", "attackerImpactType doesn't index MELEE_IMPACT_TYPE_COUNT\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 3 )
  {
    LODWORD(v13) = 3;
    LODWORD(v12) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 907, ASSERT_TYPE_ASSERT, "(unsigned)( materialType ) < (unsigned)( static_cast<int>(WeaponMaterialType::COUNT) )", "materialType doesn't index static_cast<int>(WeaponMaterialType::COUNT)\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( variant >= 4 )
  {
    LODWORD(v13) = 4;
    LODWORD(v12) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 908, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)result >= NUM_RESULT )
  {
    LODWORD(v13) = 3;
    LODWORD(v12) = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 909, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( static_cast<int>(MeleeResult::NUM_RESULT) )", "result doesn't index static_cast<int>(MeleeResult::NUM_RESULT)\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  return equipmentSoundTable->meleeAttackVMSoundSets[v9].soundSets[v8][v6][isAltMelee][variant][result].soundPLR;
}

/*
==============
BG_GetClothMeleeCharacterImpactSound
==============
*/
SndAliasList *BG_GetClothMeleeCharacterImpactSound(unsigned int clothType, MeleeAnimType attackerAnim, WeaponMaterialType material, bool isAltMelee, unsigned int variant, MeleeResult result, bool isPlayerView)
{
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  EquipmentSoundTable *equipmentSoundTable; 
  EquipmentSoundSet *v12; 
  __int64 v14; 
  __int64 v15; 

  v7 = material;
  v9 = attackerAnim;
  v10 = clothType;
  if ( clothType == 15 )
    return 0i64;
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( clothType >= cgMedia.equipmentSoundTable->numClothTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 879, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", clothType, cgMedia.equipmentSoundTable->numClothTypes) )
    __debugbreak();
  if ( (unsigned int)v9 >= 8 )
  {
    LODWORD(v15) = 8;
    LODWORD(v14) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( attackerAnim ) < (unsigned)( static_cast<int>(MeleeAnimType::COUNT) )", "attackerAnim doesn't index static_cast<int>(MeleeAnimType::COUNT)\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 3 )
  {
    LODWORD(v15) = 3;
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 881, ASSERT_TYPE_ASSERT, "(unsigned)( material ) < (unsigned)( static_cast<int>(WeaponMaterialType::COUNT) )", "material doesn't index static_cast<int>(WeaponMaterialType::COUNT)\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( variant >= 4 )
  {
    LODWORD(v15) = 4;
    LODWORD(v14) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 882, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( (unsigned int)result >= NUM_RESULT )
  {
    LODWORD(v15) = 3;
    LODWORD(v14) = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 883, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( static_cast<int>(MeleeResult::NUM_RESULT) )", "result doesn't index static_cast<int>(MeleeResult::NUM_RESULT)\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v12 = &equipmentSoundTable->meleeCharacterSoundSets[v10].soundSets[v9][v7][isAltMelee][variant][result];
  if ( isPlayerView )
    return v12->soundPLR;
  else
    return v12->soundNPC;
}

/*
==============
BG_GetEquipmentMoveType
==============
*/
__int64 BG_GetEquipmentMoveType(const char *szMoveTypeName)
{
  const char **v2; 
  unsigned int i; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  v2 = szEquipmentMoveTypeNames;
  for ( i = 0; i < 8; ++i )
  {
    v4 = *v2;
    v5 = 0x7FFFFFFFi64;
    if ( !szMoveTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(szMoveTypeName - v4);
    while ( 1 )
    {
      v7 = (unsigned __int8)v4[(_QWORD)v6];
      v8 = v5;
      v9 = *(unsigned __int8 *)v4++;
      --v5;
      if ( !v8 )
        return i;
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
        return i;
    }
    ++v2;
  }
  return 0xFFFFFFFFi64;
}

/*
==============
BG_GetEquipmentSoundFoleyName
==============
*/
const char *BG_GetEquipmentSoundFoleyName(int clothIndex)
{
  __int64 v1; 
  XAssetHeader v2; 

  v1 = clothIndex;
  v2.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_EQUIPMENT_SND_TABLE, "sound/settings/equipment_snd.def", 0).physicsLibrary;
  if ( !v2.physicsLibrary || DB_IsXAssetDefault(ASSET_TYPE_EQUIPMENT_SND_TABLE, "sound/settings/equipment_snd.def") )
  {
    Com_PrintError(10, "Missing equipment sound table \"%s\".\n", "sound/settings/equipment_snd.def");
    v2.physicsLibrary = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 148, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
      __debugbreak();
  }
  return *(const char **)&v2.physicsLibrary[1].name[16 * v1];
}

/*
==============
BG_GetEquipmentSoundFootstepName
==============
*/
const char *BG_GetEquipmentSoundFootstepName(int clothIndex)
{
  __int64 v1; 
  XAssetHeader v2; 

  v1 = clothIndex;
  v2.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_EQUIPMENT_SND_TABLE, "sound/settings/equipment_snd.def", 0).physicsLibrary;
  if ( !v2.physicsLibrary || DB_IsXAssetDefault(ASSET_TYPE_EQUIPMENT_SND_TABLE, "sound/settings/equipment_snd.def") )
  {
    Com_PrintError(10, "Missing equipment sound table \"%s\".\n", "sound/settings/equipment_snd.def");
    v2.physicsLibrary = NULL;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 170, ASSERT_TYPE_ASSERT, "(soundTable)", (const char *)&queryFormat, "soundTable") )
      __debugbreak();
  }
  return *(const char **)&v2.physicsLibrary[1].name[16 * v1 + 8];
}

/*
==============
BG_GetMantleSound
==============
*/
SndAliasList *BG_GetMantleSound(unsigned int clothType, gestureAnimType_t mantleGestureType, int isPlayerView)
{
  EquipmentSoundTable *equipmentSoundTable; 
  __int64 v5; 
  __int64 v6; 
  EquipmentSoundSet *v8; 
  __int64 v9; 
  __int64 v10; 

  equipmentSoundTable = cgMedia.equipmentSoundTable;
  v5 = mantleGestureType;
  v6 = clothType;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( clothType >= cgMedia.equipmentSoundTable->numClothTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", clothType, cgMedia.equipmentSoundTable->numClothTypes) )
    __debugbreak();
  if ( (unsigned int)(v5 - 3) > 0x22 )
  {
    LODWORD(v10) = 3;
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1009, ASSERT_TYPE_ASSERT, "( GESTUREANIMTYPE_MANTLE_FIRST ) <= ( mantleGestureType ) && ( mantleGestureType ) <= ( GESTUREANIMTYPE_MANTLE_LAST )", "mantleGestureType not in [GESTUREANIMTYPE_MANTLE_FIRST, GESTUREANIMTYPE_MANTLE_LAST]\n\t%i not in [%i, %i]", v9, v10, 37) )
      __debugbreak();
  }
  v8 = &equipmentSoundTable->mvmtMantleSoundSets[v6 - 1].soundSets[v5 + 32];
  if ( isPlayerView )
    return v8->soundPLR;
  else
    return v8->soundNPC;
}

/*
==============
BG_GetMeleeWorldImpactSound
==============
*/
SndAliasList *BG_GetMeleeWorldImpactSound(MeleeAnimType attackerAnim, WeaponMaterialType material, bool isAltMelee, unsigned int variant, bool isPlayerView)
{
  EquipmentSoundTable *equipmentSoundTable; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  equipmentSoundTable = cgMedia.equipmentSoundTable;
  v7 = variant;
  v8 = material;
  v9 = attackerAnim;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( (unsigned int)attackerAnim >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1040, ASSERT_TYPE_ASSERT, "(unsigned)( attackerAnim ) < (unsigned)( static_cast<int>(MeleeAnimType::COUNT) )", "attackerAnim doesn't index static_cast<int>(MeleeAnimType::COUNT)\n\t%i not in [0, %i)", attackerAnim, 8) )
    __debugbreak();
  if ( (unsigned int)v8 >= 3 )
  {
    LODWORD(v13) = 3;
    LODWORD(v12) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1041, ASSERT_TYPE_ASSERT, "(unsigned)( material ) < (unsigned)( static_cast<int>(WeaponMaterialType::COUNT) )", "material doesn't index static_cast<int>(WeaponMaterialType::COUNT)\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= 4 )
  {
    LODWORD(v13) = 4;
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1042, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v11 = isAltMelee + 2 * (v8 + 3 * v9);
  if ( isPlayerView )
    return equipmentSoundTable->meleeWorldSoundSets.soundSets[0][0][v11][v7].soundPLR;
  else
    return equipmentSoundTable->meleeWorldSoundSets.soundSets[0][0][v11][v7].soundNPC;
}

/*
==============
BG_GetStanceTransitionSound
==============
*/
SndAliasList *BG_GetStanceTransitionSound(unsigned int clothType, EquipmentStanceType_t stanceType, int isPlayerView)
{
  __int64 v3; 
  __int64 v5; 
  EquipmentSoundTable *equipmentSoundTable; 
  EquipSoundSetStanceTypes *mvmtStanceSoundSets; 
  __int64 v9; 
  __int64 v10; 

  v3 = stanceType;
  v5 = clothType;
  if ( (unsigned int)stanceType >= EQUIPMENT_STANCE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1019, ASSERT_TYPE_ASSERT, "(unsigned)( stanceType ) < (unsigned)( EQUIPMENT_STANCE_COUNT )", "stanceType doesn't index EQUIPMENT_STANCE_COUNT\n\t%i not in [0, %i)", stanceType, 4) )
    __debugbreak();
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( (unsigned int)v5 >= cgMedia.equipmentSoundTable->numClothTypes )
  {
    LODWORD(v10) = cgMedia.equipmentSoundTable->numClothTypes;
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1027, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( soundTable->numClothTypes )", "clothType doesn't index soundTable->numClothTypes\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  mvmtStanceSoundSets = equipmentSoundTable->mvmtStanceSoundSets;
  if ( isPlayerView )
    return mvmtStanceSoundSets[v5].soundSets[v3].soundPLR;
  else
    return mvmtStanceSoundSets[v5].soundSets[v3].soundNPC;
}

/*
==============
BG_GetWeaponAccentSound
==============
*/
SndAliasList *BG_GetWeaponAccentSound(EquipmentMoveType_t moveType, int isPlayerView)
{
  EquipmentSoundTable *equipmentSoundTable; 
  __int64 v4; 
  EquipmentSoundSet *v6; 

  equipmentSoundTable = cgMedia.equipmentSoundTable;
  v4 = moveType;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( (unsigned int)moveType >= EQUIPMENT_MOVE_TYPE_TOTAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 994, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( EQUIPMENT_MOVE_TYPE_TOTAL )", "moveType doesn't index EQUIPMENT_MOVE_TYPE_TOTAL\n\t%i not in [0, %i)", moveType, 8) )
    __debugbreak();
  v6 = &equipmentSoundTable->mvmtAccentSoundSets.soundSets[v4];
  if ( isPlayerView )
    return v6->soundPLR;
  else
    return v6->soundNPC;
}

/*
==============
BG_GetWeaponRattleSound
==============
*/
SndAliasList *BG_GetWeaponRattleSound(unsigned int weaponRattleType, EquipmentMoveType_t moveType, int isPlayerView)
{
  __int64 v3; 
  __int64 v5; 
  EquipmentSoundTable *equipmentSoundTable; 
  EquipmentSoundSet *soundSets; 
  __int64 v9; 
  __int64 v10; 

  v3 = moveType;
  v5 = weaponRattleType;
  if ( weaponRattleType == 15 )
    return 0i64;
  equipmentSoundTable = cgMedia.equipmentSoundTable;
  if ( !cgMedia.equipmentSoundTable )
    return 0i64;
  if ( weaponRattleType >= cgMedia.equipmentSoundTable->numWeaponRattleTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 979, ASSERT_TYPE_ASSERT, "(unsigned)( weaponRattleType ) < (unsigned)( soundTable->numWeaponRattleTypes )", "weaponRattleType doesn't index soundTable->numWeaponRattleTypes\n\t%i not in [0, %i)", weaponRattleType, cgMedia.equipmentSoundTable->numWeaponRattleTypes) )
    __debugbreak();
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v10) = 8;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 980, ASSERT_TYPE_ASSERT, "(unsigned)( moveType ) < (unsigned)( EQUIPMENT_MOVE_TYPE_TOTAL )", "moveType doesn't index EQUIPMENT_MOVE_TYPE_TOTAL\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  soundSets = equipmentSoundTable->mvmtRattleSoundSets[v5].soundSets;
  if ( isPlayerView )
    return soundSets[v3].soundPLR;
  else
    return soundSets[v3].soundNPC;
}

/*
==============
BG_PackEquipSoundEventParam
==============
*/
__int64 BG_PackEquipSoundEventParam(MovementLeadType_t leadType, unsigned __int8 clothType, unsigned __int8 rattleSoundType, EquipmentMoveType_t moveType)
{
  return (16 * (moveType | (8 * (rattleSoundType | (16 * leadType))))) | (unsigned int)clothType;
}

/*
==============
BG_PackFootstepEventParm
==============
*/
__int64 BG_PackFootstepEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int surfType, FootstepActionType_t actionType, bool isLeft)
{
  unsigned int v9; 
  int clothType; 
  __int32 v11; 
  __int64 v13; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1167, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1168, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = BG_ChooseWeaponRattleTypeForEquipmentSound(weaponMap, ps);
  if ( ps->clothType >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1172, ASSERT_TYPE_ASSERT, "(ps->clothType < ( 1 << 4 ))", (const char *)&queryFormat, "ps->clothType < MAX_CLOTH_TYPE") )
    __debugbreak();
  if ( v9 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1173, ASSERT_TYPE_ASSERT, "(weapRattleType < ( 1 << 4 ))", (const char *)&queryFormat, "weapRattleType < MAX_WEAPON_RATTLE") )
    __debugbreak();
  if ( surfType >= 63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1174, ASSERT_TYPE_ASSERT, "(surfType < ( ( 1 << 6 ) - 1 ))", (const char *)&queryFormat, "surfType < ( ( 1 << SURF_TYPEBITS ) - 1 )") )
    __debugbreak();
  if ( (unsigned int)actionType >= FOOTSTEP_ACTION_TYPE_COUNT )
  {
    LODWORD(v13) = actionType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1175, ASSERT_TYPE_ASSERT, "(unsigned)( actionType ) < (unsigned)( FOOTSTEP_ACTION_TYPE_COUNT )", "actionType doesn't index FOOTSTEP_ACTION_TYPE_COUNT\n\t%i not in [0, %i)", v13, 4) )
      __debugbreak();
  }
  clothType = ps->clothType;
  v11 = actionType | (4 * (surfType | ((clothType | (16 * (v9 | (16 * isLeft)))) << 6)));
  if ( v11 > 0x1FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1185, ASSERT_TYPE_ASSERT, "( packed ) <= ( ((0x1 << (2 + 6 + 4 + 4 + 1)) - 1) )", "%s <= %s\n\t%i, %i", "packed", "((0x1 << FOOTSTEP_BITS) - 1)", actionType | (4 * (surfType | ((clothType | (16 * (v9 | (16 * isLeft)))) << 6))), 0x1FFFF) )
    __debugbreak();
  return (unsigned int)v11;
}

/*
==============
BG_PackHardLandingEventParm
==============
*/
__int64 BG_PackHardLandingEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int damage, int isSoftLanding, int viewDip, int surfType)
{
  unsigned int v10; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1235, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1236, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = BG_ChooseWeaponRattleTypeForEquipmentSound(weaponMap, ps);
  if ( ps->clothType >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1241, ASSERT_TYPE_ASSERT, "(ps->clothType < ( 1 << 4 ))", (const char *)&queryFormat, "ps->clothType < MAX_CLOTH_TYPE") )
    __debugbreak();
  if ( v10 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1242, ASSERT_TYPE_ASSERT, "(weapRattleType < ( 1 << 4 ))", (const char *)&queryFormat, "weapRattleType < MAX_WEAPON_RATTLE") )
    __debugbreak();
  if ( damage >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1243, ASSERT_TYPE_ASSERT, "(damage < ( 1 << 7 ))", (const char *)&queryFormat, "damage < MAX_FALLING_DAMAGE") )
    __debugbreak();
  if ( viewDip >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1244, ASSERT_TYPE_ASSERT, "(viewDip < ( 1 << 5 ))", (const char *)&queryFormat, "viewDip < MAX_VIEW_DIP") )
    __debugbreak();
  if ( !surfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1245, ASSERT_TYPE_ASSERT, "(surfType != ( 0 << 19))", (const char *)&queryFormat, "surfType != SURF_TYPE_NONE") )
    __debugbreak();
  return surfType | ((viewDip | (32 * (damage | (isSoftLanding != 0 ? 0x80 : 0) | (((16 * v10) | ps->clothType) << 8)))) << 6);
}

/*
==============
BG_PackMantleEventParm
==============
*/
__int64 BG_PackMantleEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int mantleSoundFlavorPLR, int mantleSoundFlavorNPC, const gestureAnimType_t mantleType)
{
  unsigned int v9; 
  __int64 v11; 
  __int64 v12; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1257, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1258, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = BG_ChooseWeaponRattleTypeForEquipmentSound(weaponMap, ps);
  if ( ps->clothType >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1262, ASSERT_TYPE_ASSERT, "(ps->clothType < ( 1 << 4 ))", (const char *)&queryFormat, "ps->clothType < MAX_CLOTH_TYPE") )
    __debugbreak();
  if ( v9 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1263, ASSERT_TYPE_ASSERT, "(weapRattleType < ( 1 << 4 ))", (const char *)&queryFormat, "weapRattleType < MAX_WEAPON_RATTLE") )
    __debugbreak();
  if ( (unsigned int)mantleSoundFlavorPLR >= 0x200 )
  {
    LODWORD(v11) = mantleSoundFlavorPLR;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1264, ASSERT_TYPE_ASSERT, "(unsigned)( mantleSoundFlavorPLR ) < (unsigned)( 512 )", "mantleSoundFlavorPLR doesn't index MAX_SOUNDALIASES\n\t%i not in [0, %i)", v11, 512) )
      __debugbreak();
  }
  if ( (unsigned int)mantleSoundFlavorNPC >= 0x200 )
  {
    LODWORD(v12) = 512;
    LODWORD(v11) = mantleSoundFlavorNPC;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1265, ASSERT_TYPE_ASSERT, "(unsigned)( mantleSoundFlavorNPC ) < (unsigned)( 512 )", "mantleSoundFlavorNPC doesn't index MAX_SOUNDALIASES\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( (unsigned int)(mantleType - 3) > 0x22 )
  {
    LODWORD(v12) = 3;
    LODWORD(v11) = mantleType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1266, ASSERT_TYPE_ASSERT, "( GESTUREANIMTYPE_MANTLE_FIRST ) <= ( mantleType ) && ( mantleType ) <= ( GESTUREANIMTYPE_MANTLE_LAST )", "mantleType not in [GESTUREANIMTYPE_MANTLE_FIRST, GESTUREANIMTYPE_MANTLE_LAST]\n\t%i not in [%i, %i]", v11, v12, 37) )
      __debugbreak();
  }
  return (mantleType - 3) | ((mantleSoundFlavorNPC | ((mantleSoundFlavorPLR | (((16 * v9) | ps->clothType) << 9)) << 9)) << 6);
}

/*
==============
BG_PackMeleeAttackAnimParam
==============
*/
__int64 BG_PackMeleeAttackAnimParam(MeleeAnimType animType, MeleeResult meleeResult, bool isAltMelee, int variant)
{
  __int32 v8; 
  __int64 v10; 
  __int64 v12; 
  int v13; 
  __int32 v14; 
  int v15; 

  if ( (unsigned int)animType >= 8 )
  {
    v13 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1473, ASSERT_TYPE_ASSERT, "(unsigned)( animType ) < (unsigned)( static_cast<int>( MeleeAnimType::COUNT ) )", "animType doesn't index static_cast<int>( MeleeAnimType::COUNT )\n\t%i not in [0, %i)", animType, v13) )
      __debugbreak();
  }
  if ( (unsigned int)meleeResult >= NUM_RESULT )
  {
    LODWORD(v12) = 3;
    LODWORD(v10) = meleeResult;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1474, ASSERT_TYPE_ASSERT, "(unsigned)( meleeResult ) < (unsigned)( static_cast<int>( MeleeResult::NUM_RESULT ) )", "meleeResult doesn't index static_cast<int>( MeleeResult::NUM_RESULT )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( (unsigned int)variant >= 4 )
  {
    LODWORD(v12) = 4;
    LODWORD(v10) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1475, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v8 = variant | (4 * (isAltMelee | (2 * (meleeResult | (4 * animType)))));
  if ( v8 > 255 )
  {
    v15 = 255;
    v14 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1484, ASSERT_TYPE_ASSERT, "( packed ) <= ( ((0x1 << ((3) + (2) + 1 + (2))) - 1) )", "%s <= %s\n\t%i, %i", "packed", "((0x1 << MELEE_ATTACK_ANIM_DATA_BITS) - 1)", v14, v15) )
      __debugbreak();
  }
  return (unsigned int)v8;
}

/*
==============
BG_PackMeleeCharacterImpactParam
==============
*/
__int64 BG_PackMeleeCharacterImpactParam(int clothType, MeleeAnimType attackerAnim, WeaponMaterialType material, bool isAltMelee, int variant, MeleeResult result, float impactHeight)
{
  double v11; 
  __int32 v12; 
  __int64 v14; 
  __int64 v16; 
  int v17; 
  __int32 v18; 
  int v19; 

  if ( (unsigned int)clothType >= 0x10 )
  {
    v17 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1373, ASSERT_TYPE_ASSERT, "(unsigned)( clothType ) < (unsigned)( ( 1 << 4 ) )", "clothType doesn't index MAX_CLOTH_TYPE\n\t%i not in [0, %i)", clothType, v17) )
      __debugbreak();
  }
  if ( (unsigned int)attackerAnim >= 8 )
  {
    LODWORD(v16) = 8;
    LODWORD(v14) = attackerAnim;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1374, ASSERT_TYPE_ASSERT, "(unsigned)( attackerAnim ) < (unsigned)( static_cast<int>( MeleeAnimType::COUNT ) )", "attackerAnim doesn't index static_cast<int>( MeleeAnimType::COUNT )\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  if ( (unsigned int)material >= (COUNT|DODGE) )
  {
    LODWORD(v16) = 3;
    LODWORD(v14) = material;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1375, ASSERT_TYPE_ASSERT, "(unsigned)( material ) < (unsigned)( static_cast<int>( WeaponMaterialType::COUNT ) )", "material doesn't index static_cast<int>( WeaponMaterialType::COUNT )\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  if ( (unsigned int)variant >= 4 )
  {
    LODWORD(v16) = 4;
    LODWORD(v14) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1376, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  if ( (unsigned int)result >= NUM_RESULT )
  {
    LODWORD(v16) = 3;
    LODWORD(v14) = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1377, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( static_cast<int>( MeleeResult::NUM_RESULT ) )", "result doesn't index static_cast<int>( MeleeResult::NUM_RESULT )\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  v11 = I_fclamp(impactHeight, 0.0, 60.0);
  v12 = (16 * (result | (4 * (variant | (4 * (isAltMelee | (2 * (material | (4 * (attackerAnim | (8 * clothType))))))))))) | MSG_PackUnsignedFloat(*(float *)&v11, 60.0, 4u);
  if ( v12 > 0x3FFFF )
  {
    v19 = 0x3FFFF;
    v18 = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1392, ASSERT_TYPE_ASSERT, "( packed ) <= ( ((0x1 << (4 + (3) + (2) + 1 + (2) + (2) + (4))) - 1) )", "%s <= %s\n\t%i, %i", "packed", "((0x1 << MELEE_CHARACTER_IMPACT_BITS) - 1)", v18, v19) )
      __debugbreak();
  }
  return (unsigned int)v12;
}

/*
==============
BG_PackMeleeParam
==============
*/
__int64 BG_PackMeleeParam(MeleeAnimType attackerAnim, WeaponMaterialType material, bool isAltMelee, int variant)
{
  __int32 v8; 
  __int64 v10; 
  __int64 v12; 
  int v13; 
  __int32 v14; 
  int v15; 

  if ( (unsigned int)attackerAnim >= 8 )
  {
    v13 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1433, ASSERT_TYPE_ASSERT, "(unsigned)( attackerAnim ) < (unsigned)( static_cast<int>(MeleeAnimType::COUNT) )", "attackerAnim doesn't index static_cast<int>(MeleeAnimType::COUNT)\n\t%i not in [0, %i)", attackerAnim, v13) )
      __debugbreak();
  }
  if ( (unsigned int)material >= (COUNT|DODGE) )
  {
    LODWORD(v12) = 3;
    LODWORD(v10) = material;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1434, ASSERT_TYPE_ASSERT, "(unsigned)( material ) < (unsigned)( static_cast<int>(WeaponMaterialType::COUNT) )", "material doesn't index static_cast<int>(WeaponMaterialType::COUNT)\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( (unsigned int)variant >= 4 )
  {
    LODWORD(v12) = 4;
    LODWORD(v10) = variant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1435, ASSERT_TYPE_ASSERT, "(unsigned)( variant ) < (unsigned)( (4) )", "variant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v8 = variant | (4 * (isAltMelee | (2 * (material | (4 * attackerAnim)))));
  if ( v8 > 255 )
  {
    v15 = 255;
    v14 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1444, ASSERT_TYPE_ASSERT, "( packed ) <= ( ((0x1 << ((3) + (2) + 1 + (2))) - 1) )", "%s <= %s\n\t%i, %i", "packed", "((0x1 << MELEE_WORLD_IMPACT_BITS) - 1)", v14, v15) )
      __debugbreak();
  }
  return (unsigned int)v8;
}

/*
==============
BG_PackSoftLandingEventParm
==============
*/
__int64 BG_PackSoftLandingEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int viewDip, int surfType)
{
  unsigned int v8; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1215, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1216, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = BG_ChooseWeaponRattleTypeForEquipmentSound(weaponMap, ps);
  if ( ps->clothType >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1220, ASSERT_TYPE_ASSERT, "(ps->clothType < ( 1 << 4 ))", (const char *)&queryFormat, "ps->clothType < MAX_CLOTH_TYPE") )
    __debugbreak();
  if ( v8 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1221, ASSERT_TYPE_ASSERT, "(weapRattleType < ( 1 << 4 ))", (const char *)&queryFormat, "weapRattleType < MAX_WEAPON_RATTLE") )
    __debugbreak();
  if ( viewDip >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1222, ASSERT_TYPE_ASSERT, "(viewDip < ( 1 << 5 ))", (const char *)&queryFormat, "viewDip < MAX_VIEW_DIP") )
    __debugbreak();
  if ( !surfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1223, ASSERT_TYPE_ASSERT, "(surfType != ( 0 << 19))", (const char *)&queryFormat, "surfType != SURF_TYPE_NONE") )
    __debugbreak();
  return surfType | ((viewDip | (32 * ((16 * v8) | ps->clothType))) << 6);
}

/*
==============
BG_PackStanceEventParm
==============
*/
__int64 BG_PackStanceEventParm(const BgWeaponMap *weaponMap, const playerState_s *ps, int surfType)
{
  unsigned int v6; 
  int v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1192, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1193, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_ChooseWeaponRattleTypeForEquipmentSound(weaponMap, ps);
  if ( ps->clothType >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1197, ASSERT_TYPE_ASSERT, "(ps->clothType < ( 1 << 4 ))", (const char *)&queryFormat, "ps->clothType < MAX_CLOTH_TYPE") )
    __debugbreak();
  if ( v6 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1198, ASSERT_TYPE_ASSERT, "(weapRattleType < ( 1 << 4 ))", (const char *)&queryFormat, "weapRattleType < MAX_WEAPON_RATTLE") )
    __debugbreak();
  if ( surfType >= 63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1199, ASSERT_TYPE_ASSERT, "(surfType < ((1 << 6) - 1))", (const char *)&queryFormat, "surfType < ((1 << SURF_TYPEBITS) - 1)") )
    __debugbreak();
  v7 = surfType | ((ps->clothType | (16 * v6)) << 6);
  if ( v7 > 0x3FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1206, ASSERT_TYPE_ASSERT, "( packed ) <= ( ((0x1 << (6 + 4 + 4)) - 1) )", "%s <= %s\n\t%i, %i", "packed", "((0x1 << STANCE_TRANSITION_BITS) - 1)", v7, 0x3FFF) )
    __debugbreak();
  return (unsigned int)v7;
}

/*
==============
BG_UnpackFootstepEventParm
==============
*/
void BG_UnpackFootstepEventParm(int eventParm, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *surfType, FootstepActionType_t *outActionType, bool *isLeft)
{
  char v10; 
  int v11; 
  char v12; 

  if ( !clothType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1299, ASSERT_TYPE_ASSERT, "(clothType)", (const char *)&queryFormat, "clothType") )
    __debugbreak();
  if ( !weaponRattleType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1300, ASSERT_TYPE_ASSERT, "(weaponRattleType)", (const char *)&queryFormat, "weaponRattleType") )
    __debugbreak();
  if ( !surfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1301, ASSERT_TYPE_ASSERT, "(surfType)", (const char *)&queryFormat, "surfType") )
    __debugbreak();
  if ( !outActionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1302, ASSERT_TYPE_ASSERT, "(outActionType)", (const char *)&queryFormat, "outActionType") )
    __debugbreak();
  if ( !isLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1303, ASSERT_TYPE_ASSERT, "(isLeft)", (const char *)&queryFormat, "isLeft") )
    __debugbreak();
  v10 = eventParm;
  v11 = eventParm >> 2;
  *outActionType = v10 & 3;
  *surfType = v11 & 0x3F;
  v11 >>= 6;
  v12 = v11;
  v11 >>= 4;
  *clothType = v12 & 0xF;
  *weaponRattleType = v11 & 0xF;
  *isLeft = (v11 >> 4) & 1;
}

/*
==============
BG_UnpackHardLandingEventParm
==============
*/
void BG_UnpackHardLandingEventParm(int eventParm, unsigned int *damage, int *isSoftLanding, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *viewDip, unsigned int *surfType)
{
  *surfType = eventParm & 0x3F;
  *viewDip = (eventParm >> 6) & 0x1F;
  *damage = (eventParm >> 11) & 0x7F;
  *isSoftLanding = (eventParm >> 18) & 1;
  *clothType = (eventParm >> 19) & 0xF;
  *weaponRattleType = (eventParm >> 23) & 0xF;
}

/*
==============
BG_UnpackMantleEventParm
==============
*/
void BG_UnpackMantleEventParm(unsigned int eventParm, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *mantleSoundFlavorPLR, unsigned int *mantleSoundFlavorNPC, gestureAnimType_t *mantleType)
{
  *mantleType = (eventParm & 0x3F) + 3;
  *mantleSoundFlavorNPC = (eventParm >> 6) & 0x1FF;
  *mantleSoundFlavorPLR = (eventParm >> 15) & 0x1FF;
  *clothType = HIBYTE(eventParm) & 0xF;
  *weaponRattleType = eventParm >> 28;
}

/*
==============
BG_UnpackMeleeAttackAnimParam
==============
*/
void BG_UnpackMeleeAttackAnimParam(int param, MeleeAnimType *outAnimType, MeleeResult *outResult, bool *outIsAltMelee, int *outVariant)
{
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v14; 

  if ( param > 255 )
  {
    v14 = 255;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1491, ASSERT_TYPE_ASSERT, "( param ) <= ( ((0x1 << ((3) + (2) + 1 + (2))) - 1) )", "%s <= %s\n\t%i, %i", "param", "((0x1 << MELEE_ATTACK_ANIM_DATA_BITS) - 1)", param, v14) )
      __debugbreak();
  }
  v9 = param & 3;
  v10 = param >> 2;
  *outVariant = v9;
  LOBYTE(v9) = v10 & 1;
  v10 >>= 1;
  *outIsAltMelee = v9;
  *outResult = v10 & 3;
  *outAnimType = (v10 >> 2) & 7;
  if ( *outResult >= (unsigned int)NUM_RESULT )
  {
    LODWORD(v12) = 3;
    SLODWORD(v11) = *outResult;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1506, ASSERT_TYPE_ASSERT, "(unsigned)( *outResult ) < (unsigned)( static_cast<int>(MeleeResult::NUM_RESULT) )", "*outResult doesn't index static_cast<int>(MeleeResult::NUM_RESULT)\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( (unsigned int)*outVariant >= 4 )
  {
    LODWORD(v12) = 4;
    LODWORD(v11) = *outVariant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1507, ASSERT_TYPE_ASSERT, "(unsigned)( *outVariant ) < (unsigned)( (4) )", "*outVariant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
}

/*
==============
BG_UnpackMeleeCharacterImpactParam
==============
*/
void BG_UnpackMeleeCharacterImpactParam(int param, int *outClothType, MeleeAnimType *outAttackerAnim, WeaponMaterialType *outMaterial, bool *outIsAltMelee, int *outVariant, MeleeResult *outResult, float *outImpactHeight)
{
  double v12; 
  int v13; 
  char v14; 
  int v15; 
  bool v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 

  if ( param > 0x3FFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1399, ASSERT_TYPE_ASSERT, "( param ) <= ( ((0x1 << (4 + (3) + (2) + 1 + (2) + (2) + (4))) - 1) )", "%s <= %s\n\t%i, %i", "param", "((0x1 << MELEE_CHARACTER_IMPACT_BITS) - 1)", param, 0x3FFFF) )
    __debugbreak();
  v12 = MSG_UnpackUnsignedFloat(param & 0xF, 60.0, 4u);
  v13 = param >> 4;
  *outImpactHeight = *(float *)&v12;
  v14 = v13;
  v13 >>= 2;
  *outResult = v14 & 3;
  v15 = v13 & 3;
  v13 >>= 2;
  *outVariant = v15;
  v16 = v13 & 1;
  v13 >>= 1;
  *outIsAltMelee = v16;
  v17 = v13 & 3;
  v13 >>= 2;
  *outMaterial = v17;
  *outAttackerAnim = v13 & 7;
  *outClothType = (v13 >> 3) & 0xF;
  if ( *outAttackerAnim >= 8u )
  {
    LODWORD(v19) = 8;
    SLODWORD(v18) = *outAttackerAnim;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1424, ASSERT_TYPE_ASSERT, "(unsigned)( *outAttackerAnim ) < (unsigned)( static_cast<int>(MeleeAnimType::COUNT) )", "*outAttackerAnim doesn't index static_cast<int>(MeleeAnimType::COUNT)\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( *outMaterial >= (unsigned int)(COUNT|DODGE) )
  {
    LODWORD(v19) = 3;
    SLODWORD(v18) = *outMaterial;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1425, ASSERT_TYPE_ASSERT, "(unsigned)( *outMaterial ) < (unsigned)( static_cast<int>(WeaponMaterialType::COUNT) )", "*outMaterial doesn't index static_cast<int>(WeaponMaterialType::COUNT)\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( (unsigned int)*outVariant >= 4 )
  {
    LODWORD(v19) = 4;
    LODWORD(v18) = *outVariant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1426, ASSERT_TYPE_ASSERT, "(unsigned)( *outVariant ) < (unsigned)( (4) )", "*outVariant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  if ( *outResult >= (unsigned int)NUM_RESULT )
  {
    LODWORD(v19) = 3;
    SLODWORD(v18) = *outResult;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1427, ASSERT_TYPE_ASSERT, "(unsigned)( *outResult ) < (unsigned)( static_cast<int>(MeleeResult::NUM_RESULT) )", "*outResult doesn't index static_cast<int>(MeleeResult::NUM_RESULT)\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
}

/*
==============
BG_UnpackMeleeParam
==============
*/
void BG_UnpackMeleeParam(int param, MeleeAnimType *outAttackerAnim, WeaponMaterialType *outMaterial, bool *outIsAltMelee, int *outVariant)
{
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v14; 

  if ( param > 255 )
  {
    v14 = 255;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1451, ASSERT_TYPE_ASSERT, "( param ) <= ( ((0x1 << ((3) + (2) + 1 + (2))) - 1) )", "%s <= %s\n\t%i, %i", "param", "((0x1 << MELEE_WORLD_IMPACT_BITS) - 1)", param, v14) )
      __debugbreak();
  }
  v9 = param & 3;
  v10 = param >> 2;
  *outVariant = v9;
  LOBYTE(v9) = v10 & 1;
  v10 >>= 1;
  *outIsAltMelee = v9;
  *outMaterial = v10 & 3;
  *outAttackerAnim = (v10 >> 2) & 7;
  if ( *outMaterial >= (unsigned int)(COUNT|DODGE) )
  {
    LODWORD(v12) = 3;
    SLODWORD(v11) = *outMaterial;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1466, ASSERT_TYPE_ASSERT, "(unsigned)( *outMaterial ) < (unsigned)( static_cast<int>(WeaponMaterialType::COUNT) )", "*outMaterial doesn't index static_cast<int>(WeaponMaterialType::COUNT)\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( (unsigned int)*outVariant >= 4 )
  {
    LODWORD(v12) = 4;
    LODWORD(v11) = *outVariant;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1467, ASSERT_TYPE_ASSERT, "(unsigned)( *outVariant ) < (unsigned)( (4) )", "*outVariant doesn't index MAX_RANDOM_MELEE_ANIM_PACKAGES\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
}

/*
==============
BG_UnpackSoftLandingEventParm
==============
*/
void BG_UnpackSoftLandingEventParm(int eventParm, unsigned int *viewDip, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *surfType)
{
  *surfType = eventParm & 0x3F;
  *viewDip = (eventParm >> 6) & 0x1F;
  *clothType = (eventParm >> 11) & 0xF;
  *weaponRattleType = (eventParm >> 15) & 0xF;
}

/*
==============
BG_UnpackStanceEventParm
==============
*/
void BG_UnpackStanceEventParm(int eventParm, unsigned int *clothType, unsigned int *weaponRattleType, unsigned int *surfType)
{
  int v8; 
  int v9; 

  if ( !clothType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1325, ASSERT_TYPE_ASSERT, "(clothType)", (const char *)&queryFormat, "clothType") )
    __debugbreak();
  if ( !weaponRattleType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1326, ASSERT_TYPE_ASSERT, "(weaponRattleType)", (const char *)&queryFormat, "weaponRattleType") )
    __debugbreak();
  if ( !surfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_equipment_snd.cpp", 1327, ASSERT_TYPE_ASSERT, "(surfType)", (const char *)&queryFormat, "surfType") )
    __debugbreak();
  v8 = eventParm & 0x3F;
  v9 = eventParm >> 6;
  *surfType = v8;
  *clothType = v9 & 0xF;
  *weaponRattleType = (v9 >> 4) & 0xF;
}

