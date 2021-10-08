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
  __int64 v7; 
  char v10; 
  char v18; 
  float speed; 

  __asm { vmovaps [rsp+68h+var_38], xmm8 }
  v7 = globalWorldId;
  _RSI = HavokCloth_GetClothAsset(globalWorldId, instanceId);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 475, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  _RAX = s_havokCloth_Update_Datas;
  _RCX = 5072 * v7;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm8, dword ptr [rcx+rax+1234h]
    vcomiss xmm8, xmm0
  }
  if ( !(((unsigned __int128)(5072 * (__int128)v7) >> 64 != 0) | v10) )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovaps [rsp+68h+var_28], xmm7
      vmovss  [rsp+68h+speed], xmm0
    }
    if ( HavokCloth_GetSimulatedSpeed(v7, instanceId, &speed) )
      __asm { vmovss  xmm7, [rsp+68h+speed] }
    else
      __asm { vmovss  xmm7, dword ptr [rsi+5Ch] }
    __asm { vmovss  xmm6, dword ptr [rsi+60h] }
    *(double *)&_XMM0 = HavokCloth_GetBlendedSpeed(v7, instanceId);
    __asm
    {
      vcomiss xmm0, xmm7
      vmulss  xmm1, xmm8, xmm6
      vmovaps xmm6, [rsp+68h+var_18]
    }
    if ( v18 )
    {
      __asm
      {
        vaddss  xmm0, xmm1, xmm0
        vminss  xmm2, xmm0, xmm7; speed
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm0, xmm1
        vmaxss  xmm2, xmm0, xmm7
      }
    }
    HavokCloth_SetBlendedSpeed(v7, instanceId, *(float *)&_XMM2);
    __asm { vmovaps xmm7, [rsp+68h+var_28] }
    if ( _RSI->soundCount )
      HavokCloth_Update_QueueSounds(v7, instanceId);
  }
  __asm { vmovaps xmm8, [rsp+68h+var_38] }
}

