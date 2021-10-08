/*
==============
Cloth_Update_GetTickerCount
==============
*/

unsigned int __fastcall Cloth_Update_GetTickerCount(const unsigned int globalWorldId)
{
  return ?Cloth_Update_GetTickerCount@@YAII@Z(globalWorldId);
}

/*
==============
Cloth_Update_InstanceState
==============
*/

void __fastcall Cloth_Update_InstanceState(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?Cloth_Update_InstanceState@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_Update_ApplyBulletImpact
==============
*/

void __fastcall Cloth_Update_ApplyBulletImpact(const unsigned int globalWorldId, const unsigned int instanceId, const unsigned int clothInstanceIdx, const unsigned int shapeKey, const vec3_t *start, const vec3_t *hitPos)
{
  ?Cloth_Update_ApplyBulletImpact@@YAXIIIIAEBTvec3_t@@0@Z(globalWorldId, instanceId, clothInstanceIdx, shapeKey, start, hitPos);
}

/*
==============
Cloth_Update_InstanceUpdatedThisFrame
==============
*/

bool __fastcall Cloth_Update_InstanceUpdatedThisFrame(const unsigned int globalWorldId, const unsigned int instanceId)
{
  return ?Cloth_Update_InstanceUpdatedThisFrame@@YA_NII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_Update_SetInstanceTransform
==============
*/

void __fastcall Cloth_Update_SetInstanceTransform(const unsigned int globalWorldId, const unsigned int instanceId, const vec3_t *origin, const vec4_t *orientationAsQuat)
{
  ?Cloth_Update_SetInstanceTransform@@YAXIIAEBTvec3_t@@AEBTvec4_t@@@Z(globalWorldId, instanceId, origin, orientationAsQuat);
}

/*
==============
Cloth_Update_Instance
==============
*/

void __fastcall Cloth_Update_Instance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?Cloth_Update_Instance@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_Update_InstanceStateTransition
==============
*/

void __fastcall Cloth_Update_InstanceStateTransition(const unsigned int globalWorldId, const unsigned int instanceId)
{
  ?Cloth_Update_InstanceStateTransition@@YAXII@Z(globalWorldId, instanceId);
}

/*
==============
Cloth_Update_SetBoneTransforms
==============
*/

void __fastcall Cloth_Update_SetBoneTransforms(const unsigned int globalWorldId, const unsigned int instanceId, const XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const XAnimCalcBuffer *animCalcBuffer, const float4 *const viewOffset)
{
  ?Cloth_Update_SetBoneTransforms@@YAXIIPEBUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimCalcBuffer@@QEBUfloat4@@@Z(globalWorldId, instanceId, animCalcInfo, dObj, animCalcBuffer, viewOffset);
}

/*
==============
Cloth_Update_GetCurrentTimestep
==============
*/

double __fastcall Cloth_Update_GetCurrentTimestep(const unsigned int globalWorldId)
{
  double result; 

  *(float *)&result = ?Cloth_Update_GetCurrentTimestep@@YAMI@Z(globalWorldId);
  return result;
}

/*
==============
Cloth_Update_GetBoneTransforms
==============
*/

void __fastcall Cloth_Update_GetBoneTransforms(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale, const float4 *const viewOffset)
{
  ?Cloth_Update_GetBoneTransforms@@YAXIIPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBV?$bitarray@$0DAA@@@PEAUXAnimCalcBuffer@@MQEBUfloat4@@@Z(globalWorldId, instanceId, animCalcInfo, dObj, requestedBones, animCalcBuffer, weightScale, viewOffset);
}

/*
==============
Cloth_Update_PhysicsProxies
==============
*/

void __fastcall Cloth_Update_PhysicsProxies(const unsigned int globalWorldId)
{
  ?Cloth_Update_PhysicsProxies@@YAXI@Z(globalWorldId);
}

/*
==============
Cloth_Update_AllocateMemory
==============
*/

void Cloth_Update_AllocateMemory(void)
{
  ?Cloth_Update_AllocateMemory@@YAXXZ();
}

/*
==============
Cloth_Update_GlobalWorldCreated
==============
*/

void __fastcall Cloth_Update_GlobalWorldCreated(const unsigned int globalWorldId)
{
  ?Cloth_Update_GlobalWorldCreated@@YAXI@Z(globalWorldId);
}

/*
==============
Cloth_Update_FrameFlip
==============
*/

void __fastcall Cloth_Update_FrameFlip(const unsigned int globalWorldId, const float timeStep, const vec3_t *focusPosition)
{
  ?Cloth_Update_FrameFlip@@YAXIMAEBTvec3_t@@@Z(globalWorldId, timeStep, focusPosition);
}

/*
==============
Cloth_Update_GlobalWorldDestroyed
==============
*/

void __fastcall Cloth_Update_GlobalWorldDestroyed(const unsigned int globalWorldId)
{
  ?Cloth_Update_GlobalWorldDestroyed@@YAXI@Z(globalWorldId);
}

/*
==============
Cloth_Update_HideByCollapsing
==============
*/

void __fastcall Cloth_Update_HideByCollapsing(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale)
{
  ?Cloth_Update_HideByCollapsing@@YAXIIPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBV?$bitarray@$0DAA@@@PEAUXAnimCalcBuffer@@M@Z(globalWorldId, instanceId, animCalcInfo, dObj, requestedBones, animCalcBuffer, weightScale);
}

/*
==============
Cloth_Update_FreeMemory
==============
*/

void Cloth_Update_FreeMemory(void)
{
  ?Cloth_Update_FreeMemory@@YAXXZ();
}

/*
==============
Cloth_Update_AllocateMemory
==============
*/

void Cloth_Update_AllocateMemory(void)
{
  HavokCloth_Update_AllocateMemory();
}

/*
==============
Cloth_Update_ApplyBulletImpact
==============
*/
void Cloth_Update_ApplyBulletImpact(const unsigned int globalWorldId, const unsigned int instanceId, const unsigned int clothInstanceIdx, const unsigned int shapeKey, const vec3_t *start, const vec3_t *hitPos)
{
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  hkVector4f v33; 
  hkVector4f v34; 

  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 256, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 257, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 258, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  _RDI = start;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 259, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", (const char *)&queryFormat, "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
      __debugbreak();
  }
  _RBX = hitPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0A8h+var_78], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 260, ASSERT_TYPE_ASSERT, "(!IS_NAN( hitPos[0] ) && !IS_NAN( hitPos[1] ) && !IS_NAN( hitPos[2] ))", (const char *)&queryFormat, "!IS_NAN( hitPos[0] ) && !IS_NAN( hitPos[1] ) && !IS_NAN( hitPos[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, cs:__real@3d000000
    vmulss  xmm0, xmm4, dword ptr [rdi]
    vmulss  xmm2, xmm4, dword ptr [rdi+4]
    vmulss  xmm1, xmm4, dword ptr [rdi+8]
    vxorps  xmm3, xmm3, xmm3
    vmovss  dword ptr [rsp+0A8h+var_58.m_quad], xmm0
    vmulss  xmm0, xmm4, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+0A8h+var_58.m_quad+4], xmm2
    vmulss  xmm2, xmm4, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+0A8h+var_58.m_quad+8], xmm1
    vmulss  xmm1, xmm4, dword ptr [rbx]
    vmovss  dword ptr [rsp+0A8h+var_68.m_quad], xmm1
    vmovss  dword ptr [rsp+0A8h+var_68.m_quad+4], xmm0
    vmovss  dword ptr [rsp+0A8h+var_68.m_quad+8], xmm2
    vmovss  dword ptr [rsp+0A8h+var_58.m_quad+0Ch], xmm3
    vmovss  dword ptr [rsp+0A8h+var_68.m_quad+0Ch], xmm3
  }
  HavokCloth_Update_ApplyBulletImpact(globalWorldId, instanceId, clothInstanceIdx, (const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>)shapeKey, &v34, &v33);
}

