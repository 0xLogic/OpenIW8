/*
==============
Com_ConvexHullOrder
==============
*/

unsigned int __fastcall Com_ConvexHullOrder(vec2_t *points, unsigned int *pointOrder, unsigned int pointCount, unsigned int *hullOrder)
{
  return ?Com_ConvexHullOrder@@YAIQEATvec2_t@@QEAII1@Z(points, pointOrder, pointCount, hullOrder);
}

/*
==============
Com_ConvexHull
==============
*/

unsigned int __fastcall Com_ConvexHull(vec2_t *points, unsigned int pointCount, vec2_t *hull)
{
  return ?Com_ConvexHull@@YAIQEATvec2_t@@I0@Z(points, pointCount, hull);
}

/*
==============
Com_ConvexHull
==============
*/
__int64 Com_ConvexHull(vec2_t *points, unsigned int pointCount, vec2_t *hull)
{
  __int64 v3; 
  float v6; 
  float v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  char *v11; 
  unsigned int v12; 
  float *v13; 
  __int64 v14; 
  __int64 v15; 
  float v16; 
  __int64 v17; 
  float v18; 
  __int64 v19; 
  float v20; 
  __int64 v21; 
  unsigned int *v22; 
  __int64 v23; 
  vec2_t *v24; 
  __int64 v25; 
  vec2_t offset; 
  unsigned int hullOrder; 
  char v29; 
  unsigned int pointOrder[64]; 

  v3 = pointCount;
  if ( pointCount - 3 > 0x3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 295, ASSERT_TYPE_ASSERT, "( 3 ) <= ( pointCount ) && ( pointCount ) <= ( ( sizeof( *array_counter( pointOrder ) ) + 0 ) )", "pointCount not in [3, ARRAY_COUNT( pointOrder )]\n\t%i not in [%i, %i]", pointCount, 3, 64) )
    __debugbreak();
  if ( hull == points && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 297, ASSERT_TYPE_ASSERT, "(hull != points)", (const char *)&queryFormat, "hull != points") )
    __debugbreak();
  if ( hull < &points[v3] && points < &hull[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 298, ASSERT_TYPE_ASSERT, "(hull >= points + pointCount || points >= hull + pointCount)", (const char *)&queryFormat, "hull >= points + pointCount || points >= hull + pointCount") )
    __debugbreak();
  v6 = points->v[0];
  v7 = points->v[1];
  LODWORD(offset.v[0]) = LODWORD(points->v[0]) ^ _xmm;
  LODWORD(offset.v[1]) = LODWORD(v7) ^ _xmm;
  Com_TranslatePoints(points, v3, &offset);
  Com_InitialHull(points, pointOrder, v3, &hullOrder);
  v8 = Com_GrowInitialHull(points, pointOrder, v3 - 2, &hullOrder);
  v9 = 0i64;
  v10 = v8;
  if ( v8 >= 4 )
  {
    v11 = &v29;
    v12 = ((v8 - 4) >> 2) + 1;
    v13 = (float *)&hull[2] + 1;
    v14 = v12;
    v9 = 4 * v12;
    do
    {
      v15 = *((unsigned int *)v11 - 1);
      v13 += 8;
      v11 += 16;
      *(v13 - 13) = v6 + points[v15].v[0];
      v16 = v7 + points[v15].v[1];
      v17 = *((unsigned int *)v11 - 4);
      *(v13 - 12) = v16;
      *(v13 - 11) = v6 + points[v17].v[0];
      v18 = v7 + points[v17].v[1];
      v19 = *((unsigned int *)v11 - 3);
      *(v13 - 10) = v18;
      *(v13 - 9) = v6 + points[v19].v[0];
      v20 = v7 + points[v19].v[1];
      v21 = *((unsigned int *)v11 - 2);
      *(v13 - 8) = v20;
      *(v13 - 7) = v6 + points[v21].v[0];
      *(v13 - 6) = v7 + points[v21].v[1];
      --v14;
    }
    while ( v14 );
  }
  if ( (unsigned int)v9 < v10 )
  {
    v22 = &hullOrder + v9;
    v23 = v10 - (unsigned int)v9;
    v24 = &hull[v9];
    do
    {
      v25 = *v22;
      ++v24;
      ++v22;
      v24[-1].v[0] = points[v25].v[0] - COERCE_FLOAT(LODWORD(v6) ^ _xmm);
      v24[-1].v[1] = points[v25].v[1] - COERCE_FLOAT(LODWORD(v7) ^ _xmm);
      --v23;
    }
    while ( v23 );
  }
  return v10;
}

