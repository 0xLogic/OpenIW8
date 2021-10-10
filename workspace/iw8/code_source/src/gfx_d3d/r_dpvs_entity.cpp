/*
==============
R_AddEntitySurfacesInFrustumCmd
==============
*/

void __fastcall R_AddEntitySurfacesInFrustumCmd(const void *const data)
{
  ?R_AddEntitySurfacesInFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
R_AddEntitySurfacesInFrustumCmd
==============
*/
void R_AddEntitySurfacesInFrustumCmd(const void *const data)
{
  GfxWorld *world; 
  GfxSceneEntity *v3; 
  const DObjAnimMat *updated; 
  int v5; 
  int v6; 
  float *v7; 
  unsigned int v8; 
  int v9; 
  GfxSceneEntity *pLocalSceneEnt; 
  DObj *pObj[2]; 
  Bounds outBounds; 

  pObj[1] = (DObj *)-2i64;
  world = rgp.world;
  v3 = (GfxSceneEntity *)*((_QWORD *)data + 1);
  updated = R_UpdateSceneEntBounds(v3, &pLocalSceneEnt, (const DObj **)pObj, 1);
  if ( updated )
  {
    if ( !pLocalSceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_entity.cpp", 125, ASSERT_TYPE_ASSERT, "(localSceneEnt)", (const char *)&queryFormat, "localSceneEnt") )
      __debugbreak();
    GfxSceneEntity_GetBounds(&pLocalSceneEnt->cull, &outBounds);
    v5 = *((_DWORD *)data + 6);
    v6 = 0;
    if ( v5 <= 0 )
    {
LABEL_11:
      v8 = *((_DWORD *)data + 8);
      if ( !v8 && (*(_DWORD *)(*((_QWORD *)data + 1) + 1388i64) & 0x40000) != 0 || R_Umbra_IsBoxVisible(&outBounds, v8, *((_DWORD *)data + 9), 0) )
      {
        v9 = *((_DWORD *)data + 7);
        if ( v9 < 0 || R_BoundsInCell((const mnode_t *)world->dpvsPlanes.nodes, v9, &outBounds) )
        {
          CG_CullIn(pLocalSceneEnt->info.pose);
          R_SkinSceneDObj(v3, pLocalSceneEnt, pObj[0], updated, GfxViewDomain_World);
          if ( ((*((_DWORD *)pLocalSceneEnt + 346) >> 10) & 0xFFF) == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_entity.cpp", 153, ASSERT_TYPE_ASSERT, "(localSceneEnt->entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "localSceneEnt->entnum != gfxCfg.entnumNone") )
            __debugbreak();
          *(_BYTE *)(((*((_DWORD *)pLocalSceneEnt + 346) >> 10) & 0xFFF) + *(_QWORD *)data) = 1;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v7 = (float *)(*((_QWORD *)data + 2) + 4i64);
      while ( (float)((float)((float)((float)((float)((float)((float)(outBounds.midPoint.v[0] * *(v7 - 1)) + v7[2]) + (float)(outBounds.halfSize.v[0] * COERCE_FLOAT(*(_DWORD *)(v7 - 1) & _xmm))) + (float)(outBounds.midPoint.v[1] * *v7)) + (float)(outBounds.halfSize.v[1] * COERCE_FLOAT(*(_DWORD *)v7 & _xmm))) + (float)(outBounds.midPoint.v[2] * v7[1])) + (float)(outBounds.halfSize.v[2] * COERCE_FLOAT((_DWORD)v7[1] & _xmm))) > 0.0 )
      {
        ++v6;
        v7 += 4;
        if ( v6 >= v5 )
          goto LABEL_11;
      }
    }
    CG_UsedDObjCalcPose(pLocalSceneEnt->info.pose);
LABEL_21:
    memset(&outBounds, 0, sizeof(outBounds));
    return;
  }
  if ( pLocalSceneEnt )
    CG_UsedDObjCalcPose(pLocalSceneEnt->info.pose);
}

/*
==============
R_BoundsInCell
==============
*/

int __fastcall R_BoundsInCell(const mnode_t *node, int findCellIndex, const Bounds *bounds)
{
  return R_BoundsInCell_r(node, findCellIndex, bounds);
}

/*
==============
R_BoundsInCell_r
==============
*/
__int64 R_BoundsInCell_r(const mnode_t *node, int findCellIndex, const Bounds *bounds)
{
  double v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  signed int v10; 
  float v11; 
  float v12; 
  float v13; 
  float dist; 
  float v15; 
  float v16; 
  int v17; 
  __int64 rightChildOffset; 
  __int64 type; 
  float v20; 
  float v21; 
  __int64 v23; 
  __int64 v24; 
  Bounds boundsa; 

  if ( rgp.world != &s_world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_entity.cpp", 16, ASSERT_TYPE_ASSERT, "(rgp.world == &s_world)", (const char *)&queryFormat, "rgp.world == &s_world") )
    __debugbreak();
  v6 = *(double *)&bounds->halfSize.y;
  v7 = 0;
  v8 = s_world.dpvsPlanes.cellCount + 1;
  *(_OWORD *)boundsa.midPoint.v = *(_OWORD *)bounds->midPoint.v;
  *(double *)&boundsa.halfSize.y = v6;
  LOWORD(v9) = node->planeOrCellIndex;
  v10 = node->planeOrCellIndex - (s_world.dpvsPlanes.cellCount + 1);
  if ( v10 >= 0 )
  {
    while ( 1 )
    {
      if ( v10 >= (unsigned int)s_world.dpvsPlanes.planeCount )
      {
        LODWORD(v24) = s_world.dpvsPlanes.planeCount;
        LODWORD(v23) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_entity.cpp", 37, ASSERT_TYPE_ASSERT, "(unsigned)( planeIndex ) < (unsigned)( s_world.dpvsPlanes.planeCount )", "planeIndex doesn't index s_world.dpvsPlanes.planeCount\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      v11 = s_world.dpvsPlanes.planes[v10].normal.v[0];
      v12 = s_world.dpvsPlanes.planes[v10].normal.v[1];
      v13 = s_world.dpvsPlanes.planes[v10].normal.v[2];
      dist = s_world.dpvsPlanes.planes[v10].dist;
      v15 = (float)((float)((float)(v11 * boundsa.midPoint.v[0]) + (float)(v12 * boundsa.midPoint.v[1])) + (float)(v13 * boundsa.midPoint.v[2])) - dist;
      v16 = (float)((float)((float)(COERCE_FLOAT(LODWORD(v11) & _xmm) * boundsa.halfSize.v[0]) + (float)(COERCE_FLOAT(LODWORD(v12) & _xmm) * boundsa.halfSize.v[1])) + (float)(COERCE_FLOAT(LODWORD(v13) & _xmm) * boundsa.halfSize.v[2])) - 0.001;
      if ( v15 > v16 )
        break;
      if ( v15 < COERCE_FLOAT(LODWORD(v16) ^ _xmm) )
      {
        v17 = 1;
        goto LABEL_12;
      }
      type = s_world.dpvsPlanes.planes[v10].type;
      rightChildOffset = node->rightChildOffset;
      if ( (unsigned int)type >= 3 )
      {
        if ( R_BoundsInCell_r(node + 1, findCellIndex, &boundsa) )
          return 1i64;
      }
      else
      {
        v20 = boundsa.midPoint.v[type];
        v21 = boundsa.halfSize.v[type];
        boundsa.midPoint.v[type] = (float)((float)(v20 + v21) + dist) * 0.5;
        boundsa.halfSize.v[type] = (float)((float)(v20 + v21) - dist) * 0.5;
        if ( dist < (float)(v20 + v21) && R_BoundsInCell_r(node + 1, findCellIndex, &boundsa) )
          return 1i64;
        Bounds_SetMinMax(&boundsa, type, v20 - v21, dist);
      }
LABEL_18:
      v9 = *(&node->planeOrCellIndex + rightChildOffset);
      node = (const mnode_t *)((char *)node + 2 * rightChildOffset);
      v10 = v9 - v8;
      if ( (int)(v9 - v8) < 0 )
        goto LABEL_19;
    }
    v17 = 0;
LABEL_12:
    rightChildOffset = v17 * ((unsigned int)node->rightChildOffset - 2) + 2i64;
    goto LABEL_18;
  }
LABEL_19:
  if ( !(_WORD)v9 )
    return 0i64;
  LOBYTE(v7) = (unsigned __int16)v9 - 1 == findCellIndex;
  return v7;
}

