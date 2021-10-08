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
  __int64 v8; 
  int v14; 
  int v15; 
  bool v21; 
  bool v22; 
  unsigned __int64 v23; 
  char *p_z; 
  int v31; 
  __int64 *v32; 
  int v39; 
  __int64 *v40; 
  int v47; 
  __int64 *v48; 
  int v55; 
  __int64 *v56; 
  __int64 v62; 
  bool v63; 
  bool v64; 
  int v71; 
  __int64 *v72; 
  int v74; 
  __int64 result; 
  int v78; 
  int v81; 
  int v86; 
  bool v87; 
  bool v88; 
  __int64 v122; 
  double v123; 
  __int64 v124; 
  int v125; 
  int v126[10]; 

  v8 = inPointCount;
  _RDI = plane;
  _RSI = outPoints;
  _R13 = inPoints;
  if ( inPointCount > 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 64, ASSERT_TYPE_ASSERT, "( ( inPointCount <= 3 + 6 ) )", "( inPointCount ) = %i", inPointCount) )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, cs:__real@3f000000
    vmovss  xmm3, cs:__real@bf000000
  }
  v14 = 0;
  __asm
  {
    vmovaps [rsp+110h+var_40], xmm6
    vmovaps [rsp+110h+var_50], xmm7
  }
  v15 = 0;
  __asm { vmovaps [rsp+110h+var_60], xmm8 }
  _RCX = 0i64;
  v124 = 0i64;
  v125 = 0;
  if ( v8 >= 4 )
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+4]
      vmovss  xmm7, dword ptr [rdi]
      vmovss  xmm6, dword ptr [rdi+0Ch]
      vmovaps [rsp+110h+var_70], xmm9
      vmovss  xmm9, dword ptr [rdi+8]
    }
    v21 = __CFSHR__(v8 - 4, 2);
    v22 = v21 || (unsigned __int64)(v8 - 4) >> 2 == 0;
    v23 = v8 - 3;
    p_z = (char *)&_R13[1].xyz.z;
    v15 = 4 * ((unsigned __int64)(v8 - 4) >> 2) + 4;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rdx-20h]
        vmulss  xmm0, xmm8, dword ptr [rdx-1Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, dword ptr [rdx-18h]
        vaddss  xmm0, xmm2, xmm1
        vsubss  xmm4, xmm0, xmm6
        vcomiss xmm4, xmm5
        vmovss  [rbp+rcx*4+57h+var_A8], xmm4
      }
      if ( v22 )
      {
        __asm { vcomiss xmm4, xmm3 }
        if ( v21 )
        {
          v31 = HIDWORD(v124);
          v32 = (__int64 *)((char *)&v124 + 4);
          v126[_RCX] = 1;
        }
        else
        {
          v31 = v125;
          v32 = (__int64 *)&v125;
          v126[_RCX] = 2;
        }
      }
      else
      {
        v31 = v124;
        v32 = &v124;
        v126[_RCX] = 0;
      }
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rdx-8]
        vmulss  xmm0, xmm8, dword ptr [rdx-4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, dword ptr [rdx]
        vaddss  xmm0, xmm2, xmm1
        vsubss  xmm4, xmm0, xmm6
        vcomiss xmm4, xmm5
        vmovss  [rbp+rcx*4+57h+var_A4], xmm4
      }
      *(_DWORD *)v32 = v31 + 1;
      if ( v21 || v31 == -1 )
      {
        __asm { vcomiss xmm4, xmm3 }
        if ( v21 )
        {
          v39 = HIDWORD(v124);
          v40 = (__int64 *)((char *)&v124 + 4);
          v126[_RCX + 1] = 1;
        }
        else
        {
          v39 = v125;
          v40 = (__int64 *)&v125;
          v126[_RCX + 1] = 2;
        }
      }
      else
      {
        v39 = v124;
        v40 = &v124;
        v126[_RCX + 1] = 0;
      }
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rdx+10h]
        vmulss  xmm0, xmm8, dword ptr [rdx+14h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, dword ptr [rdx+18h]
        vaddss  xmm0, xmm2, xmm1
        vsubss  xmm4, xmm0, xmm6
        vcomiss xmm4, xmm5
        vmovss  [rbp+rcx*4+57h+var_A0], xmm4
      }
      *(_DWORD *)v40 = v39 + 1;
      if ( v21 || v39 == -1 )
      {
        __asm { vcomiss xmm4, xmm3 }
        if ( v21 )
        {
          v47 = HIDWORD(v124);
          v48 = (__int64 *)((char *)&v124 + 4);
          v126[_RCX + 2] = 1;
        }
        else
        {
          v47 = v125;
          v48 = (__int64 *)&v125;
          v126[_RCX + 2] = 2;
        }
      }
      else
      {
        v47 = v124;
        v48 = &v124;
        v126[_RCX + 2] = 0;
      }
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rdx+28h]
        vmulss  xmm0, xmm8, dword ptr [rdx+2Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, dword ptr [rdx+30h]
        vaddss  xmm0, xmm2, xmm1
        vsubss  xmm4, xmm0, xmm6
        vcomiss xmm4, xmm5
        vmovss  [rbp+rcx*4+57h+var_9C], xmm4
      }
      *(_DWORD *)v48 = v47 + 1;
      if ( v21 || v47 == -1 )
      {
        __asm { vcomiss xmm4, xmm3 }
        if ( v21 )
        {
          v55 = HIDWORD(v124);
          v56 = (__int64 *)((char *)&v124 + 4);
          v126[_RCX + 3] = 1;
        }
        else
        {
          v55 = v125;
          v56 = (__int64 *)&v125;
          v126[_RCX + 3] = 2;
        }
      }
      else
      {
        v55 = v124;
        v56 = &v124;
        v126[_RCX + 3] = 0;
      }
      _RCX += 4i64;
      p_z += 96;
      *(_DWORD *)v56 = v55 + 1;
      v21 = _RCX < v23;
      v22 = _RCX <= v23;
    }
    while ( (__int64)_RCX < (__int64)v23 );
    __asm { vmovaps xmm9, [rsp+110h+var_70] }
  }
  if ( (__int64)_RCX < v8 )
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+4]
      vmovss  xmm7, dword ptr [rdi]
      vmovss  xmm4, dword ptr [rdi+8]
      vmovss  xmm6, dword ptr [rdi+0Ch]
    }
    v62 = (__int64)&_R13[_RCX].xyz.z;
    v63 = __CFADD__(v8 - _RCX, v15);
    v64 = v63 || (_DWORD)v8 - (_DWORD)_RCX + v15 == 0;
    v15 += v8 - _RCX;
    do
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rdx-8]
        vmulss  xmm0, xmm8, dword ptr [rdx-4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rdx]
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm0, xmm2, xmm6
        vcomiss xmm0, xmm5
        vmovss  [rbp+rcx*4+57h+var_A8], xmm0
      }
      if ( v64 )
      {
        __asm { vcomiss xmm0, xmm3 }
        if ( v63 )
        {
          v71 = HIDWORD(v124);
          v72 = (__int64 *)((char *)&v124 + 4);
          v126[_RCX] = 1;
        }
        else
        {
          v71 = v125;
          v72 = (__int64 *)&v125;
          v126[_RCX] = 2;
        }
      }
      else
      {
        v71 = v124;
        v72 = &v124;
        v126[_RCX] = 0;
      }
      ++_RCX;
      v62 += 24i64;
      *(_DWORD *)v72 = v71 + 1;
      v63 = _RCX < v8;
      v64 = _RCX <= v8;
    }
    while ( (__int64)_RCX < v8 );
  }
  __asm { vmovss  xmm0, [rbp+57h+var_A8] }
  v74 = v126[0];
  __asm { vmovaps xmm8, [rsp+110h+var_60] }
  _RCX = v15;
  __asm { vmovss  [rbp+rcx*4+57h+var_A8], xmm0 }
  v126[v15] = v74;
  if ( (_DWORD)v124 )
  {
    if ( !HIDWORD(v124) )
    {
      memmove_0(_RSI, _R13, 24 * v8);
      result = (unsigned int)v8;
      goto LABEL_64;
    }
    v78 = 0;
    if ( (int)v8 <= 0 )
    {
LABEL_63:
      result = (unsigned int)v14;
      goto LABEL_64;
    }
    _R14 = &_R13->vertWeights.v[2];
    _RDI = 0i64;
    while ( 1 )
    {
      v81 = v126[_RDI];
      if ( v81 == 2 )
      {
        if ( v14 >= 9 )
        {
          LODWORD(v122) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 102, ASSERT_TYPE_ASSERT, "( ( outPointCount < 3 + 6 ) )", "( outPointCount ) = %i", v122) )
            __debugbreak();
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [r14-14h]
          vmovups xmmword ptr [rsi], xmm0
          vmovsd  xmm1, qword ptr [r14-4]
          vmovsd  qword ptr [rsi+10h], xmm1
        }
      }
      else
      {
        if ( !v81 )
        {
          if ( v14 >= 9 )
          {
            LODWORD(v122) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 110, ASSERT_TYPE_ASSERT, "( ( outPointCount < 3 + 6 ) )", "( outPointCount ) = %i", v122) )
              __debugbreak();
          }
          __asm
          {
            vmovups xmm0, xmmword ptr [r14-14h]
            vmovups xmmword ptr [rsi], xmm0
            vmovsd  xmm1, qword ptr [r14-4]
          }
          ++v14;
          __asm { vmovsd  qword ptr [rsi+10h], xmm1 }
          ++_RSI;
        }
        v86 = v126[_RDI + 1];
        if ( v86 == 2 || v86 == v126[_RDI] )
          goto LABEL_62;
        v87 = v14 == 9;
        if ( v14 >= 9 )
        {
          LODWORD(v122) = v14;
          v88 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 119, ASSERT_TYPE_ASSERT, "( ( outPointCount < 3 + 6 ) )", "( outPointCount ) = %i", v122);
          v87 = !v88;
          if ( v88 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, [rbp+rdi+57h+var_A8]
          vmovss  xmm6, [rbp+rdi+57h+var_A4]
          vucomiss xmm0, xmm6
          vmovaps xmm7, xmm0
        }
        if ( v87 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+110h+var_E8], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 120, ASSERT_TYPE_ASSERT, "( ( dists[pointIndex] != dists[pointIndex + 1] ) )", "( dists[pointIndex] ) = %g", v123) )
          {
            __debugbreak();
            __asm { vmovss  xmm7, [rbp+rdi+57h+var_A8] }
          }
        }
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vdivss  xmm6, xmm7, xmm0
        }
        _RCX = 3i64 * ((v78 + 1) % (int)v8);
        __asm
        {
          vmovss  xmm0, dword ptr [r13+rcx*8+0]
          vsubss  xmm1, xmm0, dword ptr [r14-14h]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [r14-14h]
          vmovss  dword ptr [rsi], xmm3
          vmovss  xmm0, dword ptr [r13+rcx*8+4]
          vsubss  xmm1, xmm0, dword ptr [r14-10h]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [r14-10h]
          vmovss  dword ptr [rsi+4], xmm3
          vmovss  xmm0, dword ptr [r13+rcx*8+8]
          vsubss  xmm1, xmm0, dword ptr [r14-0Ch]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [r14-0Ch]
          vmovss  dword ptr [rsi+8], xmm3
          vmovss  xmm0, dword ptr [r13+rcx*8+0Ch]
          vsubss  xmm1, xmm0, dword ptr [r14-8]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [r14-8]
          vmovss  dword ptr [rsi+0Ch], xmm3
          vmovss  xmm0, dword ptr [r13+rcx*8+10h]
          vsubss  xmm1, xmm0, dword ptr [r14-4]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [r14-4]
          vmovss  dword ptr [rsi+10h], xmm3
          vmovss  xmm0, dword ptr [r13+rcx*8+14h]
          vsubss  xmm1, xmm0, dword ptr [r14]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [r14]
          vmovss  dword ptr [rsi+14h], xmm3
        }
      }
      ++v14;
      ++_RSI;