/*
==============
Com_ConvexHullOrder
==============
*/
unsigned int Com_ConvexHullOrder(vec2_t *points, unsigned int *pointOrder, unsigned int pointCount, unsigned int *hullOrder)
{
  vec2_t offset; 

  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, dword ptr [rcx], 2 }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, dword ptr [rcx+4], 2 }
  LODWORD(offset.v[0]) = _XMM0 ^ _xmm;
  LODWORD(offset.v[1]) = _XMM1 ^ _xmm;
  Com_TranslatePoints(points, pointCount, &offset);
  Com_InitialHull(points, pointOrder, pointCount, hullOrder);
  return Com_GrowInitialHull(points, pointOrder, pointCount - 2, hullOrder);
}

/*
==============
Com_GrowInitialHull
==============
*/
__int64 Com_GrowInitialHull(const vec2_t *points, unsigned int *pointOrder, unsigned int pointCount, unsigned int *hullOrder)
{
  unsigned int *v4; 
  unsigned int *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  __int128 v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v23; 
  __int128 v24; 
  float v25; 
  float v26; 
  __int64 v27; 
  __int64 v28; 
  __int128 v29; 
  int v31; 
  __int128 v33; 
  int v34; 
  __int128 v35; 
  __int128 v38; 
  int v39; 
  unsigned int v40; 
  unsigned int v42; 
  __int64 v43; 
  unsigned int *v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int *hullOrdera; 
  __int64 hullPointCount; 
  int v55; 

  v4 = hullOrder;
  v7 = pointOrder;
  if ( !pointCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 167, ASSERT_TYPE_ASSERT, "(pointCount >= 1)", (const char *)&queryFormat, "pointCount >= 1") )
      __debugbreak();
    v7 = pointOrder;
  }
  v8 = *v4;
  v9 = pointCount - 1;
  v10 = v4[1];
  v11 = 0i64;
  v12 = -1;
  v13 = -1;
  v14 = LODWORD(points[v8].v[0]);
  v15 = points[v10].v[1] - points[v8].v[1];
  v17 = v14;
  *(float *)&v17 = *(float *)&v14 - points[v10].v[0];
  v16 = v17;
  *(float *)&_XMM7 = FLOAT_0_001;
  *(float *)&_XMM6 = FLOAT_N0_001;
  *(float *)&v17 = fsqrt((float)(*(float *)&v17 * *(float *)&v17) + (float)(v15 * v15));
  _XMM2 = v17;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  v24 = v16;
  *(float *)&v24 = *(float *)&v16 * (float)(1.0 / *(float *)&_XMM0);
  v23 = v24;
  v25 = v15 * (float)(1.0 / *(float *)&_XMM0);
  v26 = (float)(v25 * *(float *)&v14) + (float)(*(float *)&v24 * points[v8].v[1]);
  if ( (int)v9 >= 0 )
  {
    v27 = (int)v9;
    v28 = 0i64;
    while ( 1 )
    {
      v29 = v23;
      *(float *)&v29 = (float)((float)(*(float *)&v23 * points[v7[v28]].v[1]) + (float)(v25 * points[v7[v28]].v[0])) - v26;
      _XMM2 = v29;
      if ( *(float *)&v29 >= 0.0 )
        break;
LABEL_12:
      v34 = v11;
      v55 = v11;
      if ( *(float *)&_XMM6 <= *(float *)&_XMM2 )
        v34 = v13;
      __asm { vminss  xmm6, xmm2, xmm6 }
      if ( (int)v11 > (int)v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 203, ASSERT_TYPE_SANITY, "( botIndex <= topIndex )", (const char *)&queryFormat, "botIndex <= topIndex") )
          __debugbreak();
        v7 = pointOrder;
      }
      v35 = v23;
      *(float *)&v35 = (float)((float)(*(float *)&v23 * points[v7[v27]].v[1]) + (float)(v25 * points[v7[v27]].v[0])) - v26;
      _XMM2 = v35;
      if ( *(float *)&v35 <= 0.0 )
      {
        do
        {
          v13 = v9;
          if ( *(float *)&_XMM6 <= *(float *)&_XMM2 )
            v13 = v34;
          v9 = (unsigned int)(v9 - 1);
          --v27;
          _XMM3 = _XMM2;
          if ( v28 > v27 )
            goto LABEL_32;
          v34 = v13;
          __asm { vminss  xmm6, xmm3, xmm6 }
          v38 = v23;
          *(float *)&v38 = (float)((float)(*(float *)&v23 * points[v7[v27]].v[1]) + (float)(v25 * points[v7[v27]].v[0])) - v26;
          _XMM2 = v38;
        }
        while ( *(float *)&v38 <= 0.0 );
      }
      v39 = v11;
      v13 = v9;
      if ( *(float *)&_XMM2 <= *(float *)&_XMM7 )
        v39 = v12;
      v12 = v39;
      __asm { vmaxss  xmm7, xmm2, xmm7 }
      if ( (int)v11 >= (int)v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 226, ASSERT_TYPE_SANITY, "( botIndex < topIndex )", (const char *)&queryFormat, "botIndex < topIndex") )
          __debugbreak();
        v7 = pointOrder;
      }
      v40 = v7[v11];
      v7[v11] = v7[v9];
      ++v28;
      v11 = (unsigned int)(v11 + 1);
      v7[v9] = v40;
      v9 = (unsigned int)(v9 - 1);
      --v27;
      if ( v34 != v55 )
        v13 = v34;
      if ( (int)v11 > (int)v9 )
        goto LABEL_32;
    }
    while ( 1 )
    {
      v31 = v11;
      if ( *(float *)&_XMM2 <= *(float *)&_XMM7 )
        v31 = v12;
      v11 = (unsigned int)(v11 + 1);
      ++v28;
      v12 = v31;
      _XMM3 = _XMM2;
      if ( v28 > v27 )
        break;
      __asm { vmaxss  xmm7, xmm3, xmm7 }
      v33 = v23;
      *(float *)&v33 = (float)((float)(*(float *)&v23 * points[v7[v28]].v[1]) + (float)(v25 * points[v7[v28]].v[0])) - v26;
      _XMM2 = v33;
      if ( *(float *)&v33 < 0.0 )
        goto LABEL_12;
    }
