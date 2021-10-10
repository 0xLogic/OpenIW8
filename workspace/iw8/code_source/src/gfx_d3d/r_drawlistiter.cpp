/*
==============
R_DrawSurfs_Unsorted
==============
*/

void __fastcall R_DrawSurfs_Unsorted(GfxCmdBufContext *context, GfxDrawListIter *drawListIter, MaterialTechniqueType baseTechType, GfxDrawListType drawListType)
{
  ?R_DrawSurfs_Unsorted@@YAXUGfxCmdBufContext@@PEAUGfxDrawListIter@@W4MaterialTechniqueType@@W4GfxDrawListType@@@Z(context, drawListIter, baseTechType, drawListType);
}

/*
==============
R_DrawSurfs_Sorted
==============
*/

void __fastcall R_DrawSurfs_Sorted(GfxCmdBufContext *context, GfxDrawListIter *drawListIter, MaterialTechniqueType baseTechType, GfxDrawListType drawListType)
{
  ?R_DrawSurfs_Sorted@@YAXUGfxCmdBufContext@@PEAUGfxDrawListIter@@W4MaterialTechniqueType@@W4GfxDrawListType@@@Z(context, drawListIter, baseTechType, drawListType);
}

/*
==============
R_DrawListIter_Init
==============
*/

void __fastcall R_DrawListIter_Init(const GfxDrawList *drawList, GfxDrawListIter *drawListIter)
{
  ?R_DrawListIter_Init@@YAXPEBUGfxDrawList@@PEAUGfxDrawListIter@@@Z(drawList, drawListIter);
}

/*
==============
R_SplitIterGroup
==============
*/

void __fastcall R_SplitIterGroup(GfxDrawListIter *iterGroup, unsigned int iterCount)
{
  ?R_SplitIterGroup@@YAXPEAUGfxDrawListIter@@I@Z(iterGroup, iterCount);
}

