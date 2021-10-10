/*
==============
R_EmitDrawSurfList
==============
*/

void __fastcall R_EmitDrawSurfList(const GfxDrawSurf *drawSurfs, unsigned int drawSurfCount, GfxDrawList *drawList)
{
  ?R_EmitDrawSurfList@@YAXPEBTGfxDrawSurf@@IPEAUGfxDrawList@@@Z(drawSurfs, drawSurfCount, drawList);
}

/*
==============
R_SplitSurfs
==============
*/

void __fastcall R_SplitSurfs(unsigned int splitKey, GfxDrawList *drawListSrc, GfxDrawList *drawListDst, volatile int *renderFeatures, GfxViewMaterialRenderFeatures renderFeatureSplitPredicate)
{
  ?R_SplitSurfs@@YAXIPEAUGfxDrawList@@0PECJW4GfxViewMaterialRenderFeatures@@@Z(splitKey, drawListSrc, drawListDst, renderFeatures, renderFeatureSplitPredicate);
}

/*
==============
R_SplitDepthHackCodeSurfs
==============
*/

void __fastcall R_SplitDepthHackCodeSurfs(GfxDrawList *drawListSrc, GfxDrawList *drawListDst, GfxDrawList *drawListPostBlurDst, GfxDrawList *drawListPostBlurDepthHackDst)
{
  ?R_SplitDepthHackCodeSurfs@@YAXPEAUGfxDrawList@@000@Z(drawListSrc, drawListDst, drawListPostBlurDst, drawListPostBlurDepthHackDst);
}

