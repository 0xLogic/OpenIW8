/*
==============
CG_ClientModel_Cloth_UpdateClientModel
==============
*/

void __fastcall CG_ClientModel_Cloth_UpdateClientModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const float deltaTime)
{
  ?CG_ClientModel_Cloth_UpdateClientModel@@YAXW4LocalClientNum_t@@IM@Z(localClientNum, clientModelIdx, deltaTime);
}

/*
==============
CG_ClientModel_Cloth_Init
==============
*/

void __fastcall CG_ClientModel_Cloth_Init(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Cloth_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_Cloth_Shutdown
==============
*/

void __fastcall CG_ClientModel_Cloth_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_ClientModel_Cloth_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClientModel_Cloth_GetInstanceIds
==============
*/

void __fastcall CG_ClientModel_Cloth_GetInstanceIds(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, unsigned int *instanceCount, unsigned int **instanceIds)
{
  ?CG_ClientModel_Cloth_GetInstanceIds@@YAXW4LocalClientNum_t@@IPEAIPEAPEAI@Z(localClientNum, clientModelIdx, instanceCount, instanceIds);
}

/*
==============
CG_ClientModel_Cloth_SetupModel
==============
*/

void __fastcall CG_ClientModel_Cloth_SetupModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  ?CG_ClientModel_Cloth_SetupModel@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_Cloth_ShutdownModel
==============
*/

void __fastcall CG_ClientModel_Cloth_ShutdownModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  ?CG_ClientModel_Cloth_ShutdownModel@@YAXW4LocalClientNum_t@@I@Z(localClientNum, clientModelIdx);
}