/*
==============
R_DrawListIter_Init
==============
*/
void R_DrawListIter_Init(const GfxDrawList *drawList, GfxDrawListIter *drawListIter)
{
  __int64 count; 
  GfxGlassSurf *surfs; 
  __int64 v6; 
  unsigned int iteratorCount; 
  __int64 v8; 
  int v9; 

  drawListIter->bspSurfIter.current = drawList->bspSurfList.stream;
  drawListIter->bspSurfIter.end = &drawList->bspSurfList.stream[drawList->bspSurfList.count];
  drawListIter->bspSurfIter.mark = NULL;
  drawListIter->smodelInstancedSurfIter.current = (const GfxSModelSurf *)drawList->smodelSurfList[0].surfData;
  drawListIter->smodelInstancedSurfIter.end = (const GfxSModelSurf *)&drawList->smodelSurfList[0].surfData[drawList->smodelSurfList[0].surfDataBytes];
  drawListIter->smodelInstancedSurfIter.mark = NULL;
  drawListIter->smodelInstancedSurfIter.visData = drawList->smodelSurfList[0].visData;
  drawListIter->smodelSubdivSurfIter.current = (const GfxSModelSurf *)drawList->smodelSurfList[1].surfData;
  drawListIter->smodelSubdivSurfIter.end = (const GfxSModelSurf *)&drawList->smodelSurfList[1].surfData[drawList->smodelSurfList[1].surfDataBytes];
  drawListIter->smodelSubdivSurfIter.mark = NULL;
  drawListIter->smodelSubdivSurfIter.visData = drawList->smodelSurfList[1].visData;
  drawListIter->smodelSubdivPatchSurfIter.current = (const GfxSModelSurf *)drawList->smodelSurfList[2].surfData;
  drawListIter->smodelSubdivPatchSurfIter.end = (const GfxSModelSurf *)&drawList->smodelSurfList[2].surfData[drawList->smodelSurfList[2].surfDataBytes];
  drawListIter->smodelSubdivPatchSurfIter.mark = NULL;
  drawListIter->smodelSubdivPatchSurfIter.visData = drawList->smodelSurfList[2].visData;
  drawListIter->drawSurfIter.current = drawList->drawSurfList.array;
  drawListIter->drawSurfIter.end = &drawList->drawSurfList.array[drawList->drawSurfList.count];
  drawListIter->drawSurfIter.mark = NULL;
  drawListIter->glassSurfIter.current = drawList->glassSurfList.surfs;
  count = drawList->glassSurfList.count;
  surfs = drawList->glassSurfList.surfs;
  drawListIter->glassSurfIter.mark = NULL;
  drawListIter->glassSurfIter.end = &surfs[count];
  drawListIter->codeSurfIter.current = drawList->codeSurfList.surfs;
  drawListIter->codeSurfIter.end = &drawList->codeSurfList.surfs[(unsigned __int64)drawList->codeSurfList.count];
  drawListIter->codeSurfIter.mark = NULL;
  drawListIter->codeSurfIter.listType = drawList->codeSurfList.listType;
  drawListIter->superTerrainSurfIter.current = drawList->superTerrainSurfList.surfs;
  drawListIter->superTerrainSurfIter.end = &drawList->superTerrainSurfList.surfs[drawList->superTerrainSurfList.count];
  drawListIter->superTerrainSurfIter.mark = NULL;
  *(_QWORD *)&drawListIter->iteratorBegin = 0i64;
  if ( !GfxBspSurfIter::IsDone(&drawListIter->bspSurfIter) )
  {
    if ( drawListIter->iteratorCount >= 9 )
    {
      v9 = 9;
      iteratorCount = drawListIter->iteratorCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 253, ASSERT_TYPE_ASSERT, "( drawListIter->iteratorCount ) < ( ( sizeof( *array_counter( drawListIter->iteratorPool ) ) + 0 ) )", "%s < %s\n\t%i, %i", "drawListIter->iteratorCount", "ARRAY_COUNT( drawListIter->iteratorPool )", iteratorCount, v9) )
        __debugbreak();
    }
    drawListIter->iteratorPool[drawListIter->iteratorCount].SkipDrawGroupCallback = R_DrawListIter_SkipDrawGroup_GfxBspSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].SaveMarkCallback = R_DrawListIter_SaveMark_GfxBspSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].TerminateCallback = R_DrawListIter_Terminate_GfxBspSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.sortKey = GfxBspSurfIter::GetPrimarySortKey(&drawListIter->bspSurfIter);
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.spliceIndex = 0;
    drawListIter->iteratorPool[drawListIter->iteratorCount].GetSortKeyCallback = R_DrawListIter_GetSortKey_GfxBspSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount++].RenderDrawGroupCallback = (GfxDrawCallbackStatus (__fastcall *)(GfxCmdBufContext, GfxDrawListIter *))R_DrawListIter_RenderDrawGroup_GfxBspSurfIter_;
  }
  if ( !GfxSurfIter<GfxStDrawSurf,GfxStDrawSurfList>::IsDone(&drawListIter->superTerrainSurfIter) )
  {
    if ( drawListIter->iteratorCount >= 9 )
    {
      LODWORD(v8) = 9;
      LODWORD(v6) = drawListIter->iteratorCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 253, ASSERT_TYPE_ASSERT, "( drawListIter->iteratorCount ) < ( ( sizeof( *array_counter( drawListIter->iteratorPool ) ) + 0 ) )", "%s < %s\n\t%i, %i", "drawListIter->iteratorCount", "ARRAY_COUNT( drawListIter->iteratorPool )", v6, v8) )
        __debugbreak();
    }
    drawListIter->iteratorPool[drawListIter->iteratorCount].SkipDrawGroupCallback = R_DrawListIter_SkipDrawGroup_GfxStDrawSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].SaveMarkCallback = R_DrawListIter_SaveMark_GfxStDrawSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].TerminateCallback = R_DrawListIter_Terminate_GfxStDrawSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.sortKey = g_drawConsts.sortedMaterialKeys[*(_WORD *)&drawListIter->superTerrainSurfIter.current->drawGroup.fields];
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.spliceIndex = 0;
    drawListIter->iteratorPool[drawListIter->iteratorCount].GetSortKeyCallback = R_DrawListIter_GetSortKey_GfxStDrawSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount++].RenderDrawGroupCallback = (GfxDrawCallbackStatus (__fastcall *)(GfxCmdBufContext, GfxDrawListIter *))R_DrawListIter_RenderDrawGroup_GfxStDrawSurfIter_;
  }
  if ( !GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(&drawListIter->smodelInstancedSurfIter) )
  {
    if ( drawListIter->iteratorCount >= 9 )
    {
      LODWORD(v8) = 9;
      LODWORD(v6) = drawListIter->iteratorCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 253, ASSERT_TYPE_ASSERT, "( drawListIter->iteratorCount ) < ( ( sizeof( *array_counter( drawListIter->iteratorPool ) ) + 0 ) )", "%s < %s\n\t%i, %i", "drawListIter->iteratorCount", "ARRAY_COUNT( drawListIter->iteratorPool )", v6, v8) )
        __debugbreak();
    }
    drawListIter->iteratorPool[drawListIter->iteratorCount].SkipDrawGroupCallback = R_DrawListIter_SkipDrawGroup_GfxSModelInstancedSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].SaveMarkCallback = R_DrawListIter_SaveMark_GfxSModelInstancedSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].TerminateCallback = R_DrawListIter_Terminate_GfxSModelInstancedSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.sortKey = g_drawConsts.sortedMaterialKeys[drawListIter->smodelInstancedSurfIter.current->header.fields.materialSortedIndex];
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.spliceIndex = 1;
    drawListIter->iteratorPool[drawListIter->iteratorCount].GetSortKeyCallback = R_DrawListIter_GetSortKey_GfxSModelInstancedSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount++].RenderDrawGroupCallback = (GfxDrawCallbackStatus (__fastcall *)(GfxCmdBufContext, GfxDrawListIter *))R_DrawListIter_RenderDrawGroup_GfxSModelInstancedSurfIter_;
  }
  if ( !GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(&drawListIter->smodelSubdivSurfIter) )
  {
    if ( drawListIter->iteratorCount >= 9 )
    {
      LODWORD(v8) = 9;
      LODWORD(v6) = drawListIter->iteratorCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 253, ASSERT_TYPE_ASSERT, "( drawListIter->iteratorCount ) < ( ( sizeof( *array_counter( drawListIter->iteratorPool ) ) + 0 ) )", "%s < %s\n\t%i, %i", "drawListIter->iteratorCount", "ARRAY_COUNT( drawListIter->iteratorPool )", v6, v8) )
        __debugbreak();
    }
    drawListIter->iteratorPool[drawListIter->iteratorCount].SkipDrawGroupCallback = R_DrawListIter_SkipDrawGroup_GfxSModelSubdivSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].SaveMarkCallback = R_DrawListIter_SaveMark_GfxSModelSubdivSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].TerminateCallback = R_DrawListIter_Terminate_GfxSModelSubdivSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.sortKey = g_drawConsts.sortedMaterialKeys[drawListIter->smodelSubdivSurfIter.current->header.fields.materialSortedIndex];
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.spliceIndex = 2;
    drawListIter->iteratorPool[drawListIter->iteratorCount].GetSortKeyCallback = R_DrawListIter_GetSortKey_GfxSModelSubdivSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount++].RenderDrawGroupCallback = (GfxDrawCallbackStatus (__fastcall *)(GfxCmdBufContext, GfxDrawListIter *))R_DrawListIter_RenderDrawGroup_GfxSModelSubdivSurfIter_;
  }
  if ( !GfxSurfIter<GfxSModelSurf,GfxSModelSurfList>::IsDone(&drawListIter->smodelSubdivPatchSurfIter) )
  {
    if ( drawListIter->iteratorCount >= 9 )
    {
      LODWORD(v8) = 9;
      LODWORD(v6) = drawListIter->iteratorCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 253, ASSERT_TYPE_ASSERT, "( drawListIter->iteratorCount ) < ( ( sizeof( *array_counter( drawListIter->iteratorPool ) ) + 0 ) )", "%s < %s\n\t%i, %i", "drawListIter->iteratorCount", "ARRAY_COUNT( drawListIter->iteratorPool )", v6, v8) )
        __debugbreak();
    }
    drawListIter->iteratorPool[drawListIter->iteratorCount].SkipDrawGroupCallback = R_DrawListIter_SkipDrawGroup_GfxSModelSubdivPatchSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].SaveMarkCallback = R_DrawListIter_SaveMark_GfxSModelSubdivPatchSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].TerminateCallback = R_DrawListIter_Terminate_GfxSModelSubdivPatchSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.sortKey = g_drawConsts.sortedMaterialKeys[drawListIter->smodelSubdivPatchSurfIter.current->header.fields.materialSortedIndex];
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.spliceIndex = 2;
    drawListIter->iteratorPool[drawListIter->iteratorCount].GetSortKeyCallback = R_DrawListIter_GetSortKey_GfxSModelSubdivPatchSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount++].RenderDrawGroupCallback = (GfxDrawCallbackStatus (__fastcall *)(GfxCmdBufContext, GfxDrawListIter *))R_DrawListIter_RenderDrawGroup_GfxSModelSubdivPatchSurfIter_;
  }
  if ( !GfxSurfIter<GfxDrawSurf,GfxDrawSurfList>::IsDone(&drawListIter->drawSurfIter) )
  {
    if ( drawListIter->iteratorCount >= 9 )
    {
      LODWORD(v8) = 9;
      LODWORD(v6) = drawListIter->iteratorCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 253, ASSERT_TYPE_ASSERT, "( drawListIter->iteratorCount ) < ( ( sizeof( *array_counter( drawListIter->iteratorPool ) ) + 0 ) )", "%s < %s\n\t%i, %i", "drawListIter->iteratorCount", "ARRAY_COUNT( drawListIter->iteratorPool )", v6, v8) )
        __debugbreak();
    }
    drawListIter->iteratorPool[drawListIter->iteratorCount].SkipDrawGroupCallback = R_DrawListIter_SkipDrawGroup_GfxDrawSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].SaveMarkCallback = R_DrawListIter_SaveMark_GfxDrawSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].TerminateCallback = R_DrawListIter_Terminate_GfxDrawSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.sortKey = (drawListIter->drawSurfIter.current->packed.p1 >> 27) & 0x3F;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.spliceIndex = 3;
    drawListIter->iteratorPool[drawListIter->iteratorCount].GetSortKeyCallback = R_DrawListIter_GetSortKey_GfxDrawSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount++].RenderDrawGroupCallback = (GfxDrawCallbackStatus (__fastcall *)(GfxCmdBufContext, GfxDrawListIter *))R_DrawListIter_RenderDrawGroup_GfxDrawSurfIter_;
  }
  if ( !GfxSurfIter<GfxGlassSurf,GfxGlassSurfList>::IsDone(&drawListIter->glassSurfIter) )
  {
    if ( drawListIter->iteratorCount >= 9 )
    {
      LODWORD(v8) = 9;
      LODWORD(v6) = drawListIter->iteratorCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 253, ASSERT_TYPE_ASSERT, "( drawListIter->iteratorCount ) < ( ( sizeof( *array_counter( drawListIter->iteratorPool ) ) + 0 ) )", "%s < %s\n\t%i, %i", "drawListIter->iteratorCount", "ARRAY_COUNT( drawListIter->iteratorPool )", v6, v8) )
        __debugbreak();
    }
    drawListIter->iteratorPool[drawListIter->iteratorCount].SkipDrawGroupCallback = R_DrawListIter_SkipDrawGroup_GfxGlassSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].SaveMarkCallback = R_DrawListIter_SaveMark_GfxGlassSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].TerminateCallback = R_DrawListIter_Terminate_GfxGlassSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.sortKey = g_drawConsts.sortedMaterialKeys[drawListIter->glassSurfIter.current->materialSortedIndex];
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.spliceIndex = 4;
    drawListIter->iteratorPool[drawListIter->iteratorCount].GetSortKeyCallback = R_DrawListIter_GetSortKey_GfxGlassSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount++].RenderDrawGroupCallback = (GfxDrawCallbackStatus (__fastcall *)(GfxCmdBufContext, GfxDrawListIter *))R_DrawListIter_RenderDrawGroup_GfxGlassSurfIter_;
  }
  if ( !GfxSurfIter<GfxCodeSurf,GfxCodeSurfList>::IsDone(&drawListIter->codeSurfIter) )
  {
    if ( drawListIter->iteratorCount >= 9 )
    {
      LODWORD(v8) = 9;
      LODWORD(v6) = drawListIter->iteratorCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 253, ASSERT_TYPE_ASSERT, "( drawListIter->iteratorCount ) < ( ( sizeof( *array_counter( drawListIter->iteratorPool ) ) + 0 ) )", "%s < %s\n\t%i, %i", "drawListIter->iteratorCount", "ARRAY_COUNT( drawListIter->iteratorPool )", v6, v8) )
        __debugbreak();
    }
    drawListIter->iteratorPool[drawListIter->iteratorCount].SkipDrawGroupCallback = R_DrawListIter_SkipDrawGroup_GfxCodeSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].SaveMarkCallback = R_DrawListIter_SaveMark_GfxCodeSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].TerminateCallback = R_DrawListIter_Terminate_GfxCodeSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.sortKey = g_drawConsts.sortedMaterialKeys[*(_WORD *)&drawListIter->codeSurfIter.current->drawGroup.fields];
    drawListIter->iteratorPool[drawListIter->iteratorCount].key.fields.spliceIndex = 5;
    drawListIter->iteratorPool[drawListIter->iteratorCount].GetSortKeyCallback = R_DrawListIter_GetSortKey_GfxCodeSurfIter_;
    drawListIter->iteratorPool[drawListIter->iteratorCount++].RenderDrawGroupCallback = (GfxDrawCallbackStatus (__fastcall *)(GfxCmdBufContext, GfxDrawListIter *))R_DrawListIter_RenderDrawGroup_GfxCodeSurfIter_;
  }
}