/*
==============
R_EmitDrawSurfList
==============
*/
void R_EmitDrawSurfList(const GfxDrawSurf *drawSurfs, unsigned int drawSurfCount, GfxDrawList *drawList)
{
  __int64 v4; 
  char *Value; 
  int *v7; 
  _QWORD *v8; 
  char *v9; 
  int *v10; 
  unsigned __int64 v11; 
  ThreadContext CurrentThreadContext; 
  GfxBackEndData *v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 

  v4 = drawSurfCount;
  Value = (char *)Sys_GetValue(0);
  v7 = (int *)(Value + 4136);
  if ( (unsigned int)(*((_DWORD *)Value + 1034) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1034) + 1, 3) )
    __debugbreak();
  if ( (unsigned int)++*v7 >= 3 )
  {
    LODWORD(v17) = 3;
    LODWORD(v16) = *v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v8 = Value + 2088;
  v9 = Value + 40;
  if ( *v8 < (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v8 += 8i64;
  if ( *v8 >= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v8 = v7;
  if ( *v8 <= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v10 = &v7[*v7 + 2];
  v11 = __rdtsc();
  *v10 = v11;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 51, NULL, 0);
  if ( !drawSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlist.cpp", 25, ASSERT_TYPE_ASSERT, "(drawSurfs)", (const char *)&queryFormat, "drawSurfs") )
    __debugbreak();
  v13 = frontEndDataOut;
  v14 = frontEndDataOut->drawSurfCount;
  v15 = v14 + v4;
  if ( (unsigned int)(v14 + v4) <= 0x4000 )
  {
    drawList->drawSurfList.count = v4;
    drawList->drawSurfList.array = &v13->drawSurfs[v14];
    memcpy_0(&frontEndDataOut->drawSurfs[frontEndDataOut->drawSurfCount], drawSurfs, 16 * v4);
    frontEndDataOut->drawSurfCount = v15;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAX_DRAWSURFS);
    if ( drawList->drawSurfList.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlist.cpp", 31, ASSERT_TYPE_ASSERT, "(R_IsDrawSurfListEmpty( &drawList->drawSurfList ))", (const char *)&queryFormat, "R_IsDrawSurfListEmpty( &drawList->drawSurfList )") )
      __debugbreak();
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_SplitDepthHackCodeSurfs
==============
*/
void R_SplitDepthHackCodeSurfs(GfxDrawList *drawListSrc, GfxDrawList *drawListDst, GfxDrawList *drawListPostBlurDst, GfxDrawList *drawListPostBlurDepthHackDst)
{
  __m256i *v4; 
  __m256i *v5; 
  __m256i *v6; 
  __m256i *v7; 
  __m256i *v8; 
  __m256i *v9; 
  bool v10; 
  int v11; 
  Material *MaterialAtIndex; 
  GfxCodeSurf *v13; 
  bool v14; 
  int v15; 
  Material *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  GfxCodeSurf *v23; 
  GfxCodeSurf *v24; 
  GfxCodeSurf *v25; 
  GfxCodeSurf *v26; 
  GfxCodeSurf *v27; 
  GfxCodeSurf *v28; 
  GfxCodeSurf *surfs; 

  v25 = &frontEndDataOut->codeEmissivePostBlurDepthHackSurfs[frontEndDataOut->codeSurfEmissivePostBlurDepthHackCount];
  v4 = (__m256i *)v25;
  v27 = &frontEndDataOut->codeEmissiveDepthHackSurfs[1023];
  v24 = &frontEndDataOut->codeEmissivePostBlurSurfs[frontEndDataOut->codeSurfEmissivePostBlurCount];
  v28 = &frontEndDataOut->codeEmissivePostBlurSurfs[159];
  v5 = (__m256i *)v24;
  surfs = drawListSrc->codeSurfList.surfs;
  v6 = (__m256i *)surfs;
  v7 = (__m256i *)surfs;
  v23 = &frontEndDataOut->codeEmissiveDepthHackSurfs[frontEndDataOut->codeSurfEmissiveDepthHackCount];
  v8 = (__m256i *)&surfs[(unsigned __int64)drawListSrc->codeSurfList.count];
  v26 = &frontEndDataOut->codeEmissivePostBlurDepthHackSurfs[31];
  v9 = (__m256i *)v23;
LABEL_2:
  v10 = v7 == v8;
  if ( v7 > v8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v7, v8) )
      __debugbreak();
    v10 = v7 == v8;
  }
  while ( 1 )
  {
    if ( v10 )
      goto LABEL_24;
    v11 = v7->m256i_i32[0];
    if ( (unsigned __int16)v7->m256i_i32[0] >= rgp.materialCount )
    {
      LODWORD(v22) = rgp.materialCount;
      LODWORD(v21) = (unsigned __int16)v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[(unsigned __int16)v11]);
    if ( !MaterialAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlist.cpp", 319, ASSERT_TYPE_ASSERT, "(sortedMaterial)", (const char *)&queryFormat, "sortedMaterial") )
      __debugbreak();
    if ( (v11 & 0x2000000) != 0 )
      break;
    if ( (MaterialAtIndex->runtimeFlags & 0x20) != 0 )
    {
      if ( v24 > v28 )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs EMPB");
      }
      else
      {
        *(__m256i *)&v24->drawGroup.fields = *v7;
        *(__m256i *)v24->bounds.midPoint.v = v7[1];
        v5 = (__m256i *)&v24[1];
      }
      v7 += 2;
      if ( v7 > v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v7, v8) )
        __debugbreak();
LABEL_24:
      v13 = v23;
      goto LABEL_25;
    }
    v6 += 2;
    v7 += 2;
    v10 = v7 == v8;
    if ( v7 > v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v7, v8) )
        __debugbreak();
      goto LABEL_2;
    }
  }
  if ( (MaterialAtIndex->runtimeFlags & 0x20) != 0 )
  {
    if ( v25 > v26 )
    {
      R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs PBDH");
    }
    else
    {
      *(__m256i *)&v25->drawGroup.fields = *v7;
      *(__m256i *)v25->bounds.midPoint.v = v7[1];
      v4 = (__m256i *)&v25[1];
    }
    v13 = v23;
  }
  else
  {
    v13 = v23;
    if ( v23 > v27 )
    {
      R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs EMDH");
    }
    else
    {
      *(__m256i *)&v23->drawGroup.fields = *v7;
      *(__m256i *)v23->bounds.midPoint.v = v7[1];
      v9 = (__m256i *)&v23[1];
    }
  }
  v7 += 2;
  v14 = v7 == v8;
  if ( v7 <= v8 )
    goto LABEL_29;
LABEL_64:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v7, v8) )
    __debugbreak();
LABEL_25:
  v14 = v7 == v8;
  if ( v7 > v8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v7, v8) )
      __debugbreak();
    v14 = v7 == v8;
  }
