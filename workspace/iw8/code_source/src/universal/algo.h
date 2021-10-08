/*
==============
Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>
==============
*/

void __fastcall Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>(XPakWorkData::ItemInfo *pArray, XPakWorkData::ItemInfo (*scratchBuffer)[205313], const int low, const int pivot, const int high, const XPak_CompareItemOffset compareFunc)
{
  ??$Algo_Merge@UItemInfo@XPakWorkData@@$0DCCAB@UXPak_CompareItemOffset@@@@YAXPEAUItemInfo@XPakWorkData@@AEAY0DCCAB@U01@HHHUXPak_CompareItemOffset@@@Z(pArray, scratchBuffer, low, pivot, high, compareFunc);
}

/*
==============
Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>
==============
*/

void __fastcall Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>(XPakWorkData::ItemInfo *pArray, XPakWorkData::ItemInfo (*scratchBuffer)[205313], const int low, const int high, const XPak_CompareItemPartHashes compareFunc)
{
  ??$Algo_MergeSort@UItemInfo@XPakWorkData@@$0DCCAB@UXPak_CompareItemPartHashes@@@@YAXPEAUItemInfo@XPakWorkData@@AEAY0DCCAB@U01@HHUXPak_CompareItemPartHashes@@@Z(pArray, scratchBuffer, low, high, compareFunc);
}

/*
==============
Algo_MergeSortIndices<GPUTimeStampNode>
==============
*/

void __fastcall Algo_MergeSortIndices<GPUTimeStampNode>(const GPUTimeStampNode *pArray, int *indices, int *scratchIndices, int low, int high, AlgoCompareVal (__fastcall *pCompare)(const GPUTimeStampNode *, const GPUTimeStampNode *))
{
  ??$Algo_MergeSortIndices@VGPUTimeStampNode@@@@YAXPEBVGPUTimeStampNode@@PEAH1HHP6A?AW4AlgoCompareVal@@AEBV0@2@Z@Z(pArray, indices, scratchIndices, low, high, pCompare);
}

/*
==============
Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>
==============
*/

void __fastcall Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>(XPakWorkData::ItemInfo *pArray, XPakWorkData::ItemInfo (*scratchBuffer)[205313], const int low, const int high, const XPak_CompareItemOffset compareFunc)
{
  ??$Algo_MergeSort@UItemInfo@XPakWorkData@@$0DCCAB@UXPak_CompareItemOffset@@@@YAXPEAUItemInfo@XPakWorkData@@AEAY0DCCAB@U01@HHUXPak_CompareItemOffset@@@Z(pArray, scratchBuffer, low, high, compareFunc);
}

/*
==============
Algo_MergeIndices<GPUTimeStampNode>
==============
*/

void __fastcall Algo_MergeIndices<GPUTimeStampNode>(const GPUTimeStampNode *pArray, int *indices, int *scratchIndices, int low, int pivot, int high, AlgoCompareVal (__fastcall *pCompare)(const GPUTimeStampNode *, const GPUTimeStampNode *))
{
  ??$Algo_MergeIndices@VGPUTimeStampNode@@@@YAXPEBVGPUTimeStampNode@@PEAH1HHHP6A?AW4AlgoCompareVal@@AEBV0@2@Z@Z(pArray, indices, scratchIndices, low, pivot, high, pCompare);
}

/*
==============
Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>
==============
*/

void __fastcall Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>(XPakWorkData::ItemInfo *pArray, XPakWorkData::ItemInfo (*scratchBuffer)[205313], const int low, const int pivot, const int high, const XPak_CompareItemPartHashes compareFunc)
{
  ??$Algo_Merge@UItemInfo@XPakWorkData@@$0DCCAB@UXPak_CompareItemPartHashes@@@@YAXPEAUItemInfo@XPakWorkData@@AEAY0DCCAB@U01@HHHUXPak_CompareItemPartHashes@@@Z(pArray, scratchBuffer, low, pivot, high, compareFunc);
}

