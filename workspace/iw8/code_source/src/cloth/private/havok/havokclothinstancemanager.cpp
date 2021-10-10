/*
==============
HavokCloth_InstanceManager_GetPosition
==============
*/

void __fastcall HavokCloth_InstanceManager_GetPosition(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, hkVector4f *position)
{
  ?HavokCloth_InstanceManager_GetPosition@@YAXQEBUHavokCloth_InstanceManager@@IAEAVhkVector4f@@@Z(manager, instanceId, position);
}

/*
==============
HavokCloth_InstanceManager_GetBlendedSpeed
==============
*/

double __fastcall HavokCloth_InstanceManager_GetBlendedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  double result; 

  *(float *)&result = ?HavokCloth_InstanceManager_GetBlendedSpeed@@YAMQEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
  return result;
}

/*
==============
HavokCloth_InstanceManager_Init
==============
*/

void __fastcall HavokCloth_InstanceManager_Init(HavokCloth_InstanceManager *manager, unsigned int capacity)
{
  ?HavokCloth_InstanceManager_Init@@YAXPEAUHavokCloth_InstanceManager@@I@Z(manager, capacity);
}

/*
==============
HavokCloth_InstanceManager_SetBindPoseBased
==============
*/

void __fastcall HavokCloth_InstanceManager_SetBindPoseBased(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const bool bindPoseBased)
{
  ?HavokCloth_InstanceManager_SetBindPoseBased@@YAXQEAUHavokCloth_InstanceManager@@I_N@Z(manager, instanceId, bindPoseBased);
}

/*
==============
HavokCloth_InstanceManager_GetBindPoseBased
==============
*/