/*
==============
CG_ClientModel_Cloth_GetInstanceIds
==============
*/
void CG_ClientModel_Cloth_GetInstanceIds(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, unsigned int *instanceCount, unsigned int **instanceIds)
{
  __int64 v4; 
  __int64 v5; 
  CG_ClientModel_Cloth_RuntimeData *v8; 

  v4 = localClientNum;
  v5 = clientModelIdx;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 220, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 221, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v5 >= CG_ClientModel_GetCount((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 222, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  if ( !CG_ClientModel_IsLoaded((const LocalClientNum_t)v4, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 223, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( !instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 224, ASSERT_TYPE_ASSERT, "(instanceCount)", (const char *)&queryFormat, "instanceCount") )
    __debugbreak();
  if ( !instanceIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 225, ASSERT_TYPE_ASSERT, "(instanceIds)", (const char *)&queryFormat, "instanceIds") )
    __debugbreak();
  v8 = &s_CG_ClientModel_Cloth_RuntimeData[v4][v5];
  *instanceCount = v8->clothInstances.m_data.m_size;
  *instanceIds = v8->clothInstances.m_data.m_buffer;
}

/*
==============
CG_ClientModel_Cloth_Init
==============
*/
void CG_ClientModel_Cloth_Init(const LocalClientNum_t localClientNum)
{
  if ( !s_CG_ClientModel_Cloth_AllocatorsSetup )
  {
    s_CG_ClientModel_Cloth_AllocatorsSetup = 1;
    ntl::static_shared_allocator<CG_ClientModel_Cloth_InstanceAllocator,ntl::fixed_heap_allocator<21504,0>>::mp_allocator = &s_cg_ClientModel_Cloth_InstanceAllocator;
  }
}

/*
==============
CG_ClientModel_Cloth_SetupModel
==============
*/
void CG_ClientModel_Cloth_SetupModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  cpose_t *v4; 
  DObj *v5; 
  CG_ClientModel_Cloth_RuntimeData *v6; 
  const XModel *Model; 
  unsigned __int64 numClothAssets; 
  const char *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  unsigned __int64 v12; 
  unsigned int *v13; 
  unsigned __int64 v14; 
  signed int v15; 
  unsigned __int64 v16; 
  const ClothAsset **v17; 
  const ClothAsset *v18; 
  unsigned int Ref; 
  bool bindPoseBased; 
  const cpose_t *v21; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v26; 
  unsigned int v36; 
  cpose_t *pose; 
  unsigned int v38; 
  vec3_t position; 
  LocalClientNum_t localClientNuma[2]; 
  const ClothAsset **clothAssets; 
  DObj *dObj; 
  __int64 v43; 
  vec4_t quat; 

  v43 = -2i64;
  v2 = clientModelIdx;
  localClientNuma[0] = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 96, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 97, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v2 >= CG_ClientModel_GetCount(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 98, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  if ( !CG_ClientModel_IsLoaded(localClientNum, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 99, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_NoCloth(localClientNum, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 100, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_NoCloth( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "!CG_ClientModel_NoCloth( localClientNum, clientModelIdx )") )
    __debugbreak();
  v4 = CG_ClientModel_GetPose(localClientNum, v2);
  pose = v4;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 104, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  AnglesToQuat(&v4->angles, &quat);
  v5 = CG_ClientModel_GetDObj(localClientNum, v2);
  dObj = v5;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 110, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  v6 = &s_CG_ClientModel_Cloth_RuntimeData[localClientNum][v2];
  if ( v6->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 114, ASSERT_TYPE_ASSERT, "(runtimeData->clothInstances.size() == 0)", (const char *)&queryFormat, "runtimeData->clothInstances.size() == 0") )
    __debugbreak();
  Model = CG_ClientModel_GetModel(localClientNum, v2, 0);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 118, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numClothAssets = Model->numClothAssets;
  v38 = Model->numClothAssets;
  if ( !Model->numClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 120, ASSERT_TYPE_ASSERT, "(numClothAssets > 0)", (const char *)&queryFormat, "numClothAssets > 0") )
    __debugbreak();
  clothAssets = (const ClothAsset **)Model->clothAssets;
  if ( !clothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 122, ASSERT_TYPE_ASSERT, "(clothAssets)", (const char *)&queryFormat, "clothAssets") )
    __debugbreak();
  v9 = j_va("Client Model %i %s", (unsigned int)v2, Model->name);
  Cloth_AnimTreeNode_EnableClothNode(v9, v5, 0);
  if ( (localClientNum < LOCAL_CLIENT_0 || (unsigned int)localClientNum > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum LocalClientNum_t>(enum LocalClientNum_t)", "unsigned", (unsigned __int8)localClientNum, "signed", localClientNum) )
    __debugbreak();
  if ( !XAnimSetByteGameParameterByName(v5, scr_const.xanimClothLCN, localClientNum) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442E5F40, 266i64, v5->tree->anims->debugName);
  v10 = numClothAssets;
  if ( v6->clothInstances.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
    __debugbreak();
  if ( !ntl::static_shared_allocator<CG_ClientModel_Cloth_InstanceAllocator,ntl::fixed_heap_allocator<21504,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
    __debugbreak();
  v6->clothInstances.m_data.m_buffer = (unsigned int *)ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_ClientModel_Cloth_InstanceAllocator,ntl::fixed_heap_allocator<21504,0>>::mp_allocator->m_heap, 4 * numClothAssets, 4ui64, 1);
  v6->clothInstances.m_data.m_size = numClothAssets;
  v11 = 0;
  v12 = 0i64;
  if ( (_DWORD)numClothAssets )
  {
    do
    {
      if ( v12 >= v6->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
      v13 = &v6->clothInstances.m_data.m_buffer[v12];
      if ( v13 )
        *v13 = 0;
      ++v12;
    }
    while ( v12 < numClothAssets );
    v14 = 0i64;
    do
    {
      if ( v14 >= v6->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v14 >= v6->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v6->clothInstances.m_data.m_buffer[v14++] = -1;
      --v10;
    }
    while ( v10 );
    v15 = localClientNuma[0];
    if ( v38 )
    {
      *(_QWORD *)localClientNuma = &v4->origin.origin;
      v16 = 0i64;
      v17 = clothAssets;
      do
      {
        v18 = *v17;
        if ( !*v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 149, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
          __debugbreak();
        if ( (unsigned int)v2 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v2, "unsigned", v2) )
          __debugbreak();
        if ( v11 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v11, "unsigned", v16) )
          __debugbreak();
        Ref = CG_Cloth_MakeRef(CG_CLOTH_REF_SYSTEM_CLIENTMODEL, v2, v11);
        bindPoseBased = CG_ClientModel_GetAnimation((const LocalClientNum_t)v15, v2) == NULL;
        v21 = pose;
        if ( !pose )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          v21 = NULL;
        }
        if ( !v21->origin.Get_origin )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          v21 = pose;
        }
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v21->origin.Get_origin, v21);
        FunctionPointer_origin(*(const vec4_t **)localClientNuma, &position);
        if ( pose->isPosePrecise )
        {
          _XMM0 = LODWORD(position.v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v26 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v26 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v26;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          position.v[0] = *(float *)&_XMM2;
          _XMM0 = LODWORD(position.v[1]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v26 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v26 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v26;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          position.v[1] = *(float *)&_XMM2;
          _XMM0 = LODWORD(position.v[2]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v26 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v26 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v26;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          position.v[2] = *(float *)&_XMM2;
        }
        v36 = Cloth_InstantiateAsset(v15, v18, Ref, Cloth_OwnerType_Environmental, &position, &quat, dObj, bindPoseBased);
        if ( v36 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 161, ASSERT_TYPE_ASSERT, "(clothInstanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "clothInstanceId != CLOTH_INSTANCEID_INVALID") )
          __debugbreak();
        if ( v16 >= v6->clothInstances.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v16 >= v6->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v6->clothInstances.m_data.m_buffer[v16] = v36;
        memset(&position, 0, sizeof(position));
        ++v11;
        ++v16;
        v17 = ++clothAssets;
      }
      while ( v11 < v38 );
    }
  }
}

/*
==============
CG_ClientModel_Cloth_Shutdown
==============
*/
void CG_ClientModel_Cloth_Shutdown(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_ClientModel_Cloth_ShutdownModel
==============
*/
void CG_ClientModel_Cloth_ShutdownModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx)
{
  __int64 v2; 
  __int64 v3; 
  CG_ClientModel_Cloth_RuntimeData *v4; 
  unsigned __int64 v5; 
  __int64 m_size_low; 
  unsigned int v7; 
  unsigned __int64 i; 
  unsigned int *m_buffer; 

  v2 = localClientNum;
  v3 = clientModelIdx;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 185, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 186, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v3 >= CG_ClientModel_GetCount((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 187, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  if ( !CG_ClientModel_IsLoaded((const LocalClientNum_t)v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 188, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  if ( CG_ClientModel_NoCloth((const LocalClientNum_t)v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 189, ASSERT_TYPE_ASSERT, "(!CG_ClientModel_NoCloth( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "!CG_ClientModel_NoCloth( localClientNum, clientModelIdx )") )
    __debugbreak();
  v4 = &s_CG_ClientModel_Cloth_RuntimeData[v2][v3];
  if ( LODWORD(v4->clothInstances.m_data.m_size) )
  {
    v5 = 0i64;
    m_size_low = LODWORD(v4->clothInstances.m_data.m_size);
    while ( 1 )
    {
      if ( v5 >= v4->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v5 >= v4->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v7 = v4->clothInstances.m_data.m_buffer[v5];
      if ( com_errorEnteredCount <= 0 )
        break;
      if ( v7 != -1 )
        goto LABEL_33;
LABEL_34:
      ++v5;
      if ( !--m_size_low )
        goto LABEL_35;
    }
    if ( v7 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 207, ASSERT_TYPE_ASSERT, "(clothInstanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "clothInstanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
LABEL_33:
    Cloth_DestroyInstance(v2, v7);
    goto LABEL_34;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 194, ASSERT_TYPE_ASSERT, "(numClothInstances > 0)", (const char *)&queryFormat, "numClothInstances > 0") )
    __debugbreak();
LABEL_35:
  for ( i = 0i64; i < v4->clothInstances.m_data.m_size; ++i )
    ;
  m_buffer = v4->clothInstances.m_data.m_buffer;
  if ( v4->clothInstances.m_data.m_buffer )
  {
    if ( !ntl::static_shared_allocator<CG_ClientModel_Cloth_InstanceAllocator,ntl::fixed_heap_allocator<21504,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
      __debugbreak();
    ntl::nxheap::free(&ntl::static_shared_allocator<CG_ClientModel_Cloth_InstanceAllocator,ntl::fixed_heap_allocator<21504,0>>::mp_allocator->m_heap, m_buffer);
    v4->clothInstances.m_data.m_buffer = NULL;
    v4->clothInstances.m_data.m_size = 0i64;
  }
}

/*
==============
CG_ClientModel_Cloth_UpdateClientModel
==============
*/
void CG_ClientModel_Cloth_UpdateClientModel(const LocalClientNum_t localClientNum, const unsigned int clientModelIdx, const float deltaTime)
{
  __int64 v3; 
  __int64 v4; 
  CG_ClientModel_Cloth_RuntimeData *v5; 
  unsigned __int64 m_size; 
  cpose_t *Pose; 
  unsigned __int64 v8; 
  unsigned int v9; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v14; 
  vec3_t origin; 
  __int64 v25; 
  vec4_t quat; 

  v25 = -2i64;
  v3 = clientModelIdx;
  v4 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 239, ASSERT_TYPE_ASSERT, "(localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST)", (const char *)&queryFormat, "localClientNum >= LOCAL_CLIENT_0 && localClientNum <= LOCAL_CLIENT_LAST") )
    __debugbreak();
  if ( !CG_ClientModel_IsClientInitialized((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 240, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsClientInitialized( localClientNum ))", (const char *)&queryFormat, "CG_ClientModel_IsClientInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v3 >= CG_ClientModel_GetCount((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 241, ASSERT_TYPE_ASSERT, "(clientModelIdx < CG_ClientModel_GetCount( localClientNum ))", (const char *)&queryFormat, "clientModelIdx < CG_ClientModel_GetCount( localClientNum )") )
    __debugbreak();
  if ( !CG_ClientModel_IsLoaded((const LocalClientNum_t)v4, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 242, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsLoaded( localClientNum, clientModelIdx ))", (const char *)&queryFormat, "CG_ClientModel_IsLoaded( localClientNum, clientModelIdx )") )
    __debugbreak();
  v5 = &s_CG_ClientModel_Cloth_RuntimeData[v4][v3];
  m_size = v5->clothInstances.m_data.m_size;
  if ( (_DWORD)m_size )
  {
    Pose = CG_ClientModel_GetPose((const LocalClientNum_t)v4, v3);
    if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 256, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    AnglesToQuat(&Pose->angles, &quat);
    v8 = 0i64;
    m_size = (unsigned int)m_size;
    do
    {
      if ( v8 >= v5->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v8 >= v5->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v9 = v5->clothInstances.m_data.m_buffer[v8];
      if ( v9 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_cloth.cpp", 267, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
        __debugbreak();
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Pose->origin.Get_origin, Pose);
      FunctionPointer_origin(&Pose->origin.origin.origin, &origin);
      if ( Pose->isPosePrecise )
      {
        _XMM0 = LODWORD(origin.v[0]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v14 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v14;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        origin.v[0] = *(float *)&_XMM2;
        _XMM0 = LODWORD(origin.v[1]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v14 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v14;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        origin.v[1] = *(float *)&_XMM2;
        _XMM0 = LODWORD(origin.v[2]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v14 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v14;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        origin.v[2] = *(float *)&_XMM2;
      }
      Cloth_Update_SetInstanceTransform(v4, v9, &origin, &quat);
      memset(&origin, 0, sizeof(origin));
      ++v8;
      --m_size;
    }
    while ( m_size );
  }
}

