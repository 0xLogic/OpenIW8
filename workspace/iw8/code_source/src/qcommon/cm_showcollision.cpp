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
  bool v12; 
  bool v13; 
  bool v15; 
  bool v16; 
  bool v20; 
  bool v21; 
  bool v22; 
  bool v30; 
  bool v31; 
  bool v34; 
  bool v35; 
  bool v40; 
  bool v41; 
  bool v44; 
  bool v45; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 

  _RDI = i;
  _RSI = (vec3_t *)pt;
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _RBP = j;
  _RBX = &w->numpoints + 3 * index0;
  _R15 = (char *)w + 12 * index1;
  v12 = i == 3;
  if ( (unsigned int)i >= 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", i, 3) )
      __debugbreak();
    LODWORD(v61) = 3;
    LODWORD(v52) = _RDI;
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v61);
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r15+rdi*4+4]
    vucomiss xmm0, dword ptr [rbx+rdi*4+4]
  }
  if ( v12 )
  {
    v15 = (_DWORD)_RBP == 3;
    if ( (unsigned int)_RBP >= 3 )
    {
      LODWORD(v60) = 3;
      LODWORD(v51) = _RBP;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v60) )
        __debugbreak();
      LODWORD(v62) = 3;
      LODWORD(v53) = _RBP;
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v53, v62);
      v15 = !v16;
      if ( v16 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15+rbp*4+4]
      vucomiss xmm0, dword ptr [rbx+rbp*4+4]
    }
    if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 207, ASSERT_TYPE_ASSERT, "(w->p[index0][i] != w->p[index1][i] || w->p[index0][j] != w->p[index1][j])", (const char *)&queryFormat, "w->p[index0][i] != w->p[index1][i] || w->p[index0][j] != w->p[index1][j]") )
      __debugbreak();
  }
  if ( (unsigned int)_RDI >= 3 )
  {
    LODWORD(v60) = 3;
    LODWORD(v51) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v60) )
      __debugbreak();
    LODWORD(v63) = 3;
    LODWORD(v54) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v54, v63) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r15+rdi*4+4]
    vsubss  xmm6, xmm0, dword ptr [rbx+rdi*4+4]
  }
  v20 = (unsigned int)_RBP < 3;
  v21 = (unsigned int)_RBP <= 3;
  if ( (unsigned int)_RBP >= 3 )
  {
    LODWORD(v60) = 3;
    LODWORD(v51) = _RBP;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v60) )
      __debugbreak();
    LODWORD(v64) = 3;
    LODWORD(v55) = _RBP;
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v55, v64);
    v20 = 0;
    v21 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r15+rbp*4+4]
    vsubss  xmm3, xmm0, dword ptr [rbx+rbp*4+4]
    vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm2, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, xmm0
    vcmpless xmm0, xmm0, xmm2
    vblendvps xmm1, xmm3, xmm6, xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  if ( v20 )
    LODWORD(_RDI) = _RBP;
  __asm { vcomiss xmm1, xmm0 }
  if ( !v21 )
  {
    v30 = (unsigned int)_RDI <= 3;
    if ( (unsigned int)_RDI >= 3 )
    {
      LODWORD(v60) = 3;
      LODWORD(v51) = _RDI;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v60) )
        __debugbreak();
      LODWORD(v65) = 3;
      LODWORD(v56) = _RDI;
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v56, v65);
      v30 = !v31;
      if ( v31 )
        __debugbreak();
    }
    _RBP = (int)_RDI;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+rbp*4+4]
      vcomiss xmm0, dword ptr [rbx+rbp*4+4]
    }
    if ( v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 224, ASSERT_TYPE_ASSERT, "(w->p[index0][axis] < w->p[index1][axis])", (const char *)&queryFormat, "w->p[index0][axis] < w->p[index1][axis]") )
      __debugbreak();
    v34 = (unsigned int)_RDI <= 3;
    if ( (unsigned int)_RDI >= 3 )
    {
      LODWORD(v60) = 3;
      LODWORD(v51) = _RDI;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v60) )
        __debugbreak();
      LODWORD(v66) = 3;
      LODWORD(v57) = _RDI;
      v35 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v57, v66);
      v34 = !v35;
      if ( v35 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rbp*4+4]
      vcomiss xmm0, dword ptr [rsi+rbp*4]
    }
    if ( v34 )
    {
      _RBX = vec3_t::operator[](_RSI, _RDI);
      _RAX = vec3_t::operator[]((vec3_t *)(_R15 + 4), _RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vcomiss xmm0, dword ptr [rbx]
      }
      if ( v20 )
        goto LABEL_60;
      goto LABEL_61;
    }