bool __fastcall HavokCloth_InstanceManager_GetBindPoseBased(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetBindPoseBased@@YA_NQEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_IsInstanceInUse
==============
*/

bool __fastcall HavokCloth_InstanceManager_IsInstanceInUse(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_IsInstanceInUse@@YA_NPEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_GetPhysicsProxyAction
==============
*/

HavokCloth_PhysicsProxyAction *__fastcall HavokCloth_InstanceManager_GetPhysicsProxyAction(const HavokCloth_InstanceManager *manager, const unsigned int instanceId, const unsigned int clothInstanceIdx)
{
  return ?HavokCloth_InstanceManager_GetPhysicsProxyAction@@YAPEAVHavokCloth_PhysicsProxyAction@@PEBUHavokCloth_InstanceManager@@II@Z(manager, instanceId, clothInstanceIdx);
}

/*
==============
HavokCloth_InstanceManager_FreeDestroyedInstanceIds
==============
*/

bool __fastcall HavokCloth_InstanceManager_FreeDestroyedInstanceIds(HavokCloth_InstanceManager *manager)
{
  return ?HavokCloth_InstanceManager_FreeDestroyedInstanceIds@@YA_NPEAUHavokCloth_InstanceManager@@@Z(manager);
}

/*
==============
HavokCloth_InstanceManager_Shutdown
==============
*/

void __fastcall HavokCloth_InstanceManager_Shutdown(HavokCloth_InstanceManager *manager)
{
  ?HavokCloth_InstanceManager_Shutdown@@YAXPEAUHavokCloth_InstanceManager@@@Z(manager);
}

/*
==============
HavokCloth_InstanceManager_ReleaseClothInstances
==============
*/

void __fastcall HavokCloth_InstanceManager_ReleaseClothInstances(HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  ?HavokCloth_InstanceManager_ReleaseClothInstances@@YAXPEAUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_SetRuntimeMemoryRequirements
==============
*/

void __fastcall HavokCloth_InstanceManager_SetRuntimeMemoryRequirements(HavokCloth_InstanceManager *manager, const unsigned int instanceId, unsigned int runtimeMemoryRequirement)
{
  ?HavokCloth_InstanceManager_SetRuntimeMemoryRequirements@@YAXPEAUHavokCloth_InstanceManager@@II@Z(manager, instanceId, runtimeMemoryRequirement);
}

/*
==============
HavokCloth_InstanceManager_SetAccessedBones
==============
*/

void __fastcall HavokCloth_InstanceManager_SetAccessedBones(HavokCloth_InstanceManager *manager, const unsigned int instanceId, bitarray<768> *bones)
{
  ?HavokCloth_InstanceManager_SetAccessedBones@@YAXPEAUHavokCloth_InstanceManager@@IPEAV?$bitarray@$0DAA@@@@Z(manager, instanceId, bones);
}

/*
==============
HavokCloth_InstanceManager_AllocateInstance
==============
*/

unsigned int __fastcall HavokCloth_InstanceManager_AllocateInstance(HavokCloth_InstanceManager *manager)
{
  return ?HavokCloth_InstanceManager_AllocateInstance@@YAIPEAUHavokCloth_InstanceManager@@@Z(manager);
}

/*
==============
HavokCloth_InstanceManager_ReserveClothInstances
==============
*/

void __fastcall HavokCloth_InstanceManager_ReserveClothInstances(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const int numClothInstances)
{
  ?HavokCloth_InstanceManager_ReserveClothInstances@@YAXPEAUHavokCloth_InstanceManager@@IH@Z(manager, instanceId, numClothInstances);
}

/*
==============
HavokCloth_InstanceManager_SetOwnerType
==============
*/

void __fastcall HavokCloth_InstanceManager_SetOwnerType(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const Cloth_OwnerType ownerType)
{
  ?HavokCloth_InstanceManager_SetOwnerType@@YAXQEAUHavokCloth_InstanceManager@@IW4Cloth_OwnerType@@@Z(manager, instanceId, ownerType);
}

/*
==============
HavokCloth_InstanceManager_SetCurrentSoundIdx
==============
*/

void __fastcall HavokCloth_InstanceManager_SetCurrentSoundIdx(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, unsigned int soundIdx)
{
  ?HavokCloth_InstanceManager_SetCurrentSoundIdx@@YAXQEBUHavokCloth_InstanceManager@@II@Z(manager, instanceId, soundIdx);
}

/*
==============
HavokCloth_InstanceManager_GetNumClothInstances
==============
*/

unsigned int __fastcall HavokCloth_InstanceManager_GetNumClothInstances(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetNumClothInstances@@YAIQEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_GetSimulatedSpeed
==============
*/

bool __fastcall HavokCloth_InstanceManager_GetSimulatedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, float *speed)
{
  return ?HavokCloth_InstanceManager_GetSimulatedSpeed@@YA_NQEBUHavokCloth_InstanceManager@@IPEAM@Z(manager, instanceId, speed);
}

/*
==============
HavokCloth_InstanceManager_AddSimulatedSpeed
==============
*/

void __fastcall HavokCloth_InstanceManager_AddSimulatedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const float speed)
{
  ?HavokCloth_InstanceManager_AddSimulatedSpeed@@YAXQEBUHavokCloth_InstanceManager@@IM@Z(manager, instanceId, speed);
}

/*
==============
HavokCloth_InstanceManager_ClearSimulatedSpeed
==============
*/

void __fastcall HavokCloth_InstanceManager_ClearSimulatedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  ?HavokCloth_InstanceManager_ClearSimulatedSpeed@@YAXQEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_GetCurrentSoundIdx
==============
*/

unsigned int __fastcall HavokCloth_InstanceManager_GetCurrentSoundIdx(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetCurrentSoundIdx@@YAIQEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_GetReadBones
==============
*/

const bitarray<768> *__fastcall HavokCloth_InstanceManager_GetReadBones(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetReadBones@@YAPEBV?$bitarray@$0DAA@@@PEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_GetOrientation
==============
*/

void __fastcall HavokCloth_InstanceManager_GetOrientation(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, hkQuaternionf *orientation)
{
  ?HavokCloth_InstanceManager_GetOrientation@@YAXQEBUHavokCloth_InstanceManager@@IAEAVhkQuaternionf@@@Z(manager, instanceId, orientation);
}

/*
==============
HavokCloth_InstanceManager_SetPhysicsProxyAction
==============
*/

void __fastcall HavokCloth_InstanceManager_SetPhysicsProxyAction(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const unsigned int clothInstanceIdx, HavokCloth_PhysicsProxyAction *action)
{
  ?HavokCloth_InstanceManager_SetPhysicsProxyAction@@YAXPEAUHavokCloth_InstanceManager@@IIPEAVHavokCloth_PhysicsProxyAction@@@Z(manager, instanceId, clothInstanceIdx, action);
}

/*
==============
HavokCloth_InstanceManager_GetWrittenBones
==============
*/

const bitarray<768> *__fastcall HavokCloth_InstanceManager_GetWrittenBones(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetWrittenBones@@YAPEBV?$bitarray@$0DAA@@@PEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_ReleaseCollidables
==============
*/

void __fastcall HavokCloth_InstanceManager_ReleaseCollidables(HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  ?HavokCloth_InstanceManager_ReleaseCollidables@@YAXPEAUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_SetWrittenBones
==============
*/

void __fastcall HavokCloth_InstanceManager_SetWrittenBones(HavokCloth_InstanceManager *manager, const unsigned int instanceId, bitarray<768> *bones)
{
  ?HavokCloth_InstanceManager_SetWrittenBones@@YAXPEAUHavokCloth_InstanceManager@@IPEAV?$bitarray@$0DAA@@@@Z(manager, instanceId, bones);
}

/*
==============
HavokCloth_InstanceManager_GetNumCollidables
==============
*/

unsigned int __fastcall HavokCloth_InstanceManager_GetNumCollidables(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetNumCollidables@@YAIQEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_ReserveCollidables
==============
*/

void __fastcall HavokCloth_InstanceManager_ReserveCollidables(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const int numCollidables)
{
  ?HavokCloth_InstanceManager_ReserveCollidables@@YAXPEAUHavokCloth_InstanceManager@@IH@Z(manager, instanceId, numCollidables);
}

/*
==============
HavokCloth_InstanceManager_SetReadBones
==============
*/

void __fastcall HavokCloth_InstanceManager_SetReadBones(HavokCloth_InstanceManager *manager, const unsigned int instanceId, bitarray<768> *bones)
{
  ?HavokCloth_InstanceManager_SetReadBones@@YAXPEAUHavokCloth_InstanceManager@@IPEAV?$bitarray@$0DAA@@@@Z(manager, instanceId, bones);
}

/*
==============
HavokCloth_InstanceManager_SetCollidable
==============
*/

void __fastcall HavokCloth_InstanceManager_SetCollidable(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const unsigned int collidableIdx, hclCollidable *collidable)
{
  ?HavokCloth_InstanceManager_SetCollidable@@YAXPEAUHavokCloth_InstanceManager@@IIPEAVhclCollidable@@@Z(manager, instanceId, collidableIdx, collidable);
}

/*
==============
HavokCloth_InstanceManager_GetAccessedBones
==============
*/

const bitarray<768> *__fastcall HavokCloth_InstanceManager_GetAccessedBones(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetAccessedBones@@YAPEBV?$bitarray@$0DAA@@@PEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_DestroyInstance
==============
*/

void __fastcall HavokCloth_InstanceManager_DestroyInstance(HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  ?HavokCloth_InstanceManager_DestroyInstance@@YAXPEAUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_SetRefId
==============
*/

void __fastcall HavokCloth_InstanceManager_SetRefId(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const unsigned int refId)
{
  ?HavokCloth_InstanceManager_SetRefId@@YAXQEAUHavokCloth_InstanceManager@@II@Z(manager, instanceId, refId);
}

/*
==============
HavokCloth_InstanceManager_GetClothInstance
==============
*/

hclClothInstance *__fastcall HavokCloth_InstanceManager_GetClothInstance(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, unsigned int clothInstanceIdx)
{
  return ?HavokCloth_InstanceManager_GetClothInstance@@YAPEAVhclClothInstance@@QEBUHavokCloth_InstanceManager@@II@Z(manager, instanceId, clothInstanceIdx);
}

/*
==============
HavokCloth_InstanceManager_GetPeakInstanceId
==============
*/

unsigned int __fastcall HavokCloth_InstanceManager_GetPeakInstanceId(const HavokCloth_InstanceManager *manager)
{
  return ?HavokCloth_InstanceManager_GetPeakInstanceId@@YAIPEBUHavokCloth_InstanceManager@@@Z(manager);
}

/*
==============
HavokCloth_InstanceManager_SetPosition
==============
*/

void __fastcall HavokCloth_InstanceManager_SetPosition(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const hkVector4f *position)
{
  ?HavokCloth_InstanceManager_SetPosition@@YAXQEAUHavokCloth_InstanceManager@@IAEBVhkVector4f@@@Z(manager, instanceId, position);
}

/*
==============
HavokCloth_InstanceManager_SetClothInstance
==============
*/

void __fastcall HavokCloth_InstanceManager_SetClothInstance(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const unsigned int clothInstanceIdx, hclClothInstance *clothInstance)
{
  ?HavokCloth_InstanceManager_SetClothInstance@@YAXPEAUHavokCloth_InstanceManager@@IIPEAVhclClothInstance@@@Z(manager, instanceId, clothInstanceIdx, clothInstance);
}

/*
==============
HavokCloth_InstanceManager_IsFull
==============
*/

bool __fastcall HavokCloth_InstanceManager_IsFull(const HavokCloth_InstanceManager *manager)
{
  return ?HavokCloth_InstanceManager_IsFull@@YA_NPEBUHavokCloth_InstanceManager@@@Z(manager);
}

/*
==============
HavokCloth_InstanceManager_SetClothAsset
==============
*/

void __fastcall HavokCloth_InstanceManager_SetClothAsset(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const ClothAsset *clothAsset)
{
  ?HavokCloth_InstanceManager_SetClothAsset@@YAXQEAUHavokCloth_InstanceManager@@IPEBUClothAsset@@@Z(manager, instanceId, clothAsset);
}

/*
==============
HavokCloth_InstanceManager_SetOrientation
==============
*/

void __fastcall HavokCloth_InstanceManager_SetOrientation(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const hkQuaternionf *orientation)
{
  ?HavokCloth_InstanceManager_SetOrientation@@YAXQEAUHavokCloth_InstanceManager@@IAEBVhkQuaternionf@@@Z(manager, instanceId, orientation);
}

/*
==============
HavokCloth_InstanceManager_GetRefId
==============
*/

unsigned int __fastcall HavokCloth_InstanceManager_GetRefId(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetRefId@@YAIQEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_SetBlendedSpeed
==============
*/

void __fastcall HavokCloth_InstanceManager_SetBlendedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, float speed)
{
  ?HavokCloth_InstanceManager_SetBlendedSpeed@@YAXQEBUHavokCloth_InstanceManager@@IM@Z(manager, instanceId, speed);
}

/*
==============
HavokCloth_InstanceManager_GetOwnerType
==============
*/

Cloth_OwnerType __fastcall HavokCloth_InstanceManager_GetOwnerType(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetOwnerType@@YA?AW4Cloth_OwnerType@@QEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_GetClothAsset
==============
*/

const ClothAsset *__fastcall HavokCloth_InstanceManager_GetClothAsset(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetClothAsset@@YAPEBUClothAsset@@QEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_GetCapacity
==============
*/

unsigned int __fastcall HavokCloth_InstanceManager_GetCapacity(const HavokCloth_InstanceManager *manager)
{
  return ?HavokCloth_InstanceManager_GetCapacity@@YAIPEBUHavokCloth_InstanceManager@@@Z(manager);
}

/*
==============
HavokCloth_InstanceManager_GetRuntimeMemoryRequirements
==============
*/

unsigned int __fastcall HavokCloth_InstanceManager_GetRuntimeMemoryRequirements(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetRuntimeMemoryRequirements@@YAIPEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_GetCollidable
==============
*/

hclCollidable *__fastcall HavokCloth_InstanceManager_GetCollidable(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, unsigned int collidableIdx)
{
  return ?HavokCloth_InstanceManager_GetCollidable@@YAPEAVhclCollidable@@QEBUHavokCloth_InstanceManager@@II@Z(manager, instanceId, collidableIdx);
}

/*
==============
HavokCloth_InstanceManager_GetInstance
==============
*/

HavokCloth_Instance *__fastcall HavokCloth_InstanceManager_GetInstance(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  return ?HavokCloth_InstanceManager_GetInstance@@YAPEAUHavokCloth_Instance@@PEBUHavokCloth_InstanceManager@@I@Z(manager, instanceId);
}

/*
==============
HavokCloth_InstanceManager_AddSimulatedSpeed
==============
*/
void HavokCloth_InstanceManager_AddSimulatedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const float speed)
{
  HavokCloth_Instance *Instance; 
  __int64 v8; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 934, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 935, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 936, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v8) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 937, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v8, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 938, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 942, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  _XMM0 = LODWORD(Instance->lastSimulationSpeed);
  __asm { vmaxss  xmm1, xmm0, xmm6 }
  Instance->lastSimulationSpeed = *(float *)&_XMM1;
  Instance->lastSimulationSpeedValid = 1;
}

/*
==============
HavokCloth_InstanceManager_AllocateInstance
==============
*/
__int64 HavokCloth_InstanceManager_AllocateInstance(HavokCloth_InstanceManager *manager)
{
  __int64 destroyedInstances; 
  HavokCloth_Instance *buffer; 
  unsigned int i; 
  unsigned int v5; 
  __int64 freeInstances; 
  HavokCloth_Instance *v7; 
  unsigned int peakInstanceId; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 105, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 106, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( manager->freeInstances == -1 )
  {
    if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 166, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
      __debugbreak();
    destroyedInstances = manager->destroyedInstances;
    if ( (_DWORD)destroyedInstances != -1 )
    {
      buffer = manager->buffer;
      for ( i = manager->buffer[destroyedInstances].nextInstanceId; i != -1; i = buffer[i].nextInstanceId )
        LODWORD(destroyedInstances) = i;
      buffer[(unsigned int)destroyedInstances].nextInstanceId = manager->freeInstances;
      manager->freeInstances = manager->destroyedInstances;
      manager->numFreeInstances += manager->numDestroyedInstances;
      v5 = manager->numAllocatedInstances + manager->numFreeInstances;
      manager->destroyedInstances = -1;
      manager->numDestroyedInstances = 0;
      if ( v5 != manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 191, ASSERT_TYPE_ASSERT, "(manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity)", (const char *)&queryFormat, "manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity") )
        __debugbreak();
    }
    if ( manager->freeInstances == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 113, ASSERT_TYPE_ASSERT, "(!HavokCloth_InstanceManager_IsFull( manager ))", (const char *)&queryFormat, "!HavokCloth_InstanceManager_IsFull( manager )") )
      __debugbreak();
  }
  freeInstances = manager->freeInstances;
  v7 = &manager->buffer[freeInstances];
  manager->freeInstances = v7->nextInstanceId;
  v7->nextInstanceId = -1;
  v7->inUse = 1;
  if ( --manager->numFreeInstances + ++manager->numAllocatedInstances + manager->numDestroyedInstances != manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 129, ASSERT_TYPE_ASSERT, "(manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity)", (const char *)&queryFormat, "manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity") )
    __debugbreak();
  peakInstanceId = manager->peakInstanceId;
  if ( peakInstanceId == -1 )
  {
    manager->peakInstanceId = freeInstances;
  }
  else
  {
    _XMM0 = peakInstanceId;
    __asm { vpmaxud xmm1, xmm0, xmm1 }
    manager->peakInstanceId = _XMM1;
  }
  return (unsigned int)freeInstances;
}

/*
==============
HavokCloth_InstanceManager_ClearSimulatedSpeed
==============
*/
void HavokCloth_InstanceManager_ClearSimulatedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v5; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 915, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 916, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 917, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v5) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 918, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v5, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 919, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->lastSimulationSpeedValid = 0;
    Instance->lastSimulationSpeed = 0.0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 923, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0x18C] = 0;
    MEMORY[0x190] = 0;
  }
}

/*
==============
HavokCloth_InstanceManager_DestroyInstance
==============
*/
void HavokCloth_InstanceManager_DestroyInstance(HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  __int64 v2; 
  HavokCloth_Instance *v4; 
  unsigned int v5; 
  __int64 v6; 

  v2 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 140, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 141, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 142, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 143, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  v4 = &manager->buffer[v2];
  v4->inUse = 0;
  v4->nextInstanceId = manager->destroyedInstances;
  v5 = ++manager->numDestroyedInstances + --manager->numAllocatedInstances + manager->numFreeInstances;
  manager->destroyedInstances = v2;
  if ( v5 != manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 158, ASSERT_TYPE_ASSERT, "(manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity)", (const char *)&queryFormat, "manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity") )
    __debugbreak();
}

/*
==============
HavokCloth_InstanceManager_FreeDestroyedInstanceIds
==============
*/
char HavokCloth_InstanceManager_FreeDestroyedInstanceIds(HavokCloth_InstanceManager *manager)
{
  __int64 destroyedInstances; 
  HavokCloth_Instance *buffer; 
  unsigned int i; 
  unsigned int v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 165, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 166, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  destroyedInstances = manager->destroyedInstances;
  if ( (_DWORD)destroyedInstances == -1 )
    return 0;
  buffer = manager->buffer;
  for ( i = manager->buffer[destroyedInstances].nextInstanceId; i != -1; i = buffer[i].nextInstanceId )
    LODWORD(destroyedInstances) = i;
  buffer[(unsigned int)destroyedInstances].nextInstanceId = manager->freeInstances;
  manager->freeInstances = manager->destroyedInstances;
  manager->numFreeInstances += manager->numDestroyedInstances;
  v6 = manager->numAllocatedInstances + manager->numFreeInstances;
  manager->destroyedInstances = -1;
  manager->numDestroyedInstances = 0;
  if ( v6 != manager->capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 191, ASSERT_TYPE_ASSERT, "(manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity)", (const char *)&queryFormat, "manager->numFreeInstances + manager->numAllocatedInstances + manager->numDestroyedInstances == manager->capacity") )
    __debugbreak();
  return 1;
}

/*
==============
HavokCloth_InstanceManager_GetAccessedBones
==============
*/
__int64 HavokCloth_InstanceManager_GetAccessedBones(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 467, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 468, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 469, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 471, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return (__int64)&Instance->accessedBones;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 475, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return 296i64;
}

/*
==============
HavokCloth_InstanceManager_GetBindPoseBased
==============
*/
__int64 HavokCloth_InstanceManager_GetBindPoseBased(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 793, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 794, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 795, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 796, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return Instance->bindPoseBased;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 800, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return MEMORY[0x40];
}

/*
==============
HavokCloth_InstanceManager_GetBlendedSpeed
==============
*/
float HavokCloth_InstanceManager_GetBlendedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 994, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 995, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 996, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 997, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 998, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return Instance->blendedSpeed;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1002, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return MEMORY[0x194];
}

