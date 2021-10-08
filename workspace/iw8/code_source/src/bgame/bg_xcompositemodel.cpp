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
  const XCompositeModelDef *v17; 
  bool v19; 
  float v21; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> result; 

  _RSI = outOffsets;
  _RBX = &compositeModel->subCompositeModels[subCompositeModelIndex];
  v17 = _RBX->compositeModel;
  *outSubCompositeModel = v17;
  if ( v17 )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+8]
      vmovsd  qword ptr [rsi], xmm0
    }
    outOffsets->v[2] = _RBX->translation.v[2];
    AnglesToQuat(&_RBX->angles, outQuat);
    v19 = _RBX->parentSubmodelSlot >= 0;
    if ( _RBX->parentSubmodelSlot >= 0 )
    {
      recursiveParentSlot = modelStartIndex + remap[_RBX->parentSubmodelSlot];
    }
    else
    {
      QuatAndOriginToMatrix43(outQuat, outOffsets, &result);
      QuatAndOriginToMatrix43(recursiveQuat, recursiveOffsets, &in2);
      MatrixMultiply43(&result, &in2, &out);
      __asm { vmovsd  xmm0, qword ptr [rsp+108h+out+24h] }
      v21 = out.m[3].v[2];
      __asm { vmovsd  qword ptr [rsi], xmm0 }
      outOffsets->v[2] = v21;
      AxisToQuat((const tmat33_t<vec3_t> *)&out, outQuat);
    }
    *outParentSlot = recursiveParentSlot;
    if ( v19 )
      LODWORD(v17) = _RBX->parentBoneName;
    else
      LODWORD(v17) = recursiveParentBoneName;
    *outParentBoneName = (int)v17;
    LOBYTE(v17) = 1;
  }
  return (char)v17;
}