LABEL_29:
  while ( !v14 )
  {
    v15 = v7->m256i_i32[0];
    if ( (unsigned __int16)v7->m256i_i32[0] >= rgp.materialCount )
    {
      LODWORD(v22) = rgp.materialCount;
      LODWORD(v21) = (unsigned __int16)v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v16 = DB_GetMaterialAtIndex(rgp.sortedMaterials[(unsigned __int16)v15]);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlist.cpp", 382, ASSERT_TYPE_ASSERT, "(sortedMaterial)", (const char *)&queryFormat, "sortedMaterial") )
      __debugbreak();
    if ( (v15 & 0x2000000) != 0 )
    {
      if ( (v16->runtimeFlags & 0x20) == 0 )
      {
        v13 = v23;
        if ( v9 < (__m256i *)v23 || v9 > (__m256i *)v27 )
        {
          R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs EMDH");
        }
        else
        {
          *v9 = *v7;
          v9[1] = v7[1];
          v9 += 2;
        }
        goto LABEL_63;
      }
      if ( v4 < (__m256i *)v25 || v4 > (__m256i *)v26 )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs PBDH");
      }
      else
      {
        *v4 = *v7;
        v4[1] = v7[1];
        v4 += 2;
      }
    }
    else if ( (v16->runtimeFlags & 0x20) != 0 )
    {
      if ( v5 < (__m256i *)v24 || v5 > (__m256i *)v28 )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs EMPB");
      }
      else
      {
        *v5 = *v7;
        v5[1] = v7[1];
        v5 += 2;
      }
    }
    else
    {
      *v6 = *v7;
      v6[1] = v7[1];
      v6 += 2;
    }
    v13 = v23;
LABEL_63:
    v7 += 2;
    v14 = v7 == v8;
    if ( v7 > v8 )
      goto LABEL_64;
  }
  v17 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((char *)v9 - (char *)v13) >> 6);
  v18 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((char *)v5 - (char *)v24) >> 6);
  v19 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((char *)v4 - (char *)v25) >> 6);
  v20 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((char *)v6 - (char *)surfs) >> 6);
  drawListDst->codeSurfList.surfs = v23;
  drawListDst->codeSurfList.count = v17;
  drawListPostBlurDst->codeSurfList.count = v18;
  drawListPostBlurDst->codeSurfList.surfs = v24;
  drawListPostBlurDepthHackDst->codeSurfList.count = v19;
  drawListPostBlurDepthHackDst->codeSurfList.surfs = v25;
  drawListSrc->codeSurfList.count = v20;
  frontEndDataOut->codeSurfEmissiveDepthHackCount += drawListDst->codeSurfList.count;
  frontEndDataOut->codeSurfEmissivePostBlurCount += drawListPostBlurDst->codeSurfList.count;
  frontEndDataOut->codeSurfEmissivePostBlurDepthHackCount += drawListPostBlurDepthHackDst->codeSurfList.count;
}

