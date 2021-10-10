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
  XPakWorkData::ItemInfo (*v11)[205313]; 
  signed int v12; 
  int v13; 
  unsigned int *p_entryInfoLow; 
  __int64 v15; 
  __int64 v16; 
  XPakWorkData::ItemInfo *v17; 
  unsigned int *v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  XPakWorkData::ItemInfo v22; 
  XPakWorkData::ItemInfo *v23; 
  XPakWorkData::ItemInfo *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  int v34; 

  v5 = pArray;
  v7 = scratchBuffer;
  v8 = low;
  v9 = pivot - low;
  if ( (unsigned int)(pivot - low) >= 0x32201 )
  {
    v30 = 205313;
    v28 = pivot - low;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 22, ASSERT_TYPE_ASSERT, "( pivot - low ) < ( SCRATCH_SIZE )", "%s < %s\n\t%i, %i", "pivot - low", "SCRATCH_SIZE", v28, v30) )
      __debugbreak();
    v5 = pArray;
    v7 = scratchBuffer;
  }
  if ( v9 >= 0 )
  {
    v10 = v9 + 1i64;
    v11 = v7;
    do
    {
      *(XPakWorkData::ItemInfo *)v11 = *(XPakWorkData::ItemInfo *)((char *)&(*v11)[0] + (_QWORD)v5 + 16 * v8 - (_QWORD)v7);
      v11 = (XPakWorkData::ItemInfo (*)[205313])((char *)v11 + 16);
      --v10;
    }
    while ( v10 );
  }
  v12 = 0;
  v13 = pivot + 1;
  v34 = pivot + 1;
  if ( v9 >= 0 )
  {
    p_entryInfoLow = &(*v7)[0].entryInfoLow;
    v15 = v13;
    v16 = high;
    v17 = &v5[v8];
    v31 = v13;
    v18 = &v5[v13].entryInfoLow;
    do
    {
      if ( v15 > v16 )
      {
        if ( v12 <= v9 )
        {
          v23 = &pArray[(int)v8];
          v24 = &(*scratchBuffer)[v12];
          do
          {
            if ( (int)v8 > high )
            {
              LODWORD(v29) = high;
              LODWORD(v27) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 49, ASSERT_TYPE_ASSERT, "( arrayIndex ) <= ( high )", "%s <= %s\n\t%i, %i", "arrayIndex", "high", v27, v29) )
                __debugbreak();
            }
            if ( (unsigned int)v12 >= 0x32201 )
            {
              LODWORD(v26) = 205313;
              LODWORD(v25) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( scratchIndex ) < (unsigned)( ( sizeof( *array_counter( scratchBuffer ) ) + 0 ) )", "scratchIndex doesn't index scratchBuffer\n\t%i not in [0, %i)", v25, v26) )
                __debugbreak();
            }
            *v23++ = *v24;
            ++v12;
            ++v24;
            LODWORD(v8) = v8 + 1;
          }
          while ( v12 <= v9 );
          v13 = v34;
        }
        break;
      }
      if ( (int)v8 > high )
      {
        LODWORD(v29) = high;
        LODWORD(v27) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 35, ASSERT_TYPE_ASSERT, "( arrayIndex ) <= ( high )", "%s <= %s\n\t%i, %i", "arrayIndex", "high", v27, v29) )
          __debugbreak();
      }
      if ( (unsigned int)v12 >= 0x32201 )
      {
        LODWORD(v26) = 205313;
        LODWORD(v25) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( scratchIndex ) < (unsigned)( ( sizeof( *array_counter( scratchBuffer ) ) + 0 ) )", "scratchIndex doesn't index scratchBuffer\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      if ( !*p_entryInfoLow && !p_entryInfoLow[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v19 = *(_QWORD *)p_entryInfoLow;
      if ( !*v18 && !v18[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v20 = (unsigned __int8)*(_QWORD *)(v19 + 24);
      v21 = (unsigned __int8)*(_QWORD *)(*(_QWORD *)v18 + 24i64);
      if ( v20 == v21 )
      {
        if ( *(_QWORD *)(v19 + 8) > *(_QWORD *)(*(_QWORD *)v18 + 8i64) )
        {
LABEL_31:
          v13 = v34 + 1;
          v22 = *(XPakWorkData::ItemInfo *)(v18 - 1);
          v15 = v31 + 1;
          ++v34;
          ++v31;
          v18 += 4;
          goto LABEL_28;
        }
      }
      else if ( v20 >= v21 )
      {
        goto LABEL_31;
      }
      v22 = *(XPakWorkData::ItemInfo *)(p_entryInfoLow - 1);
      v15 = v31;
      ++v12;
      v13 = v34;
      p_entryInfoLow += 4;
LABEL_28:
      *v17++ = v22;
      LODWORD(v8) = v8 + 1;
      v16 = high;
    }
    while ( v12 <= v9 );
  }
  if ( (_DWORD)v8 != v13 )
  {
    LODWORD(v29) = v13;
    LODWORD(v27) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 54, ASSERT_TYPE_ASSERT, "( arrayIndex ) == ( rightIndex )", "%s == %s\n\t%i, %i", "arrayIndex", "rightIndex", v27, v29) )
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
  XPakWorkData::ItemInfo (*v11)[205313]; 
  signed int v12; 
  int v13; 
  unsigned int *p_entryInfoLow; 
  __int64 v15; 
  __int64 v16; 
  XPakWorkData::ItemInfo *v17; 
  unsigned int *v18; 
  unsigned __int64 v19; 
  XPakWorkData::ItemInfo v20; 
  XPakWorkData::ItemInfo *v21; 
  XPakWorkData::ItemInfo *v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  int v32; 

  v5 = pArray;
  v7 = scratchBuffer;
  v8 = low;
  v9 = pivot - low;
  if ( (unsigned int)(pivot - low) >= 0x32201 )
  {
    v28 = 205313;
    v26 = pivot - low;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 22, ASSERT_TYPE_ASSERT, "( pivot - low ) < ( SCRATCH_SIZE )", "%s < %s\n\t%i, %i", "pivot - low", "SCRATCH_SIZE", v26, v28) )
      __debugbreak();
    v5 = pArray;
    v7 = scratchBuffer;
  }
  if ( v9 >= 0 )
  {
    v10 = v9 + 1i64;
    v11 = v7;
    do
    {
      *(XPakWorkData::ItemInfo *)v11 = *(XPakWorkData::ItemInfo *)((char *)&(*v11)[0] + (_QWORD)v5 + 16 * v8 - (_QWORD)v7);
      v11 = (XPakWorkData::ItemInfo (*)[205313])((char *)v11 + 16);
      --v10;
    }
    while ( v10 );
  }
  v12 = 0;
  v13 = pivot + 1;
  v32 = pivot + 1;
  if ( v9 >= 0 )
  {
    p_entryInfoLow = &(*v7)[0].entryInfoLow;
    v15 = v13;
    v16 = high;
    v17 = &v5[v8];
    v29 = v13;
    v18 = &v5[v13].entryInfoLow;
    while ( v15 <= v16 )
    {
      if ( (int)v8 > high )
      {
        LODWORD(v27) = high;
        LODWORD(v25) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 35, ASSERT_TYPE_ASSERT, "( arrayIndex ) <= ( high )", "%s <= %s\n\t%i, %i", "arrayIndex", "high", v25, v27) )
          __debugbreak();
      }
      if ( (unsigned int)v12 >= 0x32201 )
      {
        LODWORD(v24) = 205313;
        LODWORD(v23) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 36, ASSERT_TYPE_ASSERT, "(unsigned)( scratchIndex ) < (unsigned)( ( sizeof( *array_counter( scratchBuffer ) ) + 0 ) )", "scratchIndex doesn't index scratchBuffer\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( !*p_entryInfoLow && !p_entryInfoLow[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v19 = **(_QWORD **)p_entryInfoLow;
      if ( !*v18 && !v18[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xpak\\xpak_game.cpp", 1149, ASSERT_TYPE_ASSERT, "(info->entryInfoLow || info->entryInfoHigh)", (const char *)&queryFormat, "info->entryInfoLow || info->entryInfoHigh") )
        __debugbreak();
      v13 = v32;
      v15 = v29;
      if ( v19 <= **(_QWORD **)v18 )
      {
        v20 = *(XPakWorkData::ItemInfo *)(p_entryInfoLow - 1);
        ++v12;
        p_entryInfoLow += 4;
      }
      else
      {
        v20 = *(XPakWorkData::ItemInfo *)(v18 - 1);
        v13 = v32 + 1;
        v15 = v29 + 1;
        ++v32;
        v18 += 4;
        ++v29;
      }
      *v17++ = v20;
      LODWORD(v8) = v8 + 1;
      v16 = high;
      if ( v12 > v9 )
        goto LABEL_40;
    }
    if ( v12 <= v9 )
    {
      v21 = &pArray[(int)v8];
      v22 = &(*scratchBuffer)[v12];
      do
      {
        if ( (int)v8 > high )
        {
          LODWORD(v27) = high;
          LODWORD(v25) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 49, ASSERT_TYPE_ASSERT, "( arrayIndex ) <= ( high )", "%s <= %s\n\t%i, %i", "arrayIndex", "high", v25, v27) )
            __debugbreak();
        }
        if ( (unsigned int)v12 >= 0x32201 )
        {
          LODWORD(v24) = 205313;
          LODWORD(v23) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( scratchIndex ) < (unsigned)( ( sizeof( *array_counter( scratchBuffer ) ) + 0 ) )", "scratchIndex doesn't index scratchBuffer\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        *v21++ = *v22;
        ++v12;
        ++v22;
        LODWORD(v8) = v8 + 1;
      }
      while ( v12 <= v9 );
      v13 = v32;
    }
  }
LABEL_40:
  if ( (_DWORD)v8 != v13 )
  {
    LODWORD(v27) = v13;
    LODWORD(v25) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\algo.h", 54, ASSERT_TYPE_ASSERT, "( arrayIndex ) == ( rightIndex )", "%s == %s\n\t%i, %i", "arrayIndex", "rightIndex", v25, v27) )
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

