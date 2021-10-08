/*
==============
CG_XCompositeModel_GetDObj
==============
*/

DObj *__fastcall CG_XCompositeModel_GetDObj(const XCompositeModelDef *compositeModel, const LocalClientNum_t localClientNum, const centity_t *cent, bool *createdNew_optionalOut)
{
  return ?CG_XCompositeModel_GetDObj@@YAPEAUDObj@@PEBUXCompositeModelDef@@W4LocalClientNum_t@@PEBUcentity_t@@PEA_N@Z(compositeModel, localClientNum, cent, createdNew_optionalOut);
}

/*
==============
CG_XCompositeModel_GetXCompositeModelIndex
==============
*/

int __fastcall CG_XCompositeModel_GetXCompositeModelIndex(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  return ?CG_XCompositeModel_GetXCompositeModelIndex@@YAHW4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_XCompositeModel_GetXCompositeModelFromIndex
==============
*/

XCompositeModelDef *__fastcall CG_XCompositeModel_GetXCompositeModelFromIndex(const LocalClientNum_t localClientNum, const unsigned int index)
{
  return ?CG_XCompositeModel_GetXCompositeModelFromIndex@@YAPEAUXCompositeModelDef@@W4LocalClientNum_t@@I@Z(localClientNum, index);
}

/*
==============
CG_XCompositeModel_GetDObj
==============
*/
DObj *CG_XCompositeModel_GetDObj(const XCompositeModelDef *compositeModel, const LocalClientNum_t localClientNum, const centity_t *cent, bool *createdNew_optionalOut)
{
  unsigned __int16 numModels[8]; 
  vec3_t v11; 
  vec4_t v12; 
  DObjModel dobjModel; 

  __asm
  {
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovsd  xmm1, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  numModels[0] = 0;
  v11.v[2] = vec3_origin.v[2];
  __asm
  {
    vmovdqa [rsp+4FF8h+var_4F98], xmm0
    vmovsd  [rsp+4FF8h+var_4FA8], xmm1
  }
  CG_XCompositeModel_InitModelsRecursive(compositeModel, -1, (const scr_string_t)0, &v11, &v12, 0xFEu, numModels, &dobjModel);
  return CG_EntityMP_GetDObj(localClientNum, cent->nextState.number, cent->nextState.eType, &dobjModel, numModels[0], createdNew_optionalOut);
}

/*
==============
CG_XCompositeModel_GetXCompositeModelFromIndex
==============
*/
XCompositeModelDef *CG_XCompositeModel_GetXCompositeModelFromIndex(const LocalClientNum_t localClientNum, const unsigned int index)
{
  __int64 v2; 
  cgs_t *LocalClientStaticGlobals; 
  BgXModelHandle::<unnamed_type_un> *p_un; 
  int v6; 
  int v7; 

  v2 = index;
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( (unsigned int)v2 >= 0x800 )
  {
    v7 = 2048;
    v6 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 62, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( cgs->gameModels ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( cgs->gameModels )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( LocalClientStaticGlobals->gameModels[v2].assetType != ASSET_TYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 63, ASSERT_TYPE_ASSERT, "(cgs->gameModels[index].assetType == XAssetType::ASSET_TYPE_XCOMPOSITEMODEL)", (const char *)&queryFormat, "cgs->gameModels[index].assetType == XAssetType::ASSET_TYPE_XCOMPOSITEMODEL") )
    __debugbreak();
  p_un = &LocalClientStaticGlobals->gameModels[v2].un;
  if ( !p_un->compositeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 64, ASSERT_TYPE_ASSERT, "(cgs->gameModels[index].un.compositeModel != nullptr)", (const char *)&queryFormat, "cgs->gameModels[index].un.compositeModel != nullptr") )
    __debugbreak();
  return p_un->compositeModel;
}

/*
==============
CG_XCompositeModel_GetXCompositeModelIndex
==============
*/
__int64 CG_XCompositeModel_GetXCompositeModelIndex(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  entityType_s eType; 
  entityState_t::un_t un; 
  cgs_t *LocalClientStaticGlobals; 
  BgXModelHandle *v5; 
  XAssetType assetType; 

  eType = cent->nextState.eType;
  if ( eType == ET_SCRIPTMOVER )
  {
    un = (entityState_t::un_t)cent->nextState.lerp.u.anonymous.data[1];
  }
  else
  {
    if ( eType != ET_HELICOPTER && (unsigned __int16)(eType - 14) > 2u )
      return 0i64;
    un = cent->nextState.un;
  }
  if ( un.vehicleXModel )
  {
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
    if ( un.vehicleXModel >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 16, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( cgs->gameModels ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( cgs->gameModels )\n\t%i not in [0, %i)", un.vehicleXModel, 2048) )
      __debugbreak();
    v5 = &LocalClientStaticGlobals->gameModels[un.actorFlags];
    assetType = v5->assetType;
    if ( v5->assetType != ASSET_TYPE_XMODEL && assetType != ASSET_TYPE_XCOMPOSITEMODEL && assetType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 17, ASSERT_TYPE_ASSERT, "(cgs->gameModels[index].assetType == XAssetType::ASSET_TYPE_XMODEL || cgs->gameModels[index].assetType == XAssetType::ASSET_TYPE_XCOMPOSITEMODEL || cgs->gameModels[index].assetType == 0)", (const char *)&queryFormat, "cgs->gameModels[index].assetType == XAssetType::ASSET_TYPE_XMODEL || cgs->gameModels[index].assetType == XAssetType::ASSET_TYPE_XCOMPOSITEMODEL || cgs->gameModels[index].assetType == 0") )
      __debugbreak();
    if ( v5->assetType == ASSET_TYPE_XCOMPOSITEMODEL )
      return un.actorFlags;
  }
  return 0i64;
}

/*
==============
CG_XCompositeModel_InitModelsRecursive
==============
*/
void CG_XCompositeModel_InitModelsRecursive(const XCompositeModelDef *compositeModel, const int recursiveParentSlot, const scr_string_t recursiveParentBoneName, const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, const unsigned int maxNumModels, unsigned __int16 *outNumModels, DObjModel *outDobjModels)
{
  int v13; 
  unsigned int v14; 
  unsigned __int16 v15; 
  unsigned __int16 *v16; 
  unsigned int i; 
  int recursiveParentSlota; 
  scr_string_t boneName; 
  XModel *model; 
  scr_string_t recursiveParentBoneNamea; 
  XCompositeSubmodel *submodel[2]; 
  vec3_t v25; 
  vec3_t offsets; 
  vec3_t recursiveOffsetsa; 
  vec4_t quat; 
  vec4_t recursiveQuata; 
  tmat43_t<vec3_t> outResultMat; 
  int remap[12]; 
  BgXCompositeModelSortInfo outSortInfos; 

  __asm { vmovsd  xmm0, qword ptr [r9] }
  recursiveOffsetsa.v[2] = recursiveOffsets->v[2];
  _RAX = recursiveQuat;
  __asm { vmovsd  qword ptr [rbp+120h+recursiveOffsets], xmm0 }
  recursiveParentBoneNamea = recursiveParentBoneName;
  *(_QWORD *)v25.v = outNumModels;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+120h+recursiveQuat], xmm0
  }
  BG_XCompositeModel_SortSubmodels(compositeModel, 10, 10, &outSortInfos, remap);
  v13 = *outNumModels;
  v14 = 0;
  v15 = *outNumModels;
  do
  {
    submodel[0] = NULL;
    model = NULL;
    if ( !BG_XCompositeModel_GetSubmodelInfo(compositeModel, &outSortInfos, remap, v14, v13, (const XCompositeSubmodel **)submodel, &model, &offsets, &quat, &recursiveParentSlota) )
      break;
    if ( !submodel[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 95, ASSERT_TYPE_ASSERT, "(submodel)", (const char *)&queryFormat, "submodel") )
      __debugbreak();
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 96, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( v15 )
    {
      if ( recursiveParentSlota >= 0 || submodel[0]->parentBoneName == scr_const._ )
        BG_XCompositeModel_GetParentBone(compositeModel, submodel[0], outDobjModels, recursiveParentSlota, &boneName);
      else
        BG_XCompositeModel_CalculateSubmodelOffsets(compositeModel, submodel[0], outDobjModels, recursiveParentSlot, recursiveParentBoneNamea, &recursiveOffsetsa, &recursiveQuata, &offsets, &quat, &recursiveParentSlota, &boneName);
    }
    else
    {
      BG_XCompositeModel_SetupRootModel(&recursiveOffsetsa, &recursiveQuata, &offsets, &quat, &boneName, &outResultMat);
    }
    if ( (unsigned int)v15 + 1 > maxNumModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 118, ASSERT_TYPE_ASSERT, "( static_cast<uint>( numModels ) + 1 <= maxNumModels )", "Error: CompositeModel: %s, has too many submodels. It will stomp memory.", compositeModel->name) )
      __debugbreak();
    DObjInitSubmodel(model, boneName, recursiveParentSlota, &offsets, &quat, 0, 0, NULL, &outDobjModels[v15++]);
    ++v14;
  }
  while ( v14 < 0xA );
  v16 = *(unsigned __int16 **)v25.v;
  **(_WORD **)v25.v = v15;
  for ( i = 0; i < 0xA; ++i )
  {
    model = NULL;
    if ( BG_XCompositeModel_CalculateSubCompositeModelInfo(compositeModel, remap, i, v13, recursiveParentSlot, recursiveParentBoneNamea, &recursiveOffsetsa, &recursiveQuata, (const XCompositeModelDef **)&model, &offsets, &quat, &recursiveParentSlota, &boneName) )
    {
      if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_xcompositemodel.cpp", 141, ASSERT_TYPE_ASSERT, "(subCompositeModel)", (const char *)&queryFormat, "subCompositeModel") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+120h+quat]
        vmovsd  xmm1, qword ptr [rbp+120h+offsets]
      }
      v25.v[2] = offsets.v[2];
      __asm
      {
        vmovdqa xmmword ptr [rbp+120h+submodel], xmm0
        vmovsd  [rbp+120h+var_180], xmm1
      }
      CG_XCompositeModel_InitModelsRecursive((const XCompositeModelDef *)model, recursiveParentSlota, boneName, &v25, (const vec4_t *)submodel, maxNumModels, v16, outDobjModels);
    }
  }
}