/*
==============
HavokCloth_InstanceManager_GetCapacity
==============
*/
__int64 HavokCloth_InstanceManager_GetCapacity(const HavokCloth_InstanceManager *manager)
{
  if ( manager )
    return manager->capacity;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 551, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  return MEMORY[8];
}

/*
==============
HavokCloth_InstanceManager_GetClothAsset
==============
*/
const ClothAsset *HavokCloth_InstanceManager_GetClothAsset(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 623, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 624, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 625, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 626, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return Instance->clothAsset;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 630, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return (const ClothAsset *)MEMORY[0x10];
}

/*
==============
HavokCloth_InstanceManager_GetClothInstance
==============
*/
hclClothInstance *HavokCloth_InstanceManager_GetClothInstance(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, unsigned int clothInstanceIdx)
{
  unsigned __int64 v3; 
  HavokCloth_Instance *Instance; 
  __int64 v8; 
  __int64 v9; 

  v3 = clothInstanceIdx;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 829, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 830, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 831, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v8) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 832, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v8, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 833, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 837, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  if ( (unsigned int)v3 >= LODWORD(Instance->clothInstances.m_data.m_size) )
  {
    LODWORD(v9) = Instance->clothInstances.m_data.m_size;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 840, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( instance->clothInstances.size() )", "clothInstanceIdx doesn't index instance->clothInstances.size()\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( v3 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  if ( v3 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
    __debugbreak();
  return Instance->clothInstances.m_data.m_buffer[v3].clothInstance;
}