LABEL_62:
      ++v78;
      ++_RDI;
      _R14 += 6;
      if ( v78 >= (int)v8 )
        goto LABEL_63;
    }
  }
  result = 0i64;
LABEL_64:
  __asm
  {
    vmovaps xmm7, [rsp+110h+var_50]
    vmovaps xmm6, [rsp+110h+var_40]
  }
  return result;
}

/*
==============
R_GetMarkFragmentClipPlanes
==============
*/
void R_GetMarkFragmentClipPlanes(const Sphere *sphere, const tmat33_t<vec3_t> *axis, vec4_t (*planes)[6])
{
  int v4; 
  bool v6; 
  __int64 v31; 
  __int64 v32; 

  v4 = 0;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  v6 = 1;
  _RBP = &axis->m[0].v[2];
  _RDI = planes;
  do
  {
    if ( !v6 )
    {
      LODWORD(v32) = 3;
      LODWORD(v31) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rbp-8]
      vmovss  dword ptr [rdi], xmm2
      vmovss  xmm0, dword ptr [rbp-4]
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm3, dword ptr [rbp+0]
      vmovss  dword ptr [rdi+8], xmm3
      vmulss  xmm1, xmm0, dword ptr [rsi+4]
      vmulss  xmm0, xmm2, dword ptr [rsi]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rsi+8]
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm2, xmm0, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rdi+0Ch], xmm2
    }
    if ( (unsigned int)v4 >= 3 )
    {
      LODWORD(v32) = 3;
      LODWORD(v31) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp-8]
      vxorps  xmm4, xmm0, xmm6
      vmovss  dword ptr [rdi+10h], xmm4
      vmovss  xmm1, dword ptr [rbp-4]
      vxorps  xmm2, xmm1, xmm6
      vmovss  dword ptr [rdi+14h], xmm2
      vmovss  xmm0, dword ptr [rbp+0]
      vxorps  xmm3, xmm0, xmm6
      vmovss  dword ptr [rdi+18h], xmm3
      vmulss  xmm1, xmm2, dword ptr [rsi+4]
      vmulss  xmm0, xmm4, dword ptr [rsi]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rsi+8]
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm2, xmm0, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rdi+1Ch], xmm2
    }
    _RDI = (vec4_t (*)[6])((char *)_RDI + 32);
    ++v4;
    _RBP += 3;
    v6 = (unsigned int)v4 < 3;
  }
  while ( v4 < 3 );
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  const XModelLodInfo *LodInfo; 
  __int64 v18; 
  DObjAnimMat *baseMat; 
  Material *const *Skins; 
  char v21; 
  bool v22; 
  __int64 v23; 
  XSurface *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  bool v36; 
  bool v37; 
  BOOL v57; 
  BOOL v58; 
  XSurface *surfaces; 
  Material *const *v60; 
  MarkInfo *v61; 
  GfxMarkContext *v62; 
  Bounds bounds; 

  v61 = markInfo;
  v62 = markContext;
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
  v36 = !markInfo->boltOffsetValid;
  v60 = Skins;
  if ( v36 )
    R_MarkFragments_TransformMarkToModelSpace(markInfo, poseBone, &baseMat[modelBoneIndex]);
  else
    R_MarkFragments_TransformMarkToModelSpaceBolted(markInfo, &baseMat[modelBoneIndex]);
  v21 = 0;
  v22 = 0;
  Bounds_ForOBB(&bounds, &markInfo->localOrigin, (const vec3_t *)&markInfo->markSize, &markInfo->localTexCoordAxisX, &markInfo->localTexCoordAxisY, &markInfo->localTexCoordAxisZ);
  v23 = v18;
  if ( (_DWORD)v18 )
  {
    v24 = surfaces;
    v25 = (__int64)v60;
    v26 = 0i64;
    __asm { vmovaps [rsp+138h+var_58], xmm6 }
    v27 = 0i64;
    __asm
    {
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+138h+var_68], xmm7
      vmovss  xmm7, dword ptr [rsp+138h+bounds.halfSize+8]
      vmovaps [rsp+138h+var_78], xmm8
      vmovss  xmm8, dword ptr [rsp+138h+bounds.halfSize+4]
      vmovaps [rsp+138h+var_88], xmm9
      vmovss  xmm9, dword ptr [rsp+138h+bounds.halfSize]
      vmovaps [rsp+138h+var_98], xmm10
      vmovss  xmm10, dword ptr [rsp+138h+bounds.midPoint+8]
      vmovaps [rsp+138h+var_A8], xmm11
      vmovss  xmm11, dword ptr [rsp+138h+bounds.midPoint+4]
      vmovaps [rsp+138h+var_B8], xmm12
      vmovss  xmm12, dword ptr [rsp+138h+bounds.midPoint]
    }
    do
    {
      if ( v22 )
        break;
      if ( (*(_DWORD *)(*(_QWORD *)(v25 + 8 * v26) + 12i64) & 0x20) == 0 )
      {
        _RBX = (__int64)&v24[v27].surfBounds;
        v36 = _RBX == 0;
        if ( &v24[v27] == (XSurface *)-144i64 )
        {
          v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0");
          v36 = !v37;
          if ( v37 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vsubss  xmm1, xmm0, xmm12
          vaddss  xmm0, xmm9, dword ptr [rbx+0Ch]
          vandps  xmm1, xmm1, xmm6
          vcomiss xmm1, xmm0
        }
        if ( v36 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vsubss  xmm1, xmm0, xmm11
            vaddss  xmm0, xmm8, dword ptr [rbx+10h]
            vandps  xmm1, xmm1, xmm6
            vcomiss xmm1, xmm0
          }
          if ( v36 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+8]
              vsubss  xmm1, xmm0, xmm10
              vaddss  xmm0, xmm7, dword ptr [rbx+14h]
              vandps  xmm1, xmm1, xmm6
              vcomiss xmm1, xmm0
            }
            if ( v36 )
            {
              v21 = 1;
              v22 = (v24[v27].flags & 2) != 0;
            }
          }
        }
      }
      ++v26;
      ++v27;
    }
    while ( v26 != v23 );
    __asm
    {
      vmovaps xmm12, [rsp+138h+var_B8]
      vmovaps xmm11, [rsp+138h+var_A8]
      vmovaps xmm10, [rsp+138h+var_98]
      vmovaps xmm9, [rsp+138h+var_88]
      vmovaps xmm8, [rsp+138h+var_78]
      vmovaps xmm7, [rsp+138h+var_68]
      vmovaps xmm6, [rsp+138h+var_58]
    }
    if ( v21 )
    {
      LOBYTE(v58) = v22;
      LOBYTE(v57) = 0;
      v61->callback(v61->callbackContext, v62, &v61->localOrigin, &v61->localTexCoordAxisX, &v61->localTexCoordAxisY, &v61->localTexCoordAxisZ, v57, v58);
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
  int v16; 
  float v18; 
  int v19; 
  bool v20; 
  __int64 v43; 
  __int64 v44; 

  p_axis = &markInfo->axis;
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  AxisCopy(axis, &markInfo->axis);
  _RSI = markInfo->planes;
  __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
  markInfo->viewOffset.v[0] = viewOffset->v[0];
  v16 = 0;
  markInfo->viewOffset.v[1] = viewOffset->v[1];
  _RDI = &p_axis->m[0].v[2];
  v18 = viewOffset->v[2];
  v19 = 0;
  markInfo->viewOffset.v[2] = v18;
  v20 = 1;
  markInfo->material = material;
  markInfo->viewmodelClientIndex = viewmodelClientIndex;
  markInfo->markAgainst = markAgainst;
  do
  {
    if ( !v20 )
    {
      LODWORD(v44) = 3;
      LODWORD(v43) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rdi-8]
      vmovss  dword ptr [rsi], xmm2
      vmovss  xmm0, dword ptr [rdi-4]
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm3, dword ptr [rdi]
      vmovss  dword ptr [rsi+8], xmm3
      vmulss  xmm1, xmm0, dword ptr [rbp+4008h]
      vmulss  xmm0, xmm2, dword ptr [rbp+4004h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rbp+400Ch]
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm2, xmm0, dword ptr [rbp+4010h]
      vmovss  dword ptr [rsi+0Ch], xmm2
    }
    if ( (unsigned int)v19 >= 3 )
    {
      LODWORD(v44) = 3;
      LODWORD(v43) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi-8]
      vxorps  xmm4, xmm0, xmm6
      vmovss  dword ptr [rsi+10h], xmm4
      vmovss  xmm1, dword ptr [rdi-4]
      vxorps  xmm2, xmm1, xmm6
      vmovss  dword ptr [rsi+14h], xmm2
      vmovss  xmm0, dword ptr [rdi]
      vxorps  xmm3, xmm0, xmm6
      vmovss  dword ptr [rsi+18h], xmm3
      vmulss  xmm1, xmm2, dword ptr [rbp+4008h]
      vmulss  xmm0, xmm4, dword ptr [rbp+4004h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rbp+400Ch]
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm2, xmm0, dword ptr [rbp+4010h]
      vmovss  dword ptr [rsi+1Ch], xmm2
    }
    _RSI += 2;
    ++v19;
    _RDI += 3;
    v20 = (unsigned int)v19 < 3;
  }
  while ( v19 < 3 );
  if ( markAgainst )
  {
    if ( markAgainst != MARK_FRAGMENTS_AGAINST_MODELS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 1173, ASSERT_TYPE_ASSERT, "(markAgainst == MARK_FRAGMENTS_AGAINST_MODELS)", (const char *)&queryFormat, "markAgainst == MARK_FRAGMENTS_AGAINST_MODELS") )
      __debugbreak();
    markInfo->sceneDObjCollidedCount = 0;
    markInfo->viewmodelDObjsCollidedCount = 0;
    markInfo->dynEntsCollidedCount = 0;
    if ( !markGivenModelsOnly )
      v16 = R_SphereStaticModels(markInfo->collInfo, (int (__fastcall *)(int, void *))R_AllowSmodelMarks, NULL, markInfo->smodelsCollided, 0x20u);
    markInfo->smodelCollidedCount = v16;
    if ( v16 == 32 )
      R_WarnOncePerFrame(R_WARN_MARK_SMODEL_COLLIDED_LIMIT);
  }
  else
  {
    markInfo->sceneBModelCollidedCount = 0;
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
R_MarkFragments_BrushSurface
==============
*/
bool R_MarkFragments_BrushSurface(MarkInfo *markInfo, GfxMarkContext *markContext, const vec4_t *clipPlanes, const vec3_t *markDir, const GfxSurface *surface)
{
  GfxBackEndData *v12; 
  unsigned __int64 transientZone; 
  unsigned int v14; 
  GfxBackEndData *v15; 
  GfxWorldDrawVerts *v16; 
  unsigned int v18; 
  unsigned __int16 *v19; 
  bool v20; 
  unsigned int v58; 
  float *v59; 
  unsigned __int16 *v60; 
  __int64 v61; 
  __int64 v62; 
  int v63; 
  int v64; 
  int v65; 
  __int64 v66; 
  int v67; 
  unsigned int triCount; 
  bool result; 
  __int64 v77; 
  __int64 v78; 
  FxWorldMarkPoint inPoints[18]; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 221, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v12 = frontEndDataOut;
  transientZone = surface->transientZone;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (unsigned int)transientZone >= 0x600 )
  {
    LODWORD(v77) = transientZone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v77, 1536) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+2B8h+var_38], xmm6
    vmovaps [rsp+2B8h+var_48], xmm7
    vmovaps [rsp+2B8h+var_58], xmm8
    vmovaps [rsp+2B8h+var_68], xmm9
    vmovaps [rsp+2B8h+var_78], xmm10
    vmovaps [rsp+2B8h+var_88], xmm11
    vmovaps [rsp+2B8h+var_98], xmm12
  }
  if ( ((0x80000000 >> (transientZone & 0x1F)) & v12->transientVisibility.array[transientZone >> 5]) != 0 )
  {
    v14 = surface->transientZone;
    v15 = frontEndDataOut;
    if ( v14 >= frontEndDataOut->transientDrawContext.zoneCount )
    {
      LODWORD(v78) = frontEndDataOut->transientDrawContext.zoneCount;
      LODWORD(v77) = surface->transientZone;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v77, v78) )
        __debugbreak();
    }
    v16 = v15->transientDrawContext.drawVertsPtr[(unsigned __int16)v14];
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 232, ASSERT_TYPE_ASSERT, "(worldDrawVerts)", (const char *)&queryFormat, "worldDrawVerts") )
      __debugbreak();
    _R14 = &v16->posData[surface->tris.posOffset];
    if ( surface->tris.baseIndex + 3 * surface->tris.triCount > v16->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 235, ASSERT_TYPE_ASSERT, "( triSurf->baseIndex + 3 * triSurf->triCount ) <= ( worldDrawVerts->indexCount )", "%s <= %s\n\t%u, %u", "triSurf->baseIndex + 3 * triSurf->triCount", "worldDrawVerts->indexCount", surface->tris.baseIndex + 3 * surface->tris.triCount, v16->indexCount) )
      __debugbreak();
    v18 = 0;
    v19 = &v16->indices[surface->tris.baseIndex];
    v20 = surface->tris.triCount != 0;
    if ( surface->tris.triCount )
    {
      __asm
      {
        vmovss  xmm11, cs:__real@3bf9096c
        vxorps  xmm12, xmm12, xmm12
      }
      do
      {
        _R8 = 3i64 * v19[2];
        _RCX = 3i64 * *v19;
        __asm
        {
          vmovss  xmm0, dword ptr [r14+rcx*4]
          vsubss  xmm9, xmm0, dword ptr [r14+rdx*4]
          vmovss  xmm1, dword ptr [r14+rcx*4+4]
          vsubss  xmm8, xmm1, dword ptr [r14+rdx*4+4]
          vmovss  xmm0, dword ptr [r14+rcx*4+8]
          vsubss  xmm6, xmm0, dword ptr [r14+rdx*4+8]
          vmovss  xmm1, dword ptr [r14+r8*4]
          vsubss  xmm7, xmm1, dword ptr [r14+rdx*4]
          vmovss  xmm0, dword ptr [r14+r8*4+4]
          vsubss  xmm5, xmm0, dword ptr [r14+rdx*4+4]
          vmovss  xmm1, dword ptr [r14+r8*4+8]
          vsubss  xmm4, xmm1, dword ptr [r14+rdx*4+8]
          vmulss  xmm2, xmm4, xmm8
          vmulss  xmm0, xmm5, xmm6
          vsubss  xmm10, xmm2, xmm0
          vmulss  xmm3, xmm7, xmm6
          vmulss  xmm1, xmm4, xmm9
          vsubss  xmm4, xmm3, xmm1
          vmulss  xmm1, xmm10, dword ptr [rsi]
          vmulss  xmm3, xmm4, dword ptr [rsi+4]
          vmulss  xmm2, xmm5, xmm9
          vmulss  xmm0, xmm7, xmm8
          vsubss  xmm5, xmm2, xmm0
          vmulss  xmm0, xmm5, dword ptr [rsi+8]
          vaddss  xmm2, xmm3, xmm1
          vaddss  xmm1, xmm2, xmm0
          vcomiss xmm1, xmm12
        }
        if ( !v20 )
        {
          __asm
          {
            vmulss  xmm3, xmm1, xmm1
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm0, xmm10, xmm10
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm2, xmm2, xmm1
            vmulss  xmm0, xmm2, xmm11
            vcomiss xmm3, xmm0
          }
          v58 = 0;
          v59 = &inPoints[0].xyz.v[2];
          v60 = v19;
          do
          {
            v61 = 3i64 * *v60;
            *(v59 - 2) = *(float *)&_R14[12 * *v60];
            *(v59 - 1) = *(float *)&_R14[4 * v61 + 4];
            *v59 = *(float *)&_R14[4 * v61 + 8];
            *(_QWORD *)(v59 + 1) = 0i64;
            v59[3] = 0.0;
            v62 = (int)v58;
            ++v60;
            ++v58;
            v59[v62 + 1] = 1.0;
            v59 += 6;
          }
          while ( v58 < 3 );
          v63 = 0;
          v64 = 3;
          v65 = 0;
          while ( 1 )
          {
            v66 = 0i64;
            if ( !v63 )
              v66 = 9i64;
            v67 = R_ChopWorldPolyBehindPlane(v64, &inPoints[9 * v63], &inPoints[v66], &clipPlanes[v65]);
            v64 = v67;
            if ( !v67 )
              break;
            if ( v67 > 9 )
            {
              LODWORD(v77) = v67;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 253, ASSERT_TYPE_ASSERT, "( ( fragmentPointCount <= 3 + 6 ) )", "( fragmentPointCount ) = %i", v77) )
                __debugbreak();
            }
            v63 ^= 1u;
            if ( ++v65 >= 6 )
            {
              if ( v64 <= 3 )
                break;
              result = 1;
              goto LABEL_36;
            }
          }
        }
        triCount = surface->tris.triCount;
        ++v18;
        v19 += 3;
        v20 = v18 < triCount;
      }
      while ( (int)v18 < (int)triCount );
    }
  }
  result = 0;