/*
==============
Cloth_Update_FrameFlip
==============
*/

void __fastcall Cloth_Update_FrameFlip(const unsigned int globalWorldId, double timeStep, const vec3_t *focusPosition)
{
  hkVector4f focusPositiona; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 126, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 127, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( Cloth_HasErrorFlag() )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14431CCB8, 305i64);
  __asm
  {
    vmovss  xmm4, cs:__real@3d000000
    vmulss  xmm3, xmm4, dword ptr [rdi+4]
    vmulss  xmm0, xmm4, dword ptr [rdi]
    vmulss  xmm2, xmm4, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+68h+focusPosition.m_quad+4], xmm3
    vxorps  xmm3, xmm3, xmm3
    vmovaps xmm1, xmm6; timeStep
    vmovss  dword ptr [rsp+68h+focusPosition.m_quad+0Ch], xmm3
    vmovss  dword ptr [rsp+68h+focusPosition.m_quad], xmm0
    vmovss  dword ptr [rsp+68h+focusPosition.m_quad+8], xmm2
  }
  HavokCloth_Update_FrameFlip(globalWorldId, *(const float *)&_XMM1, &focusPositiona);
  Cloth_Debug_Perf_FlipBuffer(globalWorldId);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
Cloth_Update_FreeMemory
==============
*/

