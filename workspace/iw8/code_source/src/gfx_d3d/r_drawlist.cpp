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
  GfxCodeSurf *v8; 
  bool v10; 
  GfxDrawGroupSetup v11; 
  Material *MaterialAtIndex; 
  bool v16; 
  GfxDrawGroupSetup v17; 
  Material *v18; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  __int64 v35; 
  __int64 v36; 
  GfxCodeSurf *v37; 
  GfxCodeSurf *v38; 
  GfxCodeSurf *v39; 
  GfxCodeSurf *v40; 
  GfxCodeSurf *v41; 
  GfxCodeSurf *v42; 
  GfxCodeSurf *surfs; 

  v39 = &frontEndDataOut->codeEmissivePostBlurDepthHackSurfs[frontEndDataOut->codeSurfEmissivePostBlurDepthHackCount];
  _R15 = v39;
  v41 = &frontEndDataOut->codeEmissiveDepthHackSurfs[1023];
  v38 = &frontEndDataOut->codeEmissivePostBlurSurfs[frontEndDataOut->codeSurfEmissivePostBlurCount];
  v42 = &frontEndDataOut->codeEmissivePostBlurSurfs[159];
  _R12 = v38;
  surfs = drawListSrc->codeSurfList.surfs;
  _R13 = surfs;
  _RDI = surfs;
  v37 = &frontEndDataOut->codeEmissiveDepthHackSurfs[frontEndDataOut->codeSurfEmissiveDepthHackCount];
  v8 = &surfs[(unsigned __int64)drawListSrc->codeSurfList.count];
  v40 = &frontEndDataOut->codeEmissivePostBlurDepthHackSurfs[31];
  _R14 = v37;
LABEL_2:
  v10 = _RDI == v8;
  if ( _RDI > v8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", _RDI, v8) )
      __debugbreak();
    v10 = _RDI == v8;
  }
  while ( 1 )
  {
    if ( v10 )
      goto LABEL_24;
    v11.fields = (GfxDrawGroupSetupFields)_RDI->drawGroup;
    if ( (unsigned __int16)_RDI->drawGroup.packed >= rgp.materialCount )
    {
      LODWORD(v36) = rgp.materialCount;
      LODWORD(v35) = LOWORD(v11.packed);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[LOWORD(v11.packed)]);
    if ( !MaterialAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlist.cpp", 319, ASSERT_TYPE_ASSERT, "(sortedMaterial)", (const char *)&queryFormat, "sortedMaterial") )
      __debugbreak();
    if ( (v11.packed & 0x2000000) != 0 )
      break;
    if ( (MaterialAtIndex->runtimeFlags & 0x20) != 0 )
    {
      if ( v38 > v42 )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs EMPB");
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [r12], ymm0
          vmovups ymm1, ymmword ptr [rdi+20h]
          vmovups ymmword ptr [r12+20h], ymm1
        }
        _R12 = v38 + 1;
      }
      if ( ++_RDI > v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", _RDI, v8) )
        __debugbreak();
LABEL_24:
      _RBX = v37;
      goto LABEL_25;
    }
    ++_R13;
    v10 = ++_RDI == v8;
    if ( _RDI > v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", _RDI, v8) )
        __debugbreak();
      goto LABEL_2;
    }
  }
  if ( (MaterialAtIndex->runtimeFlags & 0x20) != 0 )
  {
    if ( v39 > v40 )
    {
      R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs PBDH");
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [r15], ymm0
        vmovups ymm1, ymmword ptr [rdi+20h]
        vmovups ymmword ptr [r15+20h], ymm1
      }
      _R15 = v39 + 1;
    }
    _RBX = v37;
  }
  else
  {
    _RBX = v37;
    if ( v37 > v41 )
    {
      R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs EMDH");
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [rbx], ymm0
        vmovups ymm1, ymmword ptr [rdi+20h]
        vmovups ymmword ptr [rbx+20h], ymm1
      }
      _R14 = v37 + 1;
    }
  }
  v16 = ++_RDI == v8;
  if ( _RDI <= v8 )
    goto LABEL_29;
LABEL_64:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", _RDI, v8) )
    __debugbreak();
LABEL_25:
  v16 = _RDI == v8;
  if ( _RDI > v8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", _RDI, v8) )
      __debugbreak();
    v16 = _RDI == v8;
  }
