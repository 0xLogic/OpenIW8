/*
==============
HavokCloth_GetFocusPosition
==============
*/

const hkVector4f *__fastcall HavokCloth_GetFocusPosition(const unsigned int globalWorldId)
{
  return ?HavokCloth_GetFocusPosition@@YAAEBVhkVector4f@@I@Z(globalWorldId);
}

/*
==============
HavokCloth_Update_FreeMemory
==============
*/

void HavokCloth_Update_FreeMemory(void)
{
  ?HavokCloth_Update_FreeMemory@@YAXXZ();
}

/*
==============
HavokCloth_Update_GetBoneTransforms
==============
*/

void __fastcall HavokCloth_Update_GetBoneTransforms(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale, const float4 *const viewOffset)
{
  ?HavokCloth_Update_GetBoneTransforms@@YAXIIPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBV?$bitarray@$0DAA@@@PEAUXAnimCalcBuffer@@MQEBUfloat4@@@Z(globalWorldId, instanceId, animCalcInfo, dObj, requestedBones, animCalcBuffer, weightScale, viewOffset);
}

/*
==============
HavokCloth_Update_GetCurrentTimestep
==============
*/

double __fastcall HavokCloth_Update_GetCurrentTimestep(const unsigned int globalWorldId)
{
  double result; 

  *(float *)&result = ?HavokCloth_Update_GetCurrentTimestep@@YAMI@Z(globalWorldId);
  return result;
}

/*
==============
HavokCloth_Update_SetBoneTransformsForState
==============
*/

void __fastcall HavokCloth_Update_SetBoneTransformsForState(const unsigned int globalWorldId, const unsigned int instanceId, hclClothInstance *clothInstance, const hclClothState *const state, const XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const XAnimCalcBuffer *animCalcBuffer, const float4 *const viewOffset)
{
  ?HavokCloth_Update_SetBoneTransformsForState@@YAXIIPEAVhclClothInstance@@QEBVhclClothState@@PEBUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimCalcBuffer@@QEBUfloat4@@@Z(globalWorldId, instanceId, clothInstance, state, animCalcInfo, dObj, animCalcBuffer, viewOffset);
}

/*
==============
HavokCloth_Update_InstanceUpdatedThisFrame
==============
*/

bool __fastcall HavokCloth_Update_InstanceUpdatedThisFrame(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_Update_InstanceUpdatedThisFrame@@YA_NII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_Update_ApplyBulletImpact
==============
*/

void __fastcall HavokCloth_Update_ApplyBulletImpact(const unsigned int globalWorldId, const unsigned int instanceId, const unsigned int clothInstanceIdx, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKey, const hkVector4f *start, const hkVector4f *hitPos)
{
  ?HavokCloth_Update_ApplyBulletImpact@@YAXIIIU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@AEBVhkVector4f@@1@Z(globalWorldId, instanceId, clothInstanceIdx, shapeKey, start, hitPos);
}

/*
==============
HavokCloth_Update_PhysicsProxies
==============
*/

void __fastcall HavokCloth_Update_PhysicsProxies(const unsigned int globalWorldId)
{
  ?HavokCloth_Update_PhysicsProxies@@YAXI@Z(globalWorldId);
}

/*
==============
HavokCloth_Update_GetTickerCount
==============
*/

unsigned int __fastcall HavokCloth_Update_GetTickerCount(const unsigned int globalWorldId)
{
  return ?HavokCloth_Update_GetTickerCount@@YAII@Z(globalWorldId);
}

/*
==============
HavokCloth_Update_AllocateMemory
==============
*/

void HavokCloth_Update_AllocateMemory(void)
{
  ?HavokCloth_Update_AllocateMemory@@YAXXZ();
}

/*
==============
HavokCloth_Update_SetInstanceTransform
==============
*/

void __fastcall HavokCloth_Update_SetInstanceTransform(const unsigned int globalWorldId, const unsigned int instanceId, const hkVector4f *origin, const hkQuaternionf *orientation)
{
  ?HavokCloth_Update_SetInstanceTransform@@YAXIIAEBVhkVector4f@@AEBVhkQuaternionf@@@Z(globalWorldId, instanceId, origin, orientation);
}

/*
==============
HavokCloth_Update_FrameFlip
==============
*/

void __fastcall HavokCloth_Update_FrameFlip(const unsigned int globalWorldId, const float timeStep, const hkVector4f *focusPosition)
{
  ?HavokCloth_Update_FrameFlip@@YAXIMAEBVhkVector4f@@@Z(globalWorldId, timeStep, focusPosition);
}

/*
==============
HavokCloth_Update_InstanceStateTransition
==============
*/

void __fastcall HavokCloth_Update_InstanceStateTransition(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?HavokCloth_Update_InstanceStateTransition@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_Update_ClearInstance
==============
*/

void __fastcall HavokCloth_Update_ClearInstance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?HavokCloth_Update_ClearInstance@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_Update_GlobalWorldDestroyed
==============
*/

void __fastcall HavokCloth_Update_GlobalWorldDestroyed(const unsigned int globalWorldId)
{
  ?HavokCloth_Update_GlobalWorldDestroyed@@YAXI@Z(globalWorldId);
}

/*
==============
HavokCloth_Update_FlagForPhysicsProxyUpdate
==============
*/

void __fastcall HavokCloth_Update_FlagForPhysicsProxyUpdate(const unsigned int globalWorldId, const unsigned int instanceId, bool needsUpdate)
{
  ?HavokCloth_Update_FlagForPhysicsProxyUpdate@@YAXII_N@Z(globalWorldId, instanceId, needsUpdate);
}

/*
==============
HavokCloth_Update_FlagForPhysicsProxyRebuild
==============
*/

void __fastcall HavokCloth_Update_FlagForPhysicsProxyRebuild(const unsigned int globalWorldId, const unsigned int instanceId, bool needsRebuild)
{
  ?HavokCloth_Update_FlagForPhysicsProxyRebuild@@YAXII_N@Z(globalWorldId, instanceId, needsRebuild);
}

/*
==============
HavokCloth_Update_GetNeedsSoundUpdate
==============
*/

bool __fastcall HavokCloth_Update_GetNeedsSoundUpdate(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_Update_GetNeedsSoundUpdate@@YA_NII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_Update_SetNeedsSoundUpdate
==============
*/

void __fastcall HavokCloth_Update_SetNeedsSoundUpdate(const unsigned int globalWorldId, const unsigned int instanceId, bool needsUpdate)
{
  ?HavokCloth_Update_SetNeedsSoundUpdate@@YAXII_N@Z(globalWorldId, instanceId, needsUpdate);
}

/*
==============
HavokCloth_Update_SetBoneTransforms
==============
*/

void __fastcall HavokCloth_Update_SetBoneTransforms(const unsigned int globalWorldId, const unsigned int instanceId, const XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const XAnimCalcBuffer *animCalcBuffer, const float4 *const viewOffset)
{
  ?HavokCloth_Update_SetBoneTransforms@@YAXIIPEBUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimCalcBuffer@@QEBUfloat4@@@Z(globalWorldId, instanceId, animCalcInfo, dObj, animCalcBuffer, viewOffset);
}

/*
==============
HavokCloth_Update_GlobalWorldCreated
==============
*/

void __fastcall HavokCloth_Update_GlobalWorldCreated(const unsigned int globalWorldId)
{
  ?HavokCloth_Update_GlobalWorldCreated@@YAXI@Z(globalWorldId);
}

/*
==============
HavokCloth_Update_HideByCollapsing
==============
*/

void __fastcall HavokCloth_Update_HideByCollapsing(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale)
{
  ?HavokCloth_Update_HideByCollapsing@@YAXIIPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBV?$bitarray@$0DAA@@@PEAUXAnimCalcBuffer@@M@Z(globalWorldId, instanceId, animCalcInfo, dObj, requestedBones, animCalcBuffer, weightScale);
}

/*
==============
HavokCloth_Update_InstanceState
==============
*/

void __fastcall HavokCloth_Update_InstanceState(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?HavokCloth_Update_InstanceState@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_Update_GetTargetStateId
==============
*/

HavokCloth_Update_StateId __fastcall HavokCloth_Update_GetTargetStateId(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?HavokCloth_Update_GetTargetStateId@@YA?AW4HavokCloth_Update_StateId@@II@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_Update_Instance
==============
*/

void __fastcall HavokCloth_Update_Instance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?HavokCloth_Update_Instance@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
HavokCloth_GetFocusPosition
==============
*/
hkVector4f *HavokCloth_GetFocusPosition(const unsigned int globalWorldId)
{
  __int64 v1; 

  v1 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 706, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v1 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 707, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  return &s_havokCloth_Update_Datas[v1].focusPosition;
}

/*
==============
HavokCloth_Update_AllocateMemory
==============
*/
void HavokCloth_Update_AllocateMemory(void)
{
  if ( dword_151535080 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_151535080);
    if ( dword_151535080 == -1 )
    {
      maxNumGlobalWorlds_0 = Cloth_GetMaxSupportedGlobalWorlds();
      j__Init_thread_footer(&dword_151535080);
    }
  }
  if ( s_havokCloth_Update_Datas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 153, ASSERT_TYPE_ASSERT, "(!s_havokCloth_Update_Datas)", (const char *)&queryFormat, "!s_havokCloth_Update_Datas", -2i64) )
    __debugbreak();
  s_havokCloth_Update_Datas = (HavokCloth_Update_Data *)Cloth_AllocateMemoryBuffer(5072i64 * maxNumGlobalWorlds_0, "HavokCloth_Update");
  memset_0(s_havokCloth_Update_Datas, 0, 5072i64 * maxNumGlobalWorlds_0);
}

/*
==============
HavokCloth_Update_ApplyBulletImpact
==============
*/
void HavokCloth_Update_ApplyBulletImpact(const unsigned int globalWorldId, const unsigned int instanceId, const unsigned int clothInstanceIdx, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKey, const hkVector4f *start, const hkVector4f *hitPos)
{
  const dvar_t *v10; 
  unsigned int flags; 
  const dvar_t *v12; 
  unsigned int v13; 
  HavokCloth_PhysicsProxyAction *PhysicsProxyAction; 
  __int64 v15; 
  __int64 v16; 

  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1735, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1736, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1737, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v15) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1738, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v15, 1024) )
    __debugbreak();
LABEL_13:
  v10 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v10->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
      __debugbreak();
  }
  if ( instanceId >= v10->current.integer )
  {
    v12 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v13 = v12->flags;
      if ( (v13 & 0x81488) != 0 && (v13 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v12->name) )
        __debugbreak();
    }
    LODWORD(v16) = v12->current.integer;
    LODWORD(v15) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1739, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  PhysicsProxyAction = HavokCloth_GetPhysicsProxyAction(globalWorldId, instanceId, clothInstanceIdx);
  if ( PhysicsProxyAction )
    HavokCloth_PhysicsProxyAction::AddBulletImpact(PhysicsProxyAction, shapeKey, start, hitPos);
}

/*
==============
HavokCloth_Update_BlendedSpeed
==============
*/
void HavokCloth_Update_BlendedSpeed(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v3; 
  const ClothAsset *ClothAsset; 
  __int128 v5; 
  __int128 timeStep_low; 
  float defaultSpeed; 
  float speedBlendSpeed; 
  __int128 v9; 
  __int128 v11; 
  float speed; 

  v3 = globalWorldId;
  ClothAsset = HavokCloth_GetClothAsset(globalWorldId, instanceId);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 475, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  v5 = 0i64;
  timeStep_low = LODWORD(s_havokCloth_Update_Datas[v3].timeStep);
  if ( *(float *)&timeStep_low > 0.0 )
  {
    speed = 0.0;
    if ( HavokCloth_GetSimulatedSpeed(v3, instanceId, &speed) )
      defaultSpeed = speed;
    else
      defaultSpeed = ClothAsset->defaultSpeed;
    speedBlendSpeed = ClothAsset->speedBlendSpeed;
    *(double *)&v5 = HavokCloth_GetBlendedSpeed(v3, instanceId);
    v9 = timeStep_low;
    *(float *)&v9 = *(float *)&timeStep_low * speedBlendSpeed;
    if ( *(float *)&v5 < defaultSpeed )
    {
      *(float *)&v9 = *(float *)&v9 + *(float *)&v5;
      _XMM0 = v9;
      __asm { vminss  xmm2, xmm0, xmm7; speed }
    }
    else
    {
      v11 = v5;
      *(float *)&v11 = *(float *)&v5 - (float)(*(float *)&timeStep_low * speedBlendSpeed);
      _XMM0 = v11;
      __asm { vmaxss  xmm2, xmm0, xmm7 }
    }
    HavokCloth_SetBlendedSpeed(v3, instanceId, *(float *)&_XMM2);
    if ( ClothAsset->soundCount )
      HavokCloth_Update_QueueSounds(v3, instanceId);
  }
}

