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
  __int64 v8; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  char *v18; 
  unsigned int v19; 
  __int64 v21; 
  unsigned int *v30; 
  __int64 v31; 
  __int64 result; 
  vec2_t offset; 
  unsigned int hullOrder; 
  char v46; 
  unsigned int pointOrder[64]; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  v8 = pointCount;
  _RBX = points;
  if ( pointCount - 3 > 0x3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 295, ASSERT_TYPE_ASSERT, "( 3 ) <= ( pointCount ) && ( pointCount ) <= ( ( sizeof( *array_counter( pointOrder ) ) + 0 ) )", "pointCount not in [3, ARRAY_COUNT( pointOrder )]\n\t%i not in [%i, %i]", pointCount, 3, 64) )
    __debugbreak();
  if ( hull == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 297, ASSERT_TYPE_ASSERT, "(hull != points)", (const char *)&queryFormat, "hull != points") )
    __debugbreak();
  if ( hull < &_RBX[v8] && _RBX < &hull[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 298, ASSERT_TYPE_ASSERT, "(hull >= points + pointCount || points >= hull + pointCount)", (const char *)&queryFormat, "hull >= points + pointCount || points >= hull + pointCount") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [rbx]
    vmovss  xmm9, dword ptr [rbx+4]
    vxorps  xmm6, xmm8, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm7, xmm9, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rsp+2B8h+offset], xmm6
    vmovss  dword ptr [rsp+2B8h+offset+4], xmm7
  }
  Com_TranslatePoints(_RBX, v8, &offset);
  Com_InitialHull(_RBX, pointOrder, v8, &hullOrder);
  v15 = Com_GrowInitialHull(_RBX, pointOrder, v8 - 2, &hullOrder);
  v16 = 0i64;
  v17 = v15;
  if ( v15 >= 4 )
  {
    v18 = &v46;
    v19 = ((v15 - 4) >> 2) + 1;
    _RDX = (char *)&hull[2].y;
    v21 = v19;
    v16 = 4 * v19;
    do
    {
      _RDX += 32;
      v18 += 16;
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [rbx+rax*8]
        vmovss  dword ptr [rdx-34h], xmm0
        vaddss  xmm1, xmm9, dword ptr [rbx+rax*8+4]
        vmovss  dword ptr [rdx-30h], xmm1
        vaddss  xmm0, xmm8, dword ptr [rbx+rax*8]
        vmovss  dword ptr [rdx-2Ch], xmm0
        vaddss  xmm1, xmm9, dword ptr [rbx+rax*8+4]
        vmovss  dword ptr [rdx-28h], xmm1
        vaddss  xmm0, xmm8, dword ptr [rbx+rax*8]
        vmovss  dword ptr [rdx-24h], xmm0
        vaddss  xmm1, xmm9, dword ptr [rbx+rax*8+4]
        vmovss  dword ptr [rdx-20h], xmm1
        vaddss  xmm0, xmm8, dword ptr [rbx+rax*8]
        vmovss  dword ptr [rdx-1Ch], xmm0
        vaddss  xmm1, xmm9, dword ptr [rbx+rax*8+4]
        vmovss  dword ptr [rdx-18h], xmm1
      }
      --v21;
    }
    while ( v21 );
  }
  if ( (unsigned int)v16 < v15 )
  {
    v30 = &hullOrder + v16;
    v31 = v15 - (unsigned int)v16;
    _RCX = &hull[v16];
    do
    {
      _RAX = *v30;
      ++_RCX;
      ++v30;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rax*8]
        vsubss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rcx-8], xmm1
        vmovss  xmm2, dword ptr [rbx+rax*8+4]
        vsubss  xmm0, xmm2, xmm7
        vmovss  dword ptr [rcx-4], xmm0
      }
      --v31;
    }
    while ( v31 );
  }
  result = v17;
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
Com_ConvexHullOrder
==============
*/
unsigned int Com_ConvexHullOrder(vec2_t *points, unsigned int *pointOrder, unsigned int pointCount, unsigned int *hullOrder)
{
  vec2_t offset; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, dword ptr [rcx], 2
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, dword ptr [rcx+4], 2
    vmovss  dword ptr [rsp+58h+offset], xmm0
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rsp+58h+offset+4], xmm0
  }
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
  unsigned int *v11; 
  unsigned int *v14; 
  __int64 v16; 
  __int64 v18; 
  int v19; 
  int v20; 
  unsigned __int64 v41; 
  bool v42; 
  bool v43; 
  unsigned __int64 v44; 
  int v49; 
  int v54; 
  bool v55; 
  bool v56; 
  int v65; 
  unsigned int v66; 
  unsigned int v74; 
  __int64 v75; 
  unsigned int *v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int *hullOrdera; 
  __int64 hullPointCount; 
  int v87; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  v11 = hullOrder;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  _R13 = points;
  v14 = pointOrder;
  __asm
  {
    vmovaps [rsp+108h+var_98], xmm10
    vmovaps [rsp+108h+var_A8], xmm11
  }
  if ( !pointCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 167, ASSERT_TYPE_ASSERT, "(pointCount >= 1)", (const char *)&queryFormat, "pointCount >= 1") )
      __debugbreak();
    v14 = pointOrder;
  }
  _RAX = *v11;
  v16 = pointCount - 1;
  _RCX = v11[1];
  v18 = 0i64;
  v19 = -1;
  v20 = -1;
  __asm
  {
    vmovss  xmm5, dword ptr [r13+rax*8+0]
    vmovss  xmm0, dword ptr [r13+rcx*8+4]
    vsubss  xmm3, xmm0, dword ptr [r13+rax*8+4]
    vsubss  xmm4, xmm5, dword ptr [r13+rcx*8+0]
    vmovss  xmm7, cs:__real@3a83126f
    vmovss  xmm6, cs:__real@ba83126f
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm10, xmm4, xmm1
    vmulss  xmm0, xmm10, dword ptr [r13+rax*8+4]
    vmulss  xmm9, xmm3, xmm1
    vmulss  xmm1, xmm9, xmm5
    vaddss  xmm11, xmm1, xmm0
  }
  if ( (int)v16 >= 0 )
  {
    __asm
    {
      vmovaps [rsp+108h+var_78], xmm8
      vxorps  xmm8, xmm8, xmm8
    }
    v41 = (int)v16;
    v42 = 0;
    v43 = 1;
    v44 = 0i64;
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm10, dword ptr [r13+rax*8+4]
        vmulss  xmm0, xmm9, dword ptr [r13+rax*8+0]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm11
        vcomiss xmm2, xmm8
      }
      if ( !v42 )
        break;
