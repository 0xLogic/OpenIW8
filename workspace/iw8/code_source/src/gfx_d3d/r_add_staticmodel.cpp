/*
==============
R_AddAllStaticModelSurfacesCamera_LodCalc
==============
*/

void __fastcall R_AddAllStaticModelSurfacesCamera_LodCalc(const void *const cmd)
{
  ?R_AddAllStaticModelSurfacesCamera_LodCalc@@YAXQEBX@Z(cmd);
}

/*
==============
R_GenerateReactiveMotionCamera
==============
*/

void __fastcall R_GenerateReactiveMotionCamera(const void *const cmd)
{
  ?R_GenerateReactiveMotionCamera@@YAXQEBX@Z(cmd);
}

/*
==============
R_AddAllStaticModelSurfacesSunShadow
==============
*/

void __fastcall R_AddAllStaticModelSurfacesSunShadow(const void *const cmd)
{
  ?R_AddAllStaticModelSurfacesSunShadow@@YAXQEBX@Z(cmd);
}

/*
==============
R_AddAllStaticModelSurfacesSpotShadow_Split
==============
*/

void __fastcall R_AddAllStaticModelSurfacesSpotShadow_Split(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex, unsigned int primaryLightIndex)
{
  ?R_AddAllStaticModelSurfacesSpotShadow_Split@@YAXPEIAUGfxViewInfo@@II@Z(viewInfo, spotShadowUpdateIndex, primaryLightIndex);
}

/*
==============
SModelMask::CountLeadingZeros
==============
*/

unsigned int __fastcall SModelMask::CountLeadingZeros(SModelMask *this)
{
  return ?CountLeadingZeros@SModelMask@@QEBAIXZ(this);
}

/*
==============
R_AddAllStaticModelSurfacesCamera_UpdateUGB
==============
*/

void __fastcall R_AddAllStaticModelSurfacesCamera_UpdateUGB(const void *const cmd)
{
  ?R_AddAllStaticModelSurfacesCamera_UpdateUGB@@YAXQEBX@Z(cmd);
}

/*
==============
R_AddAllStaticModelSurfacesCamera
==============
*/

void __fastcall R_AddAllStaticModelSurfacesCamera(const void *const cmd)
{
  ?R_AddAllStaticModelSurfacesCamera@@YAXQEBX@Z(cmd);
}

/*
==============
R_GetStaticModelCollectionNearestLOD
==============
*/

unsigned int __fastcall R_GetStaticModelCollectionNearestLOD(unsigned int viewIndex, unsigned int smodelCollectionIndex, const XModel *model)
{
  return ?R_GetStaticModelCollectionNearestLOD@@YAIIIPEBUXModel@@@Z(viewIndex, smodelCollectionIndex, model);
}

/*
==============
R_AddAllStaticModelSurfacesDynLight
==============
*/

void __fastcall R_AddAllStaticModelSurfacesDynLight(GfxViewInfo *viewInfo, unsigned int sceneLightIndex, const unsigned __int16 *smodelIndexes, unsigned int smodelCount, GfxDrawList *shadowDrawList, unsigned int spotShadowUpdateIndex)
{
  ?R_AddAllStaticModelSurfacesDynLight@@YAXPEIAUGfxViewInfo@@IQEBGIPEAUGfxDrawList@@I@Z(viewInfo, sceneLightIndex, smodelIndexes, smodelCount, shadowDrawList, spotShadowUpdateIndex);
}

/*
==============
SModelMask::operator bool
==============
*/

bool __fastcall SModelMask::operator bool(SModelMask *this)
{
  return ??BSModelMask@@QEBA_NXZ(this);
}

/*
==============
R_CalcAllStaticModelSurfacesSpotShadowLodChange
==============
*/

void __fastcall R_CalcAllStaticModelSurfacesSpotShadowLodChange(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex, unsigned int primaryLightIndex)
{
  ?R_CalcAllStaticModelSurfacesSpotShadowLodChange@@YAXPEIAUGfxViewInfo@@II@Z(viewInfo, spotShadowUpdateIndex, primaryLightIndex);
}

/*
==============
R_ProcessSModelCollections
==============
*/

void __fastcall R_ProcessSModelCollections(const void *const cmd)
{
  ?R_ProcessSModelCollections@@YAXQEBX@Z(cmd);
}

/*
==============
R_AddStaticModel_IsValidShadowLOD
==============
*/

bool __fastcall R_AddStaticModel_IsValidShadowLOD(const XModel *xmodel, unsigned int lod)
{
  return ?R_AddStaticModel_IsValidShadowLOD@@YA_NPEBUXModel@@I@Z(xmodel, lod);
}

/*
==============
R_AddAllStaticModelSurfacesCamera_Dispatch
==============
*/

void __fastcall R_AddAllStaticModelSurfacesCamera_Dispatch(const void *const cmd)
{
  ?R_AddAllStaticModelSurfacesCamera_Dispatch@@YAXQEBX@Z(cmd);
}

/*
==============
SModelMask::operator bool
==============
*/
char SModelMask::operator bool(SModelMask *this)
{
  unsigned int v1; 

  v1 = 0;
  while ( !this->m_mask[0] )
  {
    ++v1;
    this = (SModelMask *)((char *)this + 8);
    if ( v1 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
SModelMask::CountLeadingZeros
==============
*/
__int64 SModelMask::CountLeadingZeros(SModelMask *this)
{
  __int64 result; 
  unsigned int v2; 

  LODWORD(result) = 0;
  v2 = 0;
  while ( !this->m_mask[0] )
  {
    result = (unsigned int)(result + 64);
    ++v2;
    this = (SModelMask *)((char *)this + 8);
    if ( v2 >= 2 )
      return result;
  }
  return (unsigned int)__lzcnt(this->m_mask[0]) + (unsigned int)result;
}

/*
==============
GenerateScreenSpaceExtentsFromWorldBounds
==============
*/
void GenerateScreenSpaceExtentsFromWorldBounds(const Bounds *worldBounds, const GfxViewportParms *viewportParms, GfxExtents2D *extents2D)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  __m128 v11; 
  __m128 v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  __int128 v23; 
  __m128 v26; 
  __m128 v28; 
  __m128 v29; 
  float v30; 
  __m128 v31; 
  __m128 v33; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __int128 v40; 
  __int128 v41; 
  __m128 v42; 
  __m128 v44; 
  __m128 v46; 
  __m128 v50; 
  __m128 v51; 
  __m128 v56; 
  __m128 v58; 
  __m128 v60; 
  __m128 v66; 
  __m128 v67; 
  __m128 v69; 
  __m128 v71; 
  __int128 v73; 
  __m128 v76; 
  __m128 v80; 
  __m128 v84; 
  __m128 v88; 
  __int128 v93; 
  __m128 v96; 
  __int128 v99; 
  __int128 v102; 
  __int128 v105; 
  __int128 v110; 
  __int128 v113; 
  __int128 v114; 
  __int128 v115; 
  __int128 v116; 
  __int128 v118; 
  __int128 v120; 
  __int128 v124; 
  __int128 v126; 
  __int128 v127; 
  __int128 v128; 
  __int128 v135; 
  __int128 v138; 
  __int128 v141; 
  __int128 v144; 
  __int128 v147; 
  float width; 
  float height; 
  float v157; 
  float v160; 
  unsigned int v161; 
  unsigned int v162; 
  float v163; 
  unsigned int v164; 
  float v165; 
  unsigned int v166; 
  unsigned int v167; 
  unsigned int v168; 
  float v169; 
  float v170; 
  float v171; 
  tmat44_t<vec4_t> v172; 
  tmat44_t<vec4_t> out; 

  _RBX = worldBounds;
  MatrixIdentity44(&out);
  v6 = out.m[3].v[1] - viewportParms->viewParms.camera.origin.v[1];
  out.m[3].v[0] = out.m[3].v[0] - viewportParms->viewParms.camera.origin.v[0];
  out.m[3].v[2] = out.m[3].v[2] - viewportParms->viewParms.camera.origin.v[2];
  out.m[3].v[1] = v6;
  MatrixMultiply44Aligned(&out, &viewportParms->viewParms.viewProjectionMatrix.m, &v172);
  v7 = _RBX->midPoint.v[1];
  v8 = _RBX->midPoint.v[2];
  v9 = _RBX->halfSize.v[2];
  v163 = (float)((float)((float)(_RBX->midPoint.v[0] * v172.m[0].v[2]) + (float)(v7 * v172.m[1].v[2])) + (float)(v8 * v172.m[2].v[2])) + v172.m[3].v[2];
  __asm { vbroadcastss xmm0, dword ptr [rbx+0Ch] }
  v11 = _mm128_mul_ps(_XMM0, (__m128)v172.m[0]);
  __asm { vbroadcastss xmm0, dword ptr [rbx+10h] }
  v13 = _mm128_mul_ps(_XMM0, (__m128)v172.m[1]);
  v160 = v9 * v172.m[2].v[3];
  _XMM0.m128_f32[0] = (float)viewportParms->viewport.width;
  v14 = _XMM0.m128_f32[0] * 0.5;
  v171 = _XMM0.m128_f32[0];
  v15 = 0i64;
  _XMM0.m128_f32[0] = (float)viewportParms->viewport.height;
  v170 = _XMM0.m128_f32[0] * 0.5;
  v16 = (float)((float)((float)(v172.m[0].v[0] * _RBX->midPoint.v[0]) + (float)(v172.m[1].v[0] * v7)) + (float)(v8 * v172.m[2].v[0])) + v172.m[3].v[0];
  v165 = v13.m128_f32[0] * v14;
  v17 = v13.m128_f32[0] * v14;
  v18 = v16 * v14;
  *(float *)&v161 = (float)(v9 * v172.m[2].v[0]) * v14;
  _mm_shuffle_ps((__m128)v172.m[0], (__m128)v172.m[0], 85);
  _mm_shuffle_ps((__m128)v172.m[1], (__m128)v172.m[1], 85);
  v169 = v14;
  *(float *)&v15 = (float)(_XMM0.m128_f32[0] * -0.5) * v13.m128_f32[1];
  v19 = v15;
  __asm
  {
    vbroadcastss xmm2, [rsp+240h+var_1F0]
    vinsertps xmm2, xmm2, xmm15, 30h ; '0'
  }
  v23 = _XMM2;
  *(float *)&v23 = v18;
  _XMM2 = v23;
  __asm { vinsertps xmm2, xmm2, xmm4, 10h }
  *(float *)&v162 = (float)(v172.m[2].v[1] * v9) * (float)(_XMM0.m128_f32[0] * -0.5);
  v26 = v11;
  v26.m128_f32[0] = v11.m128_f32[0] * v14;
  _XMM0 = v26;
  __asm { vinsertps xmm0, xmm0, xmm5, 10h }
  v28 = _mm128_sub_ps(_XMM2, _XMM0);
  v29 = _mm128_add_ps(_XMM2, _XMM0);
  v30 = _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
  v31 = v13;
  v13.m128_f32[0] = v165;
  *(float *)&v166 = v28.m128_f32[0] + v165;
  *(float *)&v167 = v28.m128_f32[0] - v13.m128_f32[0];
  *(float *)&v168 = v30 - *(float *)&v19;
  v33 = v31;
  v33.m128_f32[0] = v17;
  _XMM7 = v33;
  __asm { vinsertps xmm7, xmm7, xmm12, 10h }
  v35 = _mm128_add_ps(v29, _XMM7);
  v36 = _mm128_sub_ps(v29, _XMM7);
  v29.m128_f32[0] = _mm_shuffle_ps(v28, v28, 255).m128_f32[0];
  v37 = _mm_shuffle_ps(_XMM7, _XMM7, 255);
  *(float *)&v164 = v29.m128_f32[0] - v37.m128_f32[0];
  v39 = v37;
  v39.m128_f32[0] = v37.m128_f32[0] + v29.m128_f32[0];
  v38 = v39;
  v41 = v19;
  *(float *)&v41 = *(float *)&v19 + v30;
  v40 = v41;
  v42 = _mm_shuffle_ps(v35, v35, 255);
  v44 = v42;
  v44.m128_f32[0] = v42.m128_f32[0] + v160;
  _XMM0 = v44;
  __asm { vmaxss  xmm1, xmm0, xmm12 }
  v46 = v35;
  v46.m128_f32[0] = (float)(v35.m128_f32[0] + *(float *)&v161) * (float)(1.0 / *(float *)&_XMM1);
  _XMM3 = v46;
  __asm
  {
    vminss  xmm5, xmm3, cs:__real@7f7fffff
    vmaxss  xmm6, xmm3, cs:__real@ff7fffff
  }
  v50 = _mm_shuffle_ps(v35, v35, 85);
  v51 = v50;
  v51.m128_f32[0] = (float)(v50.m128_f32[0] + *(float *)&v162) * (float)(1.0 / *(float *)&_XMM1);
  _XMM2 = v51;
  __asm
  {
    vminss  xmm7, xmm2, cs:__real@7f7fffff
    vmaxss  xmm8, xmm2, cs:__real@ff7fffff
  }
  v56 = v42;
  v56.m128_f32[0] = v42.m128_f32[0] - v160;
  _XMM0 = v56;
  __asm { vmaxss  xmm1, xmm0, xmm12 }
  v58 = v35;
  v58.m128_f32[0] = (float)(v35.m128_f32[0] - *(float *)&v161) * (float)(1.0 / *(float *)&_XMM1);
  _XMM3 = v58;
  v60 = v50;
  v60.m128_f32[0] = (float)(v50.m128_f32[0] - *(float *)&v162) * (float)(1.0 / *(float *)&_XMM1);
  _XMM4 = v60;
  __asm
  {
    vminss  xmm5, xmm3, xmm5
    vmaxss  xmm6, xmm3, xmm6
    vminss  xmm7, xmm4, xmm7
    vmaxss  xmm8, xmm4, xmm8
  }
  v66 = _mm_shuffle_ps(v36, v36, 85);
  v67 = _mm_shuffle_ps(v36, v36, 255);
  v69 = v67;
  v69.m128_f32[0] = v67.m128_f32[0] + v160;
  _XMM0 = v69;
  __asm { vmaxss  xmm1, xmm0, xmm12 }
  v71 = v36;
  v71.m128_f32[0] = (float)(v36.m128_f32[0] + *(float *)&v161) * (float)(1.0 / *(float *)&_XMM1);
  _XMM2 = v71;
  v73 = v162;
  *(float *)&v73 = (float)(*(float *)&v162 + v66.m128_f32[0]) * (float)(1.0 / *(float *)&_XMM1);
  _XMM1 = v73;
  v76 = v67;
  v76.m128_f32[0] = v67.m128_f32[0] - v160;
  _XMM0 = v76;
  __asm
  {
    vminss  xmm7, xmm1, xmm7
    vmaxss  xmm8, xmm1, xmm8
    vmaxss  xmm1, xmm0, xmm12
  }
  v80 = v36;
  __asm
  {
    vminss  xmm5, xmm2, xmm5
    vmaxss  xmm6, xmm2, xmm6
  }
  v80.m128_f32[0] = (float)(v36.m128_f32[0] - *(float *)&v161) * (float)(1.0 / *(float *)&_XMM1);
  _XMM3 = v80;
  v84 = v66;
  __asm { vminss  xmm5, xmm3, xmm5 }
  v84.m128_f32[0] = (float)(v66.m128_f32[0] - *(float *)&v162) * (float)(1.0 / *(float *)&_XMM1);
  _XMM4 = v84;
  v88 = v38;
  v88.m128_f32[0] = v38.m128_f32[0] + v160;
  _XMM0 = v88;
  __asm
  {
    vmaxss  xmm1, xmm0, xmm12
    vmaxss  xmm6, xmm3, xmm6
    vminss  xmm7, xmm4, xmm7
    vmaxss  xmm8, xmm4, xmm8
  }
  v93 = v161;
  *(float *)&v93 = (float)(*(float *)&v161 + *(float *)&v166) * (float)(1.0 / *(float *)&_XMM1);
  _XMM3 = v93;
  v96 = v38;
  v96.m128_f32[0] = v38.m128_f32[0] - v160;
  _XMM0 = v96;
  __asm
  {
    vminss  xmm5, xmm3, xmm5
    vmaxss  xmm6, xmm3, xmm6
  }
  v99 = v162;
  *(float *)&v99 = (float)(*(float *)&v162 + *(float *)&v40) * (float)(1.0 / *(float *)&_XMM1);
  _XMM4 = v99;
  __asm { vmaxss  xmm1, xmm0, xmm12 }
  v102 = v166;
  *(float *)&v102 = (float)(*(float *)&v166 - *(float *)&v161) * (float)(1.0 / *(float *)&_XMM1);
  _XMM3 = v102;
  v105 = v164;
  *(float *)&v105 = *(float *)&v164 + v160;
  _XMM0 = v105;
  __asm
  {
    vminss  xmm7, xmm4, xmm7
    vmaxss  xmm8, xmm4, xmm8
    vminss  xmm5, xmm3, xmm5
    vmaxss  xmm6, xmm3, xmm6
  }
  v110 = v40;
  *(float *)&v110 = (float)(*(float *)&v40 - *(float *)&v162) * (float)(1.0 / *(float *)&_XMM1);
  _XMM4 = v110;
  __asm { vmaxss  xmm1, xmm0, xmm12 }
  _XMM2.m128_f32[0] = 1.0 / *(float *)&_XMM1;
  v114 = v161;
  *(float *)&v114 = *(float *)&v161 + *(float *)&v167;
  v113 = v114;
  v116 = v168;
  *(float *)&v116 = *(float *)&v168 + *(float *)&v162;
  v115 = v116;
  v118 = v113;
  *(float *)&v118 = *(float *)&v113 * _XMM2.m128_f32[0];
  _XMM3 = v118;
  v120 = v164;
  *(float *)&v120 = *(float *)&v164 - v160;
  _XMM0 = v120;
  __asm
  {
    vminss  xmm7, xmm4, xmm7
    vmaxss  xmm8, xmm4, xmm8
  }
  v124 = v115;
  *(float *)&v124 = *(float *)&v115 * _XMM2.m128_f32[0];
  _XMM4 = v124;
  __asm { vmaxss  xmm1, xmm0, xmm12 }
  v127 = v167;
  *(float *)&v127 = *(float *)&v167 - *(float *)&v161;
  v126 = v127;
  v128 = v168;
  __asm
  {
    vmaxss  xmm6, xmm3, xmm6
    vminss  xmm7, xmm4, xmm7
    vmaxss  xmm8, xmm4, xmm8
  }
  *(float *)&v128 = (float)(*(float *)&v168 - *(float *)&v162) * (float)(1.0 / *(float *)&_XMM1);
  _XMM4 = v128;
  __asm { vminss  xmm5, xmm3, xmm5 }
  v135 = v126;
  *(float *)&v135 = *(float *)&v126 * (float)(1.0 / *(float *)&_XMM1);
  _XMM3 = v135;
  __asm { vminss  xmm1, xmm4, xmm7 }
  v138 = _XMM1;
  *(float *)&v138 = *(float *)&_XMM1 + v170;
  _XMM12 = v138;
  __asm { vmaxss  xmm2, xmm3, xmm6 }
  v141 = _XMM2;
  *(float *)&v141 = *(float *)&_XMM2 + v169;
  _XMM11 = v141;
  __asm { vmaxss  xmm0, xmm4, xmm8 }
  v144 = _XMM0;
  *(float *)&v144 = *(float *)&_XMM0 + v170;
  _XMM13 = v144;
  __asm { vminss  xmm5, xmm3, xmm5 }
  v147 = _XMM5;
  *(float *)&v147 = *(float *)&_XMM5 + v169;
  _XMM9 = v147;
  __asm { vxorpd  xmm8, xmm8, xmm8 }
  if ( v171 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM8, v171) )
    __debugbreak();
  __asm
  {
    vmaxss  xmm0, xmm9, xmm6
    vminss  xmm10, xmm0, xmm7
  }
  width = (float)viewportParms->viewport.width;
  if ( width < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM8, width) )
    __debugbreak();
  __asm
  {
    vmaxss  xmm0, xmm11, xmm6
    vminss  xmm9, xmm0, xmm7
  }
  height = (float)viewportParms->viewport.height;
  if ( height < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM8, height) )
    __debugbreak();
  __asm
  {
    vmaxss  xmm0, xmm12, xmm6
    vminss  xmm11, xmm0, xmm7
  }
  v157 = (float)viewportParms->viewport.height;
  if ( v157 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM8, v157) )
    __debugbreak();
  __asm
  {
    vmaxss  xmm0, xmm13, xmm6
    vminss  xmm1, xmm0, xmm7
  }
  extents2D->maxY = *(float *)&_XMM1;
  extents2D->minX = *(float *)&_XMM10;
  extents2D->maxX = *(float *)&_XMM9;
  extents2D->minY = *(float *)&_XMM11;
  if ( *(float *)&_XMM10 > *(float *)&_XMM9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4178, ASSERT_TYPE_ASSERT, "(extents2D->minX <= extents2D->maxX)", (const char *)&queryFormat, "extents2D->minX <= extents2D->maxX") )
    __debugbreak();
  if ( extents2D->maxY < extents2D->minY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4179, ASSERT_TYPE_ASSERT, "(extents2D->minY <= extents2D->maxY)", (const char *)&queryFormat, "extents2D->minY <= extents2D->maxY") )
    __debugbreak();
}

/*
==============
R_AccumVisibleSModelCollectionArgs
==============
*/
void R_AccumVisibleSModelCollectionArgs(SModelCollectionEmit *emitCache, unsigned int *smodelSurfVisData, unsigned int smodelCollectionIndex, unsigned int validLodBits, unsigned __int8 subdivLevel, unsigned int passIndex, unsigned int sceneViewType)
{
  unsigned int smodelCollectionArgCount; 
  __int64 v10; 
  GfxWorld *world; 
  float v12; 
  GfxStaticModelCollection *v13; 
  __int64 firstInstance; 
  double v15; 
  __int64 v16; 
  __int64 v18; 

  smodelCollectionArgCount = emitCache->smodelCollectionArgCount;
  _EBP = validLodBits;
  v10 = smodelCollectionIndex;
  if ( smodelCollectionArgCount == 128 )
  {
    R_FlushVisibleSModelCollections(emitCache, smodelSurfVisData, passIndex);
    smodelCollectionArgCount = emitCache->smodelCollectionArgCount;
  }
  if ( smodelCollectionArgCount >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2493, ASSERT_TYPE_ASSERT, "(emitCache.smodelCollectionArgCount < 128)", (const char *)&queryFormat, "emitCache.smodelCollectionArgCount < SMODEL_COLLECTION_ARG_CACHE_SIZE") )
    __debugbreak();
  world = rgp.world;
  v12 = FLOAT_1_0;
  v13 = &rgp.world->smodels.collections[v10];
  if ( v13->instanceCount == 1 )
  {
    firstInstance = v13->firstInstance;
    if ( (unsigned int)firstInstance >= rgp.world->smodels.instanceCount )
    {
      LODWORD(v18) = v13->firstInstance;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2502, ASSERT_TYPE_ASSERT, "(unsigned)( singletonInstanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "singletonInstanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", v18, rgp.world->smodels.instanceCount) )
        __debugbreak();
      world = rgp.world;
    }
    v15 = GfxStaticModelLodDistIndexToScale(world->smodels.instanceFlags[firstInstance] & 0xF);
    v12 = *(float *)&v15;
  }
  v16 = emitCache->smodelCollectionArgCount;
  if ( !_EBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2510, ASSERT_TYPE_ASSERT, "(validLodBits)", (const char *)&queryFormat, "validLodBits") )
    __debugbreak();
  __asm { tzcnt   ebx, ebp }
  emitCache->smodelCollectionArgs[v16].smodelCollectionIndex = truncate_cast<unsigned short,unsigned int>(v10);
  emitCache->smodelCollectionArgs[v16].validLodBits = truncate_cast<unsigned char,unsigned int>(_EBP);
  emitCache->smodelCollectionArgs[v16].lodOffset = truncate_cast<unsigned char,unsigned int>(_EBX);
  emitCache->smodelCollectionArgs[v16].lodCount = truncate_cast<unsigned char,unsigned int>(32 - _EBX - __lzcnt(_EBP));
  emitCache->smodelCollectionArgs[v16].lodCullScalePacked = truncate_cast<unsigned char,unsigned int>((int)(float)(v12 * 32.0));
  emitCache->smodelCollectionArgs[v16].viewType = truncate_cast<unsigned char,unsigned int>(sceneViewType);
  ++emitCache->smodelCollectionArgCount;
}