/*
==============
R_DrawSurfs_InsertionSortHeadIterator
==============
*/
void R_DrawSurfs_InsertionSortHeadIterator(GfxSurfsIterator *iterators, unsigned int iteratorCount)
{
  __m256i v3; 
  __int128 v4; 
  __int128 v5; 
  unsigned int v6; 
  GfxSurfsIterator *v7; 
  __m256i v8; 
  __int128 v9; 
  __int64 v10; 
  __int64 v11; 
  __m256i v12; 

  if ( iteratorCount > 1 && iterators->key.packed > iterators[1].key.packed )
  {
    v3 = *(__m256i *)&iterators->key.fields.spliceIndex;
    v4 = *(_OWORD *)&iterators->SaveMarkCallback;
    v5 = *(_OWORD *)&iterators[1].SaveMarkCallback;
    v6 = 2;
    *(__m256i *)&iterators->key.fields.spliceIndex = *(__m256i *)&iterators[1].key.fields.spliceIndex;
    *(_OWORD *)&iterators->SaveMarkCallback = v5;
    v12 = v3;
    if ( iteratorCount > 2 )
    {
      v7 = iterators + 2;
      do
      {
        if ( v12.m256i_i64[0] <= v7->key.packed )
          break;
        v8 = *(__m256i *)&v7->key.fields.spliceIndex;
        v9 = *(_OWORD *)&v7->SaveMarkCallback;
        ++v7;
        v10 = 3i64 * (v6++ - 1);
        v10 *= 2i64;
        *(__m256i *)(&iterators->key.fields.spliceIndex + 2 * v10) = v8;
        *(_OWORD *)(&iterators->SaveMarkCallback + v10) = v9;
      }
      while ( v6 < iteratorCount );
    }
    v11 = v6 - 1;
    *(__m256i *)&iterators[v11].key.fields.spliceIndex = v3;
    *(_OWORD *)&iterators[v11].SaveMarkCallback = v4;
  }
}

