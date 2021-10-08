/*
==============
HavokPhysics_SimpleCollisionCallback_InitForWorld
==============
*/

void __fastcall HavokPhysics_SimpleCollisionCallback_InitForWorld(Physics_WorldId worldId)
{
  ?HavokPhysics_SimpleCollisionCallback_InitForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysics_SimpleCollisionCallback_UnregisterBody
==============
*/

void __fastcall HavokPhysics_SimpleCollisionCallback_UnregisterBody(Physics_WorldId worldId, hknpBodyId bodyId, void (__fastcall *callback)(Physics_SimpleCollisionCallback_Data *), bool allowCantFind)
{
  ?HavokPhysics_SimpleCollisionCallback_UnregisterBody@@YAXW4Physics_WorldId@@UhknpBodyId@@P6AXPEAUPhysics_SimpleCollisionCallback_Data@@@Z_N@Z(worldId, bodyId, callback, allowCantFind);
}

/*
==============
HavokPhysics_SimpleCollisionCallback_ShutdownForWorld
==============
*/

void __fastcall HavokPhysics_SimpleCollisionCallback_ShutdownForWorld(Physics_WorldId worldId)
{
  ?HavokPhysics_SimpleCollisionCallback_ShutdownForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysics_SimpleCollisionCallback_RegisterBody
==============
*/

void __fastcall HavokPhysics_SimpleCollisionCallback_RegisterBody(Physics_WorldId worldId, hknpBodyId bodyId, void (__fastcall *callback)(Physics_SimpleCollisionCallback_Data *))
{
  ?HavokPhysics_SimpleCollisionCallback_RegisterBody@@YAXW4Physics_WorldId@@UhknpBodyId@@P6AXPEAUPhysics_SimpleCollisionCallback_Data@@@Z@Z(worldId, bodyId, callback);
}

/*
==============
HavokPhysics_SimpleCollisionCallback_InitForWorld
==============
*/
void HavokPhysics_SimpleCollisionCallback_InitForWorld(Physics_WorldId worldId)
{
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> **v1; 
  hkMemoryRouter *Value; 
  __int64 v3; 
  hkMemoryAllocator *v4; 
  __int64 v5; 
  __int64 v6; 

  v1 = &s_callbackMaps[worldId];
  if ( *v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 54, ASSERT_TYPE_ASSERT, "( s_callbackMaps[worldId] == 0 )", (const char *)&queryFormat, "s_callbackMaps[worldId] == NULL", -2i64) )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v3 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 16i64);
  if ( v3 )
  {
    v4 = hkMemHeapAllocator();
    v5 = (__int64)v4->blockAlloc(v4, 256i64);
    *(_QWORD *)v3 = v5;
    v6 = 0i64;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 15;
    if ( v5 )
    {
      do
      {
        *(_DWORD *)(v6 + *(_QWORD *)v3) = -1;
        v6 += 16i64;
      }
      while ( v6 < 256 );
      *(_DWORD *)(v3 + 8) &= 0x80000000;
    }
    *v1 = (hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *)v3;
  }
  else
  {
    *v1 = NULL;
  }
}