/*
==============
Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>
==============
*/
void Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>(XPakWorkData::ItemInfo *pArray, XPakWorkData::ItemInfo (*scratchBuffer)[205313], const int low, const int pivot, const int high)
{
  XPakWorkData::ItemInfo *v5; 
  XPakWorkData::ItemInfo (*v7)[205313]; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  signed int v14; 
  int v15; 
  __int64 v17; 
  __int64 v18; 
  __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v37; 

  v5 = pArray;
  v7 = scratchBuffer;
  v8 = low;
  v9 = pivot - low;
  if ( (unsigned int)(pivot - low) >= 0x32201 )
  {
    v33 = 205313;
    v31 = pivot - low;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 22, ASSERT_TYPE_ASSERT, "( pivot - low ) < ( SCRATCH_SIZE )", "%s < %s\n\t%i, %i", "pivot - low", "SCRATCH_SIZE", v31, v33) )
      __debugbreak();
    v5 = pArray;
    v7 = scratchBuffer;
  }
  if ( v9 >= 0 )
  {
    v10 = v9 + 1i64;
    _RCX = v7;
    _RDX = (char *)v5 + 16 * v8 - (_QWORD)v7;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx+rcx]
        vmovups xmmword ptr [rcx], xmm0
      }
      _RCX = (XPakWorkData::ItemInfo (*)[205313])((char *)_RCX + 16);
      --v10;
    }
    while ( v10 );
  }
  v14 = 0;
  v15 = pivot + 1;
  v37 = pivot + 1;
  if ( v9 >= 0 )
  {
    _RBP = &(*v7)[0].entryInfoLow;
    v17 = v15;
    v18 = high;
    _R12 = &v5[v8];
    v34 = v15;
    _R15 = &v5[v15].entryInfoLow;
    do
    {
      if ( v17 > v18 )
      {
        if ( v14 <= v9 )
        {
          _RBP = &pArray[(int)v8];
          _RSI = &(*scratchBuffer)[v14];
          do
          {
            if ( (int)v8 > high )
            {
              LODWORD(v32) = high;
              LODWORD(v30) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 49, ASSERT_TYPE_ASSERT, "( arrayIndex ) <= ( high )", "%s <= %s\n\t%i, %i", "arrayIndex", "high", v30, v32) )
                __debugbreak();
            }
            if ( (unsigned int)v14 >= 0x32201 )
            {
              LODWORD(v29) = 205313;
              LODWORD(v28) = v14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( scratchIndex ) < (unsigned)( ( sizeof( *array_counter( scratchBuffer ) ) + 0 ) )", "scratchIndex doesn't index scratchBuffer\n\t%i not in [0, %i)", v28, v29) )
                __debugbreak();
            }
            __asm
            {
              vmovups xmm0, xmmword ptr [rsi]
              vmovups xmmword ptr [rbp+0], xmm0
            }
            ++_RBP;
            ++v14;
            ++_RSI;
            LODWORD(v8) = v8 + 1;
          }
          while ( v14 <= v9 );
          v15 = v37;
        }
        break;
      }
      if ( (int)v8 > high )
      {
        LODWORD(v32) = high;
        LODWORD(v30) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 35, ASSERT_TYPE_ASSERT, "( arrayIndex ) <= ( high )", "%s <= %s\n\t%i, %i", "arrayIndex", "high", v30, v32) )
          __debugbreak();
      }
      if ( (unsigned int)v14 >= 0x32201 )
      {
        LODWORD(v29) = 205313;
        LODWORD(v28) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( scratchIndex ) < (unsigned)( ( sizeof( *array_counter( scratchBuffer ) ) + 0 ) )", "scratchIndex doesn't index scratchBuffer\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      if ( !*_RBP && !_RBP[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v21 = *(_QWORD *)_RBP;
      if ( !*_R15 && !_R15[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v22 = (unsigned __int8)*(_QWORD *)(v21 + 24);
      v23 = (unsigned __int8)*(_QWORD *)(*(_QWORD *)_R15 + 24i64);
      if ( v22 == v23 )
      {
        if ( *(_QWORD *)(v21 + 8) > *(_QWORD *)(*(_QWORD *)_R15 + 8i64) )
        {
LABEL_31:
          v15 = v37 + 1;
          __asm { vmovups xmm0, xmmword ptr [r15-4] }
          v17 = v34 + 1;
          ++v37;
          ++v34;
          _R15 += 4;
          goto LABEL_28;
        }
      }
      else if ( v22 >= v23 )
      {
        goto LABEL_31;
      }
      __asm { vmovups xmm0, xmmword ptr [rbp-4] }
      v17 = v34;
      ++v14;
      v15 = v37;
      _RBP += 4;
LABEL_28:
      __asm { vmovups xmmword ptr [r12], xmm0 }
      ++_R12;
      LODWORD(v8) = v8 + 1;
      v18 = high;
    }
    while ( v14 <= v9 );
  }
  if ( (_DWORD)v8 != v15 )
  {
    LODWORD(v32) = v15;
    LODWORD(v30) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 54, ASSERT_TYPE_ASSERT, "( arrayIndex ) == ( rightIndex )", "%s == %s\n\t%i, %i", "arrayIndex", "rightIndex", v30, v32) )
      __debugbreak();
  }
}