LABEL_36:
  __asm
  {
    vmovaps xmm12, [rsp+2B8h+var_98]
    vmovaps xmm11, [rsp+2B8h+var_88]
    vmovaps xmm10, [rsp+2B8h+var_78]
    vmovaps xmm9, [rsp+2B8h+var_68]
    vmovaps xmm8, [rsp+2B8h+var_58]
    vmovaps xmm7, [rsp+2B8h+var_48]
    vmovaps xmm6, [rsp+2B8h+var_38]
  }
  return result;
}

/*
==============
R_MarkFragments_DynEnt
==============
*/
void R_MarkFragments_DynEnt(MarkInfo *markInfo, const XModel *model, unsigned int modelLod, const GfxPlacement *poseBone, GfxMarkContext *markContext)
{
  const XModelLodInfo *LodInfo; 
  Material *const *Skins; 
  __int64 v18; 
  float v29; 
  char v44; 
  bool v45; 
  XSurface *v46; 
  __int64 v47; 
  __int64 v48; 
  bool v57; 
  bool v58; 
  BOOL v78; 
  BOOL v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  XSurface *surfaces; 
  Material *const *v100; 
  MarkInfo *v101; 
  GfxMarkContext *v102; 
  Bounds outInvQuat; 
  vec3_t quat; 

  _RBX = markInfo;
  v101 = markInfo;
  v102 = markContext;
  *(_QWORD *)quat.v = poseBone;
  Profile_Begin(239);
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 231, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LodInfo = XModelGetLodInfo(model, modelLod);
  if ( (!LodInfo->surfs || !Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 937, ASSERT_TYPE_ASSERT, "(XModelIsLodUsable( model, modelLod ))", "%s\n\tModel not usable: %s lod %u", "XModelIsLodUsable( model, modelLod )", model->name, modelLod) )
    __debugbreak();
  v98 = XModelGetSurfaces(model, &surfaces, modelLod);
  Skins = XModelGetSkins(model, modelLod);
  __asm { vmovss  xmm0, dword ptr [rbx+38h] }
  v18 = 0i64;
  v100 = Skins;
  __asm { vmovss  [rsp+158h+var_118], xmm0 }
  markContext->lmapIndex = 0;
  if ( (v80 & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v81 & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v82 & 0x7F800000) == 2139095040 )
  {
LABEL_58:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 945, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+44h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v83 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v84 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4Ch]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v85 & 0x7F800000) == 2139095040 )
  {
LABEL_59:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 946, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 )
    goto LABEL_60;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+54h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v87 & 0x7F800000) == 2139095040 )
    goto LABEL_60;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+58h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v88 & 0x7F800000) == 2139095040 )
  {
LABEL_60:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 947, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] )") )
      __debugbreak();
  }
  _R13 = &_RBX->localTexCoordAxisZ;
  if ( _RBX->boltOffsetValid )
  {
    __asm { vmovsd  xmm0, qword ptr [rbx+780h] }
    v29 = _RBX->boltOffsetPos.v[2];
    __asm { vmovsd  qword ptr [rbx+8], xmm0 }
    _RBX->localOrigin.v[2] = v29;
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+44h]
      vmovsd  qword ptr [rbx+14h], xmm0
    }
    _RBX->localTexCoordAxisX.v[2] = _RBX->axis.m[1].v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+50h]
      vmovsd  qword ptr [rbx+20h], xmm0
    }
    _RBX->localTexCoordAxisY.v[2] = _RBX->axis.m[2].v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+38h]
      vmovsd  qword ptr [r13+0], xmm0
    }
    _RBX->localTexCoordAxisZ.v[2] = _RBX->axis.m[0].v[2];
  }
  else
  {
    QuatTrans_Inverse(*(const vec4_t **)quat.v, (const vec3_t *)(*(_QWORD *)quat.v + 16i64), (vec4_t *)&outInvQuat, &quat);
    QuatTrans_TransformPoint((const vec4_t *)&outInvQuat, &quat, &_RBX->collInfo->sphere.origin, &_RBX->localOrigin);
    QuatTransform((const vec4_t *)&outInvQuat, &_RBX->axis.m[1], &_RBX->localTexCoordAxisX);
    QuatTransform((const vec4_t *)&outInvQuat, &_RBX->axis.m[2], &_RBX->localTexCoordAxisY);
    QuatTransform((const vec4_t *)&outInvQuat, _RBX->axis.m, &_RBX->localTexCoordAxisZ);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v89 & 0x7F800000) == 2139095040 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v90 & 0x7F800000) == 2139095040 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v91 & 0x7F800000) == 2139095040 )
  {
LABEL_61:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 969, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] )") )
      __debugbreak();
  }
  _R14 = &_RBX->localTexCoordAxisY;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v92 & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v93 & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v94 & 0x7F800000) == 2139095040 )
  {
LABEL_62:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 970, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] )") )
      __debugbreak();
  }
  _RDI = &_RBX->localTexCoordAxisZ;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v95 & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v96 & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+34h]
    vmovss  [rsp+158h+var_118], xmm0
  }
  if ( (v97 & 0x7F800000) == 2139095040 )
  {
LABEL_63:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 971, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] )") )
      __debugbreak();
  }
  v44 = 0;
  v45 = 0;
  Bounds_ForOBB(&outInvQuat, &_RBX->localOrigin, (const vec3_t *)&_RBX->markSize, &_RBX->localTexCoordAxisX, &_RBX->localTexCoordAxisY, &_RBX->localTexCoordAxisZ);
  if ( v98 )
  {
    v46 = surfaces;
    v47 = (__int64)v100;
    v48 = 0i64;
    __asm
    {
      vmovaps [rsp+158h+var_58], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+158h+var_68], xmm7
      vmovss  xmm7, [rsp+158h+var_DC]
      vmovaps [rsp+158h+var_78], xmm8
      vmovss  xmm8, [rsp+158h+var_E0]
      vmovaps [rsp+158h+var_88], xmm9
      vmovss  xmm9, dword ptr [rsp+158h+outInvQuat+0Ch]
      vmovaps [rsp+158h+var_98], xmm10
      vmovss  xmm10, dword ptr [rsp+158h+outInvQuat+8]
      vmovaps [rsp+158h+var_A8], xmm11
      vmovss  xmm11, dword ptr [rsp+158h+outInvQuat+4]
      vmovaps [rsp+158h+var_B8], xmm12
      vmovss  xmm12, dword ptr [rsp+158h+outInvQuat]
    }
    do
    {
      if ( v45 )
        break;
      if ( (*(_DWORD *)(*(_QWORD *)(v47 + 8 * v18) + 12i64) & 0x20) == 0 )
      {
        _RDI = (__int64)&v46[v48].surfBounds;
        v57 = _RDI == 0;
        if ( &v46[v48] == (XSurface *)-144i64 )
        {
          v58 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 607, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0");
          v57 = !v58;
          if ( v58 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vsubss  xmm1, xmm0, xmm12
          vaddss  xmm0, xmm9, dword ptr [rdi+0Ch]
          vandps  xmm1, xmm1, xmm6
          vcomiss xmm1, xmm0
        }
        if ( v57 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+4]
            vsubss  xmm1, xmm0, xmm11
            vaddss  xmm0, xmm8, dword ptr [rdi+10h]
            vandps  xmm1, xmm1, xmm6
            vcomiss xmm1, xmm0
          }
          if ( v57 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+8]
              vsubss  xmm1, xmm0, xmm10
              vaddss  xmm0, xmm7, dword ptr [rdi+14h]
              vandps  xmm1, xmm1, xmm6
              vcomiss xmm1, xmm0
            }
            if ( v57 )
            {
              v44 = 1;
              v45 = (v46[v48].flags & 2) != 0;
            }
          }
        }
      }
      ++v18;
      ++v48;
    }
    while ( v18 != v98 );
    __asm
    {
      vmovaps xmm12, [rsp+158h+var_B8]
      vmovaps xmm11, [rsp+158h+var_A8]
      vmovaps xmm10, [rsp+158h+var_98]
      vmovaps xmm9, [rsp+158h+var_88]
      vmovaps xmm8, [rsp+158h+var_78]
      vmovaps xmm7, [rsp+158h+var_68]
      vmovaps xmm6, [rsp+158h+var_58]
    }
    if ( v44 )
    {
      LOBYTE(v79) = v45;
      LOBYTE(v78) = 0;
      v101->callback(v101->callbackContext, v102, &v101->localOrigin, &v101->localTexCoordAxisX, &v101->localTexCoordAxisY, &v101->localTexCoordAxisZ, v78, v79);
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
  cpose_t **p_pose; 
  __int16 v11; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v28; 
  char v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  Material *material; 
  const R_CollInfo *collInfo; 
  void *callbackContext; 
  BOOL v118; 
  BOOL v119; 
  __int64 sceneBModelCollidedCount; 
  tmat33_t<vec3_t> axis; 
  int v122; 
  _DWORD v125[4]; 
  int v126[4]; 
  int v127[4]; 
  char v128[4]; 
  __int16 v129; 
  vec3_t angles; 
  tmat43_t<vec3_t> out; 
  vec3_t v132; 
  void *retaddr; 

  _R11 = &retaddr;
  sceneBModelCollidedCount = markInfo->sceneBModelCollidedCount;
  if ( markInfo->sceneBModelCollidedCount )
  {
    _RSI = (int *)markInfo->axis.m[2].v;
    p_pose = &markInfo->sceneBModelsCollided[0].pose;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovsd  xmm7, cs:__real@3f30000000000000
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    do
    {
      _RDI = *p_pose;
      v11 = *((_WORD *)p_pose + 4);
      v128[0] = 3;
      v129 = v11;
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+48h]
        vmovss  dword ptr [rbp+70h+angles], xmm0
        vmovss  xmm1, dword ptr [rdi+4Ch]
        vmovss  dword ptr [rbp+70h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rdi+50h]
        vmovss  dword ptr [rbp+70h+angles+8], xmm0
      }
      AnglesToAxis(&angles, &axis);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !_RDI->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(_RDI->origin.Get_origin, _RDI);
      FunctionPointer_origin(&_RDI->origin.origin.origin, (vec3_t *)&v122);
      if ( _RDI->isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, [rsp+170h+var_104]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm7
          vmovd   xmm0, [rsp+170h+var_100]
          vcvtsd2ss xmm2, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm7
          vmovd   xmm0, [rsp+170h+var_FC]
          vmovss  [rsp+170h+var_104], xmm2
          vcvtsd2ss xmm2, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm7
          vmovss  [rsp+170h+var_100], xmm2
          vcvtsd2ss xmm2, xmm1, xmm1
          vmovss  [rsp+170h+var_FC], xmm2
        }
      }
      v28 = (__int64)*(p_pose - 1);
      v29 = 0;
      v30 = *(int *)(v28 + 84);
      v31 = v30;
      v32 = (int)v30 + *(_DWORD *)(v28 + 88);
      if ( v30 != v32 )
      {
        v33 = v30;
        while ( 1 )
        {
          material = rgp.world->surfaces.surfaces[v33].material;
          if ( (material->surfaceFlags & 0x20) == 0 )
          {
            if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 646, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
            if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 647, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
              __debugbreak();
            if ( (material->techniqueSet->flags & 0x20) == 0 )
              break;
          }
          ++v31;
          ++v33;
          if ( v31 == v32 )
            goto LABEL_27;
        }
        v29 = 1;
LABEL_27:
        _RSI = (int *)markInfo->axis.m[2].v;
      }
      MatrixTranspose(&axis, (tmat33_t<vec3_t> *)&out);
      __asm { vmovss  xmm0, [rsp+170h+var_104] }
      collInfo = markInfo->collInfo;
      __asm
      {
        vxorps  xmm6, xmm0, xmm8
        vmovss  xmm0, [rsp+170h+var_100]
        vmulss  xmm2, xmm6, dword ptr [rbp+70h+out]
        vxorps  xmm5, xmm0, xmm8
        vmulss  xmm1, xmm5, dword ptr [rbp+70h+out+0Ch]
        vmovss  xmm0, [rsp+170h+var_FC]
        vaddss  xmm3, xmm2, xmm1
        vxorps  xmm4, xmm0, xmm8
        vmulss  xmm2, xmm4, dword ptr [rbp+70h+out+18h]
        vaddss  xmm1, xmm3, xmm2
        vmulss  xmm2, xmm6, dword ptr [rbp+70h+out+4]
        vmovss  [rbp+70h+var_8C], xmm1
        vmulss  xmm1, xmm5, dword ptr [rbp+70h+out+10h]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm4, dword ptr [rbp+70h+out+1Ch]
        vaddss  xmm1, xmm3, xmm2
        vmulss  xmm2, xmm6, dword ptr [rbp+70h+out+8]
        vmovss  [rbp+70h+var_88], xmm1
        vmulss  xmm1, xmm5, dword ptr [rbp+70h+out+14h]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm4, dword ptr [rbp+70h+out+20h]
        vaddss  xmm1, xmm3, xmm2
        vmovss  [rbp+70h+var_84], xmm1
      }
      MatrixTransformVector43(&collInfo->sphere.origin, &out, &v132);
      _RBX = &markInfo->axis.m[1];
      if ( &markInfo->axis.row1 == (vec3_t *)v127 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+4]
        vmovss  xmm4, dword ptr [rbx]
        vmovss  xmm6, dword ptr [rbx+8]
        vmulss  xmm1, xmm4, dword ptr [rsp+170h+axis]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+4]
        vmulss  xmm3, xmm4, dword ptr [rsp+170h+axis+0Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+8]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+10h]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+14h]
        vmovss  [rbp+70h+var_D8], xmm2
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm3, xmm4, dword ptr [rsp+170h+axis+18h]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+1Ch]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+20h]
        vmovss  [rbp+70h+var_D4], xmm2
        vaddss  xmm2, xmm3, xmm0
        vaddss  xmm2, xmm2, xmm1
        vmovss  [rbp+70h+var_D0], xmm2
      }
      if ( _RSI == v126 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr [rsi+4]
        vmovss  xmm4, dword ptr [rsi]
        vmovss  xmm6, dword ptr [rsi+8]
        vmulss  xmm1, xmm4, dword ptr [rsp+170h+axis]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+4]
        vmulss  xmm3, xmm4, dword ptr [rsp+170h+axis+0Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+8]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+10h]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+14h]
        vmovss  [rbp+70h+var_E8], xmm2
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm3, xmm4, dword ptr [rsp+170h+axis+18h]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+1Ch]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+20h]
        vmovss  [rbp+70h+var_E4], xmm2
        vaddss  xmm2, xmm3, xmm0
      }
      _R14 = &markInfo->axis;
      __asm
      {
        vaddss  xmm2, xmm2, xmm1
        vmovss  [rbp+70h+var_E0], xmm2
      }
      if ( &markInfo->axis == (tmat33_t<vec3_t> *)v125 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr [r14+4]
        vmovss  xmm4, dword ptr [r14]
        vmulss  xmm1, xmm4, dword ptr [rsp+170h+axis]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+4]
        vmovss  xmm6, dword ptr [r14+8]
        vmulss  xmm3, xmm4, dword ptr [rsp+170h+axis+0Ch]
      }
      callbackContext = markInfo->callbackContext;
      __asm
      {
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+8]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+10h]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+14h]
        vmovss  dword ptr [rsp+78h], xmm2
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm3, xmm4, dword ptr [rsp+170h+axis+18h]
        vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+1Ch]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+20h]
        vmovss  dword ptr [rsp+7Ch], xmm2
      }
      LOBYTE(v119) = 0;
      __asm { vaddss  xmm2, xmm3, xmm0 }
      LOBYTE(v118) = v29;
      __asm
      {
        vaddss  xmm2, xmm2, xmm1
        vmovss  [rbp+70h+var_F0], xmm2
      }
      markInfo->callback(callbackContext, (const GfxMarkContext *)v128, &v132, (const vec3_t *)v127, (const vec3_t *)v126, (const vec3_t *)v125, v118, v119);
      p_pose += 3;
      --sceneBModelCollidedCount;
    }
    while ( sceneBModelCollidedCount );
    __asm
    {
      vmovaps xmm8, [rsp+170h+var_58+8]
      vmovaps xmm7, [rsp+170h+var_48+8]
      vmovaps xmm6, [rsp+170h+var_38+8]
    }
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
  DObj *v20; 
  unsigned int v22; 
  int v23; 
  const XModel *v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned __int8 v28; 
  __int64 numBones; 
  unsigned int v30; 
  DObj *v31; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned __int8 index[4]; 
  int NumModels; 
  DObj *obj; 
  scr_string_t name; 
  cpose_t *posea; 
  DObjPartBits v44; 
  DObjPartBits partBits; 

  v5 = dobj;
  obj = (DObj *)dobj;
  posea = (cpose_t *)pose;
  _RDI = outInfo;
  Profile_Begin(238);
  v8 = 0i64;
  _RDI->numBones = 0;
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
      LODWORD(v38) = BestUsableLod;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 670, ASSERT_TYPE_ASSERT, "(modelLod <= XMODEL_LOD_CULLED_OUT)", "%s\n\t%s %u", "modelLod <= XMODEL_LOD_CULLED_OUT", Model->name, v38) )
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
    LODWORD(v38) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 678, ASSERT_TYPE_ASSERT, "(XModelIsLodUsable( model, modelLod ))", "%s\n\tModel not usable: %s lod %u", "XModelIsLodUsable( model, modelLod )", Model->name, v38) )
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
      LODWORD(v36) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 694, ASSERT_TYPE_ASSERT, "( ( modelBoneIndx < model->numBones ) )", "( modelBoneIndx ) = %u", v36) )
        __debugbreak();
    }
    name = Model->boneNames[v16];
    if ( name )
    {
      v17 = 0;
      __asm { vmovaps [rsp+108h+var_48], xmm6 }
      _RSI = &v44;
      __asm { vpxor   xmm6, xmm6, xmm6 }
      do
      {
        __asm { vmovdqu xmmword ptr [rsi], xmm6 }
        _RSI = (DObjPartBits *)((char *)_RSI + 16);
        ++v17;
      }
      while ( v17 < 2 );
      v20 = obj;
      DObjLock(obj);
      DObjGetHidePartBits(obj, &partBits);
      __asm { vmovaps xmm6, [rsp+108h+var_48] }
      v22 = 0;
      v23 = 0;
      do
      {
        v24 = DObjGetModel(v20, v23);
        v25 = XModelGetBestUsableLod(v24, 0, 0);
        v26 = v25;
        if ( v25 > 6 )
        {
          LODWORD(v38) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 758, ASSERT_TYPE_ASSERT, "(modelLod <= XMODEL_LOD_CULLED_OUT)", "%s\n\t%s %u", "modelLod <= XMODEL_LOD_CULLED_OUT", v24->name, v38) )
            __debugbreak();
        }
        if ( v26 < 6 && XModelGetBoneIndex(v24, name, v22, index) )
        {
          v27 = DObjNumBones(v20);
          if ( index[0] >= v27 )
          {
            LODWORD(v37) = DObjNumBones(v20);
            LODWORD(v36) = index[0];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 772, ASSERT_TYPE_ASSERT, "(unsigned)( dobjBoneIndex ) < (unsigned)( DObjNumBones( dobj ) )", "dobjBoneIndex doesn't index DObjNumBones( dobj )\n\t%i not in [0, %i)", v36, v37) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (index[0] & 0x1F)) & partBits.array[(unsigned __int64)index[0] >> 5]) == 0 )
          {
            v28 = truncate_cast<unsigned char,int>(index[0] - v22);
            if ( _RDI->numBones >= 0x20 )
            {
              LODWORD(v37) = 32;
              LODWORD(v36) = _RDI->numBones;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 783, ASSERT_TYPE_ASSERT, "(unsigned)( outInfo.numBones ) < (unsigned)( MarkFragments_BoneInfo::MAX_BONES )", "outInfo.numBones doesn't index MarkFragments_BoneInfo::MAX_BONES\n\t%i not in [0, %i)", v36, v37) )
                __debugbreak();
            }
            numBones = _RDI->numBones;
            if ( (_DWORD)numBones == 32 )
              goto LABEL_42;
            _RDI->submodelIndex[numBones] = v23;
            _RDI->modelBoneIndex[_RDI->numBones] = v28;
            _RDI->dobjBoneIndex[_RDI->numBones] = index[0];
            v20 = obj;
            _RDI->submodelLod[_RDI->numBones] = v26;
            v30 = index[0];
            ++_RDI->numBones;
            v44.array[(unsigned __int64)v30 >> 5] |= 0x80000000 >> (v30 & 0x1F);
          }
        }
        ++v23;
        v22 += v24->numBones;
      }
      while ( v23 != NumModels );
      LODWORD(numBones) = _RDI->numBones;
