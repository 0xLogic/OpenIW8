/*
==============
CM_ShowClientTriggerModelCollision
==============
*/

void __fastcall CM_ShowClientTriggerModelCollision(const ClientMapTriggers *triggerSrc, const ClientTriggerModel *trigger, const vec4_t *color, bool drawSolid, const vec4_t *interiorColor, void (__fastcall *drawCollisionPoly)(int, const vec3_t *, const vec4_t *, const bool, const vec4_t *))
{
  ?CM_ShowClientTriggerModelCollision@@YAXPEBUClientMapTriggers@@PEBUClientTriggerModel@@AEBTvec4_t@@_N2P6AXHQEBTvec3_t@@2_N2@Z@Z(triggerSrc, trigger, color, drawSolid, interiorColor, drawCollisionPoly);
}

/*
==============
CM_ShowTriggerModelCollision
==============
*/

void __fastcall CM_ShowTriggerModelCollision(const MapTriggers *triggerSrc, const TriggerModel *trigger, const vec3_t *prebakedOrigin, const vec4_t *color, bool drawSolid, const vec4_t *interiorColor, void (__fastcall *drawCollisionPoly)(int, const vec3_t *, const vec4_t *, const bool, const vec4_t *))
{
  ?CM_ShowTriggerModelCollision@@YAXPEBUMapTriggers@@PEBUTriggerModel@@AEBTvec3_t@@AEBTvec4_t@@_N3P6AXHQEBT3@3_N3@Z@Z(triggerSrc, trigger, prebakedOrigin, color, drawSolid, interiorColor, drawCollisionPoly);
}

/*
==============
CM_AddColinearExteriorPointToWindingProjected
==============
*/
void CM_AddColinearExteriorPointToWindingProjected(winding_t *w, const vec3_t *pt, int i, int j, int index0, int index1)
{
  __int64 v6; 
  __int64 v8; 
  float *v9; 
  char *v10; 
  float v11; 
  __int128 v13; 
  float *v17; 
  float *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 

  v6 = i;
  v8 = j;
  v9 = (float *)(&w->numpoints + 3 * index0);
  v10 = (char *)w + 12 * index1;
  if ( (unsigned int)i >= 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", i, 3) )
      __debugbreak();
    LODWORD(v29) = 3;
    LODWORD(v20) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v29) )
      __debugbreak();
  }
  if ( *(float *)&v10[4 * v6 + 4] == v9[v6 + 1] )
  {
    if ( (unsigned int)v8 >= 3 )
    {
      LODWORD(v28) = 3;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v28) )
        __debugbreak();
      LODWORD(v30) = 3;
      LODWORD(v21) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, v30) )
        __debugbreak();
    }
    if ( *(float *)&v10[4 * v8 + 4] == v9[v8 + 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 207, ASSERT_TYPE_ASSERT, "(w->p[index0][i] != w->p[index1][i] || w->p[index0][j] != w->p[index1][j])", (const char *)&queryFormat, "w->p[index0][i] != w->p[index1][i] || w->p[index0][j] != w->p[index1][j]") )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 3 )
  {
    LODWORD(v28) = 3;
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v28) )
      __debugbreak();
    LODWORD(v31) = 3;
    LODWORD(v22) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v31) )
      __debugbreak();
  }
  v11 = *(float *)&v10[4 * v6 + 4] - v9[v6 + 1];
  if ( (unsigned int)v8 >= 3 )
  {
    LODWORD(v28) = 3;
    LODWORD(v19) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v28) )
      __debugbreak();
    LODWORD(v32) = 3;
    LODWORD(v23) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v32) )
      __debugbreak();
  }
  v13 = *(unsigned int *)&v10[4 * v8 + 4];
  *(float *)&v13 = *(float *)&v10[4 * v8 + 4] - v9[v8 + 1];
  _XMM3 = v13;
  _XMM0 = v13 & _xmm;
  __asm
  {
    vcmpless xmm0, xmm0, xmm2
    vblendvps xmm1, xmm3, xmm6, xmm0
  }
  if ( COERCE_FLOAT(LODWORD(v11) & _xmm) < COERCE_FLOAT(v13 & _xmm) )
    LODWORD(v6) = v8;
  if ( *(float *)&_XMM1 <= 0.0 )
  {
    if ( (unsigned int)v6 >= 3 )
    {
      LODWORD(v28) = 3;
      LODWORD(v19) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v28) )
        __debugbreak();
      LODWORD(v35) = 3;
      LODWORD(v26) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v35) )
        __debugbreak();
    }
    if ( *(float *)&v10[4 * (int)v6 + 4] >= v9[(int)v6 + 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 232, ASSERT_TYPE_ASSERT, "(w->p[index0][axis] > w->p[index1][axis])", (const char *)&queryFormat, "w->p[index0][axis] > w->p[index1][axis]") )
      __debugbreak();
    if ( (unsigned int)v6 >= 3 )
    {
      LODWORD(v28) = 3;
      LODWORD(v19) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v28) )
        __debugbreak();
      LODWORD(v36) = 3;
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v27, v36) )
        __debugbreak();
    }
    if ( v9[(int)v6 + 1] >= pt->v[(int)v6] )
    {
      v18 = (float *)vec3_t::operator[]((vec3_t *)pt, v6);
      if ( *vec3_t::operator[]((vec3_t *)(v10 + 4), v6) <= *v18 )
        return;
      goto LABEL_60;
    }