/*
==============
R_AddAllStaticModelSurfacesCamera
==============
*/
void R_AddAllStaticModelSurfacesCamera(const void *const cmd)
{
  signed __int64 v1; 
  void *v2; 
  __int64 v4; 
  GfxStaticModelCollection *collections; 
  unsigned int *v6; 
  GfxSModelSurfDelaySort *p_delaySurfList; 
  unsigned int i; 
  const GfxStaticModel *smodel; 
  __int64 v10; 
  GfxSModelLodCalcResult *v12; 
  unsigned __int64 smodelCollectionIndex; 
  __int64 smodelIndex; 
  const GfxStaticModel *v16; 
  const vec4_t *v17; 
  const XModel *model; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  const XSurface *surfs; 
  const XModel *v23; 
  unsigned __int16 v24; 
  __int64 v25; 
  float lodDist; 
  float baseDist; 
  unsigned int v28; 
  SModelMask *p_smodelCountMask; 
  unsigned int v30; 
  char v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  const char *v34; 
  unsigned int v35; 
  SModelMask *v36; 
  GfxSModelSurfDelaySort **v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  unsigned __int8 subdivLevel; 
  GfxViewMaterialRenderFeatures renderFeatures; 
  unsigned int j; 
  __int64 v49; 
  unsigned __int64 v50; 
  unsigned int *v51; 
  GfxStaticModelCollection *v52; 
  GfxStaticModel *models; 
  Bounds *collectionBounds; 
  __int64 v55; 
  __int16 data[1792]; 
  __int64 v57; 
  int v58; 
  unsigned int v59; 
  GfxSModelEmitInfo smodelEmit; 
  vec3_t origin; 
  SModelMask smodelCountMask; 
  SModelMask v63; 
  MaterialLodSettings materialLodSettings; 
  GfxSModelSurfDrawData drawData; 
  DebugXModelStats surfDataLimit; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  GfxSModelSurfDelaySort delaySurfList; 
  char v75[8]; 

  v2 = alloca(v1);
  v55 = -2i64;
  Profile_Begin(95);
  Profile_Begin(547);
  v4 = *(_QWORD *)cmd;
  v49 = *(_QWORD *)cmd;
  collections = rgp.world->smodels.collections;
  v52 = collections;
  models = rgp.world->smodels.models;
  v6 = rgp.world->dpvs.smodelVisData[0];
  v51 = v6;
  surfDataLimit.name = (const char *)0x40000004800i64;
  surfDataLimit.type = 1024;
  surfDataLimit.lod = 1024;
  surfDataLimit.numSurfs = 1024;
  surfDataLimit.numTris = 18432;
  *(_QWORD *)&surfDataLimit.numVerts = 0x40000000400i64;
  v67 = 1024;
  v68 = 1024;
  v69 = 18432;
  v70 = 1024;
  v71 = 1024;
  v72 = 1024;
  v73 = 1024;
  R_InitSModelSurfDrawData(&drawData, 0x4000u, (const unsigned int (*)[5])&surfDataLimit);
  p_delaySurfList = &delaySurfList;
  for ( i = 0; i < 5; ++i )
    p_delaySurfList = R_InitSModelSurfBuildLists(&drawData, i, p_delaySurfList, 0x100u);
  if ( p_delaySurfList != (GfxSModelSurfDelaySort *)v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3126, ASSERT_TYPE_ASSERT, "( delaySurfList ) == ( delaySurfs + ( sizeof( *array_counter( delaySurfs ) ) + 0 ) )", "%s == %s\n\t%p, %p", "delaySurfList", "delaySurfs + ARRAY_COUNT( delaySurfs )", p_delaySurfList, v75) )
    __debugbreak();
  memset_0(smodelEmit.smodelCountForSurf, 0, sizeof(smodelEmit.smodelCountForSurf));
  smodel = NULL;
  smodelEmit.smodel = NULL;
  smodelCountMask.m_mask[0] = 0i64;
  smodelCountMask.m_mask[1] = 0i64;
  v63.m_mask[0] = 0i64;
  v63.m_mask[1] = 0i64;
  R_SetMaterialLodSettings(&materialLodSettings);
  R_LGV_InitPerFrameData((const vec3_t *)(v4 + 256));
  renderFeatures = GFX_VIEW_MTL_FEAT_NONE;
  origin.v[0] = 0.0;
  origin.v[1] = 0.0;
  origin.v[2] = 0.0;
  v57 = v4;
  v10 = *(_QWORD *)(v4 + 11696);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3162, ASSERT_TYPE_ASSERT, "(backendData)", (const char *)&queryFormat, "backendData") )
    __debugbreak();
  v58 = *(_DWORD *)(v10 + 1088720);
  v59 = 0;
  if ( g_cameraSModelCollectionCount > rgp.world->smodels.collectionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3169, ASSERT_TYPE_ASSERT, "(g_cameraSModelCollectionCount <= rgp.world->smodels.collectionCount)", (const char *)&queryFormat, "g_cameraSModelCollectionCount <= rgp.world->smodels.collectionCount") )
    __debugbreak();
  _EAX = 0;
  for ( j = 0; _EAX < g_cameraSModelCollectionCount; j = _EAX )
  {
    v12 = &g_cameraSModelLodCalcResults[_EAX];
    smodelCollectionIndex = v12->smodelCollectionIndex;
    LOBYTE(_EAX) = v12->lodMask;
    if ( (_BYTE)_EAX )
    {
      _EAX = (unsigned __int8)_EAX;
      __asm { tzcnt   r15d, eax }
    }
    else
    {
      _ER15 = 6;
    }
    subdivLevel = v12->subdivLevel;
    if ( _ER15 == 6 )
    {
      v6[smodelCollectionIndex >> 5] &= ~(0x80000000 >> (smodelCollectionIndex & 0x1F));
    }
    else
    {
      if ( (unsigned int)smodelCollectionIndex >= rgp.world->smodels.collectionCount )
      {
        LODWORD(v44) = rgp.world->smodels.collectionCount;
        LODWORD(v43) = v12->smodelCollectionIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3188, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v50 = 3 * smodelCollectionIndex;
      collectionBounds = rgp.world->smodels.collectionBounds;
      smodelIndex = collections[smodelCollectionIndex].smodelIndex;
      if ( (unsigned int)smodelIndex >= rgp.world->smodels.modelCount )
      {
        LODWORD(v44) = rgp.world->smodels.modelCount;
        LODWORD(v43) = collections[smodelCollectionIndex].smodelIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3198, ASSERT_TYPE_ASSERT, "(unsigned)( smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v16 = &models[smodelIndex];
      if ( XModelShouldShowBounds(v16->model) )
      {
        v17 = &colorGreen;
        if ( rgp.world->smodels.collections[smodelCollectionIndex].instanceCount > 1 )
          v17 = &colorBlue;
        if ( r_showCullSModels->current.enabled && !r_showCull->current.integer )
          R_AddDebugBox((DebugGlobals *)(*(_QWORD *)(v49 + 11696) + 927248i64), &rgp.world->smodels.collectionBounds[v50 / 3], v17, r_showCullMode->current.integer != 0);
      }
      if ( rg.showXModelRemoteConsole && rg.showXModelRankingFilterMode != 2 )
      {
        memset(&surfDataLimit, 0, sizeof(surfDataLimit));
        R_InitDebugXmodelStats(v16->model, 0, _ER15, 1u, &surfDataLimit);
        model = v16->model;
        if ( !v16->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        LodInfo = XModelGetLodInfo(model, _ER15);
        if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
          __debugbreak();
        if ( LodInfo->numsurfs )
        {
          surfIndex = LodInfo->surfIndex;
          numsurfs = model->numsurfs;
          if ( surfIndex >= numsurfs )
          {
            LODWORD(v44) = numsurfs;
            LODWORD(v43) = surfIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v43, v44) )
              __debugbreak();
          }
          if ( LodInfo->numsurfs + (unsigned int)LodInfo->surfIndex > model->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
            __debugbreak();
          if ( !LodInfo->surfs )
          {
            LODWORD(v45) = _ER15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", model->name, v45) )
              __debugbreak();
          }
          if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
            __debugbreak();
          surfs = LodInfo->surfs;
        }
        else
        {
          surfs = NULL;
        }
        v23 = v16->model;
        if ( !v16->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 247, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        v24 = XModelGetLodInfo(v23, _ER15)->numsurfs;
        if ( v24 )
        {
          v25 = v24;
          do
          {
            R_AddXSurfaceToXModelStats(surfs++, &surfDataLimit);
            --v25;
          }
          while ( v25 );
        }
        R_PrintDebugXModelStats(&surfDataLimit);
      }
      lodDist = v12->lodDists.lodDist;
      baseDist = v12->lodDists.baseDist;
      if ( v59 == 256 )
      {
        Sys_AddWorkerCmd(WRKCMD_PROCESS_SMODEL_COLLECTIONS, data);
        v59 = 0;
      }
      else if ( v59 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2418, ASSERT_TYPE_ASSERT, "(processCmd.numSModelCollections < 256)", (const char *)&queryFormat, "processCmd.numSModelCollections < R_PROCESS_SMODEL_COLLECTION_BATCH_SIZE") )
      {
        __debugbreak();
      }
      data[v59] = truncate_cast<unsigned short,unsigned int>(smodelCollectionIndex);
      *(float *)&data[2 * v59 + 256] = baseDist;
      *(float *)&data[2 * v59 + 768] = lodDist;
      *(_DWORD *)&data[2 * v59++ + 1280] = _ER15;
      if ( subdivLevel )
      {
        if ( v16 != smodel )
        {
          v28 = 0;
          p_smodelCountMask = &smodelCountMask;
          while ( !p_smodelCountMask->m_mask[0] )
          {
            ++v28;
            p_smodelCountMask = (SModelMask *)((char *)p_smodelCountMask + 8);
            if ( v28 >= 2 )
              goto LABEL_72;
          }
          R_EmitSModelSurfs_Camera(&drawData, &smodelEmit, &smodelCountMask, &renderFeatures, &origin);
LABEL_72:
          smodelEmit.smodel = v16;
        }
        v30 = R_AddSModelToAppropriateList(&smodelEmit, smodelCollectionIndex, _ER15, subdivLevel);
        v31 = v30 & 0x3F;
        if ( smodelEmit.smodelCountForSurf[v30] == 128 )
        {
          v32 = 0x8000000000000000ui64 >> v31;
          v33 = v30 >> 6;
          v63.m_mask[v33] |= 0x8000000000000000ui64 >> v31;
          R_EmitSModelSurfs_Camera(&drawData, &smodelEmit, &v63, &renderFeatures, &origin);
          smodelCountMask.m_mask[v33] &= ~v32;
        }
        else
        {
          smodelCountMask.m_mask[v30 >> 6] |= 0x8000000000000000ui64 >> v31;
        }
        origin = collectionBounds[v50 / 3].midPoint;
        smodel = smodelEmit.smodel;
      }
      collections = v52;
      v6 = v51;
    }
    _EAX = j + 1;
  }
  if ( v59 )
  {
    Sys_AddWorkerCmd(WRKCMD_PROCESS_SMODEL_COLLECTIONS, data);
    v59 = 0;
  }
  if ( r_staticModelDumpLodInfo->current.enabled )
  {
    Dvar_SetBool_Internal(r_staticModelDumpLodInfo, 0);
    if ( s_staticModelDumpInfo.handle.handle.handle != -1 )
    {
      if ( s_staticModelDumpInfo.openHandleFailed )
      {
        s_staticModelDumpInfo.handle.handle.handle = -1i64;
      }
      else
      {
        FS_FCloseFile(s_staticModelDumpInfo.handle);
        v34 = Sys_DefaultInstallPath();
        Com_Printf(18, "^7Successfully wrote static model info [%s\\%s].\n", v34, (const char *)&stru_1443D05B0);
      }
    }
  }
  v35 = 0;
  v36 = &smodelCountMask;
  while ( !v36->m_mask[0] )
  {
    ++v35;
    v36 = (SModelMask *)((char *)v36 + 8);
    if ( v35 >= 2 )
      goto LABEL_91;
  }
  R_EmitSModelSurfs_Camera(&drawData, &smodelEmit, &smodelCountMask, &renderFeatures, &origin);
LABEL_91:
  v37 = &drawData.buildList[0][0].delaySurfList;
  v38 = 5i64;
  do
  {
    v39 = 3i64;
    do
    {
      v40 = *((unsigned int *)v37 + 2);
      if ( (_DWORD)v40 )
      {
        R_SortSModelSurfDelaySort(*v37, 0, v40);
        v41 = 0i64;
        do
        {
          R_EmitSingleSModelSurf((GfxSModelSurfBuildList *)(v37 - 7), (*v37)[v41].fields.header, (*v37)[v41].fields.visDataRef);
          ++v41;
          --v40;
        }
        while ( v40 );
      }
      v37 += 9;
      --v39;
    }
    while ( v39 );
    --v38;
  }
  while ( v38 );
  R_ProcessSModelSurfVisBits_Camera(g_cameraSModelSurfVisData, &drawData, &renderFeatures);
  R_UpdateViewMaterialRenderTechflags(&renderFeatures);
  v42 = v49;
  if ( ((r_drawOpaqueSurfs->current.integer - 2) & 0xFFFFFFFD) != 0 )
  {
    R_FlushSModelSurfBuildList((GfxDrawList *)(v49 + 16208), &drawData, 0);
    R_FlushSModelSurfBuildList((GfxDrawList *)(v42 + 17120), &drawData, 1u);
  }
  if ( ((r_drawTransDecalSurfs->current.integer - 2) & 0xFFFFFFFD) != 0 )
  {
    R_FlushSModelSurfBuildList((GfxDrawList *)(v42 + 17424), &drawData, 2u);
    R_FlushSModelSurfBuildList((GfxDrawList *)(v42 + 17576), &drawData, 3u);
  }
  R_FlushSModelSurfBuildList((GfxDrawList *)(v42 + 18640), &drawData, 4u);
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllStaticModelSurfacesCamera_Dispatch
==============
*/
void R_AddAllStaticModelSurfacesCamera_Dispatch(const void *const cmd)
{
  __int64 v1; 
  unsigned int smodelVisDataCount; 
  const unsigned int *v3; 
  unsigned int *v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned __int16 index; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  BitArrayIterator iter; 
  int v17; 
  __int64 data; 
  unsigned __int64 v19; 

  data = *(_QWORD *)cmd;
  memset_0(g_cameraSModelSurfVisData, 0, sizeof(g_cameraSModelSurfVisData));
  LODWORD(v1) = 0;
  smodelVisDataCount = rgp.world->dpvs.smodelVisDataCount;
  v3 = rgp.world->dpvs.smodelVisData[0];
  if ( smodelVisDataCount )
  {
    v4 = rgp.world->dpvs.smodelVisData[0];
    v5 = smodelVisDataCount;
    do
    {
      v1 = __popcnt(*v4++) + (unsigned int)v1;
      --v5;
    }
    while ( v5 );
    if ( (_DWORD)v1 )
    {
      v6 = (unsigned __int64)(v1 + 511) >> 9;
      v7 = 8i64;
      if ( (unsigned int)v6 < 8 )
        v7 = (unsigned int)v6;
      if ( !(_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
        __debugbreak();
      iter.wordCount = smodelVisDataCount;
      iter.wordIndex = 0;
      iter.bitArray = v3;
      v8 = 0;
      v19 = (v1 + v7 - 1) / (unsigned __int64)(unsigned int)v7;
      iter.bits = 0;
      iter.bits = *v3;
      while ( BitArrayIterator::Advance(&iter) )
      {
        index = iter.index;
        if ( iter.index > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", LOWORD(iter.index), "unsigned", iter.index) )
          __debugbreak();
        v10 = v8++;
        g_cameraSModelLodCalcResults[v10].smodelCollectionIndex = index;
        *(_WORD *)&g_cameraSModelLodCalcResults[v10].lodMask = 0;
      }
      v11 = v19;
      v12 = (unsigned int)v7;
      if ( v8 != (_DWORD)v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2961, ASSERT_TYPE_ASSERT, "(smodelCollectionCounter == visibleSModelCount)", (const char *)&queryFormat, "smodelCollectionCounter == visibleSModelCount") )
        __debugbreak();
      g_cameraSModelCollectionCount = v1;
      v13 = 0;
      if ( (_DWORD)v7 )
      {
        do
        {
          v14 = v13 + v11;
          *(_QWORD *)&iter.index = data;
          v15 = v1;
          iter.wordIndex = v13;
          if ( (unsigned int)v1 > v13 + v11 )
            v15 = v13 + v11;
          *(&iter.wordIndex + 1) = v15;
          if ( v13 >= v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2974, ASSERT_TYPE_ASSERT, "(lodCalcCmd.smodelCollectionOffset < lodCalcCmd.smodelCollectionEnd)", (const char *)&queryFormat, "lodCalcCmd.smodelCollectionOffset < lodCalcCmd.smodelCollectionEnd") )
            __debugbreak();
          Sys_AddWorkerCmd(WRKCMD_ADD_STATICMODEL_LODCALC, &iter);
          v13 = v14;
          --v12;
        }
        while ( v12 );
      }
      Sys_AddWorkerCmd(WRKCMD_ADD_STATICMODEL, &data);
      v17 = 0;
      Sys_AddWorkerCmd(WRKCMD_ADD_STATICMODEL_UPDATE_UGB, &v17);
    }
  }
}

/*
==============
R_AddAllStaticModelSurfacesCamera_LodCalc
==============
*/
void R_AddAllStaticModelSurfacesCamera_LodCalc(const void *const cmd)
{
  __int64 v2; 
  const char *v3; 
  unsigned int v4; 
  unsigned int i; 
  GfxSModelLodCalcResult *v6; 
  __int64 smodelCollectionIndex; 
  GfxStaticModelCollection *v8; 
  __int64 smodelIndex; 
  GfxStaticModel *v10; 
  unsigned int StaticModelCollectionLODMask; 
  unsigned __int8 SModelCollectionSubdivLodLevel; 
  unsigned __int64 v15; 
  unsigned int *v16; 
  unsigned int v17; 
  volatile signed __int32 *v18; 
  __int64 passIndex; 
  __int64 sceneViewType; 
  __int64 v21; 
  Bounds *smodelCollectionBounds; 
  GfxSModelLodBitsCache cache; 
  __int64 v24; 
  SModelCollectionEmit emitCache; 
  unsigned int smodelSurfVisData[2050]; 

  v24 = -2i64;
  Profile_Begin(95);
  v2 = *(_QWORD *)cmd;
  v21 = *(_QWORD *)cmd;
  v3 = j_va("AddAllStaticModelSurfacesCamera_LodCalc,cnt:%d,ost:%d", (unsigned int)(*((_DWORD *)cmd + 3) - *((_DWORD *)cmd + 2)), *((unsigned int *)cmd + 2));
  Sys_ProfBeginNamedEvent(0xFFE9967A, v3);
  v4 = 0;
  cache.model = NULL;
  cache.validLodBits = 0;
  emitCache.smodelCollectionArgCount = 0;
  memset_0(smodelSurfVisData, 0, 0x2000ui64);
  for ( i = *((_DWORD *)cmd + 2); i < *((_DWORD *)cmd + 3); ++i )
  {
    v6 = &g_cameraSModelLodCalcResults[i];
    smodelCollectionIndex = v6->smodelCollectionIndex;
    v8 = &rgp.world->smodels.collections[smodelCollectionIndex];
    smodelCollectionBounds = &rgp.world->smodels.collectionBounds[smodelCollectionIndex];
    smodelIndex = v8->smodelIndex;
    if ( (unsigned int)smodelIndex >= rgp.world->smodels.modelCount )
    {
      LODWORD(sceneViewType) = rgp.world->smodels.modelCount;
      LODWORD(passIndex) = v8->smodelIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3039, ASSERT_TYPE_ASSERT, "(unsigned)( smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", passIndex, sceneViewType) )
        __debugbreak();
    }
    v10 = &rgp.world->smodels.models[smodelIndex];
    if ( !v10->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3042, ASSERT_TYPE_ASSERT, "(smodel->model)", (const char *)&queryFormat, "smodel->model") )
      __debugbreak();
    if ( !r_showModelLMapSModels->current.enabled && (v10->flags & 2) != 0 || rg.hideReactiveMotionSModels && (v10->flags & 8) != 0 || rg.hideSplinedModels && (v10->flags & 0x10) != 0 || !R_ShouldDrawTransientStaticModel(v8) || !R_ShouldDrawTransientModel(*(_DWORD *)(v2 + 11724), v10->model) )
      goto LABEL_29;
    if ( rg.drawUmbraOccluders )
    {
      if ( rg.drawUmbraOccluders == 1 )
      {
        if ( v8->flags >= 0 )
          goto LABEL_29;
      }
      else if ( rg.drawUmbraOccluders == 2 && v8->flags < 0 )
      {
        goto LABEL_29;
      }
    }
    StaticModelCollectionLODMask = R_GetStaticModelCollectionLODMask(*(_DWORD *)(v2 + 11712), smodelCollectionIndex, v10->model, &cache, &v6->lodDists);
    _RDI = StaticModelCollectionLODMask;
    if ( StaticModelCollectionLODMask )
    {
      __asm { tzcnt   edx, edi; lod }
      if ( _EDX != 6 )
      {
        SModelCollectionSubdivLodLevel = R_GetSModelCollectionSubdivLodLevel(v10->model, _EDX, v8, smodelCollectionBounds);
        if ( (unsigned int)_RDI > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)_RDI, "unsigned", _RDI) )
          __debugbreak();
        v6->lodMask = _RDI;
        v6->subdivLevel = SModelCollectionSubdivLodLevel;
        R_AccumVisibleSModelCollectionArgs(&emitCache, smodelSurfVisData, smodelCollectionIndex, _RDI, SModelCollectionSubdivLodLevel, 0, 0);
        v2 = v21;
        continue;
      }
    }
    v2 = v21;
LABEL_29:
    v6->lodMask = 0;
  }
  R_FlushVisibleSModelCollections(&emitCache, smodelSurfVisData, 0);
  if ( emitCache.smodelCollectionArgCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3078, ASSERT_TYPE_ASSERT, "(smodelCollectionEmit.smodelCollectionArgCount == 0)", (const char *)&queryFormat, "smodelCollectionEmit.smodelCollectionArgCount == 0") )
    __debugbreak();
  v15 = ((unsigned __int64)rgp.world->smodels.surfaceCount + 31) >> 5;
  if ( (_DWORD)v15 )
  {
    v16 = smodelSurfVisData;
    do
    {
      v17 = *v16;
      if ( *v16 )
      {
        v18 = (volatile signed __int32 *)&g_cameraSModelSurfVisData[v4];
        if ( ((unsigned __int8)v18 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_cameraSModelSurfVisData[v4]) )
          __debugbreak();
        _InterlockedOr(v18, v17);
      }
      ++v4;
      ++v16;
    }
    while ( v4 < (unsigned int)v15 );
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllStaticModelSurfacesCamera_UpdateUGB
==============
*/
void R_AddAllStaticModelSurfacesCamera_UpdateUGB(const void *const cmd)
{
  GfxSModelSurfMatIndirection *smodelSurfMatIndirection; 
  GfxStaticModelSurface *surfaces; 
  __int64 surfaceCount; 
  const char *v4; 
  unsigned int v5; 
  __int64 index; 
  const GfxStaticModelSurface *v7; 
  unsigned __int8 emitType; 
  __int64 v9; 
  __int64 v10; 
  BitArrayIterator iter; 
  unsigned int localResidentBits[2048]; 

  smodelSurfMatIndirection = rgp.world->smodels.smodelSurfMatIndirection;
  surfaces = rgp.world->smodels.surfaces;
  surfaceCount = rgp.world->smodels.surfaceCount;
  v4 = j_va("Update UGB Loop Camera");
  Sys_ProfBeginNamedEvent(0xFFE9967A, v4);
  memset_0(localResidentBits, 0, sizeof(localResidentBits));
  v5 = 0;
  iter.wordIndex = 0;
  iter.wordCount = (unsigned __int64)(surfaceCount + 31) >> 5;
  if ( iter.wordCount )
    v5 = g_cameraSModelSurfVisData[0];
  iter.bits = v5;
  iter.bitArray = g_cameraSModelSurfVisData;
  while ( BitArrayIterator::Advance(&iter) )
  {
    index = iter.index;
    v7 = &surfaces[iter.index];
    if ( iter.index >= (unsigned int)surfaceCount )
    {
      LODWORD(v10) = surfaceCount;
      LODWORD(v9) = iter.index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3353, ASSERT_TYPE_ASSERT, "(unsigned)( smodelSurfIndex ) < (unsigned)( smodelSurfCount )", "smodelSurfIndex doesn't index smodelSurfCount\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    emitType = smodelSurfMatIndirection[index].emitType;
    if ( (emitType & 1) != 0 && (!rg.subdiv || (emitType & 8) != 0) && (rg.distortion || (emitType & 4) != 0) )
      R_UGB_UpdateXSurfDataFromSModelSurf(index, v7, localResidentBits);
  }
  R_UGB_UpdateXSurfsResidency(localResidentBits);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_AddAllStaticModelSurfacesDynLight
==============
*/
void R_AddAllStaticModelSurfacesDynLight(GfxViewInfo *viewInfo, unsigned int sceneLightIndex, const unsigned __int16 *smodelIndexes, unsigned int smodelCount, GfxDrawList *shadowDrawList, unsigned int spotShadowUpdateIndex)
{
  __int64 v6; 
  GfxViewInfo *v8; 
  GfxDrawList *v9; 
  GfxStaticModelCollection *collections; 
  __int64 v11; 
  const GfxStaticModelCollection *v12; 
  const Bounds *v13; 
  unsigned __int64 transientGfxWorldPlaced; 
  GfxBackEndData *v15; 
  const GfxStaticModel *v16; 
  const XModel *model; 
  unsigned int v19; 
  unsigned __int8 SModelCollectionSubdivLodLevel; 
  unsigned int v22; 
  SModelMask *p_smodelCountMask; 
  unsigned int v24; 
  char v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  bool v28; 
  unsigned int v29; 
  SModelMask *v30; 
  GfxSModelSurfDelaySort **p_delaySurfList; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 passIndex; 
  __int64 sceneViewType; 
  __int64 v38; 
  GfxStaticModel *models; 
  GfxStaticModelCollection *v40; 
  GfxSModelLodBitsCache cache; 
  __int64 v42; 
  GfxSModelEmitInfo smodelEmit; 
  SModelMask smodelCountMask; 
  SModelMask v45; 
  GfxSModelSurfDrawData drawData; 
  SModelCollectionEmit emitCache; 
  char v48; 
  char v49; 
  char v50; 
  unsigned int smodelSurfVisData[2050]; 

  v42 = -2i64;
  v6 = smodelCount;
  v8 = viewInfo;
  v9 = shadowDrawList;
  Profile_Begin(95);
  if ( !shadowDrawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4598, ASSERT_TYPE_ASSERT, "(shadowDrawList)", (const char *)&queryFormat, "shadowDrawList") )
    __debugbreak();
  collections = rgp.world->smodels.collections;
  v40 = collections;
  models = rgp.world->smodels.models;
  R_InitSModelSurfDrawData(&drawData, 0x2000u, surfDataLimit_1);
  *(_OWORD *)&drawData.buildList[0][0].lastSurfHeader.fields.visDataRefCountLessOne = 0xFFFFFFFFFFFFFFFFui64;
  drawData.buildList[0][0].visDataRefCount = 0;
  drawData.buildList[0][0].surfDataBegin = drawData.surfData[0][0];
  drawData.buildList[0][0].surfDataPos = drawData.surfData[0][0];
  drawData.buildList[0][0].surfDataEnd = &drawData.surfData[0][0][drawData.surfDataLimit[0][0]];
  drawData.buildList[0][0].minDelaySortKey.packed = -1i64;
  drawData.buildList[0][0].delaySurfList = (GfxSModelSurfDelaySort *)&v48;
  *(_QWORD *)&drawData.buildList[0][0].delaySurfCount = 0x10000000000i64;
  *(_OWORD *)&drawData.buildList[0][1].lastSurfHeader.fields.visDataRefCountLessOne = 0xFFFFFFFFFFFFFFFFui64;
  drawData.buildList[0][1].visDataRefCount = 0;
  drawData.buildList[0][1].surfDataBegin = drawData.surfData[0][1];
  drawData.buildList[0][1].surfDataPos = drawData.surfData[0][1];
  drawData.buildList[0][1].surfDataEnd = &drawData.surfData[0][1][drawData.surfDataLimit[0][1]];
  drawData.buildList[0][1].minDelaySortKey.packed = -1i64;
  drawData.buildList[0][1].delaySurfList = (GfxSModelSurfDelaySort *)&v49;
  *(_QWORD *)&drawData.buildList[0][1].delaySurfCount = 0x10000000000i64;
  *(_OWORD *)&drawData.buildList[0][2].lastSurfHeader.fields.visDataRefCountLessOne = 0xFFFFFFFFFFFFFFFFui64;
  drawData.buildList[0][2].visDataRefCount = 0;
  drawData.buildList[0][2].surfDataBegin = drawData.surfData[0][2];
  drawData.buildList[0][2].surfDataPos = drawData.surfData[0][2];
  drawData.buildList[0][2].surfDataEnd = &drawData.surfData[0][2][drawData.surfDataLimit[0][2]];
  drawData.buildList[0][2].minDelaySortKey.packed = -1i64;
  drawData.buildList[0][2].delaySurfList = (GfxSModelSurfDelaySort *)&v50;
  *(_QWORD *)&drawData.buildList[0][2].delaySurfCount = 0x10000000000i64;
  memset_0(smodelEmit.smodelCountForSurf, 0, sizeof(smodelEmit.smodelCountForSurf));
  smodelEmit.smodel = NULL;
  cache.model = NULL;
  cache.validLodBits = 0;
  smodelCountMask.m_mask[0] = 0i64;
  smodelCountMask.m_mask[1] = 0i64;
  v45.m_mask[0] = 0i64;
  v45.m_mask[1] = 0i64;
  emitCache.smodelCollectionArgCount = 0;
  memset_0(smodelSurfVisData, 0, 0x2000ui64);
  if ( (_DWORD)v6 )
  {
    v38 = v6;
    do
    {
      v11 = *smodelIndexes;
      if ( (unsigned int)v11 >= rgp.world->smodels.collectionCount )
      {
        LODWORD(sceneViewType) = rgp.world->smodels.collectionCount;
        LODWORD(passIndex) = *smodelIndexes;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4661, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", passIndex, sceneViewType) )
          __debugbreak();
      }
      v12 = &collections[v11];
      v13 = &rgp.world->smodels.collectionBounds[v11];
      transientGfxWorldPlaced = v12->transientGfxWorldPlaced;
      v15 = frontEndDataOut;
      if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( (unsigned int)transientGfxWorldPlaced >= 0x600 )
      {
        LODWORD(sceneViewType) = 1536;
        LODWORD(passIndex) = transientGfxWorldPlaced;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", passIndex, sceneViewType) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (transientGfxWorldPlaced & 0x1F)) & v15->transientVisibility.array[transientGfxWorldPlaced >> 5]) != 0 )
      {
        if ( v12->smodelIndex >= rgp.world->smodels.modelCount )
        {
          LODWORD(sceneViewType) = rgp.world->smodels.modelCount;
          LODWORD(passIndex) = v12->smodelIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4669, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollection->smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelCollection->smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", passIndex, sceneViewType) )
            __debugbreak();
        }
        v16 = &models[v12->smodelIndex];
        model = v16->model;
        if ( v8->drawStaticDefaultModels )
          goto LABEL_60;
        if ( !model )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 625, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
        }
        if ( (model->flags & 0x8000) == 0 )
        {
LABEL_60:
          _EAX = R_GetStaticModelCollectionLODMask(v8->viewInfoIndex, v11, v16->model, &cache, NULL);
          v19 = _EAX;
          if ( _EAX )
          {
            __asm { tzcnt   r14d, eax }
            if ( _ER14 != 6 && _ER14 <= v16->model->shadowCutoffLod )
            {
              SModelCollectionSubdivLodLevel = R_GetSModelCollectionSubdivLodLevel(v16->model, _ER14, v12, v13);
              R_AccumVisibleSModelCollectionArgs(&emitCache, smodelSurfVisData, v11, v19, SModelCollectionSubdivLodLevel, 1u, spotShadowUpdateIndex + 4);
              if ( SModelCollectionSubdivLodLevel )
              {
                if ( v16 != smodelEmit.smodel )
                {
                  v22 = 0;
                  p_smodelCountMask = &smodelCountMask;
                  while ( !p_smodelCountMask->m_mask[0] )
                  {
                    ++v22;
                    p_smodelCountMask = (SModelMask *)((char *)p_smodelCountMask + 8);
                    if ( v22 >= 2 )
                      goto LABEL_36;
                  }
                  R_EmitSModelSurfs_Shadow(&drawData, &smodelEmit, &smodelCountMask, 0);
LABEL_36:
                  smodelEmit.smodel = v16;
                }
                v24 = R_AddSModelToAppropriateList(&smodelEmit, v11, _ER14, SModelCollectionSubdivLodLevel);
                v25 = v24 & 0x3F;
                if ( smodelEmit.smodelCountForSurf[v24] == 128 )
                {
                  v26 = 0x8000000000000000ui64 >> v25;
                  v27 = v24 >> 6;
                  v45.m_mask[v27] |= 0x8000000000000000ui64 >> v25;
                  R_EmitSModelSurfs_Shadow(&drawData, &smodelEmit, &v45, 0);
                  smodelCountMask.m_mask[v27] &= ~v26;
                }
                else
                {
                  smodelCountMask.m_mask[v24 >> 6] |= 0x8000000000000000ui64 >> v25;
                }
              }
            }
            v8 = viewInfo;
          }
        }
      }
      ++smodelIndexes;
      v28 = v38-- == 1;
      collections = v40;
    }
    while ( !v28 );
    v9 = shadowDrawList;
  }
  R_FlushVisibleSModelCollections(&emitCache, smodelSurfVisData, 1u);
  if ( emitCache.smodelCollectionArgCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4722, ASSERT_TYPE_ASSERT, "(smodelCollectionEmit.smodelCollectionArgCount == 0)", (const char *)&queryFormat, "smodelCollectionEmit.smodelCollectionArgCount == 0") )
    __debugbreak();
  v29 = 0;
  v30 = &smodelCountMask;
  while ( !v30->m_mask[0] )
  {
    ++v29;
    v30 = (SModelMask *)((char *)v30 + 8);
    if ( v29 >= 2 )
      goto LABEL_51;
  }
  R_EmitSModelSurfs_Shadow(&drawData, &smodelEmit, &smodelCountMask, 0);
LABEL_51:
  p_delaySurfList = &drawData.buildList[0][0].delaySurfList;
  v32 = 3i64;
  do
  {
    v33 = *((unsigned int *)p_delaySurfList + 2);
    if ( (_DWORD)v33 )
    {
      R_SortSModelSurfDelaySort(*p_delaySurfList, 0, v33);
      v34 = 0i64;
      do
      {
        R_EmitSingleSModelSurf((GfxSModelSurfBuildList *)(p_delaySurfList - 7), (*p_delaySurfList)[v34].fields.header, (*p_delaySurfList)[v34].fields.visDataRef);
        ++v34;
        --v33;
      }
      while ( v33 );
    }
    p_delaySurfList += 9;
    --v32;
  }
  while ( v32 );
  R_ProcessSModelSurfVisBits_Shadow(smodelSurfVisData, &drawData, spotShadowUpdateIndex + 4);
  R_FlushSModelSurfBuildList(v9, &drawData, 0);
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllStaticModelSurfacesRangeSunShadow
==============
*/
void R_AddAllStaticModelSurfacesRangeSunShadow(GfxViewInfo *viewInfo, unsigned int partitionIndex, GfxSModelSurfDrawData *drawData)
{
  int useDynamicSunShadows; 
  int v7; 
  char *v8; 
  unsigned int v9; 
  unsigned int (*v10)[3]; 
  unsigned __int8 *(*surfData)[3]; 
  unsigned __int8 *(*v12)[3]; 
  unsigned int *p_visDataRefCount; 
  unsigned int *v14; 
  unsigned __int8 *v15; 
  unsigned int (*v16)[3]; 
  char *v17; 
  unsigned int v18; 
  unsigned __int8 *v19; 
  unsigned __int8 v20; 
  signed int activePrimarySunLight; 
  char v22; 
  GfxWorld *world; 
  const unsigned int *v24; 
  GfxSModelSurfDrawData *v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned __int64 index; 
  GfxStaticModelCollection *v29; 
  const Bounds *v30; 
  __int64 smodelIndex; 
  unsigned __int64 transientGfxWorldPlaced; 
  GfxBackEndData *v33; 
  GfxStaticModel *v34; 
  XModel *model; 
  const vec4_t *v36; 
  unsigned int v38; 
  unsigned __int8 SModelCollectionSubdivLodLevel; 
  unsigned int v41; 
  SModelMask *p_smodelCountMask; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned __int64 v47; 
  unsigned int v48; 
  SModelMask *v49; 
  __int64 visDataUsed; 
  __int64 passIndex; 
  __int64 sceneViewType; 
  unsigned int v54; 
  unsigned int (*surfDataLimit)[3]; 
  const unsigned int *v58; 
  int v59; 
  int drawStaticDefaultModels; 
  __int64 v61; 
  GfxStaticModelCollection *collections; 
  GfxStaticModel *models; 
  BitArrayIterator iter; 
  GfxSModelLodBitsCache cache; 
  __int64 v66; 
  GfxSModelEmitInfo smodelEmit; 
  SModelMask smodelCountMask; 
  SModelMask v69; 
  SModelCollectionEmit emitCache; 
  unsigned int smodelSurfVisData[2048]; 
  char v72[12288]; 
  char v73[8]; 

  v66 = -2i64;
  Profile_Begin(549);
  useDynamicSunShadows = viewInfo->useDynamicSunShadows;
  v59 = useDynamicSunShadows;
  if ( viewInfo->useCachedSunShadow && frontEndDataOut->sunShadow.firstCachedSunShadowPartition <= partitionIndex && partitionIndex <= frontEndDataOut->sunShadow.lastCachedSunShadowPartition && R_GetSunShadowPartitionCache(&frontEndDataOut->sunShadow, partitionIndex)->gfxCachedSunShadowOverlapCount )
  {
    v7 = 1;
    v61 = 1i64;
  }
  else
  {
    v7 = 0;
    v61 = 0i64;
  }
  if ( !useDynamicSunShadows && v7 )
    goto LABEL_86;
  v8 = v72;
  v9 = 0;
  surfDataLimit = drawData->surfDataLimit;
  v10 = drawData->surfDataLimit;
  surfData = drawData->surfData;
  v12 = drawData->surfData;
  p_visDataRefCount = &drawData->buildList[0][0].visDataRefCount;
  v14 = p_visDataRefCount;
  do
  {
    *((_QWORD *)v14 - 2) = -1i64;
    *((_QWORD *)v14 - 1) = 0i64;
    *v14 = 0;
    v15 = (*v12)[0];
    *((_QWORD *)v14 + 1) = (*v12)[0];
    *((_QWORD *)v14 + 2) = v15;
    *((_QWORD *)v14 + 3) = &v15[*(_DWORD *)v10];
    *((_QWORD *)v14 + 4) = -1i64;
    *((_QWORD *)v14 + 5) = v8;
    v14[12] = 0;
    v14[13] = 256;
    v8 += 4096;
    ++v9;
    v12 = (unsigned __int8 *(*)[3])((char *)v12 + 8);
    v10 = (unsigned int (*)[3])((char *)v10 + 4);
    v14 += 18;
  }
  while ( v9 < 3 );
  v16 = surfDataLimit;
  if ( v8 != v73 )
  {
    v17 = v72;
    v18 = 0;
    do
    {
      *((_QWORD *)p_visDataRefCount - 2) = -1i64;
      *((_QWORD *)p_visDataRefCount - 1) = 0i64;
      *p_visDataRefCount = 0;
      v19 = (*surfData)[0];
      *((_QWORD *)p_visDataRefCount + 1) = (*surfData)[0];
      *((_QWORD *)p_visDataRefCount + 2) = v19;
      *((_QWORD *)p_visDataRefCount + 3) = &v19[*(_DWORD *)v16];
      *((_QWORD *)p_visDataRefCount + 4) = -1i64;
      *((_QWORD *)p_visDataRefCount + 5) = v17;
      p_visDataRefCount[12] = 0;
      p_visDataRefCount[13] = 256;
      v17 += 4096;
      ++v18;
      surfData = (unsigned __int8 *(*)[3])((char *)surfData + 8);
      v16 = (unsigned int (*)[3])((char *)v16 + 4);
      p_visDataRefCount += 18;
    }
    while ( v18 < 3 );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3397, ASSERT_TYPE_ASSERT, "R_InitSModelSurfBuildLists( drawData, 0, delaySurfList, R_SMODELSURF_DELAY_SURF_LIMIT_SUNSHADOW ) == delaySurfList + ARRAY_COUNT( delaySurfList )", "\n\t%llx, %llx", v17, v73) )
      __debugbreak();
  }
  v20 = 0;
  activePrimarySunLight = viewInfo->input.data->activePrimarySunLight;
  if ( activePrimarySunLight && viewInfo->useShadowGeomOpt )
  {
    v22 = 5;
    if ( activePrimarySunLight < 5 )
      v22 = viewInfo->input.data->activePrimarySunLight;
    v20 = 1 << (v22 - 1);
  }
  drawStaticDefaultModels = viewInfo->drawStaticDefaultModels;
  v54 = partitionIndex + 1;
  world = rgp.world;
  v24 = rgp.world->dpvs.smodelVisData[partitionIndex + 1];
  v58 = v24;
  collections = rgp.world->smodels.collections;
  models = rgp.world->smodels.models;
  memset_0(smodelEmit.smodelCountForSurf, 0, sizeof(smodelEmit.smodelCountForSurf));
  smodelEmit.smodel = NULL;
  cache.model = NULL;
  cache.validLodBits = 0;
  smodelCountMask.m_mask[0] = 0i64;
  smodelCountMask.m_mask[1] = 0i64;
  v69.m_mask[0] = 0i64;
  v69.m_mask[1] = 0i64;
  emitCache.smodelCollectionArgCount = 0;
  memset_0(smodelSurfVisData, 0, sizeof(smodelSurfVisData));
  iter.wordCount = world->dpvs.smodelVisDataCount;
  iter.wordIndex = 0;
  iter.bitArray = v24;
  iter.bits = 0;
  if ( !iter.wordCount )
    goto LABEL_34;
  iter.bits = *v24;
  v25 = drawData;
  v26 = partitionIndex;
  v27 = partitionIndex + 1;
  while ( BitArrayIterator::Advance(&iter) )
  {
    index = iter.index;
    v29 = &collections[iter.index];
    v30 = &rgp.world->smodels.collectionBounds[iter.index];
    smodelIndex = v29->smodelIndex;
    transientGfxWorldPlaced = v29->transientGfxWorldPlaced;
    v33 = frontEndDataOut;
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( (unsigned int)transientGfxWorldPlaced >= 0x600 )
    {
      LODWORD(sceneViewType) = 1536;
      LODWORD(passIndex) = transientGfxWorldPlaced;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", passIndex, sceneViewType) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (transientGfxWorldPlaced & 0x1F)) & v33->transientVisibility.array[transientGfxWorldPlaced >> 5]) == 0 )
    {
LABEL_33:
      v58[index >> 5] &= ~(0x80000000 >> (index & 0x1F));
LABEL_34:
      v25 = drawData;
      goto LABEL_35;
    }
    if ( (unsigned int)smodelIndex >= rgp.world->smodels.modelCount )
    {
      LODWORD(sceneViewType) = rgp.world->smodels.modelCount;
      LODWORD(passIndex) = smodelIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3455, ASSERT_TYPE_ASSERT, "(unsigned)( smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", passIndex, sceneViewType) )
        __debugbreak();
    }
    v34 = &models[smodelIndex];
    if ( !v34->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3458, ASSERT_TYPE_ASSERT, "(smodel->model)", (const char *)&queryFormat, "smodel->model") )
      __debugbreak();
    v26 = partitionIndex;
    if ( v61 && (partitionIndex >= rg.firstForceCacheSModelPartition && (v25 = drawData, partitionIndex < 3) || (v25 = drawData, (v34->flags & 4) == 0)) || !v59 && (v25 = drawData, (v34->flags & 4) != 0) || v20 && (v25 = drawData, (v20 & v29->flags) == 0) )
    {
      v27 = partitionIndex + 1;
    }
    else
    {
      model = v34->model;
      if ( !drawStaticDefaultModels )
      {
        if ( !model )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 625, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
        }
        if ( (model->flags & 0x8000) != 0 )
          goto LABEL_33;
      }
      if ( XModelShouldShowBounds(v34->model) && r_showCullSModels->current.enabled && v54 == r_showCull->current.integer )
      {
        v36 = &colorGreen;
        if ( v29->instanceCount > 1 )
          v36 = &colorGreenFaded;
        R_AddDebugBox(&viewInfo->input.data->debugGlobals, v30, v36, r_showCullMode->current.integer != 0);
      }
      _EAX = R_GetStaticModelCollectionLODMask(viewInfo->viewInfoIndex, index, v34->model, &cache, NULL);
      v38 = _EAX;
      v25 = drawData;
      if ( _EAX )
      {
        __asm { tzcnt   esi, eax }
        if ( _ESI == 6 || _ESI > v34->model->shadowCutoffLod )
          goto LABEL_34;
        SModelCollectionSubdivLodLevel = R_GetSModelCollectionSubdivLodLevel(v34->model, _ESI, v29, v30);
        v27 = partitionIndex + 1;
        R_AccumVisibleSModelCollectionArgs(&emitCache, smodelSurfVisData, index, v38, SModelCollectionSubdivLodLevel, 1u, v54);
        v26 = partitionIndex;
        if ( SModelCollectionSubdivLodLevel )
        {
          if ( v34 != smodelEmit.smodel )
          {
            v41 = 0;
            p_smodelCountMask = &smodelCountMask;
            while ( !p_smodelCountMask->m_mask[0] )
            {
              ++v41;
              p_smodelCountMask = (SModelMask *)((char *)p_smodelCountMask + 8);
              if ( v41 >= 2 )
                goto LABEL_73;
            }
            R_EmitSModelSurfs_Shadow(drawData, &smodelEmit, &smodelCountMask, 0);
LABEL_73:
            smodelEmit.smodel = v34;
          }
          v43 = R_AddSModelToAppropriateList(&smodelEmit, index, _ESI, SModelCollectionSubdivLodLevel);
          v44 = v43;
          v45 = v43 >> 6;
          v25 = drawData;
          if ( smodelEmit.smodelCountForSurf[v44] == 128 )
          {
            v46 = v45;
            v47 = 0x8000000000000000ui64 >> (v44 & 0x3F);
            v69.m_mask[v45] |= v47;
            R_EmitSModelSurfs_Shadow(drawData, &smodelEmit, &v69, 0);
            smodelCountMask.m_mask[v46] &= ~v47;
            v26 = partitionIndex;
          }
          else
          {
            smodelCountMask.m_mask[v45] |= 0x8000000000000000ui64 >> (v44 & 0x3F);
          }
        }
        else
        {
          v25 = drawData;
        }
      }
      else
      {
LABEL_35:
        v26 = partitionIndex;
        v27 = partitionIndex + 1;
      }
    }
  }
  R_FlushVisibleSModelCollections(&emitCache, smodelSurfVisData, 1u);
  if ( emitCache.smodelCollectionArgCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3533, ASSERT_TYPE_ASSERT, "(smodelCollectionEmit.smodelCollectionArgCount == 0)", (const char *)&queryFormat, "smodelCollectionEmit.smodelCollectionArgCount == 0") )
    __debugbreak();
  v48 = 0;
  v49 = &smodelCountMask;
  while ( !v49->m_mask[0] )
  {
    ++v48;
    v49 = (SModelMask *)((char *)v49 + 8);
    if ( v48 >= 2 )
      goto LABEL_85;
  }
  R_EmitSModelSurfs_Shadow(v25, &smodelEmit, &smodelCountMask, 0);