LABEL_42:
      v31 = obj;
      if ( (_DWORD)numBones )
      {
        if ( CG_Pose_CalcDObjPoseForMark(posea, obj, &v44) )
        {
          if ( !DObjSkelAreBonesUpToDate(v31, &v44) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 815, ASSERT_TYPE_ASSERT, "(boneMtxList == 0 || DObjSkelAreBonesUpToDate( dobj, &queryPartBits ))", (const char *)&queryFormat, "boneMtxList == NULL || DObjSkelAreBonesUpToDate( dobj, &queryPartBits )") )
            __debugbreak();
          if ( _RDI->numBones )
          {
            do
            {
              _RAX = 32i64 * _RDI->dobjBoneIndex[v8];
              _RCX = (unsigned int)v8;
              v8 = (unsigned int)(v8 + 1);
              _RCX *= 32i64;
              __asm
              {
                vmovups ymm0, ymmword ptr [rax+rbx]
                vmovups ymmword ptr [rcx+rdi+10h], ymm0
              }
            }
            while ( (unsigned int)v8 < _RDI->numBones );
          }
          goto LABEL_49;
        }
        DObjUnlock(v31);
        _RDI->numBones = 0;
      }
      else
      {
LABEL_49:
        DObjUnlock(v31);
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
bool R_MarkFragments_Glass(MarkInfo *markInfo)
{
  signed __int64 v1; 
  void *v9; 
  __int64 v11; 
  unsigned int v14; 
  __int64 v15; 
  bool i; 
  GlassTri *v17; 
  unsigned int v57; 
  float *v58; 
  __int64 v59; 
  __int64 v60; 
  int v61; 
  int v62; 
  int v63; 
  __int64 v64; 
  int v65; 
  bool result; 
  __int64 maxVerts; 
  BOOL triCount; 
  BOOL outGlassNormal; 
  unsigned int v78; 
  int v79; 
  unsigned int pieceCount; 
  char v81[4]; 
  __int16 v82; 
  vec3_t v83; 
  FxWorldMarkPoint inPoints[18]; 
  GlassTri tris[64]; 
  vec3_t verts[256]; 
  unsigned __int16 pieceIndices[32]; 
  char v95; 

  v9 = alloca(v1);
  __asm
  {
    vmovaps [rsp+1080h+var_30], xmm6
    vmovaps [rsp+1080h+var_40], xmm7
    vmovaps [rsp+1080h+var_50], xmm8
    vmovaps [rsp+1080h+var_60], xmm9
    vmovaps [rsp+1080h+var_70], xmm10
    vmovaps [rsp+1080h+var_80], xmm11
    vmovaps [rsp+1080h+var_90], xmm12
  }
  v81[0] = 6;
  if ( FX_GlassPiecesInSphere(&markInfo->collInfo->sphere, pieceIndices, 0x20u, &pieceCount) )
  {
    v11 = 0i64;
    v79 = 0;
    if ( pieceCount )
    {
      __asm
      {
        vmovss  xmm11, cs:__real@3bf9096c
        vxorps  xmm12, xmm12, xmm12
      }
      do
      {
        v14 = pieceIndices[v11];
        if ( (FX_GlassPieceMaterial(v14)->surfaceFlags & 0x20) == 0 )
        {
          if ( !FX_GlassTrisInPiece(v14, markInfo->axis.m, tris, 0x40u, verts, 0x100u, &v78, &v83) )
            goto LABEL_38;
          if ( v78 > 0x40 )
          {
            LODWORD(maxVerts) = v78;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 382, ASSERT_TYPE_ASSERT, "( ( triCount <= ( sizeof( *array_counter( glassTris ) ) + 0 ) ) )", "( triCount ) = %i", maxVerts) )
              __debugbreak();
          }
          if ( v81[0] != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2165, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
            __debugbreak();
          v82 = v14;
          if ( v81[0] != 6 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2158, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
              __debugbreak();
            if ( (_WORD)v14 != v82 )
            {
              LODWORD(maxVerts) = v14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2168, ASSERT_TYPE_ASSERT, "( ( glassPieceIndex == FX_GetMarkContext_GlassPieceIndex( context ) ) )", "( glassPieceIndex ) = %u", maxVerts) )
                __debugbreak();
            }
          }
          v15 = 0i64;
          for ( i = 0; (unsigned int)v15 < v78; i = (unsigned int)v15 < v78 )
          {
            v17 = &tris[v15];
            _R8 = 3i64 * tris[v15].indices[2];
            _RDX = 3i64 * v17->indices[1];
            __asm
            {
              vmovss  xmm4, dword ptr [rbp+rdx*4+0F80h+var_CE0]
              vmovss  xmm3, dword ptr [rbp+rdx*4+0F80h+var_CE0+4]
              vmovss  xmm2, dword ptr [rbp+rdx*4+0F80h+var_CE0+8]
            }
            _RCX = 3i64 * v17->indices[0];
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+rcx*4+0F80h+var_CE0]
              vmovss  xmm1, dword ptr [rbp+rcx*4+0F80h+var_CE0+4]
              vsubss  xmm9, xmm0, xmm4
              vmovss  xmm0, dword ptr [rbp+rcx*4+0F80h+var_CE0+8]
              vsubss  xmm8, xmm1, xmm3
              vmovss  xmm1, dword ptr [rbp+r8*4+0F80h+var_CE0]
              vsubss  xmm6, xmm0, xmm2
              vmovss  xmm0, dword ptr [rbp+r8*4+0F80h+var_CE0+4]
              vsubss  xmm7, xmm1, xmm4
              vmovss  xmm1, dword ptr [rbp+r8*4+0F80h+var_CE0+8]
              vsubss  xmm5, xmm0, xmm3
              vsubss  xmm4, xmm1, xmm2
              vmulss  xmm2, xmm4, xmm8
              vmulss  xmm0, xmm5, xmm6
              vsubss  xmm10, xmm2, xmm0
              vmulss  xmm3, xmm7, xmm6
              vmulss  xmm1, xmm4, xmm9
              vsubss  xmm4, xmm3, xmm1
              vmulss  xmm1, xmm10, dword ptr [r13+0]
              vmulss  xmm3, xmm4, dword ptr [r13+4]
              vmulss  xmm2, xmm5, xmm9
              vmulss  xmm0, xmm7, xmm8
              vsubss  xmm5, xmm2, xmm0
              vmulss  xmm0, xmm5, dword ptr [r13+8]
              vaddss  xmm2, xmm3, xmm1
              vaddss  xmm1, xmm2, xmm0
              vcomiss xmm1, xmm12
            }
            if ( !i )
            {
              __asm
              {
                vmulss  xmm3, xmm1, xmm1
                vmulss  xmm1, xmm4, xmm4
                vmulss  xmm0, xmm10, xmm10
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm5, xmm5
                vaddss  xmm2, xmm2, xmm1
                vmulss  xmm0, xmm2, xmm11
                vcomiss xmm3, xmm0
              }
              v57 = 0;
              v58 = &inPoints[0].xyz.v[2];
              do
              {
                v59 = v17->indices[0];
                *(v58 - 2) = verts[v17->indices[0]].v[0];
                *(v58 - 1) = verts[v59].v[1];
                *v58 = verts[v59].v[2];
                *(_QWORD *)(v58 + 1) = 0i64;
                v58[3] = 0.0;
                v60 = (int)v57;
                v17 = (GlassTri *)((char *)v17 + 2);
                ++v57;
                v58[v60 + 1] = 1.0;
                v58 += 6;
              }
              while ( v57 < 3 );
              v61 = 0;
              v62 = 0;
              v63 = 3;
              while ( 1 )
              {
                v64 = 0i64;
                if ( !v61 )
                  v64 = 9i64;
                v65 = R_ChopWorldPolyBehindPlane(v63, &inPoints[9 * v61], &inPoints[v64], &markInfo->planes[v62]);
                v63 = v65;
                if ( !v65 )
                  break;
                if ( v65 > 9 )
                {
                  LODWORD(maxVerts) = v65;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 406, ASSERT_TYPE_ASSERT, "( ( fragmentPointCount <= 3 + 6 ) )", "( fragmentPointCount ) = %i", maxVerts) )
                    __debugbreak();
                }
                v61 ^= 1u;
                if ( ++v62 >= 6 )
                {
                  if ( v63 < 3 )
                  {
                    LODWORD(maxVerts) = v63;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 414, ASSERT_TYPE_ASSERT, "( ( fragmentPointCount >= 3 ) )", "( fragmentPointCount ) = %i", maxVerts) )
                      __debugbreak();
                  }
                  LOBYTE(outGlassNormal) = 0;
                  LOBYTE(triCount) = 0;
                  markInfo->callback(markInfo->callbackContext, (const GfxMarkContext *)v81, (const vec3_t *)&markInfo->collInfo->sphere, &markInfo->axis.row1, &markInfo->axis.row2, (const vec3_t *)&markInfo->axis, triCount, outGlassNormal);
                  goto LABEL_34;
                }
              }
            }
            v15 = (unsigned int)(v15 + 1);
          }
        }