LABEL_58:
    v9[1] = pt->v[0];
    v9[2] = pt->v[1];
    v9[3] = pt->v[2];
    return;
  }
  if ( (unsigned int)v6 >= 3 )
  {
    LODWORD(v28) = 3;
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v28) )
      __debugbreak();
    LODWORD(v33) = 3;
    LODWORD(v24) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v33) )
      __debugbreak();
  }
  if ( *(float *)&v10[4 * (int)v6 + 4] <= v9[(int)v6 + 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 224, ASSERT_TYPE_ASSERT, "(w->p[index0][axis] < w->p[index1][axis])", (const char *)&queryFormat, "w->p[index0][axis] < w->p[index1][axis]") )
    __debugbreak();
  if ( (unsigned int)v6 >= 3 )
  {
    LODWORD(v28) = 3;
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v28) )
      __debugbreak();
    LODWORD(v34) = 3;
    LODWORD(v25) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v34) )
      __debugbreak();
  }
  if ( v9[(int)v6 + 1] > pt->v[(int)v6] )
    goto LABEL_58;
  v17 = (float *)vec3_t::operator[]((vec3_t *)pt, v6);
  if ( *vec3_t::operator[]((vec3_t *)(v10 + 4), v6) >= *v17 )
    return;
LABEL_60:
  *((_DWORD *)v10 + 1) = LODWORD(pt->v[0]);
  *((_DWORD *)v10 + 2) = LODWORD(pt->v[1]);
  *((_DWORD *)v10 + 3) = LODWORD(pt->v[2]);
}

