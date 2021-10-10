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
  hknpContactSolverEvent *v2; 
  float v4; 
  __int64 v5; 
  __int64 m_bodiesAreReversed; 
  unsigned int m_serialAndIndex; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  const hknpStreamContactJacobian *m_contactJacobian; 
  const hknpStreamContactSolverTypes::JacModHdr *JacModHdr; 
  const hknpStreamContactJacobian *v13; 
  const hknpStreamContactSolverTypes::JacModHdr *v14; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v15; 
  Dummy *Key; 
  unsigned int v17; 
  const hknpTriangleShape *TriangleShape; 
  unsigned __int64 v30; 
  __int64 v31; 
  float v32; 
  unsigned int v33; 
  unsigned int *p_m_instanceId; 
  __int64 v35; 
  __int64 v36; 
  __int64 m_size; 
  unsigned int v38; 
  __int64 v39; 
  unsigned int v40; 
  const hknpTriangleShape *m_shape; 
  unsigned __int64 v51; 
  __int64 v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int *v55; 
  __int64 v56; 
  __int64 v57; 
  float v58; 
  __int64 v59; 
  __int64 v60; 
  __int128 v61; 
  __m128 v62; 
  const hknpStreamContactJacobian *v63; 
  __int64 m_numPoints; 
  hkVector4f *m_positions; 
  float *p_m_serialAndIndex; 
  __int128 v67; 
  __m128 v68; 
  __m128 v69; 
  __int64 v70; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v71; 
  int v72; 
  __int64 v73; 
  int m_hashMod; 
  hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v75; 
  float zero; 
  float v77; 
  unsigned int v78; 
  unsigned int m_value; 
  unsigned int v80; 
  __int64 v81; 
  const hknpTriangleShape *v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  const hknpEventHandlerInput *v86; 
  const hknpShape *m_parentShape; 
  __int64 v88; 
  Dummy *v89; 
  const hknpEvent *v90; 
  __int16 v91[2]; 
  int v92; 
  unsigned __int64 userData; 
  __int16 v94[2]; 
  int v95; 
  unsigned __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  hknpShapeCollector v99; 
  __m128 v100; 
  int v101[12]; 
  hkcdManifold4 manifoldOut; 
  hknpInplaceTriangleShape v103; 

  v98 = -2i64;
  v2 = (hknpContactSolverEvent *)event;
  v90 = event;
  v86 = input;
  if ( LOBYTE(event[4].m_sizePaddedTo16) != 1 )
    return;
  v4 = COERCE_FLOAT(HavokPhysics_GetWorldId(input->m_world));
  v5 = SLODWORD(v4);
  zero = v4;
  m_bodiesAreReversed = input->m_bodiesAreReversed;
  m_serialAndIndex = v2->m_bodyIds[m_bodiesAreReversed].m_serialAndIndex;
  LODWORD(v81) = m_serialAndIndex;
  v8 = v2->m_bodyIds[(unsigned int)(1 - m_bodiesAreReversed)].m_serialAndIndex;
  v9 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getBody)(&input->m_world->hknpWorldReader, v2->m_bodyIds[0].m_serialAndIndex);
  v10 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getBody)(&input->m_world->hknpWorldReader, v2->m_bodyIds[1].m_serialAndIndex);
  v85 = v10;
  v83 = *(_QWORD *)(v9 + 96);
  v84 = *(_QWORD *)(v10 + 96);
  m_contactJacobian = v2->m_contactJacobian;
  if ( !m_contactJacobian )
  {
    *(float *)&m_value = NAN;
    goto LABEL_6;
  }
  JacModHdr = hknpStreamContactJacobianUtil::getJacModHdr(m_contactJacobian);
  m_value = hknpStreamContactJacobianUtil::getJacModMfoldData(JacModHdr)->m_shapeKeyA.m_value;
  v13 = v2->m_contactJacobian;
  if ( !v13 )
  {
LABEL_6:
    v80 = -1;
    goto LABEL_7;
  }
  v14 = hknpStreamContactJacobianUtil::getJacModHdr(v13);
  v80 = hknpStreamContactJacobianUtil::getJacModMfoldData(v14)->m_shapeKeyB.m_value;
