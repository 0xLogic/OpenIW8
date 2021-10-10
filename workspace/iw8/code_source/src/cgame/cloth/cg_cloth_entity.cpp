/*
==============
CG_Cloth_Entity_Init
==============
*/

void __fastcall CG_Cloth_Entity_Init(const LocalClientNum_t localClientNum)
{
  ?CG_Cloth_Entity_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Cloth_Entity_Update
==============
*/

void __fastcall CG_Cloth_Entity_Update(const LocalClientNum_t localClientNum)
{
  ?CG_Cloth_Entity_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Cloth_Entity_Create
==============
*/

void __fastcall CG_Cloth_Entity_Create(const LocalClientNum_t localClientNum, const int entNum, const unsigned int numModels, const XModel **models, const unsigned int numClothAssets, const ClothAsset **clothAssets)
{
  ?CG_Cloth_Entity_Create@@YAXW4LocalClientNum_t@@HIPEAPEBUXModel@@IPEAPEBUClothAsset@@@Z(localClientNum, entNum, numModels, models, numClothAssets, clothAssets);
}

/*
==============
CG_Cloth_Entity_DeactivateClothNode
==============
*/

void __fastcall CG_Cloth_Entity_DeactivateClothNode(const LocalClientNum_t localClientNum, DObj *dObj)
{
  ?CG_Cloth_Entity_DeactivateClothNode@@YAXW4LocalClientNum_t@@PEAUDObj@@@Z(localClientNum, dObj);
}

/*
==============
CG_Cloth_Entity_Shutdown
==============
*/

void __fastcall CG_Cloth_Entity_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CG_Cloth_Entity_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Cloth_Entity_StowForDObjRebuild
==============
*/

void __fastcall CG_Cloth_Entity_StowForDObjRebuild(const LocalClientNum_t localClientNum, const int entNum)
{
  ?CG_Cloth_Entity_StowForDObjRebuild@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Cloth_Entity_GetClothInstanceIds
==============
*/

void __fastcall CG_Cloth_Entity_GetClothInstanceIds(const LocalClientNum_t localClientNum, const int entNum, unsigned int *instanceCount, unsigned int **instanceIds)
{
  ?CG_Cloth_Entity_GetClothInstanceIds@@YAXW4LocalClientNum_t@@HPEAIPEAPEAI@Z(localClientNum, entNum, instanceCount, instanceIds);
}

/*
==============
CG_Cloth_Entity_IsInitialized
==============
*/

bool __fastcall CG_Cloth_Entity_IsInitialized(const LocalClientNum_t localClientNum)
{
  return ?CG_Cloth_Entity_IsInitialized@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Cloth_Entity_HasStowedClothBinding
==============
*/

bool __fastcall CG_Cloth_Entity_HasStowedClothBinding(const LocalClientNum_t localClientNum, const int entNum)
{
  return ?CG_Cloth_Entity_HasStowedClothBinding@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Cloth_Entity_ActivateClothNode
==============
*/

void __fastcall CG_Cloth_Entity_ActivateClothNode(const LocalClientNum_t localClientNum, DObj *dObj)
{
  ?CG_Cloth_Entity_ActivateClothNode@@YAXW4LocalClientNum_t@@PEAUDObj@@@Z(localClientNum, dObj);
}

/*
==============
CG_Cloth_Entity_MyChangesSaveAndShutdown
==============
*/

void CG_Cloth_Entity_MyChangesSaveAndShutdown(void)
{
  ?CG_Cloth_Entity_MyChangesSaveAndShutdown@@YAXXZ();
}

/*
==============
CG_Cloth_Entity_MyChangesInitAndLoad
==============
*/

void CG_Cloth_Entity_MyChangesInitAndLoad(void)
{
  ?CG_Cloth_Entity_MyChangesInitAndLoad@@YAXXZ();
}

/*
==============
CG_Cloth_Entity_Destroy
==============
*/

void __fastcall CG_Cloth_Entity_Destroy(const LocalClientNum_t localClientNum, const int entNum)
{
  ?CG_Cloth_Entity_Destroy@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Cloth_Entity_HasClothBinding
==============
*/

bool __fastcall CG_Cloth_Entity_HasClothBinding(const LocalClientNum_t localClientNum, const int entNum)
{
  return ?CG_Cloth_Entity_HasClothBinding@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Cloth_Entity_ActivateClothNode
==============
*/
void CG_Cloth_Entity_ActivateClothNode(const LocalClientNum_t localClientNum, DObj *dObj)
{
  const XModel **models; 
  const char *name; 
  const char *v6; 

  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 399, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( dObj->numModels && (models = dObj->models, *models) )
    name = (*models)->name;
  else
    name = "Unknown";
  v6 = j_va("Client Entity %i %s", (unsigned __int16)(dObj->entnum - 1), name);
  Cloth_AnimTreeNode_EnableClothNode(v6, dObj, 0);
  if ( (localClientNum < LOCAL_CLIENT_0 || (unsigned int)localClientNum > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum LocalClientNum_t>(enum LocalClientNum_t)", "unsigned", (unsigned __int8)localClientNum, "signed", localClientNum) )
    __debugbreak();
  if ( !XAnimSetByteGameParameterByName(dObj, scr_const.xanimClothLCN, localClientNum) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442E8880, 727i64, dObj->tree->anims->debugName);
}

/*
==============
CG_Cloth_Entity_Create
==============
*/
void CG_Cloth_Entity_Create(const LocalClientNum_t localClientNum, const int entNum, const unsigned int numModels, const XModel **models, const unsigned int numClothAssets, const ClothAsset **clothAssets)
{
  __int64 v8; 
  __int64 v9; 
  CgEntitySystem *EntitySystem; 
  centity_t *Entity; 
  DObj *ClientDObj; 
  CG_Cloth_Entity_Binding *v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  unsigned int *v16; 
  unsigned __int64 v17; 
  const ClothAsset **v18; 
  const ClothAsset *v19; 
  unsigned int Ref; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v25; 
  unsigned int v35; 
  BOOL ownerTypea; 
  vec3_t position; 
  int v39; 
  const ClothAsset **v40; 
  DObj *dObj; 
  __int64 v42; 
  vec4_t quat; 

  v42 = -2i64;
  v8 = entNum;
  v39 = entNum;
  v9 = localClientNum;
  v40 = clothAssets;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "CG_Cloth_Entity_Create");
  if ( (unsigned int)v9 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, 2) )
    __debugbreak();
  if ( (unsigned int)v8 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 237, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
    __debugbreak();
  if ( !numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 238, ASSERT_TYPE_ASSERT, "(numModels > 0)", (const char *)&queryFormat, "numModels > 0") )
    __debugbreak();
  if ( !models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 239, ASSERT_TYPE_ASSERT, "(models)", (const char *)&queryFormat, "models") )
    __debugbreak();
  if ( !numClothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 240, ASSERT_TYPE_ASSERT, "(numClothAssets > 0)", (const char *)&queryFormat, "numClothAssets > 0") )
    __debugbreak();
  if ( !clothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 241, ASSERT_TYPE_ASSERT, "(clothAssets)", (const char *)&queryFormat, "clothAssets") )
    __debugbreak();
  if ( CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v9, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 242, ASSERT_TYPE_ASSERT, "(!CG_Cloth_Entity_HasClothBinding( localClientNum, entNum ))", (const char *)&queryFormat, "!CG_Cloth_Entity_HasClothBinding( localClientNum, entNum )") )
    __debugbreak();
  if ( !CG_Cloth_Entity_TryUnstowCloth((const LocalClientNum_t)v9, v8, numClothAssets, clothAssets) )
  {
    if ( (CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v9, v8) || CG_Cloth_Entity_HasStowedClothBinding((const LocalClientNum_t)v9, v8)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 249, ASSERT_TYPE_ASSERT, "(!CG_Cloth_Entity_HasClothBinding( localClientNum, entNum ) && !CG_Cloth_Entity_HasStowedClothBinding( localClientNum, entNum ))", (const char *)&queryFormat, "!CG_Cloth_Entity_HasClothBinding( localClientNum, entNum ) && !CG_Cloth_Entity_HasStowedClothBinding( localClientNum, entNum )") )
      __debugbreak();
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v9);
    if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 253, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
      __debugbreak();
    Entity = CgEntitySystem::GetEntity(EntitySystem, v8);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 257, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
      __debugbreak();
    AnglesToQuat(&Entity->pose.angles, &quat);
    ClientDObj = Com_GetClientDObj(v8, (LocalClientNum_t)v9);
    dObj = ClientDObj;
    if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 266, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
      __debugbreak();
    v13 = &s_CG_Cloth_Entity_Bindings[v9][v8];
    bitarray_base<bitarray<2048>>::setBit(&s_CG_Cloth_Entity_BindingAllocated[v9], v8);
    CG_Cloth_Entity_ActivateClothNode((const LocalClientNum_t)v9, ClientDObj);
    if ( v13->clothInstances.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
      __debugbreak();
    if ( !ntl::static_shared_allocator<CG_Cloth_Entity_InstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
      __debugbreak();
    v13->clothInstances.m_data.m_buffer = (unsigned int *)ntl::nxheap::allocate(&ntl::static_shared_allocator<CG_Cloth_Entity_InstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator->m_heap, 4i64 * numClothAssets, 4ui64, 1);
    v13->clothInstances.m_data.m_size = numClothAssets;
    v14 = 0;
    v15 = 0i64;
    if ( numClothAssets )
    {
      do
      {
        if ( v15 >= v13->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
        v16 = &v13->clothInstances.m_data.m_buffer[v15];
        if ( v16 )
          *v16 = 0;
        ++v15;
      }
      while ( v15 < numClothAssets );
      LODWORD(v8) = v39;
      LODWORD(v9) = localClientNum;
    }
    ownerTypea = !CG_Cloth_Entity_IsCharacter(Entity);
    if ( numClothAssets )
    {
      v17 = 0i64;
      v18 = v40;
      do
      {
        v19 = *v18;
        if ( !*v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 288, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
          __debugbreak();
        if ( ((int)v8 < 0 || (unsigned int)v8 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v8, "signed", (int)v8) )
          __debugbreak();
        if ( v14 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v14, "unsigned", v17) )
          __debugbreak();
        Ref = CG_Cloth_MakeRef(CG_CLOTH_REF_SYSTEM_CLIENTENTITY, v8, v14);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
        FunctionPointer_origin(&Entity->pose.origin.origin.origin, &position);
        if ( Entity->pose.isPosePrecise )
        {
          _XMM0 = LODWORD(position.v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v25 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v25 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v25;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          position.v[0] = *(float *)&_XMM2;
          _XMM0 = LODWORD(position.v[1]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v25 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v25 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v25;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          position.v[1] = *(float *)&_XMM2;
          _XMM0 = LODWORD(position.v[2]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v25 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v25 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v25;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          position.v[2] = *(float *)&_XMM2;
        }
        v35 = Cloth_InstantiateAsset(v9, v19, Ref, (const Cloth_OwnerType)ownerTypea, &position, &quat, dObj, 0);
        if ( v35 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 299, ASSERT_TYPE_ASSERT, "(clothInstanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "clothInstanceId != CLOTH_INSTANCEID_INVALID") )
          __debugbreak();
        if ( v17 >= v13->clothInstances.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v17 >= v13->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v13->clothInstances.m_data.m_buffer[v17] = v35;
        memset(&position, 0, sizeof(position));
        ++v14;
        ++v17;
        v18 = ++v40;
      }
      while ( v14 < numClothAssets );
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Cloth_Entity_DeactivateClothNode
==============
*/
void CG_Cloth_Entity_DeactivateClothNode(const LocalClientNum_t localClientNum, DObj *dObj)
{
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 417, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  Cloth_AnimTreeNode_DisableClothNode(dObj, 0);
}

/*
==============
CG_Cloth_Entity_Destroy
==============
*/
void CG_Cloth_Entity_Destroy(const LocalClientNum_t localClientNum, const int entNum)
{
  __int64 v2; 
  __int64 v3; 
  DObj *ClientDObj; 
  __int64 v5; 
  CG_Cloth_Entity_Binding *v6; 
  unsigned __int64 m_size; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned int *m_buffer; 
  __int64 v13; 

  v2 = entNum;
  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "CG_Cloth_Entity_Destroy");
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 312, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
    __debugbreak();
  if ( (unsigned int)v2 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 313, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
    __debugbreak();
  if ( !CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v3, v2) && !CG_Cloth_Entity_HasStowedClothBinding((const LocalClientNum_t)v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 314, ASSERT_TYPE_ASSERT, "(CG_Cloth_Entity_HasClothBinding( localClientNum, entNum ) || CG_Cloth_Entity_HasStowedClothBinding( localClientNum, entNum))", (const char *)&queryFormat, "CG_Cloth_Entity_HasClothBinding( localClientNum, entNum ) || CG_Cloth_Entity_HasStowedClothBinding( localClientNum, entNum)") )
    __debugbreak();
  if ( CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v3, v2) )
  {
    ClientDObj = Com_GetClientDObj(v2, (LocalClientNum_t)v3);
    if ( ClientDObj )
      CG_Cloth_Entity_DeactivateClothNode((const LocalClientNum_t)v3, ClientDObj);
  }
  v5 = v3;
  v6 = &s_CG_Cloth_Entity_Bindings[v3][v2];
  m_size = v6->clothInstances.m_data.m_size;
  if ( (_DWORD)m_size )
  {
    v8 = 0i64;
    v9 = (unsigned int)m_size;
    do
    {
      if ( v8 >= v6->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v8 >= v6->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v10 = v6->clothInstances.m_data.m_buffer[v8];
      if ( v10 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 338, ASSERT_TYPE_ASSERT, "(clothInstanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "clothInstanceId != CLOTH_INSTANCEID_INVALID") )
        __debugbreak();
      Cloth_DestroyInstance(v3, v10);
      ++v8;
      --v9;
    }
    while ( v9 );
    m_size = v6->clothInstances.m_data.m_size;
    LODWORD(v2) = entNum;
    v5 = v3;
  }
  v11 = 0i64;
  if ( m_size )
  {
    do
      ++v11;
    while ( v11 < v6->clothInstances.m_data.m_size );
  }
  m_buffer = v6->clothInstances.m_data.m_buffer;
  if ( v6->clothInstances.m_data.m_buffer )
  {
    if ( !ntl::static_shared_allocator<CG_Cloth_Entity_InstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
      __debugbreak();
    ntl::nxheap::free(&ntl::static_shared_allocator<CG_Cloth_Entity_InstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator->m_heap, m_buffer);
    v6->clothInstances.m_data.m_buffer = NULL;
    v6->clothInstances.m_data.m_size = 0i64;
  }
  v13 = v5 << 8;
  bitarray_base<bitarray<2048>>::resetBit((bitarray<2048> *)((char *)s_CG_Cloth_Entity_BindingAllocated + v13), v2);
  bitarray_base<bitarray<2048>>::resetBit((bitarray<2048> *)((char *)s_CG_Cloth_Entity_BindingStowed + v13), v2);
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Cloth_Entity_GetClothInstanceIds
==============
*/
void CG_Cloth_Entity_GetClothInstanceIds(const LocalClientNum_t localClientNum, const int entNum, unsigned int *instanceCount, unsigned int **instanceIds)
{
  __int64 v4; 
  __int64 v6; 
  CG_Cloth_Entity_Binding *v8; 

  v4 = localClientNum;
  v6 = entNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 381, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v6 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 382, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
    __debugbreak();
  if ( !CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v4, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 383, ASSERT_TYPE_ASSERT, "(CG_Cloth_Entity_HasClothBinding( localClientNum, entNum ))", (const char *)&queryFormat, "CG_Cloth_Entity_HasClothBinding( localClientNum, entNum )") )
    __debugbreak();
  if ( !instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 384, ASSERT_TYPE_ASSERT, "(instanceCount)", (const char *)&queryFormat, "instanceCount") )
    __debugbreak();
  if ( !instanceIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 385, ASSERT_TYPE_ASSERT, "(instanceIds)", (const char *)&queryFormat, "instanceIds") )
    __debugbreak();
  v8 = &s_CG_Cloth_Entity_Bindings[v4][v6];
  *instanceCount = v8->clothInstances.m_data.m_size;
  *instanceIds = v8->clothInstances.m_data.m_buffer;
}

/*
==============
CG_Cloth_Entity_HasClothBinding
==============
*/
bool CG_Cloth_Entity_HasClothBinding(const LocalClientNum_t localClientNum, const int entNum)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 478, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 479, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
    __debugbreak();
  return bitarray_base<bitarray<2048>>::testBit(&s_CG_Cloth_Entity_BindingAllocated[v2], entNum);
}

/*
==============
CG_Cloth_Entity_HasStowedClothBinding
==============
*/
bool CG_Cloth_Entity_HasStowedClothBinding(const LocalClientNum_t localClientNum, const int entNum)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 490, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 491, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
    __debugbreak();
  return bitarray_base<bitarray<2048>>::testBit(&s_CG_Cloth_Entity_BindingStowed[v2], entNum);
}

/*
==============
CG_Cloth_Entity_Init
==============
*/
void CG_Cloth_Entity_Init(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  v2 = 1 << v1;
  if ( ((1 << v1) & s_CG_Cloth_Entity_Initialized) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 73, ASSERT_TYPE_ASSERT, "(!CG_Cloth_Entity_IsInitialized( localClientNum ))", (const char *)&queryFormat, "!CG_Cloth_Entity_IsInitialized( localClientNum )") )
    __debugbreak();
  if ( !s_CG_Cloth_Entity_AllocatorsSetup )
  {
    s_CG_Cloth_Entity_AllocatorsSetup = 1;
    ntl::static_shared_allocator<CG_Cloth_Entity_InstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator = &s_cg_Cloth_Entity_InstanceAllocator;
  }
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_CG_Cloth_Entity_Bindings ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_CG_Cloth_Entity_Bindings )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  memset_0(s_CG_Cloth_Entity_Bindings[v1], 0, sizeof(CG_Cloth_Entity_Binding[2048]));
  v3 = v1 << 6;
  s_CG_Cloth_Entity_Initialized |= v2;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 2] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 4] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 6] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 8] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 10] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 12] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 14] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 16] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 18] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 20] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 22] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 24] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 26] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 28] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 30] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 32] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 34] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 36] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 38] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 40] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 42] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 44] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 46] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 48] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 50] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 52] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 54] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 56] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 58] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 60] = 0i64;
  *(_QWORD *)&s_CG_Cloth_Entity_BindingAllocated[0].array[v3 + 62] = 0i64;
}