LABEL_58:
    _RBX[1] = LODWORD(_RSI->v[0]);
    _RBX[2] = LODWORD(_RSI->v[1]);
    _RBX[3] = LODWORD(_RSI->v[2]);
    goto LABEL_61;
  }
  v40 = (unsigned int)_RDI < 3;
  if ( (unsigned int)_RDI >= 3 )
  {
    LODWORD(v60) = 3;
    LODWORD(v51) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v60) )
      __debugbreak();
    LODWORD(v67) = 3;
    LODWORD(v58) = _RDI;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v67);
    v40 = 0;
    if ( v41 )
      __debugbreak();
  }
  _RBP = (int)_RDI;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+rbp*4+4]
    vcomiss xmm0, dword ptr [rbx+rbp*4+4]
  }
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 232, ASSERT_TYPE_ASSERT, "(w->p[index0][axis] > w->p[index1][axis])", (const char *)&queryFormat, "w->p[index0][axis] > w->p[index1][axis]") )
    __debugbreak();
  v44 = (unsigned int)_RDI < 3;
  if ( (unsigned int)_RDI >= 3 )
  {
    LODWORD(v60) = 3;
    LODWORD(v51) = _RDI;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v60) )
      __debugbreak();
    LODWORD(v68) = 3;
    LODWORD(v59) = _RDI;
    v45 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v59, v68);
    v44 = 0;
    if ( v45 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rbp*4+4]
    vcomiss xmm0, dword ptr [rsi+rbp*4]
  }
  if ( v44 )
    goto LABEL_58;
  _RBX = vec3_t::operator[](_RSI, _RDI);
  _RAX = vec3_t::operator[]((vec3_t *)(_R15 + 4), _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vcomiss xmm0, dword ptr [rbx]
  }
  if ( !v20 && !v12 )
  {
LABEL_60:
    *((_DWORD *)_R15 + 1) = LODWORD(_RSI->v[0]);
    *((_DWORD *)_R15 + 2) = LODWORD(_RSI->v[1]);
    *((_DWORD *)_R15 + 3) = LODWORD(_RSI->v[2]);
  }
LABEL_61:
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
CM_AddSimpleBrushPoint
==============
*/
__int64 CM_AddSimpleBrushPoint(const vec4_t *planes, int count, const vec4_t (*axialPlanes)[6], const __int16 (*sideIndices)[3], const vec3_t *xyz, int ptCount, ShowCollisionBrushPt *brushPts)
{
  __int64 v9; 
  float *v14; 
  bool v16; 
  __int64 v17; 
  unsigned int v18; 
  const vec4_t *v28; 
  const vec4_t *v29; 
  __int64 result; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  v9 = count;
  if ( !planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 47, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
    __debugbreak();
  _RSI = brushPts;
  if ( !brushPts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 48, ASSERT_TYPE_ASSERT, "(brushPts)", (const char *)&queryFormat, "brushPts") )
    __debugbreak();
  _R10 = xyz;
  v14 = &(*axialPlanes)[0].v[2];
  __asm { vmovss  xmm5, cs:__real@3dcccccd }
  v16 = 1;
  v17 = 0i64;
  v18 = 0;
  __asm
  {
    vmovss  xmm6, dword ptr [r10+4]
    vmovss  xmm3, dword ptr [r10]
    vmovss  xmm4, dword ptr [r10+8]
  }
  do
  {
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rax-4]
      vmulss  xmm0, xmm3, dword ptr [rax-8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, dword ptr [rax]
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm0, xmm2, dword ptr [rax+4]
      vcomiss xmm0, xmm5
    }
    if ( !v16 )
      goto LABEL_20;
    ++v18;
    v14 += 4;
    v16 = v18 <= 6;
  }
  while ( v18 < 6 );
  if ( (int)v9 > 0 )
  {
    v28 = planes;
    while ( 1 )
    {
      if ( v28 != &planes[(*sideIndices)[0] - 6] && v28 != &planes[(*sideIndices)[1] - 6] )
      {
        v29 = &planes[(*sideIndices)[2] - 6];
        if ( v28 != v29 )
        {
          __asm
          {
            vmulss  xmm1, xmm6, dword ptr [rcx+4]
            vmulss  xmm0, xmm3, dword ptr [rcx]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm4, dword ptr [rcx+8]
            vaddss  xmm2, xmm2, xmm1
            vsubss  xmm0, xmm2, dword ptr [rcx+0Ch]
            vcomiss xmm0, xmm5
          }
          if ( v28 > v29 )
            break;
        }
      }
      ++v17;
      ++v28;
      if ( v17 >= v9 )
        goto LABEL_17;
    }
LABEL_20:
    result = (unsigned int)ptCount;
    goto LABEL_21;
  }
