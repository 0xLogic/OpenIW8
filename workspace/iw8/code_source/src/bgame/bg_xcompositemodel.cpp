/*
==============
BG_XCompositeModel_AreSubmodelsIdentical
==============
*/

bool __fastcall BG_XCompositeModel_AreSubmodelsIdentical(const DObj *dobj, const XCompositeModelDef *compositeModel)
{
  return ?BG_XCompositeModel_AreSubmodelsIdentical@@YA_NPEBUDObj@@PEBUXCompositeModelDef@@@Z(dobj, compositeModel);
}

/*
==============
BG_XCompositeModel_GetParentBone
==============
*/

void __fastcall BG_XCompositeModel_GetParentBone(const XCompositeModelDef *const compositeModel, const XCompositeSubmodel *const submodel, const DObjModel *const dobjModels, int parentSlot, scr_string_t *outParentBoneName)
{
  ?BG_XCompositeModel_GetParentBone@@YAXQEBUXCompositeModelDef@@QEBUXCompositeSubmodel@@QEBUDObjModel@@HPEAW4scr_string_t@@@Z(compositeModel, submodel, dobjModels, parentSlot, outParentBoneName);
}

/*
==============
BG_XCompositeModel_CalculateSubmodelOffsets
==============
*/

void __fastcall BG_XCompositeModel_CalculateSubmodelOffsets(const XCompositeModelDef *const compositeModel, const XCompositeSubmodel *const submodel, const DObjModel *const dobjModels, const int recursiveParentSlot, const scr_string_t recursiveParentBoneName, const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, vec3_t *outOffsets, vec4_t *outQuat, int *outParentSlot, scr_string_t *outParentBoneName)
{
  ?BG_XCompositeModel_CalculateSubmodelOffsets@@YAXQEBUXCompositeModelDef@@QEBUXCompositeSubmodel@@QEBUDObjModel@@HW4scr_string_t@@AEBTvec3_t@@AEBTvec4_t@@PEAT5@PEAT6@PEAHPEAW44@@Z(compositeModel, submodel, dobjModels, recursiveParentSlot, recursiveParentBoneName, recursiveOffsets, recursiveQuat, outOffsets, outQuat, outParentSlot, outParentBoneName);
}

/*
==============
BG_XCompositeModel_SetupRootModel
==============
*/

void __fastcall BG_XCompositeModel_SetupRootModel(const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, vec3_t *outOffsets, vec4_t *outQuat, scr_string_t *outParentBoneName, tmat43_t<vec3_t> *outResultMat)
{
  ?BG_XCompositeModel_SetupRootModel@@YAXAEBTvec3_t@@AEBTvec4_t@@PEAT1@PEAT2@PEAW4scr_string_t@@PEAT?$tmat43_t@Tvec3_t@@@@@Z(recursiveOffsets, recursiveQuat, outOffsets, outQuat, outParentBoneName, outResultMat);
}

/*
==============
BG_XCompositeModel_GetScriptableModel
==============
*/

const XModel *__fastcall BG_XCompositeModel_GetScriptableModel(const ScriptableInstanceContextSecure *instanceContext)
{
  return ?BG_XCompositeModel_GetScriptableModel@@YAPEBUXModel@@PEBUScriptableInstanceContextSecure@@@Z(instanceContext);
}

/*
==============
BG_XCompositeModel_CalculateSubCompositeModelInfo
==============
*/

bool __fastcall BG_XCompositeModel_CalculateSubCompositeModelInfo(const XCompositeModelDef *const compositeModel, const int *const remap, const int subCompositeModelIndex, const int modelStartIndex, const int recursiveParentSlot, const scr_string_t recursiveParentBoneName, const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, const XCompositeModelDef **outSubCompositeModel, vec3_t *outOffsets, vec4_t *outQuat, int *outParentSlot, scr_string_t *outParentBoneName)
{
  return ?BG_XCompositeModel_CalculateSubCompositeModelInfo@@YA_NQEBUXCompositeModelDef@@QEBHHHHW4scr_string_t@@AEBTvec3_t@@AEBTvec4_t@@PEAPEBU1@PEAT3@PEAT4@PEAHPEAW42@@Z(compositeModel, remap, subCompositeModelIndex, modelStartIndex, recursiveParentSlot, recursiveParentBoneName, recursiveOffsets, recursiveQuat, outSubCompositeModel, outOffsets, outQuat, outParentSlot, outParentBoneName);
}

