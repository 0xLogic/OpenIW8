/*
==============
GScr_ComputeDropBagPositions
==============
*/

void __fastcall GScr_ComputeDropBagPositions(scrContext_t *scrContext)
{
  ?GScr_ComputeDropBagPositions@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ComputeDropBagPosition_AddNewPairPosition
==============
*/
dropBagPairPosition_t *ComputeDropBagPosition_AddNewPairPosition(dropBagContext_t *dropBagContext, const vec3_t *spotBetween)
{
  signed int v4; 
  dropBagPairPosition_t *v5; 
  __int64 v6; 
  signed int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  double v12; 
  float v13; 
  float spotDistanceFromCenter; 

  if ( dropBagContext->numPairPositions >= 0xC7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 740, ASSERT_TYPE_ASSERT, "(dropBagContext.numPairPositions < ( sizeof( *array_counter( dropBagContext.pairPositions ) ) + 0 ) - 1)", (const char *)&queryFormat, "dropBagContext.numPairPositions < ARRAY_COUNT( dropBagContext.pairPositions ) - 1") )
    __debugbreak();
  if ( dropBagContext->spotsPerCluster < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 741, ASSERT_TYPE_ASSERT, "(dropBagContext.spotsPerCluster >= 2)", (const char *)&queryFormat, "dropBagContext.spotsPerCluster >= 2") )
    __debugbreak();
  v4 = 0;
  v5 = &dropBagContext->pairPositions[(unsigned __int64)dropBagContext->numPairPositions++];
  v5->origin.v[0] = spotBetween->v[0];
  v5->origin.v[1] = spotBetween->v[1];
  v5->origin.v[2] = spotBetween->v[2];
  v5->numSlotsInUse = 0;
  v5->numSlotsRemaining = dropBagContext->spotsPerCluster;
  if ( v5->slotList.m_size >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  v6 = 3 * v5->slotList.m_size;
  *(_QWORD *)&v5->slotList.m_data.m_buffer[4 * v6] = 0i64;
  *(_DWORD *)&v5->slotList.m_data.m_buffer[4 * v6 + 8] = 0;
  ++v5->slotList.m_size;
  *(float *)&v5->slotList.m_data.m_buffer[4 * v6] = spotBetween->v[0];
  *(float *)&v5->slotList.m_data.m_buffer[4 * v6 + 4] = spotBetween->v[1];
  *(float *)&v5->slotList.m_data.m_buffer[4 * v6 + 8] = spotBetween->v[2];
  v7 = dropBagContext->spotsPerCluster - 1;
  G_random();
  if ( v7 > 0 )
  {
    do
    {
      v12 = j___libm_sse2_sincosf_(v9, v8, v10, v11);
      LODWORD(v13) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v12, (__m128)*(unsigned __int64 *)&v12, 1).m128_u32[0];
      if ( v5->slotList.m_size >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
        __debugbreak();
      ++v4;
      v8 = 3 * v5->slotList.m_size;
      *(_QWORD *)&v5->slotList.m_data.m_buffer[4 * v8] = 0i64;
      *(_DWORD *)&v5->slotList.m_data.m_buffer[4 * v8 + 8] = 0;
      ++v5->slotList.m_size;
      spotDistanceFromCenter = dropBagContext->spotDistanceFromCenter;
      *(float *)&v5->slotList.m_data.m_buffer[4 * v8] = (float)(v13 * spotDistanceFromCenter) + spotBetween->v[0];
      *(float *)&v5->slotList.m_data.m_buffer[4 * v8 + 4] = (float)(*(float *)&v12 * spotDistanceFromCenter) + spotBetween->v[1];
      v9 = LODWORD(spotBetween->v[2]);
      *(_DWORD *)&v5->slotList.m_data.m_buffer[4 * v8 + 8] = v9;
    }
    while ( v4 < v7 );
  }
  return v5;
}