LABEL_29:
  while ( !v16 )
  {
    v17.fields = (GfxDrawGroupSetupFields)_RDI->drawGroup;
    if ( (unsigned __int16)_RDI->drawGroup.packed >= rgp.materialCount )
    {
      LODWORD(v36) = rgp.materialCount;
      LODWORD(v35) = LOWORD(v17.packed);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    v18 = DB_GetMaterialAtIndex(rgp.sortedMaterials[LOWORD(v17.packed)]);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlist.cpp", 382, ASSERT_TYPE_ASSERT, "(sortedMaterial)", (const char *)&queryFormat, "sortedMaterial") )
      __debugbreak();
    if ( (v17.packed & 0x2000000) != 0 )
    {
      if ( (v18->runtimeFlags & 0x20) == 0 )
      {
        _RBX = v37;
        if ( _R14 < v37 || _R14 > v41 )
        {
          R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs EMDH");
        }
        else
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rdi]
            vmovups ymmword ptr [r14], ymm0
            vmovups ymm1, ymmword ptr [rdi+20h]
            vmovups ymmword ptr [r14+20h], ymm1
          }
          ++_R14;
        }
        goto LABEL_63;
      }
      if ( _R15 < v39 || _R15 > v40 )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs PBDH");
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [r15], ymm0
          vmovups ymm1, ymmword ptr [rdi+20h]
          vmovups ymmword ptr [r15+20h], ymm1
        }
        ++_R15;
      }
    }
    else if ( (v18->runtimeFlags & 0x20) != 0 )
    {
      if ( _R12 < v38 || _R12 > v42 )
      {
        R_WarnOncePerFrame(R_WARN_MAX_SCENE_DRAWSURFS, "R_SplitDepthHackCodeSurfs EMPB");
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [r12], ymm0
          vmovups ymm1, ymmword ptr [rdi+20h]
          vmovups ymmword ptr [r12+20h], ymm1
        }
        ++_R12;
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [r13+0], ymm0
        vmovups ymm1, ymmword ptr [rdi+20h]
        vmovups ymmword ptr [r13+20h], ymm1
      }
      ++_R13;
    }
    _RBX = v37;