/*
==============
BG_XCompositeModel_SortSubmodels
==============
*/

void __fastcall BG_XCompositeModel_SortSubmodels(const XCompositeModelDef *const compositeModel, const int sortInfoSize, const int remapArraySize, BgXCompositeModelSortInfo *outSortInfos, int *outRemapArray)
{
  ?BG_XCompositeModel_SortSubmodels@@YAXQEBUXCompositeModelDef@@HHPEAUBgXCompositeModelSortInfo@@PEAH@Z(compositeModel, sortInfoSize, remapArraySize, outSortInfos, outRemapArray);
}

/*
==============
BG_XCompositeModel_GetSubmodelInfo
==============
*/

bool __fastcall BG_XCompositeModel_GetSubmodelInfo(const XCompositeModelDef *const compositeModel, const BgXCompositeModelSortInfo *const sortInfos, const int *const remap, const int submodelIndex, const int modelStartIndex, const XCompositeSubmodel **outSubmodel, XModel **outModel, vec3_t *outOffsets, vec4_t *outQuat, int *outParentSlot)
{
  return ?BG_XCompositeModel_GetSubmodelInfo@@YA_NQEBUXCompositeModelDef@@QEBUBgXCompositeModelSortInfo@@QEBHHHPEAPEBUXCompositeSubmodel@@PEAPEAUXModel@@PEATvec3_t@@PEATvec4_t@@PEAH@Z(compositeModel, sortInfos, remap, submodelIndex, modelStartIndex, outSubmodel, outModel, outOffsets, outQuat, outParentSlot);
}

/*
==============
BG_XCompositeModel_AreSubmodelsIdentical
==============
*/
bool BG_XCompositeModel_AreSubmodelsIdentical(const DObj *dobj, const XCompositeModelDef *compositeModel)
{
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 298, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !compositeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 299, ASSERT_TYPE_ASSERT, "(compositeModel)", (const char *)&queryFormat, "compositeModel") )
    __debugbreak();
  if ( dobj->numModels != GetSubmodelCountRecursive(compositeModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 300, ASSERT_TYPE_ASSERT, "(dobj->numModels == GetSubmodelCountRecursive( compositeModel ))", (const char *)&queryFormat, "dobj->numModels == GetSubmodelCountRecursive( compositeModel )") )
    __debugbreak();
  return BG_XCompositeModel_AreSubmodelsIdentical_r(dobj, compositeModel, 0);
}

/*
==============
BG_XCompositeModel_AreSubmodelsIdentical_r
==============
*/
char BG_XCompositeModel_AreSubmodelsIdentical_r(const DObj *dobj, const XCompositeModelDef *compositeModel, int dobjModelIndex)
{
  __int64 v3; 
  int v6; 
  __int64 v7; 
  int v8; 
  __int64 i; 
  XCompositeSubmodel *submodels; 
  const XModel *v11; 
  __int64 j; 
  __int64 v14; 
  __int64 v15; 

  v3 = dobjModelIndex;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 262, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !compositeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 263, ASSERT_TYPE_ASSERT, "(compositeModel)", (const char *)&queryFormat, "compositeModel") )
    __debugbreak();
  v6 = 0;
  v7 = v3;
  v8 = 0;
  for ( i = 0i64; ; ++i )
  {
    submodels = compositeModel->submodels;
    if ( submodels[i].model )
    {
      if ( (unsigned int)v3 >= dobj->numModels )
      {
        LODWORD(v15) = dobj->numModels;
        LODWORD(v14) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 271, ASSERT_TYPE_ASSERT, "(unsigned)( dobjModelIndex ) < (unsigned)( dobj->numModels )", "dobjModelIndex doesn't index dobj->numModels\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      LODWORD(v3) = v3 + 1;
      v11 = dobj->models[v7++];
      if ( v11 != submodels[i].model )
        break;
    }
    if ( (unsigned int)++v8 >= 0xA )
    {
      for ( j = 0i64; !compositeModel->subCompositeModels[j].compositeModel || BG_XCompositeModel_AreSubmodelsIdentical_r(dobj, compositeModel, v3); ++j )
      {
        if ( (unsigned int)++v6 >= 0xA )
          return 1;
      }
      return 0;
    }
  }
  return 0;
}

