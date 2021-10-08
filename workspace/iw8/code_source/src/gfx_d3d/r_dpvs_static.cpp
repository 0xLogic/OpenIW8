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
  unsigned int count; 
  int v10; 
  bool v23; 
  __int64 v25; 
  const DpvsClipPlane *v26; 
  bool v39; 
  __int64 v44; 
  unsigned __int16 smodelIndexCount; 
  unsigned __int16 *smodelIndexes; 
  __int64 v47; 
  unsigned int v48; 
  unsigned __int64 v49; 
  __int64 v50; 
  volatile signed __int32 *v51; 
  unsigned int surfaceCount; 
  __int64 v53; 
  unsigned int *v54; 
  unsigned int v55; 
  unsigned __int64 v56; 
  __int64 v57; 
  volatile signed __int32 *v58; 
  unsigned __int16 childCount; 
  const GfxAabbTree *v60; 
  __int64 v61; 
  DpvsClipPlaneSet clipSeta; 
  __int128 v63; 
  int v64; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovss  xmm0, dword ptr [rcx] }
  count = clipSet->count;
  _RSI = tree;
  __asm
  {
    vmovdqa xmm4, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovaps xmmword ptr [r11-38h], xmm6
  }
  HIDWORD(v63) = 0;
  __asm { vmovaps xmmword ptr [r11-48h], xmm7 }
  v10 = 0;
  v64 = 0;
  __asm { vmovaps xmmword ptr [r11-58h], xmm8 }
  clipSeta.count = 0;
  __asm
  {
    vmovups xmm3, [rsp+148h+var_88]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
    vaddps  xmm7, xmm3, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovups [rsp+148h+var_88], xmm3
    vmovups xmm3, xmmword ptr [r11-78h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rsi+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+14h], 20h ; ' '
    vxorps  xmm6, xmm6, xmm6
    vmovups xmmword ptr [r11-78h], xmm3
    vsubps  xmm8, xmm6, xmm3
  }
  v23 = count == 0;
  if ( count )
  {
    __asm { vmovups xmm5, xmmword ptr cs:?g_inc@@3Ufloat4@@B.v; float4 const g_inc }
    v25 = count;
    do
    {
      v26 = clipSet->planes[0];
      clipSet = (const DpvsClipPlaneSet *)((char *)clipSet + 8);
      __asm
      {
        vmulps  xmm0, xmm3, xmmword ptr [rcx+10h]
        vaddps  xmm1, xmm0, xmm7
        vmulps  xmm2, xmm1, xmmword ptr [rcx]
      }
      clipSeta.planes[v10] = v26;
      __asm
      {
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
        vminps  xmm4, xmm4, xmm0
        vmulps  xmm0, xmm8, xmmword ptr [rcx+10h]
        vaddps  xmm1, xmm0, xmm7
        vmulps  xmm2, xmm1, xmmword ptr [rcx]
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vcmpltps xmm0, xmm1, xmm6
        vandps  xmm1, xmm0, xmm5
        vpextrd rax, xmm1, 0
      }
      v10 = _RAX + clipSeta.count;
      clipSeta.count += _RAX;
      v39 = v25-- == 0;
      v23 = v39 || v25 == 0;
    }
    while ( v25 );
  }
  __asm
  {
    vmovaps xmm8, [rsp+148h+var_58]
    vmovaps xmm7, [rsp+148h+var_48]
    vmovaps xmm6, [rsp+148h+var_38]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm4, xmm0
  }
  if ( !v23 )
  {
    if ( v10 )
    {
      childCount = _RSI->childCount;
      if ( childCount )
      {
        v60 = (const GfxAabbTree *)((char *)_RSI + _RSI->childrenOffset);
        v61 = childCount;
        do
        {
          R_AddAabbTreeSurfacesInFrustum_r(v60++, &clipSeta);
          --v61;
        }
        while ( v61 );
      }
      else
      {
        if ( (r_showAabbTrees->current.enabled & 2) != 0 )
          R_AddDebugBox(&frontEndDataOut->debugGlobals, &_RSI->bounds, &colorOrange, r_showCullMode->current.integer != 0);
        R_AddLeafSurfacesInFrustum(_RSI, &clipSeta);
      }
    }
    else
    {
      if ( r_showAabbTrees->current.enabled )
        R_AddDebugBox(&frontEndDataOut->debugGlobals, &_RSI->bounds, &colorYellow, r_showCullMode->current.integer != 0);
      v44 = tls_index;
      if ( rg.drawSModels )
      {
        smodelIndexCount = _RSI->smodelIndexCount;
        if ( smodelIndexCount )
        {
          smodelIndexes = _RSI->smodelIndexes;
          v47 = smodelIndexCount;
          do
          {
            v48 = 0x80000000 >> (*smodelIndexes & 0x1F);
            v49 = (unsigned __int64)*smodelIndexes >> 5;
            v50 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v44) + 1712i64);
            v51 = (volatile signed __int32 *)(v50 + 4 * v49);
            if ( ((unsigned __int8)v51 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(v50 + 4 * v49)) )
              __debugbreak();
            _InterlockedOr(v51, v48);
            ++smodelIndexes;
            --v47;
          }
          while ( v47 );
        }
      }
      if ( rg.drawWorld )
      {
        surfaceCount = _RSI->surfaceCount;
        if ( surfaceCount )
        {
          v53 = surfaceCount;
          v54 = &g_worldDpvs->sortedSurfIndex[_RSI->startSurfIndex];
          do
          {
            v55 = 0x80000000 >> (*v54 & 0x1F);
            v56 = (unsigned __int64)*v54 >> 5;
            v57 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v44) + 1704i64);
            v58 = (volatile signed __int32 *)(v57 + 4 * v56);
            if ( ((unsigned __int8)v58 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(v57 + 4 * v56)) )
              __debugbreak();
            _InterlockedOr(v58, v55);
            ++v54;
            --v53;
          }
          while ( v53 );
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
  __int64 v4; 
  const GfxAabbTree *v6; 
  __int64 v7; 
  GfxWorldDpvsStatic *v8; 
  __int64 v9; 
  __int64 v12; 
  DpvsClipPlaneSet *p_clipSet; 
  unsigned int v18; 
  const GfxAabbTree *v27; 
  DpvsClipPlaneSet clipSet; 
  __int128 v29; 
  char v30; 

  v4 = *((unsigned __int16 *)data + 9);
  v27 = (const GfxAabbTree *)*((_QWORD *)data + 1);
  v6 = v27;
  v7 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v8 = g_worldDpvs;
  *(_QWORD *)(v7 + 1712) = g_worldDpvs->smodelVisData[v4];
  *(_QWORD *)(v7 + 1704) = v8->surfaceVisData[v4];
  if ( v27 )
  {
    v9 = *((unsigned __int8 *)data + 16);
    if ( (unsigned int)v9 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_static.cpp", 434, ASSERT_TYPE_ASSERT, "( ( planes.count <= (10 + 4 + 2) ) )", "( planes.count ) = %i", *((unsigned __int8 *)data + 16)) )
      __debugbreak();
    if ( !(_DWORD)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_static.cpp", 435, ASSERT_TYPE_ASSERT, "(planes.count)", (const char *)&queryFormat, "planes.count") )
      __debugbreak();
    _RSI = *(_QWORD *)data;
    if ( (_DWORD)v9 )
    {
      _RBP = &v30;
      v12 = v9;
      p_clipSet = &clipSet;
      __asm
      {
        vmovaps [rsp+358h+var_38], xmm6
        vmovaps [rsp+358h+var_48], xmm7
        vmovss  xmm7, cs:__real@3f800000
        vmovaps [rsp+358h+var_58], xmm8
        vmovss  xmm8, cs:__real@bf800000
        vxorps  xmm6, xmm6, xmm6
      }
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups xmmword ptr [rbp+0], xmm0
        }
        v18 = 0;
        _RDI = &v29;
        do
        {
          ++v18;
          __asm
          {
            vcmpless xmm0, xmm6, dword ptr [rsi+rax*4]
            vblendvps xmm0, xmm8, xmm7, xmm0
            vmovss  dword ptr [rdi], xmm0
          }
          _RDI = (__int128 *)((char *)_RDI + 4);
        }
        while ( v18 < 3 );
        __asm
        {
          vmovups xmm0, [rsp+358h+var_278]
          vinsertps xmm0, xmm0, xmm6, 30h ; '0'
        }
        p_clipSet->planes[0] = (const DpvsClipPlane *)_RBP;
        _RSI += 16i64;
        __asm { vmovups xmmword ptr [rbp+10h], xmm0 }
        _RBP += 32;
        p_clipSet = (DpvsClipPlaneSet *)((char *)p_clipSet + 8);
        __asm { vmovups [rsp+358h+var_278], xmm0 }
        --v12;
      }
      while ( v12 );
      v6 = v27;
      __asm
      {
        vmovaps xmm8, [rsp+358h+var_58]
        vmovaps xmm7, [rsp+358h+var_48]
        vmovaps xmm6, [rsp+358h+var_38]
      }
    }
    clipSet.count = v9;
    R_AddAabbTreeSurfacesInFrustum_r(v6, &clipSet);
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
  unsigned int count; 
  const DpvsClipPlaneSet *v25; 
  __int64 v26; 
  unsigned int surfaceCount; 
  __int64 v35; 
  unsigned int *v36; 
  unsigned __int64 v37; 
  unsigned int v38; 
  __int64 v39; 
  unsigned int v51; 
  const DpvsClipPlaneSet *v56; 
  __int64 v57; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 

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
          _RDX = 3i64 * *smodelIndexes;
          _RCX = rgp.world->smodels.collectionBounds;
          HIDWORD(v65) = 0;
          __asm { vmovups xmm3, xmmword ptr [rsp+30h] }
          HIDWORD(v66) = 0;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rdx*8]
            vmovups xmm4, xmmword ptr [rsp+40h]
          }
          count = clipSet->count;
          __asm
          {
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, dword ptr [rcx+rdx*8+4], 10h
            vinsertps xmm3, xmm3, dword ptr [rcx+rdx*8+8], 20h ; ' '
            vmovss  xmm0, dword ptr [rcx+rdx*8+0Ch]
            vaddps  xmm5, xmm3, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [rcx+rdx*8+10h], 10h
            vinsertps xmm4, xmm4, dword ptr [rcx+rdx*8+14h], 20h ; ' '
            vmovups xmmword ptr [rsp+30h], xmm3
            vmovdqa xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
            vmovups xmmword ptr [rsp+40h], xmm4
          }
          if ( count )
          {
            v25 = clipSet;
            v26 = count;
            do
            {
              v25 = (const DpvsClipPlaneSet *)((char *)v25 + 8);
              __asm
              {
                vmulps  xmm0, xmm4, xmmword ptr [rax+10h]
                vaddps  xmm1, xmm0, xmm5
                vmulps  xmm2, xmm1, xmmword ptr [rax]
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm0, xmm0, xmm0
                vminps  xmm3, xmm3, xmm0
              }
              --v26;
            }
            while ( v26 );
          }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
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
      v35 = surfaceCount;
      v36 = &g_worldDpvs->sortedSurfIndex[tree->startSurfIndex];
      do
      {
        v37 = *v36;
        v38 = 0x80000000 >> (v37 & 0x1F);
        v39 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 1704i64) + 4 * (v37 >> 5);
        if ( (v38 & *(_DWORD *)v39) == 0 )
        {
          _RDX = 3 * v37;
          _RCX = rgp.world->surfaces.surfaceBounds;
          __asm { vmovss  xmm0, dword ptr [rcx+rdx*8] }
          _R10 = &_RCX[v37].bounds;
          HIDWORD(v67) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rsp+50h]
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, dword ptr [r10+4], 10h
            vinsertps xmm3, xmm3, dword ptr [r10+8], 20h ; ' '
            vmovss  xmm0, dword ptr [r10+0Ch]
            vaddps  xmm5, xmm3, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          }
          HIDWORD(v68) = 0;
          __asm { vmovups xmm4, xmmword ptr [rsp+60h] }
          v51 = clipSet->count;
          __asm
          {
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [r10+10h], 10h
            vinsertps xmm4, xmm4, dword ptr [r10+14h], 20h ; ' '
            vmovups xmmword ptr [rsp+50h], xmm3
            vmovdqa xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
            vmovups xmmword ptr [rsp+60h], xmm4
          }
          if ( v51 )
          {
            v56 = clipSet;
            v57 = v51;
            do
            {
              v56 = (const DpvsClipPlaneSet *)((char *)v56 + 8);
              __asm
              {
                vmulps  xmm0, xmm4, xmmword ptr [rax+10h]
                vaddps  xmm1, xmm0, xmm5
                vmulps  xmm2, xmm1, xmmword ptr [rax]
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm0, xmm0, xmm0
                vminps  xmm3, xmm3, xmm0
              }
              --v57;
            }
            while ( v57 );
          }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcmpltps xmm1, xmm0, xmm3
            vpextrd rax, xmm1, 0
          }
          if ( (_DWORD)_RAX )
          {
            if ( (r_showAabbTrees->current.enabled & 2) != 0 )
              R_AddDebugBox(&frontEndDataOut->debugGlobals, _R10, &colorGreen, r_showCullMode->current.integer != 0);
            if ( (v39 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v39) )
              __debugbreak();
            _InterlockedOr((volatile signed __int32 *)v39, v38);
          }
        }
        ++v36;
        --v35;
      }
      while ( v35 );
    }
  }
}