/*
==============
Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>
==============
*/
void Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>(XPakWorkData::ItemInfo *pArray, XPakWorkData::ItemInfo (*scratchBuffer)[205313], const int low, const int pivot, const int high)
{
  XPakWorkData::ItemInfo *v5; 
  XPakWorkData::ItemInfo (*v7)[205313]; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  signed int v14; 
  int v15; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int64 v21; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v35; 

  v5 = pArray;
  v7 = scratchBuffer;
  v8 = low;
  v9 = pivot - low;
  if ( (unsigned int)(pivot - low) >= 0x32201 )
  {
    v31 = 205313;
    v29 = pivot - low;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 22, ASSERT_TYPE_ASSERT, "( pivot - low ) < ( SCRATCH_SIZE )", "%s < %s\n\t%i, %i", "pivot - low", "SCRATCH_SIZE", v29, v31) )
      __debugbreak();
    v5 = pArray;
    v7 = scratchBuffer;
  }
  if ( v9 >= 0 )
  {
    v10 = v9 + 1i64;
    _RCX = v7;
    _RDX = (char *)v5 + 16 * v8 - (_QWORD)v7;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx+rcx]
        vmovups xmmword ptr [rcx], xmm0
      }
      _RCX = (XPakWorkData::ItemInfo (*)[205313])((char *)_RCX + 16);
      --v10;
    }
    while ( v10 );
  }
  v14 = 0;
  v15 = pivot + 1;
  v35 = pivot + 1;
  if ( v9 >= 0 )
  {
    _RBP = &(*v7)[0].entryInfoLow;
    v17 = v15;
    v18 = high;
    _R12 = &v5[v8];
    v32 = v15;
    _R14 = &v5[v15].entryInfoLow;
    while ( v17 <= v18 )
    {
      if ( (int)v8 > high )
      {
        LODWORD(v30) = high;
        LODWORD(v28) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 35, ASSERT_TYPE_ASSERT, "( arrayIndex ) <= ( high )", "%s <= %s\n\t%i, %i", "arrayIndex", "high", v28, v30) )
          __debugbreak();
      }
      if ( (unsigned int)v14 >= 0x32201 )
      {
        LODWORD(v27) = 205313;
        LODWORD(v26) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( scratchIndex ) < (unsigned)( ( sizeof( *array_counter( scratchBuffer ) ) + 0 ) )", "scratchIndex doesn't index scratchBuffer\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      if ( !*_RBP && !_RBP[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v21 = **(_QWORD **)_RBP;
      if ( !*_R14 && !_R14[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v15 = v35;
      v17 = v32;
      if ( v21 <= **(_QWORD **)_R14 )
      {
        __asm { vmovups xmm0, xmmword ptr [rbp-4] }
        ++v14;
        _RBP += 4;
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr [r14-4] }
        v15 = v35 + 1;
        v17 = v32 + 1;
        ++v35;
        _R14 += 4;
        ++v32;
      }
      __asm { vmovups xmmword ptr [r12], xmm0 }
      ++_R12;
      LODWORD(v8) = v8 + 1;
      v18 = high;
      if ( v14 > v9 )
        goto LABEL_40;
    }
    if ( v14 <= v9 )
    {
      _RBP = &pArray[(int)v8];
      _RSI = &(*scratchBuffer)[v14];
      do
      {
        if ( (int)v8 > high )
        {
          LODWORD(v30) = high;
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 49, ASSERT_TYPE_ASSERT, "( arrayIndex ) <= ( high )", "%s <= %s\n\t%i, %i", "arrayIndex", "high", v28, v30) )
            __debugbreak();
        }
        if ( (unsigned int)v14 >= 0x32201 )
        {
          LODWORD(v27) = 205313;
          LODWORD(v26) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( scratchIndex ) < (unsigned)( ( sizeof( *array_counter( scratchBuffer ) ) + 0 ) )", "scratchIndex doesn't index scratchBuffer\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups xmmword ptr [rbp+0], xmm0
        }
        ++_RBP;
        ++v14;
        ++_RSI;
        LODWORD(v8) = v8 + 1;
      }
      while ( v14 <= v9 );
      v15 = v35;
    }
  }
