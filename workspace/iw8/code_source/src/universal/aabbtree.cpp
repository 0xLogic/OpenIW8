/*
==============
BuildAabbTree
==============
*/

int __fastcall BuildAabbTree(const GenericAabbTreeOptions *options)
{
  return ?BuildAabbTree@@YAHPEBUGenericAabbTreeOptions@@@Z(options);
}

/*
==============
AllocAabbTreeNode
==============
*/
GenericAabbTree *AllocAabbTreeNode(const GenericAabbTreeOptions *options)
{
  int v2; 

  v2 = aabbTreeCount;
  if ( aabbTreeCount == options->treeNodeLimit )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441607A0);
    v2 = aabbTreeCount;
  }
  aabbTreeCount = v2 + 1;
  return &options->treeNodePool[v2];
}

/*
==============
BuildAabbTree
==============
*/
__int64 BuildAabbTree(const GenericAabbTreeOptions *options)
{
  unsigned __int64 itemCount; 
  int *v3; 
  float *v4; 
  float *v5; 
  unsigned __int64 v6; 
  float *v7; 
  unsigned __int64 v8; 
  int v9; 
  int *v10; 
  GenericAabbTree *treeNodePool; 
  char *v12; 
  int v13; 
  int *v14; 
  char *v15; 
  int v16; 
  __int64 v17; 
  int *v18; 
  __int64 v19; 
  __int64 v20; 
  Bounds *bounds; 
  __int64 result; 
  int remap[64]; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  itemCount = options->itemCount;
  if ( itemCount > 0x40 )
  {
    v3 = (int *)operator new[](saturated_mul(itemCount, 4ui64));
    v5 = (float *)operator new[](saturated_mul(options->itemCount, 4ui64));
    v6 = options->itemCount;
    sortedMins = v5;
    v7 = (float *)operator new[](saturated_mul(v6, 4ui64));
    v8 = options->itemCount;
    sortedMaxs = v7;
    v4 = (float *)operator new[](saturated_mul(v8, 4ui64));
    LODWORD(itemCount) = options->itemCount;
  }
  else
  {
    sortedMins = (float *)&v24;
    v3 = remap;
    sortedMaxs = (float *)&v25;
    v4 = (float *)&v26;
  }
  sortedCoplanar = v4;
  v9 = 0;
  if ( (int)itemCount > 0 )
  {
    v10 = v3;
    do
      *v10++ = v9++;
    while ( v9 < options->itemCount );
  }
  treeNodePool = options->treeNodePool;
  aabbTreeCount = 1;
  treeNodePool->firstItem = 0;
  options->treeNodePool->itemCount = options->itemCount;
  BuildAabbTree_r(options->treeNodePool, options, v3);
  v12 = (char *)operator new[](options->itemCount * options->itemSize);
  memcpy_0(v12, options->items, options->itemCount * options->itemSize);
  v13 = 0;
  if ( options->itemCount > 0 )
  {
    v14 = v3;
    do
    {
      memcpy_0((char *)options->items + v13 * options->itemSize, &v12[options->itemSize * *v14], options->itemSize);
      ++v13;
      ++v14;
    }
    while ( v13 < options->itemCount );
  }
  operator delete[](v12);
  if ( options->maintainValidBounds )
  {
    v15 = (char *)operator new[](saturated_mul(options->itemCount, 0x18ui64));
    memcpy_0(v15, options->bounds, 24i64 * options->itemCount);
    v16 = 0;
    if ( options->itemCount > 0 )
    {
      v17 = 0i64;
      v18 = v3;
      do
      {
        v19 = *v18++;
        ++v16;
        ++v17;
        v20 = 3 * v19;
        bounds = options->bounds;
        *(_OWORD *)bounds[v17 - 1].midPoint.v = *(_OWORD *)&v15[8 * v20];
        *(double *)&bounds[v17 - 1].halfSize.y = *(double *)&v15[8 * v20 + 16];
      }
      while ( v16 < options->itemCount );
    }
    operator delete[](v15);
  }
  if ( v3 != remap )
  {
    operator delete[](v3);
    operator delete[](sortedMins);
    operator delete[](sortedMaxs);
    operator delete[](sortedCoplanar);
  }
  result = (unsigned int)aabbTreeCount;
  sortedMins = NULL;
  sortedMaxs = NULL;
  sortedCoplanar = NULL;
  return result;
}

/*
==============
BuildAabbTree_r
==============
*/
void BuildAabbTree_r(GenericAabbTree *tree, const GenericAabbTreeOptions *options, int *remap)
{
  int v6; 
  int itemCount; 
  GenericAabbTree *v8; 
  int v9; 
  int v10; 
  int v11; 
  GenericAabbTree *v12; 
  int midStart; 
  int lastStart; 

  if ( !tree->itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 398, ASSERT_TYPE_ASSERT, "(tree->itemCount)", (const char *)&queryFormat, "tree->itemCount") )
    __debugbreak();
  v6 = 0;
  itemCount = tree->itemCount;
  *(_QWORD *)&tree->firstChild = (unsigned int)aabbTreeCount;
  if ( itemCount > options->maxItemsPerLeaf && SplitAabbTree(itemCount, options, remap, &midStart, &lastStart) )
  {
    v8 = &options->treeNodePool[aabbTreeCount];
    if ( tree->firstChild != aabbTreeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 410, ASSERT_TYPE_SANITY, "( tree->firstChild == aabbTreeCount )", (const char *)&queryFormat, "tree->firstChild == aabbTreeCount") )
      __debugbreak();
    v9 = midStart;
    CreateAabbSubTrees(tree, options, remap, 0, midStart);
    v10 = lastStart;
    if ( v9 < lastStart )
      CreateAabbSubTrees(tree, options, remap, v9, lastStart - v9);
    CreateAabbSubTrees(tree, options, remap, v10, tree->itemCount - v10);
    v11 = aabbTreeCount - tree->firstChild;
    tree->childCount = v11;
    if ( v11 > 0 )
    {
      v12 = v8;
      do
      {
        BuildAabbTree_r(&v8[v6++], options, &remap[v12->firstItem - (__int64)tree->firstItem]);
        ++v12;
      }
      while ( v6 < tree->childCount );
    }
  }
}