/*
==============
HavokCloth_Update_CalculateTargetStates
==============
*/
void HavokCloth_Update_CalculateTargetStates(const unsigned int globalWorldId)
{
  HavokCloth_Update_Data *v2; 
  unsigned int Int_Internal_DebugName; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  const ClothAsset *ClothAsset; 
  unsigned int simulationLodCount; 
  ClothAssetSimulationLOD *simulationLods; 
  const dvar_t *v11; 
  unsigned int flags; 
  __int64 v15; 
  float *v16; 
  float *p_hkMaxDistanceSq; 
  __int64 v18; 
  __int64 v19; 
  hkVector4f position; 

  v2 = &s_havokCloth_Update_Datas[globalWorldId];
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cloth_MaxInstances, "cloth_MaxInstances");
  memset_0(v2->targetStateIds, 0, 4i64 * Int_Internal_DebugName);
  v4 = v2->updatedLastFrame.generalUseBitArray.array[0];
  LODWORD(v5) = 0;
  while ( v4 )
  {
LABEL_5:
    v6 = __lzcnt(v4);
    v7 = v6 + 32 * (_DWORD)v5;
    if ( v6 >= 0x20 )
    {
      LODWORD(v19) = 32;
      LODWORD(v18) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v6);
    if ( !HavokCloth_IsInstanceInUse(globalWorldId, v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 310, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
      __debugbreak();
    ClothAsset = HavokCloth_GetClothAsset(globalWorldId, v7);
    if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 314, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
      __debugbreak();
    simulationLodCount = ClothAsset->simulationLodCount;
    simulationLods = ClothAsset->simulationLods;
    HavokCloth_GetInstancePosition(globalWorldId, v7, &position);
    v11 = DCONST_DVARINT_cloth_LODOverride;
    _XMM1 = _mm128_sub_ps(v2->focusPosition.m_quad, position.m_quad);
    __asm { vdpps   xmm6, xmm1, xmm1, 7Fh }
    if ( !DCONST_DVARINT_cloth_LODOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_LODOverride") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v11->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v11->name) )
        __debugbreak();
    }
    LODWORD(v15) = v11->current.integer;
    if ( (int)v15 < 0 )
    {
      v15 = 0i64;
      if ( simulationLodCount < 4 )
      {
LABEL_34:
        if ( (unsigned int)v15 >= simulationLodCount )
          goto LABEL_39;
        p_hkMaxDistanceSq = &simulationLods[v15].hkMaxDistanceSq;
        do
        {
          if ( *(float *)&_XMM6 < *p_hkMaxDistanceSq )
            break;
          p_hkMaxDistanceSq += 6;
          LODWORD(v15) = v15 + 1;
        }
        while ( (unsigned int)v15 < simulationLodCount );
      }
      else
      {
        v16 = &simulationLods->hkMaxDistanceSq;
        while ( *(float *)&_XMM6 >= *v16 )
        {
          if ( *(float *)&_XMM6 < v16[6] )
          {
            LODWORD(v15) = v15 + 1;
            break;
          }
          if ( *(float *)&_XMM6 < v16[12] )
          {
            LODWORD(v15) = v15 + 2;
            break;
          }
          if ( *(float *)&_XMM6 < v16[18] )
          {
            LODWORD(v15) = v15 + 3;
            break;
          }
          v16 += 24;
          v15 = (unsigned int)(v15 + 4);
          if ( (unsigned int)v15 >= simulationLodCount - 3 )
            goto LABEL_34;
        }
      }
    }
    if ( (unsigned int)v15 < simulationLodCount )
      v2->targetStateIds[v7] = v15 + 2;
    else
LABEL_39:
      v2->targetStateIds[v7] = HAVOK_CLOTH_UPDATE_STATEID_ANIMATED;
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x20 )
      break;
    v4 = v2->updatedLastFrame.generalUseBitArray.array[v5];
    if ( v4 )
      goto LABEL_5;
  }
}

/*
==============
HavokCloth_Update_ClearInstance
==============
*/
void HavokCloth_Update_ClearInstance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int flags; 
  const dvar_t *v6; 
  unsigned int v7; 
  bitarray_base<bitarray<1024> > *v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = instanceId;
  v3 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1163, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1164, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1165, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( (unsigned int)v2 < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v9) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v9, 1024) )
    __debugbreak();
LABEL_13:
  v4 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= v4->current.integer )
  {
    v6 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v7 = v6->flags;
      if ( (v7 & 0x81488) != 0 && (v7 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    LODWORD(v10) = v6->current.integer;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1167, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v8 = (bitarray_base<bitarray<1024> > *)&s_havokCloth_Update_Datas[v3];
  bitarray_base<bitarray<1024>>::resetBit(v8 + 8, v2);
  bitarray_base<bitarray<1024>>::resetBit(v8 + 136, v2);
  bitarray_base<bitarray<1024>>::resetBit(v8 + 4688, v2);
  *(_DWORD *)&v8[4 * v2 + 520] = 0;
}

/*
==============
HavokCloth_Update_FlagForPhysicsProxyRebuild
==============
*/
void HavokCloth_Update_FlagForPhysicsProxyRebuild(const unsigned int globalWorldId, const unsigned int instanceId, bool needsRebuild)
{
  unsigned __int64 v3; 
  __int64 v4; 
  const dvar_t *v5; 
  unsigned int flags; 
  const dvar_t *v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  volatile signed __int32 *v11; 
  __int64 v12; 
  __int64 v13; 

  v3 = instanceId;
  v4 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1616, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v4 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1617, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1618, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( (unsigned int)v3 < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v12) = v3;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1619, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v12, 1024) )
    __debugbreak();
LABEL_13:
  v5 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v5->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v5->name) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= v5->current.integer )
  {
    v7 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v8 = v7->flags;
      if ( (v8 & 0x81488) != 0 && (v8 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v7->name) )
        __debugbreak();
    }
    LODWORD(v13) = v7->current.integer;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1620, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v9 = 1 << (v3 & 0x1F);
  v10 = 1268 * v4 + (v3 >> 5);
  v11 = &s_havokCloth_Update_Datas->instancesNeedingPhysicsProxyRebuild[v10];
  if ( (((_BYTE)s_havokCloth_Update_Datas + 4 * (_BYTE)v10 - 120) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_havokCloth_Update_Datas->instancesNeedingPhysicsProxyRebuild[v10]) )
    __debugbreak();
  _InterlockedOr(v11, v9);
}

/*
==============
HavokCloth_Update_FlagForPhysicsProxyUpdate
==============
*/
void HavokCloth_Update_FlagForPhysicsProxyUpdate(const unsigned int globalWorldId, const unsigned int instanceId, bool needsUpdate)
{
  __int64 v4; 
  const dvar_t *v6; 
  unsigned int flags; 
  const dvar_t *v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1600, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v4 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1601, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1602, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v10) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1603, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v10, 1024) )
    __debugbreak();
LABEL_13:
  v6 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v6->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
      __debugbreak();
  }
  if ( instanceId >= v6->current.integer )
  {
    v8 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v9 = v8->flags;
      if ( (v9 & 0x81488) != 0 && (v9 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v8->name) )
        __debugbreak();
    }
    LODWORD(v11) = v8->current.integer;
    LODWORD(v10) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1604, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  bitarray_base<bitarray<1024>>::setBitTo(&s_havokCloth_Update_Datas[v4].instancesNeedingPhysicsProxyUpdate, instanceId, needsUpdate);
}