LABEL_32:
    v4 = hullOrder;
  }
  if ( (_DWORD)v9 != (_DWORD)v11 - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 236, ASSERT_TYPE_SANITY, "( topIndex == botIndex - 1 )", (const char *)&queryFormat, "topIndex == botIndex - 1") )
    __debugbreak();
  if ( v12 < 0 && v13 < 0 )
    return 0i64;
  v42 = 2;
  if ( v12 < 0 )
  {
    v44 = pointOrder;
  }
  else
  {
    if ( v12 > (int)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 244, ASSERT_TYPE_SANITY, "( frontIndex <= topIndex )", (const char *)&queryFormat, "frontIndex <= topIndex") )
      __debugbreak();
    v43 = (unsigned int)v12;
    v44 = pointOrder;
    v45 = pointOrder[v43];
    pointOrder[v43] = pointOrder[v9];
    pointOrder[v9] = v45;
    v46 = pointOrder[(int)v9];
    memmove_0(v4 + 3, v4 + 2, 0i64);
    v4[2] = v46;
    v42 = 3;
    if ( (int)v9 > 0 )
    {
      v47 = Com_RecursivelyGrowHull(points, pointOrder, v9, 2u, 0, v4, 3u);
      v42 = Com_RecursivelyGrowHull(points, pointOrder, v9, 1u, 2u, v4, v47);
    }
  }
  if ( v13 >= 0 )
  {
    if ( v13 < (int)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 258, ASSERT_TYPE_SANITY, "( backIndex >= botIndex )", (const char *)&queryFormat, "backIndex >= botIndex") )
      __debugbreak();
    v48 = v44[v13];
    v44[v13] = v44[v11];
    v44[v11] = v48;
    v49 = v44[(int)v11];
    if ( !v42 )
    {
      LODWORD(hullPointCount) = 0;
      LODWORD(hullOrdera) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 58, ASSERT_TYPE_ASSERT, "( newIndex ) <= ( hullPointCount )", "newIndex not in [0, hullPointCount]\n\t%u not in [0, %u]", hullOrdera, hullPointCount) )
        __debugbreak();
    }
    memmove_0(v4 + 2, v4 + 1, 4i64 * (v42++ - 1));
    v4[1] = v49;
    v50 = pointCount - v11 - 1;
    if ( pointCount - (_DWORD)v11 != 1 )
    {
      v51 = Com_RecursivelyGrowHull(points, &v44[(int)v11 + 1], v50, 1u, 2u, v4, v42);
      return Com_RecursivelyGrowHull(points, &v44[(int)v11 + 1], v50, 0, 1u, v4, v51);
    }
  }
  return v42;
}

