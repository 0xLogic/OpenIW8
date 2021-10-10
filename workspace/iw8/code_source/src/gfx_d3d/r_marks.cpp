/*
==============
R_MarkFragments_Go
==============
*/

void __fastcall R_MarkFragments_Go(MarkInfo *markInfo, void (__fastcall *callback)(void *, const GfxMarkContext *, const vec3_t *, const vec3_t *, const vec3_t *, const vec3_t *, bool, bool), void *callbackContext)
{
  ?R_MarkFragments_Go@@YAXPEAUMarkInfo@@P6AXPEAXAEBUGfxMarkContext@@AEBTvec3_t@@333_N4@Z1@Z(markInfo, callback, callbackContext);
}

/*
==============
R_MarkFragments_AddDynEnt
==============
*/

bool __fastcall R_MarkFragments_AddDynEnt(MarkInfo *markInfo, unsigned int dynEntityId)
{
  return ?R_MarkFragments_AddDynEnt@@YA_NPEAUMarkInfo@@I@Z(markInfo, dynEntityId);
}

/*
==============
R_MarkFragments_AddDObj
==============
*/

bool __fastcall R_MarkFragments_AddDObj(MarkInfo *markInfo, DObj *dObj, cpose_t *pose, unsigned __int16 entityIndex)
{
  return ?R_MarkFragments_AddDObj@@YA_NPEAUMarkInfo@@PEAUDObj@@PEAUcpose_t@@G@Z(markInfo, dObj, pose, entityIndex);
}

/*
==============
R_GetMarkFragmentClipPlanes
==============
*/

void __fastcall R_GetMarkFragmentClipPlanes(const Sphere *sphere, const tmat33_t<vec3_t> *axis, vec4_t (*planes)[6])
{
  ?R_GetMarkFragmentClipPlanes@@YAXPEBUSphere@@AEBT?$tmat33_t@Tvec3_t@@@@AEAY05Tvec4_t@@@Z(sphere, axis, planes);
}

/*
==============
R_MarkFragments_AddViewModelDObj
==============
*/

bool __fastcall R_MarkFragments_AddViewModelDObj(MarkInfo *markInfo, DObj *dObj, cpose_t *pose)
{
  return ?R_MarkFragments_AddViewModelDObj@@YA_NPEAUMarkInfo@@PEAUDObj@@PEAUcpose_t@@@Z(markInfo, dObj, pose);
}

/*
==============
R_MarkFragments_AddBModel
==============
*/

bool __fastcall R_MarkFragments_AddBModel(MarkInfo *markInfo, GfxBrushModel *brushModel, cpose_t *pose, unsigned __int16 entityIndex)
{
  return ?R_MarkFragments_AddBModel@@YA_NPEAUMarkInfo@@PEAUGfxBrushModel@@PEAUcpose_t@@G@Z(markInfo, brushModel, pose, entityIndex);
}

/*
==============
R_MarkFragments_Begin
==============
*/

void __fastcall R_MarkFragments_Begin(MarkInfo *markInfo, MarkFragmentsAgainstEnum markAgainst, const tmat33_t<vec3_t> *axis, const vec3_t *viewOffset, Material *material, Material *displacementMaterial, bool markGivenModelsOnly, bool markDynEnt, int viewmodelClientIndex)
{
  ?R_MarkFragments_Begin@@YAXPEAUMarkInfo@@W4MarkFragmentsAgainstEnum@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@PEAUMaterial@@4_N5H@Z(markInfo, markAgainst, axis, viewOffset, material, displacementMaterial, markGivenModelsOnly, markDynEnt, viewmodelClientIndex);
}

/*
==============
R_AllowMarks
==============
*/
_BOOL8 R_AllowMarks(int surfIndex, void *markMaterialAsVoid)
{
  return (rgp.world->surfaces.surfaces[surfIndex].material->surfaceFlags & 0x20) == 0;
}

/*
==============
R_AllowSmodelMarks
==============
*/
__int64 R_AllowSmodelMarks(int smodelIndex, void *unusedContext)
{
  return 1i64;
}

/*
==============
R_ChopWorldPolyBehindPlane
==============
*/
__int64 R_ChopWorldPolyBehindPlane(int inPointCount, const FxWorldMarkPoint *inPoints, FxWorldMarkPoint *outPoints, const vec4_t *plane)
{
  __int128 v4; 
  __int128 v5; 
  __int64 v6; 
  int v10; 
  int v11; 
  __int64 v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float *v17; 
  float v18; 
  int v19; 
  __int64 *v20; 
  float v21; 
  int v22; 
  __int64 *v23; 
  float v24; 
  int v25; 
  __int64 *v26; 
  float v27; 
  int v28; 
  __int64 *v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float *v34; 
  float v35; 
  int v36; 
  __int64 *v37; 
  int v38; 
  int v40; 
  float *v41; 
  __int64 v42; 
  int v43; 
  int v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  int v52; 
  int v53[10]; 
  int v54[10]; 
  __int128 v55; 
  __int128 v56; 

  v6 = inPointCount;
  if ( inPointCount > 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 64, ASSERT_TYPE_ASSERT, "( ( inPointCount <= 3 + 6 ) )", "( inPointCount ) = %i", inPointCount) )
    __debugbreak();
  v10 = 0;
  v11 = 0;
  v56 = v4;
  v12 = 0i64;
  v51 = 0i64;
  v52 = 0;
  if ( v6 >= 4 )
  {
    v13 = plane->v[1];
    v14 = plane->v[0];
    v15 = plane->v[3];
    v55 = v5;
    v16 = plane->v[2];
    v17 = &inPoints[1].xyz.v[2];
    v11 = 4 * ((unsigned __int64)(v6 - 4) >> 2) + 4;
    do
    {
      v18 = (float)((float)((float)(v14 * *(v17 - 8)) + (float)(v13 * *(v17 - 7))) + (float)(v16 * *(v17 - 6))) - v15;
      *(float *)&v54[v12] = v18;
      if ( v18 <= 0.5 )
      {
        if ( v18 >= -0.5 )
        {
          v19 = v52;
          v20 = (__int64 *)&v52;
          v53[v12] = 2;
        }
        else
        {
          v19 = HIDWORD(v51);
          v20 = (__int64 *)((char *)&v51 + 4);
          v53[v12] = 1;
        }
      }
      else
      {
        v19 = v51;
        v20 = &v51;
        v53[v12] = 0;
      }
      v21 = (float)((float)((float)(v14 * *(v17 - 2)) + (float)(v13 * *(v17 - 1))) + (float)(v16 * *v17)) - v15;
      *(float *)&v54[v12 + 1] = v21;
      *(_DWORD *)v20 = v19 + 1;
      if ( v21 <= 0.5 )
      {
        if ( v21 >= -0.5 )
        {
          v22 = v52;
          v23 = (__int64 *)&v52;
          v53[v12 + 1] = 2;
        }
        else
        {
          v22 = HIDWORD(v51);
          v23 = (__int64 *)((char *)&v51 + 4);
          v53[v12 + 1] = 1;
        }
      }
      else
      {
        v22 = v51;
        v23 = &v51;
        v53[v12 + 1] = 0;
      }
      v24 = (float)((float)((float)(v14 * v17[4]) + (float)(v13 * v17[5])) + (float)(v16 * v17[6])) - v15;
      *(float *)&v54[v12 + 2] = v24;
      *(_DWORD *)v23 = v22 + 1;
      if ( v24 <= 0.5 )
      {
        if ( v24 >= -0.5 )
        {
          v25 = v52;
          v26 = (__int64 *)&v52;
          v53[v12 + 2] = 2;
        }
        else
        {
          v25 = HIDWORD(v51);
          v26 = (__int64 *)((char *)&v51 + 4);
          v53[v12 + 2] = 1;
        }
      }
      else
      {
        v25 = v51;
        v26 = &v51;
        v53[v12 + 2] = 0;
      }
      v27 = (float)((float)((float)(v14 * v17[10]) + (float)(v13 * v17[11])) + (float)(v16 * v17[12])) - v15;
      *(float *)&v54[v12 + 3] = v27;
      *(_DWORD *)v26 = v25 + 1;
      if ( v27 <= 0.5 )
      {
        if ( v27 >= -0.5 )
        {
          v28 = v52;
          v29 = (__int64 *)&v52;
          v53[v12 + 3] = 2;
        }
        else
        {
          v28 = HIDWORD(v51);
          v29 = (__int64 *)((char *)&v51 + 4);
          v53[v12 + 3] = 1;
        }
      }
      else
      {
        v28 = v51;
        v29 = &v51;
        v53[v12 + 3] = 0;
      }
      v12 += 4i64;
      v17 += 24;
      *(_DWORD *)v29 = v28 + 1;
    }
    while ( v12 < v6 - 3 );
  }
  if ( v12 < v6 )
  {
    v30 = plane->v[1];
    v31 = plane->v[0];
    v32 = plane->v[2];
    v33 = plane->v[3];
    v34 = &inPoints[v12].xyz.v[2];
    v11 += v6 - v12;
    do
    {
      v35 = (float)((float)((float)(v31 * *(v34 - 2)) + (float)(v30 * *(v34 - 1))) + (float)(v32 * *v34)) - v33;
      *(float *)&v54[v12] = v35;
      if ( v35 <= 0.5 )
      {
        if ( v35 >= -0.5 )
        {
          v36 = v52;
          v37 = (__int64 *)&v52;
          v53[v12] = 2;
        }
        else
        {
          v36 = HIDWORD(v51);
          v37 = (__int64 *)((char *)&v51 + 4);
          v53[v12] = 1;
        }
      }
      else
      {
        v36 = v51;
        v37 = &v51;
        v53[v12] = 0;
      }
      ++v12;
      v34 += 6;
      *(_DWORD *)v37 = v36 + 1;
    }
    while ( v12 < v6 );
  }
  v38 = v53[0];
  v54[v11] = v54[0];
  v53[v11] = v38;
  if ( !(_DWORD)v51 )
    return 0i64;
  if ( !HIDWORD(v51) )
  {
    memmove_0(outPoints, inPoints, 24 * v6);
    return (unsigned int)v6;
  }
  v40 = 0;
  if ( (int)v6 > 0 )
  {
    v41 = &inPoints->vertWeights.v[2];
    v42 = 0i64;
    do
    {
      v43 = v53[v42];
      if ( v43 == 2 )
      {
        if ( v10 >= 9 )
        {
          LODWORD(v50) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 102, ASSERT_TYPE_ASSERT, "( ( outPointCount < 3 + 6 ) )", "( outPointCount ) = %i", v50) )
            __debugbreak();
        }
        *(_OWORD *)outPoints->xyz.v = *(_OWORD *)(v41 - 5);
        *(double *)&outPoints->vertWeights.y = *(double *)(v41 - 1);
      }
      else
      {
        if ( !v43 )
        {
          if ( v10 >= 9 )
          {
            LODWORD(v50) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 110, ASSERT_TYPE_ASSERT, "( ( outPointCount < 3 + 6 ) )", "( outPointCount ) = %i", v50) )
              __debugbreak();
          }
          *(_OWORD *)outPoints->xyz.v = *(_OWORD *)(v41 - 5);
          ++v10;
          *(double *)&outPoints->vertWeights.y = *(double *)(v41 - 1);
          ++outPoints;
        }
        v44 = v53[v42 + 1];
        if ( v44 == 2 || v44 == v53[v42] )
          goto LABEL_61;
        if ( v10 >= 9 )
        {
          LODWORD(v50) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 119, ASSERT_TYPE_ASSERT, "( ( outPointCount < 3 + 6 ) )", "( outPointCount ) = %i", v50) )
            __debugbreak();
        }
        v45 = *(float *)&v54[v42];
        v46 = *(float *)&v54[v42 + 1];
        v47 = v45;
        if ( v45 == v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 120, ASSERT_TYPE_ASSERT, "( ( dists[pointIndex] != dists[pointIndex + 1] ) )", "( dists[pointIndex] ) = %g", v45) )
        {
          __debugbreak();
          v47 = *(float *)&v54[v42];
        }
        v48 = v47 / (float)(v47 - v46);
        v49 = (v40 + 1) % (int)v6;
        outPoints->xyz.v[0] = (float)((float)(inPoints[v49].xyz.v[0] - *(v41 - 5)) * v48) + *(v41 - 5);
        outPoints->xyz.v[1] = (float)((float)(inPoints[v49].xyz.v[1] - *(v41 - 4)) * v48) + *(v41 - 4);
        outPoints->xyz.v[2] = (float)((float)(inPoints[v49].xyz.v[2] - *(v41 - 3)) * v48) + *(v41 - 3);
        outPoints->vertWeights.v[0] = (float)((float)(inPoints[v49].vertWeights.v[0] - *(v41 - 2)) * v48) + *(v41 - 2);
        outPoints->vertWeights.v[1] = (float)((float)(inPoints[v49].vertWeights.v[1] - *(v41 - 1)) * v48) + *(v41 - 1);
        outPoints->vertWeights.v[2] = (float)((float)(inPoints[v49].vertWeights.v[2] - *v41) * v48) + *v41;
      }
      ++v10;
      ++outPoints;