/*
==============
BG_XCompositeModel_CalculateSubmodelOffsets
==============
*/
void BG_XCompositeModel_CalculateSubmodelOffsets(const XCompositeModelDef *const compositeModel, const XCompositeSubmodel *const submodel, const DObjModel *const dobjModels, const int recursiveParentSlot, const scr_string_t recursiveParentBoneName, const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, vec3_t *outOffsets, vec4_t *outQuat, int *outParentSlot, scr_string_t *outParentBoneName)
{
  __int64 v11; 
  int v14; 
  const DObjModel *v15; 
  const XModel *model; 
  unsigned __int8 numBones; 
  __int64 v18; 
  scr_string_t *boneNames; 
  tmat43_t<vec3_t> *p_out; 
  tmat43_t<vec3_t> *v21; 
  float v23; 
  tmat43_t<vec3_t> v25; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> v27; 
  tmat43_t<vec3_t> in; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> result; 

  v11 = 0i64;
  _R14 = outOffsets;
  v14 = recursiveParentSlot;
  if ( recursiveParentSlot == -1 )
    v14 = 0;
  *outParentSlot = v14;
  v15 = &dobjModels[v14];
  if ( (!v15 || !v15->model->numBones) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 136, ASSERT_TYPE_ASSERT, "( parentDobjModel && parentDobjModel->model->numBones > 0 )", "Error: CompositeModel: %s, submodel: %s has a parent with no bones, this will cause strange offsets.", compositeModel->name, submodel->modelName) )
    __debugbreak();
  if ( recursiveParentBoneName )
  {
    *outParentBoneName = recursiveParentBoneName;
    model = v15->model;
    numBones = v15->model->numBones;
    if ( numBones )
    {
      v18 = numBones;
      boneNames = model->boneNames;
      while ( *boneNames != recursiveParentBoneName )
      {
        ++v11;
        ++boneNames;
        if ( v11 >= v18 )
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
    *outParentBoneName = *v15->model->boneNames;
  }
  if ( recursiveParentSlot == -1 )
  {
    QuatAndOriginToMatrix43(outQuat, outOffsets, &result);
    QuatAndOriginToMatrix43(&dobjModels->quat, &dobjModels->offsets, &in);
    QuatAndOriginToMatrix43(recursiveQuat, recursiveOffsets, &in2);
    MatrixInverseOrthogonal43(&in, &out);
    MatrixMultiply43(&result, &in2, &v27);
    p_out = &out;
    v21 = &v27;
  }
  else
  {
    QuatAndOriginToMatrix43(outQuat, outOffsets, &out);
    QuatAndOriginToMatrix43(recursiveQuat, recursiveOffsets, &v27);
    p_out = &v27;
    v21 = &out;
  }
  MatrixMultiply43(v21, p_out, &v25);
  __asm { vmovsd  xmm0, qword ptr [rsp+1B0h+var_160+24h] }
  v23 = v25.m[3].v[2];
  __asm { vmovsd  qword ptr [r14], xmm0 }
  outOffsets->v[2] = v23;
  AxisToQuat((const tmat33_t<vec3_t> *)&v25, outQuat);
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
  XModel *model; 
  __int64 parentSlot; 
  int v22; 

  v12 = submodelIndex;
  index = sortInfos[v12].index;
  v14 = &sortInfos[v12];
  if ( (_DWORD)index == -1 )
    return 0;
  v16 = &compositeModel->submodels[index] == NULL;
  _RBX = &compositeModel->submodels[index];
  *outSubmodel = _RBX;
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 98, ASSERT_TYPE_ASSERT, "( *outSubmodel )", "Error: CompositeModel: %s, submodel at: %d is missing.", compositeModel->name, v14->index) )
    __debugbreak();
  model = _RBX->model;
  *outModel = model;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 101, ASSERT_TYPE_ASSERT, "( *outModel )", "Error: CompositeModel: %s, submodel %s, at: %d is missing a model.", compositeModel->name, _RBX->modelName, v14->index) )
    __debugbreak();
  _RCX = outOffsets;
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx+8]
    vmovsd  qword ptr [rcx], xmm0
  }
  outOffsets->v[2] = _RBX->translation.v[2];
  AnglesToQuat(&_RBX->angles, outQuat);
  parentSlot = v14->parentSlot;
  if ( (_DWORD)parentSlot == -1 )
    v22 = -1;
  else
    v22 = modelStartIndex + remap[parentSlot];
  *outParentSlot = v22;
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

  _RBP = outOffsets;
  _RSI = outResultMat;
  QuatAndOriginToMatrix43(outQuat, outOffsets, &result);
  QuatAndOriginToMatrix43(recursiveQuat, recursiveOffsets, &in2);
  MatrixMultiply43(&result, &in2, outResultMat);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+24h]
    vmovsd  qword ptr [rbp+0], xmm0
  }
  _RBP->v[2] = outResultMat->m[3].v[2];
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
  __int64 v22; 
  unsigned int v23; 
  _DWORD v27[8]; 
  __int64 v28; 
  __m256i Base; 
  __m256i v30; 
  __m256i v31; 
  __int128 v32; 
  __int64 v33; 

  submodels = compositeModel->submodels;
  memset_0(&Base, -1, 0x78ui64);
  v7 = 0;
  p_Base = &Base;
  v23 = 0;
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
            LODWORD(v22) = parentSubmodelSlot;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 60, ASSERT_TYPE_ASSERT, "( submodels[parent].model != nullptr )", "Error: CompositeModel: %s is trying to parent submodel: %s to slot: %d which is empty.", compositeModel->name, v9->modelName, v22) )
              __debugbreak();
          }
          parentSubmodelSlot = submodels[v12].parentSubmodelSlot;
        }
        while ( parentSubmodelSlot >= 0 );
        v7 = v23;
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
    v23 = v7;
  }
  while ( v7 < 0xA );
  qsort(&Base, 0xAui64, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareSortInfos);
  memset(v27, 255, sizeof(v27));
  v28 = -1i64;
  if ( Base.m256i_i32[1] >= 0 )
    v27[Base.m256i_i32[1]] = 0;
  if ( Base.m256i_i32[4] >= 0 )
    v27[Base.m256i_i32[4]] = 1;
  if ( Base.m256i_i32[7] >= 0 )
    v27[Base.m256i_i32[7]] = 2;
  if ( v30.m256i_i32[2] >= 0 )
    v27[v30.m256i_i32[2]] = 3;
  if ( v30.m256i_i32[5] >= 0 )
    v27[v30.m256i_i32[5]] = 4;
  if ( v31.m256i_i32[0] >= 0 )
    v27[v31.m256i_i32[0]] = 5;
  if ( v31.m256i_i32[3] >= 0 )
    v27[v31.m256i_i32[3]] = 6;
  if ( v31.m256i_i32[6] >= 0 )
    v27[v31.m256i_i32[6]] = 7;
  if ( (SDWORD1(v32) & 0x80000000) == 0 )
    v27[SDWORD1(v32)] = 8;
  if ( (int)v33 >= 0 )
    v27[(int)v33] = 9;
  if ( remapArraySize != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 79, ASSERT_TYPE_ASSERT, "(remapArraySize == ( sizeof( *array_counter( remap ) ) + 0 ))", (const char *)&queryFormat, "remapArraySize == ARRAY_COUNT( remap )") )
    __debugbreak();
  if ( sortInfoSize != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_xcompositemodel.cpp", 80, ASSERT_TYPE_ASSERT, "(sortInfoSize == ( sizeof( *array_counter( sortInfos ) ) + 0 ))", (const char *)&queryFormat, "sortInfoSize == ARRAY_COUNT( sortInfos )") )
    __debugbreak();
  _RAX = outRemapArray;
  __asm
  {
    vmovups ymm0, [rsp+150h+var_F0]
    vmovsd  xmm1, [rbp+50h+var_D0]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm0, [rbp+50h+Base]
    vmovsd  qword ptr [rax+20h], xmm1
  }
  _RAX = outSortInfos;
  __asm
  {
    vmovups ymm1, ymmword ptr [rbp-50h]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm0, [rbp+50h+var_80]
    vmovups ymmword ptr [rax+20h], ymm1
    vmovups xmm1, xmmword ptr [rbp-10h]
    vmovups ymmword ptr [rax+40h], ymm0
    vmovsd  xmm0, [rbp+50h+var_50]
    vmovups xmmword ptr [rax+60h], xmm1
    vmovsd  qword ptr [rax+70h], xmm0
  }
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

