/*
==============
BgStatic::AttachWeaponDefaultModelsMinimal
==============
*/

unsigned __int16 __fastcall BgStatic::AttachWeaponDefaultModelsMinimal(BgStatic *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, unsigned int *inOutFirstWeaponModelIdx, unsigned int *inOutFirstWeaponBoneIdx, int *heldWeaponModelIdx1, int *heldWeaponModelIdx2, int *stowedWeaponModelIdx, CharacterModelType (*outModelTypes)[32])
{
  return ?AttachWeaponDefaultModelsMinimal@BgStatic@@QEBAGPEAUDObjModel@@GPEBUcharacterInfo_t@@PEAI2PEAH33AEAY0CA@W4CharacterModelType@@@Z(this, dobjModels, numModels, ci, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, outModelTypes);
}

/*
==============
BgStatic::FixUpHidePartBits
==============
*/

void __fastcall BgStatic::FixUpHidePartBits(BgStatic *this, const int entNum, const DObjModel (*refDobjModels)[32], const CharacterModelType (*refModelTypes)[32], const int numRefModels, const DObjModel (*actualDobjModels)[32], const CharacterModelType (*actualModelTypes)[32], const int numActualModels, const DObjPartBits *hidePartBits, DObjPartBits *outFixedUpHidePartBits)
{
  ?FixUpHidePartBits@BgStatic@@QEBAXHAEAY0CA@$$CBUDObjModel@@AEAY0CA@$$CBW4CharacterModelType@@H01HPEIBUDObjPartBits@@PEIAU4@@Z(this, entNum, refDobjModels, refModelTypes, numRefModels, actualDobjModels, actualModelTypes, numActualModels, hidePartBits, outFixedUpHidePartBits);
}

/*
==============
BgStatic::GetPlayerWorldIkStatus
==============
*/

void __fastcall BgStatic::GetPlayerWorldIkStatus(BgStatic *this, const int entNum, bool (*outWorldIKEnabled)[2])
{
  ?GetPlayerWorldIkStatus@BgStatic@@UEAAXHAEAY01_N@Z(this, entNum, outWorldIKEnabled);
}

/*
==============
BgStatic::ShouldTransferHidePartBitFromModelType
==============
*/

bool __fastcall BgStatic::ShouldTransferHidePartBitFromModelType(const CharacterModelType characterModelType)
{
  return ?ShouldTransferHidePartBitFromModelType@BgStatic@@CA_NW4CharacterModelType@@@Z(characterModelType);
}

/*
==============
BgStatic::BuildCharacterModelList
==============
*/

bool __fastcall BgStatic::BuildCharacterModelList(BgStatic *this, const characterInfo_t *ci, const entityState_t *es, const int attachIgnoreCollision, const bool generateReferenceModels, DObjModel (*outDobjModels)[32], CharacterModelType (*outModelTypes)[32], BgCharacterModelListBuildResults *outModelListBuildResults)
{
  return ?BuildCharacterModelList@BgStatic@@QEBA_NPEBUcharacterInfo_t@@PEBUentityState_t@@H_NAEAY0CA@UDObjModel@@AEAY0CA@W4CharacterModelType@@AEAUBgCharacterModelListBuildResults@@@Z(this, ci, es, attachIgnoreCollision, generateReferenceModels, outDobjModels, outModelTypes, outModelListBuildResults);
}

/*
==============
BgStatic::GetBoneNameFromModelList
==============
*/

bool __fastcall BgStatic::GetBoneNameFromModelList(const DObjModel (*dobjModels)[32], const int numModels, const int boneIndex, int *inOutboneCountSoFar, int *inOutModelIndex, scr_string_t *outBoneName)
{
  return ?GetBoneNameFromModelList@BgStatic@@CA_NAEAY0CA@$$CBUDObjModel@@HHAEAH1AEAW4scr_string_t@@@Z(dobjModels, numModels, boneIndex, inOutboneCountSoFar, inOutModelIndex, outBoneName);
}

