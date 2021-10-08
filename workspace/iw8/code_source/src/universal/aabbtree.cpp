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
  int v16; 
  int *v18; 
  __int64 v19; 
  __int64 result; 
  int remap[64]; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 

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
    sortedMins = (float *)&v26;
    v3 = remap;
    sortedMaxs = (float *)&v27;
    v4 = (float *)&v28;
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
    _RDI = operator new[](saturated_mul(options->itemCount, 0x18ui64));
    memcpy_0(_RDI, options->bounds, 24i64 * options->itemCount);
    v16 = 0;
    if ( options->itemCount > 0 )
    {
      _RDX = 0i64;
      v18 = v3;
      do
      {
        v19 = *v18++;
        ++v16;
        _RDX += 24i64;
        _RCX = 3 * v19;
        _RAX = options->bounds;
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi+rcx*8]
          vmovups xmmword ptr [rdx+rax-18h], xmm0
          vmovsd  xmm1, qword ptr [rdi+rcx*8+10h]
          vmovsd  qword ptr [rdx+rax-8], xmm1
        }
      }
      while ( v16 < options->itemCount );
    }
    operator delete[](_RDI);
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

__int64 __fastcall GoesBeforeSplit(const Bounds *bounds, int splitAxis, double splitDist)
{
  char v8; 
  char v9; 
  __int64 result; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  *(double *)&_XMM0 = Bounds_Max(bounds, splitAxis);
  __asm { vcomiss xmm0, xmm6 }
  if ( v9 )
    goto LABEL_5;
  __asm { vucomiss xmm0, xmm6 }
  if ( !v8 )
    goto LABEL_4;
  _RAX = vec3_t::operator[](&bounds->halfSize, splitAxis);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax]
  }
  if ( !v8 )
  {
LABEL_5:
    result = 1i64;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  else
  {
LABEL_4:
    result = 0i64;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  return result;
}

/*
==============
PickAabbSplitPlane
==============
*/
__int64 PickAabbSplitPlane(const Bounds *bounds, int *remap, int count, int *chosenAxis)
{
  int *v14; 
  __int64 v15; 
  bool v19; 
  unsigned __int64 v25; 
  __int64 v26; 
  int v60; 
  __int64 v62; 
  bool v63; 
  PickAabbSplitPlane_SortFloats::__l2::PickAabbSplitPlane_FloatLess v70; 
  PickAabbSplitPlane_SortFloats::__l2::PickAabbSplitPlane_FloatLess v71; 
  PickAabbSplitPlane_SortFloats::__l2::PickAabbSplitPlane_FloatLess v72; 
  unsigned int v75; 
  unsigned int v76; 
  __int64 v79; 
  unsigned int v80; 
  bool v82; 
  bool v83; 
  bool v89; 
  bool v90; 
  __int64 result; 
  __int64 v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  __int64 v118; 
  double v119; 
  double v120; 
  PickAabbSplitPlane_SortFloats::__l2::PickAabbSplitPlane_FloatLess v121; 
  unsigned int v122; 
  __int64 v123; 
  unsigned int v124; 
  __int64 v126; 
  __int128 v128; 
  __int64 v129; 
  __int128 v130; 
  __int64 v131; 
  __int128 v135; 
  __int128 v136; 
  char v137; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovss  xmm1, cs:__real@ff7fffff
    vmovups xmm0, cs:__xmm@ff7fffff000000000000000000000000
  }
  v14 = remap;
  v15 = count;
  _R15 = bounds;
  v126 = count;
  __asm
  {
    vmovups [rbp+0D0h+var_F0], xmm0
    vmovss  [rbp+0D0h+var_E0], xmm1
    vmovss  [rbp+0D0h+var_DC], xmm1
    vmovaps xmm2, xmm1
    vmovaps xmm0, xmm1
  }
  v19 = count == 0i64;
  if ( count > 0i64 )
  {
    __asm
    {
      vmovdqa xmm7, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
      vmovss  xmm0, dword ptr [rbp+0D0h+var_F0+0Ch]
      vmovss  xmm5, dword ptr [rbp+0D0h+var_F0+8]
      vmovss  xmm4, dword ptr [rbp+0D0h+var_F0+4]
      vmovss  xmm3, dword ptr [rbp+0D0h+var_F0]
    }
    v25 = 0i64;
    do
    {
      v26 = v14[v25++];
      _RCX = 3 * v26;
      HIDWORD(v136) = 0;
      HIDWORD(v128) = 0;
      HIDWORD(v135) = 0;
      HIDWORD(v130) = 0;
      __asm
      {
        vmovups xmm6, xmmword ptr [rbp+10h]
        vmovss  xmm6, xmm6, xmm3
        vmovups xmm3, xmmword ptr [rbp-40h]
        vmovss  xmm3, xmm3, xmm0
        vmovss  xmm0, dword ptr [r15+rcx*8]
        vinsertps xmm6, xmm6, xmm4, 10h
        vmovups xmm4, xmmword ptr [rbp-30h]
        vinsertps xmm6, xmm6, xmm5, 20h ; ' '
        vmovups xmm5, xmmword ptr [rbp+0]
        vmovss  xmm5, xmm5, xmm0
        vmovss  xmm0, dword ptr [r15+rcx*8+0Ch]
        vinsertps xmm5, xmm5, dword ptr [r15+rcx*8+4], 10h
        vinsertps xmm5, xmm5, dword ptr [r15+rcx*8+8], 20h ; ' '
        vmovss  xmm4, xmm4, xmm0
        vinsertps xmm4, xmm4, dword ptr [r15+rcx*8+10h], 10h
        vinsertps xmm4, xmm4, dword ptr [r15+rcx*8+14h], 20h ; ' '
        vinsertps xmm3, xmm3, xmm1, 10h
        vinsertps xmm3, xmm3, xmm2, 20h ; ' '
        vsubps  xmm0, xmm5, xmm4
        vaddps  xmm1, xmm5, xmm4
        vsubps  xmm2, xmm6, xmm3
        vminps  xmm2, xmm0, xmm2
        vmovups xmmword ptr [rbp-40h], xmm3
        vaddps  xmm3, xmm6, xmm3
        vmaxps  xmm0, xmm1, xmm3
        vaddps  xmm1, xmm0, xmm2
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm0, xmm3, xmm2
        vmovups xmmword ptr [rbp+0], xmm5
        vmovups xmmword ptr [rbp-30h], xmm4
        vshufps xmm1, xmm0, xmm0, 55h ; 'U'
        vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
        vshufps xmm4, xmm3, xmm3, 55h ; 'U'
        vshufps xmm5, xmm3, xmm3, 0AAh ; 'ª'
        vmovss  [rbp+0D0h+var_E0], xmm1
        vmovss  [rbp+0D0h+var_DC], xmm2
        vmovss  dword ptr [rbp+0D0h+var_F0], xmm3
        vmovss  dword ptr [rbp+0D0h+var_F0+4], xmm4
        vmovss  dword ptr [rbp+0D0h+var_F0+8], xmm5
        vmovss  dword ptr [rbp+0D0h+var_F0+0Ch], xmm0
        vmovups xmmword ptr [rbp+10h], xmm6
      }
      v19 = v25 <= count;
    }
    while ( (__int64)v25 < count );
  }
  __asm
  {
    vmovss  xmm6, cs:__real@41200000
    vmovss  xmm7, cs:__real@40a00000
    vmovss  xmm10, cs:__real@3f000000
    vcomiss xmm0, xmm1
  }
  _RCX = !v19;
  v60 = 0;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  v62 = 0i64;
  __asm { vcomiss xmm2, dword ptr [rbp+rcx*4+0D0h+var_F0+0Ch] }
  v63 = 1;
  do
  {
    if ( !v63 )
    {
      LODWORD(v116) = 3;
      LODWORD(v113) = v60;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v113, v116) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbp+rdi+0D0h+var_F0+0Ch]
      vaddss  xmm0, xmm10, dword ptr [rbp+rsi*4+0D0h+var_F0+0Ch]
      vaddss  xmm3, xmm1, xmm7
      vdivss  xmm3, xmm3, xmm0
      vroundss xmm0, xmm11, xmm3, 2
      vcvttss2si eax, xmm0
    }
    *(_DWORD *)((char *)&v136 + v62) = _EAX;
    ++v60;
    v62 += 4i64;
    v63 = (unsigned int)v60 < 3;
  }
  while ( v60 < 3 );
  v70 = v121;
  v71 = v121;
  v72 = v121;
  __asm { vmovss  xmm9, cs:__real@7f7fffff }
  v124 = 0;
  v131 = 0i64;
  __asm { vxorps  xmm12, xmm12, xmm12 }
  do
  {
    v122 = 0;
    v75 = 0;
    v76 = 0;
    if ( v15 > 0 )
    {
      _R13 = 0i64;
      _RBX = v131;
      v79 = 0i64;
      v123 = 0i64;
      v80 = 0;
      v129 = v15;
      do
      {
        _R14 = &_R15[*v14];
        v82 = v124 == 3;
        if ( v124 >= 3 )
        {
          LODWORD(v116) = 3;
          LODWORD(v113) = v124;
          v83 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v113, v116);
          v82 = !v83;
          if ( v83 )
            __debugbreak();
          v76 = v122;
          v79 = v123;
        }
        __asm { vucomiss xmm12, dword ptr [r14+rbx*4+0Ch] }
        _R15 = &_R15[*v14];
        if ( v82 )
        {
          if ( v124 >= 3 )
          {
            LODWORD(v116) = 3;
            LODWORD(v113) = v124;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v113, v116) )
              __debugbreak();
            v76 = v122;
            v79 = v123;
          }
          v122 = ++v76;
          *(float *)((char *)sortedCoplanar + v79) = _R15->midPoint.v[_RBX];
          v79 += 4i64;
          v123 = v79;
        }
        else
        {
          if ( v124 >= 3 )
          {
            LODWORD(v116) = 3;
            LODWORD(v113) = v124;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v113, v116) )
              __debugbreak();
            LODWORD(v117) = 3;
            LODWORD(v114) = v124;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v114, v117) )
              __debugbreak();
          }
          _RAX = sortedMins;
          __asm
          {
            vmovss  xmm0, dword ptr [r15+rbx*4]
            vsubss  xmm1, xmm0, dword ptr [r15+rbx*4+0Ch]
            vmovss  dword ptr [rax+r13], xmm1
          }
          _R14 = &bounds[*v14];
          v89 = v124 < 3;
          if ( v124 >= 3 )
          {
            LODWORD(v116) = 3;
            LODWORD(v113) = v124;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v113, v116) )
              __debugbreak();
            LODWORD(v118) = 3;
            LODWORD(v115) = v124;
            v90 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v115, v118);
            v89 = 0;
            if ( v90 )
              __debugbreak();
          }
          _R15 = v131;
          _RAX = sortedMaxs;
          __asm
          {
            vmovss  xmm0, dword ptr [r14+r15*4]
            vaddss  xmm1, xmm0, dword ptr [r14+r15*4+0Ch]
            vmovss  dword ptr [rax+r13], xmm1
          }
          _RAX = sortedMins;
          __asm
          {
            vmovss  xmm2, dword ptr [rax+r13]
            vcomiss xmm2, xmm1
          }
          if ( !v89 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm1, xmm1
              vmovsd  [rsp+1D0h+var_190], xmm0
              vcvtss2sd xmm1, xmm2, xmm2
              vmovsd  [rsp+1D0h+var_198], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\aabbtree.cpp", 81, ASSERT_TYPE_ASSERT, "( sortedMins[minMaxCount] ) < ( sortedMaxs[minMaxCount] )", "%s < %s\n\t%g, %g", "sortedMins[minMaxCount]", "sortedMaxs[minMaxCount]", v119, v120) )
              __debugbreak();
          }
          v79 = v123;
          ++v80;
          v76 = v122;
          _R13 += 4i64;
          _RBX = v131;
        }
        _R15 = bounds;
        ++v14;
        --v129;
      }
      while ( v129 );
      v70 = v121;
      v71 = v121;
      v75 = v80;
      v72 = v121;
    }
    _R15 = sortedMins;
    std::_Sort_unchecked_float____PickAabbSplitPlane_SortFloats_::_2_::PickAabbSplitPlane_FloatLess_(sortedMins, &sortedMins[v75], v75, v70);
    std::_Sort_unchecked_float____PickAabbSplitPlane_SortFloats_::_2_::PickAabbSplitPlane_FloatLess_(sortedMaxs, &sortedMaxs[v75], v75, v71);
    std::_Sort_unchecked_float____PickAabbSplitPlane_SortFloats_::_2_::PickAabbSplitPlane_FloatLess_(sortedCoplanar, &sortedCoplanar[v122], v122, v72);
    *(_QWORD *)&v135 = 0i64;
    if ( v75 )
    {
      if ( v122 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vminss  xmm7, xmm0, dword ptr [r14]
        }
      }
      else
      {
        _RAX = sortedMins;
        __asm { vmovss  xmm7, dword ptr [rax] }
      }
    }
    else if ( v122 )
    {
      _RAX = sortedCoplanar;
      __asm { vmovss  xmm7, dword ptr [rax] }
    }
    else
    {
      __asm { vmovaps xmm7, xmm9 }
    }
    __asm { vcomiss xmm7, xmm9 }
    ++v131;
    _R15 = bounds;
    v15 = v126;
    v14 = remap;
    ++v124;
  }
  while ( (int)v124 < 3 );
  result = 0i64;
  _R11 = &v137;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
}