/*
==============
HavokCloth_Update_CalculateTargetStates
==============
*/
void HavokCloth_Update_CalculateTargetStates(const unsigned int globalWorldId)
{
  unsigned int Int_Internal_DebugName; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  const ClothAsset *ClothAsset; 
  unsigned int simulationLodCount; 
  ClothAssetSimulationLOD *simulationLods; 
  const dvar_t *v13; 
  unsigned int flags; 
  __int64 v17; 
  bool v18; 
  bool v20; 
  __int64 v23; 
  __int64 v24; 
  hkVector4f position; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  _R13 = &s_havokCloth_Update_Datas[globalWorldId];
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cloth_MaxInstances, "cloth_MaxInstances");
  memset_0(_R13->targetStateIds, 0, 4i64 * Int_Internal_DebugName);
  v5 = _R13->updatedLastFrame.generalUseBitArray.array[0];
  LODWORD(v6) = 0;
  while ( v5 )
  {
LABEL_5:
    v7 = __lzcnt(v5);
    v8 = v7 + 32 * (_DWORD)v6;
    if ( v7 >= 0x20 )
    {
      LODWORD(v24) = 32;
      LODWORD(v23) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v5 &= ~(0x80000000 >> v7);
    if ( !HavokCloth_IsInstanceInUse(globalWorldId, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 310, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
      __debugbreak();
    ClothAsset = HavokCloth_GetClothAsset(globalWorldId, v8);
    if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 314, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
      __debugbreak();
    simulationLodCount = ClothAsset->simulationLodCount;
    simulationLods = ClothAsset->simulationLods;
    HavokCloth_GetInstancePosition(globalWorldId, v8, &position);
    __asm { vmovups xmm0, xmmword ptr [r13+1240h] }
    v13 = DCONST_DVARINT_cloth_LODOverride;
    __asm
    {
      vsubps  xmm1, xmm0, xmmword ptr [rsp+98h+position.m_quad]
      vdpps   xmm6, xmm1, xmm1, 7Fh
    }
    if ( !DCONST_DVARINT_cloth_LODOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_LODOverride") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v13->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v13->name) )
        __debugbreak();
    }
    LODWORD(v17) = v13->current.integer;
    if ( (int)v17 < 0 )
    {
      v17 = 0i64;
      v18 = simulationLodCount < 4;
      if ( simulationLodCount < 4 )
      {
LABEL_31:
        v20 = (unsigned int)v17 < simulationLodCount;
        if ( (unsigned int)v17 >= simulationLodCount )
          goto LABEL_36;
        _RAX = (__int64)&simulationLods[v17].hkMaxDistanceSq;
        do
        {
          __asm { vcomiss xmm6, dword ptr [rax] }
          if ( v20 )
            break;
          _RAX += 24i64;
          LODWORD(v17) = v17 + 1;
          v20 = (unsigned int)v17 < simulationLodCount;
        }
        while ( (unsigned int)v17 < simulationLodCount );
      }
      else
      {
        _RCX = &simulationLods->hkMaxDistanceSq;
        while ( 1 )
        {
          __asm { vcomiss xmm6, dword ptr [rcx] }
          if ( v18 )
            break;
          __asm
          {
            vcomiss xmm6, dword ptr [rcx+18h]
            vcomiss xmm6, dword ptr [rcx+30h]
            vcomiss xmm6, dword ptr [rcx+48h]
          }
          _RCX += 24;
          v17 = (unsigned int)(v17 + 4);
          v18 = (unsigned int)v17 < simulationLodCount - 3;
          if ( (unsigned int)v17 >= simulationLodCount - 3 )
            goto LABEL_31;
        }
      }
    }
    if ( (unsigned int)v17 < simulationLodCount )
      _R13->targetStateIds[v8] = v17 + 2;
    else
LABEL_36:
      _R13->targetStateIds[v8] = HAVOK_CLOTH_UPDATE_STATEID_ANIMATED;
  }
  while ( 1 )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0x20 )
      break;
    v5 = _R13->updatedLastFrame.generalUseBitArray.array[v6];
    if ( v5 )
      goto LABEL_5;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
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

void __fastcall HavokCloth_Update_FrameFlip(const unsigned int globalWorldId, double timeStep, const hkVector4f *focusPosition)
{
  unsigned __int64 v7; 
  unsigned __int64 v10; 
  hclWorld *GlobalClothWorld; 
  HavokCloth_Update_Data *v13; 
  HavokCloth_Update_Data *v16; 
  volatile int v17; 
  unsigned int v19; 
  const SndAliasList *Alias; 
  unsigned __int64 ClothSndEntHandle; 
  vec3_t position; 
  char v46; 

  __asm { vmovaps [rsp+0B8h+var_58], xmm8 }
  v7 = globalWorldId;
  _RBP = focusPosition;
  __asm { vmovaps xmm8, xmm1 }
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_Update_FrameFlip");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 657, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v7 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 658, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  v10 = v7;
  _RDI = &s_havokCloth_Update_Datas[v7];
  GlobalClothWorld = HavokCloth_GetGlobalClothWorld(v7);
  if ( !GlobalClothWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 272, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  v13 = s_havokCloth_Update_Datas;
  if ( s_havokCloth_Update_Datas[v10].worldActive )
  {
    __asm { vxorps  xmm2, xmm2, xmm2; p1 }
    hkSignal2<hclWorld *,float>::fire(&GlobalClothWorld->m_signals.m_postStep, GlobalClothWorld, *(float *)&_XMM2);
  }
  __asm { vxorps  xmm2, xmm2, xmm2; p1 }
  hkSignal2<hclWorld *,float>::fire(&GlobalClothWorld->m_signals.m_preStep, GlobalClothWorld, *(float *)&_XMM2);
  v13[v10].worldActive = 1;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups xmmword ptr [rdi+1240h], xmm0
  }
  HavokCloth_Update_CalculateTargetStates(v7);
  HavokCloth_Update_UpdateInactiveInstances(v7);
  v16 = s_havokCloth_Update_Datas;
  v17 = 0;
  if ( s_havokCloth_Update_Datas[v10].numQueuedSounds > 0 )
  {
    __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
    _RBX = &s_havokCloth_Update_Datas[v10].queuedSounds[0].soundAlias;
    __asm { vmovaps [rsp+0B8h+var_48], xmm7 }
    do
    {
      v19 = *((_DWORD *)_RBX - 2);
      if ( v19 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 598, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
        __debugbreak();
      if ( Cloth_IsInstanceInUse(v7, v19) )
      {
        if ( !*_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 605, ASSERT_TYPE_ASSERT, "(queuedSound->soundAlias)", (const char *)&queryFormat, "queuedSound->soundAlias") )
          __debugbreak();
        Alias = SND_FindAlias(*_RBX);
        if ( Alias )
        {
          __asm
          {
            vmovss  xmm7, dword ptr [rbx+8]
            vmovss  xmm6, dword ptr [rbx+0Ch]
          }
          Cloth_GetInstancePosition(v7, *((_DWORD *)_RBX - 2), &position);
          ClothSndEntHandle = CG_GenerateClothSndEntHandle((const LocalClientNum_t)v7, v19);
          __asm
          {
            vmovaps xmm3, xmm6; pitch
            vmovaps xmm2, xmm7; volumeScale
          }
          SND_PlayScaledSoundAlias(Alias, ClothSndEntHandle, *(const float *)&_XMM2, *(const float *)&_XMM3, &position, 0, SASYS_CGAME);
        }
      }
      ++v17;
      _RBX += 3;
    }
    while ( v17 < v16[v10].numQueuedSounds );
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
  }
  HavokCloth_Debug_Sound_SetCache(v7, v16[v10].queuedSounds, v16[v10].numQueuedSounds);
  v16[v10].numQueuedSounds = 0;
  bitarray_base<bitarray<1024>>::copyBitArray(&_RDI->updatedLastLastFrame, (const bitarray_base<bitarray<1024> > *)&_RDI->updatedLastFrame);
  *(_QWORD *)_RDI->updatedLastFrame.generalUseBitArray.array = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[2] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[4] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[6] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[8] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[10] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[12] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[14] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[16] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[18] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[20] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[22] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[24] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[26] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[28] = 0i64;
  *(_QWORD *)&_RDI->updatedLastFrame.threadSafeBitArray[30] = 0i64;
  _RAX = _RDI->timeStepHistoryLocation;
  __asm { vmovss  dword ptr [rdi+rax*4+1208h], xmm8 }
  _RDI->timeStepHistoryLocation = (_RDI->timeStepHistoryLocation + 1) % 0xAu;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+120Ch]
    vaddss  xmm1, xmm0, dword ptr [rdi+1208h]
    vaddss  xmm2, xmm1, dword ptr [rdi+1210h]
    vaddss  xmm3, xmm2, dword ptr [rdi+1214h]
    vaddss  xmm0, xmm3, dword ptr [rdi+1218h]
    vaddss  xmm1, xmm0, dword ptr [rdi+121Ch]
    vaddss  xmm2, xmm1, dword ptr [rdi+1220h]
    vaddss  xmm3, xmm2, dword ptr [rdi+1224h]
    vaddss  xmm0, xmm3, dword ptr [rdi+1228h]
    vaddss  xmm1, xmm0, dword ptr [rdi+122Ch]
    vmulss  xmm2, xmm1, cs:__real@3dcccccd
  }
  ++_RDI->tickerCount;
  __asm { vmovss  dword ptr [rdi+1234h], xmm2 }
  Sys_ProfEndNamedEvent();
  _R11 = &v46;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
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
  unsigned int v11; 
  unsigned int v12; 
  const dvar_t *v15; 
  unsigned int flags; 
  const dvar_t *v17; 
  unsigned int v18; 
  unsigned int v19; 
  hclClothInstance *v21; 
  const hclClothData *m_clothData; 
  __int64 m_currentState; 
  const hclClothState *v24; 
  __int64 m_size; 
  __int64 v26; 
  hclClothState::TransformSetAccess *m_data; 
  hclTransformSet *v28; 
  __int64 v29; 
  int v30; 
  int v31; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned __int16 v36; 
  const char *v37; 
  int v38; 
  const char *v39; 
  int v40; 
  unsigned int v41; 
  Cloth_OwnerType OwnerType; 
  int v49; 
  int v50; 
  int v51; 
  __int64 i; 
  int v53; 
  const float4 *fmt; 
  const float4 *v58; 
  __int64 v59; 
  float v60; 
  char v61; 
  unsigned int v62; 
  unsigned int NumClothInstances; 
  __int64 v66; 
  __int64 v67; 
  hclClothInstance *ClothInstance; 
  const hclClothState *v71; 
  hkQuaternionf v72; 

  v11 = instanceId;
  v12 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_GetBoneTransforms");
  if ( !Cloth_IsInitialized() )
  {
    v58 = (const float4 *)"Cloth_IsInitialized()";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1416, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( v12 > Cloth_GetMaxSupportedGlobalWorlds() )
  {
    v58 = (const float4 *)"globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1417, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( v11 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1418, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( v11 < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v58) = v11;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1419, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v58, 1024) )
    __debugbreak();
LABEL_13:
  v15 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v15->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v15->name) )
      __debugbreak();
  }
  if ( v11 >= v15->current.integer )
  {
    v17 = DCONST_DVARINT_cloth_MaxInstances;
    if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      v18 = v17->flags;
      if ( (v18 & 0x81488) != 0 && (v18 & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v17->name) )
        __debugbreak();
    }
    LODWORD(v59) = v17->current.integer;
    LODWORD(v58) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1420, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  if ( !HavokCloth_IsInstanceInUse(v12, v11) )
  {
    v58 = (const float4 *)"HavokCloth_IsInstanceInUse( globalWorldId, instanceId )";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1421, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !animCalcInfo )
  {
    v58 = (const float4 *)"animCalcInfo";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1422, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !dObj )
  {
    v58 = (const float4 *)"dObj";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1423, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !requestedBones )
  {
    v58 = (const float4 *)"requestedBones";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1424, ASSERT_TYPE_ASSERT, "(requestedBones)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !animCalcBuffer )
  {
    v58 = (const float4 *)"animCalcBuffer";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1425, ASSERT_TYPE_ASSERT, "(animCalcBuffer)", (const char *)&queryFormat) )
      __debugbreak();
  }
  if ( !viewOffset )
  {
    v58 = (const float4 *)"viewOffset";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1426, ASSERT_TYPE_ASSERT, "(viewOffset)", (const char *)&queryFormat) )
      __debugbreak();
  }
  NumClothInstances = HavokCloth_GetNumClothInstances(v12, v11);
  v19 = 0;
  v62 = 0;
  if ( NumClothInstances )
  {
    __asm
    {
      vmovaps [rsp+128h+var_58], xmm6
      vmovaps [rsp+128h+var_68], xmm7
      vmovaps [rsp+128h+var_78], xmm8
      vmovss  xmm8, [rsp+128h+weightScale]
    }
    while ( 1 )
    {
      ClothInstance = HavokCloth_GetClothInstance(v12, v11, v19);
      v21 = ClothInstance;
      if ( !ClothInstance )
      {
        v58 = (const float4 *)"clothInstance";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1434, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat) )
          __debugbreak();
      }
      m_clothData = ClothInstance->m_clothData;
      if ( !m_clothData )
      {
        v58 = (const float4 *)"clothData";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1438, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat) )
          __debugbreak();
      }
      m_currentState = (int)ClothInstance->m_currentState;
      if ( (unsigned int)m_currentState >= m_clothData->m_clothStateDatas.m_size )
      {
        LODWORD(v59) = m_clothData->m_clothStateDatas.m_size;
        LODWORD(v58) = ClothInstance->m_currentState;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1442, ASSERT_TYPE_ASSERT, "(unsigned)( stateIdx ) < (unsigned)( clothData->m_clothStateDatas.getSize() )", "stateIdx doesn't index clothData->m_clothStateDatas.getSize()\n\t%i not in [0, %i)", v58, v59) )
          __debugbreak();
      }
      v24 = m_clothData->m_clothStateDatas.m_data[m_currentState];
      v71 = v24;
      m_size = v24->m_usedTransformSets.m_size;
      v67 = m_size;
      if ( m_size <= 0 )
        goto LABEL_102;
      v26 = 0i64;
      v66 = 0i64;
      do
      {
        m_data = v24->m_usedTransformSets.m_data;
        if ( *(unsigned int *)((char *)&m_data->m_transformSetIndex + v26) >= v21->m_transformSets.m_size )
        {
          LODWORD(v59) = v21->m_transformSets.m_size;
          LODWORD(v58) = *(unsigned int *)((char *)&m_data->m_transformSetIndex + v26);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1453, ASSERT_TYPE_ASSERT, "(unsigned)( usedTransformSet->m_transformSetIndex ) < (unsigned)( clothInstance->m_transformSets.getSize() )", "usedTransformSet->m_transformSetIndex doesn't index clothInstance->m_transformSets.getSize()\n\t%i not in [0, %i)", v58, v59) )
            __debugbreak();
        }
        v28 = v21->m_transformSets.m_data[*(int *)((char *)&m_data->m_transformSetIndex + v26)];
        if ( (m_data->m_transformSetUsage.m_perComponentFlags[v26] & 2) == 0 )
          goto LABEL_101;
        v29 = *(__int64 *)((char *)&m_data->m_transformSetUsage.m_perComponentTransformTrackers.m_data + v26);
        v30 = 0;
        v31 = *(_DWORD *)(v29 + 64);
        if ( v31 <= 0 )
          v32 = 0;
        else
          v32 = **(_DWORD **)(v29 + 48);
        v61 = v32;
        if ( v31 <= 0 )
          goto LABEL_98;
        do
        {
          v33 = v30;
          if ( (v61 & 1) == 0 )
          {
            if ( (++v30 & 0x1F) != 0 || v30 >= v31 )
            {
              v32 >>= 1;
              v61 = v32;
            }
            else
            {
              v32 = *(_DWORD *)(*(_QWORD *)(v29 + 48) + 4 * ((v33 + 1) >> 5));
              v61 = v32;
            }
            goto LABEL_96;
          }
          v34 = v30;
          if ( (unsigned int)v30 >= LODWORD(v28[1].m_propertyBag.m_bag) )
          {
            LODWORD(v59) = v28[1].m_propertyBag.m_bag;
            LODWORD(v58) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1477, ASSERT_TYPE_ASSERT, "(unsigned)( transformSetTransformIdx ) < (unsigned)( transformSet->m_boneIndices.getSize() )", "transformSetTransformIdx doesn't index transformSet->m_boneIndices.getSize()\n\t%i not in [0, %i)", v58, v59) )
              __debugbreak();
          }
          if ( (++v30 & 0x1F) != 0 || v30 >= *(_DWORD *)(v29 + 64) )
            v32 >>= 1;
          else
            v32 = *(_DWORD *)(*(_QWORD *)(v29 + 48) + 4 * ((v33 + 1) >> 5));
          v35 = v34;
          v61 = v32;
          v36 = *((_WORD *)&v28[1].getExactType + v34);
          if ( v36 == 255 )
          {
            v37 = "boneIdx != NO_BONEINDEX";
            v38 = 1482;
            v39 = "(boneIdx != 255)";
            goto LABEL_89;
          }
          if ( v36 == 254 )
          {
            v37 = "boneIdx != UNDEFINED_BONEINDEX";
            v38 = 1483;
            v39 = "(boneIdx != 254)";
LABEL_89:
            v58 = (const float4 *)v37;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", v38, ASSERT_TYPE_ASSERT, v39, (const char *)&queryFormat) )
              __debugbreak();
          }
          v40 = v36;
          v41 = v36 & 0x7FFF;
          if ( v41 >= 0x300 )
          {
            LODWORD(v59) = 768;
            LODWORD(v58) = v41;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v58, v59) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v41 & 0x1F)) & requestedBones->array[(unsigned __int64)v41 >> 5]) != 0 )
          {
            _RAX = viewOffset;
            __asm
            {
              vmovups xmm0, cs:__xmm@42000000420000004200000042000000
              vmovups xmm7, xmmword ptr [rax]
              vmulps  xmm6, xmm0, xmmword ptr [r14+30h]
            }
            hkQuaternionf::set(&v72, (const hkRotationImpl<float> *)&v28->m_transforms.m_data[v35]);
            __asm
            {
              vmovups xmm0, xmmword ptr [rsp+128h+var_98.m_vec.m_quad]
              vsubps  xmm1, xmm6, xmm7
              vmovss  dword ptr [rsp+128h+var_F8], xmm8
            }
            XAnimSetLocalBoneTransform(animCalcInfo, dObj, animCalcBuffer, v40, fmt, v58, v60);
          }