/*
==============
HavokPhysics_SimpleCollisionCallback_OnContactImpulseEvent
==============
*/
void HavokPhysics_SimpleCollisionCallback_OnContactImpulseEvent(const hknpEventHandlerInput *input, const hknpEvent *event)
{
  hknpContactSolverEvent *v6; 
  float v8; 
  __int64 v9; 
  __int64 m_bodiesAreReversed; 
  unsigned int m_serialAndIndex; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  const hknpStreamContactJacobian *m_contactJacobian; 
  const hknpStreamContactSolverTypes::JacModHdr *JacModHdr; 
  const hknpStreamContactJacobian *v17; 
  const hknpStreamContactSolverTypes::JacModHdr *v18; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v19; 
  Dummy *Key; 
  unsigned int v26; 
  const hknpTriangleShape *TriangleShape; 
  unsigned __int64 v40; 
  __int64 v41; 
  float v42; 
  unsigned int v43; 
  unsigned int *p_m_instanceId; 
  __int64 v45; 
  __int64 v46; 
  __int64 m_size; 
  unsigned int v48; 
  __int64 v49; 
  unsigned int v53; 
  const hknpTriangleShape *m_shape; 
  unsigned __int64 v65; 
  __int64 v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int *v69; 
  __int64 v70; 
  __int64 v71; 
  float v72; 
  __int64 v73; 
  __int64 v74; 
  const hknpStreamContactJacobian *v81; 
  __int64 m_numPoints; 
  hkVector4f *m_positions; 
  __int64 v101; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v102; 
  int v103; 
  __int64 v104; 
  int m_hashMod; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v106; 
  float zero; 
  float v112; 
  unsigned int v113; 
  unsigned int m_value; 
  unsigned int v115; 
  __int64 v116; 
  const hknpTriangleShape *v117; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  const hknpEventHandlerInput *v121; 
  const hknpShape *m_parentShape; 
  __int64 v123; 
  Dummy *v124; 
  const hknpEvent *v125; 
  __int16 v126[2]; 
  int v127; 
  unsigned __int64 userData; 
  __int16 v129[2]; 
  int v130; 
  unsigned __int64 v131; 
  __int64 v132; 
  __int64 v133; 
  hknpShapeCollector v134; 
  __int128 v135; 
  int v136[12]; 
  hkcdManifold4 manifoldOut; 
  hknpInplaceTriangleShape v138; 
  char v139; 
  void *retaddr; 

  _RAX = &retaddr;
  v133 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v6 = (hknpContactSolverEvent *)event;
  v125 = event;
  v121 = input;
  if ( LOBYTE(event[4].m_sizePaddedTo16) != 1 )
    goto LABEL_56;
  v8 = COERCE_FLOAT(HavokPhysics_GetWorldId(input->m_world));
  v9 = SLODWORD(v8);
  zero = v8;
  m_bodiesAreReversed = input->m_bodiesAreReversed;
  m_serialAndIndex = v6->m_bodyIds[m_bodiesAreReversed].m_serialAndIndex;
  LODWORD(v116) = m_serialAndIndex;
  v12 = v6->m_bodyIds[(unsigned int)(1 - m_bodiesAreReversed)].m_serialAndIndex;
  v13 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getBody)(&input->m_world->hknpWorldReader, v6->m_bodyIds[0].m_serialAndIndex);
  v14 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getBody)(&input->m_world->hknpWorldReader, v6->m_bodyIds[1].m_serialAndIndex);
  v120 = v14;
  v118 = *(_QWORD *)(v13 + 96);
  v119 = *(_QWORD *)(v14 + 96);
  m_contactJacobian = v6->m_contactJacobian;
  if ( !m_contactJacobian )
  {
    m_value = -1;
    goto LABEL_6;
  }
  JacModHdr = hknpStreamContactJacobianUtil::getJacModHdr(m_contactJacobian);
  m_value = hknpStreamContactJacobianUtil::getJacModMfoldData(JacModHdr)->m_shapeKeyA.m_value;
  v17 = v6->m_contactJacobian;
  if ( !v17 )
  {
LABEL_6:
    v115 = -1;
    goto LABEL_7;
  }
  v18 = hknpStreamContactJacobianUtil::getJacModHdr(v17);
  v115 = hknpStreamContactJacobianUtil::getJacModMfoldData(v18)->m_shapeKeyB.m_value;