/*
==============
Com_InitialHull
==============
*/
void Com_InitialHull(const vec2_t *points, unsigned int *pointOrder, unsigned int pointCount, unsigned int *hullOrder)
{
  unsigned int v4; 
  __int64 v5; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int *v12; 
  float *v13; 
  float v14; 
  float v15; 
  float v16; 
  unsigned int *v17; 
  float *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 

  v4 = 1;
  v5 = 0i64;
  *pointOrder = 0;
  v9 = 0;
  if ( pointCount <= 1 )
    goto LABEL_37;
  if ( pointCount - 1 >= 4 )
  {
    v10 = 3;
    v11 = pointCount - 3;
    v12 = pointOrder + 3;
    v13 = (float *)&points[2] + 1;
    do
    {
      *(v12 - 2) = v4;
      v14 = *(v13 - 2);
      if ( v14 < points[v9].v[1] )
      {
        if ( v14 < points[v5].v[1] )
          v5 = v4;
      }
      else
      {
        v9 = v4;
      }
      *(v12 - 1) = v10 - 1;
      if ( *v13 < points[v9].v[1] )
      {
        if ( *v13 < points[v5].v[1] )
          v5 = v10 - 1;
      }
      else
      {
        v9 = v10 - 1;
      }
      *v12 = v10;
      v15 = v13[2];
      if ( v15 < points[v9].v[1] )
      {
        if ( v15 < points[v5].v[1] )
          v5 = v10;
      }
      else
      {
        v9 = v10;
      }
      v12[1] = v10 + 1;
      v16 = v13[4];
      if ( v16 < points[v9].v[1] )
      {
        if ( v16 < points[v5].v[1] )
          v5 = v10 + 1;
      }
      else
      {
        v9 = v10 + 1;
      }
      v12 += 4;
      v13 += 8;
      v4 += 4;
      v10 += 4;
    }
    while ( v4 < v11 );
  }
  if ( v4 < pointCount )
  {
    v17 = &pointOrder[v4];
    v18 = (float *)&points[v4] + 1;
    do
    {
      *v17 = v4;
      if ( *v18 < points[v9].v[1] )
      {
        if ( *v18 < points[v5].v[1] )
          v5 = v4;
      }
      else
      {
        v9 = v4;
      }
      ++v17;
      v18 += 2;
      ++v4;
    }
    while ( v4 < pointCount );
  }
  if ( (_DWORD)v5 == v9 )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 35, ASSERT_TYPE_SANITY, "( minIndex != maxIndex )", (const char *)&queryFormat, "minIndex != maxIndex") )
      __debugbreak();
  }
  v19 = pointCount - 1;
  *hullOrder = v5;
  hullOrder[1] = v9;
  v20 = pointCount - 2;
  v21 = (unsigned int)v19;
  v22 = pointOrder[v19];
  if ( (unsigned int)v5 <= v9 )
  {
    v25 = pointOrder[v9];
    pointOrder[v9] = v22;
    pointOrder[v21] = v25;
    v24 = pointOrder[(unsigned int)v5];
    pointOrder[(unsigned int)v5] = pointOrder[v20];
  }
  else
  {
    v23 = pointOrder[(unsigned int)v5];
    pointOrder[(unsigned int)v5] = v22;
    pointOrder[v21] = v23;
    v24 = pointOrder[v9];
    pointOrder[v9] = pointOrder[v20];
  }
  pointOrder[v20] = v24;
}