void Cloth_Update_FreeMemory(void)
{
  HavokCloth_Update_FreeMemory();
}

/*
==============
Cloth_Update_GetBoneTransforms
==============
*/
void Cloth_Update_GetBoneTransforms(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale, const float4 *const viewOffset)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 209, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 210, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 211, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 212, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 213, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !requestedBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 214, ASSERT_TYPE_ASSERT, "(requestedBones)", (const char *)&queryFormat, "requestedBones") )
    __debugbreak();
  if ( !animCalcBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 215, ASSERT_TYPE_ASSERT, "(animCalcBuffer)", (const char *)&queryFormat, "animCalcBuffer") )
    __debugbreak();
  if ( !viewOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 216, ASSERT_TYPE_ASSERT, "(viewOffset)", (const char *)&queryFormat, "viewOffset") )
    __debugbreak();
  HavokCloth_Update_GetBoneTransforms(globalWorldId, instanceId, animCalcInfo, dObj, requestedBones, animCalcBuffer, weightScale, viewOffset);
}

/*
==============
Cloth_Update_GetCurrentTimestep
==============
*/
double Cloth_Update_GetCurrentTimestep(const unsigned int globalWorldId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 98, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 99, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  return HavokCloth_Update_GetCurrentTimestep(globalWorldId);
}

/*
==============
Cloth_Update_GetTickerCount
==============
*/
unsigned int Cloth_Update_GetTickerCount(const unsigned int globalWorldId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 112, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 113, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  return HavokCloth_Update_GetTickerCount(globalWorldId);
}

/*
==============
Cloth_Update_GlobalWorldCreated
==============
*/
void Cloth_Update_GlobalWorldCreated(const unsigned int globalWorldId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 52, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 53, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  HavokCloth_Update_GlobalWorldCreated(globalWorldId);
}

/*
==============
Cloth_Update_GlobalWorldDestroyed
==============
*/
void Cloth_Update_GlobalWorldDestroyed(const unsigned int globalWorldId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 64, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 65, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  HavokCloth_Update_GlobalWorldDestroyed(globalWorldId);
}

/*
==============
Cloth_Update_HideByCollapsing
==============
*/
void Cloth_Update_HideByCollapsing(const unsigned int globalWorldId, const unsigned int instanceId, XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const bitarray<768> *requestedBones, XAnimCalcBuffer *animCalcBuffer, const float weightScale)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 227, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 228, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 229, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 230, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 231, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !requestedBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 232, ASSERT_TYPE_ASSERT, "(requestedBones)", (const char *)&queryFormat, "requestedBones") )
    __debugbreak();
  if ( !animCalcBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 233, ASSERT_TYPE_ASSERT, "(animCalcBuffer)", (const char *)&queryFormat, "animCalcBuffer") )
    __debugbreak();
  HavokCloth_Update_HideByCollapsing(globalWorldId, instanceId, animCalcInfo, dObj, requestedBones, animCalcBuffer, weightScale);
}

/*
==============
Cloth_Update_Instance
==============
*/
void Cloth_Update_Instance(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 177, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 178, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 179, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 275, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 276, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 277, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 180, ASSERT_TYPE_ASSERT, "(!Cloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!Cloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  HavokCloth_Update_Instance(globalWorldId, instanceId);
}

/*
==============
Cloth_Update_InstanceState
==============
*/
void Cloth_Update_InstanceState(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 149, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 150, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 151, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 275, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 276, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 277, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 152, ASSERT_TYPE_ASSERT, "(!Cloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!Cloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  HavokCloth_Update_InstanceState(globalWorldId, instanceId);
}