/*
==============
R_DrawSurfs_Iterate_Sorted_NoRender
==============
*/
__int64 R_DrawSurfs_Iterate_Sorted_NoRender(GfxDrawListIter *iterGroup, unsigned int count)
{
  unsigned int iteratorCount; 
  unsigned int v6; 
  GfxSurfsIterator *v7; 
  unsigned int v8; 

  iteratorCount = iterGroup->iteratorCount;
  if ( !iteratorCount )
    return 0i64;
  v6 = 0;
  v7 = &iterGroup->iteratorPool[iterGroup->iteratorBegin];
  if ( iteratorCount <= 1 )
  {
LABEL_13:
    if ( ++v6 != count )
    {
      while ( v7->SkipDrawGroupCallback(iterGroup) )
      {
        if ( ++v6 == count )
          return v6;
      }
      ++iterGroup->iteratorBegin;
      --iterGroup->iteratorCount;
    }
  }
  else
  {
    R_DrawSurfs_SortIterators(iterGroup->iteratorPool, iteratorCount);
    v6 = 1;
    if ( count != 1 )
    {
      do
      {
        if ( v7->SkipDrawGroupCallback(iterGroup) )
        {
          v8 = v7->GetSortKeyCallback(iterGroup);
          if ( v7->key.fields.sortKey > v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 537, ASSERT_TYPE_ASSERT, "(iterators[0].key.fields.sortKey <= newSortKey)", (const char *)&queryFormat, "iterators[0].key.fields.sortKey <= newSortKey") )
            __debugbreak();
          v7->key.fields.sortKey = v8;
          R_DrawSurfs_InsertionSortHeadIterator(v7, iterGroup->iteratorCount);
        }
        else
        {
          ++iterGroup->iteratorBegin;
          ++v7;
          if ( --iterGroup->iteratorCount == 1 )
            goto LABEL_13;
        }
        ++v6;
      }
      while ( v6 != count );
    }
  }
  return v6;
}

