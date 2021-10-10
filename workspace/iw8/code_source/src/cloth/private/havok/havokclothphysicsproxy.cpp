/*
==============
HavokCloth_PhysicsProxyAction::apply
==============
*/

void __fastcall HavokCloth_PhysicsProxyAction::apply(HavokCloth_PhysicsProxyAction *this, hclSimClothInstance *simClothInstance, float timeStep, hkVector4f *forceAccumulatorInOut)
{
  ?apply@HavokCloth_PhysicsProxyAction@@UEBAXPEAVhclSimClothInstance@@MPEAVhkVector4f@@@Z(this, simClothInstance, timeStep, forceAccumulatorInOut);
}

/*
==============
HavokCloth_PhysicsProxyAction::HavokCloth_PhysicsProxyAction
==============
*/

void __fastcall HavokCloth_PhysicsProxyAction::HavokCloth_PhysicsProxyAction(HavokCloth_PhysicsProxyAction *this, const unsigned int globalWorldId, const ClothAsset *const clothAsset, const unsigned int instanceId, const unsigned int havokClothInstanceIdx)
{
  ??0HavokCloth_PhysicsProxyAction@@QEAA@IQEBUClothAsset@@II@Z(this, globalWorldId, clothAsset, instanceId, havokClothInstanceIdx);
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::HavokCloth_ExternMeshShapeGeometry
==============
*/

void __fastcall HavokCloth_ExternMeshShapeGeometry::HavokCloth_ExternMeshShapeGeometry(HavokCloth_ExternMeshShapeGeometry *this, const ClothAsset *const clothAsset)
{
  ??0HavokCloth_ExternMeshShapeGeometry@@QEAA@QEBUClothAsset@@@Z(this, clothAsset);
}

/*
==============
HavokCloth_PhysicsProxyAction::AddBulletImpact
==============
*/

void __fastcall HavokCloth_PhysicsProxyAction::AddBulletImpact(HavokCloth_PhysicsProxyAction *this, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKey, const hkVector4f *start, const hkVector4f *hitPos)
{
  ?AddBulletImpact@HavokCloth_PhysicsProxyAction@@QEAAXU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@AEBVhkVector4f@@1@Z(this, shapeKey, start, hitPos);
}

/*
==============
HavokCloth_PhysicsProxyAction::FlipBuffers
==============
*/

void __fastcall HavokCloth_PhysicsProxyAction::FlipBuffers(HavokCloth_PhysicsProxyAction *this)
{
  ?FlipBuffers@HavokCloth_PhysicsProxyAction@@QEAAXXZ(this);
}

/*
==============
HavokCloth_PhysicsProxyAction::~HavokCloth_PhysicsProxyAction
==============
*/

void __fastcall HavokCloth_PhysicsProxyAction::~HavokCloth_PhysicsProxyAction(HavokCloth_PhysicsProxyAction *this)
{
  ??1HavokCloth_PhysicsProxyAction@@UEAA@XZ(this);
}

/*
==============
HavokCloth_PhysicsProxyAction::UpdateShapeLocalGeo
==============
*/

void __fastcall HavokCloth_PhysicsProxyAction::UpdateShapeLocalGeo(HavokCloth_PhysicsProxyAction *this)
{
  ?UpdateShapeLocalGeo@HavokCloth_PhysicsProxyAction@@QEAAXXZ(this);
}

/*
==============
HavokCloth_ExternMeshShapeGeometry::HavokCloth_ExternMeshShapeGeometry
==============
*/
void HavokCloth_ExternMeshShapeGeometry::HavokCloth_ExternMeshShapeGeometry(HavokCloth_ExternMeshShapeGeometry *this, const ClothAsset *const clothAsset)
{
  HavokPhysicsShapeList::ShapeTagData shapeTagData; 
  hknpMaterialId result; 

  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->__vftable = (HavokCloth_ExternMeshShapeGeometry_vtbl *)&HavokCloth_ExternMeshShapeGeometry::`vftable';
  hkCriticalSection::hkCriticalSection(&this->m_prepGeoCritSec, 0);
  this->m_prepGeometry.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_prepGeometry.m_memSizeAndFlags = 0x1FFFF;
  this->m_prepGeometry.__vftable = (hkGeometry_vtbl *)hkGeometry::`vftable';
  this->m_prepGeometry.m_vertices.m_data = NULL;
  this->m_prepGeometry.m_vertices.m_size = 0;
  this->m_prepGeometry.m_vertices.m_capacityAndFlags = 0x80000000;
  this->m_prepGeometry.m_triangles.m_data = NULL;
  this->m_prepGeometry.m_triangles.m_size = 0;
  this->m_prepGeometry.m_triangles.m_capacityAndFlags = 0x80000000;
  this->m_geometry.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_geometry.m_memSizeAndFlags = 0x1FFFF;
  this->m_geometry.__vftable = (hkGeometry_vtbl *)hkGeometry::`vftable';
  this->m_geometry.m_vertices.m_data = NULL;
  this->m_geometry.m_vertices.m_size = 0;
  this->m_geometry.m_vertices.m_capacityAndFlags = 0x80000000;
  this->m_geometry.m_triangles.m_data = NULL;
  this->m_geometry.m_triangles.m_size = 0;
  this->m_geometry.m_triangles.m_capacityAndFlags = 0x80000000;
  if ( !clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 58, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset", -2i64) )
    __debugbreak();
  *(_QWORD *)&shapeTagData.m_collisionFilterInfo = 8320i64;
  shapeTagData.m_materialId = (hknpMaterialId)HavokPhysics_FindMaterialId(&result, HAVOKCLOTH_PHYSICSPROXY_PHYSICSMATERIAL)->m_value;
  shapeTagData.m_userData = (unsigned __int64)(clothAsset->surfaceTypeIndex & 0x3F) << 19;
  this->m_shapeTag = HavokPhysics_FindShapeTag(&shapeTagData);
}

/*
==============
HavokCloth_PhysicsProxyAction::HavokCloth_PhysicsProxyAction
==============
*/
void HavokCloth_PhysicsProxyAction::HavokCloth_PhysicsProxyAction(HavokCloth_PhysicsProxyAction *this, const unsigned int globalWorldId, const ClothAsset *const clothAsset, const unsigned int instanceId, const unsigned int havokClothInstanceIdx)
{
  hknpExternMeshShape *v9; 
  hkMemoryRouter *Value; 
  __int64 v11; 
  __int64 v12; 
  const ClothAsset *m_clothAsset; 
  hkMemoryRouter *v14; 
  hknpExternMeshShape *v15; 
  hknpExternMeshShape *v16; 
  unsigned __int16 v17; 
  int Ref; 
  unsigned int m_globalWorldId; 
  int v20; 
  int v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  hknpBodyId result; 
  hknpExternMeshShape::BuildConfig config; 
  __int64 v28; 
  HavokPhysicsShapeList::ShapeTagData shapeTagData; 
  __int64 v30; 
  HavokCloth_PhysicsProxyAction *v31; 
  vec3_t position; 
  vec4_t orientationAsQuat; 

  v30 = -2i64;
  v31 = this;
  hclAction::hclAction(this);
  this->__vftable = (HavokCloth_PhysicsProxyAction_vtbl *)&HavokCloth_PhysicsProxyAction::`vftable';
  this->m_globalWorldId = globalWorldId;
  this->m_clothAsset = clothAsset;
  this->m_instanceId = instanceId;
  this->m_havokClothInstanceIdx = havokClothInstanceIdx;
  `eh vector constructor iterator'(this->m_bufferedBulletImpacts, 0x10ui64, 2ui64, (void (__fastcall *)(void *))hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>::hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>, (void (__fastcall *)(void *))hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>::~hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>);
  v9 = NULL;
  this->m_bufferedBulletImpactActiveBufferIdx = 0;
  if ( !this->m_clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 79, ASSERT_TYPE_ASSERT, "(m_clothAsset)", (const char *)&queryFormat, "m_clothAsset") )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v11 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 184i64);
  v12 = v11;
  v28 = v11;
  if ( v11 )
  {
    m_clothAsset = this->m_clothAsset;
    *(_QWORD *)(v11 + 8) = 0i64;
    *(_DWORD *)(v11 + 16) = 0x1FFFF;
    *(_QWORD *)v11 = &HavokCloth_ExternMeshShapeGeometry::`vftable';
    hkCriticalSection::hkCriticalSection((hkCriticalSection *)(v11 + 24), 0);
    *(_QWORD *)(v12 + 72) = 0i64;
    *(_DWORD *)(v12 + 80) = 0x1FFFF;
    *(_QWORD *)(v12 + 64) = hkGeometry::`vftable';
    *(_QWORD *)(v12 + 88) = 0i64;
    *(_DWORD *)(v12 + 96) = 0;
    *(_DWORD *)(v12 + 100) = 0x80000000;
    *(_QWORD *)(v12 + 104) = 0i64;
    *(_DWORD *)(v12 + 112) = 0;
    *(_DWORD *)(v12 + 116) = 0x80000000;
    *(_QWORD *)(v12 + 128) = 0i64;
    *(_DWORD *)(v12 + 136) = 0x1FFFF;
    *(_QWORD *)(v12 + 120) = hkGeometry::`vftable';
    *(_QWORD *)(v12 + 144) = 0i64;
    *(_DWORD *)(v12 + 152) = 0;
    *(_DWORD *)(v12 + 156) = 0x80000000;
    *(_QWORD *)(v12 + 160) = 0i64;
    *(_DWORD *)(v12 + 168) = 0;
    *(_DWORD *)(v12 + 172) = 0x80000000;
    if ( !m_clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 58, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
      __debugbreak();
    *(_QWORD *)&shapeTagData.m_collisionFilterInfo = 8320i64;
    shapeTagData.m_materialId = (hknpMaterialId)HavokPhysics_FindMaterialId((hknpMaterialId *)&result, HAVOKCLOTH_PHYSICSPROXY_PHYSICSMATERIAL)->m_value;
    shapeTagData.m_userData = (unsigned __int64)(m_clothAsset->surfaceTypeIndex & 0x3F) << 19;
    *(_WORD *)(v12 + 176) = HavokPhysics_FindShapeTag(&shapeTagData);
  }
  else
  {
    v12 = 0i64;
  }
  this->m_shapeGeometry = (HavokCloth_ExternMeshShapeGeometry *)v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 83, ASSERT_TYPE_ASSERT, "(m_shapeGeometry)", (const char *)&queryFormat, "m_shapeGeometry") )
    __debugbreak();
  config.m_mode = OPTIMIZE_BUILD;
  config.m_triangleDegeneracyTolerance = 0.0;
  config.m_minShapeKeyBits = 12;
  v14 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v14 )
    v14 = hkMemoryRouter::s_fallbackRouter;
  v15 = (hknpExternMeshShape *)v14->m_heap->blockAlloc(v14->m_heap, 96i64);
  v28 = (__int64)v15;
  if ( v15 )
  {
    hknpExternMeshShape::hknpExternMeshShape(v15, this->m_shapeGeometry, &config);
    v9 = v16;
  }
  this->m_shape = v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 93, ASSERT_TYPE_ASSERT, "(m_shape)", (const char *)&queryFormat, "m_shape") )
    __debugbreak();
  v17 = truncate_cast<unsigned short,unsigned int>(instanceId);
  if ( havokClothInstanceIdx > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)havokClothInstanceIdx, "unsigned", havokClothInstanceIdx) )
    __debugbreak();
  Ref = Physics_MakeRef(Physics_RefSystem_ClothProxy, Physics_RelationshipSystem_None, havokClothInstanceIdx, v17);
  position = vec3_origin;
  orientationAsQuat = quat_identity;
  m_globalWorldId = this->m_globalWorldId;
  v20 = 3 * m_globalWorldId + 3;
  v21 = 3 * m_globalWorldId + 4;
  v22 = HAVOKCLOTH_PHYSICSPROXY_PHYSICSMATERIAL;
  v23 = j_va("cloth%i", instanceId);
  this->m_authInstanceId = Physics_InstantiateKeyframedBody((Physics_WorldId)v20, this->m_shape, Ref, v23, v22, 8320, &position, &orientationAsQuat, 1, 1, 1);
  v24 = HAVOKCLOTH_PHYSICSPROXY_PHYSICSMATERIAL;
  v25 = j_va("cloth%i", instanceId);
  this->m_detailInstanceId = Physics_InstantiateStaticBody((Physics_WorldId)v21, this->m_shape, Ref, v25, v24, 8320, &position, &orientationAsQuat, 1, 1, 1);
  if ( this->m_authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 113, ASSERT_TYPE_ASSERT, "(m_authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "m_authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( this->m_detailInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 114, ASSERT_TYPE_ASSERT, "(m_detailInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "m_detailInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( Physics_GetNumRigidBodys((const Physics_WorldId)v20, this->m_authInstanceId) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 117, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( clientAuthWorldId, m_authInstanceId ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( clientAuthWorldId, m_authInstanceId ) == 1") )
    __debugbreak();
  if ( Physics_GetNumRigidBodys((const Physics_WorldId)v21, this->m_detailInstanceId) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 118, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( clientDetailWorldId, m_detailInstanceId ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( clientDetailWorldId, m_detailInstanceId ) == 1") )
    __debugbreak();
  this->m_authBodyId = (hknpBodyId)HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v20, this->m_authInstanceId, 0)->m_serialAndIndex;
  this->m_detailBodyId = (hknpBodyId)HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v21, this->m_detailInstanceId, 0)->m_serialAndIndex;
  if ( (this->m_authBodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 121, ASSERT_TYPE_ASSERT, "(m_authBodyId.isValid())", (const char *)&queryFormat, "m_authBodyId.isValid()") )
    __debugbreak();
  if ( (this->m_detailBodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 122, ASSERT_TYPE_ASSERT, "(m_detailBodyId.isValid())", (const char *)&queryFormat, "m_detailBodyId.isValid()") )
    __debugbreak();
}

/*
==============
HavokCloth_PhysicsProxyAction::~HavokCloth_PhysicsProxyAction
==============
*/
void HavokCloth_PhysicsProxyAction::~HavokCloth_PhysicsProxyAction(HavokCloth_PhysicsProxyAction *this)
{
  unsigned int m_globalWorldId; 
  int v3; 
  int v4; 

  this->__vftable = (HavokCloth_PhysicsProxyAction_vtbl *)&HavokCloth_PhysicsProxyAction::`vftable';
  m_globalWorldId = this->m_globalWorldId;
  v3 = 3 * m_globalWorldId + 3;
  v4 = 3 * m_globalWorldId + 4;
  if ( this->m_detailInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 135, ASSERT_TYPE_ASSERT, "(m_detailInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "m_detailInstanceId != PHYSICSINSTANCEID_INVALID", -2i64) )
    __debugbreak();
  if ( this->m_authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 136, ASSERT_TYPE_ASSERT, "(m_authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "m_authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  Physics_DestroyInstance((Physics_WorldId)v4, this->m_detailInstanceId, 0);
  Physics_DestroyInstance((Physics_WorldId)v3, this->m_authInstanceId, 0);
  if ( !this->m_shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 141, ASSERT_TYPE_ASSERT, "(m_shape)", (const char *)&queryFormat, "m_shape") )
    __debugbreak();
  hkReferencedObject::removeReference(this->m_shape);
  if ( !this->m_shapeGeometry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 145, ASSERT_TYPE_ASSERT, "(m_shapeGeometry)", (const char *)&queryFormat, "m_shapeGeometry") )
    __debugbreak();
  hkReferencedObject::removeReference(this->m_shapeGeometry);
  `eh vector destructor iterator'(this->m_bufferedBulletImpacts, 0x10ui64, 2ui64, (void (__fastcall *)(void *))hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>::~hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>);
  hkReferencedObject::~hkReferencedObject(this);
}

/*
==============
HavokCloth_PhysicsProxyAction::AddBulletImpact
==============
*/
void HavokCloth_PhysicsProxyAction::AddBulletImpact(HavokCloth_PhysicsProxyAction *this, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKey, const hkVector4f *start, const hkVector4f *hitPos)
{
  hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator> *v8; 
  hkMemoryAllocator *v9; 
  int m_size; 
  __int64 v11; 

  if ( (this->m_authBodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 335, ASSERT_TYPE_ASSERT, "(m_authBodyId.isValid())", (const char *)&queryFormat, "m_authBodyId.isValid()") )
    __debugbreak();
  v8 = &this->m_bufferedBulletImpacts[1 - this->m_bufferedBulletImpactActiveBufferIdx];
  v9 = hkMemHeapAllocator();
  m_size = v8->m_size;
  if ( m_size == (v8->m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v9, v8, 32);
    m_size = v8->m_size;
  }
  v11 = (__int64)&v8->m_data[m_size];
  v8->m_size = m_size + 1;
  *(_DWORD *)v11 = shapeKey.m_value >> (32 - this->m_shape->m_numShapeKeyBits) >> 1;
  _XMM6 = _mm128_sub_ps(hitPos->m_quad, start->m_quad);
  __asm { vdpps   xmm1, xmm6, xmm6, 7Fh }
  *(__m128 *)(v11 + 16) = _XMM6;
  __asm
  {
    vcmpleps xmm4, xmm1, xmm0
    vrsqrtps xmm5, xmm1
  }
  _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM5, _XMM1), _XMM5)), _mm128_mul_ps(_XMM5, *(__m128 *)hkMath::hkSse_floatHalf));
  __asm { vandnps xmm0, xmm4, xmm2 }
  *(__m128 *)(v11 + 16) = _mm128_mul_ps(_XMM0, _XMM6);
}