/*
==============
HavokCloth_Update_FrameFlip
==============
*/
void HavokCloth_Update_FrameFlip(const unsigned int globalWorldId, const float timeStep, const hkVector4f *focusPosition)
{
  unsigned __int64 v3; 
  unsigned __int64 v5; 
  HavokCloth_Update_Data *v6; 
  hclWorld *GlobalClothWorld; 
  HavokCloth_Update_Data *v8; 
  HavokCloth_Update_Data *v9; 
  volatile int v10; 
  const char **p_soundAlias; 
  unsigned int v12; 
  const SndAliasList *Alias; 
  float v14; 
  float v15; 
  unsigned __int64 ClothSndEntHandle; 
  float v17; 
  vec3_t position; 

  v3 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_Update_FrameFlip");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 657, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 658, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  v5 = v3;
  v6 = &s_havokCloth_Update_Datas[v3];
  GlobalClothWorld = HavokCloth_GetGlobalClothWorld(v3);
  if ( !GlobalClothWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 272, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  v8 = s_havokCloth_Update_Datas;
  if ( s_havokCloth_Update_Datas[v5].worldActive )
    hkSignal2<hclWorld *,float>::fire(&GlobalClothWorld->m_signals.m_postStep, GlobalClothWorld, 0.0);
  hkSignal2<hclWorld *,float>::fire(&GlobalClothWorld->m_signals.m_preStep, GlobalClothWorld, 0.0);
  v8[v5].worldActive = 1;
  v6->focusPosition = (hkVector4f)focusPosition->m_quad;
  HavokCloth_Update_CalculateTargetStates(v3);
  HavokCloth_Update_UpdateInactiveInstances(v3);
  v9 = s_havokCloth_Update_Datas;
  v10 = 0;
  if ( s_havokCloth_Update_Datas[v5].numQueuedSounds > 0 )
  {
    p_soundAlias = &s_havokCloth_Update_Datas[v5].queuedSounds[0].soundAlias;
    do
    {
      v12 = *((_DWORD *)p_soundAlias - 2);
      if ( v12 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 598, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
        __debugbreak();
      if ( Cloth_IsInstanceInUse(v3, v12) )
      {
        if ( !*p_soundAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 605, ASSERT_TYPE_ASSERT, "(queuedSound->soundAlias)", (const char *)&queryFormat, "queuedSound->soundAlias") )
          __debugbreak();
        Alias = SND_FindAlias(*p_soundAlias);
        if ( Alias )
        {
          v14 = *((float *)p_soundAlias + 2);
          v15 = *((float *)p_soundAlias + 3);
          Cloth_GetInstancePosition(v3, *((_DWORD *)p_soundAlias - 2), &position);
          ClothSndEntHandle = CG_GenerateClothSndEntHandle((const LocalClientNum_t)v3, v12);
          SND_PlayScaledSoundAlias(Alias, ClothSndEntHandle, v14, v15, &position, 0, SASYS_CGAME);
        }
      }
      ++v10;
      p_soundAlias += 3;
    }
    while ( v10 < v9[v5].numQueuedSounds );
  }
  HavokCloth_Debug_Sound_SetCache(v3, v9[v5].queuedSounds, v9[v5].numQueuedSounds);
  v9[v5].numQueuedSounds = 0;
  bitarray_base<bitarray<1024>>::copyBitArray(&v6->updatedLastLastFrame, (const bitarray_base<bitarray<1024> > *)&v6->updatedLastFrame);
  *(_QWORD *)v6->updatedLastFrame.generalUseBitArray.array = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[2] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[4] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[6] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[8] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[10] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[12] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[14] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[16] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[18] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[20] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[22] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[24] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[26] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[28] = 0i64;
  *(_QWORD *)&v6->updatedLastFrame.threadSafeBitArray[30] = 0i64;
  v6->timeStepHistory[v6->timeStepHistoryLocation] = timeStep;
  v6->timeStepHistoryLocation = (v6->timeStepHistoryLocation + 1) % 0xAu;
  v17 = (float)((float)((float)((float)((float)((float)((float)((float)((float)(v6->timeStepHistory[1] + v6->timeStepHistory[0]) + v6->timeStepHistory[2]) + v6->timeStepHistory[3]) + v6->timeStepHistory[4]) + v6->timeStepHistory[5]) + v6->timeStepHistory[6]) + v6->timeStepHistory[7]) + v6->timeStepHistory[8]) + v6->timeStepHistory[9]) * 0.1;
  ++v6->tickerCount;
  v6->timeStep = v17;
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_FreeMemory
==============
*/
void HavokCloth_Update_FreeMemory(void)
{
  if ( !s_havokCloth_Update_Datas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 163, ASSERT_TYPE_ASSERT, "(s_havokCloth_Update_Datas)", (const char *)&queryFormat, "s_havokCloth_Update_Datas") )
    __debugbreak();
  Cloth_FreeMemoryBuffer(s_havokCloth_Update_Datas);
  s_havokCloth_Update_Datas = NULL;
}

/*
==============
HavokCloth_Update_GetBoneTransforms
==============
*/
void HavokCloth_Update_GetBoneTransforms(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale, const float4 *const viewOffset)
{
  unsigned int v8; 
  unsigned int v9; 
  const dvar_t *v12; 
  unsigned int flags; 
  const dvar_t *v14; 
  unsigned int v15; 
  unsigned int v16; 
  hclClothInstance *v17; 
  const hclClothData *m_clothData; 
  __int64 m_currentState; 
  const hclClothState *v20; 
  __int64 m_size; 
  __int64 v22; 
  hclClothState::TransformSetAccess *m_data; 
  hclTransformSet *v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int16 v32; 
  const char *v33; 
  int v34; 
  const char *v35; 
  int v36; 
  unsigned int v37; 
  __m128 v; 
  const hkRotationImpl<float> *v39; 
  __m128 v40; 
  Cloth_OwnerType OwnerType; 
  int v42; 
  int v43; 
  int v44; 
  __int64 j; 
  int v46; 
  const float4 *fmt; 
  const float4 *v48; 
  __int64 v49; 
  char v50; 
  unsigned int i; 
  unsigned int NumClothInstances; 
  __int64 v55; 
  __int64 v56; 
  hclClothInstance *ClothInstance; 
  const hclClothState *v60; 
  hkQuaternionf v61; 

  v8 = instanceId;
  v9 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_GetBoneTransforms");
  if ( !Cloth_IsInitialized() )
  {
    v48 = (const float4 *)"Cloth_IsInitialized()";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1416, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( v9 > Cloth_GetMaxSupportedGlobalWorlds() )
  {
    v48 = (const float4 *)"globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1417, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( v8 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1418, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( v8 < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v48) = v8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1419, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v48, 1024) )
    __debugbreak();
LABEL_13:
  v12 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v12->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v12->name) )
      __debugbreak();
  }
  if ( v8 >= v12->current.integer )
  {
    v14 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v15 = v14->flags;
      if ( (v15 & 0x81488) != 0 && (v15 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v14->name) )
        __debugbreak();
    }
    LODWORD(v49) = v14->current.integer;
    LODWORD(v48) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1420, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v48, v49) )
      __debugbreak();
  }
  if ( !HavokCloth_IsInstanceInUse(v9, v8) )
  {
    v48 = (const float4 *)"HavokCloth_IsInstanceInUse( globalWorldId, instanceId )";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1421, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !animCalcInfo )
  {
    v48 = (const float4 *)"animCalcInfo";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1422, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !dObj )
  {
    v48 = (const float4 *)"dObj";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1423, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !requestedBones )
  {
    v48 = (const float4 *)"requestedBones";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1424, ASSERT_TYPE_ASSERT, "(requestedBones)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !animCalcBuffer )
  {
    v48 = (const float4 *)"animCalcBuffer";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1425, ASSERT_TYPE_ASSERT, "(animCalcBuffer)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !viewOffset )
  {
    v48 = (const float4 *)"viewOffset";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1426, ASSERT_TYPE_ASSERT, "(viewOffset)", (const char *)&queryFormat) )
      __debugbreak();
  }
  NumClothInstances = HavokCloth_GetNumClothInstances(v9, v8);
  v16 = 0;
  for ( i = 0; v16 < NumClothInstances; i = v16 )
  {
    ClothInstance = HavokCloth_GetClothInstance(v9, v8, v16);
    v17 = ClothInstance;
    if ( !ClothInstance )
    {
      v48 = (const float4 *)"clothInstance";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1434, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat) )
        __debugbreak();
    }
    m_clothData = ClothInstance->m_clothData;
    if ( !m_clothData )
    {
      v48 = (const float4 *)"clothData";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1438, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat) )
        __debugbreak();
    }
    m_currentState = (int)ClothInstance->m_currentState;
    if ( (unsigned int)m_currentState >= m_clothData->m_clothStateDatas.m_size )
    {
      LODWORD(v49) = m_clothData->m_clothStateDatas.m_size;
      LODWORD(v48) = ClothInstance->m_currentState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1442, ASSERT_TYPE_ASSERT, "(unsigned)( stateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "stateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    v20 = m_clothData->m_clothStateDatas.m_data[m_currentState];
    v60 = v20;
    m_size = v20->m_usedTransformSets.m_size;
    v56 = m_size;
    if ( m_size <= 0 )
      goto LABEL_101;
    v22 = 0i64;
    v55 = 0i64;
    do
    {
      m_data = v20->m_usedTransformSets.m_data;
      if ( *(unsigned int *)((char *)&m_data->m_transformSetIndex + v22) >= v17->m_transformSets.m_size )
      {
        LODWORD(v49) = v17->m_transformSets.m_size;
        LODWORD(v48) = *(unsigned int *)((char *)&m_data->m_transformSetIndex + v22);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1453, ASSERT_TYPE_ASSERT, "(unsigned)( usedTransformSet->m_transformSetIndex ) < (unsigned)( clothInstance->m_transformSets.getSize() )", "usedTransformSet->m_transformSetIndex doesn't index clothInstance->m_transformSets.getSize()\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      v24 = v17->m_transformSets.m_data[*(int *)((char *)&m_data->m_transformSetIndex + v22)];
      if ( (m_data->m_transformSetUsage.m_perComponentFlags[v22] & 2) == 0 )
        goto LABEL_100;
      v25 = *(__int64 *)((char *)&m_data->m_transformSetUsage.m_perComponentTransformTrackers.m_data + v22);
      v26 = 0;
      v27 = *(_DWORD *)(v25 + 64);
      if ( v27 <= 0 )
        v28 = 0;
      else
        v28 = **(_DWORD **)(v25 + 48);
      v50 = v28;
      if ( v27 <= 0 )
        goto LABEL_97;
      do
      {
        v29 = v26;
        if ( (v50 & 1) == 0 )
        {
          if ( (++v26 & 0x1F) != 0 || v26 >= v27 )
          {
            v28 >>= 1;
            v50 = v28;
          }
          else
          {
            v28 = *(_DWORD *)(*(_QWORD *)(v25 + 48) + 4 * ((v29 + 1) >> 5));
            v50 = v28;
          }
          goto LABEL_95;
        }
        v30 = v26;
        if ( (unsigned int)v26 >= LODWORD(v24[1].m_propertyBag.m_bag) )
        {
          LODWORD(v49) = v24[1].m_propertyBag.m_bag;
          LODWORD(v48) = v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1477, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetTransformIdx ) < (unsigned)( transformSet->m_boneIndices.getSize() )", "transformSetTransformIdx doesn't index transformSet->m_boneIndices.getSize()\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        if ( (++v26 & 0x1F) != 0 || v26 >= *(_DWORD *)(v25 + 64) )
          v28 >>= 1;
        else
          v28 = *(_DWORD *)(*(_QWORD *)(v25 + 48) + 4 * ((v29 + 1) >> 5));
        v31 = v30;
        v50 = v28;
        v32 = *((_WORD *)&v24[1].getExactType + v30);
        if ( v32 == 255 )
        {
          v33 = "boneIdx != NO_BONEINDEX";
          v34 = 1482;
          v35 = "(boneIdx != 255)";
          goto LABEL_88;
        }
        if ( v32 == 254 )
        {
          v33 = "boneIdx != UNDEFINED_BONEINDEX";
          v34 = 1483;
          v35 = "(boneIdx != 254)";
LABEL_88:
          v48 = (const float4 *)v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", v34, ASSERT_TYPE_ASSERT, v35, (const char *)&queryFormat) )
            __debugbreak();
        }
        v36 = v32;
        v37 = v32 & 0x7FFF;
        if ( v37 >= 0x300 )
        {
          LODWORD(v49) = 768;
          LODWORD(v48) = v37;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v48, v49) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v37 & 0x1F)) & requestedBones->array[(unsigned __int64)v37 >> 5]) != 0 )
        {
          v = viewOffset->v;
          v39 = (const hkRotationImpl<float> *)&v24->m_transforms.m_data[v31];
          v40 = _mm128_mul_ps((__m128)_xmm, v39[1].m_col0.m_quad);
          hkQuaternionf::set(&v61, v39);
          _mm128_sub_ps(v40, v);
          XAnimSetLocalBoneTransform(animCalcInfo, dObj, animCalcBuffer, v36, fmt, v48, weightScale);
        }
LABEL_95:
        v27 = *(_DWORD *)(v25 + 64);
      }
      while ( v26 < v27 );
      v22 = v55;
      m_size = v56;
      v9 = globalWorldId;
LABEL_97:
      OwnerType = Cloth_GetOwnerType(v9, instanceId);
      v42 = 0;
      v43 = (2 * ~(-1 << ((*(_DWORD *)(v25 + 64) - 1) & 0x1F))) | 1;
      v44 = *(_DWORD *)(v25 + 56) - 1;
      for ( j = v44; j >= 0; --j )
      {
        v46 = v43 & *(_DWORD *)(*(_QWORD *)(v25 + 48) + 4 * j);
        v43 = -1;
        v42 += __popcnt(v46);
      }
      Cloth_Debug_Perf_AddBoneWrittenCount(v9, OwnerType, v42);
      v17 = ClothInstance;
LABEL_100:
      v20 = v60;
      v22 += 32i64;
      --m_size;
      v55 = v22;
      v56 = m_size;
    }
    while ( m_size );
LABEL_101:
    v8 = instanceId;
    v16 = i + 1;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_GetCurrentTimestep
==============
*/
float HavokCloth_Update_GetCurrentTimestep(const unsigned int globalWorldId)
{
  __int64 v1; 

  v1 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 255, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v1 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 256, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  return s_havokCloth_Update_Datas[v1].timeStep;
}

/*
==============
HavokCloth_Update_GetNeedsSoundUpdate
==============
*/
bool HavokCloth_Update_GetNeedsSoundUpdate(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int flags; 
  const dvar_t *v6; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 

  v3 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1145, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1146, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1147, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v9) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1148, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v9, 1024) )
    __debugbreak();