LABEL_12:
      __asm { vcomiss xmm6, xmm2 }
      v54 = v18;
      v87 = v18;
      if ( v43 )
        v54 = v20;
      __asm { vminss  xmm6, xmm2, xmm6 }
      v55 = (unsigned int)v18 <= (unsigned int)v16;
      if ( (int)v18 > (int)v16 )
      {
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 203, ASSERT_TYPE_SANITY, "( botIndex <= topIndex )", (const char *)&queryFormat, "botIndex <= topIndex");
        v55 = !v56;
        if ( v56 )
          __debugbreak();
        v14 = pointOrder;
      }
      __asm
      {
        vmulss  xmm1, xmm10, dword ptr [r13+rax*8+4]
        vmulss  xmm0, xmm9, dword ptr [r13+rax*8+0]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm11
        vcomiss xmm2, xmm8
      }
      if ( v55 )
      {
        do
        {
          __asm { vcomiss xmm6, xmm2 }
          v20 = v16;
          if ( v55 )
            v20 = v54;
          v16 = (unsigned int)(v16 - 1);
          --v41;
          __asm { vmovaps xmm3, xmm2 }
          v55 = v44 <= v41;
          if ( (__int64)v44 > (__int64)v41 )
            goto LABEL_32;
          v54 = v20;
          __asm
          {
            vminss  xmm6, xmm3, xmm6
            vmulss  xmm1, xmm10, dword ptr [r13+rax*8+4]
            vmulss  xmm0, xmm9, dword ptr [r13+rax*8+0]
            vaddss  xmm1, xmm1, xmm0
            vsubss  xmm2, xmm1, xmm11
            vcomiss xmm2, xmm8
          }
        }
        while ( v44 <= v41 );
      }
      __asm { vcomiss xmm2, xmm7 }
      v65 = v18;
      v20 = v16;
      if ( v55 )
        v65 = v19;
      v19 = v65;
      __asm { vmaxss  xmm7, xmm2, xmm7 }
      if ( (int)v18 >= (int)v16 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 226, ASSERT_TYPE_SANITY, "( botIndex < topIndex )", (const char *)&queryFormat, "botIndex < topIndex") )
          __debugbreak();
        v14 = pointOrder;
      }
      v66 = v14[v18];
      v14[v18] = v14[v16];
      ++v44;
      v18 = (unsigned int)(v18 + 1);
      v14[v16] = v66;
      v16 = (unsigned int)(v16 - 1);
      --v41;
      if ( v54 != v87 )
        v20 = v54;
      v42 = (unsigned int)v18 < (unsigned int)v16;
      v43 = (unsigned int)v18 <= (unsigned int)v16;
      if ( (int)v18 > (int)v16 )
        goto LABEL_32;
    }
    while ( 1 )
    {
      __asm { vcomiss xmm2, xmm7 }
      v49 = v18;
      if ( v43 )
        v49 = v19;
      v18 = (unsigned int)(v18 + 1);
      ++v44;
      v19 = v49;
      __asm { vmovaps xmm3, xmm2 }
      v43 = v44 <= v41;
      if ( (__int64)v44 > (__int64)v41 )
        break;
      __asm
      {
        vmaxss  xmm7, xmm3, xmm7
        vmulss  xmm1, xmm10, dword ptr [r13+rax*8+4]
        vmulss  xmm0, xmm9, dword ptr [r13+rax*8+0]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm11
        vcomiss xmm2, xmm8
      }
      if ( v44 < v41 )
        goto LABEL_12;
    }
