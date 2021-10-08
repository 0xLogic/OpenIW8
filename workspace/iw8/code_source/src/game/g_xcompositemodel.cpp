/*
==============
G_XCompositeModel_InitDefs
==============
*/

void __fastcall G_XCompositeModel_InitDefs(const bool isFullInit)
{
  ?G_XCompositeModel_InitDefs@@YAX_N@Z(isFullInit);
}

/*
==============
G_XCompositeModel_SetIndex
==============
*/

void __fastcall G_XCompositeModel_SetIndex(const int index, entityType_s entityType, gentity_s *outEnt)
{
  ?G_XCompositeModel_SetIndex@@YAXHW4entityType_s@@PEAUgentity_s@@@Z(index, entityType, outEnt);
}

/*
==============
G_XCompositeModel_Clear
==============
*/

void __fastcall G_XCompositeModel_Clear(entityType_s entityType, gentity_s *outEnt)
{
  ?G_XCompositeModel_Clear@@YAXW4entityType_s@@PEAUgentity_s@@@Z(entityType, outEnt);
}

/*
==============
G_XCompositeModel_DObjInit
==============
*/

void __fastcall G_XCompositeModel_DObjInit(gentity_s *const ent, const int maxNumModels, unsigned __int16 *outNumModels, DObjModel *outDObjModels)
{
  ?G_XCompositeModel_DObjInit@@YAXQEAUgentity_s@@HAEAGPEAUDObjModel@@@Z(ent, maxNumModels, outNumModels, outDObjModels);
}

/*
==============
G_XCompositeModel_DObjInitScriptable
==============
*/

void __fastcall G_XCompositeModel_DObjInitScriptable(const XCompositeModelDef *const compositeModel, const unsigned int maxNumModels, gentity_s *outEnt, unsigned __int16 *outNumModels, DObjModel *outDObjModels)
{
  ?G_XCompositeModel_DObjInitScriptable@@YAXQEBUXCompositeModelDef@@IPEAUgentity_s@@AEAGPEAUDObjModel@@@Z(compositeModel, maxNumModels, outEnt, outNumModels, outDObjModels);
}

/*
==============
G_XCompositeModel_GetIndex
==============
*/

int __fastcall G_XCompositeModel_GetIndex(const gentity_s *const ent)
{
  return ?G_XCompositeModel_GetIndex@@YAHQEBUgentity_s@@@Z(ent);
}

/*
==============
G_XCompositeModel_GetName
==============
*/

const char *__fastcall G_XCompositeModel_GetName(const XCompositeModelDef *const compositeModel)
{
  return ?G_XCompositeModel_GetName@@YAPEBDQEBUXCompositeModelDef@@@Z(compositeModel);
}

/*
==============
G_XCompositeModel_PrecacheModels
==============
*/

void __fastcall G_XCompositeModel_PrecacheModels(const XCompositeModelDef *const compositeModel)
{
  ?G_XCompositeModel_PrecacheModels@@YAXQEBUXCompositeModelDef@@@Z(compositeModel);
}

/*
==============
G_XCompositeModel_SetPosition
==============
*/

void __fastcall G_XCompositeModel_SetPosition(gentity_s *const ent, entityType_s entityType)
{
  ?G_XCompositeModel_SetPosition@@YAXQEAUgentity_s@@W4entityType_s@@@Z(ent, entityType);
}

/*
==============
G_XCompositeModel_SetModel
==============
*/

void __fastcall G_XCompositeModel_SetModel(gentity_s *const ent, entityType_s entityType)
{
  ?G_XCompositeModel_SetModel@@YAXQEAUgentity_s@@W4entityType_s@@@Z(ent, entityType);
}

