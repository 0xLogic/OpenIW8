/*
==============
R_ShouldPerformStaticModelSort
==============
*/

bool __fastcall R_ShouldPerformStaticModelSort()
{
  return ?R_ShouldPerformStaticModelSort@@YA_NXZ();
}

/*
==============
qsortArray<GfxSortDrawSurfsInterface,GfxDrawSurf>
==============
*/

void __fastcall qsortArray<GfxSortDrawSurfsInterface,GfxDrawSurf>(GfxDrawSurf *elems, int count)
{
  ??$qsortArray@UGfxSortDrawSurfsInterface@@TGfxDrawSurf@@@@YAXPEATGfxDrawSurf@@H@Z(elems, count);
}

/*
==============
R_SortWorldSurfaces
==============
*/

void __fastcall R_SortWorldSurfaces(const int transientSort)
{
  ?R_SortWorldSurfaces@@YAXH@Z(transientSort);
}

/*
==============
R_SortDrawSurfs
==============
*/

void __fastcall R_SortDrawSurfs(GfxDrawSurf *drawSurfList, int surfCount)
{
  ?R_SortDrawSurfs@@YAXQEATGfxDrawSurf@@H@Z(drawSurfList, surfCount);
}

/*
==============
qsortArray<GfxSortDrawSurfsInterface,GfxDrawSurf>
==============
*/
void qsortArray<GfxSortDrawSurfsInterface,GfxDrawSurf>(GfxDrawSurf *elems, int count)
{
  __int64 v4; 
  __int64 v5; 
  unsigned __int64 v9; 
  bool v12; 
  GfxDrawSurf *v13; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  __int64 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int64 v39[60]; 

  if ( count >= 2 )
  {
    _RDI = elems;
    _RBX = &elems[count - 1];
    v4 = 0i64;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = _RBX - _RDI;
        if ( (unsigned __int64)(v5 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v5, "signed", _RBX - _RDI) )
          __debugbreak();
        if ( (int)v5 + 1 <= 8 )
        {
          for ( ; _RBX > _RDI; --_RBX )
          {
            _R9 = _RDI;
            _RAX = _RDI + 1;
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovups [rsp+298h+var_248], xmm0
            }
            if ( &_RDI[1] <= _RBX )
            {
              v9 = *((_QWORD *)&v33 + 1);
              do
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax]
                  vpextrq rcx, xmm0, 1
                  vmovups [rsp+298h+var_238], xmm0
                }
                v12 = v9 < _RCX;
                if ( v9 == _RCX )
                  v12 = (unsigned __int64)v33 < (unsigned __int64)v37;
                if ( v12 )
                {
                  __asm { vmovups [rsp+298h+var_248], xmm0 }
                  v9 = *((_QWORD *)&v33 + 1);
                }
                v13 = _RAX;
                if ( !v12 )
                  v13 = _R9;
                ++_RAX;
                _R9 = v13;
              }
              while ( _RAX <= _RBX );
            }
            __asm
            {
              vmovups xmm0, xmmword ptr [rbx]
              vmovups xmm1, xmmword ptr [r9]
              vmovups xmmword ptr [r9], xmm0
              vmovups xmmword ptr [rbx], xmm1
            }
          }
          goto LABEL_40;
        }
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        _R8 = _RBX + 1;
        _RDX = (unsigned __int64)_RDI;
        _RCX = 2i64 * (((int)v5 + 1) / 2);
        __asm
        {
          vmovups xmm1, xmmword ptr [rdi+rcx*8]
          vmovups [rsp+298h+var_248], xmm1
        }
        v21 = v34;
        __asm { vmovups xmmword ptr [rdi+rcx*8], xmm0 }
        v22 = *((_QWORD *)&v34 + 1);
        __asm
        {
          vmovups xmmword ptr [rdi], xmm1
          vmovdqa [rsp+298h+var_238], xmm1
        }
        while ( 1 )
        {
          do
          {
            _RDX += 16i64;
            if ( _RDX > (unsigned __int64)_RBX )
              break;
            __asm
            {
              vmovups xmm0, xmmword ptr [rdx]
              vpextrq rax, xmm0, 1
              vmovups [rsp+298h+var_248], xmm0
            }
          }
          while ( _RAX == v22 ? (unsigned __int64)v35 <= v21 : _RAX < v22 );
          do
          {
            if ( _RDI >= --_R8 )
              break;
            __asm
            {
              vmovups xmm0, xmmword ptr [r8]
              vpextrq rax, xmm0, 1
              vmovups [rsp+298h+var_248], xmm0
            }
          }
          while ( v22 == _RAX ? v21 <= (unsigned __int64)v36 : v22 < _RAX );
          __asm { vmovups xmm0, xmmword ptr [r8] }
          if ( (unsigned __int64)_R8 < _RDX )
            break;
          __asm
          {
            vmovups xmm1, xmmword ptr [rdx]
            vmovups xmmword ptr [rdx], xmm0
            vmovups xmmword ptr [r8], xmm1
          }
        }
        __asm
        {
          vmovups xmm1, xmmword ptr [rdi]
          vmovups xmmword ptr [rdi], xmm0
          vmovups xmmword ptr [r8], xmm1
        }
        if ( (__int64)(((char *)_R8 - (char *)_RDI - 16) & 0xFFFFFFFFFFFFFFF0ui64) < (__int64)(((unsigned __int64)_RBX - _RDX) & 0xFFFFFFFFFFFFFFF0ui64) )
          break;
        if ( _RDI <= _R8 )
        {
          v39[v4] = (__int64)_RDI;
          v39[v4++ + 30] = (__int64)&_R8[-1];
        }
        if ( _RDX >= (unsigned __int64)_RBX )
          goto LABEL_40;
        _RDI = (GfxDrawSurf *)_RDX;
      }
      if ( _RDX < (unsigned __int64)_RBX )
      {
        v39[v4] = _RDX;
        v39[v4++ + 30] = (__int64)_RBX;
      }
      _RBX = _R8 - 1;
      if ( _RDI >= &_R8[-1] )
      {
LABEL_40:
        v32 = v4--;
        if ( v32 <= 0 )
          return;
        _RDI = (GfxDrawSurf *)v39[v4];
        _RBX = (GfxDrawSurf *)v39[v4 + 30];
      }
    }
  }
}