/*
==============
R_DrawSurfs_SortIterators
==============
*/
void R_DrawSurfs_SortIterators(GfxSurfsIterator *iterators, unsigned int iteratorCount)
{
  __int64 i; 
  unsigned int v4; 
  GfxSurfsIterator *v5; 
  __m256i v6; 
  __int128 v7; 
  __int128 v8; 
  unsigned int v9; 
  GfxSurfsIterator *v10; 
  __m256i v11; 
  __int128 v12; 
  __int64 v13; 
  __int64 v14; 
  __m256i v15; 

  if ( iteratorCount > 1 )
  {
    for ( i = iteratorCount - 2; ; i = (unsigned int)(i - 1) )
    {
      v4 = iteratorCount - i;
      v5 = &iterators[i];
      if ( iteratorCount - (unsigned int)i > 1 && v5->key.packed > v5[1].key.packed )
      {
        v6 = *(__m256i *)&v5->key.fields.spliceIndex;
        v7 = *(_OWORD *)&v5->SaveMarkCallback;
        v8 = *(_OWORD *)&v5[1].SaveMarkCallback;
        v9 = 2;
        *(__m256i *)&v5->key.fields.spliceIndex = *(__m256i *)&v5[1].key.fields.spliceIndex;
        *(_OWORD *)&v5->SaveMarkCallback = v8;
        v15 = v6;
        if ( v4 > 2 )
        {
          v10 = v5 + 2;
          do
          {
            if ( v15.m256i_i64[0] <= v10->key.packed )
              break;
            v11 = *(__m256i *)&v10->key.fields.spliceIndex;
            v12 = *(_OWORD *)&v10->SaveMarkCallback;
            ++v10;
            v13 = 3i64 * (v9++ - 1);
            v13 *= 2i64;
            *(__m256i *)(&v5->key.fields.spliceIndex + 2 * v13) = v11;
            *(_OWORD *)(&v5->SaveMarkCallback + v13) = v12;
          }
          while ( v9 < v4 );
        }
        v14 = v9 - 1;
        *(__m256i *)&v5[v14].key.fields.spliceIndex = v6;
        *(_OWORD *)&v5[v14].SaveMarkCallback = v7;
      }
      if ( !(_DWORD)i )
        break;
    }
  }
}