LABEL_17:
  if ( (unsigned int)ptCount < 0x4C0 )
  {
    _RCX = ptCount;
    __asm { vmovss  dword ptr [rsi+rcx*4], xmm3 }
    *(_QWORD *)&brushPts[_RCX].xyz.y = *(_QWORD *)&xyz->y;
    brushPts[_RCX].sideIndex[0] = (*sideIndices)[0];
    brushPts[_RCX].sideIndex[1] = (*sideIndices)[1];
    brushPts[_RCX].sideIndex[2] = (*sideIndices)[2];
    result = (unsigned int)(ptCount + 1);
  }
  else
  {
    Com_PrintWarning(20, "More than %i points from plane intersections on %i-sided brush\n", (unsigned int)ptCount, (unsigned int)v9);
    result = (unsigned int)ptCount;
  }
LABEL_21:
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return result;
}

/*
==============
CM_BuildBrushWindingForSide
==============
*/
bool CM_BuildBrushWindingForSide(winding_t *winding, const vec3_t *planeNormal, int sideIndex, const ShowCollisionBrushPt *pts, int ptCount)
{
  int v16; 
  int v18; 
  int v19; 
  __int64 v21; 
  __int16 *v22; 
  __int64 v23; 
  int v24; 
  __int64 v26; 
  int v31; 
  int v36; 
  char v42; 
  int numpoints; 
  vec3_t *p_pt1; 
  int v49; 
  int index1; 
  int v51; 
  __int64 v52; 
  char v54; 
  bool v55; 
  bool v56; 
  int v57; 
  int v58; 
  int v59; 
  int v62; 
  int v67; 
  bool v74; 
  int v93; 
  int v100; 
  int v101; 
  __int64 v121; 
  int v122; 
  bool result; 
  float fmt; 
  int v132; 
  int i; 
  __int64 v137; 
  int j; 
  vec4_t plane; 
  float v0[4]; 
  vec3_t pt1; 

  v16 = sideIndex;
  _RBX = winding;
  if ( !winding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 343, ASSERT_TYPE_ASSERT, "(winding)", (const char *)&queryFormat, "winding") )
    __debugbreak();
  if ( !pts )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 344, ASSERT_TYPE_ASSERT, "(pts)", (const char *)&queryFormat, "pts") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 160, ASSERT_TYPE_ASSERT, "(pts)", (const char *)&queryFormat, "pts") )
      __debugbreak();
  }
  v18 = 0;
  v19 = 0;
  __asm
  {
    vmovaps [rsp+3148h+var_48], xmm6
    vmovaps [rsp+3148h+var_58], xmm7
    vmovaps [rsp+3148h+var_68], xmm8
    vmovaps [rsp+3148h+var_78], xmm9
    vmovaps [rsp+3148h+var_98], xmm11
  }
  if ( ptCount <= 0 )
    goto LABEL_61;
  __asm { vmovss  xmm6, cs:__real@3dcccccd }
  v21 = 0i64;
  v22 = &pts->sideIndex[1];
  v23 = (unsigned int)ptCount;
  do
  {
    if ( v16 == *(v22 - 1) || v16 == *v22 || v16 == v22[1] )
    {
      v24 = 0;
      if ( v19 <= 0 )
      {
LABEL_17:
        if ( v21 == 1024 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FFD0A0, 129i64, 1024i64);
        v26 = 3 * v21;
        v0[v26] = *(float *)(v22 - 7);
        ++v19;
        ++v21;
        v0[v26 + 1] = *(float *)(v22 - 5);
        v0[v26 + 2] = *(float *)(v22 - 3);
      }
      else
      {
        while ( 1 )
        {
          __asm { vmovaps xmm2, xmm6; epsilon }
          if ( VecNCompareCustomEpsilon(&v0[3 * v24], pts->xyz.v, *(float *)&_XMM2, 3) )
            break;
          if ( ++v24 >= v19 )
            goto LABEL_17;
        }
      }
      v16 = sideIndex;
    }
    ++pts;
    v22 += 10;
    --v23;
  }
  while ( v23 );
  _R15 = planeNormal;
  if ( v19 < 3 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm1, dword ptr [r15]
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  v31 = 2;
  __asm
  {
    vandps  xmm0, xmm0, xmm2
    vandps  xmm1, xmm1, xmm2
    vcomiss xmm0, xmm1
    vmovss  xmm0, dword ptr [r15+8]
  }
  v132 = 2;
  _RCX = (unsigned int)v19 > 3;
  v36 = 2;
  __asm
  {
    vandps  xmm0, xmm0, xmm2
    vmovss  xmm1, dword ptr [r15+rcx*4]
    vandps  xmm1, xmm1, xmm2
    vcomiss xmm0, xmm1
    vmovaps xmm0, xmmword ptr [rsp+3148h+v0]
    vmovss  xmm1, [rsp+3148h+var_30D4]
  }
  if ( (unsigned int)v19 > 3 )
    LOBYTE(_RCX) = 2;
  v42 = ~(_BYTE)_RCX;
  __asm
  {
    vmovups xmmword ptr [rbx+4], xmm0
    vmovss  xmm0, [rsp+3148h+var_30D8]
  }
  j = v42 & 2;
  i = v42 & 1;
  numpoints = 2;
  __asm
  {
    vmovss  dword ptr [rbx+14h], xmm0
    vmovss  dword ptr [rbx+18h], xmm1
  }
  _RBX->numpoints = 2;
  if ( v19 > 2i64 )
  {
    __asm
    {
      vmovss  xmm8, cs:__real@7f7fffff
      vmovss  xmm7, cs:__real@ba83126f
      vmovss  xmm9, cs:__real@3a83126f
    }
    p_pt1 = &pt1;
    v137 = v19 - 2i64;
    do
    {
      v49 = v36 - 1;
      index1 = -1;
      v51 = 0;
      v52 = 0i64;
      __asm { vmovaps xmm6, xmm8 }
      if ( v36 <= 0 )
        goto LABEL_32;
      do
      {
        *(float *)&_XMM0 = CM_SignedAreaForPointsProjected(&_RBX->p[v49], p_pt1, &_RBX->p[v51], i, j);
        __asm { vcomiss xmm6, xmm0 }
        if ( !(v54 | v55) )
        {
          __asm { vmovaps xmm6, xmm0 }
          index1 = v51;
        }
        v49 = v51;
        ++v52;
        ++v51;
      }
      while ( v51 < _RBX->numpoints );
      v18 = 0;
      v55 = index1 == 0;
      if ( index1 < 0 )
      {
LABEL_32:
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 261, ASSERT_TYPE_ASSERT, "(bestIndex >= 0)", (const char *)&queryFormat, "bestIndex >= 0");
        v55 = !v56;
        if ( v56 )
          __debugbreak();
      }
      __asm
      {
        vcomiss xmm6, xmm7
        vcomiss xmm6, xmm9
      }
      if ( v55 )
        CM_AddColinearExteriorPointToWindingProjected(_RBX, p_pt1, i, j, (_RBX->numpoints + index1 - 1) % _RBX->numpoints, index1);
      numpoints = _RBX->numpoints;
      ++p_pt1;
      v55 = v137-- == 1;
      v36 = _RBX->numpoints;
    }
    while ( !v55 );
    _R15 = planeNormal;
    v31 = 2;
    v132 = _RBX->numpoints;
  }
  v57 = 0;
  v58 = 1;
  v59 = 2;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  if ( numpoints <= 2 )
    goto LABEL_61;
  __asm { vmovaps [rsp+3148h+var_88], xmm10 }
  _RSI = &_RBX->p[2].v[2];
  __asm
  {
    vmovaps [rsp+3148h+var_A8], xmm12
    vmovaps [rsp+3148h+var_B8], xmm13
    vmovaps [rsp+3148h+var_C8], xmm14
    vmovaps [rsp+3148h+var_D8], xmm15
  }
  do
  {
    v62 = 1;
    if ( v59 > 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi-8]
        vmovss  xmm1, dword ptr [rsi-4]
        vmovss  xmm2, dword ptr [rsi]
        vmovss  [rsp+3148h+i], xmm0
        vmovss  dword ptr [rsp+3148h+var_3110], xmm1
        vmovss  dword ptr [rsp+3148h+var_3108], xmm2
      }
      _RDX = &_RBX->p[1].v[2];
      do
      {
        v67 = 0;
        __asm
        {
          vmovss  xmm8, dword ptr [rdx-8]
          vmovss  xmm9, dword ptr [rdx-4]
          vmovss  xmm10, dword ptr [rdx]
          vsubss  xmm12, xmm0, xmm8
          vsubss  xmm13, xmm1, xmm9
          vsubss  xmm14, xmm2, xmm10
        }
        v74 = v62 == 0;
        if ( v62 > 0 )
        {
          __asm { vmovss  xmm15, dword ptr [r15+4] }
          _R8 = &_RBX->p[0].v[2];
          do
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r8-8]
              vmovss  xmm1, dword ptr [r8-4]
              vsubss  xmm7, xmm0, xmm8
              vmovss  xmm0, dword ptr [r8]
              vsubss  xmm5, xmm0, xmm10
              vsubss  xmm6, xmm1, xmm9
              vmulss  xmm2, xmm12, xmm5
              vmulss  xmm1, xmm14, xmm7
              vsubss  xmm0, xmm2, xmm1
              vmulss  xmm4, xmm0, xmm15
              vmulss  xmm1, xmm13, xmm5
              vmulss  xmm3, xmm14, xmm6
              vsubss  xmm0, xmm3, xmm1
              vmulss  xmm2, xmm0, dword ptr [r15]
              vmulss  xmm0, xmm12, xmm6
              vaddss  xmm5, xmm4, xmm2
            }
            v93 = v67;
            _R8 += 3;
            __asm
            {
              vmulss  xmm1, xmm13, xmm7
              vsubss  xmm1, xmm1, xmm0
              vmulss  xmm2, xmm1, dword ptr [r15+8]
              vaddss  xmm3, xmm5, xmm2
              vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vcomiss xmm3, xmm11
              vmaxss  xmm0, xmm3, xmm11
            }
            if ( v74 )
              v93 = v57;
            v57 = v93;
            v100 = v62;
            if ( v74 )
              v100 = v58;
            v58 = v100;
            v101 = v59;
            if ( v74 )
              v101 = v31;
            ++v67;
            v31 = v101;
            __asm { vmovaps xmm11, xmm0 }
            v74 = v67 <= (unsigned int)v62;
          }
          while ( v67 < v62 );
          __asm
          {
            vmovss  xmm0, [rsp+3148h+i]
            vmovss  xmm1, dword ptr [rsp+3148h+var_3110]
            vmovss  xmm2, dword ptr [rsp+3148h+var_3108]
          }
        }
        ++v62;
        _RDX += 3;
      }
      while ( v62 < v59 );
      v36 = v132;
    }
    ++v59;
    _RSI += 3;
  }
  while ( v59 < v36 );
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm11, xmm0
    vmovaps xmm15, [rsp+3148h+var_D8]
    vmovaps xmm14, [rsp+3148h+var_C8]
    vmovaps xmm13, [rsp+3148h+var_B8]
    vmovaps xmm12, [rsp+3148h+var_A8]
    vmovaps xmm10, [rsp+3148h+var_88]
  }
  if ( v59 < (unsigned int)v36 )
  {
LABEL_61:
    result = 0;
  }
  else
  {
    __asm { vmovss  dword ptr [rsp+3148h+fmt], xmm0 }
    PlaneFromPoints(&plane, &_RBX->p[v57], &_RBX->p[v58], &_RBX->p[v31], fmt);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+3148h+plane]
      vmulss  xmm3, xmm0, dword ptr [r15]
      vmovss  xmm1, dword ptr [rsp+3148h+plane+4]
      vmulss  xmm2, xmm1, dword ptr [r15+4]
      vmovss  xmm0, dword ptr [rsp+3148h+plane+8]
      vmulss  xmm1, xmm0, dword ptr [r15+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
    }
    if ( !(v54 | v55) && _RBX->numpoints / 2 > 0 )
    {
      _R8 = &_RBX->p[0].v[2];
      do
      {
        __asm
        {
          vmovss  xmm2, dword ptr [r8-8]
          vmovss  xmm0, dword ptr [r8-4]
          vmovss  xmm1, dword ptr [r8]
        }
        _R8 += 3;
        v121 = 3i64 * (_RBX->numpoints - v18);
        *(_R8 - 5) = *((float *)_RBX + 3 * (_RBX->numpoints - v18) - 2);
        *(_R8 - 4) = *((float *)_RBX + v121 - 1);
        *(_R8 - 3) = *((float *)&_RBX->numpoints + v121);
        v122 = _RBX->numpoints - v18++;
        _RCX = 3i64 * v122;
        __asm
        {
          vmovss  dword ptr [rbx+rcx*4-8], xmm2
          vmovss  dword ptr [rbx+rcx*4-4], xmm0
          vmovss  dword ptr [rbx+rcx*4], xmm1
        }
      }
      while ( v18 < _RBX->numpoints / 2 );
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm11, [rsp+3148h+var_98]
    vmovaps xmm9, [rsp+3148h+var_78]
    vmovaps xmm8, [rsp+3148h+var_68]
    vmovaps xmm7, [rsp+3148h+var_58]
    vmovaps xmm6, [rsp+3148h+var_48]
  }
  return result;
}

