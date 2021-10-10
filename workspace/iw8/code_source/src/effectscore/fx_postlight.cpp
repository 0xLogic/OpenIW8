/*
==============
FX_PostLight_GetInfo
==============
*/

FxPostLightInfo *__fastcall FX_PostLight_GetInfo()
{
  return ?FX_PostLight_GetInfo@@YAPEAUFxPostLightInfo@@XZ();
}

/*
==============
FX_PostLight_GenerateVerts
==============
*/

void __fastcall FX_PostLight_GenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxPostLightInfo *postLightInfoAddr, const FxGenerateVertsCmd *cmd)
{
  ?FX_PostLight_GenerateVerts@@YAXPEAUGfxCodeSurfGlob@@PEBUFxPostLightInfo@@PEBUFxGenerateVertsCmd@@@Z(codeSurfGlob, postLightInfoAddr, cmd);
}

/*
==============
FX_PostLight_Add
==============
*/

void __fastcall FX_PostLight_Add(FxPostLight *postLight)
{
  ?FX_PostLight_Add@@YAXPEAUFxPostLight@@@Z(postLight);
}

/*
==============
FX_PostLight_Begin
==============
*/

void FX_PostLight_Begin(void)
{
  ?FX_PostLight_Begin@@YAXXZ();
}

/*
==============
FX_PostLight_Add
==============
*/
void FX_PostLight_Add(FxPostLight *postLight)
{
  int v2; 
  __int64 v3; 

  if ( ((unsigned __int8)&g_postLightInfo.postLightCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_postLightInfo.postLightCount) )
    __debugbreak();
  v2 = _InterlockedExchangeAdd(&g_postLightInfo.postLightCount, 1u);
  if ( v2 < 96 )
  {
    v3 = v2;
    *(__m256i *)g_postLightInfo.postLights[v3].begin.v = *(__m256i *)postLight->begin.v;
    g_postLightInfo.postLights[v3].material = postLight->material;
  }
  else
  {
    if ( ((unsigned __int64)&g_postLightInfo.postLightCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_postLightInfo.postLightCount) )
      __debugbreak();
    _InterlockedDecrement(&g_postLightInfo.postLightCount);
  }
}

/*
==============
FX_PostLight_Begin
==============
*/
void FX_PostLight_Begin(void)
{
  g_postLightInfo.postLightCount = 0;
}