LABEL_7:
  v97 = v5;
  v15 = s_callbackMaps[v5];
  Key = hkMultiMap<unsigned int,SimpleCollisionCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::findKey(v15, m_serialAndIndex);
  v89 = Key;
  if ( (int)Key > v15->m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 98, ASSERT_TYPE_ASSERT, "( s_callbackMaps[worldId]->isValid( it ) )", (const char *)&queryFormat, "s_callbackMaps[worldId]->isValid( it )") )
    __debugbreak();
  *(float *)v101 = zero;
  v101[1] = m_serialAndIndex;
  v101[2] = v8;
  hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v103, 0.015);
  v99.m_internal.m_shapeBuffer.m_shape = NULL;
  v99.m_internal.m_shapeBuffer.m_buffer = v99.m_internal.m_shapeBuffer.m_storage;
  v99.m_internal.m_shapeBuffer.m_bufferSize = 2048;
  v99.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpInplaceShapeBuffer<2048>::`vftable';
  v99.m_internal.m_shapeTags[0] = -1;
  v99.m_internal.m_shape = NULL;
  v99.m_parentShape = NULL;
  v99.m_shapeTagPath.m_size = 0;
  *(_QWORD *)&v99.m_internal.m_flags.m_storage = 8i64;
  *(__m256i *)v99.m_transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)v99.m_transform.m_rotation.m_col2.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[34].m128_f32;
  v99.m_internal.m_scale.m_quad = g_vectorfConstants[6];
  zero = FLOAT_1_1920929eN7;
  if ( hkMatrix3Impl<float>::isApproximatelyEqual((hkMatrix3Impl<float> *)&g_vectorfConstants[32], (const hkMatrix3Impl<float> *)&g_vectorfConstants[32], &zero) )
  {
    v17 = v99.m_internal.m_flags.m_storage | 4;
    v99.m_internal.m_flags.m_storage |= 4u;
    v100 = g_vectorfConstants[38];
    _XMM0 = g_vectorfConstants[35];
    _mm128_sub_ps(g_vectorfConstants[35], g_vectorfConstants[5]);
    _XMM1 = *(_OWORD *)hkMath::hkSse_signMask;
    __asm
    {
      vandnps xmm3, xmm1, xmm2
      vcmpleps xmm5, xmm3, xmm4
    }
    _XMM2 = 0i64;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vpcmpeqd xmm1, xmm0, xmm0
      vblendps xmm2, xmm2, xmm1, 7
      vpand   xmm0, xmm5, xmm2
      vptest  xmm0, xmm2
    }
    if ( _CF )
      v99.m_internal.m_flags.m_storage = v17 | 1;
  }
  v99.m_internal.m_shapeTags[0] = -1;
  (*(void (__fastcall **)(__int64, unsigned int *, __int64, hknpShapeCollector *))(*(_QWORD *)v83 + 176i64))(v83, &m_value, 1i64, &v99);
  if ( (v99.m_internal.m_flags.m_storage & 0x10) != 0 )
    TriangleShape = hknpShapeCollector::getTriangleShape(&v99, 0, (hknpTriangleShape *)&v103);
  else
    TriangleShape = (const hknpTriangleShape *)v99.m_internal.m_shape;
  v82 = TriangleShape;
  v92 = *(_DWORD *)(v9 + 108);
  v91[0] = *(_WORD *)(v9 + 106);
  v30 = *(_QWORD *)(v9 + 160);
  userData = v30;
  if ( v99.m_parentShape )
  {
    v31 = (__int64)v86->m_world->getShapeTagCodec(&v86->m_world->hknpWorldReader);
    v88 = v31;
    v32 = *(float *)&m_value;
    v77 = *(float *)&m_value;
    LOWORD(zero) = v99.m_internal.m_shapeTags[0];
    v100.m128_u64[0] = (unsigned __int64)v99.m_parentShape;
    v33 = -1;
    v78 = 0;
    if ( v99.m_shapeTagPath.m_size > 0 )
    {
      p_m_instanceId = &v99.m_shapeTagPath.m_data[0].m_instanceId;
      v35 = v31;
      v36 = v83;
      m_size = v99.m_shapeTagPath.m_size;
      v38 = v78;
      do
      {
        v39 = *((_QWORD *)p_m_instanceId - 1);
        v33 = v33 & hknpShapeKeyPath_usedBitsMaskTable[v38] | (((*p_m_instanceId + 1) << (32 - (v38 + *(_BYTE *)(v39 + 27)))) - 1);
        v38 += *(unsigned __int8 *)(v39 + 27);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, _QWORD, __int16 *))(*(_QWORD *)v35 + 32i64))(v35, *((unsigned __int16 *)p_m_instanceId - 8), 5i64, v9, v36, v39, v33, *((_QWORD *)p_m_instanceId + 1), v91);
        p_m_instanceId += 8;
        --m_size;
      }
      while ( m_size );
      m_serialAndIndex = v81;
      v32 = v77;
      LODWORD(Key) = (_DWORD)v89;
      v2 = (hknpContactSolverEvent *)v90;
      v10 = v85;
      v31 = v88;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, unsigned __int64, float, const hknpTriangleShape *, __int16 *))(*(_QWORD *)v31 + 32i64))(v31, LOWORD(zero), 5i64, v9, v83, v100.m128_u64[0], COERCE_FLOAT(LODWORD(v32)), v82, v91);
    v30 = userData;
  }
  v101[3] = Physics_GetSurfaceFlagsFromUserData(v30);
  v99.m_internal.m_shape = NULL;
  v99.m_parentShape = NULL;
  v99.m_shapeTagPath.m_size = 0;
  *(_QWORD *)&v99.m_internal.m_flags.m_storage = 8i64;
  *(__m256i *)v99.m_transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)v99.m_transform.m_rotation.m_col2.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[34].m128_f32;
  v99.m_internal.m_scale.m_quad = g_vectorfConstants[6];
  v77 = FLOAT_1_1920929eN7;
  if ( hkMatrix3Impl<float>::isApproximatelyEqual((hkMatrix3Impl<float> *)&g_vectorfConstants[32], (const hkMatrix3Impl<float> *)&g_vectorfConstants[32], &v77) )
  {
    v40 = v99.m_internal.m_flags.m_storage | 4;
    v99.m_internal.m_flags.m_storage |= 4u;
    _XMM0 = g_vectorfConstants[35];
    _mm128_sub_ps(g_vectorfConstants[35], g_vectorfConstants[5]);
    _XMM1 = *(_OWORD *)hkMath::hkSse_signMask;
    __asm
    {
      vandnps xmm3, xmm1, xmm2
      vcmpleps xmm5, xmm3, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+260h; __m128 const near * const g_vectorfConstants
    }
    _XMM2 = 0i64;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vpcmpeqd xmm1, xmm0, xmm0
      vblendps xmm2, xmm2, xmm1, 7
      vpand   xmm0, xmm5, xmm2
      vptest  xmm0, xmm2
    }
    if ( _CF )
      v99.m_internal.m_flags.m_storage = v40 | 1;
  }
  v99.m_internal.m_shapeTags[0] = -1;
  (*(void (__fastcall **)(__int64, unsigned int *, __int64, hknpShapeCollector *))(*(_QWORD *)v84 + 176i64))(v84, &v80, 1i64, &v99);
  if ( (v99.m_internal.m_flags.m_storage & 0x10) != 0 )
    m_shape = hknpShapeCollector::getTriangleShape(&v99, 0, (hknpTriangleShape *)&v103);
  else
    m_shape = (const hknpTriangleShape *)v99.m_internal.m_shape;
  v82 = m_shape;
  v95 = *(_DWORD *)(v10 + 108);
  v94[0] = *(_WORD *)(v10 + 106);
  v51 = *(_QWORD *)(v10 + 160);
  v96 = v51;
  if ( v99.m_parentShape )
  {
    v52 = (__int64)v86->m_world->getShapeTagCodec(&v86->m_world->hknpWorldReader);
    v53 = v80;
    v78 = v80;
    LOWORD(zero) = v99.m_internal.m_shapeTags[0];
    m_parentShape = v99.m_parentShape;
    v54 = -1;
    v77 = 0.0;
    if ( v99.m_shapeTagPath.m_size > 0 )
    {
      v55 = &v99.m_shapeTagPath.m_data[0].m_instanceId;
      v56 = v99.m_shapeTagPath.m_size;
      v57 = v85;
      v58 = v77;
      v59 = v84;
      do
      {
        v60 = *((_QWORD *)v55 - 1);
        v54 = v54 & hknpShapeKeyPath_usedBitsMaskTable[SLODWORD(v58)] | (((*v55 + 1) << (32 - (LOBYTE(v58) + *(_BYTE *)(v60 + 27)))) - 1);
        LODWORD(v58) += *(unsigned __int8 *)(v60 + 27);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, _QWORD, __int16 *))(*(_QWORD *)v52 + 32i64))(v52, *((unsigned __int16 *)v55 - 8), 5i64, v57, v59, v60, v54, *((_QWORD *)v55 + 1), v94);
        v55 += 8;
        --v56;
      }
      while ( v56 );
      m_serialAndIndex = v81;
      v53 = v78;
      LODWORD(Key) = (_DWORD)v89;
      v2 = (hknpContactSolverEvent *)v90;
    }
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, const hknpShape *, unsigned int, const hknpTriangleShape *, __int16 *))(*(_QWORD *)v52 + 32i64))(v52, LOWORD(zero), 5i64, v85, v84, m_parentShape, v53, v82, v94);
    v51 = v96;
  }
  v101[4] = Physics_GetSurfaceFlagsFromUserData(v51);
  hknpContactSolverEvent::calculateManifold(v2, v86->m_world, &manifoldOut);
  v101[8] = manifoldOut.m_normal.m_quad.m128_i32[0];
  v101[9] = manifoldOut.m_normal.m_quad.m128_i32[1];
  v101[10] = manifoldOut.m_normal.m_quad.m128_i32[2];
  v61 = 0i64;
  v62 = 0i64;
  v63 = v2->m_contactJacobian;
  if ( !v63 )
  {
    m_numPoints = 0i64;
    goto LABEL_38;
  }
  m_numPoints = v63->m_info.m_data.m_numPoints;
  if ( !(_BYTE)m_numPoints )
  {
LABEL_38:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssimplecollisioncallback.cpp", 164, ASSERT_TYPE_ASSERT, "(numContactPoints > 0)", (const char *)&queryFormat, "numContactPoints > 0") )
      __debugbreak();
  }
  if ( m_numPoints )
  {
    m_positions = manifoldOut.m_positions;
    p_m_serialAndIndex = (float *)&v2[1].m_bodyIds[0].m_serialAndIndex;
    do
    {
      v62 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)*(unsigned int *)p_m_serialAndIndex, (__m128)*(unsigned int *)p_m_serialAndIndex, 0), m_positions->m_quad), v62);
      v67 = v61;
      *(float *)&v67 = *(float *)&v61 + *p_m_serialAndIndex;
      v61 = v67;
      ++p_m_serialAndIndex;
      ++m_positions;
      --m_numPoints;
    }
    while ( m_numPoints );
    if ( *(float *)&v67 > 0.0 )
    {
      v68 = (__m128)LODWORD(FLOAT_1_0);
      v68.m128_f32[0] = 1.0 / *(float *)&v61;
      v69 = _mm128_mul_ps(v62, _mm_shuffle_ps(v68, v68, 0));
      *(float *)&v101[5] = v69.m128_f32[0] * 32.0;
      *(float *)&v101[6] = _mm_shuffle_ps(v69, v69, 85).m128_f32[0] * 32.0;
      *(float *)&v101[7] = _mm_shuffle_ps(v69, v69, 170).m128_f32[0] * 32.0;
      v101[11] = v61;
      v70 = v97;
      v71 = s_callbackMaps[v97];
      if ( (int)Key <= v71->m_hashMod )
      {
        do
        {
          v71->m_elem[(int)Key].val.callback((Physics_SimpleCollisionCallback_Data *)v101);
          v71 = s_callbackMaps[v70];
          v72 = (_DWORD)Key + 1;
          v73 = (int)Key + 1;
          m_hashMod = v71->m_hashMod;
          while ( v72 > m_hashMod )
          {
LABEL_51:
            v72 = 0;
            v73 = 0i64;
          }
          v75 = &v71->m_elem[v73];
          while ( v75->key != -1 )
          {
            if ( v75->key == m_serialAndIndex )
              goto LABEL_53;
            ++v72;
            ++v75;
            if ( v72 > m_hashMod )
              goto LABEL_51;
          }
          v72 = m_hashMod + 1;
LABEL_53:
          LODWORD(Key) = v72;
        }
        while ( v72 <= m_hashMod );
      }
    }
  }
  v99.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpShapeBuffer::`vftable';
  if ( v99.m_internal.m_shapeBuffer.m_shape )
    ((void (__fastcall *)(hknpShape *, _QWORD))v99.m_internal.m_shapeBuffer.m_shape->~hkBaseObject)(v99.m_internal.m_shapeBuffer.m_shape, 0i64);
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

