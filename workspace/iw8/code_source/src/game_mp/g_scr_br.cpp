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

dropBagPairPosition_t *__fastcall ComputeDropBagPosition_AddNewPairPosition(dropBagContext_t *dropBagContext, const vec3_t *spotBetween, double _XMM2_8)
{
  bool v8; 
  int v11; 
  __int64 v13; 
  int v14; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  dropBagPairPosition_t *result; 
  __int128 v41; 
  __int128 v42; 
  char v45; 

  v8 = dropBagContext->numPairPositions < 0xC7;
  __asm
  {
    vmovaps [rsp+98h+var_58], xmm8
    vmovaps [rsp+98h+var_68], xmm9
  }
  _RDI = dropBagContext;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 740, ASSERT_TYPE_ASSERT, "(dropBagContext.numPairPositions < ( sizeof( *array_counter( dropBagContext.pairPositions ) ) + 0 ) - 1)", (const char *)&queryFormat, "dropBagContext.numPairPositions < ARRAY_COUNT( dropBagContext.pairPositions ) - 1", v41, v42) )
    __debugbreak();
  if ( _RDI->spotsPerCluster < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 741, ASSERT_TYPE_ASSERT, "(dropBagContext.spotsPerCluster >= 2)", (const char *)&queryFormat, "dropBagContext.spotsPerCluster >= 2") )
    __debugbreak();
  v11 = 0;
  _RBX = &_RDI->pairPositions[(unsigned __int64)_RDI->numPairPositions++];
  _RBX->origin.v[0] = spotBetween->v[0];
  _RBX->origin.v[1] = spotBetween->v[1];
  _RBX->origin.v[2] = spotBetween->v[2];
  _RBX->numSlotsInUse = 0;
  _RBX->numSlotsRemaining = _RDI->spotsPerCluster;
  if ( _RBX->slotList.m_size >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  v13 = 3 * _RBX->slotList.m_size;
  *(_QWORD *)&_RBX->slotList.m_data.m_buffer[4 * v13] = 0i64;
  *(_DWORD *)&_RBX->slotList.m_data.m_buffer[4 * v13 + 8] = 0;
  ++_RBX->slotList.m_size;
  *(float *)&_RBX->slotList.m_data.m_buffer[4 * v13] = spotBetween->v[0];
  *(float *)&_RBX->slotList.m_data.m_buffer[4 * v13 + 4] = spotBetween->v[1];
  *(float *)&_RBX->slotList.m_data.m_buffer[4 * v13 + 8] = spotBetween->v[2];
  v14 = _RDI->spotsPerCluster - 1;
  *(double *)&_XMM0 = G_random();
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40490fdb
    vmovss  xmm0, cs:__real@40c90fdb
    vmulss  xmm8, xmm1, cs:__real@40000000
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, r14d
    vdivss  xmm9, xmm0, xmm2
  }
  if ( v14 > 0 )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovaps [rsp+98h+var_48], xmm7
    }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm0, xmm1, xmm8
      }
      *(double *)&_XMM0 = j___libm_sse2_sincosf_(v16, _RDX, v17, v18);
      __asm
      {
        vmovups xmm6, xmm0
        vshufps xmm7, xmm0, xmm0, 1
      }
      if ( _RBX->slotList.m_size >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
        __debugbreak();
      ++v11;
      _RDX = 3 * _RBX->slotList.m_size;
      *(_QWORD *)&_RBX->slotList.m_data.m_buffer[4 * _RDX] = 0i64;
      *(_DWORD *)&_RBX->slotList.m_data.m_buffer[4 * _RDX + 8] = 0;
      ++_RBX->slotList.m_size;
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+45260h]
        vmulss  xmm0, xmm7, xmm2
        vaddss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rbx+rdx*4+10h], xmm1
        vmulss  xmm2, xmm6, xmm2
        vaddss  xmm0, xmm2, dword ptr [rsi+4]
        vmovss  dword ptr [rbx+rdx*4+14h], xmm0
      }
      v16 = LODWORD(spotBetween->v[2]);
      *(_DWORD *)&_RBX->slotList.m_data.m_buffer[4 * _RDX + 8] = v16;
    }
    while ( v11 < v14 );
    __asm
    {
      vmovaps xmm7, [rsp+98h+var_48]
      vmovaps xmm6, [rsp+98h+var_38]
    }
  }
  _R11 = &v45;
  result = _RBX;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