/*
==============
ComputeDropBagPosition_AttemptToFindSpotBetweenTwoPlayers
==============
*/
bool ComputeDropBagPosition_AttemptToFindSpotBetweenTwoPlayers(dropBagContext_t *dropBagContext, dropBagPlayerInfo_t *playerInfo1, dropBagPlayerInfo_t *playerInfo2, vec3_t *outPos)
{
  float minRadius; 
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  float v14; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float maxRadius; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  __int128 v46; 
  float v47; 
  float v51; 
  float v52; 
  float v53; 
  __int128 v54; 
  float v55; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  double v68; 
  float v69; 
  float c; 
  float s; 
  float v73; 
  float v74; 

  minRadius = dropBagContext->minRadius;
  v9 = playerInfo2->origin.v[0] - playerInfo1->origin.v[0];
  v10 = playerInfo1->origin.v[1];
  v12 = LODWORD(playerInfo2->origin.v[1]);
  v11 = playerInfo2->origin.v[1] - v10;
  *(float *)&v12 = fsqrt((float)(v11 * v11) + (float)(v9 * v9));
  _XMM3 = v12;
  v14 = *(float *)&v12 * 0.5;
  __asm
  {
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v17 = v9 * (float)(1.0 / *(float *)&_XMM0);
  v18 = v11 * (float)(1.0 / *(float *)&_XMM0);
  if ( (float)(*(float *)&v12 * 0.5) >= dropBagContext->maxRadius )
    return 0;
  v19 = (float)((float)(v11 * (float)(1.0 / *(float *)&_XMM0)) * v14) + v10;
  v20 = (float)(v17 * v14) + playerInfo1->origin.v[0];
  v73 = v19;
  v21 = 0.0;
  if ( v14 < minRadius )
  {
    v22 = cosf_0(v14 / minRadius);
    v21 = sinf_0(v22) * minRadius;
  }
  maxRadius = dropBagContext->maxRadius;
  v24 = cosf_0(v14 / maxRadius);
  v25 = sinf_0(v24);
  v26 = LODWORD(dropBagContext->circleOrigin.v[1]);
  v74 = v25 * maxRadius;
  v27 = dropBagContext->circleOrigin.v[0] - v20;
  v29 = v26;
  v28 = *(float *)&v26 - v19;
  v30 = FLOAT_1_5707964;
  *(float *)&v29 = fsqrt((float)(v28 * v28) + (float)(v27 * v27));
  _XMM3 = v29;
  __asm
  {
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v34 = v27 * (float)(1.0 / *(float *)&_XMM0);
  v35 = v28 * (float)(1.0 / *(float *)&_XMM0);
  FastSinCos(1.5707964, &s, &c);
  v36 = (float)(v17 * c) - (float)(v18 * s);
  v37 = (float)(v18 * c) + (float)(v17 * s);
  if ( (float)((float)(v36 * v34) + (float)(v37 * v35)) < 0.0 )
  {
    v30 = FLOAT_N1_5707964;
    FastSinCos(-1.5707964, &c, &s);
    v36 = (float)(v17 * s) - (float)(v18 * c);
    v37 = (float)(v18 * s) + (float)(v17 * c);
  }
  v38 = (float)(v36 * v21) + v20;
  v39 = (float)(v36 * v74) + v20;
  v40 = playerInfo1->origin.v[1];
  v41 = (float)(v37 * v21) + v73;
  v42 = v37 * v74;
  v43 = dropBagContext->circleOrigin.v[0];
  v44 = playerInfo1->origin.v[0];
  s = v39;
  c = v42 + v73;
  v46 = LODWORD(dropBagContext->circleOrigin.v[1]);
  *(float *)&v46 = dropBagContext->circleOrigin.v[1] - v40;
  v45 = *(float *)&v46;
  v47 = v43 - v44;
  if ( (float)((float)(*(float *)&v46 * v18) + (float)((float)(v43 - v44) * v17)) >= 0.0 )
  {
    v44 = playerInfo2->origin.v[0];
    v40 = playerInfo2->origin.v[1];
    v54 = LODWORD(dropBagContext->circleOrigin.v[1]);
    v53 = dropBagContext->circleOrigin.v[1] - v40;
    v55 = v43 - playerInfo2->origin.v[0];
    *(float *)&v54 = fsqrt((float)(v53 * v53) + (float)(v55 * v55));
    _XMM2 = v54;
    __asm
    {
      vcmpless xmm1, xmm2, xmm15
      vblendvps xmm1, xmm2, xmm8, xmm1
    }
    v51 = v55 * (float)(1.0 / *(float *)&_XMM1);
    v52 = v53 * (float)(1.0 / *(float *)&_XMM1);
  }
  else
  {
    v30 = v30 + 3.1415927;
    *(float *)&v46 = fsqrt((float)(*(float *)&v46 * *(float *)&v46) + (float)(v47 * v47));
    _XMM2 = v46;
    __asm
    {
      vcmpless xmm0, xmm2, xmm15
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    v51 = v47 * (float)(1.0 / *(float *)&_XMM0);
    v52 = v45 * (float)(1.0 / *(float *)&_XMM0);
  }
  FastSinCos(v30, &v73, &v74);
  v59 = (float)(v51 * v74) - (float)(v52 * v73);
  v60 = c - v41;
  LODWORD(v61) = COERCE_UNSIGNED_INT((float)(v51 * v73) + (float)(v52 * v74)) ^ _xmm;
  v62 = v44 - v38;
  v63 = v40 - v41;
  v64 = s;
  v65 = s - v38;
  v66 = (float)(v61 * (float)(s - v38)) + (float)(v59 * (float)(c - v41));
  if ( v66 < 0.000099999997 )
    return 0;
  v67 = (float)((float)(v61 * v62) + (float)(v59 * v63)) * (float)(1.0 / v66);
  if ( v67 > 1.0 )
    return 0;
  if ( (float)((float)((float)(v65 * v63) - (float)(v60 * v62)) * (float)(1.0 / v66)) >= 0.0 && v67 >= 0.0 && v67 <= 1.0 )
  {
    v38 = v38 + (float)(v65 * v67);
    v41 = v41 + (float)(v60 * v67);
  }
  v68 = G_random();
  v69 = c;
  outPos->v[0] = (float)((float)(v64 - v38) * *(float *)&v68) + v38;
  outPos->v[1] = (float)((float)(v69 - v41) * *(float *)&v68) + v41;
  outPos->v[2] = (float)(playerInfo1->origin.v[2] + playerInfo2->origin.v[2]) * 0.5;
  return !ComputeDropBagPositions_IsPointWithRadiusOutsideCircle(dropBagContext, outPos, dropBagContext->spotDistanceFromCenter);
}

/*
==============
ComputeDropBagPositions_DoClusterPairsPass
==============
*/
void ComputeDropBagPositions_DoClusterPairsPass(dropBagContext_t *dropBagContext)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned int i; 
  __int64 v5; 
  dropBagClusterInfo_t *v6; 
  dropBagClusterInfo_t **v7; 
  dropBagClusterInfo_t *v8; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *p_potentialPlayers; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *v10; 
  unsigned __int64 m_size; 
  __int64 v12; 
  char *v13; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 numSlotsInUse; 
  unsigned __int64 v18; 
  ntl::random_access_iterator_tag v19; 
  dropBagClusterInfo_t **v20; 
  dropBagClusterInfo_t *first[512]; 
  unsigned __int64 v23; 

  v2 = 0i64;
  v3 = 0i64;
  v23 = 0i64;
  for ( i = 0; i < dropBagContext->numClusterInfos; ++i )
  {
    v5 = i;
    v6 = &dropBagContext->clusterInfos[v5];
    if ( !dropBagContext->clusterInfos[v5].invalid )
    {
      if ( v3 >= 0x200 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
          __debugbreak();
        v3 = v23;
      }
      first[v3] = v6;
      v3 = ++v23;
    }
  }
  ntl::sort<dropBagClusterInfo_t * *,ClusterPotentialPlayersPredicate>(first, &first[v3], (ClusterPotentialPlayersPredicate)v19.ntl::input_iterator_tag, v19);
  v7 = first;
  v20 = first;
  if ( first != &first[v23] )
  {
    do
    {
      v8 = *v7;
      if ( (*v7)->invalid )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 517, ASSERT_TYPE_ASSERT, "(!clusterInfo->invalid)", (const char *)&queryFormat, "!clusterInfo->invalid") )
          __debugbreak();
        v7 = v20;
      }
      if ( v8->numSlotsRemaining >= 2 )
      {
        p_potentialPlayers = &v8->potentialPlayers;
        v10 = &v8->potentialPlayers;
        m_size = v8->potentialPlayers.m_size;
        if ( &v8->potentialPlayers != (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)&v8->potentialPlayers + 8 * m_size) )
        {
          do
          {
            v12 = *(_QWORD *)v10->m_data.m_buffer;
            if ( !*(_BYTE *)(*(_QWORD *)v10->m_data.m_buffer + 12i64) )
            {
              v13 = &v10->m_data.m_buffer[8];
              v14 = (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)p_potentialPlayers + 8 * m_size);
              if ( &v10->m_data.m_buffer[8] != (char *)v14 )
              {
                while ( 1 )
                {
                  v15 = *(_QWORD *)v13;
                  if ( !*(_BYTE *)(*(_QWORD *)v13 + 12i64) )
                    break;
                  v13 += 8;
                  if ( v13 == (char *)v14 )
                    goto LABEL_40;
                }
                *(_BYTE *)(v12 + 12) = 1;
                *(float *)(v12 + 36) = v8->origin.v[0];
                *(float *)(v12 + 40) = v8->origin.v[1];
                *(float *)(v12 + 44) = v8->origin.v[2];
                v16 = ((char *)v8 - (char *)dropBagContext - 89608) / 328;
                if ( (unsigned __int64)(v16 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v16, "signed", v16) )
                  __debugbreak();
                *(_DWORD *)(v15 + 16) = v16;
                numSlotsInUse = v8->numSlotsInUse;
                if ( numSlotsInUse >= v8->slotList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( numSlotsInUse >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                  __debugbreak();
                *(_DWORD *)(v15 + 20) = *(_DWORD *)&v8->slotList.m_data.m_buffer[4 * numSlotsInUse];
                ++v8->numSlotsInUse;
                --v8->numSlotsRemaining;
                *(_BYTE *)(v15 + 12) = 1;
                *(float *)(v15 + 36) = v8->origin.v[0];
                *(float *)(v15 + 40) = v8->origin.v[1];
                *(float *)(v15 + 44) = v8->origin.v[2];
                if ( (unsigned __int64)(v16 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v16, "signed", v16) )
                  __debugbreak();
                *(_DWORD *)(v15 + 16) = v16;
                v18 = v8->numSlotsInUse;
                if ( v18 >= v8->slotList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v18 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                  __debugbreak();
                *(_DWORD *)(v15 + 20) = *(_DWORD *)&v8->slotList.m_data.m_buffer[4 * v18];
                ++v8->numSlotsInUse;
                --v8->numSlotsRemaining;
                *(_DWORD *)(v12 + 32) = 1;
                *(_DWORD *)(v15 + 32) = 1;
              }
LABEL_40:
              if ( v8->numSlotsRemaining < 2 )
                break;
            }
            v10 = (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)v10 + 8);
            m_size = v8->potentialPlayers.m_size;
          }
          while ( v10 != (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)p_potentialPlayers + 8 * m_size) );
          v7 = v20;
        }
      }
      v20 = ++v7;
    }
    while ( v7 != &first[v23] );
    v2 = 0i64;
  }
  if ( v23 )
  {
    do
    {
      if ( v2 >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v2;
    }
    while ( v2 < v23 );
  }
}