/*
==============
BgStatic::AttachWeaponDefaultModelsMinimal
==============
*/
unsigned __int16 BgStatic::AttachWeaponDefaultModelsMinimal(BgStatic *this, DObjModel *dobjModels, unsigned __int16 numModels, const characterInfo_t *ci, unsigned int *inOutFirstWeaponModelIdx, unsigned int *inOutFirstWeaponBoneIdx, int *heldWeaponModelIdx1, int *heldWeaponModelIdx2, int *stowedWeaponModelIdx, CharacterModelType (*outModelTypes)[32])
{
  XModel *v14; 
  bool v15; 
  bool v16; 
  XModel *v17; 
  XModel *v18; 
  XModel *v20; 
  unsigned __int16 v21; 
  XModel *v22; 
  bool IsUsingWorldIKTargets; 
  BgStatic_vtbl *v24; 
  XModel *v25; 
  XModel *v26; 
  XModel *v27; 
  __int64 isServer; 
  XModel *ikTargetModelRight; 
  XAnimWeaponIKModelsContainer outWeaponIKModels; 

  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 139, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 140, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !inOutFirstWeaponModelIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 141, ASSERT_TYPE_ASSERT, "(inOutFirstWeaponModelIdx)", (const char *)&queryFormat, "inOutFirstWeaponModelIdx") )
    __debugbreak();
  if ( !inOutFirstWeaponBoneIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 142, ASSERT_TYPE_ASSERT, "(inOutFirstWeaponBoneIdx)", (const char *)&queryFormat, "inOutFirstWeaponBoneIdx") )
    __debugbreak();
  if ( !heldWeaponModelIdx1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 143, ASSERT_TYPE_ASSERT, "(heldWeaponModelIdx1)", (const char *)&queryFormat, "heldWeaponModelIdx1") )
    __debugbreak();
  if ( !heldWeaponModelIdx2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 144, ASSERT_TYPE_ASSERT, "(heldWeaponModelIdx2)", (const char *)&queryFormat, "heldWeaponModelIdx2") )
    __debugbreak();
  if ( !stowedWeaponModelIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 145, ASSERT_TYPE_ASSERT, "(stowedWeaponModelIdx)", (const char *)&queryFormat, "stowedWeaponModelIdx") )
    __debugbreak();
  v14 = NULL;
  if ( numModels > 0xFEu )
  {
    LODWORD(isServer) = numModels;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 146, ASSERT_TYPE_ASSERT, "( 0 ) <= ( numModels ) && ( numModels ) <= ( ( DOBJ_MAX_PARTS ) )", "numModels not in [0, DOBJ_MAX_SUBMODELS]\n\t%i not in [%i, %i]", isServer, 0i64, 254) )
      __debugbreak();
  }
  XAnimWeaponIKModelsContainer::XAnimWeaponIKModelsContainer(&outWeaponIKModels);
  if ( ci->dobjHeldWeapon.weaponIdx )
    numModels = BG_Weapons_AttachHeldWeapon(dobjModels, numModels, ci, heldWeaponModelIdx1, heldWeaponModelIdx2, 1, &outWeaponIKModels, outModelTypes);
  if ( !BG_IsPlayingVehicleOccupancyAnims(ci) )
  {
    if ( (ci->carryObjectFlags & 1) != 0 && ci->carryObjectIKEnabled )
    {
      v20 = this->GetRightHandIKTargetModel(this);
      v21 = BG_Weapons_AttachHeldWeaponIKTargets(dobjModels, numModels, ci, NULL, v20, 0, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, &outWeaponIKModels, outModelTypes);
      v22 = this->GetLeftHandIKTargetModel(this);
    }
    else
    {
      IsUsingWorldIKTargets = BG_IsUsingWorldIKTargets(ci);
      v24 = this->__vftable;
      if ( !IsUsingWorldIKTargets )
      {
        v26 = v24->GetRightHandIKTargetModel(this);
        v27 = this->GetLeftHandIKTargetModel(this);
        return BG_Weapons_AttachHeldWeaponIKTargets(dobjModels, numModels, ci, v27, v26, 1, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, &outWeaponIKModels, outModelTypes);
      }
      v25 = v24->GetLeftHandIKTargetModel(this);
      v21 = BG_Weapons_AttachWorldIKTargets(dobjModels, numModels, ci, v25, 0, outModelTypes);
      v22 = this->GetRightHandIKTargetModel(this);
    }
    return BG_Weapons_AttachWorldIKTargets(dobjModels, v21, ci, v22, 0, outModelTypes);
  }
  v15 = ci->vehicleAnimation.hasSeatIK[1];
  v16 = ci->vehicleAnimation.hasSeatIK[0];
  if ( !v15 )
  {
    ikTargetModelRight = this->GetRightHandIKTargetModel(this);
LABEL_32:
    if ( !v16 )
      v14 = this->GetLeftHandIKTargetModel(this);
    numModels = BG_Weapons_AttachHeldWeaponIKTargets(dobjModels, numModels, ci, v14, ikTargetModelRight, 1, inOutFirstWeaponModelIdx, inOutFirstWeaponBoneIdx, heldWeaponModelIdx1, heldWeaponModelIdx2, stowedWeaponModelIdx, &outWeaponIKModels, outModelTypes);
    if ( !v16 )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( !v16 )
  {
    ikTargetModelRight = NULL;
    goto LABEL_32;
  }
LABEL_35:
  v17 = this->GetLeftHandIKTargetModel(this);
  numModels = BG_Weapons_AttachWorldIKTargets(dobjModels, numModels, ci, v17, 0, outModelTypes);
LABEL_36:
  if ( !v15 )
    return numModels;
  v18 = this->GetRightHandIKTargetModel(this);
  return BG_Weapons_AttachWorldIKTargets(dobjModels, numModels, ci, v18, 0, outModelTypes);
}