/*
==============
CreateAabbSubTrees
==============
*/
void CreateAabbSubTrees(GenericAabbTree *tree, const GenericAabbTreeOptions *options, int *remap, int firstIndex, int count)
{
  int v5; 
  GenericAabbTree *v9; 
  int v10; 
  int v11; 
  GenericAabbTree *v12; 
  GenericAabbTree *v13; 
  int v14; 
  int firstItem; 
  GenericAabbTree *v16; 
  int lastStart; 

  v5 = count;
  if ( count > options->maxItemsPerLeaf && SplitAabbTree(count, options, &remap[firstIndex], &count, &lastStart) )
  {
    v9 = AllocAabbTreeNode(options);
    v10 = count;
    v11 = lastStart;
    v9->firstItem = firstIndex + tree->firstItem;
    v9->itemCount = v10;
    if ( v10 < v11 )
    {
      v12 = AllocAabbTreeNode(options);
      v12->firstItem = firstIndex + v10 + tree->firstItem;
      v12->itemCount = v11 - v10;
    }
    v13 = AllocAabbTreeNode(options);
    v13->firstItem = firstIndex + v11 + tree->firstItem;
    v13->itemCount = v5 - v11;
  }
  else
  {
    v14 = aabbTreeCount;
    if ( aabbTreeCount == options->treeNodeLimit )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441607A0);
      v14 = aabbTreeCount;
    }
    firstItem = tree->firstItem;
    aabbTreeCount = v14 + 1;
    v16 = &options->treeNodePool[v14];
    v16->firstItem = firstIndex + firstItem;
    v16->itemCount = v5;
  }
}

/*
==============
GoesBeforeSplit
==============
*/
_BOOL8 GoesBeforeSplit(const Bounds *bounds, int splitAxis, float splitDist)
{
  double v5; 

  v5 = Bounds_Max(bounds, splitAxis);
  return *(float *)&v5 < splitDist || *(float *)&v5 == splitDist && *vec3_t::operator[](&bounds->halfSize, splitAxis) != 0.0;
}