LABEL_85:
  R_EmitDelayedSModelSurfsRemaining(v25->buildList[0]);
  R_ProcessSModelSurfVisBits_Shadow(smodelSurfVisData, v25, v27);
  R_FlushSModelSurfBuildList(&viewInfo->drawList[v26 + 24], v25, 0);
  visDataUsed = v25->visDataUsed;
  v25->visData += visDataUsed;
  v25->visDataLimit -= visDataUsed;
  v25->visDataUsed = 0;
LABEL_86:
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllStaticModelSurfacesSpotShadow_Split
==============
*/
void R_AddAllStaticModelSurfacesSpotShadow_Split(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex, unsigned int primaryLightIndex)
{
  __int64 v3; 
  __int64 v4; 
  char *v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int (*surfDataLimit)[3]; 
  unsigned __int8 *(*surfData)[3]; 
  unsigned int *p_visDataRefCount; 
  unsigned __int8 *v12; 
  char *v13; 
  unsigned int v14; 
  unsigned int (*v15)[3]; 
  unsigned __int8 *(*v16)[3]; 
  unsigned int *v17; 
  GfxSpotShadowUpdate *v18; 
  unsigned __int8 *v19; 
  __int64 v20; 
  GfxShadowGeometry *v21; 
  __int64 i; 
  __int64 v23; 
  const GfxStaticModelCollection *v24; 
  unsigned __int64 transientGfxWorldPlaced; 
  GfxBackEndData *v26; 
  const XModel **p_model; 
  GfxSModelLodBitsCache *p_cache; 
  const Bounds *v29; 
  unsigned int v31; 
  unsigned __int8 SModelCollectionSubdivLodLevel; 
  const XModel **v34; 
  const vec4_t *v35; 
  unsigned int v36; 
  SModelMask *v37; 
  int v38; 
  unsigned int smodelsChangedCount; 
  unsigned int v40; 
  char v41; 
  unsigned __int64 v42; 
  __int64 v43; 
  unsigned int v44; 
  SModelMask *v45; 
  SModelMask *v46; 
  __int64 passIndex; 
  __int64 sceneViewType; 
  unsigned int smodelCollectionIndex; 
  int v50; 
  SModelMask *smodelCountMask; 
  GfxSpotShadowUpdate *viewportParms; 
  GfxSModelEmitInfo *viewportParmsa; 
  int viewDrawStaticDefaultModels; 
  int needsDynamicShadows; 
  unsigned int activeStatus; 
  GfxSModelSurfDrawData *p_drawData; 
  GfxShadowGeometry *shadowGeomOptimized; 
  __int64 v60; 
  unsigned int *smodelSurfVisData; 
  SModelCollectionEmit *emitCache; 
  GfxExtents2D extents2D; 
  GfxStaticModel *models; 
  const XModel **v66; 
  const GfxStaticModelCollection *v67; 
  GfxStaticModelCollection *collections; 
  GfxSModelLodBitsCache cache; 
  __int64 v70; 
  int v71; 
  __int64 v72; 
  GfxSModelEmitInfo smodelEmit; 
  GfxSModelEmitInfo v74; 
  SModelMask v75; 
  SModelMask v76; 
  SModelMask v77; 
  GfxSModelSurfDrawData drawData; 
  GfxSModelSurfDrawData v79; 
  SModelCollectionEmit v80; 
  SModelCollectionEmit v81; 
  unsigned int v82[2048]; 
  unsigned int v83[2048]; 
  char v84; 
  char v85; 

  v72 = -2i64;
  v3 = primaryLightIndex;
  v4 = spotShadowUpdateIndex;
  Profile_Begin(95);
  shadowGeomOptimized = rgp.world->shadowGeomOptimized;
  if ( shadowGeomOptimized )
  {
    v60 = 3 * v3;
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4379, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    if ( (unsigned int)v4 >= frontEndDataOut->spotShadowUpdateCount )
    {
      LODWORD(passIndex) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4380, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( frontEndDataOut->spotShadowUpdateCount )", "spotShadowUpdateIndex doesn't index frontEndDataOut->spotShadowUpdateCount\n\t%i not in [0, %i)", passIndex, frontEndDataOut->spotShadowUpdateCount) )
        __debugbreak();
    }
    viewportParms = &frontEndDataOut->spotShadowUpdates[v4];
    activeStatus = frontEndDataOut->spotShadowUpdates[v4].activeStatus;
    needsDynamicShadows = frontEndDataOut->spotShadowUpdates[v4].needsDynamicShadows;
    if ( needsDynamicShadows || frontEndDataOut->spotShadowUpdates[v4].activeStatus != 4 )
    {
      viewDrawStaticDefaultModels = viewInfo->drawStaticDefaultModels;
      collections = rgp.world->smodels.collections;
      models = rgp.world->smodels.models;
      R_InitSModelSurfDrawData(&drawData, 0x2000u, surfDataLimit_0);
      v6 = &v84;
      v7 = 0;
      v8 = 0;
      surfDataLimit = drawData.surfDataLimit;
      surfData = drawData.surfData;
      p_visDataRefCount = &drawData.buildList[0][0].visDataRefCount;
      do
      {
        *((_QWORD *)p_visDataRefCount - 2) = -1i64;
        *((_QWORD *)p_visDataRefCount - 1) = 0i64;
        *p_visDataRefCount = 0;
        v12 = (*surfData)[0];
        *((_QWORD *)p_visDataRefCount + 1) = (*surfData)[0];
        *((_QWORD *)p_visDataRefCount + 2) = v12;
        *((_QWORD *)p_visDataRefCount + 3) = &v12[*(_DWORD *)surfDataLimit];
        *((_QWORD *)p_visDataRefCount + 4) = -1i64;
        *((_QWORD *)p_visDataRefCount + 5) = v6;
        p_visDataRefCount[12] = 0;
        p_visDataRefCount[13] = 256;
        v6 += 4096;
        ++v8;
        p_visDataRefCount += 18;
        surfData = (unsigned __int8 *(*)[3])((char *)surfData + 8);
        surfDataLimit = (unsigned int (*)[3])((char *)surfDataLimit + 4);
      }
      while ( v8 < 3 );
      memset_0(smodelEmit.smodelCountForSurf, 0, sizeof(smodelEmit.smodelCountForSurf));
      smodelEmit.smodel = NULL;
      cache.model = NULL;
      cache.validLodBits = 0;
      v76.m_mask[0] = 0i64;
      v76.m_mask[1] = 0i64;
      R_InitSModelSurfDrawData(&v79, 0x2000u, surfDataLimit_0);
      v13 = &v85;
      v14 = 0;
      v15 = v79.surfDataLimit;
      v16 = v79.surfData;
      v17 = &v79.buildList[0][0].visDataRefCount;
      v18 = viewportParms;
      do
      {
        *((_QWORD *)v17 - 2) = -1i64;
        *((_QWORD *)v17 - 1) = 0i64;
        *v17 = 0;
        v19 = (*v16)[0];
        *((_QWORD *)v17 + 1) = (*v16)[0];
        *((_QWORD *)v17 + 2) = v19;
        *((_QWORD *)v17 + 3) = &v19[*(_DWORD *)v15];
        *((_QWORD *)v17 + 4) = -1i64;
        *((_QWORD *)v17 + 5) = v13;
        v17[12] = 0;
        v17[13] = 256;
        v13 += 4096;
        ++v14;
        v17 += 18;
        v16 = (unsigned __int8 *(*)[3])((char *)v16 + 8);
        v15 = (unsigned int (*)[3])((char *)v15 + 4);
      }
      while ( v14 < 3 );
      memset_0(v74.smodelCountForSurf, 0, sizeof(v74.smodelCountForSurf));
      v74.smodel = NULL;
      v70 = 0i64;
      v71 = 0;
      v77.m_mask[0] = 0i64;
      v77.m_mask[1] = 0i64;
      v75.m_mask[0] = 0i64;
      v75.m_mask[1] = 0i64;
      v81.smodelCollectionArgCount = 0;
      v80.smodelCollectionArgCount = 0;
      memset_0(v83, 0, sizeof(v83));
      memset_0(v82, 0, sizeof(v82));
      v20 = 0i64;
      v50 = 0;
      v21 = shadowGeomOptimized;
      for ( i = v60; (unsigned int)v20 < shadowGeomOptimized[(unsigned __int64)v60 / 3].smodelCount; i = v60 )
      {
        v23 = *(unsigned __int16 *)(*((_QWORD *)&v21->smodelIndex + i) + 2 * v20);
        smodelCollectionIndex = v23;
        if ( (unsigned int)v23 >= rgp.world->smodels.collectionCount )
        {
          LODWORD(sceneViewType) = rgp.world->smodels.collectionCount;
          LODWORD(passIndex) = *(unsigned __int16 *)(*((_QWORD *)&v21->smodelIndex + i) + 2 * v20);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4455, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", passIndex, sceneViewType) )
            __debugbreak();
        }
        v24 = &collections[v23];
        v67 = v24;
        transientGfxWorldPlaced = v24->transientGfxWorldPlaced;
        v26 = frontEndDataOut;
        if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
          __debugbreak();
        if ( (unsigned int)transientGfxWorldPlaced >= 0x600 )
        {
          LODWORD(sceneViewType) = 1536;
          LODWORD(passIndex) = transientGfxWorldPlaced;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", passIndex, sceneViewType) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (transientGfxWorldPlaced & 0x1F)) & v26->transientVisibility.array[transientGfxWorldPlaced >> 5]) != 0 )
        {
          if ( v24->smodelIndex >= rgp.world->smodels.modelCount )
          {
            LODWORD(sceneViewType) = rgp.world->smodels.modelCount;
            LODWORD(passIndex) = v24->smodelIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4464, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollection->smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelCollection->smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", passIndex, sceneViewType) )
              __debugbreak();
          }
          p_model = (const XModel **)&models[v24->smodelIndex].model;
          v66 = p_model;
          if ( R_ShouldDrawTransientModel(viewDrawStaticDefaultModels, *p_model) )
          {
            if ( ((_BYTE)p_model[1] & 4) != 0 )
            {
              if ( needsDynamicShadows )
              {
                viewportParmsa = &smodelEmit;
                p_cache = &cache;
                p_drawData = &drawData;
                smodelCountMask = &v76;
                smodelSurfVisData = v82;
                emitCache = &v80;
LABEL_34:
                v29 = &rgp.world->smodels.collectionBounds[v23];
                _EAX = R_GetStaticModelCollectionLODMask(viewInfo->viewInfoIndex, v23, *p_model, p_cache, NULL);
                v31 = _EAX;
                if ( !_EAX )
                  goto LABEL_72;
                __asm { tzcnt   r15d, eax }
                if ( _ER15 == 6 || _ER15 > (*p_model)->shadowCutoffLod )
                {
LABEL_72:
                  ++v18->missingSModelLOD;
                }
                else
                {
                  SModelCollectionSubdivLodLevel = R_GetSModelCollectionSubdivLodLevel(*p_model, _ER15, v24, v29);
                  R_AccumVisibleSModelCollectionArgs(emitCache, smodelSurfVisData, smodelCollectionIndex, v31, SModelCollectionSubdivLodLevel, 1u, spotShadowUpdateIndex + 4);
                  if ( SModelCollectionSubdivLodLevel )
                  {
                    v34 = v66;
                    if ( XModelShouldShowBounds(*v66) )
                    {
                      v35 = &colorGreen;
                      if ( v67->instanceCount > 1 )
                        v35 = &colorGreenFaded;
                      if ( r_showCullSModels->current.enabled && spotShadowUpdateIndex + 4 == r_showCull->current.integer )
                        R_AddDebugBox(&viewInfo->input.data->debugGlobals, v29, v35, r_showCullMode->current.integer != 0);
                    }
                    if ( v34 != (const XModel **)viewportParmsa->smodel )
                    {
                      v36 = 0;
                      v37 = smodelCountMask;
                      while ( !v37->m_mask[0] )
                      {
                        ++v36;
                        v37 = (SModelMask *)((char *)v37 + 8);
                        if ( v36 >= 2 )
                          goto LABEL_68;
                      }
                      R_EmitSModelSurfs_Shadow(p_drawData, viewportParmsa, smodelCountMask, 0);
LABEL_68:
                      viewportParmsa->smodel = (const GfxStaticModel *)v34;
                    }
                    v40 = R_AddSModelToAppropriateList(viewportParmsa, smodelCollectionIndex, _ER15, SModelCollectionSubdivLodLevel);
                    v41 = v40 & 0x3F;
                    if ( viewportParmsa->smodelCountForSurf[v40] == 128 )
                    {
                      v42 = 0x8000000000000000ui64 >> v41;
                      v43 = v40 >> 6;
                      v75.m_mask[v43] |= 0x8000000000000000ui64 >> v41;
                      R_EmitSModelSurfs_Shadow(p_drawData, viewportParmsa, &v75, 0);
                      smodelCountMask->m_mask[v43] &= ~v42;
                    }
                    else
                    {
                      smodelCountMask->m_mask[v40 >> 6] |= 0x8000000000000000ui64 >> v41;
                    }
                  }
                }
              }
            }
            else if ( activeStatus != 4 )
            {
              viewportParmsa = &v74;
              p_drawData = &v79;
              p_cache = (GfxSModelLodBitsCache *)&v70;
              smodelCountMask = &v77;
              smodelSurfVisData = v83;
              emitCache = &v81;
              if ( v18->activeStatus != 3 )
                goto LABEL_34;
              if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4187, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
                __debugbreak();
              if ( !rgp.world->smodels.collectionBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4188, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.collectionBounds)", (const char *)&queryFormat, "rgp.world->smodels.collectionBounds") )
                __debugbreak();
              if ( (unsigned int)v23 >= rgp.world->smodels.collectionCount )
              {
                LODWORD(sceneViewType) = rgp.world->smodels.collectionCount;
                LODWORD(passIndex) = v23;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4189, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", passIndex, sceneViewType) )
                  __debugbreak();
              }
              GenerateScreenSpaceExtentsFromWorldBounds(&rgp.world->smodels.collectionBounds[v23], &v18->viewportParms, &extents2D);
              v38 = 0;
              smodelsChangedCount = v18->smodelsChangedCount;
              if ( smodelsChangedCount )
              {
                while ( extents2D.maxX <= v18->smodelChangedBoundingBox[v38].minX || extents2D.minX >= v18->smodelChangedBoundingBox[v38].maxX || extents2D.maxY <= v18->smodelChangedBoundingBox[v38].minY || extents2D.minY >= v18->smodelChangedBoundingBox[v38].maxY )
                {
                  if ( ++v38 >= smodelsChangedCount )
                    goto LABEL_73;
                }
                goto LABEL_34;
              }
            }
          }
          else
          {
            ++v18->missingTransientSModel;
          }
        }
        else
        {
          ++v18->missingTransientSModel;
        }
LABEL_73:
        v20 = (unsigned int)(v50 + 1);
        v50 = v20;
        v21 = shadowGeomOptimized;
      }
      R_FlushVisibleSModelCollections(&v80, v82, 1u);
      R_FlushVisibleSModelCollections(&v81, v83, 1u);
      if ( v80.smodelCollectionArgCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4571, ASSERT_TYPE_ASSERT, "(smodelCollectionEmitUncached.smodelCollectionArgCount == 0)", (const char *)&queryFormat, "smodelCollectionEmitUncached.smodelCollectionArgCount == 0") )
        __debugbreak();
      if ( v81.smodelCollectionArgCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4572, ASSERT_TYPE_ASSERT, "(smodelCollectionEmitCached.smodelCollectionArgCount == 0)", (const char *)&queryFormat, "smodelCollectionEmitCached.smodelCollectionArgCount == 0") )
        __debugbreak();
      v44 = 0;
      v45 = &v76;
      while ( !v45->m_mask[0] )
      {
        ++v44;
        v45 = (SModelMask *)((char *)v45 + 8);
        if ( v44 >= 2 )
          goto LABEL_85;
      }
      R_EmitSModelSurfs_Shadow(&drawData, &smodelEmit, &v76, 0);
LABEL_85:
      R_EmitDelayedSModelSurfsRemaining(drawData.buildList[0]);
      R_ProcessSModelSurfVisBits_Shadow(v82, &drawData, spotShadowUpdateIndex + 4);
      R_FlushSModelSurfBuildList(&viewInfo->drawList[spotShadowUpdateIndex + 37], &drawData, 0);
      v46 = &v77;
      while ( !v46->m_mask[0] )
      {
        ++v7;
        v46 = (SModelMask *)((char *)v46 + 8);
        if ( v7 >= 2 )
          goto LABEL_90;
      }
      R_EmitSModelSurfs_Shadow(&v79, &v74, &v77, 0);
LABEL_90:
      R_EmitDelayedSModelSurfsRemaining(v79.buildList[0]);
      R_ProcessSModelSurfVisBits_Shadow(v83, &v79, spotShadowUpdateIndex + 4);
      R_FlushSModelSurfBuildList(&viewInfo->drawList[spotShadowUpdateIndex + 29], &v79, 0);
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllStaticModelSurfacesSunShadow
==============
*/
void R_AddAllStaticModelSurfacesSunShadow(const void *const cmd)
{
  GfxViewInfo *v2; 
  unsigned int v3; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int i; 
  GfxSunShadow *p_sunShadow; 
  unsigned int v7; 
  unsigned int *p_gfxCachedSunShadowOverlapCount; 
  __int64 v9; 
  GfxSModelSurfDrawData drawData; 

  v9 = -2i64;
  Profile_Begin(95);
  v2 = *(GfxViewInfo **)cmd;
  R_InitSModelSurfDrawData(&drawData, 0x1E000u, surfDataLimit);
  v3 = 0;
  if ( v2->useCachedSunShadow )
  {
    firstCachedSunShadowPartition = frontEndDataOut->sunShadow.firstCachedSunShadowPartition;
    for ( i = frontEndDataOut->sunShadow.lastCachedSunShadowPartition; firstCachedSunShadowPartition <= i; ++firstCachedSunShadowPartition )
    {
      p_sunShadow = &frontEndDataOut->sunShadow;
      if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow", v9) )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(p_sunShadow, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v7 = 0;
      p_gfxCachedSunShadowOverlapCount = &p_sunShadow->partitionCache[firstCachedSunShadowPartition - p_sunShadow->firstCachedSunShadowPartition].gfxCachedSunShadowOverlapCount;
      if ( *p_gfxCachedSunShadowOverlapCount )
      {
        do
          R_AddAllStaticModelsSurfacesCachedSunShadow(v2, firstCachedSunShadowPartition, v7++, &drawData);
        while ( v7 < *p_gfxCachedSunShadowOverlapCount );
      }
    }
  }
  do
    R_AddAllStaticModelSurfacesRangeSunShadow(v2, v3++, &drawData);
  while ( v3 < 3 );
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllStaticModelsSurfacesCachedSunShadow
==============
*/
void R_AddAllStaticModelsSurfacesCachedSunShadow(GfxViewInfo *viewInfo, unsigned int partitionIndex, unsigned int cellIdx, GfxSModelSurfDrawData *drawData)
{
  __int64 v5; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  GfxCachedSunShadowOverlap *v9; 
  char *v10; 
  unsigned int v11; 
  unsigned int (*surfDataLimit)[3]; 
  unsigned __int8 *(*surfData)[3]; 
  unsigned int *p_visDataRefCount; 
  unsigned int *v15; 
  unsigned __int8 *v16; 
  unsigned int (*v17)[3]; 
  char *v18; 
  unsigned int v19; 
  unsigned __int8 *(*v20)[3]; 
  unsigned __int8 *v21; 
  GfxViewInfo *v22; 
  GfxCachedSunShadow *v23; 
  GfxCachedSunShadowOverlap *v24; 
  unsigned int firstSmodelId; 
  GfxCachedSunShadow_Smodel *Smodel; 
  unsigned __int16 smodelIndex; 
  const GfxStaticModelCollection *v28; 
  const GfxStaticModel *v29; 
  unsigned int UsableLodForDist; 
  unsigned int v31; 
  const vec4_t *v32; 
  unsigned __int8 SModelCollectionSubdivLodLevel; 
  unsigned int v34; 
  SModelMask *p_smodelCountMask; 
  unsigned int v36; 
  char v37; 
  unsigned __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  SModelMask *v41; 
  GfxSModelSurfDrawData *v42; 
  GfxSunShadow *p_sunShadow; 
  __int64 v44; 
  __int64 visDataUsed; 
  __int64 passIndex; 
  __int64 sceneViewType; 
  GfxCachedSunShadowOverlap *v48; 
  unsigned __int8 *(*lastId)[3]; 
  unsigned int lastIda; 
  unsigned int v51; 
  GfxCachedSunShadow *staticEntry; 
  unsigned int (*viewDrawStaticDefaultModels)[3]; 
  int viewDrawStaticDefaultModelsa; 
  GfxStaticModelCollection *collections; 
  GfxStaticModel *models; 
  GfxSModelEmitInfo smodelEmit; 
  SModelMask smodelCountMask; 
  SModelMask v63; 
  SModelCollectionEmit emitCache; 
  unsigned int smodelSurfVisData[2048]; 
  char v66[12288]; 
  char v67[8]; 

  v5 = cellIdx;
  Profile_Begin(548);
  v51 = v5 + R_GetCachedSceneViewTypeForSunShadowPartition(&frontEndDataOut->sunShadow, partitionIndex);
  if ( (frontEndDataOut->sunShadow.firstCachedSunShadowPartition > partitionIndex || partitionIndex > frontEndDataOut->sunShadow.lastCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3811, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( &frontEndDataOut->sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( &frontEndDataOut->sunShadow, partitionIndex )") )
    __debugbreak();
  SunShadowPartitionCache = R_GetSunShadowPartitionCache(&frontEndDataOut->sunShadow, partitionIndex);
  v9 = &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v5];
  v48 = v9;
  if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v5].skipUpdate )
  {
    R_SunShadowCache_EndProcessing(&SunShadowPartitionCache->gfxCachedSunShadowOverlap[v5]);
  }
  else
  {
    if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v5].gen )
      R_ProcessSunShadowCacheEntryVisibility(viewInfo, partitionIndex, v5);
    R_ProcessSunShadowCacheEntrySmodelLodChanges(viewInfo, partitionIndex, v5);
    staticEntry = v9->staticEntry;
    R_SunShadowCache_EndProcessing(v9);
    collections = rgp.world->smodels.collections;
    models = rgp.world->smodels.models;
    v10 = v66;
    v11 = 0;
    viewDrawStaticDefaultModels = drawData->surfDataLimit;
    surfDataLimit = drawData->surfDataLimit;
    surfData = drawData->surfData;
    lastId = drawData->surfData;
    p_visDataRefCount = &drawData->buildList[0][0].visDataRefCount;
    v15 = p_visDataRefCount;
    do
    {
      *((_QWORD *)v15 - 2) = -1i64;
      *((_QWORD *)v15 - 1) = 0i64;
      *v15 = 0;
      v16 = (*surfData)[0];
      *((_QWORD *)v15 + 1) = (*surfData)[0];
      *((_QWORD *)v15 + 2) = v16;
      *((_QWORD *)v15 + 3) = &v16[*(_DWORD *)surfDataLimit];
      *((_QWORD *)v15 + 4) = -1i64;
      *((_QWORD *)v15 + 5) = v10;
      v15[12] = 0;
      v15[13] = 256;
      v10 += 4096;
      ++v11;
      surfData = (unsigned __int8 *(*)[3])((char *)surfData + 8);
      surfDataLimit = (unsigned int (*)[3])((char *)surfDataLimit + 4);
      v15 += 18;
    }
    while ( v11 < 3 );
    v17 = viewDrawStaticDefaultModels;
    if ( v10 != v67 )
    {
      v18 = v66;
      v19 = 0;
      v20 = lastId;
      do
      {
        *((_QWORD *)p_visDataRefCount - 2) = -1i64;
        *((_QWORD *)p_visDataRefCount - 1) = 0i64;
        *p_visDataRefCount = 0;
        v21 = (*v20)[0];
        *((_QWORD *)p_visDataRefCount + 1) = (*v20)[0];
        *((_QWORD *)p_visDataRefCount + 2) = v21;
        *((_QWORD *)p_visDataRefCount + 3) = &v21[*(_DWORD *)v17];
        *((_QWORD *)p_visDataRefCount + 4) = -1i64;
        *((_QWORD *)p_visDataRefCount + 5) = v18;
        p_visDataRefCount[12] = 0;
        p_visDataRefCount[13] = 256;
        v18 += 4096;
        ++v19;
        v20 = (unsigned __int8 *(*)[3])((char *)v20 + 8);
        v17 = (unsigned int (*)[3])((char *)v17 + 4);
        p_visDataRefCount += 18;
      }
      while ( v19 < 3 );
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3844, ASSERT_TYPE_ASSERT, "R_InitSModelSurfBuildLists( drawData, 0, delaySurfList, R_SMODELSURF_DELAY_SURF_LIMIT_SUNSHADOW ) == delaySurfList + ARRAY_COUNT( delaySurfList )", "\n\t%llx, %llx", v18, v67) )
        __debugbreak();
    }
    memset_0(smodelEmit.smodelCountForSurf, 0, sizeof(smodelEmit.smodelCountForSurf));
    smodelEmit.smodel = NULL;
    smodelCountMask.m_mask[0] = 0i64;
    smodelCountMask.m_mask[1] = 0i64;
    v63.m_mask[0] = 0i64;
    v63.m_mask[1] = 0i64;
    emitCache.smodelCollectionArgCount = 0;
    memset_0(smodelSurfVisData, 0, sizeof(smodelSurfVisData));
    v22 = viewInfo;
    viewDrawStaticDefaultModelsa = viewInfo->drawStaticDefaultModels;
    v23 = staticEntry;
    lastIda = staticEntry->lastSmodelId;
    v24 = v48;
    if ( v48->updateExtentsMask )
    {
      firstSmodelId = staticEntry->firstSmodelId;
      if ( firstSmodelId != -1 )
      {
        do
        {
          Smodel = R_SunShadowCache_GetSmodel(firstSmodelId);
          smodelIndex = Smodel->smodelIndex;
          if ( (Smodel->extentsMask & v24->updateExtentsMask) != 0 )
          {
            v28 = &collections[smodelIndex];
            v29 = &models[v28->smodelIndex];
            UsableLodForDist = XModelGetUsableLodForDist(v29->model, staticEntry->cachedLODRefDistance, 0.0);
            v31 = UsableLodForDist;
            if ( UsableLodForDist > (*((_WORD *)Smodel + 5) & 7u) )
              R_WarnOncePerFrame(R_WARN_DROPPED_SUN_SHADOW_LOD, UsableLodForDist);
            if ( v31 != 6 && v31 <= v29->model->shadowCutoffLod && R_ShouldDrawTransientModel(viewDrawStaticDefaultModelsa, v29->model) )
            {
              if ( XModelShouldShowBounds(v29->model) )
              {
                v32 = &colorGreen;
                if ( v28->instanceCount > 1 )
                  v32 = &colorGreenFaded;
                if ( r_showCullSModels->current.enabled && v48->sceneViewType == r_showCull->current.integer )
                  R_AddDebugBox(&viewInfo->input.data->debugGlobals, &rgp.world->smodels.collectionBounds[smodelIndex], v32, r_showCullMode->current.integer != 0);
              }
              SModelCollectionSubdivLodLevel = R_GetSModelCollectionSubdivLodLevel(v29->model, v31, v28, &rgp.world->smodels.collectionBounds[smodelIndex]);
              if ( v31 >= v29->model->numLods )
              {
                LODWORD(sceneViewType) = v29->model->numLods;
                LODWORD(passIndex) = v31;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3936, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( smodel->model->numLods )", "lod doesn't index smodel->model->numLods\n\t%i not in [0, %i)", passIndex, sceneViewType) )
                  __debugbreak();
              }
              R_AccumVisibleSModelCollectionArgs(&emitCache, smodelSurfVisData, smodelIndex, 1 << v31, SModelCollectionSubdivLodLevel, 1u, v51);
              if ( SModelCollectionSubdivLodLevel )
              {
                if ( v29 != smodelEmit.smodel )
                {
                  v34 = 0;
                  p_smodelCountMask = &smodelCountMask;
                  while ( !p_smodelCountMask->m_mask[0] )
                  {
                    ++v34;
                    p_smodelCountMask = (SModelMask *)((char *)p_smodelCountMask + 8);
                    if ( v34 >= 2 )
                      goto LABEL_40;
                  }
                  R_EmitSModelSurfs_Shadow(drawData, &smodelEmit, &smodelCountMask, 0);
LABEL_40:
                  smodelEmit.smodel = v29;
                }
                v36 = R_AddSModelToAppropriateList(&smodelEmit, smodelIndex, v31, SModelCollectionSubdivLodLevel);
                v37 = v36 & 0x3F;
                if ( smodelEmit.smodelCountForSurf[v36] == 128 )
                {
                  v38 = 0x8000000000000000ui64 >> v37;
                  v39 = v36 >> 6;
                  v63.m_mask[v39] |= 0x8000000000000000ui64 >> v37;
                  R_EmitSModelSurfs_Shadow(drawData, &smodelEmit, &v63, 0);
                  smodelCountMask.m_mask[v39] &= ~v38;
                }
                else
                {
                  smodelCountMask.m_mask[v36 >> 6] |= 0x8000000000000000ui64 >> v37;
                }
              }
            }
            v24 = v48;
          }
          firstSmodelId = R_SunShadowCache_NextSmodelId(firstSmodelId, lastIda);
        }
        while ( firstSmodelId != -1 );
        v22 = viewInfo;
      }
      v23 = staticEntry;
    }
    R_FlushVisibleSModelCollections(&emitCache, smodelSurfVisData, 1u);
    if ( emitCache.smodelCollectionArgCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3974, ASSERT_TYPE_ASSERT, "(smodelCollectionEmit.smodelCollectionArgCount == 0)", (const char *)&queryFormat, "smodelCollectionEmit.smodelCollectionArgCount == 0") )
      __debugbreak();
    v40 = 0;
    v41 = &smodelCountMask;
    while ( !v41->m_mask[0] )
    {
      ++v40;
      v41 = (SModelMask *)((char *)v41 + 8);
      if ( v40 >= 2 )
      {
        v42 = drawData;
        goto LABEL_56;
      }
    }
    v42 = drawData;
    R_EmitSModelSurfs_Shadow(drawData, &smodelEmit, &smodelCountMask, 0);