LABEL_7:
  v132 = v9;
  v19 = s_callbackMaps[v9];
  Key = hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::findKey(v19, m_serialAndIndex);
  v124 = Key;
  if ( (int)Key > v19->m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 98, ASSERT_TYPE_ASSERT, "( s_callbackMaps[worldId]->isValid( it ) )", (const char *)&queryFormat, "s_callbackMaps[worldId]->isValid( it )") )
    __debugbreak();
  *(float *)v136 = zero;
  v136[1] = m_serialAndIndex;
  v136[2] = v12;
  __asm { vmovss  xmm1, cs:__real@3c75c28f; radius }
  hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v138, *(float *)&_XMM1);
  v134.m_internal.m_shapeBuffer.m_shape = NULL;
  v134.m_internal.m_shapeBuffer.m_buffer = v134.m_internal.m_shapeBuffer.m_storage;
  v134.m_internal.m_shapeBuffer.m_bufferSize = 2048;
  v134.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpInplaceShapeBuffer<2048>::`vftable';
  v134.m_internal.m_shapeTags[0] = -1;
  v134.m_internal.m_shape = NULL;
  v134.m_parentShape = NULL;
  v134.m_shapeTagPath.m_size = 0;
  *(_QWORD *)&v134.m_internal.m_flags.m_storage = 8i64;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rbp+0E70h+var_E80.m_transform.m_rotation.baseclass_0.m_col0.m_quad], ymm0
    vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rbp+0E70h+var_E80.m_transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbp+0E70h+var_E80.m_internal.m_scale.m_quad], xmm0
    vmovss  xmm6, cs:__real@34000000
    vmovss  [rsp+0F70h+zero], xmm6
  }
  if ( hkMatrix3Impl<float>::isApproximatelyEqual((hkMatrix3Impl<float> *)&g_vectorfConstants[32], (const hkMatrix3Impl<float> *)&g_vectorfConstants[32], &zero) )
  {
    v26 = v134.m_internal.m_flags.m_storage | 4;
    v134.m_internal.m_flags.m_storage |= 4u;
    __asm
    {
      vmovups xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+260h; __m128 const near * const g_vectorfConstants
      vmovups [rbp+0E70h+var_230], xmm4
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
      vsubps  xmm2, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
      vmovups xmm1, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
      vandnps xmm3, xmm1, xmm2
      vcmpleps xmm5, xmm3, xmm4
      vxorps  xmm2, xmm2, xmm2
      vpxor   xmm0, xmm0, xmm0
      vpcmpeqd xmm1, xmm0, xmm0
      vblendps xmm2, xmm2, xmm1, 7
      vpand   xmm0, xmm5, xmm2
      vptest  xmm0, xmm2
    }
    if ( _CF )
      v134.m_internal.m_flags.m_storage = v26 | 1;
  }
  v134.m_internal.m_shapeTags[0] = -1;
  (*(void (__fastcall **)(__int64, unsigned int *, __int64, hknpShapeCollector *))(*(_QWORD *)v118 + 176i64))(v118, &m_value, 1i64, &v134);
  if ( (v134.m_internal.m_flags.m_storage & 0x10) != 0 )
    TriangleShape = hknpShapeCollector::getTriangleShape(&v134, 0, (hknpTriangleShape *)&v138);
  else
    TriangleShape = (const hknpTriangleShape *)v134.m_internal.m_shape;
  v117 = TriangleShape;
  v127 = *(_DWORD *)(v13 + 108);
  v126[0] = *(_WORD *)(v13 + 106);
  v40 = *(_QWORD *)(v13 + 160);
  userData = v40;
  if ( v134.m_parentShape )
  {
    v41 = (__int64)v121->m_world->getShapeTagCodec(&v121->m_world->hknpWorldReader);
    v123 = v41;
    v42 = *(float *)&m_value;
    LODWORD(v112) = m_value;
    LOWORD(zero) = v134.m_internal.m_shapeTags[0];
    *(_QWORD *)&v135 = v134.m_parentShape;
    v43 = -1;
    v113 = 0;
    if ( v134.m_shapeTagPath.m_size > 0 )
    {
      p_m_instanceId = &v134.m_shapeTagPath.m_data[0].m_instanceId;
      v45 = v41;
      v46 = v118;
      m_size = v134.m_shapeTagPath.m_size;
      v48 = v113;
      do
      {
        v49 = *((_QWORD *)p_m_instanceId - 1);
        v43 = v43 & hknpShapeKeyPath_usedBitsMaskTable[v48] | (((*p_m_instanceId + 1) << (32 - (v48 + *(_BYTE *)(v49 + 27)))) - 1);
        v48 += *(unsigned __int8 *)(v49 + 27);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, _QWORD, __int16 *))(*(_QWORD *)v45 + 32i64))(v45, *((unsigned __int16 *)p_m_instanceId - 8), 5i64, v13, v46, v49, v43, *((_QWORD *)p_m_instanceId + 1), v126);
        p_m_instanceId += 8;
        --m_size;
      }
      while ( m_size );
      m_serialAndIndex = v116;
      v42 = v112;
      LODWORD(Key) = (_DWORD)v124;
      v6 = (hknpContactSolverEvent *)v125;
      v14 = v120;
      v41 = v123;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, _QWORD, float, const hknpTriangleShape *, __int16 *))(*(_QWORD *)v41 + 32i64))(v41, LOWORD(zero), 5i64, v13, v118, v135, COERCE_FLOAT(LODWORD(v42)), v117, v126);
    v40 = userData;
  }
  v136[3] = Physics_GetSurfaceFlagsFromUserData(v40);
  v134.m_internal.m_shape = NULL;
  v134.m_parentShape = NULL;
  v134.m_shapeTagPath.m_size = 0;
  *(_QWORD *)&v134.m_internal.m_flags.m_storage = 8i64;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rbp+0E70h+var_E80.m_transform.m_rotation.baseclass_0.m_col0.m_quad], ymm0
    vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rbp+0E70h+var_E80.m_transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbp+0E70h+var_E80.m_internal.m_scale.m_quad], xmm0
    vmovss  [rsp+0F70h+var_F1C], xmm6
  }
  if ( hkMatrix3Impl<float>::isApproximatelyEqual((hkMatrix3Impl<float> *)&g_vectorfConstants[32], (const hkMatrix3Impl<float> *)&g_vectorfConstants[32], &v112) )
  {
    v53 = v134.m_internal.m_flags.m_storage | 4;
    v134.m_internal.m_flags.m_storage |= 4u;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
      vsubps  xmm2, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
      vmovups xmm1, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
      vandnps xmm3, xmm1, xmm2
      vcmpleps xmm5, xmm3, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+260h; __m128 const near * const g_vectorfConstants
      vxorps  xmm2, xmm2, xmm2
      vpxor   xmm0, xmm0, xmm0
      vpcmpeqd xmm1, xmm0, xmm0
      vblendps xmm2, xmm2, xmm1, 7
      vpand   xmm0, xmm5, xmm2
      vptest  xmm0, xmm2
    }
    if ( _CF )
      v134.m_internal.m_flags.m_storage = v53 | 1;
  }
  v134.m_internal.m_shapeTags[0] = -1;
  (*(void (__fastcall **)(__int64, unsigned int *, __int64, hknpShapeCollector *))(*(_QWORD *)v119 + 176i64))(v119, &v115, 1i64, &v134);
  if ( (v134.m_internal.m_flags.m_storage & 0x10) != 0 )
    m_shape = hknpShapeCollector::getTriangleShape(&v134, 0, (hknpTriangleShape *)&v138);
  else
    m_shape = (const hknpTriangleShape *)v134.m_internal.m_shape;
  v117 = m_shape;
  v130 = *(_DWORD *)(v14 + 108);
  v129[0] = *(_WORD *)(v14 + 106);
  v65 = *(_QWORD *)(v14 + 160);
  v131 = v65;
  if ( v134.m_parentShape )
  {
    v66 = (__int64)v121->m_world->getShapeTagCodec(&v121->m_world->hknpWorldReader);
    v67 = v115;
    v113 = v115;
    LOWORD(zero) = v134.m_internal.m_shapeTags[0];
    m_parentShape = v134.m_parentShape;
    v68 = -1;
    v112 = 0.0;
    if ( v134.m_shapeTagPath.m_size > 0 )
    {
      v69 = &v134.m_shapeTagPath.m_data[0].m_instanceId;
      v70 = v134.m_shapeTagPath.m_size;
      v71 = v120;
      v72 = v112;
      v73 = v119;
      do
      {
        v74 = *((_QWORD *)v69 - 1);
        v68 = v68 & hknpShapeKeyPath_usedBitsMaskTable[SLODWORD(v72)] | (((*v69 + 1) << (32 - (LOBYTE(v72) + *(_BYTE *)(v74 + 27)))) - 1);
        LODWORD(v72) += *(unsigned __int8 *)(v74 + 27);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, _QWORD, __int16 *))(*(_QWORD *)v66 + 32i64))(v66, *((unsigned __int16 *)v69 - 8), 5i64, v71, v73, v74, v68, *((_QWORD *)v69 + 1), v129);
        v69 += 8;
        --v70;
      }
      while ( v70 );
      m_serialAndIndex = v116;
      v67 = v113;
      LODWORD(Key) = (_DWORD)v124;
      v6 = (hknpContactSolverEvent *)v125;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, const hknpShape *, unsigned int, const hknpTriangleShape *, __int16 *))(*(_QWORD *)v66 + 32i64))(v66, LOWORD(zero), 5i64, v120, v119, m_parentShape, v67, v117, v129);
    v65 = v131;
  }
  v136[4] = Physics_GetSurfaceFlagsFromUserData(v65);
  hknpContactSolverEvent::calculateManifold(v6, v121->m_world, &manifoldOut);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0E70h+manifoldOut.m_normal.m_quad]
    vmovss  [rbp+0E70h+var_200], xmm0
    vmovss  xmm1, dword ptr [rbp+0E70h+manifoldOut.m_normal.m_quad+4]
    vmovss  [rbp+0E70h+var_1FC], xmm1
    vmovss  xmm0, dword ptr [rbp+0E70h+manifoldOut.m_normal.m_quad+8]
    vmovss  [rbp+0E70h+var_1F8], xmm0
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  v81 = v6->m_contactJacobian;
  if ( !v81 )
  {
    m_numPoints = 0i64;
    goto LABEL_38;
  }
  m_numPoints = v81->m_info.m_data.m_numPoints;
  if ( !(_BYTE)m_numPoints )
  {
LABEL_38:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 164, ASSERT_TYPE_ASSERT, "(numContactPoints > 0)", (const char *)&queryFormat, "numContactPoints > 0") )
      __debugbreak();
  }
  if ( m_numPoints )
  {
    m_positions = manifoldOut.m_positions;
    _RAX = v6[1].m_bodyIds;
    do
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rax]
        vmovaps xmm0, xmm2
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm0, xmm0, xmmword ptr [rcx]
        vaddps  xmm7, xmm0, xmm7
        vaddss  xmm6, xmm6, xmm2
      }
      ++_RAX;
      ++m_positions;
      _CF = m_numPoints-- == 0;
    }
    while ( m_numPoints );
    __asm { vcomiss xmm6, xmm8 }
    if ( !_CF && (unsigned __int8)m_numPoints != 0i64 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm2, xmm0, xmm6
        vshufps xmm2, xmm2, xmm2, 0
        vmulps  xmm3, xmm7, xmm2
        vmovss  xmm2, cs:__real@42000000
        vmulss  xmm0, xmm3, xmm2
        vmovss  [rbp+0E70h+var_20C], xmm0
        vshufps xmm1, xmm3, xmm3, 55h ; 'U'
        vmulss  xmm0, xmm1, xmm2
        vmovss  [rbp+0E70h+var_208], xmm0
        vshufps xmm3, xmm3, xmm3, 0AAh ; 'ª'
        vmulss  xmm0, xmm3, xmm2
        vmovss  [rbp+0E70h+var_204], xmm0
        vmovss  [rbp+0E70h+var_1F4], xmm6
      }
      v101 = v132;
      v102 = s_callbackMaps[v132];
      if ( (int)Key <= v102->m_hashMod )
      {
        do
        {
          v102->m_elem[(int)Key].val.callback((Physics_SimpleCollisionCallback_Data *)v136);
          v102 = s_callbackMaps[v101];
          v103 = (_DWORD)Key + 1;
          v104 = (int)Key + 1;
          m_hashMod = v102->m_hashMod;
          while ( v103 > m_hashMod )
          {
LABEL_51:
            v103 = 0;
            v104 = 0i64;
          }
          v106 = &v102->m_elem[v104];
          while ( v106->key != -1 )
          {
            if ( v106->key == m_serialAndIndex )
              goto LABEL_53;
            ++v103;
            ++v106;
            if ( v103 > m_hashMod )
              goto LABEL_51;
          }
          v103 = m_hashMod + 1;
LABEL_53:
          LODWORD(Key) = v103;
        }
        while ( v103 <= m_hashMod );
      }
    }
  }
  v134.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpShapeBuffer::`vftable';
  if ( v134.m_internal.m_shapeBuffer.m_shape )
    ((void (__fastcall *)(hknpShape *, _QWORD))v134.m_internal.m_shapeBuffer.m_shape->~hkBaseObject)(v134.m_internal.m_shapeBuffer.m_shape, 0i64);