/*
==============
GCD
==============
*/
__int64 GCD(int greater, int lesser)
{
  int v2; 
  int v3; 
  int i; 
  int v6; 

  v2 = lesser;
  if ( greater < lesser )
  {
    do
    {
      v3 = greater;
      greater = v2;
      v2 = v3;
    }
    while ( greater < v3 );
  }
  if ( !v2 )
    return 0i64;
  for ( i = greater % v2; i; i = v6 % i )
  {
    v6 = v2;
    v2 = i;
  }
  return (unsigned int)v2;
}

/*
==============
R_BrushModelSurfacesAreSorted
==============
*/
__int64 R_BrushModelSurfacesAreSorted(unsigned int modelIndex)
{
  GfxBrushModel *v1; 
  unsigned int surfaceCount; 
  unsigned int startSurfIndex; 
  GfxSurface *surfaces; 
  unsigned int v5; 
  __int64 v6; 
  __int64 i; 

  v1 = &rgp.world->models[modelIndex];
  surfaceCount = v1->surfaceCount;
  if ( !surfaceCount )
    return 1i64;
  startSurfIndex = v1->startSurfIndex;
  surfaces = rgp.world->surfaces.surfaces;
  v5 = surfaceCount + startSurfIndex;
  v6 = startSurfIndex + 1;
  if ( (unsigned int)v6 >= v5 )
    return 1i64;
  for ( i = (__int64)&surfaces[v6].material; surfaces[(unsigned int)(v6 - 1)].material->sortKey - *(unsigned __int8 *)(*(_QWORD *)i + 25i64) <= 0; i += 40i64 )
  {
    LODWORD(v6) = v6 + 1;
    if ( (unsigned int)v6 >= v5 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
R_FirstStaticModelMaterial
==============
*/
const Material *R_FirstStaticModelMaterial(const GfxStaticModelCollection *const smodelCollection)
{
  GfxStaticModel *v1; 
  XModel *model; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  _QWORD *v5; 
  __int64 v7; 
  __int64 v8; 

  v1 = &rgp.world->smodels.models[smodelCollection->smodelIndex];
  model = v1->model;
  if ( !v1->model )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 257, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 208, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
  }
  if ( !model->numLods )
  {
    LODWORD(v7) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 209, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v7, 0) )
      __debugbreak();
  }
  surfIndex = model->lodInfo[0].surfIndex;
  numsurfs = model->numsurfs;
  if ( surfIndex >= numsurfs )
  {
    LODWORD(v8) = numsurfs;
    LODWORD(v7) = surfIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = (_QWORD *)*((_QWORD *)&model->materialHandles[model->lodInfo[0].surfIndex] + v1->firstMtlSkinIndex);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
    __debugbreak();
  if ( !*(_BYTE *)*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
    __debugbreak();
  return (const Material *)v5;
}

/*
==============
R_ShouldPerformStaticModelSort
==============
*/
bool R_ShouldPerformStaticModelSort()
{
  return DB_PerformFullMaterialModelSort() != 0;
}

/*
==============
R_SortBrushModelSurfaces
==============
*/
void R_SortBrushModelSurfaces(unsigned int modelIndex)
{
  GfxBrushModel *v1; 
  unsigned int surfaceCount; 
  GfxSurface *surfaces; 
  unsigned int startSurfIndex; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 p_material; 
  int sortKey; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 i; 
  unsigned int j; 
  int v15; 

  v1 = &rgp.world->models[modelIndex];
  surfaceCount = v1->surfaceCount;
  if ( surfaceCount )
  {
    surfaces = rgp.world->surfaces.surfaces;
    startSurfIndex = v1->startSurfIndex;
    v5 = surfaceCount + startSurfIndex;
    v6 = startSurfIndex + 1;
    if ( (unsigned int)v6 < surfaceCount + startSurfIndex )
    {
      do
      {
        v7 = (unsigned int)(v6 - 1);
        p_material = (__int64)&surfaces[v7].material;
        sortKey = surfaces[v6].material->sortKey;
        if ( *(unsigned __int8 *)(*(_QWORD *)p_material + 25i64) - sortKey > 0 )
        {
          if ( (unsigned int)v7 > startSurfIndex )
          {
            do
            {
              v10 = (unsigned int)(v7 - 1);
              if ( surfaces[v10].material->sortKey != *(unsigned __int8 *)(*(_QWORD *)p_material + 25i64) )
                break;
              p_material -= 40i64;
              LODWORD(v7) = v7 - 1;
            }
            while ( (unsigned int)v10 > startSurfIndex );
          }
          v11 = v7;
          if ( (unsigned int)v7 > startSurfIndex )
          {
            do
            {
              v12 = v11 - 1;
              if ( surfaces[v12].material->sortKey - sortKey <= 0 )
                break;
              --v11;
            }
            while ( (unsigned int)v12 > startSurfIndex );
          }
          for ( i = (unsigned int)(v6 + 1); (unsigned int)i < v5; i = (unsigned int)(i + 1) )
          {
            if ( sortKey != surfaces[i].material->sortKey )
              break;
          }
          for ( j = i; j < v5; ++j )
          {
            if ( sortKey - surfaces[j].material->sortKey <= 0 )
              break;
          }
          R_SwapAdjacentWorldSurfaceRanges(v7, v6, i);
          v15 = i - v6;
          v6 = (unsigned int)(i - v6 + v7);
          R_SwapAdjacentWorldSurfaceRanges(v11, v7, v15 + v7);
          R_SwapAdjacentWorldSurfaceRanges(v6, i, j);
        }
        else
        {
          v6 = (unsigned int)(v6 + 1);
        }
      }
      while ( (unsigned int)v6 < v5 );
    }
  }
}

/*
==============
R_SortDrawSurfs
==============
*/
void R_SortDrawSurfs(GfxDrawSurf *drawSurfList, int surfCount)
{
  char *Value; 
  int *v5; 
  _QWORD *v6; 
  char *v7; 
  int *v8; 
  unsigned __int64 v9; 
  ThreadContext CurrentThreadContext; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 

  Value = (char *)Sys_GetValue(0);
  v5 = (int *)(Value + 4736);
  if ( (unsigned int)(*((_DWORD *)Value + 1184) + 1) >= 3 )
  {
    v14 = 3;
    v12 = *((_DWORD *)Value + 1184) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( (unsigned int)++*v5 >= 3 )
  {
    LODWORD(v13) = 3;
    LODWORD(v11) = *v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v6 = Value + 2088;
  v7 = Value + 40;
  if ( *v6 < (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v6 += 8i64;
  if ( *v6 >= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v6 = v5;
  if ( *v6 <= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v8 = &v5[*v5 + 2];
  v9 = __rdtsc();
  *v8 = v9;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 66, NULL, 0);
  qsortArray<GfxSortDrawSurfsInterface,GfxDrawSurf>(drawSurfList, surfCount);
  Profile_EndInternal(NULL);
}

/*
==============
R_SortStaticModels
==============
*/
bool R_SortStaticModels()
{
  __int64 collectionCount; 
  __int64 materialCount; 
  unsigned __int64 v3; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int i; 
  int v12; 
  int v21; 
  __int64 v22; 
  bool v27; 
  int v28; 
  __int64 v29; 
  int v34; 
  __int64 v35; 
  GfxWorld *world; 
  unsigned int v40; 
  unsigned int cellCount; 
  GfxCellTransientInfo *v42; 
  GfxWorldTransientZone *v43; 
  unsigned int aabbTreeIndex; 
  GfxAabbTree *aabbTree; 
  unsigned __int16 *smodelIndexes; 
  __int64 smodelIndexCount; 
  __int64 v48; 
  __int64 v49; 
  GfxShadowGeometry *shadowGeomOptimized; 
  unsigned int primaryLightCount; 
  int v52; 
  unsigned __int16 *smodelIndex; 
  __int64 smodelCount; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  GfxStaticModelCollection *collections; 
  int p1_low; 
  __int64 v60; 
  __int64 v61; 
  unsigned int v62; 
  unsigned int outMovedBegin; 
  int v64; 

  collectionCount = rgp.world->smodels.collectionCount;
  v64 = collectionCount;
  if ( !(_DWORD)collectionCount )
    return 0;
  materialCount = rgp.materialCount;
  v3 = 2 * (collectionCount + 2i64 * rgp.materialCount);
  if ( 4 * collectionCount > v3 )
    v3 = 4 * collectionCount;
  if ( v3 > 0x60000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1016, ASSERT_TYPE_ASSERT, "(newToOldAndHashBufferSize <= sizeof( s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer ))", (const char *)&queryFormat, "newToOldAndHashBufferSize <= sizeof( s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer )") )
    __debugbreak();
  if ( (unsigned __int64)(2 * collectionCount) > 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1017, ASSERT_TYPE_ASSERT, "(oldToNewIndexMapSize <= sizeof( s_R_SortStaticModels_TempBuffers.oldToNewIndexMap ))", (const char *)&queryFormat, "oldToNewIndexMapSize <= sizeof( s_R_SortStaticModels_TempBuffers.oldToNewIndexMap )") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_RESET_SMODEL_DATA);
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "R_UpdateAndSortStaticModels");
  v4 = 0;
  v62 = R_UpdateAndSortStaticModels(&outMovedBegin, s_R_SortStaticModels_TempBuffers.oldToNewIndexMap, (R_SortStaticModels_HashBucket *)&s_R_SortStaticModels_TempBuffers, (R_SortStaticModels_HashNode *)&s_R_SortStaticModels_TempBuffers + 2 * materialCount, materialCount);
  v5 = 0;
  v6 = v62;
  do
  {
    *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * s_R_SortStaticModels_TempBuffers.oldToNewIndexMap[v5]] = v5;
    ++v5;
  }
  while ( v5 != (_DWORD)collectionCount );
  Sys_ProfEndNamedEvent();
  v7 = 1;
  if ( v62 )
  {
    v8 = outMovedBegin;
    v9 = outMovedBegin + v62;
    _RDI = rgp.world->smodels.collectionBounds;
    if ( outMovedBegin > outMovedBegin + v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 838, ASSERT_TYPE_ASSERT, "(begin <= end)", (const char *)&queryFormat, "begin <= end") )
      __debugbreak();
    for ( i = v8; i != v9; ++i )
    {
      v12 = *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * i];
      if ( (v12 & 0xFF000000) != 0x1000000 )
      {
        _R8 = v12 & 0xFFFFFF;
        *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * i] = _R8 | 0x1000000;
        if ( (_DWORD)_R8 != i )
        {
          _RAX = 3i64 * i;
          __asm
          {
            vmovups xmm2, xmmword ptr [rdi+rax*8]
            vmovsd  xmm3, qword ptr [rdi+rax*8+10h]
          }
          _RDX = &_RDI[i];
          _RAX = 3 * _R8;
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi+rax*8]
            vmovups xmmword ptr [rdx], xmm0
            vmovsd  xmm1, qword ptr [rdi+rax*8+10h]
            vmovsd  qword ptr [rdx+10h], xmm1
          }
          v21 = *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * _R8];
          if ( (v21 & 0xFF000000) != 0x1000000 )
          {
            while ( 1 )
            {
              v22 = v21 & 0xFFFFFF;
              *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * (unsigned int)_R8] = v22 | 0x1000000;
              _R8 = (unsigned __int64)&_RDI[(unsigned int)_R8];
              if ( (_DWORD)v22 == i )
                break;
              _RAX = 3 * v22;
              __asm
              {
                vmovups xmm0, xmmword ptr [rdi+rax*8]
                vmovups xmmword ptr [r8], xmm0
                vmovsd  xmm1, qword ptr [rdi+rax*8+10h]
                vmovsd  qword ptr [r8+10h], xmm1
              }
              LODWORD(_R8) = v22;
              v21 = *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * v22];
              if ( (v21 & 0xFF000000) == 0x1000000 )
                goto LABEL_25;
            }
            __asm
            {
              vmovups xmmword ptr [r8], xmm2
              vmovsd  qword ptr [r8+10h], xmm3
            }
          }
        }
      }