LABEL_56:
    R_EmitDelayedSModelSurfsRemaining(v42->buildList[0]);
    if ( v51 - 12 > 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3983, ASSERT_TYPE_ASSERT, "(sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST)", (const char *)&queryFormat, "sceneViewType >= SCENE_VIEW_CACHED_SUNSHADOW_FIRST && sceneViewType <= SCENE_VIEW_CACHED_SUNSHADOW_LAST") )
      __debugbreak();
    R_ProcessSModelSurfVisBits_Shadow(smodelSurfVisData, v42, v51);
    p_sunShadow = &frontEndDataOut->sunShadow;
    if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
      __debugbreak();
    if ( !R_IsCachedSunShadowPartition(p_sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
      __debugbreak();
    v44 = (int)(cellIdx + 10 * (partitionIndex - p_sunShadow->firstCachedSunShadowPartition) + 45);
    R_FlushSModelSurfBuildList(&v22->drawList[v44], v42, 0);
    visDataUsed = v42->visDataUsed;
    v42->visData += visDataUsed;
    v42->visDataLimit -= visDataUsed;
    v42->visDataUsed = 0;
    if ( v24->gen )
    {
      v23->genSmodel = v22->input.data->frameCount;
      v23->smodelCount = v22->drawList[v44].smodelSurfList[0].surfDataBytes + v22->drawList[v44].smodelSurfList[1].surfDataBytes + v22->drawList[v44].smodelSurfList[2].surfDataBytes;
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_AddDelayedSModelSurf
==============
*/
void R_AddDelayedSModelSurf(GfxSModelSurfBuildList *buildList, GfxSModelSurfHeader smodelSurfHeader, GfxSModelSurfVisDataRef visDataRef)
{
  __int64 delaySurfCount; 
  GfxSModelSurfDelaySort *v7; 

  if ( smodelSurfHeader.fields.visDataRefCountLessOne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1331, ASSERT_TYPE_ASSERT, "(smodelSurfHeader.fields.visDataRefCountLessOne == 0)", (const char *)&queryFormat, "smodelSurfHeader.fields.visDataRefCountLessOne == 0") )
    __debugbreak();
  delaySurfCount = buildList->delaySurfCount;
  if ( (_DWORD)delaySurfCount == buildList->delaySurfLimit )
  {
    R_WarnOncePerFrame(R_WARN_SMODEL_SURF_DELAY_LIMIT);
  }
  else
  {
    v7 = &buildList->delaySurfList[delaySurfCount];
    buildList->delaySurfCount = delaySurfCount + 1;
    v7->packed.p0 = 0i64;
    v7->fields.visDataRef = visDataRef;
    v7->fields.header = smodelSurfHeader;
    if ( buildList->minDelaySortKey.packed > smodelSurfHeader.packed )
      buildList->minDelaySortKey = smodelSurfHeader;
  }
}

/*
==============
R_AddSModelToAppropriateList
==============
*/
__int64 R_AddSModelToAppropriateList(GfxSModelEmitInfo *smodelEmit, unsigned int smodelIndex, unsigned int lodIndex, int subdivLevel)
{
  char v4; 
  unsigned __int16 v6; 
  __int64 v8; 
  unsigned int *v9; 
  __int64 v10; 
  __int64 result; 
  __int64 v12; 
  __int64 v15; 
  int v16; 
  int v17; 

  v4 = subdivLevel;
  v6 = smodelIndex;
  if ( subdivLevel <= 0 )
  {
    if ( lodIndex >= 6 )
    {
      v17 = 6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1670, ASSERT_TYPE_ASSERT, "(unsigned)( lodIndex ) < (unsigned)( NUM_LODS )", "lodIndex doesn't index NUM_LODS\n\t%i not in [0, %i)", lodIndex, v17) )
        __debugbreak();
    }
    v8 = 4 * lodIndex;
    v9 = &smodelEmit->smodelCountForSurf[v8];
    LODWORD(v10) = *v9;
  }
  else
  {
    if ( lodIndex >= 6 )
    {
      v16 = 6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1670, ASSERT_TYPE_ASSERT, "(unsigned)( lodIndex ) < (unsigned)( NUM_LODS )", "lodIndex doesn't index NUM_LODS\n\t%i not in [0, %i)", lodIndex, v16) )
        __debugbreak();
    }
    v8 = 4 * lodIndex + 1;
    v9 = &smodelEmit->smodelCountForSurf[v8];
    v10 = *v9;
    smodelEmit->smodelSubdivLevel[v8][v10] = v4 - 1;
  }
  if ( (unsigned int)v8 >= 0x18 )
  {
    LODWORD(v15) = 24;
    LODWORD(v12) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2021, ASSERT_TYPE_ASSERT, "(unsigned)( smodelSurfList ) < (unsigned)( ( NUM_LODS << ( ( 0 ) + R_SMODEL_SURF_LIST_BITCOUNT ) ) )", "smodelSurfList doesn't index R_SMODEL_SURF_LIST_COUNT\n\t%i not in [0, %i)", v12, v15) )
      __debugbreak();
  }
  result = (unsigned int)v8;
  smodelEmit->smodelIndexForSurf[(unsigned __int64)(unsigned int)v8][(unsigned int)v10] = v6;
  *v9 = v10 + 1;
  return result;
}

/*
==============
R_AddStaticModel_IsValidShadowLOD
==============
*/
bool R_AddStaticModel_IsValidShadowLOD(const XModel *xmodel, unsigned int lod)
{
  return lod != 6 && lod <= xmodel->shadowCutoffLod;
}

/*
==============
R_AdjustStaticModelLODForRamp
==============
*/
__int64 R_AdjustStaticModelLODForRamp(unsigned int origLOD, const XModel *const model, float baseDist, float lodCullScale, bool isClutter, float *lodDist, float *lodCullDist, float *scaledDist)
{
  float v10; 
  float v11; 

  if ( origLOD != 6 || rg.correctedLodParms.ramp.allowLODOutStatic )
    return origLOD;
  if ( lodCullScale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 295, ASSERT_TYPE_ASSERT, "(lodCullScale != 0.0f)", (const char *)&queryFormat, "lodCullScale != 0.0f") )
    __debugbreak();
  v10 = baseDist * rg.correctedLodParms.invFovScale;
  v11 = (float)(baseDist * rg.correctedLodParms.cappedLodScale) / lodCullScale;
  if ( XModelGetDesiredLodForDist(model, baseDist * rg.correctedLodParms.invFovScale, v11) == 6 )
    return origLOD;
  *lodDist = v10;
  *lodCullDist = v11;
  *scaledDist = baseDist;
  return XModelGetNumLods(model) - 1;
}

/*
==============
R_CalcAllStaticModelSurfacesSpotShadowLodChange
==============
*/
void R_CalcAllStaticModelSurfacesSpotShadowLodChange(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex, unsigned int primaryLightIndex)
{
  GfxShadowGeometry *shadowGeomOptimized; 
  __int64 v4; 
  __int64 v5; 
  GfxSpotShadowUpdate *v6; 
  unsigned int activeStatus; 
  unsigned int v8; 
  __int64 v9; 
  GfxBackEndData *v10; 
  GfxStaticModelCollection *v11; 
  unsigned __int64 transientGfxWorldPlaced; 
  GfxStaticModel *v13; 
  const XModel *model; 
  const Bounds *v15; 
  unsigned int NumLods; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 smodelsChangedCount; 
  float *p_minX; 
  float width; 
  float height; 
  __int64 v25; 
  __int64 v26; 
  int integer; 
  R_SpotShadow_ActiveCacheEntry *active; 
  GfxShadowGeometry *v29; 
  __int64 v30; 
  int drawStaticDefaultModels; 

  shadowGeomOptimized = rgp.world->shadowGeomOptimized;
  v29 = shadowGeomOptimized;
  if ( shadowGeomOptimized )
  {
    v4 = 3i64 * primaryLightIndex;
    drawStaticDefaultModels = viewInfo->drawStaticDefaultModels;
    v5 = spotShadowUpdateIndex;
    v30 = v4;
    v6 = &frontEndDataOut->spotShadowUpdates[v5];
    active = frontEndDataOut->spotShadowUpdates[v5].active;
    activeStatus = frontEndDataOut->spotShadowUpdates[v5].activeStatus;
    integer = sm_spotSModelTargetLOD->current.integer;
    frontEndDataOut->spotShadowUpdates[v5].smodelsChangedCount = 0;
    if ( activeStatus != 4 && activeStatus != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4236, ASSERT_TYPE_ASSERT, "(spotShadowUpdate->activeStatus == R_SpotShadow_ActiveCacheStatus_Valid || spotShadowUpdate->activeStatus == R_SpotShadow_ActiveCacheStatus_InvalidBSP)", (const char *)&queryFormat, "spotShadowUpdate->activeStatus == R_SpotShadow_ActiveCacheStatus_Valid || spotShadowUpdate->activeStatus == R_SpotShadow_ActiveCacheStatus_InvalidBSP") )
      __debugbreak();
    v8 = 0;
    if ( *(&shadowGeomOptimized->smodelCount + 4 * v4) )
    {
      while ( 1 )
      {
        if ( v8 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4241, ASSERT_TYPE_ASSERT, "(smodelIter < R_SPOTSHADOW_ACTIVE_CACHE_MAX_CACHED_SMODELS)", (const char *)&queryFormat, "smodelIter < R_SPOTSHADOW_ACTIVE_CACHE_MAX_CACHED_SMODELS") )
          __debugbreak();
        v9 = *(unsigned __int16 *)(*((_QWORD *)&shadowGeomOptimized->smodelIndex + v4) + 2i64 * v8);
        if ( (unsigned int)v9 >= rgp.world->smodels.collectionCount )
        {
          LODWORD(v26) = rgp.world->smodels.collectionCount;
          LODWORD(v25) = *(unsigned __int16 *)(*((_QWORD *)&shadowGeomOptimized->smodelIndex + v4) + 2i64 * v8);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4244, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        v10 = frontEndDataOut;
        v11 = &rgp.world->smodels.collections[v9];
        transientGfxWorldPlaced = v11->transientGfxWorldPlaced;
        if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
          __debugbreak();
        if ( (unsigned int)transientGfxWorldPlaced >= 0x600 )
        {
          LODWORD(v26) = 1536;
          LODWORD(v25) = transientGfxWorldPlaced;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v25, v26) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (transientGfxWorldPlaced & 0x1F)) & v10->transientVisibility.array[transientGfxWorldPlaced >> 5]) == 0 )
          goto LABEL_59;
        if ( v11->smodelIndex >= rgp.world->smodels.modelCount )
        {
          LODWORD(v26) = rgp.world->smodels.modelCount;
          LODWORD(v25) = v11->smodelIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4250, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollection->smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelCollection->smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        v13 = &rgp.world->smodels.models[v11->smodelIndex];
        if ( !drawStaticDefaultModels )
        {
          model = v13->model;
          if ( !v13->model )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 625, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
          }
          if ( (model->flags & 0x8000) != 0 )
            goto LABEL_59;
        }
        if ( (v13->flags & 4) != 0 )
          goto LABEL_59;
        v15 = &rgp.world->smodels.collectionBounds[v9];
        if ( R_GetStaticModelCollectionLODMask(viewInfo->viewInfoIndex, v9, v13->model, NULL, NULL) )
          __asm { tzcnt   ebx, eax }
        else
          _EBX = 6;
        if ( _EBX >= v13->model->shadowCutoffLod )
          _EBX = 6;
        NumLods = XModelGetNumLods(v13->model);
        v19 = active->cachedSmodelLOD[v8];
        if ( integer >= 0 )
          break;
        if ( _EBX != v19 )
          goto LABEL_44;
LABEL_59:
        shadowGeomOptimized = v29;
        v4 = v30;
        if ( ++v8 >= *(&v29->smodelCount + 4 * v30) )
          goto LABEL_60;
      }
      if ( _EBX == v19 )
        goto LABEL_59;
      v20 = NumLods - 1;
      if ( v20 > integer )
        v20 = integer;
      if ( v19 <= v20 || _EBX >= v19 )
        goto LABEL_59;
LABEL_44:
      active->cachedSmodelLOD[v8] = truncate_cast<unsigned char,unsigned int>(_EBX);
      if ( v6->activeStatus - 1 > 1 )
      {
        smodelsChangedCount = v6->smodelsChangedCount;
        v6->activeStatus = 3;
        if ( (unsigned int)smodelsChangedCount < 0x400 )
        {
          GenerateScreenSpaceExtentsFromWorldBounds(v15, &v6->viewportParms, &v6->smodelChangedBoundingBox[smodelsChangedCount]);
          p_minX = &v6->smodelChangedBoundingBox[v6->smodelsChangedCount].minX;
          if ( (v6->viewportParms.viewport.x || v6->viewportParms.viewport.y) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 4307, ASSERT_TYPE_ASSERT, "(spotShadowUpdate->viewportParms.viewport.x == 0 && spotShadowUpdate->viewportParms.viewport.y == 0)", (const char *)&queryFormat, "spotShadowUpdate->viewportParms.viewport.x == 0 && spotShadowUpdate->viewportParms.viewport.y == 0") )
            __debugbreak();
          if ( *p_minX > 0.0 || (width = (float)v6->viewportParms.viewport.width, width > p_minX[1]) || p_minX[2] > 0.0 || (height = (float)v6->viewportParms.viewport.height, height > p_minX[3]) )
          {
            if ( *p_minX < p_minX[1] && p_minX[3] > p_minX[2] )
              ++v6->smodelsChangedCount;
          }
          else
          {
            v6->activeStatus = 2;
          }
        }
        else
        {
          v6->activeStatus = 2;
          Com_PrintWarning(8, "Too many cached spot lod changes.  Increase the number up from %zu.\n", 0x400ui64);
        }
      }
      goto LABEL_59;
    }
LABEL_60:
    if ( v6->activeStatus == 3 && !v6->smodelsChangedCount )
      v6->activeStatus = 4;
  }
}

/*
==============
R_EmitDelayedSModelSurfsRemaining
==============
*/
void R_EmitDelayedSModelSurfsRemaining(GfxSModelSurfBuildList *buildListArray)
{
  GfxSModelSurfDelaySort **p_delaySurfList; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  p_delaySurfList = &buildListArray->delaySurfList;
  v2 = 3i64;
  do
  {
    v3 = *((unsigned int *)p_delaySurfList + 2);
    if ( (_DWORD)v3 )
    {
      R_SortSModelSurfDelaySort(*p_delaySurfList, 0, v3);
      v4 = 0i64;
      do
      {
        R_EmitSingleSModelSurf((GfxSModelSurfBuildList *)(p_delaySurfList - 7), (*p_delaySurfList)[v4].fields.header, (*p_delaySurfList)[v4].fields.visDataRef);
        ++v4;
        --v3;
      }
      while ( v3 );
    }
    p_delaySurfList += 9;
    --v2;
  }
  while ( v2 );
}

/*
==============
R_EmitDelayedSModelSurfsUpToMaterial
==============
*/
void R_EmitDelayedSModelSurfsUpToMaterial(GfxSModelSurfBuildList *buildListArray, GfxSModelSurfHeader refKey, unsigned int firstMtlSortIndex)
{
  __int64 v4; 
  GfxSModelSurfDelaySort *delaySurfList; 
  unsigned int delaySurfCount; 
  unsigned int v7; 
  GfxSModelSurfHeader header; 
  GfxSModelSurfHeader minDelaySortKey; 
  GfxSModelSurfHeader v10; 
  __int64 v11; 
  GfxSModelSurfDelaySort v12; 
  unsigned int v13; 

  refKey.fields.materialSortedIndex = firstMtlSortIndex;
  if ( (unsigned __int16)firstMtlSortIndex != firstMtlSortIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1271, ASSERT_TYPE_ASSERT, "(refKey.fields.materialSortedIndex == firstMtlSortIndex)", (const char *)&queryFormat, "refKey.fields.materialSortedIndex == firstMtlSortIndex") )
    __debugbreak();
  v4 = 3i64;
  do
  {
    if ( buildListArray->minDelaySortKey.packed <= refKey.packed )
    {
      delaySurfList = buildListArray->delaySurfList;
      if ( !delaySurfList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1279, ASSERT_TYPE_ASSERT, "(delaySurfList)", (const char *)&queryFormat, "delaySurfList") )
        __debugbreak();
      delaySurfCount = buildListArray->delaySurfCount;
      v7 = 0;
      buildListArray->minDelaySortKey.packed = -1i64;
      if ( delaySurfCount > buildListArray->delaySurfLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1284, ASSERT_TYPE_ASSERT, "(end <= buildList->delaySurfLimit)", (const char *)&queryFormat, "end <= buildList->delaySurfLimit") )
        __debugbreak();
LABEL_12:
      header = delaySurfList[v7].fields.header;
      if ( header.packed <= refKey.packed )
        goto LABEL_18;
      minDelaySortKey = buildListArray->minDelaySortKey;
      while ( 1 )
      {
        if ( minDelaySortKey.packed > header.packed )
        {
          buildListArray->minDelaySortKey = header;
          minDelaySortKey = header;
        }
        if ( ++v7 == delaySurfCount )
          break;
        header = delaySurfList[v7].fields.header;
        if ( header.packed <= refKey.packed )
        {
LABEL_18:
          while ( v7 != --delaySurfCount )
          {
            v10 = delaySurfList[delaySurfCount].fields.header;
            if ( v10.packed > refKey.packed )
            {
              if ( buildListArray->minDelaySortKey.packed > v10.packed )
                buildListArray->minDelaySortKey = v10;
              v11 = v7++;
              v12 = delaySurfList[v11];
              delaySurfList[v11] = delaySurfList[delaySurfCount];
              delaySurfList[delaySurfCount] = v12;
              if ( v7 != delaySurfCount )
                goto LABEL_12;
              goto $done_splitting_1;
            }
          }
          break;
        }
      }