/*
==============
R_SplitSurfs
==============
*/
void R_SplitSurfs(unsigned int splitKey, GfxDrawList *drawListSrc, GfxDrawList *drawListDst, volatile int *renderFeatures, GfxViewMaterialRenderFeatures renderFeatureSplitPredicate)
{
  char v5; 
  const unsigned __int64 *stream; 
  const unsigned __int64 *end; 
  bool v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  GfxBrushModel *models; 
  char v15; 
  GfxCodeSurf *surfs; 
  GfxCodeSurfListType listType; 
  GfxCodeSurf *v18; 
  bool v19; 
  GfxDrawGroupSetup v20; 
  bool v21; 
  char v22; 
  GfxGlassSurf *v23; 
  GfxGlassSurf *v24; 
  bool v25; 
  __int64 materialSortedIndex; 
  int v27; 
  bool v28; 
  __int64 v29; 
  char v30; 
  GfxCodeSurfListType v31; 
  GfxCodeSurfListType v32; 
  const GfxDrawSurf *array; 
  const GfxDrawSurf *v34; 
  bool v35; 
  int v38; 
  int v39; 
  bool v40; 
  int v43; 
  int v44; 
  const unsigned __int8 *surfData; 
  char v46; 
  const unsigned __int8 *visData; 
  const unsigned __int8 *v48; 
  unsigned int v49; 
  unsigned int v50; 
  bool v51; 
  const unsigned __int8 *v52; 
  char v53; 
  unsigned int v54; 
  unsigned int v55; 
  const unsigned __int8 *v56; 
  const unsigned __int8 *v57; 
  const unsigned __int8 *v58; 
  bool v59; 
  const unsigned __int8 *v60; 
  char v61; 
  unsigned int v62; 
  unsigned int v63; 
  const unsigned __int8 *v64; 
  const unsigned __int8 *v65; 
  const unsigned __int8 *v66; 
  bool v67; 
  const unsigned __int8 *v68; 
  char v69; 
  char v70; 
  GfxStDrawSurf *v71; 
  __int64 count; 
  GfxStDrawSurf *v73; 
  bool v74; 
  GfxDrawGroupSetup v75; 
  bool v76; 
  const unsigned __int64 *mark; 
  const unsigned __int64 *v78; 
  const unsigned __int64 *v79; 
  GfxCodeSurf *v80; 
  GfxCodeSurf *v81; 
  GfxGlassSurf *v82; 
  GfxGlassSurf *v83; 
  unsigned int v84; 
  const GfxDrawSurf *v85; 
  unsigned int v86; 
  const GfxDrawSurf *v87; 
  unsigned int v88; 
  const unsigned __int8 *v89; 
  unsigned int v90; 
  const unsigned __int8 *v91; 
  const unsigned __int8 *v92; 
  unsigned int v93; 
  const unsigned __int8 *v94; 
  unsigned int v95; 
  const unsigned __int8 *v96; 
  const unsigned __int8 *v97; 
  unsigned int v98; 
  const unsigned __int8 *v99; 
  unsigned int v100; 
  const unsigned __int8 *v101; 
  const unsigned __int8 *v102; 
  unsigned int v103; 
  GfxStDrawSurf *v104; 
  __int64 v105; 
  __int64 v106; 
  char v107; 
  GfxCodeSurfListType v108; 
  const unsigned __int64 *v112; 
  GfxCodeSurf *v113; 
  const unsigned __int64 *v114; 
  const GfxDrawSurf *v115; 
  const unsigned __int8 *v116; 
  GfxCodeSurf *v117; 
  GfxGlassSurf *v118; 
  const unsigned __int8 *v119; 
  const unsigned __int8 *v120; 
  GfxGlassSurf *v121; 
  GfxBspSurfIter v122; 
  GfxCodeSurf *v123; 
  GfxGlassSurf *v124; 
  const GfxDrawSurf *v125; 
  const GfxDrawSurf *v126; 
  const unsigned __int8 *v127; 
  const unsigned __int8 *v128; 
  const unsigned __int8 *v129; 
  const unsigned __int8 *v130; 
  const unsigned __int8 *v131; 
  const unsigned __int8 *v132; 
  const unsigned __int8 *v133; 
  const unsigned __int8 *v134; 
  const unsigned __int8 *v135; 
  GfxStDrawSurf *v136; 

  v107 = 0;
  v5 = 0;
  if ( (*renderFeatures & renderFeatureSplitPredicate) != 0 )
  {
    stream = drawListSrc->bspSurfList.stream;
    end = &stream[drawListSrc->bspSurfList.count];
    v122.current = stream;
    v122.end = end;
    v122.mark = stream;
LABEL_3:
    v112 = stream;
    while ( 1 )
    {
      v9 = stream < end;
      if ( stream > end )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 73, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", stream, end) )
          __debugbreak();
        v9 = stream < end;
      }
      if ( !v9 )
        break;
      v10 = *stream;
      if ( v10 == -1i64 || v5 )
        break;
      v11 = (v10 >> 18) & 0x3FFFF;
      models = rgp.world->models;
      if ( (unsigned int)v11 >= models->surfaceCount )
      {
        LODWORD(v106) = models->surfaceCount;
        LODWORD(v105) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( firstSurfIndex ) < (unsigned)( rgp.world->models[0].surfaceCount )", "firstSurfIndex doesn't index rgp.world->models[0].surfaceCount\n\t%i not in [0, %i)", v105, v106) )
          __debugbreak();
      }
      _XMM0.fields = (GfxDrawSurfFields)rgp.world->surfaces.surfaceMaterials[(unsigned int)v11];
      __asm { vpextrq rax, xmm0, 1 }
      if ( ((_RAX >> 27) & 0x3F) < splitKey )
      {
        GfxBspSurfIter::SkipToNextDrawGroup(&v122);
        end = v122.end;
        stream = v122.current;
        goto LABEL_3;
      }
      stream = v112;
      v5 = 1;
      v107 = 1;
    }
    v15 = 0;
    v114 = end;
    surfs = drawListSrc->codeSurfList.surfs;
    listType = drawListSrc->codeSurfList.listType;
    v18 = &surfs[(unsigned __int64)drawListSrc->codeSurfList.count];
    v113 = surfs;
    v123 = v18;
    v108 = listType;
    v117 = surfs;
    while ( 1 )
    {
      v19 = surfs == v18;
      if ( surfs > v18 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfs, v18) )
          __debugbreak();
        v19 = surfs == v18;
      }
      if ( v19 || v15 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[LOWORD(surfs->drawGroup.packed)] < splitKey )
      {
        if ( surfs > v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfs, v18) )
          __debugbreak();
        v20.fields = (GfxDrawGroupSetupFields)surfs->drawGroup;
        do
        {
          v113 = ++surfs;
          v21 = surfs == v18;
          if ( surfs > v18 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfs, v18) )
              __debugbreak();
            v21 = surfs == v18;
          }
        }
        while ( !v21 && surfs->drawGroup.packed == v20.packed );
      }
      else
      {
        v15 = 1;
        v107 = 1;
      }
    }
    v22 = 0;
    v23 = drawListSrc->glassSurfList.surfs;
    v121 = v23;
    v118 = v23;
    v24 = &v23[drawListSrc->glassSurfList.count];
    v124 = v24;
    while ( 1 )
    {
      v25 = v23 == v24;
      if ( v23 > v24 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v23, v24) )
          __debugbreak();
        v25 = v23 == v24;
      }
      if ( v25 || v22 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[v23->materialSortedIndex] < splitKey )
      {
        if ( v23 > v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v23, v24) )
          __debugbreak();
        materialSortedIndex = v23->materialSortedIndex;
        if ( (unsigned int)materialSortedIndex >= rgp.materialCount )
        {
          LODWORD(v106) = rgp.materialCount;
          LODWORD(v105) = v23->materialSortedIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 45, ASSERT_TYPE_ASSERT, "(unsigned)( drawGroup.fields.materialSortedIndex ) < (unsigned)( rgp.materialCount )", "drawGroup.fields.materialSortedIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v105, v106) )
            __debugbreak();
          if ( (unsigned int)materialSortedIndex >= rgp.materialCount )
          {
            LODWORD(v106) = rgp.materialCount;
            LODWORD(v105) = materialSortedIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v105, v106) )
              __debugbreak();
          }
        }
        v27 = materialSortedIndex | (((LODWORD(DB_GetMaterialAtIndex(rgp.sortedMaterials[materialSortedIndex])->drawSurf.packed.p1) >> 22) & 1 | 0x1C) << 17);
        do
        {
          v121 = ++v23;
          v28 = v23 == v24;
          if ( v23 > v24 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v23, v24) )
              __debugbreak();
            v28 = v23 == v24;
          }
          if ( v28 )
            break;
          v29 = v23->materialSortedIndex;
          if ( (unsigned int)v29 >= rgp.materialCount )
          {
            LODWORD(v106) = rgp.materialCount;
            LODWORD(v105) = v23->materialSortedIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 45, ASSERT_TYPE_ASSERT, "(unsigned)( drawGroup.fields.materialSortedIndex ) < (unsigned)( rgp.materialCount )", "drawGroup.fields.materialSortedIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v105, v106) )
              __debugbreak();
            if ( (unsigned int)v29 >= rgp.materialCount )
            {
              LODWORD(v106) = rgp.materialCount;
              LODWORD(v105) = v29;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v105, v106) )
                __debugbreak();
            }
          }
        }
        while ( ((unsigned int)v29 | (((LODWORD(DB_GetMaterialAtIndex(rgp.sortedMaterials[v29])->drawSurf.packed.p1) >> 22) & 1 | 0x1C) << 17)) == v27 );
      }
      else
      {
        v22 = 1;
        v107 = 1;
      }
    }
    v30 = 0;
    v31 = v108;
    v32 = v108;
    array = drawListSrc->drawSurfList.array;
    v34 = &array[drawListSrc->drawSurfList.count];
    v115 = array;
    v126 = v34;
    v125 = array;
    while ( 1 )
    {
      v35 = array == v34;
      if ( array > v34 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", array, v34) )
          __debugbreak();
        v35 = array == v34;
      }
      if ( v35 || v30 )
        break;
      if ( ((array->packed.p1 >> 27) & 0x3F) < splitKey )
      {
        if ( array > v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", array, v34) )
          __debugbreak();
        _XMM0 = array->fields;
        __asm { vpextrq r8, xmm0, 1 }
        v38 = 0x10000;
        v39 = (unsigned __int16)(v31 ^ _R8) ^ v31;
        if ( ((((_R8 >> 16) & 7) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
          v38 = 0;
        v31 = v38 | v39 & 0xFC00FFFF | (((_R8 >> 22) & 1 | (2 * ((_R8 >> 23) & 0xF | (((unsigned int)(_R8 >> 21) & 1) << 7)))) << 17);
        do
        {
          v115 = ++array;
          v40 = array == v34;
          if ( array > v34 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", array, v34) )
              __debugbreak();
            v40 = array == v34;
          }
          if ( v40 )
            break;
          _XMM0 = array->fields;
          __asm { vpextrq r8, xmm0, 1 }
          v43 = 0x10000;
          v44 = (unsigned __int16)(v32 ^ _R8) ^ v32;
          if ( ((((_R8 >> 16) & 7) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
            v43 = 0;
          v32 = v43 | v44 & 0xFC00FFFF | (((_R8 >> 22) & 1 | (2 * ((_R8 >> 23) & 0xF | (((unsigned int)(_R8 >> 21) & 1) << 7)))) << 17);
        }
        while ( v32 == v31 );
      }
      else
      {
        v30 = 1;
        v107 = 1;
      }
    }
    surfData = drawListSrc->smodelSurfList[0].surfData;
    v46 = 0;
    visData = drawListSrc->smodelSurfList[0].visData;
    v48 = &surfData[drawListSrc->smodelSurfList[0].surfDataBytes];
    v49 = v108;
    v50 = v108;
    v129 = v48;
    v116 = surfData;
    v128 = visData;
    v127 = surfData;
    while ( 1 )
    {
LABEL_94:
      v51 = surfData == v48;
      if ( surfData > v48 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfData, v48) )
          __debugbreak();
        v51 = surfData == v48;
      }
      if ( v51 || v46 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[*((unsigned __int16 *)surfData + 3)] < splitKey )
      {
        if ( surfData > v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfData, v48) )
          __debugbreak();
        v49 = ((*((_WORD *)surfData + 2) & 1) << 17) | *((unsigned __int16 *)surfData + 3) | v49 & 0xFC000000;
        while ( 1 )
        {
          v52 = &surfData[4 * *(unsigned __int16 *)surfData + 12];
          v116 = v52;
          surfData = v52;
          if ( v52 > v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v52, v48) )
            __debugbreak();
          if ( surfData == v48 )
            goto LABEL_112;
          v50 = ((*((_WORD *)surfData + 2) & 1) << 17) | *((unsigned __int16 *)surfData + 3) | v50 & 0xFC000000;
          if ( v50 != v49 )
            goto LABEL_94;
        }
      }
      v46 = 1;
      v107 = 1;
    }
LABEL_112:
    v53 = 0;
    v54 = v108;
    v55 = v108;
    v56 = drawListSrc->smodelSurfList[1].surfData;
    v57 = drawListSrc->smodelSurfList[1].visData;
    v58 = &v56[drawListSrc->smodelSurfList[1].surfDataBytes];
    v132 = v58;
    v120 = v56;
    v131 = v57;
    v130 = v56;
    while ( 1 )
    {
LABEL_113:
      v59 = v56 == v58;
      if ( v56 > v58 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v56, v58) )
          __debugbreak();
        v59 = v56 == v58;
      }
      if ( v59 || v53 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[*((unsigned __int16 *)v56 + 3)] < splitKey )
      {
        if ( v56 > v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v56, v58) )
          __debugbreak();
        v54 = ((*((_WORD *)v56 + 2) & 1) << 17) | *((unsigned __int16 *)v56 + 3) | v54 & 0xFC000000;
        while ( 1 )
        {
          v60 = &v56[4 * *(unsigned __int16 *)v56 + 12];
          v120 = v60;
          v56 = v60;
          if ( v60 > v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v60, v58) )
            __debugbreak();
          if ( v56 == v58 )
            goto LABEL_131;
          v55 = ((*((_WORD *)v56 + 2) & 1) << 17) | *((unsigned __int16 *)v56 + 3) | v55 & 0xFC000000;
          if ( v55 != v54 )
            goto LABEL_113;
        }
      }
      v53 = 1;
      v107 = 1;
    }