/*
==============
G_XCompositeModel_Clear
==============
*/
void G_XCompositeModel_Clear(entityType_s entityType, gentity_s *outEnt)
{
  entityType_s EntityTypeFromClassname; 
  int vehicleXModel; 
  entityType_s eType; 

  EntityTypeFromClassname = G_XCompositeModel_GetEntityTypeFromClassname(outEnt);
  if ( EntityTypeFromClassname == ET_SCRIPTMOVER )
  {
    vehicleXModel = outEnt->s.lerp.u.anonymous.data[1];
  }
  else
  {
    if ( EntityTypeFromClassname != ET_HELICOPTER && (unsigned int)(EntityTypeFromClassname - 14) > 2 )
      return;
    vehicleXModel = outEnt->s.un.vehicleXModel;
  }
  if ( vehicleXModel && G_Utils_IsIndexCompositeModel(vehicleXModel) && vehicleXModel > 0 )
  {
    *(_QWORD *)outEnt->attachModelNames = 0i64;
    *(_QWORD *)&outEnt->attachModelNames[4] = 0i64;
    *(_QWORD *)&outEnt->attachModelNames[8] = 0i64;
    *(_QWORD *)&outEnt->attachModelNames[12] = 0i64;
    *(_QWORD *)&outEnt->attachModelNames[16] = 0i64;
    *(_QWORD *)&outEnt->attachModelNames[20] = 0i64;
    *(_QWORD *)&outEnt->attachModelNames[24] = 0i64;
    eType = outEnt->s.eType;
    if ( eType == ET_SCRIPTMOVER )
    {
      outEnt->s.lerp.u.anonymous.data[1] = 0;
    }
    else if ( ((eType - 12) & 0xFFFD) == 0 )
    {
      outEnt->s.un.vehicleXModel = 0;
    }
  }
}

/*
==============
G_XCompositeModel_DObjInit
==============
*/
void G_XCompositeModel_DObjInit(gentity_s *const ent, const int maxNumModels, unsigned __int16 *outNumModels, DObjModel *outDObjModels)
{
  entityType_s EntityTypeFromClassname; 

  EntityTypeFromClassname = G_XCompositeModel_GetEntityTypeFromClassname(ent);
  G_XCompositeModel_InitForType(ent, EntityTypeFromClassname, 0, maxNumModels, outNumModels, outDObjModels);
}

/*
==============
G_XCompositeModel_DObjInitScriptable
==============
*/
void G_XCompositeModel_DObjInitScriptable(const XCompositeModelDef *const compositeModel, const unsigned int maxNumModels, gentity_s *outEnt, unsigned __int16 *outNumModels, DObjModel *outDObjModels)
{
  vec3_t v9; 
  vec4_t v10; 

  __asm
  {
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovsd  xmm1, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  v9.v[2] = vec3_origin.v[2];
  __asm
  {
    vmovdqa xmmword ptr [rsp+88h+var_18], xmm0
    vmovsd  [rsp+88h+var_28], xmm1
  }
  G_XCompositeModel_InitModelsRecursive(compositeModel, -1, (const scr_string_t)0, &v9, &v10, maxNumModels, outEnt, outNumModels, outDObjModels, 0, 1);
  if ( *outNumModels > 0x1Cu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 231, ASSERT_TYPE_ASSERT, "( outNumModels <= (32 - 4) )", "Error: CompositeModel: %s, has too many submodels.", compositeModel->name) )
    __debugbreak();
}

/*
==============
G_XCompositeModel_GetEntityTypeFromClassname
==============
*/
const char *G_XCompositeModel_GetEntityTypeFromClassname(const gentity_s *ent)
{
  entityType_s eType; 
  const char *result; 
  const char *v3; 

  eType = ent->s.eType;
  if ( eType )
    return (const char *)(unsigned __int16)eType;
  result = SL_ConvertToString(ent->classname);
  v3 = result;
  if ( result )
  {
    if ( IsParentClassname(result, "script_model") )
    {
      return (const char *)6;
    }
    else
    {
      if ( IsParentClassname(v3, "script_vehicle") )
        eType = ET_VEHICLE;
      return (const char *)(unsigned __int16)eType;
    }
  }
  return result;
}

/*
==============
G_XCompositeModel_GetIndex
==============
*/
__int64 G_XCompositeModel_GetIndex(const gentity_s *const ent)
{
  signed __int16 EntityTypeFromClassname; 
  unsigned int packedColorB_Fov; 
  int IsIndexCompositeModel; 
  unsigned int v6; 

  EntityTypeFromClassname = (unsigned __int16)G_XCompositeModel_GetEntityTypeFromClassname(ent);
  if ( EntityTypeFromClassname == 6 )
  {
    packedColorB_Fov = ent->s.lerp.u.primaryLight.packedColorB_Fov;
  }
  else
  {
    if ( EntityTypeFromClassname != 12 && (unsigned int)(EntityTypeFromClassname - 14) > 2 )
      return 0i64;
    packedColorB_Fov = ent->s.un.actorFlags;
  }
  if ( !packedColorB_Fov )
    return 0i64;
  IsIndexCompositeModel = G_Utils_IsIndexCompositeModel(packedColorB_Fov);
  v6 = 0;
  if ( IsIndexCompositeModel )
    return packedColorB_Fov;
  return v6;
}