$done_splitting_1:
      if ( v7 >= buildListArray->delaySurfCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1312, ASSERT_TYPE_ASSERT, "(begin < buildList->delaySurfCount)", (const char *)&queryFormat, "begin < buildList->delaySurfCount") )
        __debugbreak();
      R_SortSModelSurfDelaySort(delaySurfList, v7, buildListArray->delaySurfCount);
      v13 = buildListArray->delaySurfCount;
      buildListArray->delaySurfCount = v7;
      do
      {
        R_EmitSingleSModelSurf(buildListArray, delaySurfList[v7].fields.header, delaySurfList[v7].fields.visDataRef);
        ++v7;
      }
      while ( v7 != v13 );
    }
    ++buildListArray;
    --v4;
  }
  while ( v4 );
}

/*
==============
R_EmitSModelSurfVisData
==============
*/
__int64 R_EmitSModelSurfVisData(const XSurface *surfs, unsigned int surfCount, const unsigned __int16 *smodelIndexes, const unsigned __int8 *smodelSubdivLevels, unsigned int smodelCount, GfxSModelSurfDrawData *drawData, unsigned __int16 *visDataIndex)
{
  GfxSModelSurfDrawData *v7; 
  unsigned __int8 *v8; 
  unsigned int v9; 
  unsigned __int16 *v10; 
  __int64 v11; 
  unsigned int visDataUsed; 
  __int64 visDataLimit; 
  __int64 v14; 
  __int64 v16; 
  char *v17; 
  __int64 v18; 
  const XSurface *v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned __int8 SurfaceSubdivLevel; 
  __int64 v23; 
  GfxStaticModelCollection *v24; 
  int v25; 
  char *v26; 
  __int64 v27; 
  const XSurface *v28; 
  __int64 v29; 
  unsigned __int8 v30; 
  __int64 v31; 
  int v32; 
  GfxStaticModelCollection *v33; 
  int v34; 
  unsigned int SubdivSurfTessFactorsTotalCacheSize; 
  unsigned int v36; 
  int v37; 
  void *v38; 
  unsigned __int8 *v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned int cacheSize; 
  char *v43; 
  int v44; 
  int cacheOffset[2]; 
  unsigned int v46; 
  char *v47; 
  void *v48; 
  int v49; 
  void *Src; 
  const XSurface *v51; 
  GfxSModelSurfDrawData *v52; 
  char v53[512]; 

  v7 = drawData;
  v8 = (unsigned __int8 *)smodelSubdivLevels;
  v9 = smodelCount;
  v10 = (unsigned __int16 *)smodelIndexes;
  v11 = surfCount;
  visDataUsed = drawData->visDataUsed;
  v51 = surfs;
  v48 = (void *)smodelSubdivLevels;
  Src = (void *)smodelIndexes;
  v46 = surfCount;
  v52 = drawData;
  *visDataIndex = truncate_cast<unsigned short,unsigned int>(visDataUsed);
  v49 = (3 * smodelCount + 4 * v11 + 5) & 0xFFFFFFFC;
  if ( !v49 )
    return 0i64;
  visDataLimit = drawData->visDataLimit;
  v14 = visDataUsed + ((3 * smodelCount + 4 * (_DWORD)v11 + 5) & 0xFFFFFFFC);
  if ( (unsigned int)v14 > (unsigned int)visDataLimit )
  {
LABEL_5:
    R_WarnOncePerFrame(R_WARN_SMODEL_VIS_DATA_LIMIT, v14, visDataLimit);
    return 0i64;
  }
  if ( visDataUsed >= 0x40000 )
  {
    visDataLimit = 0x40000i64;
    v14 = visDataUsed;
    goto LABEL_5;
  }
  cacheSize = 0;
  if ( (_DWORD)v11 )
  {
    v16 = 0i64;
    v17 = v53;
    v18 = v11;
    *(_QWORD *)cacheOffset = 0i64;
    v43 = v53;
    v47 = (char *)v11;
    do
    {
      v19 = &v51[v16];
      if ( R_SurfaceHasSubdivision(v19) && v9 )
      {
        v20 = cacheSize;
        v21 = v9;
        do
        {
          SurfaceSubdivLevel = R_GetSurfaceSubdivLevel(v19, *v8 + 1);
          v23 = *v10;
          if ( (unsigned int)v23 >= rgp.world->smodels.collectionCount )
          {
            LODWORD(v41) = rgp.world->smodels.collectionCount;
            LODWORD(v40) = *v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", v40, v41) )
              __debugbreak();
          }
          v24 = &rgp.world->smodels.collections[v23];
          ++v8;
          ++v10;
          v20 += v24->instanceCount * R_GetSubdivSurfTessFactorsTotalCacheSize(v19, SurfaceSubdivLevel);
          --v21;
        }
        while ( v21 );
        v16 = *(_QWORD *)cacheOffset;
        v18 = (__int64)v47;
        v9 = smodelCount;
        v10 = (unsigned __int16 *)Src;
        v8 = (unsigned __int8 *)v48;
        cacheSize = v20;
        v17 = v43;
      }
      ++v16;
      *(_DWORD *)v17 = 0x200000;
      v17 += 4;
      *(_QWORD *)cacheOffset = v16;
      --v18;
      v43 = v17;
      v47 = (char *)v18;
    }
    while ( v18 );
    if ( cacheSize )
    {
      if ( R_AllocSubdivSkinnedCachedVerts(cacheSize, cacheOffset) )
      {
        v25 = cacheOffset[0];
        v26 = v53;
        v27 = 0i64;
        v47 = v53;
        v44 = 0;
        while ( 1 )
        {
          v28 = &v51[v27];
          if ( R_SurfaceHasSubdivision(v28) )
          {
            v29 = 0i64;
            *(_DWORD *)v26 = v25;
            if ( v9 )
              break;
          }
LABEL_34:
          v26 += 4;
          LODWORD(v11) = v46;
          v27 = (unsigned int)(v44 + 1);
          v8 = (unsigned __int8 *)v48;
          v44 = v27;
          v47 = v26;
          if ( (unsigned int)v27 >= v46 )
          {
            v37 = v25 - cacheOffset[0];
            if ( v37 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", (unsigned int)v37, "signed", v37) )
              __debugbreak();
            if ( v37 != cacheSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1075, ASSERT_TYPE_ASSERT, "(truncate_cast< uint >( tessFactorsCachePos - tessFactorsCacheBaseOffset ) == tessFactorsCacheSize)", (const char *)&queryFormat, "truncate_cast< uint >( tessFactorsCachePos - tessFactorsCacheBaseOffset ) == tessFactorsCacheSize") )
              __debugbreak();
            goto LABEL_42;
          }
        }
        while ( 1 )
        {
          v30 = R_GetSurfaceSubdivLevel(v28, v8[v29] + 1);
          v31 = *((unsigned __int16 *)Src + v29);
          if ( (unsigned int)v31 >= rgp.world->smodels.collectionCount )
          {
            LODWORD(v41) = rgp.world->smodels.collectionCount;
            LODWORD(v40) = *((unsigned __int16 *)Src + v29);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1055, ASSERT_TYPE_ASSERT, "(unsigned)( smodelCollectionIndex ) < (unsigned)( rgp.world->smodels.collectionCount )", "smodelCollectionIndex doesn't index rgp.world->smodels.collectionCount\n\t%i not in [0, %i)", v40, v41) )
              __debugbreak();
          }
          v32 = v30;
          v33 = &rgp.world->smodels.collections[v31];
          v34 = 0;
          SubdivSurfTessFactorsTotalCacheSize = R_GetSubdivSurfTessFactorsTotalCacheSize(v28, v30);
          if ( v33->instanceCount )
            break;
LABEL_32:
          v9 = smodelCount;
          v29 = (unsigned int)(v29 + 1);
          v8 = (unsigned __int8 *)v48;
          if ( (unsigned int)v29 >= smodelCount )
          {
            v26 = v47;
            goto LABEL_34;
          }
        }
        while ( 1 )
        {
          v36 = v34 + v33->firstInstance;
          if ( v36 >= rgp.world->smodels.instanceCount )
          {
            LODWORD(v41) = rgp.world->smodels.instanceCount;
            LODWORD(v40) = v34 + v33->firstInstance;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1064, ASSERT_TYPE_ASSERT, "(unsigned)( smodelInstanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "smodelInstanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", v40, v41) )
              __debugbreak();
          }
          if ( !R_AddSModelSubdivTessFactorsCmd(frontEndDataOut->compute.cmdList, v28, v32, v25, v36) )
            break;
          v25 += SubdivSurfTessFactorsTotalCacheSize;
          if ( ++v34 >= v33->instanceCount )
            goto LABEL_32;
        }
      }
      return 0i64;
    }
    LODWORD(v11) = v46;
LABEL_42:
    v7 = v52;
  }
  v38 = Src;
  v39 = &v7->visData[v7->visDataUsed];
  v7->visDataUsed += v49;
  *(_WORD *)v39 = v9;
  memcpy_0(v39 + 2, v38, 2i64 * v9);
  memcpy_0(&v39[2 * v9 + 2], v48, v9);
  memcpy_0(&v39[2 * v9 + 2 + v9], v53, 4i64 * (unsigned int)v11);
  return v9;
}

/*
==============
R_EmitSModelSurfs_Camera
==============
*/
void R_EmitSModelSurfs_Camera(GfxSModelSurfDrawData *drawData, GfxSModelEmitInfo *smodelEmit, SModelMask *smodelCountMask, GfxViewMaterialRenderFeatures *renderFeatures, const vec3_t *origin)
{
  const GfxStaticModel *smodel; 
  GfxSModelEmitInfo *v6; 
  SModelMask *v7; 
  const XModel *model; 
  Material *const *Skins; 
  const Material *v10; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v17; 
  XSurface *v18; 
  unsigned int v19; 
  const XModelLodInfo *v20; 
  unsigned __int16 v21; 
  const XModelLodInfo *v22; 
  unsigned __int16 v23; 
  int v24; 
  const XModelLodInfo *v25; 
  unsigned __int16 v26; 
  const XModelLodInfo *v27; 
  unsigned __int16 v28; 
  __int64 v29; 
  unsigned int v30; 
  int v31; 
  unsigned __int16 v32; 
  unsigned int v33; 
  GfxStaticModelSurface *v34; 
  const Material *v35; 
  unsigned __int8 cameraRegion; 
  __int64 p1_low; 
  unsigned __int16 *v38; 
  const char *name; 
  Material *MaterialAtIndex; 
  __int16 packed_high; 
  __int16 v42; 
  const XSurface *v43; 
  char *v44; 
  GfxSModelSurfHeader v45; 
  GfxSModelSurfVisDataRef v46; 
  bool v47; 
  GfxSModelSurfDrawData *drawDataa; 
  unsigned __int16 *visDataIndex; 
  __int64 v50; 
  __int64 v51; 
  GfxSModelSurfVisDataRef visDataRef; 
  unsigned __int16 v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int firstMtlSortIndex; 
  GfxSModelSurfHeader smodelSurfHeader; 
  int v58; 
  int v59; 
  int v60; 
  XSurface *surfs; 
  const Material *v62; 
  __int64 v63; 
  XModel *v64; 

  smodel = smodelEmit->smodel;
  v6 = smodelEmit;
  v7 = smodelCountMask;
  v53 = 0;
  model = smodel->model;
  v64 = smodel->model;
  Skins = XModelGetSkins(v64, 0);
  v10 = Material_FromHandle(Skins[v6->smodel->firstMtlSkinIndex]);
  firstMtlSortIndex = Material_GetSortedIndex(v10);
  do
  {
    v11 = SModelMask::CountLeadingZeros(v7);
    v55 = v11;
    v12 = v11;
    v7->m_mask[v11 >> 6] &= ~(0x8000000000000000ui64 >> (v11 & 0x3F));
    v13 = (v11 >> 2) & 7;
    v58 = v13;
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    LodInfo = XModelGetLodInfo(model, v13);
    if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
      __debugbreak();
    if ( LodInfo->numsurfs )
    {
      surfIndex = LodInfo->surfIndex;
      numsurfs = model->numsurfs;
      if ( surfIndex >= numsurfs )
      {
        LODWORD(visDataIndex) = numsurfs;
        LODWORD(drawDataa) = surfIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
          __debugbreak();
      }
      if ( LodInfo->numsurfs + (unsigned int)LodInfo->surfIndex > model->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
        __debugbreak();
      if ( !LodInfo->surfs )
      {
        LODWORD(v50) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", model->name, v50) )
          __debugbreak();
      }
      if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
        __debugbreak();
      v17 = LodInfo->numsurfs;
      v18 = LodInfo->surfs;
    }
    else
    {
      v17 = 0;
      v18 = NULL;
    }
    v19 = v17;
    v60 = v17;
    surfs = v18;
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1717, ASSERT_TYPE_ASSERT, "(surfs)", (const char *)&queryFormat, "surfs") )
      __debugbreak();
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1718, ASSERT_TYPE_ASSERT, "(surfCount)", (const char *)&queryFormat, "surfCount") )
      __debugbreak();
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 270, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    v20 = XModelGetLodInfo(model, v13);
    v21 = model->numsurfs;
    v22 = v20;
    v23 = v20->surfIndex;
    if ( v23 >= v21 )
    {
      LODWORD(visDataIndex) = v21;
      LODWORD(drawDataa) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 274, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
        __debugbreak();
    }
    v24 = v22->surfIndex + v6->smodel->firstStaticModelSurfaceIndex;
    v59 = v24;
    v25 = XModelGetLodInfo(model, v13);
    v26 = model->numsurfs;
    v27 = v25;
    v28 = v25->surfIndex;
    if ( v28 >= v26 )
    {
      LODWORD(visDataIndex) = v26;
      LODWORD(drawDataa) = v28;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
        __debugbreak();
    }
    v29 = (__int64)&model->materialHandles[v27->surfIndex];
    v63 = v29;
    v30 = smodelEmit->smodelCountForSurf[v12];
    smodelEmit->smodelCountForSurf[v12] = 0;
    v55 &= 3u;
    if ( v55 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1737, ASSERT_TYPE_ASSERT, "(smodelSurfType == R_SMODEL_SURFTYPE_SUBDIV)", (const char *)&queryFormat, "smodelSurfType == R_SMODEL_SURFTYPE_SUBDIV") )
      __debugbreak();
    v31 = R_EmitSModelSurfVisData(surfs, v19, smodelEmit->smodelIndexForSurf[v12], smodelEmit->smodelSubdivLevel[v12], v30, drawData, &v53);
    if ( v31 )
    {
      if ( v31 != v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1747, ASSERT_TYPE_ASSERT, "(usedCount == smodelCount)", (const char *)&queryFormat, "usedCount == smodelCount") )
        __debugbreak();
      v32 = v24;
      v33 = 0;
      *(_WORD *)&visDataRef.fields = v53 >> 2;
      *((_WORD *)&visDataRef.fields + 1) = v24;
      v54 = 0;
      while ( 1 )
      {
        v34 = &rgp.world->smodels.surfaces[v32];
        if ( v34->smodelIndex != smodelEmit->smodel - rgp.world->smodels.models )
        {
          LODWORD(v51) = smodelEmit->smodel - rgp.world->smodels.models;
          LODWORD(v50) = v34->smodelIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1758, ASSERT_TYPE_ASSERT, "( smodelSurface->smodelIndex ) == ( smodelEmit->smodel - rgp.world->smodels.models )", "%s == %s\n\t%i, %i", "smodelSurface->smodelIndex", "smodelEmit->smodel - rgp.world->smodels.models", v50, v51) )
            __debugbreak();
        }
        if ( v34->lodIndex != v58 )
        {
          LODWORD(v51) = v58;
          LODWORD(v50) = v34->lodIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1759, ASSERT_TYPE_ASSERT, "( smodelSurface->lodIndex ) == ( lodIndex )", "%s == %s\n\t%i, %i", "smodelSurface->lodIndex", "lodIndex", v50, v51) )
            __debugbreak();
        }
        if ( v34->surfIndex != v33 )
        {
          LODWORD(v51) = v33;
          LODWORD(v50) = v34->surfIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1760, ASSERT_TYPE_ASSERT, "( smodelSurface->surfIndex ) == ( surfIndex )", "%s == %s\n\t%i, %i", "smodelSurface->surfIndex", "surfIndex", v50, v51) )
            __debugbreak();
        }
        v35 = *(const Material **)(v29 + 8i64 * v33);
        v62 = v35;
        if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
          __debugbreak();
        if ( !v35->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
          __debugbreak();
        if ( !*v35->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
          __debugbreak();
        cameraRegion = v35->cameraRegion;
        if ( SLOBYTE(v35->surfaceFlags) < 0 )
          goto LABEL_98;
        p1_low = LOWORD(v35->drawSurf.packed.p1);
        if ( (_DWORD)p1_low == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", v35->name) )
          __debugbreak();
        if ( (unsigned int)p1_low >= rgp.materialCount )
        {
          LODWORD(visDataIndex) = rgp.materialCount;
          LODWORD(drawDataa) = p1_low;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
            __debugbreak();
        }
        v38 = &rgp.sortedMaterials[p1_low];
        if ( DB_GetMaterialAtIndex(*v38) != v35 )
        {
          name = v35->name;
          if ( (unsigned int)p1_low >= rgp.materialCount )
          {
            LODWORD(visDataIndex) = rgp.materialCount;
            LODWORD(drawDataa) = p1_low;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
              __debugbreak();
          }
          MaterialAtIndex = DB_GetMaterialAtIndex(*v38);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", MaterialAtIndex->name, name) )
            __debugbreak();
        }
        packed_high = HIWORD(visDataRef.packed);
        v42 = (v35->surfaceFlags & 0x8000000) != 0;
        *(_DWORD *)&smodelSurfHeader.fields.visDataRefCountLessOne = 0;
        smodelSurfHeader.array[2] = v42;
        smodelSurfHeader.fields.materialSortedIndex = p1_low;
        if ( HIWORD(visDataRef.packed) != v33 + v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1774, ASSERT_TYPE_SANITY, "( visDataRef.fields.staticSurfIndex == staticSurfIndex + surfIndex )", (const char *)&queryFormat, "visDataRef.fields.staticSurfIndex == staticSurfIndex + surfIndex") )
          __debugbreak();
        if ( !rg.distortion )
        {
          if ( !v35->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 655, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
            __debugbreak();
          if ( (v35->techniqueSet->flags & 0x800000000i64) != 0 )
            goto LABEL_100;
        }
        if ( v55 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1786, ASSERT_TYPE_ASSERT, "(smodelSurfType == R_SMODEL_SURFTYPE_SUBDIV)", (const char *)&queryFormat, "smodelSurfType == R_SMODEL_SURFTYPE_SUBDIV") )
          __debugbreak();
        v43 = &surfs[v33];
        if ( !R_SurfaceHasSubdivision(v43) )
          goto LABEL_100;
        v44 = (char *)drawData + 216 * cameraRegion;
        if ( (_DWORD)p1_low == firstMtlSortIndex )
        {
          R_EmitDelayedSModelSurfsUpToMaterial((GfxSModelSurfBuildList *)(v44 + 208), 0i64, firstMtlSortIndex);
          v45 = smodelSurfHeader;
          v46.fields = visDataRef.fields;
          R_EmitSingleSModelSurf((GfxSModelSurfBuildList *)(v44 + 352), smodelSurfHeader, visDataRef);
        }
        else
        {
          v45 = smodelSurfHeader;
          v46.fields = visDataRef.fields;
          R_AddDelayedSModelSurf((GfxSModelSurfBuildList *)(v44 + 352), smodelSurfHeader, visDataRef);
        }
        if ( R_UGB_UpdateXSurfDataFromXSurf(v43) )
          break;
        v33 = v54;
LABEL_99:
        packed_high = HIWORD(visDataRef.packed);
LABEL_100:
        v29 = v63;
        v32 = packed_high + 1;
        ++v33;
        *((_WORD *)&visDataRef.fields + 1) = v32;
        v54 = v33;
        if ( v33 == v60 )
          goto LABEL_101;
      }
      if ( (_DWORD)p1_low == firstMtlSortIndex )
      {
        R_EmitDelayedSModelSurfsUpToMaterial((GfxSModelSurfBuildList *)(v44 + 208), 0i64, firstMtlSortIndex);
        R_EmitSingleSModelSurf((GfxSModelSurfBuildList *)(v44 + 280), v45, v46);
      }
      else
      {
        R_AddDelayedSModelSurf((GfxSModelSurfBuildList *)(v44 + 280), v45, v46);
      }
      v33 = v54;
      v35 = v62;
LABEL_98:
      R_AccumulateMaterialRenderTechflags(v35, renderFeatures, origin);
      goto LABEL_99;
    }
LABEL_101:
    v7 = smodelCountMask;
    v47 = SModelMask::operator bool(smodelCountMask);
    model = v64;
    v6 = smodelEmit;
  }
  while ( v47 );
}

/*
==============
R_EmitSModelSurfs_Shadow
==============
*/
void R_EmitSModelSurfs_Shadow(GfxSModelSurfDrawData *drawData, GfxSModelEmitInfo *smodelEmit, SModelMask *smodelCountMask, bool emitNonSubd)
{
  const GfxStaticModel *smodel; 
  const XSurface *surfs; 
  SModelMask *v6; 
  GfxSModelEmitInfo *v7; 
  GfxSModelSurfDrawData *v8; 
  const XModel *model; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 surfIndex; 
  unsigned __int16 numsurfs; 
  unsigned __int16 v16; 
  unsigned int v17; 
  const XModelLodInfo *v18; 
  unsigned __int16 v19; 
  const XModelLodInfo *v20; 
  unsigned __int16 v21; 
  int v22; 
  const XModelLodInfo *v23; 
  unsigned __int16 v24; 
  const XModelLodInfo *v25; 
  unsigned __int16 v26; 
  __int64 v27; 
  unsigned int v28; 
  int v29; 
  unsigned __int16 v30; 
  __int64 v31; 
  GfxStaticModelSurface *v32; 
  Material *v33; 
  __int64 p1_low; 
  unsigned __int16 *v35; 
  const char *name; 
  Material *MaterialAtIndex; 
  const XSurface *v38; 
  GfxSModelSurfVisDataRef v39; 
  GfxSModelSurfDrawData *drawDataa; 
  unsigned __int16 *visDataIndex; 
  __int64 v42; 
  __int64 v43; 
  unsigned __int16 v44[2]; 
  GfxSModelSurfVisDataRef visDataRef; 
  int v46; 
  int v47; 
  GfxSModelSurfHeader smodelSurfHeader; 
  const XSurface *v49; 
  __int64 v50; 
  XModel *v51; 

  smodel = smodelEmit->smodel;
  surfs = NULL;
  v6 = smodelCountMask;
  v7 = smodelEmit;
  v44[0] = 0;
  v8 = drawData;
  model = smodel->model;
  v51 = smodel->model;
  do
  {
    v10 = SModelMask::CountLeadingZeros(v6);
    v11 = (v10 >> 2) & 7;
    v12 = v10;
    v46 = v11;
    v6->m_mask[v10 >> 6] &= ~(0x8000000000000000ui64 >> (v10 & 0x3F));
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 296, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    LodInfo = XModelGetLodInfo(model, v11);
    if ( !LodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 300, ASSERT_TYPE_ASSERT, "(lodInfo)", (const char *)&queryFormat, "lodInfo") )
      __debugbreak();
    if ( LodInfo->numsurfs )
    {
      surfIndex = LodInfo->surfIndex;
      numsurfs = model->numsurfs;
      if ( surfIndex >= numsurfs )
      {
        LODWORD(visDataIndex) = numsurfs;
        LODWORD(drawDataa) = surfIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 303, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
          __debugbreak();
      }
      if ( LodInfo->numsurfs + (unsigned int)LodInfo->surfIndex > model->numsurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 304, ASSERT_TYPE_ASSERT, "(lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs)", (const char *)&queryFormat, "lodInfo->surfIndex + lodInfo->numsurfs <= model->numsurfs") )
        __debugbreak();
      if ( !LodInfo->surfs )
      {
        LODWORD(v42) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 310, ASSERT_TYPE_ASSERT, "(lodInfo->surfs)", "%s\n\tModel missing surfs : %s,%u. Perhaps you need to check XModelIsLodUsable()?", "lodInfo->surfs", model->name, v42) )
          __debugbreak();
      }
      if ( !LodInfo->modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 311, ASSERT_TYPE_ASSERT, "(lodInfo->modelSurfsStaging)", (const char *)&queryFormat, "lodInfo->modelSurfsStaging") )
        __debugbreak();
      v16 = LodInfo->numsurfs;
      surfs = LodInfo->surfs;
    }
    else
    {
      v16 = 0;
    }
    v17 = v16;
    v47 = v16;
    v49 = surfs;
    if ( !surfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1865, ASSERT_TYPE_ASSERT, "(surfs)", (const char *)&queryFormat, "surfs") )
      __debugbreak();
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1866, ASSERT_TYPE_ASSERT, "(surfCount)", (const char *)&queryFormat, "surfCount") )
      __debugbreak();
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 270, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    v18 = XModelGetLodInfo(model, v11);
    v19 = model->numsurfs;
    v20 = v18;
    v21 = v18->surfIndex;
    if ( v21 >= v19 )
    {
      LODWORD(visDataIndex) = v19;
      LODWORD(drawDataa) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 274, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
        __debugbreak();
    }
    v22 = v20->surfIndex + v7->smodel->firstStaticModelSurfaceIndex;
    v23 = XModelGetLodInfo(model, v11);
    v24 = model->numsurfs;
    v25 = v23;
    v26 = v23->surfIndex;
    if ( v26 >= v24 )
    {
      LODWORD(visDataIndex) = v24;
      LODWORD(drawDataa) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
        __debugbreak();
    }
    v27 = (__int64)&model->materialHandles[v25->surfIndex];
    v50 = v27;
    v28 = smodelEmit->smodelCountForSurf[v12];
    smodelEmit->smodelCountForSurf[v12] = 0;
    v29 = R_EmitSModelSurfVisData(surfs, v17, smodelEmit->smodelIndexForSurf[v12], smodelEmit->smodelSubdivLevel[v12], v28, v8, v44);
    if ( v29 )
    {
      if ( v29 != v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1886, ASSERT_TYPE_ASSERT, "(usedCount == smodelCount)", (const char *)&queryFormat, "usedCount == smodelCount") )
        __debugbreak();
      v30 = v22;
      *(_WORD *)&visDataRef.fields = v44[0] >> 2;
      v31 = 0i64;
      *((_WORD *)&visDataRef.fields + 1) = v22;
      do
      {
        v32 = &rgp.world->smodels.surfaces[v30];
        if ( v32->smodelIndex != smodelEmit->smodel - rgp.world->smodels.models )
        {
          LODWORD(v43) = smodelEmit->smodel - rgp.world->smodels.models;
          LODWORD(v42) = v32->smodelIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1897, ASSERT_TYPE_ASSERT, "( smodelSurface->smodelIndex ) == ( smodelEmit->smodel - rgp.world->smodels.models )", "%s == %s\n\t%i, %i", "smodelSurface->smodelIndex", "smodelEmit->smodel - rgp.world->smodels.models", v42, v43) )
            __debugbreak();
        }
        if ( v32->lodIndex != v46 )
        {
          LODWORD(v43) = v46;
          LODWORD(v42) = v32->lodIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1898, ASSERT_TYPE_ASSERT, "( smodelSurface->lodIndex ) == ( lodIndex )", "%s == %s\n\t%i, %i", "smodelSurface->lodIndex", "lodIndex", v42, v43) )
            __debugbreak();
        }
        if ( v32->surfIndex != (_DWORD)v31 )
        {
          LODWORD(v43) = v31;
          LODWORD(v42) = v32->surfIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1899, ASSERT_TYPE_ASSERT, "( smodelSurface->surfIndex ) == ( surfIndex )", "%s == %s\n\t%i, %i", "smodelSurface->surfIndex", "surfIndex", v42, v43) )
            __debugbreak();
        }
        v33 = *(Material **)(v27 + 8 * v31);
        if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
          __debugbreak();
        if ( !v33->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
          __debugbreak();
        if ( !*v33->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
          __debugbreak();
        p1_low = LOWORD(v33->drawSurf.packed.p1);
        if ( (_DWORD)p1_low == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", v33->name) )
          __debugbreak();
        if ( (unsigned int)p1_low >= rgp.materialCount )
        {
          LODWORD(visDataIndex) = rgp.materialCount;
          LODWORD(drawDataa) = p1_low;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
            __debugbreak();
        }
        v35 = &rgp.sortedMaterials[p1_low];
        if ( DB_GetMaterialAtIndex(*v35) != v33 )
        {
          name = v33->name;
          if ( (unsigned int)p1_low >= rgp.materialCount )
          {
            LODWORD(visDataIndex) = rgp.materialCount;
            LODWORD(drawDataa) = p1_low;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", drawDataa, visDataIndex) )
              __debugbreak();
          }
          MaterialAtIndex = DB_GetMaterialAtIndex(*v35);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", MaterialAtIndex->name, name) )
            __debugbreak();
        }
        if ( (v33->surfaceFlags & 0x40000) == 0 )
        {
          if ( !v33->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 743, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
            __debugbreak();
          v38 = &v49[v31];
          if ( R_SurfaceHasSubdivision(v38) )
          {
            v39.fields = visDataRef.fields;
            smodelSurfHeader.packed = 0i64;
            smodelSurfHeader.fields.materialSortedIndex = p1_low;
            R_AddDelayedSModelSurf(&drawData->buildList[0][2], smodelSurfHeader, visDataRef);
            if ( R_UGB_UpdateXSurfDataFromXSurf(v38) )
            {
              if ( v30 != (_DWORD)v31 + v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1963, ASSERT_TYPE_SANITY, "( visDataRef.fields.staticSurfIndex == staticSurfIndex + surfIndex )", (const char *)&queryFormat, "visDataRef.fields.staticSurfIndex == staticSurfIndex + surfIndex") )
                __debugbreak();
              smodelSurfHeader.packed = 0x40000000i64;
              smodelSurfHeader.fields.materialSortedIndex = p1_low;
              R_AddDelayedSModelSurf(&drawData->buildList[0][1], smodelSurfHeader, v39);
            }
          }
          else if ( emitNonSubd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1934, ASSERT_TYPE_ASSERT, "(!emitNonSubd)", (const char *)&queryFormat, "!emitNonSubd") )
          {
            __debugbreak();
          }
        }
        v27 = v50;
        ++v30;
        v31 = (unsigned int)(v31 + 1);
        *((_WORD *)&visDataRef.fields + 1) = v30;
      }
      while ( (_DWORD)v31 != v47 );
      model = v51;
      v8 = drawData;
    }
    v6 = smodelCountMask;
    v7 = smodelEmit;
    surfs = NULL;
  }
  while ( SModelMask::operator bool(smodelCountMask) );
}