/*
==============
SplitAabbTree
==============
*/
__int64 SplitAabbTree(int count, const GenericAabbTreeOptions *options, int *remap, int *midStart, int *lastStart)
{
  const GenericAabbTreeOptions *v17; 
  int v18; 
  int v21; 
  int v22; 
  __int64 v23; 
  __int64 v36; 
  __int64 v40; 
  char v42; 
  char v43; 
  bool v44; 
  bool v45; 
  __int64 v46; 
  char v82; 
  bool v83; 
  bool v84; 
  __int64 v85; 
  const Bounds *v117; 
  char v118; 
  __int64 v121; 
  int v122; 
  const Bounds *v123; 
  char v124; 
  int v127; 
  int v128; 
  int v130; 
  int minItemsPerLeaf; 
  __int64 v140; 
  __int64 v141; 
  bool v147; 
  __int64 v151; 
  __int64 v152; 
  __int64 v167; 
  __int64 v210; 
  __int64 v211; 
  __int64 v226; 
  int v266; 
  __int64 result; 
  __int64 v278; 
  __int64 v279; 
  int v280; 
  int v281; 
  int v283; 
  int chosenAxis[4]; 
  int *v296; 
  int *v297; 
  __int128 v298; 
  __int128 v299; 
  __int128 v300; 
  __int128 v301; 
  __int128 v302; 
  __int128 v303; 
  __int128 v304; 
  __int128 v305; 
  Bounds bounds; 
  Bounds v307; 
  Bounds v308; 
  Bounds v309; 

  _RSI = options->bounds;
  v17 = options;
  v297 = lastStart;
  v18 = count;
  v296 = midStart;
  if ( !(unsigned int)PickAabbSplitPlane(_RSI, remap, count, chosenAxis) )
    return 0i64;
  __asm
  {
    vmovups ymm0, cs:__ymm@0000000000000000ff7fffffff7fffffff7fffff000000000000000000000000
    vmovups xmm1, cs:__xmm@ff7fffffff7fffffff7fffff00000000
  }
  v21 = v18 - 1;
  v22 = 0;
  __asm
  {
    vmovaps [rsp+318h+var_48], xmm6
    vmovaps [rsp+318h+var_58], xmm7
    vmovaps [rsp+318h+var_68], xmm8
    vmovaps [rsp+318h+var_78], xmm9
    vmovaps [rsp+318h+var_88], xmm10
    vmovaps [rsp+318h+var_98], xmm11
    vmovaps [rsp+318h+var_A8], xmm12
    vmovaps [rsp+318h+var_B8], xmm13
    vmovaps [rsp+318h+var_C8], xmm14
    vmovaps [rsp+318h+var_D8], xmm15
  }
  v280 = 0;
  v281 = v18 - 1;
  v23 = v18 - 1;
  __asm
  {
    vmovups [rsp+318h+var_118], ymm0
    vmovss  xmm11, dword ptr [rsp+318h+var_118+14h]
    vmovss  xmm14, dword ptr [rsp+318h+var_118+0Ch]
    vmovups [rsp+318h+var_F8], xmm1
    vmovss  xmm15, dword ptr [rsp+318h+var_F8+8]
    vmovss  xmm13, dword ptr [rsp+318h+var_F8+4]
    vmovups [rsp+318h+var_248], xmm11
  }
  if ( v18 - 1 < 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+318h+var_F8]
      vmovss  xmm5, dword ptr [rsp+318h+var_F8+0Ch]
      vmovss  xmm6, dword ptr [rsp+318h+var_118+10h]
      vmovups [rsp+318h+var_228], xmm0
      vmovss  xmm0, dword ptr [rsp+318h+var_118+1Ch]
      vmovups [rsp+318h+var_238], xmm0
      vmovss  xmm0, dword ptr [rsp+318h+var_118+18h]
      vmovups [rsp+318h+var_218], xmm0
      vmovss  xmm0, dword ptr [rsp+318h+var_118+8]
      vmovups [rsp+318h+var_258], xmm0
      vmovss  xmm0, dword ptr [rsp+318h+var_118+4]
      vmovups [rsp+318h+var_268], xmm0
      vmovss  xmm0, dword ptr [rsp+318h+var_118]
      vmovups [rsp+318h+var_278], xmm0
      vmovups [rsp+318h+var_2B8], xmm5
      vmovups [rsp+318h+var_298], xmm6
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+318h+var_F8]
      vmovss  xmm1, dword ptr [rsp+318h+var_118+1Ch]
      vmovss  xmm9, dword ptr [rsp+318h+var_F8+0Ch]
      vmovss  xmm12, dword ptr [rsp+318h+var_118+18h]
      vmovss  xmm10, dword ptr [rsp+318h+var_118+10h]
      vmovss  xmm0, dword ptr [rsp+318h+var_118]
      vmovss  xmm7, [rsp+318h+var_2CC]
    }
    _RDI = chosenAxis[0];
    v36 = 0i64;
    __asm
    {
      vmovups [rsp+318h+var_228], xmm2
      vmovss  xmm2, dword ptr [rsp+318h+var_118+8]
      vmovups [rsp+318h+var_238], xmm1
      vmovss  xmm1, dword ptr [rsp+318h+var_118+4]
      vmovups [rsp+318h+var_258], xmm2
      vmovups [rsp+318h+var_268], xmm1
      vxorps  xmm8, xmm8, xmm8
      vmovups [rsp+318h+var_2B8], xmm9
      vmovups [rsp+318h+var_218], xmm12
      vmovups [rsp+318h+var_298], xmm10
      vmovups [rsp+318h+var_278], xmm0
    }
    do
    {
LABEL_4:
      if ( v36 > v23 )
        break;
      while ( 1 )
      {
        v40 = v36;
        _R14 = &_RSI[remap[v36]];
        *(double *)&_XMM0 = Bounds_Max(_R14, _RDI);
        __asm { vcomiss xmm0, xmm7 }
        if ( !v43 )
        {
          __asm { vucomiss xmm0, xmm7 }
          if ( !v42 )
            break;
          v44 = (_DWORD)_RDI == 3;
          if ( (unsigned int)_RDI >= 3 )
          {
            LODWORD(v279) = 3;
            LODWORD(v278) = _RDI;
            v45 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v278, v279);
            v44 = !v45;
            if ( v45 )
              __debugbreak();
          }
          __asm { vucomiss xmm8, dword ptr [r14+rdi*4+0Ch] }
          if ( v44 )
            break;
        }
        v46 = remap[v36++];
        __asm { vmovups xmm0, [rsp+318h+var_278] }
        v22 = v280 + 1;
        _RCX = 3 * v46;
        ++v280;
        HIDWORD(v298) = 0;
        HIDWORD(v300) = 0;
        HIDWORD(v299) = 0;
        HIDWORD(v301) = 0;
        __asm
        {
          vmovups xmm6, xmmword ptr [rsp+120h]
          vmovups xmm5, xmmword ptr [rsp+140h]
          vmovups xmm3, xmmword ptr [rsp+130h]
          vmovups xmm4, xmmword ptr [rsp+150h]
          vmovss  xmm6, xmm6, xmm0
          vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_268], 10h
          vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_258], 20h
          vmovss  xmm0, dword ptr [rsi+rcx*8]
          vmovss  xmm5, xmm5, xmm0
          vmovss  xmm0, dword ptr [rsi+rcx*8+0Ch]
          vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+4], 10h
          vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+8], 20h ; ' '
          vmovss  xmm4, xmm4, xmm0
          vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+10h], 10h
          vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+14h], 20h ; ' '
          vmovss  xmm3, xmm3, xmm14
          vaddps  xmm1, xmm5, xmm4
          vsubps  xmm0, xmm5, xmm4
          vinsertps xmm3, xmm3, xmm10, 10h
          vinsertps xmm3, xmm3, xmm11, 20h ; ' '
          vsubps  xmm2, xmm6, xmm3
          vmovups xmmword ptr [rsp+150h], xmm4
          vminps  xmm4, xmm0, xmm2
          vmovups xmmword ptr [rsp+130h], xmm3
          vaddps  xmm3, xmm6, xmm3
          vmaxps  xmm0, xmm1, xmm3
          vaddps  xmm1, xmm0, xmm4
          vmulps  xmm1, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
          vsubps  xmm14, xmm1, xmm4
          vshufps xmm0, xmm14, xmm14, 0AAh ; 'ª'
          vshufps xmm4, xmm1, xmm1, 55h ; 'U'
          vshufps xmm2, xmm1, xmm1, 0AAh ; 'ª'
          vmovups xmmword ptr [rsp+120h], xmm6
          vshufps xmm6, xmm14, xmm14, 55h ; 'U'
          vmovss  dword ptr [rsp+318h+var_118+10h], xmm6
          vmovss  dword ptr [rsp+318h+var_118+14h], xmm0
          vmovups [rsp+318h+var_298], xmm6
          vmovups [rsp+318h+var_248], xmm0
          vmovss  dword ptr [rsp+318h+var_118], xmm1
          vmovss  dword ptr [rsp+318h+var_118+4], xmm4
          vmovss  dword ptr [rsp+318h+var_118+8], xmm2
          vmovss  dword ptr [rsp+318h+var_118+0Ch], xmm14
          vmovups xmmword ptr [rsp+140h], xmm5
          vmovups [rsp+318h+var_278], xmm1
          vmovups [rsp+318h+var_268], xmm4
          vmovups [rsp+318h+var_258], xmm2
        }
        if ( v40 >= v23 )
        {
          __asm { vmovups xmm5, [rsp+318h+var_2B8] }
          v21 = v281;
          goto LABEL_44;
        }
        __asm
        {
          vmovups xmm10, xmm6
          vmovups xmm11, xmm0
        }
      }
      v21 = v281;
      while ( 1 )
      {
        _R14 = &_RSI[remap[v23]];
        *(double *)&_XMM0 = Bounds_Min(_R14, _RDI);
        __asm { vcomiss xmm0, xmm7 }
        if ( v43 | v82 )
        {
          __asm { vucomiss xmm0, xmm7 }
          if ( !v82 )
            break;
          v83 = (_DWORD)_RDI == 3;
          if ( (unsigned int)_RDI >= 3 )
          {
            LODWORD(v279) = 3;
            LODWORD(v278) = _RDI;
            v84 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v278, v279);
            v83 = !v84;
            if ( v84 )
              __debugbreak();
          }
          __asm { vucomiss xmm8, dword ptr [r14+rdi*4+0Ch] }
          if ( v83 )
            break;
        }
        v85 = remap[v23];
        --v21;
        --v23;
        v281 = v21;
        _RCX = 3 * v85;
        HIDWORD(v304) = 0;
        HIDWORD(v302) = 0;
        HIDWORD(v303) = 0;
        HIDWORD(v305) = 0;
        __asm
        {
          vmovups xmm5, xmmword ptr [rsp+180h]
          vmovss  xmm0, dword ptr [rsi+rcx*8]
          vmovups xmm6, xmmword ptr [rsp+160h]
          vmovups xmm3, xmmword ptr [rsp+170h]
          vmovups xmm4, xmmword ptr [rsp+190h]
          vmovss  xmm5, xmm5, xmm0
          vmovss  xmm0, dword ptr [rsi+rcx*8+0Ch]
          vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+4], 10h
          vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+8], 20h ; ' '
          vmovss  xmm4, xmm4, xmm0
          vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+10h], 10h
          vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+14h], 20h ; ' '
          vaddps  xmm1, xmm5, xmm4
          vmovss  xmm3, xmm3, xmm13
          vsubps  xmm0, xmm5, xmm4
          vmovss  xmm6, xmm6, xmm12
          vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_238], 10h
          vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_228], 20h
          vinsertps xmm3, xmm3, xmm15, 10h
          vinsertps xmm3, xmm3, xmm9, 20h ; ' '
          vsubps  xmm2, xmm6, xmm3
          vmovups xmmword ptr [rsp+190h], xmm4
          vminps  xmm4, xmm0, xmm2
          vmovups xmmword ptr [rsp+170h], xmm3
          vaddps  xmm3, xmm6, xmm3
          vmaxps  xmm0, xmm1, xmm3
          vaddps  xmm1, xmm0, xmm4
          vmulps  xmm12, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
          vsubps  xmm13, xmm12, xmm4
          vshufps xmm4, xmm12, xmm12, 55h ; 'U'
          vshufps xmm2, xmm12, xmm12, 0AAh ; 'ª'
          vmovups xmmword ptr [rsp+180h], xmm5
          vshufps xmm5, xmm13, xmm13, 0AAh ; 'ª'
          vshufps xmm15, xmm13, xmm13, 55h ; 'U'
          vmovss  dword ptr [rsp+318h+var_F8+8], xmm15
          vmovss  dword ptr [rsp+318h+var_F8+0Ch], xmm5
          vmovups [rsp+318h+var_2B8], xmm5
          vmovss  dword ptr [rsp+318h+var_118+18h], xmm12
          vmovss  dword ptr [rsp+318h+var_118+1Ch], xmm4
          vmovss  dword ptr [rsp+318h+var_F8], xmm2
          vmovss  dword ptr [rsp+318h+var_F8+4], xmm13
          vmovups xmmword ptr [rsp+160h], xmm6
          vmovups [rsp+318h+var_218], xmm12
          vmovups [rsp+318h+var_238], xmm4
          vmovups [rsp+318h+var_228], xmm2
        }
        if ( v36 > v23 )
        {
          v22 = v280;
          goto LABEL_43;
        }
        __asm { vmovups xmm9, xmm5 }
      }
      v117 = &_RSI[remap[v36]];
      *(double *)&_XMM0 = Bounds_Min(v117, _RDI);
      __asm { vcomiss xmm0, xmm7 }
      if ( !(v43 | v118) )
        goto LABEL_39;
      __asm { vucomiss xmm0, xmm7 }
      if ( v118 )
      {
        _RAX = vec3_t::operator[](&v117->halfSize, _RDI);
        __asm { vucomiss xmm8, dword ptr [rax] }
        if ( !v42 )
          goto LABEL_39;
      }
      __asm { vmovaps xmm2, xmm7; splitDist }
      if ( (unsigned int)GoesBeforeSplit(&_RSI[remap[v23]], _RDI, *(double *)&_XMM2) )
      {
LABEL_39:
        v130 = remap[v36];
        v22 = v280;
        remap[v36] = remap[v23];
        remap[v23] = v130;
        goto LABEL_4;
      }
      v22 = v280;
      v121 = v36;
      v283 = v280;
      v122 = v280;
      if ( v36 < v23 )
      {
        while ( 1 )
        {
          v123 = &_RSI[remap[v121]];
          *(double *)&_XMM0 = Bounds_Min(v123, _RDI);
          __asm { vcomiss xmm0, xmm7 }
          if ( !(v43 | v124) )
            break;
          __asm { vucomiss xmm0, xmm7 }
          if ( v124 )
          {
            _RAX = vec3_t::operator[](&v123->halfSize, _RDI);
            __asm { vucomiss xmm8, dword ptr [rax] }
            if ( !v42 )
              break;
          }
          __asm { vmovaps xmm2, xmm7; splitDist }
          if ( (unsigned int)GoesBeforeSplit(&_RSI[remap[v121]], _RDI, *(double *)&_XMM2) )
          {
            v127 = remap[v121];
            remap[v121] = remap[v36];
            remap[v36] = v127;
            goto LABEL_35;
          }
          ++v121;
          v122 = ++v283;
          if ( v121 >= v23 )
            goto LABEL_36;
        }
        v128 = remap[v121];
        remap[v121] = remap[v23];
        remap[v23] = v128;
LABEL_35:
        v122 = v283;
LABEL_36:
        v22 = v280;
        v21 = v281;
      }
    }
    while ( v122 != v21 );
    __asm { vmovups xmm5, [rsp+318h+var_2B8] }