LABEL_25:
      ;
    }
    _RDI = rgp.world->smodels.collections;
    v27 = v8 == v9;
    if ( v8 > v9 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 838, ASSERT_TYPE_ASSERT, "(begin <= end)", (const char *)&queryFormat, "begin <= end") )
        __debugbreak();
      v27 = v8 == v9;
    }
    if ( !v27 )
    {
      do
      {
        v28 = *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * v8];
        if ( (v28 & 0xFF000000) != 0x2000000 )
        {
          v29 = v28 & 0xFFFFFF;
          *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * v8] = v29 | 0x2000000;
          if ( (_DWORD)v29 != v8 )
          {
            _RDX = 2i64 * v8;
            _RAX = 2i64 * (unsigned int)v29;
            __asm
            {
              vmovups xmm1, xmmword ptr [rdi+rdx*8]
              vmovups xmm0, xmmword ptr [rdi+rax*8]
              vmovups xmmword ptr [rdi+rdx*8], xmm0
            }
            v34 = *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * v29];
            if ( (v34 & 0xFF000000) != 0x2000000 )
            {
              while ( 1 )
              {
                v35 = v34 & 0xFFFFFF;
                *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * (unsigned int)v29] = v35 | 0x2000000;
                _RDX = 2i64 * (unsigned int)v29;
                if ( (_DWORD)v35 == v8 )
                  break;
                LODWORD(v29) = v35;
                _RCX = 2i64 * (unsigned int)v35;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rdi+rcx*8]
                  vmovups xmmword ptr [rdi+rdx*8], xmm0
                }
                v34 = *(_DWORD *)&s_R_SortStaticModels_TempBuffers.newToOldAndHashBuffer[4 * v35];
                if ( (v34 & 0xFF000000) == 0x2000000 )
                  goto LABEL_38;
              }
              __asm { vmovups xmmword ptr [rdi+rdx*8], xmm1 }
            }
          }
        }
