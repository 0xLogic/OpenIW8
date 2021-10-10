/*
==============
CgStaticMP::GetAttachXModel
==============
*/

XModel *__fastcall CgStaticMP::GetAttachXModel(CgStaticMP *this, const characterInfo_t *ci, const int attachModelIndex, const bool isReferenceModel)
{
  return ?GetAttachXModel@CgStaticMP@@UEBAPEAUXModel@@PEBUcharacterInfo_t@@H_N@Z(this, ci, attachModelIndex, isReferenceModel);
}

/*
==============
CgStaticMP::GetAnimStatics
==============
*/

const BgAnimStatic *__fastcall CgStaticMP::GetAnimStatics(CgStaticMP *this)
{
  return ?GetAnimStatics@CgStaticMP@@UEBAPEBUBgAnimStatic@@XZ(this);
}

/*
==============
CgStaticMP::BuildReferenceCorpseModels
==============
*/

int __fastcall CgStaticMP::BuildReferenceCorpseModels(CgStaticMP *this, const int entNum, const int attachIgnoreCollision, DObjModel (*outDobjModels)[32], CharacterModelType (*outModelTypes)[32])
{
  return ?BuildReferenceCorpseModels@CgStaticMP@@UEBAHHHAEAY0CA@UDObjModel@@AEAY0CA@W4CharacterModelType@@@Z(this, entNum, attachIgnoreCollision, outDobjModels, outModelTypes);
}

/*
==============
CgStaticMP::BodyModel
==============
*/

unsigned __int16 __fastcall CgStaticMP::BodyModel(CgStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, const entityState_t *es, const characterInfo_t *ci, const bool isReferenceModel)
{
  return ?BodyModel@CgStaticMP@@UEBAGPEAUDObjModel@@GPEBUentityState_t@@PEBUcharacterInfo_t@@_N@Z(this, dobjModels, numModels, es, ci, isReferenceModel);
}

/*
==============
CgStaticMP::HasCharacterInfo
==============
*/

bool __fastcall CgStaticMP::HasCharacterInfo(CgStaticMP *this, const int entNum)
{
  return ?HasCharacterInfo@CgStaticMP@@UEBA_NH@Z(this, entNum);
}

/*
==============
CgStaticMP::WeaponModelLoadStatusMaybeDirtyThisFrameVerification
==============
*/

void __fastcall CgStaticMP::WeaponModelLoadStatusMaybeDirtyThisFrameVerification(CgStaticMP *this, const characterInfo_t *ci)
{
  ?WeaponModelLoadStatusMaybeDirtyThisFrameVerification@CgStaticMP@@UEBAXPEBUcharacterInfo_t@@@Z(this, ci);
}

/*
==============
CgStaticMP::AttachWeapon
==============
*/

unsigned __int16 __fastcall CgStaticMP::AttachWeapon(CgStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, const bool useReferenceModels, unsigned int *inOutFirstWeaponModelIdx, unsigned int *inOutFirstWeaponBoneIdx, int *heldWeaponModelIdx1, int *heldWeaponModelIdx2, int *stowedWeaponModelIdx, CharacterModelType (*outModelTypes)[32])
{
  return ?AttachWeapon@CgStaticMP@@UEBAGPEAUDObjModel@@GPEBUcharacterInfo_t@@_NPEAI3PEAH44AEAY0CA@W4CharacterModelType@@@Z(this, dobjModels, numModels, ci, useReferenceModels, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, outModelTypes);
}

/*
==============
CgStaticMP::SafeDObjFree
==============
*/

void __fastcall CgStaticMP::SafeDObjFree(CgStaticMP *this, int handle)
{
  ?SafeDObjFree@CgStaticMP@@UEBAXH@Z(this, handle);
}

/*
==============
CgStaticMP::CgStaticMP
==============
*/