/*
==============
R_DrawSurfs_Sorted
==============
*/
void R_DrawSurfs_Sorted(GfxCmdBufContext *context, GfxDrawListIter *drawListIter, MaterialTechniqueType baseTechType, GfxDrawListType drawListType)
{
  GfxCmdBufContext v4; 

  v4 = *context;
  R_DrawSurfs_1_(&v4, drawListIter, baseTechType, drawListType);
}

/*
==============
R_DrawSurfs_Unsorted
==============
*/
void R_DrawSurfs_Unsorted(GfxCmdBufContext *context, GfxDrawListIter *drawListIter, MaterialTechniqueType baseTechType, GfxDrawListType drawListType)
{
  GfxCmdBufContext v4; 

  v4 = *context;
  R_DrawSurfs_0_(&v4, drawListIter, baseTechType, drawListType);
}

/*
==============
R_SplitIterGroup
==============
*/
void R_SplitIterGroup(GfxDrawListIter *iterGroup, unsigned int iterCount)
{
  GfxDrawListIter *v4; 
  char *v5; 
  __int64 v6; 
  __m256i v7; 
  __int128 v8; 
  __int128 v9; 
  const unsigned __int64 *mark; 
  unsigned int v11; 
  GfxSurfsIterator *v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int *p_iteratorCount; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  void (__fastcall **v21)(__int64, __int64); 
  __int64 v22; 
  unsigned int *v23; 
  unsigned int *v24; 
  __m256i v25; 
  __int128 v26; 
  __int128 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned int count; 
  char v33[224]; 
  int v34; 
  unsigned int iteratorCount; 
  GfxSurfsIterator iterators[9]; 

  if ( iterCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 580, ASSERT_TYPE_ASSERT, "( ( iterCount > 1 ) )", "( iterCount ) = %i", iterCount) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "split iter");
  v4 = iterGroup;
  v5 = v33;
  v6 = 5i64;
  do
  {
    v5 += 128;
    v7 = *(__m256i *)&v4->bspSurfIter.current;
    v8 = *(_OWORD *)&v4->smodelSubdivPatchSurfIter.visData;
    v4 = (GfxDrawListIter *)((char *)v4 + 128);
    *((__m256i *)v5 - 4) = v7;
    *((__m256i *)v5 - 3) = *(__m256i *)&v4[-1].iteratorPool[7].key.fields.spliceIndex;
    *((__m256i *)v5 - 2) = *(__m256i *)&v4[-1].iteratorPool[7].SaveMarkCallback;
    *((_OWORD *)v5 - 2) = *(_OWORD *)&v4[-1].iteratorPool[8].RenderDrawGroupCallback;
    *((_OWORD *)v5 - 1) = v8;
    --v6;
  }
  while ( v6 );
  v9 = *(_OWORD *)&v4->bspSurfIter.current;
  mark = v4->bspSurfIter.mark;
  v11 = 0;
  *(_OWORD *)v5 = v9;
  *((_QWORD *)v5 + 2) = mark;
  if ( iteratorCount )
  {
    v12 = &iterators[v34];
    if ( iteratorCount <= 1 )
    {
LABEL_17:
      if ( ++v11 )
      {
        while ( v12->SkipDrawGroupCallback((GfxDrawListIter *)v33) )
        {
          if ( !++v11 )
            goto LABEL_22;
        }
        ++v34;
        --iteratorCount;
      }
    }
    else
    {
      R_DrawSurfs_SortIterators(iterators, iteratorCount);
      v11 = 1;
      do
      {
        if ( v12->SkipDrawGroupCallback((GfxDrawListIter *)v33) )
        {
          v13 = v12->GetSortKeyCallback((GfxDrawListIter *)v33);
          if ( v12->key.fields.sortKey > v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 537, ASSERT_TYPE_ASSERT, "(iterators[0].key.fields.sortKey <= newSortKey)", (const char *)&queryFormat, "iterators[0].key.fields.sortKey <= newSortKey") )
            __debugbreak();
          v12->key.fields.sortKey = v13;
          R_DrawSurfs_InsertionSortHeadIterator(v12, iteratorCount);
        }
        else
        {
          ++v12;
          ++v34;
          if ( --iteratorCount == 1 )
            goto LABEL_17;
        }
        ++v11;
      }
      while ( v11 );
    }
  }