/*
==============
G_XCompositeModel_GetName
==============
*/
const char *G_XCompositeModel_GetName(const XCompositeModelDef *const compositeModel)
{
  if ( compositeModel )
    return compositeModel->name;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 395, ASSERT_TYPE_ASSERT, "( compositeModel )", (const char *)&queryFormat, "compositeModel") )
    __debugbreak();
  return (const char *)MEMORY[0];
}

/*
==============
G_XCompositeModel_InitDefs
==============
*/
void G_XCompositeModel_InitDefs(const bool isFullInit)
{
  if ( isFullInit )
  {
    NetConstStrings_CallForCommonCompositeModels(G_XCompositeModel_InitNetConstCompositeModels_Callback);
    NetConstStrings_CallForLevelCompositeModels(G_XCompositeModel_InitNetConstCompositeModels_Callback);
  }
}

/*
==============
G_XCompositeModel_InitForType
==============
*/
void G_XCompositeModel_InitForType(gentity_s *const ent, entityType_s entityType, const bool setEntityPosition, const int maxNumModels, unsigned __int16 *outNumModels, DObjModel *outDObjModels)
{
  int vehicleXModel; 
  const XCompositeModelDef *CompositeModel; 
  vec3_t v13; 
  vec4_t v14; 

  if ( entityType == ET_SCRIPTMOVER )
  {
    vehicleXModel = ent->s.lerp.u.anonymous.data[1];
    goto LABEL_6;
  }
  if ( entityType == ET_HELICOPTER || (unsigned __int16)(entityType - 14) <= 2u )
  {
    vehicleXModel = ent->s.un.vehicleXModel;
LABEL_6:
    if ( vehicleXModel && G_Utils_IsIndexCompositeModel(vehicleXModel) )
      goto LABEL_10;
  }
  vehicleXModel = 0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 238, ASSERT_TYPE_ASSERT, "( compositeModelIndex != 0 )", "Error: Compositemodel could not be found, index was 0.") )
    __debugbreak();
LABEL_10:
  CompositeModel = G_Utils_GetCompositeModel(vehicleXModel);
  if ( !CompositeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 240, ASSERT_TYPE_ASSERT, "( compositeModel != nullptr )", "Error: CompositeModel with index: %d could not be found.", vehicleXModel) )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovsd  xmm1, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  v13.v[2] = vec3_origin.v[2];
  __asm
  {
    vmovdqa [rsp+88h+var_18], xmm0
    vmovsd  [rsp+88h+var_28], xmm1
  }
  G_XCompositeModel_InitModelsRecursive(CompositeModel, -1, (const scr_string_t)0, &v13, &v14, maxNumModels, ent, outNumModels, outDObjModels, setEntityPosition, 0);
  if ( *outNumModels > 0x1Cu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 243, ASSERT_TYPE_ASSERT, "( outNumModels <= (32 - 4) )", "Error: CompositeModel: %s, has too many submodels.", CompositeModel->name) )
    __debugbreak();
}