/*
==============
CM_AddSimpleBrushPoint
==============
*/
__int64 CM_AddSimpleBrushPoint(const vec4_t *planes, int count, const vec4_t (*axialPlanes)[6], const __int16 (*sideIndices)[3], const vec3_t *xyz, int ptCount, ShowCollisionBrushPt *brushPts)
{
  __int64 v8; 
  float *v11; 
  __int64 v12; 
  unsigned int v13; 
  float v14; 
  float v15; 
  float v16; 
  const vec4_t *v17; 
  __int64 v19; 

  v8 = count;
  if ( !planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 47, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
    __debugbreak();
  if ( !brushPts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 48, ASSERT_TYPE_ASSERT, "(brushPts)", (const char *)&queryFormat, "brushPts") )
    __debugbreak();
  v11 = &(*axialPlanes)[0].v[2];
  v12 = 0i64;
  v13 = 0;
  v14 = xyz->v[1];
  v15 = xyz->v[0];
  v16 = xyz->v[2];
  do
  {
    if ( (float)((float)((float)((float)(v14 * *(v11 - 1)) + (float)(v15 * *(v11 - 2))) + (float)(v16 * *v11)) - v11[1]) > 0.1 )
      return (unsigned int)ptCount;
    ++v13;
    v11 += 4;
  }
  while ( v13 < 6 );
  if ( (int)v8 > 0 )
  {
    v17 = planes;
    while ( v17 == &planes[(*sideIndices)[0] - 6] || v17 == &planes[(*sideIndices)[1] - 6] || v17 == &planes[(*sideIndices)[2] - 6] || (float)((float)((float)((float)(v14 * v17->v[1]) + (float)(v15 * v17->v[0])) + (float)(v16 * v17->v[2])) - v17->v[3]) <= 0.1 )
    {
      ++v12;
      ++v17;
      if ( v12 >= v8 )
        goto LABEL_17;
    }
    return (unsigned int)ptCount;
  }
LABEL_17:
  if ( (unsigned int)ptCount < 0x4C0 )
  {
    v19 = ptCount;
    brushPts[v19].xyz.v[0] = v15;
    *(_QWORD *)&brushPts[v19].xyz.y = *(_QWORD *)&xyz->y;
    brushPts[v19].sideIndex[0] = (*sideIndices)[0];
    brushPts[v19].sideIndex[1] = (*sideIndices)[1];
    brushPts[v19].sideIndex[2] = (*sideIndices)[2];
    return (unsigned int)(ptCount + 1);
  }
  else
  {
    Com_PrintWarning(20, "More than %i points from plane intersections on %i-sided brush\n", (unsigned int)ptCount, (unsigned int)v8);
    return (unsigned int)ptCount;
  }
}

