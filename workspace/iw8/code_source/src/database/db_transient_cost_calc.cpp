/*
==============
TransientCostCalc_GetCurCost
==============
*/

unsigned __int64 __fastcall TransientCostCalc_GetCurCost(const TransientCostCalc *cost, bool isPreloading)
{
  return ?TransientCostCalc_GetCurCost@@YA_KAEBUTransientCostCalc@@_N@Z(cost, isPreloading);
}

/*
==============
TransientCostCalc_Reset
==============
*/

void __fastcall TransientCostCalc_Reset(TransientCostCalc *outCost)
{
  ?TransientCostCalc_Reset@@YAXAEAUTransientCostCalc@@@Z(outCost);
}

/*
==============
TransientCostCalc_GetCostToUnload
==============
*/

unsigned __int64 __fastcall TransientCostCalc_GetCostToUnload(const TransientCostCalc *cost, unsigned int fileIndex, bool isPreloading)
{
  return ?TransientCostCalc_GetCostToUnload@@YA_KAEBUTransientCostCalc@@I_N@Z(cost, fileIndex, isPreloading);
}

/*
==============
TransientCostCalc_GetCostToLoad
==============
*/

unsigned __int64 __fastcall TransientCostCalc_GetCostToLoad(const TransientCostCalc *cost, unsigned int fileIndex, bool isPreloading)
{
  return ?TransientCostCalc_GetCostToLoad@@YA_KAEBUTransientCostCalc@@I_N@Z(cost, fileIndex, isPreloading);
}

/*
==============
TransientCostCalc_ValidateUsage
==============
*/

void __fastcall TransientCostCalc_ValidateUsage(const TransientCostCalc *cost)
{
  ?TransientCostCalc_ValidateUsage@@YAXAEBUTransientCostCalc@@@Z(cost);
}

/*
==============
TransientCostCalc_Unload
==============
*/

void __fastcall TransientCostCalc_Unload(TransientCostCalc *outCost, unsigned int fileIndex)
{
  ?TransientCostCalc_Unload@@YAXAEAUTransientCostCalc@@I@Z(outCost, fileIndex);
}

/*
==============
TransientCostCalc_Load
==============
*/

void __fastcall TransientCostCalc_Load(TransientCostCalc *outCost, unsigned int fileIndex)
{
  ?TransientCostCalc_Load@@YAXAEAUTransientCostCalc@@I@Z(outCost, fileIndex);
}

/*
==============
TransientCostCalc_Init
==============
*/

void __fastcall TransientCostCalc_Init(TransientCostCalc *outCost, const TransientCosts *costRef)
{
  ?TransientCostCalc_Init@@YAXAEAUTransientCostCalc@@AEBUTransientCosts@@@Z(outCost, costRef);
}