LABEL_40:
  if ( (_DWORD)v8 != v15 )
  {
    LODWORD(v30) = v15;
    LODWORD(v28) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 54, ASSERT_TYPE_ASSERT, "( arrayIndex ) == ( rightIndex )", "%s == %s\n\t%i, %i", "arrayIndex", "rightIndex", v28, v30) )
      __debugbreak();
  }
}

/*
==============
Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>
==============
*/
void Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>(XPakWorkData::ItemInfo *pArray, XPakWorkData::ItemInfo (*scratchBuffer)[205313], const int low, const int high, const XPak_CompareItemOffset compareFunc)
{
  int v9; 

  if ( low < high )
  {
    v9 = (low + high) / 2;
    Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>(pArray, scratchBuffer, low, v9, compareFunc);
    Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>(pArray, scratchBuffer, v9 + 1, high, compareFunc);
    Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemOffset>(pArray, scratchBuffer, low, v9, high, compareFunc);
  }
}

/*
==============
Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>
==============
*/
void Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>(XPakWorkData::ItemInfo *pArray, XPakWorkData::ItemInfo (*scratchBuffer)[205313], const int low, const int high, const XPak_CompareItemPartHashes compareFunc)
{
  int v9; 

  if ( low < high )
  {
    v9 = (low + high) / 2;
    Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>(pArray, scratchBuffer, low, v9, compareFunc);
    Algo_MergeSort<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>(pArray, scratchBuffer, v9 + 1, high, compareFunc);
    Algo_Merge<XPakWorkData::ItemInfo,205313,XPak_CompareItemPartHashes>(pArray, scratchBuffer, low, v9, high, compareFunc);
  }
}