/*
==============
FX_PostLight_GenerateVerts
==============
*/
void FX_PostLight_GenerateVerts(GfxCodeSurfGlob *codeSurfGlob, const FxPostLightInfo *postLightInfoAddr, const FxGenerateVertsCmd *cmd)
{
  GfxCodeSurfGlob *v5; 
  volatile int postLightCount; 
  int v7; 
  float v8; 
  float v9; 
  float v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  unsigned int vertIndexBase; 
  int vertIndexOffset; 
  float v23; 
  float v24; 
  float v25; 
  vec4_t *v26; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  int v35; 
  GfxSpriteVertex *v36; 
  float *v37; 
  float *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float *v49; 
  __int64 v50; 
  float *v51; 
  float v52; 
  r_double_index_t *v53; 
  int v54; 
  r_double_index_t *v55; 
  unsigned __int16 v56; 
  int v57; 
  int v58; 
  __int16 v59; 
  int v60; 
  __int16 v61; 
  unsigned __int16 v62; 
  r_double_index_t v63; 
  r_double_index_t v64; 
  r_double_index_t v65; 
  float s; 
  float c; 
  unsigned int v68; 
  unsigned int argOffset; 
  float v70; 
  float v71; 
  float v72; 
  __int64 v73; 
  r_double_index_t *indices; 
  GfxCodeSurfGlob *codeSurfGloba; 
  GfxCodeSurfBuffers outBuffers; 
  GfxCodeSurfArgs codeSurfArgs; 
  vec3_t src; 
  vec3_t dst; 
  char v80[88]; 

  codeSurfGloba = codeSurfGlob;
  v5 = codeSurfGlob;
  if ( !postLightInfoAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_postlight.cpp", 37, ASSERT_TYPE_ASSERT, "(postLightInfo)", (const char *)&queryFormat, "postLightInfo") )
    __debugbreak();
  postLightCount = postLightInfoAddr->postLightCount;
  v7 = 96;
  v8 = cmd->camera.origin.v[0];
  v9 = cmd->camera.origin.v[1];
  v10 = cmd->camera.origin.v[2];
  v70 = v8;
  if ( postLightCount < 96 )
    v7 = postLightCount;
  v71 = v9;
  v72 = v10;
  if ( v7 )
  {
    v11 = &postLightInfoAddr->postLights[0].color.array[2];
    v12 = 0i64;
    v13 = v7;
    v73 = v7;
    do
    {
      v14 = *(float *)(v11 - 6);
      if ( v14 < 0.001 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_postlight.cpp", 57, ASSERT_TYPE_ASSERT, "( ( postLight->radius >= 0.001f ) )", "( postLight->radius ) = %g", v14) )
          __debugbreak();
        v13 = v73;
      }
      v15 = *(float *)(v11 - 18) - *(float *)(v11 - 30);
      v19 = *(unsigned int *)(v11 - 14);
      v16 = *(float *)(v11 - 14) - *(float *)(v11 - 26);
      v17 = *(float *)(v11 - 10) - *(float *)(v11 - 22);
      *(float *)&v19 = (float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17);
      v18 = *(float *)&v19;
      if ( *(float *)&v19 >= 0.000099999997 )
      {
        if ( !R_ReserveVertCodeSurfBuffers(&outBuffers, v5, 0x10u, 0x54u, 2u) )
          return;
        v20 = *(float *)(v11 - 26);
        vertIndexBase = outBuffers.vertIndexBase;
        vertIndexOffset = outBuffers.vertIndexOffset;
        v23 = *(float *)(v11 - 30) - v8;
        v24 = *(float *)(v11 - 22);
        indices = outBuffers.indices;
        v68 = outBuffers.vertIndexBase;
        argOffset = outBuffers.argOffset;
        v25 = v20 - v9;
        v26 = R_CodeSurfArgsIter_Begin(v5, outBuffers.argOffset);
        *(float *)&v19 = fsqrt(*(float *)&v19);
        _XMM1 = v19;
        v26->v[3] = 1.0 / *(float *)(v11 - 6);
        v26->v[0] = v23;
        v26->v[1] = v25;
        v26->v[2] = v24 - v10;
        v26[1].v[3] = 1.0 / v18;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm2, xmm0
        }
        src.v[0] = v15 * (float)(1.0 / *(float *)&_XMM0);
        v26[1].v[0] = v15;
        v26[1].v[1] = v16;
        v26[1].v[2] = v17;
        v30 = *(float *)(v11 - 6);
        src.v[2] = (float)(1.0 / *(float *)&_XMM0) * v17;
        src.v[1] = v16 * (float)(1.0 / *(float *)&_XMM0);
        PerpendicularVector(&src, &dst);
        v31 = (float)(src.v[1] * dst.v[2]) - (float)(src.v[2] * dst.v[1]);
        v32 = (float)(src.v[2] * dst.v[0]) - (float)(dst.v[2] * src.v[0]);
        v33 = (float)(dst.v[1] * src.v[0]) - (float)(src.v[1] * dst.v[0]);
        v34 = v30 * 1.4142135;
        v35 = 0;
        v36 = R_CodeSurfVertIter_Begin(v5, vertIndexBase + vertIndexOffset);
        v37 = (float *)v80;
        v38 = &v36->color.v[2];
        do
        {
          FastSinCos((float)v35 * 0.78539819, &s, &c);
          v39 = v34 * s;
          v40 = v34 * c;
          v41 = (float)((float)(v34 * s) * dst.v[0]) + (float)(v31 * (float)(v34 * c));
          v42 = (float)(v32 * (float)(v34 * c)) + (float)((float)(v34 * s) * dst.v[1]);
          v43 = v30 * src.v[0];
          v44 = (float)(v33 * (float)(v34 * c)) + (float)((float)(v34 * s) * dst.v[2]);
          *(v37 - 2) = v41 + (float)(v30 * src.v[0]);
          c = v40;
          v45 = v30 * src.v[1];
          *(v37 - 1) = v42 + (float)(v30 * src.v[1]);
          v46 = (float)(v41 - v43) + *(float *)(v11 - 30);
          s = v39;
          v48 = v30 * src.v[2];
          v47 = v30 * src.v[2];
          v36->xyz.v[0] = v46;
          *v37 = v44 + v48;
          *(v38 - 5) = (float)(v42 - v45) + *(float *)(v11 - 26);
          *(v38 - 4) = (float)(v44 - v47) + *(float *)(v11 - 22);
          v38[3] = 0.0;
          v38 += 12;
          v37 += 3;
          *(v38 - 14) = (float)*(v11 - 2) * 0.0039215689;
          ++v36;
          *(v38 - 13) = (float)*(v11 - 1) * 0.0039215689;
          ++v35;
          *(v38 - 12) = (float)*v11 * 0.0039215689;
          *(v38 - 11) = (float)v11[1] * 0.0039215689;
        }
        while ( v35 != 8 );
        v49 = &v36->color.v[2];
        v50 = 8i64;
        v51 = (float *)v80;
        do
        {
          v52 = *(v51 - 1);
          v36->xyz.v[0] = *(v51 - 2) + *(float *)(v11 - 30);
          *(v49 - 5) = v52 + *(float *)(v11 - 26);
          *(v49 - 4) = *(float *)(v11 - 22) + *v51;
          v49[3] = 0.0;
          v49 += 12;
          ++v36;
          *(v49 - 14) = (float)*(v11 - 2) * 0.0039215689;
          v51 += 3;
          *(v49 - 13) = (float)*(v11 - 1) * 0.0039215689;
          *(v49 - 12) = (float)*v11 * 0.0039215689;
          *(v49 - 11) = (float)v11[1] * 0.0039215689;
          --v50;
        }
        while ( v50 );
        v53 = indices;
        v54 = 0;
        v55 = indices;
        do
        {
          v56 = vertIndexOffset + v54;
          v57 = v54++;
          v63.value[0] = v56;
          v63.value[1] = vertIndexOffset + v54 % 8;
          *v55 = v63;
          v63.value[0] = v56 + 8;
          v63.value[1] = v56 + 8;
          v55[1] = v63;
          v63.value[0] = vertIndexOffset + v54 % 8;
          v63.value[1] = v63.value[0] + 8;
          v55[2] = v63;
          v55 += 3;
        }
        while ( v57 != 7 );
        v58 = 0;
        do
        {
          v59 = vertIndexOffset + v58;
          v58 += 2;
          v64.value[0] = v59 + 2;
          v64.value[1] = v59 + 1;
          *v55 = v64;
          v64.value[0] = vertIndexOffset;
          v64.value[1] = v59 + 3;
          v55[1] = v64;
          v64.value[0] = v59 + 2;
          v64.value[1] = vertIndexOffset;
          v55[2] = v64;
          v55 += 3;
        }
        while ( v58 != 6 );
        v60 = 0;
        do
        {
          v61 = vertIndexOffset + v60;
          v65.value[0] = vertIndexOffset + 8;
          v62 = vertIndexOffset + v60 + 9;
          v60 += 2;
          v65.value[1] = v62;
          v55 += 3;
          v55[-3] = v65;
          v65.value[1] = vertIndexOffset + 8;
          v65.value[0] = v61 + 10;
          v55[-2] = v65;
          v65.value[1] = v61 + 11;
          v55[-1] = v65;
        }
        while ( v60 != 6 );
        v5 = codeSurfGloba;
        codeSurfArgs.material = *(Material **)(v11 + 2);
        codeSurfArgs.vertIndexBase = v68;
        codeSurfArgs.argOffset = argOffset;
        codeSurfArgs.fxName = "PostLight";
        codeSurfArgs.indices = v53;
        codeSurfArgs.indexCount = 84;
        codeSurfArgs.argCount = 2;
        codeSurfArgs.sortOrder = 0;
        codeSurfArgs.flags = 0;
        R_AddCodeSurf(codeSurfGloba, &codeSurfArgs);
        v13 = v73;
        v8 = v70;
        v9 = v71;
        v10 = v72;
      }
      ++v12;
      v11 += 40;
    }
    while ( v12 != v13 );
  }
}

/*
==============
FX_PostLight_GetInfo
==============
*/
FxPostLightInfo *FX_PostLight_GetInfo()
{
  return &g_postLightInfo;
}