LABEL_43:
    __asm { vmovups xmm6, [rsp+318h+var_298] }
LABEL_44:
    v18 = count;
    v17 = options;
  }
  if ( v22 <= v21 )
  {
    minItemsPerLeaf = v17->minItemsPerLeaf;
    if ( v22 < minItemsPerLeaf || v21 - v22 + 1 < minItemsPerLeaf || v18 - v21 - 1 < minItemsPerLeaf )
    {
      v140 = v22;
      v141 = v21;
      if ( v22 <= (__int64)v21 )
      {
        __asm
        {
          vmovss  xmm7, cs:__real@41000000
          vmovsd  xmm8, qword ptr [rsp+318h+var_F8+8]
          vmovups xmm9, xmmword ptr [rsp+318h+var_118+18h]
          vmovsd  xmm10, qword ptr [rsp+318h+var_118+10h]
          vmovups xmm11, xmmword ptr [rsp+318h+var_118]
        }
        while ( 1 )
        {
          v147 = v140 <= v141;
          if ( v140 <= v141 )
            break;
LABEL_67:
          __asm { vmovups xmm6, [rsp+318h+var_298] }
          if ( !v147 )
            goto LABEL_68;
        }
        __asm
        {
          vmulss  xmm0, xmm15, xmm13
          vmulss  xmm1, xmm0, xmm5
          vmulss  xmm12, xmm1, xmm7
        }
        while ( 1 )
        {
          v151 = remap[v140];
          __asm
          {
            vmovups xmmword ptr [rsp+318h+bounds.midPoint], xmm11
            vmovsd  qword ptr [rsp+318h+bounds.halfSize+4], xmm10
          }
          Bounds_Expand(&bounds, &_RSI[v151]);
          v152 = remap[v140];
          __asm
          {
            vmovups xmmword ptr [rsp+318h+var_160.midPoint], xmm9
            vmovsd  qword ptr [rsp+318h+var_160.halfSize+4], xmm8
          }
          Bounds_Expand(&v307, &_RSI[v152]);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+318h+bounds.halfSize]
            vmulss  xmm1, xmm0, dword ptr [rsp+318h+bounds.halfSize+4]
            vmulss  xmm2, xmm1, dword ptr [rsp+318h+bounds.halfSize+8]
            vmovups xmm5, [rsp+318h+var_248]
            vmulss  xmm3, xmm2, xmm7
            vmulss  xmm0, xmm6, xmm14
            vmulss  xmm1, xmm0, xmm5
            vmovss  xmm0, dword ptr [rsp+318h+var_160.halfSize]
            vmulss  xmm2, xmm1, xmm7
            vmulss  xmm1, xmm0, dword ptr [rsp+318h+var_160.halfSize+4]
            vsubss  xmm4, xmm3, xmm2
            vmulss  xmm2, xmm1, dword ptr [rsp+318h+var_160.halfSize+8]
            vmulss  xmm3, xmm2, xmm7
            vsubss  xmm0, xmm3, xmm12
            vcomiss xmm4, xmm0
          }
          if ( !(v43 | v42) )
            break;
          v167 = remap[v140++];
          __asm { vmovups xmm0, [rsp+318h+var_278] }
          v22 = v280 + 1;
          _RCX = 3 * v167;
          ++v280;
          HIDWORD(v304) = 0;
          HIDWORD(v305) = 0;
          HIDWORD(v303) = 0;
          HIDWORD(v302) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rsp+180h]
            vmovups xmm6, xmmword ptr [rsp+190h]
            vmovups xmm4, xmmword ptr [rsp+160h]
            vmovss  xmm6, xmm6, xmm0
            vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_268], 10h
            vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_258], 20h
            vmovss  xmm0, dword ptr [rsi+rcx*8]
            vmovss  xmm3, xmm3, xmm14
            vinsertps xmm3, xmm3, dword ptr [rsp+318h+var_298], 10h
            vinsertps xmm3, xmm3, xmm5, 20h ; ' '
            vmovups xmm5, xmmword ptr [rsp+170h]
            vmovss  xmm5, xmm5, xmm0
            vmovss  xmm0, dword ptr [rsi+rcx*8+0Ch]
            vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+4], 10h
            vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+8], 20h ; ' '
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+10h], 10h
            vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+14h], 20h ; ' '
            vaddps  xmm1, xmm5, xmm4
            vsubps  xmm0, xmm5, xmm4
            vsubps  xmm2, xmm6, xmm3
            vmovups xmmword ptr [rsp+160h], xmm4
            vminps  xmm4, xmm0, xmm2
            vmovups xmmword ptr [rsp+180h], xmm3
            vaddps  xmm3, xmm6, xmm3
            vmaxps  xmm0, xmm1, xmm3
            vaddps  xmm1, xmm0, xmm4
            vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
            vsubps  xmm3, xmm2, xmm4
            vmovaps xmm4, xmm2
            vshufps xmm0, xmm3, xmm3, 55h ; 'U'
            vmovss  dword ptr [rsp+318h+var_118+10h], xmm0
            vmovss  dword ptr [rsp+318h+var_118], xmm2
            vmovups [rsp+318h+var_278], xmm4
            vshufps xmm4, xmm2, xmm2, 55h ; 'U'
            vshufps xmm2, xmm2, xmm2, 0AAh ; 'ª'
            vmovaps xmm2, xmm2
            vmovaps xmm4, xmm4
            vmovups xmmword ptr [rsp+190h], xmm6
            vmovaps xmm6, xmm0
            vshufps xmm0, xmm3, xmm3, 0AAh ; 'ª'
            vmovaps xmm0, xmm0
            vmovss  dword ptr [rsp+318h+var_118+8], xmm2
            vmovss  dword ptr [rsp+318h+var_118+14h], xmm0
            vmovsd  xmm10, qword ptr [rsp+318h+var_118+10h]
            vmovss  dword ptr [rsp+318h+var_118+4], xmm4
            vmovss  dword ptr [rsp+318h+var_118+0Ch], xmm3
            vmovups xmm11, xmmword ptr [rsp+318h+var_118]
            vmovups xmmword ptr [rsp+170h], xmm5
            vmovups [rsp+318h+var_268], xmm4
            vmovups [rsp+318h+var_258], xmm2
            vmovaps xmm14, xmm3
            vmovups [rsp+318h+var_298], xmm6
            vmovups [rsp+318h+var_248], xmm0
          }
          if ( v140 > v141 )
          {
            __asm { vmovups xmm5, [rsp+318h+var_2B8] }
            goto LABEL_63;
          }
        }
        if ( v140 > v141 )
        {
          __asm { vmovups xmm5, [rsp+318h+var_2B8] }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm6, xmm14
            vmulss  xmm1, xmm0, xmm5
            vmulss  xmm12, xmm1, xmm7
          }
          do
          {
            v210 = remap[v141];
            __asm
            {
              vmovups xmmword ptr [rsp+318h+var_148.midPoint], xmm9
              vmovsd  qword ptr [rsp+318h+var_148.halfSize+4], xmm8
            }
            Bounds_Expand(&v308, &_RSI[v210]);
            v211 = remap[v141];
            __asm
            {
              vmovups xmmword ptr [rsp+318h+var_130.midPoint], xmm11
              vmovsd  qword ptr [rsp+318h+var_130.halfSize+4], xmm10
            }
            Bounds_Expand(&v309, &_RSI[v211]);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+318h+var_148.halfSize]
              vmulss  xmm1, xmm0, dword ptr [rsp+318h+var_148.halfSize+4]
              vmulss  xmm2, xmm1, dword ptr [rsp+318h+var_148.halfSize+8]
              vmovups xmm5, [rsp+318h+var_2B8]
              vmulss  xmm3, xmm2, xmm7
              vmulss  xmm0, xmm15, xmm13
              vmulss  xmm1, xmm0, xmm5
              vmovss  xmm0, dword ptr [rsp+318h+var_130.halfSize]
              vmulss  xmm2, xmm1, xmm7
              vmulss  xmm1, xmm0, dword ptr [rsp+318h+var_130.halfSize+4]
              vsubss  xmm4, xmm3, xmm2
              vmulss  xmm2, xmm1, dword ptr [rsp+318h+var_130.halfSize+8]
              vmulss  xmm3, xmm2, xmm7
              vsubss  xmm0, xmm3, xmm12
              vcomiss xmm4, xmm0
            }
            if ( !(v43 | v42) )
              break;
            v226 = remap[v141];
            --v21;
            __asm { vmovups xmm0, [rsp+318h+var_218] }
            --v141;
            _RCX = 3 * v226;
            HIDWORD(v300) = 0;
            HIDWORD(v301) = 0;
            HIDWORD(v299) = 0;
            HIDWORD(v298) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rsp+140h]
              vmovups xmm6, xmmword ptr [rsp+150h]
              vmovups xmm4, xmmword ptr [rsp+120h]
              vmovss  xmm6, xmm6, xmm0
              vmovss  xmm0, dword ptr [rsi+rcx*8]
              vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_238], 10h
              vinsertps xmm6, xmm6, dword ptr [rsp+318h+var_228], 20h
              vmovss  xmm3, xmm3, xmm13
              vinsertps xmm3, xmm3, xmm15, 10h
              vinsertps xmm3, xmm3, xmm5, 20h ; ' '
              vmovups xmm5, xmmword ptr [rsp+130h]
              vmovss  xmm5, xmm5, xmm0
              vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+4], 10h
              vinsertps xmm5, xmm5, dword ptr [rsi+rcx*8+8], 20h ; ' '
              vmovss  xmm0, dword ptr [rsi+rcx*8+0Ch]
              vmovss  xmm4, xmm4, xmm0
              vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+10h], 10h
              vinsertps xmm4, xmm4, dword ptr [rsi+rcx*8+14h], 20h ; ' '
              vaddps  xmm1, xmm5, xmm4
              vsubps  xmm0, xmm5, xmm4
              vsubps  xmm2, xmm6, xmm3
              vmovups xmmword ptr [rsp+120h], xmm4
              vminps  xmm4, xmm0, xmm2
              vmovups xmmword ptr [rsp+140h], xmm3
              vaddps  xmm3, xmm6, xmm3
              vmaxps  xmm0, xmm1, xmm3
              vaddps  xmm1, xmm0, xmm4
              vmulps  xmm2, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
              vsubps  xmm3, xmm2, xmm4
              vmovaps xmm4, xmm2
              vmovss  dword ptr [rsp+318h+var_118+18h], xmm2
              vmovups [rsp+318h+var_218], xmm4
              vshufps xmm4, xmm2, xmm2, 55h ; 'U'
              vshufps xmm2, xmm2, xmm2, 0AAh ; 'ª'
              vmovups xmmword ptr [rsp+130h], xmm5
              vshufps xmm5, xmm3, xmm3, 0AAh ; 'ª'
              vmovaps xmm2, xmm2
              vmovaps xmm4, xmm4
              vshufps xmm0, xmm3, xmm3, 55h ; 'U'
              vmovaps xmm5, xmm5
              vmovss  dword ptr [rsp+318h+var_F8], xmm2
              vmovss  dword ptr [rsp+318h+var_118+1Ch], xmm4
              vmovss  dword ptr [rsp+318h+var_F8+4], xmm3
              vmovups xmm9, xmmword ptr [rsp+318h+var_118+18h]
              vmovss  dword ptr [rsp+318h+var_F8+8], xmm0
              vmovss  dword ptr [rsp+318h+var_F8+0Ch], xmm5
              vmovsd  xmm8, qword ptr [rsp+318h+var_F8+8]
              vmovups xmmword ptr [rsp+150h], xmm6
              vmovups [rsp+318h+var_238], xmm4
              vmovups [rsp+318h+var_228], xmm2
              vmovaps xmm13, xmm3
              vmovaps xmm15, xmm0
              vmovups [rsp+318h+var_2B8], xmm5
            }
          }
          while ( v140 <= v141 );
        }
        v22 = v280;