LABEL_61:
      ++v40;
      ++v42;
      v41 += 6;
    }
    while ( v40 < (int)v6 );
  }
  return (unsigned int)v10;
}

/*
==============
R_GetMarkFragmentClipPlanes
==============
*/
void R_GetMarkFragmentClipPlanes(const Sphere *sphere, const tmat33_t<vec3_t> *axis, vec4_t (*planes)[6])
{
  int v3; 
  bool v4; 
  float *v5; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  __int64 v15; 

  v3 = 0;
  v4 = 1;
  v5 = &axis->m[0].v[2];
  do
  {
    if ( !v4 )
    {
      LODWORD(v15) = 3;
      LODWORD(v14) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v8 = *(v5 - 2);
    (*planes)[0].v[0] = v8;
    v9 = *(v5 - 1);
    (*planes)[0].v[1] = v9;
    v10 = *v5;
    (*planes)[0].v[2] = *v5;
    (*planes)[0].v[3] = (float)((float)((float)(v9 * sphere->origin.v[1]) + (float)(v8 * sphere->origin.v[0])) + (float)(v10 * sphere->origin.v[2])) - sphere->radius;
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v15) = 3;
      LODWORD(v14) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    LODWORD(v11) = *((_DWORD *)v5 - 2) ^ _xmm;
    (*planes)[1].v[0] = v11;
    LODWORD(v12) = *((_DWORD *)v5 - 1) ^ _xmm;
    (*planes)[1].v[1] = v12;
    LODWORD(v13) = *(_DWORD *)v5 ^ _xmm;
    (*planes)[1].v[2] = v13;
    (*planes)[1].v[3] = (float)((float)((float)(v12 * sphere->origin.v[1]) + (float)(v11 * sphere->origin.v[0])) + (float)(v13 * sphere->origin.v[2])) - sphere->radius;
    planes = (vec4_t (*)[6])((char *)planes + 32);
    ++v3;
    v5 += 3;
    v4 = (unsigned int)v3 < 3;
  }
  while ( v3 < 3 );
}

/*
==============
R_MarkFragments_AddBModel
==============
*/
bool R_MarkFragments_AddBModel(MarkInfo *markInfo, GfxBrushModel *brushModel, cpose_t *pose, unsigned __int16 entityIndex)
{
  __int64 sceneBModelCollidedCount; 
  bool result; 
  __int64 v7; 

  sceneBModelCollidedCount = markInfo->sceneBModelCollidedCount;
  if ( (_DWORD)sceneBModelCollidedCount == 32 )
    return 0;
  v7 = sceneBModelCollidedCount;
  result = 1;
  markInfo->sceneBModelsCollided[v7].brushModel = brushModel;
  markInfo->sceneBModelsCollided[v7].pose = pose;
  markInfo->sceneBModelsCollided[v7].entnum = entityIndex;
  ++markInfo->sceneBModelCollidedCount;
  return result;
}

/*
==============
R_MarkFragments_AddDObj
==============
*/
bool R_MarkFragments_AddDObj(MarkInfo *markInfo, DObj *dObj, cpose_t *pose, unsigned __int16 entityIndex)
{
  __int64 sceneDObjCollidedCount; 
  bool result; 
  __int64 v7; 

  sceneDObjCollidedCount = markInfo->sceneDObjCollidedCount;
  if ( (_DWORD)sceneDObjCollidedCount == 32 )
    return 0;
  v7 = sceneDObjCollidedCount;
  result = 1;
  markInfo->sceneDObjsCollided[v7].dObj = dObj;
  markInfo->sceneDObjsCollided[v7].pose = pose;
  markInfo->sceneDObjsCollided[v7].entnum = entityIndex;
  ++markInfo->sceneDObjCollidedCount;
  return result;
}

/*
==============
R_MarkFragments_AddDynEnt
==============
*/
bool R_MarkFragments_AddDynEnt(MarkInfo *markInfo, unsigned int dynEntityId)
{
  __int64 dynEntsCollidedCount; 
  bool result; 

  dynEntsCollidedCount = markInfo->dynEntsCollidedCount;
  if ( (_DWORD)dynEntsCollidedCount == 1 )
    return 0;
  markInfo->dynEntsCollided[dynEntsCollidedCount].dynEntId = dynEntityId;
  result = 1;
  ++markInfo->dynEntsCollidedCount;
  return result;
}

/*
==============
R_MarkFragments_AddViewModelDObj
==============
*/
bool R_MarkFragments_AddViewModelDObj(MarkInfo *markInfo, DObj *dObj, cpose_t *pose)
{
  __int64 viewmodelDObjsCollidedCount; 
  bool result; 
  __int64 v5; 

  viewmodelDObjsCollidedCount = markInfo->viewmodelDObjsCollidedCount;
  if ( (_DWORD)viewmodelDObjsCollidedCount == 1 )
    return 0;
  v5 = 3 * viewmodelDObjsCollidedCount + 231;
  *((_QWORD *)&markInfo->collInfo + v5) = dObj;
  *((_WORD *)&markInfo->localOrigin.z + 4 * v5) = 0;
  *(_QWORD *)&markInfo->localOrigin.v[2 * v5] = pose;
  result = 1;
  ++markInfo->viewmodelDObjsCollidedCount;
  return result;
}

