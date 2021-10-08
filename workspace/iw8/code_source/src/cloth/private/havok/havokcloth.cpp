/*
==============
HavokCloth_GetPhysicsProxyAction
==============
*/

HavokCloth_PhysicsProxyAction *__fastcall HavokCloth_GetPhysicsProxyAction(const unsigned int globalWorldId, const unsigned int instanceId, unsigned int clothInstanceIdx)
{
  return ?HavokCloth_GetPhysicsProxyAction@@YAPEAVHavokCloth_PhysicsProxyAction@@III@Z(globalWorldId, instanceId, clothInstanceIdx);
}

/*
==============
HavokCloth_ClearSimulatedSpeed
==============
*/

void __fastcall HavokCloth_ClearSimulatedSpeed(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?HavokCloth_ClearSimulatedSpeed@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_Init
==============
*/

void HavokCloth_Init(void)
{
  ?HavokCloth_Init@@YAXXZ();
}

/*
==============
HavokCloth_GetActiveCollidables
==============
*/

void __fastcall HavokCloth_GetActiveCollidables(const unsigned int globalWorldId, const unsigned int instanceId, HavokCloth_ActiveCollidableData *const outputBuffer, const unsigned int bufferSize, unsigned int *numCollidables, const bool removeDuplicates)
{
  ?HavokCloth_GetActiveCollidables@@YAXIIQEAUHavokCloth_ActiveCollidableData@@IPEAI_N@Z(globalWorldId, instanceId, outputBuffer, bufferSize, numCollidables, removeDuplicates);
}

/*
==============
HavokCloth_GetReadBones
==============
*/

const bitarray<768> *__fastcall HavokCloth_GetReadBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetReadBones@@YAPEBV?$bitarray@$0DAA@@@II@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_GetOwnerType
==============
*/

Cloth_OwnerType __fastcall HavokCloth_GetOwnerType(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetOwnerType@@YA?AW4Cloth_OwnerType@@II@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_GetSimulatedSpeed
==============
*/

bool __fastcall HavokCloth_GetSimulatedSpeed(const unsigned int globalWorldId, const unsigned int instanceId, float *speed)
{
  return ?HavokCloth_GetSimulatedSpeed@@YA_NIIPEAM@Z(globalWorldId, instanceId, speed);
}

/*
==============
HavokCloth_GetInstanceRuntimeMemoryRequirements
==============
*/

unsigned int __fastcall HavokCloth_GetInstanceRuntimeMemoryRequirements(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetInstanceRuntimeMemoryRequirements@@YAIII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_GetBlendedSpeed
==============
*/

double __fastcall HavokCloth_GetBlendedSpeed(const unsigned int globalWorldId, const unsigned int instanceId)
{
  double result; 

  *(float *)&result = ?HavokCloth_GetBlendedSpeed@@YAMII@Z(globalWorldId, instanceId);
  return result;
}

/*
==============
HavokCloth_InstantiationUtil::HavokCloth_InstantiationUtil
==============
*/

void __fastcall HavokCloth_InstantiationUtil::HavokCloth_InstantiationUtil(HavokCloth_InstantiationUtil *this, HavokCloth_InstantiationInput *input, hclInstantiationOutput *output)
{
  ??0HavokCloth_InstantiationUtil@@QEAA@AEAVHavokCloth_InstantiationInput@@AEAUhclInstantiationOutput@@@Z(this, input, output);
}

/*
==============
HavokCloth_SetInstancePosition
==============
*/

void __fastcall HavokCloth_SetInstancePosition(const unsigned int globalWorldId, const unsigned int instanceId, const hkVector4f *position)
{
  ?HavokCloth_SetInstancePosition@@YAXIIAEBVhkVector4f@@@Z(globalWorldId, instanceId, position);
}

/*
==============
HavokCloth_GetClothAsset
==============
*/

const ClothAsset *__fastcall HavokCloth_GetClothAsset(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetClothAsset@@YAPEBUClothAsset@@II@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_GetClothInstance
==============
*/

hclClothInstance *__fastcall HavokCloth_GetClothInstance(const unsigned int globalWorldId, const unsigned int instanceId, unsigned int clothInstanceIdx)
{
  return ?HavokCloth_GetClothInstance@@YAPEAVhclClothInstance@@III@Z(globalWorldId, instanceId, clothInstanceIdx);
}

/*
==============
HavokCloth_GetWrittenBones
==============
*/

const bitarray<768> *__fastcall HavokCloth_GetWrittenBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetWrittenBones@@YAPEBV?$bitarray@$0DAA@@@II@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_GetRefId
==============
*/

unsigned int __fastcall HavokCloth_GetRefId(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetRefId@@YAIII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_InstantiateAsset
==============
*/

unsigned int __fastcall HavokCloth_InstantiateAsset(const unsigned int globalWorldId, const ClothAsset *const clothAsset, const unsigned int refId, const Cloth_OwnerType ownerType, const hkVector4f *position, const hkQuaternionf *orientation, const DObj *dObj, const bool bindPoseBased)
{
  return ?HavokCloth_InstantiateAsset@@YAIIQEBUClothAsset@@IW4Cloth_OwnerType@@AEBVhkVector4f@@AEBVhkQuaternionf@@PEBUDObj@@_N@Z(globalWorldId, clothAsset, refId, ownerType, position, orientation, dObj, bindPoseBased);
}

/*
==============
HavokCloth_CreateGlobalWorld
==============
*/

void __fastcall HavokCloth_CreateGlobalWorld(const unsigned int globalWorldId)
{
  ?HavokCloth_CreateGlobalWorld@@YAXI@Z(globalWorldId);
}

/*
==============
HavokCloth_GetInstanceList
==============
*/

void __fastcall HavokCloth_GetInstanceList(const unsigned int globalWorldId, unsigned int *instances, unsigned int *numInstances)
{
  ?HavokCloth_GetInstanceList@@YAXIPEAI0@Z(globalWorldId, instances, numInstances);
}

/*
==============
HavokCloth_Shutdown
==============
*/

void HavokCloth_Shutdown(void)
{
  ?HavokCloth_Shutdown@@YAXXZ();
}

/*
==============
HavokCloth_GetGlobalClothWorld
==============
*/

hclWorld *__fastcall HavokCloth_GetGlobalClothWorld(const unsigned int globalWorldId)
{
  return ?HavokCloth_GetGlobalClothWorld@@YAPEAVhclWorld@@I@Z(globalWorldId);
}

/*
==============
HavokCloth_GetCollidable
==============
*/

const hclCollidable *__fastcall HavokCloth_GetCollidable(const unsigned int globalWorldId, const unsigned int instanceId, unsigned int collidableIdx)
{
  return ?HavokCloth_GetCollidable@@YAPEBVhclCollidable@@III@Z(globalWorldId, instanceId, collidableIdx);
}

/*
==============
HavokCloth_AddSimulatedSpeed
==============
*/

void __fastcall HavokCloth_AddSimulatedSpeed(const unsigned int globalWorldId, const unsigned int instanceId, const float speed)
{
  ?HavokCloth_AddSimulatedSpeed@@YAXIIM@Z(globalWorldId, instanceId, speed);
}

/*
==============
HavokCloth_SetBlendedSpeed
==============
*/

void __fastcall HavokCloth_SetBlendedSpeed(const unsigned int globalWorldId, const unsigned int instanceId, float speed)
{
  ?HavokCloth_SetBlendedSpeed@@YAXIIM@Z(globalWorldId, instanceId, speed);
}

/*
==============
HavokCloth_GetInstancePosition
==============
*/

void __fastcall HavokCloth_GetInstancePosition(const unsigned int globalWorldId, const unsigned int instanceId, hkVector4f *position)
{
  ?HavokCloth_GetInstancePosition@@YAXIIAEAVhkVector4f@@@Z(globalWorldId, instanceId, position);
}

/*
==============
HavokCloth_GetInstanceBindPoseBased
==============
*/

bool __fastcall HavokCloth_GetInstanceBindPoseBased(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetInstanceBindPoseBased@@YA_NII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_RebindInstance
==============
*/

void __fastcall HavokCloth_RebindInstance(const unsigned int globalWorldId, const unsigned int instanceId, const hkVector4f *position, const hkQuaternionf *orientation, const DObj *dObj, const bool bindPoseBased)
{
  ?HavokCloth_RebindInstance@@YAXIIAEBVhkVector4f@@AEBVhkQuaternionf@@PEBUDObj@@_N@Z(globalWorldId, instanceId, position, orientation, dObj, bindPoseBased);
}

/*
==============
HavokCloth_GetInstanceOrientation
==============
*/

void __fastcall HavokCloth_GetInstanceOrientation(const unsigned int globalWorldId, const unsigned int instanceId, hkQuaternionf *orientation)
{
  ?HavokCloth_GetInstanceOrientation@@YAXIIAEAVhkQuaternionf@@@Z(globalWorldId, instanceId, orientation);
}

/*
==============
HavokCloth_InstantiationUtil::getUserStaticBuffer
==============
*/

hclBuffer *__fastcall HavokCloth_InstantiationUtil::getUserStaticBuffer(HavokCloth_InstantiationUtil *this, const hclBufferDefinition *bufferDefinition)
{
  return ?getUserStaticBuffer@HavokCloth_InstantiationUtil@@MEAAPEAVhclBuffer@@PEBVhclBufferDefinition@@@Z(this, bufferDefinition);
}

/*
==============
HavokCloth_SetInstanceOrientation
==============
*/

void __fastcall HavokCloth_SetInstanceOrientation(const unsigned int globalWorldId, const unsigned int instanceId, const hkQuaternionf *orientation)
{
  ?HavokCloth_SetInstanceOrientation@@YAXIIAEBVhkQuaternionf@@@Z(globalWorldId, instanceId, orientation);
}

/*
==============
HavokCloth_DestroyInstance
==============
*/

void __fastcall HavokCloth_DestroyInstance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?HavokCloth_DestroyInstance@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_GetAccessedBones
==============
*/

const bitarray<768> *__fastcall HavokCloth_GetAccessedBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetAccessedBones@@YAPEBV?$bitarray@$0DAA@@@II@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_GetNumClothInstances
==============
*/

unsigned int __fastcall HavokCloth_GetNumClothInstances(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetNumClothInstances@@YAIII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_SetCurrentSoundIdx
==============
*/

void __fastcall HavokCloth_SetCurrentSoundIdx(const unsigned int globalWorldId, const unsigned int instanceId, unsigned int soundIdx)
{
  ?HavokCloth_SetCurrentSoundIdx@@YAXIII@Z(globalWorldId, instanceId, soundIdx);
}

/*
==============
HavokCloth_GetNumCollidables
==============
*/

unsigned int __fastcall HavokCloth_GetNumCollidables(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetNumCollidables@@YAIII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_InstantiationUtil::getUserDisplayBuffer
==============
*/

hclBuffer *__fastcall HavokCloth_InstantiationUtil::getUserDisplayBuffer(HavokCloth_InstantiationUtil *this, const hclBufferDefinition *bufferDefinition)
{
  return ?getUserDisplayBuffer@HavokCloth_InstantiationUtil@@MEAAPEAVhclBuffer@@PEBVhclBufferDefinition@@@Z(this, bufferDefinition);
}

/*
==============
HavokCloth_DestroyGlobalWorld
==============
*/

void __fastcall HavokCloth_DestroyGlobalWorld(const unsigned int globalWorldId)
{
  ?HavokCloth_DestroyGlobalWorld@@YAXI@Z(globalWorldId);
}

/*
==============
HavokCloth_GetCurrentSoundIdx
==============
*/

unsigned int __fastcall HavokCloth_GetCurrentSoundIdx(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_GetCurrentSoundIdx@@YAIII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_IsInstanceInUse
==============
*/

bool __fastcall HavokCloth_IsInstanceInUse(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_IsInstanceInUse@@YA_NII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_InstantiationUtil::HavokCloth_InstantiationUtil
==============
*/
void HavokCloth_InstantiationUtil::HavokCloth_InstantiationUtil(HavokCloth_InstantiationUtil *this, HavokCloth_InstantiationInput *input, hclInstantiationOutput *output)
{
  const ClothAsset *m_clothAsset; 

  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->m_input = input;
  this->m_output = output;
  this->__vftable = (HavokCloth_InstantiationUtil_vtbl *)&HavokCloth_InstantiationUtil::`vftable';
  m_clothAsset = input->m_clothAsset;
  this->m_clothAsset = m_clothAsset;
  if ( !m_clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 125, ASSERT_TYPE_ASSERT, "(m_clothAsset)", (const char *)&queryFormat, "m_clothAsset", -2i64) )
    __debugbreak();
}

/*
==============
HavokCloth_AddSimulatedSpeed
==============
*/

void __fastcall HavokCloth_AddSimulatedSpeed(const unsigned int globalWorldId, const unsigned int instanceId, double speed)
{
  __int64 v5; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v5 = globalWorldId;
  __asm { vmovaps xmm6, xmm2 }
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 999, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1000, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6; speed
    vmovaps xmm6, [rsp+58h+var_18]
  }
  HavokCloth_InstanceManager_AddSimulatedSpeed(&s_HavokCloth_InstanceManagers[v5], instanceId, *(const float *)&_XMM2);
}

/*
==============
HavokCloth_CalculateRuntimeMemoryRequirement
==============
*/
__int64 HavokCloth_CalculateRuntimeMemoryRequirement(const hclWorld *world, const hclClothInstance *clothInstance)
{
  const hclClothData *m_clothData; 
  const hclClothState **m_data; 
  unsigned int v5; 
  const char *v6; 
  const hclClothState *v7; 
  int v8; 
  unsigned int v9; 
  int *v10; 
  const hclOperator *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  __int64 v16; 
  hclBuffer *v17; 
  unsigned int v20; 
  const hclClothState **v21; 
  const hclClothData *v22; 

  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 266, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( !clothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 267, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  m_clothData = clothInstance->m_clothData;
  v22 = m_clothData;
  if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 271, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  m_data = m_clothData->m_clothStateDatas.m_data;
  v5 = 0;
  v20 = 0;
  v21 = m_data;
  if ( m_data != &m_data[m_clothData->m_clothStateDatas.m_size] )
  {
    v6 = "op";
    do
    {
      v7 = *m_data;
      v8 = 0;
      v9 = 0;
      v10 = (int *)(*m_data)->m_operators.m_data;
      if ( v10 != &v10[(*m_data)->m_operators.m_size] )
      {
        do
        {
          v11 = m_clothData->m_operators.m_data[*v10];
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 293, ASSERT_TYPE_ASSERT, "(op)", (const char *)&queryFormat, "op") )
            __debugbreak();
          v12 = v11->_getOperatorTempMemorySize((hclOperator *)v11, clothInstance);
          if ( v9 > v12 )
            v12 = v9;
          v9 = v12;
          v13 = v11->_getStepTempMemorySize((hclOperator *)v11, world, clothInstance);
          v6 = "op";
          v8 += v13;
          ++v10;
        }
        while ( v10 != (int *)&v7->m_operators.m_data[v7->m_operators.m_size] );
        m_data = v21;
        v5 = v20;
      }
      v14 = v9 + v8;
      v15 = 0;
      if ( v7->m_usedBuffers.m_size > 0 )
      {
        v16 = 0i64;
        do
        {
          v17 = clothInstance->m_buffers.m_data[v7->m_usedBuffers.m_data[v16].m_bufferIndex];
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 317, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
            __debugbreak();
          ++v15;
          ++v16;
          v14 += ((__int64 (__fastcall *)(hclBuffer *, const char *))v17->_getRuntimeBufferSize)(v17, v6);
        }
        while ( v15 < v7->m_usedBuffers.m_size );
        m_clothData = v22;
        m_data = v21;
        v5 = v20;
      }
      if ( v5 > v14 )
        v14 = v5;
      ++m_data;
      v5 = v14;
      v20 = v14;
      v21 = m_data;
      v6 = "op";
    }
    while ( m_data != &m_clothData->m_clothStateDatas.m_data[m_clothData->m_clothStateDatas.m_size] );
  }
  return v5;
}

/*
==============
HavokCloth_ClearSimulatedSpeed
==============
*/
void HavokCloth_ClearSimulatedSpeed(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 985, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 986, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_InstanceManager_ClearSimulatedSpeed(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_CreateGlobalWorld
==============
*/
void HavokCloth_CreateGlobalWorld(const unsigned int globalWorldId)
{
  __int64 v1; 
  hkMemoryRouter *Value; 
  hclWorld *v3; 
  unsigned int v4; 
  hclWorld *v5; 
  hclWorld *v6; 
  hclClothContext *v7; 
  const dvar_t *v8; 
  unsigned int flags; 
  __int64 v10; 
  __int64 v11; 
  hclClothContext *clothContexts[8]; 
  hclWorld::Options options; 
  unsigned int numContexts; 
  hclWorld *v15; 

  v1 = globalWorldId;
  if ( globalWorldId >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 224, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
      __debugbreak();
    LODWORD(v11) = 2;
    LODWORD(v10) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  hclWorld::Options::Options(&options);
  options.m_onTheFlyNotifications.m_bool = 0;
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v3 = (hclWorld *)Value->m_heap->blockAlloc(Value->m_heap, 304i64);
  v15 = v3;
  v4 = 0;
  if ( v3 )
  {
    hclWorld::hclWorld(v3, &options);
    v6 = v5;
  }
  else
  {
    v6 = NULL;
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 175, ASSERT_TYPE_ASSERT, "(clothWorld)", (const char *)&queryFormat, "clothWorld") )
    __debugbreak();
  numContexts = 0;
  HavokPhysics_GetClothVisContexts(v1, &numContexts, clothContexts);
  if ( numContexts > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 182, ASSERT_TYPE_ASSERT, "(numClothContexts <= s_HavokCloth_Max_Cloth_Contexts)", (const char *)&queryFormat, "numClothContexts <= s_HavokCloth_Max_Cloth_Contexts") )
    __debugbreak();
  if ( numContexts )
  {
    do
    {
      v7 = clothContexts[v4];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 186, ASSERT_TYPE_ASSERT, "(clothContext)", (const char *)&queryFormat, "clothContext") )
        __debugbreak();
      hclClothContext::addWorld(v7, v6);
      ++v4;
    }
    while ( v4 < numContexts );
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 228, ASSERT_TYPE_ASSERT, "(globalWorld)", (const char *)&queryFormat, "globalWorld") )
    __debugbreak();
  if ( s_HavokCloth_GlobalClothWorlds[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 231, ASSERT_TYPE_ASSERT, "(s_HavokCloth_GlobalClothWorlds[globalWorldId] == nullptr)", (const char *)&queryFormat, "s_HavokCloth_GlobalClothWorlds[globalWorldId] == HK_NULL") )
    __debugbreak();
  s_HavokCloth_GlobalClothWorlds[v1] = v6;
  v8 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v8->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v8->name) )
      __debugbreak();
  }
  HavokCloth_InstanceManager_Init(&s_HavokCloth_InstanceManagers[v1], v8->current.unsignedInt);
}

/*
==============
HavokCloth_DestroyGlobalWorld
==============
*/
void HavokCloth_DestroyGlobalWorld(const unsigned int globalWorldId)
{
  __int64 v1; 
  hclWorld *v2; 
  hclWorld **v3; 
  __int64 i; 
  hclClothContext *v5; 
  unsigned __int16 m_refCount; 
  signed __int32 v7[8]; 
  __int64 v8; 
  __int64 v9; 
  hclClothContext *clothContexts[5]; 
  unsigned int numContexts; 

  v1 = globalWorldId;
  if ( globalWorldId >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = globalWorldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 243, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v2 = s_HavokCloth_GlobalClothWorlds[v1];
  v3 = &s_HavokCloth_GlobalClothWorlds[v1];
  if ( v2 )
  {
    HavokCloth_InstanceManager_Shutdown(&s_HavokCloth_InstanceManagers[v1]);
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v9) = 2;
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    numContexts = 0;
    HavokPhysics_GetClothVisContexts(v1, &numContexts, clothContexts);
    if ( numContexts > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 206, ASSERT_TYPE_ASSERT, "(numClothContexts <= s_HavokCloth_Max_Cloth_Contexts)", (const char *)&queryFormat, "numClothContexts <= s_HavokCloth_Max_Cloth_Contexts") )
      __debugbreak();
    for ( i = 0i64; (unsigned int)i < numContexts; i = (unsigned int)(i + 1) )
    {
      v5 = clothContexts[i];
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 210, ASSERT_TYPE_ASSERT, "(clothContext)", (const char *)&queryFormat, "clothContext") )
        __debugbreak();
      hclClothContext::removeWorld(v5, v2);
    }
    _InterlockedOr(v7, 0);
    m_refCount = v2->m_refCount;
    _InterlockedOr(v7, 0);
    if ( m_refCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 216, ASSERT_TYPE_ASSERT, "(clothWorld->getReferenceCount() == 1)", (const char *)&queryFormat, "clothWorld->getReferenceCount() == 1") )
      __debugbreak();
    hkReferencedObject::removeReference(v2);
    *v3 = NULL;
  }
}

/*
==============
HavokCloth_DestroyInstance
==============
*/
void HavokCloth_DestroyInstance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v3; 
  hclWorld *v4; 
  HavokCloth_InstanceManager *v5; 
  unsigned int NumClothInstances; 
  unsigned int i; 
  hclClothInstance *ClothInstance; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 659, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 660, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFAEBD7, "HavokCloth_DestroyInstance");
  v4 = s_HavokCloth_GlobalClothWorlds[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 665, ASSERT_TYPE_ASSERT, "(globalWorld)", (const char *)&queryFormat, "globalWorld") )
    __debugbreak();
  HavokCloth_Update_ClearInstance(v3, instanceId);
  v5 = &s_HavokCloth_InstanceManagers[v3];
  HavokCloth_Update_FlagForPhysicsProxyUpdate(v3, instanceId, 0);
  HavokCloth_Update_FlagForPhysicsProxyRebuild(v3, instanceId, 0);
  NumClothInstances = HavokCloth_InstanceManager_GetNumClothInstances(v5, instanceId);
  for ( i = 0; i < NumClothInstances; ++i )
  {
    ClothInstance = HavokCloth_InstanceManager_GetClothInstance(v5, instanceId, i);
    if ( ClothInstance )
      hclWorld::removeClothInstance(v4, ClothInstance);
  }
  HavokCloth_InstanceManager_ReleaseCollidables(v5, instanceId);
  HavokCloth_InstanceManager_ReleaseClothInstances(v5, instanceId);
  HavokCloth_InstanceManager_DestroyInstance(v5, instanceId);
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_GetAccessedBones
==============
*/
const bitarray<768> *HavokCloth_GetAccessedBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 
  const bitarray<768> *result; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1289, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1290, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  result = HavokCloth_InstanceManager_GetAccessedBones(&s_HavokCloth_InstanceManagers[v2], instanceId);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1297, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
HavokCloth_GetActiveCollidables
==============
*/
void HavokCloth_GetActiveCollidables(const unsigned int globalWorldId, const unsigned int instanceId, HavokCloth_ActiveCollidableData *const outputBuffer, const unsigned int bufferSize, unsigned int *numCollidables, const bool removeDuplicates)
{
  __int64 v6; 
  unsigned int v9; 
  unsigned int v11; 
  const HavokCloth_InstanceManager *v12; 
  hclClothInstance *ClothInstance; 
  const hclClothData *m_clothData; 
  __int64 m_currentState; 
  unsigned int v16; 
  const hclClothState *v17; 
  __int64 v18; 
  const hclSimClothData *v19; 
  const hclCollidable **m_data; 
  unsigned int v21; 
  int m_transformSetIndex; 
  const hclCollidable *v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int m_size; 
  unsigned int NumClothInstances; 
  const hclClothData *v30; 
  const hclClothState *v31; 
  const HavokCloth_InstanceManager *v32; 
  int v35; 
  unsigned int numCollidablesa; 

  v6 = globalWorldId;
  v9 = instanceId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1163, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( v9 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1164, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( !outputBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1165, ASSERT_TYPE_ASSERT, "(outputBuffer)", (const char *)&queryFormat, "outputBuffer") )
    __debugbreak();
  if ( !bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1166, ASSERT_TYPE_ASSERT, "(bufferSize > 0)", (const char *)&queryFormat, "bufferSize > 0") )
    __debugbreak();
  if ( !numCollidables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1167, ASSERT_TYPE_ASSERT, "(numCollidables)", (const char *)&queryFormat, "numCollidables") )
    __debugbreak();
  if ( *numCollidables && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1168, ASSERT_TYPE_ASSERT, "(*numCollidables == 0)", (const char *)&queryFormat, "*numCollidables == 0") )
    __debugbreak();
  v11 = 0;
  NumClothInstances = HavokCloth_GetNumClothInstances(v6, v9);
  numCollidablesa = 0;
  if ( NumClothInstances )
  {
    v12 = &s_HavokCloth_InstanceManagers[v6];
    v32 = v12;
    do
    {
      if ( (unsigned int)v6 >= 2 )
      {
        LODWORD(v27) = 2;
        LODWORD(v26) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      if ( v9 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1117, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
        __debugbreak();
      if ( v11 >= HavokCloth_GetNumClothInstances(v6, v9) )
      {
        LODWORD(v27) = HavokCloth_GetNumClothInstances(v6, v9);
        LODWORD(v26) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1118, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( HavokCloth_GetNumClothInstances( globalWorldId, instanceId ) )", "clothInstanceIdx doesn't index HavokCloth_GetNumClothInstances( globalWorldId, instanceId )\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      ClothInstance = HavokCloth_InstanceManager_GetClothInstance(v12, v9, v11);
      if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1176, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
      m_clothData = ClothInstance->m_clothData;
      v30 = m_clothData;
      if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1180, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
        __debugbreak();
      m_currentState = (int)ClothInstance->m_currentState;
      if ( (unsigned int)m_currentState >= m_clothData->m_clothStateDatas.m_size )
      {
        LODWORD(v27) = m_clothData->m_clothStateDatas.m_size;
        LODWORD(v26) = m_currentState;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1184, ASSERT_TYPE_ASSERT, "(unsigned)( stateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "stateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v16 = 0;
      v35 = 0;
      v17 = m_clothData->m_clothStateDatas.m_data[m_currentState];
      v31 = v17;
      m_size = v17->m_usedSimCloths.m_size;
      if ( m_size )
      {
        do
        {
          v18 = (int)v17->m_usedSimCloths.m_data[v16];
          if ( (unsigned int)v18 >= m_clothData->m_simClothDatas.m_size )
          {
            LODWORD(v27) = m_clothData->m_simClothDatas.m_size;
            LODWORD(v26) = v17->m_usedSimCloths.m_data[v16];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1192, ASSERT_TYPE_ASSERT, "(unsigned)( simClothIdx ) < (unsigned)( clothData->m_simClothDatas.getSize() )", "simClothIdx doesn't index clothData->m_simClothDatas.getSize()\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          v19 = m_clothData->m_simClothDatas.m_data[v18];
          if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1196, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
            __debugbreak();
          m_data = v19->m_perInstanceCollidables.m_data;
          v21 = 0;
          m_transformSetIndex = v19->m_collidableTransformMap.m_transformSetIndex;
          if ( m_data != &m_data[v19->m_perInstanceCollidables.m_size] )
          {
            while ( 1 )
            {
              v23 = *m_data;
              if ( !*m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1210, ASSERT_TYPE_ASSERT, "(collidable)", (const char *)&queryFormat, "collidable") )
                __debugbreak();
              if ( removeDuplicates )
              {
                v24 = 0i64;
                if ( *numCollidables )
                  break;
              }
LABEL_54:
              v25 = *numCollidables;
              if ( (unsigned int)v25 < bufferSize )
              {
                outputBuffer[v25].clothInstanceIdx = numCollidablesa;
                outputBuffer[*numCollidables].collidable = v23;
                outputBuffer[*numCollidables].transformSetIdx = m_transformSetIndex;
                if ( m_transformSetIndex >= 0 )
                {
                  if ( v21 >= v19->m_collidableTransformMap.m_transformIndices.m_size )
                  {
                    LODWORD(v27) = v19->m_collidableTransformMap.m_transformIndices.m_size;
                    LODWORD(v26) = v21;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1238, ASSERT_TYPE_ASSERT, "(unsigned)( collidableIdx ) < (unsigned)( collidableTransformMap->m_transformIndices.getSize() )", "collidableIdx doesn't index collidableTransformMap->m_transformIndices.getSize()\n\t%i not in [0, %i)", v26, v27) )
                      __debugbreak();
                  }
                  outputBuffer[*numCollidables].transformIdx = v19->m_collidableTransformMap.m_transformIndices.m_data[v21];
                }
                ++*numCollidables;
              }
              ++m_data;
              ++v21;
              if ( m_data == &v19->m_perInstanceCollidables.m_data[v19->m_perInstanceCollidables.m_size] )
                goto LABEL_62;
            }
            while ( v23 != outputBuffer[v24].collidable )
            {
              v24 = (unsigned int)(v24 + 1);
              if ( (unsigned int)v24 >= *numCollidables )
                goto LABEL_54;
            }
LABEL_62:
            v16 = v35;
          }
          m_clothData = v30;
          v17 = v31;
          v35 = ++v16;
        }
        while ( v16 < m_size );
        v9 = instanceId;
        v12 = v32;
      }
      LODWORD(v6) = globalWorldId;
      v11 = numCollidablesa + 1;
      numCollidablesa = v11;
    }
    while ( v11 < NumClothInstances );
  }
}

/*
==============
HavokCloth_GetBlendedSpeed
==============
*/
double HavokCloth_GetBlendedSpeed(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1042, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1043, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetBlendedSpeed(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetClothAsset
==============
*/
const ClothAsset *HavokCloth_GetClothAsset(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 869, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 870, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetClothAsset(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetClothInstance
==============
*/
hclClothInstance *HavokCloth_GetClothInstance(const unsigned int globalWorldId, const unsigned int instanceId, unsigned int clothInstanceIdx)
{
  __int64 v3; 
  __int64 v7; 
  __int64 v8; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1117, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1101, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1102, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( clothInstanceIdx >= HavokCloth_InstanceManager_GetNumClothInstances(&s_HavokCloth_InstanceManagers[v3], instanceId) )
  {
    LODWORD(v8) = HavokCloth_GetNumClothInstances(v3, instanceId);
    LODWORD(v7) = clothInstanceIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1118, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( HavokCloth_GetNumClothInstances( globalWorldId, instanceId ) )", "clothInstanceIdx doesn't index HavokCloth_GetNumClothInstances( globalWorldId, instanceId )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return HavokCloth_InstanceManager_GetClothInstance(&s_HavokCloth_InstanceManagers[v3], instanceId, clothInstanceIdx);
}

/*
==============
HavokCloth_GetCollidable
==============
*/
hclCollidable *HavokCloth_GetCollidable(const unsigned int globalWorldId, const unsigned int instanceId, unsigned int collidableIdx)
{
  __int64 v3; 
  __int64 v7; 
  __int64 v8; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1147, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1148, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1132, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1133, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( collidableIdx >= HavokCloth_InstanceManager_GetNumCollidables(&s_HavokCloth_InstanceManagers[v3], instanceId) )
  {
    LODWORD(v8) = HavokCloth_GetNumCollidables(v3, instanceId);
    LODWORD(v7) = collidableIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1149, ASSERT_TYPE_ASSERT, "(unsigned)( collidableIdx ) < (unsigned)( HavokCloth_GetNumCollidables( globalWorldId, instanceId ) )", "collidableIdx doesn't index HavokCloth_GetNumCollidables( globalWorldId, instanceId )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return HavokCloth_InstanceManager_GetCollidable(&s_HavokCloth_InstanceManagers[v3], instanceId, collidableIdx);
}

/*
==============
HavokCloth_GetCurrentSoundIdx
==============
*/
unsigned int HavokCloth_GetCurrentSoundIdx(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1071, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1072, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetCurrentSoundIdx(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetGlobalClothWorld
==============
*/
hclWorld *HavokCloth_GetGlobalClothWorld(const unsigned int globalWorldId)
{
  __int64 v1; 
  hclWorld *v2; 

  v1 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 812, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  v2 = s_HavokCloth_GlobalClothWorlds[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 816, ASSERT_TYPE_ASSERT, "(globalWorld)", (const char *)&queryFormat, "globalWorld") )
    __debugbreak();
  return v2;
}

/*
==============
HavokCloth_GetInstanceBindPoseBased
==============
*/
bool HavokCloth_GetInstanceBindPoseBased(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 970, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 971, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetBindPoseBased(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetInstanceList
==============
*/
void HavokCloth_GetInstanceList(const unsigned int globalWorldId, unsigned int *instances, unsigned int *numInstances)
{
  __int64 v3; 
  const HavokCloth_InstanceManager *v6; 
  unsigned int v7; 
  unsigned int Capacity; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 825, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( !instances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 826, ASSERT_TYPE_ASSERT, "(instances)", (const char *)&queryFormat, "instances") )
    __debugbreak();
  if ( !numInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 827, ASSERT_TYPE_ASSERT, "(numInstances)", (const char *)&queryFormat, "numInstances") )
    __debugbreak();
  v6 = &s_HavokCloth_InstanceManagers[v3];
  v7 = 0;
  Capacity = HavokCloth_InstanceManager_GetCapacity(v6);
  if ( Capacity )
  {
    do
    {
      if ( HavokCloth_InstanceManager_IsInstanceInUse(v6, v7) )
        instances[(*numInstances)++] = v7;
      ++v7;
    }
    while ( v7 < Capacity );
  }
}

/*
==============
HavokCloth_GetInstanceOrientation
==============
*/
void HavokCloth_GetInstanceOrientation(const unsigned int globalWorldId, const unsigned int instanceId, hkQuaternionf *orientation)
{
  __int64 v3; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 928, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 929, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_InstanceManager_GetOrientation(&s_HavokCloth_InstanceManagers[v3], instanceId, orientation);
}

/*
==============
HavokCloth_GetInstancePosition
==============
*/
void HavokCloth_GetInstancePosition(const unsigned int globalWorldId, const unsigned int instanceId, hkVector4f *position)
{
  __int64 v3; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 914, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 915, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_InstanceManager_GetPosition(&s_HavokCloth_InstanceManagers[v3], instanceId, position);
}

/*
==============
HavokCloth_GetInstanceRuntimeMemoryRequirements
==============
*/
unsigned int HavokCloth_GetInstanceRuntimeMemoryRequirements(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1086, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1087, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetRuntimeMemoryRequirements(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetNumClothInstances
==============
*/
unsigned int HavokCloth_GetNumClothInstances(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1101, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1102, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetNumClothInstances(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetNumCollidables
==============
*/
unsigned int HavokCloth_GetNumCollidables(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1132, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1133, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetNumCollidables(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetOwnerType
==============
*/
Cloth_OwnerType HavokCloth_GetOwnerType(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 899, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 900, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetOwnerType(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetPhysicsProxyAction
==============
*/
HavokCloth_PhysicsProxyAction *HavokCloth_GetPhysicsProxyAction(const unsigned int globalWorldId, const unsigned int instanceId, unsigned int clothInstanceIdx)
{
  __int64 v3; 
  __int64 v7; 
  __int64 v8; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1307, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1308, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1101, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1102, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( clothInstanceIdx >= HavokCloth_InstanceManager_GetNumClothInstances(&s_HavokCloth_InstanceManagers[v3], instanceId) )
  {
    LODWORD(v8) = HavokCloth_GetNumClothInstances(v3, instanceId);
    LODWORD(v7) = clothInstanceIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1309, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( HavokCloth_GetNumClothInstances( globalWorldId, instanceId ) )", "clothInstanceIdx doesn't index HavokCloth_GetNumClothInstances( globalWorldId, instanceId )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return HavokCloth_InstanceManager_GetPhysicsProxyAction(&s_HavokCloth_InstanceManagers[v3], instanceId, clothInstanceIdx);
}

/*
==============
HavokCloth_GetReadBones
==============
*/
const bitarray<768> *HavokCloth_GetReadBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 
  const bitarray<768> *result; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1253, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1254, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  result = HavokCloth_InstanceManager_GetReadBones(&s_HavokCloth_InstanceManagers[v2], instanceId);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1261, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
HavokCloth_GetRefId
==============
*/
unsigned int HavokCloth_GetRefId(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 884, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 885, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetRefId(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_GetSimulatedSpeed
==============
*/
bool HavokCloth_GetSimulatedSpeed(const unsigned int globalWorldId, const unsigned int instanceId, float *speed)
{
  __int64 v3; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1013, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1014, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_GetSimulatedSpeed(&s_HavokCloth_InstanceManagers[v3], instanceId, speed);
}

/*
==============
HavokCloth_GetWrittenBones
==============
*/
const bitarray<768> *HavokCloth_GetWrittenBones(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 
  const bitarray<768> *result; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1271, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1272, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  result = HavokCloth_InstanceManager_GetWrittenBones(&s_HavokCloth_InstanceManagers[v2], instanceId);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1279, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
HavokCloth_Init
==============
*/
void HavokCloth_Init(void)
{
  HavokCloth_Assets_Init();
  hclClothSetIWProfileCallbacks(HavokCloth_ProfileStart, HavokCloth_ProfileEnd);
}

/*
==============
HavokCloth_InstantiateAsset
==============
*/
__int64 HavokCloth_InstantiateAsset(const unsigned int globalWorldId, const ClothAsset *const clothAsset, const unsigned int refId, const Cloth_OwnerType ownerType, const hkVector4f *position, const hkQuaternionf *orientation, const DObj *dObj, const bool bindPoseBased)
{
  __int64 v12; 
  HavokCloth_InstanceManager *v15; 
  unsigned int Instance; 
  ClothAsset *v17; 
  HavokCloth_InstanceManager *v18; 
  bitarray<768> *p_readBones; 
  __int64 i; 
  bitarray<768> *p_writtenBones; 
  __int64 j; 
  bitarray<768> *p_accessedBones; 
  __int64 k; 
  const hclClothContainer *Asset; 
  int m_size; 
  hclClothData **p_m_ptr; 
  hclClothData *v28; 
  __int64 boneMappingSets; 
  hclClothInstance *v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  const hclTransformSetDefinition *v36; 
  __int64 v37; 
  hkMemoryRouter *Value; 
  __int64 v39; 
  __int64 v40; 
  int m_numTransforms; 
  hkMemoryAllocator *v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  hkMemoryAllocator *v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  hkMemoryAllocator *v52; 
  int v53; 
  int v54; 
  int v55; 
  unsigned int v56; 
  DObj *v57; 
  scr_string_t v58; 
  const char ***models; 
  const char *v60; 
  const char *v61; 
  unsigned int v62; 
  unsigned int v63; 
  int v64; 
  unsigned int v65; 
  hclCollidable **v66; 
  __int64 v68; 
  hclCollidable *v69; 
  unsigned int NumClothInstances; 
  unsigned int v76; 
  unsigned int v77; 
  hclClothInstance *ClothInstance; 
  hkMemoryRouter *v80; 
  HavokCloth_PhysicsProxyAction *v81; 
  HavokCloth_PhysicsProxyAction *v82; 
  HavokCloth_PhysicsProxyAction *v83; 
  hkMemoryRouter *v84; 
  HavokCloth_VectorFieldAction *v85; 
  hclAction *v87; 
  hclAction *v88; 
  unsigned int v89; 
  __int64 result; 
  char *fmt; 
  __int64 v93; 
  __int64 v94; 
  unsigned __int16 outBoneIndex[2]; 
  unsigned int globalWorldIda; 
  ClothAsset *clothAsseta; 
  unsigned int index; 
  unsigned int instanceId; 
  unsigned int clothInstanceIdx; 
  HavokCloth_InstanceManager *manager; 
  __int64 v102; 
  hclClothData *v103; 
  DObj *obj; 
  hkReferencedObject *v105; 
  __int64 v106; 
  hclClothData **v107; 
  const hclClothContainer *v108; 
  hclWorld *world; 
  char v110; 
  int outModelIndex; 
  __int64 v112; 
  __int64 v113; 
  __int64 v114[2]; 
  hclInstantiationUtil v115; 
  ClothAsset *v116; 
  __int64 v117; 
  __m256i v118; 
  hclClothData::InstanceOptions options; 
  bitarray<768> readBones; 
  bitarray<768> accessedBones; 
  bitarray<768> writtenBones; 

  v117 = -2i64;
  __asm { vmovaps [rsp+330h+var_50], xmm6 }
  clothAsseta = (ClothAsset *)clothAsset;
  v12 = globalWorldId;
  globalWorldIda = globalWorldId;
  _RSI = position;
  obj = (DObj *)dObj;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 430, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( !clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 431, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  if ( (unsigned int)ownerType >= Cloth_OwnerType_Count )
  {
    LODWORD(v94) = 2;
    LODWORD(v93) = ownerType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 432, ASSERT_TYPE_ASSERT, "(unsigned)( ownerType ) < (unsigned)( Cloth_OwnerType_Count )", "ownerType doesn't index Cloth_OwnerType_Count\n\t%i not in [0, %i)", v93, v94) )
      __debugbreak();
  }
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 433, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFAEBD7, "HavokCloth_InstantiateAsset");
  world = s_HavokCloth_GlobalClothWorlds[v12];
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 438, ASSERT_TYPE_ASSERT, "(globalWorld)", (const char *)&queryFormat, "globalWorld") )
    __debugbreak();
  hkRotationImpl<float>::set((hkRotationImpl<float> *)&v118, orientation);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rbp+230h+var_1E0], xmm0
  }
  v15 = &s_HavokCloth_InstanceManagers[v12];
  manager = v15;
  Instance = HavokCloth_InstanceManager_AllocateInstance(v15);
  instanceId = Instance;
  if ( Instance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 449, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_InstanceManager_SetRefId(v15, Instance, refId);
  HavokCloth_InstanceManager_SetOwnerType(v15, Instance, ownerType);
  v17 = clothAsseta;
  HavokCloth_InstanceManager_SetClothAsset(v15, Instance, clothAsseta);
  HavokCloth_InstanceManager_SetPosition(v15, Instance, position);
  v18 = &s_HavokCloth_InstanceManagers[v12];
  HavokCloth_InstanceManager_SetOrientation(v15, Instance, orientation);
  HavokCloth_InstanceManager_SetBindPoseBased(v15, Instance, bindPoseBased);
  p_readBones = &readBones;
  for ( i = 24i64; i; --i )
  {
    p_readBones->array[0] = 0;
    p_readBones = (bitarray<768> *)((char *)p_readBones + 4);
  }
  p_writtenBones = &writtenBones;
  for ( j = 24i64; j; --j )
  {
    p_writtenBones->array[0] = 0;
    p_writtenBones = (bitarray<768> *)((char *)p_writtenBones + 4);
  }
  p_accessedBones = &accessedBones;
  for ( k = 24i64; k; --k )
  {
    p_accessedBones->array[0] = 0;
    p_accessedBones = (bitarray<768> *)((char *)p_accessedBones + 4);
  }
  Asset = HavokCloth_GetAsset(v17);
  v108 = Asset;
  if ( !Asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 469, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  m_size = Asset->m_clothDatas.m_size;
  if ( m_size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 474, ASSERT_TYPE_ASSERT, "(numClothDatas > 0)", (const char *)&queryFormat, "numClothDatas > 0") )
    __debugbreak();
  if ( m_size != v17->boneMappingSetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 475, ASSERT_TYPE_ASSERT, "(numClothDatas == static_cast<int>(clothAsset->boneMappingSetCount))", (const char *)&queryFormat, "numClothDatas == static_cast<int>(clothAsset->boneMappingSetCount)") )
    __debugbreak();
  HavokCloth_InstanceManager_ReserveClothInstances(v18, Instance, m_size);
  clothInstanceIdx = 0;
  p_m_ptr = &Asset->m_clothDatas.m_data->m_ptr;
  v107 = p_m_ptr;
  if ( p_m_ptr != &p_m_ptr[Asset->m_clothDatas.m_size] )
  {
    v102 = 0i64;
    do
    {
      v28 = *p_m_ptr;
      v103 = v28;
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 482, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
        __debugbreak();
      boneMappingSets = (__int64)v17->boneMappingSets;
      v112 = boneMappingSets;
      hclClothData::InstanceOptions::InstanceOptions(&options);
      options.m_initialState = v17->animationStateIdx;
      options.m_setPose.m_bool = 1;
      options.m_poseIndex = 0;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+230h+var_210.baseclass_0.m_col0.m_quad]
        vmovups ymmword ptr [rbp+230h+options.m_transform.m_rotation.baseclass_0.m_col0.m_quad], ymm0
        vmovups ymm0, ymmword ptr [rbp+40h]
        vmovups ymmword ptr [rbp+230h+options.m_transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
      }
      v32 = hclClothData::createInstance(v28, &options);
      v105 = v32;
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 495, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
      v114[0] = (__int64)v32;
      v114[1] = (__int64)v17;
      v115.m_propertyBag.m_bag = NULL;
      *(_DWORD *)&v115.m_memSizeAndFlags = 0x1FFFF;
      v115.m_input = (hclInstantiationInput *)v114;
      v115.m_output = (hclInstantiationOutput *)&v110;
      v115.__vftable = (hclInstantiationUtil_vtbl *)&HavokCloth_InstantiationUtil::`vftable';
      v116 = v17;
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 125, ASSERT_TYPE_ASSERT, "(m_clothAsset)", (const char *)&queryFormat, "m_clothAsset") )
        __debugbreak();
      hclInstantiationUtil::instantiateBuffers(&v115);
      v33 = v28->m_transformSetDefinitions.m_size;
      if ( (_DWORD)v33 != v32->m_transformSets.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 509, ASSERT_TYPE_ASSERT, "(numTransformSetDefs == clothInstance->m_transformSets.getSize())", (const char *)&queryFormat, "numTransformSetDefs == clothInstance->m_transformSets.getSize()") )
        __debugbreak();
      if ( (_DWORD)v33 != *(_DWORD *)(v102 + boneMappingSets + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 510, ASSERT_TYPE_ASSERT, "(numTransformSetDefs == static_cast<int>(boneMappingSet->boneMappingCount))", (const char *)&queryFormat, "numTransformSetDefs == static_cast<int>(boneMappingSet->boneMappingCount)") )
        __debugbreak();
      index = 0;
      v34 = 0i64;
      v106 = 0i64;
      v113 = v33;
      if ( (int)v33 > 0 )
      {
        v35 = 0i64;
        do
        {
          v36 = v28->m_transformSetDefinitions.m_data[v34];
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 515, ASSERT_TYPE_ASSERT, "(transformSetDef)", (const char *)&queryFormat, "transformSetDef") )
            __debugbreak();
          v37 = *(_QWORD *)(v102 + v112);
          if ( *(_DWORD *)(v37 + v35 + 8) != v36->m_numTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 519, ASSERT_TYPE_ASSERT, "(boneMapping->scrTagCount == transformSetDef->m_numTransforms)", (const char *)&queryFormat, "boneMapping->scrTagCount == transformSetDef->m_numTransforms") )
            __debugbreak();
          Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
          if ( !Value )
            Value = hkMemoryRouter::s_fallbackRouter;
          v39 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 72i64);
          v40 = v39;
          if ( v39 )
          {
            *(_DWORD *)(v39 + 20) = 0;
            *(_QWORD *)(v39 + 32) = 0i64;
            *(_QWORD *)(v39 + 48) = 0i64;
            *(_QWORD *)(v39 + 64) = 0i64;
            *(_QWORD *)(v39 + 8) = 0i64;
            *(_DWORD *)(v39 + 16) = 0x1FFFF;
            *(_QWORD *)(v39 + 24) = 0i64;
            *(_DWORD *)(v39 + 32) = 0;
            *(_DWORD *)(v39 + 36) = 0x80000000;
            *(_QWORD *)(v39 + 40) = 0i64;
            *(_DWORD *)(v39 + 48) = 0;
            *(_DWORD *)(v39 + 52) = 0x80000000;
            *(_QWORD *)v39 = &HavokClothTransformSet::`vftable';
            *(_QWORD *)(v39 + 56) = 0i64;
            *(_DWORD *)(v39 + 64) = 0;
            *(_DWORD *)(v39 + 68) = 0x80000000;
          }
          else
          {
            v40 = 0i64;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 523, ASSERT_TYPE_ASSERT, "(transformSet)", (const char *)&queryFormat, "transformSet") )
              __debugbreak();
          }
          m_numTransforms = v36->m_numTransforms;
          v42 = hkMemHeapAllocator();
          v43 = *(_DWORD *)(v40 + 36) & 0x3FFFFFFF;
          if ( v43 < m_numTransforms )
          {
            v44 = 2 * v43;
            if ( (unsigned int)v44 >= 0x3FFFFFFF )
              v44 = 1073741822;
            v45 = m_numTransforms;
            if ( m_numTransforms < v44 )
              v45 = v44;
            hkArrayUtil::_reserve(v42, (void *)(v40 + 24), v45, 64);
          }
          *(_DWORD *)(v40 + 32) = m_numTransforms;
          v46 = v36->m_numTransforms;
          v47 = hkMemHeapAllocator();
          v48 = *(_DWORD *)(v40 + 52) & 0x3FFFFFFF;
          if ( v48 < v46 )
          {
            v49 = 2 * v48;
            if ( (unsigned int)v49 >= 0x3FFFFFFF )
              v49 = 1073741822;
            v50 = v46;
            if ( v46 < v49 )
              v50 = v49;
            hkArrayUtil::_reserve(v47, (void *)(v40 + 40), v50, 64);
          }
          *(_DWORD *)(v40 + 48) = v46;
          v51 = v36->m_numTransforms;
          v52 = hkMemHeapAllocator();
          v53 = *(_DWORD *)(v40 + 68) & 0x3FFFFFFF;
          if ( v53 < v51 )
          {
            v54 = 2 * v53;
            if ( (unsigned int)v54 >= 0x3FFFFFFF )
              v54 = 1073741822;
            v55 = v51;
            if ( v51 < v54 )
              v55 = v54;
            hkArrayUtil::_reserve(v52, (void *)(v40 + 56), v55, 2);
          }
          *(_DWORD *)(v40 + 64) = v51;
          v56 = 0;
          if ( *(_DWORD *)(v37 + v35 + 8) )
          {
            v57 = obj;
            do
            {
              v58 = *(_DWORD *)(*(_QWORD *)(v37 + v35) + 4i64 * v56);
              outBoneIndex[0] = 254;
              if ( !DObjGetBoneAndModelIndexClient(v57, v58, outBoneIndex, &outModelIndex) )
              {
                hkReferencedObject::removeReference((hkReferencedObject *)v40);
                hkReferencedObject::removeReference(v105);
                HavokCloth_DestroyInstance(globalWorldIda, instanceId);
                if ( v57->numModels && (models = (const char ***)v57->models, *models) )
                  v60 = **models;
                else
                  v60 = "unknown";
                v61 = SL_ConvertToString(v58);
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14431DF40, 75i64, v61, v60);
                v57 = obj;
              }
              *(_WORD *)(*(_QWORD *)(v40 + 56) + 2i64 * (int)v56++) = outBoneIndex[0];
            }
            while ( v56 < *(_DWORD *)(v37 + v35 + 8) );
          }
          v62 = index;
          v32 = (hclClothInstance *)v105;
          hclClothInstance::setTransformSet((hclClothInstance *)v105, index, (hclTransformSet *)v40);
          hkReferencedObject::removeReference((hkReferencedObject *)v40);
          index = v62 + 1;
          v34 = v106 + 1;
          v106 = v34;
          v35 += 16i64;
          v28 = v103;
        }
        while ( v34 < v113 );
        Instance = instanceId;
        v17 = clothAsseta;
        v18 = manager;
      }
      HavokCloth_SetupClothInstanceStates(v32, &readBones, &writtenBones, &accessedBones);
      HavokCloth_SetupClothInstanceSimulationMeshes(v32, &readBones, &accessedBones);
      v63 = clothInstanceIdx;
      HavokCloth_InstanceManager_SetClothInstance(v18, Instance, clothInstanceIdx, v32);
      hkReferencedObject::~hkReferencedObject(&v115);
      p_m_ptr = v107 + 1;
      v107 = p_m_ptr;
      clothInstanceIdx = v63 + 1;
      v102 += 16i64;
      Asset = v108;
    }
    while ( p_m_ptr != &v108->m_clothDatas.m_data[v108->m_clothDatas.m_size].m_ptr );
    LODWORD(v12) = globalWorldIda;
  }
  HavokCloth_InstanceManager_SetReadBones(v18, Instance, &readBones);
  HavokCloth_InstanceManager_SetWrittenBones(v18, Instance, &writtenBones);
  HavokCloth_InstanceManager_SetAccessedBones(v18, Instance, &accessedBones);
  v64 = Asset->m_collidables.m_size;
  if ( v64 > 0 )
  {
    HavokCloth_InstanceManager_ReserveCollidables(v18, Instance, v64);
    v64 = Asset->m_collidables.m_size;
  }
  v65 = 0;
  v66 = &Asset->m_collidables.m_data->m_ptr;
  if ( v66 != &v66[v64] )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    v68 = (__int64)v108;
    do
    {
      v69 = *v66;
      if ( !*v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 584, ASSERT_TYPE_ASSERT, "(containerCollidable)", (const char *)&queryFormat, "containerCollidable") )
        __debugbreak();
      _RDI = hclCollidable::createCopy(v69);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 588, ASSERT_TYPE_ASSERT, "(collidable)", (const char *)&queryFormat, "collidable") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+230h+var_210.baseclass_0.m_col0.m_quad]
        vmovups xmmword ptr [rdi+20h], xmm0
        vmovups xmm1, xmmword ptr [rbp+230h+var_210.baseclass_0.m_col1.m_quad]
        vmovups xmmword ptr [rdi+30h], xmm1
        vmovups xmm0, xmmword ptr [rbp+230h+var_210.baseclass_0.m_col2.m_quad]
        vmovups xmmword ptr [rdi+40h], xmm0
        vmovups xmm1, [rbp+230h+var_1E0]
        vmovups xmmword ptr [rdi+50h], xmm1
        vmovups xmmword ptr [rdi+70h], xmm6
        vmovups xmmword ptr [rdi+60h], xmm6
      }
      HavokCloth_InstanceManager_SetCollidable(v18, Instance, v65, _RDI);
      ++v66;
      ++v65;
    }
    while ( v66 != (hclCollidable **)(*(_QWORD *)(v68 + 24) + 8i64 * *(int *)(v68 + 32)) );
    LODWORD(v12) = globalWorldIda;
  }
  NumClothInstances = HavokCloth_InstanceManager_GetNumClothInstances(v18, Instance);
  v76 = 0;
  v77 = 0;
  if ( NumClothInstances )
  {
    do
    {
      ClothInstance = HavokCloth_InstanceManager_GetClothInstance(manager, Instance, v77);
      if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 607, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
      _RDI = clothAsseta;
      if ( clothAsseta->bulletSupport )
      {
        v80 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v80 )
          v80 = hkMemoryRouter::s_fallbackRouter;
        v81 = (HavokCloth_PhysicsProxyAction *)v80->m_heap->blockAlloc(v80->m_heap, 120i64);
        v103 = (hclClothData *)v81;
        if ( v81 )
        {
          HavokCloth_PhysicsProxyAction::HavokCloth_PhysicsProxyAction(v81, v12, _RDI, Instance, v77);
          v83 = v82;
        }
        else
        {
          v83 = NULL;
        }
        if ( !v83 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 614, ASSERT_TYPE_ASSERT, "(physicsProxyAction)", (const char *)&queryFormat, "physicsProxyAction") )
          __debugbreak();
        hclClothInstance::addAction(ClothInstance, v83);
        HavokCloth_InstanceManager_SetPhysicsProxyAction(manager, Instance, v77, v83);
        hkReferencedObject::removeReference(v83);
        _RDI = clothAsseta;
      }
      if ( _RDI->vectorFieldSupport )
      {
        v84 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !v84 )
          v84 = hkMemoryRouter::s_fallbackRouter;
        v85 = (HavokCloth_VectorFieldAction *)v84->m_heap->blockAlloc(v84->m_heap, 40i64);
        v103 = (hclClothData *)v85;
        if ( v85 )
        {
          __asm { vmovss  xmm3, dword ptr [rdi+4Ch]; drag }
          HavokCloth_VectorFieldAction::HavokCloth_VectorFieldAction(v85, v12, Instance, *(const float *)&_XMM3);
          v88 = v87;
        }
        else
        {
          v88 = NULL;
        }
        if ( !v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 627, ASSERT_TYPE_ASSERT, "(vectorFieldAction)", (const char *)&queryFormat, "vectorFieldAction") )
          __debugbreak();
        hclClothInstance::addAction(ClothInstance, v88);
        hkReferencedObject::removeReference(v88);
        _RDI = clothAsseta;
      }
      hclWorld::addClothInstance(world, ClothInstance);
      v89 = HavokCloth_CalculateRuntimeMemoryRequirement(world, ClothInstance);
      if ( v76 > v89 )
        v89 = v76;
      v76 = v89;
      ++v77;
    }
    while ( v77 < NumClothInstances );
    if ( v89 > 0x8000 )
    {
      LODWORD(fmt) = 0x8000;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14431E050, 76i64, _RDI->name, fmt);
    }
  }
  HavokCloth_InstanceManager_SetRuntimeMemoryRequirements(manager, Instance, v76);
  HavokCloth_Update_SetNeedsSoundUpdate(v12, Instance, clothAsseta->soundCount != 0);
  Sys_ProfEndNamedEvent();
  result = Instance;
  __asm { vmovaps xmm6, [rsp+330h+var_50] }
  return result;
}

/*
==============
HavokCloth_IsInstanceInUse
==============
*/
bool HavokCloth_IsInstanceInUse(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 

  v2 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 854, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 855, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_InstanceManager_IsInstanceInUse(&s_HavokCloth_InstanceManagers[v2], instanceId);
}

/*
==============
HavokCloth_ProfileEnd
==============
*/

void __fastcall HavokCloth_ProfileEnd()
{
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_ProfileStart
==============
*/
void HavokCloth_ProfileStart(const char *name)
{
  Sys_ProfBeginNamedEvent(0xFFFA8072, name);
}

/*
==============
HavokCloth_RebindInstance
==============
*/
void HavokCloth_RebindInstance(const unsigned int globalWorldId, const unsigned int instanceId, const hkVector4f *position, const hkQuaternionf *orientation, const DObj *dObj, const bool bindPoseBased)
{
  __int64 v9; 
  HavokCloth_InstanceManager *v10; 
  const ClothAsset *ClothAsset; 
  bitarray<768> *p_readBones; 
  __int64 i; 
  bitarray<768> *p_writtenBones; 
  __int64 j; 
  bitarray<768> *p_accessedBones; 
  __int64 k; 
  const hclClothContainer *Asset; 
  int m_size; 
  unsigned int v20; 
  hkRefPtr<hclClothData> *m_data; 
  __int64 v22; 
  hclClothInstance *ClothInstance; 
  hclClothData *m_ptr; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  hclTransformSet *v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned int v32; 
  scr_string_t v33; 
  const XModel *v34; 
  const char *name; 
  const char *v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned int NumClothInstances; 
  unsigned __int16 outBoneIndex[2]; 
  int v41; 
  unsigned int globalWorldIda; 
  __int64 v43; 
  __int64 v44; 
  hkRefPtr<hclClothData> *v45; 
  __int64 v46; 
  int outModelIndex; 
  hclClothInstance *v48; 
  __int64 v49; 
  __int64 v50; 
  HavokCloth_InstanceManager *v51; 
  const ClothAsset *v52; 
  const hclClothContainer *v53; 
  __int64 v54; 
  bitarray<768> readBones; 
  bitarray<768> accessedBones; 
  bitarray<768> writtenBones; 

  v54 = -2i64;
  v9 = globalWorldId;
  globalWorldIda = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 707, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 708, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 709, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFAEBD7, "HavokCloth_RebindInstance");
  v10 = &s_HavokCloth_InstanceManagers[v9];
  v51 = v10;
  ClothAsset = HavokCloth_InstanceManager_GetClothAsset(v10, instanceId);
  v52 = ClothAsset;
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 715, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  HavokCloth_InstanceManager_SetPosition(&s_HavokCloth_InstanceManagers[v9], instanceId, position);
  HavokCloth_InstanceManager_SetOrientation(&s_HavokCloth_InstanceManagers[v9], instanceId, orientation);
  HavokCloth_InstanceManager_SetBindPoseBased(&s_HavokCloth_InstanceManagers[v9], instanceId, bindPoseBased);
  p_readBones = &readBones;
  for ( i = 24i64; i; --i )
  {
    p_readBones->array[0] = 0;
    p_readBones = (bitarray<768> *)((char *)p_readBones + 4);
  }
  p_writtenBones = &writtenBones;
  for ( j = 24i64; j; --j )
  {
    p_writtenBones->array[0] = 0;
    p_writtenBones = (bitarray<768> *)((char *)p_writtenBones + 4);
  }
  p_accessedBones = &accessedBones;
  for ( k = 24i64; k; --k )
  {
    p_accessedBones->array[0] = 0;
    p_accessedBones = (bitarray<768> *)((char *)p_accessedBones + 4);
  }
  Asset = HavokCloth_GetAsset(ClothAsset);
  v53 = Asset;
  if ( !Asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 733, ASSERT_TYPE_ASSERT, "(container)", (const char *)&queryFormat, "container") )
    __debugbreak();
  m_size = Asset->m_clothDatas.m_size;
  if ( m_size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 737, ASSERT_TYPE_ASSERT, "(numClothDatas > 0)", (const char *)&queryFormat, "numClothDatas > 0") )
    __debugbreak();
  if ( m_size != ClothAsset->boneMappingSetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 738, ASSERT_TYPE_ASSERT, "(numClothDatas == static_cast<int>(clothAsset->boneMappingSetCount))", (const char *)&queryFormat, "numClothDatas == static_cast<int>(clothAsset->boneMappingSetCount)") )
    __debugbreak();
  if ( m_size != HavokCloth_InstanceManager_GetNumClothInstances(&s_HavokCloth_InstanceManagers[v9], instanceId) )
  {
    NumClothInstances = HavokCloth_InstanceManager_GetNumClothInstances(&s_HavokCloth_InstanceManagers[v9], instanceId);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 739, ASSERT_TYPE_ASSERT, "( static_cast<uint>(numClothDatas) ) == ( HavokCloth_InstanceManager_GetNumClothInstances( manager, instanceId ) )", "%s == %s\n\t%u, %u", "static_cast<uint>(numClothDatas)", "HavokCloth_InstanceManager_GetNumClothInstances( manager, instanceId )", m_size, NumClothInstances) )
      __debugbreak();
  }
  v20 = 0;
  v41 = 0;
  m_data = Asset->m_clothDatas.m_data;
  v45 = m_data;
  if ( m_data != &m_data[Asset->m_clothDatas.m_size] )
  {
    v22 = 0i64;
    v46 = 0i64;
    do
    {
      ClothInstance = HavokCloth_InstanceManager_GetClothInstance(v10, instanceId, v20);
      v48 = ClothInstance;
      if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 745, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
      m_ptr = m_data->m_ptr;
      if ( !m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 749, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
        __debugbreak();
      v25 = (__int64)ClothAsset->boneMappingSets + v22;
      v50 = v25;
      v26 = m_ptr->m_transformSetDefinitions.m_size;
      if ( (_DWORD)v26 != ClothInstance->m_transformSets.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 757, ASSERT_TYPE_ASSERT, "(numTransformSetDefs == clothInstance->m_transformSets.getSize())", (const char *)&queryFormat, "numTransformSetDefs == clothInstance->m_transformSets.getSize()") )
        __debugbreak();
      if ( (_DWORD)v26 != *(_DWORD *)(v25 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 758, ASSERT_TYPE_ASSERT, "(numTransformSetDefs == static_cast<int>(boneMappingSet->boneMappingCount))", (const char *)&queryFormat, "numTransformSetDefs == static_cast<int>(boneMappingSet->boneMappingCount)") )
        __debugbreak();
      v27 = 0i64;
      v43 = 0i64;
      v49 = v26;
      if ( (int)v26 > 0 )
      {
        v28 = 0i64;
        v44 = 0i64;
        do
        {
          v29 = ClothInstance->m_transformSets.m_data[v27];
          if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 763, ASSERT_TYPE_ASSERT, "(transformSet)", (const char *)&queryFormat, "transformSet") )
            __debugbreak();
          v30 = v28 + *(_QWORD *)v25;
          if ( *(_DWORD *)(v30 + 8) != LODWORD(v29[1].m_propertyBag.m_bag) )
          {
            LODWORD(v38) = v29[1].m_propertyBag.m_bag;
            LODWORD(v37) = *(_DWORD *)(v30 + 8);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 767, ASSERT_TYPE_ASSERT, "( boneMapping->scrTagCount ) == ( static_cast<uint>(transformSet->m_boneIndices.getSize()) )", "%s == %s\n\t%u, %u", "boneMapping->scrTagCount", "static_cast<uint>(transformSet->m_boneIndices.getSize())", v37, v38) )
              __debugbreak();
          }
          v31 = 0i64;
          if ( *(_DWORD *)(v30 + 8) )
          {
            v32 = globalWorldIda;
            do
            {
              v33 = *(_DWORD *)(*(_QWORD *)v30 + 4 * v31);
              outBoneIndex[0] = 254;
              if ( !DObjGetBoneAndModelIndexClient(dObj, v33, outBoneIndex, &outModelIndex) )
              {
                HavokCloth_DestroyInstance(v32, instanceId);
                if ( dObj->numModels && (v34 = *dObj->models) != NULL )
                  name = v34->name;
                else
                  name = "unknown";
                v36 = SL_ConvertToString(v33);
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14431DF40, 6337i64, v36, name);
              }
              *((_WORD *)&v29[1].getExactType + (int)v31) = outBoneIndex[0];
              v31 = (unsigned int)(v31 + 1);
            }
            while ( (unsigned int)v31 < *(_DWORD *)(v30 + 8) );
            v27 = v43;
            v28 = v44;
            ClothInstance = v48;
          }
          v43 = ++v27;
          v28 += 16i64;
          v44 = v28;
          v25 = v50;
        }
        while ( v27 < v49 );
        v10 = v51;
        ClothAsset = v52;
      }
      HavokCloth_SetupClothInstanceStates(ClothInstance, &readBones, &writtenBones, &accessedBones);
      HavokCloth_SetupClothInstanceSimulationMeshes(ClothInstance, &readBones, &accessedBones);
      m_data = v45 + 1;
      v45 = m_data;
      v20 = ++v41;
      v22 = v46 + 16;
      v46 += 16i64;
    }
    while ( m_data != &v53->m_clothDatas.m_data[v53->m_clothDatas.m_size] );
    LODWORD(v9) = globalWorldIda;
  }
  HavokCloth_InstanceManager_SetReadBones(v10, instanceId, &readBones);
  HavokCloth_InstanceManager_SetWrittenBones(v10, instanceId, &writtenBones);
  HavokCloth_InstanceManager_SetAccessedBones(v10, instanceId, &accessedBones);
  HavokCloth_Update_SetNeedsSoundUpdate(v9, instanceId, ClothAsset->soundCount != 0);
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_SetBlendedSpeed
==============
*/

void __fastcall HavokCloth_SetBlendedSpeed(const unsigned int globalWorldId, const unsigned int instanceId, double speed)
{
  __int64 v5; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v5 = globalWorldId;
  __asm { vmovaps xmm6, xmm2 }
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1028, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1029, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6; speed
    vmovaps xmm6, [rsp+58h+var_18]
  }
  HavokCloth_InstanceManager_SetBlendedSpeed(&s_HavokCloth_InstanceManagers[v5], instanceId, *(float *)&_XMM2);
}

/*
==============
HavokCloth_SetCurrentSoundIdx
==============
*/
void HavokCloth_SetCurrentSoundIdx(const unsigned int globalWorldId, const unsigned int instanceId, unsigned int soundIdx)
{
  __int64 v3; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1057, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 1058, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_InstanceManager_SetCurrentSoundIdx(&s_HavokCloth_InstanceManagers[v3], instanceId, soundIdx);
}

/*
==============
HavokCloth_SetInstanceOrientation
==============
*/
void HavokCloth_SetInstanceOrientation(const unsigned int globalWorldId, const unsigned int instanceId, const hkQuaternionf *orientation)
{
  __int64 v3; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 956, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 957, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_InstanceManager_SetOrientation(&s_HavokCloth_InstanceManagers[v3], instanceId, orientation);
}

/*
==============
HavokCloth_SetInstancePosition
==============
*/
void HavokCloth_SetInstancePosition(const unsigned int globalWorldId, const unsigned int instanceId, const hkVector4f *position)
{
  __int64 v3; 

  v3 = globalWorldId;
  if ( globalWorldId >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 942, ASSERT_TYPE_ASSERT, "(unsigned)( globalWorldId ) < (unsigned)( s_HavokCloth_GlobalClothWorldMax )", "globalWorldId doesn't index s_HavokCloth_GlobalClothWorldMax\n\t%i not in [0, %i)", globalWorldId, 2) )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 943, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  HavokCloth_InstanceManager_SetPosition(&s_HavokCloth_InstanceManagers[v3], instanceId, position);
}

/*
==============
HavokCloth_SetupClothInstanceSimulationMeshes
==============
*/
void HavokCloth_SetupClothInstanceSimulationMeshes(hclClothInstance *const clothInstance, bitarray<768> *readBones, bitarray<768> *accessedBones)
{
  hclClothInstance *v3; 
  const hclClothData *m_clothData; 
  const hclSimClothData **m_data; 
  const hclSimClothData *v6; 
  __int64 m_transformSetIndex; 
  __int64 v8; 
  __int64 m_size; 
  hclTransformSet *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  const hclSimClothData **v22; 

  v3 = clothInstance;
  if ( !clothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 385, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  m_clothData = v3->m_clothData;
  m_data = m_clothData->m_simClothDatas.m_data;
  v22 = m_data;
  if ( m_data != &m_data[m_clothData->m_simClothDatas.m_size] )
  {
    do
    {
      v6 = *m_data;
      if ( !*m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 390, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
        __debugbreak();
      m_transformSetIndex = v6->m_collidableTransformMap.m_transformSetIndex;
      if ( (int)m_transformSetIndex >= 0 )
      {
        if ( (unsigned int)m_transformSetIndex >= v3->m_transformSets.m_size )
        {
          LODWORD(v16) = v3->m_transformSets.m_size;
          LODWORD(v15) = v6->m_collidableTransformMap.m_transformSetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 403, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetIdx ) < (unsigned)( clothInstance->m_transformSets.getSize() )", "transformSetIdx doesn't index clothInstance->m_transformSets.getSize()\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        v8 = 0i64;
        m_size = v6->m_collidableTransformMap.m_transformIndices.m_size;
        v10 = v3->m_transformSets.m_data[m_transformSetIndex];
        if ( m_size > 0 )
        {
          do
          {
            v11 = (int)v6->m_collidableTransformMap.m_transformIndices.m_data[v8];
            if ( (unsigned int)v11 >= LODWORD(v10[1].m_propertyBag.m_bag) )
            {
              LODWORD(v16) = v10[1].m_propertyBag.m_bag;
              LODWORD(v15) = v6->m_collidableTransformMap.m_transformIndices.m_data[v8];
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 412, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( transformSet->m_boneIndices.getSize() )", "transformIdx doesn't index transformSet->m_boneIndices.getSize()\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            if ( (unsigned int)v11 >= v10->m_transforms.m_size )
            {
              LODWORD(v16) = v10->m_transforms.m_size;
              LODWORD(v15) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 413, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( transformSet->m_transforms.getSize() )", "transformIdx doesn't index transformSet->m_transforms.getSize()\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            if ( (unsigned int)v11 >= v10->m_inverseTransposes.m_size )
            {
              LODWORD(v16) = v10->m_inverseTransposes.m_size;
              LODWORD(v15) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 414, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( transformSet->m_inverseTransposes.getSize() )", "transformIdx doesn't index transformSet->m_inverseTransposes.getSize()\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            v12 = *((_WORD *)&v10[1].getExactType + v11) & 0x7FFF;
            if ( v12 >= 0x300 )
            {
              LODWORD(v18) = 768;
              LODWORD(v17) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v17, v18) )
                __debugbreak();
            }
            v13 = 0x80000000 >> (v12 & 0x1F);
            v14 = (unsigned __int64)v12 >> 5;
            readBones->array[v14] |= v13;
            if ( v12 >= 0x300 )
            {
              LODWORD(v18) = 768;
              LODWORD(v17) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v17, v18) )
                __debugbreak();
            }
            ++v8;
            accessedBones->array[v14] |= v13;
          }
          while ( v8 < m_size );
          m_data = v22;
          v3 = clothInstance;
        }
      }
      v22 = ++m_data;
    }
    while ( m_data != &v3->m_clothData->m_simClothDatas.m_data[v3->m_clothData->m_simClothDatas.m_size] );
  }
}

/*
==============
HavokCloth_SetupClothInstanceStates
==============
*/
void HavokCloth_SetupClothInstanceStates(hclClothInstance *const clothInstance, bitarray<768> *readBones, bitarray<768> *writtenBones, bitarray<768> *accessedBones)
{
  hclClothInstance *v4; 
  const hclClothData *m_clothData; 
  const hclClothState **m_data; 
  const hclClothState *v7; 
  __int64 v8; 
  int *v9; 
  hclTransformSet *v10; 
  __int64 m_bag_low; 
  int v12; 
  __int64 v13; 
  _QWORD *v14; 
  char v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  bool v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  const hclClothState **v27; 
  int *v28; 
  __int64 v29; 
  __int64 m_size; 
  hclTransformSet *v31; 
  const hclClothState *v32; 

  v4 = clothInstance;
  if ( !clothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 334, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  m_clothData = v4->m_clothData;
  m_data = m_clothData->m_clothStateDatas.m_data;
  v27 = m_data;
  if ( m_data != &m_data[m_clothData->m_clothStateDatas.m_size] )
  {
    do
    {
      v7 = *m_data;
      v32 = *m_data;
      if ( !*m_data )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 340, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
          __debugbreak();
        m_data = v27;
      }
      m_size = v7->m_usedTransformSets.m_size;
      if ( m_size > 0 )
      {
        v8 = 0i64;
        v29 = 0i64;
        do
        {
          v9 = (int *)((char *)v7->m_usedTransformSets.m_data + v8);
          v28 = v9;
          if ( (unsigned int)*v9 >= v4->m_transformSets.m_size )
          {
            LODWORD(v24) = v4->m_transformSets.m_size;
            LODWORD(v23) = *v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 350, ASSERT_TYPE_ASSERT, "(unsigned)( usedTransformSet->m_transformSetIndex ) < (unsigned)( clothInstance->m_transformSets.getSize() )", "usedTransformSet->m_transformSetIndex doesn't index clothInstance->m_transformSets.getSize()\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          v10 = v4->m_transformSets.m_data[*v9];
          v31 = v10;
          m_bag_low = SLODWORD(v10[1].m_propertyBag.m_bag);
          if ( (_DWORD)m_bag_low != v10->m_transforms.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 356, ASSERT_TYPE_ASSERT, "(numTransforms == transformSet->m_transforms.getSize())", (const char *)&queryFormat, "numTransforms == transformSet->m_transforms.getSize()") )
            __debugbreak();
          if ( (_DWORD)m_bag_low != v10->m_inverseTransposes.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokcloth.cpp", 357, ASSERT_TYPE_ASSERT, "(numTransforms == transformSet->m_inverseTransposes.getSize())", (const char *)&queryFormat, "numTransforms == transformSet->m_inverseTransposes.getSize()") )
            __debugbreak();
          v12 = 0;
          v13 = 0i64;
          if ( (int)m_bag_low > 0 )
          {
            do
            {
              v14 = (_QWORD *)*((_QWORD *)v9 + 2);
              v15 = v12 & 0x1F;
              v16 = *((_WORD *)&v10[1].getExactType + v13) & 0x7FFF;
              v17 = 4 * ((__int64)v12 >> 5);
              if ( ((*(_DWORD *)(v17 + *v14) >> (v12 & 0x1F)) & 1) != 0 || ((*(_DWORD *)(v17 + v14[9]) >> (v12 & 0x1F)) & 1) != 0 )
              {
                if ( v16 >= 0x300u )
                {
                  LODWORD(v26) = 768;
                  LODWORD(v25) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
                    __debugbreak();
                }
                v18 = 0x80000000 >> (v16 & 0x1F);
                v19 = (unsigned __int64)v16 >> 5;
                readBones->array[v19] |= v18;
                if ( v16 >= 0x300u )
                {
                  LODWORD(v26) = 768;
                  LODWORD(v25) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
                    __debugbreak();
                }
                accessedBones->array[v19] |= v18;
                v14 = (_QWORD *)*((_QWORD *)v28 + 2);
              }
              if ( ((*(_DWORD *)(v17 + v14[6]) >> v15) & 1) != 0 || ((*(_DWORD *)(v17 + v14[15]) >> v15) & 1) != 0 )
              {
                if ( v16 >= 0x300u )
                {
                  LODWORD(v26) = 768;
                  LODWORD(v25) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
                    __debugbreak();
                }
                v20 = 0x80000000 >> (v16 & 0x1F);
                v21 = (unsigned __int64)v16 >> 5;
                writtenBones->array[v21] |= v20;
                if ( v16 >= 0x300u )
                {
                  LODWORD(v26) = 768;
                  LODWORD(v25) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
                    __debugbreak();
                }
                accessedBones->array[v21] |= v20;
              }
              v9 = v28;
              ++v12;
              v10 = v31;
              ++v13;
            }
            while ( v13 < m_bag_low );
            v4 = clothInstance;
          }
          v7 = v32;
          v8 = v29 + 32;
          v22 = m_size-- == 1;
          v29 += 32i64;
        }
        while ( !v22 );
        m_data = v27;
      }
      v27 = ++m_data;
    }
    while ( m_data != &v4->m_clothData->m_clothStateDatas.m_data[v4->m_clothData->m_clothStateDatas.m_size] );
  }
}

/*
==============
HavokCloth_Shutdown
==============
*/

void HavokCloth_Shutdown(void)
{
  HavokCloth_Assets_Shutdown();
}

/*
==============
HavokCloth_InstantiationUtil::getUserDisplayBuffer
==============
*/
hclBuffer *HavokCloth_InstantiationUtil::getUserDisplayBuffer(HavokCloth_InstantiationUtil *this, const hclBufferDefinition *bufferDefinition)
{
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14431D160, 73i64, this->m_clothAsset->name, (unsigned __int64)bufferDefinition->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64);
  return 0i64;
}

/*
==============
HavokCloth_InstantiationUtil::getUserStaticBuffer
==============
*/
hclBuffer *HavokCloth_InstantiationUtil::getUserStaticBuffer(HavokCloth_InstantiationUtil *this, const hclBufferDefinition *bufferDefinition)
{
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14431D1F0, 74i64, this->m_clothAsset->name, (unsigned __int64)bufferDefinition->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64);
  return 0i64;
}

