/*
==============
R_AddLeafSurfacesInFrustum
==============
*/

void __fastcall R_AddLeafSurfacesInFrustum(const GfxAabbTree *tree, const DpvsClipPlaneSet *clipSet)
{
  ?R_AddLeafSurfacesInFrustum@@YAXPEIBUGfxAabbTree@@PEIBUDpvsClipPlaneSet@@@Z(tree, clipSet);
}

/*
==============
R_AddCellStaticSurfacesInFrustumCmd
==============
*/

void __fastcall R_AddCellStaticSurfacesInFrustumCmd(const void *const data)
{
  ?R_AddCellStaticSurfacesInFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
R_AddAabbTreeSurfacesInFrustum_r
==============
*/
void R_AddAabbTreeSurfacesInFrustum_r(const GfxAabbTree *tree, const DpvsClipPlaneSet *clipSet)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  float v5; 
  unsigned int count; 
  int v9; 
  __int128 v11; 
  __m128 v14; 
  float v15; 
  __int128 v17; 
  __m128 v20; 
  __m128 v; 
  __int64 v22; 
  const DpvsClipPlane *v23; 
  __int64 v33; 
  unsigned __int16 smodelIndexCount; 
  unsigned __int16 *smodelIndexes; 
  __int64 v36; 
  unsigned int v37; 
  unsigned __int64 v38; 
  __int64 v39; 
  volatile signed __int32 *v40; 
  unsigned int surfaceCount; 
  __int64 v42; 
  unsigned int *v43; 
  unsigned int v44; 
  unsigned __int64 v45; 
  __int64 v46; 
  volatile signed __int32 *v47; 
  unsigned __int16 childCount; 
  const GfxAabbTree *v49; 
  __int64 v50; 
  DpvsClipPlaneSet clipSeta; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 

  v5 = tree->bounds.midPoint.v[0];
  count = clipSet->count;
  _XMM4 = g_one.v;
  v56 = v2;
  HIDWORD(v52) = 0;
  v55 = v3;
  v9 = 0;
  HIDWORD(v53) = 0;
  v54 = v4;
  clipSeta.count = 0;
  v11 = v52;
  *(float *)&v11 = v5;
  _XMM3 = v11;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
  }
  v14 = _mm128_add_ps(_XMM3, g_unit.v);
  v15 = tree->bounds.halfSize.v[0];
  v52 = (__int128)_XMM3;
  v17 = v53;
  *(float *)&v17 = v15;
  _XMM3 = v17;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsi+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+14h], 20h ; ' '
  }
  v53 = (__int128)_XMM3;
  v20 = _mm128_sub_ps((__m128)0i64, _XMM3);
  if ( count )
  {
    v = g_inc.v;
    v22 = count;
    do
    {
      v23 = clipSet->planes[0];
      clipSet = (const DpvsClipPlaneSet *)((char *)clipSet + 8);
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_XMM3, v23->signs.v), v14), v23->coeffs.v);
      clipSeta.planes[v9] = v23;
      __asm
      {
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
        vminps  xmm4, xmm4, xmm0
      }
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(v20, v23->signs.v), v14), v23->coeffs.v);
      __asm
      {
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vcmpltps xmm0, xmm1, xmm6
      }
      _XMM1 = _XMM0 & *(_OWORD *)&v;
      __asm { vpextrd rax, xmm1, 0 }
      v9 = _RAX + clipSeta.count;
      clipSeta.count += _RAX;
      --v22;
    }
    while ( v22 );
  }
  if ( _XMM4.m128_f32[0] > 0.0 )
  {
    if ( v9 )
    {
      childCount = tree->childCount;
      if ( childCount )
      {
        v49 = (const GfxAabbTree *)((char *)tree + tree->childrenOffset);
        v50 = childCount;
        do
        {
          R_AddAabbTreeSurfacesInFrustum_r(v49++, &clipSeta);
          --v50;
        }
        while ( v50 );
      }
      else
      {
        if ( (r_showAabbTrees->current.enabled & 2) != 0 )
          R_AddDebugBox(&frontEndDataOut->debugGlobals, &tree->bounds, &colorOrange, r_showCullMode->current.integer != 0);
        R_AddLeafSurfacesInFrustum(tree, &clipSeta);
      }
    }
    else
    {
      if ( r_showAabbTrees->current.enabled )
        R_AddDebugBox(&frontEndDataOut->debugGlobals, &tree->bounds, &colorYellow, r_showCullMode->current.integer != 0);
      v33 = tls_index;
      if ( rg.drawSModels )
      {
        smodelIndexCount = tree->smodelIndexCount;
        if ( smodelIndexCount )
        {
          smodelIndexes = tree->smodelIndexes;
          v36 = smodelIndexCount;
          do
          {
            v37 = 0x80000000 >> (*smodelIndexes & 0x1F);
            v38 = (unsigned __int64)*smodelIndexes >> 5;
            v39 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v33) + 1712i64);
            v40 = (volatile signed __int32 *)(v39 + 4 * v38);
            if ( ((unsigned __int8)v40 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(v39 + 4 * v38)) )
              __debugbreak();
            _InterlockedOr(v40, v37);
            ++smodelIndexes;
            --v36;
          }
          while ( v36 );
        }
      }
      if ( rg.drawWorld )
      {
        surfaceCount = tree->surfaceCount;
        if ( surfaceCount )
        {
          v42 = surfaceCount;
          v43 = &g_worldDpvs->sortedSurfIndex[tree->startSurfIndex];
          do
          {
            v44 = 0x80000000 >> (*v43 & 0x1F);
            v45 = (unsigned __int64)*v43 >> 5;
            v46 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v33) + 1704i64);
            v47 = (volatile signed __int32 *)(v46 + 4 * v45);
            if ( ((unsigned __int8)v47 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(v46 + 4 * v45)) )
              __debugbreak();
            _InterlockedOr(v47, v44);
            ++v43;
            --v42;
          }
          while ( v42 );
        }
      }
    }
  }
}