/*
==============
R_EmitSingleSModelSurf
==============
*/
void R_EmitSingleSModelSurf(GfxSModelSurfBuildList *buildList, GfxSModelSurfHeader smodelSurfHeader, GfxSModelSurfVisDataRef visDataRef)
{
  unsigned __int8 *surfDataPos; 
  unsigned int visDataRefCount; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 

  surfDataPos = buildList->surfDataPos;
  if ( buildList->lastSurfHeader.packed != smodelSurfHeader.packed || (visDataRefCount = buildList->visDataRefCount, visDataRefCount == 0x10000) )
  {
    R_FinishEmittingPreviousSModelSurf(buildList);
    v9 = buildList->surfDataPos;
    v8 = v9 + 12;
    if ( v9 + 12 > buildList->surfDataEnd )
    {
$abort:
      buildList->lastSurfHeader.packed = -1i64;
      buildList->lastSModelSurf = NULL;
      R_WarnOncePerFrame(R_WARN_SMODEL_SURF_LIMIT);
      buildList->visDataRefCount = 0;
      return;
    }
    surfDataPos = v9 + 8;
    *(_WORD *)v9 = smodelSurfHeader.fields.visDataRefCountLessOne;
    visDataRefCount = 0;
    *(_DWORD *)(v9 + 2) = *(_DWORD *)((char *)&smodelSurfHeader.packed + 2);
    *((_WORD *)v9 + 3) = smodelSurfHeader.fields.materialSortedIndex;
    buildList->lastSurfHeader = smodelSurfHeader;
    buildList->visDataRefCount = 0;
    buildList->lastSModelSurf = (GfxSModelSurf *)v9;
  }
  else
  {
    v8 = surfDataPos + 4;
    if ( surfDataPos + 4 > buildList->surfDataEnd )
    {
      if ( visDataRefCount )
        R_FinishEmittingPreviousSModelSurf(buildList);
      goto $abort;
    }
  }
  buildList->surfDataPos = v8;
  *(GfxSModelSurfVisDataRef *)surfDataPos = visDataRef;
  buildList->visDataRefCount = visDataRefCount + 1;
}

/*
==============
R_FinishEmittingPreviousSModelSurf
==============
*/
void R_FinishEmittingPreviousSModelSurf(GfxSModelSurfBuildList *buildList)
{
  if ( buildList->visDataRefCount )
  {
    if ( !buildList->lastSModelSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1197, ASSERT_TYPE_ASSERT, "(buildList->lastSModelSurf)", (const char *)&queryFormat, "buildList->lastSModelSurf") )
      __debugbreak();
    buildList->lastSModelSurf->header.fields.visDataRefCountLessOne = truncate_cast<unsigned short,unsigned int>(buildList->visDataRefCount - 1);
  }
}

/*
==============
R_FlushSModelSurfBuildList
==============
*/
void R_FlushSModelSurfBuildList(GfxDrawList *drawList, GfxSModelSurfDrawData *drawData, unsigned int cameraRegion)
{
  __int64 v3; 
  GfxSModelSurfList *smodelSurfList; 
  unsigned int *v7; 
  __int64 v8; 
  unsigned __int8 **v9; 
  unsigned int *p_visDataRefCount; 
  __int64 v11; 
  __int64 v12; 

  v3 = cameraRegion;
  if ( !drawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1617, ASSERT_TYPE_ASSERT, "(drawList)", (const char *)&queryFormat, "drawList") )
    __debugbreak();
  if ( !drawData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1618, ASSERT_TYPE_ASSERT, "(drawData)", (const char *)&queryFormat, "drawData") )
    __debugbreak();
  if ( (unsigned int)v3 >= 5 )
  {
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1619, ASSERT_TYPE_ASSERT, "(unsigned)( cameraRegion ) < (unsigned)( CAMERA_REGION_STATIC_COUNT )", "cameraRegion doesn't index CAMERA_REGION_STATIC_COUNT\n\t%i not in [0, %i)", v12, 5) )
      __debugbreak();
  }
  smodelSurfList = drawList->smodelSurfList;
  v7 = drawData->surfDataLimit[v3];
  v8 = 3i64;
  v9 = drawData->surfData[v3];
  p_visDataRefCount = &drawData->buildList[v3][0].visDataRefCount;
  do
  {
    if ( *((_QWORD *)p_visDataRefCount + 2) > *((_QWORD *)p_visDataRefCount + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1625, ASSERT_TYPE_ASSERT, "(buildList->surfDataPos <= buildList->surfDataEnd)", (const char *)&queryFormat, "buildList->surfDataPos <= buildList->surfDataEnd") )
      __debugbreak();
    if ( *p_visDataRefCount )
    {
      if ( !*((_QWORD *)p_visDataRefCount - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1197, ASSERT_TYPE_ASSERT, "(buildList->lastSModelSurf)", (const char *)&queryFormat, "buildList->lastSModelSurf") )
        __debugbreak();
      **((_WORD **)p_visDataRefCount - 1) = truncate_cast<unsigned short,unsigned int>(*p_visDataRefCount - 1);
    }
    smodelSurfList->visData = drawData->visData;
    smodelSurfList->surfData = (const unsigned __int8 *)*((_QWORD *)p_visDataRefCount + 1);
    v11 = *((_QWORD *)p_visDataRefCount + 2) - *((_QWORD *)p_visDataRefCount + 1);
    if ( (unsigned __int64)(v11 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v11, "signed", *((_QWORD *)p_visDataRefCount + 2) - *((_QWORD *)p_visDataRefCount + 1)) )
      __debugbreak();
    smodelSurfList->surfDataBytes = v11;
    if ( *((unsigned __int8 **)p_visDataRefCount + 1) != *v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1634, ASSERT_TYPE_ASSERT, "(buildList->surfDataBegin == drawData->surfData[cameraRegion][smodelSurfType])", (const char *)&queryFormat, "buildList->surfDataBegin == drawData->surfData[cameraRegion][smodelSurfType]") )
      __debugbreak();
    *v9 += smodelSurfList->surfDataBytes;
    p_visDataRefCount += 18;
    *v7 -= smodelSurfList->surfDataBytes;
    ++v9;
    ++v7;
    ++smodelSurfList;
    --v8;
  }
  while ( v8 );
}

/*
==============
R_FlushVisibleSModelCollections
==============
*/
void R_FlushVisibleSModelCollections(SModelCollectionEmit *emitCache, unsigned int *smodelSurfVisData, unsigned int passIndex)
{
  const char *v6; 
  __int64 i; 
  int lodOffset; 
  unsigned int v9; 
  GfxStaticModelExpansion *v10; 
  unsigned __int8 numLods; 
  __int64 v12; 
  unsigned __int8 *p_surfCount; 
  int v14; 
  __int64 v15; 
  int v16; 
  unsigned int v17; 
  unsigned int *v18; 
  char v19; 
  __int64 v20; 
  __int64 v21; 

  if ( emitCache->smodelCollectionArgCount )
  {
    v6 = j_va("R_FlushVisibleSModelCollections");
    Sys_ProfBeginNamedEvent(0xFF008008, v6);
    if ( emitCache->smodelCollectionArgCount > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2447, ASSERT_TYPE_ASSERT, "(emitCache.smodelCollectionArgCount <= 128)", (const char *)&queryFormat, "emitCache.smodelCollectionArgCount <= SMODEL_COLLECTION_ARG_CACHE_SIZE") )
      __debugbreak();
    R_GP_AllocSModelCollections(passIndex, emitCache->smodelCollectionArgCount, emitCache->smodelCollectionArgs);
    for ( i = 0i64; (unsigned int)i < emitCache->smodelCollectionArgCount; i = (unsigned int)(i + 1) )
    {
      lodOffset = emitCache->smodelCollectionArgs[i].lodOffset;
      v9 = lodOffset + emitCache->smodelCollectionArgs[i].lodCount;
      v10 = &rgp.world->smodels.smodelExpansionData[(unsigned __int64)rgp.world->smodels.collections[emitCache->smodelCollectionArgs[i].smodelCollectionIndex].smodelIndex];
      numLods = v10->numLods;
      if ( (unsigned __int8)lodOffset >= numLods )
      {
        LODWORD(v21) = numLods;
        LODWORD(v20) = emitCache->smodelCollectionArgs[i].lodOffset;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2459, ASSERT_TYPE_ASSERT, "(unsigned)( expansionArg.lodOffset ) < (unsigned)( smodelExpansion.numLods )", "expansionArg.lodOffset doesn't index smodelExpansion.numLods\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( v9 - 1 >= v10->numLods )
      {
        LODWORD(v21) = v10->numLods;
        LODWORD(v20) = v9 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2460, ASSERT_TYPE_ASSERT, "(unsigned)( lodEnd - 1 ) < (unsigned)( smodelExpansion.numLods )", "lodEnd - 1 doesn't index smodelExpansion.numLods\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v12 = emitCache->smodelCollectionArgs[i].lodOffset;
      if ( (unsigned int)v12 < v9 )
      {
        p_surfCount = &v10->lodInfo[v12].surfCount;
        v14 = __ROL4__(1, v12);
        v15 = v9 - (unsigned int)v12;
        do
        {
          if ( ((unsigned __int8)v14 & emitCache->smodelCollectionArgs[i].validLodBits) != 0 )
          {
            v16 = v10->firstStaticModelSurfaceIndex + *(p_surfCount - 1);
            if ( *p_surfCount )
            {
              v17 = v10->firstStaticModelSurfaceIndex + *(p_surfCount - 1);
              do
              {
                v18 = &smodelSurfVisData[(unsigned __int64)v17 >> 5];
                v19 = v17++ & 0x1F;
                *v18 |= 0x80000000 >> v19;
              }
              while ( v17 - v16 < *p_surfCount );
            }
          }
          v14 = __ROL4__(v14, 1);
          p_surfCount += 2;
          --v15;
        }
        while ( v15 );
      }
    }
    emitCache->smodelCollectionArgCount = 0;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
R_GenerateReactiveMotionCamera
==============
*/
void R_GenerateReactiveMotionCamera(const void *const cmd)
{
  unsigned int *v1; 
  unsigned int *v2; 
  unsigned int *v3; 
  unsigned int *v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  unsigned int v8; 
  GfxStaticModelCollection *v9; 
  GfxStaticModel *v10; 
  unsigned int v11; 
  unsigned int v12; 
  const XModel *model; 
  unsigned int reactiveMotionIndex; 
  __int64 v15; 
  __int64 v16; 
  unsigned int *v17; 
  unsigned int *v18; 
  unsigned int *v19; 
  unsigned int *v20; 
  unsigned int i; 
  int v22; 

  Profile_Begin(550);
  v1 = rgp.world->dpvs.smodelVisData[0];
  v17 = v1;
  v2 = rgp.world->dpvs.smodelVisData[1];
  v18 = v2;
  v3 = rgp.world->dpvs.smodelVisData[2];
  v19 = v3;
  v4 = rgp.world->dpvs.smodelVisData[3];
  v20 = v4;
  v5 = 0;
  for ( i = 0; v5 < rgp.world->dpvs.smodelVisDataCount; i = v5 )
  {
    v6 = *v3 | *v4 | *v2 | *v1;
    if ( v6 )
    {
      v7 = 32 * v5;
      v22 = 32 * v5;
      do
      {
        v8 = __lzcnt(v6);
        v9 = &rgp.world->smodels.collections[v7 + v8];
        v10 = &rgp.world->smodels.models[v9->smodelIndex];
        if ( (v10->flags & 8) != 0 )
        {
          if ( (v9->flags & 0x20) != 0 )
          {
            R_ReactiveMotion_SetClutterActive(frontEndDataOut->reactiveMotionIndex);
          }
          else
          {
            v11 = 0;
            if ( v9->instanceCount )
            {
              do
              {
                v12 = v11 + v9->firstInstance;
                model = v10->model;
                if ( !v10->model )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 625, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                    __debugbreak();
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                    __debugbreak();
                }
                reactiveMotionIndex = frontEndDataOut->reactiveMotionIndex;
                if ( (model->flags & 0x8000) != 0 )
                  R_ReactiveMotion_DisableParts(reactiveMotionIndex, v12);
                else
                  R_ReactiveMotion_SetupParts(reactiveMotionIndex, v12, v10->model);
                ++v11;
              }
              while ( v11 < v9->instanceCount );
              v7 = v22;
            }
          }
        }
        if ( v8 >= 0x20 )
        {
          LODWORD(v16) = 32;
          LODWORD(v15) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        if ( ((0x80000000 >> v8) & v6) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2138, ASSERT_TYPE_ASSERT, "(combinedCurVisData & bitIdx)", (const char *)&queryFormat, "combinedCurVisData & bitIdx") )
          __debugbreak();
        v6 &= ~(0x80000000 >> v8);
      }
      while ( v6 );
      v5 = i;
      v1 = v17;
      v2 = v18;
      v3 = v19;
      v4 = v20;
    }
    v17 = ++v1;
    v18 = ++v2;
    v19 = ++v3;
    v20 = ++v4;
    ++v5;
  }
  if ( R_ReactiveMotion_AnyActiveModels(frontEndDataOut->reactiveMotionIndex) )
  {
    R_AddReactiveMotionCalcComputeCmd(frontEndDataOut->compute.cmdList);
    R_AddReactiveMotionSimComputeCmd(frontEndDataOut->compute.cmdList);
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_GetSModelCollectionSubdivLodLevel
==============
*/
unsigned __int8 R_GetSModelCollectionSubdivLodLevel(const XModel *model, int lod, const GfxStaticModelCollection *smodelCollection, const Bounds *smodelCollectionBounds)
{
  double Scale; 
  unsigned __int8 ModelSubdivLodLevelWithBounds; 

  if ( !smodelCollection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2032, ASSERT_TYPE_ASSERT, "(smodelCollection)", (const char *)&queryFormat, "smodelCollection") )
    __debugbreak();
  if ( !smodelCollectionBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2033, ASSERT_TYPE_ASSERT, "(smodelCollectionBounds)", (const char *)&queryFormat, "smodelCollectionBounds") )
    __debugbreak();
  if ( !R_ModelLodHasSubdivision(model, lod) )
    return 0;
  if ( smodelCollection->instanceCount == 1 && (~smodelCollection->flags & 0x20) != 0 )
    Scale = R_StaticModelInstance_GetScale(smodelCollection->firstInstance);
  else
    *(float *)&Scale = FLOAT_1_0;
  ModelSubdivLodLevelWithBounds = R_GetModelSubdivLodLevelWithBounds(model, lod, smodelCollectionBounds, *(float *)&Scale);
  if ( !ModelSubdivLodLevelWithBounds )
    ModelSubdivLodLevelWithBounds = 1;
  if ( R_CacheRigidSubdivLod(model, lod) )
    return ModelSubdivLodLevelWithBounds;
  else
    return 0;
}

/*
==============
R_GetStaticModelCollectionLODAndDists
==============
*/
__int64 R_GetStaticModelCollectionLODAndDists(const XModel *model, float baseDist, float lodCullScale, bool isClutter, SModelLodDists *pOutDists)
{
  float v6; 
  float v7; 
  unsigned int DesiredLodForDist; 
  float v9; 

  if ( lodCullScale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 295, ASSERT_TYPE_ASSERT, "(lodCullScale != 0.0f)", (const char *)&queryFormat, "lodCullScale != 0.0f") )
    __debugbreak();
  v6 = rg.correctedLodParms.invFovScale * baseDist;
  v7 = baseDist;
  DesiredLodForDist = XModelGetDesiredLodForDist(model, rg.correctedLodParms.invFovScale * baseDist, (float)(baseDist * rg.correctedLodParms.cappedLodScale) * (float)(1.0 / lodCullScale));
  if ( DesiredLodForDist == 6 && !rg.correctedLodParms.ramp.allowLODOutStatic )
  {
    if ( lodCullScale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 295, ASSERT_TYPE_ASSERT, "(lodCullScale != 0.0f)", (const char *)&queryFormat, "lodCullScale != 0.0f") )
      __debugbreak();
    v9 = baseDist * rg.correctedLodParms.invFovScale;
    if ( XModelGetDesiredLodForDist(model, baseDist * rg.correctedLodParms.invFovScale, (float)(baseDist * rg.correctedLodParms.cappedLodScale) * (float)(1.0 / lodCullScale)) != 6 )
    {
      v6 = v9;
      v7 = baseDist;
      DesiredLodForDist = XModelGetNumLods(model) - 1;
    }
  }
  if ( pOutDists )
  {
    pOutDists->baseDist = baseDist;
    pOutDists->lodDist = v6;
    pOutDists->scaledDist = v7;
  }
  return DesiredLodForDist;
}

/*
==============
R_GetStaticModelCollectionLODMask
==============
*/
__int64 R_GetStaticModelCollectionLODMask(unsigned int viewIndex, unsigned int smodelCollectionIndex, const XModel *model, GfxSModelLodBitsCache *cache, SModelLodDists *pOutDists)
{
  GfxSModelLodBitsCache *v5; 
  unsigned int v7; 
  StaticModelCollectionFlags flags; 
  unsigned int v10; 
  XModelSurfs *modelSurfsStaging; 
  unsigned int StaticModelCollectionLODMaskInternal_StreamTree; 
  unsigned int v13; 
  unsigned int numLods; 
  unsigned int validLodBits; 
  unsigned int v16; 
  const XModelLodInfo *LodInfo; 
  __int64 v19; 
  __int64 v20; 

  v5 = cache;
  v7 = smodelCollectionIndex;
  flags = rgp.world->smodels.collections[smodelCollectionIndex].flags;
  if ( Stream_UseXModelStreamTree() )
  {
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 759, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( !model->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 760, ASSERT_TYPE_ASSERT, "(model->numLods > 0)", (const char *)&queryFormat, "model->numLods > 0") )
      __debugbreak();
    if ( XModelSurfs_IsStreamed(model->lodInfo[0].modelSurfsStaging) )
    {
      if ( (flags & 0x20) == 0 )
      {
        StaticModelCollectionLODMaskInternal_StreamTree = R_GetStaticModelCollectionLODMaskInternal_StreamTree(v7, model, pOutDists);
        goto LABEL_22;
      }
    }
    else
    {
      v10 = 1;
      if ( model->numLods > 1u )
      {
        do
        {
          modelSurfsStaging = model->lodInfo[(unsigned __int64)v10].modelSurfsStaging;
          if ( !modelSurfsStaging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 745, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
            __debugbreak();
          if ( !modelSurfsStaging->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
            __debugbreak();
          if ( (modelSurfsStaging->shared->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 769, ASSERT_TYPE_ASSERT, "(!XModelSurfs_IsStreamed( model->lodInfo[lodIndex].modelSurfsStaging ))", (const char *)&queryFormat, "!XModelSurfs_IsStreamed( model->lodInfo[lodIndex].modelSurfsStaging )") )
            __debugbreak();
          ++v10;
        }
        while ( v10 < model->numLods );
        v5 = cache;
        v7 = smodelCollectionIndex;
      }
    }
  }
  StaticModelCollectionLODMaskInternal_StreamTree = R_GetStaticModelCollectionLODMaskInternal(viewIndex, v7, model, pOutDists);
LABEL_22:
  v13 = StaticModelCollectionLODMaskInternal_StreamTree;
  if ( StaticModelCollectionLODMaskInternal_StreamTree && v5 )
  {
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 553, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( v5->model == model )
    {
      validLodBits = v5->validLodBits;
    }
    else
    {
      LOBYTE(numLods) = model->numLods;
      validLodBits = 0;
      v16 = 0;
      if ( (_BYTE)numLods )
      {
        do
        {
          if ( v16 >= 6 )
          {
            LODWORD(v20) = 6;
            LODWORD(v19) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 561, ASSERT_TYPE_ASSERT, "(unsigned)( lodIndex ) < (unsigned)( NUM_LODS )", "lodIndex doesn't index NUM_LODS\n\t%i not in [0, %i)", v19, v20) )
              __debugbreak();
          }
          LodInfo = XModelGetLodInfo(model, v16);
          if ( LodInfo->surfs && Stream_MeshIsSafeToUse(LodInfo->modelSurfsStaging) )
            validLodBits |= 1 << v16;
          numLods = model->numLods;
          ++v16;
        }
        while ( v16 < numLods );
      }
      if ( ((-1 << numLods) & validLodBits) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 569, ASSERT_TYPE_ASSERT, "(( validLodBits & ~( ( 1 << model->numLods ) - 1 ) ) == 0)", (const char *)&queryFormat, "( validLodBits & ~( ( 1 << model->numLods ) - 1 ) ) == 0") )
        __debugbreak();
      v5->model = model;
      v5->validLodBits = validLodBits;
    }
    v13 &= validLodBits;
  }
  return v13;
}

/*
==============
R_GetStaticModelCollectionLODMaskInternal
==============
*/
__int64 R_GetStaticModelCollectionLODMaskInternal(unsigned int viewIndex, unsigned int smodelCollectionIndex, const XModel *model, SModelLodDists *pOutDists)
{
  __int64 v4; 
  GfxStaticModelCollection *v7; 
  Bounds *v8; 
  bool v9; 
  unsigned int firstInstance; 
  char v11; 
  float StaticModelInstanceLODDistWithBounds; 
  double v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int128 v18; 
  __m128 v22; 
  __m128 v26; 
  __m128 v35; 
  float v40; 
  unsigned int StaticModelCollectionLODAndDists; 
  unsigned int v43; 
  unsigned int BestUsableLod; 
  unsigned int v45; 
  unsigned int NumLods; 
  char v48; 
  unsigned int v49; 
  unsigned int v50; 
  __int128 v51; 
  __m128 v52; 
  __m128 v53; 

  v4 = smodelCollectionIndex;
  v7 = &rgp.world->smodels.collections[smodelCollectionIndex];
  v8 = &rgp.world->smodels.collectionBounds[v4];
  v9 = (v7->flags & 0x20) != 0;
  if ( v7->instanceCount != 1 || (v7->flags & 0x20) != 0 )
  {
    HIDWORD(v51) = 0;
    v18 = v51;
    *(float *)&v18 = rg.correctedLodParms.origin.v[0];
    _XMM4 = v18;
    __asm
    {
      vinsertps xmm4, xmm4, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
      vinsertps xmm4, xmm4, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
    }
    v52 = _XMM4;
    v52.m128_i32[3] = 0;
    v22 = v52;
    v22.m128_f32[0] = v8->midPoint.v[0];
    _XMM3 = v22;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rdi+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rdi+8], 20h ; ' '
    }
    _mm128_sub_ps(_XMM4, _XMM3);
    v53 = _XMM3;
    v53.m128_i32[3] = 0;
    v26 = v53;
    v26.m128_f32[0] = v8->halfSize.v[0];
    _XMM6 = v26;
    _XMM0 = g_negativeZero.v;
    __asm
    {
      vinsertps xmm6, xmm6, dword ptr [rdi+10h], 10h
      vinsertps xmm6, xmm6, dword ptr [rdi+14h], 20h ; ' '
      vandnps xmm5, xmm0, xmm1
    }
    _XMM2 = _mm128_sub_ps(_XMM5, _XMM6);
    __asm { vmaxps  xmm1, xmm2, xmm0 }
    _XMM3 = _mm128_mul_ps(_XMM1, _XMM1);
    __asm { vhaddps xmm0, xmm3, xmm3 }
    v35 = _mm128_add_ps(_XMM6, _XMM5);
    __asm { vhaddps xmm4, xmm0, xmm0 }
    _XMM0 = _mm128_mul_ps(v35, v35);
    __asm
    {
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm1, xmm2, xmm2
    }
    v40 = fsqrt(*(float *)&_XMM1);
    LODWORD(_XMM7) = fsqrt(*(float *)&_XMM4);
    if ( (v7->flags & 0x20) != 0 )
    {
      *(double *)_XMM0.m128_u64 = Stream_GetMinViewDistanceToClutter(viewIndex);
      __asm { vmaxss  xmm7, xmm0, xmm7 }
    }
    StaticModelCollectionLODAndDists = R_GetStaticModelCollectionLODAndDists(model, *(float *)&_XMM7, 1.0, v9, pOutDists);
    v43 = R_GetStaticModelCollectionLODAndDists(model, v40, 1.0, v9, NULL);
    BestUsableLod = XModelGetBestUsableLod(model, StaticModelCollectionLODAndDists, 1);
    v45 = XModelGetBestUsableLod(model, v43, 1);
    v16 = v45;
    v15 = v45;
    if ( v45 < BestUsableLod )
      v16 = BestUsableLod;
    if ( v45 > BestUsableLod )
      v15 = BestUsableLod;
  }
  else
  {
    firstInstance = v7->firstInstance;
    if ( v7->firstInstance >= rgp.world->smodels.instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 415, ASSERT_TYPE_ASSERT, "(unsigned)( singletonInstanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "singletonInstanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", v7->firstInstance, rgp.world->smodels.instanceCount) )
      __debugbreak();
    StaticModelInstanceLODDistWithBounds = R_GetStaticModelInstanceLODDistWithBounds(model, firstInstance, v8, &rg.correctedLodParms.origin);
    v13 = GfxStaticModelLodDistIndexToScale(v11 & 0xF);
    v14 = R_GetStaticModelCollectionLODAndDists(model, StaticModelInstanceLODDistWithBounds, *(float *)&v13, 0, pOutDists);
    v15 = XModelGetBestUsableLod(model, v14, 1);
    v16 = v15;
  }
  if ( v15 == 6 )
  {
    if ( v16 != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 451, ASSERT_TYPE_ASSERT, "(lodFar == XMODEL_LOD_CULLED_OUT)", (const char *)&queryFormat, "lodFar == XMODEL_LOD_CULLED_OUT") )
      __debugbreak();
    return 0i64;
  }
  else
  {
    NumLods = XModelGetNumLods(model);
    v48 = NumLods;
    v49 = NumLods - 1;
    if ( NumLods - 1 > v16 )
      v49 = v16;
    if ( v15 > v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 459, ASSERT_TYPE_ASSERT, "(lodNear <= lodFar)", (const char *)&queryFormat, "lodNear <= lodFar") )
      __debugbreak();
    v50 = ((1 << (v49 - v15 + 1)) - 1) << v15;
    if ( ((-1 << v48) & v50) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 464, ASSERT_TYPE_ASSERT, "(( lodMask & ~( ( 1 << numLods ) - 1 ) ) == 0)", (const char *)&queryFormat, "( lodMask & ~( ( 1 << numLods ) - 1 ) ) == 0") )
      __debugbreak();
    return v50;
  }
}

/*
==============
R_GetStaticModelCollectionLODMaskInternal_StreamTree
==============
*/
__int64 R_GetStaticModelCollectionLODMaskInternal_StreamTree(unsigned int smodelCollectionIndex, const XModel *model, SModelLodDists *pOutDists)
{
  GfxStaticModelCollection *v5; 
  Bounds *collectionBounds; 
  __int64 v7; 
  unsigned int SModelCollectionLodMaskFromXModelStreamTree; 
  __int64 firstInstance; 
  unsigned int v10; 
  unsigned __int8 v11; 
  bool v12; 
  bool v13; 
  __int128 v15; 
  __m128 v19; 
  __m128 v23; 
  __m128 v32; 
  float v37; 
  float v38; 
  float v39; 
  double v40; 
  unsigned int StaticModelCollectionLODAndDists; 
  bool v43; 
  unsigned int NumLods; 
  char v45; 
  unsigned int v46; 
  unsigned int v47; 
  bool IsLodUsable; 
  unsigned __int64 v49; 
  __int128 v50; 
  __m128 v51; 
  __m128 v52; 

  v5 = &rgp.world->smodels.collections[smodelCollectionIndex];
  collectionBounds = rgp.world->smodels.collectionBounds;
  v7 = smodelCollectionIndex;
  SModelCollectionLodMaskFromXModelStreamTree = Stream_GetSModelCollectionLodMaskFromXModelStreamTree(smodelCollectionIndex);
  firstInstance = v5->firstInstance;
  v10 = SModelCollectionLodMaskFromXModelStreamTree;
  if ( (unsigned int)firstInstance >= rgp.world->smodels.instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 482, ASSERT_TYPE_ASSERT, "(unsigned)( firstInstanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "firstInstanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", firstInstance, rgp.world->smodels.instanceCount) )
    __debugbreak();
  v11 = rgp.world->smodels.instanceFlags[firstInstance];
  v12 = (v5->flags & 0x20) != 0;
  v13 = v5->instanceCount > 1 || (v5->flags & 0x20) != 0;
  HIDWORD(v50) = 0;
  v15 = v50;
  *(float *)&v15 = rg.correctedLodParms.origin.v[0];
  _XMM4 = v15;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
    vinsertps xmm4, xmm4, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
  }
  v51 = _XMM4;
  v51.m128_i32[3] = 0;
  v19 = v51;
  v19.m128_f32[0] = collectionBounds[v7].midPoint.v[0];
  _XMM3 = v19;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r13+r15*8+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r13+r15*8+8], 20h ; ' '
  }
  _mm128_sub_ps(_XMM4, _XMM3);
  v52 = _XMM3;
  v52.m128_i32[3] = 0;
  v23 = v52;
  v23.m128_f32[0] = collectionBounds[v7].halfSize.v[0];
  _XMM6 = v23;
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [r13+r15*8+10h], 10h
    vinsertps xmm6, xmm6, dword ptr [r13+r15*8+14h], 20h ; ' '
    vandnps xmm5, xmm0, xmm1
  }
  _XMM2 = _mm128_sub_ps(_XMM5, _XMM6);
  __asm { vmaxps  xmm1, xmm2, xmm0 }
  _XMM3 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm { vhaddps xmm0, xmm3, xmm3 }
  v32 = _mm128_add_ps(_XMM6, _XMM5);
  __asm { vhaddps xmm4, xmm0, xmm0 }
  _XMM0 = _mm128_mul_ps(v32, v32);
  __asm
  {
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm1, xmm2, xmm2
  }
  v37 = fsqrt(*(float *)&_XMM1);
  v38 = fsqrt(*(float *)&_XMM4);
  if ( v13 )
  {
    v39 = FLOAT_1_0;
  }
  else
  {
    v40 = GfxStaticModelLodDistIndexToScale(v11 & 0xF);
    v39 = *(float *)&v40;
  }
  StaticModelCollectionLODAndDists = R_GetStaticModelCollectionLODAndDists(model, v38, v39, v12, pOutDists);
  if ( StaticModelCollectionLODAndDists == 6 )
    return 0i64;
  v43 = v10 == 0;
  NumLods = XModelGetNumLods(model);
  v45 = NumLods;
  v46 = NumLods - 1;
  if ( v10 )
  {
    if ( v13 )
    {
      v47 = R_GetStaticModelCollectionLODAndDists(model, v37, v39, v12, NULL);
      if ( StaticModelCollectionLODAndDists > v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 514, ASSERT_TYPE_ASSERT, "(desiredLodNear <= desiredLodFar)", (const char *)&queryFormat, "desiredLodNear <= desiredLodFar") )
        __debugbreak();
      if ( StaticModelCollectionLODAndDists > v46 || v47 < v46 )
        goto LABEL_26;
      goto LABEL_23;
    }
    v43 = StaticModelCollectionLODAndDists == v46;
  }
  if ( v43 )
  {
LABEL_23:
    IsLodUsable = XModelIsLodUsable(model, v46);
    v49 = (unsigned __int64)v46 << 6;
    if ( IsLodUsable )
    {
      v10 |= 1 << v46;
      Stream_UsedMesh(*(const XModelSurfs **)((char *)&model->lodInfo[0].modelSurfsStaging + v49));
    }
    else
    {
      Stream_RequestMesh(*(const XModelSurfs **)((char *)&model->lodInfo[0].modelSurfsStaging + v49));
    }
  }
