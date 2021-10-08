/*
==============
CG_Cloth_Legs_SetupModel
==============
*/

void __fastcall CG_Cloth_Legs_SetupModel(const LocalClientNum_t localClientNum, const cpose_t *pose, DObj *dObj)
{
  ?CG_Cloth_Legs_SetupModel@@YAXW4LocalClientNum_t@@PEBUcpose_t@@PEAUDObj@@@Z(localClientNum, pose, dObj);
}

/*
==============
CG_Cloth_Legs_DeactivateClothNode
==============
*/

void __fastcall CG_Cloth_Legs_DeactivateClothNode(const LocalClientNum_t localClientNum, DObj *dObj)
{
  ?CG_Cloth_Legs_DeactivateClothNode@@YAXW4LocalClientNum_t@@PEAUDObj@@@Z(localClientNum, dObj);
}

/*
==============
CG_Cloth_Legs_ShouldCreateCloth
==============
*/

bool __fastcall CG_Cloth_Legs_ShouldCreateCloth(const LocalClientNum_t localClientNum, const DObj *dobj)
{
  return ?CG_Cloth_Legs_ShouldCreateCloth@@YA_NW4LocalClientNum_t@@PEBUDObj@@@Z(localClientNum, dobj);
}

/*
==============
CG_Cloth_Legs_ActivateClothNode
==============
*/

void __fastcall CG_Cloth_Legs_ActivateClothNode(const LocalClientNum_t localClientNum, DObj *dObj)
{
  ?CG_Cloth_Legs_ActivateClothNode@@YAXW4LocalClientNum_t@@PEAUDObj@@@Z(localClientNum, dObj);
}

/*
==============
CG_Cloth_Legs_GetInstanceIds
==============
*/

void __fastcall CG_Cloth_Legs_GetInstanceIds(const LocalClientNum_t localClientNum, unsigned int *instanceCount, unsigned int **instanceIds)
{
  ?CG_Cloth_Legs_GetInstanceIds@@YAXW4LocalClientNum_t@@PEAIPEAPEAI@Z(localClientNum, instanceCount, instanceIds);
}

/*
==============
CG_Cloth_Legs_IsInitialized
==============
*/