LABEL_34:
        v11 = (unsigned int)(v79 + 1);
        v79 = v11;
      }
      while ( (unsigned int)v11 < pieceCount );
    }
    result = 1;
  }
  else
  {
LABEL_38:
    result = 0;
  }
  _R11 = &v95;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
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
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  DObjSkelMat skelMat; 
  DObjSkelMat v103; 
  vec3_t v104; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> v107; 
  tmat43_t<vec3_t> v108; 
  DObjAnimMat mat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> v111; 

  _RSI = markInfo;
  _RBX = poseBone;
  Profile_Begin(240);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rbp+150h+mat.quat], ymm0
    vmovss  xmm1, dword ptr [rbp+150h+mat.trans+4]
    vaddss  xmm2, xmm1, dword ptr [rsi+0CCh]
    vextractf128 xmm0, ymm0, 1
    vaddss  xmm0, xmm0, dword ptr [rsi+0C8h]
    vmovss  dword ptr [rbp+150h+mat.trans], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+mat.trans+8]
    vaddss  xmm1, xmm0, dword ptr [rsi+0D0h]
    vmovss  dword ptr [rbp+150h+mat.trans+8], xmm1
    vmovss  dword ptr [rbp+150h+mat.trans+4], xmm2
  }
  LocalConvertQuatToSkelMat(&mat, &skelMat);
  LocalConvertQuatToInverseSkelMat(baseBone, &v103);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis]
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.axis+4]
    vmovss  dword ptr [rbp+150h+in2], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis+8]
    vmovss  dword ptr [rbp+150h+in2+4], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.axis+10h]
    vmovss  dword ptr [rbp+150h+in2+8], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis+14h]
    vmovss  dword ptr [rbp+150h+in2+0Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.axis+18h]
    vmovss  dword ptr [rbp+150h+in2+10h], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis+20h]
    vmovss  dword ptr [rbp+150h+in2+14h], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.axis+24h]
    vmovss  dword ptr [rbp+150h+in2+18h], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis+28h]
    vmovss  dword ptr [rbp+150h+in2+1Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.origin]
    vmovss  dword ptr [rbp+150h+in2+20h], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.origin+4]
    vmovss  dword ptr [rbp+150h+in2+24h], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.origin+8]
    vmovss  dword ptr [rbp+150h+in2+28h], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis]
    vmovss  dword ptr [rbp+150h+in2+2Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.axis+4]
    vmovss  dword ptr [rbp+150h+in1], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis+8]
    vmovss  dword ptr [rbp+150h+in1+4], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.axis+10h]
    vmovss  dword ptr [rbp+150h+in1+8], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis+14h]
    vmovss  dword ptr [rbp+150h+in1+0Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.axis+18h]
    vmovss  dword ptr [rbp+150h+in1+10h], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis+20h]
    vmovss  dword ptr [rbp+150h+in1+14h], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.axis+24h]
    vmovss  dword ptr [rbp+150h+in1+18h], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis+28h]
    vmovss  dword ptr [rbp+150h+in1+1Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.origin]
    vmovss  dword ptr [rbp+150h+in1+20h], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.origin+4]
    vmovss  dword ptr [rbp+150h+in1+24h], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.origin+8]
    vmovss  dword ptr [rbp+150h+in1+28h], xmm0
    vmovss  dword ptr [rbp+150h+in1+2Ch], xmm1
  }
  MatrixMultiply43(&in1, &in2, &out);
  LocalConvertQuatToSkelMat(baseBone, &skelMat);
  LocalConvertQuatToInverseSkelMat(&mat, &v103);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis]
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.axis+4]
    vmovss  dword ptr [rbp+150h+var_F0+4], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.axis+10h]
    vmovss  dword ptr [rbp+150h+var_F0], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis+8]
    vmovss  dword ptr [rbp+150h+var_F0+0Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.axis+18h]
    vmovss  dword ptr [rbp+150h+var_F0+8], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis+14h]
    vmovss  dword ptr [rbp+150h+var_F0+14h], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.axis+24h]
    vmovss  dword ptr [rbp+150h+var_F0+10h], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis+20h]
    vmovss  dword ptr [rbp+150h+var_F0+1Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.origin]
    vmovss  dword ptr [rbp+150h+var_F0+18h], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.axis+28h]
    vmovss  dword ptr [rbp+150h+var_F0+24h], xmm1
    vmovss  xmm1, dword ptr [rbp+150h+var_1D0.origin+8]
    vmovss  dword ptr [rbp+150h+var_F0+20h], xmm0
    vmovss  xmm0, dword ptr [rbp+150h+var_1D0.origin+4]
    vmovss  dword ptr [rbp+150h+var_F0+2Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.axis+4]
    vmovss  dword ptr [rbp+150h+var_F0+28h], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis]
    vmovss  dword ptr [rbp+150h+var_120+4], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.axis+10h]
    vmovss  dword ptr [rbp+150h+var_120], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis+8]
    vmovss  dword ptr [rbp+150h+var_120+0Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.axis+18h]
    vmovss  dword ptr [rbp+150h+var_120+8], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis+14h]
    vmovss  dword ptr [rbp+150h+var_120+14h], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.axis+24h]
    vmovss  dword ptr [rbp+150h+var_120+10h], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis+20h]
    vmovss  dword ptr [rbp+150h+var_120+1Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.origin]
    vmovss  dword ptr [rbp+150h+var_120+18h], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.axis+28h]
    vmovss  dword ptr [rbp+150h+var_120+24h], xmm1
    vmovss  xmm1, dword ptr [rsp+250h+skelMat.origin+8]
    vmovss  dword ptr [rbp+150h+var_120+20h], xmm0
    vmovss  xmm0, dword ptr [rsp+250h+skelMat.origin+4]
    vmovss  dword ptr [rbp+150h+var_120+2Ch], xmm1
    vmovss  dword ptr [rbp+150h+var_120+28h], xmm0
  }
  MatrixMultiply43(&v108, &v107, &v111);
  _RAX = _RSI->collInfo;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4004h]
    vmovss  dword ptr [rbp+150h+var_190], xmm0
    vmovss  xmm1, dword ptr [rax+4008h]
    vmovss  dword ptr [rbp+150h+var_190+4], xmm1
    vmovss  xmm0, dword ptr [rax+400Ch]
    vmovss  dword ptr [rbp+150h+var_190+8], xmm0
  }
  MatrixTransformVector43(&v104, &v111, &_RSI->localOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+38h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v84 & 0x7F800000) == 2139095040 )
    goto LABEL_34;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+3Ch]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v85 & 0x7F800000) == 2139095040 )
    goto LABEL_34;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+40h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 )
  {
LABEL_34:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 548, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+44h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v87 & 0x7F800000) == 2139095040 )
    goto LABEL_35;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+48h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v88 & 0x7F800000) == 2139095040 )
    goto LABEL_35;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4Ch]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v89 & 0x7F800000) == 2139095040 )
  {
LABEL_35:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 549, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+50h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v90 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+54h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v91 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+58h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v92 & 0x7F800000) == 2139095040 )
  {
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 550, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] )") )
      __debugbreak();
  }
  MatrixTransposeTransformVector(&_RSI->axis.m[1], (const tmat33_t<vec3_t> *)&out, &_RSI->localTexCoordAxisX);
  MatrixTransposeTransformVector(&_RSI->axis.m[2], (const tmat33_t<vec3_t> *)&out, &_RSI->localTexCoordAxisY);
  MatrixTransposeTransformVector(_RSI->axis.m, (const tmat33_t<vec3_t> *)&out, &_RSI->localTexCoordAxisZ);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+14h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v93 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v94 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v95 & 0x7F800000) == 2139095040 )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 556, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+20h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v96 & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v97 & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v98 & 0x7F800000) == 2139095040 )
  {
LABEL_38:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 557, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v99 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+30h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v100 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+34h]
    vmovss  [rsp+250h+var_220], xmm0
  }
  if ( (v101 & 0x7F800000) == 2139095040 )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 558, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] )") )
      __debugbreak();
  }
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
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  DObjSkelMat skelMat; 
  tmat33_t<vec3_t> v66; 
  tmat43_t<vec3_t> in2; 

  _RDI = markInfo;
  Profile_Begin(240);
  if ( !_RDI->boltOffsetValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 574, ASSERT_TYPE_SANITY, "( markInfo->boltOffsetValid )", (const char *)&queryFormat, "markInfo->boltOffsetValid") )
    __debugbreak();
  LocalConvertQuatToInverseSkelMat(baseBone, &skelMat);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis]
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.axis+4]
    vmovss  dword ptr [rbp+57h+var_90], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis+8]
    vmovss  dword ptr [rbp+57h+var_90+4], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.axis+10h]
    vmovss  dword ptr [rbp+57h+var_90+8], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis+14h]
    vmovss  dword ptr [rbp+57h+var_90+0Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.axis+18h]
    vmovss  dword ptr [rbp+57h+var_90+10h], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis+20h]
    vmovss  dword ptr [rbp+57h+var_90+14h], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.axis+24h]
    vmovss  dword ptr [rbp+57h+var_90+18h], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis+28h]
    vmovss  dword ptr [rbp+57h+var_90+1Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.origin]
    vmovss  dword ptr [rbp+57h+var_90+20h], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.origin+4]
    vmovss  [rbp+57h+var_6C], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.origin+8]
    vmovss  [rbp+57h+var_68], xmm0
    vmovss  [rbp+57h+var_64], xmm1
  }
  LocalConvertQuatToSkelMat(baseBone, &skelMat);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis]
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.axis+4]
    vmovss  dword ptr [rbp+57h+in2], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis+8]
    vmovss  dword ptr [rbp+57h+in2+4], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.axis+10h]
    vmovss  dword ptr [rbp+57h+in2+8], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis+14h]
    vmovss  dword ptr [rbp+57h+in2+0Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.axis+18h]
    vmovss  dword ptr [rbp+57h+in2+10h], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis+20h]
    vmovss  dword ptr [rbp+57h+in2+14h], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.axis+24h]
    vmovss  dword ptr [rbp+57h+in2+18h], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.axis+28h]
    vmovss  dword ptr [rbp+57h+in2+1Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.origin]
    vmovss  dword ptr [rbp+57h+in2+20h], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+skelMat.origin+4]
    vmovss  dword ptr [rbp+57h+in2+24h], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+skelMat.origin+8]
    vmovss  dword ptr [rbp+57h+in2+28h], xmm0
    vmovss  dword ptr [rbp+57h+in2+2Ch], xmm1
  }
  MatrixTransformVector43(&_RDI->boltOffsetPos, &in2, &_RDI->localOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v47 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+40h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v49 & 0x7F800000) == 2139095040 )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 583, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[0] )[0] ) && !IS_NAN( ( markInfo->axis[0] )[1] ) && !IS_NAN( ( markInfo->axis[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+44h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v50 & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+48h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v51 & 0x7F800000) == 2139095040 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4Ch]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v52 & 0x7F800000) == 2139095040 )
  {
LABEL_38:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 584, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[1] )[0] ) && !IS_NAN( ( markInfo->axis[1] )[1] ) && !IS_NAN( ( markInfo->axis[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+50h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v53 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+54h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v54 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+58h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v55 & 0x7F800000) == 2139095040 )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 585, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->axis[2] )[0] ) && !IS_NAN( ( markInfo->axis[2] )[1] ) && !IS_NAN( ( markInfo->axis[2] )[2] )") )
      __debugbreak();
  }
  MatrixTransposeTransformVector(&_RDI->axis.m[1], &v66, &_RDI->localTexCoordAxisX);
  MatrixTransposeTransformVector(&_RDI->axis.m[2], &v66, &_RDI->localTexCoordAxisY);
  MatrixTransposeTransformVector(_RDI->axis.m, &v66, &_RDI->localTexCoordAxisZ);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v56 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 591, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisX )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisX )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+24h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v60 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v61 & 0x7F800000) == 2139095040 )
  {
LABEL_41:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 592, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisY )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisY )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v62 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v63 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+34h]
    vmovss  [rsp+110h+var_E0], xmm0
  }
  if ( (v64 & 0x7F800000) == 2139095040 )
  {
LABEL_42:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_marks.cpp", 593, ASSERT_TYPE_SANITY, "( !IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( markInfo->localTexCoordAxisZ )[0] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[1] ) && !IS_NAN( ( markInfo->localTexCoordAxisZ )[2] )") )
      __debugbreak();
  }
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