/*
==============
HavokCloth_InstanceManager_GetCollidable
==============
*/
hclCollidable *HavokCloth_InstanceManager_GetCollidable(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, unsigned int collidableIdx)
{
  unsigned __int64 v3; 
  HavokCloth_Instance *Instance; 
  hclCollidable *v7; 
  __int64 v9; 
  __int64 v10; 

  v3 = collidableIdx;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 871, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 872, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 873, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v9) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 874, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v9, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 875, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 879, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  if ( (unsigned int)v3 >= LODWORD(Instance->collidables.m_data.m_size) )
  {
    LODWORD(v10) = Instance->collidables.m_data.m_size;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 882, ASSERT_TYPE_ASSERT, "(unsigned)( collidableIdx ) < (unsigned)( instance->collidables.size() )", "collidableIdx doesn't index instance->collidables.size()\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( v3 >= Instance->collidables.m_data.m_size )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    if ( v3 >= Instance->collidables.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
      __debugbreak();
  }
  v7 = Instance->collidables.m_data.m_buffer[v3];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 884, ASSERT_TYPE_ASSERT, "(collidable)", (const char *)&queryFormat, "collidable") )
    __debugbreak();
  return v7;
}

/*
==============
HavokCloth_InstanceManager_GetCurrentSoundIdx
==============
*/
__int64 HavokCloth_InstanceManager_GetCurrentSoundIdx(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1031, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1032, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1033, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1034, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1035, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return Instance->currentSoundIdx;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1039, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return MEMORY[0x198];
}

/*
==============
HavokCloth_InstanceManager_GetInstance
==============
*/
HavokCloth_Instance *HavokCloth_InstanceManager_GetInstance(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  __int64 v2; 
  __int64 v5; 

  v2 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 591, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 592, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 593, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v5, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 595, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  return &manager->buffer[v2];
}

/*
==============
HavokCloth_InstanceManager_GetNumClothInstances
==============
*/
__int64 HavokCloth_InstanceManager_GetNumClothInstances(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 810, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 811, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 812, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 813, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 814, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return LODWORD(Instance->clothInstances.m_data.m_size);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 818, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return MEMORY[0x50];
}

/*
==============
HavokCloth_InstanceManager_GetNumCollidables
==============
*/
__int64 HavokCloth_InstanceManager_GetNumCollidables(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 852, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 853, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 854, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 855, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 856, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return LODWORD(Instance->collidables.m_data.m_size);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 860, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return MEMORY[0x60];
}

/*
==============
HavokCloth_InstanceManager_GetOrientation
==============
*/
void HavokCloth_InstanceManager_GetOrientation(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, hkQuaternionf *orientation)
{
  HavokCloth_Instance *Instance; 
  hkQuaternionf v7; 
  __int64 v8; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 759, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 760, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 761, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v8) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 762, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v8, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    v7.m_vec.m_quad = (__m128)Instance->orientation;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 766, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    v7.m_vec.m_quad = (__m128)MEMORY[0x30];
  }
  *orientation = (hkQuaternionf)v7.m_vec.m_quad;
}

/*
==============
HavokCloth_InstanceManager_GetOwnerType
==============
*/
__int64 HavokCloth_InstanceManager_GetOwnerType(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 691, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 692, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 693, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 694, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return (unsigned int)Instance->ownerType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 698, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return MEMORY[0xC];
}

/*
==============
HavokCloth_InstanceManager_GetPeakInstanceId
==============
*/
__int64 HavokCloth_InstanceManager_GetPeakInstanceId(const HavokCloth_InstanceManager *manager)
{
  if ( manager )
    return manager->peakInstanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 569, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  return MEMORY[0x20];
}