/*
==============
BG_XCompositeModel_CalculateSubCompositeModelInfo
==============
*/
bool BG_XCompositeModel_CalculateSubCompositeModelInfo(const XCompositeModelDef *const compositeModel, const int *const remap, const int subCompositeModelIndex, const int modelStartIndex, const int recursiveParentSlot, const scr_string_t recursiveParentBoneName, const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, const XCompositeModelDef **outSubCompositeModel, vec3_t *outOffsets, vec4_t *outQuat, int *outParentSlot, scr_string_t *outParentBoneName)
{
  XCompositeSubCompositeModel *v15; 
  const XCompositeModelDef *v16; 
  bool v17; 
  float v18; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> result; 

  v15 = &compositeModel->subCompositeModels[subCompositeModelIndex];
  v16 = v15->compositeModel;
  *outSubCompositeModel = v16;
  if ( v16 )
  {
    *outOffsets = v15->translation;
    AnglesToQuat(&v15->angles, outQuat);
    v17 = v15->parentSubmodelSlot >= 0;
    if ( v15->parentSubmodelSlot >= 0 )
    {
      recursiveParentSlot = modelStartIndex + remap[v15->parentSubmodelSlot];
    }
    else
    {
      QuatAndOriginToMatrix43(outQuat, outOffsets, &result);
      QuatAndOriginToMatrix43(recursiveQuat, recursiveOffsets, &in2);
      MatrixMultiply43(&result, &in2, &out);
      v18 = out.m[3].v[2];
      *(double *)outOffsets->v = *(double *)out.row3.v;
      outOffsets->v[2] = v18;
      AxisToQuat((const tmat33_t<vec3_t> *)&out, outQuat);
    }
    *outParentSlot = recursiveParentSlot;
    if ( v17 )
      LODWORD(v16) = v15->parentBoneName;
    else
      LODWORD(v16) = recursiveParentBoneName;
    *outParentBoneName = (int)v16;
    LOBYTE(v16) = 1;
  }
  return (char)v16;
}