LABEL_13:
  v4 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( instanceId >= v4->current.integer )
  {
    v6 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v7 = v6->flags;
      if ( (v7 & 0x81488) != 0 && (v7 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    LODWORD(v10) = v6->current.integer;
    LODWORD(v9) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1149, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return bitarray_base<bitarray<1024>>::testBit(&s_havokCloth_Update_Datas[v3].needsSoundUpdate, instanceId);
}

/*
==============
HavokCloth_Update_GetTargetStateId
==============
*/
__int64 HavokCloth_Update_GetTargetStateId(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v2; 
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int flags; 
  const dvar_t *v6; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 

  v2 = instanceId;
  v3 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1774, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1775, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1776, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( (unsigned int)v2 < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v9) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1777, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v9, 1024) )
    __debugbreak();
LABEL_13:
  v4 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= v4->current.integer )
  {
    v6 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v7 = v6->flags;
      if ( (v7 & 0x81488) != 0 && (v7 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    LODWORD(v10) = v6->current.integer;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1778, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return (unsigned int)s_havokCloth_Update_Datas[v3].targetStateIds[v2];
}

/*
==============
HavokCloth_Update_GetTickerCount
==============
*/
__int64 HavokCloth_Update_GetTickerCount(const unsigned int globalWorldId)
{
  __int64 v1; 

  v1 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 640, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v1 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 641, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  return s_havokCloth_Update_Datas[v1].tickerCount;
}

/*
==============
HavokCloth_Update_GlobalWorldCreated
==============
*/
void HavokCloth_Update_GlobalWorldCreated(const unsigned int globalWorldId)
{
  __int64 v1; 

  v1 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 172, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v1 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 173, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  memset_0(&s_havokCloth_Update_Datas[v1], 0, sizeof(HavokCloth_Update_Data));
}

/*
==============
HavokCloth_Update_GlobalWorldDestroyed
==============
*/
void HavokCloth_Update_GlobalWorldDestroyed(const unsigned int globalWorldId)
{
  __int64 v1; 

  v1 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 186, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v1 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 187, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  memset_0(&s_havokCloth_Update_Datas[v1], 0, sizeof(HavokCloth_Update_Data));
}

/*
==============
HavokCloth_Update_HavokClothInstance
==============
*/
void HavokCloth_Update_HavokClothInstance(const unsigned int globalWorldId, const unsigned int instanceId, hclWorld *world, hclClothInstance *clothInstance, const float timeStep)
{
  signed __int64 v5; 
  void *v6; 
  const hclClothData *m_clothData; 
  __int64 m_currentState; 
  const hclClothState *v11; 
  int v12; 
  int m_size; 
  hclClothInstance::hclStateInstanceData *m_data; 
  __int64 v15; 
  hkMemoryAllocator *v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  hkReferencedObject *v20; 
  const hclOperator *v21; 
  __int64 v22; 
  hclSimClothInstance *v23; 
  const hclSimClothData::OverridableSimulationInfo *SimulationInfo; 
  unsigned int v25; 
  int v31; 
  Cloth_OwnerType OwnerType; 
  hkMemoryAllocator *v33; 
  hkArray<hclClothInstance *,hkContainerHeapAllocator> array; 
  unsigned int globalWorldIda; 
  unsigned int instanceIda; 
  __int64 v37; 
  const hclClothData *v38; 
  hclOperatorExecutionData executionData; 
  __int64 v40; 
  char runtimeBuffer[32768]; 

  v6 = alloca(v5);
  v40 = -2i64;
  instanceIda = instanceId;
  globalWorldIda = globalWorldId;
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 824, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( !clothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 825, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  if ( clothInstance->m_update.m_bool )
  {
    m_clothData = clothInstance->m_clothData;
    v38 = m_clothData;
    if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 835, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
      __debugbreak();
    m_currentState = (int)clothInstance->m_currentState;
    v11 = m_clothData->m_clothStateDatas.m_data[m_currentState];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 842, ASSERT_TYPE_ASSERT, "(currentState)", (const char *)&queryFormat, "currentState") )
      __debugbreak();
    if ( v11->m_operators.m_size )
    {
      Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_HavokClothInstance");
      v12 = 0;
      m_size = clothInstance->m_statesInstanceData.m_size;
      if ( m_size <= 0 )
        goto LABEL_19;
      m_data = clothInstance->m_statesInstanceData.m_data;
      while ( m_data->m_stateIndex != (_DWORD)m_currentState )
      {
        ++v12;
        ++m_data;
        if ( v12 >= m_size )
          goto LABEL_19;
      }
      v20 = clothInstance->m_statesInstanceData.m_data[v12].m_data;
      if ( v20 )
        v15 = (__int64)v20[1].__vftable;
      else
LABEL_19:
        v15 = 0i64;
      v37 = v15;
      array.m_data = NULL;
      array.m_size = 0;
      array.m_capacityAndFlags = 0x80000000;
      v16 = hkMemHeapAllocator();
      hkArrayUtil::_reserveMore(v16, &array, 8);
      array.m_data[array.m_size++] = clothInstance;
      if ( hclWorld::calcStepBufferSize(world, 1, &array) >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 860, ASSERT_TYPE_ASSERT, "(bufferSize < 32*1024)", (const char *)&queryFormat, "bufferSize < CLOTH_MAX_RUNTIME_MEMORY") )
        __debugbreak();
      if ( ((unsigned __int8)runtimeBuffer & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 865, ASSERT_TYPE_ASSERT, "(((hkUlong)clothStepBuffer & 0xf) == 0)", (const char *)&queryFormat, "((hkUlong)clothStepBuffer & 0xf) == 0") )
        __debugbreak();
      world->m_buffers.m_size = 0;
      Sys_ProfBeginNamedEvent(0xFFFA8072, "PrepareTempBuffers");
      hclClothInstance::_prepareTempBuffers(clothInstance, world, runtimeBuffer);
      Sys_ProfEndNamedEvent();
      executionData.m_stateTiming = 0.0;
      executionData.m_clothInstance = clothInstance;
      executionData.m_timeStep = timeStep;
      executionData.m_world = world;
      executionData.m_runtimeBuffer = hclWorld::_getNextAvailableBuffer(world);
      executionData.m_onTheFlyNotifications.m_bool = 0;
      Sys_ProfBeginNamedEvent(0xFFFA8072, "PreExecute");
      hclClothInstance::_preExecuteCloth(clothInstance, &executionData);
      Sys_ProfEndNamedEvent();
      v17 = 0;
      if ( v11->m_operators.m_size > 0 )
      {
        v18 = 0i64;
        do
        {
          if ( v15 )
            v19 = *(_DWORD *)(v18 * 4 + *(_QWORD *)(v15 + 24));
          else
            v19 = 1;
          v21 = v38->m_operators.m_data[v11->m_operators.m_data[v18]];
          if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 893, ASSERT_TYPE_ASSERT, "(op)", (const char *)&queryFormat, "op") )
            __debugbreak();
          if ( v19 > 0 )
          {
            v22 = (unsigned int)v19;
            do
            {
              Sys_ProfBeginNamedEvent(0xFFFA8072, (const char *)((unsigned __int64)v21->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
              v21->execute((hclOperator *)v21, &executionData);
              Sys_ProfEndNamedEvent();
              --v22;
            }
            while ( v22 );
          }
          if ( v21->m_type.m_storage == 1 )
          {
            v23 = clothInstance->m_simClothInstances.m_data[SLODWORD(v21[1].__vftable)];
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 914, ASSERT_TYPE_ASSERT, "(simClothInstance)", (const char *)&queryFormat, "simClothInstance") )
              __debugbreak();
            SimulationInfo = hclSimClothInstance::getSimulationInfo(v23);
            v25 = globalWorldIda;
            if ( SimulationInfo->m_computeVelocity.m_bool )
            {
              _XMM0.m_quad = (__m128)v23->m_averageParticleVelocity;
              __asm
              {
                vdpps   xmm4, xmm0, xmm0, 7Fh
                vcmpleps xmm3, xmm4, xmm0
                vrsqrtps xmm1, xmm4
              }
              _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM4), _XMM1)), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM4);
              __asm { vandnps xmm1, xmm3, xmm0 }
              HavokCloth_AddSimulatedSpeed(globalWorldIda, instanceIda, *(float *)&_XMM1 * 32.0);
            }
            v31 = v23->m_particlePositions.m_size;
            OwnerType = Cloth_GetOwnerType(v25, instanceIda);
            Cloth_Debug_Perf_AddParticleSimulatedCount(v25, OwnerType, v19 * v31);
          }
          ++v17;
          ++v18;
          v15 = v37;
        }
        while ( v17 < v11->m_operators.m_size );
      }
      Sys_ProfBeginNamedEvent(0xFFFA8072, "PostExecute");
      hclClothInstance::_postExecuteCloth(clothInstance, &executionData);
      Sys_ProfEndNamedEvent();
      Sys_ProfEndNamedEvent();
      v33 = hkMemHeapAllocator();
      array.m_size = 0;
      if ( array.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v33, array.m_data, 8, array.m_capacityAndFlags & 0x3FFFFFFF);
    }
  }
}

/*
==============
HavokCloth_Update_HideByCollapsing
==============
*/
void HavokCloth_Update_HideByCollapsing(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale)
{
  DObj *v9; 
  const dvar_t *v11; 
  unsigned int flags; 
  const dvar_t *v13; 
  unsigned int v14; 
  int v15; 
  const bitarray<768> *Bones; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  unsigned int v22; 
  unsigned int v23; 
  char v24; 
  unsigned __int16 v25; 
  int v26; 
  const DObj *v27; 
  int v28; 
  const bitarray<768> *WrittenBones; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned __int16 v34; 
  Cloth_OwnerType OwnerType; 
  const float4 *fmt; 
  float4 *outModelTranslation; 
  float4 *outModelTranslationa; 
  __int64 v39; 
  int v41; 
  int v42; 
  DObj *obj[2]; 
  float4 outModelQuat; 
  DObjHierarchyIterator iter; 

  v9 = (DObj *)dObj;
  obj[0] = (DObj *)dObj;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_HideByCollapsing");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1522, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1523, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1524, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
    goto LABEL_11;
  }
  if ( instanceId >= 0x400 )
  {
LABEL_11:
    LODWORD(outModelTranslation) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1525, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", outModelTranslation, 1024) )
      __debugbreak();
  }
  v11 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v11->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v11->name) )
      __debugbreak();
  }
  if ( instanceId >= v11->current.integer )
  {
    v13 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v14 = v13->flags;
      if ( (v14 & 0x81488) != 0 && (v14 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v13->name) )
        __debugbreak();
    }
    LODWORD(v39) = v13->current.integer;
    LODWORD(outModelTranslation) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1526, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>( Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" ) ) )", "instanceId doesn't index static_cast<uint>( Dconst_GetInt( cloth_MaxInstances ) )\n\t%i not in [0, %i)", outModelTranslation, v39) )
      __debugbreak();
  }
  if ( !HavokCloth_IsInstanceInUse(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1527, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
    __debugbreak();
  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1528, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1529, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !requestedBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1530, ASSERT_TYPE_ASSERT, "(requestedBones)", (const char *)&queryFormat, "requestedBones") )
    __debugbreak();
  if ( !animCalcBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1531, ASSERT_TYPE_ASSERT, "(animCalcBuffer)", (const char *)&queryFormat, "animCalcBuffer") )
    __debugbreak();
  v15 = 255;
  Bones = Cloth_GetReadBones(globalWorldId, instanceId);
  v17 = DObjNumBones(v9);
  v18 = Bones->array[0];
  v19 = globalWorldId;
  LODWORD(v20) = 0;
  v42 = 0;
  v21 = v17;
  v41 = v17;
  while ( 1 )
  {
LABEL_50:
    if ( v18 )
    {
LABEL_53:
      v22 = __lzcnt(v18);
      v19 = v22 + 32 * v20;
      if ( v22 >= 0x20 )
      {
        LODWORD(v39) = 32;
        LODWORD(outModelTranslation) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", outModelTranslation, v39) )
          __debugbreak();
      }
      v23 = 0x80000000 >> v22;
      if ( (v18 & (0x80000000 >> v22)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v21 = v41;
      v18 &= ~v23;
      v9 = obj[0];
      v24 = 1;
    }
    else
    {
      while ( 1 )
      {
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= 0x18 )
          break;
        v18 = Bones->array[v20];
        if ( v18 )
          goto LABEL_53;
      }
      v24 = 0;
    }
    if ( !v24 )
      break;
    if ( v19 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v19, "unsigned", v19) )
      __debugbreak();
    v25 = v19 | 0x8000;
    if ( (unsigned __int16)v19 < v21 )
      v25 = v19;
    v26 = DObjHierarchyIterator_Begin(&iter, v9, v25);
    if ( v26 != 255 )
    {
      while ( (v26 & 0x8000) != 0 )
      {
        v26 = DObjHierarchyIterator_NextParent(&iter);
        if ( v26 == 255 )
          goto LABEL_50;
      }
      v15 = v26;
    }
  }
  if ( v15 == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1562, ASSERT_TYPE_ASSERT, "(firstNonClientBoneParent != 255)", (const char *)&queryFormat, "firstNonClientBoneParent != NO_BONEINDEX") )
    __debugbreak();
  v27 = obj[0];
  v28 = 0;
  WrittenBones = Cloth_GetWrittenBones(globalWorldId, instanceId);
  LODWORD(v30) = 0;
  v31 = WrittenBones->array[0];
  while ( v31 )
  {
LABEL_79:
    v32 = __lzcnt(v31);
    v33 = v32 + 32 * v30;
    if ( v32 >= 0x20 )
    {
      LODWORD(v39) = 32;
      LODWORD(outModelTranslation) = v32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", outModelTranslation, v39) )
        __debugbreak();
    }
    if ( (v31 & (0x80000000 >> v32)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v31 &= ~(0x80000000 >> v32);
    if ( v33 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v32 + 32 * v30), "unsigned", v33) )
      __debugbreak();
    v34 = v33 | 0x8000;
    if ( (unsigned __int16)v33 < v41 )
      v34 = v32 + 32 * v30;
    XAnimGetLocalBoneTransform(animCalcInfo, v27, animCalcBuffer, v15, &outModelQuat, (float4 *)obj);
    XAnimSetLocalBoneTransform(animCalcInfo, v27, animCalcBuffer, v34, fmt, outModelTranslationa, weightScale);
    v28 = ++v42;
  }
  while ( 1 )
  {
    v30 = (unsigned int)(v30 + 1);
    if ( (unsigned int)v30 >= 0x18 )
      break;
    v31 = WrittenBones->array[v30];
    if ( v31 )
      goto LABEL_79;
  }
  OwnerType = Cloth_GetOwnerType(globalWorldId, instanceId);
  Cloth_Debug_Perf_AddBoneWrittenCount(globalWorldId, OwnerType, v28);
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_Instance
==============
*/
void HavokCloth_Update_Instance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  unsigned __int64 v2; 
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int flags; 
  const dvar_t *v6; 
  unsigned int v7; 
  HavokCloth_Update_Data *v8; 
  float timeStep; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int TickerCount; 
  int bulletProxyUpdateRate; 
  unsigned int v14; 
  char v15; 
  unsigned int v16; 
  hclClothInstance *ClothInstance; 
  unsigned int m_currentState; 
  HavokCloth_PhysicsProxyAction *PhysicsProxyAction; 
  bool v20; 
  __int64 v21; 
  __int64 v22; 
  hclWorld *world; 
  bitarray_base<bitarray<1024> > *v24; 
  unsigned int v25; 
  unsigned int NumClothInstances; 
  const ClothAsset *ClothAsset; 

  v2 = instanceId;
  v3 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_Instance");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1020, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1021, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( (_DWORD)v2 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1022, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( (unsigned int)v2 < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v21) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v21, 1024) )
    __debugbreak();