/*
==============
CG_Cloth_Entity_IsCharacter
==============
*/
bool CG_Cloth_Entity_IsCharacter(const centity_t *entity)
{
  unsigned __int8 eType; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 118, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  eType = entity->pose.eType;
  return ((entity->pose.eType - 1) & 0xED) == 0 && eType != 3 || eType == 6 && entity->nextState.un.scriptMoverType == 1;
}

/*
==============
CG_Cloth_Entity_IsInitialized
==============
*/
unsigned __int8 CG_Cloth_Entity_IsInitialized(const LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  int v5; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  v2 = s_CG_Cloth_Entity_Initialized;
  return _bittest((const int *)&v2, localClientNum);
}

/*
==============
CG_Cloth_Entity_MyChangesInitAndLoad
==============
*/
void CG_Cloth_Entity_MyChangesInitAndLoad(void)
{
  int i; 
  unsigned int j; 

  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0; j < 0x800; ++j )
    {
      if ( CG_Entity_ShouldCreateClothOnInit((const LocalClientNum_t)i, j) )
        CG_Entity_CreateCloth((const LocalClientNum_t)i, j);
    }
  }
}

/*
==============
CG_Cloth_Entity_MyChangesSaveAndShutdown
==============
*/
void CG_Cloth_Entity_MyChangesSaveAndShutdown(void)
{
  int i; 
  unsigned int j; 

  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0; j < 0x800; ++j )
    {
      CG_Entity_DestroyCloth((const LocalClientNum_t)i, j);
      CG_Entity_DestroyStowedCloth((const LocalClientNum_t)i, j);
    }
  }
}