/*
==============
BG_XCompositeModel_CalculateSubmodelOffsets
==============
*/
void BG_XCompositeModel_CalculateSubmodelOffsets(const XCompositeModelDef *const compositeModel, const XCompositeSubmodel *const submodel, const DObjModel *const dobjModels, const int recursiveParentSlot, const scr_string_t recursiveParentBoneName, const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, vec3_t *outOffsets, vec4_t *outQuat, int *outParentSlot, scr_string_t *outParentBoneName)
{
  __int64 v11; 
  int v13; 
  const DObjModel *v14; 
  const XModel *model; 
  unsigned __int8 numBones; 
  __int64 v17; 
  scr_string_t *boneNames; 
  tmat43_t<vec3_t> *p_out; 
  tmat43_t<vec3_t> *v20; 
  float v21; 
  tmat43_t<vec3_t> v23; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> v25; 
  tmat43_t<vec3_t> in; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> result; 

  v11 = 0i64;
  v13 = recursiveParentSlot;
  if ( recursiveParentSlot == -1 )
    v13 = 0;
  *outParentSlot = v13;
  v14 = &dobjModels[v13];
  if ( (!v14 || !v14->model->numBones) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 136, ASSERT_TYPE_ASSERT, "( parentDobjModel && parentDobjModel->model->numBones > 0 )", "Error: CompositeModel: %s, submodel: %s has a parent with no bones, this will cause strange offsets.", compositeModel->name, submodel->modelName) )
    __debugbreak();
  if ( recursiveParentBoneName )
  {
    *outParentBoneName = recursiveParentBoneName;
    model = v14->model;
    numBones = v14->model->numBones;
    if ( numBones )
    {
      v17 = numBones;
      boneNames = model->boneNames;
      while ( *boneNames != recursiveParentBoneName )
      {
        ++v11;
        ++boneNames;
        if ( v11 >= v17 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      *outParentBoneName = *model->boneNames;
    }
  }
  else
  {
    *outParentBoneName = *v14->model->boneNames;
  }
  if ( recursiveParentSlot == -1 )
  {
    QuatAndOriginToMatrix43(outQuat, outOffsets, &result);
    QuatAndOriginToMatrix43(&dobjModels->quat, &dobjModels->offsets, &in);
    QuatAndOriginToMatrix43(recursiveQuat, recursiveOffsets, &in2);
    MatrixInverseOrthogonal43(&in, &out);
    MatrixMultiply43(&result, &in2, &v25);
    p_out = &out;
    v20 = &v25;
  }
  else
  {
    QuatAndOriginToMatrix43(outQuat, outOffsets, &out);
    QuatAndOriginToMatrix43(recursiveQuat, recursiveOffsets, &v25);
    p_out = &v25;
    v20 = &out;
  }
  MatrixMultiply43(v20, p_out, &v23);
  v21 = v23.m[3].v[2];
  *(double *)outOffsets->v = *(double *)v23.row3.v;
  outOffsets->v[2] = v21;
  AxisToQuat((const tmat33_t<vec3_t> *)&v23, outQuat);
}

/*
==============
BG_XCompositeModel_GetParentBone
==============
*/
void BG_XCompositeModel_GetParentBone(const XCompositeModelDef *const compositeModel, const XCompositeSubmodel *const submodel, const DObjModel *const dobjModels, int parentSlot, scr_string_t *outParentBoneName)
{
  __int64 v6; 
  scr_string_t parentBoneName; 
  const DObjModel *v10; 
  const XModel *model; 
  unsigned __int8 numBones; 
  __int64 v13; 
  __int64 v14; 
  scr_string_t *boneNames; 

  v6 = parentSlot;
  if ( !outParentBoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 113, ASSERT_TYPE_ASSERT, "(outParentBoneName)", (const char *)&queryFormat, "outParentBoneName") )
    __debugbreak();
  parentBoneName = submodel->parentBoneName;
  *outParentBoneName = parentBoneName;
  if ( parentBoneName != scr_const._ )
  {
    v10 = &dobjModels[v6];
    if ( (!v10 || !v10->model->numBones) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 123, ASSERT_TYPE_ASSERT, "( parentDobjModel && parentDobjModel->model->numBones > 0 )", "Error: CompositeModel: %s, submodel: %s has a parent with no bones, this will cause strange offsets.", compositeModel->name, submodel->modelName) )
      __debugbreak();
    model = v10->model;
    numBones = v10->model->numBones;
    if ( numBones )
    {
      v13 = 0i64;
      v14 = numBones;
      boneNames = model->boneNames;
      while ( *boneNames != *outParentBoneName )
      {
        ++v13;
        ++boneNames;
        if ( v13 >= v14 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      *outParentBoneName = *model->boneNames;
    }
  }
}

/*
==============
BG_XCompositeModel_GetScriptableModel
==============
*/
const XModel *BG_XCompositeModel_GetScriptableModel(const ScriptableInstanceContextSecure *instanceContext)
{
  const XModel *result; 

  result = instanceContext->data.model;
  if ( instanceContext->dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
  {
    if ( result )
      return *(const XModel **)(*(_QWORD *)&result->numsurfs + 40i64);
  }
  return result;
}

/*
==============
BG_XCompositeModel_GetSubmodelInfo
==============
*/
char BG_XCompositeModel_GetSubmodelInfo(const XCompositeModelDef *const compositeModel, const BgXCompositeModelSortInfo *const sortInfos, const int *const remap, const int submodelIndex, const int modelStartIndex, const XCompositeSubmodel **outSubmodel, XModel **outModel, vec3_t *outOffsets, vec4_t *outQuat, int *outParentSlot)
{
  __int64 v12; 
  __int64 index; 
  const BgXCompositeModelSortInfo *v14; 
  bool v16; 
  XCompositeSubmodel *v17; 
  XModel *model; 
  __int64 parentSlot; 
  int v20; 

  v12 = submodelIndex;
  index = sortInfos[v12].index;
  v14 = &sortInfos[v12];
  if ( (_DWORD)index == -1 )
    return 0;
  v16 = &compositeModel->submodels[index] == NULL;
  v17 = &compositeModel->submodels[index];
  *outSubmodel = v17;
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 98, ASSERT_TYPE_ASSERT, "( *outSubmodel )", "Error: CompositeModel: %s, submodel at: %d is missing.", compositeModel->name, v14->index) )
    __debugbreak();
  model = v17->model;
  *outModel = model;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 101, ASSERT_TYPE_ASSERT, "( *outModel )", "Error: CompositeModel: %s, submodel %s, at: %d is missing a model.", compositeModel->name, v17->modelName, v14->index) )
    __debugbreak();
  *outOffsets = v17->translation;
  AnglesToQuat(&v17->angles, outQuat);
  parentSlot = v14->parentSlot;
  if ( (_DWORD)parentSlot == -1 )
    v20 = -1;
  else
    v20 = modelStartIndex + remap[parentSlot];
  *outParentSlot = v20;
  return 1;
}