/*
==============
PickAabbSplitPlane
==============
*/
_BOOL8 PickAabbSplitPlane(const Bounds *bounds, int *remap, int count, int *chosenAxis, float *chosenDist)
{
  int *v5; 
  __int64 v6; 
  const Bounds *v7; 
  __m128 v8; 
  __m128 v9; 
  __int64 v10; 
  __int64 v11; 
  __m128 v13; 
  __m128 v15; 
  __m128 v19; 
  __m128 v23; 
  int v32; 
  __int64 v34; 
  bool v35; 
  PickAabbSplitPlane_SortFloats::__l2::PickAabbSplitPlane_FloatLess v37; 
  PickAabbSplitPlane_SortFloats::__l2::PickAabbSplitPlane_FloatLess v38; 
  PickAabbSplitPlane_SortFloats::__l2::PickAabbSplitPlane_FloatLess v39; 
  unsigned int v40; 
  unsigned int v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned int v45; 
  const Bounds *v46; 
  const Bounds *v47; 
  const Bounds *v48; 
  float v49; 
  float v50; 
  float *v51; 
  __int64 v52; 
  int v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  float v66; 
  float v67; 
  float *v68; 
  int v70; 
  int v72; 
  float *v73; 
  int v74; 
  signed int v76; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  PickAabbSplitPlane_SortFloats::__l2::PickAabbSplitPlane_FloatLess v85; 
  unsigned int v86; 
  int v87; 
  int v88; 
  __int64 v89; 
  __int64 v90; 
  unsigned int v91; 
  signed int v93; 
  __int64 v94; 
  __int64 v97; 
  __m128 v99; 
  __int64 v100; 
  __int64 v101; 
  __m128 v102; 
  __int64 v103; 
  __m128 v104; 
  __int64 v105; 
  __m128 v106; 

  v5 = remap;
  v6 = count;
  v7 = bounds;
  v97 = count;
  if ( count > 0i64 )
  {
    v8.m128_i32[0] = HIDWORD(_xmm_ff7fffff000000000000000000000000);
    v9.m128_i32[0] = _xmm_ff7fffff000000000000000000000000;
    v10 = 0i64;
    do
    {
      v11 = v5[v10++];
      v106.m128_i32[3] = 0;
      v99.m128_i32[3] = 0;
      v104.m128_i32[3] = 0;
      v102.m128_i32[3] = 0;
      v13 = v106;
      v13.m128_f32[0] = v9.m128_f32[0];
      _XMM6 = v13;
      v15 = v99;
      v15.m128_f32[0] = v8.m128_f32[0];
      _XMM3 = v15;
      __asm
      {
        vinsertps xmm6, xmm6, xmm4, 10h
        vinsertps xmm6, xmm6, xmm5, 20h ; ' '
      }
      v19 = v104;
      v19.m128_f32[0] = bounds[v11].midPoint.v[0];
      _XMM5 = v19;
      __asm
      {
        vinsertps xmm5, xmm5, dword ptr [r15+rcx*8+4], 10h
        vinsertps xmm5, xmm5, dword ptr [r15+rcx*8+8], 20h ; ' '
      }
      v23 = v102;
      v23.m128_f32[0] = bounds[v11].halfSize.v[0];
      _XMM4 = v23;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [r15+rcx*8+10h], 10h
        vinsertps xmm4, xmm4, dword ptr [r15+rcx*8+14h], 20h ; ' '
        vinsertps xmm3, xmm3, xmm1, 10h
        vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      }
      _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
      _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
      _mm128_sub_ps(_XMM6, _XMM3);
      __asm { vminps  xmm2, xmm0, xmm2 }
      v99 = _XMM3;
      _mm128_add_ps(_XMM6, _XMM3);
      __asm { vmaxps  xmm0, xmm1, xmm3 }
      v9 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM2), g_oneHalf.v);
      v8 = _mm128_sub_ps(v9, _XMM2);
      v104 = _XMM5;
      v102 = _XMM4;
      _mm_shuffle_ps(v9, v9, 85);
      _mm_shuffle_ps(v9, v9, 170);
      _mm_shuffle_ps(v8, v8, 85);
      _mm_shuffle_ps(v8, v8, 170);
      v106 = _XMM6;
    }
    while ( v10 < count );
  }
  v32 = 0;
  _XMM11 = 0i64;
  v34 = 0i64;
  v35 = 1;
  do
  {
    if ( !v35 )
    {
      LODWORD(v82) = 3;
      LODWORD(v79) = v32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v79, v82) )
        __debugbreak();
    }
    __asm { vroundss xmm0, xmm11, xmm3, 2 }
    v106.m128_i32[v34] = (int)*(float *)&_XMM0;
    ++v32;
    ++v34;
    v35 = (unsigned int)v32 < 3;
  }
  while ( v32 < 3 );
  v37 = v85;
  v38 = v85;
  v39 = v85;
  v91 = 0;
  v103 = 0i64;
  v93 = 0x80000000;
  do
  {
    v86 = 0;
    v40 = 0;
    v41 = 0;
    if ( v6 > 0 )
    {
      v42 = 0i64;
      v43 = v103;
      v44 = 0i64;
      v89 = 0i64;
      v45 = 0;
      v100 = v6;
      do
      {
        v46 = &v7[*v5];
        if ( v91 >= 3 )
        {
          LODWORD(v82) = 3;
          LODWORD(v79) = v91;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v79, v82) )
            __debugbreak();
          v41 = v86;
          v44 = v89;
        }
        v47 = &v7[*v5];
        if ( v46->halfSize.v[v43] == 0.0 )
        {
          if ( v91 >= 3 )
          {
            LODWORD(v82) = 3;
            LODWORD(v79) = v91;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v79, v82) )
              __debugbreak();
            v41 = v86;
            v44 = v89;
          }
          v86 = ++v41;
          *(float *)((char *)sortedCoplanar + v44) = v47->midPoint.v[v43];
          v44 += 4i64;
          v89 = v44;
        }
        else
        {
          if ( v91 >= 3 )
          {
            LODWORD(v82) = 3;
            LODWORD(v79) = v91;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v79, v82) )
              __debugbreak();
            LODWORD(v83) = 3;
            LODWORD(v80) = v91;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v80, v83) )
              __debugbreak();
          }
          sortedMins[v42] = v47->midPoint.v[v43] - v47->halfSize.v[v43];
          v48 = &bounds[*v5];
          if ( v91 >= 3 )
          {
            LODWORD(v82) = 3;
            LODWORD(v79) = v91;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v79, v82) )
              __debugbreak();
            LODWORD(v84) = 3;
            LODWORD(v81) = v91;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v81, v84) )
              __debugbreak();
          }
          v49 = v48->midPoint.v[v103] + v48->halfSize.v[v103];
          sortedMaxs[v42] = v49;
          v50 = sortedMins[v42];
          if ( v50 >= v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 81, ASSERT_TYPE_ASSERT, "( sortedMins[minMaxCount] ) < ( sortedMaxs[minMaxCount] )", "%s < %s\n\t%g, %g", "sortedMins[minMaxCount]", "sortedMaxs[minMaxCount]", v50, v49) )
            __debugbreak();
          v44 = v89;
          ++v45;
          v41 = v86;
          ++v42;
          v43 = v103;
        }
        v7 = bounds;
        ++v5;
        --v100;
      }
      while ( v100 );
      v37 = v85;
      v38 = v85;
      v40 = v45;
      v39 = v85;
    }
    v51 = sortedMins;
    std::_Sort_unchecked_float____PickAabbSplitPlane_SortFloats_::_2_::PickAabbSplitPlane_FloatLess_(sortedMins, &sortedMins[v40], v40, v37);
    std::_Sort_unchecked_float____PickAabbSplitPlane_SortFloats_::_2_::PickAabbSplitPlane_FloatLess_(sortedMaxs, &sortedMaxs[v40], v40, v38);
    v52 = (int)v86;
    std::_Sort_unchecked_float____PickAabbSplitPlane_SortFloats_::_2_::PickAabbSplitPlane_FloatLess_(sortedCoplanar, &sortedCoplanar[v86], v86, v39);
    v87 = 0;
    v53 = 0;
    v54 = 0i64;
    v88 = 0;
    v55 = 0i64;
    v94 = 0i64;
    v56 = 0i64;
    v105 = 0i64;
    v90 = 0i64;
    if ( v40 )
    {
      if ( (_DWORD)v52 )
      {
        _XMM0 = *(unsigned int *)v51;
        __asm { vminss  xmm7, xmm0, dword ptr [r14] }
      }
      else
      {
        *(float *)&_XMM7 = *sortedMins;
      }
    }
    else if ( (_DWORD)v52 )
    {
      *(float *)&_XMM7 = *sortedCoplanar;
    }
    else
    {
      *(float *)&_XMM7 = FLOAT_3_4028235e38;
    }
    v59 = v52;
    v101 = v52;
    if ( *(float *)&_XMM7 < 3.4028235e38 )
    {
      v60 = count;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      while ( 1 )
      {
        v63 += v62;
        v65 = v60 - v62;
        v62 = 0;
        v66 = *(float *)&_XMM7;
        v67 = *(float *)&_XMM7;
        *(float *)&_XMM7 = FLOAT_3_4028235e38;
        if ( v54 < (int)v40 )
        {
          if ( (int)v40 - v54 >= 4 )
          {
            v68 = &sortedMins[v54 + 2];
            while ( v66 == *(v68 - 2) )
            {
              if ( v66 != *(v68 - 1) )
              {
                v94 = ++v54;
                ++v62;
                goto LABEL_60;
              }
              if ( v66 != *v68 )
              {
                v54 += 2i64;
                v94 = v54;
                v62 += 2;
                goto LABEL_60;
              }
              if ( v66 != v68[1] )
              {
                v54 += 3i64;
                v94 = v54;
                v62 += 3;
                goto LABEL_60;
              }
              v54 += 4i64;
              v62 += 4;
              v94 = v54;
              v68 += 4;
              if ( v54 >= (int)v40 - 3i64 )
                goto LABEL_55;
            }
            goto LABEL_60;
          }
LABEL_55:
          if ( v54 < (int)v40 )
          {
            while ( v66 == sortedMins[v54] )
            {
              ++v54;
              ++v62;
              v94 = v54;
              if ( v54 >= (int)v40 )
                goto LABEL_62;
            }
LABEL_60:
            if ( v54 < (int)v40 )
            {
              _XMM0 = LODWORD(sortedMins[v54]);
              __asm { vminss  xmm7, xmm0, xmm9 }
            }
          }
        }
LABEL_62:
        if ( v55 < (int)v40 )
        {
          v70 = v87;
          while ( 1 )
          {
            _XMM0 = LODWORD(sortedMaxs[v55]);
            if ( *(float *)&_XMM0 != v66 )
              break;
            if ( v63 <= 0 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 133, ASSERT_TYPE_ASSERT, "(sideSplitCount > 0)", (const char *)&queryFormat, "sideSplitCount > 0") )
                __debugbreak();
              v70 = v87;
              v55 = v105;
            }
            ++v70;
            ++v55;
            --v63;
            v87 = v70;
            v105 = v55;
            if ( v55 >= (int)v40 )
            {
              v64 = v70;
              goto LABEL_75;
            }
          }
          v64 = v87;
          if ( v55 < (int)v40 )
            __asm { vminss  xmm7, xmm0, xmm7 }
LABEL_75:
          v56 = v90;
          v59 = v101;
          v53 = v88;
        }
        v64 += v61;
        v72 = v53 - v61;
        v87 = v64;
        v61 = 0;
        if ( v56 < v59 )
        {
          if ( v59 - v56 < 4 )
          {
LABEL_84:
            if ( v56 < v59 )
            {
              do
              {
                if ( v66 != sortedCoplanar[v56] )
                  break;
                ++v61;
                ++v56;
              }
              while ( v56 < v59 );
LABEL_87:
              v90 = v56;
            }
          }
          else
          {
            v73 = &sortedCoplanar[v56 + 2];
            while ( v66 == *(v73 - 2) )
            {
              if ( v66 != *(v73 - 1) )
              {
                ++v56;
                ++v61;
                goto LABEL_87;
              }
              if ( v66 != *v73 )
              {
                v56 += 2i64;
                v61 += 2;
                goto LABEL_87;
              }
              if ( v66 != v73[1] )
              {
                v56 += 3i64;
                v61 += 3;
                goto LABEL_87;
              }
              v56 += 4i64;
              v61 += 4;
              v90 = v56;
              v73 += 4;
              if ( v56 >= v59 - 3 )
                goto LABEL_84;
            }
          }
        }
        v74 = v61 + v72;
        v60 = v65 - v61;
        v88 = v74;
        if ( v56 < v59 )
        {
          _XMM0 = LODWORD(sortedCoplanar[v56]);
          __asm { vminss  xmm7, xmm0, xmm7 }
        }
        if ( v64 + v60 + v74 + v63 != count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 158, ASSERT_TYPE_ASSERT, "(sideFrontCount + sideBackCount + sideSplitCount + sideOnCount == count)", (const char *)&queryFormat, "sideFrontCount + sideBackCount + sideSplitCount + sideOnCount == count") )
          __debugbreak();
        if ( v64 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 159, ASSERT_TYPE_ASSERT, "(sideFrontCount >= 0)", (const char *)&queryFormat, "sideFrontCount >= 0") )
          __debugbreak();
        if ( v60 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 160, ASSERT_TYPE_ASSERT, "(sideBackCount >= 0)", (const char *)&queryFormat, "sideBackCount >= 0") )
          __debugbreak();
        if ( v63 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 161, ASSERT_TYPE_ASSERT, "(sideSplitCount >= 0)", (const char *)&queryFormat, "sideSplitCount >= 0") )
          __debugbreak();
        v53 = v88;
        if ( v88 < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 162, ASSERT_TYPE_ASSERT, "(sideOnCount >= 0)", (const char *)&queryFormat, "sideOnCount >= 0") )
            __debugbreak();
          v53 = v88;
        }
        if ( v64 > 1 && v60 > 1 )
        {
          v76 = count + v106.m128_i32[v103] - 4 * v63 - v53 - abs32(v64 - v60);
          if ( !v53 && !v63 && !v62 )
          {
            __asm { vroundss xmm0, xmm11, xmm2, 1 }
            v76 += (int)*(float *)&_XMM0;
          }
          if ( v76 > v93 )
          {
            v93 = v76;
            *chosenAxis = v91;
            if ( v53 || v63 || v62 )
              *chosenDist = v66;
            else
              *chosenDist = (float)(v67 + *(float *)&_XMM7) * 0.5;
          }
        }
        v56 = v90;
        v54 = v94;
        v55 = v105;
        v59 = v101;
        if ( *(float *)&_XMM7 >= 3.4028235e38 )
        {
          v37 = v85;
          v38 = v85;
          v39 = v85;
          break;
        }
      }
    }
    ++v103;
    v7 = bounds;
    v6 = v97;
    v5 = remap;
    ++v91;
  }
  while ( (int)v91 < 3 );
  return v93 != 0x80000000;
}