LABEL_38:
        ++v8;
      }
      while ( v8 != v9 );
    }
    R_StaticModelData_DirtySModelCollectionOrder();
    world = rgp.world;
    v40 = 0;
    cellCount = rgp.world->dpvsPlanes.cellCount;
    if ( cellCount )
    {
      do
      {
        if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 86, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
          __debugbreak();
        if ( v40 >= world->dpvsPlanes.cellCount )
        {
          LODWORD(v61) = world->dpvsPlanes.cellCount;
          LODWORD(v60) = v40;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 87, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v60, v61) )
            __debugbreak();
        }
        if ( !Sys_IsMainThread() && !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 92, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsUpdateScreenThread()") )
          __debugbreak();
        v42 = &world->cellTransientInfos[v40];
        v43 = world->draw.transientZones[v42->transientZone];
        if ( v43 )
        {
          aabbTreeIndex = v42->aabbTreeIndex;
          if ( aabbTreeIndex >= v43->drawCells.cellCount )
          {
            LODWORD(v61) = v43->drawCells.cellCount;
            LODWORD(v60) = v42->aabbTreeIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 78, ASSERT_TYPE_ASSERT, "(unsigned)( aabbTreeIndex ) < (unsigned)( drawCells.cellCount )", "aabbTreeIndex doesn't index drawCells.cellCount\n\t%i not in [0, %i)", v60, v61) )
              __debugbreak();
          }
          aabbTree = v43->drawCells.aabbTrees[(unsigned __int16)aabbTreeIndex].aabbTree;
          if ( aabbTree )
          {
            smodelIndexes = aabbTree->smodelIndexes;
            smodelIndexCount = aabbTree->smodelIndexCount;
            v48 = 0i64;
            if ( smodelIndexes > &smodelIndexes[smodelIndexCount] )
              smodelIndexCount = 0i64;
            if ( smodelIndexCount )
            {
              do
              {
                v49 = *smodelIndexes++;
                ++v48;
                *(smodelIndexes - 1) = s_R_SortStaticModels_TempBuffers.oldToNewIndexMap[v49];
              }
              while ( v48 != smodelIndexCount );
            }
          }
        }
        world = rgp.world;
        ++v40;
      }
      while ( v40 != cellCount );
      LODWORD(collectionCount) = v64;
      v7 = 1;
      v6 = v62;
    }
    shadowGeomOptimized = world->shadowGeomOptimized;
    if ( shadowGeomOptimized )
    {
      primaryLightCount = world->primaryLightCount;
      v52 = 0;
      if ( primaryLightCount )
      {
        do
        {
          smodelIndex = shadowGeomOptimized[v52].smodelIndex;
          smodelCount = shadowGeomOptimized[v52].smodelCount;
          v55 = 0i64;
          if ( smodelIndex > &smodelIndex[smodelCount] )
            smodelCount = 0i64;
          if ( smodelCount )
          {
            do
            {
              v56 = *smodelIndex++;
              ++v55;
              *(smodelIndex - 1) = s_R_SortStaticModels_TempBuffers.oldToNewIndexMap[v56];
            }
            while ( v55 != smodelCount );
          }
          ++v52;
        }
        while ( v52 != primaryLightCount );
        world = rgp.world;
      }
    }
    if ( world->smodels.collectionCount )
    {
      do
      {
        v57 = v4++;
        world->dpvs.sortedSmodelIndices[v57] = s_R_SortStaticModels_TempBuffers.oldToNewIndexMap[v57];
        world = rgp.world;
      }
      while ( v4 < rgp.world->smodels.collectionCount );
      v6 = v62;
    }
    rg.useSortedStaticModelReindex = 1;
    rgp.gameSortedStaticModels = 1;
    R_InitializeCachedSunShadowData();
  }
  R_StaticModelData_ResetWorld();
  if ( (_DWORD)collectionCount != 1 )
  {
    do
    {
      collections = rgp.world->smodels.collections;
      p1_low = LOWORD(R_FirstStaticModelMaterial(&collections[v7 - 1])->drawSurf.packed.p1);
      if ( p1_low - LOWORD(R_FirstStaticModelMaterial(&collections[v7])->drawSurf.packed.p1) > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1216, ASSERT_TYPE_ASSERT, "(R_CompareStaticModels( &rgp.world->smodels.collections[smodelIndex - 1], &rgp.world->smodels.collections[smodelIndex] ) <= 0)", (const char *)&queryFormat, "R_CompareStaticModels( &rgp.world->smodels.collections[smodelIndex - 1], &rgp.world->smodels.collections[smodelIndex] ) <= 0") )
        __debugbreak();
      ++v7;
    }
    while ( v7 != (_DWORD)collectionCount );
    v6 = v62;
  }
  Sys_LeaveCriticalSection(CRITSECT_RESET_SMODEL_DATA);
  return v6 != 0;
}