/*
==============
R_MarkFragments_AnimatedXModel
==============
*/
void R_MarkFragments_AnimatedXModel(MarkInfo *markInfo, const XModel *model, unsigned int modelLod, const DObjAnimMat *poseBone, unsigned __int8 modelBoneIndex, GfxMarkContext *markContext)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  const XModelLodInfo *LodInfo; 
  __int64 v18; 
  DObjAnimMat *baseMat; 
  Material *const *Skins; 
  bool v21; 
  char v22; 
  bool v23; 
  __int64 v24; 
  XSurface *v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  BOOL v35; 
  BOOL v36; 
  XSurface *surfaces; 
  Material *const *v38; 
  MarkInfo *v39; 
  GfxMarkContext *v40; 
  Bounds bounds; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 

  v39 = markInfo;
  v40 = markContext;
  Profile_Begin(239);
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, modelLod);
  if ( (!LodInfo->surfs || !Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 611, ASSERT_TYPE_ASSERT, "(XModelIsLodUsable( model, modelLod ))", "%s\n\tModel not usable: %s lod %u", "XModelIsLodUsable( model, modelLod )", model->name, modelLod) )
    __debugbreak();
  v18 = XModelGetSurfaces(model, &surfaces, modelLod);
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  baseMat = model->baseMat;
  Skins = XModelGetSkins(model, modelLod);
  markContext->lmapIndex = modelBoneIndex;
  v21 = !markInfo->boltOffsetValid;
  v38 = Skins;
  if ( v21 )
    R_MarkFragments_TransformMarkToModelSpace(markInfo, poseBone, &baseMat[modelBoneIndex]);
  else
    R_MarkFragments_TransformMarkToModelSpaceBolted(markInfo, &baseMat[modelBoneIndex]);
  v22 = 0;
  v23 = 0;
  Bounds_ForOBB(&bounds, &markInfo->localOrigin, (const vec3_t *)&markInfo->markSize, &markInfo->localTexCoordAxisX, &markInfo->localTexCoordAxisY, &markInfo->localTexCoordAxisZ);
  v24 = v18;
  if ( (_DWORD)v18 )
  {
    v25 = surfaces;
    v26 = (__int64)v38;
    v27 = 0i64;
    v48 = v6;
    v28 = 0i64;
    v47 = v7;
    v29 = bounds.halfSize.v[2];
    v46 = v8;
    v30 = bounds.halfSize.v[1];
    v45 = v9;
    v31 = bounds.halfSize.v[0];
    v44 = v10;
    v32 = bounds.midPoint.v[2];
    v43 = v11;
    v33 = bounds.midPoint.v[1];
    v42 = v12;
    v34 = bounds.midPoint.v[0];
    do
    {
      if ( v23 )
        break;
      if ( (*(_DWORD *)(*(_QWORD *)(v26 + 8 * v27) + 12i64) & 0x20) == 0 )
      {
        if ( &v25[v28] == (XSurface *)-144i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
          __debugbreak();
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25[v28].surfBounds.midPoint.v[0] - v34) & _xmm) <= (float)(v31 + v25[v28].surfBounds.halfSize.v[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v25[v28].surfBounds.midPoint.v[1] - v33) & _xmm) <= (float)(v30 + v25[v28].surfBounds.halfSize.v[1]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v25[v28].surfBounds.midPoint.v[2] - v32) & _xmm) <= (float)(v29 + v25[v28].surfBounds.halfSize.v[2]) )
        {
          v22 = 1;
          v23 = (v25[v28].flags & 2) != 0;
        }
      }
      ++v27;
      ++v28;
    }
    while ( v27 != v24 );
    if ( v22 )
    {
      LOBYTE(v36) = v23;
      LOBYTE(v35) = 0;
      v39->callback(v39->callbackContext, v40, &v39->localOrigin, &v39->localTexCoordAxisX, &v39->localTexCoordAxisY, &v39->localTexCoordAxisZ, v35, v36);
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_MarkFragments_Begin
==============
*/
void R_MarkFragments_Begin(MarkInfo *markInfo, MarkFragmentsAgainstEnum markAgainst, const tmat33_t<vec3_t> *axis, const vec3_t *viewOffset, Material *material, Material *displacementMaterial, bool markGivenModelsOnly, bool markDynEnt, int viewmodelClientIndex)
{
  tmat33_t<vec3_t> *p_axis; 
  vec4_t *planes; 
  int v14; 
  float *v15; 
  float v16; 
  int v17; 
  bool v18; 
  const R_CollInfo *collInfo; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 v26; 
  __int64 v27; 

  p_axis = &markInfo->axis;
  AxisCopy(axis, &markInfo->axis);
  planes = markInfo->planes;
  markInfo->viewOffset.v[0] = viewOffset->v[0];
  v14 = 0;
  markInfo->viewOffset.v[1] = viewOffset->v[1];
  v15 = &p_axis->m[0].v[2];
  v16 = viewOffset->v[2];
  v17 = 0;
  markInfo->viewOffset.v[2] = v16;
  v18 = 1;
  collInfo = markInfo->collInfo;
  markInfo->material = material;
  markInfo->viewmodelClientIndex = viewmodelClientIndex;
  markInfo->markAgainst = markAgainst;
  do
  {
    if ( !v18 )
    {
      LODWORD(v27) = 3;
      LODWORD(v26) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    v20 = *(v15 - 2);
    planes->v[0] = v20;
    v21 = *(v15 - 1);
    planes->v[1] = v21;
    v22 = *v15;
    planes->v[2] = *v15;
    planes->v[3] = (float)((float)((float)(v21 * collInfo->sphere.origin.v[1]) + (float)(v20 * collInfo->sphere.origin.v[0])) + (float)(v22 * collInfo->sphere.origin.v[2])) - collInfo->sphere.radius;
    if ( (unsigned int)v17 >= 3 )
    {
      LODWORD(v27) = 3;
      LODWORD(v26) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    LODWORD(v23) = *((_DWORD *)v15 - 2) ^ _xmm;
    planes[1].v[0] = v23;
    LODWORD(v24) = *((_DWORD *)v15 - 1) ^ _xmm;
    planes[1].v[1] = v24;
    LODWORD(v25) = *(_DWORD *)v15 ^ _xmm;
    planes[1].v[2] = v25;
    planes[1].v[3] = (float)((float)((float)(v24 * collInfo->sphere.origin.v[1]) + (float)(v23 * collInfo->sphere.origin.v[0])) + (float)(v25 * collInfo->sphere.origin.v[2])) - collInfo->sphere.radius;
    planes += 2;
    ++v17;
    v15 += 3;
    v18 = (unsigned int)v17 < 3;
  }
  while ( v17 < 3 );
  if ( markAgainst )
  {
    if ( markAgainst != MARK_FRAGMENTS_AGAINST_MODELS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1173, ASSERT_TYPE_ASSERT, "(markAgainst == MARK_FRAGMENTS_AGAINST_MODELS)", (const char *)&queryFormat, "markAgainst == MARK_FRAGMENTS_AGAINST_MODELS") )
      __debugbreak();
    markInfo->sceneDObjCollidedCount = 0;
    markInfo->viewmodelDObjsCollidedCount = 0;
    markInfo->dynEntsCollidedCount = 0;
    if ( !markGivenModelsOnly )
      v14 = R_SphereStaticModels(markInfo->collInfo, (int (__fastcall *)(int, void *))R_AllowSmodelMarks, NULL, markInfo->smodelsCollided, 0x20u);
    markInfo->smodelCollidedCount = v14;
    if ( v14 == 32 )
      R_WarnOncePerFrame(R_WARN_MARK_SMODEL_COLLIDED_LIMIT);
  }
  else
  {
    markInfo->sceneBModelCollidedCount = 0;
  }
}

/*
==============
R_MarkFragments_BrushSurface
==============
*/
char R_MarkFragments_BrushSurface(MarkInfo *markInfo, GfxMarkContext *markContext, const vec4_t *clipPlanes, const vec3_t *markDir, const GfxSurface *surface)
{
  const vec3_t *v5; 
  GfxBackEndData *v6; 
  unsigned __int64 transientZone; 
  unsigned int v8; 
  GfxBackEndData *v9; 
  GfxWorldDrawVerts *v10; 
  unsigned __int8 *v11; 
  int v12; 
  unsigned __int16 *v13; 
  __int64 v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned int v25; 
  float *v26; 
  unsigned __int16 *v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  int v31; 
  int i; 
  __int64 v33; 
  int v34; 
  __int64 v36; 
  __int64 v37; 
  FxWorldMarkPoint inPoints[18]; 

  v5 = markDir;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 221, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v6 = frontEndDataOut;
  transientZone = surface->transientZone;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (unsigned int)transientZone >= 0x600 )
  {
    LODWORD(v36) = transientZone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v36, 1536) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (transientZone & 0x1F)) & v6->transientVisibility.array[transientZone >> 5]) == 0 )
    return 0;
  v8 = surface->transientZone;
  v9 = frontEndDataOut;
  if ( v8 >= frontEndDataOut->transientDrawContext.zoneCount )
  {
    LODWORD(v37) = frontEndDataOut->transientDrawContext.zoneCount;
    LODWORD(v36) = surface->transientZone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v36, v37) )
      __debugbreak();
  }
  v10 = v9->transientDrawContext.drawVertsPtr[(unsigned __int16)v8];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 232, ASSERT_TYPE_ASSERT, "(worldDrawVerts)", (const char *)&queryFormat, "worldDrawVerts") )
    __debugbreak();
  v11 = &v10->posData[surface->tris.posOffset];
  if ( surface->tris.baseIndex + 3 * surface->tris.triCount > v10->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 235, ASSERT_TYPE_ASSERT, "( triSurf->baseIndex + 3 * triSurf->triCount ) <= ( worldDrawVerts->indexCount )", "%s <= %s\n\t%u, %u", "triSurf->baseIndex + 3 * triSurf->triCount", "worldDrawVerts->indexCount", surface->tris.baseIndex + 3 * surface->tris.triCount, v10->indexCount) )
    __debugbreak();
  v12 = 0;
  v13 = &v10->indices[surface->tris.baseIndex];
  if ( !surface->tris.triCount )
    return 0;
  while ( 1 )
  {
    v14 = *v13;
    v15 = *(float *)&v11[12 * v14] - *(float *)&v11[12 * v13[1]];
    v16 = *(float *)&v11[12 * v14 + 4] - *(float *)&v11[12 * v13[1] + 4];
    v17 = *(float *)&v11[12 * v14 + 8] - *(float *)&v11[12 * v13[1] + 8];
    v18 = *(float *)&v11[12 * v13[2]] - *(float *)&v11[12 * v13[1]];
    v19 = *(float *)&v11[12 * v13[2] + 4] - *(float *)&v11[12 * v13[1] + 4];
    v20 = *(float *)&v11[12 * v13[2] + 8] - *(float *)&v11[12 * v13[1] + 8];
    v21 = (float)(v20 * v16) - (float)(v19 * v17);
    v22 = (float)(v18 * v17) - (float)(v20 * v15);
    v23 = (float)(v19 * v15) - (float)(v18 * v16);
    v24 = (float)((float)(v22 * v5->v[1]) + (float)(v21 * v5->v[0])) + (float)(v23 * v5->v[2]);
    if ( v24 >= 0.0 && (float)(v24 * v24) >= (float)((float)((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23)) * 0.0076000001) )
      break;
LABEL_35:
    ++v12;
    v13 += 3;
    if ( v12 >= surface->tris.triCount )
      return 0;
  }
  v25 = 0;
  v26 = &inPoints[0].xyz.v[2];
  v27 = v13;
  do
  {
    v28 = 3i64 * *v27;
    *(v26 - 2) = *(float *)&v11[12 * *v27];
    *(v26 - 1) = *(float *)&v11[4 * v28 + 4];
    *v26 = *(float *)&v11[4 * v28 + 8];
    *(_QWORD *)(v26 + 1) = 0i64;
    v26[3] = 0.0;
    v29 = (int)v25;
    ++v27;
    ++v25;
    v26[v29 + 1] = 1.0;
    v26 += 6;
  }
  while ( v25 < 3 );
  v30 = 0;
  v31 = 3;
  for ( i = 0; i < 6; ++i )
  {
    v33 = 0i64;
    if ( !v30 )
      v33 = 9i64;
    v34 = R_ChopWorldPolyBehindPlane(v31, &inPoints[9 * v30], &inPoints[v33], &clipPlanes[i]);
    v31 = v34;
    if ( !v34 )
      goto $cont;
    if ( v34 > 9 )
    {
      LODWORD(v36) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 253, ASSERT_TYPE_ASSERT, "( ( fragmentPointCount <= 3 + 6 ) )", "( fragmentPointCount ) = %i", v36) )
        __debugbreak();
    }
    v30 ^= 1u;
  }
  if ( v31 <= 3 )
  {
$cont:
    v5 = markDir;
    goto LABEL_35;
  }
  return 1;
}