void __fastcall CgStaticMP::CgStaticMP(CgStaticMP *this, const LocalClientNum_t localClientNum)
{
  ??0CgStaticMP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgStaticMP::CreateDObj
==============
*/

DObj *__fastcall CgStaticMP::CreateDObj(CgStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, int otherClientNum, bool requiresIKPreCache)
{
  return ?CreateDObj@CgStaticMP@@UEBAPEAUDObj@@PEAUDObjModel@@GPEAUXAnimTree@@HH_N@Z(this, dobjModels, numModels, tree, handle, otherClientNum, requiresIKPreCache);
}

/*
==============
CgStaticMP::WeaponModelLoadStatusMaybeDirtyThisFrame
==============
*/

bool __fastcall CgStaticMP::WeaponModelLoadStatusMaybeDirtyThisFrame(CgStaticMP *this)
{
  return ?WeaponModelLoadStatusMaybeDirtyThisFrame@CgStaticMP@@UEBA_NXZ(this);
}

/*
==============
CgStaticMP::GetCharacterAnimState
==============
*/

characterAnimState_t *__fastcall CgStaticMP::GetCharacterAnimState(CgStaticMP *this, const int entNum)
{
  return ?GetCharacterAnimState@CgStaticMP@@UEAAPEAUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
CgStaticMP::GetAngles
==============
*/

void __fastcall CgStaticMP::GetAngles(CgStaticMP *this, int entIndex, vec3_t *outAngles)
{
  ?GetAngles@CgStaticMP@@UEBAXHAEATvec3_t@@@Z(this, entIndex, outAngles);
}

/*
==============
CgStaticMP::GetCharacterAngles
==============
*/

bool __fastcall CgStaticMP::GetCharacterAngles(CgStaticMP *this, const int entityIndex, vec3_t *outAngles)
{
  return ?GetCharacterAngles@CgStaticMP@@UEBA_NHAEATvec3_t@@@Z(this, entityIndex, outAngles);
}

/*
==============
CgStaticMP::BuildReferenceCharacterModels
==============
*/

int __fastcall CgStaticMP::BuildReferenceCharacterModels(CgStaticMP *this, const int entNum, const int attachIgnoreCollision, DObjModel (*outDobjModels)[32], CharacterModelType (*outModelTypes)[32])
{
  return ?BuildReferenceCharacterModels@CgStaticMP@@UEBAHHHAEAY0CA@UDObjModel@@AEAY0CA@W4CharacterModelType@@@Z(this, entNum, attachIgnoreCollision, outDobjModels, outModelTypes);
}

/*
==============
CgStaticMP::GetXModel
==============
*/

XModel *__fastcall CgStaticMP::GetXModel(CgStaticMP *this, const char *name)
{
  return ?GetXModel@CgStaticMP@@UEBAPEAUXModel@@PEBD@Z(this, name);
}

/*
==============
CgStaticMP::GetAnimStatics
==============
*/

BgAnimStatic *__fastcall CgStaticMP::GetAnimStatics(CgStaticMP *this)
{
  return ?GetAnimStatics@CgStaticMP@@UEAAPEAUBgAnimStatic@@XZ(this);
}

/*
==============
CgStaticMP::GetClientInfo
==============
*/

clientInfo_t *__fastcall CgStaticMP::GetClientInfo(CgStaticMP *this, const int clientIndex)
{
  return ?GetClientInfo@CgStaticMP@@UEAAPEAUclientInfo_t@@H@Z(this, clientIndex);
}

/*
==============
CgStaticMP::GetClientInfo
==============
*/

const clientInfo_t *__fastcall CgStaticMP::GetClientInfo(CgStaticMP *this, const int clientIndex)
{
  return ?GetClientInfo@CgStaticMP@@UEBAPEBUclientInfo_t@@H@Z(this, clientIndex);
}

/*
==============
CgStaticMP::GetCharacterAnimState
==============
*/

const characterAnimState_t *__fastcall CgStaticMP::GetCharacterAnimState(CgStaticMP *this, const int entNum)
{
  return ?GetCharacterAnimState@CgStaticMP@@UEBAPEBUcharacterAnimState_t@@H@Z(this, entNum);
}

/*
==============
CgStaticMP::GetPlayerWorldIkStatus
==============
*/

void __fastcall CgStaticMP::GetPlayerWorldIkStatus(CgStaticMP *this, const int entNum, bool (*outWorldIKEnabled)[2])
{
  ?GetPlayerWorldIkStatus@CgStaticMP@@UEAAXHAEAY01_N@Z(this, entNum, outWorldIKEnabled);
}

/*
==============
CgStaticMP::CgStaticMP
==============
*/
void CgStaticMP::CgStaticMP(CgStaticMP *this, const LocalClientNum_t localClientNum)
{
  this->m_localClientNum = localClientNum;
  this->__vftable = (CgStaticMP_vtbl *)&CgStaticMP::`vftable';
  memset_0(&this->m_animData, 0, 0xEEE0ui64);
  this->m_animData.anim_user = 0;
}

/*
==============
CgStaticMP::AttachWeapon
==============
*/
unsigned __int16 CgStaticMP::AttachWeapon(CgStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, const bool useReferenceModels, unsigned int *inOutFirstWeaponModelIdx, unsigned int *inOutFirstWeaponBoneIdx, int *heldWeaponModelIdx1, int *heldWeaponModelIdx2, int *stowedWeaponModelIdx, CharacterModelType (*outModelTypes)[32])
{
  unsigned __int16 result; 
  scr_string_t tag_stowed_back; 
  unsigned __int16 v16; 
  bool dobjAccessoryWeaponLoaded; 
  const DObjCamoParams *camoParams; 
  unsigned __int16 v19; 
  bool v20; 
  __m256i v21; 
  __int128 v22; 
  unsigned __int16 v23; 
  double v24; 
  scr_string_t stowTag; 
  __m256i v26; 
  __int128 v27; 
  int *v28; 
  double v29; 
  const XModel *WeaponModels; 
  __int64 v31; 
  bool v32; 
  bool v33; 
  XModel *v34; 
  XModel *v35; 
  XModel *v36; 
  DObjModel *outDObjModel; 
  bool dobjModelsa; 
  bool dobjModelsb; 
  unsigned __int16 v40; 
  int v41; 
  int *outWeaponModelIndex2; 
  int *outWeaponModelIndex1; 
  unsigned int *v44; 
  unsigned int *v45; 
  int *v46; 
  XModel *model; 
  Weapon outLocalParams; 
  XAnimWeaponIKModelsContainer outWeaponIKModels; 

  v45 = inOutFirstWeaponModelIdx;
  v44 = inOutFirstWeaponBoneIdx;
  v40 = numModels;
  outWeaponModelIndex1 = heldWeaponModelIdx1;
  outWeaponModelIndex2 = heldWeaponModelIdx2;
  v46 = stowedWeaponModelIdx;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 431, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 432, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !heldWeaponModelIdx1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 433, ASSERT_TYPE_ASSERT, "(heldWeaponModelIdx1)", (const char *)&queryFormat, "heldWeaponModelIdx1") )
    __debugbreak();
  if ( !heldWeaponModelIdx2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 434, ASSERT_TYPE_ASSERT, "(heldWeaponModelIdx2)", (const char *)&queryFormat, "heldWeaponModelIdx2") )
    __debugbreak();
  if ( !stowedWeaponModelIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 435, ASSERT_TYPE_ASSERT, "(stowedWeaponModelIdx)", (const char *)&queryFormat, "stowedWeaponModelIdx") )
    __debugbreak();
  if ( v40 > 0xFEu )
  {
    LODWORD(outDObjModel) = v40;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 436, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numModels ) && ( numModels ) <= ( ( DOBJ_MAX_PARTS ) )", "numModels not in [0, DOBJ_MAX_SUBMODELS]\n\t%i not in [%i, %i]", outDObjModel, 0i64, 254) )
      __debugbreak();
  }
  if ( useReferenceModels )
    return BgStatic::AttachWeaponDefaultModelsMinimal(this, dobjModels, v40, ci, v45, v44, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, outModelTypes);
  XAnimWeaponIKModelsContainer::XAnimWeaponIKModelsContainer(&outWeaponIKModels);
  tag_stowed_back = scr_const.tag_stowed_back;
  if ( ci->dobjExecutionWeapon.weaponIdx )
  {
    v16 = CG_StaticMP_AttachExecutionWeapon(dobjModels, v40, ci, &outWeaponIKModels, outModelTypes);
    v40 = v16;
  }
  else
  {
    v16 = v40;
  }
  if ( ci->dobjAccessoryWeapon.weaponIdx )
  {
    LOWORD(v41) = v16;
    if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 367, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
      __debugbreak();
    if ( ci->dobjAccessoryWeapon.weaponIdx )
    {
      dobjAccessoryWeaponLoaded = ci->dobjAccessoryWeaponLoaded;
      camoParams = BG_Camo_GetWeaponDObjCamoParams(&ci->dobjAccessoryWeapon, 0, (DObjCamoParams *)&outLocalParams);
      model = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, &ci->dobjAccessoryWeapon, 0, !dobjAccessoryWeaponLoaded, 0, 0, 0);
      if ( model )
      {
        if ( (unsigned __int16)v41 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 388, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
          __debugbreak();
        DObjInitModel(model, (scr_string_t)0, 1, 0, camoParams, &dobjModels[(unsigned __int16)v41]);
        LOWORD(v41) = v41 + 1;
        if ( dobjAccessoryWeaponLoaded )
          BG_AddWeaponAttachmentModels(&ci->dobjAccessoryWeapon, WEAPON_HAND_DEFAULT, 0, 0, 1, 0, dobjModels, 0xFEu, (unsigned __int16 *)&v41, NULL, camoParams);
      }
    }
    v16 = v41;
    v40 = v41;
  }
  if ( ci->dobjHeldWeapon.weaponIdx )
  {
    v19 = BG_Weapons_AttachHeldWeapon(dobjModels, v16, ci, outWeaponModelIndex1, outWeaponModelIndex2, 0, &outWeaponIKModels, outModelTypes);
    v20 = !ci->stowHeldWeapon;
    v16 = v19;
    v40 = v19;
    if ( !v20 )
    {
      v21 = *(__m256i *)&ci->dobjHeldWeapon.weaponIdx;
      v22 = *(_OWORD *)&ci->dobjHeldWeapon.attachmentVariationIndices[5];
      v23 = v19;
      *(_DWORD *)&outLocalParams.weaponCamo = *(_DWORD *)&ci->dobjHeldWeapon.weaponCamo;
      dobjModelsa = ci->dobjHeldWeaponLoaded;
      *(__m256i *)&outLocalParams.weaponIdx = v21;
      v24 = *(double *)&ci->dobjHeldWeapon.attachmentVariationIndices[21];
      *(_OWORD *)&outLocalParams.attachmentVariationIndices[5] = v22;
      *(double *)&outLocalParams.attachmentVariationIndices[21] = v24;
      v40 = CG_StaticMP_AttachStowedWeapon(dobjModels, v19, ci, v46, outModelTypes, &outLocalParams, dobjModelsa);
      v16 = v40;
      if ( v40 > v23 )
      {
        v16 = v40;
        tag_stowed_back = BG_WeaponDef(&ci->dobjHeldWeapon, 0)->stowTag;
        if ( !tag_stowed_back )
          tag_stowed_back = scr_const.tag_stowed_back;
      }
    }
  }
  if ( !ci->dobjStowedWeapon.weaponIdx )
    goto LABEL_47;
  if ( !ci->stowHeldWeapon )
    goto LABEL_46;
  v16 = v40;
  stowTag = BG_WeaponDef(&ci->dobjStowedWeapon, 0)->stowTag;
  if ( !stowTag )
    stowTag = scr_const.tag_stowed_back;
  if ( tag_stowed_back == stowTag )
  {
LABEL_47:
    v28 = v46;
  }
  else
  {
LABEL_46:
    v26 = *(__m256i *)&ci->dobjStowedWeapon.weaponIdx;
    v27 = *(_OWORD *)&ci->dobjStowedWeapon.attachmentVariationIndices[5];
    v28 = v46;
    *(_DWORD *)&outLocalParams.weaponCamo = *(_DWORD *)&ci->dobjStowedWeapon.weaponCamo;
    dobjModelsb = ci->dobjStowedWeaponLoaded;
    *(__m256i *)&outLocalParams.weaponIdx = v26;
    v29 = *(double *)&ci->dobjStowedWeapon.attachmentVariationIndices[21];
    *(_OWORD *)&outLocalParams.attachmentVariationIndices[5] = v27;
    *(double *)&outLocalParams.attachmentVariationIndices[21] = v29;
    v16 = CG_StaticMP_AttachStowedWeapon(dobjModels, v16, ci, v46, outModelTypes, &outLocalParams, dobjModelsb);
    v40 = v16;
  }
  if ( ci->usingThrownWeapon )
  {
    if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 405, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
      __debugbreak();
    WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, &ci->dobjThrownWeapon, 0, !ci->dobjThrownWeaponLoaded, ci->dualWielding != 0, ci->dobjUsingDetonator, 0);
    if ( WeaponModels )
    {
      if ( v16 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 416, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
        __debugbreak();
      v31 = v16;
      DObjInitModel(WeaponModels, scr_const.tag_accessory_left, 0, 0, NULL, &dobjModels[v16++]);
      (*outModelTypes)[v31] = CHAR_MODEL_WEAPON_THROWN;
    }
    v40 = v16;
  }
  if ( ci->usingKillstreakTrigger )
  {
    if ( v16 >= 0xFEu )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 506, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
        __debugbreak();
      v16 = v40;
    }
    DObjInitModel(cgMedia.killstreakTriggerModel, scr_const.tag_weapon_left, 0, 0, NULL, &dobjModels[v16]);
    (*outModelTypes)[v40++] = CHAR_MODEL_KILLSTREAK_TRIGGER;
  }
  if ( BG_IsPlayingVehicleOccupancyAnims(ci) )
  {
    v32 = ENABLE_LEFT_HAND_IK && ci->vehicleAnimation.hasSeatIK[0];
    v33 = ENABLE_RIGHT_HAND_IK && ci->vehicleAnimation.hasSeatIK[1];
    if ( v32 && v33 )
    {
      result = v40;
    }
    else
    {
      v34 = cg_tagIKTargetModelRight;
      v35 = cg_tagIKTargetModelLeft;
      if ( v33 )
        v34 = NULL;
      if ( v32 )
        v35 = NULL;
      result = BG_Weapons_AttachHeldWeaponIKTargets(dobjModels, v40, ci, v35, v34, 0, v45, v44, outWeaponModelIndex1, outWeaponModelIndex2, v28, &outWeaponIKModels, outModelTypes);
      v40 = result;
    }
    if ( v32 )
    {
      result = BG_Weapons_AttachWorldIKTargets(dobjModels, result, ci, cg_tagIKTargetModelLeft, 0, outModelTypes);
      v40 = result;
    }
    if ( v33 )
      return BG_Weapons_AttachWorldIKTargets(dobjModels, result, ci, cg_tagIKTargetModelRight, 0, outModelTypes);
  }
  else
  {
    if ( (ci->carryObjectFlags & 1) != 0 && ci->carryObjectIKEnabled )
    {
      v40 = BG_Weapons_AttachHeldWeaponIKTargets(dobjModels, v40, ci, NULL, cg_tagIKTargetModelRight, 0, v45, v44, outWeaponModelIndex1, outWeaponModelIndex2, v28, &outWeaponIKModels, outModelTypes);
      return BG_Weapons_AttachWorldIKTargets(dobjModels, v40, ci, cg_tagIKTargetModelLeft, 0, outModelTypes);
    }
    if ( BG_IsPlayingLadderAnims(ci) )
    {
      XAnimIKAttachTargetToTag(cg_tagIKTargetModelLeft, scr_const.j_left_hand, dobjModels, &v40, &v41, outModelTypes);
      if ( ci->hideWeapon )
      {
        XAnimIKAttachTargetToTag(cg_tagIKTargetModelRight, scr_const.j_right_hand, dobjModels, &v40, &v41, outModelTypes);
        return v40;
      }
      v36 = NULL;
    }
    else
    {
      if ( !ci->skydiveAnimState && (BG_IsUsingWorldIKTargets(ci) || ci->hideWeapon) )
      {
        v40 = BG_Weapons_AttachWorldIKTargets(dobjModels, v40, ci, cg_tagIKTargetModelLeft, 0, outModelTypes);
        return BG_Weapons_AttachWorldIKTargets(dobjModels, v40, ci, cg_tagIKTargetModelRight, 0, outModelTypes);
      }
      v36 = cg_tagIKTargetModelLeft;
    }
    return BG_Weapons_AttachHeldWeaponIKTargets(dobjModels, v40, ci, v36, cg_tagIKTargetModelRight, 0, v45, v44, outWeaponModelIndex1, outWeaponModelIndex2, v28, &outWeaponIKModels, outModelTypes);
  }
  return result;
}

/*
==============
CgStaticMP::BodyModel
==============
*/
__int64 CgStaticMP::BodyModel(CgStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, const entityState_t *es, const characterInfo_t *ci, const bool isReferenceModel)
{
  int v7; 
  char *model; 
  ClConfigStrings *ClConfigStrings; 
  DObjModel *v11; 
  const XModel *v12; 
  DObjModel *outDObjModel; 

  v7 = numModels;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 582, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( (unsigned __int16)v7 >= 0xFEu )
  {
    LODWORD(outDObjModel) = (unsigned __int16)v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 583, ASSERT_TYPE_ASSERT, "(unsigned)( numModels ) < (unsigned)( ( DOBJ_MAX_PARTS ) )", "numModels doesn't index DOBJ_MAX_SUBMODELS\n\t%i not in [0, %i)", outDObjModel, 254) )
      __debugbreak();
  }
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 584, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 585, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  model = ci->model;
  if ( isReferenceModel )
  {
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    if ( !ClConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 591, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
      __debugbreak();
    if ( ci->modelIndex > 0 )
    {
      model = (char *)((__int64 (__fastcall *)(ClConfigStrings *))ClConfigStrings->GetModelString)(ClConfigStrings);
      if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 597, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
        __debugbreak();
    }
  }
  v11 = &dobjModels[(unsigned __int16)v7];
  v12 = R_RegisterModel(model);
  DObjInitModel(v12, (scr_string_t)0, 0, 0, NULL, v11);
  if ( !v11->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 603, ASSERT_TYPE_ASSERT, "(dobjModels[numModels].model)", (const char *)&queryFormat, "dobjModels[numModels].model") )
    __debugbreak();
  return (unsigned int)(v7 + 1);
}

/*
==============
CgStaticMP::BuildReferenceCharacterModels
==============
*/
__int64 CgStaticMP::BuildReferenceCharacterModels(CgStaticMP *this, const int entNum, const int attachIgnoreCollision, DObjModel (*outDobjModels)[32], CharacterModelType (*outModelTypes)[32])
{
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  entityType_s eType; 
  unsigned int numModels; 
  const characterInfo_t *CharacterInfo; 
  cgs_t *LocalClientStaticGlobals; 
  unsigned int v15; 
  DObjModel (*outDobjModelsa)[32]; 
  CharacterModelType (*v18)[32]; 
  BgCharacterModelListBuildResults outModelListBuildResults; 

  Sys_ProfBeginNamedEvent(0xFF0000FF, "CgStaticMP::BuildReferenceCharacterModels");
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 647, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 650, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 || (eType = Entity->nextState.eType, eType == ET_AGENT_CORPSE) )
  {
    if ( BG_IsPlayerOrAgentEntity(&Entity->nextState) )
    {
      CharacterInfo = CgStatic::GetCharacterInfo(this, p_nextState->number);
    }
    else
    {
      if ( Entity->nextState.eType != ET_AGENT_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 661, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_AGENT_CORPSE)", (const char *)&queryFormat, "cent->nextState.eType == ET_AGENT_CORPSE") )
        __debugbreak();
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)this->m_localClientNum);
      if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 664, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v15 = p_nextState->number - ComCharacterLimits::ms_gameData.m_clientCorpseCount - ComCharacterLimits::ms_gameData.m_characterCount;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v15 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v18) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        LODWORD(outDobjModelsa) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 667, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", outDobjModelsa, v18) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 668, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", ComCharacterLimits::ms_gameData.m_agentCorpseCount, 8) )
          __debugbreak();
      }
      CharacterInfo = &LocalClientStaticGlobals->agentCorpseInfo[v15].ci;
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 672, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    BgStatic::BuildCharacterModelList(this, CharacterInfo, p_nextState, attachIgnoreCollision, 1, outDobjModels, outModelTypes, &outModelListBuildResults);
    numModels = outModelListBuildResults.numModels;
  }
  else if ( eType == ET_PLAYER_CORPSE )
  {
    numModels = CgStaticMP::BuildReferenceCorpseModels(this, entNum, attachIgnoreCollision, outDobjModels, outModelTypes);
  }
  else
  {
    numModels = 0;
  }
  Sys_ProfEndNamedEvent();
  return numModels;
}

/*
==============
CgStaticMP::BuildReferenceCorpseModels
==============
*/
__int64 CgStaticMP::BuildReferenceCorpseModels(CgStaticMP *this, const int entNum, const int attachIgnoreCollision, DObjModel (*outDobjModels)[32], CharacterModelType (*outModelTypes)[32])
{
  unsigned int v8; 
  centity_t *Entity; 
  entityState_t *p_nextState; 
  entityType_s eType; 
  const characterInfo_t *CharacterInfo; 
  corpseReferenceCharacterInfo_t *p_corpseReferenceInfo; 
  cgs_t *LocalClientStaticGlobals; 
  unsigned int v15; 
  ClConfigStrings *ClConfigStrings; 
  const char *v17; 
  const XModel *v18; 
  CharacterModelType (*v19)[32]; 
  const dvar_t *v20; 
  bool enabled; 
  int v22; 
  int v23; 
  int *attachModelIndex; 
  const char *v25; 
  const XModel *v26; 
  CharacterModelType *v27; 
  corpseReferenceCharacterInfo_t *v28; 
  int v29; 
  int v30; 
  __int64 v31; 
  const char *v32; 
  const XModel *v33; 
  DObjModel *outDObjModel; 
  DObjModel *outDObjModela; 
  CharacterModelType (*v37)[32]; 
  CharacterModelType (*v38)[32]; 
  unsigned int outBonesAdded; 
  unsigned int v40; 
  CharacterModelType *v41; 
  corpseReferenceCharacterInfo_t *ci; 
  __int64 v43; 
  bool v44; 

  v43 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF0000FF, "CgStaticMP::BuildReferenceCorpseModels");
  v8 = 0;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 692, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 694, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 695, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
  {
    if ( Entity->nextState.eType != ET_PLAYER_CORPSE )
    {
      LODWORD(v31) = 0;
      goto LABEL_92;
    }
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientStaticGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 709, ASSERT_TYPE_ASSERT, "(cgs)", (const char *)&queryFormat, "cgs") )
      __debugbreak();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v15 = p_nextState->number - ComCharacterLimits::ms_gameData.m_characterCount;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v15 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v37) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
      LODWORD(outDObjModel) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 712, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", outDObjModel, v37) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 713, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", ComCharacterLimits::ms_gameData.m_clientCorpseCount, 8) )
        __debugbreak();
    }
    p_corpseReferenceInfo = &LocalClientStaticGlobals->corpseinfo[v15].ci.corpseReferenceInfo;
  }
  else
  {
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = Entity->nextState.eType;
    if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 700, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
      __debugbreak();
    CharacterInfo = CgStatic::GetCharacterInfo(this, p_nextState->number);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 703, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    p_corpseReferenceInfo = &CharacterInfo->corpseReferenceInfo;
  }
  ci = p_corpseReferenceInfo;
  if ( !p_corpseReferenceInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 722, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
    __debugbreak();
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  if ( !ClConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 725, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  if ( p_corpseReferenceInfo->modelIndex <= 0 )
  {
    v19 = outModelTypes;
  }
  else
  {
    v17 = (const char *)((__int64 (__fastcall *)(ClConfigStrings *))ClConfigStrings->GetModelString)(ClConfigStrings);
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 731, ASSERT_TYPE_ASSERT, "(serverModelName)", (const char *)&queryFormat, "serverModelName") )
      __debugbreak();
    v18 = R_RegisterModel(v17);
    DObjInitModel(v18, (scr_string_t)0, 0, 0, NULL, (DObjModel *)outDobjModels);
    v8 = 1;
    v19 = outModelTypes;
    (*outModelTypes)[0] = CHAR_MODEL_BODY;
  }
  v20 = DVARBOOL_bg_attachHeadAsLastModel;
  if ( !DVARBOOL_bg_attachHeadAsLastModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_attachHeadAsLastModel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  enabled = v20->current.enabled;
  v44 = enabled;
  v22 = 0;
  v23 = -1;
  v41 = &(*v19)[v8];
  attachModelIndex = p_corpseReferenceInfo->attachModelIndex;
  do
  {
    if ( *attachModelIndex > 0 )
    {
      v25 = (const char *)((__int64 (__fastcall *)(ClConfigStrings *))ClConfigStrings->GetModelString)(ClConfigStrings);
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 751, ASSERT_TYPE_ASSERT, "(serverModelName)", (const char *)&queryFormat, "serverModelName") )
        __debugbreak();
      if ( enabled && BG_Customization_IsCustomizationModel(CUSTOMIZATION_TYPE_HEAD, v25) )
      {
        if ( v23 >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 760, ASSERT_TYPE_ASSERT, "(headAttachModelIndex < 0)", "%s\n\tMore than one head model is attached. Second head: %s", "headAttachModelIndex < 0", v25) )
          __debugbreak();
        v23 = v22;
      }
      else
      {
        if ( v8 >= 0x20 )
        {
          LODWORD(v37) = 32;
          LODWORD(outDObjModel) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 768, ASSERT_TYPE_ASSERT, "(unsigned)( numModels ) < (unsigned)( ( sizeof( *array_counter( outDobjModels ) ) + 0 ) )", "numModels doesn't index outDobjModels\n\t%i not in [0, %i)", outDObjModel, v37) )
            __debugbreak();
        }
        v26 = R_RegisterModel(v25);
        DObjInitModel(v26, (scr_string_t)0, 1, 0, NULL, &(*outDobjModels)[v8]);
        v27 = v41;
        *v41 = v22 + 2;
        ++v8;
        v41 = v27 + 1;
        enabled = v44;
      }
    }
    ++v22;
    ++attachModelIndex;
  }
  while ( v22 < 9 );
  v28 = ci;
  v29 = BG_AddCarryObjectModelToCorpse(entNum, ci, (DObjModel *)outDobjModels, v8, 0, &outBonesAdded, outModelTypes);
  v30 = BG_AddParachuteModelToCorpse(entNum, v28, (DObjModel *)outDobjModels, v29, 0, &v40, outModelTypes);
  v31 = v30;
  if ( enabled && v23 >= 0 )
  {
    if ( (unsigned int)v30 >= 0x20 )
    {
      LODWORD(v38) = 32;
      LODWORD(outDObjModela) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 784, ASSERT_TYPE_ASSERT, "(unsigned)( numModels ) < (unsigned)( ( sizeof( *array_counter( outDobjModels ) ) + 0 ) )", "numModels doesn't index outDobjModels\n\t%i not in [0, %i)", outDObjModela, v38) )
        __debugbreak();
    }
    v32 = ClConfigStrings->GetModelString(ClConfigStrings, v28->attachModelIndex[v23]);
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 787, ASSERT_TYPE_ASSERT, "(serverModelName)", (const char *)&queryFormat, "serverModelName") )
      __debugbreak();
    v33 = R_RegisterModel(v32);
    DObjInitModel(v33, (scr_string_t)0, 1, 0, NULL, &(*outDobjModels)[v31]);
    (*outModelTypes)[v31] = v23 + 2;
    LODWORD(v31) = v31 + 1;
  }
LABEL_92:
  Sys_ProfEndNamedEvent();
  return (unsigned int)v31;
}

/*
==============
CG_StaticMP_AttachExecutionWeapon
==============
*/
__int64 CG_StaticMP_AttachExecutionWeapon(DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, XAnimWeaponIKModelsContainer *outWeaponIKModels, CharacterModelType (*outModelTypes)[32])
{
  Weapon *p_dobjExecutionWeapon; 
  const ExecutionDef *Def; 
  bool v10; 
  const DObjCamoParams *camoParams; 
  bool v12; 
  const XModel *WeaponModels; 
  const dvar_t *v14; 
  const char *WeaponName; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  unsigned __int64 v18; 
  CharacterModelType *v19; 
  __int64 isUsingCensorshipWorldModel; 
  unsigned __int16 v22; 
  scr_string_t boneName; 
  CharacterModelType (*v24)[32]; 
  DObjCamoParams outLocalParams; 
  char output[1024]; 

  v22 = numModels;
  v24 = outModelTypes;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 301, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 302, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !BG_Execution_IsExecutionWeaponPresent(ci) )
    return v22;
  p_dobjExecutionWeapon = &ci->dobjExecutionWeapon;
  Def = BG_Execution_GetDef(ci->execution);
  v10 = !ci->dobjExecutionWeaponLoaded || BG_Execution_ShouldHideExecutionWeapon(&ci->dobjExecutionWeapon);
  boneName = Def->propWeaponAttachTag;
  camoParams = BG_Camo_GetWeaponDObjCamoParams(&ci->dobjExecutionWeapon, 0, &outLocalParams);
  v12 = BG_Weapons_UseCensorshipWorldModel();
  WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, &ci->dobjExecutionWeapon, 0, v10, 0, 0, v12);
  if ( !WeaponModels )
    return v22;
  if ( !Def->propWeaponEnableIK )
    goto LABEL_22;
  v14 = DVARBOOL_execution_prop_ik_enabled;
  if ( !DVARBOOL_execution_prop_ik_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "execution_prop_ik_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    if ( outWeaponIKModels )
    {
      if ( !XAnimWeaponIKModelsContainer::AddXModel(outWeaponIKModels, WEAPON_HAND_DEFAULT, WeaponModels) )
      {
        WeaponName = BG_GetWeaponName(&ci->dobjHeldWeapon, output, 0x400u);
        LODWORD(isUsingCensorshipWorldModel) = 12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 339, ASSERT_TYPE_ASSERT, "(modelAdded)", "%s\n\tFailed to add IK target in execution prop xmodel because we reached the maximum number of %d for weapon %s", "modelAdded", isUsingCensorshipWorldModel, WeaponName) )
          __debugbreak();
      }
    }
  }
  else
  {
LABEL_22:
    outWeaponIKModels = NULL;
  }
  v16 = v22;
  if ( v22 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 345, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  DObjInitModel(WeaponModels, boneName, 1, 0, camoParams, &dobjModels[v22]);
  v17 = ++v22;
  if ( !v10 )
  {
    BG_AddWeaponAttachmentModels(p_dobjExecutionWeapon, WEAPON_HAND_DEFAULT, 0, 0, 1, 0, dobjModels, 0xFEu, &v22, outWeaponIKModels, camoParams);
    v17 = v22;
  }
  if ( v17 <= v16 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 354, ASSERT_TYPE_ASSERT, "(numModels > numModelsBeforeAdd)", (const char *)&queryFormat, "numModels > numModelsBeforeAdd") )
      __debugbreak();
    v17 = v22;
  }
  if ( v16 < (unsigned __int64)v17 )
  {
    v18 = v17 - (unsigned __int64)v16;
    v19 = &(*v24)[v16];
    while ( v18 )
    {
      *v19++ = CHAR_MODEL_WEAPON_EXECUTION;
      --v18;
    }
  }
  return v17;
}

/*
==============
CG_StaticMP_AttachStowedWeapon
==============
*/
__int64 CG_StaticMP_AttachStowedWeapon(DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, int *outWeaponModelIndex, CharacterModelType (*outModelTypes)[32], Weapon *stowedWeapon, bool weaponModelLoaded)
{
  const WeaponDef *v10; 
  XModel *StowedOffsetModel; 
  scr_string_t stowOffsetAttachTag; 
  const XModel *WeaponModels; 
  __int64 result; 
  unsigned __int16 i; 
  const dvar_t *v16; 
  DObjModel *v17; 
  bool ignoreCollision; 
  scr_string_t boneName; 
  scr_string_t stowTag; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  CharacterModelType *v24; 
  unsigned __int64 j; 
  unsigned __int16 v26; 
  DObjCamoParams *camoParams; 
  DObjCamoParams outLocalParams; 

  v26 = numModels;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 220, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 221, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !outWeaponModelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 222, ASSERT_TYPE_ASSERT, "(outWeaponModelIndex)", (const char *)&queryFormat, "outWeaponModelIndex") )
    __debugbreak();
  v10 = BG_WeaponDef(stowedWeapon, 0);
  camoParams = BG_Camo_GetWeaponDObjCamoParams(stowedWeapon, 0, &outLocalParams);
  StowedOffsetModel = CG_Weapons_GetStowedOffsetModel(v10);
  if ( StowedOffsetModel )
  {
    if ( v26 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 233, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
      __debugbreak();
    stowOffsetAttachTag = v10->stowOffsetAttachTag;
    if ( !stowOffsetAttachTag || stowOffsetAttachTag == scr_const.none )
      stowOffsetAttachTag = scr_const.tag_stowed_back;
    DObjInitModel(StowedOffsetModel, stowOffsetAttachTag, 1, 1, camoParams, &dobjModels[v26]);
    (*outModelTypes)[v26++] = CHAR_MODEL_STOW_OFFSET;
  }
  WeaponModels = BG_GetWeaponModels(WEAPON_HAND_DEFAULT, stowedWeapon, 0, !weaponModelLoaded, 0, 0, 0);
  if ( !WeaponModels )
    return v26;
  if ( BG_IsRiotShield(stowedWeapon, 0) )
  {
    result = v26;
    for ( i = 0; i < v26; ++i )
    {
      if ( BG_Weapons_IsRiotShieldModel(dobjModels[i].model) )
      {
        if ( v26 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 255, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
          __debugbreak();
        v16 = DVARBOOL_riotshield_fixstowedmodelinit;
        if ( !DVARBOOL_riotshield_fixstowedmodelinit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "riotshield_fixstowedmodelinit") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        v17 = &dobjModels[i];
        ignoreCollision = v17->ignoreCollision;
        boneName = v17->boneName;
        if ( v16->current.enabled )
          DObjInitModel(WeaponModels, boneName, ignoreCollision, 1, camoParams, &dobjModels[i]);
        else
          DObjInitModel(WeaponModels, boneName, ignoreCollision, 0, camoParams, &dobjModels[v26]);
      }
      result = v26;
    }
    return result;
  }
  if ( StowedOffsetModel && StowedOffsetModel->radius != 0.0 )
    return v26;
  stowTag = v10->stowTag;
  if ( !stowTag || stowTag == scr_const.none )
    stowTag = scr_const.tag_stowed_back;
  v21 = v26;
  if ( v26 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 276, ASSERT_TYPE_ASSERT, "(numModels < ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "numModels < DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  DObjInitModel(WeaponModels, stowTag, 1, 1, camoParams, &dobjModels[v26]);
  v22 = v26;
  *outWeaponModelIndex = v26;
  v23 = v22 + 1;
  v26 = v23;
  if ( weaponModelLoaded )
  {
    BG_AddWeaponAttachmentModels(stowedWeapon, WEAPON_HAND_DEFAULT, ci->dualWielding != 0, 0, 1, 1, dobjModels, 0xFEu, &v26, NULL, camoParams);
    v23 = v26;
  }
  if ( v23 <= v21 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 287, ASSERT_TYPE_ASSERT, "(numModels > numModelsBeforeAdd)", (const char *)&queryFormat, "numModels > numModelsBeforeAdd") )
      __debugbreak();
    v23 = v26;
  }
  if ( v21 < (unsigned __int64)v23 )
  {
    v24 = &(*outModelTypes)[v21];
    for ( j = v23 - (unsigned __int64)v21; j; --j )
      *v24++ = CHAR_MODEL_WEAPON_STOWED;
  }
  return v23;
}

/*
==============
CG_StaticMP_WeaponModelLoadStatusMaybeDirtyThisFrameVerification
==============
*/
void CG_StaticMP_WeaponModelLoadStatusMaybeDirtyThisFrameVerification(const CgStaticMP *cgstatic, const bool previousDObjLoadedStatus, const Weapon *previousDObjWeapon)
{
  const char *v6; 
  int v7; 
  const char *v8; 

  if ( !cgstatic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 167, ASSERT_TYPE_ASSERT, "(cgstatic)", (const char *)&queryFormat, "cgstatic") )
    __debugbreak();
  if ( previousDObjWeapon->weaponIdx )
  {
    if ( previousDObjLoadedStatus )
    {
      if ( CgStatic::IsWeaponWorldModelLoaded(&cgstatic->CgStatic, previousDObjWeapon) )
        return;
      v6 = "cgstatic->IsWeaponWorldModelLoaded( previousDObjWeapon )";
      v7 = 177;
      v8 = "(cgstatic->IsWeaponWorldModelLoaded( previousDObjWeapon ))";
    }
    else
    {
      if ( !CL_Streaming_IsWeaponWorldRequestLoaded(previousDObjWeapon) )
        return;
      v6 = "!CL_Streaming_IsWeaponWorldRequestLoaded( previousDObjWeapon )";
      v7 = 184;
      v8 = "(!CL_Streaming_IsWeaponWorldRequestLoaded( previousDObjWeapon ))";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
      __debugbreak();
  }
}

/*
==============
CgStaticMP::CreateDObj
==============
*/
DObj *CgStaticMP::CreateDObj(CgStaticMP *this, DObjModel *dobjModels, unsigned __int16 numModels, XAnimTree *tree, int handle, int otherClientNum, bool requiresIKPreCache)
{
  DObj *v10; 
  LocalClientNum_t m_localClientNum; 
  CgEntitySystem *EntitySystem; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v22; 
  __int64 entnum; 
  int v24[2]; 
  float v25; 
  float v26; 
  float v27; 

  v10 = Com_ClientDObjCreate(dobjModels, numModels, tree, handle, this->m_localClientNum, requiresIKPreCache, handle);
  if ( CG_Entity_ShouldCreatePhysicsOnInit(this->m_localClientNum, handle) )
    CG_Entity_CreatePhysics(this->m_localClientNum, handle, 1);
  if ( CG_Entity_ShouldCreateClothOnInit((const LocalClientNum_t)this->m_localClientNum, handle) )
    CG_Entity_CreateCloth((const LocalClientNum_t)this->m_localClientNum, handle);
  m_localClientNum = this->m_localClientNum;
  v25 = FLOAT_131072_0;
  v26 = FLOAT_131072_0;
  v27 = FLOAT_131072_0;
  EntitySystem = CgEntitySystem::GetEntitySystem(m_localClientNum);
  if ( (unsigned int)otherClientNum >= 0x800 )
  {
    LODWORD(entnum) = 2048;
    LODWORD(v22) = otherClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v22, entnum) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( otherClientNum > (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    v20 = 3i64 * otherClientNum + 389124;
    *((float *)&EntitySystem->__vftable + v20) = v25;
    *((float *)&EntitySystem->__vftable + v20 + 1) = v26;
    *((float *)&EntitySystem->m_localClientNum + v20) = v27;
  }
  else
  {
    v13 = s_entity_aab_X;
    v14 = s_entity_aab_Z;
    *(float *)v24 = v25;
    v15 = s_entity_aab_Y;
    if ( (LODWORD(v25) & 0x7F800000) == 2139095040 || (*(float *)v24 = v26, (LODWORD(v26) & 0x7F800000) == 2139095040) || (*(float *)v24 = v27, (LODWORD(v27) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v16 = (unsigned int *)&EntitySystem->m_entityOrigin[otherClientNum];
    v17 = LODWORD(v25) ^ (unsigned int)v16 ^ ~v13;
    v18 = LODWORD(v27) ^ (unsigned int)v16;
    v19 = v15 ^ v17 ^ LODWORD(v26) ^ (unsigned int)v16;
    *v16 = v17;
    v16[1] = v19;
    v16[2] = v14 ^ v19 ^ v18;
    memset(v24, 0, sizeof(v24));
  }
  DObjSetCamoMaterialOverride(v10, dobjModels, numModels);
  return v10;
}

/*
==============
CgStaticMP::GetAngles
==============
*/
void CgStaticMP::GetAngles(CgStaticMP *this, int entIndex, vec3_t *outAngles)
{
  centity_t *Entity; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 612, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  outAngles->v[0] = Entity->pose.angles.v[0];
  outAngles->v[1] = Entity->pose.angles.v[1];
  outAngles->v[2] = Entity->pose.angles.v[2];
}

/*
==============
CgStaticMP::GetAnimStatics
==============
*/
BgAnimStatic *CgStaticMP::GetAnimStatics(CgStaticMP *this)
{
  return &this->m_animData;
}

/*
==============
CgStaticMP::GetAnimStatics
==============
*/
BgAnimStatic *CgStaticMP::GetAnimStatics(CgStaticMP *this)
{
  return &this->m_animData;
}

/*
==============
CgStaticMP::GetAttachXModel
==============
*/
XModel *CgStaticMP::GetAttachXModel(CgStaticMP *this, const characterInfo_t *ci, const int attachModelIndex, const bool isReferenceModel)
{
  __int64 v4; 
  ClConfigStrings *ClConfigStrings; 
  const char *v9; 
  __int64 v10; 

  v4 = attachModelIndex;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned int)v4 >= 9 )
  {
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( attachModelIndex ) < (unsigned)( 9 )", "attachModelIndex doesn't index MAX_CLIENT_ATTACH_MODELS\n\t%i not in [0, %i)", v10, 9) )
      __debugbreak();
  }
  if ( !isReferenceModel )
    return R_RegisterModel(ci->attachModelNames[v4]);
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  if ( !ClConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 121, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  v9 = ClConfigStrings->GetModelString(ClConfigStrings, ci->attachModelIndex[v4]);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 124, ASSERT_TYPE_ASSERT, "(serverModelName)", (const char *)&queryFormat, "serverModelName") )
    __debugbreak();
  return R_RegisterModel(v9);
}

/*
==============
CgStaticMP::GetCharacterAngles
==============
*/
char CgStaticMP::GetCharacterAngles(CgStaticMP *this, const int entityIndex, vec3_t *outAngles)
{
  centity_t *Entity; 
  entityState_t *p_nextState; 
  const characterInfo_t *CharacterInfo; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityIndex);
  if ( (Entity->flags & 1) == 0 )
    return 0;
  p_nextState = &Entity->nextState;
  if ( !BG_IsCharacterEntity(&Entity->nextState) )
    return 0;
  CharacterInfo = CgStatic::GetCharacterInfo(this, p_nextState->number);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 627, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !CharacterInfo->infoValid )
    return 0;
  outAngles->v[0] = CharacterInfo->playerAngles.v[0];
  outAngles->v[1] = CharacterInfo->playerAngles.v[1];
  outAngles->v[2] = CharacterInfo->playerAngles.v[2];
  return 1;
}

/*
==============
CgStaticMP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *CgStaticMP::GetCharacterAnimState(CgStaticMP *this, const int entNum)
{
  characterInfo_t *CharacterInfo; 

  if ( !CgStaticMP::HasCharacterInfo(this, entNum) )
    return 0i64;
  CharacterInfo = CgStatic::GetCharacterInfo(this, entNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 82, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( CharacterInfo->usingAnimState )
    return &CharacterInfo->14780;
  else
    return 0i64;
}

/*
==============
CgStaticMP::GetCharacterAnimState
==============
*/
$08CBA61D1816DE37C73E05DB6D8FE339 *CgStaticMP::GetCharacterAnimState(CgStaticMP *this, const int entNum)
{
  const characterInfo_t *CharacterInfo; 

  if ( !CgStaticMP::HasCharacterInfo(this, entNum) )
    return 0i64;
  CharacterInfo = CgStatic::GetCharacterInfo(this, entNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 96, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( CharacterInfo->usingAnimState )
    return &CharacterInfo->14780;
  else
    return 0i64;
}

/*
==============
CgStaticMP::GetClientInfo
==============
*/
clientInfo_t *CgStaticMP::GetClientInfo(CgStaticMP *this, const int clientIndex)
{
  __int64 v2; 
  int v6; 

  v2 = clientIndex;
  if ( (unsigned int)clientIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 56, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 200 )", "clientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", clientIndex, v6) )
      __debugbreak();
  }
  return &this->m_clientInfo[v2];
}

/*
==============
CgStaticMP::GetClientInfo
==============
*/
clientInfo_t *CgStaticMP::GetClientInfo(CgStaticMP *this, const int clientIndex)
{
  __int64 v2; 
  int v6; 

  v2 = clientIndex;
  if ( (unsigned int)clientIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 63, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 200 )", "clientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", clientIndex, v6) )
      __debugbreak();
  }
  return &this->m_clientInfo[v2];
}

/*
==============
CgStaticMP::GetPlayerWorldIkStatus
==============
*/
void CgStaticMP::GetPlayerWorldIkStatus(CgStaticMP *this, const int entNum, bool (*outWorldIKEnabled)[2])
{
  centity_t *Entity; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v8; 
  unsigned int v9; 
  const DObj *v10; 
  characterInfo_t *CharacterInfo; 
  float *control; 
  bool v13; 
  bool v14; 
  bool v15; 
  __int64 v16; 
  __int64 v17; 
  CEntPlayerInfo info; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 800, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  BgStatic::GetPlayerWorldIkStatus(this, entNum, outWorldIKEnabled);
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  if ( (Entity->flags & 1) != 0 && BG_IsPlayerOrAgentEntity(&Entity->nextState) )
  {
    m_localClientNum = this->m_localClientNum;
    if ( (unsigned int)entNum > 0x9E4 )
    {
      LODWORD(v17) = entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v17) )
        __debugbreak();
    }
    if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v8 = entNum + 2533 * m_localClientNum;
    if ( v8 >= 0x13CA )
    {
      LODWORD(v17) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v17) )
        __debugbreak();
    }
    v9 = clientObjMap[v8];
    if ( v9 )
    {
      if ( v9 >= (unsigned int)s_objCount )
      {
        LODWORD(v17) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v17) )
          __debugbreak();
      }
      v10 = (const DObj *)s_objBuf[v9];
      if ( v10 )
      {
        CharacterInfo = CgStatic::GetCharacterInfo(this, entNum);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 822, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        BG_Player_SetPlayerInfo(v10, &CharacterInfo->control, &info);
        control = (float *)info.control;
        v13 = info.IKHandBone[0] != 0xFE && (info.control->hand_ik_local_pos[0].v[0] != 0.0 || info.control->hand_ik_local_pos[0].v[1] != 0.0 || info.control->hand_ik_local_pos[0].v[2] != 0.0);
        v14 = info.IKHandBone[1] == 0xFE;
        (*outWorldIKEnabled)[0] = v13;
        v15 = !v14 && (control[21] != 0.0 || control[22] != 0.0 || control[23] != 0.0);
        (*outWorldIKEnabled)[1] = v15;
      }
    }
  }
}

/*
==============
CgStaticMP::GetXModel
==============
*/
XModel *CgStaticMP::GetXModel(CgStaticMP *this, const char *name)
{
  return R_RegisterModel(name);
}

/*
==============
CgStaticMP::HasCharacterInfo
==============
*/
__int64 CgStaticMP::HasCharacterInfo(CgStaticMP *this, const int entNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_static_mp.cpp", 71, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return ((__int64 (__fastcall *)(cg_t *, _QWORD))LocalClientGlobals->HasCharacterInfo)(LocalClientGlobals, (unsigned int)entNum);
}

/*
==============
CgStaticMP::SafeDObjFree
==============
*/
void CgStaticMP::SafeDObjFree(CgStaticMP *this, int handle)
{
  CG_Entity_DestroyCloth((const LocalClientNum_t)this->m_localClientNum, handle);
  Com_SafeClientDObjFree(handle, this->m_localClientNum);
}

/*
==============
CgStaticMP::WeaponModelLoadStatusMaybeDirtyThisFrame
==============
*/
bool CgStaticMP::WeaponModelLoadStatusMaybeDirtyThisFrame(CgStaticMP *this)
{
  bool result; 

  if ( CL_Streaming_AnyWorldRequestsLoadedThisFrame(STREAM_SYNC_WORLD_TYPE_WEAPON) )
    return 1;
  result = CL_TransientsCommonMP_AnyUnloadsProcessed();
  if ( result )
    return 1;
  return result;
}

/*
==============
CgStaticMP::WeaponModelLoadStatusMaybeDirtyThisFrameVerification
==============
*/
void CgStaticMP::WeaponModelLoadStatusMaybeDirtyThisFrameVerification(CgStaticMP *this, const characterInfo_t *ci)
{
  if ( !CL_Streaming_AnyWorldRequestsLoadedThisFrame(STREAM_SYNC_WORLD_TYPE_WEAPON) && !CL_TransientsCommonMP_AnyUnloadsProcessed() )
  {
    CG_StaticMP_WeaponModelLoadStatusMaybeDirtyThisFrameVerification(this, ci->dobjHeldWeaponLoaded, &ci->dobjHeldWeapon);
    CG_StaticMP_WeaponModelLoadStatusMaybeDirtyThisFrameVerification(this, ci->dobjStowedWeaponLoaded, &ci->dobjStowedWeapon);
    CG_StaticMP_WeaponModelLoadStatusMaybeDirtyThisFrameVerification(this, ci->dobjThrownWeaponLoaded, &ci->dobjThrownWeapon);
    CG_StaticMP_WeaponModelLoadStatusMaybeDirtyThisFrameVerification(this, ci->dobjExecutionWeaponLoaded, &ci->dobjExecutionWeapon);
    CG_StaticMP_WeaponModelLoadStatusMaybeDirtyThisFrameVerification(this, ci->dobjAccessoryWeaponLoaded, &ci->dobjAccessoryWeapon);
  }
}