LABEL_96:
          v31 = *(_DWORD *)(v29 + 64);
        }
        while ( v30 < v31 );
        v26 = v66;
        m_size = v67;
        v12 = globalWorldId;
LABEL_98:
        OwnerType = Cloth_GetOwnerType(v12, instanceId);
        v49 = 0;
        v50 = (2 * ~(-1 << ((*(_DWORD *)(v29 + 64) - 1) & 0x1F))) | 1;
        v51 = *(_DWORD *)(v29 + 56) - 1;
        for ( i = v51; i >= 0; --i )
        {
          v53 = v50 & *(_DWORD *)(*(_QWORD *)(v29 + 48) + 4 * i);
          v50 = -1;
          v49 += __popcnt(v53);
        }
        Cloth_Debug_Perf_AddBoneWrittenCount(v12, OwnerType, v49);
        v21 = ClothInstance;
LABEL_101:
        v24 = v71;
        v26 += 32i64;
        --m_size;
        v66 = v26;
        v67 = m_size;
      }
      while ( m_size );
LABEL_102:
      v11 = instanceId;
      v19 = v62 + 1;
      v62 = v19;
      if ( v19 >= NumClothInstances )
      {
        __asm
        {
          vmovaps xmm8, [rsp+128h+var_78]
          vmovaps xmm7, [rsp+128h+var_68]
          vmovaps xmm6, [rsp+128h+var_58]
        }
        break;
      }
    }
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
  _RAX = s_havokCloth_Update_Datas;
  _RCX = 5072 * v1;
  __asm { vmovss  xmm0, dword ptr [rcx+rax+1234h] }
  return *(float *)&_XMM0;
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
  void *v8; 
  const hclClothData *m_clothData; 
  __int64 m_currentState; 
  const hclClothState *v13; 
  int v14; 
  int m_size; 
  hclClothInstance::hclStateInstanceData *m_data; 
  __int64 v17; 
  hkMemoryAllocator *v18; 
  int v21; 
  __int64 v22; 
  int v24; 
  hkReferencedObject *v25; 
  const hclOperator *v26; 
  __int64 v27; 
  const hclSimClothData::OverridableSimulationInfo *SimulationInfo; 
  unsigned int v30; 
  int v45; 
  Cloth_OwnerType OwnerType; 
  hkMemoryAllocator *v47; 
  hkArray<hclClothInstance *,hkContainerHeapAllocator> array; 
  unsigned int globalWorldIda; 
  unsigned int instanceIda; 
  __int64 v52; 
  const hclClothData *v53; 
  hclOperatorExecutionData executionData; 
  __int64 v55; 
  char runtimeBuffer[32768]; 

  v8 = alloca(v5);
  v55 = -2i64;
  __asm { vmovaps [rsp+8100h+var_50], xmm6 }
  instanceIda = instanceId;
  globalWorldIda = globalWorldId;
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 824, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( !clothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 825, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  if ( clothInstance->m_update.m_bool )
  {
    m_clothData = clothInstance->m_clothData;
    v53 = m_clothData;
    if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 835, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
      __debugbreak();
    m_currentState = (int)clothInstance->m_currentState;
    v13 = m_clothData->m_clothStateDatas.m_data[m_currentState];
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 842, ASSERT_TYPE_ASSERT, "(currentState)", (const char *)&queryFormat, "currentState") )
      __debugbreak();
    if ( v13->m_operators.m_size )
    {
      Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_HavokClothInstance");
      v14 = 0;
      m_size = clothInstance->m_statesInstanceData.m_size;
      if ( m_size <= 0 )
        goto LABEL_19;
      m_data = clothInstance->m_statesInstanceData.m_data;
      while ( m_data->m_stateIndex != (_DWORD)m_currentState )
      {
        ++v14;
        ++m_data;
        if ( v14 >= m_size )
          goto LABEL_19;
      }
      v25 = clothInstance->m_statesInstanceData.m_data[v14].m_data;
      if ( v25 )
        v17 = (__int64)v25[1].__vftable;
      else
LABEL_19:
        v17 = 0i64;
      v52 = v17;
      array.m_data = NULL;
      array.m_size = 0;
      array.m_capacityAndFlags = 0x80000000;
      v18 = hkMemHeapAllocator();
      hkArrayUtil::_reserveMore(v18, &array, 8);
      array.m_data[array.m_size++] = clothInstance;
      if ( hclWorld::calcStepBufferSize(world, 1, &array) >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 860, ASSERT_TYPE_ASSERT, "(bufferSize < 32*1024)", (const char *)&queryFormat, "bufferSize < CLOTH_MAX_RUNTIME_MEMORY") )
        __debugbreak();
      if ( ((unsigned __int8)runtimeBuffer & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 865, ASSERT_TYPE_ASSERT, "(((hkUlong)clothStepBuffer & 0xf) == 0)", (const char *)&queryFormat, "((hkUlong)clothStepBuffer & 0xf) == 0") )
        __debugbreak();
      world->m_buffers.m_size = 0;
      Sys_ProfBeginNamedEvent(0xFFFA8072, "PrepareTempBuffers");
      hclClothInstance::_prepareTempBuffers(clothInstance, world, runtimeBuffer);
      Sys_ProfEndNamedEvent();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+8100h+executionData.m_stateTiming], xmm0
      }
      executionData.m_clothInstance = clothInstance;
      __asm
      {
        vmovss  xmm1, [rbp+8000h+arg_20]
        vmovss  [rsp+8100h+executionData.m_timeStep], xmm1
      }
      executionData.m_world = world;
      executionData.m_runtimeBuffer = hclWorld::_getNextAvailableBuffer(world);
      executionData.m_onTheFlyNotifications.m_bool = 0;
      Sys_ProfBeginNamedEvent(0xFFFA8072, "PreExecute");
      hclClothInstance::_preExecuteCloth(clothInstance, &executionData);
      Sys_ProfEndNamedEvent();
      v21 = 0;
      if ( v13->m_operators.m_size > 0 )
      {
        v22 = 0i64;
        __asm { vmovss  xmm6, cs:__real@42000000 }
        do
        {
          if ( v17 )
            v24 = *(_DWORD *)(v22 * 4 + *(_QWORD *)(v17 + 24));
          else
            v24 = 1;
          v26 = v53->m_operators.m_data[v13->m_operators.m_data[v22]];
          if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 893, ASSERT_TYPE_ASSERT, "(op)", (const char *)&queryFormat, "op") )
            __debugbreak();
          if ( v24 > 0 )
          {
            v27 = (unsigned int)v24;
            do
            {
              Sys_ProfBeginNamedEvent(0xFFFA8072, (const char *)((unsigned __int64)v26->m_name.m_stringAndFlag & 0xFFFFFFFFFFFFFFFEui64));
              v26->execute((hclOperator *)v26, &executionData);
              Sys_ProfEndNamedEvent();
              --v27;
            }
            while ( v27 );
          }
          if ( v26->m_type.m_storage == 1 )
          {
            _RBX = clothInstance->m_simClothInstances.m_data[SLODWORD(v26[1].__vftable)];
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 914, ASSERT_TYPE_ASSERT, "(simClothInstance)", (const char *)&queryFormat, "simClothInstance") )
              __debugbreak();
            SimulationInfo = hclSimClothInstance::getSimulationInfo(_RBX);
            v30 = globalWorldIda;
            if ( SimulationInfo->m_computeVelocity.m_bool )
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [rbx+240h]
                vdpps   xmm4, xmm0, xmm0, 7Fh
                vxorps  xmm0, xmm0, xmm0
                vcmpleps xmm3, xmm4, xmm0
                vrsqrtps xmm1, xmm4
                vmulps  xmm2, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
                vmulps  xmm0, xmm1, xmm4
                vmulps  xmm1, xmm0, xmm1
                vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
                vsubps  xmm1, xmm0, xmm1
                vmulps  xmm2, xmm1, xmm2
                vmulps  xmm0, xmm2, xmm4
                vandnps xmm1, xmm3, xmm0
                vmulss  xmm2, xmm1, xmm6; speed
              }
              HavokCloth_AddSimulatedSpeed(globalWorldIda, instanceIda, *(const float *)&_XMM2);
            }
            v45 = _RBX->m_particlePositions.m_size;
            OwnerType = Cloth_GetOwnerType(v30, instanceIda);
            Cloth_Debug_Perf_AddParticleSimulatedCount(v30, OwnerType, v24 * v45);
          }
          ++v21;
          ++v22;
          v17 = v52;
        }
        while ( v21 < v13->m_operators.m_size );
      }
      Sys_ProfBeginNamedEvent(0xFFFA8072, "PostExecute");
      hclClothInstance::_postExecuteCloth(clothInstance, &executionData);
      Sys_ProfEndNamedEvent();
      Sys_ProfEndNamedEvent();
      v47 = hkMemHeapAllocator();
      array.m_size = 0;
      if ( array.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v47, array.m_data, 8, array.m_capacityAndFlags & 0x3FFFFFFF);
    }
  }
  __asm { vmovaps xmm6, [rsp+8100h+var_50] }
}