/*
==============
G_XCompositeModel_InitModelsRecursive
==============
*/
char G_XCompositeModel_InitModelsRecursive(const XCompositeModelDef *const compositeModel, const int recursiveParentSlot, const scr_string_t recursiveParentBoneName, const vec3_t *recursiveOffsets, const vec4_t *recursiveQuat, const unsigned int maxNumModels, gentity_s *outEnt, unsigned __int16 *outNumModels, DObjModel *outDobjModels, const bool setEntityPosition, const bool isScriptable)
{
  const vec3_t *v11; 
  int v13; 
  unsigned __int16 v14; 
  unsigned int v15; 
  unsigned __int16 ModelIndex; 
  int v17; 
  int v18; 
  scr_string_t stringValue; 
  int parentSlot; 
  unsigned int v25; 
  int modelStartIndex; 
  XCompositeModelDef *compositeModela; 
  scr_string_t recursiveParentBoneNamea; 
  int recursiveParentSlota; 
  vec3_t recursiveOffsetsa; 
  XCompositeSubmodel *submodel[2]; 
  vec3_t offsets; 
  vec3_t recursiveQuata; 
  vec3_t origin; 
  vec4_t quat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> outResultMat; 
  int remap[12]; 
  BgXCompositeModelSortInfo outSortInfos; 

  v11 = recursiveOffsets;
  recursiveParentSlota = recursiveParentSlot;
  *(_QWORD *)recursiveQuata.v = recursiveQuat;
  compositeModela = (XCompositeModelDef *)recursiveOffsets;
  recursiveParentBoneNamea = recursiveParentBoneName;
  *(_QWORD *)origin.v = outNumModels;
  BG_XCompositeModel_SortSubmodels(compositeModel, 10, 10, &outSortInfos, remap);
  v13 = *outNumModels;
  v14 = *outNumModels;
  modelStartIndex = v13;
  v15 = 0;
  v25 = 0;
  do
  {
    submodel[0] = NULL;
    *(_QWORD *)recursiveOffsetsa.v = 0i64;
    if ( !BG_XCompositeModel_GetSubmodelInfo(compositeModel, &outSortInfos, remap, v15, v13, (const XCompositeSubmodel **)submodel, (XModel **)&recursiveOffsetsa, &offsets, &quat, &parentSlot) )
      break;
    if ( !submodel[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 98, ASSERT_TYPE_ASSERT, "( submodel )", (const char *)&queryFormat, "submodel") )
      __debugbreak();
    if ( !*(_QWORD *)recursiveOffsetsa.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 99, ASSERT_TYPE_ASSERT, "( model )", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( v14 )
    {
      if ( parentSlot >= 0 || submodel[0]->parentBoneName == scr_const._ )
        BG_XCompositeModel_GetParentBone(compositeModel, submodel[0], outDobjModels, parentSlot, &stringValue);
      else
        BG_XCompositeModel_CalculateSubmodelOffsets(compositeModel, submodel[0], outDobjModels, recursiveParentSlota, recursiveParentBoneNamea, v11, *(const vec4_t **)recursiveQuata.v, &offsets, &quat, &parentSlot, &stringValue);
      if ( !outEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 115, ASSERT_TYPE_ASSERT, "(outEnt)", (const char *)&queryFormat, "outEnt") )
        __debugbreak();
      if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 116, ASSERT_TYPE_ASSERT, "( parentBoneName != ( static_cast< scr_string_t >( 0 ) ) )", "Error: CompositeModel: %s, submodel: %s couldn't find a parentBoneName.", compositeModel->name, submodel[0]->modelName) )
        __debugbreak();
      if ( !isScriptable )
      {
        if ( setEntityPosition )
        {
          SL_AddRefToString(stringValue);
          *(_DWORD *)&outEnt->attachModelNames[2 * v14 + 26] = stringValue;
        }
        else
        {
          Scr_SetString((scr_string_t *)&outEnt->attachModelNames[2 * v14 + 26], stringValue);
        }
        ModelIndex = G_CString_GetModelIndex(**(const char ***)recursiveOffsetsa.v);
        *((_WORD *)&outEnt->pAnimTree + v14 + 3) = ModelIndex;
        if ( G_Utils_IsIndexCompositeModel(ModelIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 130, ASSERT_TYPE_ASSERT, "( !G_Utils_IsIndexCompositeModel( outEnt->attachModelNames[numModels - 1] ) )", (const char *)&queryFormat, "!G_Utils_IsIndexCompositeModel( outEnt->attachModelNames[numModels - 1] )") )
          __debugbreak();
        v15 = v25;
        v11 = (const vec3_t *)compositeModela;
      }
    }
    else
    {
      BG_XCompositeModel_SetupRootModel(v11, *(const vec4_t **)recursiveQuata.v, &offsets, &quat, &stringValue, &outResultMat);
      if ( !outEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 138, ASSERT_TYPE_ASSERT, "(outEnt)", (const char *)&queryFormat, "outEnt") )
        __debugbreak();
      if ( !isScriptable && !outEnt->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 139, ASSERT_TYPE_ASSERT, "( isScriptable || outEnt->model != 0 )", "Composite model %s has no model field.", compositeModel->name) )
        __debugbreak();
      if ( setEntityPosition )
      {
        AnglesAndOriginToMatrix43(&outEnt->r.currentAngles, &outEnt->r.currentOrigin, &result);
        MatrixMultiply43(&outResultMat, &result, &out);
        __asm { vmovsd  xmm0, qword ptr [rbp+180h+out+24h] }
        origin.v[2] = out.m[3].v[2];
        __asm { vmovsd  qword ptr [rbp+180h+origin], xmm0 }
        AxisToAngles((const tmat33_t<vec3_t> *)&out, &recursiveQuata);
        G_SetOriginAndAngle(outEnt, &origin, &recursiveQuata, 1, 1);
        return 0;
      }
    }
    if ( (unsigned int)v14 + 1 > maxNumModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 160, ASSERT_TYPE_ASSERT, "( static_cast<uint>( numModels ) + 1 <= maxNumModels )", "Error: CompositeModel: %s, has too many submodels. It will stomp memory.", compositeModel->name) )
      __debugbreak();
    DObjInitSubmodel(*(const XModel *const *)recursiveOffsetsa.v, stringValue, parentSlot, &offsets, &quat, 0, 0, NULL, &outDobjModels[v14]);
    v13 = modelStartIndex;
    ++v15;
    ++v14;
    v25 = v15;
  }
  while ( v15 < 0xA );
  v17 = 0;
  **(_WORD **)origin.v = v14;
  v18 = modelStartIndex;
  while ( 1 )
  {
    compositeModela = NULL;
    if ( BG_XCompositeModel_CalculateSubCompositeModelInfo(compositeModel, remap, v17, v18, recursiveParentSlota, recursiveParentBoneNamea, v11, *(const vec4_t **)recursiveQuata.v, (const XCompositeModelDef **)&compositeModela, &offsets, &quat, &parentSlot, (scr_string_t *)&modelStartIndex) )
    {
      if ( !compositeModela && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 183, ASSERT_TYPE_ASSERT, "( subCompositeModel )", (const char *)&queryFormat, "subCompositeModel") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+180h+quat]
        vmovsd  xmm1, qword ptr [rbp+180h+offsets]
      }
      recursiveOffsetsa.v[2] = offsets.v[2];
      __asm
      {
        vmovdqa xmmword ptr [rbp+180h+submodel], xmm0
        vmovsd  qword ptr [rbp+180h+recursiveOffsets], xmm1
      }
      if ( !G_XCompositeModel_InitModelsRecursive(compositeModela, parentSlot, (const scr_string_t)modelStartIndex, &recursiveOffsetsa, (const vec4_t *)submodel, maxNumModels, outEnt, *(unsigned __int16 **)origin.v, outDobjModels, setEntityPosition, isScriptable) )
        break;
    }
    if ( (unsigned int)++v17 >= 0xA )
      return 1;
  }
  return 0;
}

