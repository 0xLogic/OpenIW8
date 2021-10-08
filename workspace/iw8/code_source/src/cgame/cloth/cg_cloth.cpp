/*
==============
CG_Cloth_GetRefSystemEntryId
==============
*/

unsigned __int16 __fastcall CG_Cloth_GetRefSystemEntryId(const unsigned int ref)
{
  return ?CG_Cloth_GetRefSystemEntryId@@YAGI@Z(ref);
}

/*
==============
CG_Cloth_MakeRef
==============
*/

unsigned int __fastcall CG_Cloth_MakeRef(const CG_Cloth_Ref_System system, const unsigned __int16 systemEntryId, const unsigned __int8 systemEntrySubId)
{
  return ?CG_Cloth_MakeRef@@YAIW4CG_Cloth_Ref_System@@GE@Z(system, systemEntryId, systemEntrySubId);
}

/*
==============
CG_Cloth_DObjToClothInstances
==============
*/

void __fastcall CG_Cloth_DObjToClothInstances(const LocalClientNum_t localClientNum, const DObj *dObj, unsigned int *globalWorldId, unsigned int *instanceCount, unsigned int **instanceIds)
{
  ?CG_Cloth_DObjToClothInstances@@YAXW4LocalClientNum_t@@PEBUDObj@@PEAI2PEAPEAI@Z(localClientNum, dObj, globalWorldId, instanceCount, instanceIds);
}

/*
==============
CG_Cloth_ConvertRefToString
==============
*/

void __fastcall CG_Cloth_ConvertRefToString(const LocalClientNum_t localClientNum, const unsigned int ref, char *const strBuffer, const unsigned int strBufferSize)
{
  ?CG_Cloth_ConvertRefToString@@YAXW4LocalClientNum_t@@IQEADI@Z(localClientNum, ref, strBuffer, strBufferSize);
}

/*
==============
CG_Cloth_ConvertRefToEntNum
==============
*/

unsigned int __fastcall CG_Cloth_ConvertRefToEntNum(const LocalClientNum_t localClientNum, const unsigned int ref)
{
  return ?CG_Cloth_ConvertRefToEntNum@@YAIW4LocalClientNum_t@@I@Z(localClientNum, ref);
}

/*
==============
CG_Cloth_GetRefSystem
==============
*/

CG_Cloth_Ref_System __fastcall CG_Cloth_GetRefSystem(const unsigned int ref)
{
  return ?CG_Cloth_GetRefSystem@@YA?AW4CG_Cloth_Ref_System@@I@Z(ref);
}

/*
==============
CG_Cloth_GetRefSystemEntrySubId
==============
*/

unsigned __int8 __fastcall CG_Cloth_GetRefSystemEntrySubId(const unsigned int ref)
{
  return ?CG_Cloth_GetRefSystemEntrySubId@@YAEI@Z(ref);
}

/*
==============
CG_Cloth_ConvertRefToEntNum
==============
*/
__int64 CG_Cloth_ConvertRefToEntNum(const LocalClientNum_t localClientNum, const unsigned int ref)
{
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 

  v3 = ref >> 8;
  v4 = HIBYTE(ref);
  if ( !v4 )
    return (unsigned int)(unsigned __int16)v3 + 2117;
  v5 = v4 - 1;
  if ( !v5 )
    return (unsigned __int16)v3;
  if ( v5 == 1 )
    return 2114i64;
  return 2047i64;
}

/*
==============
CG_Cloth_ConvertRefToString
==============
*/
void CG_Cloth_ConvertRefToString(const LocalClientNum_t localClientNum, const unsigned int ref, char *const strBuffer, const unsigned int strBufferSize)
{
  unsigned __int64 v4; 
  unsigned int v8; 
  const XModel *Model; 
  unsigned __int8 v10; 
  ClothAsset *v11; 
  __int64 v12; 
  const char *v13; 
  DObj *ClientDObj; 
  const XModel *v15; 
  ClothAsset *v16; 
  unsigned __int8 numClothAssets; 
  __int64 v18; 

  v4 = strBufferSize;
  if ( !strBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 67, ASSERT_TYPE_ASSERT, "(strBuffer)", (const char *)&queryFormat, "strBuffer") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 68, ASSERT_TYPE_ASSERT, "(strBufferSize > 0)", (const char *)&queryFormat, "strBufferSize > 0") )
    __debugbreak();
  v8 = ref >> 8;
  if ( !HIBYTE(ref) )
  {
    Model = CG_ClientModel_GetModel(localClientNum, (unsigned __int16)v8, 0);
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 82, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
      __debugbreak();
    numClothAssets = Model->numClothAssets;
    if ( (unsigned __int8)ref >= numClothAssets )
    {
      LODWORD(v18) = (unsigned __int8)ref;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( systemEntrySubId ) < (unsigned)( xmodel->numClothAssets )", "systemEntrySubId doesn't index xmodel->numClothAssets\n\t%i not in [0, %i)", v18, numClothAssets) )
        __debugbreak();
    }
    if ( !Model->clothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 84, ASSERT_TYPE_ASSERT, "(xmodel->clothAssets)", (const char *)&queryFormat, "xmodel->clothAssets") )
      __debugbreak();
    v11 = Model->clothAssets[(unsigned __int8)ref];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 86, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
      __debugbreak();
    v12 = (unsigned __int16)v8;
    v13 = "ClientModel:%i Model:%s Cloth asset %s";
