/*
==============
R_AddCellSceneEntSurfacesInFrustumCmd
==============
*/

void __fastcall R_AddCellSceneEntSurfacesInFrustumCmd(const void *const data)
{
  ?R_AddCellSceneEntSurfacesInFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
R_AddCellSceneEntSurfacesInFrustumCmd
==============
*/
void R_AddCellSceneEntSurfacesInFrustumCmd(const void *const data)
{
  __int64 localClientNum; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  DpvsPlane *v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int *v19; 
  __int64 v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v25; 
  __int64 v26; 
  unsigned __int16 v28; 
  unsigned __int16 v29; 
  int v31; 
  bool v39; 
  __int64 v59; 
  int v62; 
  bool v63; 
  float *v64; 
  unsigned int *v75; 
  __int64 v76; 
  unsigned int v77; 
  unsigned int v78; 
  __int64 v79; 
  int v81; 
  bool v88; 
  __int64 v118; 
  __int64 v119; 
  int planeCount; 
  GfxWorld *world; 
  DpvsPlane *v122; 
  vec3_t outOrigin; 
  DpvsPlane *planes; 
  __int64 v125; 
  GfxEntCellRefInfo *v126; 
  __int64 dataa[3]; 
  unsigned int v128; 
  unsigned int v129; 
  int v130; 
  int v131; 
  unsigned __int16 *sceneDObjIndex; 
  unsigned __int16 *sceneXModelIndex; 
  __int64 v134; 
  __int64 v135; 
  Bounds outBounds; 
  char v137; 
  void *retaddr; 

  _RAX = &retaddr;
  v135 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  localClientNum = scene.dpvs.localClientNum;
  if ( scene.dpvs.localClientNum != *((_DWORD *)data + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 50, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( dpvsCell->localClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "dpvsCell->localClientNum", scene.dpvs.localClientNum, *((_DWORD *)data + 4)) )
    __debugbreak();
  world = rgp.world;
  v13 = gfxCfg.entCount >> 5;
  if ( (unsigned int)localClientNum >= gfxCfg.maxClientViews )
  {
    LODWORD(v119) = gfxCfg.maxClientViews;
    LODWORD(v118) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientViews )", "localClientNum doesn't index gfxCfg.maxClientViews\n\t%i not in [0, %i)", v118, v119) )
      __debugbreak();
  }
  v126 = scene.dpvs.entInfo[localClientNum];
  sceneXModelIndex = scene.dpvs.sceneXModelIndex;
  sceneDObjIndex = scene.dpvs.sceneDObjIndex;
  v14 = *((unsigned __int16 *)data + 7);
  v15 = *((_DWORD *)data + 2);
  v16 = *(DpvsPlane **)data;
  planes = *(DpvsPlane **)data;
  v17 = *((unsigned __int8 *)data + 12);
  planeCount = v17;
  v18 = *((unsigned __int8 *)data + 13);
  if ( v15 >= world->dpvsPlanes.cellCount )
  {
    LODWORD(v119) = world->dpvsPlanes.cellCount;
    LODWORD(v118) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( worldDpvsPlanes->cellCount )", "cellIndex doesn't index worldDpvsPlanes->cellCount\n\t%i not in [0, %i)", v118, v119) )
      __debugbreak();
  }
  dataa[0] = (__int64)scene.dpvs.entVisData[v14];
  v130 = v14;
  dataa[2] = (__int64)v16;
  v128 = v17;
  v129 = v15;
  v131 = *((_DWORD *)data + 4);
  if ( (unsigned int)localClientNum * v13 >= 0x100 )
  {
    LODWORD(v119) = 256;
    LODWORD(v118) = localClientNum * v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( (4 * 2048) >> 5 )", "offset doesn't index MAX_TOTAL_ENT_COUNT >> 5\n\t%i not in [0, %i)", v118, v119) )
      __debugbreak();
  }
  v20 = (v15 << 8) + (_DWORD)localClientNum * v13;
  v134 = (unsigned int)v20;
  v19 = &world->dpvsPlanes.sceneEntCellBits[v20];
  v125 = dataa[0];
  LODWORD(v20) = 0;
  v21 = 0;
  if ( v13 )
    v21 = *v19;
  if ( (unsigned int)v18 > v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 88, ASSERT_TYPE_ASSERT, "(frustumPlaneCount <= planeCount)", (const char *)&queryFormat, "frustumPlaneCount <= planeCount") )
    __debugbreak();
  v122 = &planes[v18];
  v22 = v17 - v18;
  __asm
  {
    vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm14, xmm14, xmm14
  }
  while ( v21 )
  {
LABEL_22:
    v25 = __lzcnt(v21);
    v26 = v25 + 32 * (_DWORD)v20;
    if ( v25 >= 0x20 )
    {
      LODWORD(v119) = 32;
      LODWORD(v118) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v118, v119) )
        __debugbreak();
    }
    if ( (v21 & (0x80000000 >> v25)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v21 &= ~(0x80000000 >> v25);
    _RSI = (unsigned int)v26;
    if ( !*(_BYTE *)(v26 + v125) )
    {
      v28 = sceneDObjIndex[v26];
      if ( v28 == 0xFFFF )
      {
        v29 = sceneXModelIndex[v26];
        if ( v29 != 0xFFFF )
        {
          _RCX = 152i64 * v29;
          v31 = 0;
          if ( v22 <= 0 )
          {
LABEL_35:
            *(_BYTE *)(v26 + dataa[0]) = 1;
          }
          else
          {
            _RDX = &scene;
            __asm
            {
              vmovss  xmm7, dword ptr [rcx+rdx+3FC2C4h]
              vmovss  xmm8, dword ptr [rcx+rdx+3FC2B8h]
              vmovss  xmm9, dword ptr [rcx+rdx+3FC2BCh]
              vmovss  xmm10, dword ptr [rcx+rdx+3FC2C8h]
              vmovss  xmm11, dword ptr [rcx+rdx+3FC2C0h]
              vmovss  xmm12, dword ptr [rcx+rdx+3FC2CCh]
            }
            v39 = __CFADD__(v122, 12i64) || &v122->coeffs.xyz + 1 == NULL;
            _RCX = &v122->coeffs.xyz + 1;
            while ( 1 )
            {
              __asm
              {
                vmovss  xmm5, dword ptr [rcx-8]
                vmovss  xmm1, dword ptr [rcx-0Ch]
                vmovss  xmm6, dword ptr [rcx-4]
                vandps  xmm0, xmm1, xmm13
                vmulss  xmm2, xmm0, xmm7
                vmulss  xmm0, xmm8, xmm1
                vaddss  xmm1, xmm0, dword ptr [rcx]
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm2, xmm9, xmm5
                vaddss  xmm4, xmm3, xmm2
                vandps  xmm5, xmm5, xmm13
                vmulss  xmm0, xmm5, xmm10
                vaddss  xmm2, xmm4, xmm0
                vmulss  xmm1, xmm11, xmm6
                vaddss  xmm3, xmm2, xmm1
                vandps  xmm6, xmm6, xmm13
                vmulss  xmm0, xmm6, xmm12
                vaddss  xmm1, xmm3, xmm0
                vcomiss xmm1, xmm14
              }
              if ( v39 )
                break;
              ++v31;
              _RCX = (vec3_t *)((char *)_RCX + 16);
              v39 = v31 <= (unsigned int)v22;
              if ( v31 >= v22 )
                goto LABEL_35;
            }
          }
        }
      }
      else
      {
        v59 = v28;
        if ( scene.sceneDObj[v59].obj )
        {
          GfxSceneEntity_GetPlacementOrigin((const GfxSceneEntity *)&scene.sceneDObjVisData[-1424][1424 * v59], &outOrigin);
          _RAX = v126;
          __asm { vmovss  xmm7, dword ptr [rax+rsi*8] }
          v62 = 0;
          if ( v22 <= 0 )
          {
LABEL_41:
            GfxSceneEntity_GetBounds(&scene.sceneDObj[v59].cull, &outBounds);
            if ( !R_CullBoxDpvs(&outBounds, planes, planeCount) )
            {
              dataa[1] = (__int64)&scene.sceneDObj[v59];
              if ( scene.sceneDObj[v59].cull.state < 2 )
                Sys_AddWorkerCmd(WRKCMD_DPVS_ENTITY, dataa);
              else
                R_AddEntitySurfacesInFrustumCmd(dataa);
            }
          }
          else
          {
            v63 = __CFADD__(v122, 8i64) || (DpvsPlane *)&v122->coeffs.xyz.z == NULL;
            v64 = &v122->coeffs.v[2];
            __asm
            {
              vmovss  xmm4, dword ptr [rsp+1B8h+outOrigin+8]
              vmovss  xmm5, dword ptr [rsp+1B8h+outOrigin+4]
              vmovss  xmm6, dword ptr [rsp+1B8h+outOrigin]
            }
            while ( 1 )
            {
              __asm
              {
                vmulss  xmm1, xmm6, dword ptr [rax-8]
                vmulss  xmm0, xmm5, dword ptr [rax-4]
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm4, dword ptr [rax]
                vaddss  xmm2, xmm2, xmm1
                vaddss  xmm0, xmm2, dword ptr [rax+4]
                vaddss  xmm3, xmm0, xmm7
                vcomiss xmm3, xmm14
              }
              if ( v63 )
                break;
              ++v62;
              v64 += 4;
              v63 = v62 <= (unsigned int)v22;
              if ( v62 >= v22 )
                goto LABEL_41;
            }
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= v13 )
      break;
    v21 = v19[v20];
    if ( v21 )
      goto LABEL_22;
  }
  v75 = &world->dpvsPlanes.sceneEntCellBits[v134 + (world->dpvsPlanes.cellCount << 8)];
  LODWORD(v76) = 0;
  v77 = 0;
  if ( v13 )
    v77 = *v75;
  while ( v77 )
  {
LABEL_50:
    v78 = __lzcnt(v77);
    v79 = v78 + 32 * (_DWORD)v76;
    if ( v78 >= 0x20 )
    {
      LODWORD(v119) = 32;
      LODWORD(v118) = v78;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v118, v119) )
        __debugbreak();
    }
    if ( (v77 & (0x80000000 >> v78)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v77 &= ~(0x80000000 >> v78);
    if ( !*(_BYTE *)(v79 + v125) )
    {
      _RAX = v126[v79];
      v81 = 0;
      if ( v22 <= 0 )
      {
LABEL_61:
        *(_BYTE *)(v79 + dataa[0]) = 1;
      }
      else
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rax+0Ch]
          vmovss  xmm8, dword ptr [rax]
          vmovss  xmm9, dword ptr [rax+4]
          vmovss  xmm10, dword ptr [rax+10h]
          vmovss  xmm11, dword ptr [rax+8]
          vmovss  xmm12, dword ptr [rax+14h]
        }
        v88 = __CFADD__(v122, 12i64) || &v122->coeffs.xyz + 1 == NULL;
        _RAX = &v122->coeffs.xyz + 1;
        while ( 1 )
        {
          __asm
          {
            vmovss  xmm5, dword ptr [rax-8]
            vmovss  xmm1, dword ptr [rax-0Ch]
            vmovss  xmm6, dword ptr [rax-4]
            vandps  xmm0, xmm1, xmm13
            vmulss  xmm2, xmm0, xmm7
            vmulss  xmm0, xmm8, xmm1
            vaddss  xmm1, xmm0, dword ptr [rax]
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm9, xmm5
            vaddss  xmm4, xmm3, xmm2
            vandps  xmm5, xmm5, xmm13
            vmulss  xmm0, xmm5, xmm10
            vaddss  xmm2, xmm4, xmm0
            vmulss  xmm1, xmm11, xmm6
            vaddss  xmm3, xmm2, xmm1
            vandps  xmm6, xmm6, xmm13
            vmulss  xmm0, xmm6, xmm12
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, xmm14
          }
          if ( v88 )
            break;
          ++v81;
          _RAX = (vec3_t *)((char *)_RAX + 16);
          v88 = v81 <= (unsigned int)v22;
          if ( v81 >= v22 )
            goto LABEL_61;
        }
      }
    }
  }
  while ( 1 )
  {
    v76 = (unsigned int)(v76 + 1);
    if ( (unsigned int)v76 >= v13 )
      break;
    v77 = v75[v76];
    if ( v77 )
      goto LABEL_50;
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  memset(&outBounds, 0, sizeof(outBounds));
  _R11 = &v137;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