LABEL_26:
  if ( ((-1 << v45) & v10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 536, ASSERT_TYPE_ASSERT, "(( lodMask & ~( ( 1 << numLods ) - 1 ) ) == 0)", (const char *)&queryFormat, "( lodMask & ~( ( 1 << numLods ) - 1 ) ) == 0") )
    __debugbreak();
  return v10;
}

/*
==============
R_GetStaticModelCollectionNearestLOD
==============
*/
unsigned int R_GetStaticModelCollectionNearestLOD(unsigned int viewIndex, unsigned int smodelCollectionIndex, const XModel *model)
{
  unsigned int result; 

  _EAX = R_GetStaticModelCollectionLODMask(viewIndex, smodelCollectionIndex, model, NULL, NULL);
  __asm { tzcnt   eax, eax }
  return result;
}

/*
==============
R_GetStaticModelInstanceLODDistWithBounds
==============
*/
float R_GetStaticModelInstanceLODDistWithBounds(const XModel *model, unsigned int smodelInstanceIndex, const Bounds *instanceBounds, const vec3_t *lodOrigin)
{
  __int128 v5; 
  __m128 v9; 
  __m128 v13; 
  __int128 v24; 
  __m128 v25; 
  __m128 v26; 

  HIDWORD(v24) = 0;
  v5 = v24;
  *(float *)&v5 = lodOrigin->v[0];
  _XMM5 = v5;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [r9+4], 10h
    vinsertps xmm5, xmm5, dword ptr [r9+8], 20h ; ' '
  }
  v25 = _XMM5;
  v25.m128_i32[3] = 0;
  v9 = v25;
  v9.m128_f32[0] = instanceBounds->midPoint.v[0];
  _XMM4 = v9;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [r8+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r8+8], 20h ; ' '
  }
  v26 = _XMM4;
  _mm128_sub_ps(_XMM5, _XMM4);
  v26.m128_i32[3] = 0;
  v13 = v26;
  v13.m128_f32[0] = instanceBounds->halfSize.v[0];
  _XMM3 = v13;
  __asm { vinsertps xmm3, xmm3, dword ptr [r8+10h], 10h }
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r8+14h], 20h ; ' '
    vandnps xmm2, xmm0, xmm1
  }
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  return fsqrt(*(float *)&_XMM1);
}

/*
==============
R_InitSModelSurfBuildLists
==============
*/
GfxSModelSurfDelaySort *R_InitSModelSurfBuildLists(GfxSModelSurfDrawData *drawData, unsigned int cameraRegion, GfxSModelSurfDelaySort *delaySurfList, unsigned int delaySurfLimit)
{
  unsigned int v5; 
  __int64 v7; 
  unsigned int *v9; 
  unsigned __int8 **v10; 
  unsigned int *p_visDataRefCount; 
  __int64 v12; 
  __int64 v13; 
  __int64 v15; 
  __int64 v16; 

  v5 = 0;
  v7 = 16i64 * delaySurfLimit;
  v9 = drawData->surfDataLimit[cameraRegion];
  v10 = drawData->surfData[cameraRegion];
  p_visDataRefCount = &drawData->buildList[cameraRegion][0].visDataRefCount;
  do
  {
    if ( cameraRegion >= 5 )
    {
      LODWORD(v16) = 5;
      LODWORD(v15) = cameraRegion;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1584, ASSERT_TYPE_ASSERT, "(unsigned)( cameraRegion ) < (unsigned)( CAMERA_REGION_STATIC_COUNT )", "cameraRegion doesn't index CAMERA_REGION_STATIC_COUNT\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    *((_QWORD *)p_visDataRefCount - 2) = -1i64;
    ++v5;
    *((_QWORD *)p_visDataRefCount - 1) = 0i64;
    *p_visDataRefCount = 0;
    v12 = (__int64)*v10++;
    *((_QWORD *)p_visDataRefCount + 1) = v12;
    *((_QWORD *)p_visDataRefCount + 2) = v12;
    v13 = *v9++;
    *((_QWORD *)p_visDataRefCount + 5) = delaySurfList;
    *((_QWORD *)p_visDataRefCount + 3) = v12 + v13;
    *((_QWORD *)p_visDataRefCount + 4) = -1i64;
    p_visDataRefCount[12] = 0;
    delaySurfList = (GfxSModelSurfDelaySort *)((char *)delaySurfList + v7);
    p_visDataRefCount[13] = delaySurfLimit;
    p_visDataRefCount += 18;
  }
  while ( v5 < 3 );
  return delaySurfList;
}

/*
==============
R_InitSModelSurfDrawData
==============
*/
void R_InitSModelSurfDrawData(GfxSModelSurfDrawData *drawData, unsigned int visDataLimit, const unsigned int (*surfDataLimit)[5])
{
  GfxBackEndData *v6; 
  int v7; 
  unsigned __int8 *(*surfData)[3]; 
  int v9; 
  int v10; 
  unsigned int (*v11)[3]; 
  unsigned __int8 *(*v12)[3]; 
  unsigned int (*v13)[3]; 
  __int64 v14; 
  unsigned int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  bool v20; 
  __int64 v21; 
  unsigned int (*v22)[3]; 
  unsigned __int8 *(*v23)[3]; 

  drawData->shadowCasterMaterialIndex = Material_GetSortedIndex(rgp.smodelStandardShadowMaterial);
  drawData->splinedShadowCasterMaterialIndex = Material_GetSortedIndex(rgp.splinedSModelShadowMaterial);
  v6 = frontEndDataOut;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1553, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (((_BYTE)v6 - 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v6->smodelSurfVisDataUsed) )
    __debugbreak();
  v7 = _InterlockedExchangeAdd(&v6->smodelSurfVisDataUsed, visDataLimit);
  surfData = drawData->surfData;
  drawData->visDataUsed = 0;
  v23 = drawData->surfData;
  v21 = 3i64;
  drawData->visData = &v6->smodelSurfVisData[v7];
  v9 = 270336;
  v10 = 270336;
  if ( (int)(v7 + visDataLimit) < 270336 )
    v10 = v7 + visDataLimit;
  v11 = drawData->surfDataLimit;
  if ( v7 < 270336 )
    v9 = v7;
  v22 = drawData->surfDataLimit;
  drawData->visDataLimit = v10 - v9;
  do
  {
    v12 = surfData;
    v13 = v11;
    v14 = 5i64;
    do
    {
      v15 = (*surfDataLimit)[0];
      if ( (*surfDataLimit)[0] )
      {
        if ( (((_BYTE)v6 - 20) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v6->smodelSurfDataUsed) )
          __debugbreak();
        v16 = _InterlockedExchangeAdd(&v6->smodelSurfDataUsed, v15);
        v17 = 124928;
        v18 = 124928;
        (*v12)[0] = &v6->smodelSurfData[v16];
        if ( (signed int)(v16 + (*surfDataLimit)[0]) < 124928 )
          v17 = v16 + (*surfDataLimit)[0];
        if ( v16 < 124928 )
          v18 = v16;
        v19 = v17 - v18;
      }
      else
      {
        (*v12)[0] = NULL;
        v19 = 0;
      }
      *(_DWORD *)v13 = v19;
      surfDataLimit = (const unsigned int (*)[5])((char *)surfDataLimit + 4);
      ++v13;
      ++v12;
      --v14;
    }
    while ( v14 );
    v11 = (unsigned int (*)[3])((char *)v22 + 4);
    surfData = (unsigned __int8 *(*)[3])((char *)v23 + 8);
    v22 = (unsigned int (*)[3])((char *)v22 + 4);
    v20 = v21-- == 1;
    v23 = (unsigned __int8 *(*)[3])((char *)v23 + 8);
  }
  while ( !v20 );
}

/*
==============
R_ProcessSModelCollections
==============
*/
void R_ProcessSModelCollections(const void *const cmd)
{
  unsigned int *v1; 
  const GfxViewInfo *v2; 
  const char *v3; 
  __int64 v4; 
  GfxStaticModelCollection *v5; 
  const GfxStaticModel *v6; 
  float v7; 
  bool v8; 
  unsigned int instanceCount; 
  bool isSingleInstanceCollection; 
  unsigned int v11; 
  bool isClutter; 
  unsigned int v13; 
  char v14; 
  char v15; 
  int i; 
  GfxViewInfo *viewInfo; 
  unsigned int smodelCollectionIndex; 
  int lod; 
  MaterialLodSettings materialLodSettings; 

  v1 = (unsigned int *)cmd;
  R_SetMaterialLodSettings(&materialLodSettings);
  v2 = (const GfxViewInfo *)*((_QWORD *)v1 + 448);
  viewInfo = (GfxViewInfo *)v2;
  if ( CG_DrawHits_AnyActive(v2->clientIndex) || r_showCullSModels->current.enabled && !r_showCull->current.integer || r_showTriCounts->current.enabled || r_showVertCounts->current.enabled || r_showSurfCounts->current.enabled || Dvar_GetInt_Internal_DebugName(DVARINT_cg_drawFPS, "cg_drawFPS") >= 3 || r_showModelNames->current.enabled || r_showModelLODs->current.integer || r_showModelLODOutDist->current.enabled || r_staticModelDumpLodInfo->current.enabled || (v14 = 0, r_showXModelRanking->current.enabled) )
    v14 = 1;
  v3 = j_va("Process SModel Collections: %d", v1[899]);
  Sys_ProfBeginNamedEvent(0xFFE9967A, v3);
  v4 = 0i64;
  for ( i = 0; (unsigned int)v4 < v1[899]; i = v4 )
  {
    smodelCollectionIndex = *((unsigned __int16 *)v1 + v4);
    v5 = &rgp.world->smodels.collections[*((unsigned __int16 *)v1 + v4)];
    v6 = &rgp.world->smodels.models[v5->smodelIndex];
    if ( (v5->flags & 0x20) == 0 )
    {
      v7 = *(float *)&v1[v4 + 384];
      lod = v1[v4 + 640];
      if ( !rg.useLightGridVolumes || (v15 = 1, !R_IsStaticModelProbeLit(v6)) )
        v15 = 0;
      v8 = R_LGV_DrawProbes_Enabled(v2) || r_lgvDebugSmodelId->current.integer > 0 || r_lgvDrawVolumes->current.integer;
      instanceCount = v5->instanceCount;
      isSingleInstanceCollection = instanceCount == 1;
      v11 = 0;
      isClutter = (v5->flags & 0x20) != 0;
      if ( instanceCount )
      {
        do
        {
          if ( v14 )
            R_StaticModelInstanceDebugAids(viewInfo, v11 + v5->firstInstance, smodelCollectionIndex, v6, lod, v7, isClutter, isSingleInstanceCollection);
          instanceCount = v5->instanceCount;
          ++v11;
        }
        while ( v11 < instanceCount );
        v1 = (unsigned int *)cmd;
        LODWORD(v4) = i;
      }
      if ( v15 )
      {
        v13 = 0;
        if ( instanceCount )
        {
          do
          {
            if ( v8 )
              R_LGV_DebugMarkStaticLGVVisible(v1[898], v13 + v5->firstInstance);
            ++v13;
          }
          while ( v13 < v5->instanceCount );
        }
      }
      v2 = viewInfo;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
R_ProcessSModelSurfVisBits_Camera
==============
*/
void R_ProcessSModelSurfVisBits_Camera(const unsigned int *smodelSurfVisData, GfxSModelSurfDrawData *drawData, GfxViewMaterialRenderFeatures *renderFeatures)
{
  GfxSModelSurfMatIndirection *smodelSurfMatIndirection; 
  __int64 surfaceCount; 
  __int64 materialCount; 
  __int64 index; 
  unsigned __int64 smodelMaterialIndex; 
  unsigned __int8 emitType; 
  Material **v10; 
  unsigned int v11; 
  unsigned int *v12; 
  __int64 v13; 
  unsigned __int16 v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  const char **p_name; 
  __int64 v21; 
  char *v22; 
  const char *v23; 
  Material *MaterialAtIndex; 
  __int16 v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int16 v32; 
  unsigned int validBatchCount; 
  __int16 v34; 
  unsigned int v35; 
  Material **materials; 
  BitArrayIterator iter; 
  GfxViewMaterialRenderFeatures *renderFeaturesa; 
  GfxSModelSurfDrawData *v39; 
  vec3_t origin; 
  int v41[512]; 

  renderFeaturesa = renderFeatures;
  v39 = drawData;
  smodelSurfMatIndirection = rgp.world->smodels.smodelSurfMatIndirection;
  surfaceCount = rgp.world->smodels.surfaceCount;
  materialCount = rgp.world->smodels.materialCount;
  materials = rgp.world->smodels.materials;
  memset_0(v41, 0, sizeof(v41));
  iter.bitArray = smodelSurfVisData;
  iter.wordIndex = 0;
  iter.wordCount = (unsigned __int64)(surfaceCount + 31) >> 5;
  iter.bits = 0;
  if ( iter.wordCount )
    iter.bits = *smodelSurfVisData;
  while ( BitArrayIterator::Advance(&iter) )
  {
    index = iter.index;
    smodelMaterialIndex = smodelSurfMatIndirection[iter.index].smodelMaterialIndex;
    if ( iter.index >= (unsigned int)surfaceCount )
    {
      LODWORD(v29) = surfaceCount;
      LODWORD(v28) = iter.index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2575, ASSERT_TYPE_ASSERT, "(unsigned)( smodelSurfIndex ) < (unsigned)( smodelSurfCount )", "smodelSurfIndex doesn't index smodelSurfCount\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    if ( (unsigned int)smodelMaterialIndex >= rgp.world->smodels.materialCount )
    {
      LODWORD(v29) = rgp.world->smodels.materialCount;
      LODWORD(v28) = smodelMaterialIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2576, ASSERT_TYPE_ASSERT, "(unsigned)( smodelMaterialIndex ) < (unsigned)( rgp.world->smodels.materialCount )", "smodelMaterialIndex doesn't index rgp.world->smodels.materialCount\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
    emitType = smodelSurfMatIndirection[index].emitType;
    if ( (emitType & 1) != 0 && (!rg.subdiv || (emitType & 8) != 0) && (rg.distortion || (emitType & 4) != 0) )
      v41[smodelMaterialIndex >> 5] |= 0x80000000 >> (smodelMaterialIndex & 0x1F);
  }
  v10 = materials;
  v11 = 0;
  if ( (unsigned int)(materialCount + 31) >> 5 )
  {
    v12 = (unsigned int *)v41;
    v13 = (unsigned int)(materialCount + 31) >> 5;
    do
    {
      v11 += __popcnt(*v12++);
      --v13;
    }
    while ( v13 );
    if ( v11 )
    {
      validBatchCount = 0;
      v14 = R_AllocGPUBatchIndexesSModel(0, SCENE_VIEW_CAMERA, v11, &validBatchCount);
      v32 = v14;
      if ( v14 != 0x4000 )
      {
        if ( validBatchCount )
        {
          v15 = (unsigned __int64)(materialCount + 31) >> 5;
          iter.bitArray = (const unsigned int *)v41;
          v16 = 0;
          v35 = 0;
          if ( (_DWORD)v15 )
            v16 = v41[0];
          v17 = 0;
          iter.bits = v16;
          iter.wordCount = v15;
          iter.wordIndex = 0;
          while ( BitArrayIterator::Advance(&iter) )
          {
            v18 = iter.index;
            v19 = v17 + v14;
            if ( v19 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v17 + v14), "unsigned", v19) )
              __debugbreak();
            R_GP_MapSModelMaterialToBatch(0, 0, (unsigned __int16)(v17 + v14), v18);
            p_name = &v10[v18]->name;
            if ( !p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
              __debugbreak();
            if ( !*p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
              __debugbreak();
            if ( !**p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
              __debugbreak();
            origin.v[0] = 0.0;
            origin.v[1] = 0.0;
            origin.v[2] = 0.0;
            R_AccumulateMaterialRenderTechflags((const Material *)p_name, renderFeaturesa, &origin);
            v21 = *((unsigned __int16 *)p_name + 24);
            v22 = (char *)v39 + 216 * *((unsigned __int8 *)p_name + 24);
            if ( (_DWORD)v21 == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", *p_name) )
              __debugbreak();
            if ( (unsigned int)v21 >= rgp.materialCount )
            {
              LODWORD(v29) = rgp.materialCount;
              LODWORD(v28) = v21;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v28, v29) )
                __debugbreak();
            }
            if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[v21]) != (Material *)p_name )
            {
              v23 = *p_name;
              if ( (unsigned int)v21 >= rgp.materialCount )
              {
                LODWORD(v29) = rgp.materialCount;
                LODWORD(v28) = v21;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v28, v29) )
                  __debugbreak();
              }
              MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[v21]);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", MaterialAtIndex->name, v23) )
                __debugbreak();
              v17 = v35;
            }
            v25 = ((unsigned __int8)v34 ^ (*((_DWORD *)p_name + 3) >> 27)) & 1 ^ v34;
            v26 = *((_QWORD *)v22 + 30);
            v34 = v25;
            if ( (unsigned __int64)(v26 + 12) > *((_QWORD *)v22 + 31) )
            {
              R_WarnOncePerFrame(R_WARN_SMODEL_SURF_LIMIT);
              return;
            }
            v14 = v32;
            *(_WORD *)v26 = 0;
            ++v17;
            *(_DWORD *)(v26 + 8) = 0;
            *(_WORD *)(v26 + 2) = v19;
            *(_WORD *)(v26 + 4) = v25;
            *(_WORD *)(v26 + 6) = v21;
            *((_QWORD *)v22 + 30) = v26 + 12;
            v27 = validBatchCount;
            v10 = materials;
            v35 = v17;
            if ( validBatchCount != v11 && v17 >= validBatchCount )
              goto LABEL_57;
          }
          v27 = validBatchCount;
LABEL_57:
          if ( v27 == v11 && v17 != v11 )
          {
            LODWORD(v31) = v11;
            LODWORD(v30) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2667, ASSERT_TYPE_ASSERT, "( batchEmitCount ) == ( batchCount )", "%s == %s\n\t%u, %u", "batchEmitCount", "batchCount", v30, v31) )
              __debugbreak();
          }
        }
      }
    }
  }
}

/*
==============
R_ProcessSModelSurfVisBits_Shadow
==============
*/
void R_ProcessSModelSurfVisBits_Shadow(const unsigned int *smodelSurfVisData, GfxSModelSurfDrawData *drawData, unsigned int sceneViewType)
{
  unsigned int materialCount; 
  GfxStaticModelSurface *surfaces; 
  __int64 surfaceCount; 
  GfxSModelSurfMatIndirection *smodelSurfMatIndirection; 
  __int64 index; 
  unsigned __int64 smodelMaterialIndex; 
  const GfxStaticModelSurface *v10; 
  unsigned __int8 emitType; 
  unsigned int v12; 
  unsigned int v13; 
  char v14; 
  char v15; 
  Material *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned __int16 v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  Material **v25; 
  Material *v26; 
  unsigned int v27; 
  bool v28; 
  unsigned __int16 splinedShadowCasterMaterialIndex; 
  bool v30; 
  unsigned int SortedIndex; 
  GfxSModelSurfDrawData *v32; 
  unsigned __int8 *surfDataPos; 
  unsigned __int8 *v34; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned __int16 v40; 
  __int16 v41; 
  unsigned int validBatchCount; 
  unsigned __int64 v43; 
  GfxSceneViewType sceneViewTypea; 
  GfxSModelSurfDrawData *v45; 
  Material **materials; 
  BitArrayIterator iter; 
  BitArrayIterator v48; 
  BitArrayIterator v49; 
  int v50[512]; 
  unsigned int localResidentBits[2048]; 

  sceneViewTypea = sceneViewType;
  v45 = drawData;
  materialCount = rgp.world->smodels.materialCount;
  surfaces = rgp.world->smodels.surfaces;
  surfaceCount = rgp.world->smodels.surfaceCount;
  smodelSurfMatIndirection = rgp.world->smodels.smodelSurfMatIndirection;
  materials = rgp.world->smodels.materials;
  LODWORD(v43) = materialCount;
  memset_0(v50, 0, sizeof(v50));
  memset_0(localResidentBits, 0, sizeof(localResidentBits));
  iter.wordCount = (unsigned __int64)(surfaceCount + 31) >> 5;
  iter.wordIndex = 0;
  iter.bitArray = smodelSurfVisData;
  iter.bits = 0;
  if ( iter.wordCount )
    iter.bits = *smodelSurfVisData;
  while ( BitArrayIterator::Advance(&iter) )
  {
    index = iter.index;
    smodelMaterialIndex = smodelSurfMatIndirection[iter.index].smodelMaterialIndex;
    v10 = &surfaces[iter.index];
    if ( (unsigned int)smodelMaterialIndex >= rgp.world->smodels.materialCount )
    {
      LODWORD(v37) = rgp.world->smodels.materialCount;
      LODWORD(v36) = smodelSurfMatIndirection[iter.index].smodelMaterialIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2706, ASSERT_TYPE_ASSERT, "(unsigned)( smodelMaterialIndex ) < (unsigned)( rgp.world->smodels.materialCount )", "smodelMaterialIndex doesn't index rgp.world->smodels.materialCount\n\t%i not in [0, %i)", v36, v37) )
        __debugbreak();
    }
    emitType = smodelSurfMatIndirection[index].emitType;
    if ( (emitType & 2) != 0 && (!rg.subdiv || (emitType & 8) != 0) && R_UGB_UpdateXSurfDataFromSModelSurf(index, v10, localResidentBits) )
      v50[smodelMaterialIndex >> 5] |= 0x80000000 >> (smodelMaterialIndex & 0x1F);
  }
  R_UGB_UpdateXSurfsResidency(localResidentBits);
  v48.bitArray = (const unsigned int *)v50;
  v12 = 0;
  v13 = 0;
  v43 = ((unsigned __int64)(unsigned int)v43 + 31) >> 5;
  v14 = 0;
  v48.wordCount = v43;
  v15 = 0;
  v48.wordIndex = 0;
  if ( (_DWORD)v43 )
    v12 = v50[0];
  v48.bits = v12;
  while ( BitArrayIterator::Advance(&v48) )
  {
    v16 = materials[v48.index];
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
      __debugbreak();
    if ( !v16->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
      __debugbreak();
    if ( !*v16->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
      __debugbreak();
    if ( (v16->surfaceFlags & 0x40000) == 0 )
    {
      if ( !v16->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 743, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
        __debugbreak();
      if ( (v16->techniqueSet->flags & 0x1000) != 0 )
      {
        if ( (v16->materialType & 0xA0000) == 655360 )
          v15 = 1;
        else
          v14 = 1;
      }
      else
      {
        ++v13;
      }
    }
  }
  v17 = v43;
  v18 = v13 + 1;
  if ( !v14 )
    v18 = v13;
  v19 = v18 + 1;
  if ( !v15 )
    v19 = v18;
  if ( v19 )
  {
    validBatchCount = 0;
    v40 = R_AllocGPUBatchIndexesSModel(1u, sceneViewTypea, v19, &validBatchCount);
    v20 = v40;
    if ( v40 != 0x4000 )
    {
      if ( validBatchCount )
      {
        LOWORD(v43) = 0x4000;
        v49.bitArray = (const unsigned int *)v50;
        v21 = 0;
        v41 = 0x4000;
        if ( v17 )
          v21 = v50[0];
        v22 = 0;
        v49.bits = v21;
        v49.wordCount = v17;
        v49.wordIndex = 0;
        while ( BitArrayIterator::Advance(&v49) )
        {
          v23 = v49.index;
          v24 = v22 + v20;
          v25 = &materials[v49.index];
          if ( v24 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v22 + v20), "unsigned", v24) )
            __debugbreak();
          v26 = *v25;
          if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
            __debugbreak();
          if ( !v26->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
            __debugbreak();
          if ( !*v26->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
            __debugbreak();
          if ( (v26->surfaceFlags & 0x40000) == 0 )
          {
            v27 = v22 + 1;
            v28 = 0;
            if ( Material_IsStandardShadowcaster(v26) )
            {
              if ( (v26->materialType & 0xA0000) == 655360 )
              {
                splinedShadowCasterMaterialIndex = v45->splinedShadowCasterMaterialIndex;
                if ( v41 != 0x4000 )
                  LOWORD(v24) = v41;
                v28 = v41 != 0x4000;
                if ( v41 != 0x4000 )
                  v27 = v22;
                v41 = v24;
              }
              else
              {
                v30 = (_WORD)v43 == 0x4000;
                splinedShadowCasterMaterialIndex = v45->shadowCasterMaterialIndex;
                if ( (_WORD)v43 != 0x4000 )
                  LOWORD(v24) = v43;
                v28 = (_WORD)v43 != 0x4000;
                LOWORD(v43) = v24;
                if ( !v30 )
                  v27 = v22;
              }
            }
            else
            {
              SortedIndex = Material_GetSortedIndex(v26);
              splinedShadowCasterMaterialIndex = truncate_cast<unsigned short,unsigned int>(SortedIndex);
            }
            v22 = v27;
            if ( (_WORD)v24 == 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2854, ASSERT_TYPE_ASSERT, "(gpBatchIndex != ( 16384 ))", (const char *)&queryFormat, "gpBatchIndex != INVALID_GPU_BATCH_INDEX") )
              __debugbreak();
            R_GP_MapSModelMaterialToBatch(1u, sceneViewTypea, (unsigned __int16)v24, v23);
            v20 = v40;
            if ( !v28 )
            {
              v32 = v45;
              surfDataPos = v45->buildList[0][0].surfDataPos;
              v34 = surfDataPos + 12;
              if ( surfDataPos + 12 > v45->buildList[0][0].surfDataEnd )
              {
                R_WarnOncePerFrame(R_WARN_SMODEL_SURF_LIMIT);
                return;
              }
              *((_WORD *)surfDataPos + 2) = v43;
              *(_WORD *)surfDataPos = 0;
              *((_DWORD *)surfDataPos + 2) = 0;
              *((_WORD *)surfDataPos + 1) = v24;
              *((_WORD *)surfDataPos + 3) = splinedShadowCasterMaterialIndex;
              v35 = validBatchCount;
              v32->buildList[0][0].surfDataPos = v34;
              if ( v35 != v19 && v22 >= v35 )
                goto LABEL_81;
            }
          }
        }
        v35 = validBatchCount;
LABEL_81:
        if ( v35 == v19 && v22 != v19 )
        {
          LODWORD(v39) = v19;
          LODWORD(v38) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 2899, ASSERT_TYPE_ASSERT, "( batchEmitCount ) == ( batchCount )", "%s == %s\n\t%u, %u", "batchEmitCount", "batchCount", v38, v39) )
            __debugbreak();
        }
      }
    }
  }
}