LABEL_63:
    v16 = ++_RDI == v8;
    if ( _RDI > v8 )
      goto LABEL_64;
  }
  v31 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((char *)_R14 - (char *)_RBX) >> 6);
  v32 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((char *)_R12 - (char *)v38) >> 6);
  v33 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((char *)_R15 - (char *)v39) >> 6);
  v34 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)((char *)_R13 - (char *)surfs) >> 6);
  drawListDst->codeSurfList.surfs = v37;
  drawListDst->codeSurfList.count = v31;
  drawListPostBlurDst->codeSurfList.count = v32;
  drawListPostBlurDst->codeSurfList.surfs = v38;
  drawListPostBlurDepthHackDst->codeSurfList.count = v33;
  drawListPostBlurDepthHackDst->codeSurfList.surfs = v39;
  drawListSrc->codeSurfList.count = v34;
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
  char v17; 
  GfxCodeSurf *surfs; 
  GfxCodeSurfListType listType; 
  GfxCodeSurf *v20; 
  bool v21; 
  GfxDrawGroupSetup v22; 
  bool v23; 
  char v24; 
  GfxGlassSurf *v25; 
  GfxGlassSurf *v26; 
  bool v27; 
  __int64 materialSortedIndex; 
  int v29; 
  bool v30; 
  __int64 v31; 
  char v32; 
  GfxCodeSurfListType v33; 
  GfxCodeSurfListType v34; 
  const GfxDrawSurf *v36; 
  bool v37; 
  int v40; 
  int v41; 
  bool v42; 
  int v45; 
  int v46; 
  const unsigned __int8 *surfData; 
  char v48; 
  const unsigned __int8 *visData; 
  const unsigned __int8 *v50; 
  unsigned int v51; 
  unsigned int v52; 
  bool v53; 
  const unsigned __int8 *v54; 
  char v55; 
  unsigned int v56; 
  unsigned int v57; 
  const unsigned __int8 *v58; 
  const unsigned __int8 *v59; 
  const unsigned __int8 *v60; 
  bool v61; 
  const unsigned __int8 *v62; 
  char v63; 
  unsigned int v64; 
  unsigned int v65; 
  const unsigned __int8 *v66; 
  const unsigned __int8 *v67; 
  const unsigned __int8 *v68; 
  bool v69; 
  const unsigned __int8 *v70; 
  char v71; 
  char v72; 
  GfxStDrawSurf *v73; 
  __int64 count; 
  GfxStDrawSurf *v75; 
  bool v76; 
  GfxDrawGroupSetup v77; 
  bool v78; 
  const unsigned __int64 *mark; 
  const unsigned __int64 *v80; 
  const unsigned __int64 *v81; 
  GfxCodeSurf *v82; 
  GfxCodeSurf *v83; 
  GfxGlassSurf *v84; 
  GfxGlassSurf *v85; 
  unsigned int v86; 
  const GfxDrawSurf *v87; 
  unsigned int v88; 
  const GfxDrawSurf *v89; 
  unsigned int v90; 
  const unsigned __int8 *v91; 
  unsigned int v92; 
  const unsigned __int8 *v93; 
  const unsigned __int8 *v94; 
  unsigned int v95; 
  const unsigned __int8 *v96; 
  unsigned int v97; 
  const unsigned __int8 *v98; 
  const unsigned __int8 *v99; 
  unsigned int v100; 
  const unsigned __int8 *v101; 
  unsigned int v102; 
  const unsigned __int8 *v103; 
  const unsigned __int8 *v104; 
  unsigned int v105; 
  GfxStDrawSurf *v106; 
  __int64 v107; 
  __int64 v108; 
  char v109; 
  GfxCodeSurfListType v110; 
  const unsigned __int64 *v114; 
  GfxCodeSurf *v115; 
  const unsigned __int64 *v116; 
  const GfxDrawSurf *v117; 
  const unsigned __int8 *v118; 
  GfxCodeSurf *v119; 
  GfxGlassSurf *v120; 
  const unsigned __int8 *v121; 
  const unsigned __int8 *v122; 
  GfxGlassSurf *v123; 
  GfxBspSurfIter v124; 
  GfxCodeSurf *v125; 
  GfxGlassSurf *v126; 
  const GfxDrawSurf *v127; 
  const GfxDrawSurf *v128; 
  const unsigned __int8 *v129; 
  const unsigned __int8 *v130; 
  const unsigned __int8 *v131; 
  const unsigned __int8 *v132; 
  const unsigned __int8 *v133; 
  const unsigned __int8 *v134; 
  const unsigned __int8 *v135; 
  const unsigned __int8 *v136; 
  const unsigned __int8 *v137; 
  GfxStDrawSurf *v138; 

  v109 = 0;
  v5 = 0;
  if ( (*renderFeatures & renderFeatureSplitPredicate) != 0 )
  {
    stream = drawListSrc->bspSurfList.stream;
    end = &stream[drawListSrc->bspSurfList.count];
    v124.current = stream;
    v124.end = end;
    v124.mark = stream;
LABEL_3:
    v114 = stream;
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
        LODWORD(v108) = models->surfaceCount;
        LODWORD(v107) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( firstSurfIndex ) < (unsigned)( rgp.world->models[0].surfaceCount )", "firstSurfIndex doesn't index rgp.world->models[0].surfaceCount\n\t%i not in [0, %i)", v107, v108) )
          __debugbreak();
      }
      _RDX = 2i64 * (unsigned int)v11;
      _RCX = rgp.world->surfaces.surfaceMaterials;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+rdx*8]
        vpextrq rax, xmm0, 1
      }
      if ( ((_RAX >> 27) & 0x3F) < splitKey )
      {
        GfxBspSurfIter::SkipToNextDrawGroup(&v124);
        end = v124.end;
        stream = v124.current;
        goto LABEL_3;
      }
      stream = v114;
      v5 = 1;
      v109 = 1;
    }
    v17 = 0;
    v116 = end;
    surfs = drawListSrc->codeSurfList.surfs;
    listType = drawListSrc->codeSurfList.listType;
    v20 = &surfs[(unsigned __int64)drawListSrc->codeSurfList.count];
    v115 = surfs;
    v125 = v20;
    v110 = listType;
    v119 = surfs;
    while ( 1 )
    {
      v21 = surfs == v20;
      if ( surfs > v20 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfs, v20) )
          __debugbreak();
        v21 = surfs == v20;
      }
      if ( v21 || v17 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[LOWORD(surfs->drawGroup.packed)] < splitKey )
      {
        if ( surfs > v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfs, v20) )
          __debugbreak();
        v22.fields = (GfxDrawGroupSetupFields)surfs->drawGroup;
        do
        {
          v115 = ++surfs;
          v23 = surfs == v20;
          if ( surfs > v20 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfs, v20) )
              __debugbreak();
            v23 = surfs == v20;
          }
        }
        while ( !v23 && surfs->drawGroup.packed == v22.packed );
      }
      else
      {
        v17 = 1;
        v109 = 1;
      }
    }
    v24 = 0;
    v25 = drawListSrc->glassSurfList.surfs;
    v123 = v25;
    v120 = v25;
    v26 = &v25[drawListSrc->glassSurfList.count];
    v126 = v26;
    while ( 1 )
    {
      v27 = v25 == v26;
      if ( v25 > v26 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v25, v26) )
          __debugbreak();
        v27 = v25 == v26;
      }
      if ( v27 || v24 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[v25->materialSortedIndex] < splitKey )
      {
        if ( v25 > v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v25, v26) )
          __debugbreak();
        materialSortedIndex = v25->materialSortedIndex;
        if ( (unsigned int)materialSortedIndex >= rgp.materialCount )
        {
          LODWORD(v108) = rgp.materialCount;
          LODWORD(v107) = v25->materialSortedIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 45, ASSERT_TYPE_ASSERT, "(unsigned)( drawGroup.fields.materialSortedIndex ) < (unsigned)( rgp.materialCount )", "drawGroup.fields.materialSortedIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v107, v108) )
            __debugbreak();
          if ( (unsigned int)materialSortedIndex >= rgp.materialCount )
          {
            LODWORD(v108) = rgp.materialCount;
            LODWORD(v107) = materialSortedIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v107, v108) )
              __debugbreak();
          }
        }
        v29 = materialSortedIndex | (((LODWORD(DB_GetMaterialAtIndex(rgp.sortedMaterials[materialSortedIndex])->drawSurf.packed.p1) >> 22) & 1 | 0x1C) << 17);
        do
        {
          v123 = ++v25;
          v30 = v25 == v26;
          if ( v25 > v26 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v25, v26) )
              __debugbreak();
            v30 = v25 == v26;
          }
          if ( v30 )
            break;
          v31 = v25->materialSortedIndex;
          if ( (unsigned int)v31 >= rgp.materialCount )
          {
            LODWORD(v108) = rgp.materialCount;
            LODWORD(v107) = v25->materialSortedIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 45, ASSERT_TYPE_ASSERT, "(unsigned)( drawGroup.fields.materialSortedIndex ) < (unsigned)( rgp.materialCount )", "drawGroup.fields.materialSortedIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v107, v108) )
              __debugbreak();
            if ( (unsigned int)v31 >= rgp.materialCount )
            {
              LODWORD(v108) = rgp.materialCount;
              LODWORD(v107) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v107, v108) )
                __debugbreak();
            }
          }
        }
        while ( ((unsigned int)v31 | (((LODWORD(DB_GetMaterialAtIndex(rgp.sortedMaterials[v31])->drawSurf.packed.p1) >> 22) & 1 | 0x1C) << 17)) == v29 );
      }
      else
      {
        v24 = 1;
        v109 = 1;
      }
    }
    v32 = 0;
    v33 = v110;
    v34 = v110;
    _R13 = drawListSrc->drawSurfList.array;
    v36 = &_R13[drawListSrc->drawSurfList.count];
    v117 = _R13;
    v128 = v36;
    v127 = _R13;
    while ( 1 )
    {
      v37 = _R13 == v36;
      if ( _R13 > v36 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", _R13, v36) )
          __debugbreak();
        v37 = _R13 == v36;
      }
      if ( v37 || v32 )
        break;
      if ( ((_R13->packed.p1 >> 27) & 0x3F) < splitKey )
      {
        if ( _R13 > v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", _R13, v36) )
          __debugbreak();
        __asm
        {
          vmovups xmm0, xmmword ptr [r13+0]
          vpextrq r8, xmm0, 1
        }
        v40 = 0x10000;
        v41 = (unsigned __int16)(v33 ^ _R8) ^ v33;
        if ( ((((_R8 >> 16) & 7) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
          v40 = 0;
        v33 = v40 | v41 & 0xFC00FFFF | (((_R8 >> 22) & 1 | (2 * ((_R8 >> 23) & 0xF | (((unsigned int)(_R8 >> 21) & 1) << 7)))) << 17);
        do
        {
          v117 = ++_R13;
          v42 = _R13 == v36;
          if ( _R13 > v36 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", _R13, v36) )
              __debugbreak();
            v42 = _R13 == v36;
          }
          if ( v42 )
            break;
          __asm
          {
            vmovups xmm0, xmmword ptr [r13+0]
            vpextrq r8, xmm0, 1
          }
          v45 = 0x10000;
          v46 = (unsigned __int16)(v34 ^ _R8) ^ v34;
          if ( ((((_R8 >> 16) & 7) - 1) & 0xFFFFFFFFFFFFFFFDui64) != 0 )
            v45 = 0;
          v34 = v45 | v46 & 0xFC00FFFF | (((_R8 >> 22) & 1 | (2 * ((_R8 >> 23) & 0xF | (((unsigned int)(_R8 >> 21) & 1) << 7)))) << 17);
        }
        while ( v34 == v33 );
      }
      else
      {
        v32 = 1;
        v109 = 1;
      }
    }
    surfData = drawListSrc->smodelSurfList[0].surfData;
    v48 = 0;
    visData = drawListSrc->smodelSurfList[0].visData;
    v50 = &surfData[drawListSrc->smodelSurfList[0].surfDataBytes];
    v51 = v110;
    v52 = v110;
    v131 = v50;
    v118 = surfData;
    v130 = visData;
    v129 = surfData;
    while ( 1 )
    {
LABEL_94:
      v53 = surfData == v50;
      if ( surfData > v50 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfData, v50) )
          __debugbreak();
        v53 = surfData == v50;
      }
      if ( v53 || v48 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[*((unsigned __int16 *)surfData + 3)] < splitKey )
      {
        if ( surfData > v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", surfData, v50) )
          __debugbreak();
        v51 = ((*((_WORD *)surfData + 2) & 1) << 17) | *((unsigned __int16 *)surfData + 3) | v51 & 0xFC000000;
        while ( 1 )
        {
          v54 = &surfData[4 * *(unsigned __int16 *)surfData + 12];
          v118 = v54;
          surfData = v54;
          if ( v54 > v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v54, v50) )
            __debugbreak();
          if ( surfData == v50 )
            goto LABEL_112;
          v52 = ((*((_WORD *)surfData + 2) & 1) << 17) | *((unsigned __int16 *)surfData + 3) | v52 & 0xFC000000;
          if ( v52 != v51 )
            goto LABEL_94;
        }
      }
      v48 = 1;
      v109 = 1;
    }
LABEL_112:
    v55 = 0;
    v56 = v110;
    v57 = v110;
    v58 = drawListSrc->smodelSurfList[1].surfData;
    v59 = drawListSrc->smodelSurfList[1].visData;
    v60 = &v58[drawListSrc->smodelSurfList[1].surfDataBytes];
    v134 = v60;
    v122 = v58;
    v133 = v59;
    v132 = v58;
    while ( 1 )
    {
LABEL_113:
      v61 = v58 == v60;
      if ( v58 > v60 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v58, v60) )
          __debugbreak();
        v61 = v58 == v60;
      }
      if ( v61 || v55 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[*((unsigned __int16 *)v58 + 3)] < splitKey )
      {
        if ( v58 > v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v58, v60) )
          __debugbreak();
        v56 = ((*((_WORD *)v58 + 2) & 1) << 17) | *((unsigned __int16 *)v58 + 3) | v56 & 0xFC000000;
        while ( 1 )
        {
          v62 = &v58[4 * *(unsigned __int16 *)v58 + 12];
          v122 = v62;
          v58 = v62;
          if ( v62 > v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v62, v60) )
            __debugbreak();
          if ( v58 == v60 )
            goto LABEL_131;
          v57 = ((*((_WORD *)v58 + 2) & 1) << 17) | *((unsigned __int16 *)v58 + 3) | v57 & 0xFC000000;
          if ( v57 != v56 )
            goto LABEL_113;
        }
      }
      v55 = 1;
      v109 = 1;
    }