/*
==============
R_AddCellStaticSurfacesInFrustumCmd
==============
*/
void R_AddCellStaticSurfacesInFrustumCmd(const void *const data)
{
  __int64 v1; 
  const GfxAabbTree *v3; 
  __int64 v4; 
  GfxWorldDpvsStatic *v5; 
  __int64 v6; 
  _OWORD *v7; 
  char *v8; 
  __int64 v9; 
  DpvsClipPlaneSet *p_clipSet; 
  unsigned int v13; 
  float *v14; 
  const GfxAabbTree *v19; 
  DpvsClipPlaneSet clipSet; 
  __int128 v21; 
  char v22; 

  v1 = *((unsigned __int16 *)data + 9);
  v19 = (const GfxAabbTree *)*((_QWORD *)data + 1);
  v3 = v19;
  v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v5 = g_worldDpvs;
  *(_QWORD *)(v4 + 1712) = g_worldDpvs->smodelVisData[v1];
  *(_QWORD *)(v4 + 1704) = v5->surfaceVisData[v1];
  if ( v19 )
  {
    v6 = *((unsigned __int8 *)data + 16);
    if ( (unsigned int)v6 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_static.cpp", 434, ASSERT_TYPE_ASSERT, "( ( planes.count <= (10 + 4 + 2) ) )", "( planes.count ) = %i", *((unsigned __int8 *)data + 16)) )
      __debugbreak();
    if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_static.cpp", 435, ASSERT_TYPE_ASSERT, "(planes.count)", (const char *)&queryFormat, "planes.count") )
      __debugbreak();
    v7 = *(_OWORD **)data;
    if ( (_DWORD)v6 )
    {
      v8 = &v22;
      v9 = v6;
      p_clipSet = &clipSet;
      _XMM8 = LODWORD(FLOAT_N1_0);
      _XMM6 = 0i64;
      do
      {
        *(_OWORD *)v8 = *v7;
        v13 = 0;
        v14 = (float *)&v21;
        do
        {
          ++v13;
          __asm
          {
            vcmpless xmm0, xmm6, dword ptr [rsi+rax*4]
            vblendvps xmm0, xmm8, xmm7, xmm0
          }
          *v14++ = *(float *)&_XMM0;
        }
        while ( v13 < 3 );
        _XMM0 = v21;
        __asm { vinsertps xmm0, xmm0, xmm6, 30h ; '0' }
        p_clipSet->planes[0] = (const DpvsClipPlane *)v8;
        ++v7;
        *((_OWORD *)v8 + 1) = _XMM0;
        v8 += 32;
        p_clipSet = (DpvsClipPlaneSet *)((char *)p_clipSet + 8);
        v21 = _XMM0;
        --v9;
      }
      while ( v9 );
      v3 = v19;
    }
    clipSet.count = v6;
    R_AddAabbTreeSurfacesInFrustum_r(v3, &clipSet);
  }
}

/*
==============
R_AddLeafSurfacesInFrustum
==============
*/
void R_AddLeafSurfacesInFrustum(const GfxAabbTree *tree, const DpvsClipPlaneSet *clipSet)
{
  __int64 v3; 
  unsigned __int16 smodelIndexCount; 
  unsigned __int16 *smodelIndexes; 
  __int64 v7; 
  int v8; 
  volatile int *v9; 
  Bounds *collectionBounds; 
  unsigned int count; 
  __m128 v13; 
  __m128 v16; 
  __m128 v18; 
  const DpvsClipPlaneSet *v22; 
  __int64 v23; 
  __m128 *p_v; 
  unsigned int surfaceCount; 
  __int64 v32; 
  unsigned int *v33; 
  unsigned __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  GfxSurfaceBounds *v37; 
  __m128 v39; 
  __m128 v42; 
  unsigned int v43; 
  __m128 v45; 
  const DpvsClipPlaneSet *v49; 
  __int64 v50; 
  __m128 *v51; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 

  v3 = tls_index;
  if ( rg.drawSModels )
  {
    smodelIndexCount = tree->smodelIndexCount;
    if ( smodelIndexCount )
    {
      smodelIndexes = tree->smodelIndexes;
      v7 = smodelIndexCount;
      do
      {
        v8 = 0x80000000 >> (*smodelIndexes & 0x1F);
        v9 = (volatile int *)(*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 1712i64) + 4 * ((unsigned __int64)*smodelIndexes >> 5));
        if ( (v8 & *v9) == 0 )
        {
          collectionBounds = rgp.world->smodels.collectionBounds;
          v58.m128_i32[3] = 0;
          v59.m128_i32[3] = 0;
          count = clipSet->count;
          v13 = v58;
          v13.m128_f32[0] = collectionBounds[*smodelIndexes].midPoint.v[0];
          _XMM3 = v13;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rcx+rdx*8+4], 10h
            vinsertps xmm3, xmm3, dword ptr [rcx+rdx*8+8], 20h ; ' '
          }
          v16 = _mm128_add_ps(_XMM3, g_unit.v);
          v18 = v59;
          v18.m128_f32[0] = collectionBounds[*smodelIndexes].halfSize.v[0];
          _XMM4 = v18;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [rcx+rdx*8+10h], 10h
            vinsertps xmm4, xmm4, dword ptr [rcx+rdx*8+14h], 20h ; ' '
          }
          v58 = _XMM3;
          _XMM3 = g_one.v;
          v59 = _XMM4;
          if ( count )
          {
            v22 = clipSet;
            v23 = count;
            do
            {
              p_v = &v22->planes[0]->coeffs.v;
              v22 = (const DpvsClipPlaneSet *)((char *)v22 + 8);
              _XMM2 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_XMM4, p_v[1]), v16), *p_v);
              __asm
              {
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm0, xmm0, xmm0
                vminps  xmm3, xmm3, xmm0
              }
              --v23;
            }
            while ( v23 );
          }
          _XMM0 = 0i64;
          __asm
          {
            vcmpltps xmm1, xmm0, xmm3
            vpextrd rax, xmm1, 0
          }
          if ( (_DWORD)_RAX )
            Sys_InterlockedOr(v9, v8);
        }
        ++smodelIndexes;
        --v7;
      }
      while ( v7 );
    }
  }
  if ( rg.drawWorld )
  {
    surfaceCount = tree->surfaceCount;
    if ( surfaceCount )
    {
      v32 = surfaceCount;
      v33 = &g_worldDpvs->sortedSurfIndex[tree->startSurfIndex];
      do
      {
        v34 = *v33;
        v35 = 0x80000000 >> (v34 & 0x1F);
        v36 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 1704i64) + 4 * (v34 >> 5);
        if ( (v35 & *(_DWORD *)v36) == 0 )
        {
          v37 = &rgp.world->surfaces.surfaceBounds[v34];
          v60.m128_i32[3] = 0;
          v39 = v60;
          v39.m128_f32[0] = v37->bounds.midPoint.v[0];
          _XMM3 = v39;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [r10+4], 10h
            vinsertps xmm3, xmm3, dword ptr [r10+8], 20h ; ' '
          }
          v42 = _mm128_add_ps(_XMM3, g_unit.v);
          v61.m128_i32[3] = 0;
          v43 = clipSet->count;
          v45 = v61;
          v45.m128_f32[0] = v37->bounds.halfSize.v[0];
          _XMM4 = v45;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [r10+10h], 10h
            vinsertps xmm4, xmm4, dword ptr [r10+14h], 20h ; ' '
          }
          v60 = _XMM3;
          _XMM3 = g_one.v;
          v61 = _XMM4;
          if ( v43 )
          {
            v49 = clipSet;
            v50 = v43;
            do
            {
              v51 = &v49->planes[0]->coeffs.v;
              v49 = (const DpvsClipPlaneSet *)((char *)v49 + 8);
              _XMM2 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_XMM4, v51[1]), v42), *v51);
              __asm
              {
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm0, xmm0, xmm0
                vminps  xmm3, xmm3, xmm0
              }
              --v50;
            }
            while ( v50 );
          }
          _XMM0 = 0i64;
          __asm
          {
            vcmpltps xmm1, xmm0, xmm3
            vpextrd rax, xmm1, 0
          }
          if ( (_DWORD)_RAX )
          {
            if ( (r_showAabbTrees->current.enabled & 2) != 0 )
              R_AddDebugBox(&frontEndDataOut->debugGlobals, &v37->bounds, &colorGreen, r_showCullMode->current.integer != 0);
            if ( (v36 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v36) )
              __debugbreak();
            _InterlockedOr((volatile signed __int32 *)v36, v35);
          }
        }
        ++v33;
        --v32;
      }
      while ( v32 );
    }
  }
}