/*
==============
ComputeDropBagPositions_DoClusterSinglesPass
==============
*/
void ComputeDropBagPositions_DoClusterSinglesPass(dropBagContext_t *dropBagContext)
{
  dropBagContext_t *v1; 
  unsigned __int64 v2; 
  unsigned int i; 
  dropBagPlayerInfo_t *v4; 
  unsigned __int64 j; 
  char *m_buffer; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  ntl::fixed_vector<dropBagClusterInfo_t *,32,0> v13; 

  v1 = dropBagContext;
  v2 = 0i64;
  v13.m_size = 0i64;
  for ( i = 0; i < v1->numPlayerInfos; ++i )
  {
    v4 = &v1->playerInfos[i];
    if ( !v4->hasChosenSpot )
    {
      for ( j = 0i64; j < v2; ++j )
      {
        if ( j >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
      }
      v2 = 0i64;
      v13.m_size = 0i64;
      m_buffer = v4->potentialClusters.m_data.m_buffer;
      if ( &v4->potentialClusters != (ntl::fixed_vector<dropBagClusterInfo_t *,32,0> *)((char *)&v4->potentialClusters + 8 * v4->potentialClusters.m_size) )
      {
        do
        {
          v7 = *(_QWORD *)m_buffer;
          if ( *(int *)(*(_QWORD *)m_buffer + 324i64) > 0 )
          {
            if ( v2 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
              __debugbreak();
            *(_QWORD *)&v13.m_data.m_buffer[8 * v2] = v7;
            v2 = ++v13.m_size;
          }
          m_buffer += 8;
        }
        while ( m_buffer != (char *)&v4->potentialClusters + 8 * v4->potentialClusters.m_size );
        v1 = dropBagContext;
        if ( v2 )
        {
          if ( (v2 > 0x7FFFFFFFFFFFFFFFi64 || v2 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v2, "unsigned", v2) )
            __debugbreak();
          v8 = G_irand(0, v2);
          if ( v8 >= v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v8 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          v9 = *(_QWORD *)&v13.m_data.m_buffer[8 * v8];
          v4->hasChosenSpot = 1;
          v4->chosenSpot.origin.v[0] = *(float *)v9;
          v4->chosenSpot.origin.v[1] = *(float *)(v9 + 4);
          v4->chosenSpot.origin.v[2] = *(float *)(v9 + 8);
          v10 = (v9 - (__int64)dropBagContext - 89608) / 328;
          if ( (unsigned __int64)(v10 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v10, "signed", (v9 - (__int64)dropBagContext - 89608) / 328) )
            __debugbreak();
          v4->chosenSpot.clusterIndex = v10;
          v11 = *(int *)(v9 + 320);
          if ( v11 >= *(_QWORD *)(v9 + 312) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v11 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          v4->chosenSpot.clusterSlot = *(_DWORD *)(v9 + 4 * v11 + 280);
          ++*(_DWORD *)(v9 + 320);
          --*(_DWORD *)(v9 + 324);
          v4->chosenSpot.stageChoice = 5;
        }
      }
    }
  }
  ntl::fixed_vector<dropBagClusterInfo_t *,32,0>::~fixed_vector<dropBagClusterInfo_t *,32,0>(&v13);
}

/*
==============
ComputeDropBagPositions_DoClusterStragglersPass
==============
*/
void ComputeDropBagPositions_DoClusterStragglersPass(dropBagContext_t *dropBagContext)
{
  unsigned __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  dropBagClusterInfo_t *v5; 
  unsigned __int64 v6; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *p_potentialPlayers; 
  __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  unsigned __int64 m_size; 
  __int64 v14; 
  unsigned __int64 numSlotsInUse; 
  unsigned int i; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> v17; 

  v2 = 0i64;
  v17.m_size = 0i64;
  v3 = 0;
  for ( i = 0; v3 < dropBagContext->numClusterInfos; i = v3 )
  {
    v4 = v3;
    v5 = &dropBagContext->clusterInfos[v4];
    if ( !dropBagContext->clusterInfos[v4].invalid && dropBagContext->clusterInfos[v4].numSlotsInUse && dropBagContext->clusterInfos[v4].numSlotsRemaining )
    {
      v6 = 0i64;
      if ( v2 )
      {
        do
        {
          if ( v6 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ++v6;
        }
        while ( v6 < v2 );
        v3 = i;
      }
      v2 = 0i64;
      v17.m_size = 0i64;
      p_potentialPlayers = &v5->potentialPlayers;
      if ( &v5->potentialPlayers != (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)&v5->potentialPlayers + 8 * v5->potentialPlayers.m_size) )
      {
        do
        {
          v8 = *(_QWORD *)p_potentialPlayers->m_data.m_buffer;
          if ( !*(_BYTE *)(*(_QWORD *)p_potentialPlayers->m_data.m_buffer + 12i64) )
          {
            if ( v2 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
              __debugbreak();
            *(_QWORD *)&v17.m_data.m_buffer[8 * v2] = v8;
            v2 = ++v17.m_size;
          }
          p_potentialPlayers = (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)p_potentialPlayers + 8);
        }
        while ( p_potentialPlayers != (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)&v5->potentialPlayers + 8 * v5->potentialPlayers.m_size) );
        v3 = i;
        if ( v2 )
        {
          do
          {
            if ( v5->numSlotsRemaining <= 0 )
              break;
            if ( (v2 > 0x7FFFFFFFFFFFFFFFi64 || v2 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v2, "unsigned", v2) )
              __debugbreak();
            v9 = G_irand(0, v2);
            if ( v9 >= v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v9 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v10 = *(_QWORD *)&v17.m_data.m_buffer[8 * v9];
            v11 = v2 - 1;
            if ( v2 - 1 >= v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v11 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v12 = *(_QWORD *)&v17.m_data.m_buffer[8 * v11];
            if ( v9 >= v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v9 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            *(_QWORD *)&v17.m_data.m_buffer[8 * v9] = v12;
            m_size = v17.m_size;
            if ( !v17.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
              __debugbreak();
            v2 = m_size - 1;
            v17.m_size = v2;
            *(_BYTE *)(v10 + 12) = 1;
            *(float *)(v10 + 36) = v5->origin.v[0];
            *(float *)(v10 + 40) = v5->origin.v[1];
            *(float *)(v10 + 44) = v5->origin.v[2];
            v14 = ((char *)v5 - (char *)dropBagContext - 89608) / 328;
            if ( (unsigned __int64)(v14 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v14, "signed", ((char *)v5 - (char *)dropBagContext - 89608) / 328) )
              __debugbreak();
            *(_DWORD *)(v10 + 16) = v14;
            numSlotsInUse = v5->numSlotsInUse;
            if ( numSlotsInUse >= v5->slotList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( numSlotsInUse >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            *(_DWORD *)(v10 + 20) = *(_DWORD *)&v5->slotList.m_data.m_buffer[4 * numSlotsInUse];
            ++v5->numSlotsInUse;
            --v5->numSlotsRemaining;
            *(_DWORD *)(v10 + 32) = 2;
          }
          while ( v2 );
          v3 = i;
        }
      }
    }
    ++v3;
  }
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0>::~fixed_vector<dropBagPlayerInfo_t *,32,0>(&v17);
}

/*
==============
ComputeDropBagPositions_DoNonClusterPairsPass
==============
*/
void ComputeDropBagPositions_DoNonClusterPairsPass(dropBagContext_t *dropBagContext)
{
  dropBagContext_t *v1; 
  unsigned __int64 v2; 
  unsigned int v3; 
  dropBagPlayerInfo_t *v4; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *p_potentialPartners; 
  unsigned __int64 v6; 
  unsigned __int64 m_size; 
  __int64 v8; 
  unsigned __int64 v9; 
  _QWORD *v10; 
  unsigned __int64 v11; 
  _QWORD *v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  dropBagPlayerInfo_t **v16; 
  dropBagPlayerInfo_t *v17; 
  unsigned __int64 v18; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  dropBagPlayerInfo_t *v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  dropBagPairPosition_t *v26; 
  int *p_numSlotsRemaining; 
  ntl::fixed_vector<vec3_t,8,0> *p_slotList; 
  int *p_numSlotsInUse; 
  unsigned __int64 numSlotsInUse; 
  __int64 v31; 
  unsigned __int64 v32; 
  ntl::random_access_iterator_tag v33; 
  unsigned int v34; 
  dropBagPlayerInfo_t **i; 
  dropBagPlayerInfo_t *v37; 
  vec3_t outPos; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> playerInfo2; 
  dropBagPlayerInfo_t *first[200]; 
  unsigned __int64 v41; 

  v1 = dropBagContext;
  v2 = 0i64;
  v41 = 0i64;
  v3 = 0;
  v34 = 0;
  if ( dropBagContext->numPlayerInfos )
  {
    do
    {
      v4 = &v1->playerInfos[v3];
      if ( !v4->hasChosenSpot )
      {
        p_potentialPartners = &v4->potentialPartners;
        v6 = (unsigned __int64)&v4->potentialPartners;
        m_size = v4->potentialPartners.m_size;
        if ( &v4->potentialPartners != (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)&v4->potentialPartners + 8 * m_size) )
        {
          do
          {
            if ( *(_BYTE *)(*(_QWORD *)v6 + 12i64) )
            {
              if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
                __debugbreak();
              if ( (v6 < (unsigned __int64)p_potentialPartners || v6 > (unsigned __int64)p_potentialPartners + 8 * v4->potentialPartners.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
                __debugbreak();
              v8 = v6 - (_QWORD)p_potentialPartners;
              if ( (((_BYTE)v6 - (_BYTE)p_potentialPartners) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
                __debugbreak();
              if ( (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)v6 == (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)p_potentialPartners + 8 * v4->potentialPartners.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
                __debugbreak();
              v6 = (unsigned __int64)&v4->potentialPartners;
              v9 = v4->potentialPartners.m_size;
              if ( v9 )
                v6 = (unsigned __int64)p_potentialPartners + 8 * (v8 >> 3);
              v10 = (_QWORD *)v6;
              v11 = (unsigned __int64)p_potentialPartners + 8 * v9;
              v12 = (_QWORD *)(v6 + 8);
              if ( v6 + 8 == v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                __debugbreak();
              if ( v11 == v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                __debugbreak();
              if ( v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v13 = 0i64;
              v14 = (v11 - (unsigned __int64)v12 + 7) >> 3;
              if ( (unsigned __int64)v12 > v11 )
                v14 = 0i64;
              if ( v14 )
              {
                do
                {
                  *v10++ = *v12++;
                  ++v13;
                }
                while ( v13 < v14 );
              }
              m_size = --v4->potentialPartners.m_size;
            }
            else
            {
              v6 += 8i64;
            }
          }
          while ( (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)v6 != (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)p_potentialPartners + 8 * m_size) );
          v3 = v34;
          v1 = dropBagContext;
        }
        if ( v41 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
          __debugbreak();
        first[v41++] = v4;
      }
      v34 = ++v3;
    }
    while ( v3 < v1->numPlayerInfos );
    v2 = 0i64;
  }
  ntl::sort<dropBagPlayerInfo_t * *,PlayerPotentialPartnersPredicate>(first, &first[v41], (PlayerPotentialPartnersPredicate)v33.ntl::input_iterator_tag, v33);
  v15 = 0i64;
  playerInfo2.m_size = 0i64;
  v16 = first;
  for ( i = first; v16 != &first[v41]; i = v16 )
  {
    v17 = *v16;
    v37 = *v16;
    if ( !(*v16)->hasChosenSpot )
    {
      v18 = 0i64;
      if ( v15 )
      {
        do
        {
          if ( v18 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ++v18;
        }
        while ( v18 < v15 );
        v16 = i;
      }
      v15 = 0i64;
      playerInfo2.m_size = 0i64;
      v19 = &v17->potentialPartners;
      if ( &v17->potentialPartners != (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)&v17->potentialPartners + 8 * v17->potentialPartners.m_size) )
      {
        do
        {
          v20 = *(_QWORD *)v19->m_data.m_buffer;
          if ( !*(_BYTE *)(*(_QWORD *)v19->m_data.m_buffer + 12i64) )
          {
            if ( v15 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
              __debugbreak();
            *(_QWORD *)&playerInfo2.m_data.m_buffer[8 * v15] = v20;
            v15 = ++playerInfo2.m_size;
          }
          v19 = (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)v19 + 8);
        }
        while ( v19 != (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)&v17->potentialPartners + 8 * v17->potentialPartners.m_size) );
        if ( v15 )
        {
          while ( 1 )
          {
            if ( (v15 > 0x7FFFFFFFFFFFFFFFi64 || v15 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v15, "unsigned", v15) )
              __debugbreak();
            v21 = G_irand(0, v15);
            if ( v21 >= v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v21 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v22 = *(dropBagPlayerInfo_t **)&playerInfo2.m_data.m_buffer[8 * v21];
            v23 = v15 - 1;
            if ( v15 - 1 >= v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v23 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v24 = *(_QWORD *)&playerInfo2.m_data.m_buffer[8 * v23];
            if ( v21 >= v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v21 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            *(_QWORD *)&playerInfo2.m_data.m_buffer[8 * v21] = v24;
            v25 = playerInfo2.m_size;
            if ( !playerInfo2.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
              __debugbreak();
            v15 = v25 - 1;
            playerInfo2.m_size = v15;
            if ( ComputeDropBagPosition_AttemptToFindSpotBetweenTwoPlayers(dropBagContext, v17, v22, &outPos) )
              break;
            if ( !v15 )
              goto LABEL_112;
          }
          v26 = ComputeDropBagPosition_AddNewPairPosition(dropBagContext, &outPos);
          if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 841, ASSERT_TYPE_ASSERT, "(newPairPos)", (const char *)&queryFormat, "newPairPos") )
            __debugbreak();
          p_numSlotsRemaining = &v26->numSlotsRemaining;
          if ( v26->numSlotsRemaining < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 842, ASSERT_TYPE_ASSERT, "(newPairPos->numSlotsRemaining >= 2)", (const char *)&queryFormat, "newPairPos->numSlotsRemaining >= 2") )
            __debugbreak();
          v17->hasChosenSpot = 1;
          p_slotList = &v26->slotList;
          p_numSlotsInUse = &v26->numSlotsInUse;
          numSlotsInUse = v26->numSlotsInUse;
          if ( numSlotsInUse >= v26->slotList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( numSlotsInUse >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ComputeDropBagPositions_ValidatePosition(dropBagContext, (const vec3_t *)p_slotList + numSlotsInUse, &v37->chosenSpot.origin);
          v31 = ((char *)v26 - (char *)dropBagContext - 257552) >> 7;
          if ( (unsigned __int64)(v31 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v31, "signed", v31) )
            __debugbreak();
          v37->chosenSpot.pairIndex = v31;
          v37->chosenSpot.pairSlot = (*p_numSlotsInUse)++;
          --*p_numSlotsRemaining;
          v22->hasChosenSpot = 1;
          v32 = *p_numSlotsInUse;
          if ( v32 >= p_slotList->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v32 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ComputeDropBagPositions_ValidatePosition(dropBagContext, (const vec3_t *)p_slotList + v32, &v22->chosenSpot.origin);
          if ( (unsigned __int64)(v31 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v31, "signed", v31) )
            __debugbreak();
          v22->chosenSpot.pairIndex = v31;
          v22->chosenSpot.pairSlot = (*p_numSlotsInUse)++;
          --*p_numSlotsRemaining;
          v37->chosenSpot.stageChoice = 3;
          v22->chosenSpot.stageChoice = 3;
        }
LABEL_112:
        v16 = i;
        v2 = 0i64;
      }
    }
    ++v16;
  }
  ntl::fixed_vector<dropBagPlayerInfo_t *,16,0>::~fixed_vector<dropBagPlayerInfo_t *,16,0>(&playerInfo2);
  if ( v41 )
  {
    do
    {
      if ( v2 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v2;
    }
    while ( v2 < v41 );
  }
}

/*
==============
ComputeDropBagPositions_DoNonClusterSinglesPass
==============
*/
void ComputeDropBagPositions_DoNonClusterSinglesPass(dropBagContext_t *dropBagContext)
{
  unsigned int i; 
  dropBagPlayerInfo_t *v3; 
  float v4; 
  __int128 v5; 
  double v9; 
  float v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  double v15; 
  bool v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float spotDistanceFromCenter; 
  float circleRadius; 
  float v24; 
  __int128 v25; 
  float v29; 
  vec3_t inPos; 
  vec2_t vec; 

  for ( i = 0; i < dropBagContext->numPlayerInfos; ++i )
  {
    v3 = &dropBagContext->playerInfos[i];
    if ( !v3->hasChosenSpot )
    {
      if ( dropBagContext->usingCircleData )
      {
        v4 = dropBagContext->circleOrigin.v[0] - v3->origin.v[0];
        v5 = LODWORD(dropBagContext->circleOrigin.v[1]);
        *(float *)&v5 = dropBagContext->circleOrigin.v[1] - v3->origin.v[1];
        *(float *)&v5 = fsqrt((float)(*(float *)&v5 * *(float *)&v5) + (float)(v4 * v4));
        _XMM3 = v5;
        __asm
        {
          vcmpless xmm0, xmm3, xmm14
          vblendvps xmm0, xmm3, xmm10, xmm0
        }
        vec.v[1] = (float)(1.0 / *(float *)&_XMM0) * (float)(dropBagContext->circleOrigin.v[1] - v3->origin.v[1]);
        vec.v[0] = (float)(1.0 / *(float *)&_XMM0) * v4;
        vectosignedyaw(&vec);
      }
      G_random();
      v9 = G_random();
      v10 = (float)((float)(1.0 - *(float *)&v9) * dropBagContext->minRadius) + (float)(*(float *)&v9 * dropBagContext->maxRadius);
      v15 = j___libm_sse2_sincosf_(v12, v11, v13, v14);
      v16 = !dropBagContext->usingCircleData;
      v17 = v3->origin.v[0];
      v18 = LODWORD(v3->origin.v[1]);
      v19 = (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)&v15, (__m128)*(unsigned __int64 *)&v15, 1).m128_f32[0] * v10) + v3->origin.v[0];
      inPos.v[2] = v3->origin.v[2];
      inPos.v[0] = v19;
      inPos.v[1] = (float)(*(float *)&v15 * v10) + *(float *)&v18;
      if ( !v16 )
      {
        v20 = dropBagContext->circleOrigin.v[1];
        v21 = dropBagContext->circleOrigin.v[0];
        spotDistanceFromCenter = dropBagContext->spotDistanceFromCenter;
        circleRadius = dropBagContext->circleRadius;
        if ( (float)(fsqrt((float)((float)((float)((float)(*(float *)&v15 * v10) + *(float *)&v18) - v20) * (float)((float)((float)(*(float *)&v15 * v10) + *(float *)&v18) - v20)) + (float)((float)(v19 - v21) * (float)(v19 - v21))) + spotDistanceFromCenter) > circleRadius )
        {
          v24 = v17 - v21;
          v25 = v18;
          *(float *)&v25 = fsqrt((float)((float)(*(float *)&v18 - v20) * (float)(*(float *)&v18 - v20)) + (float)(v24 * v24));
          _XMM2 = v25;
          __asm
          {
            vcmpless xmm0, xmm2, xmm14
            vblendvps xmm0, xmm2, xmm10, xmm0
          }
          v29 = circleRadius - spotDistanceFromCenter;
          inPos.v[0] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v24) * v29) + v21;
          inPos.v[1] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(*(float *)&v18 - v20)) * v29) + v20;
        }
      }
      v3->hasChosenSpot = 1;
      ComputeDropBagPositions_ValidatePosition(dropBagContext, &inPos, &v3->chosenSpot.origin);
      v3->chosenSpot.stageChoice = 6;
    }
  }
}

/*
==============
ComputeDropBagPositions_DoPairsStragglersPass
==============
*/
void ComputeDropBagPositions_DoPairsStragglersPass(dropBagContext_t *dropBagContext)
{
  unsigned int i; 
  unsigned __int64 v3; 
  float v4; 
  float v5; 
  bool v6; 
  unsigned int j; 
  dropBagPlayerInfo_t *v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned __int64 v13; 

  for ( i = 0; i < dropBagContext->numPairPositions; ++i )
  {
    v3 = (unsigned __int64)i << 7;
    if ( *(int *)((char *)&dropBagContext->pairPositions[0].numSlotsRemaining + v3) > 0 )
    {
      if ( dropBagContext->usingCircleData )
      {
        v4 = *(float *)((char *)&dropBagContext->pairPositions[0].origin.v[1] + v3) - dropBagContext->circleOrigin.v[1];
        v5 = *(float *)((char *)dropBagContext->pairPositions[0].origin.v + v3) - dropBagContext->circleOrigin.v[0];
        v6 = (float)((float)(v4 * v4) + (float)(v5 * v5)) > dropBagContext->circleRadiusSq;
      }
      else
      {
        v6 = 0;
      }
      for ( j = 0; j < dropBagContext->numPlayerInfos; ++j )
      {
        v8 = &dropBagContext->playerInfos[j];
        if ( !v8->hasChosenSpot )
        {
          v9 = *(float *)((char *)dropBagContext->pairPositions[0].origin.v + v3);
          v10 = v8->origin.v[1];
          v11 = *(float *)((char *)&dropBagContext->pairPositions[0].origin.v[1] + v3);
          v12 = (float)((float)(v10 - v11) * (float)(v10 - v11)) + (float)((float)(v8->origin.v[0] - v9) * (float)(v8->origin.v[0] - v9));
          if ( v12 > dropBagContext->minRadiusSq && v12 < dropBagContext->maxRadiusSq && (!v6 || (float)((float)((float)(dropBagContext->circleOrigin.v[1] - v10) * (float)(v11 - v10)) + (float)((float)(v9 - v8->origin.v[0]) * (float)(dropBagContext->circleOrigin.v[0] - v8->origin.v[0]))) >= 0.0) )
          {
            v8->hasChosenSpot = 1;
            v13 = *(int *)((char *)&dropBagContext->pairPositions[0].numSlotsInUse + v3);
            if ( v13 >= *(unsigned __int64 *)((char *)&dropBagContext->pairPositions[0].slotList.m_size + v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v13 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            ComputeDropBagPositions_ValidatePosition(dropBagContext, (const vec3_t *)((char *)&dropBagContext->pairPositions[0].slotList + 12 * v13 + v3), &v8->chosenSpot.origin);
            if ( i > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", (int)i, "unsigned", i) )
              __debugbreak();
            v8->chosenSpot.pairIndex = i;
            v8->chosenSpot.pairSlot = (*(int *)((char *)&dropBagContext->pairPositions[0].numSlotsInUse + v3))++;
            --*(int *)((char *)&dropBagContext->pairPositions[0].numSlotsRemaining + v3);
            v8->chosenSpot.stageChoice = 4;
            if ( *(int *)((char *)&dropBagContext->pairPositions[0].numSlotsRemaining + v3) <= 0 )
              break;
          }
        }
      }
    }
  }
}

/*
==============
ComputeDropBagPositions_IsPointWithRadiusOutsideCircle
==============
*/
bool ComputeDropBagPositions_IsPointWithRadiusOutsideCircle(const dropBagContext_t *dropBagContext, const vec3_t *inPos, const float radius)
{
  float v3; 

  if ( !dropBagContext->usingCircleData )
    return 0;
  v3 = inPos->v[1] - dropBagContext->circleOrigin.v[1];
  return (float)(fsqrt((float)(v3 * v3) + (float)((float)(inPos->v[0] - dropBagContext->circleOrigin.v[0]) * (float)(inPos->v[0] - dropBagContext->circleOrigin.v[0]))) + radius) > dropBagContext->circleRadius;
}

/*
==============
ComputeDropBagPositions_Log
==============
*/
void ComputeDropBagPositions_Log(dropBagContext_t *dropBagContext, int elapsedMS)
{
  unsigned int v3; 
  unsigned int i; 
  unsigned int j; 
  dropBagPlayerInfo_t *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  Com_Printf(24, "\nComputeDropBag finished in %dms\n", (unsigned int)elapsedMS);
  Com_Printf(24, "ComputeDropBag map bounds (%.2f,%.2f,%.2f) (%.2f,%.2f,%.2f)\n", dropBagContext->mapBounds.mins.v[0], dropBagContext->mapBounds.mins.v[1], dropBagContext->mapBounds.mins.v[2], dropBagContext->mapBounds.maxs.v[0], dropBagContext->mapBounds.maxs.v[1], dropBagContext->mapBounds.maxs.v[2]);
  Com_Printf(24, "ComputeDropBag clusters[%d]\n", dropBagContext->numClusterInfos);
  v3 = 0;
  for ( i = 0; i < dropBagContext->numClusterInfos; ++i )
    Com_Printf(24, "ComputeDropBag cluster[%d] (%.2f,%.2f,%.2f)\n", i, dropBagContext->clusterInfos[i].origin.v[0], dropBagContext->clusterInfos[i].origin.v[1], dropBagContext->clusterInfos[i].origin.v[2]);
  Com_Printf(24, "ComputeDropBag pairs[%d]\n", dropBagContext->numPairPositions);
  for ( j = 0; j < dropBagContext->numPairPositions; ++j )
    Com_Printf(24, "ComputeDropBag pair[%d] (%.2f,%.2f,%.2f)\n", j, dropBagContext->pairPositions[(unsigned __int64)j].origin.v[0], dropBagContext->pairPositions[(unsigned __int64)j].origin.v[1], dropBagContext->pairPositions[(unsigned __int64)j].origin.v[2]);
  Com_Printf(24, "ComputeDropBag players[%d]\n", dropBagContext->numPlayerInfos);
  if ( dropBagContext->numPlayerInfos )
  {
    do
    {
      v6 = &dropBagContext->playerInfos[v3];
      LODWORD(v11) = v6->chosenSpot.stageChoice;
      LODWORD(v10) = v6->chosenSpot.pairSlot;
      LODWORD(v9) = v6->chosenSpot.pairIndex;
      LODWORD(v8) = v6->chosenSpot.clusterSlot;
      LODWORD(v7) = v6->chosenSpot.clusterIndex;
      Com_Printf(24, "ComputeDropBag player[%d] (%.2f,%.2f,%.2f) clusterIndex=%d clusterSlot=%d pairIndex=%d pairSlot=%d (%.2f,%.2f,%.2f) stageChoice=%d\n", v3++, v6->origin.v[0], v6->origin.v[1], v6->origin.v[2], v7, v8, v9, v10, v6->chosenSpot.origin.v[0], v6->chosenSpot.origin.v[1], v6->chosenSpot.origin.v[2], v11);
    }
    while ( v3 < dropBagContext->numPlayerInfos );
  }
  Com_Printf(24, "ComputeDropBag circle (%.2f,%.2f,%.2f) radius=%.2f\n", dropBagContext->circleOrigin.v[0], dropBagContext->circleOrigin.v[1], dropBagContext->circleOrigin.v[2], dropBagContext->circleRadius);
}

/*
==============
ComputeDropBagPositions_RetrieveClusterInfo
==============
*/
char ComputeDropBagPositions_RetrieveClusterInfo(scrContext_t *scrContext, int paramIdx, dropBagContext_t *dropBagContext)
{
  int v4; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  unsigned int v9; 
  const char *v10; 
  const char *NameForType; 
  const char *v12; 
  int v13; 
  __int64 v14; 
  __int64 numClusterInfos; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  VariableUnion u; 
  const char *v20; 
  VariableType failureType[4]; 
  int v22; 
  unsigned int failureIndex; 
  VariableValue out; 
  unsigned int buffer[512]; 

  v22 = paramIdx;
  v4 = paramIdx;
  if ( Scr_GetPointerType(scrContext, paramIdx) == VAR_ARRAY )
  {
    ArrayObject = BGScr_Main_GetArrayObject(scrContext, v4);
    ArraySize = GetArraySize(scrContext, ArrayObject);
    v9 = ArraySize;
    if ( ArraySize <= 0x200 )
    {
      if ( Scr_GetObjectArray(scrContext, ArrayObject, 0x200u, buffer, &failureIndex, failureType) )
      {
        dropBagContext->numClusterInfos = 0;
        v13 = truncate_cast<int,unsigned int>(v9) - 1;
        v14 = v13;
        if ( v13 < 0 )
        {
          return 1;
        }
        else
        {
          while ( 1 )
          {
            Scr_FindVariableField_Out(scrContext, buffer[v14], g_scrCanonicalStringPub.canonicalStringForOrigin, &out);
            if ( out.type != VAR_VECTOR )
              break;
            numClusterInfos = dropBagContext->numClusterInfos;
            v16 = 0i64;
            v17 = numClusterInfos;
            dropBagContext->numClusterInfos = numClusterInfos + 1;
            *(_QWORD *)dropBagContext->clusterInfos[v17].origin.v = 0i64;
            dropBagContext->clusterInfos[v17].origin.v[2] = 0.0;
            dropBagContext->clusterInfos[v17].invalid = 0;
            if ( dropBagContext->clusterInfos[numClusterInfos].potentialPlayers.m_size )
            {
              do
              {
                if ( v16 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                  __debugbreak();
                ++v16;
              }
              while ( v16 < dropBagContext->clusterInfos[v17].potentialPlayers.m_size );
              v4 = v22;
            }
            dropBagContext->clusterInfos[v17].potentialPlayers.m_size = 0i64;
            v18 = 0i64;
            *(_QWORD *)&dropBagContext->clusterInfos[v17].numSlotsInUse = 0i64;
            if ( dropBagContext->clusterInfos[v17].slotList.m_size )
            {
              do
              {
                if ( v18 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                  __debugbreak();
                ++v18;
              }
              while ( v18 < dropBagContext->clusterInfos[v17].slotList.m_size );
              v4 = v22;
            }
            dropBagContext->clusterInfos[v17].slotList.m_size = 0i64;
            u = out.u;
            dropBagContext->clusterInfos[v17].origin.v[0] = *out.u.vectorValue;
            dropBagContext->clusterInfos[v17].origin.v[1] = *(float *)(u.scriptCodePosValue + 4);
            dropBagContext->clusterInfos[v17].origin.v[2] = *(float *)(u.scriptCodePosValue + 8);
            RemoveRefToValue(scrContext, (unsigned __int8)out.type, out.u);
            --v13;
            if ( --v14 < 0 )
              return 1;
          }
          RemoveRefToValue(scrContext, (unsigned __int8)out.type, out.u);
          v20 = j_va("element %i of <clusterList> array has no origin vector", (unsigned int)v13);
          Scr_ParamError(COM_ERR_6584, scrContext, v4, v20);
          return 0;
        }
      }
      else
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v12 = j_va("element %i of <clusterList> array: type %s is not an object", failureIndex, NameForType);
        Scr_ParamError(COM_ERR_6583, scrContext, v4, v12);
        return 0;
      }
    }
    else
    {
      v10 = j_va("<clusterList> array is too large (%d > %d)", ArraySize, 512i64);
      Scr_ParamError(COM_ERR_6582, scrContext, v4, v10);
      return 0;
    }
  }
  else
  {
    Scr_ParamError(COM_ERR_6581, scrContext, v4, "<clusterList> must be an array");
    return 0;
  }
}

/*
==============
ComputeDropBagPositions_RetrievePlayerOrigins
==============
*/
char ComputeDropBagPositions_RetrievePlayerOrigins(scrContext_t *scrContext, int paramIdx, dropBagContext_t *dropBagContext)
{
  int v4; 
  unsigned int v7; 
  unsigned int ArraySize; 
  unsigned int v9; 
  const char *v10; 
  unsigned int v11; 
  unsigned int ArrayVariable; 
  const VariableUnion *VariableValueAddressConst; 
  __int64 numPlayerInfos; 
  const VariableUnion *v15; 
  unsigned __int64 v16; 
  dropBagPlayerInfo_t *v17; 
  unsigned __int64 v18; 
  _DWORD *scriptCodePosValue; 
  const char *v20; 
  unsigned int ArrayObject; 
  unsigned int v23; 

  v4 = paramIdx;
  if ( Scr_GetPointerType(scrContext, paramIdx) == VAR_ARRAY )
  {
    ArrayObject = BGScr_Main_GetArrayObject(scrContext, v4);
    v7 = ArrayObject;
    ArraySize = GetArraySize(scrContext, ArrayObject);
    v23 = ArraySize;
    v9 = ArraySize;
    if ( ArraySize <= 0xC8 )
    {
      v11 = 0;
      dropBagContext->numPlayerInfos = 0;
      if ( ArraySize )
      {
        while ( 1 )
        {
          ArrayVariable = GetArrayVariable(scrContext, v7, v11);
          if ( GetValueType(scrContext, ArrayVariable) != VAR_VECTOR )
            break;
          VariableValueAddressConst = GetVariableValueAddressConst(scrContext, ArrayVariable);
          numPlayerInfos = dropBagContext->numPlayerInfos;
          v15 = VariableValueAddressConst;
          v16 = 0i64;
          v17 = &dropBagContext->playerInfos[numPlayerInfos];
          dropBagContext->numPlayerInfos = numPlayerInfos + 1;
          *(_QWORD *)v17->origin.v = 0i64;
          v17->origin.v[2] = 0.0;
          v17->hasChosenSpot = 0;
          *(_QWORD *)&v17->chosenSpot.clusterIndex = -1i64;
          *(_QWORD *)&v17->chosenSpot.pairIndex = -1i64;
          v17->chosenSpot.stageChoice = -1;
          *(_QWORD *)v17->chosenSpot.origin.v = 0i64;
          v17->chosenSpot.origin.v[2] = 0.0;
          if ( v17->potentialPartners.m_size )
          {
            do
            {
              if ( v16 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                __debugbreak();
              ++v16;
            }
            while ( v16 < v17->potentialPartners.m_size );
            v9 = v23;
            v4 = paramIdx;
          }
          v17->potentialPartners.m_size = 0i64;
          v18 = 0i64;
          if ( v17->potentialClusters.m_size )
          {
            do
            {
              if ( v18 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                __debugbreak();
              ++v18;
            }
            while ( v18 < v17->potentialClusters.m_size );
            v9 = v23;
            v4 = paramIdx;
          }
          v7 = ArrayObject;
          ++v11;
          v17->potentialClusters.m_size = 0i64;
          scriptCodePosValue = (_DWORD *)v15->scriptCodePosValue;
          v17->origin.v[0] = *v15->vectorValue;
          v17->origin.v[1] = (float)scriptCodePosValue[1];
          v17->origin.v[2] = (float)scriptCodePosValue[2];
          if ( v11 >= v9 )
            return 1;
        }
        v20 = j_va("element %i of <playerList> array is not a vector", v11);
        Scr_ParamError(COM_ERR_6580, scrContext, v4, v20);
        return 0;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      v10 = j_va("<playerList> array is too large (%d > %d)", ArraySize, 200i64);
      Scr_ParamError(COM_ERR_6579, scrContext, v4, v10);
      return 0;
    }
  }
  else
  {
    Scr_ParamError(COM_ERR_6578, scrContext, v4, "<playerList> must be an array.");
    return 0;
  }
}

/*
==============
ComputeDropBagPositions_ValidatePosition
==============
*/
void ComputeDropBagPositions_ValidatePosition(const dropBagContext_t *dropBagContext, const vec3_t *inPos, vec3_t *outPos)
{
  double v6; 
  float v7; 
  float v8; 
  double v9; 
  float v10; 
  float v11; 
  vec3_t targetPos; 

  v6 = I_fclamp(inPos->v[0], dropBagContext->mapBounds.mins.v[0], dropBagContext->mapBounds.maxs.v[0]);
  v7 = dropBagContext->mapBounds.maxs.v[1];
  v8 = dropBagContext->mapBounds.mins.v[1];
  targetPos.v[0] = *(float *)&v6;
  v9 = I_fclamp(inPos->v[1], v8, v7);
  targetPos.v[1] = *(float *)&v9;
  targetPos.v[2] = inPos->v[2];
  if ( Nav_MeshLoaded() && Nav_GetClosestVerticalPosDefault(&targetPos, outPos, NULL) )
  {
    v10 = targetPos.v[0];
    v11 = targetPos.v[1];
    if ( (float)((float)((float)(outPos->v[1] - targetPos.v[1]) * (float)(outPos->v[1] - targetPos.v[1])) + (float)((float)(outPos->v[0] - targetPos.v[0]) * (float)(outPos->v[0] - targetPos.v[0]))) < 1000000.0 )
      return;
  }
  else
  {
    v11 = targetPos.v[1];
    v10 = targetPos.v[0];
  }
  outPos->v[2] = targetPos.v[2];
  outPos->v[0] = v10;
  outPos->v[1] = v11;
}

/*
==============
GScr_ComputeDropBagPositions
==============
*/
void GScr_ComputeDropBagPositions(scrContext_t *scrContext)
{
  signed __int64 v1; 
  void *v2; 
  scrContext_t *v3; 
  int v4; 
  unsigned int NumParam; 
  const char *v6; 
  ComErrorCode v7; 
  unsigned int ArrayObject; 
  unsigned int v9; 
  unsigned int i; 
  unsigned int ArrayVariable; 
  double Float; 
  double v25; 
  double v26; 
  int Int; 
  __int64 v28; 
  unsigned int v29; 
  double v30; 
  double v31; 
  int v32; 
  unsigned int numPlayerInfos; 
  float v34; 
  int v35; 
  float v36; 
  float v37; 
  unsigned int v38; 
  dropBagPlayerInfo_t *v39; 
  unsigned int v40; 
  dropBagPlayerInfo_t *v41; 
  float v42; 
  unsigned int v43; 
  dropBagPlayerInfo_t *v44; 
  unsigned int v45; 
  dropBagClusterInfo_t *v46; 
  float v47; 
  float v48; 
  int clusterIndex; 
  unsigned int v50; 
  unsigned int CanonicalString; 
  unsigned int v52; 
  unsigned int v53; 
  int v54; 
  dropBagContext_t ptr; 

  v2 = alloca(v1);
  v3 = scrContext;
  Sys_ProfBeginNamedEvent(0xFF808080, "GScr_ComputeDropBagPositions");
  v4 = Sys_Milliseconds();
  `eh vector constructor iterator'(&ptr, 0x1C0ui64, 0xC8ui64, (void (__fastcall *)(void *))dropBagPlayerInfo_t::dropBagPlayerInfo_t, (void (__fastcall *)(void *))dropBagPlayerInfo_t::~dropBagPlayerInfo_t);
  `eh vector constructor iterator'(ptr.clusterInfos, 0x148ui64, 0x200ui64, (void (__fastcall *)(void *))dropBagClusterInfo_t::dropBagClusterInfo_t, (void (__fastcall *)(void *))dropBagClusterInfo_t::~dropBagClusterInfo_t);
  `eh vector constructor iterator'(ptr.pairPositions, 0x80ui64, 0xC8ui64, (void (__fastcall *)(void *))dropBagPairPosition_t::dropBagPairPosition_t, (void (__fastcall *)(void *))dropBagPairPosition_t::~dropBagPairPosition_t);
  NumParam = Scr_GetNumParam(v3);
  if ( ((NumParam - 8) & 0xFFFFFFFD) != 0 )
  {
    Scr_Error(COM_ERR_6588, v3, "Usage: ComputeDropBagPositions( <playerList>, <clusterList>, <mapBounds>, <minDist>, <maxDist>, <invalidateRadius>, <spotsPerCluster>, <spotDistanceFromCenter>, [circleOrigin], [circleRadius] );");
    goto LABEL_68;
  }
  if ( ComputeDropBagPositions_RetrievePlayerOrigins(v3, 0, &ptr) && ComputeDropBagPositions_RetrieveClusterInfo(v3, 1, &ptr) )
  {
    if ( Scr_GetPointerType(v3, 2u) != VAR_ARRAY )
    {
      v6 = "<mapBounds> must be an array";
      v7 = COM_ERR_6585;
LABEL_67:
      Scr_ParamError(v7, v3, 2u, v6);
      goto LABEL_68;
    }
    ArrayObject = BGScr_Main_GetArrayObject(v3, 2u);
    if ( GetArraySize(v3, ArrayObject) != 2 )
    {
      v7 = COM_ERR_6586;
LABEL_66:
      v6 = "<mapBounds> must be an array of 2 vectors";
      goto LABEL_67;
    }
    ptr.mapBounds.mins.v[0] = FLOAT_3_4028235e38;
    ptr.mapBounds.mins.v[1] = FLOAT_3_4028235e38;
    ptr.mapBounds.mins.v[2] = FLOAT_3_4028235e38;
    ptr.mapBounds.maxs.v[0] = FLOAT_N3_4028235e38;
    ptr.mapBounds.maxs.v[1] = FLOAT_N3_4028235e38;
    ptr.mapBounds.maxs.v[2] = FLOAT_N3_4028235e38;
    v9 = 0;
    for ( i = 0; i < 2; ++i )
    {
      ArrayVariable = GetArrayVariable(v3, ArrayObject, i);
      if ( GetValueType(v3, ArrayVariable) != VAR_VECTOR )
      {
        v7 = COM_ERR_6587;
        goto LABEL_66;
      }
      GetVariableValueAddressConst(v3, ArrayVariable);
      _XMM0 = LODWORD(ptr.mapBounds.mins.v[0]);
      __asm { vminss  xmm1, xmm0, dword ptr [rcx] }
      ptr.mapBounds.mins.v[0] = *(float *)&_XMM1;
      _XMM0 = LODWORD(ptr.mapBounds.maxs.v[0]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rcx] }
      ptr.mapBounds.maxs.v[0] = *(float *)&_XMM1;
      _XMM0 = LODWORD(ptr.mapBounds.mins.v[1]);
      __asm { vminss  xmm1, xmm0, dword ptr [rcx+4] }
      ptr.mapBounds.mins.v[1] = *(float *)&_XMM1;
      _XMM0 = LODWORD(ptr.mapBounds.maxs.v[1]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rcx+4] }
      ptr.mapBounds.maxs.v[1] = *(float *)&_XMM1;
      _XMM0 = LODWORD(ptr.mapBounds.mins.v[2]);
      __asm { vminss  xmm1, xmm0, dword ptr [rcx+8] }
      ptr.mapBounds.mins.v[2] = *(float *)&_XMM1;
      _XMM0 = LODWORD(ptr.mapBounds.maxs.v[2]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rcx+8] }
      ptr.mapBounds.maxs.v[2] = *(float *)&_XMM1;
    }
    Float = Scr_GetFloat(v3, 3u);
    ptr.minRadius = *(float *)&Float;
    ptr.minRadiusSq = *(float *)&Float * *(float *)&Float;
    ptr.minRadiusX2Sq = (float)(*(float *)&Float * *(float *)&Float) * 4.0;
    v25 = Scr_GetFloat(v3, 4u);
    ptr.maxRadius = *(float *)&v25;
    ptr.maxRadiusSq = *(float *)&v25 * *(float *)&v25;
    ptr.maxRadiusX2Sq = (float)(*(float *)&v25 * *(float *)&v25) * 4.0;
    v26 = Scr_GetFloat(v3, 5u);
    ptr.invalidateRadiusSq = *(float *)&v26 * *(float *)&v26;
    Int = Scr_GetInt(v3, 6u);
    v28 = (unsigned int)Int;
    if ( Int >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 1146, ASSERT_TYPE_ASSERT, "(spotsPerCluster < 8)", (const char *)&queryFormat, "spotsPerCluster < MAX_SLOTS_PER_CLUSTER") )
      __debugbreak();
    if ( (int)v28 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", v28, "signed", (int)v28) )
      __debugbreak();
    ptr.spotsPerCluster = v28;
    v29 = 0;
    if ( ptr.numClusterInfos )
    {
      while ( 1 )
      {
        InitDropBagClusterSlots(&ptr.clusterInfos[v29++], v28);
        if ( v29 >= ptr.numClusterInfos )
          break;
        LODWORD(v28) = ptr.spotsPerCluster;
      }
    }
    v30 = Scr_GetFloat(v3, 7u);
    ptr.spotDistanceFromCenter = *(float *)&v30;
    if ( NumParam > 8 && Scr_GetType(v3, 8u) )
    {
      ptr.usingCircleData = 1;
      Scr_GetVector(v3, 8u, &ptr.circleOrigin);
      v31 = Scr_GetFloat(v3, 9u);
      ptr.circleRadius = *(float *)&v31;
      ptr.circleRadiusSq = *(float *)&v31 * *(float *)&v31;
    }
    else
    {
      ptr.usingCircleData = 0;
      *(_OWORD *)ptr.circleOrigin.v = 0i64;
      ptr.circleRadiusSq = 0.0;
    }
    ptr.numPairPositions = 0;
    v32 = 0;
    numPlayerInfos = ptr.numPlayerInfos;
    if ( ptr.numClusterInfos )
    {
      while ( 1 )
      {
        if ( ptr.usingCircleData )
        {
          v34 = ptr.clusterInfos[v32].origin.v[0] - ptr.circleOrigin.v[0];
          if ( (float)(fsqrt((float)((float)(ptr.clusterInfos[v32].origin.v[1] - ptr.circleOrigin.v[1]) * (float)(ptr.clusterInfos[v32].origin.v[1] - ptr.circleOrigin.v[1])) + (float)(v34 * v34)) + ptr.spotDistanceFromCenter) > ptr.circleRadius )
            break;
        }
        v35 = 0;
        if ( numPlayerInfos )
        {
          while ( 1 )
          {
            v36 = ptr.playerInfos[v35].origin.v[0] - ptr.clusterInfos[v32].origin.v[0];
            v37 = ptr.playerInfos[v35].origin.v[1] - ptr.clusterInfos[v32].origin.v[1];
            if ( (float)((float)(v37 * v37) + (float)(v36 * v36)) < ptr.invalidateRadiusSq )
              break;
            if ( ++v35 >= numPlayerInfos )
              goto LABEL_35;
          }
          ptr.clusterInfos[v32].invalid = 1;
          goto LABEL_34;
        }
LABEL_35:
        if ( ++v32 >= ptr.numClusterInfos )
          goto LABEL_36;
      }
      ptr.clusterInfos[v32].invalid = 1;
LABEL_34:
      numPlayerInfos = ptr.numPlayerInfos;
      goto LABEL_35;
    }
LABEL_36:
    v38 = 0;
    if ( numPlayerInfos )
    {
      do
      {
        v39 = &ptr.playerInfos[v38++];
        v40 = v38;
        if ( v38 >= numPlayerInfos )
          break;
        do
        {
          v41 = &ptr.playerInfos[v40];
          v42 = v41->origin.v[1] - v39->origin.v[1];
          if ( (float)((float)(v42 * v42) + (float)((float)(v41->origin.v[0] - v39->origin.v[0]) * (float)(v41->origin.v[0] - v39->origin.v[0]))) < ptr.maxRadiusX2Sq )
          {
            if ( v39->potentialPartners.m_size < 0x10 )
            {
              *(_QWORD *)&v39->potentialPartners.m_data.m_buffer[8 * v39->potentialPartners.m_size++] = v41;
              numPlayerInfos = ptr.numPlayerInfos;
            }
            if ( v41->potentialPartners.m_size < 0x10 )
            {
              *(_QWORD *)&v41->potentialPartners.m_data.m_buffer[8 * v41->potentialPartners.m_size++] = v39;
              numPlayerInfos = ptr.numPlayerInfos;
            }
          }
          ++v40;
        }
        while ( v40 < numPlayerInfos );
      }
      while ( v38 < numPlayerInfos );
      v3 = scrContext;
    }
    v43 = 0;
    if ( numPlayerInfos )
    {
      do
      {
        v44 = &ptr.playerInfos[v43];
        v45 = 0;
        if ( ptr.numClusterInfos )
        {
          do
          {
            v46 = &ptr.clusterInfos[v45];
            if ( !v46->invalid )
            {
              v47 = v46->origin.v[1] - v44->origin.v[1];
              v48 = (float)(v47 * v47) + (float)((float)(v46->origin.v[0] - v44->origin.v[0]) * (float)(v46->origin.v[0] - v44->origin.v[0]));
              if ( v48 > ptr.minRadiusSq && v48 < ptr.maxRadiusSq )
              {
                if ( v44->potentialClusters.m_size < 0x20 )
                  *(_QWORD *)&v44->potentialClusters.m_data.m_buffer[8 * v44->potentialClusters.m_size++] = v46;
                if ( v46->potentialPlayers.m_size < 0x20 )
                  *(_QWORD *)&v46->potentialPlayers.m_data.m_buffer[8 * v46->potentialPlayers.m_size++] = v44;
              }
            }
            ++v45;
          }
          while ( v45 < ptr.numClusterInfos );
          numPlayerInfos = ptr.numPlayerInfos;
        }
        ++v43;
      }
      while ( v43 < numPlayerInfos );
      v3 = scrContext;
    }
    ComputeDropBagPositions_DoClusterPairsPass(&ptr);
    ComputeDropBagPositions_DoClusterStragglersPass(&ptr);
    ComputeDropBagPositions_DoNonClusterPairsPass(&ptr);
    ComputeDropBagPositions_DoPairsStragglersPass(&ptr);
    ComputeDropBagPositions_DoClusterSinglesPass(&ptr);
    ComputeDropBagPositions_DoNonClusterSinglesPass(&ptr);
    Scr_MakeArray(v3);
    if ( ptr.numPlayerInfos )
    {
      do
      {
        Scr_MakeStruct(v3);
        clusterIndex = ptr.playerInfos[v9].chosenSpot.clusterIndex;
        if ( clusterIndex == -1 )
        {
          Scr_AddUndefined(v3);
          CanonicalString = SL_GetCanonicalString("node");
          Scr_AddStructField(v3, CanonicalString);
          Scr_AddUndefined(v3);
        }
        else
        {
          Scr_AddInt(v3, clusterIndex);
          v50 = SL_GetCanonicalString("node");
          Scr_AddStructField(v3, v50);
          Scr_AddInt(v3, ptr.playerInfos[v9].chosenSpot.clusterSlot);
        }
        v52 = SL_GetCanonicalString("index");
        Scr_AddStructField(v3, v52);
        Scr_AddVector(v3, ptr.playerInfos[v9].chosenSpot.origin.v);
        v53 = SL_GetCanonicalString("origin");
        Scr_AddStructField(v3, v53);
        Scr_AddArray(v3);
        ++v9;
      }
      while ( v9 < ptr.numPlayerInfos );
    }
    v54 = Sys_Milliseconds();
    ComputeDropBagPositions_Log(&ptr, v54 - v4);
  }
LABEL_68:
  `eh vector destructor iterator'(ptr.pairPositions, 0x80ui64, 0xC8ui64, (void (__fastcall *)(void *))dropBagPairPosition_t::~dropBagPairPosition_t);
  `eh vector destructor iterator'(ptr.clusterInfos, 0x148ui64, 0x200ui64, (void (__fastcall *)(void *))dropBagClusterInfo_t::~dropBagClusterInfo_t);
  `eh vector destructor iterator'(&ptr, 0x1C0ui64, 0xC8ui64, (void (__fastcall *)(void *))dropBagPlayerInfo_t::~dropBagPlayerInfo_t);
  Sys_ProfEndNamedEvent();
}

/*
==============
InitDropBagClusterSlots
==============
*/
void InitDropBagClusterSlots(dropBagClusterInfo_t *const clusterInfo, int spotsPerCluster)
{
  int v2; 
  dropBagClusterInfo_t *v3; 
  unsigned __int64 v4; 
  int v5; 
  unsigned __int64 i; 
  unsigned __int64 m_size; 
  unsigned __int64 v8; 
  int v9; 
  unsigned __int64 v10; 
  int v11; 
  __int64 v12; 
  int v15[8]; 
  __int64 v16; 

  v2 = spotsPerCluster;
  v3 = clusterInfo;
  clusterInfo->numSlotsRemaining = spotsPerCluster;
  v4 = 0i64;
  v16 = 0i64;
  v5 = 0;
  if ( spotsPerCluster > 0 )
  {
    do
    {
      if ( v4 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
        __debugbreak();
      v15[v4] = v5;
      v4 = ++v16;
      ++v5;
    }
    while ( v5 < v2 );
    v3 = clusterInfo;
  }
  for ( i = 0i64; i < v3->slotList.m_size; ++i )
  {
    if ( i >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  v3->slotList.m_size = 0i64;
  m_size = 0i64;
  if ( v4 )
  {
    do
    {
      if ( (v4 > 0x7FFFFFFFFFFFFFFFi64 || v4 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v4, "unsigned", v4) )
        __debugbreak();
      v8 = G_irand(0, v4);
      if ( v8 >= v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v8 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      v9 = v15[v8];
      v10 = v4 - 1;
      if ( v4 - 1 >= v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v10 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      v11 = v15[v10];
      if ( v8 >= v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v8 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      v15[v8] = v11;
      v12 = v16;
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
        __debugbreak();
      v4 = v12 - 1;
      v16 = v4;
      if ( v3->slotList.m_size >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
        __debugbreak();
      *(_DWORD *)&v3->slotList.m_data.m_buffer[4 * v3->slotList.m_size++] = v9;
    }
    while ( v4 );
    m_size = v3->slotList.m_size;
    v2 = spotsPerCluster;
  }
  if ( m_size != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 184, ASSERT_TYPE_ASSERT, "(clusterInfo->slotList.size() == spotsPerCluster)", (const char *)&queryFormat, "clusterInfo->slotList.size() == spotsPerCluster") )
    __debugbreak();
}