LABEL_56:
  _R11 = &v139;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
HavokPhysics_SimpleCollisionCallback_RegisterBody
==============
*/
void HavokPhysics_SimpleCollisionCallback_RegisterBody(Physics_WorldId worldId, hknpBodyId bodyId, void (*callback)(Physics_SimpleCollisionCallback_Data *))
{
  hknpWorld *World; 

  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::insert(s_callbackMaps[worldId], bodyId.m_serialAndIndex, (SimpleCollisionCallbackEntry)callback);
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 214, ASSERT_TYPE_ASSERT, "( world )", (const char *)&queryFormat, "world") )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64, _QWORD))World->enableBodyFlags)(&World->hknpWorldWriter, bodyId.m_serialAndIndex, 128i64, 0i64);
  HavokPhysics_SubscribeToEvent(worldId, CONTACT_IMPULSE, bodyId, HavokPhysics_SimpleCollisionCallback_OnContactImpulseEvent, "SimpleCollisionCallback");
}

/*
==============
HavokPhysics_SimpleCollisionCallback_ShutdownForWorld
==============
*/
void HavokPhysics_SimpleCollisionCallback_ShutdownForWorld(Physics_WorldId worldId)
{
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> **v1; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v2; 
  hkMemoryAllocator *v3; 
  hkMemoryRouter *Value; 

  v1 = &s_callbackMaps[worldId];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 62, ASSERT_TYPE_ASSERT, "( s_callbackMaps[worldId] != 0 )", (const char *)&queryFormat, "s_callbackMaps[worldId] != NULL", -2i64) )
    __debugbreak();
  v2 = *v1;
  if ( *v1 )
  {
    if ( v2->m_numElems >= 0 )
    {
      v3 = hkMemHeapAllocator();
      v3->blockFree(v3, v2->m_elem, 16 * (v2->m_hashMod + 1));
    }
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, v2, 16);
  }
  *v1 = NULL;
}