LABEL_32:
    v11 = hullOrder;
    __asm { vmovaps xmm8, [rsp+108h+var_78] }
  }
  __asm
  {
    vmovaps xmm11, [rsp+108h+var_A8]
    vmovaps xmm10, [rsp+108h+var_98]
    vmovaps xmm9, [rsp+108h+var_88]
    vmovaps xmm7, [rsp+108h+var_68]
    vmovaps xmm6, [rsp+108h+var_58]
  }
  if ( (_DWORD)v16 != (_DWORD)v18 - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 236, ASSERT_TYPE_SANITY, "( topIndex == botIndex - 1 )", (const char *)&queryFormat, "topIndex == botIndex - 1") )
    __debugbreak();
  if ( v19 < 0 && v20 < 0 )
    return 0i64;
  v74 = 2;
  if ( v19 < 0 )
  {
    v76 = pointOrder;
  }
  else
  {
    if ( v19 > (int)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 244, ASSERT_TYPE_SANITY, "( frontIndex <= topIndex )", (const char *)&queryFormat, "frontIndex <= topIndex") )
      __debugbreak();
    v75 = (unsigned int)v19;
    v76 = pointOrder;
    v77 = pointOrder[v75];
    pointOrder[v75] = pointOrder[v16];
    pointOrder[v16] = v77;
    v78 = pointOrder[(int)v16];
    memmove_0(v11 + 3, v11 + 2, 0i64);
    v11[2] = v78;
    v74 = 3;
    if ( (int)v16 > 0 )
    {
      v79 = Com_RecursivelyGrowHull(_R13, pointOrder, v16, 2u, 0, v11, 3u);
      v74 = Com_RecursivelyGrowHull(_R13, pointOrder, v16, 1u, 2u, v11, v79);
    }
  }
  if ( v20 >= 0 )
  {
    if ( v20 < (int)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 258, ASSERT_TYPE_SANITY, "( backIndex >= botIndex )", (const char *)&queryFormat, "backIndex >= botIndex") )
      __debugbreak();
    v80 = v76[v20];
    v76[v20] = v76[v18];
    v76[v18] = v80;
    v81 = v76[(int)v18];
    if ( !v74 )
    {
      LODWORD(hullPointCount) = 0;
      LODWORD(hullOrdera) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 58, ASSERT_TYPE_ASSERT, "( newIndex ) <= ( hullPointCount )", "newIndex not in [0, hullPointCount]\n\t%u not in [0, %u]", hullOrdera, hullPointCount) )
        __debugbreak();
    }
    memmove_0(v11 + 2, v11 + 1, 4i64 * (v74++ - 1));
    v11[1] = v81;
    v82 = pointCount - v18 - 1;
    if ( pointCount - (_DWORD)v18 != 1 )
    {
      v83 = Com_RecursivelyGrowHull(_R13, &v76[(int)v18 + 1], v82, 1u, 2u, v11, v74);
      return Com_RecursivelyGrowHull(_R13, &v76[(int)v18 + 1], v82, 0, 1u, v11, v83);
    }
  }
  return v74;
}