/*
==============
CG_Cloth_Entity_Shutdown
==============
*/
void CG_Cloth_Entity_Shutdown(const LocalClientNum_t localClientNum)
{
  char v1; 
  int v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = 1 << v1;
  if ( (v2 & s_CG_Cloth_Entity_Initialized) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 96, ASSERT_TYPE_ASSERT, "(CG_Cloth_Entity_IsInitialized( localClientNum ))", (const char *)&queryFormat, "CG_Cloth_Entity_IsInitialized( localClientNum )") )
    __debugbreak();
  s_CG_Cloth_Entity_Initialized &= ~v2;
}

/*
==============
CG_Cloth_Entity_StowForDObjRebuild
==============
*/
void CG_Cloth_Entity_StowForDObjRebuild(const LocalClientNum_t localClientNum, const int entNum)
{
  __int64 v2; 
  DObj *ClientDObj; 
  __int64 v5; 
  int v7; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 357, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 358, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
    __debugbreak();
  if ( !CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v2, entNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 359, ASSERT_TYPE_ASSERT, "(CG_Cloth_Entity_HasClothBinding( localClientNum, entNum ))", (const char *)&queryFormat, "CG_Cloth_Entity_HasClothBinding( localClientNum, entNum )") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entNum, (LocalClientNum_t)v2);
  if ( ClientDObj )
    Cloth_AnimTreeNode_DisableClothNode(ClientDObj, 0);
  v5 = v2 << 8;
  bitarray_base<bitarray<2048>>::setBit((bitarray<2048> *)((char *)s_CG_Cloth_Entity_BindingStowed + v5), entNum);
  bitarray_base<bitarray<2048>>::resetBit((bitarray<2048> *)((char *)s_CG_Cloth_Entity_BindingAllocated + v5), entNum);
}

