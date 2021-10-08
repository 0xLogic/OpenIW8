/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForCharacterProxy
==============
*/

void __fastcall HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForCharacterProxy(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit, bool isServerCharacterProxy, const __int16 entNum)
{
  ?ModifyHitForCharacterProxy@HavokPhysicsHitCollector_DetailTraceModifier@@IEAAXPEBVHavokPhysicsHitCollector@@PEAUhknpCollisionResult@@_NF@Z(this, collector, hit, isServerCharacterProxy, entNum);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBounds
==============
*/

void __fastcall HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBounds(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit)
{
  ?ModifyHitForDetailBounds@HavokPhysicsHitCollector_DetailTraceModifier@@IEAAXPEBVHavokPhysicsHitCollector@@PEAUhknpCollisionResult@@@Z(this, collector, hit);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsShape
==============
*/

void __fastcall HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsShape(HavokPhysicsHitCollector_DetailTraceModifier *this, hknpClosestHitCollector *chc, unsigned int instanceId, DObjPartBits *partBits, const HavokPhysicsHitCollector *collector)
{
  ?ModifyHitForDetailBoundsShape@HavokPhysicsHitCollector_DetailTraceModifier@@IEAAXPEAVhknpClosestHitCollector@@IPEAUDObjPartBits@@PEBVHavokPhysicsHitCollector@@@Z(this, chc, instanceId, partBits, collector);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::AddDetailHitData
==============
*/

void __fastcall HavokPhysicsHitCollector_DetailTraceModifier::AddDetailHitData(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit, DObjTrace_s *objTrace)
{
  ?AddDetailHitData@HavokPhysicsHitCollector_DetailTraceModifier@@IEAAXPEBVHavokPhysicsHitCollector@@PEAUhknpCollisionResult@@PEAUDObjTrace_s@@@Z(this, collector, hit, objTrace);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::GetDetailHitData
==============
*/

const Physics_DetailHitData *__fastcall HavokPhysicsHitCollector_DetailTraceModifier::GetDetailHitData(HavokPhysicsHitCollector_DetailTraceModifier *this, int index)
{
  return ?GetDetailHitData@HavokPhysicsHitCollector_DetailTraceModifier@@QEBAPEBUPhysics_DetailHitData@@H@Z(this, index);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ClientModifyHitForShield
==============
*/

bool __fastcall HavokPhysicsHitCollector_DetailTraceModifier::ClientModifyHitForShield(const DObj *obj, const XModel *model, void *args)
{
  return ?ClientModifyHitForShield@HavokPhysicsHitCollector_DetailTraceModifier@@KA_NPEBUDObj@@PEBUXModel@@PEAX@Z(obj, model, args);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::GetNumDetailHitDatas
==============
*/

int __fastcall HavokPhysicsHitCollector_DetailTraceModifier::GetNumDetailHitDatas(HavokPhysicsHitCollector_DetailTraceModifier *this)
{
  return ?GetNumDetailHitDatas@HavokPhysicsHitCollector_DetailTraceModifier@@QEBAHXZ(this);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ServerModifyHitForShield
==============
*/

bool __fastcall HavokPhysicsHitCollector_DetailTraceModifier::ServerModifyHitForShield(const DObj *obj, const XModel *model, void *args)
{
  return ?ServerModifyHitForShield@HavokPhysicsHitCollector_DetailTraceModifier@@KA_NPEBUDObj@@PEBUXModel@@PEAX@Z(obj, model, args);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::HavokPhysicsHitCollector_DetailTraceModifier
==============
*/

void __fastcall HavokPhysicsHitCollector_DetailTraceModifier::HavokPhysicsHitCollector_DetailTraceModifier(HavokPhysicsHitCollector_DetailTraceModifier *this, Physics_WorldId worldId, unsigned __int8 *priorityMap)
{
  ??0HavokPhysicsHitCollector_DetailTraceModifier@@QEAA@W4Physics_WorldId@@PEAE@Z(this, worldId, priorityMap);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay
==============
*/

void __fastcall HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay(HavokPhysicsHitCollector_DetailTraceModifier *this, hknpClosestHitCollector *chc, unsigned int instanceId, DObjPartBits *partBits, const HavokPhysicsHitCollector *collector, unsigned int extraContentsFlags)
{
  ?ModifyHitForDetailBoundsRay@HavokPhysicsHitCollector_DetailTraceModifier@@IEAAXPEAVhknpClosestHitCollector@@IPEAUDObjPartBits@@PEBVHavokPhysicsHitCollector@@I@Z(this, chc, instanceId, partBits, collector, extraContentsFlags);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHit
==============
*/

void __fastcall HavokPhysicsHitCollector_DetailTraceModifier::ModifyHit(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit)
{
  ?ModifyHit@HavokPhysicsHitCollector_DetailTraceModifier@@UEAAXPEBVHavokPhysicsHitCollector@@PEAUhknpCollisionResult@@@Z(this, collector, hit);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::HavokPhysicsHitCollector_DetailTraceModifier
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::HavokPhysicsHitCollector_DetailTraceModifier(HavokPhysicsHitCollector_DetailTraceModifier *this, Physics_WorldId worldId, unsigned __int8 *priorityMap)
{
  hknpInplaceTriangleShape *p_m_triangle; 
  hknpWorld *World; 

  _R14 = this;
  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->__vftable = (HavokPhysicsHitCollector_DetailTraceModifier_vtbl *)&HavokPhysicsHitCollector_DetailTraceModifier::`vftable';
  this->m_detailHitData.m_data = NULL;
  this->m_detailHitData.m_size = 0;
  this->m_detailHitData.m_capacityAndFlags = 0x80000000;
  p_m_triangle = &this->m_triangle;
  __asm { vxorps  xmm1, xmm1, xmm1; radius }
  hknpInplaceTriangleShape::hknpInplaceTriangleShape(&this->m_triangle, *(float *)&_XMM1);
  _R14->m_queryContext.m_dispatcher = NULL;
  _R14->m_queryContext.m_queryTriangle = (hknpTriangleShape *)p_m_triangle;
  _R14->m_queryContext.m_targetTriangle = (hknpTriangleShape *)p_m_triangle;
  _R14->m_queryContext.m_initialCastFractionHint = 0.0;
  _R14->m_queryContext.m_externallyAllocatedTriangles = 1;
  _R14->m_targetShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
  _R14->m_targetShapeInfo.m_shapeKeyPath.m_size = 0;
  _R14->m_targetShapeInfo.m_body = NULL;
  _R14->m_targetShapeInfo.m_rootShape = NULL;
  _R14->m_targetShapeInfo.m_parentShape = NULL;
  _R14->m_targetShapeInfo.m_shapeToWorld = NULL;
  _R14->m_targetShapeInfo.m_shapeKeyMask = NULL;
  _R14->m_targetShapeInfo.m_scalingInternals.m_isScaled = 0;
  __asm
  {
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmmword ptr [r14+1A0h], xmm0
  }
  *(_QWORD *)&_R14->m_targetShapeInfo.m_scalingInternals.m_mode = 0i64;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovups xmmword ptr [r14+1B0h], xmm1
  }
  _R14->m_targetShapeFilterData.m_materialId.m_value = -1;
  _R14->m_targetShapeFilterData.m_collisionFilterInfo = 0;
  _R14->m_targetShapeFilterData.m_userData = 0i64;
  _R14->m_worldId = worldId;
  _R14->m_localClientNum = Physics_GetLocalClientForWorld(worldId);
  _R14->m_priorityMap = priorityMap;
  World = HavokPhysics_GetWorld(_R14->m_worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 70, ASSERT_TYPE_ASSERT, "( world )", (const char *)&queryFormat, "world", -2i64) )
    __debugbreak();
  _R14->m_queryContext.m_dispatcher = World->m_collisionQueryDispatcher;
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::AddDetailHitData
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::AddDetailHitData(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit, DObjTrace_s *objTrace)
{
  int m_size; 
  hkMemoryAllocator *v9; 
  int v10; 
  Physics_DetailHitData *m_data; 

  _RBX = objTrace;
  if ( !HavokPhysicsHitCollector::WillBeIgnored((HavokPhysicsHitCollector *)collector, hit) )
  {
    if ( HavokPhysicsHitCollector::WillHitReplaceCurrentHit((HavokPhysicsHitCollector *)collector, hit) )
    {
      m_size = this->m_detailHitData.m_size;
      if ( m_size > 0 )
        this->m_detailHitData.m_size = m_size - 1;
    }
    v9 = hkMemHeapAllocator();
    v10 = this->m_detailHitData.m_size;
    if ( v10 == (this->m_detailHitData.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v9, &this->m_detailHitData, 20);
      v10 = this->m_detailHitData.m_size;
    }
    m_data = this->m_detailHitData.m_data;
    this->m_detailHitData.m_size = v10 + 1;
    m_data[v10].isValid = 0;
    if ( _RBX )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vcomiss xmm0, dword ptr [rbx]
      }
      m_data[v10].isValid = 1;
      m_data[v10].surfaceflags = _RBX->surfaceflags;
      m_data[v10].modelIndex = _RBX->modelIndex;
      m_data[v10].partName = _RBX->partName;
      m_data[v10].partGroup = _RBX->partGroup;
    }
  }
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ClientModifyHitForShield
==============
*/
_BOOL8 HavokPhysicsHitCollector_DetailTraceModifier::ClientModifyHitForShield(const DObj *obj, const XModel *model, void *args)
{
  LocalClientNum_t v6; 
  int v7; 
  Physics_WorldId v8; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  unsigned int updated; 
  bool v41; 
  __int64 v43[2]; 
  DObjPartBits *partBits[2]; 
  vec3_t angles; 
  vec4_t quat; 
  hknpClosestHitCollector chc; 

  partBits[1] = (DObjPartBits *)-2i64;
  v6 = *(_DWORD *)(*(_QWORD *)args + 28i64);
  v7 = *((_DWORD *)args + 4);
  v8 = *(_DWORD *)(*(_QWORD *)args + 24i64);
  _RDI = CG_GetEntity(v6, v7);
  _RBX = CG_PhysicsObject_Get(v7, v6);
  Physics_LockWorld(v8);
  chc.m_hints.m_storage = 0;
  chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
  __asm { vxorps  xmm1, xmm1, xmm1 }
  chc.m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbp+40h+chc.baseclass_0.m_earlyOutThreshold.m_real], xmm0
  }
  chc.m_earlyOut.m_bool = 0;
  __asm
  {
    vmovups ymmword ptr [rbp+40h+chc.m_hit.m_position.m_quad], ymm1
    vmovss  xmm0, cs:__real@7f7fffee
    vmovss  [rbp+40h+chc.m_hit.m_fraction], xmm0
  }
  chc.m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&chc.m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  chc.m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&chc.m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  chc.m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  memset(&chc.m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo, 0, 20);
  _RAX = HavokPhysicsHitCollector::GetCollector(*((HavokPhysicsHitCollector **)args + 1));
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rbp+40h+chc.baseclass_0.m_earlyOutThreshold.m_real], xmm0
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !_RDI->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(_RDI->pose.origin.Get_origin, &_RDI->pose);
  FunctionPointer_origin(&_RDI->pose.origin.origin.origin, (vec3_t *)v43);
  if ( _RDI->pose.isPosePrecise )
  {
    __asm
    {
      vmovd   xmm0, [rsp+140h+var_110]
      vcvtdq2pd xmm0, xmm0
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  [rsp+140h+var_110], xmm1
      vmovd   xmm2, [rsp+140h+var_10C]
      vcvtdq2pd xmm2, xmm2
      vmulsd  xmm0, xmm2, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  [rsp+140h+var_10C], xmm1
      vmovd   xmm2, dword ptr [rsp+140h+var_108]
      vcvtdq2pd xmm2, xmm2
      vmulsd  xmm0, xmm2, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rsp+140h+var_108], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+48h]
    vmovss  dword ptr [rsp+140h+angles], xmm0
    vmovss  xmm1, dword ptr [rdi+4Ch]
    vmovss  dword ptr [rsp+140h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rdi+50h]
    vmovss  dword ptr [rsp+140h+angles+8], xmm0
  }
  AnglesToQuat(&angles, &quat);
  __asm
  {
    vmovss  xmm0, [rsp+140h+var_110]
    vmovss  dword ptr [rbx+2A0h], xmm0
    vmovss  xmm1, [rsp+140h+var_10C]
    vmovss  dword ptr [rbx+2A4h], xmm1
    vmovss  xmm0, dword ptr [rsp+140h+var_108]
    vmovss  dword ptr [rbx+2A8h], xmm0
    vmovss  xmm1, dword ptr [rsp+140h+quat]
    vmovss  dword ptr [rbx+2ACh], xmm1
    vmovss  xmm0, dword ptr [rsp+140h+quat+4]
    vmovss  dword ptr [rbx+2B0h], xmm0
    vmovss  xmm1, dword ptr [rsp+140h+quat+8]
    vmovss  dword ptr [rbx+2B4h], xmm1
    vmovss  xmm0, dword ptr [rsp+140h+quat+0Ch]
    vmovss  dword ptr [rbx+2B8h], xmm0
  }
  _RBX->detailCache.cached = 0;
  if ( CG_PhysicsObject_GetInstance(v8, v7, v6) != -1 )
  {
    partBits[0] = NULL;
    updated = CG_PhysicsObject_UpdateDetailWorldInstance((Physics_WorldId)(3 * v6 + 3), v8, v7, v6, partBits);
    HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay(*(HavokPhysicsHitCollector_DetailTraceModifier **)args, &chc, updated, partBits[0], *((const HavokPhysicsHitCollector **)args + 1), 0x2181u);
  }
  Physics_UnlockWorld(v8);
  v41 = chc.m_numHits != 0;
  memset(v43, 0, 0xCui64);
  chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  hkBaseObject::~hkBaseObject(&chc);
  return v41;
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::GetDetailHitData
==============
*/
Physics_DetailHitData *HavokPhysicsHitCollector_DetailTraceModifier::GetDetailHitData(HavokPhysicsHitCollector_DetailTraceModifier *this, int index)
{
  __int64 v2; 

  v2 = index;
  if ( index >= this->m_detailHitData.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 125, ASSERT_TYPE_ASSERT, "(index < m_detailHitData.getSize())", (const char *)&queryFormat, "index < m_detailHitData.getSize()") )
    __debugbreak();
  return &this->m_detailHitData.m_data[v2];
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::GetNumDetailHitDatas
==============
*/
__int64 HavokPhysicsHitCollector_DetailTraceModifier::GetNumDetailHitDatas(HavokPhysicsHitCollector_DetailTraceModifier *this)
{
  return (unsigned int)this->m_detailHitData.m_size;
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHit
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::ModifyHit(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit)
{
  int Ref; 
  bool RefDetailFlag; 
  Physics_RefSystem RefSystem; 
  Physics_RefSystem v9; 
  __int16 entNum; 

  Ref = HavokPhysics_GetRef(this->m_worldId, hit->m_hitBodyInfo.m_bodyId);
  RefDetailFlag = Physics_GetRefDetailFlag(Ref);
  RefSystem = Physics_GetRefSystem(Ref);
  v9 = RefSystem;
  if ( RefDetailFlag )
  {
    HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBounds(this, collector, hit);
LABEL_3:
    HavokPhysicsHitCollector_DetailTraceModifier::AddDetailHitData(this, collector, hit, NULL);
    return;
  }
  if ( ((RefSystem - 3) & 0xFFFFFFFD) != 0 || Physics_GetRefSubSystem(Ref) )
    goto LABEL_3;
  entNum = Physics_GetRefId(Ref);
  HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForCharacterProxy(this, collector, hit, v9 == Physics_RefSystem_GCharacterProxies, entNum);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForCharacterProxy
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForCharacterProxy(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit, bool isServerCharacterProxy, const __int16 entNum)
{
  gentity_s *v21; 
  GAntiLag *v22; 
  playerState_s *EntityPlayerState; 
  const playerState_s *v24; 
  GHandler *Handler; 
  SvAntilagArchiveInfo *v26; 
  unsigned __int8 *m_priorityMap; 
  char v28; 
  DObj *ClientDObj; 
  DObj *v49; 
  unsigned __int8 *v66; 
  DObj *obj; 
  centity_t *obja; 
  HavokPhysicsHitCollector_DetailTraceModifier *userArgs; 
  const HavokPhysicsHitCollector *v81; 
  int v82; 
  vec3_t in1; 
  vec3_t v84; 
  DObjTrace_s trace; 
  vec3_t out; 
  vec3_t end; 
  tmat43_t<vec3_t> result; 
  DObjPartBits partBits; 
  WorldUpReferenceFrame v90; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RSI = hit;
  Profile_Begin(764);
  HavokPhysicsHitCollector::GetModifierCastStart((HavokPhysicsHitCollector *)collector);
  __asm
  {
    vmovss  xmm6, cs:__real@42000000
    vmulss  xmm0, xmm6, dword ptr [rax]
    vmovss  dword ptr [rsp+1A0h+in1], xmm0
    vmulss  xmm2, xmm6, dword ptr [rax+4]
    vmovss  dword ptr [rsp+1A0h+in1+4], xmm2
    vmulss  xmm1, xmm6, dword ptr [rax+8]
    vmovss  dword ptr [rsp+1A0h+in1+8], xmm1
  }
  HavokPhysicsHitCollector::GetModifierCastEnd((HavokPhysicsHitCollector *)collector);
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm1, xmm6, dword ptr [rax]
    vmovss  dword ptr [rsp+1A0h+var_130], xmm1
    vmulss  xmm0, xmm6, dword ptr [rax+4]
    vmovss  dword ptr [rsp+1A0h+var_130+4], xmm0
    vmulss  xmm2, xmm6, dword ptr [rax+8]
    vmovss  dword ptr [rsp+1A0h+var_130+8], xmm2
    vmovss  [rbp+0A0h+trace.fraction], xmm8
  }
  if ( isServerCharacterProxy )
  {
    v21 = SV_GentityNum(entNum);
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 485, ASSERT_TYPE_ASSERT, "(touch)", (const char *)&queryFormat, "touch") )
      __debugbreak();
    obj = Com_GetServerDObjForEntnum(entNum);
    if ( !obj )
      goto LABEL_23;
    AnglesAndOriginToMatrix43(&v21->r.currentAngles, &v21->r.currentOrigin, &result);
    if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    v22 = GAntiLag::ms_gAntiLagData;
    EntityPlayerState = G_GetEntityPlayerState(v21);
    v24 = EntityPlayerState;
    if ( EntityPlayerState && !v22->IsWorldUpIncludedOnEntity(v22, EntityPlayerState->clientNum) )
    {
      Handler = GHandler::getHandler();
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v90, v24, Handler);
      WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v90, (tmat33_t<vec3_t> *)&result);
    }
    MatrixTransposeTransformVector43(&in1, &result, &out);
    MatrixTransposeTransformVector43(&v84, &result, &end);
    DObjTracelinePartBits(obj, &partBits);
    v26 = v22->GetAntilagTraceInfo(v22);
    if ( v26 )
      G_Utils_DObjCalcAntilagPose(v21, v26, &partBits);
    else
      G_Utils_DObjCalcPose(v21, &partBits);
    m_priorityMap = this->m_priorityMap;
    userArgs = this;
    v81 = collector;
    v82 = entNum;
    DObjTraceline(obj, &out, &end, m_priorityMap, &trace, HavokPhysicsHitCollector_DetailTraceModifier::ServerModifyHitForShield, &userArgs);
    __asm
    {
      vmovss  xmm7, [rbp+0A0h+trace.fraction]
      vcomiss xmm7, xmm8
    }
    if ( !v28 )
      goto LABEL_23;
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+0A0h+trace.normal+4]
      vmovss  xmm6, dword ptr [rbp+0A0h+trace.normal]
      vmovss  xmm5, dword ptr [rbp+0A0h+trace.normal+8]
      vmulss  xmm1, xmm4, dword ptr [rbp+0A0h+result+0Ch]
      vmulss  xmm0, xmm4, dword ptr [rbp+0A0h+result+10h]
      vmulss  xmm2, xmm6, dword ptr [rbp+0A0h+result]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm5, dword ptr [rbp+0A0h+result+18h]
      vaddss  xmm2, xmm3, xmm1
      vmulss  xmm1, xmm6, dword ptr [rbp+0A0h+result+4]
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm4, dword ptr [rbp+0A0h+result+14h]
      vmovss  dword ptr [rbp+0A0h+trace.normal], xmm2
      vmulss  xmm2, xmm5, dword ptr [rbp+0A0h+result+1Ch]
      vaddss  xmm0, xmm3, xmm2
      vmulss  xmm3, xmm6, dword ptr [rbp+0A0h+result+8]
      vmulss  xmm2, xmm5, dword ptr [rbp+0A0h+result+20h]
      vaddss  xmm4, xmm3, xmm1
      vaddss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rbp+0A0h+trace.normal+8], xmm1
      vmovss  dword ptr [rbp+0A0h+trace.normal+4], xmm0
    }
  }
  else
  {
    obja = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
    if ( !obja && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 551, ASSERT_TYPE_ASSERT, "(touch)", (const char *)&queryFormat, "touch") )
      __debugbreak();
    ClientDObj = Com_GetClientDObj(entNum, this->m_localClientNum);
    if ( !ClientDObj )
      goto LABEL_23;
    while ( 1 )
    {
      DObjLock(ClientDObj);
      v49 = Com_GetClientDObj(entNum, this->m_localClientNum);
      if ( ClientDObj == v49 )
        break;
      DObjUnlock(ClientDObj);
      ClientDObj = v49;
      if ( !v49 )
        goto LABEL_23;
    }
    if ( !ClientDObj )
      goto LABEL_23;
    CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1A0h+in1]
      vmovss  xmm2, dword ptr [rsp+1A0h+in1+4]
      vsubss  xmm1, xmm0, dword ptr [rax+699Ch]
      vmovss  dword ptr [rbp+0A0h+end], xmm1
      vsubss  xmm0, xmm2, dword ptr [rax+69A0h]
      vmovss  xmm1, dword ptr [rsp+1A0h+in1+8]
      vmovss  dword ptr [rbp+0A0h+end+4], xmm0
      vsubss  xmm2, xmm1, dword ptr [rax+69A4h]
      vmovss  xmm0, dword ptr [rsp+1A0h+var_130]
      vmovss  dword ptr [rbp+0A0h+end+8], xmm2
      vsubss  xmm1, xmm0, dword ptr [rax+699Ch]
      vmovss  xmm2, dword ptr [rsp+1A0h+var_130+4]
      vmovss  dword ptr [rbp+0A0h+out], xmm1
      vsubss  xmm0, xmm2, dword ptr [rax+69A0h]
      vmovss  xmm1, dword ptr [rsp+1A0h+var_130+8]
      vmovss  dword ptr [rbp+0A0h+out+4], xmm0
      vsubss  xmm2, xmm1, dword ptr [rax+69A4h]
      vmovss  dword ptr [rbp+0A0h+out+8], xmm2
    }
    DObjTracelinePartBits(ClientDObj, &partBits);
    CG_Pose_CalcDObjPose(&obja->pose, ClientDObj, &partBits);
    if ( !DObjSkelAreBonesUpToDate(ClientDObj, &partBits) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 596, ASSERT_TYPE_ASSERT, "(DObjSkelAreBonesUpToDate( obj, &partBits ))", (const char *)&queryFormat, "DObjSkelAreBonesUpToDate( obj, &partBits )") )
      __debugbreak();
    DObjUnlock(ClientDObj);
    v66 = this->m_priorityMap;
    userArgs = this;
    v81 = collector;
    v82 = entNum;
    DObjTraceline(ClientDObj, &end, &out, v66, &trace, HavokPhysicsHitCollector_DetailTraceModifier::ClientModifyHitForShield, &userArgs);
    __asm { vmovss  xmm7, [rbp+0A0h+trace.fraction] }
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( v28 )
  {
    __asm
    {
      vmovaps xmm6, xmm7
      vshufps xmm6, xmm6, xmm6, 0
    }
    _RBX = HavokPhysicsHitCollector::GetModifierCastEnd((HavokPhysicsHitCollector *)collector);
    HavokPhysicsHitCollector::GetModifierCastStart((HavokPhysicsHitCollector *)collector);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vsubps  xmm1, xmm0, xmmword ptr [rax]
      vmovss  xmm0, dword ptr [rbp+0A0h+trace.normal]
      vmulps  xmm2, xmm1, xmm6
      vaddps  xmm3, xmm2, xmmword ptr [rax]
      vmovss  xmm1, dword ptr [rbp+0A0h+trace.normal+4]
      vmovups xmmword ptr [rsi], xmm3
      vmovss  dword ptr [rsi+10h], xmm0
      vmovss  xmm0, dword ptr [rbp+0A0h+trace.normal+8]
      vmovss  dword ptr [rsi+14h], xmm1
      vmovss  xmm1, [rbp+0A0h+trace.fraction]
      vmovss  dword ptr [rsi+18h], xmm0
      vmovss  dword ptr [rsi+20h], xmm1
    }
    goto LABEL_24;
  }
LABEL_23:
  _RSI->m_rayCastResult.m_value = 0;
  _RSI->m_fraction = 1.0;
LABEL_24:
  HavokPhysicsHitCollector_DetailTraceModifier::AddDetailHitData(this, collector, _RSI, &trace);
  Profile_EndInternal(NULL);
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBounds
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBounds(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit)
{
  int Ref; 
  __int32 v9; 
  unsigned int updated; 
  unsigned __int16 RefId; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  int v15; 
  __int64 v16; 
  const char *v17; 
  const char *v18; 
  int v19; 
  __int64 m_localClientNum; 
  hknpCollisionQueryType::Enum m_queryType; 
  __int64 extraContentsFlags; 
  __int64 v30; 
  DObjPartBits *partBits[2]; 
  hknpClosestHitCollector chc; 

  partBits[1] = (DObjPartBits *)-2i64;
  _R14 = hit;
  Ref = HavokPhysics_GetRef(this->m_worldId, hit->m_hitBodyInfo.m_bodyId);
  v9 = Physics_GetRefSystem(Ref) - 1;
  Physics_LockWorld(this->m_worldId);
  updated = -1;
  partBits[0] = NULL;
  switch ( v9 )
  {
    case 0:
      RefId = Physics_GetRefId(Ref);
      updated = DynEnt_UpdateDetailPhysics((Physics_WorldId)(3 * this->m_localClientNum + 3), (Physics_WorldId)(3 * this->m_localClientNum + 4), RefId, this->m_localClientNum);
      goto LABEL_28;
    case 1:
    case 8:
      v12 = Physics_GetRefId(Ref);
      updated = G_PhysicsObject_UpdateDetailWorldInstance(PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_SERVER_DETAIL, v12, partBits);
      goto LABEL_28;
    case 3:
      v13 = Physics_GetRefId(Ref);
      updated = CG_PhysicsObject_UpdateDetailWorldInstance((Physics_WorldId)(3 * this->m_localClientNum + 3), (Physics_WorldId)(3 * this->m_localClientNum + 4), v13, this->m_localClientNum, partBits);
      goto LABEL_28;
    case 7:
      v15 = Ref >> 22;
      v16 = Ref & 0x3FFFFF;
      if ( (v15 & 3) != 0 )
      {
        m_localClientNum = this->m_localClientNum;
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v16 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v16, g_scriptableWorldCounts.totalInstanceCount) )
            __debugbreak();
        }
        if ( (unsigned int)m_localClientNum >= 2 )
        {
          LODWORD(v30) = 2;
          LODWORD(extraContentsFlags) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 124, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", extraContentsFlags, v30) )
            __debugbreak();
        }
        if ( !g_scriptableCl_instanceContexts[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 125, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        updated = g_scriptableCl_instanceContexts[m_localClientNum][(unsigned int)v16].collisionContext.scriptableCollisionDetail;
        if ( Physics_GetNumRigidBodys((const Physics_WorldId)(3 * this->m_localClientNum + 4), updated) != 1 )
        {
          v17 = "Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( m_localClientNum ), instanceId ) == 1";
          v18 = "(Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( m_localClientNum ), instanceId ) == 1)";
          v19 = 337;
LABEL_26:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", v19, ASSERT_TYPE_ASSERT, v18, (const char *)&queryFormat, v17) )
            __debugbreak();
        }
      }
      else
      {
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v16 >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(extraContentsFlags) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", extraContentsFlags, g_scriptableWorldCounts.serverInstanceCount) )
            __debugbreak();
        }
        updated = g_scriptableSv_instanceContexts[v16].collisionContext.scriptableCollisionDetail;
        if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_SERVER_DETAIL, updated) != 1 )
        {
          v17 = "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, instanceId ) == 1";
          v18 = "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, instanceId ) == 1)";
          v19 = 330;
          goto LABEL_26;
        }
      }
LABEL_28:
      if ( updated == -1 )
      {
LABEL_32:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 352, ASSERT_TYPE_ASSERT, "( instanceId != 0xFFFFFFFF )", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
      }
      chc.m_hints.m_storage = 0;
      chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
      __asm { vxorps  xmm1, xmm1, xmm1 }
      chc.m_numHits = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
        vmovups xmmword ptr [rbp+57h+chc.baseclass_0.m_earlyOutThreshold.m_real], xmm0
      }
      chc.m_earlyOut.m_bool = 0;
      __asm
      {
        vmovups ymmword ptr [rbp+57h+chc.m_hit.m_position.m_quad], ymm1
        vmovss  xmm0, cs:__real@7f7fffee
        vmovss  [rbp+57h+chc.m_hit.m_fraction], xmm0
      }
      chc.m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
      *(_QWORD *)&chc.m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
      chc.m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
      chc.m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
      chc.m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
      chc.m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
      *(_QWORD *)&chc.m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
      chc.m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
      memset(&chc.m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo, 0, 20);
      _RAX = HavokPhysicsHitCollector::GetCollector((HavokPhysicsHitCollector *)collector);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+10h]
        vmovups xmmword ptr [rbp+57h+chc.baseclass_0.m_earlyOutThreshold.m_real], xmm0
      }
      m_queryType = _R14->m_queryType;
      if ( m_queryType == RAY_CAST )
      {
        HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay(this, &chc, updated, partBits[0], collector, 0);
      }
      else if ( m_queryType == SHAPE_CAST )
      {
        HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsShape(this, &chc, updated, partBits[0], collector);
      }
      else
      {
        LODWORD(extraContentsFlags) = _R14->m_queryType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 368, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported detail bound query type %i", extraContentsFlags) )
          __debugbreak();
      }
      Physics_UnlockWorld(this->m_worldId);
      if ( chc.m_numHits )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+57h+chc.m_hit.m_position.m_quad]
          vmovups ymmword ptr [r14], ymm0
          vmovss  xmm0, [rbp+57h+chc.m_hit.m_fraction]
          vmovss  dword ptr [r14+20h], xmm0
        }
        _R14->m_queryBodyInfo.m_bodyId.m_serialAndIndex = chc.m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex;
        _R14->m_queryBodyInfo.m_shapeKey.m_value = chc.m_hit.m_queryBodyInfo.m_shapeKey.m_value;
        *(_DWORD *)_R14->m_queryBodyInfo.m_levelOfDetail = *(_DWORD *)chc.m_hit.m_queryBodyInfo.m_levelOfDetail;
        _R14->m_queryBodyInfo.m_filterData.m_materialId.m_value = chc.m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value;
        _R14->m_queryBodyInfo.m_filterData.m_collisionFilterInfo = chc.m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
        _R14->m_queryBodyInfo.m_filterData.m_userData = chc.m_hit.m_queryBodyInfo.m_filterData.m_userData;
        _R14->m_hitBodyInfo.m_bodyId.m_serialAndIndex = chc.m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex;
        _R14->m_hitBodyInfo.m_shapeKey.m_value = chc.m_hit.m_hitBodyInfo.m_shapeKey.m_value;
        *(_DWORD *)_R14->m_hitBodyInfo.m_levelOfDetail = *(_DWORD *)chc.m_hit.m_hitBodyInfo.m_levelOfDetail;
        _R14->m_hitBodyInfo.m_filterData.m_materialId.m_value = chc.m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value;
        _R14->m_hitBodyInfo.m_filterData.m_collisionFilterInfo = chc.m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
        _R14->m_hitBodyInfo.m_filterData.m_userData = chc.m_hit.m_hitBodyInfo.m_filterData.m_userData;
        _R14->m_queryType = chc.m_hit.m_queryType;
        _R14->m_rayCastResult.m_value = chc.m_hit.m_rayCastResult.m_value;
      }
      else
      {
        _R14->m_fraction = 1.0;
        _R14->m_rayCastResult.m_value = 0;
      }
      chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
      hkBaseObject::~hkBaseObject(&chc);
      return;
    case 9:
      v14 = Physics_GetRefId(Ref);
      updated = CG_ClientModel_Physics_UpdateDetailWorldInstance((const LocalClientNum_t)this->m_localClientNum, v14);
      goto LABEL_28;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 346, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled system ref for detail bounds") )
        __debugbreak();
      goto LABEL_32;
  }
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay(HavokPhysicsHitCollector_DetailTraceModifier *this, hknpClosestHitCollector *chc, unsigned int instanceId, DObjPartBits *partBits, const HavokPhysicsHitCollector *collector, unsigned int extraContentsFlags)
{
  Physics_WorldId m_worldId; 
  DObjPartBits *v9; 
  unsigned int v10; 
  hknpRayCastQuery *ModifierRaycastQuery; 
  hknpCollisionQuery *ModifierBatchRaycastQuery; 
  hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> *p_m_flags; 
  int m_storage; 
  unsigned int v16; 
  int v17; 
  Physics_WorldId v18; 
  unsigned int NumRigidBodys; 
  unsigned __int64 v20; 
  unsigned int v21; 
  unsigned int m_serialAndIndex; 
  const hknpShape *m_shape; 
  hkMonitorStream *Value; 
  __int64 v63; 
  __int64 v66; 
  const hknpBody *m_body; 
  __int128 *p_m_targetShapeFilterData; 
  hkMonitorStream *v69; 
  __int64 v71; 
  __int64 v72; 
  unsigned int v74; 
  hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> result; 
  hknpBodyId v76; 
  DObjPartBits *v77; 
  hknpWorld *World; 
  HavokPhysicsHitCollector *v79; 
  __int128 v80; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const hknpCollisionFilter *m_filter; 
  unsigned __int16 m_value; 
  unsigned int v84; 
  unsigned __int64 m_userData; 
  int v86; 
  char v87; 
  int v91; 

  _R13 = this;
  m_worldId = this->m_worldId;
  v9 = partBits;
  v79 = (HavokPhysicsHitCollector *)collector;
  v10 = instanceId;
  v77 = partBits;
  _R15 = chc;
  World = HavokPhysics_GetWorld(m_worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 134, ASSERT_TYPE_ASSERT, "( world )", (const char *)&queryFormat, "world") )
    __debugbreak();
  ModifierRaycastQuery = HavokPhysicsHitCollector::GetModifierRaycastQuery((HavokPhysicsHitCollector *)collector);
  ModifierBatchRaycastQuery = HavokPhysicsHitCollector::GetModifierBatchRaycastQuery((HavokPhysicsHitCollector *)collector);
  HavokPhysicsHitCollector::GetModifierBatchRaycastFlags((HavokPhysicsHitCollector *)collector, &result);
  if ( ModifierRaycastQuery )
    ModifierBatchRaycastQuery = ModifierRaycastQuery;
  if ( ModifierRaycastQuery )
    p_m_flags = &ModifierRaycastQuery->m_flags;
  else
    p_m_flags = &result;
  m_storage = p_m_flags->m_storage;
  if ( !ModifierBatchRaycastQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 143, ASSERT_TYPE_ASSERT, "(baseQuery)", (const char *)&queryFormat, "baseQuery") )
    __debugbreak();
  v87 = -5;
  m_shapeTagCodec = ModifierBatchRaycastQuery->m_shapeTagCodec;
  m_filter = ModifierBatchRaycastQuery->m_filter;
  m_value = ModifierBatchRaycastQuery->m_filterData.m_materialId.m_value;
  v16 = extraContentsFlags | ModifierBatchRaycastQuery->m_filterData.m_collisionFilterInfo;
  m_userData = ModifierBatchRaycastQuery->m_filterData.m_userData;
  v17 = *(_DWORD *)ModifierBatchRaycastQuery->m_levelOfDetail;
  v84 = v16;
  v18 = _R13->m_worldId;
  v86 = v17;
  v91 = m_storage;
  NumRigidBodys = Physics_GetNumRigidBodys(v18, v10);
  if ( NumRigidBodys == 1 )
    v74 = 1;
  else
    v74 = NumRigidBodys - 1;
  v20 = 0i64;
  __asm { vmovaps [rsp+140h+var_40], xmm6 }
  v21 = 0;
  do
  {
    if ( !v9 )
      goto LABEL_21;
    if ( v21 >= 0x100 )
    {
      LODWORD(v72) = 256;
      LODWORD(v71) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v71, v72) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v21 & 0x1F)) & v9->array[v20 >> 5]) != 0 )
    {
LABEL_21:
      HavokPhysics_GetRigidBodyID(&v76, (const Physics_WorldId)_R13->m_worldId, v10, v21);
      m_serialAndIndex = v76.m_serialAndIndex;
      if ( (v76.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 169, ASSERT_TYPE_ASSERT, "( bodyId.isValid() )", (const char *)&queryFormat, "bodyId.isValid()") )
        __debugbreak();
      _RSI = (const hknpBody *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))World->getBody)(&World->hknpWorldReader, m_serialAndIndex);
      m_shape = _RSI->m_shape;
      if ( m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, RAY_CAST, (const hknpQueryFilterData *)&m_value, _RSI) )
      {
        _RAX = HavokPhysicsHitCollector::GetModifierCastStart(v79);
        __asm
        {
          vmovups xmm1, xmmword ptr [rsi]
          vmovups xmm0, xmmword ptr [rax]
          vsubps  xmm5, xmm0, xmmword ptr [rsi+30h]
          vmovups xmm0, xmmword ptr [rsi+10h]
          vdpps   xmm3, xmm0, xmm5, 72h ; 'r'
          vmovups xmm0, xmmword ptr [rsi+20h]
          vdpps   xmm2, xmm1, xmm5, 71h ; 'q'
          vdpps   xmm1, xmm0, xmm5, 74h ; 't'
          vorps   xmm4, xmm3, xmm2
          vorps   xmm6, xmm4, xmm1
        }
        _RAX = HavokPhysicsHitCollector::GetModifierCastEnd(v79);
        __asm
        {
          vmovups xmm1, xmmword ptr [rsi+10h]
          vmovups xmm0, xmmword ptr [rax]
          vsubps  xmm5, xmm0, xmmword ptr [rsi+30h]
          vmovups xmm0, xmmword ptr [rsi]
          vdpps   xmm3, xmm1, xmm5, 72h ; 'r'
          vmovups xmm1, xmmword ptr [rsi+20h]
          vdpps   xmm2, xmm0, xmm5, 71h ; 'q'
          vorps   xmm4, xmm3, xmm2
          vdpps   xmm0, xmm1, xmm5, 74h ; 't'
          vorps   xmm2, xmm4, xmm0
          vsubps  xmm3, xmm2, xmm6
          vblendps xmm1, xmm3, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
          vmovups [rbp+40h+var_90], xmm6
          vxorps  xmm4, xmm4, xmm4
          vcmpeqps xmm0, xmm4, xmm1
          vandnps xmm2, xmm0, xmm1
          vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
        }
        _R13->m_targetShapeInfo.m_body = _RSI;
        __asm
        {
          vmovups [rbp+40h+var_80], xmm2
          vcmpeqps xmm0, xmm4, xmm2
          vmovups xmm4, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
          vrcpps  xmm3, xmm2
          vmulps  xmm2, xmm3, xmm2
          vsubps  xmm2, xmm1, xmm2
          vmulps  xmm3, xmm2, xmm3
          vblendvps xmm1, xmm3, xmm4, xmm0
          vmovups [rbp+40h+var_70], xmm1
        }
        _R13->m_targetShapeInfo.m_rootShape = _RSI->m_shape;
        _R13->m_targetShapeInfo.m_parentShape = NULL;
        _R13->m_targetShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
        _R13->m_targetShapeInfo.m_shapeKeyPath.m_size = 0;
        _R13->m_targetShapeInfo.m_shapeToWorld = &_RSI->m_transform;
        _R13->m_targetShapeInfo.m_shapeKeyMask = NULL;
        _R13->m_targetShapeFilterData.m_materialId.m_value = _RSI->m_materialId.m_value;
        _R13->m_targetShapeFilterData.m_collisionFilterInfo = _RSI->m_collisionFilterInfo;
        _R13->m_targetShapeFilterData.m_userData = _RSI->m_userData;
        s_shapeTagCodec->overrideInitialFilterData(s_shapeTagCodec, RAY_CAST, _RSI, m_shape, &_R13->m_targetShapeFilterData);
        Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( Value )
          hkMonitorStream::timerBegin(Value, "TtRaycast_Body_Detail_HK");
        __asm
        {
          vmovups xmm1, xmmword ptr [r15+10h]
          vbroadcastss xmm2, dword ptr [rbp+40h+var_80+0Ch]
        }
        v63 = (__int64)m_shapeTagCodec;
        __asm
        {
          vminps  xmm2, xmm1, xmm2
          vmovups xmmword ptr [r15+10h], xmm2
        }
        if ( v63 && (*(_BYTE *)(v63 + 24) & 1) != 0 )
        {
          __asm { vmovups xmm0, xmmword ptr [r13+1C0h] }
          v66 = *(_QWORD *)v63;
          m_body = _R13->m_targetShapeInfo.m_body;
          __asm { vmovups [rsp+140h+var_D8], xmm0 }
          (*(void (__fastcall **)(__int64, __int64, const hknpBody *, const hknpShape *, __int128 *))(v66 + 24))(v63, 1i64, m_body, m_shape, &v80);
          p_m_targetShapeFilterData = &v80;
        }
        else
        {
          p_m_targetShapeFilterData = (__int128 *)&_R13->m_targetShapeFilterData;
        }
        m_shape->castRayImpl((hknpShape *)m_shape, &_R13->m_queryContext, (const hknpRayCastQuery *)&m_shapeTagCodec, (const hknpQueryFilterData *)p_m_targetShapeFilterData, &_R13->m_targetShapeInfo, _R15);
        v69 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v69 )
          hkMonitorStream::timerEnd(v69, "Et");
        v10 = instanceId;
      }
      v9 = v77;
    }
    ++v21;
    ++v20;
  }
  while ( v21 < v74 );
  __asm { vmovaps xmm6, [rsp+140h+var_40] }
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsShape
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsShape(HavokPhysicsHitCollector_DetailTraceModifier *this, hknpClosestHitCollector *chc, unsigned int instanceId, DObjPartBits *partBits, const HavokPhysicsHitCollector *collector)
{
  Physics_WorldId m_worldId; 
  unsigned int v14; 
  __int64 v15; 
  const hkQuaternionf *ModifierShapecastRotation; 
  Physics_WorldId v26; 
  unsigned int NumRigidBodys; 
  unsigned __int64 v30; 
  unsigned int v31; 
  unsigned int m_serialAndIndex; 
  const hknpShape *m_shape; 
  hkMonitorStream *Value; 
  hkMonitorStream *v63; 
  hknpShapeQueryInfo *targetShapeInfo; 
  hknpCollisionQueryCollector *v84; 
  unsigned int v86; 
  hknpBodyId result; 
  hknpWorld *World; 
  hknpCollisionQueryCollector *v89; 
  hknpShapeQueryInfo queryShapeInfoIn; 
  char v91[64]; 
  char v98; 

  __asm
  {
    vmovaps [rsp+1A8h+var_78], xmm9
    vmovaps [rsp+1A8h+var_88], xmm10
    vmovaps [rsp+1A8h+var_98], xmm11
  }
  m_worldId = this->m_worldId;
  v14 = instanceId;
  v89 = chc;
  World = HavokPhysics_GetWorld(m_worldId);
  v15 = (__int64)World;
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 205, ASSERT_TYPE_ASSERT, "( world )", (const char *)&queryFormat, "world") )
    __debugbreak();
  _RSI = HavokPhysicsHitCollector::GetModifierShapecastQuery((HavokPhysicsHitCollector *)collector);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 208, ASSERT_TYPE_ASSERT, "(query)", (const char *)&queryFormat, "query") )
    __debugbreak();
  __asm
  {
    vmovups xmm1, xmmword ptr [rsi+40h]
    vmovups xmm10, xmmword ptr [rsi+30h]
    vshufps xmm0, xmm1, xmm1, 0FFh
    vmulps  xmm1, xmm0, xmm1
    vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+1A8h+var_E8], ymm0
    vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+1A8h+var_E8+20h], ymm0
    vaddps  xmm11, xmm1, xmm10
  }
  ModifierShapecastRotation = HavokPhysicsHitCollector::GetModifierShapecastRotation((HavokPhysicsHitCollector *)collector);
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v91, ModifierShapecastRotation);
  __asm { vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000 }
  v26 = this->m_worldId;
  __asm
  {
    vmovups xmmword ptr [rsp+1A8h+queryShapeInfoIn.m_scalingInternals.m_scale.m_quad], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+1A8h+queryShapeInfoIn.m_scalingInternals.m_convexRadius], xmm0
    vmovups xmmword ptr [rsp+1A8h+var_E8+30h], xmm10
  }
  queryShapeInfoIn.m_shapeKeyPath.m_key.m_value = -1;
  queryShapeInfoIn.m_shapeKeyPath.m_size = 0;
  queryShapeInfoIn.m_body = NULL;
  queryShapeInfoIn.m_parentShape = NULL;
  queryShapeInfoIn.m_shapeKeyMask = NULL;
  queryShapeInfoIn.m_scalingInternals.m_isScaled = 0;
  queryShapeInfoIn.m_scalingInternals.m_mode = 0;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovups xmmword ptr [rsp+1A8h+queryShapeInfoIn.m_scalingInternals.m_offset.m_quad], xmm9
  }
  queryShapeInfoIn.m_rootShape = _RSI->m_shape;
  queryShapeInfoIn.m_shapeToWorld = (const hkTransformf *)v91;
  NumRigidBodys = Physics_GetNumRigidBodys(v26, v14);
  if ( NumRigidBodys == 1 )
    v86 = 1;
  else
    v86 = NumRigidBodys - 1;
  __asm { vmovaps [rsp+1A8h+var_48], xmm6 }
  v30 = 0i64;
  __asm { vmovaps [rsp+1A8h+var_58], xmm7 }
  v31 = 0;
  __asm { vmovaps [rsp+1A8h+var_68], xmm8 }
  do
  {
    if ( !partBits )
      goto LABEL_16;
    if ( v31 >= 0x100 )
    {
      LODWORD(v84) = 256;
      LODWORD(targetShapeInfo) = v31;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", targetShapeInfo, v84) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v31 & 0x1F)) & partBits->array[v30 >> 5]) != 0 )
    {
LABEL_16:
      HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)this->m_worldId, v14, v31);
      m_serialAndIndex = result.m_serialAndIndex;
      if ( (result.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 237, ASSERT_TYPE_ASSERT, "( bodyId.isValid() )", (const char *)&queryFormat, "bodyId.isValid()") )
        __debugbreak();
      _RBX = (const hknpBody *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v15 + 32) + 104i64))(v15 + 32, m_serialAndIndex);
      m_shape = _RBX->m_shape;
      if ( _RSI->m_filter->isCollisionEnabled((hknpCollisionFilter *)_RSI->m_filter, RAY_CAST, &_RSI->m_filterData, _RBX) )
      {
        __asm
        {
          vsubps  xmm3, xmm10, xmmword ptr [rbx+30h]
          vmovups xmm4, xmmword ptr [rbx]
          vmovups xmm6, xmmword ptr [rbx+10h]
          vmovups xmm7, xmmword ptr [rbx+20h]
          vdpps   xmm1, xmm4, xmm3, 71h ; 'q'
          vdpps   xmm0, xmm6, xmm3, 72h ; 'r'
          vorps   xmm2, xmm1, xmm0
          vdpps   xmm1, xmm7, xmm3, 74h ; 't'
          vsubps  xmm3, xmm11, xmmword ptr [rbx+30h]
          vorps   xmm8, xmm2, xmm1
          vdpps   xmm1, xmm4, xmm3, 71h ; 'q'
          vdpps   xmm0, xmm6, xmm3, 72h ; 'r'
          vorps   xmm2, xmm1, xmm0
          vdpps   xmm1, xmm7, xmm3, 74h ; 't'
          vorps   xmm2, xmm2, xmm1
          vsubps  xmm0, xmm2, xmm8
          vblendps xmm3, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
          vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
          vmovups xmmword ptr [rsi+30h], xmm8
          vcmpeqps xmm1, xmm9, xmm3
          vandnps xmm4, xmm1, xmm3
          vmovups xmmword ptr [rsi+40h], xmm4
          vrcpps  xmm2, xmm4
          vmulps  xmm1, xmm2, xmm4
          vsubps  xmm1, xmm0, xmm1
          vmulps  xmm3, xmm1, xmm2
          vmovups xmm1, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
          vcmpeqps xmm0, xmm9, xmm4
          vblendvps xmm1, xmm3, xmm1, xmm0
          vmovups xmmword ptr [rsi+50h], xmm1
        }
        this->m_targetShapeInfo.m_body = _RBX;
        this->m_targetShapeInfo.m_rootShape = _RBX->m_shape;
        this->m_targetShapeInfo.m_parentShape = NULL;
        this->m_targetShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
        this->m_targetShapeInfo.m_shapeKeyPath.m_size = 0;
        this->m_targetShapeInfo.m_shapeToWorld = &_RBX->m_transform;
        this->m_targetShapeInfo.m_shapeKeyMask = NULL;
        this->m_targetShapeFilterData.m_materialId.m_value = _RBX->m_materialId.m_value;
        this->m_targetShapeFilterData.m_collisionFilterInfo = _RBX->m_collisionFilterInfo;
        this->m_targetShapeFilterData.m_userData = _RBX->m_userData;
        s_shapeTagCodec->overrideInitialFilterData(s_shapeTagCodec, SHAPE_CAST, _RBX, m_shape, &this->m_targetShapeFilterData);
        Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( Value )
          hkMonitorStream::timerBegin(Value, "TtShapecast_Body_Detail_HK");
        hknpShapeQueryInterface::castShape(&this->m_queryContext, _RSI, &queryShapeInfoIn, m_shape, &this->m_targetShapeFilterData, &this->m_targetShapeInfo, v89, NULL);
        v63 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v63 )
          hkMonitorStream::timerEnd(v63, "Et");
        v15 = (__int64)World;
      }
      v14 = instanceId;
    }
    ++v31;
    ++v30;
  }
  while ( v31 < v86 );
  __asm
  {
    vmovaps xmm8, [rsp+1A8h+var_68]
    vmovaps xmm7, [rsp+1A8h+var_58]
    vmovaps xmm6, [rsp+1A8h+var_48]
    vsubps  xmm0, xmm11, xmm10
    vblendps xmm2, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
    vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vcmpeqps xmm1, xmm9, xmm2
    vandnps xmm4, xmm1, xmm2
    vrcpps  xmm2, xmm4
    vmulps  xmm1, xmm2, xmm4
    vsubps  xmm1, xmm0, xmm1
    vmulps  xmm3, xmm1, xmm2
    vmovups xmm1, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
    vcmpeqps xmm0, xmm9, xmm4
    vblendvps xmm1, xmm3, xmm1, xmm0
    vmovups xmmword ptr [rsi+50h], xmm1
    vmovups xmmword ptr [rsi+40h], xmm4
    vmovups xmmword ptr [rsi+30h], xmm10
  }
  _R11 = &v98;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ServerModifyHitForShield
==============
*/
_BOOL8 HavokPhysicsHitCollector_DetailTraceModifier::ServerModifyHitForShield(const DObj *obj, const XModel *model, void *args)
{
  unsigned int updated; 
  bool v23; 
  DObjPartBits *partBits[2]; 
  vec4_t quat; 
  hknpClosestHitCollector chc; 

  partBits[1] = (DObjPartBits *)-2i64;
  _RDI = SV_GentityNum(*((_DWORD *)args + 4));
  _RBX = G_PhysicsObject_Get(_RDI);
  Physics_LockWorld(PHYSICS_WORLD_ID_SERVER_DETAIL);
  chc.m_hints.m_storage = 0;
  chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
  __asm { vxorps  xmm1, xmm1, xmm1 }
  chc.m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbp+57h+chc.baseclass_0.m_earlyOutThreshold.m_real], xmm0
  }
  chc.m_earlyOut.m_bool = 0;
  __asm
  {
    vmovups ymmword ptr [rbp+57h+chc.m_hit.m_position.m_quad], ymm1
    vmovss  xmm0, cs:__real@7f7fffee
    vmovss  [rbp+57h+chc.m_hit.m_fraction], xmm0
  }
  chc.m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&chc.m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  chc.m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&chc.m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  chc.m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  memset(&chc.m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo, 0, 20);
  _RAX = HavokPhysicsHitCollector::GetCollector(*((HavokPhysicsHitCollector **)args + 1));
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rbp+57h+chc.baseclass_0.m_earlyOutThreshold.m_real], xmm0
  }
  AnglesToQuat(&_RDI->r.currentAngles, &quat);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\g_physicsobject.inl", 14, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
    __debugbreak();
  _RBX->detailCache.position.v[0] = _RDI->r.currentOrigin.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+134h]
    vmovss  dword ptr [rbx+8Ch], xmm0
    vmovss  xmm1, dword ptr [rdi+138h]
    vmovss  dword ptr [rbx+90h], xmm1
  }
  if ( ((_RDI->r.modelType - 1) & 0xFD) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+quat]
      vmovss  dword ptr [rbx+94h], xmm0
      vmovss  xmm1, dword ptr [rbp+57h+quat+4]
      vmovss  dword ptr [rbx+98h], xmm1
      vmovss  xmm0, dword ptr [rbp+57h+quat+8]
      vmovss  dword ptr [rbx+9Ch], xmm0
      vmovss  xmm1, dword ptr [rbp+57h+quat+0Ch]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vmovss  dword ptr [rbx+94h], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
      vmovss  dword ptr [rbx+98h], xmm1
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
      vmovss  dword ptr [rbx+9Ch], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
    }
  }
  __asm { vmovss  dword ptr [rbx+0A0h], xmm1 }
  _RBX->detailCache.cached = 0;
  if ( G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, *((_DWORD *)args + 4)) != -1 )
  {
    partBits[0] = NULL;
    updated = G_PhysicsObject_UpdateDetailWorldInstance(PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_SERVER_DETAIL, *((_DWORD *)args + 4), partBits);
    HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay(*(HavokPhysicsHitCollector_DetailTraceModifier **)args, &chc, updated, partBits[0], *((const HavokPhysicsHitCollector **)args + 1), 0x2181u);
  }
  Physics_UnlockWorld(PHYSICS_WORLD_ID_SERVER_DETAIL);
  v23 = chc.m_numHits != 0;
  chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  hkBaseObject::~hkBaseObject(&chc);
  return v23;
}