/*
==============
R_SortStaticModelsTransientCheck
==============
*/
char R_SortStaticModelsTransientCheck()
{
  GfxStaticModel *models; 
  unsigned int v1; 
  unsigned int collectionCount; 
  __int64 v3; 
  XModel *model; 
  unsigned int i; 
  unsigned int v6; 
  XModel *v7; 
  XModel *v8; 
  __int64 v10; 
  __int64 v11; 

  LOBYTE(models) = rgp.world;
  v1 = 0;
  collectionCount = rgp.world->smodels.collectionCount;
  if ( collectionCount )
  {
    v3 = 0i64;
    do
    {
      models = rgp.world->smodels.models;
      model = models[rgp.world->smodels.collections[v3].smodelIndex].model;
      if ( !model )
      {
        LOBYTE(models) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model");
        if ( (_BYTE)models )
          __debugbreak();
      }
      if ( (model->flags & 0x8000) == 0 )
        break;
      ++v1;
      ++v3;
    }
    while ( v1 < collectionCount );
  }
  for ( i = v1 + 1; i < collectionCount; ++i )
  {
    v6 = i;
    if ( v1 >= collectionCount )
    {
      LODWORD(v11) = collectionCount;
      LODWORD(v10) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 778, ASSERT_TYPE_ASSERT, "(unsigned)( compareLHSIndex ) < (unsigned)( smodelCount )", "compareLHSIndex doesn't index smodelCount\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( i <= v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 779, ASSERT_TYPE_ASSERT, "(compareRHSIndex > compareLHSIndex)", (const char *)&queryFormat, "compareRHSIndex > compareLHSIndex") )
      __debugbreak();
    v7 = rgp.world->smodels.models[rgp.world->smodels.collections[v1].smodelIndex].model;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( (v7->flags & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 781, ASSERT_TYPE_ASSERT, "(!XModelIsDefaultAsset( rgp.world->smodels.models[rgp.world->smodels.collections[compareLHSIndex].smodelIndex].model ))", (const char *)&queryFormat, "!XModelIsDefaultAsset( rgp.world->smodels.models[rgp.world->smodels.collections[compareLHSIndex].smodelIndex].model )") )
      __debugbreak();
    v8 = rgp.world->smodels.models[rgp.world->smodels.collections[v1].smodelIndex].model;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    models = (GfxStaticModel *)"compareLHSIndex doesn't index smodelCount\n\t%i not in [0, %i)";
    if ( (v8->flags & 0x8000) == 0 )
      v1 = v6;
  }
  return (char)models;
}

/*
==============
R_SortWorldModelSurfaces
==============
*/
__int64 R_SortWorldModelSurfaces()
{
  unsigned int v0; 
  unsigned int *sortedSurfIndex; 
  GfxSurface *surfaces; 
  unsigned int surfaceCount; 
  __int64 v4; 
  __int64 p_material; 
  int sortKey; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 i; 
  unsigned int j; 
  unsigned int k; 
  unsigned int *v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  bool v17; 
  unsigned int m; 
  unsigned int v19; 
  GfxShadowGeometry *v20; 
  unsigned int *v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  Material **v26; 
  Material **v27; 
  __int64 v28; 
  unsigned int v30; 

  v0 = 1;
  v30 = 0;
  sortedSurfIndex = rgp.world->dpvs.sortedSurfIndex;
  surfaces = rgp.world->surfaces.surfaces;
  surfaceCount = rgp.world->models->surfaceCount;
  if ( surfaceCount <= 1 )
    return 0i64;
  do
  {
    v4 = v0 - 1;
    p_material = (__int64)&surfaces[v4].material;
    sortKey = surfaces[v0].material->sortKey;
    if ( *(unsigned __int8 *)(*(_QWORD *)p_material + 25i64) - sortKey > 0 )
    {
      v30 = 1;
      if ( v0 != 1 )
      {
        do
        {
          v7 = (unsigned int)(v4 - 1);
          if ( surfaces[v7].material->sortKey != *(unsigned __int8 *)(*(_QWORD *)p_material + 25i64) )
            break;
          p_material -= 40i64;
          LODWORD(v4) = v4 - 1;
        }
        while ( (_DWORD)v7 );
      }
      v8 = v4;
      if ( (_DWORD)v4 )
      {
        do
        {
          v9 = v8 - 1;
          if ( surfaces[v9].material->sortKey - sortKey <= 0 )
            break;
          --v8;
        }
        while ( (_DWORD)v9 );
      }
      for ( i = v0 + 1; (unsigned int)i < surfaceCount; i = (unsigned int)(i + 1) )
      {
        if ( sortKey != surfaces[i].material->sortKey )
          break;
      }
      for ( j = i; j < surfaceCount; ++j )
      {
        if ( sortKey - surfaces[j].material->sortKey <= 0 )
          break;
      }
      for ( k = 0; k < rgp.world->models->surfaceCount; ++k )
      {
        v13 = &sortedSurfIndex[k];
        v14 = *v13;
        if ( *v13 >= v8 && v14 < j )
        {
          v15 = v14 - v0;
          if ( v14 >= (unsigned int)v4 )
          {
            if ( v14 >= v0 )
            {
              v17 = v14 < (unsigned int)i;
              v16 = v15 + v8;
              if ( !v17 )
                v16 = v15 + v4;
            }
            else
            {
              v16 = v15 + j;
            }
          }
          else
          {
            v16 = v15 + i;
          }
          *v13 = v16;
        }
      }
      if ( rgp.world->shadowGeomOptimized )
      {
        for ( m = 0; m < rgp.world->primaryLightCount; ++m )
        {
          v19 = 0;
          v20 = &rgp.world->shadowGeomOptimized[m];
          if ( v20->surfaceCount )
          {
            do
            {
              v21 = &v20->sortedSurfIndex[v19];
              v22 = *v21;
              if ( *v21 >= v8 && v22 < j )
              {
                v23 = v22 - v0;
                if ( v22 >= (unsigned int)v4 )
                {
                  if ( v22 >= v0 )
                  {
                    v17 = v22 < (unsigned int)i;
                    v24 = v23 + v8;
                    if ( !v17 )
                      v24 = v23 + v4;
                  }
                  else
                  {
                    v24 = v23 + j;
                  }
                }
                else
                {
                  v24 = v23 + i;
                }
                *v21 = v24;
              }
              ++v19;
            }
            while ( v19 < v20->surfaceCount );
          }
        }
      }
      R_SwapAdjacentWorldSurfaceRanges(v4, v0, i);
      v25 = i - v0;
      v0 = i - v0 + v4;
      R_SwapAdjacentWorldSurfaceRanges(v8, v4, v25 + v4);
      R_SwapAdjacentWorldSurfaceRanges(v0, i, j);
    }
    else
    {
      ++v0;
    }
  }
  while ( v0 < surfaceCount );
  v26 = &surfaces[1].material;
  v27 = &surfaces->material;
  v28 = surfaceCount - 1;
  do
  {
    if ( (*v27)->sortKey - (*v26)->sortKey > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 691, ASSERT_TYPE_ASSERT, "(R_CompareWorldSurfs( &surfs[surfIndex - 1], &surfs[surfIndex] ) <= 0)", (const char *)&queryFormat, "R_CompareWorldSurfs( &surfs[surfIndex - 1], &surfs[surfIndex] ) <= 0") )
      __debugbreak();
    v27 += 5;
    v26 += 5;
    --v28;
  }
  while ( v28 );
  return v30;
}