/*
==============
Com_RecursivelyGrowHull
==============
*/
unsigned int Com_RecursivelyGrowHull(const vec2_t *points, unsigned int *pointOrder, unsigned int pointCount, unsigned int firstIndex, unsigned int secondIndex, unsigned int *hullOrder, unsigned int hullPointCount)
{
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  float v20; 
  __int128 v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int128 v31; 
  __int128 v32; 
  int v33; 
  __int128 v35; 
  __int128 v36; 
  __int128 v38; 
  int v39; 
  __int64 v40; 
  unsigned int v41; 
  unsigned int v43; 
  __int64 v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int *v48; 

  v10 = firstIndex;
  if ( !pointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 76, ASSERT_TYPE_ASSERT, "(pointCount > 0)", (const char *)&queryFormat, "pointCount > 0") )
    __debugbreak();
  v11 = hullPointCount;
  if ( secondIndex != (_DWORD)v10 + 1 && ((_DWORD)v10 != hullPointCount - 1 || secondIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 77, ASSERT_TYPE_ASSERT, "(secondIndex == firstIndex + 1 || (firstIndex == hullPointCount - 1 && secondIndex == 0))", (const char *)&queryFormat, "secondIndex == firstIndex + 1 || (firstIndex == hullPointCount - 1 && secondIndex == 0)") )
    __debugbreak();
  v12 = hullOrder[v10];
  v13 = hullOrder[secondIndex];
  v14 = 0;
  v15 = pointCount - 1;
  *(float *)&_XMM6 = FLOAT_0_001;
  v17 = points[v12].v[1];
  v19 = LODWORD(points[v13].v[0]);
  *(float *)&v19 = points[v13].v[0] - points[v12].v[0];
  v18 = v19;
  v20 = v17 - points[v13].v[1];
  *(float *)&v19 = fsqrt((float)(*(float *)&v19 * *(float *)&v19) + (float)(v20 * v20));
  _XMM3 = v19;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v25 = v18;
  *(float *)&v25 = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM0);
  v24 = v25;
  v26 = v20 * (float)(1.0 / *(float *)&_XMM0);
  v27 = (float)(v26 * points[v12].v[0]) + (float)(*(float *)&v25 * v17);
  v28 = -1;
  if ( (int)v15 >= 0 )
  {
    v29 = (int)v15;
    v30 = 0i64;
    while ( 1 )
    {
      v31 = v24;
      *(float *)&v31 = (float)((float)(*(float *)&v24 * points[pointOrder[v30]].v[1]) + (float)(v26 * points[pointOrder[v30]].v[0])) - v27;
      v32 = v31;
      if ( *(float *)&v31 > 0.0 )
        break;
LABEL_16:
      if ( v14 > (int)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 103, ASSERT_TYPE_SANITY, "( botIndex <= topIndex )", (const char *)&queryFormat, "botIndex <= topIndex") )
        __debugbreak();
      v36 = v24;
      *(float *)&v36 = (float)((float)(*(float *)&v24 * points[pointOrder[v29]].v[1]) + (float)(v26 * points[pointOrder[v29]].v[0])) - v27;
      _XMM2 = v36;
      if ( *(float *)&v36 <= 0.0 )
      {
        do
        {
          v15 = (unsigned int)(v15 - 1);
          if ( v30 > --v29 )
            goto LABEL_28;
          v38 = v24;
          *(float *)&v38 = (float)((float)(*(float *)&v24 * points[pointOrder[v29]].v[1]) + (float)(v26 * points[pointOrder[v29]].v[0])) - v27;
          _XMM2 = v38;
        }
        while ( *(float *)&v38 <= 0.0 );
      }
      v39 = v14;
      if ( *(float *)&_XMM2 <= *(float *)&_XMM6 )
        v39 = v28;
      v28 = v39;
      __asm { vmaxss  xmm6, xmm2, xmm6 }
      if ( v14 >= (int)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 121, ASSERT_TYPE_SANITY, "( botIndex < topIndex )", (const char *)&queryFormat, "botIndex < topIndex") )
        __debugbreak();
      v40 = (unsigned int)v14;
      ++v30;
      ++v14;
      --v29;
      v41 = pointOrder[v40];
      pointOrder[v40] = pointOrder[v15];
      pointOrder[v15] = v41;
      v15 = (unsigned int)(v15 - 1);
      if ( v14 > (int)v15 )
        goto LABEL_28;
    }
    while ( 1 )
    {
      v33 = v14;
      if ( *(float *)&v32 <= *(float *)&_XMM6 )
        v33 = v28;
      ++v14;
      ++v30;
      v28 = v33;
      _XMM3 = v32;
      if ( v30 > v29 )
        break;
      __asm { vmaxss  xmm6, xmm3, xmm6 }
      v35 = v24;
      *(float *)&v35 = (float)((float)(*(float *)&v24 * points[pointOrder[v30]].v[1]) + (float)(v26 * points[pointOrder[v30]].v[0])) - v27;
      v32 = v35;
      if ( *(float *)&v35 <= 0.0 )
        goto LABEL_16;
    }