/*
==============
R_MarkFragments_DynEnt
==============
*/
void R_MarkFragments_DynEnt(MarkInfo *markInfo, const XModel *model, unsigned int modelLod, const GfxPlacement *poseBone, GfxMarkContext *markContext)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  const XModelLodInfo *LodInfo; 
  Material *const *Skins; 
  float v17; 
  __int64 v18; 
  float v19; 
  char v20; 
  bool v21; 
  XSurface *v22; 
  __int64 v23; 
  __int64 v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  BOOL v31; 
  BOOL v32; 
  int v33; 
  XSurface *surfaces; 
  Material *const *v35; 
  MarkInfo *v36; 
  GfxMarkContext *v37; 
  Bounds outInvQuat; 
  vec3_t quat; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 

  v36 = markInfo;
  v37 = markContext;
  *(_QWORD *)quat.v = poseBone;
  Profile_Begin(239);
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, modelLod);
  if ( (!LodInfo->surfs || !Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 937, ASSERT_TYPE_ASSERT, "(XModelIsLodUsable( model, modelLod ))", "%s\n\tModel not usable: %s lod %u", "XModelIsLodUsable( model, modelLod )", model->name, modelLod) )
    __debugbreak();
  v33 = XModelGetSurfaces(model, &surfaces, modelLod);
  Skins = XModelGetSkins(model, modelLod);
  v17 = markInfo->axis.m[0].v[0];
  v18 = 0i64;
  v35 = Skins;
  markContext->lmapIndex = 0;
  if ( ((LODWORD(v17) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 945, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 946, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->axis.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 947, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] )") )
    __debugbreak();
  if ( markInfo->boltOffsetValid )
  {
    v19 = markInfo->boltOffsetPos.v[2];
    *(double *)markInfo->localOrigin.v = *(double *)markInfo->boltOffsetPos.v;
    markInfo->localOrigin.v[2] = v19;
    *(double *)markInfo->localTexCoordAxisX.v = *(double *)markInfo->axis.row1.v;
    markInfo->localTexCoordAxisX.v[2] = markInfo->axis.m[1].v[2];
    *(double *)markInfo->localTexCoordAxisY.v = *(double *)markInfo->axis.row2.v;
    markInfo->localTexCoordAxisY.v[2] = markInfo->axis.m[2].v[2];
    *(double *)markInfo->localTexCoordAxisZ.v = *(double *)markInfo->axis.m[0].v;
    markInfo->localTexCoordAxisZ.v[2] = markInfo->axis.m[0].v[2];
  }
  else
  {
    QuatTrans_Inverse(*(const vec4_t **)quat.v, (const vec3_t *)(*(_QWORD *)quat.v + 16i64), (vec4_t *)&outInvQuat, &quat);
    QuatTrans_TransformPoint((const vec4_t *)&outInvQuat, &quat, &markInfo->collInfo->sphere.origin, &markInfo->localOrigin);
    QuatTransform((const vec4_t *)&outInvQuat, &markInfo->axis.m[1], &markInfo->localTexCoordAxisX);
    QuatTransform((const vec4_t *)&outInvQuat, &markInfo->axis.m[2], &markInfo->localTexCoordAxisY);
    QuatTransform((const vec4_t *)&outInvQuat, markInfo->axis.m, &markInfo->localTexCoordAxisZ);
  }
  if ( ((LODWORD(markInfo->localTexCoordAxisX.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisX.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisX.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 969, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->localTexCoordAxisY.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisY.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisY.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 970, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->localTexCoordAxisZ.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisZ.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisZ.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 971, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] )") )
    __debugbreak();
  v20 = 0;
  v21 = 0;
  Bounds_ForOBB(&outInvQuat, &markInfo->localOrigin, (const vec3_t *)&markInfo->markSize, &markInfo->localTexCoordAxisX, &markInfo->localTexCoordAxisY, &markInfo->localTexCoordAxisZ);
  if ( v33 )
  {
    v22 = surfaces;
    v23 = (__int64)v35;
    v24 = 0i64;
    v46 = v5;
    v45 = v6;
    v25 = outInvQuat.halfSize.v[2];
    v44 = v7;
    v26 = outInvQuat.halfSize.v[1];
    v43 = v8;
    v27 = outInvQuat.halfSize.v[0];
    v42 = v9;
    v28 = outInvQuat.midPoint.v[2];
    v41 = v10;
    v29 = outInvQuat.midPoint.v[1];
    v40 = v11;
    v30 = outInvQuat.midPoint.v[0];
    do
    {
      if ( v21 )
        break;
      if ( (*(_DWORD *)(*(_QWORD *)(v23 + 8 * v18) + 12i64) & 0x20) == 0 )
      {
        if ( &v22[v24] == (XSurface *)-144i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
          __debugbreak();
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22[v24].surfBounds.midPoint.v[0] - v30) & _xmm) <= (float)(v27 + v22[v24].surfBounds.halfSize.v[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v22[v24].surfBounds.midPoint.v[1] - v29) & _xmm) <= (float)(v26 + v22[v24].surfBounds.halfSize.v[1]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v22[v24].surfBounds.midPoint.v[2] - v28) & _xmm) <= (float)(v25 + v22[v24].surfBounds.halfSize.v[2]) )
        {
          v20 = 1;
          v21 = (v22[v24].flags & 2) != 0;
        }
      }
      ++v18;
      ++v24;
    }
    while ( v18 != v33 );
    if ( v20 )
    {
      LOBYTE(v32) = v21;
      LOBYTE(v31) = 0;
      v36->callback(v36->callbackContext, v37, &v36->localOrigin, &v36->localTexCoordAxisX, &v36->localTexCoordAxisY, &v36->localTexCoordAxisZ, v31, v32);
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_MarkFragments_EntBrushes
==============
*/
char R_MarkFragments_EntBrushes(MarkInfo *markInfo)
{
  vec3_t *v2; 
  cpose_t **p_pose; 
  const cpose_t *v4; 
  __int16 v5; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v10; 
  __int64 v20; 
  char v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  Material *material; 
  const R_CollInfo *collInfo; 
  vec3_t *v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  tmat33_t<vec3_t> *p_axis; 
  float v36; 
  float v37; 
  float v38; 
  void *callbackContext; 
  BOOL v41; 
  BOOL v42; 
  __int64 sceneBModelCollidedCount; 
  tmat33_t<vec3_t> axis; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  float v48[4]; 
  int v49[4]; 
  int v50[4]; 
  char v51[4]; 
  __int16 v52; 
  vec3_t angles; 
  tmat43_t<vec3_t> out; 
  vec3_t v55; 

  sceneBModelCollidedCount = markInfo->sceneBModelCollidedCount;
  if ( markInfo->sceneBModelCollidedCount )
  {
    v2 = &markInfo->axis.m[2];
    p_pose = &markInfo->sceneBModelsCollided[0].pose;
    do
    {
      v4 = *p_pose;
      v5 = *((_WORD *)p_pose + 4);
      v51[0] = 3;
      v52 = v5;
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      angles = v4->angles;
      AnglesToAxis(&angles, &axis);
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !v4->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v4->origin.Get_origin, v4);
      FunctionPointer_origin(&v4->origin.origin.origin, (vec3_t *)&v45);
      if ( v4->isPosePrecise )
      {
        _XMM0 = v45;
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v10 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v10;
        _XMM0 = v46;
        __asm
        {
          vcvtsd2ss xmm2, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
        }
        *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v10 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v10;
        _XMM0 = v47;
        v45 = _XMM2;
        __asm
        {
          vcvtsd2ss xmm2, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
        }
        *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v10 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v10;
        v46 = _XMM2;
        __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
        v47 = _XMM2;
      }
      v20 = (__int64)*(p_pose - 1);
      v21 = 0;
      v22 = *(int *)(v20 + 84);
      v23 = v22;
      v24 = (int)v22 + *(_DWORD *)(v20 + 88);
      if ( v22 != v24 )
      {
        v25 = v22;
        while ( 1 )
        {
          material = rgp.world->surfaces.surfaces[v25].material;
          if ( (material->surfaceFlags & 0x20) == 0 )
          {
            if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 646, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
            if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 647, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
              __debugbreak();
            if ( (material->techniqueSet->flags & 0x20) == 0 )
              break;
          }
          ++v23;
          ++v25;
          if ( v23 == v24 )
            goto LABEL_27;
        }
        v21 = 1;
LABEL_27:
        v2 = &markInfo->axis.m[2];
      }
      MatrixTranspose(&axis, (tmat33_t<vec3_t> *)&out);
      collInfo = markInfo->collInfo;
      out.m[3].v[0] = (float)((float)(COERCE_FLOAT(v45 ^ _xmm) * out.m[0].v[0]) + (float)(COERCE_FLOAT(v46 ^ _xmm) * out.m[1].v[0])) + (float)(COERCE_FLOAT(v47 ^ _xmm) * out.m[2].v[0]);
      out.m[3].v[1] = (float)((float)(COERCE_FLOAT(v45 ^ _xmm) * out.m[0].v[1]) + (float)(COERCE_FLOAT(v46 ^ _xmm) * out.m[1].v[1])) + (float)(COERCE_FLOAT(v47 ^ _xmm) * out.m[2].v[1]);
      out.m[3].v[2] = (float)((float)(COERCE_FLOAT(v45 ^ _xmm) * out.m[0].v[2]) + (float)(COERCE_FLOAT(v46 ^ _xmm) * out.m[1].v[2])) + (float)(COERCE_FLOAT(v47 ^ _xmm) * out.m[2].v[2]);
      MatrixTransformVector43(&collInfo->sphere.origin, &out, &v55);
      v28 = &markInfo->axis.m[1];
      if ( &markInfo->axis.row1 == (vec3_t *)v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v29 = markInfo->axis.m[1].v[1];
      v30 = v28->v[0];
      v31 = markInfo->axis.m[1].v[2];
      *(float *)v50 = (float)((float)(v28->v[0] * axis.m[0].v[0]) + (float)(v29 * axis.m[0].v[1])) + (float)(v31 * axis.m[0].v[2]);
      *(float *)&v50[1] = (float)((float)(v30 * axis.m[1].v[0]) + (float)(v29 * axis.m[1].v[1])) + (float)(v31 * axis.m[1].v[2]);
      *(float *)&v50[2] = (float)((float)(v30 * axis.m[2].v[0]) + (float)(v29 * axis.m[2].v[1])) + (float)(v31 * axis.m[2].v[2]);
      if ( v2 == (vec3_t *)v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v32 = v2->v[1];
      v33 = v2->v[0];
      v34 = v2->v[2];
      *(float *)v49 = (float)((float)(v2->v[0] * axis.m[0].v[0]) + (float)(v32 * axis.m[0].v[1])) + (float)(v34 * axis.m[0].v[2]);
      *(float *)&v49[1] = (float)((float)(v33 * axis.m[1].v[0]) + (float)(v32 * axis.m[1].v[1])) + (float)(v34 * axis.m[1].v[2]);
      p_axis = &markInfo->axis;
      *(float *)&v49[2] = (float)((float)(v33 * axis.m[2].v[0]) + (float)(v32 * axis.m[2].v[1])) + (float)(v34 * axis.m[2].v[2]);
      if ( &markInfo->axis == (tmat33_t<vec3_t> *)v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v36 = markInfo->axis.m[0].v[1];
      v37 = p_axis->m[0].v[0];
      v38 = markInfo->axis.m[0].v[2];
      callbackContext = markInfo->callbackContext;
      v48[0] = (float)((float)(p_axis->m[0].v[0] * axis.m[0].v[0]) + (float)(v36 * axis.m[0].v[1])) + (float)(v38 * axis.m[0].v[2]);
      v48[1] = (float)((float)(v37 * axis.m[1].v[0]) + (float)(v36 * axis.m[1].v[1])) + (float)(v38 * axis.m[1].v[2]);
      LOBYTE(v42) = 0;
      LOBYTE(v41) = v21;
      v48[2] = (float)((float)(v37 * axis.m[2].v[0]) + (float)(v36 * axis.m[2].v[1])) + (float)(v38 * axis.m[2].v[2]);
      markInfo->callback(callbackContext, (const GfxMarkContext *)v51, &v55, (const vec3_t *)v50, (const vec3_t *)v49, (const vec3_t *)v48, v41, v42);
      p_pose += 3;
      --sceneBModelCollidedCount;
    }
    while ( sceneBModelCollidedCount );
  }
  return 1;
}

/*
==============
R_MarkFragments_GatherBoneInfo
==============
*/
void R_MarkFragments_GatherBoneInfo(const DObj *dobj, const cpose_t *pose, const unsigned __int8 markBoneIndex, MarkFragments_BoneInfo *outInfo)
{
  const DObj *v5; 
  __int64 v8; 
  int v9; 
  int v10; 
  const XModel *Model; 
  unsigned int BestUsableLod; 
  unsigned int v13; 
  const XModelLodInfo *LodInfo; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  unsigned int v17; 
  DObjPartBits *v18; 
  DObj *v20; 
  unsigned int v21; 
  int v22; 
  const XModel *v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned __int8 v27; 
  __int64 numBones; 
  unsigned int v29; 
  DObj *v30; 
  DObjAnimMat *v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned __int8 index[4]; 
  int NumModels; 
  DObj *obj; 
  scr_string_t name; 
  cpose_t *posea; 
  DObjPartBits v42; 
  DObjPartBits partBits; 
  __int128 v44; 

  v5 = dobj;
  obj = (DObj *)dobj;
  posea = (cpose_t *)pose;
  Profile_Begin(238);
  v8 = 0i64;
  outInfo->numBones = 0;
  NumModels = DObjGetNumModels(v5);
  v9 = 0;
  v10 = 0;
  if ( !NumModels )
    goto LABEL_50;
  while ( 1 )
  {
    Model = DObjGetModel(v5, v10);
    BestUsableLod = XModelGetBestUsableLod(Model, 0, 0);
    v13 = BestUsableLod;
    if ( BestUsableLod > 6 )
    {
      LODWORD(v36) = BestUsableLod;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 670, ASSERT_TYPE_ASSERT, "(modelLod <= XMODEL_LOD_CULLED_OUT)", "%s\n\t%s %u", "modelLod <= XMODEL_LOD_CULLED_OUT", Model->name, v36) )
        __debugbreak();
    }
    if ( v13 < 6 )
      break;
    v9 += Model->numBones;
LABEL_16:
    v5 = obj;
    if ( ++v10 == NumModels )
      goto LABEL_50;
  }
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(Model, v13);
  if ( !LodInfo->surfs || !Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
  {
    LODWORD(v36) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 678, ASSERT_TYPE_ASSERT, "(XModelIsLodUsable( model, modelLod ))", "%s\n\tModel not usable: %s lod %u", "XModelIsLodUsable( model, modelLod )", Model->name, v36) )
      __debugbreak();
  }
  if ( markBoneIndex >= v9 + Model->numBones )
  {
    v9 += Model->numBones;
    goto LABEL_16;
  }
  if ( markBoneIndex >= v9 )
  {
    v15 = truncate_cast<unsigned char,int>(markBoneIndex - v9);
    v16 = v15;
    if ( v15 >= Model->numBones )
    {
      LODWORD(v34) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 694, ASSERT_TYPE_ASSERT, "( ( modelBoneIndx < model->numBones ) )", "( modelBoneIndx ) = %u", v34) )
        __debugbreak();
    }
    name = Model->boneNames[v16];
    if ( name )
    {
      v17 = 0;
      v44 = _XMM6;
      v18 = &v42;
      __asm { vpxor   xmm6, xmm6, xmm6 }
      do
      {
        *(_OWORD *)v18->array = _XMM6;
        v18 = (DObjPartBits *)((char *)v18 + 16);
        ++v17;
      }
      while ( v17 < 2 );
      v20 = obj;
      DObjLock(obj);
      DObjGetHidePartBits(obj, &partBits);
      v21 = 0;
      v22 = 0;
      do
      {
        v23 = DObjGetModel(v20, v22);
        v24 = XModelGetBestUsableLod(v23, 0, 0);
        v25 = v24;
        if ( v24 > 6 )
        {
          LODWORD(v36) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 758, ASSERT_TYPE_ASSERT, "(modelLod <= XMODEL_LOD_CULLED_OUT)", "%s\n\t%s %u", "modelLod <= XMODEL_LOD_CULLED_OUT", v23->name, v36) )
            __debugbreak();
        }
        if ( v25 < 6 && XModelGetBoneIndex(v23, name, v21, index) )
        {
          v26 = DObjNumBones(v20);
          if ( index[0] >= v26 )
          {
            LODWORD(v35) = DObjNumBones(v20);
            LODWORD(v34) = index[0];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 772, ASSERT_TYPE_ASSERT, "(unsigned)( dobjBoneIndex ) < (unsigned)( DObjNumBones( dobj ) )", "dobjBoneIndex doesn't index DObjNumBones( dobj )\n\t%i not in [0, %i)", v34, v35) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (index[0] & 0x1F)) & partBits.array[(unsigned __int64)index[0] >> 5]) == 0 )
          {
            v27 = truncate_cast<unsigned char,int>(index[0] - v21);
            if ( outInfo->numBones >= 0x20 )
            {
              LODWORD(v35) = 32;
              LODWORD(v34) = outInfo->numBones;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 783, ASSERT_TYPE_ASSERT, "(unsigned)( outInfo.numBones ) < (unsigned)( MarkFragments_BoneInfo::MAX_BONES )", "outInfo.numBones doesn't index MarkFragments_BoneInfo::MAX_BONES\n\t%i not in [0, %i)", v34, v35) )
                __debugbreak();
            }
            numBones = outInfo->numBones;
            if ( (_DWORD)numBones == 32 )
              goto LABEL_42;
            outInfo->submodelIndex[numBones] = v22;
            outInfo->modelBoneIndex[outInfo->numBones] = v27;
            outInfo->dobjBoneIndex[outInfo->numBones] = index[0];
            v20 = obj;
            outInfo->submodelLod[outInfo->numBones] = v25;
            v29 = index[0];
            ++outInfo->numBones;
            v42.array[(unsigned __int64)v29 >> 5] |= 0x80000000 >> (v29 & 0x1F);
          }
        }
        ++v22;
        v21 += v23->numBones;
      }
      while ( v22 != NumModels );
      LODWORD(numBones) = outInfo->numBones;