/*
==============
Com_InitialHull
==============
*/
void Com_InitialHull(const vec2_t *points, unsigned int *pointOrder, unsigned int pointCount, unsigned int *hullOrder)
{
  unsigned int v4; 
  unsigned int v9; 
  bool v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int *v13; 
  bool v23; 
  unsigned int *v24; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 

  v4 = 1;
  _RBX = 0i64;
  *pointOrder = 0;
  v9 = 0;
  if ( pointCount <= 1 )
    goto LABEL_37;
  v10 = pointCount - 1 < 4;
  if ( pointCount - 1 >= 4 )
  {
    v11 = 3;
    v12 = pointCount - 3;
    v13 = pointOrder + 3;
    _R9 = (char *)&points[2].y;
    do
    {
      *(v13 - 2) = v4;
      __asm { vmovss  xmm0, dword ptr [r9-8] }
      _RAX = v9;
      __asm { vcomiss xmm0, dword ptr [rcx+rax*8+4] }
      if ( v10 )
      {
        __asm { vcomiss xmm0, dword ptr [rcx+rbx*8+4] }
        if ( v10 )
          _RBX = v4;
      }
      else
      {
        v9 = v4;
      }
      _RAX = v9;
      *(v13 - 1) = v11 - 1;
      __asm
      {
        vmovss  xmm0, dword ptr [r9]
        vcomiss xmm0, dword ptr [rcx+rax*8+4]
      }
      if ( v10 )
      {
        __asm { vcomiss xmm0, dword ptr [rcx+rbx*8+4] }
        if ( v10 )
          _RBX = v11 - 1;
      }
      else
      {
        v9 = v11 - 1;
      }
      *v13 = v11;
      __asm { vmovss  xmm0, dword ptr [r9+8] }
      _RAX = v9;
      __asm { vcomiss xmm0, dword ptr [rcx+rax*8+4] }
      if ( v10 )
      {
        __asm { vcomiss xmm0, dword ptr [rcx+rbx*8+4] }
        if ( v10 )
          _RBX = v11;
      }
      else
      {
        v9 = v11;
      }
      _RAX = v9;
      v13[1] = v11 + 1;
      __asm
      {
        vmovss  xmm0, dword ptr [r9+10h]
        vcomiss xmm0, dword ptr [rcx+rax*8+4]
      }
      if ( v10 )
      {
        __asm { vcomiss xmm0, dword ptr [rcx+rbx*8+4] }
        if ( v10 )
          _RBX = v11 + 1;
      }
      else
      {
        v9 = v11 + 1;
      }
      v13 += 4;
      _R9 += 32;
      v4 += 4;
      v11 += 4;
      v10 = v4 < v12;
    }
    while ( v4 < v12 );
  }
  v23 = v4 < pointCount;
  if ( v4 < pointCount )
  {
    v24 = &pointOrder[v4];
    _R8 = (float *)&points[v4] + 1;
    do
    {
      *v24 = v4;
      __asm { vmovss  xmm0, dword ptr [r8] }
      _RAX = v9;
      __asm { vcomiss xmm0, dword ptr [rcx+rax*8+4] }
      if ( v23 )
      {
        __asm { vcomiss xmm0, dword ptr [rcx+rbx*8+4] }
        if ( v23 )
          _RBX = v4;
      }
      else
      {
        v9 = v4;
      }
      ++v24;
      _R8 += 2;
      v23 = ++v4 < pointCount;
    }
    while ( v4 < pointCount );
  }
  if ( (_DWORD)_RBX == v9 )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 35, ASSERT_TYPE_SANITY, "( minIndex != maxIndex )", (const char *)&queryFormat, "minIndex != maxIndex") )
      __debugbreak();
  }
  v28 = pointCount - 1;
  *hullOrder = _RBX;
  hullOrder[1] = v9;
  v29 = pointCount - 2;
  v30 = (unsigned int)v28;
  v31 = pointOrder[v28];
  if ( (unsigned int)_RBX <= v9 )
  {
    v34 = pointOrder[v9];
    pointOrder[v9] = v31;
    pointOrder[v30] = v34;
    v33 = pointOrder[(unsigned int)_RBX];
    pointOrder[(unsigned int)_RBX] = pointOrder[v29];
  }
  else
  {
    v32 = pointOrder[(unsigned int)_RBX];
    pointOrder[(unsigned int)_RBX] = v31;
    pointOrder[v30] = v32;
    v33 = pointOrder[v9];
    pointOrder[v9] = pointOrder[v29];
  }
  pointOrder[v29] = v33;
}