LABEL_28:
    v11 = hullPointCount;
  }
  if ( (_DWORD)v15 != v14 - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 129, ASSERT_TYPE_SANITY, "( topIndex == botIndex - 1 )", (const char *)&queryFormat, "topIndex == botIndex - 1") )
    __debugbreak();
  if ( v28 > (int)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 130, ASSERT_TYPE_SANITY, "( frontIndex <= topIndex )", (const char *)&queryFormat, "frontIndex <= topIndex") )
    __debugbreak();
  if ( v28 < 0 )
    return v11;
  v43 = pointOrder[v28];
  pointOrder[v28] = pointOrder[v15];
  v44 = firstIndex + 1;
  pointOrder[v15] = v43;
  v45 = pointOrder[(int)v15];
  if ( (unsigned int)v44 > v11 )
  {
    LODWORD(v48) = firstIndex + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 58, ASSERT_TYPE_ASSERT, "( newIndex ) <= ( hullPointCount )", "newIndex not in [0, hullPointCount]\n\t%u not in [0, %u]", v48, v11) )
      __debugbreak();
  }
  memmove_0(&hullOrder[firstIndex + 2], &hullOrder[v44], 4i64 * (v11 - (unsigned int)v44));
  ++v11;
  hullOrder[v44] = v45;
  if ( !(_DWORD)v15 )
    return v11;
  v46 = secondIndex;
  if ( secondIndex )
    v46 = firstIndex + 2;
  v47 = Com_RecursivelyGrowHull(points, pointOrder, v15, v44, v46, hullOrder, v11);
  return Com_RecursivelyGrowHull(points, pointOrder, v15, firstIndex, firstIndex + 1, hullOrder, v47);
}

/*
==============
Com_TranslatePoints
==============
*/
void Com_TranslatePoints(vec2_t *points, unsigned int pointCount, const vec2_t *offset)
{
  __int64 v3; 
  vec2_t *v4; 
  unsigned int v5; 
  __int64 v6; 
  float v7; 
  vec2_t *v8; 
  __int64 v9; 
  float v10; 

  v3 = 0i64;
  if ( pointCount >= 4 )
  {
    v4 = points + 1;
    v5 = ((pointCount - 4) >> 2) + 1;
    v6 = v5;
    v3 = 4 * v5;
    do
    {
      v7 = v4[-1].v[0];
      v4 += 4;
      v4[-5].v[0] = v7 + offset->v[0];
      v4[-5].v[1] = v4[-5].v[1] + offset->v[1];
      v4[-4].v[0] = v4[-4].v[0] + offset->v[0];
      v4[-4].v[1] = offset->v[1] + v4[-4].v[1];
      v4[-3].v[0] = v4[-3].v[0] + offset->v[0];
      v4[-3].v[1] = offset->v[1] + v4[-3].v[1];
      v4[-2].v[0] = v4[-2].v[0] + offset->v[0];
      v4[-2].v[1] = offset->v[1] + v4[-2].v[1];
      --v6;
    }
    while ( v6 );
  }
  if ( (unsigned int)v3 < pointCount )
  {
    v8 = &points[v3];
    v9 = pointCount - (unsigned int)v3;
    do
    {
      v10 = v8->v[0];
      ++v8;
      v8[-1].v[0] = v10 + offset->v[0];
      v8[-1].v[1] = offset->v[1] + v8[-1].v[1];
      --v9;
    }
    while ( v9 );
  }
}