/*
==============
HavokCloth_PhysicsProxyAction::FlipBuffers
==============
*/
void HavokCloth_PhysicsProxyAction::FlipBuffers(HavokCloth_PhysicsProxyAction *this)
{
  this->m_bufferedBulletImpacts[this->m_bufferedBulletImpactActiveBufferIdx].m_size = 0;
  this->m_bufferedBulletImpactActiveBufferIdx = 1 - this->m_bufferedBulletImpactActiveBufferIdx;
}

/*
==============
HavokCloth_PhysicsProxyAction::UpdateShapeLocalGeo
==============
*/
void HavokCloth_PhysicsProxyAction::UpdateShapeLocalGeo(HavokCloth_PhysicsProxyAction *this)
{
  HavokCloth_PhysicsProxyAction *v1; 
  hclClothInstance *ClothInstance; 
  const hclClothData *m_clothData; 
  unsigned int m_currentState; 
  hkGeometry *p_m_prepGeometry; 
  int *m_data; 
  hclBuffer *v7; 
  unsigned int m_numElements; 
  unsigned int v9; 
  int v10; 
  hkMemoryAllocator *v11; 
  int v12; 
  int v13; 
  hkResult v14; 
  hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> *p_m_triangles; 
  int v16; 
  hkMemoryAllocator *v17; 
  int v18; 
  int v19; 
  hkResult v20; 
  unsigned int i; 
  hkMemoryAllocator *v24; 
  int m_size; 
  hkVector4f *v26; 
  unsigned int v27; 
  __int64 v28; 
  char *m_bufferStart; 
  unsigned __int16 v30; 
  unsigned __int16 v31; 
  unsigned __int16 v32; 
  hkMemoryAllocator *v33; 
  int v34; 
  hkGeometry::Triangle *v35; 
  hkMemoryAllocator *v36; 
  int v37; 
  hkGeometry::Triangle *v38; 
  Cloth_OwnerType OwnerType; 
  hkMemoryAllocator *v40; 
  hkArray<int,hkContainerHeapAllocator> simBufferIndices; 
  int m_code; 
  int v43; 
  hclClothInstance *v44; 
  hkGeometry *v45; 
  HavokCloth_PhysicsProxyAction *v46; 
  __int64 v47; 
  hkQuaternionf orientation; 
  hkVector4f position; 
  hkVector4f b; 
  hkTransformf v51; 
  hkTransformf a; 

  v47 = -2i64;
  v1 = this;
  v46 = this;
  if ( !this->m_shapeGeometry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 230, ASSERT_TYPE_ASSERT, "(m_shapeGeometry)", (const char *)&queryFormat, "m_shapeGeometry") )
    __debugbreak();
  if ( !v1->m_shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 231, ASSERT_TYPE_ASSERT, "(m_shape)", (const char *)&queryFormat, "m_shape") )
    __debugbreak();
  ClothInstance = HavokCloth_GetClothInstance(v1->m_globalWorldId, v1->m_instanceId, v1->m_havokClothInstanceIdx);
  v44 = ClothInstance;
  if ( !ClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 235, ASSERT_TYPE_ASSERT, "(clothInstance)", (const char *)&queryFormat, "clothInstance") )
    __debugbreak();
  m_clothData = ClothInstance->m_clothData;
  if ( !m_clothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 239, ASSERT_TYPE_ASSERT, "(clothData)", (const char *)&queryFormat, "clothData") )
    __debugbreak();
  m_currentState = ClothInstance->m_currentState;
  simBufferIndices.m_data = NULL;
  simBufferIndices.m_size = 0;
  simBufferIndices.m_capacityAndFlags = 0x80000000;
  hclSimClothUtils::getActiveSimClothBufferIndices(m_clothData, m_currentState, &simBufferIndices);
  p_m_prepGeometry = &v1->m_shapeGeometry->m_prepGeometry;
  v45 = p_m_prepGeometry;
  if ( p_m_prepGeometry->m_vertices.m_size || simBufferIndices.m_size )
  {
    Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_PhysicsProxyAction::UpdateShapeLocalGeo");
    EnterCriticalSection((LPCRITICAL_SECTION)&v1->m_shapeGeometry->m_prepGeoCritSec);
    hkGeometry::clear(p_m_prepGeometry);
    HavokCloth_GetInstancePosition(v1->m_globalWorldId, v1->m_instanceId, &position);
    HavokCloth_GetInstanceOrientation(v1->m_globalWorldId, v1->m_instanceId, &orientation);
    hkRotationImpl<float>::set(&v51.m_rotation, &orientation);
    v51.m_translation = (hkVector4f)position.m_quad;
    hkTransformf::setInverse(&a, &v51);
    m_data = simBufferIndices.m_data;
    if ( simBufferIndices.m_data != &simBufferIndices.m_data[simBufferIndices.m_size] )
    {
      do
      {
        v7 = ClothInstance->m_buffers.m_data[ClothInstance->m_buffers.m_data[*m_data]->m_currentShadowIndex];
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 286, ASSERT_TYPE_ASSERT, "(simBuffer)", (const char *)&queryFormat, "simBuffer") )
          __debugbreak();
        if ( v7->m_positions.m_bufferStart )
        {
          if ( v7->m_triangles.m_bufferStart )
          {
            m_numElements = v7->m_positions.m_numElements;
            if ( m_numElements )
            {
              v9 = v7->m_triangles.m_numElements;
              if ( v9 )
              {
                v10 = m_numElements + p_m_prepGeometry->m_vertices.m_size;
                v11 = hkMemHeapAllocator();
                v12 = p_m_prepGeometry->m_vertices.m_capacityAndFlags & 0x3FFFFFFF;
                if ( v12 >= v10 )
                {
                  v14.m_code = 0;
                }
                else
                {
                  v13 = 2 * v12;
                  if ( (unsigned int)v13 >= 0x3FFFFFFF )
                    v13 = 1073741822;
                  if ( v10 < v13 )
                    v10 = v13;
                  v14.m_code = hkArrayUtil::_reserve(v11, &p_m_prepGeometry->m_vertices, v10, 16).m_code;
                }
                m_code = v14.m_code;
                p_m_triangles = &p_m_prepGeometry->m_triangles;
                v16 = p_m_prepGeometry->m_triangles.m_size + 2 * v9;
                v17 = hkMemHeapAllocator();
                v18 = p_m_prepGeometry->m_triangles.m_capacityAndFlags & 0x3FFFFFFF;
                if ( v18 >= v16 )
                {
                  v20.m_code = 0;
                }
                else
                {
                  v19 = 2 * v18;
                  if ( (unsigned int)v19 >= 0x3FFFFFFF )
                    v19 = 1073741822;
                  if ( v16 < v19 )
                    v16 = v19;
                  v20.m_code = hkArrayUtil::_reserve(v17, &p_m_prepGeometry->m_triangles, v16, 16).m_code;
                }
                v43 = v20.m_code;
                for ( i = 0; i < v7->m_positions.m_numElements; ++i )
                {
                  _RCX = (char *)v7->m_positions.m_bufferStart + i * v7->m_positions.m_stride;
                  __asm { vlddqu  xmm0, xmmword ptr [rcx] }
                  b.m_quad = _XMM0;
                  v24 = hkMemHeapAllocator();
                  m_size = p_m_prepGeometry->m_vertices.m_size;
                  if ( m_size == (p_m_prepGeometry->m_vertices.m_capacityAndFlags & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::_reserveMore(v24, &p_m_prepGeometry->m_vertices, 16);
                    m_size = p_m_prepGeometry->m_vertices.m_size;
                  }
                  v26 = &p_m_prepGeometry->m_vertices.m_data[m_size];
                  p_m_prepGeometry->m_vertices.m_size = m_size + 1;
                  hkVector4f::setTransformedPos(v26, &a, &b);
                }
                v27 = 0;
                if ( v7->m_triangles.m_numElements )
                {
                  do
                  {
                    v28 = v27 * v7->m_triangles.m_stride;
                    m_bufferStart = (char *)v7->m_triangles.m_bufferStart;
                    if ( v7->m_triangles.m_use16BitsIndices.m_bool )
                    {
                      v30 = *(_WORD *)&m_bufferStart[v28 + 2];
                      v31 = *(_WORD *)&m_bufferStart[v28 + 4];
                    }
                    else
                    {
                      v30 = *(_WORD *)&m_bufferStart[v28 + 4];
                      v31 = *(_WORD *)&m_bufferStart[v28 + 8];
                    }
                    v32 = *(_WORD *)&m_bufferStart[v28];
                    v33 = hkMemHeapAllocator();
                    v34 = p_m_triangles->m_size;
                    if ( v34 == (p_m_triangles->m_capacityAndFlags & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v33, p_m_triangles, 16);
                      v34 = p_m_triangles->m_size;
                    }
                    v35 = &p_m_triangles->m_data[v34];
                    p_m_triangles->m_size = v34 + 1;
                    v35->m_a = v32;
                    v35->m_b = v30;
                    v35->m_c = v31;
                    v35->m_material = -1;
                    v36 = hkMemHeapAllocator();
                    v37 = p_m_triangles->m_size;
                    if ( v37 == (p_m_triangles->m_capacityAndFlags & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v36, p_m_triangles, 16);
                      v37 = p_m_triangles->m_size;
                    }
                    v38 = &p_m_triangles->m_data[v37];
                    p_m_triangles->m_size = v37 + 1;
                    v38->m_a = v32;
                    v38->m_b = v31;
                    v38->m_c = v30;
                    v38->m_material = -1;
                    ++v27;
                  }
                  while ( v27 < v7->m_triangles.m_numElements );
                  p_m_prepGeometry = v45;
                }
                ClothInstance = v44;
              }
            }
          }
        }
        ++m_data;
      }
      while ( m_data != &simBufferIndices.m_data[simBufferIndices.m_size] );
      v1 = v46;
    }
    OwnerType = Cloth_GetOwnerType(v1->m_globalWorldId, v1->m_instanceId);
    Cloth_Debug_Perf_AddPhysicsProxyMeshCount(v1->m_globalWorldId, OwnerType, 1);
    Cloth_Debug_Perf_AddPhysicsProxyMeshTriCount(v1->m_globalWorldId, OwnerType, p_m_prepGeometry->m_triangles.m_size);
    LeaveCriticalSection((LPCRITICAL_SECTION)&v1->m_shapeGeometry->m_prepGeoCritSec);
    Sys_ProfEndNamedEvent();
  }
  v40 = hkMemHeapAllocator();
  simBufferIndices.m_size = 0;
  if ( simBufferIndices.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v40, simBufferIndices.m_data, 4, simBufferIndices.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
HavokCloth_PhysicsProxyAction::apply
==============
*/
void HavokCloth_PhysicsProxyAction::apply(HavokCloth_PhysicsProxyAction *this, hclSimClothInstance *simClothInstance, float timeStep, hkVector4f *forceAccumulatorInOut)
{
  const hclSimClothData *m_simClothData; 
  Cloth_OwnerType OwnerType; 
  hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator> *v9; 
  __m128 *i; 
  int v11; 
  unsigned int v12; 
  __m128 v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !this->m_clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 153, ASSERT_TYPE_ASSERT, "(m_clothAsset)", (const char *)&queryFormat, "m_clothAsset") )
    __debugbreak();
  if ( !simClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 154, ASSERT_TYPE_ASSERT, "(simClothInstance)", (const char *)&queryFormat, "simClothInstance") )
    __debugbreak();
  if ( timeStep <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 155, ASSERT_TYPE_ASSERT, "(timeStep > 0.f)", (const char *)&queryFormat, "timeStep > 0.f") )
    __debugbreak();
  if ( !forceAccumulatorInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 156, ASSERT_TYPE_ASSERT, "(forceAccumulatorInOut)", (const char *)&queryFormat, "forceAccumulatorInOut") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_PhysicsProxyAction");
  m_simClothData = simClothInstance->m_simClothData;
  if ( m_simClothData->m_totalMass != 0.0 )
  {
    if ( !m_simClothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 170, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
      __debugbreak();
    if ( m_simClothData->m_triangleIndices.m_size / 3 > 0 )
    {
      OwnerType = Cloth_GetOwnerType(this->m_globalWorldId, this->m_instanceId);
      Cloth_Debug_Perf_AddPhysicsProxyCount(this->m_globalWorldId, OwnerType, 1);
      v9 = &this->m_bufferedBulletImpacts[this->m_bufferedBulletImpactActiveBufferIdx];
      if ( v9->m_size )
      {
        if ( dword_151535068 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
        {
          j__Init_thread_header(&dword_151535068);
          if ( dword_151535068 == -1 )
          {
            forceScalar = this->m_clothAsset->bulletForce;
            j__Init_thread_footer(&dword_151535068);
          }
        }
        if ( forceScalar <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 198, ASSERT_TYPE_ASSERT, "(forceScalar > 0.f)", (const char *)&queryFormat, "forceScalar > 0.f") )
          __debugbreak();
        for ( i = (__m128 *)v9->m_data; i != (__m128 *)&v9->m_data[v9->m_size]; forceAccumulatorInOut[(unsigned __int16)v12].m_quad = _mm128_add_ps(v14, forceAccumulatorInOut[(unsigned __int16)v12].m_quad) )
        {
          v11 = 3 * (i->m128_i32[0] >> 1);
          if ( v11 > m_simClothData->m_triangleIndices.m_size )
            break;
          v12 = m_simClothData->m_triangleIndices.m_data[v11];
          if ( v12 >= simClothInstance->m_particlePositions.m_size )
          {
            LODWORD(v16) = simClothInstance->m_particlePositions.m_size;
            LODWORD(v15) = m_simClothData->m_triangleIndices.m_data[v11];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 214, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( simClothInstance->getNumberOfParticles() )", "particleId doesn't index simClothInstance->getNumberOfParticles()\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          __asm { vbroadcastss xmm0, cs:forceScalar }
          v14 = _mm128_mul_ps(_XMM0, i[1]);
          i += 2;
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