/*
==============
TransientCostCalc_GetContentSet
==============
*/
const StreamingContentSet *TransientCostCalc_GetContentSet(const TransientCosts *costRef)
{
  unsigned __int8 AlwaysloadedFlagSetType; 
  unsigned __int8 v3; 
  int v5; 
  int v6; 

  AlwaysloadedFlagSetType = DB_GetAlwaysloadedFlagSetType();
  v3 = AlwaysloadedFlagSetType;
  if ( AlwaysloadedFlagSetType >= 3u )
  {
    v6 = 3;
    v5 = AlwaysloadedFlagSetType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 38, ASSERT_TYPE_ASSERT, "(unsigned)( flagType ) < (unsigned)( ( sizeof( *array_counter( costRef.streamContents ) ) + 0 ) )", "flagType doesn't index ARRAY_COUNT( costRef.streamContents )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return (const StreamingContentSet *)((char *)costRef + 16 * v3);
}

/*
==============
TransientCostCalc_GetCostToLoad
==============
*/
unsigned __int64 TransientCostCalc_GetCostToLoad(const TransientCostCalc *cost, unsigned int fileIndex, bool isPreloading)
{
  __int64 v4; 
  const TransientCosts *costRef; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  const StreamingContentSet *ContentSet; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v4 = fileIndex;
  if ( !cost->costRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 45, ASSERT_TYPE_ASSERT, "(cost.costRef)", (const char *)&queryFormat, "cost.costRef") )
    __debugbreak();
  costRef = cost->costRef;
  if ( (unsigned int)v4 >= cost->costRef->transientCostCount )
  {
    LODWORD(v17) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( fileIndex ) < (unsigned)( costRef.transientCostCount )", "fileIndex doesn't index costRef.transientCostCount\n\t%i not in [0, %i)", v17, cost->costRef->transientCostCount) )
      __debugbreak();
  }
  v7 = v4;
  v8 = (unsigned __int64)costRef->residentPageSizes[v4] << 16;
  if ( isPreloading )
  {
    v9 = ((unsigned __int64)costRef->tempPageSizes[v7] << 16) + v8;
    v8 = DB_GetPerTransientAdditionalTempCostForPreload() + v9;
  }
  v10 = 0i64;
  ContentSet = TransientCostCalc_GetContentSet(costRef);
  v12 = ContentSet->contentCounts[v7];
  if ( v12 )
  {
    v13 = 8 * v7;
    v14 = v12;
    v19 = 8 * v7;
    do
    {
      LODWORD(v15) = (*(unsigned __int16 **)((char *)&ContentSet->contents->contents + v13))[v10];
      if ( (unsigned int)v15 >= costRef->streamingItemCount )
      {
        LODWORD(v18) = costRef->streamingItemCount;
        LODWORD(v17) = (*(unsigned __int16 **)((char *)&ContentSet->contents->contents + v13))[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 63, ASSERT_TYPE_ASSERT, "(unsigned)( streamItemIndex ) < (unsigned)( costRef.streamingItemCount )", "streamItemIndex doesn't index costRef.streamingItemCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( (unsigned __int16)v15 >= 0x4000u )
      {
        LODWORD(v18) = 0x4000;
        LODWORD(v17) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( streamItemIndex ) < (unsigned)( ( sizeof( *array_counter( cost.usedStreamedAssets ) ) + 0 ) )", "streamItemIndex doesn't index ARRAY_COUNT( cost.usedStreamedAssets )\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v15 = (unsigned __int16)v15;
      if ( cost->usedStreamedAssets[(unsigned __int16)v15] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 66, ASSERT_TYPE_ASSERT, "(cost.usedStreamedAssets[streamItemIndex] != 0xffffui16)", (const char *)&queryFormat, "cost.usedStreamedAssets[streamItemIndex] != UINT16_MAX") )
        __debugbreak();
      if ( !cost->usedStreamedAssets[v15] )
        v8 += costRef->streamingCosts[v15].costInBytes;
      v13 = v19;
      ++v10;
      --v14;
    }
    while ( v14 );
  }
  return v8;
}

/*
==============
TransientCostCalc_GetCostToUnload
==============
*/
unsigned __int64 TransientCostCalc_GetCostToUnload(const TransientCostCalc *cost, unsigned int fileIndex, bool isPreloading)
{
  unsigned __int64 v3; 
  unsigned __int64 v6; 
  const TransientCosts *costRef; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  const StreamingContentSet *ContentSet; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v3 = fileIndex;
  if ( fileIndex >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fileIndex, 0x2000) )
    __debugbreak();
  v6 = v3;
  if ( ((0x80000000 >> (v3 & 0x1F)) & cost->loaded.array[v3 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 81, ASSERT_TYPE_ASSERT, "(cost.loaded.testBit( fileIndex ))", (const char *)&queryFormat, "cost.loaded.testBit( fileIndex )") )
    __debugbreak();
  if ( !cost->costRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 83, ASSERT_TYPE_ASSERT, "(cost.costRef)", (const char *)&queryFormat, "cost.costRef") )
    __debugbreak();
  costRef = cost->costRef;
  if ( (unsigned int)v3 >= cost->costRef->transientCostCount )
  {
    LODWORD(v18) = cost->costRef->transientCostCount;
    LODWORD(v17) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 86, ASSERT_TYPE_ASSERT, "(unsigned)( fileIndex ) < (unsigned)( costRef.transientCostCount )", "fileIndex doesn't index costRef.transientCostCount\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v8 = (unsigned __int64)costRef->residentPageSizes[v3] << 16;
  if ( isPreloading )
  {
    v9 = ((unsigned __int64)costRef->tempPageSizes[v6] << 16) + v8;
    v8 = DB_GetPerTransientAdditionalTempCostForPreload() + v9;
  }
  v10 = 0i64;
  ContentSet = TransientCostCalc_GetContentSet(costRef);
  v12 = ContentSet->contentCounts[v6];
  if ( v12 )
  {
    v13 = 8 * v6;
    v14 = v12;
    v19 = 8 * v6;
    do
    {
      LODWORD(v15) = (*(unsigned __int16 **)((char *)&ContentSet->contents->contents + v13))[v10];
      if ( (unsigned int)v15 >= costRef->streamingItemCount )
      {
        LODWORD(v18) = costRef->streamingItemCount;
        LODWORD(v17) = (*(unsigned __int16 **)((char *)&ContentSet->contents->contents + v13))[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( streamItemIndex ) < (unsigned)( costRef.streamingItemCount )", "streamItemIndex doesn't index costRef.streamingItemCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( (unsigned __int16)v15 >= 0x4000u )
      {
        LODWORD(v18) = 0x4000;
        LODWORD(v17) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 103, ASSERT_TYPE_ASSERT, "(unsigned)( streamItemIndex ) < (unsigned)( ( sizeof( *array_counter( cost.usedStreamedAssets ) ) + 0 ) )", "streamItemIndex doesn't index ARRAY_COUNT( cost.usedStreamedAssets )\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v15 = (unsigned __int16)v15;
      if ( !cost->usedStreamedAssets[(unsigned __int16)v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 104, ASSERT_TYPE_ASSERT, "(cost.usedStreamedAssets[streamItemIndex] > 0)", (const char *)&queryFormat, "cost.usedStreamedAssets[streamItemIndex] > 0") )
        __debugbreak();
      if ( cost->usedStreamedAssets[v15] == 1 )
        v8 += costRef->streamingCosts[v15].costInBytes;
      v13 = v19;
      ++v10;
      --v14;
    }
    while ( v14 );
  }
  return v8;
}

/*
==============
TransientCostCalc_GetCurCost
==============
*/
unsigned __int64 TransientCostCalc_GetCurCost(const TransientCostCalc *cost, bool isPreloading)
{
  if ( isPreloading )
    return cost->curCost + cost->curTempCost;
  else
    return cost->curCost;
}

/*
==============
TransientCostCalc_Init
==============
*/
void TransientCostCalc_Init(TransientCostCalc *outCost, const TransientCosts *costRef)
{
  bitarray<8192> *p_loaded; 
  __int64 v4; 

  outCost->costRef = costRef;
  if ( costRef->streamingItemCount > 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 17, ASSERT_TYPE_ASSERT, "( costRef.streamingItemCount ) <= ( TransientCostCalc::MAX_STREAMED_ASSETS )", "%s <= %s\n\t%u, %u", "costRef.streamingItemCount", "TransientCostCalc::MAX_STREAMED_ASSETS", costRef->streamingItemCount, 0x4000) )
    __debugbreak();
  memset_0(outCost->usedStreamedAssets, 0, sizeof(outCost->usedStreamedAssets));
  p_loaded = &outCost->loaded;
  outCost->curCost = 0i64;
  outCost->curTempCost = 0i64;
  v4 = 16i64;
  do
  {
    *(_QWORD *)p_loaded->array = 0i64;
    *(_QWORD *)&p_loaded->array[2] = 0i64;
    *(_QWORD *)&p_loaded->array[4] = 0i64;
    p_loaded = (bitarray<8192> *)((char *)p_loaded + 64);
    *(_QWORD *)&p_loaded[-1].array[246] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[248] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[250] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[252] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[254] = 0i64;
    --v4;
  }
  while ( v4 );
}

/*
==============
TransientCostCalc_Load
==============
*/
void TransientCostCalc_Load(TransientCostCalc *outCost, unsigned int fileIndex)
{
  unsigned __int64 v2; 
  unsigned int v4; 
  unsigned int *v5; 
  const TransientCosts *costRef; 
  __int64 v7; 
  const StreamingContentSet *ContentSet; 
  unsigned __int16 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  __int64 v15; 

  v2 = fileIndex;
  if ( fileIndex >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fileIndex, 0x2000) )
    __debugbreak();
  v4 = 0x80000000 >> (v2 & 0x1F);
  v5 = &outCost->loaded.array[v2 >> 5];
  if ( (v4 & *v5) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 141, ASSERT_TYPE_ASSERT, "(!outCost.loaded.testBit( fileIndex ))", (const char *)&queryFormat, "!outCost.loaded.testBit( fileIndex )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, 0x2000) )
    __debugbreak();
  *v5 |= v4;
  if ( !outCost->costRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 145, ASSERT_TYPE_ASSERT, "(outCost.costRef)", (const char *)&queryFormat, "outCost.costRef") )
    __debugbreak();
  costRef = outCost->costRef;
  if ( (unsigned int)v2 >= outCost->costRef->transientCostCount )
  {
    LODWORD(v15) = outCost->costRef->transientCostCount;
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 148, ASSERT_TYPE_ASSERT, "(unsigned)( fileIndex ) < (unsigned)( costRef.transientCostCount )", "fileIndex doesn't index costRef.transientCostCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  outCost->curCost += (unsigned __int64)costRef->residentPageSizes[v2] << 16;
  outCost->curTempCost += (unsigned __int64)costRef->tempPageSizes[v2] << 16;
  outCost->curTempCost += DB_GetPerTransientAdditionalTempCostForPreload();
  v7 = 0i64;
  ContentSet = TransientCostCalc_GetContentSet(costRef);
  v9 = ContentSet->contentCounts[v2];
  if ( v9 )
  {
    v10 = v9;
    v11 = v2;
    do
    {
      LODWORD(v12) = ContentSet->contents[v11].contents[v7];
      if ( (unsigned int)v12 >= costRef->streamingItemCount )
      {
        LODWORD(v15) = costRef->streamingItemCount;
        LODWORD(v14) = ContentSet->contents[v11].contents[v7];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( streamItemIndex ) < (unsigned)( costRef.streamingItemCount )", "streamItemIndex doesn't index costRef.streamingItemCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( (unsigned __int16)v12 >= 0x4000u )
      {
        LODWORD(v15) = 0x4000;
        LODWORD(v14) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 162, ASSERT_TYPE_ASSERT, "(unsigned)( streamItemIndex ) < (unsigned)( ( sizeof( *array_counter( outCost.usedStreamedAssets ) ) + 0 ) )", "streamItemIndex doesn't index ARRAY_COUNT( outCost.usedStreamedAssets )\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      v12 = (unsigned __int16)v12;
      if ( outCost->usedStreamedAssets[(unsigned __int16)v12] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 163, ASSERT_TYPE_ASSERT, "(outCost.usedStreamedAssets[streamItemIndex] != 0xffffui16)", (const char *)&queryFormat, "outCost.usedStreamedAssets[streamItemIndex] != UINT16_MAX") )
        __debugbreak();
      v13 = outCost->usedStreamedAssets[v12];
      if ( !v13 )
      {
        outCost->curCost += costRef->streamingCosts[v12].costInBytes;
        v13 = outCost->usedStreamedAssets[v12];
      }
      ++v7;
      outCost->usedStreamedAssets[v12] = v13 + 1;
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
TransientCostCalc_Reset
==============
*/
void TransientCostCalc_Reset(TransientCostCalc *outCost)
{
  bitarray<8192> *p_loaded; 
  __int64 v3; 

  memset_0(outCost->usedStreamedAssets, 0, sizeof(outCost->usedStreamedAssets));
  p_loaded = &outCost->loaded;
  outCost->curCost = 0i64;
  outCost->curTempCost = 0i64;
  v3 = 16i64;
  do
  {
    *(_QWORD *)p_loaded->array = 0i64;
    *(_QWORD *)&p_loaded->array[2] = 0i64;
    *(_QWORD *)&p_loaded->array[4] = 0i64;
    p_loaded = (bitarray<8192> *)((char *)p_loaded + 64);
    *(_QWORD *)&p_loaded[-1].array[246] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[248] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[250] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[252] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[254] = 0i64;
    --v3;
  }
  while ( v3 );
}

/*
==============
TransientCostCalc_Unload
==============
*/
void TransientCostCalc_Unload(TransientCostCalc *outCost, unsigned int fileIndex)
{
  unsigned __int64 v2; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int *v6; 
  const TransientCosts *costRef; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  const StreamingContentSet *ContentSet; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v17; 
  __int64 v18; 

  v2 = fileIndex;
  if ( fileIndex >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", fileIndex, 0x2000) )
    __debugbreak();
  v4 = 0x80000000 >> (v2 & 0x1F);
  v5 = v2;
  v6 = &outCost->loaded.array[v2 >> 5];
  if ( (v4 & *v6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 178, ASSERT_TYPE_ASSERT, "(outCost.loaded.testBit( fileIndex ))", (const char *)&queryFormat, "outCost.loaded.testBit( fileIndex )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, 0x2000) )
    __debugbreak();
  *v6 &= ~v4;
  if ( !outCost->costRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 182, ASSERT_TYPE_ASSERT, "(outCost.costRef)", (const char *)&queryFormat, "outCost.costRef") )
    __debugbreak();
  costRef = outCost->costRef;
  if ( (unsigned int)v2 >= outCost->costRef->transientCostCount )
  {
    LODWORD(v18) = outCost->costRef->transientCostCount;
    LODWORD(v17) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 185, ASSERT_TYPE_ASSERT, "(unsigned)( fileIndex ) < (unsigned)( costRef.transientCostCount )", "fileIndex doesn't index costRef.transientCostCount\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v8 = (unsigned __int64)costRef->residentPageSizes[v2] << 16;
  if ( outCost->curCost < v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 187, ASSERT_TYPE_ASSERT, "(outCost.curCost >= residentCostBytes)", (const char *)&queryFormat, "outCost.curCost >= residentCostBytes") )
    __debugbreak();
  outCost->curCost -= v8;
  v9 = ((unsigned __int64)costRef->tempPageSizes[v5] << 16) + DB_GetPerTransientAdditionalTempCostForPreload();
  if ( outCost->curTempCost < v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 191, ASSERT_TYPE_ASSERT, "(outCost.curTempCost >= tempCostBytes)", (const char *)&queryFormat, "outCost.curTempCost >= tempCostBytes") )
    __debugbreak();
  outCost->curTempCost -= v9;
  v10 = 0i64;
  ContentSet = TransientCostCalc_GetContentSet(costRef);
  v12 = ContentSet->contentCounts[v5];
  if ( v12 )
  {
    v13 = v5;
    v14 = v12;
    do
    {
      LODWORD(v15) = ContentSet->contents[v13].contents[v10];
      if ( (unsigned int)v15 >= costRef->streamingItemCount )
      {
        LODWORD(v18) = costRef->streamingItemCount;
        LODWORD(v17) = ContentSet->contents[v13].contents[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 200, ASSERT_TYPE_ASSERT, "(unsigned)( streamItemIndex ) < (unsigned)( costRef.streamingItemCount )", "streamItemIndex doesn't index costRef.streamingItemCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      if ( (unsigned __int16)v15 >= 0x4000u )
      {
        LODWORD(v18) = 0x4000;
        LODWORD(v17) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 202, ASSERT_TYPE_ASSERT, "(unsigned)( streamItemIndex ) < (unsigned)( ( sizeof( *array_counter( outCost.usedStreamedAssets ) ) + 0 ) )", "streamItemIndex doesn't index ARRAY_COUNT( outCost.usedStreamedAssets )\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v15 = (unsigned __int16)v15;
      if ( !outCost->usedStreamedAssets[(unsigned __int16)v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 203, ASSERT_TYPE_ASSERT, "(outCost.usedStreamedAssets[streamItemIndex] > 0)", (const char *)&queryFormat, "outCost.usedStreamedAssets[streamItemIndex] > 0") )
        __debugbreak();
      if ( outCost->usedStreamedAssets[v15]-- == 1 )
      {
        if ( outCost->curCost < costRef->streamingCosts[v15].costInBytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 209, ASSERT_TYPE_ASSERT, "(outCost.curCost >= costRef.streamingCosts[streamItemIndex].costInBytes)", (const char *)&queryFormat, "outCost.curCost >= costRef.streamingCosts[streamItemIndex].costInBytes") )
          __debugbreak();
        outCost->curCost -= costRef->streamingCosts[v15].costInBytes;
      }
      ++v10;
      --v14;
    }
    while ( v14 );
  }
}

/*
==============
TransientCostCalc_ValidateUsage
==============
*/
void TransientCostCalc_ValidateUsage(const TransientCostCalc *cost)
{
  unsigned int v2; 
  bitarray<8192> *p_loaded; 
  __int64 v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  TransientCostCalc outCost; 

  if ( !cost->costRef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 122, ASSERT_TYPE_ASSERT, "(cost.costRef)", (const char *)&queryFormat, "cost.costRef") )
    __debugbreak();
  outCost.costRef = cost->costRef;
  if ( outCost.costRef->streamingItemCount > 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 17, ASSERT_TYPE_ASSERT, "( costRef.streamingItemCount ) <= ( TransientCostCalc::MAX_STREAMED_ASSETS )", "%s <= %s\n\t%u, %u", "costRef.streamingItemCount", "TransientCostCalc::MAX_STREAMED_ASSETS", outCost.costRef->streamingItemCount, 0x4000) )
    __debugbreak();
  memset_0(outCost.usedStreamedAssets, 0, sizeof(outCost.usedStreamedAssets));
  v2 = 0;
  p_loaded = &outCost.loaded;
  outCost.curCost = 0i64;
  outCost.curTempCost = 0i64;
  v4 = 16i64;
  do
  {
    *(_QWORD *)p_loaded->array = 0i64;
    *(_QWORD *)&p_loaded->array[2] = 0i64;
    *(_QWORD *)&p_loaded->array[4] = 0i64;
    p_loaded = (bitarray<8192> *)((char *)p_loaded + 64);
    *(_QWORD *)&p_loaded[-1].array[246] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[248] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[250] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[252] = 0i64;
    *(_QWORD *)&p_loaded[-1].array[254] = 0i64;
    --v4;
  }
  while ( v4 );
  v5 = 0i64;
  do
  {
    if ( ((0x80000000 >> (v2 & 0x1F)) & cost->loaded.array[v5 >> 5]) != 0 )
      TransientCostCalc_Load(&outCost, v2);
    ++v2;
    ++v5;
  }
  while ( v2 < 0x2000 );
  if ( outCost.curCost != cost->curCost )
  {
    LODWORD(v7) = cost->curCost;
    LODWORD(v6) = outCost.curCost;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_transient_cost_calc.cpp", 133, ASSERT_TYPE_ASSERT, "( calcCost.curCost ) == ( cost.curCost )", "%s == %s\n\t%u, %u", "calcCost.curCost", "cost.curCost", v6, v7) )
      __debugbreak();
  }
}