/*
==============
BgStatic::BuildCharacterModelList
==============
*/
char BgStatic::BuildCharacterModelList(BgStatic *this, const characterInfo_t *ci, const entityState_t *es, const int attachIgnoreCollision, const bool generateReferenceModels, DObjModel (*outDobjModels)[32], CharacterModelType (*outModelTypes)[32], BgCharacterModelListBuildResults *outModelListBuildResults)
{
  const characterInfo_t *v9; 
  unsigned __int16 v12; 
  const XModel *model; 
  unsigned int numBones; 
  int v15; 
  unsigned int v16; 
  const dvar_t *v18; 
  int v19; 
  bool enabled; 
  char *v21; 
  int v22; 
  const char *v23; 
  int v24; 
  int v25; 
  int *p_heldWeapon2Idx; 
  unsigned int v27; 
  int *p_heldWeapon1Idx; 
  __int64 numModels_low; 
  unsigned __int16 v30; 
  __int64 numberOfModelsBeforeWeapons; 
  unsigned int v32; 
  DObjModel *v33; 
  const XModel *v34; 
  int v35; 
  DObjModel *v36; 
  scr_string_t String; 
  const XModel *v38; 
  const XModel *v39; 
  int v40; 
  unsigned __int16 v41; 
  int numModels; 
  int v43; 
  unsigned int v44; 
  int v45; 
  unsigned int v46; 
  DObjModel *v47; 
  scr_string_t v48; 
  const XModel *v49; 
  int v50; 
  const XModel *v51; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  BOOL outDObjModel; 
  DObjModel *outDObjModela; 
  DObjModel *outDObjModelb; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  int v62; 
  int v63; 
  signed int v64; 
  unsigned int v65; 
  unsigned int outBonesAdded; 
  unsigned int v67[5]; 
  bool outModelListBuildResultsa; 

  v9 = ci;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 214, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 215, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  LOBYTE(outDObjModel) = generateReferenceModels;
  *(_QWORD *)&outModelListBuildResults->numModels = 0i64;
  *(_QWORD *)&outModelListBuildResults->heldWeapon2Idx = 0i64;
  *(_QWORD *)&outModelListBuildResults->firstWeaponPartIndex = 0i64;
  outModelListBuildResults->numberOfBonesBeforeWeapons = 0;
  v12 = this->BodyModel(this, (DObjModel *)outDobjModels, 0, es, v9, outDObjModel);
  outModelListBuildResults->numModels = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 219, ASSERT_TYPE_ASSERT, "(outModelListBuildResults.numModels > 0)", (const char *)&queryFormat, "outModelListBuildResults.numModels > 0") )
    __debugbreak();
  if ( !(*outDobjModels)[0].model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 220, ASSERT_TYPE_ASSERT, "(outDobjModels[0].model)", (const char *)&queryFormat, "outDobjModels[0].model") )
    __debugbreak();
  model = (*outDobjModels)[0].model;
  if ( !(*outDobjModels)[0].model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numBones = model->numBones;
  v15 = 1;
  v16 = numBones;
  v65 = numBones;
  (*outModelTypes)[0] = CHAR_MODEL_BODY;
  if ( numBones > 0xFE )
  {
    LODWORD(fmt) = es->number;
    Com_PrintError(16, "BgStatic::BuildCharacterModelList: Too many bones for base model (%s, %d) for entity %d.\n", v9->model, numBones, fmt);
    return 0;
  }
  v18 = DVARBOOL_bg_attachHeadAsLastModel;
  v19 = 0;
  v62 = 0;
  v63 = 0;
  if ( !DVARBOOL_bg_attachHeadAsLastModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_attachHeadAsLastModel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  enabled = v18->current.enabled;
  v21 = v9->attachModelNames[0];
  v22 = -1;
  outModelListBuildResultsa = enabled;
  v64 = -1;
  v23 = v9->attachModelNames[0];
  do
  {
    if ( !*v21 )
      goto LABEL_29;
    if ( enabled && BG_Customization_IsCustomizationModel(CUSTOMIZATION_TYPE_HEAD, v23) )
    {
      if ( v22 >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 253, ASSERT_TYPE_ASSERT, "(headAttachModelIndex < 0)", "%s\n\tBgStatic::BuildCharacterModelList: More than one head model is attached. First head: %s Second head: %s", "headAttachModelIndex < 0", v9->attachModelNames[(__int64)v22], v23) )
        __debugbreak();
      enabled = outModelListBuildResultsa;
      v22 = v19;
      v64 = v19;
LABEL_29:
      v24 = v62;
      v25 = v63;
      goto LABEL_30;
    }
    if ( outModelListBuildResults->numModels >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 261, ASSERT_TYPE_ASSERT, "(outModelListBuildResults.numModels < ( 32 ))", (const char *)&queryFormat, "outModelListBuildResults.numModels < DOBJ_MAX_CHARACTER_SUBMODELS") )
      __debugbreak();
    v36 = &(*outDobjModels)[outModelListBuildResults->numModels];
    String = SL_FindString(v23 + 576);
    v38 = this->GetAttachXModel(this, ci, (unsigned int)v19, generateReferenceModels);
    DObjInitModel(v38, String, (v15 & attachIgnoreCollision) != 0, 0, NULL, v36);
    (*outModelTypes)[outModelListBuildResults->numModels] = v19 + 2;
    v39 = (*outDobjModels)[outModelListBuildResults->numModels].model;
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    v40 = v39->numBones;
    v16 += v40;
    v24 = v40 + v62;
    ++outModelListBuildResults->numModels;
    v22 = v64;
    v25 = v63 + 1;
    v9 = ci;
    enabled = outModelListBuildResultsa;
    ++v63;
    v62 = v24;
LABEL_30:
    ++v19;
    v15 = __ROL4__(v15, 1);
    v23 += 64;
    v21 += 64;
  }
  while ( v19 < 9 );
  p_heldWeapon2Idx = &outModelListBuildResults->heldWeapon2Idx;
  v27 = v24 + v65;
  outModelListBuildResults->stowedWeaponIdx = -1;
  p_heldWeapon1Idx = &outModelListBuildResults->heldWeapon1Idx;
  numModels_low = LOWORD(outModelListBuildResults->numModels);
  outModelListBuildResults->numberOfBonesBeforeWeapons = v27;
  outModelListBuildResults->numberOfModelsBeforeWeapons = v25 + 1;
  outModelListBuildResults->heldWeapon1Idx = -1;
  outModelListBuildResults->heldWeapon2Idx = -1;
  LOBYTE(fmt) = generateReferenceModels;
  v30 = this->AttachWeapon(this, (DObjModel *)outDobjModels, numModels_low, v9, (const bool)fmt, &outModelListBuildResults->numberOfModelsBeforeWeapons, &outModelListBuildResults->numberOfBonesBeforeWeapons, &outModelListBuildResults->heldWeapon1Idx, &outModelListBuildResults->heldWeapon2Idx, &outModelListBuildResults->stowedWeaponIdx, outModelTypes);
  numberOfModelsBeforeWeapons = (int)outModelListBuildResults->numberOfModelsBeforeWeapons;
  v32 = 0;
  outModelListBuildResults->numModels = v30;
  if ( (int)numberOfModelsBeforeWeapons < v30 )
  {
    v33 = &(*outDobjModels)[numberOfModelsBeforeWeapons];
    while ( 1 )
    {
      v34 = v33->model;
      if ( !v33->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      v35 = v34->numBones;
      if ( v35 + v16 > 0xFE )
        break;
      v32 += v35;
      LODWORD(numberOfModelsBeforeWeapons) = numberOfModelsBeforeWeapons + 1;
      ++v33;
      v16 += v35;
      if ( (int)numberOfModelsBeforeWeapons >= outModelListBuildResults->numModels )
        goto LABEL_52;
    }
    LODWORD(v61) = 254;
    LODWORD(v60) = v34->numBones;
    LODWORD(v59) = v32;
    LODWORD(v58) = v62;
    LODWORD(outDObjModela) = v65;
    LODWORD(fmta) = es->number;
    Com_PrintError(16, "BgStatic::BuildCharacterModelList: Too many bones for addon model (%d / %d) for entity %d. F %d + A %d + i %d + c %d > %d\n", (unsigned int)numberOfModelsBeforeWeapons, (unsigned int)outModelListBuildResults->numModels, fmta, outDObjModela, v58, v59, v60, v61);
    outModelListBuildResults->numModels = numberOfModelsBeforeWeapons;
    if ( *p_heldWeapon1Idx >= (int)numberOfModelsBeforeWeapons )
      *p_heldWeapon1Idx = -1;
    if ( *p_heldWeapon2Idx >= (int)numberOfModelsBeforeWeapons )
      *p_heldWeapon2Idx = -1;
    if ( outModelListBuildResults->stowedWeaponIdx >= (int)numberOfModelsBeforeWeapons )
      outModelListBuildResults->stowedWeaponIdx = -1;
LABEL_52:
    v9 = ci;
  }
  outModelListBuildResults->firstWeaponPartIndex = truncate_cast<unsigned short,unsigned int>(outModelListBuildResults->numberOfBonesBeforeWeapons);
  v41 = truncate_cast<unsigned short,unsigned int>(v32);
  numModels = outModelListBuildResults->numModels;
  outModelListBuildResults->weaponBoneCount = v41;
  v43 = BG_AddCarryObjectModel(v9, (DObjModel *)outDobjModels, numModels, v16, &outBonesAdded, outModelTypes);
  v44 = outBonesAdded + v16;
  outModelListBuildResults->numModels = v43;
  v45 = BG_AddParachuteModel(v9, (DObjModel *)outDobjModels, v43, v44, v67, outModelTypes);
  v46 = v67[0] + v44;
  outModelListBuildResults->numModels = v45;
  if ( outModelListBuildResultsa && v64 >= 0 )
  {
    if ( v45 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 328, ASSERT_TYPE_ASSERT, "(outModelListBuildResults.numModels < ( 32 ))", (const char *)&queryFormat, "outModelListBuildResults.numModels < DOBJ_MAX_CHARACTER_SUBMODELS") )
      __debugbreak();
    v47 = &(*outDobjModels)[outModelListBuildResults->numModels];
    v48 = SL_FindString(ci->attachTagNames[(__int64)v64]);
    v49 = this->GetAttachXModel(this, ci, (unsigned int)v64, generateReferenceModels);
    v50 = attachIgnoreCollision;
    DObjInitModel(v49, v48, _bittest(&v50, v64), 0, NULL, v47);
    (*outModelTypes)[outModelListBuildResults->numModels] = v64 + 2;
    v51 = (*outDobjModels)[outModelListBuildResults->numModels].model;
    if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( v51->numBones + v46 <= 0xFE )
    {
      ++outModelListBuildResults->numModels;
    }
    else
    {
      LODWORD(v61) = 254;
      LODWORD(v60) = v51->numBones;
      LODWORD(v59) = v32;
      LODWORD(v58) = v62;
      LODWORD(outDObjModelb) = v65;
      LODWORD(fmtb) = es->number;
      Com_PrintError(16, "BgStatic::BuildCharacterModelList: Too many bones for head model (%d / %d) for entity %d. F %d + A %d + i %d + h %d > %d\n", (unsigned int)v64, (unsigned int)outModelListBuildResults->numModels, fmtb, outDObjModelb, v58, v59, v60, v61);
    }
  }
  return 1;
}