ComputeDropBagPosition_AttemptToFindSpotBetweenTwoPlayers
==============
*/
bool ComputeDropBagPosition_AttemptToFindSpotBetweenTwoPlayers(dropBagContext_t *dropBagContext, dropBagPlayerInfo_t *playerInfo1, dropBagPlayerInfo_t *playerInfo2, vec3_t *outPos)
{
  bool result; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovss  xmm7, dword ptr [rcx+45244h]
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovss  xmm9, dword ptr [rdx]
    vmovaps xmmword ptr [rax-68h], xmm10
    vsubss  xmm5, xmm0, xmm9
    vmovss  xmm0, dword ptr [r8+4]
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0E8h+var_88], xmm12
    vmovss  xmm12, dword ptr [rdx+4]
    vsubss  xmm4, xmm0, xmm12
    vmulss  xmm1, xmm5, xmm5
    vmovaps [rsp+0E8h+var_98], xmm13
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vmovaps [rsp+0E8h+var_A8], xmm14
    vmovaps [rsp+0E8h+var_B8], xmm15
    vmovss  xmm15, cs:__real@80000000
    vsqrtss xmm3, xmm0, xmm0
    vmulss  xmm6, xmm3, cs:__real@3f000000
    vcomiss xmm6, dword ptr [rcx+45250h]
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm10, xmm5, xmm1
    vmulss  xmm11, xmm4, xmm1
  }
  result = 0;
  __asm { vmovaps xmm14, [rsp+0E8h+var_A8] }
  _R11 = &v50;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+0E8h+var_B8]
  }
  return result;
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
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *p_potentialPlayers; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *v10; 
  unsigned __int64 m_size; 
  char *v13; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *v14; 
  __int64 v18; 
  unsigned __int64 numSlotsInUse; 
  unsigned __int64 v22; 
  ntl::random_access_iterator_tag v23; 
  dropBagClusterInfo_t **v24; 
  dropBagClusterInfo_t *first[512]; 
  unsigned __int64 v27; 

  v2 = 0i64;
  v3 = 0i64;
  v27 = 0i64;
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
        v3 = v27;
      }
      first[v3] = v6;
      v3 = ++v27;
    }
  }
  ntl::sort<dropBagClusterInfo_t * *,ClusterPotentialPlayersPredicate>(first, &first[v3], (ClusterPotentialPlayersPredicate)v23.ntl::input_iterator_tag, v23);
  v7 = first;
  v24 = first;
  if ( first != &first[v27] )
  {
    do
    {
      _RDI = *v7;
      if ( (*v7)->invalid )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 517, ASSERT_TYPE_ASSERT, "(!clusterInfo->invalid)", (const char *)&queryFormat, "!clusterInfo->invalid") )
          __debugbreak();
        v7 = v24;
      }
      if ( _RDI->numSlotsRemaining >= 2 )
      {
        p_potentialPlayers = &_RDI->potentialPlayers;
        v10 = &_RDI->potentialPlayers;
        m_size = _RDI->potentialPlayers.m_size;
        if ( &_RDI->potentialPlayers != (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)&_RDI->potentialPlayers + 8 * m_size) )
        {
          do
          {
            _R15 = *(_QWORD *)v10->m_data.m_buffer;
            if ( !*(_BYTE *)(*(_QWORD *)v10->m_data.m_buffer + 12i64) )
            {
              v13 = &v10->m_data.m_buffer[8];
              v14 = (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)p_potentialPlayers + 8 * m_size);
              if ( &v10->m_data.m_buffer[8] != (char *)v14 )
              {
                while ( 1 )
                {
                  _RBX = *(_QWORD *)v13;
                  if ( !*(_BYTE *)(*(_QWORD *)v13 + 12i64) )
                    break;
                  v13 += 8;
                  if ( v13 == (char *)v14 )
                    goto LABEL_40;
                }
                *(_BYTE *)(_R15 + 12) = 1;
                *(float *)(_R15 + 36) = _RDI->origin.v[0];
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+4]
                  vmovss  dword ptr [r15+28h], xmm0
                  vmovss  xmm1, dword ptr [rdi+8]
                  vmovss  dword ptr [r15+2Ch], xmm1
                }
                v18 = ((char *)_RDI - (char *)dropBagContext - 89608) / 328;
                if ( (unsigned __int64)(v18 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v18, "signed", v18) )
                  __debugbreak();
                *(_DWORD *)(_RBX + 16) = v18;
                numSlotsInUse = _RDI->numSlotsInUse;
                if ( numSlotsInUse >= _RDI->slotList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( numSlotsInUse >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                  __debugbreak();
                *(_DWORD *)(_RBX + 20) = *(_DWORD *)&_RDI->slotList.m_data.m_buffer[4 * numSlotsInUse];
                ++_RDI->numSlotsInUse;
                --_RDI->numSlotsRemaining;
                *(_BYTE *)(_RBX + 12) = 1;
                *(float *)(_RBX + 36) = _RDI->origin.v[0];
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+4]
                  vmovss  dword ptr [rbx+28h], xmm0
                  vmovss  xmm1, dword ptr [rdi+8]
                  vmovss  dword ptr [rbx+2Ch], xmm1
                }
                if ( (unsigned __int64)(v18 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v18, "signed", v18) )
                  __debugbreak();
                *(_DWORD *)(_RBX + 16) = v18;
                v22 = _RDI->numSlotsInUse;
                if ( v22 >= _RDI->slotList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v22 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
                  __debugbreak();
                *(_DWORD *)(_RBX + 20) = *(_DWORD *)&_RDI->slotList.m_data.m_buffer[4 * v22];
                ++_RDI->numSlotsInUse;
                --_RDI->numSlotsRemaining;
                *(_DWORD *)(_R15 + 32) = 1;
                *(_DWORD *)(_RBX + 32) = 1;
              }
LABEL_40:
              if ( _RDI->numSlotsRemaining < 2 )
                break;
            }
            v10 = (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)v10 + 8);
            m_size = _RDI->potentialPlayers.m_size;
          }
          while ( v10 != (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)p_potentialPlayers + 8 * m_size) );
          v7 = v24;
        }
      }
      v24 = ++v7;
    }
    while ( v7 != &first[v27] );
    v2 = 0i64;
  }
  if ( v27 )
  {
    do
    {
      if ( v2 >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v2;
    }
    while ( v2 < v27 );
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
  unsigned __int64 j; 
  char *m_buffer; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v12; 
  unsigned __int64 v13; 
  ntl::fixed_vector<dropBagClusterInfo_t *,32,0> v15; 

  v1 = dropBagContext;
  v2 = 0i64;
  v15.m_size = 0i64;
  for ( i = 0; i < v1->numPlayerInfos; ++i )
  {
    _RBP = &v1->playerInfos[i];
    if ( !_RBP->hasChosenSpot )
    {
      for ( j = 0i64; j < v2; ++j )
      {
        if ( j >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
      }
      v2 = 0i64;
      v15.m_size = 0i64;
      m_buffer = _RBP->potentialClusters.m_data.m_buffer;
      if ( &_RBP->potentialClusters != (ntl::fixed_vector<dropBagClusterInfo_t *,32,0> *)((char *)&_RBP->potentialClusters + 8 * _RBP->potentialClusters.m_size) )
      {
        do
        {
          v7 = *(_QWORD *)m_buffer;
          if ( *(int *)(*(_QWORD *)m_buffer + 324i64) > 0 )
          {
            if ( v2 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
              __debugbreak();
            *(_QWORD *)&v15.m_data.m_buffer[8 * v2] = v7;
            v2 = ++v15.m_size;
          }
          m_buffer += 8;
        }
        while ( m_buffer != (char *)&_RBP->potentialClusters + 8 * _RBP->potentialClusters.m_size );
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
          _RDI = *(_QWORD *)&v15.m_data.m_buffer[8 * v8];
          _RBP->hasChosenSpot = 1;
          _RBP->chosenSpot.origin.v[0] = *(float *)_RDI;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+4]
            vmovss  dword ptr [rbp+28h], xmm0
            vmovss  xmm1, dword ptr [rdi+8]
            vmovss  dword ptr [rbp+2Ch], xmm1
          }
          v12 = (_RDI - (__int64)dropBagContext - 89608) / 328;
          if ( (unsigned __int64)(v12 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v12, "signed", (_RDI - (__int64)dropBagContext - 89608) / 328) )
            __debugbreak();
          _RBP->chosenSpot.clusterIndex = v12;
          v13 = *(int *)(_RDI + 320);
          if ( v13 >= *(_QWORD *)(_RDI + 312) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v13 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          _RBP->chosenSpot.clusterSlot = *(_DWORD *)(_RDI + 4 * v13 + 280);
          ++*(_DWORD *)(_RDI + 320);
          --*(_DWORD *)(_RDI + 324);
          _RBP->chosenSpot.stageChoice = 5;
        }
      }
    }
  }
  ntl::fixed_vector<dropBagClusterInfo_t *,32,0>::~fixed_vector<dropBagClusterInfo_t *,32,0>(&v15);
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
  unsigned __int64 v6; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *p_potentialPlayers; 
  __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v11; 
  __int64 v12; 
  unsigned __int64 m_size; 
  __int64 v16; 
  unsigned __int64 numSlotsInUse; 
  unsigned int i; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> v19; 

  v2 = 0i64;
  v19.m_size = 0i64;
  v3 = 0;
  for ( i = 0; v3 < dropBagContext->numClusterInfos; i = v3 )
  {
    v4 = v3;
    _R15 = &dropBagContext->clusterInfos[v4];
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
      v19.m_size = 0i64;
      p_potentialPlayers = &_R15->potentialPlayers;
      if ( &_R15->potentialPlayers != (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)&_R15->potentialPlayers + 8 * _R15->potentialPlayers.m_size) )
      {
        do
        {
          v8 = *(_QWORD *)p_potentialPlayers->m_data.m_buffer;
          if ( !*(_BYTE *)(*(_QWORD *)p_potentialPlayers->m_data.m_buffer + 12i64) )
          {
            if ( v2 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
              __debugbreak();
            *(_QWORD *)&v19.m_data.m_buffer[8 * v2] = v8;
            v2 = ++v19.m_size;
          }
          p_potentialPlayers = (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)p_potentialPlayers + 8);
        }
        while ( p_potentialPlayers != (ntl::fixed_vector<dropBagPlayerInfo_t *,32,0> *)((char *)&_R15->potentialPlayers + 8 * _R15->potentialPlayers.m_size) );
        v3 = i;
        if ( v2 )
        {
          do
          {
            if ( _R15->numSlotsRemaining <= 0 )
              break;
            if ( (v2 > 0x7FFFFFFFFFFFFFFFi64 || v2 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v2, "unsigned", v2) )
              __debugbreak();
            v9 = G_irand(0, v2);
            if ( v9 >= v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v9 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            _RBP = *(_QWORD *)&v19.m_data.m_buffer[8 * v9];
            v11 = v2 - 1;
            if ( v2 - 1 >= v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v11 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v12 = *(_QWORD *)&v19.m_data.m_buffer[8 * v11];
            if ( v9 >= v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v9 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            *(_QWORD *)&v19.m_data.m_buffer[8 * v9] = v12;
            m_size = v19.m_size;
            if ( !v19.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
              __debugbreak();
            v2 = m_size - 1;
            v19.m_size = v2;
            *(_BYTE *)(_RBP + 12) = 1;
            *(float *)(_RBP + 36) = _R15->origin.v[0];
            __asm
            {
              vmovss  xmm0, dword ptr [r15+4]
              vmovss  dword ptr [rbp+28h], xmm0
              vmovss  xmm1, dword ptr [r15+8]
              vmovss  dword ptr [rbp+2Ch], xmm1
            }
            v16 = ((char *)_R15 - (char *)dropBagContext - 89608) / 328;
            if ( (unsigned __int64)(v16 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v16, "signed", ((char *)_R15 - (char *)dropBagContext - 89608) / 328) )
              __debugbreak();
            *(_DWORD *)(_RBP + 16) = v16;
            numSlotsInUse = _R15->numSlotsInUse;
            if ( numSlotsInUse >= _R15->slotList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( numSlotsInUse >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            *(_DWORD *)(_RBP + 20) = *(_DWORD *)&_R15->slotList.m_data.m_buffer[4 * numSlotsInUse];
            ++_R15->numSlotsInUse;
            --_R15->numSlotsRemaining;
            *(_DWORD *)(_RBP + 32) = 2;
          }
          while ( v2 );
          v3 = i;
        }
      }
    }
    ++v3;
  }
  ntl::fixed_vector<dropBagPlayerInfo_t *,32,0>::~fixed_vector<dropBagPlayerInfo_t *,32,0>(&v19);
}

/*
==============
ComputeDropBagPositions_DoNonClusterPairsPass
==============
*/
void ComputeDropBagPositions_DoNonClusterPairsPass(dropBagContext_t *dropBagContext, __int64 a2, double a3)
{
  dropBagContext_t *v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  dropBagPlayerInfo_t *v6; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *p_potentialPartners; 
  unsigned __int64 v8; 
  unsigned __int64 m_size; 
  __int64 v10; 
  unsigned __int64 v11; 
  _QWORD *v12; 
  unsigned __int64 v13; 
  _QWORD *v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  dropBagPlayerInfo_t **v18; 
  dropBagPlayerInfo_t *v19; 
  unsigned __int64 v20; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  dropBagPlayerInfo_t *v24; 
  unsigned __int64 v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  dropBagPairPosition_t *v28; 
  int *p_numSlotsRemaining; 
  ntl::fixed_vector<vec3_t,8,0> *p_slotList; 
  int *p_numSlotsInUse; 
  unsigned __int64 numSlotsInUse; 
  __int64 v33; 
  unsigned __int64 v34; 
  ntl::random_access_iterator_tag v35; 
  unsigned int v36; 
  dropBagPlayerInfo_t **i; 
  dropBagPlayerInfo_t *v39; 
  vec3_t outPos; 
  ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> playerInfo2; 
  dropBagPlayerInfo_t *first[200]; 
  unsigned __int64 v43; 

  v3 = dropBagContext;
  v4 = 0i64;
  v43 = 0i64;
  v5 = 0;
  v36 = 0;
  if ( dropBagContext->numPlayerInfos )
  {
    do
    {
      v6 = &v3->playerInfos[v5];
      if ( !v6->hasChosenSpot )
      {
        p_potentialPartners = &v6->potentialPartners;
        v8 = (unsigned __int64)&v6->potentialPartners;
        m_size = v6->potentialPartners.m_size;
        if ( &v6->potentialPartners != (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)&v6->potentialPartners + 8 * m_size) )
        {
          do
          {
            if ( *(_BYTE *)(*(_QWORD *)v8 + 12i64) )
            {
              if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
                __debugbreak();
              if ( (v8 < (unsigned __int64)p_potentialPartners || v8 > (unsigned __int64)p_potentialPartners + 8 * v6->potentialPartners.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
                __debugbreak();
              v10 = v8 - (_QWORD)p_potentialPartners;
              if ( (((_BYTE)v8 - (_BYTE)p_potentialPartners) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
                __debugbreak();
              if ( (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)v8 == (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)p_potentialPartners + 8 * v6->potentialPartners.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
                __debugbreak();
              v8 = (unsigned __int64)&v6->potentialPartners;
              v11 = v6->potentialPartners.m_size;
              if ( v11 )
                v8 = (unsigned __int64)p_potentialPartners + 8 * (v10 >> 3);
              v12 = (_QWORD *)v8;
              v13 = (unsigned __int64)p_potentialPartners + 8 * v11;
              v14 = (_QWORD *)(v8 + 8);
              if ( v8 + 8 == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                __debugbreak();
              if ( v13 == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                __debugbreak();
              if ( v13 < (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v15 = 0i64;
              v16 = (v13 - (unsigned __int64)v14 + 7) >> 3;
              if ( (unsigned __int64)v14 > v13 )
                v16 = 0i64;
              if ( v16 )
              {
                do
                {
                  *v12++ = *v14++;
                  ++v15;
                }
                while ( v15 < v16 );
              }
              m_size = --v6->potentialPartners.m_size;
            }
            else
            {
              v8 += 8i64;
            }
          }
          while ( (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)v8 != (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)p_potentialPartners + 8 * m_size) );
          v5 = v36;
          v3 = dropBagContext;
        }
        if ( v43 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
          __debugbreak();
        first[v43++] = v6;
      }
      v36 = ++v5;
    }
    while ( v5 < v3->numPlayerInfos );
    v4 = 0i64;
  }
  ntl::sort<dropBagPlayerInfo_t * *,PlayerPotentialPartnersPredicate>(first, &first[v43], (PlayerPotentialPartnersPredicate)v35.ntl::input_iterator_tag, v35);
  v17 = 0i64;
  playerInfo2.m_size = 0i64;
  v18 = first;
  for ( i = first; v18 != &first[v43]; i = v18 )
  {
    v19 = *v18;
    v39 = *v18;
    if ( !(*v18)->hasChosenSpot )
    {
      v20 = 0i64;
      if ( v17 )
      {
        do
        {
          if ( v20 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ++v20;
        }
        while ( v20 < v17 );
        v18 = i;
      }
      v17 = 0i64;
      playerInfo2.m_size = 0i64;
      v21 = &v19->potentialPartners;
      if ( &v19->potentialPartners != (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)&v19->potentialPartners + 8 * v19->potentialPartners.m_size) )
      {
        do
        {
          v22 = *(_QWORD *)v21->m_data.m_buffer;
          if ( !*(_BYTE *)(*(_QWORD *)v21->m_data.m_buffer + 12i64) )
          {
            if ( v17 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
              __debugbreak();
            *(_QWORD *)&playerInfo2.m_data.m_buffer[8 * v17] = v22;
            v17 = ++playerInfo2.m_size;
          }
          v21 = (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)v21 + 8);
        }
        while ( v21 != (ntl::fixed_vector<dropBagPlayerInfo_t *,16,0> *)((char *)&v19->potentialPartners + 8 * v19->potentialPartners.m_size) );
        if ( v17 )
        {
          while ( 1 )
          {
            if ( (v17 > 0x7FFFFFFFFFFFFFFFi64 || v17 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v17, "unsigned", v17) )
              __debugbreak();
            v23 = G_irand(0, v17);
            if ( v23 >= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v23 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v24 = *(dropBagPlayerInfo_t **)&playerInfo2.m_data.m_buffer[8 * v23];
            v25 = v17 - 1;
            if ( v17 - 1 >= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v25 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            v26 = *(_QWORD *)&playerInfo2.m_data.m_buffer[8 * v25];
            if ( v23 >= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v23 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
              __debugbreak();
            *(_QWORD *)&playerInfo2.m_data.m_buffer[8 * v23] = v26;
            v27 = playerInfo2.m_size;
            if ( !playerInfo2.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
              __debugbreak();
            v17 = v27 - 1;
            playerInfo2.m_size = v17;
            if ( ComputeDropBagPosition_AttemptToFindSpotBetweenTwoPlayers(dropBagContext, v19, v24, &outPos) )
              break;
            if ( !v17 )
              goto LABEL_112;
          }
          v28 = ComputeDropBagPosition_AddNewPairPosition(dropBagContext, &outPos, a3);
          if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 841, ASSERT_TYPE_ASSERT, "(newPairPos)", (const char *)&queryFormat, "newPairPos") )
            __debugbreak();
          p_numSlotsRemaining = &v28->numSlotsRemaining;
          if ( v28->numSlotsRemaining < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 842, ASSERT_TYPE_ASSERT, "(newPairPos->numSlotsRemaining >= 2)", (const char *)&queryFormat, "newPairPos->numSlotsRemaining >= 2") )
            __debugbreak();
          v19->hasChosenSpot = 1;
          p_slotList = &v28->slotList;
          p_numSlotsInUse = &v28->numSlotsInUse;
          numSlotsInUse = v28->numSlotsInUse;
          if ( numSlotsInUse >= v28->slotList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( numSlotsInUse >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ComputeDropBagPositions_ValidatePosition(dropBagContext, (const vec3_t *)p_slotList + numSlotsInUse, &v39->chosenSpot.origin);
          v33 = ((char *)v28 - (char *)dropBagContext - 257552) >> 7;
          if ( (unsigned __int64)(v33 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v33, "signed", v33) )
            __debugbreak();
          v39->chosenSpot.pairIndex = v33;
          v39->chosenSpot.pairSlot = (*p_numSlotsInUse)++;
          --*p_numSlotsRemaining;
          v24->hasChosenSpot = 1;
          v34 = *p_numSlotsInUse;
          if ( v34 >= p_slotList->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v34 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ComputeDropBagPositions_ValidatePosition(dropBagContext, (const vec3_t *)p_slotList + v34, &v24->chosenSpot.origin);
          if ( (unsigned __int64)(v33 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v33, "signed", v33) )
            __debugbreak();
          v24->chosenSpot.pairIndex = v33;
          v24->chosenSpot.pairSlot = (*p_numSlotsInUse)++;
          --*p_numSlotsRemaining;
          v39->chosenSpot.stageChoice = 3;
          v24->chosenSpot.stageChoice = 3;
        }
LABEL_112:
        v18 = i;
        v4 = 0i64;
      }
    }
    ++v18;
  }
  ntl::fixed_vector<dropBagPlayerInfo_t *,16,0>::~fixed_vector<dropBagPlayerInfo_t *,16,0>(&playerInfo2);
  if ( v43 )
  {
    do
    {
      if ( v4 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v4;
    }
    while ( v4 < v43 );
  }
}

/*
==============
ComputeDropBagPositions_DoNonClusterSinglesPass
==============
*/
void ComputeDropBagPositions_DoNonClusterSinglesPass(dropBagContext_t *dropBagContext)
{
  unsigned int v13; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  bool v50; 
  vec3_t inPos; 
  vec2_t vec; 
  void *retaddr; 

  _R11 = &retaddr;
  v13 = 0;
  _RDI = dropBagContext;
  if ( dropBagContext->numPlayerInfos )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps xmmword ptr [r11-68h], xmm11
      vmovss  xmm11, cs:__real@40490fdb
      vmovaps [rsp+0E8h+var_88], xmm13
      vmovss  xmm13, cs:__real@40000000
      vmovaps [rsp+0E8h+var_98], xmm14
      vmovss  xmm14, cs:__real@80000000
      vmovaps [rsp+0E8h+var_A8], xmm15
      vmovss  xmm15, cs:__real@3c8efa35
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
      vmovaps xmmword ptr [r11-78h], xmm12
    }
    do
    {
      _RBX = &_RDI->playerInfos[v13];
      if ( !_RBX->hasChosenSpot )
      {
        if ( _RDI->usingCircleData )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+45230h]
            vsubss  xmm4, xmm0, dword ptr [rbx]
            vmovss  xmm1, dword ptr [rdi+45234h]
            vsubss  xmm5, xmm1, dword ptr [rbx+4]
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm2, xmm5, xmm5
            vaddss  xmm1, xmm2, xmm0
            vsqrtss xmm3, xmm1, xmm1
            vcmpless xmm0, xmm3, xmm14
            vblendvps xmm0, xmm3, xmm10, xmm0
            vdivss  xmm1, xmm10, xmm0
            vmulss  xmm0, xmm1, xmm4
            vmulss  xmm1, xmm1, xmm5
            vmovss  dword ptr [rsp+0E8h+vec+4], xmm1
            vmovss  dword ptr [rsp+0E8h+vec], xmm0
          }
          *(double *)&_XMM0 = vectosignedyaw(&vec);
          __asm { vmulss  xmm6, xmm0, xmm15 }
          *(double *)&_XMM0 = G_random();
          __asm
          {
            vmulss  xmm1, xmm0, xmm11
            vmulss  xmm2, xmm1, cs:__real@3f000000
            vaddss  xmm3, xmm2, xmm6
            vsubss  xmm7, xmm3, cs:__real@3f490fdb
          }
        }
        else
        {
          *(double *)&_XMM0 = G_random();
          __asm
          {
            vmulss  xmm1, xmm0, xmm11
            vmulss  xmm7, xmm1, xmm13
          }
        }
        *(double *)&_XMM0 = G_random();
        __asm
        {
          vsubss  xmm1, xmm10, xmm0
          vmulss  xmm2, xmm1, dword ptr [rdi+45244h]
          vmulss  xmm0, xmm0, dword ptr [rdi+45250h]
          vaddss  xmm6, xmm2, xmm0
          vmovaps xmm2, xmm7
          vxorps  xmm1, xmm1, xmm1
          vmovss  xmm0, xmm1, xmm2
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v47, v46, v48, v49);
        v50 = !_RDI->usingCircleData;
        __asm
        {
          vmovss  xmm5, dword ptr [rbx]
          vmovss  xmm12, dword ptr [rbx+4]
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm1, xmm1, xmm6
          vaddss  xmm2, xmm1, xmm5
          vmovss  xmm1, dword ptr [rbx+8]
          vmulss  xmm0, xmm0, xmm6
          vaddss  xmm3, xmm0, xmm12
          vmovss  dword ptr [rsp+0E8h+inPos+8], xmm1
          vmovss  dword ptr [rsp+0E8h+inPos], xmm2
          vmovss  dword ptr [rsp+0E8h+inPos+4], xmm3
        }
        if ( !v50 )
        {
          __asm
          {
            vmovss  xmm8, dword ptr [rdi+45234h]
            vmovss  xmm7, dword ptr [rdi+45230h]
            vmovss  xmm4, dword ptr [rdi+45260h]
            vmovss  xmm9, dword ptr [rdi+4523Ch]
            vsubss  xmm0, xmm3, xmm8
            vmulss  xmm1, xmm0, xmm0
            vsubss  xmm2, xmm2, xmm7
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vaddss  xmm3, xmm2, xmm4
            vcomiss xmm3, xmm9
            vsubss  xmm5, xmm5, xmm7
            vmulss  xmm0, xmm5, xmm5
            vsubss  xmm6, xmm12, xmm8
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vcmpless xmm0, xmm2, xmm14
            vblendvps xmm0, xmm2, xmm10, xmm0
            vdivss  xmm3, xmm10, xmm0
            vmulss  xmm0, xmm3, xmm5
            vsubss  xmm4, xmm9, xmm4
            vmulss  xmm1, xmm0, xmm4
            vaddss  xmm2, xmm1, xmm7
            vmulss  xmm0, xmm3, xmm6
            vmulss  xmm1, xmm0, xmm4
            vmovss  dword ptr [rsp+0E8h+inPos], xmm2
            vaddss  xmm2, xmm1, xmm8
            vmovss  dword ptr [rsp+0E8h+inPos+4], xmm2
          }
        }
        _RBX->hasChosenSpot = 1;
        ComputeDropBagPositions_ValidatePosition(_RDI, &inPos, &_RBX->chosenSpot.origin);
        _RBX->chosenSpot.stageChoice = 6;
      }
      ++v13;
    }
    while ( v13 < _RDI->numPlayerInfos );
    __asm
    {
      vmovaps xmm15, [rsp+0E8h+var_A8]
      vmovaps xmm14, [rsp+0E8h+var_98]
      vmovaps xmm13, [rsp+0E8h+var_88]
      vmovaps xmm12, [rsp+0E8h+var_78]
      vmovaps xmm11, [rsp+0E8h+var_68]
      vmovaps xmm10, [rsp+0E8h+var_58]
      vmovaps xmm9, [rsp+0E8h+var_48]
      vmovaps xmm8, [rsp+0E8h+var_38]
      vmovaps xmm7, [rsp+0E8h+var_28]
      vmovaps xmm6, [rsp+0E8h+var_18]
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
  unsigned int v5; 
  unsigned int i; 
  void *retaddr; 

  _RAX = &retaddr;
  v5 = 0;
  _RBX = dropBagContext;
  if ( dropBagContext->numPairPositions )
  {
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovaps xmmword ptr [rax-48h], xmm7
      vmovaps xmmword ptr [rax-58h], xmm8
      vxorps  xmm8, xmm8, xmm8
    }
    do
    {
      _RDI = (unsigned __int64)v5 << 7;
      if ( *(int *)((char *)&dropBagContext->pairPositions[0].numSlotsRemaining + _RDI) > 0 )
      {
        if ( dropBagContext->usingCircleData )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+rbx+3EE10h]
            vmovss  xmm1, dword ptr [rdi+rbx+3EE14h]
            vsubss  xmm2, xmm1, dword ptr [rbx+45234h]
            vsubss  xmm4, xmm0, dword ptr [rbx+45230h]
            vmulss  xmm3, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, dword ptr [rbx+45240h]
          }
        }
        for ( i = 0; i < dropBagContext->numPlayerInfos; ++i )
        {
          _RSI = &dropBagContext->playerInfos[i];
          if ( !_RSI->hasChosenSpot )
          {
            __asm
            {
              vmovss  xmm5, dword ptr [rsi]
              vmovss  xmm6, dword ptr [rdi+rbx+3EE10h]
              vmovss  xmm4, dword ptr [rsi+4]
              vmovss  xmm7, dword ptr [rdi+rbx+3EE14h]
              vsubss  xmm1, xmm5, xmm6
              vsubss  xmm0, xmm4, xmm7
              vmulss  xmm2, xmm0, xmm0
              vmulss  xmm1, xmm1, xmm1
              vaddss  xmm3, xmm2, xmm1
              vcomiss xmm3, dword ptr [rbx+45248h]
            }
            if ( _RSI->hasChosenSpot )
              __asm { vcomiss xmm3, dword ptr [rbx+45254h] }
          }
        }
      }
      ++v5;
    }
    while ( v5 < dropBagContext->numPairPositions );
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
  }
}

/*
==============
ComputeDropBagPositions_IsPointWithRadiusOutsideCircle
==============
*/

bool __fastcall ComputeDropBagPositions_IsPointWithRadiusOutsideCircle(const dropBagContext_t *dropBagContext, const vec3_t *inPos, double radius)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+18h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( dropBagContext->usingCircleData )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vmovss  xmm1, dword ptr [rdx+4]
      vsubss  xmm3, xmm1, dword ptr [rcx+45234h]
      vsubss  xmm5, xmm0, dword ptr [rcx+45230h]
      vmulss  xmm4, xmm3, xmm3
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm1, xmm4, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vaddss  xmm3, xmm2, xmm6
      vcomiss xmm3, dword ptr [rcx+4523Ch]
    }
    result = dropBagContext->usingCircleData;
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
  }
  else
  {
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
    return 0;
  }
  return result;
}

/*
==============
ComputeDropBagPositions_Log
==============
*/
void ComputeDropBagPositions_Log(dropBagContext_t *dropBagContext, int elapsedMS)
{
  unsigned int v17; 
  unsigned int i; 
  unsigned int j; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  __int64 v71; 
  double v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  double v76; 
  double v77; 
  double v78; 
  __int64 v79; 

  _RBX = dropBagContext;
  Com_Printf(24, "\nComputeDropBag finished in %dms\n", (unsigned int)elapsedMS);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+45228h]
    vmovss  xmm1, dword ptr [rbx+45224h]
    vmovss  xmm4, dword ptr [rbx+45220h]
    vmovss  xmm3, dword ptr [rbx+45218h]
    vmovss  xmm2, dword ptr [rbx+45214h]
    vmovss  xmm5, dword ptr [rbx+4521Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+78h+var_40], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+78h+var_48], xmm1
    vcvtss2sd xmm4, xmm4, xmm4
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm5, xmm5, xmm5
    vmovsd  [rsp+78h+var_50], xmm4
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+78h+var_58], xmm5
  }
  Com_Printf(24, "ComputeDropBag map bounds (%.2f,%.2f,%.2f) (%.2f,%.2f,%.2f)\n", *(double *)&_XMM2, *(double *)&_XMM3, v60, v65, v70, v72);
  Com_Printf(24, "ComputeDropBag clusters[%d]\n", _RBX->numClusterInfos);
  v17 = 0;
  for ( i = 0; i < _RBX->numClusterInfos; ++i )
  {
    _RCX = 328i64 * i;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx+15E10h]
      vmovss  xmm3, dword ptr [rcx+rbx+15E08h]
      vmovss  xmm1, dword ptr [rcx+rbx+15E0Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+78h+var_50], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+78h+var_58], xmm1
    }
    Com_Printf(24, "ComputeDropBag cluster[%d] (%.2f,%.2f,%.2f)\n", i, *(double *)&_XMM3, v61, v66);
  }
  Com_Printf(24, "ComputeDropBag pairs[%d]\n", _RBX->numPairPositions);
  for ( j = 0; j < _RBX->numPairPositions; ++j )
  {
    _RAX = (unsigned __int64)j << 7;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+3EE18h]
      vmovss  xmm3, dword ptr [rax+rbx+3EE10h]
      vmovss  xmm1, dword ptr [rax+rbx+3EE14h]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+78h+var_50], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+78h+var_58], xmm1
    }
    Com_Printf(24, "ComputeDropBag pair[%d] (%.2f,%.2f,%.2f)\n", j, *(double *)&_XMM3, v62, v67);
  }
  Com_Printf(24, "ComputeDropBag players[%d]\n", _RBX->numPlayerInfos);
  if ( _RBX->numPlayerInfos )
  {
    do
    {
      _RCX = (_DWORD *)_RBX->playerInfos[v17].origin.v;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+2Ch]
        vmovss  xmm1, dword ptr [rcx+28h]
        vmovss  xmm2, dword ptr [rcx+24h]
        vmovss  xmm4, dword ptr [rcx+8]
        vmovss  xmm3, dword ptr [rcx]
        vmovss  xmm5, dword ptr [rcx+4]
      }
      LODWORD(v79) = _RCX[8];
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+78h+var_18], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+78h+var_20], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+78h+var_28], xmm2
      }
      LODWORD(v75) = _RCX[7];
      LODWORD(v74) = _RCX[6];
      LODWORD(v73) = _RCX[5];
      LODWORD(v71) = _RCX[4];
      __asm
      {
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+78h+var_50], xmm4
        vmovq   r9, xmm3
        vmovsd  [rsp+78h+var_58], xmm5
      }
      Com_Printf(24, "ComputeDropBag player[%d] (%.2f,%.2f,%.2f) clusterIndex=%d clusterSlot=%d pairIndex=%d pairSlot=%d (%.2f,%.2f,%.2f) stageChoice=%d\n", v17++, *(double *)&_XMM3, v63, v68, v71, v73, v74, v75, v76, v77, v78, v79);
    }
    while ( v17 < _RBX->numPlayerInfos );
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4523Ch]
    vmovss  xmm3, dword ptr [rbx+45234h]
    vmovss  xmm2, dword ptr [rbx+45230h]
    vmovss  xmm1, dword ptr [rbx+45238h]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+78h+var_50], xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+78h+var_58], xmm1
  }
  Com_Printf(24, "ComputeDropBag circle (%.2f,%.2f,%.2f) radius=%.2f\n", *(double *)&_XMM2, *(double *)&_XMM3, v64, v69);
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
  vec3_t targetPos; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+45220h]; max
    vmovss  xmm1, dword ptr [rcx+45214h]; min
    vmovss  xmm0, dword ptr [rdx]; val
  }
  _RSI = outPos;
  _RDI = inPos;
  _RBX = dropBagContext;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+45224h]; max
    vmovss  xmm1, dword ptr [rbx+45218h]; min
    vmovss  dword ptr [rsp+48h+targetPos], xmm0
    vmovss  xmm0, dword ptr [rdi+4]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+48h+targetPos+4], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+48h+targetPos+8], xmm0
  }
  if ( Nav_MeshLoaded() && Nav_GetClosestVerticalPosDefault(&targetPos, _RSI, NULL) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  xmm4, dword ptr [rsp+48h+targetPos]
      vmovss  xmm5, dword ptr [rsp+48h+targetPos+4]
      vsubss  xmm3, xmm0, xmm4
      vsubss  xmm0, xmm1, xmm5
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@49742400
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+48h+targetPos+4]
      vmovss  xmm4, dword ptr [rsp+48h+targetPos]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+targetPos+8]
    vmovss  dword ptr [rsi+8], xmm0
    vmovss  dword ptr [rsi], xmm4
    vmovss  dword ptr [rsi+4], xmm5
  }
}