LABEL_131:
    v63 = 0;
    v64 = v110;
    v65 = v110;
    v66 = drawListSrc->smodelSurfList[2].surfData;
    v67 = drawListSrc->smodelSurfList[2].visData;
    v68 = &v66[drawListSrc->smodelSurfList[2].surfDataBytes];
    v137 = v68;
    v121 = v66;
    v136 = v67;
    v135 = v66;
    while ( 1 )
    {
LABEL_132:
      v69 = v66 == v68;
      if ( v66 > v68 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v66, v68) )
          __debugbreak();
        v69 = v66 == v68;
      }
      if ( v69 || v63 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[*((unsigned __int16 *)v66 + 3)] < splitKey )
      {
        if ( v66 > v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v66, v68) )
          __debugbreak();
        v64 = ((*((_WORD *)v66 + 2) & 1) << 17) | *((unsigned __int16 *)v66 + 3) | v64 & 0xFC000000;
        while ( 1 )
        {
          v70 = &v66[4 * *(unsigned __int16 *)v66 + 12];
          v121 = v70;
          v66 = v70;
          if ( v70 > v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v70, v68) )
            __debugbreak();
          if ( v66 == v68 )
            goto LABEL_150;
          v65 = ((*((_WORD *)v66 + 2) & 1) << 17) | *((unsigned __int16 *)v66 + 3) | v65 & 0xFC000000;
          if ( v65 != v64 )
            goto LABEL_132;
        }
      }
      v63 = 1;
      v109 = 1;
    }