/*
==============
Com_RecursivelyGrowHull
==============
*/
unsigned int Com_RecursivelyGrowHull(const vec2_t *points, unsigned int *pointOrder, unsigned int pointCount, unsigned int firstIndex, unsigned int secondIndex, unsigned int *hullOrder, unsigned int hullPointCount)
{
  __int64 v16; 
  unsigned int v17; 
  int v20; 
  bool v21; 
  bool v22; 
  __int64 v23; 
  int v42; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  int v50; 
  bool v55; 
  bool v56; 
  int v64; 
  __int64 v65; 
  unsigned int v66; 
  unsigned int result; 
  unsigned int v68; 
  __int64 v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned int *v79; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  _R14 = points;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  v16 = firstIndex;
  __asm
  {
    vmovaps [rsp+0E8h+var_88], xmm9
    vmovaps [rsp+0E8h+var_98], xmm10
  }
  if ( !pointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 76, ASSERT_TYPE_ASSERT, "(pointCount > 0)", (const char *)&queryFormat, "pointCount > 0") )
    __debugbreak();
  v17 = hullPointCount;
  if ( secondIndex != (_DWORD)v16 + 1 && ((_DWORD)v16 != hullPointCount - 1 || secondIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 77, ASSERT_TYPE_ASSERT, "(secondIndex == firstIndex + 1 || (firstIndex == hullPointCount - 1 && secondIndex == 0))", (const char *)&queryFormat, "secondIndex == firstIndex + 1 || (firstIndex == hullPointCount - 1 && secondIndex == 0)") )
    __debugbreak();
  _RDX = hullOrder[v16];
  _RCX = hullOrder[secondIndex];
  v20 = 0;
  v21 = pointCount == 0;
  LODWORD(v23) = pointCount - 1;
  v22 = v21 || (_DWORD)v23 == 0;
  v23 = (unsigned int)v23;
  __asm
  {
    vmovss  xmm6, cs:__real@3a83126f
    vmovss  xmm7, dword ptr [r14+rdx*8+4]
    vmovss  xmm0, dword ptr [r14+rcx*8]
    vsubss  xmm4, xmm0, dword ptr [r14+rdx*8]
    vsubss  xmm5, xmm7, dword ptr [r14+rcx*8+4]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm9, xmm4, xmm1
    vmulss  xmm8, xmm5, xmm1
    vmulss  xmm1, xmm8, dword ptr [r14+rdx*8]
    vmulss  xmm0, xmm9, xmm7
    vaddss  xmm10, xmm1, xmm0
  }
  v42 = -1;
  if ( (int)v23 >= 0 )
  {
    v43 = (int)v23;
    v44 = 0i64;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [r14+rax*8+4]
        vmulss  xmm0, xmm8, dword ptr [r14+rax*8]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm10
        vcomiss xmm2, xmm7
      }
      if ( !v22 )
        break;