LABEL_42:
      v30 = obj;
      if ( (_DWORD)numBones )
      {
        v31 = CG_Pose_CalcDObjPoseForMark(posea, obj, &v42);
        if ( v31 )
        {
          if ( !DObjSkelAreBonesUpToDate(v30, &v42) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 815, ASSERT_TYPE_ASSERT, "(boneMtxList == 0 || DObjSkelAreBonesUpToDate( dobj, &queryPartBits ))", (const char *)&queryFormat, "boneMtxList == NULL || DObjSkelAreBonesUpToDate( dobj, &queryPartBits )") )
            __debugbreak();
          if ( outInfo->numBones )
          {
            do
            {
              v32 = outInfo->dobjBoneIndex[v8];
              v33 = (unsigned int)v8;
              v8 = (unsigned int)(v8 + 1);
              outInfo->poseBone[v33] = v31[v32];
            }
            while ( (unsigned int)v8 < outInfo->numBones );
          }
          goto LABEL_49;
        }
        DObjUnlock(v30);
        outInfo->numBones = 0;
      }
      else
      {
LABEL_49:
        DObjUnlock(v30);
      }
    }
  }
LABEL_50:
  Profile_EndInternal(NULL);
}

/*
==============
R_MarkFragments_Glass
==============
*/
char R_MarkFragments_Glass(MarkInfo *markInfo)
{
  signed __int64 v1; 
  void *v2; 
  __int64 v4; 
  unsigned int v5; 
  __int64 j; 
  GlassTri *v7; 
  __int64 v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  unsigned int v22; 
  float *v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  __int64 maxVerts; 
  BOOL triCount; 
  BOOL outGlassNormal; 
  unsigned int v35; 
  int i; 
  unsigned int pieceCount; 
  char v38[4]; 
  __int16 v39; 
  vec3_t v40; 
  FxWorldMarkPoint inPoints[18]; 
  GlassTri tris[64]; 
  vec3_t verts[256]; 
  unsigned __int16 pieceIndices[32]; 

  v2 = alloca(v1);
  v38[0] = 6;
  if ( !FX_GlassPiecesInSphere(&markInfo->collInfo->sphere, pieceIndices, 0x20u, &pieceCount) )
    return 0;
  v4 = 0i64;
  for ( i = 0; (unsigned int)v4 < pieceCount; i = v4 )
  {
    v5 = pieceIndices[v4];
    if ( (FX_GlassPieceMaterial(v5)->surfaceFlags & 0x20) == 0 )
    {
      if ( !FX_GlassTrisInPiece(v5, markInfo->axis.m, tris, 0x40u, verts, 0x100u, &v35, &v40) )
        return 0;
      if ( v35 > 0x40 )
      {
        LODWORD(maxVerts) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 382, ASSERT_TYPE_ASSERT, "( ( triCount <= ( sizeof( *array_counter( glassTris ) ) + 0 ) ) )", "( triCount ) = %i", maxVerts) )
          __debugbreak();
      }
      if ( v38[0] != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2165, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
        __debugbreak();
      v39 = v5;
      if ( v38[0] != 6 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2158, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
          __debugbreak();
        if ( (_WORD)v5 != v39 )
        {
          LODWORD(maxVerts) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2168, ASSERT_TYPE_ASSERT, "( ( glassPieceIndex == FX_GetMarkContext_GlassPieceIndex( context ) ) )", "( glassPieceIndex ) = %u", maxVerts) )
            __debugbreak();
        }
      }
      for ( j = 0i64; (unsigned int)j < v35; j = (unsigned int)(j + 1) )
      {
        v7 = &tris[j];
        v8 = v7->indices[0];
        v9 = verts[v7->indices[1]].v[0];
        v10 = verts[v7->indices[1]].v[1];
        v11 = verts[v7->indices[1]].v[2];
        v12 = verts[v8].v[0] - v9;
        v13 = verts[v8].v[1] - v10;
        v14 = verts[v8].v[2] - v11;
        v15 = verts[tris[j].indices[2]].v[0] - v9;
        v16 = verts[tris[j].indices[2]].v[1] - v10;
        v17 = verts[tris[j].indices[2]].v[2] - v11;
        v18 = (float)(v17 * v13) - (float)(v16 * v14);
        v19 = (float)(v15 * v14) - (float)(v17 * v12);
        v20 = (float)(v16 * v12) - (float)(v15 * v13);
        v21 = (float)((float)(v19 * markInfo->axis.m[0].v[1]) + (float)(v18 * markInfo->axis.m[0].v[0])) + (float)(v20 * markInfo->axis.m[0].v[2]);
        if ( v21 >= 0.0 && (float)(v21 * v21) >= (float)((float)((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) * 0.0076000001) )
        {
          v22 = 0;
          v23 = &inPoints[0].xyz.v[2];
          do
          {
            v24 = v7->indices[0];
            *(v23 - 2) = verts[v7->indices[0]].v[0];
            *(v23 - 1) = verts[v24].v[1];
            *v23 = verts[v24].v[2];
            *(_QWORD *)(v23 + 1) = 0i64;
            v23[3] = 0.0;
            v25 = (int)v22;
            v7 = (GlassTri *)((char *)v7 + 2);
            ++v22;
            v23[v25 + 1] = 1.0;
            v23 += 6;
          }
          while ( v22 < 3 );
          v26 = 0;
          v27 = 0;
          v28 = 3;
          while ( 1 )
          {
            v29 = 0i64;
            if ( !v26 )
              v29 = 9i64;
            v30 = R_ChopWorldPolyBehindPlane(v28, &inPoints[9 * v26], &inPoints[v29], &markInfo->planes[v27]);
            v28 = v30;
            if ( !v30 )
              break;
            if ( v30 > 9 )
            {
              LODWORD(maxVerts) = v30;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 406, ASSERT_TYPE_ASSERT, "( ( fragmentPointCount <= 3 + 6 ) )", "( fragmentPointCount ) = %i", maxVerts) )
                __debugbreak();
            }
            v26 ^= 1u;
            if ( ++v27 >= 6 )
            {
              if ( v28 < 3 )
              {
                LODWORD(maxVerts) = v28;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 414, ASSERT_TYPE_ASSERT, "( ( fragmentPointCount >= 3 ) )", "( fragmentPointCount ) = %i", maxVerts) )
                  __debugbreak();
              }
              LOBYTE(outGlassNormal) = 0;
              LOBYTE(triCount) = 0;
              markInfo->callback(markInfo->callbackContext, (const GfxMarkContext *)v38, (const vec3_t *)&markInfo->collInfo->sphere, &markInfo->axis.row1, &markInfo->axis.row2, (const vec3_t *)&markInfo->axis, triCount, outGlassNormal);
              goto LABEL_34;
            }
          }
        }
      }
    }