/*
==============
CM_BuildBrushWindingForSide
==============
*/
char CM_BuildBrushWindingForSide(winding_t *winding, const vec3_t *planeNormal, int sideIndex, const ShowCollisionBrushPt *pts, int ptCount)
{
  int v6; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int16 *v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  const vec3_t *v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  float v19; 
  char v20; 
  int numpoints; 
  vec3_t *p_pt1; 
  int v23; 
  int index1; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  float v28; 
  float v29; 
  __int64 v30; 
  bool v31; 
  int v32; 
  int v33; 
  int v34; 
  float v35; 
  float *v36; 
  int v37; 
  __int128 v38; 
  float v39; 
  float v40; 
  float *v41; 
  int v42; 
  float v43; 
  float v44; 
  __int128 v45; 
  __int128 v46; 
  float v47; 
  float v48; 
  float *v49; 
  float v50; 
  float v51; 
  __int128 v52; 
  float v53; 
  int v54; 
  float v55; 
  int v58; 
  int v59; 
  float *v60; 
  float v61; 
  float v62; 
  float v63; 
  __int64 v64; 
  int v65; 
  __int64 v66; 
  int v69; 
  int i; 
  __int64 v72; 
  int j; 
  vec4_t plane; 
  float v0[4]; 
  float v76; 
  float v77; 
  vec3_t pt1; 

  v6 = sideIndex;
  if ( !winding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 343, ASSERT_TYPE_ASSERT, "(winding)", (const char *)&queryFormat, "winding") )
    __debugbreak();
  if ( !pts )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 344, ASSERT_TYPE_ASSERT, "(pts)", (const char *)&queryFormat, "pts") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 160, ASSERT_TYPE_ASSERT, "(pts)", (const char *)&queryFormat, "pts") )
      __debugbreak();
  }
  v8 = 0;
  v9 = 0;
  if ( ptCount <= 0 )
    return 0;
  v10 = 0i64;
  v11 = &pts->sideIndex[1];
  v12 = (unsigned int)ptCount;
  do
  {
    if ( v6 == *(v11 - 1) || v6 == *v11 || v6 == v11[1] )
    {
      v13 = 0;
      if ( v9 <= 0 )
      {
LABEL_17:
        if ( v10 == 1024 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FFD0A0, 129i64, 1024i64);
        v14 = 3 * v10;
        v0[v14] = *(float *)(v11 - 7);
        ++v9;
        ++v10;
        v0[v14 + 1] = *(float *)(v11 - 5);
        v0[v14 + 2] = *(float *)(v11 - 3);
      }
      else
      {
        while ( !VecNCompareCustomEpsilon(&v0[3 * v13], pts->xyz.v, 0.1, 3) )
        {
          if ( ++v13 >= v9 )
            goto LABEL_17;
        }
      }
      v6 = sideIndex;
    }
    ++pts;
    v11 += 10;
    --v12;
  }
  while ( v12 );
  v15 = planeNormal;
  if ( v9 < 3 )
    return 0;
  v16 = 2;
  v69 = 2;
  v17 = COERCE_FLOAT(LODWORD(planeNormal->v[1]) & _xmm) > COERCE_FLOAT(LODWORD(planeNormal->v[0]) & _xmm);
  v18 = 2;
  v19 = v77;
  if ( COERCE_FLOAT(LODWORD(planeNormal->v[2]) & _xmm) > COERCE_FLOAT(LODWORD(planeNormal->v[v17]) & _xmm) )
    LOBYTE(v17) = 2;
  v20 = ~(_BYTE)v17;
  *(_OWORD *)winding->p[0].v = *(_OWORD *)v0;
  j = v20 & 2;
  i = v20 & 1;
  numpoints = 2;
  winding->p[1].v[1] = v76;
  winding->p[1].v[2] = v19;
  winding->numpoints = 2;
  if ( v9 > 2i64 )
  {
    p_pt1 = &pt1;
    v72 = v9 - 2i64;
    do
    {
      v23 = v18 - 1;
      index1 = -1;
      v25 = -1i64;
      v26 = 0;
      v27 = 0i64;
      v28 = FLOAT_3_4028235e38;
      if ( v18 <= 0 )
        goto LABEL_66;
      do
      {
        v29 = CM_SignedAreaForPointsProjected(&winding->p[v23], p_pt1, &winding->p[v26], i, j);
        if ( v28 > v29 )
        {
          v28 = v29;
          index1 = v26;
          v25 = v27;
        }
        v23 = v26;
        ++v27;
        ++v26;
      }
      while ( v26 < winding->numpoints );
      v8 = 0;
      if ( index1 < 0 )
      {
LABEL_66:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 261, ASSERT_TYPE_ASSERT, "(bestIndex >= 0)", (const char *)&queryFormat, "bestIndex >= 0") )
          __debugbreak();
      }
      if ( v28 < -0.001 )
      {
        memmove_0(&winding->p[index1 + 1], &winding->p[index1], 12i64 * (winding->numpoints - index1));
        v30 = v25;
        winding->p[v30].v[0] = p_pt1->v[0];
        winding->p[v30].v[1] = p_pt1->v[1];
        winding->p[v30].v[2] = p_pt1->v[2];
        ++winding->numpoints;
      }
      else if ( v28 <= 0.001 )
      {
        CM_AddColinearExteriorPointToWindingProjected(winding, p_pt1, i, j, (winding->numpoints + index1 - 1) % winding->numpoints, index1);
      }
      numpoints = winding->numpoints;
      ++p_pt1;
      v31 = v72-- == 1;
      v18 = winding->numpoints;
    }
    while ( !v31 );
    v15 = planeNormal;
    v16 = 2;
    v69 = winding->numpoints;
  }
  v32 = 0;
  v33 = 1;
  v34 = 2;
  v35 = 0.0;
  if ( numpoints <= 2 )
    return 0;
  v36 = &winding->p[2].v[2];
  do
  {
    v37 = 1;
    if ( v34 > 1 )
    {
      v38 = *((unsigned int *)v36 - 2);
      v39 = *(v36 - 1);
      v40 = *v36;
      v41 = &winding->p[1].v[2];
      do
      {
        v42 = 0;
        v43 = *(v41 - 2);
        v44 = *(v41 - 1);
        v46 = v38;
        *(float *)&v46 = *(float *)&v38 - v43;
        v45 = v46;
        v47 = v39 - v44;
        v48 = v40 - *v41;
        if ( v37 > 0 )
        {
          v49 = &winding->p[0].v[2];
          do
          {
            v50 = *(v49 - 2) - v43;
            v51 = *(v49 - 1) - v44;
            v52 = v45;
            v53 = (float)((float)((float)(*(float *)&v45 * (float)(*v49 - *v41)) - (float)(v48 * v50)) * v15->v[1]) + (float)((float)((float)(v48 * v51) - (float)(v47 * (float)(*v49 - *v41))) * v15->v[0]);
            v54 = v42;
            v49 += 3;
            v55 = (float)((float)(v47 * v50) - (float)(*(float *)&v45 * v51)) * v15->v[2];
            *(float *)&v52 = v53 + v55;
            _XMM3 = v52 & _xmm;
            __asm { vmaxss  xmm0, xmm3, xmm11 }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v53 + v55) & _xmm) <= v35 )
              v54 = v32;
            v32 = v54;
            v58 = v37;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v53 + v55) & _xmm) <= v35 )
              v58 = v33;
            v33 = v58;
            v59 = v34;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v53 + v55) & _xmm) <= v35 )
              v59 = v16;
            ++v42;
            v16 = v59;
            v35 = *(float *)&_XMM0;
          }
          while ( v42 < v37 );
          v38 = *((unsigned int *)v36 - 2);
          v39 = *(v36 - 1);
          v40 = *v36;
        }
        ++v37;
        v41 += 3;
      }
      while ( v37 < v34 );
      v18 = v69;
    }
    ++v34;
    v36 += 3;
  }
  while ( v34 < v18 );
  if ( v35 < 0.001 )
    return 0;
  PlaneFromPoints(&plane, &winding->p[v32], &winding->p[v33], &winding->p[v16], 0.001);
  if ( (float)((float)((float)(plane.v[0] * v15->v[0]) + (float)(plane.v[1] * v15->v[1])) + (float)(plane.v[2] * v15->v[2])) > 0.0 && winding->numpoints / 2 > 0 )
  {
    v60 = &winding->p[0].v[2];
    do
    {
      v61 = *(v60 - 2);
      v62 = *(v60 - 1);
      v63 = *v60;
      v60 += 3;
      v64 = 3i64 * (winding->numpoints - v8);
      *(v60 - 5) = *((float *)winding + 3 * (winding->numpoints - v8) - 2);
      *(v60 - 4) = *((float *)winding + v64 - 1);
      *(v60 - 3) = *((float *)&winding->numpoints + v64);
      v65 = winding->numpoints - v8++;
      v66 = 3i64 * v65;
      *((float *)winding + v66 - 2) = v61;
      *((float *)winding + v66 - 1) = v62;
      *((float *)&winding->numpoints + v66) = v63;
    }
    while ( v8 < winding->numpoints / 2 );
  }
  return 1;
}

