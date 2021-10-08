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
  unsigned int v7; 
  __m256i v13; 

  if ( iteratorCount > 1 && iterators->key.packed > iterators[1].key.packed )
  {
    __asm
    {
      vmovups ymm2, ymmword ptr [rcx]
      vmovups xmm3, xmmword ptr [rcx+20h]
      vmovups ymm0, ymmword ptr [rcx+30h]
      vmovups xmm1, xmmword ptr [rcx+50h]
    }
    v7 = 2;
    __asm
    {
      vmovups ymmword ptr [rcx], ymm0
      vmovups xmmword ptr [rcx+20h], xmm1
      vmovups [rsp+38h+var_38], ymm2
    }
    if ( iteratorCount > 2 )
    {
      _RDX = iterators + 2;
      do
      {
        if ( v13.m256i_i64[0] <= _RDX->key.packed )
          break;
        __asm
        {
          vmovups ymm0, ymmword ptr [rdx]
          vmovups xmm1, xmmword ptr [rdx+20h]
        }
        ++_RDX;
        _RAX = 3i64 * (v7++ - 1);
        _RAX *= 2i64;
        __asm
        {
          vmovups ymmword ptr [rcx+rax*8], ymm0
          vmovups xmmword ptr [rcx+rax*8+20h], xmm1
        }
      }
      while ( v7 < iteratorCount );
    }
    _RAX = 6i64 * (v7 - 1);
    __asm
    {
      vmovups ymmword ptr [rcx+rax*8], ymm2
      vmovups xmmword ptr [rcx+rax*8+20h], xmm3
    }
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
  unsigned int v10; 
  __m256i v16; 

  if ( iteratorCount > 1 )
  {
    for ( i = iteratorCount - 2; ; i = (unsigned int)(i - 1) )
    {
      v4 = iteratorCount - i;
      _RAX = &iterators[i];
      if ( iteratorCount - (unsigned int)i > 1 && _RAX->key.packed > _RAX[1].key.packed )
      {
        __asm
        {
          vmovups ymm2, ymmword ptr [rax]
          vmovups xmm3, xmmword ptr [rax+20h]
          vmovups ymm0, ymmword ptr [rax+30h]
          vmovups xmm1, xmmword ptr [rax+50h]
        }
        v10 = 2;
        __asm
        {
          vmovups ymmword ptr [rax], ymm0
          vmovups xmmword ptr [rax+20h], xmm1
          vmovups [rsp+38h+var_38], ymm2
        }
        if ( v4 > 2 )
        {
          _R8 = &_RAX[2].key;
          do
          {
            if ( v16.m256i_i64[0] <= _R8->packed )
              break;
            __asm
            {
              vmovups ymm0, ymmword ptr [r8]
              vmovups xmm1, xmmword ptr [r8+20h]
            }
            _R8 += 6;
            _RCX = 3i64 * (v10++ - 1);
            _RCX *= 2i64;
            __asm
            {
              vmovups ymmword ptr [rax+rcx*8], ymm0
              vmovups xmmword ptr [rax+rcx*8+20h], xmm1
            }
          }
          while ( v10 < v4 );
        }
        _RCX = 6i64 * (v10 - 1);
        __asm
        {
          vmovups ymmword ptr [rax+rcx*8], ymm2
          vmovups xmmword ptr [rax+rcx*8+20h], xmm3
        }
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
  GfxCmdBufContext v5; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
  }
  R_DrawSurfs_1_(&v5, drawListIter, baseTechType, drawListType);
}

/*
==============
R_DrawSurfs_Unsorted
==============
*/
void R_DrawSurfs_Unsorted(GfxCmdBufContext *context, GfxDrawListIter *drawListIter, MaterialTechniqueType baseTechType, GfxDrawListType drawListType)
{
  GfxCmdBufContext v5; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
  }
  R_DrawSurfs_0_(&v5, drawListIter, baseTechType, drawListType);
}

/*
==============
R_SplitIterGroup
==============
*/
void R_SplitIterGroup(GfxDrawListIter *iterGroup, unsigned int iterCount)
{
  __int64 v6; 
  const unsigned __int64 *mark; 
  unsigned int v14; 
  GfxSurfsIterator *v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int *p_iteratorCount; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  void (__fastcall **v24)(__int64, __int64); 
  __int64 v25; 
  __int64 v34; 
  __int64 v35; 
  unsigned int count; 
  char v41[224]; 
  int v42; 
  unsigned int iteratorCount; 
  GfxSurfsIterator iterators[9]; 

  if ( iterCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 580, ASSERT_TYPE_ASSERT, "( ( iterCount > 1 ) )", "( iterCount ) = %i", iterCount) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "split iter");
  _RAX = iterGroup;
  _RCX = v41;
  v6 = 5i64;
  do
  {
    _RCX += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymmword ptr [rcx-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [rcx-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [rcx-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v6;
  }
  while ( v6 );
  __asm { vmovups xmm0, xmmword ptr [rax] }
  mark = _RAX->bspSurfIter.mark;
  v14 = 0;
  __asm { vmovups xmmword ptr [rcx], xmm0 }
  *((_QWORD *)_RCX + 2) = mark;
  if ( iteratorCount )
  {
    v15 = &iterators[v42];
    if ( iteratorCount <= 1 )
    {
LABEL_17:
      if ( ++v14 )
      {
        while ( v15->SkipDrawGroupCallback((GfxDrawListIter *)v41) )
        {
          if ( !++v14 )
            goto LABEL_22;
        }
        ++v42;
        --iteratorCount;
      }
    }
    else
    {
      R_DrawSurfs_SortIterators(iterators, iteratorCount);
      v14 = 1;
      do
      {
        if ( v15->SkipDrawGroupCallback((GfxDrawListIter *)v41) )
        {
          v16 = v15->GetSortKeyCallback((GfxDrawListIter *)v41);
          if ( v15->key.fields.sortKey > v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlistiter.cpp", 537, ASSERT_TYPE_ASSERT, "(iterators[0].key.fields.sortKey <= newSortKey)", (const char *)&queryFormat, "iterators[0].key.fields.sortKey <= newSortKey") )
            __debugbreak();
          v15->key.fields.sortKey = v16;
          R_DrawSurfs_InsertionSortHeadIterator(v15, iteratorCount);
        }
        else
        {
          ++v15;
          ++v42;
          if ( --iteratorCount == 1 )
            goto LABEL_17;
        }
        ++v14;
      }
      while ( v14 );
    }
  }
LABEL_22:
  v17 = v14 % iterCount;
  count = v14 / iterCount + 1;
  v18 = iterCount - 1;
  if ( v18 )
  {
    p_iteratorCount = &iterGroup->iteratorCount;
    v20 = v18;
    do
    {
      v21 = *(p_iteratorCount - 1);
      v22 = *p_iteratorCount;
      _R14 = (__int64)&p_iteratorCount[12 * v21 + 1];
      if ( *p_iteratorCount )
      {
        v24 = (void (__fastcall **)(__int64, __int64))&p_iteratorCount[12 * v21 + 9];
        v25 = v22;
        do
        {
          (*v24)((__int64)(p_iteratorCount - 57), v17);
          v24 += 6;
          --v25;
        }
        while ( v25 );
      }
      R_DrawSurfs_Iterate_Sorted_NoRender((GfxDrawListIter *)(p_iteratorCount - 57), count);
      _RCX = p_iteratorCount + 109;
      v17 = 5i64;
      _RAX = p_iteratorCount - 57;
      do
      {
        _RCX += 32;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX += 32;
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v17;
      }
      while ( v17 );
      __asm { vmovups xmm0, xmmword ptr [rax] }
      v34 = *((_QWORD *)_RAX + 2);
      v35 = 0i64;
      *(p_iteratorCount - 1) = v21;
      *p_iteratorCount = v22;
      __asm { vmovups xmmword ptr [rcx], xmm0 }
      *((_QWORD *)_RCX + 2) = v34;
      if ( v22 )
      {
        do
        {
          _RBX = _R14 + 48 * v35;
          if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(_RBX + 40))(p_iteratorCount - 57) )
          {
            *(_DWORD *)(_RBX + 4) = (*(__int64 (__fastcall **)(unsigned int *))(_RBX + 8))(p_iteratorCount - 57);
            v35 = (unsigned int)(v35 + 1);
          }
          else
          {
            _RCX = 6i64 * --*p_iteratorCount;
            __asm
            {
              vmovups ymm0, ymmword ptr [r14+rcx*8]
              vmovups ymmword ptr [rbx], ymm0
              vmovups xmm1, xmmword ptr [r14+rcx*8+20h]
              vmovups xmmword ptr [rbx+20h], xmm1
            }
          }
        }
        while ( (unsigned int)v35 < *p_iteratorCount );
      }
      p_iteratorCount += 166;
      --v20;
    }
    while ( v20 );
  }
  Sys_ProfEndNamedEvent();
}

