/*
==============
GetSubmodelCount
==============
*/

int __fastcall GetSubmodelCount(const XCompositeModelDef *compositeModel)
{
  return ?GetSubmodelCount@@YAHPEBUXCompositeModelDef@@@Z(compositeModel);
}

/*
==============
GetSubmodelCountRecursive
==============
*/

int __fastcall GetSubmodelCountRecursive(const XCompositeModelDef *compositeModel)
{
  return ?GetSubmodelCountRecursive@@YAHPEBUXCompositeModelDef@@@Z(compositeModel);
}

/*
==============
XCompositeModelPrecache
==============
*/

XCompositeModelDef *__fastcall XCompositeModelPrecache(const char *name, void *(__fastcall *Alloc)(unsigned __int64), void *(__fastcall *AllocColl)(unsigned __int64))
{
  return ?XCompositeModelPrecache@@YAPEAUXCompositeModelDef@@PEBDP6APEAX_K@Z2@Z(name, Alloc, AllocColl);
}

/*
==============
GetSubCompositemodelCount
==============
*/

int __fastcall GetSubCompositemodelCount(const XCompositeModelDef *compositeModel)
{
  return ?GetSubCompositemodelCount@@YAHPEBUXCompositeModelDef@@@Z(compositeModel);
}

/*
==============
GetSubCompositemodelCount
==============
*/
__int64 GetSubCompositemodelCount(const XCompositeModelDef *compositeModel)
{
  XCompositeSubCompositeModel *subCompositeModels; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 result; 

  subCompositeModels = compositeModel->subCompositeModels;
  v2 = (subCompositeModels->compositeModel != NULL) + 1;
  if ( !subCompositeModels[1].compositeModel )
    v2 = subCompositeModels->compositeModel != NULL;
  v3 = v2 + 1;
  if ( !subCompositeModels[2].compositeModel )
    v3 = v2;
  v4 = v3 + 1;
  if ( !subCompositeModels[3].compositeModel )
    v4 = v3;
  v5 = v4 + 1;
  if ( !subCompositeModels[4].compositeModel )
    v5 = v4;
  v6 = v5 + 1;
  if ( !subCompositeModels[5].compositeModel )
    v6 = v5;
  v7 = v6 + 1;
  if ( !subCompositeModels[6].compositeModel )
    v7 = v6;
  v8 = v7 + 1;
  if ( !subCompositeModels[7].compositeModel )
    v8 = v7;
  v9 = v8 + 1;
  if ( !subCompositeModels[8].compositeModel )
    v9 = v8;
  result = v9 + 1;
  if ( !subCompositeModels[9].compositeModel )
    return v9;
  return result;
}

/*
==============
GetSubmodelCount
==============
*/
__int64 GetSubmodelCount(const XCompositeModelDef *compositeModel)
{
  XCompositeSubmodel *submodels; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 result; 

  submodels = compositeModel->submodels;
  v2 = (submodels->model != NULL) + 1;
  if ( !submodels[1].model )
    v2 = submodels->model != NULL;
  v3 = v2 + 1;
  if ( !submodels[2].model )
    v3 = v2;
  v4 = v3 + 1;
  if ( !submodels[3].model )
    v4 = v3;
  v5 = v4 + 1;
  if ( !submodels[4].model )
    v5 = v4;
  v6 = v5 + 1;
  if ( !submodels[5].model )
    v6 = v5;
  v7 = v6 + 1;
  if ( !submodels[6].model )
    v7 = v6;
  v8 = v7 + 1;
  if ( !submodels[7].model )
    v8 = v7;
  v9 = v8 + 1;
  if ( !submodels[8].model )
    v9 = v8;
  result = v9 + 1;
  if ( !submodels[9].model )
    return v9;
  return result;
}

/*
==============
GetSubmodelCountRecursive
==============
*/
__int64 GetSubmodelCountRecursive(const XCompositeModelDef *compositeModel)
{
  XCompositeSubmodel *submodels; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  XCompositeModelDef *v14; 

  if ( !compositeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xcompositemodel.cpp", 392, ASSERT_TYPE_ASSERT, "(compositeModel)", (const char *)&queryFormat, "compositeModel") )
    __debugbreak();
  submodels = compositeModel->submodels;
  v3 = 0i64;
  v4 = 10i64;
  v5 = (submodels->model != NULL) + 1;
  if ( !submodels[1].model )
    v5 = submodels->model != NULL;
  v6 = v5 + 1;
  if ( !submodels[2].model )
    v6 = v5;
  v7 = v6 + 1;
  if ( !submodels[3].model )
    v7 = v6;
  v8 = v7 + 1;
  if ( !submodels[4].model )
    v8 = v7;
  v9 = v8 + 1;
  if ( !submodels[5].model )
    v9 = v8;
  v10 = v9 + 1;
  if ( !submodels[6].model )
    v10 = v9;
  v11 = v10 + 1;
  if ( !submodels[7].model )
    v11 = v10;
  v12 = v11 + 1;
  if ( !submodels[8].model )
    v12 = v11;
  v13 = v12 + 1;
  if ( !submodels[9].model )
    v13 = v12;
  do
  {
    v14 = compositeModel->subCompositeModels[v3].compositeModel;
    if ( v14 )
      v13 += GetSubmodelCountRecursive(v14);
    ++v3;
    --v4;
  }
  while ( v4 );
  return v13;
}

/*
==============
XCompositeModelPrecache
==============
*/
XCompositeModelDef *XCompositeModelPrecache(const char *name, void *(*Alloc)(unsigned __int64), void *(*AllocColl)(unsigned __int64))
{
  return DB_FindXAssetHeader(ASSET_TYPE_XCOMPOSITEMODEL, name, 0).compositeModel;
}