/*
==============
HavokCloth_InstanceManager_GetPhysicsProxyAction
==============
*/
HavokCloth_PhysicsProxyAction *HavokCloth_InstanceManager_GetPhysicsProxyAction(const HavokCloth_InstanceManager *manager, const unsigned int instanceId, const unsigned int clothInstanceIdx)
{
  unsigned __int64 v3; 
  HavokCloth_Instance *Instance; 
  __int64 v8; 
  __int64 v9; 

  v3 = clothInstanceIdx;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 892, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 893, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 894, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v8) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 895, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v8, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 896, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 900, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  if ( (unsigned int)v3 >= LODWORD(Instance->clothInstances.m_data.m_size) )
  {
    LODWORD(v9) = Instance->clothInstances.m_data.m_size;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( instance->clothInstances.size() )", "clothInstanceIdx doesn't index instance->clothInstances.size()\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( v3 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  if ( v3 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
    __debugbreak();
  return Instance->clothInstances.m_data.m_buffer[v3].physicsProxyAction;
}

/*
==============
HavokCloth_InstanceManager_GetPosition
==============
*/
void HavokCloth_InstanceManager_GetPosition(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, hkVector4f *position)
{
  HavokCloth_Instance *Instance; 
  hkVector4f v7; 
  __int64 v8; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 725, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 726, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 727, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v8) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 728, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v8, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    v7.m_quad = (__m128)Instance->position;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 732, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    v7.m_quad = (__m128)MEMORY[0x20];
  }
  *position = (hkVector4f)v7.m_quad;
}

/*
==============
HavokCloth_InstanceManager_GetReadBones
==============
*/
__int64 HavokCloth_InstanceManager_GetReadBones(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 393, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 394, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 395, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 397, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return (__int64)&Instance->readBones;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 401, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return 104i64;
}

/*
==============
HavokCloth_InstanceManager_GetRefId
==============
*/
__int64 HavokCloth_InstanceManager_GetRefId(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 657, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 658, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 659, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 660, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return Instance->refId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 664, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return MEMORY[8];
}

/*
==============
HavokCloth_InstanceManager_GetRuntimeMemoryRequirements
==============
*/
__int64 HavokCloth_InstanceManager_GetRuntimeMemoryRequirements(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 502, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 503, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 504, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 505, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 506, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return Instance->runtimeMemoryRequirement;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 510, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return MEMORY[0x188];
}

/*
==============
HavokCloth_InstanceManager_GetSimulatedSpeed
==============
*/
bool HavokCloth_InstanceManager_GetSimulatedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, float *speed)
{
  HavokCloth_Instance *Instance; 
  float lastSimulationSpeed; 
  __int64 v9; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 953, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 954, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 955, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v9) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 956, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v9, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 957, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  if ( !speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 958, ASSERT_TYPE_ASSERT, "(speed)", (const char *)&queryFormat, "speed") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 962, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  lastSimulationSpeed = Instance->lastSimulationSpeed;
  *speed = lastSimulationSpeed;
  return lastSimulationSpeed != 0.0;
}

/*
==============
HavokCloth_InstanceManager_GetWrittenBones
==============
*/
__int64 HavokCloth_InstanceManager_GetWrittenBones(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 430, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 431, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 432, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 433, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 434, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
    return (__int64)&Instance->writtenBones;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 438, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return 200i64;
}

/*
==============
HavokCloth_InstanceManager_Init
==============
*/
void HavokCloth_InstanceManager_Init(HavokCloth_InstanceManager *manager, unsigned int capacity)
{
  __int64 v2; 
  hkMemoryRouter *Value; 
  HavokCloth_Instance *v5; 
  unsigned int v6; 

  v2 = capacity;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 48, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 49, ASSERT_TYPE_ASSERT, "(capacity > 0)", (const char *)&queryFormat, "capacity > 0") )
    __debugbreak();
  if ( !s_Havok_Cloth_InstanceManager_AllocatorsSetup )
  {
    s_Havok_Cloth_InstanceManager_AllocatorsSetup = 1;
    ntl::static_shared_allocator<Havok_Cloth_Instance_ClothInstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator = &s_havok_Cloth_InstanceManager_ClothInstanceAllocator;
    ntl::static_shared_allocator<Havok_Cloth_Instance_CollidableAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator = &s_havok_Cloth_InstanceManager_CollidableAllocator;
  }
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v5 = (HavokCloth_Instance *)Value->m_heap->blockAlloc(Value->m_heap, (unsigned int)(416 * v2));
  manager->buffer = v5;
  memset_0(v5, 0, 416 * v2);
  v6 = 0;
  manager->capacity = v2;
  manager->destroyedInstances = -1;
  manager->freeInstances = 0;
  manager->numFreeInstances = v2;
  *(_QWORD *)&manager->numAllocatedInstances = 0i64;
  for ( manager->peakInstanceId = -1; v6 < (unsigned int)v2; LODWORD(v2) = manager->capacity )
  {
    manager->buffer[v6].nextInstanceId = v6 + 1;
    ++v6;
  }
  manager->buffer[(unsigned int)(v2 - 1)].nextInstanceId = -1;
}

/*
==============
HavokCloth_InstanceManager_IsFull
==============
*/
bool HavokCloth_InstanceManager_IsFull(const HavokCloth_InstanceManager *manager)
{
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 560, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  return manager->freeInstances == -1;
}

/*
==============
HavokCloth_InstanceManager_IsInstanceInUse
==============
*/
_BOOL8 HavokCloth_InstanceManager_IsInstanceInUse(const HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  __int64 v2; 
  __int64 v5; 

  v2 = instanceId;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 578, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 579, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 580, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v2 >= manager->capacity )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 581, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v5, manager->capacity) )
      __debugbreak();
  }
  return manager->buffer[v2].inUse;
}

/*
==============
HavokCloth_InstanceManager_ReleaseClothInstances
==============
*/
void HavokCloth_InstanceManager_ReleaseClothInstances(HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  unsigned int m_size; 
  __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  HavokCloth_HavokInstance *v9; 
  hclClothInstance *clothInstance; 
  hkReferencedObject *physicsProxyAction; 
  unsigned __int16 m_refCount; 
  unsigned __int16 v13; 
  unsigned __int64 i; 
  HavokCloth_HavokInstance *m_buffer; 
  signed __int32 v16[8]; 
  __int64 v17; 
  __int64 v18; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 247, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 248, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 249, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v18) = manager->capacity;
    LODWORD(v17) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 250, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 251, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 255, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  m_size = Instance->clothInstances.m_data.m_size;
  if ( m_size )
  {
    v6 = m_size;
    v7 = 0i64;
    v8 = 0i64;
    do
    {
      if ( v7 >= Instance->clothInstances.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v7 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v9 = &Instance->clothInstances.m_data.m_buffer[v8];
      clothInstance = v9->clothInstance;
      if ( v9->clothInstance )
      {
        physicsProxyAction = v9->physicsProxyAction;
        if ( physicsProxyAction )
        {
          hclClothInstance::removeAction(v9->clothInstance, v9->physicsProxyAction);
          _InterlockedOr(v16, 0);
          m_refCount = physicsProxyAction->m_refCount;
          _InterlockedOr(v16, 0);
          if ( m_refCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 283, ASSERT_TYPE_ASSERT, "(action->getReferenceCount() == 1)", (const char *)&queryFormat, "action->getReferenceCount() == 1") )
            __debugbreak();
          hkReferencedObject::removeReference(physicsProxyAction);
          v9->physicsProxyAction = NULL;
        }
        _InterlockedOr(v16, 0);
        v13 = clothInstance->m_refCount;
        _InterlockedOr(v16, 0);
        if ( v13 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 289, ASSERT_TYPE_ASSERT, "(clothInstance->getReferenceCount() == 1)", (const char *)&queryFormat, "clothInstance->getReferenceCount() == 1") )
          __debugbreak();
        hkReferencedObject::removeReference(clothInstance);
        v9->clothInstance = NULL;
      }
      ++v7;
      ++v8;
      --v6;
    }
    while ( v6 );
  }
  for ( i = 0i64; i < Instance->clothInstances.m_data.m_size; ++i )
    ;
  m_buffer = Instance->clothInstances.m_data.m_buffer;
  if ( m_buffer )
  {
    if ( !ntl::static_shared_allocator<Havok_Cloth_Instance_ClothInstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
      __debugbreak();
    ntl::nxheap::free(&ntl::static_shared_allocator<Havok_Cloth_Instance_ClothInstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator->m_heap, m_buffer);
    Instance->clothInstances.m_data.m_buffer = NULL;
    Instance->clothInstances.m_data.m_size = 0i64;
  }
}