LABEL_34:
    v4 = (unsigned int)(i + 1);
  }
  return 1;
}

/*
==============
R_MarkFragments_Go
==============
*/
void R_MarkFragments_Go(MarkInfo *markInfo, void (*callback)(void *, const GfxMarkContext *, const vec3_t *, const vec3_t *, const vec3_t *, const vec3_t *, bool, bool), void *callbackContext)
{
  MarkFragmentsAgainstEnum markAgainst; 
  Material *material; 
  const R_CollInfo *collInfo; 
  __int64 v9; 
  GfxSurface *v10; 
  BOOL listCount; 
  unsigned int surfCounts; 
  GfxSurface **surfLists; 
  GfxMarkContext markContext; 
  GfxSurface *surface[256]; 

  if ( !markInfo->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1259, ASSERT_TYPE_ASSERT, "(markInfo->material)", (const char *)&queryFormat, "markInfo->material") )
    __debugbreak();
  markAgainst = markInfo->markAgainst;
  markInfo->callback = callback;
  markInfo->callbackContext = callbackContext;
  if ( markAgainst )
  {
    if ( markAgainst != MARK_FRAGMENTS_AGAINST_MODELS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1273, ASSERT_TYPE_ASSERT, "(markInfo->markAgainst == MARK_FRAGMENTS_AGAINST_MODELS)", (const char *)&queryFormat, "markInfo->markAgainst == MARK_FRAGMENTS_AGAINST_MODELS") )
      __debugbreak();
    if ( R_MarkFragments_StaticModels(markInfo) && R_MarkFragments_SceneDObjs(markInfo) && R_MarkFragments_ViewmodelDObjs(markInfo) && R_MarkFragments_Glass(markInfo) )
      R_MarkFragments_SceneDynEnts(markInfo);
  }
  else
  {
    if ( !markInfo->staticModelOrWorldBrushAdded )
    {
      material = markInfo->material;
      collInfo = markInfo->collInfo;
      markContext.modelType = 0;
      v9 = 0i64;
      surfLists = surface;
      *(_WORD *)markContext.typeSpecificIndex.modelIndex = 0;
      if ( R_SphereSurfaces(collInfo, &off_147FFF960, material, &surfLists, 0x100u, &surfCounts, 1u) )
        R_WarnOncePerFrame(R_WARN_MARK_WORLD_BRUSH_LIMIT, 256i64);
      if ( surfCounts )
      {
        while ( 1 )
        {
          v10 = surface[v9];
          if ( R_MarkFragments_BrushSurface(markInfo, &markContext, markInfo->planes, markInfo->axis.m, v10) )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= surfCounts )
            goto LABEL_13;
        }
        LOBYTE(listCount) = !Material_IsOpaque(v10->material);
        markInfo->callback(markInfo->callbackContext, &markContext, (const vec3_t *)&markInfo->collInfo->sphere, &markInfo->axis.row1, &markInfo->axis.row2, (const vec3_t *)&markInfo->axis, listCount, 0);
        markInfo->staticModelOrWorldBrushAdded = 1;
      }
    }
LABEL_13:
    R_MarkFragments_EntBrushes(markInfo);
  }
}