/*
==============
R_SortWorldSurfaces
==============
*/
void R_SortWorldSurfaces(const int transientSort)
{
  int i; 
  int j; 
  __int64 v4; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1363, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( rgp.world->models->startSurfIndex )
  {
    LODWORD(v4) = rgp.world->models->startSurfIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1364, ASSERT_TYPE_ASSERT, "( ( rgp.world->models[0].startSurfIndex == 0 ) )", "( rgp.world->models[0].startSurfIndex ) = %i", v4) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF708090, "R_SortWorldModelSurfaces");
  if ( transientSort )
  {
    if ( (unsigned int)R_SortWorldModelSurfaces() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1372, ASSERT_TYPE_ASSERT, "(R_SortWorldModelSurfaces() == qfalse)", (const char *)&queryFormat, "R_SortWorldModelSurfaces() == qfalse") )
      __debugbreak();
    for ( i = 1; i < rgp.world->modelCount; ++i )
    {
      if ( !(unsigned int)R_BrushModelSurfacesAreSorted(i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1376, ASSERT_TYPE_ASSERT, "(R_BrushModelSurfacesAreSorted( modelIndex ))", (const char *)&queryFormat, "R_BrushModelSurfacesAreSorted( modelIndex )") )
        __debugbreak();
    }
  }
  else
  {
    R_SortWorldModelSurfaces();
    for ( j = 1; j < rgp.world->modelCount; ++j )
      R_SortBrushModelSurfaces(j);
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF708090, "R_SortStaticModels");
  if ( DB_PerformFullMaterialModelSort() )
    R_SortStaticModels();
  else
    R_SortStaticModelsTransientCheck();
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF708090, "R_SortWorldSurfacesSetSurfaces");
  if ( transientSort )
    R_SortWorldSurfacesSetSurfacesCheck();
  else
    R_SortWorldSurfacesSetSurfaces();
  Sys_ProfEndNamedEvent();
}

/*
==============
R_SortWorldSurfacesSetSurfaces
==============
*/
GfxWorld *R_SortWorldSurfacesSetSurfaces()
{
  GfxWorld *result; 
  unsigned int sunShadowOptCount; 
  unsigned int surfaceCount; 
  unsigned int v3; 
  unsigned int v4; 
  int v5; 
  GfxSurfaceFlags *p_flags; 
  unsigned __int64 v7; 
  unsigned __int64 v14; 
  unsigned int v15; 
  unsigned int i; 
  __int64 v17; 

  result = rgp.world;
  sunShadowOptCount = rgp.world->dpvs.sunShadowOptCount;
  surfaceCount = rgp.world->models->surfaceCount;
  if ( surfaceCount )
  {
    memset_0(rgp.world->dpvs.surfaceCastsSunShadow, 0, 4i64 * (((surfaceCount - 1) >> 5) + 1));
    result = rgp.world;
    if ( rgp.world->dpvs.sunShadowOptCount )
    {
      memset_0(rgp.world->dpvs.surfaceCastsSunShadowOpt, 0, 4i64 * sunShadowOptCount * rgp.world->dpvs.sunSurfVisDataCount);
      result = rgp.world;
    }
  }
  v3 = 0;
  v4 = result->models->surfaceCount;
  if ( v4 )
  {
    v5 = 1;
    p_flags = &result->surfaces.surfaces->flags;
    v7 = 0i64;
    _R14 = 0i64;
    do
    {
      _RCX = *((_QWORD *)p_flags - 2);
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+28h]
        vpextrq rcx, xmm0, 1
        vmovups [rsp+68h+var_38], xmm0
      }
      if ( (_RCX & 0x7800000) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 324, ASSERT_TYPE_SANITY, "( drawSurf.fields.surfType == SF_TRIANGLES )", (const char *)&queryFormat, "drawSurf.fields.surfType == SF_TRIANGLES") )
          __debugbreak();
        __asm { vmovups xmm0, [rsp+68h+var_38] }
        result = rgp.world;
      }
      __asm { vmovq   rbx, xmm0 }
      if ( (_RBX & 0x3FFFFFC000000i64) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 325, ASSERT_TYPE_SANITY, "( drawSurf.fields.objectId == 0 )", (const char *)&queryFormat, "drawSurf.fields.objectId == 0") )
          __debugbreak();
        __asm { vmovups xmm0, [rsp+68h+var_38] }
        result = rgp.world;
      }
      _RCX = result->surfaces.surfaceMaterials;
      __asm { vmovups xmmword ptr [rcx+r14], xmm0 }
      if ( v3 < surfaceCount && (_RBX & 0x1000000000000000i64) != 0 && (*p_flags & 1) != 0 && (v14 = v7 >> 5, rgp.world->dpvs.surfaceCastsSunShadow[v14] |= v5, (v15 = (*(unsigned __int8 *)p_flags >> 1) & 0x1F) != 0) )
      {
        result = rgp.world;
        for ( i = 0; i < result->dpvs.sunShadowOptCount; ++i )
        {
          if ( !v15 )
            break;
          if ( (v15 & 1) != 0 )
          {
            v17 = (__int64)&result->dpvs.surfaceCastsSunShadowOpt[i * result->dpvs.sunSurfVisDataCount];
            *(_DWORD *)(v17 + v14 * 4) |= 1 << (v3 & 0x1F);
            result = rgp.world;
          }
          v15 >>= 1;
        }
      }
      else
      {
        result = rgp.world;
      }
      ++v3;
      v5 = __ROL4__(v5, 1);
      ++v7;
      _R14 += 16i64;
      p_flags += 40;
    }
    while ( v3 < v4 );
  }
  return result;
}