/*
==============
BgStatic::FixUpHidePartBits
==============
*/
void BgStatic::FixUpHidePartBits(BgStatic *this, const int entNum, const DObjModel (*refDobjModels)[32], const CharacterModelType (*refModelTypes)[32], const int numRefModels, const DObjModel (*actualDobjModels)[32], const CharacterModelType (*actualModelTypes)[32], const int numActualModels, const DObjPartBits *hidePartBits, DObjPartBits *outFixedUpHidePartBits)
{
  const DObjPartBits *v11; 
  const DObjModel (*v12)[32]; 
  unsigned int v14; 
  unsigned int v17; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  CharacterModelType v23; 
  int v24; 
  __int64 v25; 
  const DObjModel (*v26)[32]; 
  const XModel *model; 
  const char **v28; 
  scr_string_t *outBoneName; 
  __int64 v30; 
  unsigned __int8 index[4]; 
  int inOutModelIndex; 
  scr_string_t name; 
  int v34; 
  int inOutboneCountSoFar; 
  unsigned int v36; 
  __int128 v37; 

  v11 = hidePartBits;
  v12 = refDobjModels;
  if ( !hidePartBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 75, ASSERT_TYPE_ASSERT, "(hidePartBits)", (const char *)&queryFormat, "hidePartBits") )
    __debugbreak();
  _RSI = outFixedUpHidePartBits;
  if ( !outFixedUpHidePartBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 76, ASSERT_TYPE_ASSERT, "(outFixedUpHidePartBits)", (const char *)&queryFormat, "outFixedUpHidePartBits") )
    __debugbreak();
  v14 = 0;
  v37 = _XMM6;
  if ( numRefModels > 0 )
  {
    v17 = 0;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      *(_OWORD *)_RSI->array = _XMM6;
      _RSI = (DObjPartBits *)((char *)_RSI + 16);
      ++v17;
    }
    while ( v17 < 2 );
    v19 = hidePartBits->array[0];
    inOutboneCountSoFar = 0;
    inOutModelIndex = 0;
    LODWORD(v20) = 0;
    name = 0;
    v34 = 0;
    while ( v19 )
    {
LABEL_19:
      v21 = __lzcnt(v19);
      v22 = v21 + 32 * v20;
      if ( v21 >= 0x20 )
      {
        LODWORD(v30) = 32;
        LODWORD(outBoneName) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", outBoneName, v30) )
          __debugbreak();
      }
      if ( (v19 & (0x80000000 >> v21)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v19 &= ~(0x80000000 >> v21);
      v36 = v19;
      if ( BgStatic::GetBoneNameFromModelList(v12, numRefModels, v22, &inOutboneCountSoFar, &inOutModelIndex, &name) )
      {
        v23 = (*refModelTypes)[inOutModelIndex];
        if ( (unsigned int)v23 >= CHAR_MODEL_COUNT )
        {
          LODWORD(v30) = 21;
          LODWORD(outBoneName) = (*refModelTypes)[inOutModelIndex];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( foundModelType ) < (unsigned)( CHAR_MODEL_COUNT )", "foundModelType doesn't index CHAR_MODEL_COUNT\n\t%i not in [0, %i)", outBoneName, v30) )
            __debugbreak();
        }
        if ( v23 == CHAR_MODEL_BODY || (unsigned int)(v23 - 18) <= 1 || (unsigned int)(v23 - 2) <= 8 )
        {
          v24 = 0;
          v25 = 0i64;
          if ( numActualModels > 0 )
          {
            v26 = actualDobjModels;
            do
            {
              model = (*v26)[0].model;
              if ( !(*v26)[0].model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 112, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              if ( v23 == (*actualModelTypes)[v25] )
              {
                index[0] = -2;
                if ( XModelGetBoneIndex(model, name, 0, index) )
                  bitarray_base<bitarray<256>>::setBit(outFixedUpHidePartBits, v24 + index[0]);
              }
              if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              ++v25;
              v24 += model->numBones;
              v26 = (const DObjModel (*)[32])((char *)v26 + 80);
            }
            while ( v25 < numActualModels );
            LODWORD(v20) = v34;
            v19 = v36;
          }
          v11 = hidePartBits;
        }
        v12 = refDobjModels;
      }
      else
      {
        v28 = (const char **)(*v12)[0].model;
        if ( !(*v12)[0].model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        Com_PrintWarning(1, "Cannot find the bone supplied in the replicated hide part bits for player/agent %d at bone index %u. Potential reason is the code mismatch between CgStaticMP::BuildReferenceCharacterModels and BG_UpdateCharacterDObj. First reference model: %s\n", (unsigned int)entNum, v22, *v28);
      }
    }
    while ( 1 )
    {
      v20 = (unsigned int)(v20 + 1);
      v34 = v20;
      if ( (unsigned int)v20 >= 8 )
        break;
      v19 = v11->array[v20];
      if ( v19 )
        goto LABEL_19;
    }
  }
  else
  {
    _R14 = (char *)hidePartBits - (char *)outFixedUpHidePartBits;
    do
    {
      __asm { vlddqu  xmm6, xmmword ptr [r14+rsi] }
      *(_OWORD *)_RSI->array = _XMM6;
      _RSI = (DObjPartBits *)((char *)_RSI + 16);
      ++v14;
    }
    while ( v14 < 2 );
  }
}

/*
==============
BgStatic::GetBoneNameFromModelList
==============
*/
bool BgStatic::GetBoneNameFromModelList(const DObjModel (*dobjModels)[32], const int numModels, const int boneIndex, int *inOutboneCountSoFar, int *inOutModelIndex, scr_string_t *outBoneName)
{
  __int64 v10; 
  const DObjModel *i; 
  const XModel *model; 
  unsigned int numBones; 
  int v14; 
  bool result; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  if ( numModels <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 14, ASSERT_TYPE_ASSERT, "(numModels > 0)", (const char *)&queryFormat, "numModels > 0") )
    __debugbreak();
  if ( *inOutModelIndex >= (unsigned int)numModels )
  {
    LODWORD(v17) = *inOutModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 15, ASSERT_TYPE_ASSERT, "(unsigned)( inOutModelIndex ) < (unsigned)( numModels )", "inOutModelIndex doesn't index numModels\n\t%i not in [0, %i)", v17, numModels) )
      __debugbreak();
  }
  *outBoneName = 0;
  v10 = *inOutModelIndex;
  if ( (int)v10 >= numModels )
    return 0;
  for ( i = &(*dobjModels)[v10]; ; ++i )
  {
    *inOutModelIndex = v10;
    model = i->model;
    if ( !i->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    numBones = model->numBones;
    v14 = *inOutboneCountSoFar + numBones;
    if ( boneIndex >= *inOutboneCountSoFar && boneIndex < v14 )
      break;
    LODWORD(v10) = v10 + 1;
    *inOutboneCountSoFar = v14;
    if ( (int)v10 >= numModels )
      return 0;
  }
  v16 = (unsigned int)(boneIndex - *inOutboneCountSoFar);
  if ( (unsigned int)v16 >= numBones )
  {
    LODWORD(v18) = model->numBones;
    LODWORD(v17) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( localBoneIndex ) < (unsigned)( modelBoneCount )", "localBoneIndex doesn't index modelBoneCount\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (unsigned int)v16 >= model->numBones )
  {
    LODWORD(v18) = model->numBones;
    LODWORD(v17) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( model->numBones )", "boneIndex doesn't index model->numBones\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( !model->boneNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 174, ASSERT_TYPE_ASSERT, "(model->boneNames)", (const char *)&queryFormat, "model->boneNames") )
    __debugbreak();
  result = 1;
  *outBoneName = model->boneNames[v16];
  return result;
}

/*
==============
BgStatic::GetPlayerWorldIkStatus
==============
*/
void BgStatic::GetPlayerWorldIkStatus(BgStatic *this, const int entNum, bool (*outWorldIKEnabled)[2])
{
  *(_WORD *)outWorldIKEnabled = 0;
}

/*
==============
BgStatic::ShouldTransferHidePartBitFromModelType
==============
*/
bool BgStatic::ShouldTransferHidePartBitFromModelType(const CharacterModelType characterModelType)
{
  return characterModelType == CHAR_MODEL_BODY || (unsigned int)(characterModelType - 18) <= 1 || (unsigned int)(characterModelType - 2) <= 8;
}