/*
==============
HavokCloth_InstanceManager_ReleaseCollidables
==============
*/
void HavokCloth_InstanceManager_ReleaseCollidables(HavokCloth_InstanceManager *manager, const unsigned int instanceId)
{
  HavokCloth_Instance *Instance; 
  unsigned int m_size; 
  unsigned __int64 v6; 
  __int64 v7; 
  hkReferencedObject *v8; 
  unsigned __int16 m_refCount; 
  unsigned __int64 i; 
  hclCollidable **m_buffer; 
  signed __int32 v12[8]; 
  __int64 v13; 
  __int64 v14; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 342, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 343, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 344, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v14) = manager->capacity;
    LODWORD(v13) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 346, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 350, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  m_size = Instance->collidables.m_data.m_size;
  if ( m_size )
  {
    v6 = 0i64;
    v7 = m_size;
    do
    {
      if ( v6 >= Instance->collidables.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v6 >= Instance->collidables.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v8 = Instance->collidables.m_data.m_buffer[v6];
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 358, ASSERT_TYPE_ASSERT, "(collidable)", (const char *)&queryFormat, "collidable") )
        __debugbreak();
      if ( v6 >= Instance->collidables.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v6 >= Instance->collidables.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      Instance->collidables.m_data.m_buffer[v6] = NULL;
      _InterlockedOr(v12, 0);
      m_refCount = v8->m_refCount;
      _InterlockedOr(v12, 0);
      if ( m_refCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 362, ASSERT_TYPE_ASSERT, "(collidable->getReferenceCount() == 1)", (const char *)&queryFormat, "collidable->getReferenceCount() == 1") )
        __debugbreak();
      hkReferencedObject::removeReference(v8);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  for ( i = 0i64; i < Instance->collidables.m_data.m_size; ++i )
    ;
  m_buffer = Instance->collidables.m_data.m_buffer;
  if ( m_buffer )
  {
    if ( !ntl::static_shared_allocator<Havok_Cloth_Instance_CollidableAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
      __debugbreak();
    ntl::nxheap::free(&ntl::static_shared_allocator<Havok_Cloth_Instance_CollidableAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator->m_heap, m_buffer);
    Instance->collidables.m_data.m_buffer = NULL;
    Instance->collidables.m_data.m_size = 0i64;
  }
}

/*
==============
HavokCloth_InstanceManager_ReserveClothInstances
==============
*/
void HavokCloth_InstanceManager_ReserveClothInstances(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const int numClothInstances)
{
  unsigned __int64 v5; 
  HavokCloth_Instance *Instance; 
  unsigned __int64 v7; 
  size_t v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  HavokCloth_HavokInstance *m_buffer; 
  __int64 v12; 

  v5 = numClothInstances;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 201, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 202, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 203, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v12) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v12, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 205, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 206, ASSERT_TYPE_ASSERT, "(numClothInstances > 0)", (const char *)&queryFormat, "numClothInstances > 0") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 210, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  if ( Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 213, ASSERT_TYPE_ASSERT, "(instance->clothInstances.size() == 0)", (const char *)&queryFormat, "instance->clothInstances.size() == 0") )
    __debugbreak();
  v7 = v5;
  if ( Instance->clothInstances.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
    __debugbreak();
  if ( !ntl::static_shared_allocator<Havok_Cloth_Instance_ClothInstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
    __debugbreak();
  v8 = 16 * v5;
  v9 = 0i64;
  Instance->clothInstances.m_data.m_buffer = (HavokCloth_HavokInstance *)ntl::nxheap::allocate(&ntl::static_shared_allocator<Havok_Cloth_Instance_ClothInstanceAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator->m_heap, 16 * v5, 4ui64, 1);
  Instance->clothInstances.m_data.m_size = v5;
  if ( (_DWORD)v5 )
  {
    v10 = 0i64;
    do
    {
      if ( v9 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
      m_buffer = Instance->clothInstances.m_data.m_buffer;
      ++v9;
      m_buffer[v10].clothInstance = NULL;
      m_buffer[v10++].physicsProxyAction = NULL;
    }
    while ( v9 < v7 );
  }
  if ( Instance->clothInstances.m_data.m_size != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 215, ASSERT_TYPE_ASSERT, "(instance->clothInstances.size() == numClothInstances)", (const char *)&queryFormat, "instance->clothInstances.size() == numClothInstances") )
    __debugbreak();
  memset_0(Instance->clothInstances.m_data.m_buffer, 0, v8);
}

/*
==============
HavokCloth_InstanceManager_ReserveCollidables
==============
*/
void HavokCloth_InstanceManager_ReserveCollidables(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const int numCollidables)
{
  unsigned __int64 v5; 
  HavokCloth_Instance *Instance; 
  unsigned __int64 v7; 
  hclCollidable **v8; 
  __int64 v9; 

  v5 = numCollidables;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 302, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 303, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 304, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v9) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 305, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v9, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 306, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 307, ASSERT_TYPE_ASSERT, "(numCollidables > 0)", (const char *)&queryFormat, "numCollidables > 0") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 311, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  if ( Instance->collidables.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 314, ASSERT_TYPE_ASSERT, "(instance->collidables.size() == 0)", (const char *)&queryFormat, "instance->collidables.size() == 0") )
    __debugbreak();
  if ( Instance->collidables.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
    __debugbreak();
  if ( !ntl::static_shared_allocator<Havok_Cloth_Instance_CollidableAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
    __debugbreak();
  v7 = 0i64;
  Instance->collidables.m_data.m_buffer = (hclCollidable **)ntl::nxheap::allocate(&ntl::static_shared_allocator<Havok_Cloth_Instance_CollidableAllocator,ntl::fixed_heap_allocator<16384,0>>::mp_allocator->m_heap, 8 * v5, 4ui64, 1);
  for ( Instance->collidables.m_data.m_size = v5; v7 < v5; ++v7 )
  {
    if ( v7 >= Instance->collidables.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
      __debugbreak();
    v8 = &Instance->collidables.m_data.m_buffer[v7];
    if ( v8 )
      *v8 = NULL;
  }
  if ( Instance->collidables.m_data.m_size != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 316, ASSERT_TYPE_ASSERT, "(instance->collidables.size() == numCollidables)", (const char *)&queryFormat, "instance->collidables.size() == numCollidables") )
    __debugbreak();
}

/*
==============
HavokCloth_InstanceManager_SetAccessedBones
==============
*/
void HavokCloth_InstanceManager_SetAccessedBones(HavokCloth_InstanceManager *manager, const unsigned int instanceId, bitarray<768> *bones)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 448, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 449, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 450, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 451, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 452, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  if ( !bones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 453, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 457, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  Instance->accessedBones.array[0] = bones->array[0];
  Instance->accessedBones.array[1] = bones->array[1];
  Instance->accessedBones.array[2] = bones->array[2];
  Instance->accessedBones.array[3] = bones->array[3];
  Instance->accessedBones.array[4] = bones->array[4];
  Instance->accessedBones.array[5] = bones->array[5];
  Instance->accessedBones.array[6] = bones->array[6];
  Instance->accessedBones.array[7] = bones->array[7];
  Instance->accessedBones.array[8] = bones->array[8];
  Instance->accessedBones.array[9] = bones->array[9];
  Instance->accessedBones.array[10] = bones->array[10];
  Instance->accessedBones.array[11] = bones->array[11];
  Instance->accessedBones.array[12] = bones->array[12];
  Instance->accessedBones.array[13] = bones->array[13];
  Instance->accessedBones.array[14] = bones->array[14];
  Instance->accessedBones.array[15] = bones->array[15];
  Instance->accessedBones.array[16] = bones->array[16];
  Instance->accessedBones.array[17] = bones->array[17];
  Instance->accessedBones.array[18] = bones->array[18];
  Instance->accessedBones.array[19] = bones->array[19];
  Instance->accessedBones.array[20] = bones->array[20];
  Instance->accessedBones.array[21] = bones->array[21];
  Instance->accessedBones.array[22] = bones->array[22];
  Instance->accessedBones.array[23] = bones->array[23];
}

/*
==============
HavokCloth_InstanceManager_SetBindPoseBased
==============
*/
void HavokCloth_InstanceManager_SetBindPoseBased(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const bool bindPoseBased)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 776, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 777, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 778, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 779, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->bindPoseBased = bindPoseBased;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 783, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0x40] = bindPoseBased;
  }
}