bool __fastcall CG_Cloth_Legs_IsInitialized(const LocalClientNum_t localClientNum)
{
  return ?CG_Cloth_Legs_IsInitialized@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Cloth_Legs_DestroyModel
==============
*/

void __fastcall CG_Cloth_Legs_DestroyModel(const LocalClientNum_t localClientNum)
{
  ?CG_Cloth_Legs_DestroyModel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Cloth_Legs_Shutdown
==============
*/

void __fastcall CG_Cloth_Legs_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_Cloth_Legs_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Cloth_Legs_Init
==============
*/

void __fastcall CG_Cloth_Legs_Init(const LocalClientNum_t localClientNum)
{
  ?CG_Cloth_Legs_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Cloth_Legs_ActivateClothNode
==============
*/
void CG_Cloth_Legs_ActivateClothNode(const LocalClientNum_t localClientNum, DObj *dObj)
{
  const XModel **models; 
  const char *name; 
  const char *v6; 
  unsigned __int8 v7; 

  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 291, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( dObj->numModels && (models = dObj->models, *models) )
    name = (*models)->name;
  else
    name = "Unknown";
  v6 = j_va("Player Legs %s", name);
  Cloth_AnimTreeNode_EnableClothNode(v6, dObj, 0);
  v7 = truncate_cast<unsigned char,enum LocalClientNum_t>(localClientNum);
  if ( !XAnimSetByteGameParameterByName(dObj, scr_const.xanimClothLCN, v7) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CF7B60, 6052i64, dObj->tree->anims->debugName);
  XAnimSetBoolGameParameterByName(dObj, scr_const.xanimClothHide, 1);
}

/*
==============
CG_Cloth_Legs_DeactivateClothNode
==============
*/
void CG_Cloth_Legs_DeactivateClothNode(const LocalClientNum_t localClientNum, DObj *dObj)
{
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 311, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  Cloth_AnimTreeNode_DisableClothNode(dObj, 0);
}

/*
==============
CG_Cloth_Legs_DestroyModel
==============
*/
void CG_Cloth_Legs_DestroyModel(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CG_Cloth_Legs_RuntimeData *v2; 
  unsigned int m_size; 
  unsigned __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned __int64 i; 
  unsigned int *m_buffer; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 184, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  v2 = s_CG_Cloth_Legs_RuntimeData[v1];
  m_size = v2->clothInstances.m_data.m_size;
  if ( m_size )
  {
    v4 = 0i64;
    v5 = m_size;
    while ( 1 )
    {
      if ( v4 >= v2->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v4 >= v2->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v6 = v2->clothInstances.m_data.m_buffer[v4];
      if ( com_errorEnteredCount <= 0 )
        break;
      if ( v6 != -1 )
        goto LABEL_18;
LABEL_19:
      ++v4;
      if ( !--v5 )
      {
        for ( i = 0i64; i < v2->clothInstances.m_data.m_size; ++i )
          ;
        m_buffer = v2->clothInstances.m_data.m_buffer;
        if ( v2->clothInstances.m_data.m_buffer )
        {
          if ( !ntl::static_shared_allocator<CG_Cloth_Legs_InstanceAllocator,ntl::fixed_heap_allocator<56,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
            __debugbreak();
          ntl::nxheap::free(&ntl::static_shared_allocator<CG_Cloth_Legs_InstanceAllocator,ntl::fixed_heap_allocator<56,0>>::mp_allocator->m_heap, m_buffer);
          v2->clothInstances.m_data.m_buffer = NULL;
          v2->clothInstances.m_data.m_size = 0i64;
        }
        return;
      }
    }
    if ( v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 205, ASSERT_TYPE_ASSERT, "(clothInstanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "clothInstanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
LABEL_18:
    Cloth_DestroyInstance(v1, v6);
    goto LABEL_19;
  }
}

/*
==============
CG_Cloth_Legs_GetInstanceIds
==============
*/
void CG_Cloth_Legs_GetInstanceIds(const LocalClientNum_t localClientNum, unsigned int *instanceCount, unsigned int **instanceIds)
{
  __int64 v3; 
  CG_Cloth_Legs_RuntimeData *v6; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 218, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 219, ASSERT_TYPE_ASSERT, "(instanceCount)", (const char *)&queryFormat, "instanceCount") )
    __debugbreak();
  if ( !instanceIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 220, ASSERT_TYPE_ASSERT, "(instanceIds)", (const char *)&queryFormat, "instanceIds") )
    __debugbreak();
  v6 = s_CG_Cloth_Legs_RuntimeData[v3];
  *instanceCount = v6->clothInstances.m_data.m_size;
  *instanceIds = v6->clothInstances.m_data.m_buffer;
}

/*
==============
CG_Cloth_Legs_Init
==============
*/
void CG_Cloth_Legs_Init(const LocalClientNum_t localClientNum)
{
  if ( !s_CG_Cloth_Legs_AllocatorsSetup )
  {
    s_CG_Cloth_Legs_AllocatorsSetup = 1;
    ntl::static_shared_allocator<CG_Cloth_Legs_InstanceAllocator,ntl::fixed_heap_allocator<56,0>>::mp_allocator = &s_cg_Cloth_Legs_InstanceAllocator;
  }
}

/*
==============
CG_Cloth_Legs_IsInitialized
==============
*/
_BOOL8 CG_Cloth_Legs_IsInitialized(const LocalClientNum_t localClientNum)
{
  int v3; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  return s_CG_Cloth_Legs_AllocatorsSetup;
}

/*
==============
CG_Cloth_Legs_SetupModel
==============
*/
void CG_Cloth_Legs_SetupModel(const LocalClientNum_t localClientNum, const cpose_t *pose, DObj *dObj)
{
  __int64 v7; 
  unsigned int v8; 
  const XModel *v9; 
  unsigned __int64 numClothAssets; 
  const XModel **models; 
  const char *name; 
  const char *v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  CG_Cloth_Legs_RuntimeData *v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned int *v19; 
  unsigned __int64 v20; 
  DObj *v21; 
  const cpose_t *v22; 
  unsigned __int64 v23; 
  const ClothAsset **v25; 
  const ClothAsset *v26; 
  unsigned int Ref; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  unsigned int v41; 
  vec3_t posea; 
  unsigned int globalWorldId; 
  const ClothAsset **clothAssets; 
  DObj *v46; 
  __int64 v47; 
  vec4_t quat; 
  void *retaddr; 

  _RAX = &retaddr;
  v47 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v46 = dObj;
  *(_QWORD *)posea.v = pose;
  v7 = localClientNum;
  globalWorldId = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 102, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  v8 = 0;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 103, ASSERT_TYPE_ASSERT, "( pose ) != ( nullptr )", "%s != %s\n\t%p, %p", "pose", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 104, ASSERT_TYPE_ASSERT, "( dObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "dObj", "nullptr", NULL, NULL) )
    __debugbreak();
  AnglesToQuat(&pose->angles, &quat);
  if ( !dObj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 111, ASSERT_TYPE_ASSERT, "(dObj->numModels > 0)", (const char *)&queryFormat, "dObj->numModels > 0") )
    __debugbreak();
  v9 = *dObj->models;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 113, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numClothAssets = v9->numClothAssets;
  if ( !v9->numClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", numClothAssets + 115, ASSERT_TYPE_ASSERT, "(numClothAssets > 0)", (const char *)&queryFormat, "numClothAssets > 0") )
    __debugbreak();
  clothAssets = (const ClothAsset **)v9->clothAssets;
  if ( !clothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 117, ASSERT_TYPE_ASSERT, "(clothAssets)", (const char *)&queryFormat, "clothAssets") )
    __debugbreak();
  if ( dObj->numModels && (models = dObj->models, *models) )
    name = (*models)->name;
  else
    name = "Unknown";
  v13 = j_va("Player Legs %s", name);
  Cloth_AnimTreeNode_EnableClothNode(v13, dObj, 0);
  v14 = truncate_cast<unsigned char,enum LocalClientNum_t>((LocalClientNum_t)v7);
  if ( !XAnimSetByteGameParameterByName(dObj, scr_const.xanimClothLCN, v14) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CF7B60, 6052i64, dObj->tree->anims->debugName);
  XAnimSetBoolGameParameterByName(dObj, scr_const.xanimClothHide, 1);
  v15 = truncate_cast<unsigned char,enum LocalClientNum_t>((LocalClientNum_t)v7);
  if ( !XAnimSetByteGameParameterByName(dObj, scr_const.xanimClothLCN, v15) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CF7940, 6050i64, dObj->tree->anims->debugName);
  v16 = s_CG_Cloth_Legs_RuntimeData[v7];
  if ( v16->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 135, ASSERT_TYPE_ASSERT, "(runtimeData->clothInstances.size() == 0)", (const char *)&queryFormat, "runtimeData->clothInstances.size() == 0") )
    __debugbreak();
  v17 = numClothAssets;
  if ( v16->clothInstances.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
    __debugbreak();
  if ( !ntl::static_shared_allocator<CG_Cloth_Legs_InstanceAllocator,ntl::fixed_heap_allocator<56,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
    __debugbreak();
  v16->clothInstances.m_data.m_buffer = (unsigned int *)ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_Cloth_Legs_InstanceAllocator,ntl::fixed_heap_allocator<56,0>>::mp_allocator->m_heap, 4 * numClothAssets, 4ui64, 1);
  v16->clothInstances.m_data.m_size = numClothAssets;
  v18 = 0i64;
  if ( (_DWORD)numClothAssets )
  {
    do
    {
      if ( v18 >= v16->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
      v19 = &v16->clothInstances.m_data.m_buffer[v18];
      if ( v19 )
        *v19 = 0;
      ++v18;
    }
    while ( v18 < numClothAssets );
    v20 = 0i64;
    do
    {
      if ( v20 >= v16->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v20 >= v16->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v16->clothInstances.m_data.m_buffer[v20++] = -1;
      --v17;
    }
    while ( v17 );
    v21 = v46;
    v22 = *(const cpose_t **)posea.v;
    v23 = 0i64;
    __asm { vmovsd  xmm6, cs:__real@3f30000000000000 }
    v25 = clothAssets;
    do
    {
      v26 = *v25;
      if ( !*v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 149, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
        __debugbreak();
      if ( v8 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v8, "unsigned", v23) )
        __debugbreak();
      Ref = CG_Cloth_MakeRef(CG_CLOTH_REF_SYSTEM_PLAYER_LEGS, 0x842u, v8);
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !v22->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v22->origin.Get_origin, v22);
      FunctionPointer_origin(&v22->origin.origin.origin, &posea);
      if ( v22->isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, dword ptr [rsp+0E8h+pose]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+0E8h+pose], xmm2
          vmovd   xmm0, dword ptr [rsp+0E8h+pose+4]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  dword ptr [rsp+0E8h+pose+4], xmm2
          vmovd   xmm0, [rsp+0E8h+var_90]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  [rsp+0E8h+var_90], xmm2
        }
      }
      v41 = Cloth_InstantiateAsset(globalWorldId, v26, Ref, Cloth_OwnerType_Character, &posea, &quat, v21, 0);
      if ( v41 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 160, ASSERT_TYPE_ASSERT, "(clothInstanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "clothInstanceId != CLOTH_INSTANCEID_INVALID") )
        __debugbreak();
      if ( v23 >= v16->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v23 >= v16->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v16->clothInstances.m_data.m_buffer[v23] = v41;
      memset(&posea, 0, sizeof(posea));
      ++v8;
      ++v23;
      v25 = ++clothAssets;
    }
    while ( v8 < (unsigned int)numClothAssets );
  }
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
}

/*
==============
CG_Cloth_Legs_ShouldCreateCloth
==============
*/
bool CG_Cloth_Legs_ShouldCreateCloth(const LocalClientNum_t localClientNum, const DObj *dobj)
{
  __int64 v2; 
  const XModel *v4; 
  __int64 v6; 
  __int64 v7; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 233, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !Cloth_IsInitialized() )
    return 0;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !s_CG_Cloth_Legs_AllocatorsSetup || !Cloth_HasGlobalWorld(v2) || s_CG_Cloth_Legs_RuntimeData[v2][0].clothInstances.m_data.m_size || !dobj || !dobj->tree )
    return 0;
  if ( !dobj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 274, ASSERT_TYPE_ASSERT, "(dobj->numModels > 0)", (const char *)&queryFormat, "dobj->numModels > 0") )
    __debugbreak();
  v4 = *dobj->models;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 276, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return v4->numClothAssets != 0;
}

/*
==============
CG_Cloth_Legs_Shutdown
==============
*/

void __fastcall CG_Cloth_Legs_Shutdown(const LocalClientNum_t localClientNum)
{
  CG_Cloth_Legs_DestroyModel(localClientNum);
}