/*
==============
Algo_MergeIndices<GPUTimeStampNode>
==============
*/
void Algo_MergeIndices<GPUTimeStampNode>(const GPUTimeStampNode *pArray, int *indices, int *scratchIndices, int low, int pivot, int high, AlgoCompareVal (*pCompare)(const GPUTimeStampNode *, const GPUTimeStampNode *))
{
  const GPUTimeStampNode *v7; 
  int v8; 
  int *v9; 
  int v10; 
  __int64 v11; 
  int *v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  AlgoCompareVal (__fastcall *v16)(const GPUTimeStampNode *, const GPUTimeStampNode *); 
  int *v17; 
  __int64 v18; 
  int *v19; 
  int *v20; 
  __int64 v21; 
  int *v22; 
  __int64 v23; 
  signed __int64 v24; 
  int *v25; 
  __int64 v26; 
  __int64 v27; 
  int v31; 

  v7 = pArray;
  v8 = pivot;
  v9 = scratchIndices;
  v10 = pivot + 1;
  v11 = low;
  v12 = indices;
  v27 = v11;
  v13 = v11;
  v31 = v11;
  v14 = v11;
  v15 = v11;
  if ( v11 <= pivot )
  {
    v16 = pCompare;
    v17 = &scratchIndices[v11];
    v18 = v10;
    do
    {
      if ( v18 > high )
        break;
      if ( v16(&v7[indices[v15]], &v7[indices[v18]]) == ALGO_GREAT )
      {
        v19 = &indices[v18];
        ++v10;
        ++v18;
      }
      else
      {
        v19 = &indices[v15];
        LODWORD(v11) = v11 + 1;
        ++v15;
      }
      v16 = pCompare;
      *v17++ = *v19;
      v7 = pArray;
      v13 = ++v31;
    }
    while ( v15 <= pivot );
    v9 = scratchIndices;
    v12 = indices;
    v14 = v27;
    v8 = pivot;
  }
  if ( (int)v11 <= v8 )
  {
    if ( (int)v11 <= (__int64)pivot )
    {
      v22 = &v12[(int)v11];
      v23 = pivot - (__int64)(int)v11 + 1;
      do
      {
        *(int *)((char *)v22 + (_QWORD)v9 + 4 * (v13 - (__int64)(int)v11) - (_QWORD)v12) = *v22;
        ++v22;
        --v23;
      }
      while ( v23 );
    }
  }
  else if ( v10 <= (__int64)high )
  {
    v20 = &v12[v10];
    v21 = high - (__int64)v10 + 1;
    do
    {
      *(int *)((char *)v20 + (_QWORD)v9 + 4 * (v13 - (__int64)v10) - (_QWORD)v12) = *v20;
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  if ( v14 <= high )
  {
    v24 = (char *)v9 - (char *)v12;
    v25 = &v12[v14];
    v26 = high - v14 + 1;
    do
    {
      *v25 = *(int *)((char *)v25 + v24);
      ++v25;
      --v26;
    }
    while ( v26 );
  }
}

/*
==============
Algo_MergeSortIndices<GPUTimeStampNode>
==============
*/
void Algo_MergeSortIndices<GPUTimeStampNode>(const GPUTimeStampNode *pArray, int *indices, int *scratchIndices, int low, int high, AlgoCompareVal (*pCompare)(const GPUTimeStampNode *, const GPUTimeStampNode *))
{
  __int64 v6; 
  int *v7; 
  __int64 v8; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int *v17; 
  int v18; 
  int *v19; 
  int *v20; 
  __int64 v21; 
  int *v22; 
  __int64 v23; 
  signed __int64 v24; 
  int *v25; 
  __int64 v26; 
  __int64 v27; 
  int v30; 
  int higha; 

  v6 = high;
  v7 = scratchIndices;
  v8 = low;
  if ( low < high )
  {
    v11 = (low + high) / 2;
    Algo_MergeSortIndices<GPUTimeStampNode>(pArray, indices, scratchIndices, low, (low + high) / 2, pCompare);
    LODWORD(v12) = v11 + 1;
    higha = v11 + 1;
    Algo_MergeSortIndices<GPUTimeStampNode>(pArray, indices, v7, v11 + 1, v6, pCompare);
    v27 = v8;
    v13 = v8;
    v30 = v8;
    v14 = v8;
    v15 = v8;
    v16 = v11;
    if ( v8 <= v11 )
    {
      v17 = &v7[v8];
      v12 = (int)v12;
      v18 = higha;
      do
      {
        if ( v12 > v6 )
          break;
        if ( pCompare(&pArray[indices[v15]], &pArray[indices[v12]]) == ALGO_GREAT )
        {
          v19 = &indices[v12];
          ++v18;
          ++v12;
        }
        else
        {
          v19 = &indices[v15];
          LODWORD(v8) = v8 + 1;
          ++v15;
        }
        *v17++ = *v19;
        v13 = ++v30;
      }
      while ( v15 <= v16 );
      v14 = v27;
      LODWORD(v11) = v16;
      LODWORD(v12) = v18;
      v7 = scratchIndices;
    }
    if ( (int)v8 <= (int)v11 )
    {
      if ( (int)v8 <= v16 )
      {
        v22 = &indices[(int)v8];
        v23 = v16 - (int)v8 + 1;
        do
        {
          *(int *)((char *)v22 + (_QWORD)v7 + 4 * (v13 - (__int64)(int)v8) - (_QWORD)indices) = *v22;
          ++v22;
          --v23;
        }
        while ( v23 );
      }
    }
    else if ( (int)v12 <= v6 )
    {
      v20 = &indices[(int)v12];
      v21 = v6 - (int)v12 + 1;
      do
      {
        *(int *)((char *)v20 + (_QWORD)v7 + 4 * (v13 - (__int64)(int)v12) - (_QWORD)indices) = *v20;
        ++v20;
        --v21;
      }
      while ( v21 );
    }
    if ( v14 <= v6 )
    {
      v24 = (char *)v7 - (char *)indices;
      v25 = &indices[v14];
      v26 = v6 - v14 + 1;
      do
      {
        *v25 = *(int *)((char *)v25 + v24);
        ++v25;
        --v26;
      }
      while ( v26 );
    }
  }
}