/*
==============
HavokPhysics_SimpleCollisionCallback_UnregisterBody
==============
*/
void HavokPhysics_SimpleCollisionCallback_UnregisterBody(Physics_WorldId worldId, hknpBodyId bodyId, void (*callback)(Physics_SimpleCollisionCallback_Data *), bool allowCantFind)
{
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v7; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> **v8; 
  signed int Key; 
  unsigned int v11; 
  int m_hashMod; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *m_elem; 
  int v14; 
  __int64 v15; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v16; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v17; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v18; 
  int v19; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  unsigned int v25; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v26; 
  __int64 v27; 

  v7 = s_callbackMaps[worldId];
  v8 = &s_callbackMaps[worldId];
  Key = (unsigned int)hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::findKey(v7, bodyId.m_serialAndIndex);
  v11 = Key;
  if ( !allowCantFind && Key > v7->m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 229, ASSERT_TYPE_ASSERT, "( allowCantFind || s_callbackMaps[worldId]->isValid( it ) )", (const char *)&queryFormat, "allowCantFind || s_callbackMaps[worldId]->isValid( it )") )
    __debugbreak();
  m_hashMod = (*v8)->m_hashMod;
  if ( (int)v11 > m_hashMod )
  {
LABEL_17:
    if ( !allowCantFind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 248, ASSERT_TYPE_ASSERT, "(allowCantFind)", "%s\n\tFailed to find entry", "allowCantFind") )
      __debugbreak();
  }
  else
  {
    m_elem = (*v8)->m_elem;
    while ( m_elem[v11].val.callback != callback )
    {
      v14 = v11 + 1;
      v15 = (int)(v11 + 1);
      while ( v14 > m_hashMod )
      {
LABEL_14:
        v14 = 0;
        v15 = 0i64;
      }
      v16 = &m_elem[v15];
      while ( v16->key != -1 )
      {
        if ( v16->key == bodyId.m_serialAndIndex )
          goto LABEL_16;
        ++v14;
        ++v16;
        if ( v14 > m_hashMod )
          goto LABEL_14;
      }
      v14 = m_hashMod + 1;
LABEL_16:
      v11 = v14;
      if ( v14 > m_hashMod )
        goto LABEL_17;
    }
    HavokPhysics_UnsubscribeFromEvent(worldId, CONTACT_IMPULSE, bodyId, HavokPhysics_SimpleCollisionCallback_OnContactImpulseEvent);
    v17 = *v8;
    v18 = (*v8)->m_elem;
    --v17->m_numElems;
    v18[v11].key = -1;
    v19 = v17->m_hashMod;
    v20 = v17->m_elem;
    v21 = v19 & (v19 + v11);
    if ( v17->m_elem[v21].key != -1 )
    {
      do
        v21 = v19 & (v19 + v21);
      while ( v20[v21].key != -1 );
    }
    v22 = v19 & (v11 + 1);
    v23 = v19 & (v21 + 1);
    v24 = v22;
    if ( v20[v24].key != -1 )
    {
      do
      {
        v25 = v19 & (-1640531535 * (v20[v24].key >> 4));
        if ( v22 < v23 || (v26 = v20, v25 <= v11) )
        {
          if ( v22 >= v11 || v25 <= v11 && v25 > v22 )
          {
            if ( v25 <= v11 || (v26 = v20, v25 >= v23) )
            {
              v27 = v11;
              v11 = v22;
              v27 *= 2i64;
              *(&v20->key + 2 * v27) = v20[v24].key;
              *((_QWORD *)&v17->m_elem->val.callback + v27) = v17->m_elem[v24].val.callback;
              v17->m_elem[v24].key = -1;
              v19 = v17->m_hashMod;
              v26 = v17->m_elem;
            }
          }
          else
          {
            v26 = v20;
          }
        }
        v20 = v26;
        v22 = v19 & (v22 + 1);
        v24 = v22;
      }
      while ( v26[v24].key != -1 );
    }
  }
}