/*
==============
BG_XCompositeModel_SetupRootModel
==============
*/
void BG_XCompositeModel_SetupRootModel(const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, vec3_t *outOffsets, vec4_t *outQuat, scr_string_t *outParentBoneName, tmat43_t<vec3_t> *outResultMat)
{
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> result; 

  QuatAndOriginToMatrix43(outQuat, outOffsets, &result);
  QuatAndOriginToMatrix43(recursiveQuat, recursiveOffsets, &in2);
  MatrixMultiply43(&result, &in2, outResultMat);
  *outOffsets = outResultMat->row3;
  AxisToQuat((const tmat33_t<vec3_t> *)outResultMat, outQuat);
  *outParentBoneName = 0;
}

/*
==============
BG_XCompositeModel_SortSubmodels
==============
*/
void BG_XCompositeModel_SortSubmodels(const XCompositeModelDef *const compositeModel, const int sortInfoSize, const int remapArraySize, BgXCompositeModelSortInfo *outSortInfos, int *outRemapArray)
{
  XCompositeSubmodel *submodels; 
  unsigned int v7; 
  __m256i *p_Base; 
  XCompositeSubmodel *v9; 
  int parentSubmodelSlot; 
  int v11; 
  __int64 v12; 
  double v13; 
  __m256i v14; 
  __m256i v15; 
  __m256i v16; 
  __int128 v17; 
  double v18; 
  __int64 v19; 
  unsigned int v20; 
  __m256i v24; 
  double v25; 
  __m256i Base; 
  __m256i v27; 
  __m256i v28; 
  __int128 v29; 
  double v30; 

  submodels = compositeModel->submodels;
  memset_0(&Base, -1, 0x78ui64);
  v7 = 0;
  p_Base = &Base;
  v20 = 0;
  v9 = submodels;
  do
  {
    if ( v9->model )
    {
      parentSubmodelSlot = v9->parentSubmodelSlot;
      v11 = 0;
      if ( parentSubmodelSlot >= 0 )
      {
        do
        {
          ++v11;
          v12 = parentSubmodelSlot;
          if ( !submodels[parentSubmodelSlot].model )
          {
            LODWORD(v19) = parentSubmodelSlot;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 60, ASSERT_TYPE_ASSERT, "( submodels[parent].model != nullptr )", "Error: CompositeModel: %s is trying to parent submodel: %s to slot: %d which is empty.", compositeModel->name, v9->modelName, v19) )
              __debugbreak();
          }
          parentSubmodelSlot = submodels[v12].parentSubmodelSlot;
        }
        while ( parentSubmodelSlot >= 0 );
        v7 = v20;
      }
      p_Base->m256i_i32[2] = v11;
      p_Base->m256i_i32[1] = v7;
      p_Base->m256i_i32[0] = v9->parentSubmodelSlot;
    }
    else
    {
      p_Base->m256i_i32[2] = 10;
    }
    ++v7;
    p_Base = (__m256i *)((char *)p_Base + 12);
    ++v9;
    v20 = v7;
  }
  while ( v7 < 0xA );
  qsort(&Base, 0xAui64, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareSortInfos);
  memset(&v24, 255, sizeof(v24));
  v25 = NAN;
  if ( Base.m256i_i32[1] >= 0 )
    v24.m256i_i32[Base.m256i_i32[1]] = 0;
  if ( Base.m256i_i32[4] >= 0 )
    v24.m256i_i32[Base.m256i_i32[4]] = 1;
  if ( Base.m256i_i32[7] >= 0 )
    v24.m256i_i32[Base.m256i_i32[7]] = 2;
  if ( v27.m256i_i32[2] >= 0 )
    v24.m256i_i32[v27.m256i_i32[2]] = 3;
  if ( v27.m256i_i32[5] >= 0 )
    v24.m256i_i32[v27.m256i_i32[5]] = 4;
  if ( v28.m256i_i32[0] >= 0 )
    v24.m256i_i32[v28.m256i_i32[0]] = 5;
  if ( v28.m256i_i32[3] >= 0 )
    v24.m256i_i32[v28.m256i_i32[3]] = 6;
  if ( v28.m256i_i32[6] >= 0 )
    v24.m256i_i32[v28.m256i_i32[6]] = 7;
  if ( (SDWORD1(v29) & 0x80000000) == 0 )
    v24.m256i_i32[SDWORD1(v29)] = 8;
  if ( SLODWORD(v30) >= 0 )
    v24.m256i_i32[SLODWORD(v30)] = 9;
  if ( remapArraySize != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 79, ASSERT_TYPE_ASSERT, "(remapArraySize == ( sizeof( *array_counter( remap ) ) + 0 ))", (const char *)&queryFormat, "remapArraySize == ARRAY_COUNT( remap )") )
    __debugbreak();
  if ( sortInfoSize != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 80, ASSERT_TYPE_ASSERT, "(sortInfoSize == ( sizeof( *array_counter( sortInfos ) ) + 0 ))", (const char *)&queryFormat, "sortInfoSize == ARRAY_COUNT( sortInfos )") )
    __debugbreak();
  v13 = v25;
  *(__m256i *)outRemapArray = v24;
  v14 = Base;
  *((double *)outRemapArray + 4) = v13;
  v15 = v27;
  *(__m256i *)&outSortInfos->parentSlot = v14;
  v16 = v28;
  *(__m256i *)&outSortInfos[2].depth = v15;
  v17 = v29;
  *(__m256i *)&outSortInfos[5].index = v16;
  v18 = v30;
  *(_OWORD *)&outSortInfos[8].parentSlot = v17;
  *(double *)&outSortInfos[9].index = v18;
}

/*
==============
CompareSortInfos
==============
*/
__int64 CompareSortInfos(const void *a, const void *b)
{
  int v2; 
  int v3; 

  v2 = *((_DWORD *)a + 2);
  v3 = *((_DWORD *)b + 2);
  if ( v2 == v3 )
    return (unsigned int)(*((_DWORD *)a + 1) - *((_DWORD *)b + 1));
  else
    return (unsigned int)(v2 - v3);
}