/*
==============
CM_ForEachBrushPlaneIntersection
==============
*/
__int64 CM_ForEachBrushPlaneIntersection(const vec4_t *planes, int planeCount, const vec4_t (*axialPlanes)[6], ShowCollisionBrushPt *brushPts)
{
  unsigned int v9; 
  int v10; 
  __int16 v11; 
  int v12; 
  __int16 v15; 
  __int64 v16; 
  unsigned __int16 v26; 
  unsigned __int16 v36; 
  int ptCount; 
  vec3_t xyz; 
  vec4_t plane[3]; 
  __int16 sideIndices[3]; 

  if ( !brushPts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 105, ASSERT_TYPE_ASSERT, "(brushPts)", (const char *)&queryFormat, "brushPts") )
    __debugbreak();
  v9 = 0;
  v10 = planeCount + 6;
  ptCount = 0;
  sideIndices[0] = 0;
  v11 = 0;
  if ( planeCount + 4 > 0 )
  {
    v12 = planeCount + 5;
    __asm
    {
      vmovaps [rsp+100h+var_50], xmm6
      vmovss  xmm6, cs:__real@3c23d70a
      vmovaps [rsp+100h+var_60], xmm7
      vmovss  xmm7, cs:__real@3e800000
    }
    v15 = 0;
    do
    {
      v16 = v15;
      if ( (unsigned __int64)v15 >= 6 )
      {
        if ( !planes )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 90, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
            __debugbreak();
          v12 = v10 - 1;
        }
        _RAX = &planes[v16 - 6];
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rbp+57h+plane], xmm0
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  dword ptr [rbp+57h+plane+4], xmm1
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  dword ptr [rbp+57h+plane+8], xmm0
          vmovss  xmm1, dword ptr [rax+0Ch]
        }
      }
      else
      {
        if ( !axialPlanes )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 85, ASSERT_TYPE_ASSERT, "(axialPlanes)", (const char *)&queryFormat, "axialPlanes") )
            __debugbreak();
          v12 = v10 - 1;
        }
        _RBX = &(*axialPlanes)[v16];
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  dword ptr [rbp+57h+plane], xmm0
          vmovss  xmm1, dword ptr [rbx+4]
          vmovss  dword ptr [rbp+57h+plane+4], xmm1
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rbp+57h+plane+8], xmm0
          vmovss  xmm1, dword ptr [rbx+0Ch]
        }
      }
      v26 = v11 + 1;
      sideIndices[1] = v11 + 1;
      __asm { vmovss  dword ptr [rbp+57h+plane+0Ch], xmm1 }
      if ( (__int16)(v11 + 1) < v12 )
      {
        do
        {
          if ( (unsigned __int64)v11 < 6 || v26 < 6u || 16i64 * v11 != 16i64 * (__int16)v26 )
          {
            if ( (unsigned __int64)(__int16)v26 >= 6 )
            {
              if ( !planes )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 90, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
                  __debugbreak();
                v12 = v10 - 1;
              }
              _RAX = &planes[(__int16)v26 - 6];
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rbp+57h+plane+10h], xmm0
                vmovss  xmm1, dword ptr [rax+4]
                vmovss  dword ptr [rbp+57h+plane+14h], xmm1
                vmovss  xmm0, dword ptr [rax+8]
                vmovss  dword ptr [rbp+57h+plane+18h], xmm0
                vmovss  xmm1, dword ptr [rax+0Ch]
              }
            }
            else
            {
              if ( !axialPlanes )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 85, ASSERT_TYPE_ASSERT, "(axialPlanes)", (const char *)&queryFormat, "axialPlanes") )
                  __debugbreak();
                v12 = v10 - 1;
              }
              _RBX = &(*axialPlanes)[(__int16)v26];
              __asm
              {
                vmovss  xmm0, dword ptr [rbx]
                vmovss  dword ptr [rbp+57h+plane+10h], xmm0
                vmovss  xmm1, dword ptr [rbx+4]
                vmovss  dword ptr [rbp+57h+plane+14h], xmm1
                vmovss  xmm0, dword ptr [rbx+8]
                vmovss  dword ptr [rbp+57h+plane+18h], xmm0
                vmovss  xmm1, dword ptr [rbx+0Ch]
              }
            }
            v36 = v26 + 1;
            sideIndices[2] = v26 + 1;
            __asm { vmovss  dword ptr [rbp+57h+plane+1Ch], xmm1 }
            if ( (__int16)(v26 + 1) < v10 )
            {
              do
              {
                if ( ((unsigned __int64)v11 < 6 || v36 < 6u || 16i64 * v11 != 16i64 * (__int16)v36) && ((unsigned __int64)(__int16)v26 < 6 || v36 < 6u || 16i64 * (__int16)v26 != 16i64 * (__int16)v36) )
                {
                  if ( (unsigned __int64)(__int16)v36 >= 6 )
                  {
                    if ( !planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 90, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
                      __debugbreak();
                    _RAX = &planes[(__int16)v36 - 6];
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rax]
                      vmovss  dword ptr [rbp+57h+plane+20h], xmm0
                      vmovss  xmm1, dword ptr [rax+4]
                      vmovss  dword ptr [rbp+57h+plane+24h], xmm1
                      vmovss  xmm0, dword ptr [rax+8]
                      vmovss  dword ptr [rbp+57h+plane+28h], xmm0
                      vmovss  xmm1, dword ptr [rax+0Ch]
                    }
                  }
                  else
                  {
                    if ( !axialPlanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 85, ASSERT_TYPE_ASSERT, "(axialPlanes)", (const char *)&queryFormat, "axialPlanes") )
                      __debugbreak();
                    _RDI = &(*axialPlanes)[(__int16)v36];
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rdi]
                      vmovss  dword ptr [rbp+57h+plane+20h], xmm0
                      vmovss  xmm1, dword ptr [rdi+4]
                      vmovss  dword ptr [rbp+57h+plane+24h], xmm1
                      vmovss  xmm0, dword ptr [rdi+8]
                      vmovss  dword ptr [rbp+57h+plane+28h], xmm0
                      vmovss  xmm1, dword ptr [rdi+0Ch]
                    }
                  }
                  __asm { vmovss  dword ptr [rbp+57h+plane+2Ch], xmm1 }
                  if ( IntersectPlanes((const vec4_t (*)[3])plane, &xyz) )
                  {
                    __asm
                    {
                      vmovaps xmm3, xmm6; snapEpsilon
                      vmovaps xmm2, xmm7; snapGrid
                    }
                    SnapPointToIntersectingPlanes((const vec4_t (*)[3])plane, &xyz, *(float *)&_XMM2, *(float *)&_XMM3);
                    v9 = CM_AddSimpleBrushPoint(planes, planeCount, axialPlanes, (const __int16 (*)[3])sideIndices, &xyz, ptCount, brushPts);
                    ptCount = v9;
                  }
                  else
                  {
                    v9 = ptCount;
                  }
                }
                sideIndices[2] = ++v36;
              }
              while ( (__int16)v36 < v10 );
              v12 = v10 - 1;
            }
          }
          sideIndices[1] = ++v26;
        }
        while ( (__int16)v26 < v12 );
      }
      v15 = ++v11;
      sideIndices[0] = v11;
    }
    while ( v11 < v10 - 2 );
    __asm
    {
      vmovaps xmm7, [rsp+100h+var_60]
      vmovaps xmm6, [rsp+100h+var_50]
    }
  }
  return v9;
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
  __int64 v10; 
  int v24; 
  unsigned int i; 
  unsigned __int64 v26; 
  int v27; 
  __int64 v28; 
  const vec4_t *v29; 
  vec4_t axialPlanes[6]; 
  ShowCollisionBrushPt brushPts; 

  v10 = planeCount;
  _RDI = bounds;
  v29 = planes;
  if ( !planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cm_showcollision.cpp", 380, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes", 0i64) )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0Ch]
    vsubss  xmm0, xmm2, dword ptr [rdi]
    vmovss  xmm4, cs:__real@bf800000
    vmovss  xmm3, cs:__real@3f800000
    vxorps  xmm5, xmm5, xmm5
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+0Ch], xmm0
    vaddss  xmm0, xmm2, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+10h]
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+1Ch], xmm0
    vsubss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+2Ch], xmm0
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vmovss  xmm2, dword ptr [rdi+14h]
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+3Ch], xmm0
    vsubss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+5EE0h+axialPlanes+4Ch], xmm0
    vaddss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+5EE0h+axialPlanes+5Ch], xmm0
    vmovss  dword ptr [rsp+5FE0h+axialPlanes], xmm4
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+4], xmm5
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+8], xmm5
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+10h], xmm3
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+14h], xmm5
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+18h], xmm5
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+20h], xmm5
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+24h], xmm4
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+28h], xmm5
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+30h], xmm5
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+34h], xmm3
    vmovss  dword ptr [rsp+5FE0h+axialPlanes+38h], xmm5
    vmovss  dword ptr [rbp+5EE0h+axialPlanes+40h], xmm5
    vmovss  dword ptr [rbp+5EE0h+axialPlanes+44h], xmm5
    vmovss  dword ptr [rbp+5EE0h+axialPlanes+48h], xmm4
    vmovss  dword ptr [rbp+5EE0h+axialPlanes+50h], xmm5
    vmovss  dword ptr [rbp+5EE0h+axialPlanes+54h], xmm5
    vmovss  dword ptr [rbp+5EE0h+axialPlanes+58h], xmm3
  }
  v24 = CM_ForEachBrushPlaneIntersection(planes, v10, (const vec4_t (*)[6])axialPlanes, &brushPts);
  if ( v24 >= 4 )
  {
    Sys_EnterCriticalSection(CRITSECT_SHOW_COLLISION);
    for ( i = 0; i < 6; ++i )
    {
      if ( CM_BuildBrushWindingForSide(&s_windingPool, (const vec3_t *)&axialPlanes[i], i, &brushPts, v24) )
        drawCollisionPoly(s_windingPool.numpoints, s_windingPool.p, color, drawSolid, interiorColor);
    }
    v26 = v10 + 6;
    v27 = 6;
    if ( v26 > 6 )
    {
      v28 = 6i64;
      do
      {
        if ( CM_BuildBrushWindingForSide(&s_windingPool, (const vec3_t *)&v29[v28 - 6], v27, &brushPts, v24) )
          drawCollisionPoly(s_windingPool.numpoints, s_windingPool.p, color, drawSolid, interiorColor);
        v28 = ++v27;
      }
      while ( v27 < v26 );
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
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 

  _RSI = pt2;
  _RBP = pt1;
  _R14 = pt0;
  if ( (unsigned int)i >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", i, 3) )
    __debugbreak();
  _RBX = j;
  if ( (unsigned int)j >= 3 )
  {
    LODWORD(v26) = 3;
    LODWORD(v22) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v26) )
      __debugbreak();
    LODWORD(v27) = 3;
    LODWORD(v23) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v27) )
      __debugbreak();
  }
  if ( (unsigned int)i >= 3 )
  {
    LODWORD(v26) = 3;
    LODWORD(v22) = i;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v26) )
      __debugbreak();
  }
  if ( (unsigned int)j >= 3 )
  {
    LODWORD(v26) = 3;
    LODWORD(v22) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v26) )
      __debugbreak();
    LODWORD(v28) = 3;
    LODWORD(v24) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v28) )
      __debugbreak();
  }
  if ( (unsigned int)i >= 3 )
  {
    LODWORD(v26) = 3;
    LODWORD(v22) = i;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v26) )
      __debugbreak();
  }
  if ( (unsigned int)j >= 3 )
  {
    LODWORD(v26) = 3;
    LODWORD(v22) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v22, v26) )
      __debugbreak();
    LODWORD(v29) = 3;
    LODWORD(v25) = j;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v29) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+rbx*4]
    vmovss  xmm5, dword ptr [rbp+rbx*4+0]
    vmovss  xmm4, dword ptr [r14+rbx*4]
    vsubss  xmm0, xmm4, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbp+rdi*4+0]
    vsubss  xmm1, xmm1, xmm5
    vmulss  xmm0, xmm1, dword ptr [r14+rdi*4]
    vaddss  xmm3, xmm2, xmm0
    vsubss  xmm2, xmm5, xmm4
    vmulss  xmm0, xmm2, dword ptr [rsi+rdi*4]
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