/*
==============
R_SortWorldSurfacesSetSurfacesCheck
==============
*/
char R_SortWorldSurfacesSetSurfacesCheck()
{
  unsigned int v1; 
  unsigned int surfaceCount; 
  GfxSurface *surfaces; 
  unsigned __int64 v4; 
  int v5; 
  __int64 v6; 
  GfxSurfaceFlags *p_flags; 
  const char *v12; 
  int v13; 
  const char *v14; 
  __int128 v17; 

  v1 = 0;
  surfaceCount = rgp.world->models->surfaceCount;
  surfaces = rgp.world->surfaces.surfaces;
  if ( surfaceCount )
  {
    v4 = 0i64;
    v5 = 1;
    v6 = 0i64;
    __asm { vmovaps [rsp+78h+var_38], xmm6 }
    p_flags = &surfaces->flags;
    while ( 1 )
    {
      _RAX = *((_QWORD *)p_flags - 2);
      __asm
      {
        vmovups xmm6, xmmword ptr [rax+28h]
        vpextrq rax, xmm6, 1
      }
      if ( (_RAX & 0x7800000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 324, ASSERT_TYPE_SANITY, "( drawSurf.fields.surfType == SF_TRIANGLES )", (const char *)&queryFormat, "drawSurf.fields.surfType == SF_TRIANGLES") )
        __debugbreak();
      __asm { vmovq   rbx, xmm6 }
      if ( (_RBX & 0x3FFFFFC000000i64) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 325, ASSERT_TYPE_SANITY, "( drawSurf.fields.objectId == 0 )", (const char *)&queryFormat, "drawSurf.fields.objectId == 0") )
        __debugbreak();
      __asm { vmovdqa [rsp+78h+var_48], xmm6 }
      if ( rgp.world->surfaces.surfaceMaterials[v6].packed.p0 != _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1250, ASSERT_TYPE_ASSERT, "(rgp.world->surfaces.surfaceMaterials[surfIndex].packed.p0 == drawSurf.packed.p0)", (const char *)&queryFormat, "rgp.world->surfaces.surfaceMaterials[surfIndex].packed.p0 == drawSurf.packed.p0") )
        __debugbreak();
      LOBYTE(surfaces) = BYTE8(v17);
      if ( rgp.world->surfaces.surfaceMaterials[v6].packed.p1 != *((_QWORD *)&v17 + 1) )
      {
        LOBYTE(surfaces) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 1251, ASSERT_TYPE_ASSERT, "(rgp.world->surfaces.surfaceMaterials[surfIndex].packed.p1 == drawSurf.packed.p1)", (const char *)&queryFormat, "rgp.world->surfaces.surfaceMaterials[surfIndex].packed.p1 == drawSurf.packed.p1");
        if ( (_BYTE)surfaces )
          __debugbreak();
      }
      if ( v1 >= surfaceCount )
        goto LABEL_24;
      if ( (v17 & 0x1000000000000000i64) != 0 && (*p_flags & 1) != 0 )
      {
        LOBYTE(surfaces) = rgp.world;
        if ( (v5 & rgp.world->dpvs.surfaceCastsSunShadow[v4 >> 5]) == 0 )
        {
          v12 = "( rgp.world->dpvs.surfaceCastsSunShadow[surfIndex >> 5] ) & (1 << (surfIndex & 31))";
          v13 = 1258;
          v14 = "(( rgp.world->dpvs.surfaceCastsSunShadow[surfIndex >> 5] ) & (1 << (surfIndex & 31)))";
          goto LABEL_22;
        }
      }
      else
      {
        LOBYTE(surfaces) = rgp.world;
        if ( (v5 & rgp.world->dpvs.surfaceCastsSunShadow[v4 >> 5]) != 0 )
        {
          v12 = "!(( rgp.world->dpvs.surfaceCastsSunShadow[surfIndex >> 5] ) & (1 << (surfIndex & 31)))";
          v13 = 1262;
          v14 = "(!(( rgp.world->dpvs.surfaceCastsSunShadow[surfIndex >> 5] ) & (1 << (surfIndex & 31))))";
LABEL_22:
          LOBYTE(surfaces) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", v13, ASSERT_TYPE_ASSERT, v14, (const char *)&queryFormat, v12);
          if ( (_BYTE)surfaces )
            __debugbreak();
        }
      }
LABEL_24:
      ++v1;
      v5 = __ROL4__(v5, 1);
      ++v4;
      ++v6;
      p_flags += 40;
      if ( v1 >= surfaceCount )
      {
        __asm { vmovaps xmm6, [rsp+78h+var_38] }
        return (char)surfaces;
      }
    }
  }
  return (char)surfaces;
}