LABEL_22:
  v14 = v11 % iterCount;
  count = v11 / iterCount + 1;
  v15 = iterCount - 1;
  if ( v15 )
  {
    p_iteratorCount = &iterGroup->iteratorCount;
    v17 = v15;
    do
    {
      v18 = *(p_iteratorCount - 1);
      v19 = *p_iteratorCount;
      v20 = (__int64)&p_iteratorCount[12 * v18 + 1];
      if ( *p_iteratorCount )
      {
        v21 = (void (__fastcall **)(__int64, __int64))&p_iteratorCount[12 * v18 + 9];
        v22 = v19;
        do
        {
          (*v21)((__int64)(p_iteratorCount - 57), v14);
          v21 += 6;
          --v22;
        }
        while ( v22 );
      }
      R_DrawSurfs_Iterate_Sorted_NoRender((GfxDrawListIter *)(p_iteratorCount - 57), count);
      v23 = p_iteratorCount + 109;
      v14 = 5i64;
      v24 = p_iteratorCount - 57;
      do
      {
        v23 += 32;
        v25 = *(__m256i *)v24;
        v26 = *((_OWORD *)v24 + 7);
        v24 += 32;
        *((__m256i *)v23 - 4) = v25;
        *((__m256i *)v23 - 3) = *((__m256i *)v24 - 3);
        *((__m256i *)v23 - 2) = *((__m256i *)v24 - 2);
        *((_OWORD *)v23 - 2) = *((_OWORD *)v24 - 2);
        *((_OWORD *)v23 - 1) = v26;
        --v14;
      }
      while ( v14 );
      v27 = *(_OWORD *)v24;
      v28 = *((_QWORD *)v24 + 2);
      v29 = 0i64;
      *(p_iteratorCount - 1) = v18;
      *p_iteratorCount = v19;
      *(_OWORD *)v23 = v27;
      *((_QWORD *)v23 + 2) = v28;
      while ( (unsigned int)v29 < *p_iteratorCount )
      {
        v30 = v20 + 48 * v29;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(v30 + 40))(p_iteratorCount - 57) )
        {
          *(_DWORD *)(v30 + 4) = (*(__int64 (__fastcall **)(unsigned int *))(v30 + 8))(p_iteratorCount - 57);
          v29 = (unsigned int)(v29 + 1);
        }
        else
        {
          v31 = --*p_iteratorCount;
          *(__m256i *)v30 = *(__m256i *)(v20 + 48 * v31);
          *(_OWORD *)(v30 + 32) = *(_OWORD *)(v20 + 48 * v31 + 32);
        }
      }
      p_iteratorCount += 166;
      --v17;
    }
    while ( v17 );
  }
  Sys_ProfEndNamedEvent();
}