/*
==============
HavokCloth_Update_HideByCollapsing
==============
*/
void HavokCloth_Update_HideByCollapsing(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale)
{
  DObj *v10; 
  const dvar_t *v12; 
  unsigned int flags; 
  const dvar_t *v14; 
  unsigned int v15; 
  int v16; 
  const bitarray<768> *Bones; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  int v22; 
  unsigned int v23; 
  unsigned int v24; 
  char v25; 
  unsigned __int16 v26; 
  int v27; 
  const DObj *v29; 
  int v30; 
  const bitarray<768> *WrittenBones; 
  __int64 v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned __int16 v36; 
  Cloth_OwnerType OwnerType; 
  const float4 *fmt; 
  float4 *outModelTranslation; 
  float4 *outModelTranslationa; 
  __int64 v44; 
  float v45; 
  int v47; 
  int v48; 
  DObj *obj[2]; 
  float4 outModelQuat; 
  DObjHierarchyIterator iter; 

  __asm { vmovaps [rsp+918h+var_58], xmm6 }
  v10 = (DObj *)dObj;
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
  v12 = DCONST_DVARINT_cloth_MaxInstances;
  if ( !DCONST_DVARINT_cloth_MaxInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_MaxInstances") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v12->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v12->name) )
      __debugbreak();
  }
  if ( instanceId >= v12->current.integer )
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
    LODWORD(v44) = v14->current.integer;
    LODWORD(outModelTranslation) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1526, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>( Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" ) ) )", "instanceId doesn't index static_cast<uint>( Dconst_GetInt( cloth_MaxInstances ) )\n\t%i not in [0, %i)", outModelTranslation, v44) )
      __debugbreak();
  }
  if ( !HavokCloth_IsInstanceInUse(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1527, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
    __debugbreak();
  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1528, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1529, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !requestedBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1530, ASSERT_TYPE_ASSERT, "(requestedBones)", (const char *)&queryFormat, "requestedBones") )
    __debugbreak();
  if ( !animCalcBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1531, ASSERT_TYPE_ASSERT, "(animCalcBuffer)", (const char *)&queryFormat, "animCalcBuffer") )
    __debugbreak();
  v16 = 255;
  Bones = Cloth_GetReadBones(globalWorldId, instanceId);
  v18 = DObjNumBones(v10);
  v19 = Bones->array[0];
  v20 = globalWorldId;
  LODWORD(v21) = 0;
  v48 = 0;
  v22 = v18;
  v47 = v18;
  while ( 1 )
  {
LABEL_50:
    if ( v19 )
    {
LABEL_53:
      v23 = __lzcnt(v19);
      v20 = v23 + 32 * v21;
      if ( v23 >= 0x20 )
      {
        LODWORD(v44) = 32;
        LODWORD(outModelTranslation) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", outModelTranslation, v44) )
          __debugbreak();
      }
      v24 = 0x80000000 >> v23;
      if ( (v19 & (0x80000000 >> v23)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v22 = v47;
      v19 &= ~v24;
      v10 = obj[0];
      v25 = 1;
    }
    else
    {
      while ( 1 )
      {
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= 0x18 )
          break;
        v19 = Bones->array[v21];
        if ( v19 )
          goto LABEL_53;
      }
      v25 = 0;
    }
    if ( !v25 )
      break;
    if ( v20 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v20, "unsigned", v20) )
      __debugbreak();
    v26 = v20 | 0x8000;
    if ( (unsigned __int16)v20 < v22 )
      v26 = v20;
    v27 = DObjHierarchyIterator_Begin(&iter, v10, v26);
    if ( v27 != 255 )
    {
      while ( (v27 & 0x8000) != 0 )
      {
        v27 = DObjHierarchyIterator_NextParent(&iter);
        if ( v27 == 255 )
          goto LABEL_50;
      }
      v16 = v27;
    }
  }
  if ( v16 == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1562, ASSERT_TYPE_ASSERT, "(firstNonClientBoneParent != 255)", (const char *)&queryFormat, "firstNonClientBoneParent != NO_BONEINDEX") )
    __debugbreak();
  __asm { vmovss  xmm6, [rsp+918h+weightScale] }
  v29 = obj[0];
  v30 = 0;
  WrittenBones = Cloth_GetWrittenBones(globalWorldId, instanceId);
  LODWORD(v32) = 0;
  v33 = WrittenBones->array[0];
  while ( v33 )
  {
LABEL_79:
    v34 = __lzcnt(v33);
    v35 = v34 + 32 * v32;
    if ( v34 >= 0x20 )
    {
      LODWORD(v44) = 32;
      LODWORD(outModelTranslation) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", outModelTranslation, v44) )
        __debugbreak();
    }
    if ( (v33 & (0x80000000 >> v34)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v33 &= ~(0x80000000 >> v34);
    if ( v35 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v34 + 32 * v32), "unsigned", v35) )
      __debugbreak();
    v36 = v35 | 0x8000;
    if ( (unsigned __int16)v35 < v47 )
      v36 = v34 + 32 * v32;
    XAnimGetLocalBoneTransform(animCalcInfo, v29, animCalcBuffer, v16, &outModelQuat, (float4 *)obj);
    __asm
    {
      vmovups xmm1, xmmword ptr [rsp+918h+obj]
      vmovups xmm0, xmmword ptr [rsp+918h+outModelQuat.v]
      vmovss  dword ptr [rsp+918h+var_8E8], xmm6
    }
    XAnimSetLocalBoneTransform(animCalcInfo, v29, animCalcBuffer, v36, fmt, outModelTranslationa, v45);
    v30 = ++v48;
  }
  while ( 1 )
  {
    v32 = (unsigned int)(v32 + 1);
    if ( (unsigned int)v32 >= 0x18 )
      break;
    v33 = WrittenBones->array[v32];
    if ( v33 )
      goto LABEL_79;
  }
  OwnerType = Cloth_GetOwnerType(globalWorldId, instanceId);
  Cloth_Debug_Perf_AddBoneWrittenCount(globalWorldId, OwnerType, v30);
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+918h+var_58] }
}