/*
==============
SplitAabbTree
==============
*/
__int64 SplitAabbTree(int count, const GenericAabbTreeOptions *options, int *remap, int *midStart, int *lastStart)
{
  Bounds *v5; 
  const GenericAabbTreeOptions *v7; 
  int v8; 
  int v9; 
  float v10; 
  __int64 v11; 
  __m128 v12; 
  float v13; 
  __m128 v14; 
  __m128 v15; 
  float v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  const Bounds *v20; 
  double v21; 
  __int64 v22; 
  __m128 v24; 
  __m128 v28; 
  __m128 v32; 
  __m128 v36; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  const Bounds *v48; 
  double v49; 
  __int64 v50; 
  __m128 v52; 
  __m128 v56; 
  __m128 v61; 
  __m128 v64; 
  __m128 v71; 
  __m128 v72; 
  __m128 v73; 
  const Bounds *v74; 
  double v75; 
  __int64 v76; 
  float v77; 
  const Bounds *v78; 
  double v79; 
  int v80; 
  int v81; 
  int v82; 
  int minItemsPerLeaf; 
  __int64 v84; 
  __int64 v85; 
  double v86; 
  __int128 v87; 
  double v88; 
  __int128 v89; 
  bool v90; 
  float v91; 
  __int64 v92; 
  __int64 v93; 
  __int64 v94; 
  __m128 v96; 
  __m128 v100; 
  __m128 v104; 
  __m128 v108; 
  __m128 v115; 
  __m128 v116; 
  __m128 v117; 
  __m128 v118; 
  __m128 v119; 
  __m128 v120; 
  float v121; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  __m128 v126; 
  __m128 v130; 
  __m128 v134; 
  __m128 v138; 
  __m128 v145; 
  __m128 v146; 
  __m128 v147; 
  __m128 v148; 
  int v149; 
  __int64 result; 
  __int64 v151; 
  __int64 v152; 
  float v153; 
  int v154; 
  float chosenDist; 
  int v156; 
  __m128 v157; 
  const GenericAabbTreeOptions *v158; 
  __m128 v159; 
  int chosenAxis[4]; 
  __m128 v161; 
  __m128 v162; 
  __m128 v163; 
  __m128 v164; 
  __m128 v165; 
  __m128 v166; 
  __m128 v167; 
  int *v168; 
  int *v169; 
  __m128 v170; 
  __m128 v171; 
  __m128 v172; 
  __m128 v173; 
  __m128 v174; 
  __m128 v175; 
  __m128 v176; 
  __m128 v177; 
  Bounds bounds; 
  Bounds v179; 
  Bounds v180; 
  Bounds v181; 
  _BYTE v182[48]; 

  v5 = options->bounds;
  v7 = options;
  v169 = lastStart;
  v8 = count;
  v168 = midStart;
  v158 = options;
  v156 = count;
  if ( !PickAabbSplitPlane(v5, remap, count, chosenAxis, &chosenDist) )
    return 0i64;
  v9 = v8 - 1;
  v10 = 0.0;
  v153 = 0.0;
  v154 = v8 - 1;
  v11 = v8 - 1;
  *(__m256i *)v182 = _ymm;
  v12.m128_i32[0] = _ymm.m256i_i32[3];
  *(_OWORD *)&v182[32] = _xmm_ff7fffffff7fffffff7fffff00000000;
  v13 = *((float *)&_xmm_ff7fffffff7fffffff7fffff00000000 + 2);
  v14.m128_i32[0] = DWORD1(_xmm_ff7fffffff7fffffff7fffff00000000);
  v164 = (__m128)_ymm.m256i_u32[5];
  if ( v8 - 1 < 0 )
  {
    v73.m128_i32[0] = *(_DWORD *)&v182[44];
    v47.m128_i32[0] = *(_DWORD *)&v182[16];
    v166 = (__m128)*(unsigned int *)&v182[32];
    v165 = (__m128)*(unsigned int *)&v182[28];
    v167 = (__m128)*(unsigned int *)&v182[24];
    v163 = (__m128)*(unsigned int *)&v182[8];
    v162 = (__m128)*(unsigned int *)&v182[4];
    v161 = (__m128)*(unsigned int *)v182;
    v157 = (__m128)*(unsigned int *)&v182[44];
    v159 = (__m128)*(unsigned int *)&v182[16];
  }
  else
  {
    v15.m128_i32[0] = *(_DWORD *)&v182[24];
    v16 = chosenDist;
    v17 = chosenAxis[0];
    v18 = 0i64;
    v166 = (__m128)*(unsigned int *)&v182[32];
    v165 = (__m128)*(unsigned int *)&v182[28];
    v163 = (__m128)*(unsigned int *)&v182[8];
    v162 = (__m128)*(unsigned int *)&v182[4];
    v157 = (__m128)*(unsigned int *)&v182[44];
    v167 = (__m128)*(unsigned int *)&v182[24];
    v159 = (__m128)*(unsigned int *)&v182[16];
    v161 = (__m128)*(unsigned int *)v182;
    do
    {
LABEL_4:
      if ( v18 > v11 )
        break;
      while ( 1 )
      {
        v19 = v18;
        v20 = &v5[remap[v18]];
        v21 = Bounds_Max(v20, v17);
        if ( *(float *)&v21 >= v16 )
        {
          if ( *(float *)&v21 != v16 )
            break;
          if ( (unsigned int)v17 >= 3 )
          {
            LODWORD(v152) = 3;
            LODWORD(v151) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v151, v152) )
              __debugbreak();
          }
          if ( v20->halfSize.v[v17] == 0.0 )
            break;
        }
        v22 = remap[v18++];
        LODWORD(v10) = ++LODWORD(v153);
        v170.m128_i32[3] = 0;
        v172.m128_i32[3] = 0;
        v171.m128_i32[3] = 0;
        v173.m128_i32[3] = 0;
        v24 = v170;
        v24.m128_f32[0] = v161.m128_f32[0];
        _XMM6 = v24;
        __asm
        {
          vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_268], 10h
          vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_258], 20h
        }
        v28 = v172;
        v28.m128_f32[0] = v5[v22].midPoint.v[0];
        _XMM5 = v28;
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+4], 10h
          vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+8], 20h ; ' '
        }
        v32 = v173;
        v32.m128_f32[0] = v5[v22].halfSize.v[0];
        _XMM4 = v32;
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+10h], 10h
          vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+14h], 20h ; ' '
        }
        v36 = v171;
        v36.m128_f32[0] = v12.m128_f32[0];
        _XMM3 = v36;
        _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
        _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
        __asm
        {
          vinsertps xmm3, xmm3, xmm10, 10h
          vinsertps xmm3, xmm3, xmm11, 20h ; ' '
        }
        _mm128_sub_ps(_XMM6, _XMM3);
        v173 = _XMM4;
        __asm { vminps  xmm4, xmm0, xmm2 }
        v171 = _XMM3;
        _mm128_add_ps(_XMM6, _XMM3);
        __asm { vmaxps  xmm0, xmm1, xmm3 }
        v43 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
        v12 = _mm128_sub_ps(v43, _XMM4);
        v44 = _mm_shuffle_ps(v12, v12, 170);
        v45 = _mm_shuffle_ps(v43, v43, 85);
        v46 = _mm_shuffle_ps(v43, v43, 170);
        v170 = _XMM6;
        v47 = _mm_shuffle_ps(v12, v12, 85);
        *(float *)&v182[16] = v47.m128_f32[0];
        *(float *)&v182[20] = v44.m128_f32[0];
        v159 = v47;
        v164 = v44;
        *(float *)v182 = v43.m128_f32[0];
        *(float *)&v182[4] = v45.m128_f32[0];
        *(float *)&v182[8] = v46.m128_f32[0];
        *(float *)&v182[12] = v12.m128_f32[0];
        v172 = _XMM5;
        v161 = v43;
        v162 = v45;
        v163 = v46;
        if ( v19 >= v11 )
        {
          v73.m128_i32[0] = v157.m128_i32[0];
          v9 = v154;
          goto LABEL_44;
        }
      }
      v9 = v154;
      while ( 1 )
      {
        v48 = &v5[remap[v11]];
        v49 = Bounds_Min(v48, v17);
        if ( *(float *)&v49 <= v16 )
        {
          if ( *(float *)&v49 != v16 )
            break;
          if ( (unsigned int)v17 >= 3 )
          {
            LODWORD(v152) = 3;
            LODWORD(v151) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v151, v152) )
              __debugbreak();
          }
          if ( v48->halfSize.v[v17] == 0.0 )
            break;
        }
        v50 = remap[v11];
        --v9;
        --v11;
        v154 = v9;
        v176.m128_i32[3] = 0;
        v174.m128_i32[3] = 0;
        v175.m128_i32[3] = 0;
        v177.m128_i32[3] = 0;
        v52 = v176;
        v52.m128_f32[0] = v5[v50].midPoint.v[0];
        _XMM5 = v52;
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+4], 10h
          vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+8], 20h ; ' '
        }
        v56 = v177;
        v56.m128_f32[0] = v5[v50].halfSize.v[0];
        _XMM4 = v56;
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+10h], 10h
          vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+14h], 20h ; ' '
        }
        _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
        v61 = v175;
        v61.m128_f32[0] = v14.m128_f32[0];
        _XMM3 = v61;
        _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
        v64 = v174;
        v64.m128_f32[0] = v15.m128_f32[0];
        _XMM6 = v64;
        __asm
        {
          vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_238], 10h
          vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_228], 20h
          vinsertps xmm3, xmm3, xmm15, 10h
          vinsertps xmm3, xmm3, xmm9, 20h ; ' '
        }
        _mm128_sub_ps(_XMM6, _XMM3);
        v177 = _XMM4;
        __asm { vminps  xmm4, xmm0, xmm2 }
        v175 = _XMM3;
        _mm128_add_ps(_XMM6, _XMM3);
        __asm { vmaxps  xmm0, xmm1, xmm3 }
        v15 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
        v14 = _mm128_sub_ps(v15, _XMM4);
        v71 = _mm_shuffle_ps(v15, v15, 85);
        v72 = _mm_shuffle_ps(v15, v15, 170);
        v176 = _XMM5;
        v73 = _mm_shuffle_ps(v14, v14, 170);
        v13 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
        *(float *)&v182[40] = v13;
        *(float *)&v182[44] = v73.m128_f32[0];
        v157 = v73;
        *(float *)&v182[24] = v15.m128_f32[0];
        *(float *)&v182[28] = v71.m128_f32[0];
        *(float *)&v182[32] = v72.m128_f32[0];
        *(float *)&v182[36] = v14.m128_f32[0];
        v174 = _XMM6;
        v167 = v15;
        v165 = v71;
        v166 = v72;
        if ( v18 > v11 )
        {
          v10 = v153;
          goto LABEL_43;
        }
      }
      v74 = &v5[remap[v18]];
      v75 = Bounds_Min(v74, v17);
      if ( *(float *)&v75 > v16 || *(float *)&v75 == v16 && *vec3_t::operator[](&v74->halfSize, v17) != 0.0 || GoesBeforeSplit(&v5[remap[v11]], v17, v16) )
      {
        v82 = remap[v18];
        v10 = v153;
        remap[v18] = remap[v11];
        remap[v11] = v82;
        goto LABEL_4;
      }
      v10 = v153;
      v76 = v18;
      chosenDist = v153;
      v77 = v153;
      if ( v18 < v11 )
      {
        while ( 1 )
        {
          v78 = &v5[remap[v76]];
          v79 = Bounds_Min(v78, v17);
          if ( *(float *)&v79 > v16 || *(float *)&v79 == v16 && *vec3_t::operator[](&v78->halfSize, v17) != 0.0 )
            break;
          if ( GoesBeforeSplit(&v5[remap[v76]], v17, v16) )
          {
            v80 = remap[v76];
            remap[v76] = remap[v18];
            remap[v18] = v80;
            goto LABEL_35;
          }
          ++v76;
          LODWORD(v77) = ++LODWORD(chosenDist);
          if ( v76 >= v11 )
            goto LABEL_36;
        }
        v81 = remap[v76];
        remap[v76] = remap[v11];
        remap[v11] = v81;
LABEL_35:
        v77 = chosenDist;
LABEL_36:
        v10 = v153;
        v9 = v154;
      }
    }
    while ( LODWORD(v77) != v9 );
    v73.m128_i32[0] = v157.m128_i32[0];
