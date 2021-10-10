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
  unsigned int v3; 
  __int64 v4; 
  unsigned int v5; 
  DpvsPlane *v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int *v9; 
  __int64 v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int16 v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  int v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float *v25; 
  __int64 v26; 
  int v27; 
  float *v28; 
  unsigned int *v29; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  __int64 v33; 
  float *v; 
  int v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float *v42; 
  __int64 v43; 
  __int64 v44; 
  int planeCount; 
  GfxWorld *world; 
  DpvsPlane *v47; 
  vec3_t outOrigin; 
  DpvsPlane *planes; 
  __int64 v50; 
  GfxEntCellRefInfo *v51; 
  __int64 dataa[3]; 
  unsigned int v53; 
  unsigned int v54; 
  int v55; 
  int v56; 
  unsigned __int16 *sceneDObjIndex; 
  unsigned __int16 *sceneXModelIndex; 
  __int64 v59; 
  __int64 v60; 
  Bounds outBounds; 

  v60 = -2i64;
  localClientNum = scene.dpvs.localClientNum;
  if ( scene.dpvs.localClientNum != *((_DWORD *)data + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 50, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( dpvsCell->localClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "dpvsCell->localClientNum", scene.dpvs.localClientNum, *((_DWORD *)data + 4)) )
    __debugbreak();
  world = rgp.world;
  v3 = gfxCfg.entCount >> 5;
  if ( (unsigned int)localClientNum >= gfxCfg.maxClientViews )
  {
    LODWORD(v44) = gfxCfg.maxClientViews;
    LODWORD(v43) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientViews )", "localClientNum doesn't index gfxCfg.maxClientViews\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  v51 = scene.dpvs.entInfo[localClientNum];
  sceneXModelIndex = scene.dpvs.sceneXModelIndex;
  sceneDObjIndex = scene.dpvs.sceneDObjIndex;
  v4 = *((unsigned __int16 *)data + 7);
  v5 = *((_DWORD *)data + 2);
  v6 = *(DpvsPlane **)data;
  planes = *(DpvsPlane **)data;
  v7 = *((unsigned __int8 *)data + 12);
  planeCount = v7;
  v8 = *((unsigned __int8 *)data + 13);
  if ( v5 >= world->dpvsPlanes.cellCount )
  {
    LODWORD(v44) = world->dpvsPlanes.cellCount;
    LODWORD(v43) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( worldDpvsPlanes->cellCount )", "cellIndex doesn't index worldDpvsPlanes->cellCount\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  dataa[0] = (__int64)scene.dpvs.entVisData[v4];
  v55 = v4;
  dataa[2] = (__int64)v6;
  v53 = v7;
  v54 = v5;
  v56 = *((_DWORD *)data + 4);
  if ( (unsigned int)localClientNum * v3 >= 0x100 )
  {
    LODWORD(v44) = 256;
    LODWORD(v43) = localClientNum * v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( (4 * 2048) >> 5 )", "offset doesn't index MAX_TOTAL_ENT_COUNT >> 5\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  v10 = (v5 << 8) + (_DWORD)localClientNum * v3;
  v59 = (unsigned int)v10;
  v9 = &world->dpvsPlanes.sceneEntCellBits[v10];
  v50 = dataa[0];
  LODWORD(v10) = 0;
  v11 = 0;
  if ( v3 )
    v11 = *v9;
  if ( (unsigned int)v8 > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_sceneent.cpp", 88, ASSERT_TYPE_ASSERT, "(frustumPlaneCount <= planeCount)", (const char *)&queryFormat, "frustumPlaneCount <= planeCount") )
    __debugbreak();
  v47 = &planes[v8];
  v12 = v7 - v8;
  while ( v11 )
  {
LABEL_22:
    v13 = __lzcnt(v11);
    v14 = v13 + 32 * (_DWORD)v10;
    if ( v13 >= 0x20 )
    {
      LODWORD(v44) = 32;
      LODWORD(v43) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    if ( (v11 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v11 &= ~(0x80000000 >> v13);
    if ( !*(_BYTE *)(v14 + v50) )
    {
      v15 = sceneDObjIndex[v14];
      if ( v15 == 0xFFFF )
      {
        v16 = sceneXModelIndex[v14];
        if ( v16 != 0xFFFF )
        {
          v17 = v16;
          v18 = 0;
          if ( v12 <= 0 )
          {
LABEL_35:
            *(_BYTE *)(v14 + dataa[0]) = 1;
          }
          else
          {
            v19 = scene.sceneModel[v17].bounds.halfSize.v[0];
            v20 = scene.sceneModel[v17].bounds.midPoint.v[0];
            v21 = scene.sceneModel[v17].bounds.midPoint.v[1];
            v22 = scene.sceneModel[v17].bounds.halfSize.v[1];
            v23 = scene.sceneModel[v17].bounds.midPoint.v[2];
            v24 = scene.sceneModel[v17].bounds.halfSize.v[2];
            v25 = &v47->coeffs.v[3];
            while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v25 - 3) & _xmm) * v19) + (float)((float)(v20 * *(v25 - 3)) + *v25)) + (float)(v21 * *(v25 - 2))) + (float)(COERCE_FLOAT(*(_DWORD *)(v25 - 2) & _xmm) * v22)) + (float)(v23 * *(v25 - 1))) + (float)(COERCE_FLOAT(*(_DWORD *)(v25 - 1) & _xmm) * v24)) > 0.0 )
            {
              ++v18;
              v25 += 4;
              if ( v18 >= v12 )
                goto LABEL_35;
            }
          }
        }
      }
      else
      {
        v26 = v15;
        if ( scene.sceneDObj[v26].obj )
        {
          GfxSceneEntity_GetPlacementOrigin((const GfxSceneEntity *)&scene.sceneDObjVisData[-1424][1424 * v26], &outOrigin);
          v27 = 0;
          if ( v12 <= 0 )
          {
LABEL_41:
            GfxSceneEntity_GetBounds(&scene.sceneDObj[v26].cull, &outBounds);
            if ( !R_CullBoxDpvs(&outBounds, planes, planeCount) )
            {
              dataa[1] = (__int64)&scene.sceneDObj[v26];
              if ( scene.sceneDObj[v26].cull.state < 2 )
                Sys_AddWorkerCmd(WRKCMD_DPVS_ENTITY, dataa);
              else
                R_AddEntitySurfacesInFrustumCmd(dataa);
            }
          }
          else
          {
            v28 = &v47->coeffs.v[2];
            while ( (float)((float)((float)((float)((float)(outOrigin.v[0] * *(v28 - 2)) + (float)(outOrigin.v[1] * *(v28 - 1))) + (float)(outOrigin.v[2] * *v28)) + v28[1]) + v51[(unsigned int)v14].radius) > 0.0 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= v12 )
                goto LABEL_41;
            }
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v3 )
      break;
    v11 = v9[v10];
    if ( v11 )
      goto LABEL_22;
  }
  v29 = &world->dpvsPlanes.sceneEntCellBits[v59 + (world->dpvsPlanes.cellCount << 8)];
  LODWORD(v30) = 0;
  v31 = 0;
  if ( v3 )
    v31 = *v29;
  while ( v31 )
  {
LABEL_50:
    v32 = __lzcnt(v31);
    v33 = v32 + 32 * (_DWORD)v30;
    if ( v32 >= 0x20 )
    {
      LODWORD(v44) = 32;
      LODWORD(v43) = v32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    if ( (v31 & (0x80000000 >> v32)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v31 &= ~(0x80000000 >> v32);
    if ( !*(_BYTE *)(v33 + v50) )
    {
      v = v51[v33].bmodel->writable.bounds.midPoint.v;
      v35 = 0;
      if ( v12 <= 0 )
      {
LABEL_61:
        *(_BYTE *)(v33 + dataa[0]) = 1;
      }
      else
      {
        v36 = v[3];
        v37 = *v;
        v38 = v[1];
        v39 = v[4];
        v40 = v[2];
        v41 = v[5];
        v42 = &v47->coeffs.v[3];
        while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v42 - 3) & _xmm) * v36) + (float)((float)(v37 * *(v42 - 3)) + *v42)) + (float)(v38 * *(v42 - 2))) + (float)(COERCE_FLOAT(*(_DWORD *)(v42 - 2) & _xmm) * v39)) + (float)(v40 * *(v42 - 1))) + (float)(COERCE_FLOAT(*(_DWORD *)(v42 - 1) & _xmm) * v41)) > 0.0 )
        {
          ++v35;
          v42 += 4;
          if ( v35 >= v12 )
            goto LABEL_61;
        }
      }
    }
  }
  while ( 1 )
  {
    v30 = (unsigned int)(v30 + 1);
    if ( (unsigned int)v30 >= v3 )
      break;
    v31 = v29[v30];
    if ( v31 )
      goto LABEL_50;
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  memset(&outBounds, 0, sizeof(outBounds));
}