/*
==============
CM_ForEachBrushPlaneIntersection
==============
*/
__int64 CM_ForEachBrushPlaneIntersection(const vec4_t *planes, int planeCount, const vec4_t (*axialPlanes)[6], ShowCollisionBrushPt *brushPts)
{
  unsigned int v7; 
  int v8; 
  __int16 v9; 
  int v10; 
  __int16 v11; 
  __int64 v12; 
  const vec4_t *v13; 
  float v14; 
  const vec4_t *v15; 
  __int16 v16; 
  const vec4_t *v17; 
  float v18; 
  const vec4_t *v19; 
  unsigned __int16 v20; 
  const vec4_t *v21; 
  float v22; 
  const vec4_t *v23; 
  int ptCount; 
  vec3_t xyz; 
  vec4_t plane[3]; 
  __int16 sideIndices[3]; 

  if ( !brushPts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 105, ASSERT_TYPE_ASSERT, "(brushPts)", (const char *)&queryFormat, "brushPts") )
    __debugbreak();
  v7 = 0;
  v8 = planeCount + 6;
  ptCount = 0;
  sideIndices[0] = 0;
  v9 = 0;
  if ( planeCount + 4 > 0 )
  {
    v10 = planeCount + 5;
    v11 = 0;
    do
    {
      v12 = v11;
      if ( (unsigned __int64)v11 >= 6 )
      {
        if ( !planes )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 90, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
            __debugbreak();
          v10 = v8 - 1;
        }
        v15 = &planes[v12 - 6];
        *(_QWORD *)plane[0].v = *(_QWORD *)v15->v;
        plane[0].v[2] = v15->v[2];
        v14 = v15->v[3];
      }
      else
      {
        if ( !axialPlanes )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 85, ASSERT_TYPE_ASSERT, "(axialPlanes)", (const char *)&queryFormat, "axialPlanes") )
            __debugbreak();
          v10 = v8 - 1;
        }
        v13 = &(*axialPlanes)[v12];
        *(_QWORD *)plane[0].v = *(_QWORD *)v13->v;
        plane[0].v[2] = v13->v[2];
        v14 = v13->v[3];
      }
      v16 = v9 + 1;
      sideIndices[1] = v9 + 1;
      for ( plane[0].v[3] = v14; v16 < v10; sideIndices[1] = v16 )
      {
        if ( (unsigned __int64)v9 < 6 || (unsigned __int16)v16 < 6u || 16i64 * v9 != 16i64 * v16 )
        {
          if ( (unsigned __int64)v16 >= 6 )
          {
            if ( !planes )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 90, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
                __debugbreak();
              v10 = v8 - 1;
            }
            v19 = &planes[v16 - 6];
            *(_QWORD *)plane[1].v = *(_QWORD *)v19->v;
            plane[1].v[2] = v19->v[2];
            v18 = v19->v[3];
          }
          else
          {
            if ( !axialPlanes )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 85, ASSERT_TYPE_ASSERT, "(axialPlanes)", (const char *)&queryFormat, "axialPlanes") )
                __debugbreak();
              v10 = v8 - 1;
            }
            v17 = &(*axialPlanes)[v16];
            *(_QWORD *)plane[1].v = *(_QWORD *)v17->v;
            plane[1].v[2] = v17->v[2];
            v18 = v17->v[3];
          }
          v20 = v16 + 1;
          sideIndices[2] = v16 + 1;
          plane[1].v[3] = v18;
          if ( (__int16)(v16 + 1) < v8 )
          {
            do
            {
              if ( ((unsigned __int64)v9 < 6 || v20 < 6u || 16i64 * v9 != 16i64 * (__int16)v20) && ((unsigned __int64)v16 < 6 || v20 < 6u || 16i64 * v16 != 16i64 * (__int16)v20) )
              {
                if ( (unsigned __int64)(__int16)v20 >= 6 )
                {
                  if ( !planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 90, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
                    __debugbreak();
                  v23 = &planes[(__int16)v20 - 6];
                  *(_QWORD *)plane[2].v = *(_QWORD *)v23->v;
                  plane[2].v[2] = v23->v[2];
                  v22 = v23->v[3];
                }
                else
                {
                  if ( !axialPlanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 85, ASSERT_TYPE_ASSERT, "(axialPlanes)", (const char *)&queryFormat, "axialPlanes") )
                    __debugbreak();
                  v21 = &(*axialPlanes)[(__int16)v20];
                  *(_QWORD *)plane[2].v = *(_QWORD *)v21->v;
                  plane[2].v[2] = v21->v[2];
                  v22 = v21->v[3];
                }
                plane[2].v[3] = v22;
                if ( IntersectPlanes((const vec4_t (*)[3])plane, &xyz) )
                {
                  SnapPointToIntersectingPlanes((const vec4_t (*)[3])plane, &xyz, 0.25, 0.0099999998);
                  v7 = CM_AddSimpleBrushPoint(planes, planeCount, axialPlanes, (const __int16 (*)[3])sideIndices, &xyz, ptCount, brushPts);
                  ptCount = v7;
                }
                else
                {
                  v7 = ptCount;
                }
              }
              sideIndices[2] = ++v20;
            }
            while ( (__int16)v20 < v8 );
            v10 = v8 - 1;
          }
        }
        ++v16;
      }
      v11 = ++v9;
      sideIndices[0] = v9;
    }
    while ( v9 < v8 - 2 );
  }
  return v7;
}

