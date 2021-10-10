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
  __int64 v5; 
  unsigned int v6; 
  const XModel *v7; 
  unsigned __int64 numClothAssets; 
  const XModel **models; 
  const char *name; 
  const char *v11; 
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  CG_Cloth_Legs_RuntimeData *v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned int *v17; 
  unsigned __int64 v18; 
  DObj *v19; 
  const cpose_t *v20; 
  unsigned __int64 v21; 
  const ClothAsset **v22; 
  const ClothAsset *v23; 
  unsigned int Ref; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v29; 
  unsigned int v39; 
  vec3_t posea; 
  unsigned int globalWorldId; 
  const ClothAsset **clothAssets; 
  DObj *v43; 
  __int64 v44; 
  vec4_t quat; 

  v44 = -2i64;
  v43 = dObj;
  *(_QWORD *)posea.v = pose;
  v5 = localClientNum;
  globalWorldId = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 102, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  v6 = 0;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 103, ASSERT_TYPE_ASSERT, "( pose ) != ( nullptr )", "%s != %s\n\t%p, %p", "pose", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 104, ASSERT_TYPE_ASSERT, "( dObj ) != ( nullptr )", "%s != %s\n\t%p, %p", "dObj", "nullptr", NULL, NULL) )
    __debugbreak();
  AnglesToQuat(&pose->angles, &quat);
  if ( !dObj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 111, ASSERT_TYPE_ASSERT, "(dObj->numModels > 0)", (const char *)&queryFormat, "dObj->numModels > 0") )
    __debugbreak();
  v7 = *dObj->models;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 113, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numClothAssets = v7->numClothAssets;
  if ( !v7->numClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", numClothAssets + 115, ASSERT_TYPE_ASSERT, "(numClothAssets > 0)", (const char *)&queryFormat, "numClothAssets > 0") )
    __debugbreak();
  clothAssets = (const ClothAsset **)v7->clothAssets;
  if ( !clothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 117, ASSERT_TYPE_ASSERT, "(clothAssets)", (const char *)&queryFormat, "clothAssets") )
    __debugbreak();
  if ( dObj->numModels && (models = dObj->models, *models) )
    name = (*models)->name;
  else
    name = "Unknown";
  v11 = j_va("Player Legs %s", name);
  Cloth_AnimTreeNode_EnableClothNode(v11, dObj, 0);
  v12 = truncate_cast<unsigned char,enum LocalClientNum_t>((LocalClientNum_t)v5);
  if ( !XAnimSetByteGameParameterByName(dObj, scr_const.xanimClothLCN, v12) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CF7B60, 6052i64, dObj->tree->anims->debugName);
  XAnimSetBoolGameParameterByName(dObj, scr_const.xanimClothHide, 1);
  v13 = truncate_cast<unsigned char,enum LocalClientNum_t>((LocalClientNum_t)v5);
  if ( !XAnimSetByteGameParameterByName(dObj, scr_const.xanimClothLCN, v13) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CF7940, 6050i64, dObj->tree->anims->debugName);
  v14 = s_CG_Cloth_Legs_RuntimeData[v5];
  if ( v14->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 135, ASSERT_TYPE_ASSERT, "(runtimeData->clothInstances.size() == 0)", (const char *)&queryFormat, "runtimeData->clothInstances.size() == 0") )
    __debugbreak();
  v15 = numClothAssets;
  if ( v14->clothInstances.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
    __debugbreak();
  if ( !ntl::static_shared_allocator<CG_Cloth_Legs_InstanceAllocator,ntl::fixed_heap_allocator<56,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
    __debugbreak();
  v14->clothInstances.m_data.m_buffer = (unsigned int *)ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_Cloth_Legs_InstanceAllocator,ntl::fixed_heap_allocator<56,0>>::mp_allocator->m_heap, 4 * numClothAssets, 4ui64, 1);
  v14->clothInstances.m_data.m_size = numClothAssets;
  v16 = 0i64;
  if ( (_DWORD)numClothAssets )
  {
    do
    {
      if ( v16 >= v14->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
      v17 = &v14->clothInstances.m_data.m_buffer[v16];
      if ( v17 )
        *v17 = 0;
      ++v16;
    }
    while ( v16 < numClothAssets );
    v18 = 0i64;
    do
    {
      if ( v18 >= v14->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v18 >= v14->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v14->clothInstances.m_data.m_buffer[v18++] = -1;
      --v15;
    }
    while ( v15 );
    v19 = v43;
    v20 = *(const cpose_t **)posea.v;
    v21 = 0i64;
    v22 = clothAssets;
    do
    {
      v23 = *v22;
      if ( !*v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 149, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
        __debugbreak();
      if ( v6 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v6, "unsigned", v21) )
        __debugbreak();
      Ref = CG_Cloth_MakeRef(CG_CLOTH_REF_SYSTEM_PLAYER_LEGS, 0x842u, v6);
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !v20->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v20->origin.Get_origin, v20);
      FunctionPointer_origin(&v20->origin.origin.origin, &posea);
      if ( v20->isPosePrecise )
      {
        _XMM0 = LODWORD(posea.v[0]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v29;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        posea.v[0] = *(float *)&_XMM2;
        _XMM0 = LODWORD(posea.v[1]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v29;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        posea.v[1] = *(float *)&_XMM2;
        _XMM0 = LODWORD(posea.v[2]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v29;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        posea.v[2] = *(float *)&_XMM2;
      }
      v39 = Cloth_InstantiateAsset(globalWorldId, v23, Ref, Cloth_OwnerType_Character, &posea, &quat, v19, 0);
      if ( v39 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_legs.cpp", 160, ASSERT_TYPE_ASSERT, "(clothInstanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "clothInstanceId != CLOTH_INSTANCEID_INVALID") )
        __debugbreak();
      if ( v21 >= v14->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v21 >= v14->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v14->clothInstances.m_data.m_buffer[v21] = v39;
      memset(&posea, 0, sizeof(posea));
      ++v6;
      ++v21;
      v22 = ++clothAssets;
    }
    while ( v6 < (unsigned int)numClothAssets );
  }
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