LABEL_150:
    v71 = 0;
    v72 = v109;
    v73 = drawListSrc->superTerrainSurfList.surfs;
    count = drawListSrc->superTerrainSurfList.count;
    v138 = v73;
    v75 = &v73[count];
    while ( 1 )
    {
      v76 = v73 == v75;
      if ( v73 > v75 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v73, v75) )
          __debugbreak();
        v76 = v73 == v75;
      }
      if ( v76 || v71 )
        break;
      if ( g_drawConsts.sortedMaterialKeys[LOWORD(v73->drawGroup.packed)] < splitKey )
      {
        if ( v73 > v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v73, v75) )
          __debugbreak();
        v77.fields = (GfxDrawGroupSetupFields)v73->drawGroup;
        do
        {
          v78 = ++v73 == v75;
          if ( v73 > v75 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_surfiter.h", 48, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v73, v75) )
              __debugbreak();
            v78 = v73 == v75;
          }
        }
        while ( !v78 && v73->drawGroup.packed == v77.packed );
      }
      else
      {
        v71 = 1;
        v72 = 1;
      }
    }
    if ( v72 )
    {
      mark = v124.mark;
      v80 = v114;
      if ( v124.mark > v114 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 29, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v124.mark, v114) )
          __debugbreak();
        v80 = v114;
      }
      drawListSrc->bspSurfList.stream = mark;
      drawListSrc->bspSurfList.count = truncate_cast<unsigned int,__int64>(v80 - mark);
      v81 = v116;
      if ( v114 > v116 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bspsurfiter.h", 36, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v114, v116) )
          __debugbreak();
        v81 = v116;
      }
      drawListDst->bspSurfList.stream = v114;
      drawListDst->bspSurfList.count = truncate_cast<unsigned int,__int64>(v81 - v114);
      v82 = v119;
      if ( v119 > v115 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurfiter.h", 29, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v119, v115) )
          __debugbreak();
        v82 = v119;
      }
      drawListSrc->codeSurfList.surfs = v82;
      drawListSrc->codeSurfList.count = truncate_cast<unsigned int,__int64>(v115 - v82);
      drawListSrc->codeSurfList.listType = v110;
      v83 = v125;
      if ( v115 > v125 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_codesurfiter.h", 37, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v115, v125) )
        __debugbreak();
      drawListDst->codeSurfList.surfs = v115;
      drawListDst->codeSurfList.count = truncate_cast<unsigned int,__int64>(v83 - v115);
      drawListDst->codeSurfList.listType = v110;
      v84 = v120;
      if ( v120 > v123 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 27, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v120, v123) )
          __debugbreak();
        v84 = v120;
      }
      drawListSrc->glassSurfList.surfs = v84;
      drawListSrc->glassSurfList.count = truncate_cast<unsigned int,__int64>(v123 - v84);
      v85 = v126;
      if ( v123 > v126 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_glasssurfiter.h", 34, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v123, v126) )
        __debugbreak();
      drawListDst->glassSurfList.surfs = v123;
      v86 = truncate_cast<unsigned int,__int64>(v85 - v123);
      v87 = v127;
      drawListDst->glassSurfList.count = v86;
      if ( v87 > v117 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurfiter.h", 23, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v87, v117) )
        __debugbreak();
      drawListSrc->drawSurfList.array = v87;
      v88 = truncate_cast<unsigned int,__int64>(v117 - v87);
      v89 = v128;
      drawListSrc->drawSurfList.count = v88;
      if ( v117 > v89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurfiter.h", 30, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v117, v89) )
        __debugbreak();
      drawListDst->drawSurfList.array = v117;
      v90 = truncate_cast<unsigned int,__int64>(v89 - v117);
      v91 = v129;
      drawListDst->drawSurfList.count = v90;
      if ( v91 > v118 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 31, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v91, v118) )
        __debugbreak();
      drawListSrc->smodelSurfList[0].surfData = v91;
      v92 = truncate_cast<unsigned int,__int64>(v118 - v91);
      v93 = v131;
      v94 = v130;
      drawListSrc->smodelSurfList[0].surfDataBytes = v92;
      drawListSrc->smodelSurfList[0].visData = v94;
      if ( v118 > v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 39, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v118, v93) )
        __debugbreak();
      drawListDst->smodelSurfList[0].surfData = v118;
      v95 = truncate_cast<unsigned int,__int64>(v93 - v118);
      v96 = v132;
      drawListDst->smodelSurfList[0].visData = v94;
      drawListDst->smodelSurfList[0].surfDataBytes = v95;
      if ( v96 > v122 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 31, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v96, v122) )
        __debugbreak();
      drawListSrc->smodelSurfList[1].surfData = v96;
      v97 = truncate_cast<unsigned int,__int64>(v122 - v96);
      v98 = v134;
      v99 = v133;
      drawListSrc->smodelSurfList[1].surfDataBytes = v97;
      drawListSrc->smodelSurfList[1].visData = v99;
      if ( v122 > v98 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 39, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v122, v98) )
        __debugbreak();
      drawListDst->smodelSurfList[1].surfData = v122;
      v100 = truncate_cast<unsigned int,__int64>(v98 - v122);
      v101 = v135;
      drawListDst->smodelSurfList[1].visData = v99;
      drawListDst->smodelSurfList[1].surfDataBytes = v100;
      if ( v101 > v121 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 31, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v101, v121) )
        __debugbreak();
      drawListSrc->smodelSurfList[2].surfData = v101;
      v102 = truncate_cast<unsigned int,__int64>(v121 - v101);
      v103 = v137;
      v104 = v136;
      drawListSrc->smodelSurfList[2].surfDataBytes = v102;
      drawListSrc->smodelSurfList[2].visData = v104;
      if ( v121 > v103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_smodelsurfiter.h", 39, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v121, v103) )
        __debugbreak();
      drawListDst->smodelSurfList[2].surfData = v121;
      v105 = truncate_cast<unsigned int,__int64>(v103 - v121);
      v106 = v138;
      drawListDst->smodelSurfList[2].visData = v104;
      drawListDst->smodelSurfList[2].surfDataBytes = v105;
      if ( v106 > v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_drawsurfiter.h", 27, ASSERT_TYPE_ASSERT, "( mark ) <= ( current )", "%s <= %s\n\t%p, %p", "mark", "current", v106, v73) )
        __debugbreak();
      drawListSrc->superTerrainSurfList.surfs = v106;
      drawListSrc->superTerrainSurfList.count = truncate_cast<unsigned int,__int64>(v73 - v106);
      if ( v73 > v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_drawsurfiter.h", 34, ASSERT_TYPE_ASSERT, "( current ) <= ( end )", "%s <= %s\n\t%p, %p", "current", "end", v73, v75) )
        __debugbreak();
      drawListDst->superTerrainSurfList.surfs = v73;
      drawListDst->superTerrainSurfList.count = truncate_cast<unsigned int,__int64>(v75 - v73);
    }
  }
}

