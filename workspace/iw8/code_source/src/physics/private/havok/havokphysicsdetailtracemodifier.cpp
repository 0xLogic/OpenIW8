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

  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->__vftable = (HavokPhysicsHitCollector_DetailTraceModifier_vtbl *)&HavokPhysicsHitCollector_DetailTraceModifier::`vftable';
  this->m_detailHitData.m_data = NULL;
  this->m_detailHitData.m_size = 0;
  this->m_detailHitData.m_capacityAndFlags = 0x80000000;
  p_m_triangle = &this->m_triangle;
  hknpInplaceTriangleShape::hknpInplaceTriangleShape(&this->m_triangle, 0.0);
  this->m_queryContext.m_dispatcher = NULL;
  this->m_queryContext.m_queryTriangle = (hknpTriangleShape *)p_m_triangle;
  this->m_queryContext.m_targetTriangle = (hknpTriangleShape *)p_m_triangle;
  this->m_queryContext.m_initialCastFractionHint = 0.0;
  this->m_queryContext.m_externallyAllocatedTriangles = 1;
  this->m_targetShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
  this->m_targetShapeInfo.m_shapeKeyPath.m_size = 0;
  this->m_targetShapeInfo.m_body = NULL;
  this->m_targetShapeInfo.m_rootShape = NULL;
  this->m_targetShapeInfo.m_parentShape = NULL;
  this->m_targetShapeInfo.m_shapeToWorld = NULL;
  this->m_targetShapeInfo.m_shapeKeyMask = NULL;
  this->m_targetShapeInfo.m_scalingInternals.m_isScaled = 0;
  this->m_targetShapeInfo.m_scalingInternals.m_scale = (hkVector4f)_xmm;
  *(_QWORD *)&this->m_targetShapeInfo.m_scalingInternals.m_mode = 0i64;
  this->m_targetShapeInfo.m_scalingInternals.m_offset = 0i64;
  this->m_targetShapeFilterData.m_materialId.m_value = -1;
  this->m_targetShapeFilterData.m_collisionFilterInfo = 0;
  this->m_targetShapeFilterData.m_userData = 0i64;
  this->m_worldId = worldId;
  this->m_localClientNum = Physics_GetLocalClientForWorld(worldId);
  this->m_priorityMap = priorityMap;
  World = HavokPhysics_GetWorld(this->m_worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 70, ASSERT_TYPE_ASSERT, "( world )", (const char *)&queryFormat, "world", -2i64) )
    __debugbreak();
  this->m_queryContext.m_dispatcher = World->m_collisionQueryDispatcher;
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
    if ( objTrace )
    {
      if ( objTrace->fraction < 1.0 )
      {
        m_data[v10].isValid = 1;
        m_data[v10].surfaceflags = objTrace->surfaceflags;
        m_data[v10].modelIndex = objTrace->modelIndex;
        m_data[v10].partName = objTrace->partName;
        m_data[v10].partGroup = objTrace->partGroup;
      }
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
  LocalClientNum_t v4; 
  int v5; 
  Physics_WorldId v6; 
  centity_t *Entity; 
  CG_PhysicsObject *v8; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v13; 
  unsigned int updated; 
  bool v24; 
  _QWORD v26[2]; 
  DObjPartBits *partBits[2]; 
  vec3_t angles; 
  vec4_t quat; 
  hknpClosestHitCollector chc; 

  partBits[1] = (DObjPartBits *)-2i64;
  v4 = *(_DWORD *)(*(_QWORD *)args + 28i64);
  v5 = *((_DWORD *)args + 4);
  v6 = *(_DWORD *)(*(_QWORD *)args + 24i64);
  Entity = CG_GetEntity(v4, v5);
  v8 = CG_PhysicsObject_Get(v5, v4);
  Physics_LockWorld(v6);
  chc.m_hints.m_storage = 0;
  chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
  chc.m_numHits = 0;
  chc.m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  chc.m_earlyOut.m_bool = 0;
  *(__m256i *)chc.m_hit.m_position.m_quad.m128_f32 = (__m256i)0i64;
  chc.m_hit.m_fraction = FLOAT_3_40282e38;
  chc.m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&chc.m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  chc.m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&chc.m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  chc.m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  memset(&chc.m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo, 0, 20);
  chc.m_earlyOutThreshold = HavokPhysicsHitCollector::GetCollector(*((HavokPhysicsHitCollector **)args + 1))->m_earlyOutThreshold;
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
  FunctionPointer_origin(&Entity->pose.origin.origin.origin, (vec3_t *)v26);
  if ( Entity->pose.isPosePrecise )
  {
    _XMM0 = LODWORD(v26[0]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v13 = *(double *)&_XMM0 * 0.000244140625;
    _XMM0 = v13;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *(float *)v26 = *(float *)&_XMM1;
    _XMM2 = HIDWORD(v26[0]);
    __asm { vcvtdq2pd xmm2, xmm2 }
    *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v13 = *(double *)&_XMM2 * 0.000244140625;
    _XMM0 = v13;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *((float *)v26 + 1) = *(float *)&_XMM1;
    _XMM2 = LODWORD(v26[1]);
    __asm { vcvtdq2pd xmm2, xmm2 }
    *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v13 = *(double *)&_XMM2 * 0.000244140625;
    _XMM0 = v13;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *(float *)&v26[1] = *(float *)&_XMM1;
  }
  angles = Entity->pose.angles;
  AnglesToQuat(&angles, &quat);
  *(_QWORD *)v8->detailCache.position.v = v26[0];
  v8->detailCache.position.v[2] = *(float *)&v26[1];
  v8->detailCache.orientationAsQuat = quat;
  v8->detailCache.cached = 0;
  if ( CG_PhysicsObject_GetInstance(v6, v5, v4) != -1 )
  {
    partBits[0] = NULL;
    updated = CG_PhysicsObject_UpdateDetailWorldInstance((Physics_WorldId)(3 * v4 + 3), v6, v5, v4, partBits);
    HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay(*(HavokPhysicsHitCollector_DetailTraceModifier **)args, &chc, updated, partBits[0], *((const HavokPhysicsHitCollector **)args + 1), 0x2181u);
  }
  Physics_UnlockWorld(v6);
  v24 = chc.m_numHits != 0;
  memset(v26, 0, 0xCui64);
  chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  hkBaseObject::~hkBaseObject(&chc);
  return v24;
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
  const hkVector4f *ModifierCastStart; 
  const hkVector4f *ModifierCastEnd; 
  gentity_s *v11; 
  GAntiLag *v12; 
  playerState_s *EntityPlayerState; 
  const playerState_s *v14; 
  GHandler *Handler; 
  SvAntilagArchiveInfo *v16; 
  unsigned __int8 *m_priorityMap; 
  __m128 fraction_low; 
  float v19; 
  float v20; 
  float v21; 
  DObj *ClientDObj; 
  DObj *v23; 
  cg_t *LocalClientGlobals; 
  unsigned __int8 *v25; 
  const hkVector4f *v26; 
  const hkVector4f *v27; 
  float v28; 
  float v29; 
  float v30; 
  float fraction; 
  DObj *obj; 
  centity_t *obja; 
  HavokPhysicsHitCollector_DetailTraceModifier *userArgs; 
  const HavokPhysicsHitCollector *v35; 
  int v36; 
  vec3_t in1; 
  vec3_t v38; 
  DObjTrace_s trace; 
  vec3_t out; 
  vec3_t end; 
  tmat43_t<vec3_t> result; 
  DObjPartBits partBits; 
  WorldUpReferenceFrame v44; 

  Profile_Begin(764);
  ModifierCastStart = HavokPhysicsHitCollector::GetModifierCastStart((HavokPhysicsHitCollector *)collector);
  in1.v[0] = 32.0 * ModifierCastStart->m_quad.m128_f32[0];
  in1.v[1] = 32.0 * ModifierCastStart->m_quad.m128_f32[1];
  in1.v[2] = 32.0 * ModifierCastStart->m_quad.m128_f32[2];
  ModifierCastEnd = HavokPhysicsHitCollector::GetModifierCastEnd((HavokPhysicsHitCollector *)collector);
  v38.v[0] = 32.0 * ModifierCastEnd->m_quad.m128_f32[0];
  v38.v[1] = 32.0 * ModifierCastEnd->m_quad.m128_f32[1];
  v38.v[2] = 32.0 * ModifierCastEnd->m_quad.m128_f32[2];
  trace.fraction = FLOAT_1_0;
  if ( isServerCharacterProxy )
  {
    v11 = SV_GentityNum(entNum);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 485, ASSERT_TYPE_ASSERT, "(touch)", (const char *)&queryFormat, "touch") )
      __debugbreak();
    obj = Com_GetServerDObjForEntnum(entNum);
    if ( !obj )
      goto LABEL_23;
    AnglesAndOriginToMatrix43(&v11->r.currentAngles, &v11->r.currentOrigin, &result);
    if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    v12 = GAntiLag::ms_gAntiLagData;
    EntityPlayerState = G_GetEntityPlayerState(v11);
    v14 = EntityPlayerState;
    if ( EntityPlayerState && !v12->IsWorldUpIncludedOnEntity(v12, EntityPlayerState->clientNum) )
    {
      Handler = GHandler::getHandler();
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v44, v14, Handler);
      WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v44, (tmat33_t<vec3_t> *)&result);
    }
    MatrixTransposeTransformVector43(&in1, &result, &out);
    MatrixTransposeTransformVector43(&v38, &result, &end);
    DObjTracelinePartBits(obj, &partBits);
    v16 = v12->GetAntilagTraceInfo(v12);
    if ( v16 )
      G_Utils_DObjCalcAntilagPose(v11, v16, &partBits);
    else
      G_Utils_DObjCalcPose(v11, &partBits);
    m_priorityMap = this->m_priorityMap;
    userArgs = this;
    v35 = collector;
    v36 = entNum;
    DObjTraceline(obj, &out, &end, m_priorityMap, &trace, HavokPhysicsHitCollector_DetailTraceModifier::ServerModifyHitForShield, &userArgs);
    fraction_low = (__m128)LODWORD(trace.fraction);
    if ( trace.fraction >= 1.0 )
      goto LABEL_23;
    v19 = trace.normal.v[0];
    v20 = (float)(trace.normal.v[0] * result.m[0].v[1]) + (float)(trace.normal.v[1] * result.m[1].v[1]);
    trace.normal.v[0] = (float)((float)(trace.normal.v[0] * result.m[0].v[0]) + (float)(trace.normal.v[1] * result.m[1].v[0])) + (float)(trace.normal.v[2] * result.m[2].v[0]);
    v21 = v20 + (float)(trace.normal.v[2] * result.m[2].v[1]);
    trace.normal.v[2] = (float)((float)(v19 * result.m[0].v[2]) + (float)(trace.normal.v[1] * result.m[1].v[2])) + (float)(trace.normal.v[2] * result.m[2].v[2]);
    trace.normal.v[1] = v21;
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
      v23 = Com_GetClientDObj(entNum, this->m_localClientNum);
      if ( ClientDObj == v23 )
        break;
      DObjUnlock(ClientDObj);
      ClientDObj = v23;
      if ( !v23 )
        goto LABEL_23;
    }
    if ( !ClientDObj )
      goto LABEL_23;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    end.v[0] = in1.v[0] - LocalClientGlobals->refdef.viewOffset.v[0];
    end.v[1] = in1.v[1] - LocalClientGlobals->refdef.viewOffset.v[1];
    end.v[2] = in1.v[2] - LocalClientGlobals->refdef.viewOffset.v[2];
    out.v[0] = v38.v[0] - LocalClientGlobals->refdef.viewOffset.v[0];
    out.v[1] = v38.v[1] - LocalClientGlobals->refdef.viewOffset.v[1];
    out.v[2] = v38.v[2] - LocalClientGlobals->refdef.viewOffset.v[2];
    DObjTracelinePartBits(ClientDObj, &partBits);
    CG_Pose_CalcDObjPose(&obja->pose, ClientDObj, &partBits);
    if ( !DObjSkelAreBonesUpToDate(ClientDObj, &partBits) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 596, ASSERT_TYPE_ASSERT, "(DObjSkelAreBonesUpToDate( obj, &partBits ))", (const char *)&queryFormat, "DObjSkelAreBonesUpToDate( obj, &partBits )") )
      __debugbreak();
    DObjUnlock(ClientDObj);
    v25 = this->m_priorityMap;
    userArgs = this;
    v35 = collector;
    v36 = entNum;
    DObjTraceline(ClientDObj, &end, &out, v25, &trace, HavokPhysicsHitCollector_DetailTraceModifier::ClientModifyHitForShield, &userArgs);
    fraction_low = (__m128)LODWORD(trace.fraction);
  }
  if ( fraction_low.m128_f32[0] < 1.0 )
  {
    v26 = HavokPhysicsHitCollector::GetModifierCastEnd((HavokPhysicsHitCollector *)collector);
    v27 = HavokPhysicsHitCollector::GetModifierCastStart((HavokPhysicsHitCollector *)collector);
    v28 = trace.normal.v[0];
    v29 = trace.normal.v[1];
    hit->m_position.m_quad = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v26->m_quad, v27->m_quad), _mm_shuffle_ps(fraction_low, fraction_low, 0)), v27->m_quad);
    hit->m_normal.m_quad.m128_f32[0] = v28;
    v30 = trace.normal.v[2];
    hit->m_normal.m_quad.m128_f32[1] = v29;
    fraction = trace.fraction;
    hit->m_normal.m_quad.m128_f32[2] = v30;
    hit->m_fraction = fraction;
    goto LABEL_24;
  }
LABEL_23:
  hit->m_rayCastResult.m_value = 0;
  hit->m_fraction = 1.0;
LABEL_24:
  HavokPhysicsHitCollector_DetailTraceModifier::AddDetailHitData(this, collector, hit, &trace);
  Profile_EndInternal(NULL);
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBounds
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBounds(HavokPhysicsHitCollector_DetailTraceModifier *this, const HavokPhysicsHitCollector *collector, hknpCollisionResult *hit)
{
  int Ref; 
  __int32 v7; 
  unsigned int updated; 
  unsigned __int16 RefId; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  int v13; 
  __int64 v14; 
  const char *v15; 
  const char *v16; 
  int v17; 
  __int64 m_localClientNum; 
  hknpCollisionQueryType::Enum m_queryType; 
  __int64 extraContentsFlags; 
  __int64 v21; 
  DObjPartBits *partBits[2]; 
  hknpClosestHitCollector chc; 

  partBits[1] = (DObjPartBits *)-2i64;
  Ref = HavokPhysics_GetRef(this->m_worldId, hit->m_hitBodyInfo.m_bodyId);
  v7 = Physics_GetRefSystem(Ref) - 1;
  Physics_LockWorld(this->m_worldId);
  updated = -1;
  partBits[0] = NULL;
  switch ( v7 )
  {
    case 0:
      RefId = Physics_GetRefId(Ref);
      updated = DynEnt_UpdateDetailPhysics((Physics_WorldId)(3 * this->m_localClientNum + 3), (Physics_WorldId)(3 * this->m_localClientNum + 4), RefId, this->m_localClientNum);
      goto LABEL_28;
    case 1:
    case 8:
      v10 = Physics_GetRefId(Ref);
      updated = G_PhysicsObject_UpdateDetailWorldInstance(PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_SERVER_DETAIL, v10, partBits);
      goto LABEL_28;
    case 3:
      v11 = Physics_GetRefId(Ref);
      updated = CG_PhysicsObject_UpdateDetailWorldInstance((Physics_WorldId)(3 * this->m_localClientNum + 3), (Physics_WorldId)(3 * this->m_localClientNum + 4), v11, this->m_localClientNum, partBits);
      goto LABEL_28;
    case 7:
      v13 = Ref >> 22;
      v14 = Ref & 0x3FFFFF;
      if ( (v13 & 3) != 0 )
      {
        m_localClientNum = this->m_localClientNum;
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v14 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v14, g_scriptableWorldCounts.totalInstanceCount) )
            __debugbreak();
        }
        if ( (unsigned int)m_localClientNum >= 2 )
        {
          LODWORD(v21) = 2;
          LODWORD(extraContentsFlags) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 124, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", extraContentsFlags, v21) )
            __debugbreak();
        }
        if ( !g_scriptableCl_instanceContexts[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 125, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        updated = g_scriptableCl_instanceContexts[m_localClientNum][(unsigned int)v14].collisionContext.scriptableCollisionDetail;
        if ( Physics_GetNumRigidBodys((const Physics_WorldId)(3 * this->m_localClientNum + 4), updated) != 1 )
        {
          v15 = "Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( m_localClientNum ), instanceId ) == 1";
          v16 = "(Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( m_localClientNum ), instanceId ) == 1)";
          v17 = 337;
LABEL_26:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", v17, ASSERT_TYPE_ASSERT, v16, (const char *)&queryFormat, v15) )
            __debugbreak();
        }
      }
      else
      {
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( (unsigned int)v14 >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(extraContentsFlags) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", extraContentsFlags, g_scriptableWorldCounts.serverInstanceCount) )
            __debugbreak();
        }
        updated = g_scriptableSv_instanceContexts[v14].collisionContext.scriptableCollisionDetail;
        if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_SERVER_DETAIL, updated) != 1 )
        {
          v15 = "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, instanceId ) == 1";
          v16 = "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, instanceId ) == 1)";
          v17 = 330;
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
      chc.m_numHits = 0;
      chc.m_earlyOutThreshold.m_real = g_vectorfConstants[37];
      chc.m_earlyOut.m_bool = 0;
      *(__m256i *)chc.m_hit.m_position.m_quad.m128_f32 = (__m256i)0i64;
      chc.m_hit.m_fraction = FLOAT_3_40282e38;
      chc.m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
      *(_QWORD *)&chc.m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
      chc.m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
      chc.m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
      chc.m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
      chc.m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
      *(_QWORD *)&chc.m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
      chc.m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
      memset(&chc.m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo, 0, 20);
      chc.m_earlyOutThreshold = HavokPhysicsHitCollector::GetCollector((HavokPhysicsHitCollector *)collector)->m_earlyOutThreshold;
      m_queryType = hit->m_queryType;
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
        LODWORD(extraContentsFlags) = hit->m_queryType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 368, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported detail bound query type %i", extraContentsFlags) )
          __debugbreak();
      }
      Physics_UnlockWorld(this->m_worldId);
      if ( chc.m_numHits )
      {
        *(__m256i *)hit->m_position.m_quad.m128_f32 = *(__m256i *)chc.m_hit.m_position.m_quad.m128_f32;
        hit->m_fraction = chc.m_hit.m_fraction;
        hit->m_queryBodyInfo.m_bodyId.m_serialAndIndex = chc.m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex;
        hit->m_queryBodyInfo.m_shapeKey.m_value = chc.m_hit.m_queryBodyInfo.m_shapeKey.m_value;
        *(_DWORD *)hit->m_queryBodyInfo.m_levelOfDetail = *(_DWORD *)chc.m_hit.m_queryBodyInfo.m_levelOfDetail;
        hit->m_queryBodyInfo.m_filterData.m_materialId.m_value = chc.m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value;
        hit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo = chc.m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
        hit->m_queryBodyInfo.m_filterData.m_userData = chc.m_hit.m_queryBodyInfo.m_filterData.m_userData;
        hit->m_hitBodyInfo.m_bodyId.m_serialAndIndex = chc.m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex;
        hit->m_hitBodyInfo.m_shapeKey.m_value = chc.m_hit.m_hitBodyInfo.m_shapeKey.m_value;
        *(_DWORD *)hit->m_hitBodyInfo.m_levelOfDetail = *(_DWORD *)chc.m_hit.m_hitBodyInfo.m_levelOfDetail;
        hit->m_hitBodyInfo.m_filterData.m_materialId.m_value = chc.m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value;
        hit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo = chc.m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
        hit->m_hitBodyInfo.m_filterData.m_userData = chc.m_hit.m_hitBodyInfo.m_filterData.m_userData;
        hit->m_queryType = chc.m_hit.m_queryType;
        hit->m_rayCastResult.m_value = chc.m_hit.m_rayCastResult.m_value;
      }
      else
      {
        hit->m_fraction = 1.0;
        hit->m_rayCastResult.m_value = 0;
      }
      chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
      hkBaseObject::~hkBaseObject(&chc);
      return;
    case 9:
      v12 = Physics_GetRefId(Ref);
      updated = CG_ClientModel_Physics_UpdateDetailWorldInstance((const LocalClientNum_t)this->m_localClientNum, v12);
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
  DObjPartBits *v8; 
  unsigned int v9; 
  hknpRayCastQuery *ModifierRaycastQuery; 
  hknpCollisionQuery *ModifierBatchRaycastQuery; 
  hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> *p_m_flags; 
  int m_storage; 
  unsigned int v15; 
  int v16; 
  Physics_WorldId v17; 
  unsigned int NumRigidBodys; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned int m_serialAndIndex; 
  __int64 v22; 
  const hknpShape *v23; 
  const hkVector4f *ModifierCastStart; 
  __m128 v31; 
  const hkVector4f *ModifierCastEnd; 
  hkMonitorStream *Value; 
  __int64 v51; 
  __int64 v53; 
  const hknpBody *m_body; 
  hknpQueryFilterData *p_m_targetShapeFilterData; 
  hkMonitorStream *v56; 
  __int64 v57; 
  __int64 v58; 
  unsigned int v60; 
  hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> result; 
  hknpBodyId v62; 
  DObjPartBits *v63; 
  hknpWorld *World; 
  HavokPhysicsHitCollector *v65; 
  hknpQueryFilterData m_targetShapeFilterData; 
  const hknpShapeTagCodec *m_shapeTagCodec; 
  const hknpCollisionFilter *m_filter; 
  unsigned __int16 m_value; 
  unsigned int v70; 
  unsigned __int64 m_userData; 
  int v72; 
  char v73; 
  __m128 v74; 
  __m128 v75; 
  __int128 v76; 
  int v77; 

  m_worldId = this->m_worldId;
  v8 = partBits;
  v65 = (HavokPhysicsHitCollector *)collector;
  v9 = instanceId;
  v63 = partBits;
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
  v73 = -5;
  m_shapeTagCodec = ModifierBatchRaycastQuery->m_shapeTagCodec;
  m_filter = ModifierBatchRaycastQuery->m_filter;
  m_value = ModifierBatchRaycastQuery->m_filterData.m_materialId.m_value;
  v15 = extraContentsFlags | ModifierBatchRaycastQuery->m_filterData.m_collisionFilterInfo;
  m_userData = ModifierBatchRaycastQuery->m_filterData.m_userData;
  v16 = *(_DWORD *)ModifierBatchRaycastQuery->m_levelOfDetail;
  v70 = v15;
  v17 = this->m_worldId;
  v72 = v16;
  v77 = m_storage;
  NumRigidBodys = Physics_GetNumRigidBodys(v17, v9);
  if ( NumRigidBodys == 1 )
    v60 = 1;
  else
    v60 = NumRigidBodys - 1;
  v19 = 0i64;
  v20 = 0;
  do
  {
    if ( !v8 )
      goto LABEL_21;
    if ( v20 >= 0x100 )
    {
      LODWORD(v58) = 256;
      LODWORD(v57) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v57, v58) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v20 & 0x1F)) & v8->array[v19 >> 5]) != 0 )
    {
LABEL_21:
      HavokPhysics_GetRigidBodyID(&v62, (const Physics_WorldId)this->m_worldId, v9, v20);
      m_serialAndIndex = v62.m_serialAndIndex;
      if ( (v62.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 169, ASSERT_TYPE_ASSERT, "( bodyId.isValid() )", (const char *)&queryFormat, "bodyId.isValid()") )
        __debugbreak();
      v22 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))World->getBody)(&World->hknpWorldReader, m_serialAndIndex);
      v23 = *(const hknpShape **)(v22 + 96);
      if ( m_filter->isCollisionEnabled((hknpCollisionFilter *)m_filter, RAY_CAST, (const hknpQueryFilterData *)&m_value, (const hknpBody *)v22) )
      {
        ModifierCastStart = HavokPhysicsHitCollector::GetModifierCastStart(v65);
        _XMM1 = *(_OWORD *)v22;
        _mm128_sub_ps(ModifierCastStart->m_quad, *(__m128 *)(v22 + 48));
        _XMM0 = *(_OWORD *)(v22 + 16);
        __asm { vdpps   xmm3, xmm0, xmm5, 72h ; 'r' }
        _XMM0 = *(_OWORD *)(v22 + 32);
        __asm
        {
          vdpps   xmm2, xmm1, xmm5, 71h ; 'q'
          vdpps   xmm1, xmm0, xmm5, 74h ; 't'
        }
        v31 = (__m128)(_XMM3 | _XMM2 | _XMM1);
        ModifierCastEnd = HavokPhysicsHitCollector::GetModifierCastEnd(v65);
        _XMM1 = *(_OWORD *)(v22 + 16);
        _mm128_sub_ps(ModifierCastEnd->m_quad, *(__m128 *)(v22 + 48));
        _XMM0 = *(_OWORD *)v22;
        __asm { vdpps   xmm3, xmm1, xmm5, 72h ; 'r' }
        _XMM1 = *(_OWORD *)(v22 + 32);
        __asm
        {
          vdpps   xmm2, xmm0, xmm5, 71h ; 'q'
          vdpps   xmm0, xmm1, xmm5, 74h ; 't'
        }
        _XMM3 = _mm128_sub_ps((__m128)(_XMM3 | _XMM2 | _XMM0), v31);
        __asm { vblendps xmm1, xmm3, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants }
        v74 = v31;
        _XMM4 = 0i64;
        __asm
        {
          vcmpeqps xmm0, xmm4, xmm1
          vandnps xmm2, xmm0, xmm1
        }
        this->m_targetShapeInfo.m_body = (const hknpBody *)v22;
        v75 = _XMM2;
        __asm
        {
          vcmpeqps xmm0, xmm4, xmm2
          vrcpps  xmm3, xmm2
        }
        _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM3, _XMM2)), _XMM3);
        __asm { vblendvps xmm1, xmm3, xmm4, xmm0 }
        v76 = _XMM1;
        this->m_targetShapeInfo.m_rootShape = *(const hknpShape **)(v22 + 96);
        this->m_targetShapeInfo.m_parentShape = NULL;
        this->m_targetShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
        this->m_targetShapeInfo.m_shapeKeyPath.m_size = 0;
        this->m_targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v22;
        this->m_targetShapeInfo.m_shapeKeyMask = NULL;
        this->m_targetShapeFilterData.m_materialId.m_value = *(_WORD *)(v22 + 106);
        this->m_targetShapeFilterData.m_collisionFilterInfo = *(_DWORD *)(v22 + 108);
        this->m_targetShapeFilterData.m_userData = *(_QWORD *)(v22 + 160);
        s_shapeTagCodec->overrideInitialFilterData(s_shapeTagCodec, RAY_CAST, (const hknpBody *)v22, v23, &this->m_targetShapeFilterData);
        Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( Value )
          hkMonitorStream::timerBegin(Value, "TtRaycast_Body_Detail_HK");
        _XMM1.m_real = (__m128)chc->m_earlyOutThreshold;
        __asm { vbroadcastss xmm2, dword ptr [rbp+40h+var_80+0Ch] }
        v51 = (__int64)m_shapeTagCodec;
        __asm { vminps  xmm2, xmm1, xmm2 }
        chc->m_earlyOutThreshold = (hkSimdFloat32)_XMM2.m_real;
        if ( v51 && (*(_BYTE *)(v51 + 24) & 1) != 0 )
        {
          v53 = *(_QWORD *)v51;
          m_body = this->m_targetShapeInfo.m_body;
          m_targetShapeFilterData = this->m_targetShapeFilterData;
          (*(void (__fastcall **)(__int64, __int64, const hknpBody *, const hknpShape *, hknpQueryFilterData *))(v53 + 24))(v51, 1i64, m_body, v23, &m_targetShapeFilterData);
          p_m_targetShapeFilterData = &m_targetShapeFilterData;
        }
        else
        {
          p_m_targetShapeFilterData = &this->m_targetShapeFilterData;
        }
        v23->castRayImpl((hknpShape *)v23, &this->m_queryContext, (const hknpRayCastQuery *)&m_shapeTagCodec, p_m_targetShapeFilterData, &this->m_targetShapeInfo, chc);
        v56 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v56 )
          hkMonitorStream::timerEnd(v56, "Et");
        v9 = instanceId;
      }
      v8 = v63;
    }
    ++v20;
    ++v19;
  }
  while ( v20 < v60 );
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsShape
==============
*/
void HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsShape(HavokPhysicsHitCollector_DetailTraceModifier *this, hknpClosestHitCollector *chc, unsigned int instanceId, DObjPartBits *partBits, const HavokPhysicsHitCollector *collector)
{
  Physics_WorldId m_worldId; 
  unsigned int v8; 
  __int64 v9; 
  hknpShapeCastQuery *ModifierShapecastQuery; 
  __m128 m_quad; 
  __m128 v12; 
  __m128 v13; 
  const hkQuaternionf *ModifierShapecastRotation; 
  Physics_WorldId v15; 
  unsigned int NumRigidBodys; 
  unsigned __int64 v18; 
  unsigned int v19; 
  unsigned int m_serialAndIndex; 
  __int64 v21; 
  const hknpShape *v22; 
  __int128 v28; 
  __m128 v30; 
  __int128 v33; 
  hkMonitorStream *Value; 
  hkMonitorStream *v44; 
  hknpShapeQueryInfo *targetShapeInfo; 
  hknpCollisionQueryCollector *v54; 
  unsigned int v56; 
  hknpBodyId result; 
  hknpWorld *World; 
  hknpCollisionQueryCollector *v59; 
  hknpShapeQueryInfo queryShapeInfoIn; 
  char v61[64]; 

  m_worldId = this->m_worldId;
  v8 = instanceId;
  v59 = chc;
  World = HavokPhysics_GetWorld(m_worldId);
  v9 = (__int64)World;
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 205, ASSERT_TYPE_ASSERT, "( world )", (const char *)&queryFormat, "world") )
    __debugbreak();
  ModifierShapecastQuery = HavokPhysicsHitCollector::GetModifierShapecastQuery((HavokPhysicsHitCollector *)collector);
  if ( !ModifierShapecastQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 208, ASSERT_TYPE_ASSERT, "(query)", (const char *)&queryFormat, "query") )
    __debugbreak();
  m_quad = ModifierShapecastQuery->m_ray.m_origin.m_quad;
  v12 = _mm128_mul_ps(_mm_shuffle_ps(ModifierShapecastQuery->m_ray.m_direction.m_quad, ModifierShapecastQuery->m_ray.m_direction.m_quad, 255), ModifierShapecastQuery->m_ray.m_direction.m_quad);
  *(__m256i *)v61 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)&v61[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
  v13 = _mm128_add_ps(v12, m_quad);
  ModifierShapecastRotation = HavokPhysicsHitCollector::GetModifierShapecastRotation((HavokPhysicsHitCollector *)collector);
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v61, ModifierShapecastRotation);
  v15 = this->m_worldId;
  queryShapeInfoIn.m_scalingInternals.m_scale = (hkVector4f)_xmm;
  queryShapeInfoIn.m_scalingInternals.m_convexRadius = 0.0;
  *(__m128 *)&v61[48] = m_quad;
  queryShapeInfoIn.m_shapeKeyPath.m_key.m_value = -1;
  queryShapeInfoIn.m_shapeKeyPath.m_size = 0;
  queryShapeInfoIn.m_body = NULL;
  queryShapeInfoIn.m_parentShape = NULL;
  queryShapeInfoIn.m_shapeKeyMask = NULL;
  queryShapeInfoIn.m_scalingInternals.m_isScaled = 0;
  queryShapeInfoIn.m_scalingInternals.m_mode = 0;
  _XMM9 = 0i64;
  queryShapeInfoIn.m_scalingInternals.m_offset = 0i64;
  queryShapeInfoIn.m_rootShape = ModifierShapecastQuery->m_shape;
  queryShapeInfoIn.m_shapeToWorld = (const hkTransformf *)v61;
  NumRigidBodys = Physics_GetNumRigidBodys(v15, v8);
  if ( NumRigidBodys == 1 )
    v56 = 1;
  else
    v56 = NumRigidBodys - 1;
  v18 = 0i64;
  v19 = 0;
  do
  {
    if ( !partBits )
      goto LABEL_16;
    if ( v19 >= 0x100 )
    {
      LODWORD(v54) = 256;
      LODWORD(targetShapeInfo) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", targetShapeInfo, v54) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v19 & 0x1F)) & partBits->array[v18 >> 5]) != 0 )
    {
LABEL_16:
      HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)this->m_worldId, v8, v19);
      m_serialAndIndex = result.m_serialAndIndex;
      if ( (result.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsdetailtracemodifier.cpp", 237, ASSERT_TYPE_ASSERT, "( bodyId.isValid() )", (const char *)&queryFormat, "bodyId.isValid()") )
        __debugbreak();
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v9 + 32) + 104i64))(v9 + 32, m_serialAndIndex);
      v22 = *(const hknpShape **)(v21 + 96);
      if ( ModifierShapecastQuery->m_filter->isCollisionEnabled((hknpCollisionFilter *)ModifierShapecastQuery->m_filter, RAY_CAST, &ModifierShapecastQuery->m_filterData, (const hknpBody *)v21) )
      {
        _mm128_sub_ps(m_quad, *(__m128 *)(v21 + 48));
        _XMM4 = *(_OWORD *)v21;
        _XMM6 = *(_OWORD *)(v21 + 16);
        _XMM7 = *(_OWORD *)(v21 + 32);
        __asm
        {
          vdpps   xmm1, xmm4, xmm3, 71h ; 'q'
          vdpps   xmm0, xmm6, xmm3, 72h ; 'r'
        }
        v28 = _XMM1 | _XMM0;
        __asm { vdpps   xmm1, xmm7, xmm3, 74h ; 't' }
        _mm128_sub_ps(v13, *(__m128 *)(v21 + 48));
        v30 = (__m128)(v28 | _XMM1);
        __asm
        {
          vdpps   xmm1, xmm4, xmm3, 71h ; 'q'
          vdpps   xmm0, xmm6, xmm3, 72h ; 'r'
        }
        v33 = _XMM1 | _XMM0;
        __asm { vdpps   xmm1, xmm7, xmm3, 74h ; 't' }
        _XMM0 = _mm128_sub_ps((__m128)(v33 | _XMM1), v30);
        __asm { vblendps xmm3, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants }
        ModifierShapecastQuery->m_ray.m_origin.m_quad = v30;
        __asm
        {
          vcmpeqps xmm1, xmm9, xmm3
          vandnps xmm4, xmm1, xmm3
        }
        ModifierShapecastQuery->m_ray.m_direction.m_quad = _XMM4;
        __asm { vrcpps  xmm2, xmm4 }
        _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _XMM4)), _XMM2);
        __asm
        {
          vcmpeqps xmm0, xmm9, xmm4
          vblendvps xmm1, xmm3, xmm1, xmm0
        }
        ModifierShapecastQuery->m_ray.m_invDirection = (hkVector4f)_XMM1.m_quad;
        this->m_targetShapeInfo.m_body = (const hknpBody *)v21;
        this->m_targetShapeInfo.m_rootShape = *(const hknpShape **)(v21 + 96);
        this->m_targetShapeInfo.m_parentShape = NULL;
        this->m_targetShapeInfo.m_shapeKeyPath.m_key.m_value = -1;
        this->m_targetShapeInfo.m_shapeKeyPath.m_size = 0;
        this->m_targetShapeInfo.m_shapeToWorld = (const hkTransformf *)v21;
        this->m_targetShapeInfo.m_shapeKeyMask = NULL;
        this->m_targetShapeFilterData.m_materialId.m_value = *(_WORD *)(v21 + 106);
        this->m_targetShapeFilterData.m_collisionFilterInfo = *(_DWORD *)(v21 + 108);
        this->m_targetShapeFilterData.m_userData = *(_QWORD *)(v21 + 160);
        s_shapeTagCodec->overrideInitialFilterData(s_shapeTagCodec, SHAPE_CAST, (const hknpBody *)v21, v22, &this->m_targetShapeFilterData);
        Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( Value )
          hkMonitorStream::timerBegin(Value, "TtShapecast_Body_Detail_HK");
        hknpShapeQueryInterface::castShape(&this->m_queryContext, ModifierShapecastQuery, &queryShapeInfoIn, v22, &this->m_targetShapeFilterData, &this->m_targetShapeInfo, v59, NULL);
        v44 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
        if ( v44 )
          hkMonitorStream::timerEnd(v44, "Et");
        v9 = (__int64)World;
      }
      v8 = instanceId;
    }
    ++v19;
    ++v18;
  }
  while ( v19 < v56 );
  _XMM0 = _mm128_sub_ps(v13, m_quad);
  __asm
  {
    vblendps xmm2, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
    vcmpeqps xmm1, xmm9, xmm2
    vandnps xmm4, xmm1, xmm2
    vrcpps  xmm2, xmm4
  }
  _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _XMM4)), _XMM2);
  __asm
  {
    vcmpeqps xmm0, xmm9, xmm4
    vblendvps xmm1, xmm3, xmm1, xmm0
  }
  ModifierShapecastQuery->m_ray.m_invDirection = (hkVector4f)_XMM1.m_quad;
  ModifierShapecastQuery->m_ray.m_direction.m_quad = _XMM4;
  ModifierShapecastQuery->m_ray.m_origin.m_quad = m_quad;
}

/*
==============
HavokPhysicsHitCollector_DetailTraceModifier::ServerModifyHitForShield
==============
*/
_BOOL8 HavokPhysicsHitCollector_DetailTraceModifier::ServerModifyHitForShield(const DObj *obj, const XModel *model, void *args)
{
  gentity_s *v4; 
  G_PhysicsObject *v5; 
  float v6; 
  unsigned int updated; 
  bool v8; 
  DObjPartBits *partBits[2]; 
  vec4_t quat; 
  hknpClosestHitCollector chc; 

  partBits[1] = (DObjPartBits *)-2i64;
  v4 = SV_GentityNum(*((_DWORD *)args + 4));
  v5 = G_PhysicsObject_Get(v4);
  Physics_LockWorld(PHYSICS_WORLD_ID_SERVER_DETAIL);
  chc.m_hints.m_storage = 0;
  chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
  chc.m_numHits = 0;
  chc.m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  chc.m_earlyOut.m_bool = 0;
  *(__m256i *)chc.m_hit.m_position.m_quad.m128_f32 = (__m256i)0i64;
  chc.m_hit.m_fraction = FLOAT_3_40282e38;
  chc.m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&chc.m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  chc.m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  chc.m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&chc.m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  chc.m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  memset(&chc.m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo, 0, 20);
  chc.m_earlyOutThreshold = HavokPhysicsHitCollector::GetCollector(*((HavokPhysicsHitCollector **)args + 1))->m_earlyOutThreshold;
  AnglesToQuat(&v4->r.currentAngles, &quat);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\g_physicsobject.inl", 14, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
    __debugbreak();
  v5->detailCache.position.v[0] = v4->r.currentOrigin.v[0];
  v5->detailCache.position.v[1] = v4->r.currentOrigin.v[1];
  v5->detailCache.position.v[2] = v4->r.currentOrigin.v[2];
  if ( ((v4->r.modelType - 1) & 0xFD) != 0 )
  {
    v5->detailCache.orientationAsQuat.v[0] = quat.v[0];
    v5->detailCache.orientationAsQuat.v[1] = quat.v[1];
    v5->detailCache.orientationAsQuat.v[2] = quat.v[2];
    v6 = quat.v[3];
  }
  else
  {
    v5->detailCache.orientationAsQuat.v[0] = quat_identity.v[0];
    v5->detailCache.orientationAsQuat.v[1] = quat_identity.v[1];
    v5->detailCache.orientationAsQuat.v[2] = quat_identity.v[2];
    v6 = quat_identity.v[3];
  }
  v5->detailCache.orientationAsQuat.v[3] = v6;
  v5->detailCache.cached = 0;
  if ( G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, *((_DWORD *)args + 4)) != -1 )
  {
    partBits[0] = NULL;
    updated = G_PhysicsObject_UpdateDetailWorldInstance(PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_SERVER_DETAIL, *((_DWORD *)args + 4), partBits);
    HavokPhysicsHitCollector_DetailTraceModifier::ModifyHitForDetailBoundsRay(*(HavokPhysicsHitCollector_DetailTraceModifier **)args, &chc, updated, partBits[0], *((const HavokPhysicsHitCollector **)args + 1), 0x2181u);
  }
  Physics_UnlockWorld(PHYSICS_WORLD_ID_SERVER_DETAIL);
  v8 = chc.m_numHits != 0;
  chc.__vftable = (hknpClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  hkBaseObject::~hkBaseObject(&chc);
  return v8;
}