/*
==============
HavokCloth_Update_Instance
==============
*/
void HavokCloth_Update_Instance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  unsigned __int64 v4; 
  __int64 v5; 
  const dvar_t *v6; 
  unsigned int flags; 
  const dvar_t *v8; 
  unsigned int v9; 
  unsigned int v12; 
  volatile signed __int32 *v14; 
  unsigned int TickerCount; 
  int bulletProxyUpdateRate; 
  unsigned int v17; 
  char v18; 
  unsigned int v19; 
  hclClothInstance *ClothInstance; 
  unsigned int m_currentState; 
  HavokCloth_PhysicsProxyAction *PhysicsProxyAction; 
  bool v23; 
  float fmt; 
  __int64 v26; 
  __int64 v27; 
  hclWorld *world; 
  bitarray_base<bitarray<1024> > *v29; 
  unsigned int v31; 
  unsigned int NumClothInstances; 
  const ClothAsset *ClothAsset; 

  v4 = instanceId;
  v5 = globalWorldId;
  __asm { vmovaps [rsp+0B8h+var_58], xmm6 }
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_Instance");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1020, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v5 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1021, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( (_DWORD)v4 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1022, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
      __debugbreak();
  }
  else if ( (unsigned int)v4 < 0x400 )
  {
    goto LABEL_13;
  }
  LODWORD(v26) = v4;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v26, 1024) )
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
  if ( (unsigned int)v4 >= v6->current.integer )
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
    LODWORD(v27) = v8->current.integer;
    LODWORD(v26) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1024, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(v5, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1025, ASSERT_TYPE_ASSERT, "(!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  _RBP = &s_havokCloth_Update_Datas[v5];
  v29 = (bitarray_base<bitarray<1024> > *)_RBP;
  ClothAsset = HavokCloth_GetClothAsset(v5, v4);
  if ( !ClothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1032, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr [rbp+1234h] }
  v12 = 0x80000000 >> (v4 & 0x1F);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  v14 = &_RBP->updatedLastFrame.threadSafeBitArray[v4 >> 5];
  if ( __CFSHR__(0x80000000, v4 & 0x1F) || v12 == 0 )
  {
    if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &_RBP->updatedLastFrame.generalUseBitArray.array[v4 >> 5]) )
      __debugbreak();
    _InterlockedOr(v14, v12);
  }
  else
  {
    world = HavokCloth_GetGlobalClothWorld(v5);
    if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1052, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    TickerCount = Cloth_Update_GetTickerCount(v5);
    bulletProxyUpdateRate = ClothAsset->bulletProxyUpdateRate;
    v17 = TickerCount;
    if ( bulletProxyUpdateRate <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1059, ASSERT_TYPE_ASSERT, "(physicsProxyUpdateRate > 0)", (const char *)&queryFormat, "physicsProxyUpdateRate > 0") )
      __debugbreak();
    v18 = 0;
    v31 = (v17 + (unsigned int)v4) % bulletProxyUpdateRate;
    HavokCloth_ClearSimulatedSpeed(v5, v4);
    v19 = 0;
    NumClothInstances = HavokCloth_GetNumClothInstances(v5, v4);
    if ( NumClothInstances )
    {
      do
      {
        ClothInstance = HavokCloth_GetClothInstance(v5, v4, v19);
        if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1078, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
          __debugbreak();
        m_currentState = ClothInstance->m_currentState;
        __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm6 }
        PhysicsProxyAction = HavokCloth_GetPhysicsProxyAction(v5, v4, v19);
        HavokCloth_Update_HavokClothInstance(v5, v4, world, ClothInstance, fmt);
        if ( PhysicsProxyAction )
        {
          HavokCloth_PhysicsProxyAction::FlipBuffers(PhysicsProxyAction);
          if ( !v31 )
          {
            HavokCloth_PhysicsProxyAction::UpdateShapeLocalGeo(PhysicsProxyAction);
            HavokCloth_Update_FlagForPhysicsProxyRebuild(v5, v4, 1);
          }
        }
        v23 = m_currentState != ClothAsset->animationStateIdx && PhysicsProxyAction;
        v18 |= v23;
        ++v19;
      }
      while ( v19 < NumClothInstances );
      v12 = 0x80000000 >> (v4 & 0x1F);
    }
    if ( bitarray_base<bitarray<1024>>::testBit(v29 + 4688, v4) )
      HavokCloth_Update_BlendedSpeed(v5, v4);
    if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v14) )
      __debugbreak();
    _InterlockedOr(v14, v12);
    HavokCloth_Update_FlagForPhysicsProxyUpdate(v5, v4, v18);
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_58] }
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
  __int64 v5; 
  const dvar_t *v6; 
  unsigned int flags; 
  const dvar_t *v8; 
  unsigned int v9; 
  char v11; 
  unsigned int v15; 
  unsigned int NumClothInstances; 
  hclClothInstance *ClothInstance; 
  const hclClothData *m_clothData; 
  __int64 v21; 
  __int64 v22; 

  v5 = globalWorldId;
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_InstanceStateTransition");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 985, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v5 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 986, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
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
  LODWORD(v21) = instanceId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 988, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( s_Cloth_StaticMaxInstances )", "instanceId doesn't index s_Cloth_StaticMaxInstances\n\t%i not in [0, %i)", v21, 1024) )
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
    LODWORD(v22) = v8->current.integer;
    LODWORD(v21) = instanceId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 989, ASSERT_TYPE_ASSERT, "(unsigned)( instanceId ) < (unsigned)( static_cast<uint>(Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_cloth_MaxInstances, \"cloth_MaxInstances\" )) )", "instanceId doesn't index static_cast<uint>(Dconst_GetInt( cloth_MaxInstances ))\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(v5, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 990, ASSERT_TYPE_ASSERT, "(!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!HavokCloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  _RAX = s_havokCloth_Update_Datas;
  _RCX = 5072 * v5;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm6, dword ptr [rcx+rax+1234h]
    vcomiss xmm6, xmm0
  }
  if ( ((unsigned __int128)(5072 * (__int128)v5) >> 64 != 0) | v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 997, ASSERT_TYPE_ASSERT, "(timeStep > 0.f)", (const char *)&queryFormat, "timeStep > 0.f") )
    __debugbreak();
  v15 = 0;
  NumClothInstances = HavokCloth_GetNumClothInstances(v5, instanceId);
  if ( NumClothInstances )
  {
    do
    {
      ClothInstance = HavokCloth_GetClothInstance(v5, instanceId, v15);
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
        __asm { vmovaps xmm2, xmm6; timeStep }
        hclStateTransition::step((hclStateTransition *)m_clothData->m_stateTransitions.m_data[ClothInstance->m_stateTransitionIndex], ClothInstance, *(float *)&_XMM2);
      }
      ++v15;
    }
    while ( v15 < NumClothInstances );
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
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
  __int64 v6; 
  HavokCloth_Update_Data *v7; 
  unsigned int v8; 
  __int64 v10; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int NumClothInstances; 
  unsigned int v17; 
  unsigned int v18; 
  HavokCloth_PhysicsProxyAction *PhysicsProxyAction; 
  HavokCloth_PhysicsProxyAction *v20; 
  hknpBodyId v21; 
  hknpBodyId v22; 
  hknpExternMeshShape *m_shape; 
  const hknpExternMeshShapeGeometry *m_geometry; 
  __int64 v25; 
  __int64 v26; 
  hkMemoryAllocator *v27; 
  __int64 v28; 
  __int64 v32; 
  hkDefaultPropertyBag *m_bag; 
  hkMemoryAllocator *v34; 
  __int64 v35; 
  __int64 v40; 
  float fmt; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  float v47; 
  int v48; 
  Physics_WorldId worldId; 
  Physics_WorldId v50; 
  unsigned int v51; 
  int v52; 
  unsigned int v54; 
  HavokCloth_Update_Data *v55; 
  hkFlags<enum hknpExternMeshShape::RebuildFlagsEnum,unsigned int> flags; 
  hkQuaternionf orientation; 
  hkVector4f position; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v6 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_PhysicsProxies");
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1638, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)v6 > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1639, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  worldId = 3 * v6 + 3;
  v50 = 3 * v6 + 4;
  v7 = &s_havokCloth_Update_Datas[v6];
  v55 = v7;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Update proxies");
  v8 = v7->instancesNeedingPhysicsProxyUpdate.array[0];
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  LODWORD(v10) = 0;
  v48 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v12 = 32i64;
  while ( v8 )
  {
LABEL_12:
    v13 = __lzcnt(v8);
    v14 = v13 + 32 * v10;
    v51 = v14;
    if ( v13 >= 0x20 )
    {
      LODWORD(updateBroadphaseIfWarping) = 32;
      LODWORD(canWarp) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
        __debugbreak();
    }
    if ( (v8 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v8 &= ~(0x80000000 >> v13);
    v54 = v8;
    if ( !HavokCloth_IsInstanceInUse(v6, v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1661, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
      __debugbreak();
    v15 = (1 << ((v13 + 32 * v10) & 0x1F)) & v7->instancesNeedingPhysicsProxyRebuild[(unsigned __int64)v14 >> 5];
    v52 = v15;
    HavokCloth_GetInstancePosition(v6, v14, &position);
    HavokCloth_GetInstanceOrientation(v6, v14, &orientation);
    NumClothInstances = HavokCloth_GetNumClothInstances(v6, v14);
    v17 = 0;
    v12 = 32i64;
    if ( NumClothInstances )
    {
      v18 = NumClothInstances;
      do
      {
        PhysicsProxyAction = HavokCloth_GetPhysicsProxyAction(v6, v14, v17);
        v20 = PhysicsProxyAction;
        if ( PhysicsProxyAction )
        {
          v21.m_serialAndIndex = PhysicsProxyAction->m_authBodyId.m_serialAndIndex;
          v22.m_serialAndIndex = PhysicsProxyAction->m_detailBodyId.m_serialAndIndex;
          if ( (v21.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1689, ASSERT_TYPE_ASSERT, "(authBodyId.isValid())", (const char *)&queryFormat, "authBodyId.isValid()") )
            __debugbreak();
          if ( (v22.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1690, ASSERT_TYPE_ASSERT, "(detailBodyId.isValid())", (const char *)&queryFormat, "detailBodyId.isValid()") )
            __debugbreak();
          __asm
          {
            vmovss  [rsp+0F8h+var_C0], xmm6
            vmovss  dword ptr [rsp+0F8h+fmt], xmm7
          }
          HavokPhysics_KeyframeRigidBodyTo(worldId, v21, &position, &orientation, fmt, 0, 0, v47);
          HavokPhysics_WarpRigidBodyTo(v50, v22, &position, &orientation, 0, 0);
          if ( v15 )
          {
            m_shape = v20->m_shape;
            if ( !m_shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1701, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
              __debugbreak();
            m_geometry = m_shape->m_geometry;
            if ( !m_geometry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 1706, ASSERT_TYPE_ASSERT, "(geometry)", (const char *)&queryFormat, "geometry") )
              __debugbreak();
            EnterCriticalSection((LPCRITICAL_SECTION)&m_geometry[1]);
            hkPropertyBag::operator=(&m_geometry[5].m_propertyBag, (const hkPropertyBag *)&m_geometry[3]);
            v25 = SLODWORD(m_geometry[4].__vftable);
            v26 = *(_QWORD *)&m_geometry[3].m_memSizeAndFlags;
            v27 = hkMemHeapAllocator();
            if ( (HIDWORD(m_geometry[6].m_propertyBag.m_bag) & 0x3FFFFFFF) < (int)v25 )
              hkArrayUtil::_reserve(v27, (void *)&m_geometry[6], v25, 16);
            v28 = v25;
            _RAX = m_geometry[6].__vftable;
            if ( (int)v25 > 0 )
            {
              _RBX = v26 - (_QWORD)_RAX;
              do
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbx+rax]
                  vmovups xmmword ptr [rax], xmm0
                }
                _RAX = (hknpExternMeshShapeGeometry_vtbl *)((char *)_RAX + 16);
                --v28;
              }
              while ( v28 );
            }
            LODWORD(m_geometry[6].m_propertyBag.m_bag) = v25;
            v32 = *(int *)&m_geometry[4].m_memSizeAndFlags;
            m_bag = m_geometry[4].m_propertyBag.m_bag;
            v34 = hkMemHeapAllocator();
            if ( (HIDWORD(m_geometry[7].__vftable) & 0x3FFFFFFF) < (int)v32 )
              hkArrayUtil::_reserve(v34, &m_geometry[6].m_memSizeAndFlags, v32, 16);
            v35 = v32;
            _RAX = *(_QWORD *)&m_geometry[6].m_memSizeAndFlags;
            if ( (int)v32 > 0 )
            {
              _RBX = (__int64)m_bag - _RAX;
              do
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbx+rax]
                  vmovups xmmword ptr [rax], xmm0
                }
                _RAX += 16i64;
                --v35;
              }
              while ( v35 );
            }
            LODWORD(m_geometry[7].__vftable) = v32;
            LeaveCriticalSection((LPCRITICAL_SECTION)&m_geometry[1]);
            __asm { vmovaps xmm3, xmm6 }
            hknpExternMeshShape::rebuild(m_shape, (hkFlags<enum hknpExternMeshShape::RebuildFlagsEnum,unsigned int>)&flags, a3);
            v14 = v51;
            v15 = v52;
            LODWORD(v6) = globalWorldId;
          }
        }
        ++v17;
      }
      while ( v17 < v18 );
      LODWORD(v10) = v48;
      v8 = v54;
      v12 = 32i64;
    }
    v7 = v55;
  }
  while ( 1 )
  {
    v10 = (unsigned int)(v10 + 1);
    v48 = v10;
    if ( (unsigned int)v10 >= 0x20 )
      break;
    v8 = v7->instancesNeedingPhysicsProxyUpdate.array[v10];
    if ( v8 )
      goto LABEL_12;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Reset Proxy Rebuild Array");
  v40 = 0i64;
  do
  {
    v7->instancesNeedingPhysicsProxyRebuild[v40++] = 0;
    --v12;
  }
  while ( v12 );
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
HavokCloth_Update_QueueSounds
==============
*/
void HavokCloth_Update_QueueSounds(const unsigned int globalWorldId, const unsigned int instanceId)
{
  __int64 v4; 
  char v10; 
  __int64 CurrentSoundIdx; 
  ClothAssetSound *sounds; 
  bool v13; 
  bool v14; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  const char *soundAlias; 
  __int64 v37; 
  __int64 v38; 
  hkVector4f position; 

  v4 = globalWorldId;
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_Update_QueueSounds");
  _RSI = HavokCloth_GetClothAsset(v4, instanceId);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 365, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
    __debugbreak();
  _RBP = &s_havokCloth_Update_Datas[v4];
  HavokCloth_GetInstancePosition(v4, instanceId, &position);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+1240h]
    vsubps  xmm1, xmm0, xmmword ptr [rsp+88h+position.m_quad]
    vdpps   xmm2, xmm1, xmm1, 7Fh
    vcomiss xmm2, dword ptr [rsi+68h]
  }
  if ( v13 | v10 )
  {
    __asm { vmovaps [rsp+88h+var_28], xmm6 }
    CurrentSoundIdx = HavokCloth_GetCurrentSoundIdx(v4, instanceId);
    if ( (unsigned int)CurrentSoundIdx >= _RSI->soundCount )
    {
      LODWORD(v37) = CurrentSoundIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( currentSoundIdx ) < (unsigned)( clothAsset->soundCount )", "currentSoundIdx doesn't index clothAsset->soundCount\n\t%i not in [0, %i)", v37, _RSI->soundCount) )
        __debugbreak();
    }
    *(double *)&_XMM0 = HavokCloth_GetBlendedSpeed(v4, instanceId);
    sounds = _RSI->sounds;
    v13 = __CFADD__(sounds, 32 * CurrentSoundIdx);
    v14 = v13 || &sounds[CurrentSoundIdx] == NULL;
    _RDI = &sounds[CurrentSoundIdx];
    __asm
    {
      vmovaps xmm6, xmm0
      vcomiss xmm0, dword ptr [rdi]
    }
    if ( v13 )
    {
      while ( 1 )
      {
        __asm { vcomiss xmm6, dword ptr [rdi] }
        if ( !v13 )
          break;
        if ( (_DWORD)CurrentSoundIdx )
        {
          LODWORD(CurrentSoundIdx) = CurrentSoundIdx - 1;
          v17 = (unsigned int)CurrentSoundIdx;
          v13 = __CFADD__(sounds, v17 * 32);
          _RDI = &sounds[v17];
          if ( _RDI )
            continue;
        }
        goto LABEL_23;
      }
    }
    else
    {
      while ( 1 )
      {
        __asm { vcomiss xmm6, dword ptr [rdi+4] }
        if ( v14 || (_DWORD)CurrentSoundIdx == _RSI->soundCount - 1 )
          break;
        LODWORD(CurrentSoundIdx) = CurrentSoundIdx + 1;
        v18 = (unsigned int)CurrentSoundIdx;
        v14 = __CFADD__(sounds, v18 * 32) || &sounds[v18] == NULL;
        _RDI = &sounds[v18];
        if ( !_RDI )
          goto LABEL_23;
      }
    }
    v19 = Sys_InterlockedIncrement(&_RBP->numQueuedSounds) - 1;
    if ( v19 < 10 )
    {
      if ( (unsigned int)v19 >= 0xA )
      {
        LODWORD(v38) = 10;
        LODWORD(v37) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 443, ASSERT_TYPE_ASSERT, "(unsigned)( queuedSoundHandle ) < (unsigned)( MAX_SIMULTANEOUS_CLOTH_SOUNDS )", "queuedSoundHandle doesn't index MAX_SIMULTANEOUS_CLOTH_SOUNDS\n\t%i not in [0, %i)", v37, v38) )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm1, xmm6, dword ptr [rdi]
        vmovss  xmm0, dword ptr [rdi+4]
        vsubss  xmm0, xmm0, dword ptr [rdi]
        vmovss  xmm6, cs:__real@3f800000
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm6; max
      }
      _RBX = v19;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rdi+0Ch]
        vsubss  xmm3, xmm6, xmm0
        vmulss  xmm2, xmm3, dword ptr [rdi+8]
        vmulss  xmm3, xmm3, dword ptr [rdi+10h]
        vmulss  xmm0, xmm0, dword ptr [rdi+14h]
        vaddss  xmm4, xmm2, xmm1
      }
      _RBP->queuedSounds[_RBX].instanceId = instanceId;
      soundAlias = _RDI->soundAlias;
      __asm
      {
        vaddss  xmm1, xmm3, xmm0
        vmovss  dword ptr [rbp+rbx*8+12E0h], xmm1
      }
      _RBP->queuedSounds[_RBX].soundAlias = soundAlias;
      __asm { vmovss  dword ptr [rbp+rbx*8+12E4h], xmm4 }
    }
    else
    {
      Sys_InterlockedDecrement(&_RBP->numQueuedSounds);
    }