LABEL_63:
        if ( v140 >= v141 )
        {
          if ( v140 != v141 )
            goto LABEL_66;
          if ( 2 * v22 < v18 )
          {
            v280 = ++v22;
            ++v140;
            goto LABEL_66;
          }
        }
        else
        {
          v266 = remap[v140];
          ++v22;
          remap[v140++] = remap[v141];
          remap[v141] = v266;
          v280 = v22;
        }
        --v21;
        --v141;
LABEL_66:
        v147 = v140 <= v141;
        goto LABEL_67;
      }
    }
  }
LABEL_68:
  __asm
  {
    vmovaps xmm15, [rsp+318h+var_D8]
    vmovaps xmm14, [rsp+318h+var_C8]
    vmovaps xmm13, [rsp+318h+var_B8]
    vmovaps xmm12, [rsp+318h+var_A8]
    vmovaps xmm11, [rsp+318h+var_98]
    vmovaps xmm10, [rsp+318h+var_88]
    vmovaps xmm9, [rsp+318h+var_78]
    vmovaps xmm8, [rsp+318h+var_68]
    vmovaps xmm7, [rsp+318h+var_58]
    vmovaps xmm6, [rsp+318h+var_48]
  }
  if ( !v22 || v22 == v18 )
    return 0i64;
  result = 1i64;
  *v296 = v22;
  *v297 = v21 + 1;
  return result;
}