LABEL_13:
  v4 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= v4->current.integer )
  {
    v6 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v7 = v6->flags;
      if ( (v7 & 0x81488) != 0 && (v7 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    LODWORD(v22) = v6->current.integer;
    LODWORD(v21) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1024, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1025, ASSERT_TYPE_ASSERT, "(!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  v8 = &s_havokCloth_Update_Datas[v3];
  v24 = (bitarray_base<bitarray<1024> > *)v8;
  ClothAsset = HavokCloth_GetClothAsset(v3, v2);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1032, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  timeStep = v8->timeStep;
  v10 = 0x80000000 >> (v2 & 0x1F);
  v11 = (__int64)&v8->updatedLastFrame + 4 * (v2 >> 5);
  if ( timeStep > 0.0 )
  {
    world = HavokCloth_GetGlobalClothWorld(v3);
    if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1052, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    TickerCount = Cloth_Update_GetTickerCount(v3);
    bulletProxyUpdateRate = ClothAsset->bulletProxyUpdateRate;
    v14 = TickerCount;
    if ( bulletProxyUpdateRate <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1059, ASSERT_TYPE_ASSERT, "(physicsProxyUpdateRate > 0)", (const char *)&queryFormat, "physicsProxyUpdateRate > 0") )
      __debugbreak();
    v15 = 0;
    v25 = (v14 + (unsigned int)v2) % bulletProxyUpdateRate;
    HavokCloth_ClearSimulatedSpeed(v3, v2);
    v16 = 0;
    NumClothInstances = HavokCloth_GetNumClothInstances(v3, v2);
    if ( NumClothInstances )
    {
      do
      {
        ClothInstance = HavokCloth_GetClothInstance(v3, v2, v16);
        if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1078, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
          __debugbreak();
        m_currentState = ClothInstance->m_currentState;
        PhysicsProxyAction = HavokCloth_GetPhysicsProxyAction(v3, v2, v16);
        HavokCloth_Update_HavokClothInstance(v3, v2, world, ClothInstance, timeStep);
        if ( PhysicsProxyAction )
        {
          HavokCloth_PhysicsProxyAction::FlipBuffers(PhysicsProxyAction);
          if ( !v25 )
          {
            HavokCloth_PhysicsProxyAction::UpdateShapeLocalGeo(PhysicsProxyAction);
            HavokCloth_Update_FlagForPhysicsProxyRebuild(v3, v2, 1);
          }
        }
        v20 = m_currentState != ClothAsset->animationStateIdx && PhysicsProxyAction;
        v15 |= v20;
        ++v16;
      }
      while ( v16 < NumClothInstances );
      v10 = 0x80000000 >> (v2 & 0x1F);
    }
    if ( bitarray_base<bitarray<1024>>::testBit(v24 + 4688, v2) )
      HavokCloth_Update_BlendedSpeed(v3, v2);
    if ( (v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v11) )
      __debugbreak();
    _InterlockedOr((volatile signed __int32 *)v11, v10);
    HavokCloth_Update_FlagForPhysicsProxyUpdate(v3, v2, v15);
  }
  else
  {
    if ( (v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v8->updatedLastFrame.generalUseBitArray.array[v2 >> 5]) )
      __debugbreak();
    _InterlockedOr((volatile signed __int32 *)v11, v10);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_InstanceState
==============
*/
void HavokCloth_Update_InstanceState(const unsigned int globalWorldId, const unsigned int instanceId)
{
  unsigned int v2; 
  unsigned int v3; 
  const dvar_t *v4; 
  unsigned int flags; 
  const dvar_t *v6; 
  unsigned int v7; 
  const ClothAsset *ClothAsset; 
  int TargetStateId; 
  unsigned int animationStateIdx; 
  __int64 v11; 
  unsigned int v12; 
  hclClothInstance *ClothInstance; 
  unsigned int m_currentState; 
  const hclClothData *m_clothData; 
  __int64 m_size; 
  unsigned int v17; 
  __int64 v18; 
  hclStateTransition *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int i; 
  unsigned int NumClothInstances; 

  v2 = instanceId;
  v3 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_InstanceState");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 949, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 950, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( v2 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 951, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( v2 < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v20) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 952, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v20, 1024) )
    __debugbreak();
LABEL_13:
  v4 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( v2 >= v4->current.integer )
  {
    v6 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v7 = v6->flags;
      if ( (v7 & 0x81488) != 0 && (v7 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    LODWORD(v21) = v6->current.integer;
    LODWORD(v20) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 953, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 954, ASSERT_TYPE_ASSERT, "(!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  ClothAsset = HavokCloth_GetClothAsset(v3, v2);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 958, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  TargetStateId = HavokCloth_Update_GetTargetStateId(v3, v2);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 720, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  animationStateIdx = ClothAsset->animationStateIdx;
  if ( TargetStateId >= 2 )
  {
    v11 = (unsigned int)(TargetStateId - 2);
    if ( (unsigned int)v11 >= ClothAsset->simulationLodCount )
    {
      LODWORD(v21) = ClothAsset->simulationLodCount;
      LODWORD(v20) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 730, ASSERT_TYPE_ASSERT, "(unsigned)( lodIdx ) < (unsigned)( clothAsset->simulationLodCount )", "lodIdx doesn't index clothAsset->simulationLodCount\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    animationStateIdx = ClothAsset->simulationLods[v11].stateIdx;
  }
  NumClothInstances = HavokCloth_GetNumClothInstances(v3, v2);
  v12 = 0;
  for ( i = 0; v12 < NumClothInstances; i = v12 )
  {
    ClothInstance = HavokCloth_GetClothInstance(v3, v2, v12);
    if ( !ClothInstance )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 970, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 747, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
    }
    m_currentState = ClothInstance->m_currentState;
    if ( m_currentState != animationStateIdx && ClothInstance->m_stateTransitionIndex == 0x7FFFFFFF )
    {
      m_clothData = ClothInstance->m_clothData;
      if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 766, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
        __debugbreak();
      if ( animationStateIdx >= m_clothData->m_clothStateDatas.m_size )
      {
        LODWORD(v21) = m_clothData->m_clothStateDatas.m_size;
        LODWORD(v20) = animationStateIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( targetStateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "targetStateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      m_size = m_clothData->m_stateTransitions.m_size;
      v17 = 0;
      v18 = 0i64;
      if ( m_size <= 0 )
      {
LABEL_66:
        hclClothInstance::setCurrentState(ClothInstance, animationStateIdx);
      }
      else
      {
        while ( 1 )
        {
          v19 = (hclStateTransition *)m_clothData->m_stateTransitions.m_data[v18];
          if ( hclStateTransition::getFromState(v19) == m_currentState && hclStateTransition::getToState(v19) == animationStateIdx )
            break;
          ++v17;
          if ( ++v18 >= m_size )
            goto LABEL_66;
        }
        hclClothInstance::setStateTransition(ClothInstance, v17);
      }
      v3 = globalWorldId;
      v2 = instanceId;
    }
    v12 = i + 1;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_InstanceStateTransition
==============
*/
void HavokCloth_Update_InstanceStateTransition(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int flags; 
  const dvar_t *v6; 
  unsigned int v7; 
  float timeStep; 
  unsigned int v9; 
  unsigned int NumClothInstances; 
  hclClothInstance *ClothInstance; 
  const hclClothData *m_clothData; 
  __int64 v13; 
  __int64 v14; 

  v3 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_InstanceStateTransition");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 985, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 986, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 987, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v13) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 988, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v13, 1024) )
    __debugbreak();
LABEL_13:
  v4 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( instanceId >= v4->current.integer )
  {
    v6 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v7 = v6->flags;
      if ( (v7 & 0x81488) != 0 && (v7 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    LODWORD(v14) = v6->current.integer;
    LODWORD(v13) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 989, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(v3, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 990, ASSERT_TYPE_ASSERT, "(!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  timeStep = s_havokCloth_Update_Datas[v3].timeStep;
  if ( timeStep <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 997, ASSERT_TYPE_ASSERT, "(timeStep > 0.f)", (const char *)&queryFormat, "timeStep > 0.f") )
    __debugbreak();
  v9 = 0;
  NumClothInstances = HavokCloth_GetNumClothInstances(v3, instanceId);
  if ( NumClothInstances )
  {
    do
    {
      ClothInstance = HavokCloth_GetClothInstance(v3, instanceId, v9);
      if ( !ClothInstance )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1005, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 801, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
          __debugbreak();
      }
      if ( ClothInstance->m_stateTransitionIndex != 0x7FFFFFFF )
      {
        m_clothData = ClothInstance->m_clothData;
        if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 811, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
          __debugbreak();
        hclStateTransition::step((hclStateTransition *)m_clothData->m_stateTransitions.m_data[ClothInstance->m_stateTransitionIndex], ClothInstance, timeStep);
      }
      ++v9;
    }
    while ( v9 < NumClothInstances );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_InstanceUpdatedThisFrame
==============
*/
bool HavokCloth_Update_InstanceUpdatedThisFrame(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v3; 
  const dvar_t *v4; 
  unsigned int flags; 
  const dvar_t *v6; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 

  v3 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1756, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1757, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1758, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v9) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1759, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v9, 1024) )
    __debugbreak();
LABEL_13:
  v4 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( instanceId >= v4->current.integer )
  {
    v6 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v7 = v6->flags;
      if ( (v7 & 0x81488) != 0 && (v7 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    LODWORD(v10) = v6->current.integer;
    LODWORD(v9) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1760, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return bitarray_base<bitarray<1024>>::testBit((bitarray_base<bitarray<1024> > *)&s_havokCloth_Update_Datas[v3].updatedLastFrame, instanceId);
}

/*
==============
HavokCloth_Update_PhysicsProxies
==============
*/
void HavokCloth_Update_PhysicsProxies(const unsigned int globalWorldId, __int64 a2, float a3)
{
  __int64 v3; 
  HavokCloth_Update_Data *v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int NumClothInstances; 
  unsigned int v12; 
  unsigned int v13; 
  HavokCloth_PhysicsProxyAction *PhysicsProxyAction; 
  HavokCloth_PhysicsProxyAction *v15; 
  hknpBodyId v16; 
  hknpBodyId v17; 
  hknpExternMeshShape *m_shape; 
  const hknpExternMeshShapeGeometry *m_geometry; 
  __int64 v20; 
  __int64 v21; 
  hkMemoryAllocator *v22; 
  __int64 v23; 
  hknpExternMeshShapeGeometry_vtbl *v24; 
  __int64 v25; 
  __int64 v26; 
  hkDefaultPropertyBag *m_bag; 
  hkMemoryAllocator *v28; 
  __int64 v29; 
  char *v30; 
  signed __int64 v31; 
  __int64 v32; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  int v35; 
  Physics_WorldId worldId; 
  Physics_WorldId v37; 
  unsigned int v38; 
  int v39; 
  unsigned int v41; 
  HavokCloth_Update_Data *v42; 
  hkFlags<enum hknpExternMeshShape::RebuildFlagsEnum,unsigned int> flags; 
  hkQuaternionf orientation; 
  hkVector4f position; 

  v3 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_PhysicsProxies");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1638, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v3 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1639, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  worldId = 3 * v3 + 3;
  v37 = 3 * v3 + 4;
  v4 = &s_havokCloth_Update_Datas[v3];
  v42 = v4;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Update proxies");
  v5 = v4->instancesNeedingPhysicsProxyUpdate.array[0];
  LODWORD(v6) = 0;
  v35 = 0;
  v7 = 32i64;
  while ( v5 )
  {
LABEL_12:
    v8 = __lzcnt(v5);
    v9 = v8 + 32 * v6;
    v38 = v9;
    if ( v8 >= 0x20 )
    {
      LODWORD(updateBroadphaseIfWarping) = 32;
      LODWORD(canWarp) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v8)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v5 &= ~(0x80000000 >> v8);
    v41 = v5;
    if ( !HavokCloth_IsInstanceInUse(v3, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1661, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
      __debugbreak();
    v10 = (1 << ((v8 + 32 * v6) & 0x1F)) & v4->instancesNeedingPhysicsProxyRebuild[(unsigned __int64)v9 >> 5];
    v39 = v10;
    HavokCloth_GetInstancePosition(v3, v9, &position);
    HavokCloth_GetInstanceOrientation(v3, v9, &orientation);
    NumClothInstances = HavokCloth_GetNumClothInstances(v3, v9);
    v12 = 0;
    v7 = 32i64;
    if ( NumClothInstances )
    {
      v13 = NumClothInstances;
      do
      {
        PhysicsProxyAction = HavokCloth_GetPhysicsProxyAction(v3, v9, v12);
        v15 = PhysicsProxyAction;
        if ( PhysicsProxyAction )
        {
          v16.m_serialAndIndex = PhysicsProxyAction->m_authBodyId.m_serialAndIndex;
          v17.m_serialAndIndex = PhysicsProxyAction->m_detailBodyId.m_serialAndIndex;
          if ( (v16.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1689, ASSERT_TYPE_ASSERT, "(authBodyId.isValid())", (const char *)&queryFormat, "authBodyId.isValid()") )
            __debugbreak();
          if ( (v17.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1690, ASSERT_TYPE_ASSERT, "(detailBodyId.isValid())", (const char *)&queryFormat, "detailBodyId.isValid()") )
            __debugbreak();
          HavokPhysics_KeyframeRigidBodyTo(worldId, v16, &position, &orientation, 1.0, 0, 0, 0.0);
          HavokPhysics_WarpRigidBodyTo(v37, v17, &position, &orientation, 0, 0);
          if ( v10 )
          {
            m_shape = v15->m_shape;
            if ( !m_shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1701, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
              __debugbreak();
            m_geometry = m_shape->m_geometry;
            if ( !m_geometry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1706, ASSERT_TYPE_ASSERT, "(geometry)", (const char *)&queryFormat, "geometry") )
              __debugbreak();
            EnterCriticalSection((LPCRITICAL_SECTION)&m_geometry[1]);
            hkPropertyBag::operator=(&m_geometry[5].m_propertyBag, (const hkPropertyBag *)&m_geometry[3]);
            v20 = SLODWORD(m_geometry[4].__vftable);
            v21 = *(_QWORD *)&m_geometry[3].m_memSizeAndFlags;
            v22 = hkMemHeapAllocator();
            if ( (HIDWORD(m_geometry[6].m_propertyBag.m_bag) & 0x3FFFFFFF) < (int)v20 )
              hkArrayUtil::_reserve(v22, (void *)&m_geometry[6], v20, 16);
            v23 = v20;
            v24 = m_geometry[6].__vftable;
            if ( (int)v20 > 0 )
            {
              v25 = v21 - (_QWORD)v24;
              do
              {
                *(_OWORD *)&v24->getExactType = *(_OWORD *)((char *)&v24->getExactType + v25);
                v24 = (hknpExternMeshShapeGeometry_vtbl *)((char *)v24 + 16);
                --v23;
              }
              while ( v23 );
            }
            LODWORD(m_geometry[6].m_propertyBag.m_bag) = v20;
            v26 = *(int *)&m_geometry[4].m_memSizeAndFlags;
            m_bag = m_geometry[4].m_propertyBag.m_bag;
            v28 = hkMemHeapAllocator();
            if ( (HIDWORD(m_geometry[7].__vftable) & 0x3FFFFFFF) < (int)v26 )
              hkArrayUtil::_reserve(v28, &m_geometry[6].m_memSizeAndFlags, v26, 16);
            v29 = v26;
            v30 = *(char **)&m_geometry[6].m_memSizeAndFlags;
            if ( (int)v26 > 0 )
            {
              v31 = (char *)m_bag - v30;
              do
              {
                *(_OWORD *)v30 = *(_OWORD *)&v30[v31];
                v30 += 16;
                --v29;
              }
              while ( v29 );
            }
            LODWORD(m_geometry[7].__vftable) = v26;
            LeaveCriticalSection((LPCRITICAL_SECTION)&m_geometry[1]);
            hknpExternMeshShape::rebuild(m_shape, (hkFlags<enum hknpExternMeshShape::RebuildFlagsEnum,unsigned int>)&flags, a3);
            v9 = v38;
            v10 = v39;
            LODWORD(v3) = globalWorldId;
          }
        }
        ++v12;
      }
      while ( v12 < v13 );
      LODWORD(v6) = v35;
      v5 = v41;
      v7 = 32i64;
    }
    v4 = v42;
  }
  while ( 1 )
  {
    v6 = (unsigned int)(v6 + 1);
    v35 = v6;
    if ( (unsigned int)v6 >= 0x20 )
      break;
    v5 = v4->instancesNeedingPhysicsProxyUpdate.array[v6];
    if ( v5 )
      goto LABEL_12;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Reset Proxy Rebuild Array");
  v32 = 0i64;
  do
  {
    v4->instancesNeedingPhysicsProxyRebuild[v32++] = 0;
    --v7;
  }
  while ( v7 );
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_QueueSounds
==============
*/
void HavokCloth_Update_QueueSounds(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v3; 
  const ClothAsset *ClothAsset; 
  HavokCloth_Update_Data *v5; 
  __int64 CurrentSoundIdx; 
  double BlendedSpeed; 
  ClothAssetSound *sounds; 
  ClothAssetSound *v11; 
  int v12; 
  __int64 v13; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  const char *soundAlias; 
  __int64 v20; 
  __int64 v21; 
  hkVector4f position; 

  v3 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_QueueSounds");
  ClothAsset = HavokCloth_GetClothAsset(v3, instanceId);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 365, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  v5 = &s_havokCloth_Update_Datas[v3];
  HavokCloth_GetInstancePosition(v3, instanceId, &position);
  _XMM1 = _mm128_sub_ps(v5->focusPosition.m_quad, position.m_quad);
  __asm { vdpps   xmm2, xmm1, xmm1, 7Fh }
  if ( *(float *)&_XMM2 <= ClothAsset->soundHKMaxDistanceSq )
  {
    CurrentSoundIdx = HavokCloth_GetCurrentSoundIdx(v3, instanceId);
    if ( (unsigned int)CurrentSoundIdx >= ClothAsset->soundCount )
    {
      LODWORD(v20) = CurrentSoundIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( currentSoundIdx ) < (unsigned)( clothAsset->soundCount )", "currentSoundIdx doesn't index clothAsset->soundCount\n\t%i not in [0, %i)", v20, ClothAsset->soundCount) )
        __debugbreak();
    }
    BlendedSpeed = HavokCloth_GetBlendedSpeed(v3, instanceId);
    sounds = ClothAsset->sounds;
    v11 = &sounds[CurrentSoundIdx];
    if ( *(float *)&BlendedSpeed >= v11->minSpeed )
    {
      while ( *(float *)&BlendedSpeed > v11->maxSpeed && (_DWORD)CurrentSoundIdx != ClothAsset->soundCount - 1 )
      {
        LODWORD(CurrentSoundIdx) = CurrentSoundIdx + 1;
        v11 = &sounds[(unsigned int)CurrentSoundIdx];
        if ( !v11 )
          goto LABEL_23;
      }
    }
    else
    {
      while ( *(float *)&BlendedSpeed < v11->minSpeed )
      {
        if ( (_DWORD)CurrentSoundIdx )
        {
          LODWORD(CurrentSoundIdx) = CurrentSoundIdx - 1;
          v11 = &sounds[(unsigned int)CurrentSoundIdx];
          if ( v11 )
            continue;
        }
        goto LABEL_23;
      }
    }
    v12 = Sys_InterlockedIncrement(&v5->numQueuedSounds) - 1;
    if ( v12 < 10 )
    {
      if ( (unsigned int)v12 >= 0xA )
      {
        LODWORD(v21) = 10;
        LODWORD(v20) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 443, ASSERT_TYPE_ASSERT, "(unsigned)( queuedSoundHandle ) < (unsigned)( MAX_SIMULTANEOUS_CLOTH_SOUNDS )", "queuedSoundHandle doesn't index MAX_SIMULTANEOUS_CLOTH_SOUNDS\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v13 = v12;
      v14 = I_fclamp((float)(*(float *)&BlendedSpeed - v11->minSpeed) / (float)(v11->maxSpeed - v11->minSpeed), 0.0, 1.0);
      v15 = *(float *)&v14 * v11->pitchMaxSpeed;
      v16 = (float)(1.0 - *(float *)&v14) * v11->pitchMinSpeed;
      v17 = (float)(1.0 - *(float *)&v14) * v11->volumeMinSpeed;
      v18 = *(float *)&v14 * v11->volumeMaxSpeed;
      v5->queuedSounds[v13].instanceId = instanceId;
      soundAlias = v11->soundAlias;
      v5->queuedSounds[v13].volume = v17 + v18;
      v5->queuedSounds[v13].soundAlias = soundAlias;
      v5->queuedSounds[v13].pitch = v16 + v15;
    }
    else
    {
      Sys_InterlockedDecrement(&v5->numQueuedSounds);
    }
  }
LABEL_23:
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_SetBoneTransform
==============
*/
void HavokCloth_Update_SetBoneTransform(const unsigned int globalWorldId, const unsigned int instanceId, const XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const XAnimCalcBuffer *animCalcBuffer, const unsigned __int16 boneIdx, HavokClothTransformSet *transformSet, const unsigned int transformIdx, const float4 *const viewOffset, const bool useBindPose)
{
  __int64 v11; 
  hkMatrix4Impl<float> *v12; 
  hkTransformf *v13; 
  __m128 m_quad; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  hkQTransformf qt; 
  hkQTransformf qt2; 
  hkQTransformf qt1; 

  v11 = (__int64)(int)transformIdx << 6;
  v12 = (hkMatrix4Impl<float> *)((char *)transformSet->m_transforms.m_data + v11);
  v13 = (hkTransformf *)((char *)transformSet->m_inverseTransposes.m_data + v11);
  if ( useBindPose && boneIdx )
  {
    XAnimGetLocalBoneTransform(animCalcInfo, dObj, animCalcBuffer, 0, &outModelQuat, &outModelTranslation);
    qt1.m_rotation = (hkQuaternionf)outModelQuat.v;
    qt1.m_translation = (hkVector4f)outModelTranslation.v;
    XAnimGetLocalBindposeTransform(dObj, boneIdx, &outModelQuat, &outModelTranslation);
    qt2.m_rotation = (hkQuaternionf)outModelQuat.v;
    qt2.m_translation = (hkVector4f)outModelTranslation.v;
    hkQTransformf::setMul(&qt, &qt1, &qt2);
    m_quad = qt.m_translation.m_quad;
  }
  else
  {
    XAnimGetLocalBoneTransform(animCalcInfo, dObj, animCalcBuffer, boneIdx, &outModelQuat, &outModelTranslation);
    m_quad = outModelTranslation.v;
    qt.m_rotation = (hkQuaternionf)outModelQuat.v;
  }
  qt.m_translation.m_quad = _mm128_mul_ps(_mm128_add_ps(m_quad, viewOffset->v), (__m128)_xmm);
  hkMatrix4Impl<float>::set(v12, &qt);
  hkTransformf::setInverse(v13, (const hkTransformf *)v12);
  hkMatrix4Impl<float>::transpose((hkMatrix4Impl<float> *)v13);
  v13->m_translation.m_quad = g_vectorfConstants[35];
}

/*
==============
HavokCloth_Update_SetBoneTransforms
==============
*/
void HavokCloth_Update_SetBoneTransforms(const unsigned int globalWorldId, const unsigned int instanceId, const XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const XAnimCalcBuffer *animCalcBuffer, const float4 *const viewOffset)
{
  const DObj *v8; 
  const dvar_t *v10; 
  unsigned int flags; 
  const dvar_t *v12; 
  unsigned int v13; 
  const XAnimCalcBuffer *v14; 
  const float4 *v15; 
  unsigned int v16; 
  hclClothInstance *ClothInstance; 
  const hclClothData *m_clothData; 
  __int64 m_currentState; 
  const hclStateTransition *v20; 
  __int64 m_size; 
  __int64 j; 
  __int64 v23; 
  DObj *dObja; 
  XAnimCalcBuffer *v25; 
  unsigned int i; 
  unsigned int NumClothInstances; 

  v8 = dObj;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_SetBoneTransforms");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1349, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1350, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1351, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(dObja) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1352, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", dObja, 1024) )
    __debugbreak();
LABEL_13:
  v10 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v10->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
      __debugbreak();
  }
  if ( instanceId >= v10->current.integer )
  {
    v12 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v13 = v12->flags;
      if ( (v13 & 0x81488) != 0 && (v13 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v12->name) )
        __debugbreak();
    }
    LODWORD(v25) = v12->current.integer;
    LODWORD(dObja) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1353, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", dObja, v25) )
      __debugbreak();
  }
  if ( !HavokCloth_IsInstanceInUse(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1354, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
    __debugbreak();
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1355, ASSERT_TYPE_ASSERT, "(!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1356, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1357, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  v14 = animCalcBuffer;
  if ( !animCalcBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1358, ASSERT_TYPE_ASSERT, "(animCalcBuffer)", (const char *)&queryFormat, "animCalcBuffer") )
    __debugbreak();
  v15 = viewOffset;
  if ( !viewOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1359, ASSERT_TYPE_ASSERT, "(viewOffset)", (const char *)&queryFormat, "viewOffset") )
    __debugbreak();
  NumClothInstances = HavokCloth_GetNumClothInstances(globalWorldId, instanceId);
  v16 = 0;
  for ( i = 0; v16 < NumClothInstances; i = v16 )
  {
    ClothInstance = HavokCloth_GetClothInstance(globalWorldId, instanceId, v16);
    if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1367, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
      __debugbreak();
    m_clothData = ClothInstance->m_clothData;
    if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1371, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
      __debugbreak();
    m_currentState = (int)ClothInstance->m_currentState;
    if ( (unsigned int)m_currentState >= m_clothData->m_clothStateDatas.m_size )
    {
      LODWORD(v25) = m_clothData->m_clothStateDatas.m_size;
      LODWORD(dObja) = ClothInstance->m_currentState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1375, ASSERT_TYPE_ASSERT, "(unsigned)( stateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "stateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", dObja, v25) )
        __debugbreak();
    }
    HavokCloth_Update_SetBoneTransformsForState(globalWorldId, instanceId, ClothInstance, m_clothData->m_clothStateDatas.m_data[m_currentState], animCalcInfo, v8, v14, v15);
    if ( ClothInstance->m_stateTransitionIndex != 0x7FFFFFFF )
    {
      Sys_ProfBeginNamedEvent(0xFFFA8072, "Transition State Bones");
      v20 = m_clothData->m_stateTransitions.m_data[ClothInstance->m_stateTransitionIndex];
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1388, ASSERT_TYPE_ASSERT, "(stateTransition)", (const char *)&queryFormat, "stateTransition") )
        __debugbreak();
      m_size = v20->m_stateIds.m_size;
      for ( j = 0i64; j < m_size; ++j )
      {
        v23 = (int)v20->m_stateIds.m_data[j];
        if ( (unsigned int)v23 >= m_clothData->m_clothStateDatas.m_size )
        {
          LODWORD(v25) = m_clothData->m_clothStateDatas.m_size;
          LODWORD(dObja) = v20->m_stateIds.m_data[j];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1396, ASSERT_TYPE_ASSERT, "(unsigned)( transitionStateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "transitionStateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", dObja, v25) )
            __debugbreak();
        }
        HavokCloth_Update_SetBoneTransformsForState(globalWorldId, instanceId, ClothInstance, m_clothData->m_clothStateDatas.m_data[v23], animCalcInfo, dObj, animCalcBuffer, viewOffset);
      }
      Sys_ProfEndNamedEvent();
      v15 = viewOffset;
      v14 = animCalcBuffer;
      v8 = dObj;
    }
    v16 = i + 1;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_SetBoneTransformsForState
==============
*/
void HavokCloth_Update_SetBoneTransformsForState(const unsigned int globalWorldId, const unsigned int instanceId, hclClothInstance *clothInstance, const hclClothState *const state, const XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const XAnimCalcBuffer *animCalcBuffer, const float4 *const viewOffset)
{
  unsigned int v8; 
  const hclClothState *v10; 
  hclClothInstance *v11; 
  const hclClothData *m_clothData; 
  __int64 v13; 
  hclClothState::TransformSetAccess *m_data; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  hclTransformSet **v18; 
  unsigned int v19; 
  unsigned int *v20; 
  HavokClothTransformSet *v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned __int16 v26; 
  const char *v27; 
  int v28; 
  const char *v29; 
  Cloth_OwnerType OwnerType; 
  int v31; 
  int v32; 
  int v33; 
  __int64 i; 
  int v35; 
  bool v36; 
  unsigned int v37; 
  unsigned int v38; 
  __int64 v39; 
  const hclSimClothData *v40; 
  __int64 m_transformSetIndex; 
  __int64 v42; 
  __int64 v43; 
  HavokClothTransformSet *v44; 
  __int64 v45; 
  unsigned __int16 v46; 
  const char *v47; 
  int v48; 
  const char *v49; 
  Cloth_OwnerType v50; 
  __int64 boneIdx; 
  unsigned __int16 boneIdxa; 
  HavokClothTransformSet *transformSet; 
  unsigned int transformIdx; 
  bool useBindPose; 
  __int64 v56; 
  unsigned int v57; 
  __int64 m_size; 
  __int64 v59; 
  unsigned int v60; 
  const hclClothData *v61; 

  v8 = instanceId;
  v10 = state;
  v11 = clothInstance;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_SetBoneTransformsForState");
  m_clothData = v11->m_clothData;
  v61 = m_clothData;
  if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1238, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  useBindPose = HavokCloth_GetInstanceBindPoseBased(globalWorldId, v8);
  m_size = v10->m_usedTransformSets.m_size;
  if ( m_size > 0 )
  {
    v13 = 0i64;
    v59 = 0i64;
    while ( 1 )
    {
      Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_SetBoneTransformsForTSet");
      m_data = v10->m_usedTransformSets.m_data;
      if ( *(unsigned int *)((char *)&m_data->m_transformSetIndex + v13) >= v11->m_transformSets.m_size )
      {
        LODWORD(transformSet) = v11->m_transformSets.m_size;
        LODWORD(boneIdx) = *(unsigned int *)((char *)&m_data->m_transformSetIndex + v13);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1253, ASSERT_TYPE_ASSERT, "(unsigned)( usedTransformSet->m_transformSetIndex ) < (unsigned)( clothInstance->m_transformSets.getSize() )", "usedTransformSet->m_transformSetIndex doesn't index clothInstance->m_transformSets.getSize()\n\t%i not in [0, %i)", boneIdx, transformSet) )
          __debugbreak();
      }
      v15 = *(__int64 *)((char *)&m_data->m_transformSetUsage.m_perComponentTransformTrackers.m_data + v13);
      v16 = 0;
      v17 = *(int *)((char *)&m_data->m_transformSetIndex + v13);
      LODWORD(m_data) = 0;
      v18 = v11->m_transformSets.m_data;
      v56 = v15;
      v19 = *(_DWORD *)(v15 + 8);
      v20 = *(unsigned int **)v15;
      v21 = (HavokClothTransformSet *)v18[v17];
      if ( v19 )
        v16 = *v20;
      v22 = globalWorldId;
      while ( v16 )
      {
LABEL_15:
        v23 = __lzcnt(v16);
        if ( v23 >= 0x20 )
        {
          LODWORD(transformSet) = 32;
          LODWORD(boneIdx) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", boneIdx, transformSet) )
            __debugbreak();
        }
        if ( ((0x80000000 >> v23) & v16) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v16 &= ~(0x80000000 >> v23);
        v24 = ((_DWORD)m_data << 6) - (v23 + 32 * (_DWORD)m_data);
        v25 = v24 + 31;
        if ( v24 + 31 >= v21->m_boneIndices.m_size )
        {
          LODWORD(transformSet) = v21->m_boneIndices.m_size;
          LODWORD(boneIdx) = v24 + 31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1270, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetTransformIdx ) < (unsigned)( transformSet->m_boneIndices.getSize() )", "transformSetTransformIdx doesn't index transformSet->m_boneIndices.getSize()\n\t%i not in [0, %i)", boneIdx, transformSet) )
            __debugbreak();
        }
        v26 = v21->m_boneIndices.m_data[v24 + 31];
        if ( v26 == 255 )
        {
          v27 = "boneIdx != NO_BONEINDEX";
          v28 = 1274;
          v29 = "(boneIdx != 255)";
        }
        else
        {
          if ( v26 != 254 )
            goto LABEL_30;
          v27 = "boneIdx != UNDEFINED_BONEINDEX";
          v28 = 1275;
          v29 = "(boneIdx != 254)";
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", v28, ASSERT_TYPE_ASSERT, v29, (const char *)&queryFormat, v27) )
          __debugbreak();
LABEL_30:
        transformIdx = v25;
        v8 = instanceId;
        boneIdxa = v26;
        v22 = globalWorldId;
        HavokCloth_Update_SetBoneTransform(globalWorldId, instanceId, animCalcInfo, dObj, animCalcBuffer, boneIdxa, v21, transformIdx, viewOffset, useBindPose);
      }
      while ( 1 )
      {
        m_data = (hclClothState::TransformSetAccess *)(unsigned int)((_DWORD)m_data + 1);
        if ( (unsigned int)m_data >= v19 )
          break;
        v16 = v20[(_QWORD)m_data];
        if ( v16 )
          goto LABEL_15;
      }
      OwnerType = Cloth_GetOwnerType(v22, v8);
      v31 = 0;
      v32 = (2 * ~(-1 << ((*(_DWORD *)(v56 + 16) - 1) & 0x1F))) | 1;
      v33 = *(_DWORD *)(v56 + 8) - 1;
      for ( i = v33; i >= 0; --i )
      {
        v35 = v32 & *(_DWORD *)(*(_QWORD *)v56 + 4 * i);
        v32 = -1;
        v31 += __popcnt(v35);
      }
      Cloth_Debug_Perf_AddBoneReadCount(v22, OwnerType, v31);
      Sys_ProfEndNamedEvent();
      v11 = clothInstance;
      v13 = v59 + 32;
      v36 = m_size-- == 1;
      v10 = state;
      v59 += 32i64;
      if ( v36 )
      {
        m_clothData = v61;
        break;
      }
    }
  }
  v37 = v10->m_usedSimCloths.m_size;
  v38 = 0;
  v60 = v37;
  v57 = 0;
  while ( v38 < v37 )
  {
    v39 = (int)v10->m_usedSimCloths.m_data[v38];
    if ( (unsigned int)v39 >= m_clothData->m_simClothDatas.m_size )
    {
      LODWORD(transformSet) = m_clothData->m_simClothDatas.m_size;
      LODWORD(boneIdx) = v39;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1293, ASSERT_TYPE_ASSERT, "(unsigned)( simClothIdx ) < (unsigned)( clothData->m_simClothDatas.getSize() )", "simClothIdx doesn't index clothData->m_simClothDatas.getSize()\n\t%i not in [0, %i)", boneIdx, transformSet) )
        __debugbreak();
    }
    v40 = m_clothData->m_simClothDatas.m_data[v39];
    if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1297, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
      __debugbreak();
    m_transformSetIndex = v40->m_collidableTransformMap.m_transformSetIndex;
    if ( (int)m_transformSetIndex >= 0 )
    {
      Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_SetBoneTransformsForSimCloth");
      if ( (unsigned int)m_transformSetIndex >= v11->m_transformSets.m_size )
      {
        LODWORD(transformSet) = v11->m_transformSets.m_size;
        LODWORD(boneIdx) = m_transformSetIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1312, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetIndex ) < (unsigned)( clothInstance->m_transformSets.getSize() )", "transformSetIndex doesn't index clothInstance->m_transformSets.getSize()\n\t%i not in [0, %i)", boneIdx, transformSet) )
          __debugbreak();
      }
      v42 = 0i64;
      v43 = v40->m_collidableTransformMap.m_transformIndices.m_size;
      v44 = (HavokClothTransformSet *)v11->m_transformSets.m_data[m_transformSetIndex];
      if ( (int)v43 > 0 )
      {
        while ( 1 )
        {
          v45 = (int)v40->m_collidableTransformMap.m_transformIndices.m_data[v42];
          if ( (unsigned int)v45 >= v44->m_boneIndices.m_size )
          {
            LODWORD(transformSet) = v44->m_boneIndices.m_size;
            LODWORD(boneIdx) = v40->m_collidableTransformMap.m_transformIndices.m_data[v42];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1321, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( transformSet->m_boneIndices.getSize() )", "transformIdx doesn't index transformSet->m_boneIndices.getSize()\n\t%i not in [0, %i)", boneIdx, transformSet) )
              __debugbreak();
          }
          if ( (unsigned int)v45 >= v44->m_transforms.m_size )
          {
            LODWORD(transformSet) = v44->m_transforms.m_size;
            LODWORD(boneIdx) = v45;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1322, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( transformSet->m_transforms.getSize() )", "transformIdx doesn't index transformSet->m_transforms.getSize()\n\t%i not in [0, %i)", boneIdx, transformSet) )
              __debugbreak();
          }
          if ( (unsigned int)v45 >= v44->m_inverseTransposes.m_size )
          {
            LODWORD(transformSet) = v44->m_inverseTransposes.m_size;
            LODWORD(boneIdx) = v45;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1323, ASSERT_TYPE_ASSERT, "(unsigned)( transformIdx ) < (unsigned)( transformSet->m_inverseTransposes.getSize() )", "transformIdx doesn't index transformSet->m_inverseTransposes.getSize()\n\t%i not in [0, %i)", boneIdx, transformSet) )
              __debugbreak();
          }
          v46 = v44->m_boneIndices.m_data[v45];
          if ( v46 == 255 )
            break;
          if ( v46 == 254 )
          {
            v47 = "boneIdx != UNDEFINED_BONEINDEX";
            v48 = 1328;
            v49 = "(boneIdx != 254)";
LABEL_60:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", v48, ASSERT_TYPE_ASSERT, v49, (const char *)&queryFormat, v47) )
              __debugbreak();
          }
          HavokCloth_Update_SetBoneTransform(globalWorldId, instanceId, animCalcInfo, dObj, animCalcBuffer, v46, v44, v45, viewOffset, useBindPose);
          if ( ++v42 >= v43 )
          {
            v38 = v57;
            v37 = v60;
            goto LABEL_64;
          }
        }
        v47 = "boneIdx != NO_BONEINDEX";
        v48 = 1327;
        v49 = "(boneIdx != 255)";
        goto LABEL_60;
      }
LABEL_64:
      v50 = Cloth_GetOwnerType(globalWorldId, instanceId);
      Cloth_Debug_Perf_AddBoneReadCount(globalWorldId, v50, v43);
      Sys_ProfEndNamedEvent();
    }
    v11 = clothInstance;
    v10 = state;
    m_clothData = v61;
    v57 = ++v38;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
HavokCloth_Update_SetInstanceAnimated
==============
*/
void HavokCloth_Update_SetInstanceAnimated(const unsigned int globalWorldId, const unsigned int instanceId)
{
  const dvar_t *v4; 
  unsigned int flags; 
  const dvar_t *v6; 
  unsigned int v7; 
  const ClothAsset *ClothAsset; 
  unsigned int animationStateIdx; 
  unsigned int v10; 
  unsigned int NumClothInstances; 
  hclClothInstance *ClothInstance; 
  __int64 v13; 
  __int64 v14; 

  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 215, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 216, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 217, ASSERT_TYPE_ASSERT, "(instanceId != HAVOKCLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != HAVOKCLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v13) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 218, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v13, 1024) )
    __debugbreak();
LABEL_13:
  v4 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( instanceId >= v4->current.integer )
  {
    v6 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v7 = v6->flags;
      if ( (v7 & 0x81488) != 0 && (v7 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
        __debugbreak();
    }
    LODWORD(v14) = v6->current.integer;
    LODWORD(v13) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 219, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( !HavokCloth_IsInstanceInUse(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 220, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
    __debugbreak();
  ClothAsset = HavokCloth_GetClothAsset(globalWorldId, instanceId);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 224, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  animationStateIdx = ClothAsset->animationStateIdx;
  v10 = 0;
  NumClothInstances = HavokCloth_GetNumClothInstances(globalWorldId, instanceId);
  if ( NumClothInstances )
  {
    do
    {
      ClothInstance = HavokCloth_GetClothInstance(globalWorldId, instanceId, v10);
      if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 235, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
        __debugbreak();
      if ( ClothInstance->m_currentState != animationStateIdx )
        hclClothInstance::setCurrentState(ClothInstance, animationStateIdx);
      ++v10;
    }
    while ( v10 < NumClothInstances );
  }
}

/*
==============
HavokCloth_Update_SetInstanceTransform
==============
*/
void HavokCloth_Update_SetInstanceTransform(const unsigned int globalWorldId, const unsigned int instanceId, const hkVector4f *origin, const hkQuaternionf *orientation)
{
  const dvar_t *v8; 
  unsigned int flags; 
  const dvar_t *v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 200, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 201, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 202, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v12) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v12, 1024) )
    __debugbreak();
LABEL_13:
  v8 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v8->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v8->name) )
      __debugbreak();
  }
  if ( instanceId >= v8->current.integer )
  {
    v10 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v11 = v10->flags;
      if ( (v11 & 0x81488) != 0 && (v11 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
        __debugbreak();
    }
    LODWORD(v13) = v10->current.integer;
    LODWORD(v12) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  HavokCloth_SetInstancePosition(globalWorldId, instanceId, origin);
  HavokCloth_SetInstanceOrientation(globalWorldId, instanceId, orientation);
}

/*
==============
HavokCloth_Update_SetNeedsSoundUpdate
==============
*/
void HavokCloth_Update_SetNeedsSoundUpdate(const unsigned int globalWorldId, const unsigned int instanceId, bool needsUpdate)
{
  __int64 v4; 
  const dvar_t *v6; 
  unsigned int flags; 
  const dvar_t *v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = globalWorldId;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1128, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v4 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1129, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1130, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( instanceId < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v10) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1131, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v10, 1024) )
    __debugbreak();
LABEL_13:
  v6 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v6->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
      __debugbreak();
  }
  if ( instanceId >= v6->current.integer )
  {
    v8 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v9 = v8->flags;
      if ( (v9 & 0x81488) != 0 && (v9 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v8->name) )
        __debugbreak();
    }
    LODWORD(v11) = v8->current.integer;
    LODWORD(v10) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1132, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  bitarray_base<bitarray<1024>>::setBitTo(&s_havokCloth_Update_Datas[v4].needsSoundUpdate, instanceId, needsUpdate);
}

/*
==============
HavokCloth_Update_UpdateInactiveInstances
==============
*/
void HavokCloth_Update_UpdateInactiveInstances(const unsigned int globalWorldId)
{
  __int64 v1; 
  HavokCloth_Update_Data *v2; 
  int *v3; 
  HavokCloth_Update_Data *v12; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  volatile int v26; 
  volatile int v27; 
  volatile int v28; 
  volatile int v29; 
  volatile int v30; 
  volatile int v31; 
  volatile int v32; 
  volatile int v33; 
  volatile int v34; 
  volatile int v35; 
  volatile int v36; 
  volatile int v37; 
  volatile int v38; 
  volatile int v39; 
  volatile int v40; 
  volatile int v41; 
  volatile int v42; 
  volatile int v43; 
  volatile int v44; 
  volatile int v45; 
  volatile int v46; 
  volatile int v47; 
  volatile int v48; 
  volatile int v49; 
  volatile int v50; 
  volatile int v51; 
  volatile int v52; 
  volatile int v53; 
  volatile int v54; 
  volatile int v55; 
  volatile int v56; 
  volatile int v57; 
  int v58[32]; 
  int v59[32]; 

  v1 = 2i64;
  v2 = &s_havokCloth_Update_Datas[globalWorldId];
  v26 = v2->updatedLastFrame.threadSafeBitArray[0];
  v27 = v2->updatedLastFrame.threadSafeBitArray[1];
  v28 = v2->updatedLastFrame.threadSafeBitArray[2];
  v29 = v2->updatedLastFrame.threadSafeBitArray[3];
  v30 = v2->updatedLastFrame.threadSafeBitArray[4];
  v31 = v2->updatedLastFrame.threadSafeBitArray[5];
  v32 = v2->updatedLastFrame.threadSafeBitArray[6];
  v33 = v2->updatedLastFrame.threadSafeBitArray[7];
  v34 = v2->updatedLastFrame.threadSafeBitArray[8];
  v35 = v2->updatedLastFrame.threadSafeBitArray[9];
  v36 = v2->updatedLastFrame.threadSafeBitArray[10];
  v37 = v2->updatedLastFrame.threadSafeBitArray[11];
  v38 = v2->updatedLastFrame.threadSafeBitArray[12];
  v39 = v2->updatedLastFrame.threadSafeBitArray[13];
  v40 = v2->updatedLastFrame.threadSafeBitArray[14];
  v41 = v2->updatedLastFrame.threadSafeBitArray[15];
  v42 = v2->updatedLastFrame.threadSafeBitArray[16];
  v43 = v2->updatedLastFrame.threadSafeBitArray[17];
  v44 = v2->updatedLastFrame.threadSafeBitArray[18];
  v45 = v2->updatedLastFrame.threadSafeBitArray[19];
  v46 = v2->updatedLastFrame.threadSafeBitArray[20];
  v47 = v2->updatedLastFrame.threadSafeBitArray[21];
  v48 = v2->updatedLastFrame.threadSafeBitArray[22];
  v49 = v2->updatedLastFrame.threadSafeBitArray[23];
  v50 = v2->updatedLastFrame.threadSafeBitArray[24];
  v51 = v2->updatedLastFrame.threadSafeBitArray[25];
  v52 = v2->updatedLastFrame.threadSafeBitArray[26];
  v53 = v2->updatedLastFrame.threadSafeBitArray[27];
  v54 = v2->updatedLastFrame.threadSafeBitArray[28];
  v55 = v2->updatedLastFrame.threadSafeBitArray[29];
  v56 = v2->updatedLastFrame.threadSafeBitArray[30];
  v57 = v2->updatedLastFrame.threadSafeBitArray[31];
  v3 = (int *)&v34;
  do
  {
    _XMM0 = *((_OWORD *)v3 - 2);
    v3 += 16;
    __asm { vpandn  xmm1, xmm0, xmm2 }
    *((_OWORD *)v3 - 6) = _XMM1;
    _XMM0 = *((_OWORD *)v3 - 5);
    __asm { vpandn  xmm1, xmm0, xmm2 }
    *((_OWORD *)v3 - 5) = _XMM1;
    _XMM0 = *((_OWORD *)v3 - 4);
    __asm { vpandn  xmm1, xmm0, xmm2 }
    *((_OWORD *)v3 - 4) = _XMM1;
    _XMM0 = *((_OWORD *)v3 - 3);
    __asm { vpandn  xmm1, xmm0, xmm2 }
    *((_OWORD *)v3 - 3) = _XMM1;
    --v1;
  }
  while ( v1 );
  v58[0] = v26 & v2->updatedLastLastFrame.array[0];
  v58[1] = v27 & v2->updatedLastLastFrame.array[1];
  v58[2] = v28 & v2->updatedLastLastFrame.array[2];
  v58[3] = v29 & v2->updatedLastLastFrame.array[3];
  v58[4] = v30 & v2->updatedLastLastFrame.array[4];
  v58[5] = v31 & v2->updatedLastLastFrame.array[5];
  v58[6] = v32 & v2->updatedLastLastFrame.array[6];
  v58[7] = v33 & v2->updatedLastLastFrame.array[7];
  v58[8] = v34 & v2->updatedLastLastFrame.array[8];
  v58[9] = v35 & v2->updatedLastLastFrame.array[9];
  v58[10] = v36 & v2->updatedLastLastFrame.array[10];
  v58[11] = v37 & v2->updatedLastLastFrame.array[11];
  v58[12] = v38 & v2->updatedLastLastFrame.array[12];
  v58[13] = v39 & v2->updatedLastLastFrame.array[13];
  v58[14] = v40 & v2->updatedLastLastFrame.array[14];
  v58[15] = v41 & v2->updatedLastLastFrame.array[15];
  v58[16] = v42 & v2->updatedLastLastFrame.array[16];
  v58[17] = v43 & v2->updatedLastLastFrame.array[17];
  v58[18] = v44 & v2->updatedLastLastFrame.array[18];
  v58[19] = v45 & v2->updatedLastLastFrame.array[19];
  v58[20] = v46 & v2->updatedLastLastFrame.array[20];
  v58[21] = v47 & v2->updatedLastLastFrame.array[21];
  v58[22] = v48 & v2->updatedLastLastFrame.array[22];
  v58[23] = v49 & v2->updatedLastLastFrame.array[23];
  v58[24] = v50 & v2->updatedLastLastFrame.array[24];
  v58[25] = v51 & v2->updatedLastLastFrame.array[25];
  v58[26] = v52 & v2->updatedLastLastFrame.array[26];
  v58[27] = v53 & v2->updatedLastLastFrame.array[27];
  v58[28] = v54 & v2->updatedLastLastFrame.array[28];
  v58[29] = v55 & v2->updatedLastLastFrame.array[29];
  v58[30] = v56 & v2->updatedLastLastFrame.array[30];
  v58[31] = v57 & v2->updatedLastLastFrame.array[31];
  v59[0] = v26 & v2->needsSoundUpdate.array[0];
  v59[1] = v27 & v2->needsSoundUpdate.array[1];
  v59[2] = v28 & v2->needsSoundUpdate.array[2];
  v59[3] = v29 & v2->needsSoundUpdate.array[3];
  v59[4] = v30 & v2->needsSoundUpdate.array[4];
  v59[5] = v31 & v2->needsSoundUpdate.array[5];
  v59[6] = v32 & v2->needsSoundUpdate.array[6];
  v59[7] = v33 & v2->needsSoundUpdate.array[7];
  v59[8] = v34 & v2->needsSoundUpdate.array[8];
  v59[9] = v35 & v2->needsSoundUpdate.array[9];
  v59[10] = v36 & v2->needsSoundUpdate.array[10];
  v59[11] = v37 & v2->needsSoundUpdate.array[11];
  v59[12] = v38 & v2->needsSoundUpdate.array[12];
  v59[13] = v39 & v2->needsSoundUpdate.array[13];
  v59[14] = v40 & v2->needsSoundUpdate.array[14];
  v59[15] = v41 & v2->needsSoundUpdate.array[15];
  v59[16] = v42 & v2->needsSoundUpdate.array[16];
  v12 = v2;
  v59[17] = v43 & v2->needsSoundUpdate.array[17];
  v59[18] = v44 & v2->needsSoundUpdate.array[18];
  v59[19] = v45 & v2->needsSoundUpdate.array[19];
  v59[20] = v46 & v2->needsSoundUpdate.array[20];
  v59[21] = v47 & v2->needsSoundUpdate.array[21];
  v59[22] = v48 & v2->needsSoundUpdate.array[22];
  v59[23] = v49 & v2->needsSoundUpdate.array[23];
  v59[24] = v50 & v2->needsSoundUpdate.array[24];
  v59[25] = v51 & v2->needsSoundUpdate.array[25];
  v59[26] = v52 & v2->needsSoundUpdate.array[26];
  v59[27] = v53 & v2->needsSoundUpdate.array[27];
  v59[28] = v54 & v2->needsSoundUpdate.array[28];
  v59[29] = v55 & v2->needsSoundUpdate.array[29];
  v59[30] = v56 & v2->needsSoundUpdate.array[30];
  v59[31] = v57 & v2->needsSoundUpdate.array[31];
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Just Disabled Cloth to Animated State");
  v13 = v58[0];
  v14 = globalWorldId;
  LODWORD(v15) = 0;
  while ( v13 )
  {
LABEL_7:
    v16 = __lzcnt(v13);
    v17 = v16 + 32 * (_DWORD)v15;
    if ( v16 >= 0x20 )
    {
      LODWORD(v24) = 32;
      LODWORD(v23) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    v18 = 0x80000000 >> v16;
    if ( (v13 & (0x80000000 >> v16)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v14 = globalWorldId;
    v13 &= ~v18;
    if ( !HavokCloth_IsInstanceInUse(globalWorldId, v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 553, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
      __debugbreak();
    if ( v12->targetStateIds[v17] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 554, ASSERT_TYPE_ASSERT, "(updateData->targetStateIds[instanceId] == HAVOK_CLOTH_UPDATE_STATEID_NOT_UPDATED)", (const char *)&queryFormat, "updateData->targetStateIds[instanceId] == HAVOK_CLOTH_UPDATE_STATEID_NOT_UPDATED") )
        __debugbreak();
    }
    HavokCloth_Update_SetInstanceAnimated(globalWorldId, v17);
  }
  while ( 1 )
  {
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= 0x20 )
      break;
    v13 = v58[v15];
    if ( v13 )
      goto LABEL_7;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Disabled Cloth Sounds");
  LODWORD(v19) = 0;
  v20 = v59[0];
  while ( v20 )
  {
LABEL_24:
    v21 = __lzcnt(v20);
    v22 = v21 + 32 * (_DWORD)v19;
    if ( v21 >= 0x20 )
    {
      LODWORD(v24) = 32;
      LODWORD(v23) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( (v20 & (0x80000000 >> v21)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v20 &= ~(0x80000000 >> v21);
    if ( !HavokCloth_IsInstanceInUse(v14, v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 569, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
      __debugbreak();
    if ( v12->targetStateIds[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 570, ASSERT_TYPE_ASSERT, "(updateData->targetStateIds[instanceId] == HAVOK_CLOTH_UPDATE_STATEID_NOT_UPDATED)", (const char *)&queryFormat, "updateData->targetStateIds[instanceId] == HAVOK_CLOTH_UPDATE_STATEID_NOT_UPDATED") )
      __debugbreak();
    HavokCloth_Update_BlendedSpeed(v14, v22);
  }
  while ( 1 )
  {
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= 0x20 )
      break;
    v20 = v59[v19];
    if ( v20 )
      goto LABEL_24;
  }
  Sys_ProfEndNamedEvent();
}