LABEL_43:
    v47.m128_i32[0] = v159.m128_i32[0];
LABEL_44:
    v8 = v156;
    v7 = v158;
  }
  if ( SLODWORD(v10) <= v9 )
  {
    minItemsPerLeaf = v7->minItemsPerLeaf;
    if ( SLODWORD(v10) < minItemsPerLeaf || v9 - LODWORD(v10) + 1 < minItemsPerLeaf || v8 - v9 - 1 < minItemsPerLeaf )
    {
      v84 = SLODWORD(v10);
      v85 = v9;
      if ( SLODWORD(v10) <= (__int64)v9 )
      {
        v86 = *(double *)&v182[40];
        v87 = *(_OWORD *)&v182[24];
        v88 = *(double *)&v182[16];
        v89 = *(_OWORD *)v182;
        while ( 1 )
        {
          v90 = v84 <= v85;
          if ( v84 <= v85 )
            break;
LABEL_67:
          v47.m128_i32[0] = v159.m128_i32[0];
          if ( !v90 )
            goto LABEL_68;
        }
        v91 = (float)((float)(v13 * v14.m128_f32[0]) * v73.m128_f32[0]) * 8.0;
        while ( 1 )
        {
          v92 = remap[v84];
          *(_OWORD *)bounds.midPoint.v = v89;
          *(double *)&bounds.halfSize.y = v88;
          Bounds_Expand(&bounds, &v5[v92]);
          v93 = remap[v84];
          *(_OWORD *)v179.midPoint.v = v87;
          *(double *)&v179.halfSize.y = v86;
          Bounds_Expand(&v179, &v5[v93]);
          if ( (float)((float)((float)((float)(bounds.halfSize.v[0] * bounds.halfSize.v[1]) * bounds.halfSize.v[2]) * 8.0) - (float)((float)((float)(v47.m128_f32[0] * v12.m128_f32[0]) * v164.m128_f32[0]) * 8.0)) > (float)((float)((float)((float)(v179.halfSize.v[0] * v179.halfSize.v[1]) * v179.halfSize.v[2]) * 8.0) - v91) )
            break;
          v94 = remap[v84++];
          LODWORD(v10) = ++LODWORD(v153);
          v176.m128_i32[3] = 0;
          v177.m128_i32[3] = 0;
          v175.m128_i32[3] = 0;
          v174.m128_i32[3] = 0;
          v96 = v177;
          v96.m128_f32[0] = v161.m128_f32[0];
          _XMM6 = v96;
          __asm
          {
            vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_268], 10h
            vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_258], 20h
          }
          v100 = v176;
          v100.m128_f32[0] = v12.m128_f32[0];
          _XMM3 = v100;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rsp+318h+var_298], 10h
            vinsertps xmm3, xmm3, xmm5, 20h ; ' '
          }
          v104 = v175;
          v104.m128_f32[0] = v5[v94].midPoint.v[0];
          _XMM5 = v104;
          __asm
          {
            vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+4], 10h
            vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+8], 20h ; ' '
          }
          v108 = v174;
          v108.m128_f32[0] = v5[v94].halfSize.v[0];
          _XMM4 = v108;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+10h], 10h
            vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+14h], 20h ; ' '
          }
          _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
          _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
          _mm128_sub_ps(_XMM6, _XMM3);
          v174 = _XMM4;
          __asm { vminps  xmm4, xmm0, xmm2 }
          v176 = _XMM3;
          _mm128_add_ps(_XMM6, _XMM3);
          __asm { vmaxps  xmm0, xmm1, xmm3 }
          v115 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
          v116 = _mm128_sub_ps(v115, _XMM4);
          v117 = _mm_shuffle_ps(v116, v116, 85);
          *(float *)&v182[16] = v117.m128_f32[0];
          *(float *)v182 = v115.m128_f32[0];
          v161 = v115;
          v118 = _mm_shuffle_ps(v115, v115, 85);
          v119 = _mm_shuffle_ps(v115, v115, 170);
          v177 = _XMM6;
          v47 = v117;
          v120 = _mm_shuffle_ps(v116, v116, 170);
          *(float *)&v182[8] = v119.m128_f32[0];
          *(float *)&v182[20] = v120.m128_f32[0];
          v88 = *(double *)&v182[16];
          *(float *)&v182[4] = v118.m128_f32[0];
          *(float *)&v182[12] = v116.m128_f32[0];
          v89 = *(_OWORD *)v182;
          v175 = _XMM5;
          v162 = v118;
          v163 = v119;
          v12.m128_i32[0] = v116.m128_i32[0];
          v159 = v47;
          v164 = v120;
          if ( v84 > v85 )
          {
            v73.m128_i32[0] = v157.m128_i32[0];
            goto LABEL_63;
          }
        }
        if ( v84 > v85 )
        {
          v73.m128_i32[0] = v157.m128_i32[0];
        }
        else
        {
          v121 = (float)((float)(v47.m128_f32[0] * v12.m128_f32[0]) * v164.m128_f32[0]) * 8.0;
          do
          {
            v122 = remap[v85];
            *(_OWORD *)v180.midPoint.v = v87;
            *(double *)&v180.halfSize.y = v86;
            Bounds_Expand(&v180, &v5[v122]);
            v123 = remap[v85];
            *(_OWORD *)v181.midPoint.v = v89;
            *(double *)&v181.halfSize.y = v88;
            Bounds_Expand(&v181, &v5[v123]);
            v73.m128_i32[0] = v157.m128_i32[0];
            if ( (float)((float)((float)((float)(v180.halfSize.v[0] * v180.halfSize.v[1]) * v180.halfSize.v[2]) * 8.0) - (float)((float)((float)(v13 * v14.m128_f32[0]) * v157.m128_f32[0]) * 8.0)) > (float)((float)((float)((float)(v181.halfSize.v[0] * v181.halfSize.v[1]) * v181.halfSize.v[2]) * 8.0) - v121) )
              break;
            v124 = remap[v85];
            --v9;
            --v85;
            v172.m128_i32[3] = 0;
            v173.m128_i32[3] = 0;
            v171.m128_i32[3] = 0;
            v170.m128_i32[3] = 0;
            v126 = v173;
            v126.m128_f32[0] = v167.m128_f32[0];
            _XMM6 = v126;
            __asm
            {
              vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_238], 10h
              vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_228], 20h
            }
            v130 = v172;
            v130.m128_f32[0] = v14.m128_f32[0];
            _XMM3 = v130;
            __asm
            {
              vinsertps xmm3, xmm3, xmm15, 10h
              vinsertps xmm3, xmm3, xmm5, 20h ; ' '
            }
            v134 = v171;
            v134.m128_f32[0] = v5[v124].midPoint.v[0];
            _XMM5 = v134;
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+4], 10h
              vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+8], 20h ; ' '
            }
            v138 = v170;
            v138.m128_f32[0] = v5[v124].halfSize.v[0];
            _XMM4 = v138;
            __asm
            {
              vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+10h], 10h
              vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+14h], 20h ; ' '
            }
            _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
            _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
            _mm128_sub_ps(_XMM6, _XMM3);
            v170 = _XMM4;
            __asm { vminps  xmm4, xmm0, xmm2 }
            v172 = _XMM3;
            _mm128_add_ps(_XMM6, _XMM3);
            __asm { vmaxps  xmm0, xmm1, xmm3 }
            v145 = _mm128_mul_ps(_mm128_add_ps(_XMM0, _XMM4), g_oneHalf.v);
            v146 = _mm128_sub_ps(v145, _XMM4);
            *(float *)&v182[24] = v145.m128_f32[0];
            v167 = v145;
            v147 = _mm_shuffle_ps(v145, v145, 85);
            v148 = _mm_shuffle_ps(v145, v145, 170);
            v171 = _XMM5;
            v73 = _mm_shuffle_ps(v146, v146, 170);
            *(float *)&v182[32] = v148.m128_f32[0];
            *(float *)&v182[28] = v147.m128_f32[0];
            *(float *)&v182[36] = v146.m128_f32[0];
            v87 = *(_OWORD *)&v182[24];
            *(_DWORD *)&v182[40] = _mm_shuffle_ps(v146, v146, 85).m128_u32[0];
            *(float *)&v182[44] = v73.m128_f32[0];
            v86 = *(double *)&v182[40];
            v173 = _XMM6;
            v165 = v147;
            v166 = v148;
            v14.m128_i32[0] = v146.m128_i32[0];
            v13 = *(float *)&v182[40];
            v157 = v73;
          }
          while ( v84 <= v85 );
        }
        v10 = v153;
LABEL_63:
        if ( v84 >= v85 )
        {
          if ( v84 != v85 )
            goto LABEL_66;
          if ( 2 * LODWORD(v10) < v8 )
          {
            ++LODWORD(v10);
            v153 = v10;
            ++v84;
            goto LABEL_66;
          }
        }
        else
        {
          v149 = remap[v84];
          ++LODWORD(v10);
          remap[v84++] = remap[v85];
          remap[v85] = v149;
          v153 = v10;
        }
        --v9;
        --v85;
LABEL_66:
        v90 = v84 <= v85;
        goto LABEL_67;
      }
    }
  }
LABEL_68:
  if ( v10 == 0.0 || LODWORD(v10) == v8 )
    return 0i64;
  result = 1i64;
  *(float *)v168 = v10;
  *v169 = v9 + 1;
  return result;
}