/*
==============
Cloth_Update_InstanceStateTransition
==============
*/
void Cloth_Update_InstanceStateTransition(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 163, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 164, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 165, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 275, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 276, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 277, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( HavokCloth_Update_InstanceUpdatedThisFrame(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 166, ASSERT_TYPE_ASSERT, "(!Cloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!Cloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  HavokCloth_Update_InstanceStateTransition(globalWorldId, instanceId);
}

/*
==============
Cloth_Update_InstanceUpdatedThisFrame
==============
*/
bool Cloth_Update_InstanceUpdatedThisFrame(const unsigned int globalWorldId, const unsigned int instanceId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 275, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 276, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 277, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  return HavokCloth_Update_InstanceUpdatedThisFrame(globalWorldId, instanceId);
}

/*
==============
Cloth_Update_PhysicsProxies
==============
*/
void Cloth_Update_PhysicsProxies(const unsigned int globalWorldId)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 244, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 245, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  HavokCloth_Update_PhysicsProxies(globalWorldId);
}

/*
==============
Cloth_Update_SetBoneTransforms
==============
*/
void Cloth_Update_SetBoneTransforms(const unsigned int globalWorldId, const unsigned int instanceId, const XAnimCalcAnimInfo *animCalcInfo, const DObj *dObj, const XAnimCalcBuffer *animCalcBuffer, const float4 *const viewOffset)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 191, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 192, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 193, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  if ( Cloth_Update_InstanceUpdatedThisFrame(globalWorldId, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 194, ASSERT_TYPE_ASSERT, "(!Cloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId ))", (const char *)&queryFormat, "!Cloth_Update_InstanceUpdatedThisFrame( globalWorldId, instanceId )") )
    __debugbreak();
  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 195, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !dObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 196, ASSERT_TYPE_ASSERT, "(dObj)", (const char *)&queryFormat, "dObj") )
    __debugbreak();
  if ( !animCalcBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 197, ASSERT_TYPE_ASSERT, "(animCalcBuffer)", (const char *)&queryFormat, "animCalcBuffer") )
    __debugbreak();
  if ( !viewOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 198, ASSERT_TYPE_ASSERT, "(viewOffset)", (const char *)&queryFormat, "viewOffset") )
    __debugbreak();
  HavokCloth_Update_SetBoneTransforms(globalWorldId, instanceId, animCalcInfo, dObj, animCalcBuffer, viewOffset);
}

/*
==============
Cloth_Update_SetInstanceTransform
==============
*/
void Cloth_Update_SetInstanceTransform(const unsigned int globalWorldId, const unsigned int instanceId, const vec3_t *origin, const vec4_t *orientationAsQuat)
{
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  hkQuaternionf orientation; 
  hkVector4f origina; 

  _RBX = orientationAsQuat;
  _RDI = origin;
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 76, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( globalWorldId > Cloth_GetMaxSupportedGlobalWorlds() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 77, ASSERT_TYPE_ASSERT, "(globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds())", (const char *)&queryFormat, "globalWorldId <= Cloth_GetMaxSupportedGlobalWorlds()") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 78, ASSERT_TYPE_ASSERT, "(instanceId != CLOTH_INSTANCEID_INVALID)", (const char *)&queryFormat, "instanceId != CLOTH_INSTANCEID_INVALID") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 79, ASSERT_TYPE_ASSERT, "(!IS_NAN( origin[0] ) && !IS_NAN( origin[1] ) && !IS_NAN( origin[2] ))", (const char *)&queryFormat, "!IS_NAN( origin[0] ) && !IS_NAN( origin[1] ) && !IS_NAN( origin[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+88h+var_58], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothupdate.cpp", 80, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", (const char *)&queryFormat, "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmulss  xmm2, xmm3, dword ptr [rdi+4]
    vmulss  xmm1, xmm3, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+88h+origin.m_quad], xmm0
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  dword ptr [rsp+88h+origin.m_quad+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+88h+origin.m_quad+0Ch], xmm2
    vmovaps xmmword ptr [rsp+88h+orientation.m_vec.m_quad], xmm0
    vmovss  dword ptr [rsp+88h+origin.m_quad+8], xmm1
  }
  HavokCloth_Update_SetInstanceTransform(globalWorldId, instanceId, &origina, &orientation);
}