LABEL_16:
      v55 = v20 <= (unsigned int)v23;
      if ( v20 > (int)v23 )
      {
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 103, ASSERT_TYPE_SANITY, "( botIndex <= topIndex )", (const char *)&queryFormat, "botIndex <= topIndex");
        v55 = !v56;
        if ( v56 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [r14+rax*8+4]
        vmulss  xmm0, xmm8, dword ptr [r14+rax*8]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm10
        vcomiss xmm2, xmm7
      }
      if ( v55 )
      {
        do
        {
          v23 = (unsigned int)(v23 - 1);
          v55 = v44 <= --v43;
          if ( (__int64)v44 > (__int64)v43 )
            goto LABEL_28;
          __asm
          {
            vmulss  xmm1, xmm9, dword ptr [r14+rax*8+4]
            vmulss  xmm0, xmm8, dword ptr [r14+rax*8]
            vaddss  xmm1, xmm1, xmm0
            vsubss  xmm2, xmm1, xmm10
            vcomiss xmm2, xmm7
          }
        }
        while ( v44 <= v43 );
      }
      __asm { vcomiss xmm2, xmm6 }
      v64 = v20;
      if ( v55 )
        v64 = v42;
      v42 = v64;
      __asm { vmaxss  xmm6, xmm2, xmm6 }
      if ( v20 >= (int)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 121, ASSERT_TYPE_SANITY, "( botIndex < topIndex )", (const char *)&queryFormat, "botIndex < topIndex") )
        __debugbreak();
      v65 = (unsigned int)v20;
      ++v44;
      ++v20;
      --v43;
      v66 = pointOrder[v65];
      pointOrder[v65] = pointOrder[v23];
      pointOrder[v23] = v66;
      v23 = (unsigned int)(v23 - 1);
      v22 = v20 <= (unsigned int)v23;
      if ( v20 > (int)v23 )
        goto LABEL_28;
    }
    while ( 1 )
    {
      __asm { vcomiss xmm2, xmm6 }
      v50 = v20;
      if ( v22 )
        v50 = v42;
      ++v20;
      ++v44;
      v42 = v50;
      __asm { vmovaps xmm3, xmm2 }
      v22 = v44 <= v43;
      if ( (__int64)v44 > (__int64)v43 )
        break;
      __asm
      {
        vmaxss  xmm6, xmm3, xmm6
        vmulss  xmm1, xmm9, dword ptr [r14+rax*8+4]
        vmulss  xmm0, xmm8, dword ptr [r14+rax*8]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm10
        vcomiss xmm2, xmm7
      }
      if ( v44 <= v43 )
        goto LABEL_16;
    }