/*
==============
CM_ShowClientTriggerModelCollision
==============
*/
void CM_ShowClientTriggerModelCollision(const ClientMapTriggers *triggerSrc, const ClientTriggerModel *trigger, const vec4_t *color, bool drawSolid, const vec4_t *interiorColor, void (*drawCollisionPoly)(int, const vec3_t *, const vec4_t *, const bool, const vec4_t *))
{
  CM_ShowTriggerModelCollision_Internal_ClientMapTriggers_ClientTriggerModel_ClientTriggerHull_(triggerSrc, trigger, NULL, color, drawSolid, interiorColor, drawCollisionPoly);
}

/*
==============
CM_ShowSingleBrushCollision
==============
*/
void CM_ShowSingleBrushCollision(const Bounds *bounds, const vec4_t *planes, int planeCount, const vec4_t *color, bool drawSolid, const vec4_t *interiorColor, void (*drawCollisionPoly)(int, const vec3_t *, const vec4_t *, const bool, const vec4_t *))
{
  __int64 v9; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  unsigned int i; 
  unsigned __int64 v18; 
  int v19; 
  __int64 v20; 
  const vec4_t *v21; 
  vec4_t axialPlanes[6]; 
  ShowCollisionBrushPt brushPts; 

  v9 = planeCount;
  v21 = planes;
  if ( !planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 380, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes", 0i64) )
    __debugbreak();
  v11 = bounds->halfSize.v[0];
  axialPlanes[0].v[3] = v11 - bounds->midPoint.v[0];
  v12 = v11 + bounds->midPoint.v[0];
  v13 = bounds->halfSize.v[1];
  axialPlanes[1].v[3] = v12;
  axialPlanes[2].v[3] = v13 - bounds->midPoint.v[1];
  v14 = v13 + bounds->midPoint.v[1];
  v15 = bounds->halfSize.v[2];
  axialPlanes[3].v[3] = v14;
  axialPlanes[4].v[3] = v15 - bounds->midPoint.v[2];
  axialPlanes[5].v[3] = v15 + bounds->midPoint.v[2];
  axialPlanes[0].v[0] = FLOAT_N1_0;
  axialPlanes[0].v[1] = 0.0;
  axialPlanes[0].v[2] = 0.0;
  axialPlanes[1].v[0] = FLOAT_1_0;
  axialPlanes[1].v[1] = 0.0;
  axialPlanes[1].v[2] = 0.0;
  axialPlanes[2].v[0] = 0.0;
  axialPlanes[2].v[1] = FLOAT_N1_0;
  axialPlanes[2].v[2] = 0.0;
  axialPlanes[3].v[0] = 0.0;
  axialPlanes[3].v[1] = FLOAT_1_0;
  axialPlanes[3].v[2] = 0.0;
  axialPlanes[4].v[0] = 0.0;
  axialPlanes[4].v[1] = 0.0;
  axialPlanes[4].v[2] = FLOAT_N1_0;
  axialPlanes[5].v[0] = 0.0;
  axialPlanes[5].v[1] = 0.0;
  axialPlanes[5].v[2] = FLOAT_1_0;
  v16 = CM_ForEachBrushPlaneIntersection(planes, v9, (const vec4_t (*)[6])axialPlanes, &brushPts);
  if ( v16 >= 4 )
  {
    Sys_EnterCriticalSection(CRITSECT_SHOW_COLLISION);
    for ( i = 0; i < 6; ++i )
    {
      if ( CM_BuildBrushWindingForSide(&s_windingPool, (const vec3_t *)&axialPlanes[i], i, &brushPts, v16) )
        drawCollisionPoly(s_windingPool.numpoints, s_windingPool.p, color, drawSolid, interiorColor);
    }
    v18 = v9 + 6;
    v19 = 6;
    if ( v18 > 6 )
    {
      v20 = 6i64;
      do
      {
        if ( CM_BuildBrushWindingForSide(&s_windingPool, (const vec3_t *)&v21[v20 - 6], v19, &brushPts, v16) )
          drawCollisionPoly(s_windingPool.numpoints, s_windingPool.p, color, drawSolid, interiorColor);
        v20 = ++v19;
      }
      while ( v19 < v18 );
    }
    Sys_LeaveCriticalSection(CRITSECT_SHOW_COLLISION);
  }
}

/*
==============
CM_ShowTriggerModelCollision
==============
*/
void CM_ShowTriggerModelCollision(const MapTriggers *triggerSrc, const TriggerModel *trigger, const vec3_t *prebakedOrigin, const vec4_t *color, bool drawSolid, const vec4_t *interiorColor, void (*drawCollisionPoly)(int, const vec3_t *, const vec4_t *, const bool, const vec4_t *))
{
  CM_ShowTriggerModelCollision_Internal_MapTriggers_TriggerModel_TriggerHull_(triggerSrc, trigger, prebakedOrigin, color, drawSolid, interiorColor, drawCollisionPoly);
}

/*
==============
CM_SignedAreaForPointsProjected
==============
*/
float CM_SignedAreaForPointsProjected(const vec3_t *pt0, const vec3_t *pt1, const vec3_t *pt2, int i, int j)
{
  __int64 v5; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v5 = i;
  if ( (unsigned int)i >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", i, 3) )
    __debugbreak();
  if ( (unsigned int)j >= 3 )
  {
    LODWORD(v14) = 3;
    LODWORD(v10) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v14) )
      __debugbreak();
    LODWORD(v15) = 3;
    LODWORD(v11) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v15) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 3 )
  {
    LODWORD(v14) = 3;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v14) )
      __debugbreak();
  }
  if ( (unsigned int)j >= 3 )
  {
    LODWORD(v14) = 3;
    LODWORD(v10) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v14) )
      __debugbreak();
    LODWORD(v16) = 3;
    LODWORD(v12) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v16) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 3 )
  {
    LODWORD(v14) = 3;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v14) )
      __debugbreak();
  }
  if ( (unsigned int)j >= 3 )
  {
    LODWORD(v14) = 3;
    LODWORD(v10) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v14) )
      __debugbreak();
    LODWORD(v17) = 3;
    LODWORD(v13) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v17) )
      __debugbreak();
  }
  return (float)((float)((float)(pt0->v[j] - pt2->v[j]) * pt1->v[v5]) + (float)((float)(pt2->v[j] - pt1->v[j]) * pt0->v[v5])) + (float)((float)(pt1->v[j] - pt0->v[j]) * pt2->v[v5]);
}