/*
==============
G_XCompositeModel_InitNetConstCompositeModels_Callback
==============
*/
void G_XCompositeModel_InitNetConstCompositeModels_Callback(const unsigned int modelIndex, const char *name)
{
  G_Utils_SetCachedCompositeModel(name, modelIndex);
}

/*
==============
G_XCompositeModel_PrecacheModels
==============
*/

void __fastcall G_XCompositeModel_PrecacheModels(const XCompositeModelDef *const compositeModel)
{
  G_XCompositeModel_PrecacheModelsRecursive(compositeModel);
}

/*
==============
G_XCompositeModel_PrecacheModelsRecursive
==============
*/
void G_XCompositeModel_PrecacheModelsRecursive(const XCompositeModelDef *const compositeModel)
{
  XCompositeSubmodel *submodels; 
  int *p_index; 
  __int64 v4; 
  unsigned int i; 
  __int64 v6; 
  XCompositeSubmodel *v7; 
  const char *name; 
  __int64 v9; 
  XCompositeModelDef *v10; 
  int outRemapArray[10]; 
  BgXCompositeModelSortInfo outSortInfos; 

  BG_XCompositeModel_SortSubmodels(compositeModel, 10, 10, &outSortInfos, outRemapArray);
  submodels = compositeModel->submodels;
  p_index = &outSortInfos.index;
  v4 = 0i64;
  for ( i = 0; i < 0xA; ++i )
  {
    v6 = *p_index;
    if ( (int)v6 < 0 )
      break;
    v7 = &submodels[v6];
    if ( !v7 )
      break;
    name = v7->model->name;
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, name);
    p_index += 3;
  }
  v9 = 10i64;
  do
  {
    v10 = compositeModel->subCompositeModels[v4].compositeModel;
    if ( v10 )
      G_XCompositeModel_PrecacheModelsRecursive(v10);
    ++v4;
    --v9;
  }
  while ( v9 );
}