/*
==============
HavokCloth_InstanceManager_SetBlendedSpeed
==============
*/
void HavokCloth_InstanceManager_SetBlendedSpeed(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, float speed)
{
  HavokCloth_Instance *Instance; 
  __int64 v6; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 976, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 977, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 978, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v6) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 979, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v6, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 980, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->blendedSpeed = speed;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 984, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0x194] = speed;
  }
}

/*
==============
HavokCloth_InstanceManager_SetClothAsset
==============
*/
void HavokCloth_InstanceManager_SetClothAsset(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const ClothAsset *clothAsset)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 605, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 606, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 607, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 608, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  if ( !clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 609, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->clothAsset = clothAsset;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 613, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0x10] = clothAsset;
  }
}

/*
==============
HavokCloth_InstanceManager_SetClothInstance
==============
*/
void HavokCloth_InstanceManager_SetClothInstance(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const unsigned int clothInstanceIdx, hclClothInstance *clothInstance)
{
  unsigned __int64 v4; 
  HavokCloth_Instance *Instance; 
  __int64 v9; 
  __int64 v10; 

  v4 = clothInstanceIdx;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 225, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 226, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 227, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v9) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v9, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 229, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 233, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  if ( (unsigned int)v4 >= LODWORD(Instance->clothInstances.m_data.m_size) )
  {
    LODWORD(v10) = Instance->clothInstances.m_data.m_size;
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( instance->clothInstances.size() )", "clothInstanceIdx doesn't index instance->clothInstances.size()\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( v4 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  if ( v4 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
    __debugbreak();
  Instance->clothInstances.m_data.m_buffer[v4].clothInstance = clothInstance;
}

/*
==============
HavokCloth_InstanceManager_SetCollidable
==============
*/
void HavokCloth_InstanceManager_SetCollidable(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const unsigned int collidableIdx, hclCollidable *collidable)
{
  unsigned __int64 v4; 
  HavokCloth_Instance *Instance; 
  __int64 v9; 

  v4 = collidableIdx;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 323, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 324, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 325, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v9) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 326, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v9, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 327, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 331, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  if ( v4 >= Instance->collidables.m_data.m_size )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 334, ASSERT_TYPE_ASSERT, "(collidableIdx < instance->collidables.size())", (const char *)&queryFormat, "collidableIdx < instance->collidables.size()") )
      __debugbreak();
    if ( v4 >= Instance->collidables.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v4 >= Instance->collidables.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
  }
  Instance->collidables.m_data.m_buffer[v4] = collidable;
}

/*
==============
HavokCloth_InstanceManager_SetCurrentSoundIdx
==============
*/
void HavokCloth_InstanceManager_SetCurrentSoundIdx(const HavokCloth_InstanceManager *const manager, const unsigned int instanceId, unsigned int soundIdx)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1013, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1014, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1015, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1016, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1017, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->currentSoundIdx = soundIdx;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 1021, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0x198] = soundIdx;
  }
}

/*
==============
HavokCloth_InstanceManager_SetOrientation
==============
*/
void HavokCloth_InstanceManager_SetOrientation(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const hkQuaternionf *orientation)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 742, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 743, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 744, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 745, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->orientation = (hkQuaternionf)orientation->m_vec.m_quad;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 749, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0x30] = orientation->m_vec.m_quad;
  }
}

/*
==============
HavokCloth_InstanceManager_SetOwnerType
==============
*/
void HavokCloth_InstanceManager_SetOwnerType(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const Cloth_OwnerType ownerType)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 674, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 675, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 676, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 677, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->ownerType = ownerType;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 681, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0xC] = ownerType;
  }
}

/*
==============
HavokCloth_InstanceManager_SetPhysicsProxyAction
==============
*/
void HavokCloth_InstanceManager_SetPhysicsProxyAction(HavokCloth_InstanceManager *manager, const unsigned int instanceId, const unsigned int clothInstanceIdx, HavokCloth_PhysicsProxyAction *action)
{
  unsigned __int64 v4; 
  HavokCloth_Instance *Instance; 
  __int64 v9; 
  hkReferencedObject *v10; 
  __int64 v11; 
  __int64 v12; 

  v4 = clothInstanceIdx;
  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 521, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 522, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 523, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v11) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 524, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v11, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 525, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 529, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  if ( (unsigned int)v4 >= LODWORD(Instance->clothInstances.m_data.m_size) )
  {
    LODWORD(v12) = Instance->clothInstances.m_data.m_size;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( clothInstanceIdx ) < (unsigned)( instance->clothInstances.size() )", "clothInstanceIdx doesn't index instance->clothInstances.size()\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( v4 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  if ( v4 >= Instance->clothInstances.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
    __debugbreak();
  v9 = (__int64)&Instance->clothInstances.m_data.m_buffer[v4];
  v10 = *(hkReferencedObject **)(v9 + 8);
  if ( v10 )
    hkReferencedObject::removeReference(v10);
  *(_QWORD *)(v9 + 8) = action;
  if ( action )
    hkReferencedObject::addReference(action);
}