LABEL_56:
    Com_sprintf(strBuffer, v4, v13, v12, Model->name, v11->name);
    return;
  }
  if ( HIBYTE(ref) != 1 )
  {
    if ( HIBYTE(ref) != 2 )
    {
      Com_sprintf(strBuffer, v4, "Unknown Cloth Ref %i", ref);
      return;
    }
    Model = *Com_GetClientDObj(2114, localClientNum)->models;
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 98, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
      __debugbreak();
    v10 = Model->numClothAssets;
    if ( (unsigned __int8)ref >= v10 )
    {
      LODWORD(v18) = (unsigned __int8)ref;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( systemEntrySubId ) < (unsigned)( xmodel->numClothAssets )", "systemEntrySubId doesn't index xmodel->numClothAssets\n\t%i not in [0, %i)", v18, v10) )
        __debugbreak();
    }
    if ( !Model->clothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 100, ASSERT_TYPE_ASSERT, "(xmodel->clothAssets)", (const char *)&queryFormat, "xmodel->clothAssets") )
      __debugbreak();
    v11 = Model->clothAssets[(unsigned __int8)ref];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 102, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
      __debugbreak();
    v12 = (unsigned __int16)v8;
    v13 = "PlayerLegs:%i Model:%s Cloth asset %s";
    goto LABEL_56;
  }
  ClientDObj = Com_GetClientDObj((unsigned __int16)v8, localClientNum);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 112, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !ClientDObj->numModels )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 113, ASSERT_TYPE_ASSERT, "(dobj->numModels > 0)", (const char *)&queryFormat, "dobj->numModels > 0") )
      __debugbreak();
    if ( !ClientDObj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 144, ASSERT_TYPE_ASSERT, "(modelIdx < numModels)", (const char *)&queryFormat, "modelIdx < numModels") )
      __debugbreak();
  }
  v15 = *ClientDObj->models;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 146, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( !v15->numClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 148, ASSERT_TYPE_ASSERT, "(clothAssetIdx < model->numClothAssets)", (const char *)&queryFormat, "clothAssetIdx < model->numClothAssets") )
    __debugbreak();
  v16 = *v15->clothAssets;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 150, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  Com_sprintf(strBuffer, v4, "ClientEntity:%i Model:%s Cloth asset %s", (unsigned __int16)v8, v15->name, v16->name);
}

/*
==============
CG_Cloth_DObjToClothInstances
==============
*/
void CG_Cloth_DObjToClothInstances(const LocalClientNum_t localClientNum, const DObj *dObj, unsigned int *globalWorldId, unsigned int *instanceCount, unsigned int **instanceIds)
{
  int v9; 

  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 212, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !globalWorldId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 213, ASSERT_TYPE_ASSERT, "(globalWorldId)", (const char *)&queryFormat, "globalWorldId") )
    __debugbreak();
  if ( !instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 214, ASSERT_TYPE_ASSERT, "(instanceCount)", (const char *)&queryFormat, "instanceCount") )
    __debugbreak();
  if ( !instanceIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth.cpp", 215, ASSERT_TYPE_ASSERT, "(instanceIds)", (const char *)&queryFormat, "instanceIds") )
    __debugbreak();
  v9 = dObj->entnum - 1;
  if ( v9 >= 2048 )
  {
    if ( (unsigned int)(v9 - 2117) > 0x17F )
    {
      if ( v9 == 2114 )
      {
        *globalWorldId = localClientNum;
        CG_Cloth_Legs_GetInstanceIds(localClientNum, instanceCount, instanceIds);
      }
      else
      {
        *instanceCount = 0;
      }
    }
    else
    {
      *globalWorldId = localClientNum;
      CG_ClientModel_GetClothInstanceIds(localClientNum, v9 - 2117, instanceCount, instanceIds);
    }
  }
  else
  {
    *globalWorldId = localClientNum;
    if ( CG_Cloth_Entity_HasClothBinding(localClientNum, v9) )
      CG_Cloth_Entity_GetClothInstanceIds(localClientNum, v9, instanceCount, instanceIds);
  }
}

/*
==============
CG_Cloth_GetRefSystem
==============
*/
__int64 CG_Cloth_GetRefSystem(const unsigned int ref)
{
  return HIBYTE(ref);
}

/*
==============
CG_Cloth_GetRefSystemEntryId
==============
*/
__int64 CG_Cloth_GetRefSystemEntryId(const unsigned int ref)
{
  return (unsigned __int16)(ref >> 8);
}

/*
==============
CG_Cloth_GetRefSystemEntrySubId
==============
*/
__int64 CG_Cloth_GetRefSystemEntrySubId(const unsigned int ref)
{
  return (unsigned __int8)ref;
}

/*
==============
CG_Cloth_MakeRef
==============
*/
__int64 CG_Cloth_MakeRef(const CG_Cloth_Ref_System system, const unsigned __int16 systemEntryId, const unsigned __int8 systemEntrySubId)
{
  return ((systemEntryId | (system << 16)) << 8) | (unsigned int)systemEntrySubId;
}