/*
==============
G_XCompositeModel_SetIndex
==============
*/
void G_XCompositeModel_SetIndex(const int index, entityType_s entityType, gentity_s *outEnt)
{
  if ( index && !G_Utils_IsIndexCompositeModel(index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 376, ASSERT_TYPE_ASSERT, "( index == 0 || G_Utils_IsIndexCompositeModel( index ) )", (const char *)&queryFormat, "index == 0 || G_Utils_IsIndexCompositeModel( index )") )
    __debugbreak();
  if ( entityType == ET_SCRIPTMOVER )
  {
    outEnt->s.lerp.u.anonymous.data[1] = index;
  }
  else if ( ((entityType - 12) & 0xFFFD) != 0 )
  {
    if ( index )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 388, ASSERT_TYPE_ASSERT, "(index == 0)", "%s\n\tEntity Type %d not implemented for XCompositeModel", "index == 0", outEnt->s.eType) )
        __debugbreak();
    }
  }
  else
  {
    outEnt->s.un.vehicleXModel = index;
  }
}

/*
==============
G_XCompositeModel_SetModel
==============
*/
void G_XCompositeModel_SetModel(gentity_s *const ent, entityType_s entityType)
{
  int vehicleXModel; 
  const XCompositeModelDef *CompositeModel; 

  if ( entityType == ET_SCRIPTMOVER )
  {
    vehicleXModel = ent->s.lerp.u.anonymous.data[1];
    goto LABEL_6;
  }
  if ( entityType == ET_HELICOPTER || (unsigned __int16)(entityType - 14) <= 2u )
  {
    vehicleXModel = ent->s.un.vehicleXModel;
LABEL_6:
    if ( vehicleXModel && G_Utils_IsIndexCompositeModel(vehicleXModel) )
      goto LABEL_10;
  }
  vehicleXModel = 0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 300, ASSERT_TYPE_ASSERT, "( compositeModelIndex != 0 )", "Error: Compositemodel could not be found, index was 0.") )
    __debugbreak();
LABEL_10:
  CompositeModel = G_Utils_GetCompositeModel(vehicleXModel);
  if ( !CompositeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 302, ASSERT_TYPE_ASSERT, "( compositeModel != nullptr )", "Error: CompositeModel with index: %d could not be found.", vehicleXModel) )
    __debugbreak();
  G_XCompositeModel_SetModelRecursive(CompositeModel, ent);
  if ( !ent->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 305, ASSERT_TYPE_ASSERT, "( ent->model != 0 )", "Composite model %s failed to set model on ent.", CompositeModel->name) )
    __debugbreak();
}

/*
==============
G_XCompositeModel_SetModelRecursive
==============
*/
char G_XCompositeModel_SetModelRecursive(const XCompositeModelDef *const compositeModel, gentity_s *outEnt)
{
  XCompositeSubmodel *v4; 
  int v6; 
  __int64 i; 
  XCompositeModelDef *v8; 
  int outRemapArray[12]; 
  BgXCompositeModelSortInfo outSortInfos; 

  BG_XCompositeModel_SortSubmodels(compositeModel, 10, 10, &outSortInfos, outRemapArray);
  if ( outSortInfos.index == -1 )
  {
    v6 = 0;
    for ( i = 0i64; ; ++i )
    {
      v8 = compositeModel->subCompositeModels[i].compositeModel;
      if ( v8 )
      {
        if ( !G_XCompositeModel_SetModelRecursive(v8, outEnt) )
          break;
      }
      if ( (unsigned int)++v6 >= 0xA )
        return 1;
    }
  }
  else
  {
    v4 = &compositeModel->submodels[outSortInfos.index];
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 43, ASSERT_TYPE_ASSERT, "( submodel )", (const char *)&queryFormat, "submodel") )
      __debugbreak();
    if ( !v4->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_xcompositemodel.cpp", 44, ASSERT_TYPE_ASSERT, "( submodel->model )", (const char *)&queryFormat, "submodel->model") )
      __debugbreak();
    G_Utils_SetModel(outEnt, v4->model->name);
  }
  return 0;
}

/*
==============
G_XCompositeModel_SetPosition
==============
*/
void G_XCompositeModel_SetPosition(gentity_s *const ent, entityType_s entityType)
{
  unsigned __int16 outNumModels[8]; 
  DObjModel outDObjModels; 

  outNumModels[0] = 0;
  G_XCompositeModel_InitForType(ent, entityType, 1, 254, outNumModels, &outDObjModels);
}

