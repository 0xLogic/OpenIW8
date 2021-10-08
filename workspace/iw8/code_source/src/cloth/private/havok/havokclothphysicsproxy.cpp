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
  hknpExternMeshShape *v10; 
  hkMemoryRouter *Value; 
  __int64 v12; 
  __int64 v13; 
  const ClothAsset *m_clothAsset; 
  hkMemoryRouter *v16; 
  hknpExternMeshShape *v17; 
  hknpExternMeshShape *v18; 
  unsigned __int16 v19; 
  int Ref; 
  unsigned int m_globalWorldId; 
  int v24; 
  int v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  hknpBodyId result; 
  hknpExternMeshShape::BuildConfig config; 
  __int64 v32; 
  HavokPhysicsShapeList::ShapeTagData shapeTagData; 
  __int64 v34; 
  HavokCloth_PhysicsProxyAction *v35; 
  vec3_t position; 
  vec4_t orientationAsQuat; 

  v34 = -2i64;
  v35 = this;
  hclAction::hclAction(this);
  this->__vftable = (HavokCloth_PhysicsProxyAction_vtbl *)&HavokCloth_PhysicsProxyAction::`vftable';
  this->m_globalWorldId = globalWorldId;
  this->m_clothAsset = clothAsset;
  this->m_instanceId = instanceId;
  this->m_havokClothInstanceIdx = havokClothInstanceIdx;
  `eh vector constructor iterator'(this->m_bufferedBulletImpacts, 0x10ui64, 2ui64, (void (__fastcall *)(void *))hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>::hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>, (void (__fastcall *)(void *))hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>::~hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator>);
  v10 = NULL;
  this->m_bufferedBulletImpactActiveBufferIdx = 0;
  if ( !this->m_clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 79, ASSERT_TYPE_ASSERT, "(m_clothAsset)", (const char *)&queryFormat, "m_clothAsset") )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v12 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 184i64);
  v13 = v12;
  v32 = v12;
  if ( v12 )
  {
    m_clothAsset = this->m_clothAsset;
    *(_QWORD *)(v12 + 8) = 0i64;
    *(_DWORD *)(v12 + 16) = 0x1FFFF;
    *(_QWORD *)v12 = &HavokCloth_ExternMeshShapeGeometry::`vftable';
    hkCriticalSection::hkCriticalSection((hkCriticalSection *)(v12 + 24), 0);
    *(_QWORD *)(v13 + 72) = 0i64;
    *(_DWORD *)(v13 + 80) = 0x1FFFF;
    *(_QWORD *)(v13 + 64) = hkGeometry::`vftable';
    *(_QWORD *)(v13 + 88) = 0i64;
    *(_DWORD *)(v13 + 96) = 0;
    *(_DWORD *)(v13 + 100) = 0x80000000;
    *(_QWORD *)(v13 + 104) = 0i64;
    *(_DWORD *)(v13 + 112) = 0;
    *(_DWORD *)(v13 + 116) = 0x80000000;
    *(_QWORD *)(v13 + 128) = 0i64;
    *(_DWORD *)(v13 + 136) = 0x1FFFF;
    *(_QWORD *)(v13 + 120) = hkGeometry::`vftable';
    *(_QWORD *)(v13 + 144) = 0i64;
    *(_DWORD *)(v13 + 152) = 0;
    *(_DWORD *)(v13 + 156) = 0x80000000;
    *(_QWORD *)(v13 + 160) = 0i64;
    *(_DWORD *)(v13 + 168) = 0;
    *(_DWORD *)(v13 + 172) = 0x80000000;
    if ( !m_clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 58, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
      __debugbreak();
    *(_QWORD *)&shapeTagData.m_collisionFilterInfo = 8320i64;
    shapeTagData.m_materialId = (hknpMaterialId)HavokPhysics_FindMaterialId((hknpMaterialId *)&result, HAVOKCLOTH_PHYSICSPROXY_PHYSICSMATERIAL)->m_value;
    shapeTagData.m_userData = (unsigned __int64)(m_clothAsset->surfaceTypeIndex & 0x3F) << 19;
    *(_WORD *)(v13 + 176) = HavokPhysics_FindShapeTag(&shapeTagData);
  }
  else
  {
    v13 = 0i64;
  }
  this->m_shapeGeometry = (HavokCloth_ExternMeshShapeGeometry *)v13;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 83, ASSERT_TYPE_ASSERT, "(m_shapeGeometry)", (const char *)&queryFormat, "m_shapeGeometry") )
    __debugbreak();
  config.m_mode = OPTIMIZE_BUILD;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+108h+config.m_triangleDegeneracyTolerance], xmm0
  }
  config.m_minShapeKeyBits = 12;
  v16 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v16 )
    v16 = hkMemoryRouter::s_fallbackRouter;
  v17 = (hknpExternMeshShape *)v16->m_heap->blockAlloc(v16->m_heap, 96i64);
  v32 = (__int64)v17;
  if ( v17 )
  {
    hknpExternMeshShape::hknpExternMeshShape(v17, this->m_shapeGeometry, &config);
    v10 = v18;
  }
  this->m_shape = v10;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 93, ASSERT_TYPE_ASSERT, "(m_shape)", (const char *)&queryFormat, "m_shape") )
    __debugbreak();
  v19 = truncate_cast<unsigned short,unsigned int>(instanceId);
  if ( havokClothInstanceIdx > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)havokClothInstanceIdx, "unsigned", havokClothInstanceIdx) )
    __debugbreak();
  Ref = Physics_MakeRef(Physics_RefSystem_ClothProxy, Physics_RelationshipSystem_None, havokClothInstanceIdx, v19);
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rsp+108h+var_60], xmm0
  }
  position.v[2] = vec3_origin.v[2];
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovups xmmword ptr [rsp+108h+var_50], xmm0
  }
  m_globalWorldId = this->m_globalWorldId;
  v24 = 3 * m_globalWorldId + 3;
  v25 = 3 * m_globalWorldId + 4;
  v26 = HAVOKCLOTH_PHYSICSPROXY_PHYSICSMATERIAL;
  v27 = j_va("cloth%i", instanceId);
  this->m_authInstanceId = Physics_InstantiateKeyframedBody((Physics_WorldId)v24, this->m_shape, Ref, v27, v26, 8320, &position, &orientationAsQuat, 1, 1, 1);
  v28 = HAVOKCLOTH_PHYSICSPROXY_PHYSICSMATERIAL;
  v29 = j_va("cloth%i", instanceId);
  this->m_detailInstanceId = Physics_InstantiateStaticBody((Physics_WorldId)v25, this->m_shape, Ref, v29, v28, 8320, &position, &orientationAsQuat, 1, 1, 1);
  if ( this->m_authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 113, ASSERT_TYPE_ASSERT, "(m_authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "m_authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( this->m_detailInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 114, ASSERT_TYPE_ASSERT, "(m_detailInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "m_detailInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( Physics_GetNumRigidBodys((const Physics_WorldId)v24, this->m_authInstanceId) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 117, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( clientAuthWorldId, m_authInstanceId ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( clientAuthWorldId, m_authInstanceId ) == 1") )
    __debugbreak();
  if ( Physics_GetNumRigidBodys((const Physics_WorldId)v25, this->m_detailInstanceId) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 118, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( clientDetailWorldId, m_detailInstanceId ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( clientDetailWorldId, m_detailInstanceId ) == 1") )
    __debugbreak();
  this->m_authBodyId = (hknpBodyId)HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v24, this->m_authInstanceId, 0)->m_serialAndIndex;
  this->m_detailBodyId = (hknpBodyId)HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v25, this->m_detailInstanceId, 0)->m_serialAndIndex;
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

  _RBP = hitPos;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
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
  _RDX = &v8->m_data[m_size];
  v8->m_size = m_size + 1;
  _RDX->triangleIdx = shapeKey.m_value >> (32 - this->m_shape->m_numShapeKeyBits) >> 1;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vsubps  xmm6, xmm0, xmmword ptr [r14]
    vdpps   xmm1, xmm6, xmm6, 7Fh
    vmovups xmmword ptr [rdx+10h], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcmpleps xmm4, xmm1, xmm0
    vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vrsqrtps xmm5, xmm1
    vmulps  xmm1, xmm5, xmm1
    vmulps  xmm2, xmm1, xmm5
    vmulps  xmm1, xmm5, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vsubps  xmm3, xmm0, xmm2
    vmulps  xmm2, xmm3, xmm1
    vandnps xmm0, xmm4, xmm2
    vmulps  xmm3, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovups xmmword ptr [rdx+10h], xmm3
  }
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
  hclBuffer *v8; 
  unsigned int m_numElements; 
  unsigned int v10; 
  int v11; 
  hkMemoryAllocator *v12; 
  int v13; 
  int v14; 
  hkResult v15; 
  hkArray<hkGeometry::Triangle,hkContainerHeapAllocator> *p_m_triangles; 
  int v17; 
  hkMemoryAllocator *v18; 
  int v19; 
  int v20; 
  hkResult v21; 
  unsigned int i; 
  hkMemoryAllocator *v25; 
  int m_size; 
  hkVector4f *v27; 
  unsigned int v28; 
  __int64 v29; 
  char *m_bufferStart; 
  unsigned __int16 v31; 
  unsigned __int16 v32; 
  unsigned __int16 v33; 
  hkMemoryAllocator *v34; 
  int v35; 
  hkGeometry::Triangle *v36; 
  hkMemoryAllocator *v37; 
  int v38; 
  hkGeometry::Triangle *v39; 
  Cloth_OwnerType OwnerType; 
  hkMemoryAllocator *v41; 
  hkArray<int,hkContainerHeapAllocator> simBufferIndices; 
  int m_code; 
  int v44; 
  hclClothInstance *v45; 
  hkGeometry *v46; 
  HavokCloth_PhysicsProxyAction *v47; 
  __int64 v48; 
  hkQuaternionf orientation; 
  hkVector4f position; 
  hkVector4f b; 
  hkTransformf v52; 
  hkTransformf a; 

  v48 = -2i64;
  v1 = this;
  v47 = this;
  if ( !this->m_shapeGeometry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 230, ASSERT_TYPE_ASSERT, "(m_shapeGeometry)", (const char *)&queryFormat, "m_shapeGeometry") )
    __debugbreak();
  if ( !v1->m_shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 231, ASSERT_TYPE_ASSERT, "(m_shape)", (const char *)&queryFormat, "m_shape") )
    __debugbreak();
  ClothInstance = HavokCloth_GetClothInstance(v1->m_globalWorldId, v1->m_instanceId, v1->m_havokClothInstanceIdx);
  v45 = ClothInstance;
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
  v46 = p_m_prepGeometry;
  if ( p_m_prepGeometry->m_vertices.m_size || simBufferIndices.m_size )
  {
    Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_PhysicsProxyAction::UpdateShapeLocalGeo");
    EnterCriticalSection((LPCRITICAL_SECTION)&v1->m_shapeGeometry->m_prepGeoCritSec);
    hkGeometry::clear(p_m_prepGeometry);
    HavokCloth_GetInstancePosition(v1->m_globalWorldId, v1->m_instanceId, &position);
    HavokCloth_GetInstanceOrientation(v1->m_globalWorldId, v1->m_instanceId, &orientation);
    hkRotationImpl<float>::set(&v52.m_rotation, &orientation);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+50h+position.m_quad]
      vmovups [rbp+50h+var_80], xmm0
    }
    hkTransformf::setInverse(&a, &v52);
    m_data = simBufferIndices.m_data;
    if ( simBufferIndices.m_data != &simBufferIndices.m_data[simBufferIndices.m_size] )
    {
      do
      {
        v8 = ClothInstance->m_buffers.m_data[ClothInstance->m_buffers.m_data[*m_data]->m_currentShadowIndex];
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 286, ASSERT_TYPE_ASSERT, "(simBuffer)", (const char *)&queryFormat, "simBuffer") )
          __debugbreak();
        if ( v8->m_positions.m_bufferStart )
        {
          if ( v8->m_triangles.m_bufferStart )
          {
            m_numElements = v8->m_positions.m_numElements;
            if ( m_numElements )
            {
              v10 = v8->m_triangles.m_numElements;
              if ( v10 )
              {
                v11 = m_numElements + p_m_prepGeometry->m_vertices.m_size;
                v12 = hkMemHeapAllocator();
                v13 = p_m_prepGeometry->m_vertices.m_capacityAndFlags & 0x3FFFFFFF;
                if ( v13 >= v11 )
                {
                  v15.m_code = 0;
                }
                else
                {
                  v14 = 2 * v13;
                  if ( (unsigned int)v14 >= 0x3FFFFFFF )
                    v14 = 1073741822;
                  if ( v11 < v14 )
                    v11 = v14;
                  v15.m_code = hkArrayUtil::_reserve(v12, &p_m_prepGeometry->m_vertices, v11, 16).m_code;
                }
                m_code = v15.m_code;
                p_m_triangles = &p_m_prepGeometry->m_triangles;
                v17 = p_m_prepGeometry->m_triangles.m_size + 2 * v10;
                v18 = hkMemHeapAllocator();
                v19 = p_m_prepGeometry->m_triangles.m_capacityAndFlags & 0x3FFFFFFF;
                if ( v19 >= v17 )
                {
                  v21.m_code = 0;
                }
                else
                {
                  v20 = 2 * v19;
                  if ( (unsigned int)v20 >= 0x3FFFFFFF )
                    v20 = 1073741822;
                  if ( v17 < v20 )
                    v17 = v20;
                  v21.m_code = hkArrayUtil::_reserve(v18, &p_m_prepGeometry->m_triangles, v17, 16).m_code;
                }
                v44 = v21.m_code;
                for ( i = 0; i < v8->m_positions.m_numElements; ++i )
                {
                  _RCX = (char *)v8->m_positions.m_bufferStart + i * v8->m_positions.m_stride;
                  __asm
                  {
                    vlddqu  xmm0, xmmword ptr [rcx]
                    vmovdqu xmmword ptr [rbp+50h+b.m_quad], xmm0
                  }
                  v25 = hkMemHeapAllocator();
                  m_size = p_m_prepGeometry->m_vertices.m_size;
                  if ( m_size == (p_m_prepGeometry->m_vertices.m_capacityAndFlags & 0x3FFFFFFF) )
                  {
                    hkArrayUtil::_reserveMore(v25, &p_m_prepGeometry->m_vertices, 16);
                    m_size = p_m_prepGeometry->m_vertices.m_size;
                  }
                  v27 = &p_m_prepGeometry->m_vertices.m_data[m_size];
                  p_m_prepGeometry->m_vertices.m_size = m_size + 1;
                  hkVector4f::setTransformedPos(v27, &a, &b);
                }
                v28 = 0;
                if ( v8->m_triangles.m_numElements )
                {
                  do
                  {
                    v29 = v28 * v8->m_triangles.m_stride;
                    m_bufferStart = (char *)v8->m_triangles.m_bufferStart;
                    if ( v8->m_triangles.m_use16BitsIndices.m_bool )
                    {
                      v31 = *(_WORD *)&m_bufferStart[v29 + 2];
                      v32 = *(_WORD *)&m_bufferStart[v29 + 4];
                    }
                    else
                    {
                      v31 = *(_WORD *)&m_bufferStart[v29 + 4];
                      v32 = *(_WORD *)&m_bufferStart[v29 + 8];
                    }
                    v33 = *(_WORD *)&m_bufferStart[v29];
                    v34 = hkMemHeapAllocator();
                    v35 = p_m_triangles->m_size;
                    if ( v35 == (p_m_triangles->m_capacityAndFlags & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v34, p_m_triangles, 16);
                      v35 = p_m_triangles->m_size;
                    }
                    v36 = &p_m_triangles->m_data[v35];
                    p_m_triangles->m_size = v35 + 1;
                    v36->m_a = v33;
                    v36->m_b = v31;
                    v36->m_c = v32;
                    v36->m_material = -1;
                    v37 = hkMemHeapAllocator();
                    v38 = p_m_triangles->m_size;
                    if ( v38 == (p_m_triangles->m_capacityAndFlags & 0x3FFFFFFF) )
                    {
                      hkArrayUtil::_reserveMore(v37, p_m_triangles, 16);
                      v38 = p_m_triangles->m_size;
                    }
                    v39 = &p_m_triangles->m_data[v38];
                    p_m_triangles->m_size = v38 + 1;
                    v39->m_a = v33;
                    v39->m_b = v32;
                    v39->m_c = v31;
                    v39->m_material = -1;
                    ++v28;
                  }
                  while ( v28 < v8->m_triangles.m_numElements );
                  p_m_prepGeometry = v46;
                }
                ClothInstance = v45;
              }
            }
          }
        }
        ++m_data;
      }
      while ( m_data != &simBufferIndices.m_data[simBufferIndices.m_size] );
      v1 = v47;
    }
    OwnerType = Cloth_GetOwnerType(v1->m_globalWorldId, v1->m_instanceId);
    Cloth_Debug_Perf_AddPhysicsProxyMeshCount(v1->m_globalWorldId, OwnerType, 1);
    Cloth_Debug_Perf_AddPhysicsProxyMeshTriCount(v1->m_globalWorldId, OwnerType, p_m_prepGeometry->m_triangles.m_size);
    LeaveCriticalSection((LPCRITICAL_SECTION)&v1->m_shapeGeometry->m_prepGeoCritSec);
    Sys_ProfEndNamedEvent();
  }
  v41 = hkMemHeapAllocator();
  simBufferIndices.m_size = 0;
  if ( simBufferIndices.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v41, simBufferIndices.m_data, 4, simBufferIndices.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
HavokCloth_PhysicsProxyAction::apply
==============
*/

void __fastcall HavokCloth_PhysicsProxyAction::apply(HavokCloth_PhysicsProxyAction *this, hclSimClothInstance *simClothInstance, double timeStep, hkVector4f *forceAccumulatorInOut)
{
  bool v10; 
  bool v11; 
  Cloth_OwnerType OwnerType; 
  hkArray<HavokCloth_PhysicsProxyAction::BulletImpact,hkContainerHeapAllocator> *v17; 
  unsigned int v18; 
  bool v19; 
  bool v20; 
  int *p_triangleIdx; 
  int v23; 
  unsigned int v24; 
  __int64 v32; 
  __int64 v33; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _R15 = forceAccumulatorInOut;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps xmm7, xmm2
  }
  if ( !this->m_clothAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 153, ASSERT_TYPE_ASSERT, "(m_clothAsset)", (const char *)&queryFormat, "m_clothAsset") )
    __debugbreak();
  v10 = simClothInstance == NULL;
  if ( !simClothInstance )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 154, ASSERT_TYPE_ASSERT, "(simClothInstance)", (const char *)&queryFormat, "simClothInstance");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
    vmovaps xmm7, [rsp+78h+var_38]
  }
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 155, ASSERT_TYPE_ASSERT, "(timeStep > 0.f)", (const char *)&queryFormat, "timeStep > 0.f") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 156, ASSERT_TYPE_ASSERT, "(forceAccumulatorInOut)", (const char *)&queryFormat, "forceAccumulatorInOut") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_PhysicsProxyAction");
  _RDI = simClothInstance->m_simClothData;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+108h]
    vucomiss xmm0, xmm6
  }
  if ( !v10 )
  {
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 170, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
      __debugbreak();
    if ( _RDI->m_triangleIndices.m_size / 3 > 0 )
    {
      OwnerType = Cloth_GetOwnerType(this->m_globalWorldId, this->m_instanceId);
      Cloth_Debug_Perf_AddPhysicsProxyCount(this->m_globalWorldId, OwnerType, 1);
      v17 = &this->m_bufferedBulletImpacts[this->m_bufferedBulletImpactActiveBufferIdx];
      if ( v17->m_size )
      {
        v18 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64);
        v19 = dword_151535068 < v18;
        v20 = dword_151535068 == v18;
        if ( dword_151535068 > (int)v18 )
        {
          j__Init_thread_header(&dword_151535068);
          v19 = dword_151535068 != -1;
          v20 = dword_151535068 == -1;
          if ( dword_151535068 == -1 )
          {
            _RAX = this->m_clothAsset;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+58h]
              vmovss  cs:forceScalar, xmm0
            }
            j__Init_thread_footer(&dword_151535068);
          }
        }
        __asm
        {
          vmovss  xmm0, cs:forceScalar
          vcomiss xmm0, xmm6
        }
        if ( (v19 || v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 198, ASSERT_TYPE_ASSERT, "(forceScalar > 0.f)", (const char *)&queryFormat, "forceScalar > 0.f") )
          __debugbreak();
        p_triangleIdx = &v17->m_data->triangleIdx;
        while ( p_triangleIdx != &v17->m_data[v17->m_size].triangleIdx )
        {
          v23 = 3 * (*p_triangleIdx >> 1);
          if ( v23 > _RDI->m_triangleIndices.m_size )
            break;
          v24 = _RDI->m_triangleIndices.m_data[v23];
          if ( v24 >= simClothInstance->m_particlePositions.m_size )
          {
            LODWORD(v33) = simClothInstance->m_particlePositions.m_size;
            LODWORD(v32) = _RDI->m_triangleIndices.m_data[v23];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothphysicsproxy.cpp", 214, ASSERT_TYPE_ASSERT, "(unsigned)( particleId ) < (unsigned)( simClothInstance->getNumberOfParticles() )", "particleId doesn't index simClothInstance->getNumberOfParticles()\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          __asm
          {
            vbroadcastss xmm0, cs:forceScalar
            vmulps  xmm0, xmm0, xmmword ptr [rbx+10h]
          }
          p_triangleIdx += 8;
          _RAX = 2i64 * (unsigned __int16)v24;
          __asm
          {
            vaddps  xmm1, xmm0, xmmword ptr [r15+rax*8]
            vmovups xmmword ptr [r15+rax*8], xmm1
          }
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  Sys_ProfEndNamedEvent();
}