/*
==============
R_MarkFragments_SceneDObjs
==============
*/
char R_MarkFragments_SceneDObjs(MarkInfo *markInfo)
{
  int sceneDObjCollidedCount; 
  unsigned __int8 markBoneIndex; 
  int v4; 
  cpose_t **p_pose; 
  const DObj *v6; 
  unsigned __int16 v7; 
  __int64 v8; 
  int v9; 
  const XModel *Model; 
  GfxMarkContext *markContext; 
  GfxMarkContext *markContexta; 
  unsigned __int8 v14; 
  int v15; 
  cpose_t **v16; 
  GfxMarkContext v17; 
  MarkFragments_BoneInfo outInfo; 

  Profile_Begin(237);
  sceneDObjCollidedCount = markInfo->sceneDObjCollidedCount;
  if ( sceneDObjCollidedCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 858, ASSERT_TYPE_ASSERT, "( ( markInfo->sceneDObjCollidedCount <= 1 ) )", "( markInfo->sceneDObjCollidedCount ) = %i", markInfo->sceneDObjCollidedCount) )
    __debugbreak();
  markBoneIndex = markInfo->markBoneIndex;
  v4 = 0;
  v14 = markBoneIndex;
  v15 = 0;
  if ( sceneDObjCollidedCount )
  {
    p_pose = &markInfo->sceneDObjsCollided[0].pose;
    v16 = &markInfo->sceneDObjsCollided[0].pose;
    do
    {
      v6 = (const DObj *)*(p_pose - 1);
      v7 = *((_WORD *)p_pose + 4);
      R_MarkFragments_GatherBoneInfo(v6, *p_pose, markBoneIndex, &outInfo);
      v8 = 0i64;
      if ( outInfo.numBones )
      {
        do
        {
          v9 = outInfo.submodelIndex[v8];
          Model = DObjGetModel(v6, v9);
          if ( v9 > 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2037, ASSERT_TYPE_ASSERT, "(dobjModelIndex <= MARK_ENTMODEL_MASK_DOBJMODELINDEX)", (const char *)&queryFormat, "dobjModelIndex <= MARK_ENTMODEL_MASK_DOBJMODELINDEX") )
            __debugbreak();
          v17.surfIndex = v9;
          v17.modelType = 4;
          if ( v9 != (v9 & 0x1F) )
          {
            LODWORD(markContext) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2041, ASSERT_TYPE_ASSERT, "( ( dobjModelIndex == FX_GetMarkContext_DObjModelIndex( context ) ) )", "( dobjModelIndex ) = %i", markContext) )
              __debugbreak();
            if ( (unsigned __int8)(v17.modelType - 3) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2149, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH") )
              __debugbreak();
          }
          *(_WORD *)v17.typeSpecificIndex.modelIndex = v7;
          if ( (unsigned __int8)(v17.modelType - 3) > 1u )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2142, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH") )
              __debugbreak();
            if ( v7 != *(_WORD *)v17.typeSpecificIndex.modelIndex )
            {
              LODWORD(markContexta) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2152, ASSERT_TYPE_ASSERT, "( ( entnum == FX_GetMarkContext_EntNum( context ) ) )", "( entnum ) = %u", markContexta) )
                __debugbreak();
            }
          }
          R_MarkFragments_AnimatedXModel(markInfo, Model, outInfo.submodelLod[v8], (const DObjAnimMat *)&outInfo.submodelIndex[8 * (unsigned int)v8 - 256], outInfo.modelBoneIndex[v8], &v17);
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < outInfo.numBones );
        p_pose = v16;
        v4 = v15;
      }
      markBoneIndex = v14;
      ++v4;
      p_pose += 3;
      v15 = v4;
      v16 = p_pose;
    }
    while ( v4 != markInfo->sceneDObjCollidedCount );
  }
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
R_MarkFragments_SceneDynEnts
==============
*/
char R_MarkFragments_SceneDynEnts(MarkInfo *markInfo)
{
  unsigned int dynEntsCollidedCount; 
  int v3; 
  GfxMarkContext::<unnamed_type_typeSpecificIndex> *dynEntsCollided; 
  __int64 v5; 
  DynEntityList *DynEntityList; 
  __int64 v7; 
  __int64 localClientNum; 
  __int64 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  __int64 v12; 
  DynEntityClient *v13; 
  const XModel *activeModel; 
  unsigned int BestUsableLod; 
  unsigned int v16; 
  DynEntityPose *PoseFromClientId; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  GfxMarkContext markContext; 

  dynEntsCollidedCount = markInfo->dynEntsCollidedCount;
  if ( dynEntsCollidedCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1016, ASSERT_TYPE_ASSERT, "( ( markInfo->dynEntsCollidedCount <= ( sizeof( *array_counter( markInfo->dynEntsCollided ) ) + 0 ) ) )", "( markInfo->dynEntsCollidedCount ) = %i", markInfo->dynEntsCollidedCount) )
  {
    __debugbreak();
    dynEntsCollidedCount = markInfo->dynEntsCollidedCount;
  }
  v3 = 0;
  if ( dynEntsCollidedCount )
  {
    dynEntsCollided = (GfxMarkContext::<unnamed_type_typeSpecificIndex> *)markInfo->dynEntsCollided;
    do
    {
      markContext.typeSpecificIndex = *dynEntsCollided;
      v5 = markContext.typeSpecificIndex.dynEntId & 0x7FFFF;
      markContext.modelType = 5;
      DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)(markContext.typeSpecificIndex.dynEntId >> 19));
      if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( (unsigned int)v5 >= DynEntityList->dynEntCount[0] )
      {
        LODWORD(v20) = DynEntityList->dynEntCount[0];
        LODWORD(v19) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v7 = (__int64)&DynEntityList->dynEntDefList[0][v5];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1026, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      if ( (unsigned __int8)(*(_BYTE *)(v7 + 50) - 1) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1027, ASSERT_TYPE_ASSERT, "(dynEntDef->type == DYNENT_TYPE_SCRIPTABLEINST || dynEntDef->type == DYNENT_TYPE_SCRIPTABLEPHYSICS || dynEntDef->type == DYNENT_TYPE_CLUTTER || dynEntDef->type == DYNENT_TYPE_CLUTTER_NOSHADOW)", (const char *)&queryFormat, "dynEntDef->type == DYNENT_TYPE_SCRIPTABLEINST || dynEntDef->type == DYNENT_TYPE_SCRIPTABLEPHYSICS || dynEntDef->type == DYNENT_TYPE_CLUTTER || dynEntDef->type == DYNENT_TYPE_CLUTTER_NOSHADOW") )
        __debugbreak();
      localClientNum = markInfo->localClientNum;
      v9 = localClientNum;
      v10 = *(_WORD *)(v7 + 2 * localClientNum + 56);
      if ( v10 != 0xFFFF )
      {
        if ( (unsigned int)localClientNum >= 2 )
        {
          LODWORD(v20) = 2;
          LODWORD(v19) = markInfo->localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v11 = g_dynEntClientEntsAllocCount[v9][0];
        if ( v10 >= v11 )
        {
          LODWORD(v20) = v11;
          LODWORD(v19) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v12 = v9;
        if ( !g_dynEntClientLists[v12][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v13 = &g_dynEntClientLists[v12][0][v10];
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1036, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
          __debugbreak();
        activeModel = v13->activeModel;
        if ( v13->activeModel )
        {
          BestUsableLod = XModelGetBestUsableLod(v13->activeModel, 0, 0);
          v16 = BestUsableLod;
          if ( BestUsableLod > 6 )
          {
            LODWORD(v21) = BestUsableLod;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1045, ASSERT_TYPE_ASSERT, "(modelLod <= XMODEL_LOD_CULLED_OUT)", "%s\n\t%s %u", "modelLod <= XMODEL_LOD_CULLED_OUT", activeModel->name, v21) )
              __debugbreak();
          }
          if ( v16 < 6 )
          {
            PoseFromClientId = DynEnt_GetPoseFromClientId(markInfo->localClientNum, v10, DYNENT_BASIS_MODEL);
            R_MarkFragments_DynEnt(markInfo, activeModel, v16, &PoseFromClientId->pose, &markContext);
          }
        }
      }
      ++v3;
      ++dynEntsCollided;
    }
    while ( v3 != markInfo->dynEntsCollidedCount );
  }
  return 1;
}

/*
==============
R_MarkFragments_StaticModels
==============
*/
char R_MarkFragments_StaticModels(MarkInfo *markInfo)
{
  int v2; 
  unsigned __int16 *smodelsCollided; 
  XModel *model; 
  unsigned int BestUsableLod; 
  unsigned int v6; 
  const XModelLodInfo *LodInfo; 
  const XModelLodInfo *v8; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v11; 
  const XModelLodInfo *v12; 
  unsigned __int16 v13; 
  const XModelLodInfo *v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  __int64 v18; 
  __int64 v19; 
  _BOOL8 v20; 
  __int16 v21[4]; 

  if ( !markInfo->staticModelOrWorldBrushAdded )
  {
    v2 = 0;
    v21[0] = 2;
    if ( markInfo->smodelCollidedCount )
    {
      smodelsCollided = markInfo->smodelsCollided;
      do
      {
        model = rgp.world->smodels.models[rgp.world->smodels.collections[*smodelsCollided].smodelIndex].model;
        v21[2] = *smodelsCollided;
        v21[1] = 510;
        BestUsableLod = XModelGetBestUsableLod(model, 0, 0);
        v6 = BestUsableLod;
        if ( BestUsableLod > 6 )
        {
          LODWORD(v20) = BestUsableLod;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1103, ASSERT_TYPE_ASSERT, "(modelLod <= XMODEL_LOD_CULLED_OUT)", "%s\n\t%s %u", "modelLod <= XMODEL_LOD_CULLED_OUT", model->name, v20) )
            __debugbreak();
        }
        if ( v6 < 6 )
        {
          if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          LodInfo = XModelGetLodInfo(model, v6);
          if ( !LodInfo->surfs || !Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
          {
            LODWORD(v20) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1110, ASSERT_TYPE_ASSERT, "(XModelIsLodUsable( xmodel, modelLod ))", "%s\n\tModel not usable: %s lod %u", "XModelIsLodUsable( xmodel, modelLod )", model->name, v20) )
              __debugbreak();
          }
          if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v8 = XModelGetLodInfo(model, v6);
          if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
            __debugbreak();
          if ( v8->numsurfs )
          {
            surfIndex = v8->surfIndex;
            numsurfs = model->numsurfs;
            if ( surfIndex >= numsurfs )
            {
              LODWORD(v19) = numsurfs;
              LODWORD(v18) = surfIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v18, v19) )
                __debugbreak();
            }
            if ( v8->numsurfs + (unsigned int)v8->surfIndex > model->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
              __debugbreak();
            if ( !v8->surfs )
            {
              LODWORD(v20) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", model->name, v20) )
                __debugbreak();
            }
            if ( !v8->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
              __debugbreak();
            v11 = v8->numsurfs;
          }
          else
          {
            v11 = 0;
          }
          if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 257, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v12 = XModelGetLodInfo(model, v6);
          v13 = model->numsurfs;
          v14 = v12;
          v15 = v12->surfIndex;
          if ( v15 >= v13 )
          {
            LODWORD(v19) = v13;
            LODWORD(v18) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          v16 = 0i64;
          if ( v11 )
          {
            while ( v16 <= 256 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)&model->materialHandles[v14->surfIndex] + v16) + 12i64) & 0x20) == 0 )
              {
                LOBYTE(v20) = 0;
                LOBYTE(v19) = 0;
                markInfo->callback(markInfo->callbackContext, (const GfxMarkContext *)v21, (const vec3_t *)&markInfo->collInfo->sphere, &markInfo->axis.row1, &markInfo->axis.row2, (const vec3_t *)&markInfo->axis, v19, v20);
                markInfo->staticModelOrWorldBrushAdded = 1;
                return 1;
              }
              if ( ++v16 == v11 )
                break;
            }
          }
        }
        ++v2;
        ++smodelsCollided;
      }
      while ( v2 != markInfo->smodelCollidedCount );
    }
  }
  return 1;
}