LABEL_23:
    __asm { vmovaps xmm6, [rsp+88h+var_28] }
  }
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
  float4 outModelQuat; 
  float4 outModelTranslation; 
  hkQTransformf qt; 
  hkQTransformf qt2; 
  hkQTransformf qt1; 

  v11 = (__int64)(int)transformIdx << 6;
  v12 = (hkMatrix4Impl<float> *)((char *)transformSet->m_transforms.m_data + v11);
  _RDI = (hkTransformf *)((char *)transformSet->m_inverseTransposes.m_data + v11);
  if ( useBindPose && boneIdx )
  {
    XAnimGetLocalBoneTransform(animCalcInfo, dObj, animCalcBuffer, 0, &outModelQuat, &outModelTranslation);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+27h+var_A0.v]
      vmovups xmm1, xmmword ptr [rbp+27h+var_90.v]
      vmovups xmmword ptr [rbp+27h+qt1.m_rotation.m_vec.m_quad], xmm0
      vmovups xmmword ptr [rbp+27h+qt1.m_translation.m_quad], xmm1
    }
    XAnimGetLocalBindposeTransform(dObj, boneIdx, &outModelQuat, &outModelTranslation);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+27h+var_A0.v]
      vmovups xmm1, xmmword ptr [rbp+27h+var_90.v]
      vmovups xmmword ptr [rbp+27h+qt2.m_rotation.m_vec.m_quad], xmm0
      vmovups xmmword ptr [rbp+27h+qt2.m_translation.m_quad], xmm1
    }
    hkQTransformf::setMul(&qt, &qt1, &qt2);
    __asm { vmovups xmm1, xmmword ptr [rbp+27h+qt.m_translation.m_quad] }
  }
  else
  {
    XAnimGetLocalBoneTransform(animCalcInfo, dObj, animCalcBuffer, boneIdx, &outModelQuat, &outModelTranslation);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+27h+var_A0.v]
      vmovups xmm1, xmmword ptr [rbp+27h+var_90.v]
      vmovups xmmword ptr [rbp+27h+qt.m_rotation.m_vec.m_quad], xmm0
    }
  }
  __asm
  {
    vaddps  xmm1, xmm1, xmmword ptr [rax]
    vmulps  xmm1, xmm1, cs:__xmm@3d0000003d0000003d0000003d000000
    vmovups xmmword ptr [rbp+27h+qt.m_translation.m_quad], xmm1
  }
  hkMatrix4Impl<float>::set(v12, &qt);
  hkTransformf::setInverse(_RDI, (const hkTransformf *)v12);
  hkMatrix4Impl<float>::transpose((hkMatrix4Impl<float> *)_RDI);
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rdi+30h], xmm0
  }
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
  __int64 v2; 
  HavokCloth_Update_Data *v3; 
  HavokCloth_Update_Data *v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
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
  volatile int v58; 
  int v59[32]; 
  int v60[32]; 

  __asm { vmovdqu xmm2, cs:__xmm@ffffffffffffffffffffffffffffffff }
  v2 = 2i64;
  v3 = &s_havokCloth_Update_Datas[globalWorldId];
  v27 = v3->updatedLastFrame.threadSafeBitArray[0];
  v28 = v3->updatedLastFrame.threadSafeBitArray[1];
  v29 = v3->updatedLastFrame.threadSafeBitArray[2];
  v30 = v3->updatedLastFrame.threadSafeBitArray[3];
  v31 = v3->updatedLastFrame.threadSafeBitArray[4];
  v32 = v3->updatedLastFrame.threadSafeBitArray[5];
  v33 = v3->updatedLastFrame.threadSafeBitArray[6];
  v34 = v3->updatedLastFrame.threadSafeBitArray[7];
  v35 = v3->updatedLastFrame.threadSafeBitArray[8];
  v36 = v3->updatedLastFrame.threadSafeBitArray[9];
  v37 = v3->updatedLastFrame.threadSafeBitArray[10];
  v38 = v3->updatedLastFrame.threadSafeBitArray[11];
  v39 = v3->updatedLastFrame.threadSafeBitArray[12];
  v40 = v3->updatedLastFrame.threadSafeBitArray[13];
  v41 = v3->updatedLastFrame.threadSafeBitArray[14];
  v42 = v3->updatedLastFrame.threadSafeBitArray[15];
  v43 = v3->updatedLastFrame.threadSafeBitArray[16];
  v44 = v3->updatedLastFrame.threadSafeBitArray[17];
  v45 = v3->updatedLastFrame.threadSafeBitArray[18];
  v46 = v3->updatedLastFrame.threadSafeBitArray[19];
  v47 = v3->updatedLastFrame.threadSafeBitArray[20];
  v48 = v3->updatedLastFrame.threadSafeBitArray[21];
  v49 = v3->updatedLastFrame.threadSafeBitArray[22];
  v50 = v3->updatedLastFrame.threadSafeBitArray[23];
  v51 = v3->updatedLastFrame.threadSafeBitArray[24];
  v52 = v3->updatedLastFrame.threadSafeBitArray[25];
  v53 = v3->updatedLastFrame.threadSafeBitArray[26];
  v54 = v3->updatedLastFrame.threadSafeBitArray[27];
  v55 = v3->updatedLastFrame.threadSafeBitArray[28];
  v56 = v3->updatedLastFrame.threadSafeBitArray[29];
  v57 = v3->updatedLastFrame.threadSafeBitArray[30];
  v58 = v3->updatedLastFrame.threadSafeBitArray[31];
  _RAX = (int *)&v35;
  do
  {
    __asm { vmovdqu xmm0, xmmword ptr [rax-20h] }
    _RAX += 16;
    __asm
    {
      vpandn  xmm1, xmm0, xmm2
      vmovdqu xmmword ptr [rax-60h], xmm1
      vmovdqu xmm0, xmmword ptr [rax-50h]
      vpandn  xmm1, xmm0, xmm2
      vmovdqu xmmword ptr [rax-50h], xmm1
      vmovdqu xmm0, xmmword ptr [rax-40h]
      vpandn  xmm1, xmm0, xmm2
      vmovdqu xmmword ptr [rax-40h], xmm1
      vmovdqu xmm0, xmmword ptr [rax-30h]
      vpandn  xmm1, xmm0, xmm2
      vmovdqu xmmword ptr [rax-30h], xmm1
    }
    --v2;
  }
  while ( v2 );
  v59[0] = v27 & v3->updatedLastLastFrame.array[0];
  v59[1] = v28 & v3->updatedLastLastFrame.array[1];
  v59[2] = v29 & v3->updatedLastLastFrame.array[2];
  v59[3] = v30 & v3->updatedLastLastFrame.array[3];
  v59[4] = v31 & v3->updatedLastLastFrame.array[4];
  v59[5] = v32 & v3->updatedLastLastFrame.array[5];
  v59[6] = v33 & v3->updatedLastLastFrame.array[6];
  v59[7] = v34 & v3->updatedLastLastFrame.array[7];
  v59[8] = v35 & v3->updatedLastLastFrame.array[8];
  v59[9] = v36 & v3->updatedLastLastFrame.array[9];
  v59[10] = v37 & v3->updatedLastLastFrame.array[10];
  v59[11] = v38 & v3->updatedLastLastFrame.array[11];
  v59[12] = v39 & v3->updatedLastLastFrame.array[12];
  v59[13] = v40 & v3->updatedLastLastFrame.array[13];
  v59[14] = v41 & v3->updatedLastLastFrame.array[14];
  v59[15] = v42 & v3->updatedLastLastFrame.array[15];
  v59[16] = v43 & v3->updatedLastLastFrame.array[16];
  v59[17] = v44 & v3->updatedLastLastFrame.array[17];
  v59[18] = v45 & v3->updatedLastLastFrame.array[18];
  v59[19] = v46 & v3->updatedLastLastFrame.array[19];
  v59[20] = v47 & v3->updatedLastLastFrame.array[20];
  v59[21] = v48 & v3->updatedLastLastFrame.array[21];
  v59[22] = v49 & v3->updatedLastLastFrame.array[22];
  v59[23] = v50 & v3->updatedLastLastFrame.array[23];
  v59[24] = v51 & v3->updatedLastLastFrame.array[24];
  v59[25] = v52 & v3->updatedLastLastFrame.array[25];
  v59[26] = v53 & v3->updatedLastLastFrame.array[26];
  v59[27] = v54 & v3->updatedLastLastFrame.array[27];
  v59[28] = v55 & v3->updatedLastLastFrame.array[28];
  v59[29] = v56 & v3->updatedLastLastFrame.array[29];
  v59[30] = v57 & v3->updatedLastLastFrame.array[30];
  v59[31] = v58 & v3->updatedLastLastFrame.array[31];
  v60[0] = v27 & v3->needsSoundUpdate.array[0];
  v60[1] = v28 & v3->needsSoundUpdate.array[1];
  v60[2] = v29 & v3->needsSoundUpdate.array[2];
  v60[3] = v30 & v3->needsSoundUpdate.array[3];
  v60[4] = v31 & v3->needsSoundUpdate.array[4];
  v60[5] = v32 & v3->needsSoundUpdate.array[5];
  v60[6] = v33 & v3->needsSoundUpdate.array[6];
  v60[7] = v34 & v3->needsSoundUpdate.array[7];
  v60[8] = v35 & v3->needsSoundUpdate.array[8];
  v60[9] = v36 & v3->needsSoundUpdate.array[9];
  v60[10] = v37 & v3->needsSoundUpdate.array[10];
  v60[11] = v38 & v3->needsSoundUpdate.array[11];
  v60[12] = v39 & v3->needsSoundUpdate.array[12];
  v60[13] = v40 & v3->needsSoundUpdate.array[13];
  v60[14] = v41 & v3->needsSoundUpdate.array[14];
  v60[15] = v42 & v3->needsSoundUpdate.array[15];
  v60[16] = v43 & v3->needsSoundUpdate.array[16];
  v13 = v3;
  v60[17] = v44 & v3->needsSoundUpdate.array[17];
  v60[18] = v45 & v3->needsSoundUpdate.array[18];
  v60[19] = v46 & v3->needsSoundUpdate.array[19];
  v60[20] = v47 & v3->needsSoundUpdate.array[20];
  v60[21] = v48 & v3->needsSoundUpdate.array[21];
  v60[22] = v49 & v3->needsSoundUpdate.array[22];
  v60[23] = v50 & v3->needsSoundUpdate.array[23];
  v60[24] = v51 & v3->needsSoundUpdate.array[24];
  v60[25] = v52 & v3->needsSoundUpdate.array[25];
  v60[26] = v53 & v3->needsSoundUpdate.array[26];
  v60[27] = v54 & v3->needsSoundUpdate.array[27];
  v60[28] = v55 & v3->needsSoundUpdate.array[28];
  v60[29] = v56 & v3->needsSoundUpdate.array[29];
  v60[30] = v57 & v3->needsSoundUpdate.array[30];
  v60[31] = v58 & v3->needsSoundUpdate.array[31];
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Just Disabled Cloth to Animated State");
  v14 = v59[0];
  v15 = globalWorldId;
  LODWORD(v16) = 0;
  while ( v14 )
  {
LABEL_7:
    v17 = __lzcnt(v14);
    v18 = v17 + 32 * (_DWORD)v16;
    if ( v17 >= 0x20 )
    {
      LODWORD(v25) = 32;
      LODWORD(v24) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v19 = 0x80000000 >> v17;
    if ( (v14 & (0x80000000 >> v17)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v15 = globalWorldId;
    v14 &= ~v19;
    if ( !HavokCloth_IsInstanceInUse(globalWorldId, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 553, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
      __debugbreak();
    if ( v13->targetStateIds[v18] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 554, ASSERT_TYPE_ASSERT, "(updateData->targetStateIds[instanceId] == HAVOK_CLOTH_UPDATE_STATEID_NOT_UPDATED)", (const char *)&queryFormat, "updateData->targetStateIds[instanceId] == HAVOK_CLOTH_UPDATE_STATEID_NOT_UPDATED") )
        __debugbreak();
    }
    HavokCloth_Update_SetInstanceAnimated(globalWorldId, v18);
  }
  while ( 1 )
  {
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= 0x20 )
      break;
    v14 = v59[v16];
    if ( v14 )
      goto LABEL_7;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Disabled Cloth Sounds");
  LODWORD(v20) = 0;
  v21 = v60[0];
  while ( v21 )
  {
LABEL_24:
    v22 = __lzcnt(v21);
    v23 = v22 + 32 * (_DWORD)v20;
    if ( v22 >= 0x20 )
    {
      LODWORD(v25) = 32;
      LODWORD(v24) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( (v21 & (0x80000000 >> v22)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v21 &= ~(0x80000000 >> v22);
    if ( !HavokCloth_IsInstanceInUse(v15, v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 569, ASSERT_TYPE_ASSERT, "(HavokCloth_IsInstanceInUse( globalWorldId, instanceId ))", (const char *)&queryFormat, "HavokCloth_IsInstanceInUse( globalWorldId, instanceId )") )
      __debugbreak();
    if ( v13->targetStateIds[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothupdate.cpp", 570, ASSERT_TYPE_ASSERT, "(updateData->targetStateIds[instanceId] == HAVOK_CLOTH_UPDATE_STATEID_NOT_UPDATED)", (const char *)&queryFormat, "updateData->targetStateIds[instanceId] == HAVOK_CLOTH_UPDATE_STATEID_NOT_UPDATED") )
      __debugbreak();
    HavokCloth_Update_BlendedSpeed(v15, v23);
  }
  while ( 1 )
  {
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= 0x20 )
      break;
    v21 = v60[v20];
    if ( v21 )
      goto LABEL_24;
  }
  Sys_ProfEndNamedEvent();
}