LABEL_131:
    v61 = 0;
    v62 = v108;
    v63 = v108;
    v64 = drawListSrc->smodelSurfList[2].surfData;
    v65 = drawListSrc->smodelSurfList[2].visData;
    v66 = &v64[drawListSrc->smodelSurfList[2].surfDataBytes];
    v135 = v66;
    v119 = v64;
    v134 = v65;
    v133 = v64;
    while ( 1 )
    {
LABEL_132:
      v67 = v64 == v66;
      if ( v64 > v66 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v64, v66) )
          __debugbreak();
        v67 = v64 == v66;
      }
      if ( v67 || v61 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[*((unsigned __int16 *)v64 + 3)] < splitKey )
      {
        if ( v64 > v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v64, v66) )
          __debugbreak();
        v62 = ((*((_WORD *)v64 + 2) & 1) << 17) | *((unsigned __int16 *)v64 + 3) | v62 & 0xFC000000;
        while ( 1 )
        {
          v68 = &v64[4 * *(unsigned __int16 *)v64 + 12];
          v119 = v68;
          v64 = v68;
          if ( v68 > v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v68, v66) )
            __debugbreak();
          if ( v64 == v66 )
            goto LABEL_150;
          v63 = ((*((_WORD *)v64 + 2) & 1) << 17) | *((unsigned __int16 *)v64 + 3) | v63 & 0xFC000000;
          if ( v63 != v62 )
            goto LABEL_132;
        }
      }
      v61 = 1;
      v107 = 1;
    }