/*
==============
R_MarkFragments_TransformMarkToModelSpace
==============
*/
char R_MarkFragments_TransformMarkToModelSpace(MarkInfo *markInfo, const DObjAnimMat *poseBone, const DObjAnimMat *baseBone)
{
  float v6; 
  DObjSkelMat skelMat; 
  DObjSkelMat v10; 
  vec3_t origin; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> v14; 
  tmat43_t<vec3_t> v15; 
  DObjAnimMat mat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> v18; 

  Profile_Begin(240);
  mat = *poseBone;
  v6 = mat.trans.v[1] + markInfo->viewOffset.v[1];
  __asm { vextractf128 xmm0, ymm0, 1 }
  mat.trans.v[0] = *(float *)&_XMM0 + markInfo->viewOffset.v[0];
  mat.trans.v[2] = mat.trans.v[2] + markInfo->viewOffset.v[2];
  mat.trans.v[1] = v6;
  LocalConvertQuatToSkelMat(&mat, &skelMat);
  LocalConvertQuatToInverseSkelMat(baseBone, &v10);
  in2.m[0].v[0] = skelMat.axis.m[0].v[0];
  in2.m[0].v[1] = skelMat.axis.m[0].v[1];
  in2.m[0].v[2] = skelMat.axis.m[0].v[2];
  in2.m[1] = skelMat.axis.m[1].xyz;
  in2.m[2] = skelMat.axis.m[2].xyz;
  in2.m[3] = skelMat.origin.xyz;
  in1.m[0].v[0] = v10.axis.m[0].v[0];
  in1.m[0].v[1] = v10.axis.m[0].v[1];
  in1.m[0].v[2] = v10.axis.m[0].v[2];
  in1.m[1] = v10.axis.m[1].xyz;
  in1.m[2] = v10.axis.m[2].xyz;
  in1.m[3] = v10.origin.xyz;
  MatrixMultiply43(&in1, &in2, &out);
  LocalConvertQuatToSkelMat(baseBone, &skelMat);
  LocalConvertQuatToInverseSkelMat(&mat, &v10);
  v15.m[0].v[1] = v10.axis.m[0].v[1];
  v15.m[0].v[0] = v10.axis.m[0].v[0];
  v15.m[1] = v10.axis.m[1].xyz;
  v15.m[0].v[2] = v10.axis.m[0].v[2];
  v15.m[2] = v10.axis.m[2].xyz;
  v15.m[3] = v10.origin.xyz;
  v14.m[0].v[1] = skelMat.axis.m[0].v[1];
  v14.m[0].v[0] = skelMat.axis.m[0].v[0];
  v14.m[1] = skelMat.axis.m[1].xyz;
  v14.m[0].v[2] = skelMat.axis.m[0].v[2];
  v14.m[2] = skelMat.axis.m[2].xyz;
  v14.m[3] = skelMat.origin.xyz;
  MatrixMultiply43(&v15, &v14, &v18);
  origin = markInfo->collInfo->sphere.origin;
  MatrixTransformVector43(&origin, &v18, &markInfo->localOrigin);
  if ( ((LODWORD(markInfo->axis.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 548, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 549, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->axis.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 550, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] )") )
    __debugbreak();
  MatrixTransposeTransformVector(&markInfo->axis.m[1], (const tmat33_t<vec3_t> *)&out, &markInfo->localTexCoordAxisX);
  MatrixTransposeTransformVector(&markInfo->axis.m[2], (const tmat33_t<vec3_t> *)&out, &markInfo->localTexCoordAxisY);
  MatrixTransposeTransformVector(markInfo->axis.m, (const tmat33_t<vec3_t> *)&out, &markInfo->localTexCoordAxisZ);
  if ( ((LODWORD(markInfo->localTexCoordAxisX.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisX.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisX.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 556, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->localTexCoordAxisY.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisY.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisY.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 557, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->localTexCoordAxisZ.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisZ.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisZ.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 558, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] )") )
    __debugbreak();
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
R_MarkFragments_TransformMarkToModelSpaceBolted
==============
*/
char R_MarkFragments_TransformMarkToModelSpaceBolted(MarkInfo *markInfo, const DObjAnimMat *baseBone)
{
  DObjSkelMat skelMat; 
  tmat33_t<vec3_t> v6; 
  float v7; 
  float v8; 
  float v9; 
  tmat43_t<vec3_t> in2; 

  Profile_Begin(240);
  if ( !markInfo->boltOffsetValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 574, ASSERT_TYPE_SANITY, "( markInfo->boltOffsetValid )", (const char *)&queryFormat, "markInfo->boltOffsetValid") )
    __debugbreak();
  LocalConvertQuatToInverseSkelMat(baseBone, &skelMat);
  v6.m[0].v[0] = skelMat.axis.m[0].v[0];
  v6.m[0].v[1] = skelMat.axis.m[0].v[1];
  v6.m[0].v[2] = skelMat.axis.m[0].v[2];
  v6.m[1] = skelMat.axis.m[1].xyz;
  v6.m[2] = skelMat.axis.m[2].xyz;
  v7 = skelMat.origin.v[0];
  v8 = skelMat.origin.v[1];
  v9 = skelMat.origin.v[2];
  LocalConvertQuatToSkelMat(baseBone, &skelMat);
  in2.m[0].v[0] = skelMat.axis.m[0].v[0];
  in2.m[0].v[1] = skelMat.axis.m[0].v[1];
  in2.m[0].v[2] = skelMat.axis.m[0].v[2];
  in2.m[1] = skelMat.axis.m[1].xyz;
  in2.m[2] = skelMat.axis.m[2].xyz;
  in2.m[3] = skelMat.origin.xyz;
  MatrixTransformVector43(&markInfo->boltOffsetPos, &in2, &markInfo->localOrigin);
  if ( ((LODWORD(markInfo->axis.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 583, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 584, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->axis.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->axis.m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 585, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] )") )
    __debugbreak();
  MatrixTransposeTransformVector(&markInfo->axis.m[1], &v6, &markInfo->localTexCoordAxisX);
  MatrixTransposeTransformVector(&markInfo->axis.m[2], &v6, &markInfo->localTexCoordAxisY);
  MatrixTransposeTransformVector(markInfo->axis.m, &v6, &markInfo->localTexCoordAxisZ);
  if ( ((LODWORD(markInfo->localTexCoordAxisX.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisX.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisX.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 591, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->localTexCoordAxisY.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisY.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisY.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 592, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] )") )
    __debugbreak();
  if ( ((LODWORD(markInfo->localTexCoordAxisZ.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisZ.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(markInfo->localTexCoordAxisZ.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 593, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] )") )
    __debugbreak();
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
R_MarkFragments_ViewmodelDObjs
==============
*/
char R_MarkFragments_ViewmodelDObjs(MarkInfo *markInfo)
{
  unsigned __int8 markBoneIndex; 
  int v3; 
  MarkInfoCollidedDObj *viewmodelDObjsCollided; 
  const DObj *dObj; 
  __int64 v6; 
  int v7; 
  const XModel *Model; 
  int viewmodelClientIndex; 
  const XModel *v10; 
  GfxMarkContext *markContext; 
  unsigned __int8 v13; 
  int v14; 
  MarkInfoCollidedDObj *v15; 
  GfxMarkContext v16; 
  MarkFragments_BoneInfo outInfo; 

  Profile_Begin(237);
  markBoneIndex = markInfo->markBoneIndex;
  v3 = 0;
  v13 = markBoneIndex;
  v14 = 0;
  if ( markInfo->viewmodelDObjsCollidedCount )
  {
    viewmodelDObjsCollided = markInfo->viewmodelDObjsCollided;
    v15 = markInfo->viewmodelDObjsCollided;
    do
    {
      dObj = viewmodelDObjsCollided->dObj;
      R_MarkFragments_GatherBoneInfo(viewmodelDObjsCollided->dObj, viewmodelDObjsCollided->pose, markBoneIndex, &outInfo);
      v6 = 0i64;
      if ( outInfo.numBones )
      {
        do
        {
          v7 = outInfo.submodelIndex[v6];
          Model = DObjGetModel(dObj, v7);
          viewmodelClientIndex = markInfo->viewmodelClientIndex;
          v10 = Model;
          if ( v7 > 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2051, ASSERT_TYPE_ASSERT, "(dobjModelIndex <= MARK_ENTMODEL_MASK_DOBJMODELINDEX)", (const char *)&queryFormat, "dobjModelIndex <= MARK_ENTMODEL_MASK_DOBJMODELINDEX") )
            __debugbreak();
          if ( viewmodelClientIndex > 3 )
          {
            LODWORD(markContext) = viewmodelClientIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2052, ASSERT_TYPE_ASSERT, "( ( viewmodelClientIndex <= (MARK_ENTMODEL_MASK_VIEWMODELCLIENT >> MARK_ENTMODEL_MASK_VIEWMODELCLIENT_OFFSET) ) )", "( viewmodelClientIndex ) = %i", markContext) )
              __debugbreak();
          }
          v16.modelType = 4;
          v16.surfIndex = v7 | (32 * (viewmodelClientIndex | 0xFC));
          if ( v7 != (v7 & 0x1F) )
          {
            LODWORD(markContext) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2059, ASSERT_TYPE_ASSERT, "( ( dobjModelIndex == FX_GetMarkContext_DObjModelIndex( context ) ) )", "( dobjModelIndex ) = %i", markContext) )
              __debugbreak();
            if ( v16.modelType != 4 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2020, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
                __debugbreak();
              if ( v16.modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2012, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
                __debugbreak();
            }
          }
          if ( (v16.surfIndex & 0x80u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2021, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_DObjIsViewmodel( context ))", (const char *)&queryFormat, "FX_GetMarkContext_DObjIsViewmodel( context )") )
            __debugbreak();
          if ( viewmodelClientIndex != ((v16.surfIndex >> 5) & 3) )
          {
            LODWORD(markContext) = viewmodelClientIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2060, ASSERT_TYPE_ASSERT, "( ( viewmodelClientIndex == FX_GetMarkContext_ViewmodelClientIndex( context ) ) )", "( viewmodelClientIndex ) = %i", markContext) )
              __debugbreak();
          }
          R_MarkFragments_AnimatedXModel(markInfo, v10, outInfo.submodelLod[v6], (const DObjAnimMat *)&outInfo.submodelIndex[8 * (unsigned int)v6 - 256], outInfo.modelBoneIndex[v6], &v16);
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < outInfo.numBones );
        viewmodelDObjsCollided = v15;
        v3 = v14;
      }
      markBoneIndex = v13;
      ++v3;
      ++viewmodelDObjsCollided;
      v14 = v3;
      v15 = viewmodelDObjsCollided;
    }
    while ( v3 != markInfo->viewmodelDObjsCollidedCount );
  }
  Profile_EndInternal(NULL);
  return 1;
}