/*
==============
GScr_ComputeDropBagPositions
==============
*/

void __fastcall GScr_ComputeDropBagPositions(scrContext_t *scrContext, __int64 a2, double _XMM2_8)
{
  signed __int64 v3; 
  void *v5; 
  scrContext_t *v6; 
  int v7; 
  unsigned int NumParam; 
  const char *v9; 
  ComErrorCode v10; 
  unsigned int ArrayObject; 
  unsigned int v14; 
  unsigned int i; 
  unsigned int ArrayVariable; 
  int Int; 
  __int64 v35; 
  unsigned int v36; 
  unsigned int v40; 
  unsigned int numPlayerInfos; 
  unsigned int v51; 
  unsigned int v61; 
  dropBagPlayerInfo_t *v62; 
  unsigned int v63; 
  unsigned int v71; 
  unsigned int v72; 
  __int64 v80; 
  int clusterIndex; 
  unsigned int v82; 
  unsigned int CanonicalString; 
  unsigned int v84; 
  unsigned int v85; 
  int v86; 
  dropBagContext_t ptr; 
  char v92; 

  v5 = alloca(v3);
  __asm { vmovaps [rsp+45320h+var_30], xmm6 }
  v6 = scrContext;
  Sys_ProfBeginNamedEvent(0xFF808080, "GScr_ComputeDropBagPositions");
  v7 = Sys_Milliseconds();
  `eh vector constructor iterator'(&ptr, 0x1C0ui64, 0xC8ui64, (void (__fastcall *)(void *))dropBagPlayerInfo_t::dropBagPlayerInfo_t, (void (__fastcall *)(void *))dropBagPlayerInfo_t::~dropBagPlayerInfo_t);
  `eh vector constructor iterator'(ptr.clusterInfos, 0x148ui64, 0x200ui64, (void (__fastcall *)(void *))dropBagClusterInfo_t::dropBagClusterInfo_t, (void (__fastcall *)(void *))dropBagClusterInfo_t::~dropBagClusterInfo_t);
  `eh vector constructor iterator'(ptr.pairPositions, 0x80ui64, 0xC8ui64, (void (__fastcall *)(void *))dropBagPairPosition_t::dropBagPairPosition_t, (void (__fastcall *)(void *))dropBagPairPosition_t::~dropBagPairPosition_t);
  NumParam = Scr_GetNumParam(v6);
  if ( ((NumParam - 8) & 0xFFFFFFFD) != 0 )
  {
    Scr_Error(COM_ERR_6588, v6, "Usage: ComputeDropBagPositions( <playerList>, <clusterList>, <mapBounds>, <minDist>, <maxDist>, <invalidateRadius>, <spotsPerCluster>, <spotDistanceFromCenter>, [circleOrigin], [circleRadius] );");
    goto LABEL_64;
  }
  if ( ComputeDropBagPositions_RetrievePlayerOrigins(v6, 0, &ptr) && ComputeDropBagPositions_RetrieveClusterInfo(v6, 1, &ptr) )
  {
    if ( Scr_GetPointerType(v6, 2u) != VAR_ARRAY )
    {
      v9 = "<mapBounds> must be an array";
      v10 = COM_ERR_6585;
LABEL_63:
      Scr_ParamError(v10, v6, 2u, v9);
      goto LABEL_64;
    }
    ArrayObject = BGScr_Main_GetArrayObject(v6, 2u);
    if ( GetArraySize(v6, ArrayObject) != 2 )
    {
      v10 = COM_ERR_6586;
LABEL_62:
      v9 = "<mapBounds> must be an array of 2 vectors";
      goto LABEL_63;
    }
    __asm
    {
      vmovss  xmm0, cs:__real@7f7fffff
      vmovss  [rbp+45220h+var_9C], xmm0
      vmovss  [rbp+45220h+var_98], xmm0
      vmovss  [rbp+45220h+var_94], xmm0
      vmovss  xmm1, cs:__real@ff7fffff
      vmovss  [rbp+45220h+var_90], xmm1
      vmovss  [rbp+45220h+var_8C], xmm1
      vmovss  [rbp+45220h+var_88], xmm1
    }
    v14 = 0;
    for ( i = 0; i < 2; ++i )
    {
      ArrayVariable = GetArrayVariable(v6, ArrayObject, i);
      if ( GetValueType(v6, ArrayVariable) != VAR_VECTOR )
      {
        v10 = COM_ERR_6587;
        goto LABEL_62;
      }
      GetVariableValueAddressConst(v6, ArrayVariable);
      __asm
      {
        vmovss  xmm0, [rbp+45220h+var_9C]
        vminss  xmm1, xmm0, dword ptr [rcx]
        vmovss  [rbp+45220h+var_9C], xmm1
        vmovss  xmm0, [rbp+45220h+var_90]
        vmaxss  xmm1, xmm0, dword ptr [rcx]
        vmovss  [rbp+45220h+var_90], xmm1
        vmovss  xmm0, [rbp+45220h+var_98]
        vminss  xmm1, xmm0, dword ptr [rcx+4]
        vmovss  [rbp+45220h+var_98], xmm1
        vmovss  xmm0, [rbp+45220h+var_8C]
        vmaxss  xmm1, xmm0, dword ptr [rcx+4]
        vmovss  [rbp+45220h+var_8C], xmm1
        vmovss  xmm0, [rbp+45220h+var_94]
        vminss  xmm1, xmm0, dword ptr [rcx+8]
        vmovss  [rbp+45220h+var_94], xmm1
        vmovss  xmm0, [rbp+45220h+var_88]
        vmaxss  xmm1, xmm0, dword ptr [rcx+8]
        vmovss  [rbp+45220h+var_88], xmm1
      }
    }
    *(double *)&_XMM0 = Scr_GetFloat(v6, 3u);
    __asm
    {
      vmovss  [rbp+45220h+var_6C], xmm0
      vmulss  xmm1, xmm0, xmm0
      vmovss  [rbp+45220h+var_68], xmm1
      vmulss  xmm0, xmm1, cs:__real@40800000
      vmovss  [rbp+45220h+var_64], xmm0
    }
    *(double *)&_XMM0 = Scr_GetFloat(v6, 4u);
    __asm
    {
      vmovss  [rbp+45220h+var_60], xmm0
      vmulss  xmm1, xmm0, xmm0
      vmovss  [rbp+45220h+var_5C], xmm1
      vmulss  xmm0, xmm1, cs:__real@40800000
      vmovss  [rbp+45220h+var_58], xmm0
    }
    *(double *)&_XMM0 = Scr_GetFloat(v6, 5u);
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vmovss  [rbp+45220h+var_54], xmm1
    }
    Int = Scr_GetInt(v6, 6u);
    v35 = (unsigned int)Int;
    if ( Int >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_br.cpp", 1146, ASSERT_TYPE_ASSERT, "(spotsPerCluster < 8)", (const char *)&queryFormat, "spotsPerCluster < MAX_SLOTS_PER_CLUSTER") )
      __debugbreak();
    if ( (int)v35 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", v35, "signed", (int)v35) )
      __debugbreak();
    ptr.spotsPerCluster = v35;
    v36 = 0;
    if ( ptr.numClusterInfos )
    {
      while ( 1 )
      {
        InitDropBagClusterSlots(&ptr.clusterInfos[v36++], v35);
        if ( v36 >= ptr.numClusterInfos )
          break;
        LODWORD(v35) = ptr.spotsPerCluster;
      }
    }
    *(double *)&_XMM0 = Scr_GetFloat(v6, 7u);
    __asm { vmovss  [rbp+45220h+var_50], xmm0 }
    if ( NumParam > 8 && Scr_GetType(v6, 8u) )
    {
      ptr.usingCircleData = 1;
      Scr_GetVector(v6, 8u, &ptr.circleOrigin);
      *(double *)&_XMM0 = Scr_GetFloat(v6, 9u);
      __asm
      {
        vmovss  dword ptr [rbp+45220h+var_80+0Ch], xmm0
        vmulss  xmm0, xmm0, xmm0
        vmovss  [rbp+45220h+var_70], xmm0
      }
    }
    else
    {
      ptr.usingCircleData = 0;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups [rbp+45220h+var_80], xmm0
        vxorps  xmm1, xmm1, xmm1
        vmovss  [rbp+45220h+var_70], xmm1
      }
    }
    ptr.numPairPositions = 0;
    v40 = 0;
    numPlayerInfos = ptr.numPlayerInfos;
    if ( ptr.numClusterInfos )
    {
      while ( 1 )
      {
        _R9 = 328i64 * v40;
        if ( ptr.usingCircleData )
          break;
        v51 = 0;
        if ( numPlayerInfos )
        {
          __asm
          {
            vmovss  xmm5, dword ptr [rbp+r9+45220h+clusterInfo.origin]
            vmovss  xmm6, dword ptr [rbp+r9+45220h+clusterInfo.origin+4]
          }
          while ( 1 )
          {
            _RCX = 448i64 * v51;
            __asm
            {
              vmovss  xmm0, [rsp+rcx+45320h+ptr]
              vsubss  xmm4, xmm0, xmm5
              vmovss  xmm1, [rsp+rcx+45320h+var_452AC]
              vsubss  xmm2, xmm1, xmm6
              vmulss  xmm3, xmm2, xmm2
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm1, xmm3, xmm0
              vcomiss xmm1, [rbp+45220h+var_54]
            }
            if ( !is_mul_ok(0x1C0ui64, v51) )
              break;
            if ( ++v51 >= numPlayerInfos )
              goto LABEL_35;
          }
          ptr.clusterInfos[v40].invalid = 1;
          goto LABEL_34;
        }
LABEL_35:
        if ( ++v40 >= ptr.numClusterInfos )
          goto LABEL_36;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+r9+45220h+clusterInfo.origin]
        vsubss  xmm4, xmm0, dword ptr [rbp+45220h+var_80]
        vmovss  xmm1, dword ptr [rbp+r9+45220h+clusterInfo.origin+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+45220h+var_80+4]
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm3, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vaddss  xmm3, xmm2, [rbp+45220h+var_50]
        vcomiss xmm3, dword ptr [rbp+45220h+var_80+0Ch]
      }
      ptr.clusterInfos[v40].invalid = 1;
LABEL_34:
      numPlayerInfos = ptr.numPlayerInfos;
      goto LABEL_35;
    }
LABEL_36:
    v61 = 0;
    if ( numPlayerInfos )
    {
      do
      {
        v62 = &ptr.playerInfos[v61++];
        v63 = v61;
        if ( v61 >= numPlayerInfos )
          break;
        do
        {
          _RBX = &ptr.playerInfos[v63];
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vsubss  xmm4, xmm0, dword ptr [rdi]
            vmovss  xmm1, dword ptr [rbx+4]
            vsubss  xmm2, xmm1, dword ptr [rdi+4]
            vmulss  xmm3, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, [rbp+45220h+var_58]
          }
          if ( !is_mul_ok(0x1C0ui64, v63) )
          {
            if ( v62->potentialPartners.m_size < 0x10 )
            {
              *(_QWORD *)&v62->potentialPartners.m_data.m_buffer[8 * v62->potentialPartners.m_size++] = _RBX;
              numPlayerInfos = ptr.numPlayerInfos;
            }
            if ( _RBX->potentialPartners.m_size < 0x10 )
            {
              *(_QWORD *)&_RBX->potentialPartners.m_data.m_buffer[8 * _RBX->potentialPartners.m_size++] = v62;
              numPlayerInfos = ptr.numPlayerInfos;
            }
          }
          ++v63;
        }
        while ( v63 < numPlayerInfos );
      }
      while ( v61 < numPlayerInfos );
      v6 = scrContext;
    }
    v71 = 0;
    if ( numPlayerInfos )
    {
      do
      {
        v72 = 0;
        if ( ptr.numClusterInfos )
        {
          do
          {
            _RBX = &ptr.clusterInfos[v72];
            if ( !_RBX->invalid )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx]
                vsubss  xmm4, xmm0, dword ptr [rdi]
                vmovss  xmm1, dword ptr [rbx+4]
                vsubss  xmm2, xmm1, dword ptr [rdi+4]
                vmulss  xmm3, xmm2, xmm2
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm1, xmm3, xmm0
                vcomiss xmm1, [rbp+45220h+var_68]
              }
              if ( _RBX->invalid )
                __asm { vcomiss xmm1, [rbp+45220h+var_5C] }
            }
            ++v72;
          }
          while ( v72 < ptr.numClusterInfos );
          numPlayerInfos = ptr.numPlayerInfos;
        }
        ++v71;
      }
      while ( v71 < numPlayerInfos );
      v6 = scrContext;
    }
    ComputeDropBagPositions_DoClusterPairsPass(&ptr);
    ComputeDropBagPositions_DoClusterStragglersPass(&ptr);
    ComputeDropBagPositions_DoNonClusterPairsPass(&ptr, v80, _XMM2_8);
    ComputeDropBagPositions_DoPairsStragglersPass(&ptr);
    ComputeDropBagPositions_DoClusterSinglesPass(&ptr);
    ComputeDropBagPositions_DoNonClusterSinglesPass(&ptr);
    Scr_MakeArray(v6);
    if ( ptr.numPlayerInfos )
    {
      do
      {
        Scr_MakeStruct(v6);
        clusterIndex = ptr.playerInfos[v14].chosenSpot.clusterIndex;
        if ( clusterIndex == -1 )
        {
          Scr_AddUndefined(v6);
          CanonicalString = SL_GetCanonicalString("node");
          Scr_AddStructField(v6, CanonicalString);
          Scr_AddUndefined(v6);
        }
        else
        {
          Scr_AddInt(v6, clusterIndex);
          v82 = SL_GetCanonicalString("node");
          Scr_AddStructField(v6, v82);
          Scr_AddInt(v6, ptr.playerInfos[v14].chosenSpot.clusterSlot);
        }
        v84 = SL_GetCanonicalString("index");
        Scr_AddStructField(v6, v84);
        Scr_AddVector(v6, ptr.playerInfos[v14].chosenSpot.origin.v);
        v85 = SL_GetCanonicalString("origin");
        Scr_AddStructField(v6, v85);
        Scr_AddArray(v6);
        ++v14;
      }
      while ( v14 < ptr.numPlayerInfos );
    }
    v86 = Sys_Milliseconds();
    ComputeDropBagPositions_Log(&ptr, v86 - v7);
  }
LABEL_64:
  `eh vector destructor iterator'(ptr.pairPositions, 0x80ui64, 0xC8ui64, (void (__fastcall *)(void *))dropBagPairPosition_t::~dropBagPairPosition_t);
  `eh vector destructor iterator'(ptr.clusterInfos, 0x148ui64, 0x200ui64, (void (__fastcall *)(void *))dropBagClusterInfo_t::~dropBagClusterInfo_t);
  `eh vector destructor iterator'(&ptr, 0x1C0ui64, 0xC8ui64, (void (__fastcall *)(void *))dropBagPlayerInfo_t::~dropBagPlayerInfo_t);
  Sys_ProfEndNamedEvent();
  _R11 = &v92;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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