LABEL_28:
    v17 = hullPointCount;
  }
  if ( (_DWORD)v23 != v20 - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 129, ASSERT_TYPE_SANITY, "( topIndex == botIndex - 1 )", (const char *)&queryFormat, "topIndex == botIndex - 1") )
    __debugbreak();
  if ( v42 > (int)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 130, ASSERT_TYPE_SANITY, "( frontIndex <= topIndex )", (const char *)&queryFormat, "frontIndex <= topIndex") )
    __debugbreak();
  if ( v42 < 0 )
    goto LABEL_36;
  v68 = pointOrder[v42];
  pointOrder[v42] = pointOrder[v23];
  v69 = firstIndex + 1;
  pointOrder[v23] = v68;
  v70 = pointOrder[(int)v23];
  if ( (unsigned int)v69 > v17 )
  {
    LODWORD(v79) = firstIndex + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_convexhull.cpp", 58, ASSERT_TYPE_ASSERT, "( newIndex ) <= ( hullPointCount )", "newIndex not in [0, hullPointCount]\n\t%u not in [0, %u]", v79, v17) )
      __debugbreak();
  }
  memmove_0(&hullOrder[firstIndex + 2], &hullOrder[v69], 4i64 * (v17 - (unsigned int)v69));
  ++v17;
  hullOrder[v69] = v70;
  if ( (_DWORD)v23 )
  {
    v71 = secondIndex;
    if ( secondIndex )
      v71 = firstIndex + 2;
    v72 = Com_RecursivelyGrowHull(_R14, pointOrder, v23, v69, v71, hullOrder, v17);
    result = Com_RecursivelyGrowHull(_R14, pointOrder, v23, firstIndex, firstIndex + 1, hullOrder, v72);
  }
  else
  {
LABEL_36:
    result = v17;
  }
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return result;
}

/*
==============
Com_TranslatePoints
==============
*/
void Com_TranslatePoints(vec2_t *points, unsigned int pointCount, const vec2_t *offset)
{
  __int64 v3; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v24; 

  v3 = 0i64;
  if ( pointCount >= 4 )
  {
    _R9 = points + 1;
    v5 = ((pointCount - 4) >> 2) + 1;
    v6 = v5;
    v3 = 4 * v5;
    do
    {
      __asm { vmovss  xmm0, dword ptr [r9-8] }
      _R9 += 4;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [r8]
        vmovss  dword ptr [r9-28h], xmm1
        vmovss  xmm0, dword ptr [r9-24h]
        vaddss  xmm1, xmm0, dword ptr [r8+4]
        vmovss  dword ptr [r9-24h], xmm1
        vmovss  xmm2, dword ptr [r9-20h]
        vaddss  xmm0, xmm2, dword ptr [r8]
        vmovss  dword ptr [r9-20h], xmm0
        vmovss  xmm1, dword ptr [r8+4]
        vaddss  xmm0, xmm1, dword ptr [r9-1Ch]
        vmovss  dword ptr [r9-1Ch], xmm0
        vmovss  xmm1, dword ptr [r9-18h]
        vaddss  xmm0, xmm1, dword ptr [r8]
        vmovss  dword ptr [r9-18h], xmm0
        vmovss  xmm1, dword ptr [r8+4]
        vaddss  xmm0, xmm1, dword ptr [r9-14h]
        vmovss  dword ptr [r9-14h], xmm0
        vmovss  xmm1, dword ptr [r9-10h]
        vaddss  xmm0, xmm1, dword ptr [r8]
        vmovss  dword ptr [r9-10h], xmm0
        vmovss  xmm1, dword ptr [r8+4]
        vaddss  xmm0, xmm1, dword ptr [r9-0Ch]
        vmovss  dword ptr [r9-0Ch], xmm0
      }
      --v6;
    }
    while ( v6 );
  }
  if ( (unsigned int)v3 < pointCount )
  {
    _RCX = &points[v3];
    v24 = pointCount - (unsigned int)v3;
    do
    {
      __asm { vmovss  xmm0, dword ptr [rcx] }
      ++_RCX;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [r8]
        vmovss  dword ptr [rcx-8], xmm1
        vmovss  xmm0, dword ptr [r8+4]
        vaddss  xmm1, xmm0, dword ptr [rcx-4]
        vmovss  dword ptr [rcx-4], xmm1
      }
      --v24;
    }
    while ( v24 );
  }
}

