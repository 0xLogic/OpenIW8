/*
==============
R_AddCellDynModelSurfacesInFrustumCmd
==============
*/

void __fastcall R_AddCellDynModelSurfacesInFrustumCmd(const void *const data)
{
  ?R_AddCellDynModelSurfacesInFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
R_AddCellDynModelSurfacesInFrustumCmd
==============
*/
void R_AddCellDynModelSurfacesInFrustumCmd(const void *const data)
{
  __int64 localClientNum; 
  GfxWorld *world; 
  GfxWorldDpvsDynamic *p_dpvsDyn; 
  unsigned int v5; 
  unsigned int v6; 
  int v7; 
  const unsigned int *v8; 
  __int64 v9; 
  const DpvsPlane *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *dynEntVisData; 
  __int64 v13; 

  if ( r_drawDynEnts->current.enabled )
  {
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_dynmodel.cpp", 68, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    localClientNum = frontEndDataOut->localClientNum;
    if ( (_DWORD)localClientNum != *((_DWORD *)data + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_dynmodel.cpp", 70, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( dpvsCell->localClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "dpvsCell->localClientNum", frontEndDataOut->localClientNum, *((_DWORD *)data + 4)) )
      __debugbreak();
    world = rgp.world;
    p_dpvsDyn = &rgp.world->dpvsDyn;
    if ( *((_DWORD *)data + 2) >= rgp.world->dpvsPlanes.cellCount )
    {
      LODWORD(v13) = rgp.world->dpvsPlanes.cellCount;
      LODWORD(dynEntVisData) = *((_DWORD *)data + 2);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_dynmodel.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( dpvsCell->cellIndex ) < (unsigned)( rgp.world->dpvsPlanes.cellCount )", "dpvsCell->cellIndex doesn't index rgp.world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", dynEntVisData, v13) )
        __debugbreak();
      world = rgp.world;
    }
    v5 = world->dpvsDyn.dynEntClientCount[0];
    v6 = p_dpvsDyn->dynEntClientWordCount[0];
    v7 = *((unsigned __int8 *)data + 12);
    v8 = &p_dpvsDyn->dynEntCellBits[0][*((_DWORD *)data + 2) * p_dpvsDyn->dynEntClientWordCount[0] + (unsigned __int64)((unsigned int)localClientNum * ((v5 + 31) >> 5))];
    v9 = *((unsigned __int16 *)data + 7);
    v10 = *(const DpvsPlane **)data;
    v11 = &p_dpvsDyn->dynEntVisData[0][v9][(unsigned int)localClientNum * v5];
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v13) = 2;
      LODWORD(dynEntVisData) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", dynEntVisData, v13) )
        __debugbreak();
    }
    R_CullDynModelInCell(v8, v6, g_dynEntPoseLists[localClientNum][0], v10, v7, v11);
  }
}

/*
==============
R_CullDynModelInCell
==============
*/
void R_CullDynModelInCell(const unsigned int *dynEntCellBits, unsigned int dynEntClientWordCount, DynEntityPose *dynModelList, const DpvsPlane *planes, int planeCount, unsigned __int8 *dynEntVisData)
{
  unsigned int v6; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  vec3_t *v20; 
  unsigned int v21; 
  const unsigned int *v22; 
  unsigned int v23; 

  if ( dynEntClientWordCount )
  {
    v23 = dynEntClientWordCount;
    v22 = dynEntCellBits;
    v6 = 0;
    v21 = 0;
    do
    {
      v8 = *dynEntCellBits;
      v9 = __lzcnt(*dynEntCellBits);
      if ( v9 < 0x20 )
      {
        v10 = 32 * v6;
        do
        {
          v11 = v10 + v9;
          if ( ((0x80000000 >> v9) & v8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs_dynmodel.cpp", 32, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
            __debugbreak();
          v8 &= ~(0x80000000 >> v9);
          if ( !dynEntVisData[v11] )
          {
            v12 = (unsigned int)v11;
            v13 = 0;
            if ( planeCount <= 0 )
            {
LABEL_13:
              dynEntVisData[v11] = 1;
            }
            else
            {
              v14 = dynModelList[v12].bounds.halfSize.v[0];
              v15 = dynModelList[v12].bounds.midPoint.v[0];
              v16 = dynModelList[v12].bounds.midPoint.v[1];
              v17 = dynModelList[v12].bounds.halfSize.v[1];
              v18 = dynModelList[v12].bounds.midPoint.v[2];
              v19 = dynModelList[v12].bounds.halfSize.v[2];
              v20 = &planes->coeffs.xyz + 1;
              while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v20[-1].v[0]) & _xmm) * v14) + (float)((float)(v15 * v20[-1].v[0]) + v20->v[0])) + (float)(v16 * v20[-1].v[1])) + (float)(COERCE_FLOAT(LODWORD(v20[-1].v[1]) & _xmm) * v17)) + (float)(v18 * v20[-1].v[2])) + (float)(COERCE_FLOAT(LODWORD(v20[-1].v[2]) & _xmm) * v19)) > 0.0 )
              {
                ++v13;
                v20 = (vec3_t *)((char *)v20 + 16);
                if ( v13 >= planeCount )
                  goto LABEL_13;
              }
            }
          }
          v9 = __lzcnt(v8);
        }
        while ( v9 < 0x20 );
        v6 = v21;
        dynEntCellBits = v22;
        dynEntClientWordCount = v23;
      }
      ++v6;
      ++dynEntCellBits;
      v21 = v6;
      v22 = dynEntCellBits;
    }
    while ( v6 < dynEntClientWordCount );
  }
}