/*
==============
HavokCloth_InstanceManager_SetPosition
==============
*/
void HavokCloth_InstanceManager_SetPosition(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const hkVector4f *position)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 708, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 709, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 710, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 711, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->position = (hkVector4f)position->m_quad;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 715, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0x20] = position->m_quad;
  }
}

/*
==============
HavokCloth_InstanceManager_SetReadBones
==============
*/
void HavokCloth_InstanceManager_SetReadBones(HavokCloth_InstanceManager *manager, const unsigned int instanceId, bitarray<768> *bones)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 374, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 375, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 376, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 378, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  if ( !bones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 379, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 383, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  Instance->readBones.array[0] = bones->array[0];
  Instance->readBones.array[1] = bones->array[1];
  Instance->readBones.array[2] = bones->array[2];
  Instance->readBones.array[3] = bones->array[3];
  Instance->readBones.array[4] = bones->array[4];
  Instance->readBones.array[5] = bones->array[5];
  Instance->readBones.array[6] = bones->array[6];
  Instance->readBones.array[7] = bones->array[7];
  Instance->readBones.array[8] = bones->array[8];
  Instance->readBones.array[9] = bones->array[9];
  Instance->readBones.array[10] = bones->array[10];
  Instance->readBones.array[11] = bones->array[11];
  Instance->readBones.array[12] = bones->array[12];
  Instance->readBones.array[13] = bones->array[13];
  Instance->readBones.array[14] = bones->array[14];
  Instance->readBones.array[15] = bones->array[15];
  Instance->readBones.array[16] = bones->array[16];
  Instance->readBones.array[17] = bones->array[17];
  Instance->readBones.array[18] = bones->array[18];
  Instance->readBones.array[19] = bones->array[19];
  Instance->readBones.array[20] = bones->array[20];
  Instance->readBones.array[21] = bones->array[21];
  Instance->readBones.array[22] = bones->array[22];
  Instance->readBones.array[23] = bones->array[23];
}

/*
==============
HavokCloth_InstanceManager_SetRefId
==============
*/
void HavokCloth_InstanceManager_SetRefId(HavokCloth_InstanceManager *const manager, const unsigned int instanceId, const unsigned int refId)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 640, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 641, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 642, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 643, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->refId = refId;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 647, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[8] = refId;
  }
}

/*
==============
HavokCloth_InstanceManager_SetRuntimeMemoryRequirements
==============
*/
void HavokCloth_InstanceManager_SetRuntimeMemoryRequirements(HavokCloth_InstanceManager *manager, const unsigned int instanceId, unsigned int runtimeMemoryRequirement)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 485, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 486, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 487, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 489, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( Instance )
  {
    Instance->runtimeMemoryRequirement = runtimeMemoryRequirement;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 493, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    MEMORY[0x188] = runtimeMemoryRequirement;
  }
}

/*
==============
HavokCloth_InstanceManager_SetWrittenBones
==============
*/
void HavokCloth_InstanceManager_SetWrittenBones(HavokCloth_InstanceManager *manager, const unsigned int instanceId, bitarray<768> *bones)
{
  HavokCloth_Instance *Instance; 
  __int64 v7; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 411, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 412, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 413, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( instanceId >= manager->capacity )
  {
    LODWORD(v7) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 414, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( HavokCloth_InstanceManager_GetCapacity( manager ) )", "instanceId doesn't index HavokCloth_InstanceManager_GetCapacity( manager )\n\t%i not in [0, %i)", v7, manager->capacity) )
      __debugbreak();
  }
  if ( !HavokCloth_InstanceManager_IsInstanceInUse(manager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 415, ASSERT_TYPE_ASSERT, "(HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId ))", (const char *)&queryFormat, "HavokCloth_InstanceManager_IsInstanceInUse( manager, instanceId )") )
    __debugbreak();
  if ( !bones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 416, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  Instance = HavokCloth_InstanceManager_GetInstance(manager, instanceId);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 420, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  Instance->writtenBones.array[0] = bones->array[0];
  Instance->writtenBones.array[1] = bones->array[1];
  Instance->writtenBones.array[2] = bones->array[2];
  Instance->writtenBones.array[3] = bones->array[3];
  Instance->writtenBones.array[4] = bones->array[4];
  Instance->writtenBones.array[5] = bones->array[5];
  Instance->writtenBones.array[6] = bones->array[6];
  Instance->writtenBones.array[7] = bones->array[7];
  Instance->writtenBones.array[8] = bones->array[8];
  Instance->writtenBones.array[9] = bones->array[9];
  Instance->writtenBones.array[10] = bones->array[10];
  Instance->writtenBones.array[11] = bones->array[11];
  Instance->writtenBones.array[12] = bones->array[12];
  Instance->writtenBones.array[13] = bones->array[13];
  Instance->writtenBones.array[14] = bones->array[14];
  Instance->writtenBones.array[15] = bones->array[15];
  Instance->writtenBones.array[16] = bones->array[16];
  Instance->writtenBones.array[17] = bones->array[17];
  Instance->writtenBones.array[18] = bones->array[18];
  Instance->writtenBones.array[19] = bones->array[19];
  Instance->writtenBones.array[20] = bones->array[20];
  Instance->writtenBones.array[21] = bones->array[21];
  Instance->writtenBones.array[22] = bones->array[22];
  Instance->writtenBones.array[23] = bones->array[23];
}

/*
==============
HavokCloth_InstanceManager_Shutdown
==============
*/
void HavokCloth_InstanceManager_Shutdown(HavokCloth_InstanceManager *manager)
{
  hkMemoryRouter *Value; 

  if ( !manager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 90, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( !manager->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 91, ASSERT_TYPE_ASSERT, "(manager->buffer)", (const char *)&queryFormat, "manager->buffer") )
    __debugbreak();
  if ( manager->numAllocatedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothinstancemanager.cpp", 92, ASSERT_TYPE_ASSERT, "(manager->numAllocatedInstances == 0)", (const char *)&queryFormat, "manager->numAllocatedInstances == 0") )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  Value->m_heap->blockFree(Value->m_heap, manager->buffer, 416 * manager->capacity);
  manager->buffer = NULL;
  *(_QWORD *)&manager->capacity = 0i64;
  *(_QWORD *)&manager->freeInstances = 0i64;
  *(_QWORD *)&manager->numAllocatedInstances = 0i64;
  *(_QWORD *)&manager->peakInstanceId = 0i64;
}