/*
==============
R_ProcessSunShadowCacheEntrySmodelLodChanges
==============
*/
void R_ProcessSunShadowCacheEntrySmodelLodChanges(const GfxViewInfo *viewInfo, unsigned int partitionIndex, unsigned int cellIdx)
{
  __int64 v4; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  int v6; 
  __int64 v7; 
  const GfxSunShadowPartitionCache *v8; 
  GfxStaticModelCollection *collections; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int SmodelId; 
  int v14; 
  int v15; 
  GfxCachedSunShadow_Smodel *Smodel; 
  float v17; 
  GfxCachedSunShadow_Smodel *v18; 
  const XModel *const *p_model; 
  unsigned int DesiredLodForDist; 
  unsigned int UsableLodForDist; 
  __int16 v22; 
  __int16 v23; 
  int v24; 
  GfxStaticModelCollection *v25; 
  const GfxSunShadowPartitionCache *v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int lastId; 
  GfxStaticModel *models; 

  v4 = cellIdx;
  if ( (frontEndDataOut->sunShadow.firstCachedSunShadowPartition > partitionIndex || partitionIndex > frontEndDataOut->sunShadow.lastCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3721, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( &frontEndDataOut->sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( &frontEndDataOut->sunShadow, partitionIndex )") )
    __debugbreak();
  SunShadowPartitionCache = R_GetSunShadowPartitionCache(&frontEndDataOut->sunShadow, partitionIndex);
  v6 = 0;
  v7 = 864 * v4;
  v8 = SunShadowPartitionCache;
  v26 = SunShadowPartitionCache;
  collections = rgp.world->smodels.collections;
  v10 = 0i64;
  v27 = v7;
  v25 = collections;
  v11 = *(__int64 *)((char *)&SunShadowPartitionCache->gfxCachedSunShadowOverlap[0].staticEntry + v7);
  v12 = *(__int64 *)((char *)&SunShadowPartitionCache->gfxCachedSunShadowOverlap[0].bspEntry + v7);
  v28 = v12;
  models = rgp.world->smodels.models;
  if ( *(_BYTE *)(v11 + 4) )
  {
    *(unsigned __int64 *)((char *)&SunShadowPartitionCache->gfxCachedSunShadowOverlap[0].updateExtentsMask + v7) = 0i64;
  }
  else
  {
    SmodelId = *(_DWORD *)(v11 + 520);
    lastId = *(_DWORD *)(v11 + 524);
    v14 = 0;
    if ( SmodelId != -1 )
    {
      v15 = 0;
      do
      {
        ++v15;
        Smodel = R_SunShadowCache_GetSmodel(SmodelId);
        v17 = *(float *)(v11 + 40);
        v18 = Smodel;
        p_model = (const XModel *const *)&models[collections[Smodel->smodelIndex].smodelIndex].model;
        DesiredLodForDist = XModelGetDesiredLodForDist(*p_model, v17, 0.0);
        UsableLodForDist = XModelGetUsableLodForDist(*p_model, v17, 0.0);
        v22 = *((_WORD *)v18 + 5);
        if ( r_cachedSunShadowForceInvalidSModel->current.enabled )
        {
          v10 |= v18->extentsMask;
          v23 = UsableLodForDist & 7 | v22 & 0xFFE8 | 8;
        }
        else if ( UsableLodForDist >= (v22 & 7u) || UsableLodForDist > DesiredLodForDist || (v22 & 0x10) != 0 )
        {
          v23 = v22 & 0xFFF7;
        }
        else
        {
          v10 |= v18->extentsMask;
          if ( UsableLodForDist >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3782, ASSERT_TYPE_ASSERT, "(highestAvailableLod < ( 1 << GfxCachedSunShadow_Smodel::LOD_BITS ))", (const char *)&queryFormat, "highestAvailableLod < ( 1 << GfxCachedSunShadow_Smodel::LOD_BITS )") )
            __debugbreak();
          v23 = UsableLodForDist & 7 | *((_WORD *)v18 + 5) & 0xFFF8 | 0x18;
        }
        *((_WORD *)v18 + 5) = v23;
        v24 = v6 + 1;
        if ( (v23 & 0x10) == 0 )
          v24 = v6;
        collections = v25;
        SmodelId = R_SunShadowCache_NextSmodelId(SmodelId, lastId);
        v6 = v24;
      }
      while ( SmodelId != -1 );
      v7 = v27;
      v12 = v28;
      v14 = v15;
      v8 = v26;
    }
    *(_BYTE *)(v11 + 4) = v6 == v14;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3797, ASSERT_TYPE_ASSERT, "(bspEntry)", (const char *)&queryFormat, "bspEntry") )
      __debugbreak();
    *(_BYTE *)(v12 + 1) = *(_BYTE *)(v11 + 4);
    *(unsigned __int64 *)((char *)&v8->gfxCachedSunShadowOverlap[0].updateExtentsMask + v7) = v10;
  }
}

/*
==============
R_ProcessSunShadowCacheEntryVisibility
==============
*/
void R_ProcessSunShadowCacheEntryVisibility(const GfxViewInfo *viewInfo, unsigned int partitionIndex, unsigned int cellIdx, float a4)
{
  float v4; 
  __int64 v7; 
  __int64 v8; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  GfxCachedSunShadow *staticEntry; 
  __m256i v11; 
  const GfxBackEndData *data; 
  unsigned __int8 v13; 
  int activePrimarySunLight; 
  char v15; 
  GfxWorld *world; 
  const unsigned int *v17; 
  int v18; 
  unsigned int index; 
  GfxStaticModel *v20; 
  bool v21; 
  unsigned int *collectionVisData; 
  GfxBackEndData *v23; 
  unsigned __int64 firstStaticModelSurfaceIndex; 
  __int64 v25; 
  GfxStaticModel *v26; 
  XModel *model; 
  unsigned int flags; 
  unsigned int Smodel; 
  GfxCachedSunShadow_Smodel *v30; 
  float v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  int drawStaticDefaultModels; 
  GfxStaticModel *models; 
  GfxStaticModelCollection *collections; 
  BitArrayIterator iter; 
  unsigned int v40; 
  Bounds worldBounds; 
  GfxMatrix worldToViewport; 

  drawStaticDefaultModels = viewInfo->drawStaticDefaultModels;
  v7 = cellIdx;
  if ( (frontEndDataOut->sunShadow.firstCachedSunShadowPartition > partitionIndex || partitionIndex > frontEndDataOut->sunShadow.lastCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3572, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( &frontEndDataOut->sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( &frontEndDataOut->sunShadow, partitionIndex )") )
    __debugbreak();
  v8 = v7;
  SunShadowPartitionCache = R_GetSunShadowPartitionCache(&frontEndDataOut->sunShadow, partitionIndex);
  staticEntry = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v7].staticEntry;
  if ( !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v7].gen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3575, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->gen)", (const char *)&queryFormat, "sunShadowOverlap->gen") )
    __debugbreak();
  if ( !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v8].staticEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3576, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->staticEntry)", (const char *)&queryFormat, "sunShadowOverlap->staticEntry") )
    __debugbreak();
  if ( !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v8].bspEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3577, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->bspEntry)", (const char *)&queryFormat, "sunShadowOverlap->bspEntry") )
    __debugbreak();
  v11 = *(__m256i *)staticEntry->viewParms.viewProjectionMatrix.m.m[0].v;
  data = viewInfo->input.data;
  staticEntry->missingTransient[1] = 0;
  v13 = 0;
  *(__m256i *)worldToViewport.m.m[0].v = v11;
  *(__m256i *)worldToViewport.m.row2.v = *(__m256i *)staticEntry->viewParms.viewProjectionMatrix.m.row2.v;
  worldToViewport.m.m[0].v[0] = v4 * 0.5;
  worldToViewport.m.m[2].v[0] = a4 * 0.5;
  worldToViewport.m.m[0].v[1] = -0.5 * worldToViewport.m.m[0].v[1];
  worldToViewport.m.m[1].v[0] = 0.5 * worldToViewport.m.m[1].v[0];
  worldToViewport.m.m[1].v[1] = -0.5 * worldToViewport.m.m[1].v[1];
  worldToViewport.m.m[2].v[1] = -0.5 * worldToViewport.m.m[2].v[1];
  worldToViewport.m.m[3].v[1] = 0.5 - (float)(0.5 * worldToViewport.m.m[3].v[1]);
  worldToViewport.m.m[3].v[0] = (float)(worldToViewport.m.m[3].v[0] + 1.0) * 0.5;
  activePrimarySunLight = data->activePrimarySunLight;
  if ( activePrimarySunLight && viewInfo->useShadowGeomOpt )
  {
    v15 = 5;
    if ( activePrimarySunLight < 5 )
      v15 = activePrimarySunLight;
    v13 = 1 << (v15 - 1);
  }
  world = rgp.world;
  v17 = world->dpvs.smodelVisData[(unsigned int)(v7 + R_GetCachedSceneViewTypeForSunShadowPartition(&frontEndDataOut->sunShadow, partitionIndex))];
  collections = rgp.world->smodels.collections;
  models = rgp.world->smodels.models;
  R_SunShadowCache_DeallocateSmodels(staticEntry);
  v18 = -1;
  v34 = -1;
  v35 = -1;
  iter.wordIndex = 0;
  iter.wordCount = rgp.world->dpvs.smodelVisDataCount;
  iter.bitArray = v17;
  iter.bits = 0;
  if ( iter.wordCount )
    iter.bits = *v17;
  index = v40;
  v20 = models;
  while ( 1 )
  {
    v21 = BitArrayIterator::Advance(&iter);
    if ( v21 )
    {
      index = iter.index;
      v21 = 1;
      v40 = iter.index;
      v20 = (GfxStaticModel *)&collections[iter.index];
    }
    if ( !v21 )
      break;
    collectionVisData = rgp.world->smodels.collectionVisData;
    if ( !collectionVisData || ((0x80000000 >> (index & 0x1F)) & collectionVisData[(unsigned __int64)index >> 5]) != 0 )
    {
      v23 = frontEndDataOut;
      firstStaticModelSurfaceIndex = v20->firstStaticModelSurfaceIndex;
      if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( (unsigned int)firstStaticModelSurfaceIndex >= 0x600 )
      {
        LODWORD(v33) = 1536;
        LODWORD(v32) = firstStaticModelSurfaceIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v32, v33) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (firstStaticModelSurfaceIndex & 0x1F)) & v23->transientVisibility.array[firstStaticModelSurfaceIndex >> 5]) != 0 )
      {
        v25 = *(unsigned __int16 *)&v20->flags;
        if ( (unsigned int)v25 >= rgp.world->smodels.modelCount )
        {
          LODWORD(v33) = rgp.world->smodels.modelCount;
          LODWORD(v32) = *(unsigned __int16 *)&v20->flags;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3661, ASSERT_TYPE_ASSERT, "(unsigned)( smodelIndex ) < (unsigned)( rgp.world->smodels.modelCount )", "smodelIndex doesn't index rgp.world->smodels.modelCount\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        v26 = &models[v25];
        if ( !v26->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3664, ASSERT_TYPE_ASSERT, "(smodel->model)", (const char *)&queryFormat, "smodel->model") )
          __debugbreak();
        if ( drawStaticDefaultModels )
          goto LABEL_65;
        model = v26->model;
        if ( !v26->model )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 625, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
        }
        flags = model->flags;
        v18 = v34;
        if ( (flags & 0x8000) == 0 )
        {
LABEL_65:
          if ( partitionIndex >= rg.firstForceCacheSModelPartition && partitionIndex < 3 || (v18 = v34, (v26->flags & 4) == 0) )
          {
            if ( !v13 || (v18 = v34, (v13 & *(_BYTE *)(&v20->firstStaticModelSurfaceIndex + 2)) != 0) )
            {
              Smodel = R_SunShadowCache_AllocateSmodel();
              if ( Smodel == -1 )
              {
                R_WarnOncePerFrame(R_WARN_SMODEL_VIS_DATA_LIMIT, 0x10000i64, 0x10000i64);
                v18 = v34;
                break;
              }
              v18 = v34;
              v35 = Smodel;
              if ( v34 == -1 )
                v18 = Smodel;
              v34 = v18;
              v30 = R_SunShadowCache_GetSmodel(Smodel);
              worldBounds = rgp.world->smodels.collectionBounds[index];
              v31 = worldBounds.midPoint.v[1] - staticEntry->viewParms.camera.origin.v[1];
              worldBounds.midPoint.v[0] = worldBounds.midPoint.v[0] - staticEntry->viewParms.camera.origin.v[0];
              worldBounds.midPoint.v[2] = worldBounds.midPoint.v[2] - staticEntry->viewParms.camera.origin.v[2];
              worldBounds.midPoint.v[1] = v31;
              v30->smodelIndex = v40;
              *((_WORD *)v30 + 5) = *((_WORD *)v30 + 5) & 0xFFE0 | 6;
              R_SunShadowCache_ComputeSmodelExtentsMask(&worldBounds, &worldToViewport, v30);
            }
          }
        }
      }
      else
      {
        ++staticEntry->missingTransient[1];
        v18 = v34;
      }
    }
    else
    {
      ++staticEntry->missingTransient[1];
    }
  }
  if ( staticEntry->firstSmodelId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 3709, ASSERT_TYPE_ASSERT, "(entry->firstSmodelId == R_SUNSHADOW_INVALID_ID)", (const char *)&queryFormat, "entry->firstSmodelId == R_SUNSHADOW_INVALID_ID") )
    __debugbreak();
  staticEntry->lastSmodelId = v35;
  staticEntry->firstSmodelId = v18;
  *(_WORD *)&staticEntry->finalized = 0;
}

/*
==============
R_ShouldDrawTransientModel
==============
*/
_BOOL8 R_ShouldDrawTransientModel(const int viewDrawStaticDefaultModels, const XModel *model)
{
  if ( viewDrawStaticDefaultModels )
    return 1i64;
  if ( !model )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 625, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
  }
  return (model->flags & 0x8000) == 0;
}

/*
==============
R_ShouldDrawTransientStaticModel
==============
*/
bool R_ShouldDrawTransientStaticModel(const GfxStaticModelCollection *const smodelCollection)
{
  GfxBackEndData *v1; 
  unsigned __int64 transientGfxWorldPlaced; 
  __int64 v4; 
  int v5; 

  v1 = frontEndDataOut;
  transientGfxWorldPlaced = smodelCollection->transientGfxWorldPlaced;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (unsigned int)transientGfxWorldPlaced >= 0x600 )
  {
    v5 = 1536;
    LODWORD(v4) = transientGfxWorldPlaced;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  return ((0x80000000 >> (transientGfxWorldPlaced & 0x1F)) & v1->transientVisibility.array[transientGfxWorldPlaced >> 5]) != 0;
}

/*
==============
R_ShowCountsStaticModel
==============
*/
void R_ShowCountsStaticModel(DebugGlobals *debugGlobalsEntry, const vec3_t *origin, const XModel *model, int lod)
{
  const dvar_t *v8; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int16 *p_vertCount; 
  __int64 v15; 
  const char *v16; 
  const dvar_t *v17; 
  XSurface *surfaces; 

  if ( r_showTriCounts->current.enabled || r_showVertCounts->current.enabled || r_showSurfCounts->current.enabled )
    goto LABEL_40;
  v8 = DVARINT_cg_drawFPS;
  if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer >= 3 )
  {
LABEL_40:
    if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 826, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( !model->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 827, ASSERT_TYPE_ASSERT, "(model->name)", (const char *)&queryFormat, "model->name") )
      __debugbreak();
    if ( XModelIsLodUsable(model, lod) )
    {
      v9 = XModelGetSurfaces(model, &surfaces, lod);
      v10 = v9;
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 836, ASSERT_TYPE_ASSERT, "(surfaceCount)", (const char *)&queryFormat, "surfaceCount") )
        __debugbreak();
      v11 = 0;
      v12 = 0;
      v13 = v10;
      if ( (int)v10 > 0 )
      {
        p_vertCount = &surfaces->vertCount;
        do
        {
          if ( r_showTriCounts->current.enabled )
          {
            v11 += p_vertCount[1];
          }
          else if ( r_showVertCounts->current.enabled )
          {
            v12 += *p_vertCount;
          }
          p_vertCount += 96;
          --v13;
        }
        while ( v13 );
      }
      if ( r_showTriCounts->current.enabled )
      {
        v15 = v11;
      }
      else if ( r_showVertCounts->current.enabled )
      {
        v15 = v12;
      }
      else
      {
        if ( !r_showSurfCounts->current.enabled )
          goto LABEL_32;
        v15 = (unsigned int)v10;
      }
      v16 = j_va("%i", v15);
      R_AddScaledDebugString(debugGlobalsEntry, &rg.debugViewParms->camera, origin, &colorCyan, v16);
LABEL_32:
      v17 = DVARINT_cg_drawFPS;
      if ( !DVARINT_cg_drawFPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFPS") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( v17->current.integer >= 3 )
      {
        if ( rg.stats )
        {
          rg.stats->numSModelSurfs += v10;
          rg.stats->numXModelTriCount += v11;
        }
      }
    }
  }
}

/*
==============
R_SortSModelSurfDelaySort
==============
*/
void R_SortSModelSurfDelaySort(GfxSModelSurfDelaySort *delaySurfList, unsigned int begin, unsigned int end)
{
  unsigned int i; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  GfxSModelSurfDelaySort *v12; 
  __int64 v13; 
  GfxSModelSurfDelaySort v14; 
  GfxSModelSurfHeader v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  GfxSModelSurfHeader v19; 
  bool v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  GfxSModelSurfHeader header; 
  unsigned __int64 p0; 
  GfxSModelSurfDelaySort *v26; 
  bool v27; 
  GfxSModelSurfDelaySort *v28; 
  bool v29; 
  bool v30; 
  GfxSModelSurfDelaySort v31; 
  unsigned int v32; 
  __int64 v33; 
  bool v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v37; 
  int v38[20]; 

  for ( i = 0; ; end = v38[2 * i + 1] )
  {
    while ( 1 )
    {
      v37 = i;
      v7 = end;
      v8 = begin;
      v9 = end;
      if ( end - begin <= 0xB )
        break;
      v21 = begin;
      v22 = (end + begin) >> 1;
      v23 = end;
      header = delaySurfList[v22].fields.header;
      p0 = delaySurfList[v22].packed.p0;
      while ( 1 )
      {
        v26 = &delaySurfList[v21];
        v27 = v26->fields.header.packed < header.packed;
        if ( v26->fields.header.packed == header.packed )
          v27 = v26->packed.p0 < p0;
        if ( !v27 )
          break;
LABEL_25:
        if ( ++v21 == v23 )
          goto $done_splitting_2;
      }
      while ( v21 != --v23 )
      {
        v28 = &delaySurfList[v23];
        v29 = v28->fields.header.packed < header.packed;
        v30 = v28->fields.header.packed == header.packed;
        if ( v28->fields.header.packed == header.packed )
        {
          v29 = v28->packed.p0 < p0;
          v30 = v28->packed.p0 == p0;
        }
        if ( v29 || v30 )
        {
          v31 = delaySurfList[v21];
          delaySurfList[v21] = delaySurfList[v23];
          delaySurfList[v23] = v31;
          goto LABEL_25;
        }
      }
$done_splitting_2:
      if ( begin == v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1165, ASSERT_TYPE_ASSERT, "(begin != localBegin)", (const char *)&queryFormat, "begin != localBegin") )
        __debugbreak();
      if ( v21 == end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1166, ASSERT_TYPE_ASSERT, "(localBegin != end)", (const char *)&queryFormat, "localBegin != end") )
        __debugbreak();
      v32 = v37;
      if ( v37 >= 0xA )
      {
        LODWORD(v36) = 10;
        LODWORD(v35) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 1167, ASSERT_TYPE_ASSERT, "(unsigned)( stackPos ) < (unsigned)( ( sizeof( *array_counter( stack ) ) + 0 ) )", "stackPos doesn't index ARRAY_COUNT( stack )\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
        v32 = v37;
      }
      v33 = v32;
      end = v21;
      i = v32 + 1;
      v34 = v21 <= v22;
      if ( v21 > v22 )
        v9 = v21;
      if ( v21 > v22 )
      {
        begin = v21;
        if ( v21 > v22 )
        {
          v21 = v8;
          if ( !v34 )
            end = v7;
        }
      }
      v38[2 * v33] = v21;
      v38[2 * v33 + 1] = v9;
    }
    if ( end - begin > 1 )
    {
      v10 = end - 1;
      do
      {
        v11 = v10--;
        v12 = &delaySurfList[v11];
        v13 = v11;
        if ( *(_OWORD *)v12 < *(_OWORD *)&delaySurfList[v10] )
        {
          v14 = delaySurfList[v10];
          v15 = delaySurfList[v10].fields.header;
          v16 = delaySurfList[v10].packed.p0;
          do
          {
            v17 = v13;
            v18 = v11++ - 1;
            delaySurfList[v18] = *v12;
            if ( v11 == end )
              break;
            v12 = &delaySurfList[v11];
            v13 = v11;
            v19 = v12->fields.header;
            v20 = v19.packed < v15.packed;
            if ( v19.packed == v15.packed )
              v20 = v12->packed.p0 < v16;
          }
          while ( v20 );
          delaySurfList[v17] = v14;
        }
      }
      while ( v10 != begin );
      i = v37;
    }
    if ( !i )
      break;
    begin = v38[2 * --i];
  }
}

/*
==============
R_StaticModelInstanceDebugAids
==============
*/
void R_StaticModelInstanceDebugAids(const GfxViewInfo *viewInfo, unsigned int smodelInstanceIndex, unsigned int smodelCollectionIndex, const GfxStaticModel *smodel, int lod, float lodDist, bool isClutter, bool isSingleInstanceCollection)
{
  signed __int64 v8; 
  __int128 v9; 
  void *v10; 
  XModel *model; 
  __int64 v15; 
  __int64 splinedModelInstanceIndex; 
  Bounds *splinedModelInstanceBounds; 
  __m128 v20; 
  double v21; 
  __int128 v23; 
  __int128 v27; 
  __int128 v31; 
  const vec4_t *v41; 
  const GfxBackEndData *data; 
  int integer; 
  const char *v44; 
  const char *v45; 
  double v46; 
  const GfxBackEndData *v47; 
  float v48; 
  unsigned int v49; 
  double LodOutDist; 
  __int64 handle; 
  unsigned __int64 v52; 
  DebugXModelStats *v53; 
  unsigned int SurfCount; 
  const XSurface *v55; 
  __int64 v56; 
  const char *pOutDists; 
  float outScale[4]; 
  Bounds baseBounds; 
  GfxPlacement outPlacement; 
  Bounds rotatedBounds; 
  tmat33_t<vec3_t> axis; 
  char dest[4096]; 
  __int128 v64; 

  v10 = alloca(v8);
  model = smodel->model;
  v15 = smodelInstanceIndex;
  v64 = v9;
  R_StaticModelInstance_GetPlacement(smodelInstanceIndex, &outPlacement, outScale);
  if ( (smodel->flags & 0x10) != 0 )
  {
    splinedModelInstanceIndex = rgp.world->smodels.modelStaticIndirection[v15].splinedModelInstanceIndex;
    splinedModelInstanceBounds = rgp.world->smodels.splinedModelInstanceBounds;
    v20 = *(__m128 *)splinedModelInstanceBounds[splinedModelInstanceIndex].midPoint.v;
    *(__m128 *)rotatedBounds.midPoint.v = v20;
    *(_QWORD *)&rotatedBounds.halfSize.y = *(_QWORD *)&splinedModelInstanceBounds[splinedModelInstanceIndex].halfSize.y;
    outPlacement.origin.v[0] = v20.m128_f32[0];
    LODWORD(outPlacement.origin.v[1]) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    LODWORD(outPlacement.origin.v[2]) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
  }
  else
  {
    QuatToAxis(&outPlacement.quat, &axis);
    v21 = *(double *)&model->bounds.halfSize.y;
    *(_OWORD *)baseBounds.midPoint.v = *(_OWORD *)model->bounds.midPoint.v;
    *(double *)&baseBounds.halfSize.y = v21;
    baseBounds.halfSize.v[0] = _mm_shuffle_ps(*(__m128 *)baseBounds.midPoint.v, *(__m128 *)baseBounds.midPoint.v, 255).m128_f32[0] * outScale[0];
    baseBounds.halfSize.v[1] = *(float *)&v21 * outScale[0];
    baseBounds.halfSize.v[2] = outScale[0] * baseBounds.halfSize.v[2];
    baseBounds.midPoint.v[1] = outScale[0] * baseBounds.midPoint.v[1];
    baseBounds.midPoint.v[0] = outScale[0] * baseBounds.midPoint.v[0];
    baseBounds.midPoint.v[2] = outScale[0] * baseBounds.midPoint.v[2];
    Bounds_Transform(&baseBounds, &outPlacement.origin, &axis, &rotatedBounds);
    v20.m128_i32[0] = LODWORD(rotatedBounds.midPoint.v[0]);
  }
  if ( !isSingleInstanceCollection )
  {
    baseBounds.halfSize.v[0] = 0.0;
    v23 = *(_OWORD *)baseBounds.midPoint.v;
    *(float *)&v23 = rg.correctedLodParms.origin.v[0];
    _XMM5 = v23;
    __asm
    {
      vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4, 10h; r_globals_t rg
      vinsertps xmm5, xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8, 20h ; ' '; r_globals_t rg
    }
    *(__m128 *)baseBounds.midPoint.v = _XMM5;
    baseBounds.halfSize.v[0] = 0.0;
    v27 = *(_OWORD *)baseBounds.midPoint.v;
    *(float *)&v27 = v20.m128_f32[0];
    _XMM4 = v27;
    __asm
    {
      vinsertps xmm4, xmm4, xmm6, 10h
      vinsertps xmm4, xmm4, xmm7, 20h ; ' '
    }
    *(__m128 *)baseBounds.midPoint.v = _XMM4;
    baseBounds.halfSize.v[0] = 0.0;
    v31 = *(_OWORD *)baseBounds.midPoint.v;
    *(float *)&v31 = rotatedBounds.halfSize.v[0];
    _XMM3 = v31;
    __asm { vinsertps xmm3, xmm3, dword ptr [rbp+1040h+rotatedBounds.halfSize+4], 1040h+dest+40h }
    _XMM0 = g_negativeZero.v;
    __asm { vinsertps xmm3, xmm3, dword ptr [rbp+1040h+rotatedBounds.halfSize+8], 1040h+dest+50h }
    _mm128_sub_ps(_XMM5, _XMM4);
    __asm { vandnps xmm2, xmm0, xmm1 }
    *(__m128 *)baseBounds.midPoint.v = _XMM3;
    _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
    __asm { vmaxps  xmm1, xmm3, xmm0 }
    _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
    __asm
    {
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
    }
    lodDist = fsqrt(*(float *)&_XMM1);
    lod = R_GetStaticModelCollectionLODAndDists(model, lodDist, 1.0, isClutter, NULL);
  }
  if ( lod != 6 && XModelIsLodUsable(model, lod) )
  {
    if ( XModelShouldShowBounds(model) && r_showCullSModels->current.enabled && !r_showCull->current.integer )
      R_AddDebugBox(&viewInfo->input.data->debugGlobals, &rotatedBounds, &colorGreen, r_showCullMode->current.integer != 0);
    CG_DrawHits_OnDrawSModel(viewInfo->clientIndex, v15, smodelCollectionIndex, &outPlacement, outScale[0], model, lod);
    R_ShowCountsStaticModel(&viewInfo->input.data->debugGlobals, &outPlacement.origin, model, lod);
    v41 = &colorCyan;
    if ( r_showModelNames->current.enabled )
      R_AddScaledDebugString(&viewInfo->input.data->debugGlobals, &rg.debugViewParms->camera, &outPlacement.origin, &colorCyan, model->name);
    data = viewInfo->input.data;
    integer = r_showModelLODs->current.integer;
    if ( integer && 6 - integer >= (unsigned int)lod )
    {
      v44 = j_va("%d", (unsigned int)lod);
      R_AddScaledDebugString(&data->debugGlobals, &rg.debugViewParms->camera, &outPlacement.origin, &colorCyan, v44);
    }
    v46 = GfxStaticModelLodDistIndexToScale(rgp.world->smodels.instanceFlags[v15] & 0xF);
    v47 = viewInfo->input.data;
    v48 = *(float *)&v46;
    if ( r_showModelLODOutDist->current.enabled )
    {
      v49 = model->numLods - 1;
      LodOutDist = XModelGetLodOutDist(model);
      pOutDists = j_va("[%d] %d", v49, (unsigned int)(int)(float)(*(float *)&LodOutDist * v48));
      if ( lod == v49 )
        v41 = &colorYellow;
      R_AddScaledDebugString(&v47->debugGlobals, &rg.debugViewParms->camera, &outPlacement.origin, v41, pOutDists);
    }
    if ( r_staticModelDumpLodInfo->current.enabled && !s_staticModelDumpInfo.openHandleFailed )
    {
      handle = s_staticModelDumpInfo.handle.handle.handle;
      if ( s_staticModelDumpInfo.handle.handle.handle != -1 )
        goto LABEL_30;
      s_staticModelDumpInfo.handle.handle.handle = (__int64)FS_FOpenTextFileWrite((fileHandle_t *)&stru_1443D05B0, v45);
      handle = s_staticModelDumpInfo.handle.handle.handle;
      if ( s_staticModelDumpInfo.handle.handle.handle != -1 )
      {
        Com_sprintf(dest, 0x1000ui64, "index,name,radius,numLods,lodDist,lodPixels720p,1PixelDist720p,scaledDist,posx,posy,posz,pixels\n");
        v52 = -1i64;
        do
          ++v52;
        while ( dest[v52] );
        FS_Write(dest, v52, (fileHandle_t)handle);
        handle = s_staticModelDumpInfo.handle.handle.handle;
      }
      s_staticModelDumpInfo.staticModelCount = 0;
      if ( handle == -1 )
      {
        s_staticModelDumpInfo.openHandleFailed = 1;
        Com_PrintError(1, "Could not dump model info.\n");
      }
      else
      {
LABEL_30:
        R_StaticModelWriteInfo((fileHandle_t)handle, &outPlacement.origin, model, lodDist);
      }
    }
    if ( rg.showXModelRanking )
    {
      if ( rg.showXModelRankingFilterMode != 2 )
      {
        v53 = R_AddXModelToRankingStats(model, lod, 1u);
        XModelGetSurfaces(model, (XSurface **)&baseBounds, lod);
        SurfCount = XModelGetSurfCount(model, lod);
        if ( SurfCount )
        {
          v55 = *(const XSurface **)baseBounds.midPoint.v;
          v56 = SurfCount;
          do
          {
            R_AddXSurfaceToXModelStats(v55++, v53);
            --v56;
          }
          while ( v56 );
        }
      }
    }
  }
}

/*
==============
R_StaticModelWriteInfo
==============
*/
void R_StaticModelWriteInfo(fileHandle_t fileHandle, const vec3_t *origin, const XModel *xmodel, const float dist)
{
  float v7; 
  float v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  char dest[4096]; 

  if ( !xmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 892, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
    __debugbreak();
  if ( !xmodel->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 893, ASSERT_TYPE_ASSERT, "(xmodel->name)", (const char *)&queryFormat, "xmodel->name") )
    __debugbreak();
  if ( !xmodel->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 894, ASSERT_TYPE_ASSERT, "(xmodel->numLods > 0)", (const char *)&queryFormat, "xmodel->numLods > 0") )
    __debugbreak();
  v7 = *((float *)&xmodel->trans + 16 * (unsigned __int64)xmodel->numLods);
  if ( v7 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_add_staticmodel.cpp", 898, ASSERT_TYPE_ASSERT, "(lodDist > 0.0f)", (const char *)&queryFormat, "lodDist > 0.0f") )
    __debugbreak();
  v8 = radius2pixels * xmodel->radius;
  v9 = (unsigned int)++s_staticModelDumpInfo.staticModelCount;
  if ( dist > 0.0 )
    Com_sprintf(dest, 0x1000ui64, "%d,%s,%.1f,%d,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f,%.1f\n", v9, xmodel->name, xmodel->radius, xmodel->numLods, v7, (float)(v8 / v7), v8, dist, origin->v[0], origin->v[1], origin->v[2], (float)(v8 / dist));
  v10 = -1i64;
  do
    ++v10;
  while ( dest[v10] );
  FS_Write(dest, v10, fileHandle);
}