LABEL_150:
    v69 = 0;
    v70 = v107;
    v71 = drawListSrc->superTerrainSurfList.surfs;
    count = drawListSrc->superTerrainSurfList.count;
    v136 = v71;
    v73 = &v71[count];
    while ( 1 )
    {
      v74 = v71 == v73;
      if ( v71 > v73 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v71, v73) )
          __debugbreak();
        v74 = v71 == v73;
      }
      if ( v74 || v69 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[LOWORD(v71->drawGroup.packed)] < splitKey )
      {
        if ( v71 > v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v71, v73) )
          __debugbreak();
        v75.fields = (GfxDrawGroupSetupFields)v71->drawGroup;
        do
        {
          v76 = ++v71 == v73;
          if ( v71 > v73 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v71, v73) )
              __debugbreak();
            v76 = v71 == v73;
          }
        }
        while ( !v76 && v71->drawGroup.packed == v75.packed );
      }
      else
      {
        v69 = 1;
        v70 = 1;
      }
    }
    if ( v70 )
    {
      mark = v122.mark;
      v78 = v112;
      if ( v122.mark > v112 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 29, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v122.mark, v112) )
          __debugbreak();
        v78 = v112;
      }
      drawListSrc->bspSurfList.stream = mark;
      drawListSrc->bspSurfList.count = truncate_cast<unsigned int,__int64>(v78 - mark);
      v79 = v114;
      if ( v112 > v114 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 36, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v112, v114) )
          __debugbreak();
        v79 = v114;
      }
      drawListDst->bspSurfList.stream = v112;
      drawListDst->bspSurfList.count = truncate_cast<unsigned int,__int64>(v79 - v112);
      v80 = v117;
      if ( v117 > v113 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurfiter.h", 29, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v117, v113) )
          __debugbreak();
        v80 = v117;
      }
      drawListSrc->codeSurfList.surfs = v80;
      drawListSrc->codeSurfList.count = truncate_cast<unsigned int,__int64>(v113 - v80);
      drawListSrc->codeSurfList.listType = v108;
      v81 = v123;
      if ( v113 > v123 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurfiter.h", 37, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v113, v123) )
        __debugbreak();
      drawListDst->codeSurfList.surfs = v113;
      drawListDst->codeSurfList.count = truncate_cast<unsigned int,__int64>(v81 - v113);
      drawListDst->codeSurfList.listType = v108;
      v82 = v118;
      if ( v118 > v121 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 27, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v118, v121) )
          __debugbreak();
        v82 = v118;
      }
      drawListSrc->glassSurfList.surfs = v82;
      drawListSrc->glassSurfList.count = truncate_cast<unsigned int,__int64>(v121 - v82);
      v83 = v124;
      if ( v121 > v124 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 34, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v121, v124) )
        __debugbreak();
      drawListDst->glassSurfList.surfs = v121;
      v84 = truncate_cast<unsigned int,__int64>(v83 - v121);
      v85 = v125;
      drawListDst->glassSurfList.count = v84;
      if ( v85 > v115 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurfiter.h", 23, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v85, v115) )
        __debugbreak();
      drawListSrc->drawSurfList.array = v85;
      v86 = truncate_cast<unsigned int,__int64>(v115 - v85);
      v87 = v126;
      drawListSrc->drawSurfList.count = v86;
      if ( v115 > v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurfiter.h", 30, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v115, v87) )
        __debugbreak();
      drawListDst->drawSurfList.array = v115;
      v88 = truncate_cast<unsigned int,__int64>(v87 - v115);
      v89 = v127;
      drawListDst->drawSurfList.count = v88;
      if ( v89 > v116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 31, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v89, v116) )
        __debugbreak();
      drawListSrc->smodelSurfList[0].surfData = v89;
      v90 = truncate_cast<unsigned int,__int64>(v116 - v89);
      v91 = v129;
      v92 = v128;
      drawListSrc->smodelSurfList[0].surfDataBytes = v90;
      drawListSrc->smodelSurfList[0].visData = v92;
      if ( v116 > v91 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 39, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v116, v91) )
        __debugbreak();
      drawListDst->smodelSurfList[0].surfData = v116;
      v93 = truncate_cast<unsigned int,__int64>(v91 - v116);
      v94 = v130;
      drawListDst->smodelSurfList[0].visData = v92;
      drawListDst->smodelSurfList[0].surfDataBytes = v93;
      if ( v94 > v120 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 31, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v94, v120) )
        __debugbreak();
      drawListSrc->smodelSurfList[1].surfData = v94;
      v95 = truncate_cast<unsigned int,__int64>(v120 - v94);
      v96 = v132;
      v97 = v131;
      drawListSrc->smodelSurfList[1].surfDataBytes = v95;
      drawListSrc->smodelSurfList[1].visData = v97;
      if ( v120 > v96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 39, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v120, v96) )
        __debugbreak();
      drawListDst->smodelSurfList[1].surfData = v120;
      v98 = truncate_cast<unsigned int,__int64>(v96 - v120);
      v99 = v133;
      drawListDst->smodelSurfList[1].visData = v97;
      drawListDst->smodelSurfList[1].surfDataBytes = v98;
      if ( v99 > v119 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 31, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v99, v119) )
        __debugbreak();
      drawListSrc->smodelSurfList[2].surfData = v99;
      v100 = truncate_cast<unsigned int,__int64>(v119 - v99);
      v101 = v135;
      v102 = v134;
      drawListSrc->smodelSurfList[2].surfDataBytes = v100;
      drawListSrc->smodelSurfList[2].visData = v102;
      if ( v119 > v101 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 39, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v119, v101) )
        __debugbreak();
      drawListDst->smodelSurfList[2].surfData = v119;
      v103 = truncate_cast<unsigned int,__int64>(v101 - v119);
      v104 = v136;
      drawListDst->smodelSurfList[2].visData = v102;
      drawListDst->smodelSurfList[2].surfDataBytes = v103;
      if ( v104 > v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_drawsurfiter.h", 27, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v104, v71) )
        __debugbreak();
      drawListSrc->superTerrainSurfList.surfs = v104;
      drawListSrc->superTerrainSurfList.count = truncate_cast<unsigned int,__int64>(v71 - v104);
      if ( v71 > v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_drawsurfiter.h", 34, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v71, v73) )
        __debugbreak();
      drawListDst->superTerrainSurfList.surfs = v71;
      drawListDst->superTerrainSurfList.count = truncate_cast<unsigned int,__int64>(v73 - v71);
    }
  }
}