/*
==============
CG_Cloth_Entity_TryUnstowCloth
==============
*/
bool CG_Cloth_Entity_TryUnstowCloth(const LocalClientNum_t localClientNum, const int entNum, const unsigned int numClothAssets, const ClothAsset **clothAssets)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  bool result; 
  CG_Cloth_Entity_Binding *v9; 
  __int64 v10; 
  unsigned __int64 m_size; 
  __int64 v12; 
  unsigned int v13; 
  unsigned __int64 v14; 

  v4 = localClientNum;
  v6 = numClothAssets;
  v7 = entNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 189, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v7 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 190, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
    __debugbreak();
  if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 191, ASSERT_TYPE_ASSERT, "(numClothAssets > 0)", (const char *)&queryFormat, "numClothAssets > 0") )
    __debugbreak();
  if ( !clothAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 192, ASSERT_TYPE_ASSERT, "(clothAssets)", (const char *)&queryFormat, "clothAssets") )
    __debugbreak();
  result = CG_Cloth_Entity_HasStowedClothBinding((const LocalClientNum_t)v4, v7);
  if ( result )
  {
    v9 = &s_CG_Cloth_Entity_Bindings[v4][v7];
    v10 = v6;
    m_size = v9->clothInstances.m_data.m_size;
    v14 = m_size;
    if ( m_size == v6 )
    {
      v12 = 0i64;
      if ( (_DWORD)v6 )
      {
        while ( 1 )
        {
          if ( (unsigned int)v12 >= v9->clothInstances.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( (unsigned int)v12 >= v9->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          v13 = v9->clothInstances.m_data.m_buffer[v12];
          if ( v13 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 210, ASSERT_TYPE_ASSERT, "(clothInstanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "clothInstanceId != CLOTH_INSTANCEID_INVALID") )
            __debugbreak();
          if ( clothAssets[v12] != Cloth_GetClothAsset(v4, v13) )
            goto LABEL_29;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= (unsigned int)v6 )
          {
            m_size = v14;
            v10 = v6;
            break;
          }
        }
      }
    }
    if ( m_size != v10 )
    {
LABEL_29:
      CG_Cloth_Entity_Destroy((const LocalClientNum_t)v4, v7);
      return 0;
    }
    CG_Cloth_Entity_UnstowData((const LocalClientNum_t)v4, v7);
    return 1;
  }
  return result;
}

/*
==============
CG_Cloth_Entity_UnstowData
==============
*/
void CG_Cloth_Entity_UnstowData(const LocalClientNum_t localClientNum, const int entNum)
{
  __int64 v2; 
  __int64 v3; 
  CgEntitySystem *EntitySystem; 
  const centity_t *v5; 
  DObj *ClientDObj; 
  CG_Cloth_Entity_Binding *v7; 
  unsigned __int64 v8; 
  int v9; 
  unsigned __int64 m_size; 
  __int64 v11; 
  unsigned int v12; 
  __int64 bindPoseBased; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  vec3_t outOrigin; 
  __int64 v18; 
  vec4_t quat; 

  v18 = -2i64;
  v2 = entNum;
  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "CG_Cloth_Entity_UnstowData");
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
    __debugbreak();
  if ( (unsigned int)v2 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 140, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
    __debugbreak();
  if ( !CG_Cloth_Entity_HasStowedClothBinding((const LocalClientNum_t)v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 141, ASSERT_TYPE_ASSERT, "(CG_Cloth_Entity_HasStowedClothBinding( localClientNum, entNum ))", (const char *)&queryFormat, "CG_Cloth_Entity_HasStowedClothBinding( localClientNum, entNum )") )
    __debugbreak();
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 145, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v14) = 2048;
    LODWORD(bindPoseBased) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", bindPoseBased, v14) )
      __debugbreak();
  }
  v5 = &EntitySystem->m_entities[v2];
  if ( (CgEntitySystem *)((char *)EntitySystem + 760 * v2) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 149, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
    __debugbreak();
  AnglesToQuat(&EntitySystem->m_entities[v2].pose.angles, &quat);
  CG_GetPoseOrigin(&EntitySystem->m_entities[v2].pose, &outOrigin);
  ClientDObj = Com_GetClientDObj(v2, (LocalClientNum_t)v3);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 160, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  v7 = &s_CG_Cloth_Entity_Bindings[v3][v2];
  bitarray_base<bitarray<2048>>::setBit(&s_CG_Cloth_Entity_BindingAllocated[v3], v2);
  bitarray_base<bitarray<2048>>::resetBit(&s_CG_Cloth_Entity_BindingStowed[v3], v2);
  CG_Cloth_Entity_ActivateClothNode((const LocalClientNum_t)v3, ClientDObj);
  v8 = 0i64;
  v9 = !CG_Cloth_Entity_IsCharacter(v5);
  m_size = v7->clothInstances.m_data.m_size;
  v11 = (unsigned int)m_size;
  if ( m_size > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)m_size, "unsigned", v7->clothInstances.m_data.m_size) )
    __debugbreak();
  if ( (_DWORD)m_size )
  {
    do
    {
      if ( v8 >= v7->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v8 >= v7->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v12 = v7->clothInstances.m_data.m_buffer[v8];
      if ( v9 != Cloth_GetOwnerType(v3, v12) )
      {
        LODWORD(v16) = Cloth_GetOwnerType(v3, v12);
        LODWORD(v15) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 181, ASSERT_TYPE_ASSERT, "( ownerType ) == ( Cloth_GetOwnerType( localClientNum, instanceId ) )", "%s == %s\n\t%i, %i", "ownerType", "Cloth_GetOwnerType( localClientNum, instanceId )", v15, v16) )
          __debugbreak();
      }
      Cloth_RebindInstance(v3, v12, &outOrigin, &quat, ClientDObj, 0);
      ++v8;
      --v11;
    }
    while ( v11 );
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Cloth_Entity_Update
==============
*/
void CG_Cloth_Entity_Update(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgEntitySystem *EntitySystem; 
  __int64 v3; 
  bitarray<2048> *v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  const cpose_t *p_pose; 
  CG_Cloth_Entity_Binding *v10; 
  unsigned __int64 m_size; 
  unsigned __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v20; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  vec3_t origin; 
  unsigned int globalWorldId; 
  unsigned int v36; 
  bitarray<2048> *v37; 
  CgEntitySystem *v38; 
  __int64 v39; 
  __int64 v40; 
  vec4_t quat; 

  v40 = -2i64;
  v1 = localClientNum;
  globalWorldId = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "CG_Cloth_Entity_Update");
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 428, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
  v38 = EntitySystem;
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 432, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  v3 = v1;
  v39 = v1;
  v4 = &s_CG_Cloth_Entity_BindingAllocated[v1];
  v37 = v4;
  LODWORD(v5) = 0;
  v33 = 0;
  v6 = v4->array[0];
  while ( v6 )
  {
LABEL_12:
    v7 = __lzcnt(v6);
    v8 = v7 + 32 * v5;
    if ( v7 >= 0x20 )
    {
      LODWORD(v32) = 32;
      LODWORD(v30) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    if ( (v6 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v6 &= ~(0x80000000 >> v7);
    v36 = v6;
    if ( v8 >= 0x800 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 441, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ) && entNum < s_CG_Cloth_Entity_Max_Num_Bindings)", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES && entNum < s_CG_Cloth_Entity_Max_Num_Bindings") )
        __debugbreak();
      LODWORD(v32) = 2048;
      LODWORD(v31) = v7 + 32 * v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    p_pose = &EntitySystem->m_entities[v8].pose;
    if ( !p_pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 445, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
      __debugbreak();
    AnglesToQuat(&p_pose->angles, &quat);
    v10 = &s_CG_Cloth_Entity_Bindings[v3][v8];
    m_size = v10->clothInstances.m_data.m_size;
    if ( (_DWORD)m_size )
    {
      v12 = 0i64;
      v13 = (unsigned int)m_size;
      v14 = globalWorldId;
      do
      {
        if ( v12 >= v10->clothInstances.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 176, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v12 >= v10->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 114, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v15 = v10->clothInstances.m_data.m_buffer[v12];
        if ( v15 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 464, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
          __debugbreak();
        if ( !p_pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
        FunctionPointer_origin(&p_pose->origin.origin.origin, &origin);
        if ( p_pose->isPosePrecise )
        {
          _XMM0 = LODWORD(origin.v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v20;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          origin.v[0] = *(float *)&_XMM2;
          _XMM0 = LODWORD(origin.v[1]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v20;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          origin.v[1] = *(float *)&_XMM2;
          _XMM0 = LODWORD(origin.v[2]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v20;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          origin.v[2] = *(float *)&_XMM2;
        }
        Cloth_Update_SetInstanceTransform(v14, v15, &origin, &quat);
        memset(&origin, 0, sizeof(origin));
        ++v12;
        --v13;
      }
      while ( v13 );
      LODWORD(v5) = v33;
      v6 = v36;
      v4 = v37;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cloth\\cg_cloth_entity.cpp", 459, ASSERT_TYPE_ASSERT, "(numClothInstances > 0)", (const char *)&queryFormat, "numClothInstances > 0") )
        __debugbreak();
      v4 = v37;
    }
    v3 = v39;
    EntitySystem = v38;
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    v33 = v5;
    if ( (unsigned int)v5 >= 0x40 )
      break;
    v6 = v4->array[v5];
    if ( v6 )
      goto LABEL_12;
  }
  Sys_ProfEndNamedEvent();
}