/*
==============
R_SwapAdjacentWorldSurfaceRanges
==============
*/
void R_SwapAdjacentWorldSurfaceRanges(unsigned int i0, unsigned int i1, unsigned int i2)
{
  unsigned int v3; 
  int v4; 
  unsigned int v5; 
  int v8; 
  int i; 
  int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v20; 
  __int64 v21; 

  v3 = i0;
  v4 = i1 - i0;
  v5 = i2 - i0;
  _RSI = rgp.world->surfaces.surfaces;
  v8 = i2 - i1;
  _RBP = rgp.world->surfaces.surfaceBounds;
  if ( v4 >= (int)(i2 - i1) )
  {
    if ( !v8 )
      return;
    for ( i = v4 % v8; i; i = v11 % i )
    {
      v11 = v8;
      v8 = i;
    }
  }
  else
  {
    v8 = GCD(v8, v4);
  }
  if ( v8 )
  {
    v12 = (unsigned int)v8;
    do
    {
      v13 = v3;
      _RAX = 5i64 * v3;
      __asm
      {
        vmovups ymm2, ymmword ptr [rsi+rax*8]
        vmovsd  xmm3, qword ptr [rsi+rax*8+20h]
      }
      _RAX = 3i64 * v3;
      __asm
      {
        vmovups xmm4, xmmword ptr [rbp+rax*8+0]
        vmovsd  xmm5, qword ptr [rbp+rax*8+10h]
      }
      while ( 1 )
      {
        v20 = v13 + v4;
        if ( (unsigned int)v20 >= i2 )
        {
          v20 = (unsigned int)v20 - v5;
          if ( (_DWORD)v20 == v3 )
            break;
        }
        v21 = v13;
        _RDX = 5 * v20;
        __asm { vmovups ymm0, ymmword ptr [rsi+rdx*8] }
        _RCX = 5 * v21;
        __asm
        {
          vmovups ymmword ptr [rsi+rcx*8], ymm0
          vmovsd  xmm1, qword ptr [rsi+rdx*8+20h]
          vmovsd  qword ptr [rsi+rcx*8+20h], xmm1
        }
        _RDX = 3 * v20;
        __asm { vmovups xmm0, xmmword ptr [rbp+rdx*8+0] }
        _RCX = 3 * v21;
        __asm
        {
          vmovups xmmword ptr [rbp+rcx*8+0], xmm0
          vmovsd  xmm1, qword ptr [rbp+rdx*8+10h]
          vmovsd  qword ptr [rbp+rcx*8+10h], xmm1
        }
        v13 = v20;
      }
      ++v3;
      _RAX = 5i64 * v13;
      __asm
      {
        vmovups ymmword ptr [rsi+rax*8], ymm2
        vmovsd  qword ptr [rsi+rax*8+20h], xmm3
      }
      _RAX = 3i64 * v13;
      __asm
      {
        vmovups xmmword ptr [rbp+rax*8+0], xmm4
        vmovsd  qword ptr [rbp+rax*8+10h], xmm5
      }
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
R_UpdateAndSortStaticModels
==============
*/
__int64 R_UpdateAndSortStaticModels(unsigned int *outMovedBegin, unsigned __int16 *oldToNewIndexMap, R_SortStaticModels_HashBucket *hashBuckets, R_SortStaticModels_HashNode *hashNodes, unsigned int hashBucketCount)
{
  unsigned int v5; 
  unsigned int *v6; 
  R_SortStaticModels_HashNode *v7; 
  R_SortStaticModels_HashBucket *v8; 
  unsigned __int16 *v9; 
  R_SortStaticModels_HashBucket *v10; 
  __int64 v11; 
  R_SortStaticModels_HashBucket *v12; 
  GfxWorld *world; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  GfxStaticModel *v17; 
  int v18; 
  unsigned int v19; 
  XModel *model; 
  Material **materialHandles; 
  unsigned __int16 *p_numsurfs; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  unsigned int p1_low; 
  unsigned int v27; 
  __int64 v28; 
  unsigned __int8 *v29; 
  __int64 v30; 
  unsigned int instanceCount; 
  unsigned int v32; 
  unsigned int v33; 
  __int64 i; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  XModel *v41; 
  GfxStaticModel *v42; 

  v5 = hashBucketCount;
  v6 = outMovedBegin;
  v7 = hashNodes;
  v8 = hashBuckets;
  v9 = oldToNewIndexMap;
  v10 = hashBuckets;
  v11 = hashBucketCount;
  v12 = &hashBuckets[hashBucketCount];
  if ( hashBuckets != v12 )
  {
    do
    {
      v10->headIndex = -1;
      ++v10;
    }
    while ( v10 != v12 );
  }
  world = rgp.world;
  v14 = 0;
  v40 = 0;
  if ( rgp.world->smodels.modelCount )
  {
    do
    {
      v15 = 0;
      v16 = 0;
      v17 = &world->smodels.models[v14];
      v18 = 0;
      v42 = v17;
      v19 = -1;
      model = v17->model;
      v41 = model;
      v17->flags ^= (v17->flags ^ LOBYTE(v17->model->flags)) & 8;
      materialHandles = model->materialHandles;
      if ( model->numLods )
      {
        p_numsurfs = &model->lodInfo[0].numsurfs;
        do
        {
          v23 = *p_numsurfs;
          if ( (unsigned int)v23 > 0x10 )
          {
            LODWORD(v39) = 16;
            LODWORD(v38) = *p_numsurfs;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 710, ASSERT_TYPE_ASSERT, "( surfCount ) <= ( 16 )", "%s <= %s\n\t%i, %i", "surfCount", "R_SMODEL_MAX_SURFS_PER_LOD", v38, v39) )
              __debugbreak();
            model = v41;
          }
          v24 = 0i64;
          if ( (_DWORD)v23 )
          {
            do
            {
              v25 = v24 + v15;
              p1_low = (unsigned __int16)LODWORD(materialHandles[v24]->drawSurf.packed.p1);
              v27 = p1_low;
              if ( p1_low >= v19 )
                v27 = v19;
              if ( p1_low >= v19 )
                v25 = v16;
              v24 = (unsigned int)(v24 + 1);
              v16 = v25;
              v19 = v27;
            }
            while ( (_DWORD)v24 != (_DWORD)v23 );
          }
          materialHandles += v23;
          v15 += v23;
          ++v18;
          p_numsurfs += 32;
        }
        while ( v18 != model->numLods );
        v17 = v42;
        v14 = v40;
      }
      if ( v16 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v16, "unsigned", v16) )
        __debugbreak();
      v17->firstMtlSkinIndex = v16;
      world = rgp.world;
      v40 = ++v14;
    }
    while ( v14 < rgp.world->smodels.modelCount );
    v7 = hashNodes;
    v8 = hashBuckets;
    v9 = oldToNewIndexMap;
    v11 = hashBucketCount;
    v5 = hashBucketCount;
    v6 = outMovedBegin;
  }
  v28 = 0i64;
  if ( world->smodels.collectionCount )
  {
    do
    {
      v29 = (unsigned __int8 *)&world->smodels.models[world->smodels.collections[(unsigned int)v28].smodelIndex];
      v30 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 216i64) + 8i64 * v29[9]) + 48i64);
      if ( v8[v30].headIndex == 0xFFFF )
        v8[v30].headIndex = v28;
      else
        v7[v8[v30].tailIndex].nextIndex = v28;
      v8[v30].tailIndex = v28;
      v7[v28].nextIndex = -1;
      v28 = (unsigned int)(v28 + 1);
      world = rgp.world;
    }
    while ( (unsigned int)v28 < rgp.world->smodels.collectionCount );
  }
  instanceCount = world->smodels.instanceCount;
  v32 = 0;
  v33 = 0;
  if ( v5 )
  {
    do
    {
      for ( i = v8->headIndex; (_DWORD)i != 0xFFFF; ++v32 )
      {
        v9[i] = v32;
        if ( (_DWORD)i != v32 )
        {
          v35 = v32;
          if ( v32 > instanceCount )
            v35 = instanceCount;
          instanceCount = v35;
          v36 = v32;
          if ( v33 > v32 )
            v36 = v33;
          v33 = v36;
        }
        i = v7[i].nextIndex;
      }
      ++v8;
      --v11;
    }
    while ( v11 );
    world = rgp.world;
  }
  if ( v32 != world->smodels.collectionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawsurf.cpp", 972, ASSERT_TYPE_ASSERT, "(newSmodelIndex == rgp.world->smodels.collectionCount)", (const char *)&queryFormat, "newSmodelIndex == rgp.world->smodels.collectionCount") )
    __debugbreak();
  if ( instanceCount > v33 )
  {
    *v6 = 0;
    return 0i64;
  }
  else
  {
    *v6 = instanceCount;
    return v33 - instanceCount + 1;
  }
}

