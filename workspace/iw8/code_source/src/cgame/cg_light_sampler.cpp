/*
==============
CG_LightSampler_DataChanged
==============
*/

bool __fastcall CG_LightSampler_DataChanged(const usercmd_s *pPrevCmd, const usercmd_s *pNextCmd)
{
  return ?CG_LightSampler_DataChanged@@YA_NPEBUusercmd_s@@0@Z(pPrevCmd, pNextCmd);
}

/*
==============
CG_LightSampler_Update
==============
*/

void __fastcall CG_LightSampler_Update(LocalClientNum_t clientNum)
{
  ?CG_LightSampler_Update@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CG_LightSampler_ProcessResults
==============
*/

void __fastcall CG_LightSampler_ProcessResults(LocalClientNum_t clientNum)
{
  ?CG_LightSampler_ProcessResults@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CG_LightSampler_AddSamples
==============
*/

void __fastcall CG_LightSampler_AddSamples(LocalClientNum_t clientNum)
{
  ?CG_LightSampler_AddSamples@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CG_LightSampler_AddSamples
==============
*/
void CG_LightSampler_AddSamples(LocalClientNum_t clientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  float value; 
  float viewHeightCurrent; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t *v12; 
  const dvar_t *v13; 
  int integer; 
  __int64 v15; 
  int v16; 
  float *v17; 
  __int128 v18; 
  __int64 v19; 
  __int128 v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  float *v24; 
  __int64 v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  __int128 v31; 
  float v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  float v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  float v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  float v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  float v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  float v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  float v62; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 
  float v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  unsigned int refdefViewOrg_aab; 
  tmat33_t<vec3_t> *p_axis; 
  float v74; 
  __int128 v75; 
  __int128 v76; 
  float v80; 
  float v81; 
  float v82; 
  const dvar_t *v83; 
  int v84; 
  __int64 v85; 
  const vec3_t *v86; 
  __int64 v87; 
  unsigned __int64 v88; 
  float v89; 
  __int128 v90; 
  float v91; 
  float *v; 
  __int128 v93; 
  float v94; 
  float v95; 
  __int128 v96; 
  float v97; 
  __int128 v98; 
  const dvar_t *v102; 
  float v103; 
  float v104; 
  bool v105; 
  const vec3_t *v106; 
  float c[2]; 
  float s[6]; 
  __int64 v109; 
  __int64 v110; 
  __int64 v111; 
  vec3_t out; 
  vec3_t end; 
  _BYTE v114[64]; 
  __int128 v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  __int64 v150[28]; 
  vec3_t center[18]; 

  v111 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(clientNum);
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 3 )
    goto LABEL_6;
  v2 = DCONST_DVARBOOL_cg_drawPlayerLightSample;
  if ( !DCONST_DVARBOOL_cg_drawPlayerLightSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerLightSample") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
LABEL_6:
    v3 = DVARFLT_cg_playerLightSampleSize;
    if ( !DVARFLT_cg_playerLightSampleSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    value = v3->current.value;
    c[0] = value;
    *(__m256i *)v114 = _ymm_c000000041100000400000004000000041100000000000000000000041100000;
    *(__m256i *)&v114[32] = _ymm;
    v115 = _xmm;
    viewHeightCurrent = LocalClientGlobals->predictedPlayerState.viewHeightCurrent;
    v116 = viewHeightCurrent * -0.34999999;
    v117 = FLOAT_N6_0;
    v118 = 0.0;
    v119 = viewHeightCurrent * -0.5;
    v120 = FLOAT_N6_0;
    v121 = 0.0;
    v122 = viewHeightCurrent * -0.64999998;
    v123 = FLOAT_N6_0;
    v124 = 0.0;
    v125 = viewHeightCurrent * -0.80000001;
    v126 = FLOAT_N6_0;
    v127 = FLOAT_6_0;
    v128 = viewHeightCurrent * -0.34999999;
    v129 = FLOAT_N6_0;
    v130 = FLOAT_6_0;
    v131 = viewHeightCurrent * -0.5;
    v132 = FLOAT_N6_0;
    v133 = FLOAT_6_0;
    v134 = viewHeightCurrent * -0.64999998;
    v135 = FLOAT_N6_0;
    v136 = FLOAT_6_0;
    v137 = viewHeightCurrent * -0.80000001;
    v138 = FLOAT_N6_0;
    v139 = FLOAT_N6_0;
    v140 = viewHeightCurrent * -0.34999999;
    v141 = FLOAT_N6_0;
    v142 = FLOAT_N6_0;
    v143 = viewHeightCurrent * -0.5;
    v144 = FLOAT_N6_0;
    v145 = FLOAT_N6_0;
    v146 = viewHeightCurrent * -0.64999998;
    v147 = FLOAT_N6_0;
    v148 = FLOAT_N6_0;
    v149 = viewHeightCurrent * -0.80000001;
    v6 = DVARFLT_cg_playerLightSampleShapeSize;
    if ( !DVARFLT_cg_playerLightSampleShapeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleShapeSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.value;
    v8 = DVARVEC3_cg_playerLightSampleShapeOffset;
    if ( !DVARVEC3_cg_playerLightSampleShapeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleShapeOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = v8->current.value;
    v10 = v8->current.vector.v[1];
    v11 = v8->current.vector.v[2];
    if ( s_radius != v7 || s_sampleOffset.v[0] != v9 || s_sampleOffset.v[1] != v10 || s_sampleOffset.v[2] != v11 )
    {
      s_offsetCylinderReady = 0;
      s_offsetHemisphereReady = 0;
    }
    v12 = (vec3_t *)v114;
    v13 = DVARINT_cg_playerLightSamplePos;
    if ( !DVARINT_cg_playerLightSamplePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSamplePos") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    if ( !integer )
    {
      v12 = (vec3_t *)v114;
      v15 = 6i64;
      *(_QWORD *)s = 6i64;
      goto LABEL_40;
    }
    if ( integer == 1 )
    {
      if ( !s_offsetCylinderReady )
      {
        v16 = 0;
        v17 = &s_offsetCylinder[0].v[1];
        do
        {
          v18 = 0i64;
          v19 = 6i64;
          do
          {
            FastSinCos(*(const float *)&v18, s, c);
            *(v17 - 1) = (float)(v7 * s[0]) + v9;
            *v17 = (float)(v7 * c[0]) + v10;
            v17[1] = (float)((float)(1.0 - (float)v16) * 12.0) + v11;
            v20 = v18;
            *(float *)&v20 = *(float *)&v18 + 1.0471976;
            v18 = v20;
            v17 += 3;
            --v19;
          }
          while ( v19 );
          ++v16;
        }
        while ( v16 < 3 );
        s_offsetCylinderReady = 1;
      }
      v12 = s_offsetCylinder;
      v15 = 0i64;
    }
    else
    {
      v15 = 0i64;
      *(_QWORD *)s = 0i64;
      if ( integer != 2 )
        goto LABEL_40;
      if ( !s_offsetHemisphereReady )
      {
        v21 = LODWORD(FLOAT_0_027777778);
        v22 = 0.0;
        v23 = LODWORD(FLOAT_1_0);
        v24 = &s_offsetHemisphere[1].v[1];
        v25 = 2i64;
        v26 = FLOAT_0_055555556;
        v27 = FLOAT_N0_67549032;
        v28 = FLOAT_0_73736888;
        do
        {
          v29 = fsqrt(1.0 - (float)(*(float *)&v21 * *(float *)&v21));
          *(v24 - 4) = (float)((float)(v29 * v7) * *(float *)&v23) + v9;
          *(v24 - 3) = (float)((float)(v29 * v7) * v22) + v10;
          *(v24 - 2) = (float)(*(float *)&v21 * v7) + v11;
          v31 = v21;
          *(float *)&v31 = *(float *)&v21 + v26;
          v30 = v31;
          v32 = (float)(*(float *)&v23 * v27) - (float)(v22 * v28);
          v33 = v23;
          *(float *)&v33 = (float)(*(float *)&v23 * -0.73736888) - (float)(v22 * v27);
          v34 = v33;
          *(float *)&v33 = fsqrt(1.0 - (float)(*(float *)&v30 * *(float *)&v30));
          *(v24 - 1) = (float)((float)(*(float *)&v33 * v7) * *(float *)&v34) + v9;
          *v24 = (float)((float)(*(float *)&v33 * v7) * v32) + v10;
          v24[1] = (float)(*(float *)&v30 * v7) + v11;
          v36 = v30;
          *(float *)&v36 = *(float *)&v30 + v26;
          v35 = v36;
          v37 = (float)(*(float *)&v34 * -0.67549032) - (float)(v32 * v28);
          v38 = v34;
          *(float *)&v38 = (float)(*(float *)&v34 * -0.73736888) - (float)(v32 * -0.67549032);
          v39 = v38;
          *(float *)&v38 = fsqrt(1.0 - (float)(*(float *)&v35 * *(float *)&v35));
          v24[2] = (float)((float)(*(float *)&v38 * v7) * *(float *)&v39) + v9;
          v24[3] = (float)((float)(*(float *)&v38 * v7) * v37) + v10;
          v24[4] = (float)(*(float *)&v35 * v7) + v11;
          v41 = v35;
          *(float *)&v41 = *(float *)&v35 + 0.055555556;
          v40 = v41;
          v42 = (float)(*(float *)&v39 * -0.67549032) - (float)(v37 * 0.73736888);
          v43 = v39;
          *(float *)&v43 = (float)(*(float *)&v39 * -0.73736888) - (float)(v37 * -0.67549032);
          v44 = v43;
          *(float *)&v43 = fsqrt(1.0 - (float)(*(float *)&v40 * *(float *)&v40));
          v24[5] = (float)((float)(*(float *)&v43 * v7) * *(float *)&v44) + v9;
          v24[6] = (float)((float)(*(float *)&v43 * v7) * v42) + v10;
          v24[7] = (float)(*(float *)&v40 * v7) + v11;
          v46 = v40;
          *(float *)&v46 = *(float *)&v40 + 0.055555556;
          v45 = v46;
          v47 = (float)(*(float *)&v44 * -0.67549032) - (float)(v42 * 0.73736888);
          v48 = v44;
          *(float *)&v48 = (float)(*(float *)&v44 * -0.73736888) - (float)(v42 * -0.67549032);
          v49 = v48;
          *(float *)&v48 = fsqrt(1.0 - (float)(*(float *)&v45 * *(float *)&v45));
          v24[8] = (float)((float)(*(float *)&v48 * v7) * *(float *)&v49) + v9;
          v24[9] = (float)((float)(*(float *)&v48 * v7) * v47) + v10;
          v24[10] = (float)(*(float *)&v45 * v7) + v11;
          v51 = v45;
          *(float *)&v51 = *(float *)&v45 + 0.055555556;
          v50 = v51;
          v52 = (float)(*(float *)&v49 * -0.67549032) - (float)(v47 * 0.73736888);
          v53 = v49;
          *(float *)&v53 = (float)(*(float *)&v49 * -0.73736888) - (float)(v47 * -0.67549032);
          v54 = v53;
          *(float *)&v53 = fsqrt(1.0 - (float)(*(float *)&v50 * *(float *)&v50));
          v24[11] = (float)((float)(*(float *)&v53 * v7) * *(float *)&v54) + v9;
          v24[12] = (float)((float)(*(float *)&v53 * v7) * v52) + v10;
          v24[13] = (float)(*(float *)&v50 * v7) + v11;
          v56 = v50;
          *(float *)&v56 = *(float *)&v50 + 0.055555556;
          v55 = v56;
          v57 = (float)(*(float *)&v54 * -0.67549032) - (float)(v52 * 0.73736888);
          v58 = v54;
          *(float *)&v58 = (float)(*(float *)&v54 * -0.73736888) - (float)(v52 * -0.67549032);
          v59 = v58;
          *(float *)&v58 = fsqrt(1.0 - (float)(*(float *)&v55 * *(float *)&v55));
          v24[14] = (float)(*(float *)&v59 * (float)(*(float *)&v58 * v7)) + v9;
          v24[15] = (float)(v57 * (float)(*(float *)&v58 * v7)) + v10;
          v24[16] = (float)(*(float *)&v55 * v7) + v11;
          v61 = v55;
          *(float *)&v61 = *(float *)&v55 + 0.055555556;
          v60 = v61;
          v62 = (float)(*(float *)&v59 * -0.67549032) - (float)(v57 * 0.73736888);
          v63 = v59;
          *(float *)&v63 = (float)(*(float *)&v59 * -0.73736888) - (float)(v57 * -0.67549032);
          v64 = v63;
          *(float *)&v63 = fsqrt(1.0 - (float)(*(float *)&v60 * *(float *)&v60));
          v24[17] = (float)(*(float *)&v64 * (float)(*(float *)&v63 * v7)) + v9;
          v24[18] = (float)(v62 * (float)(*(float *)&v63 * v7)) + v10;
          v24[19] = (float)(*(float *)&v60 * v7) + v11;
          v66 = v60;
          *(float *)&v66 = *(float *)&v60 + 0.055555556;
          v65 = v66;
          v67 = (float)(*(float *)&v64 * -0.67549032) - (float)(v62 * 0.73736888);
          v68 = v64;
          *(float *)&v68 = *(float *)&v64 * -0.73736888;
          v27 = FLOAT_N0_67549032;
          *(float *)&v68 = *(float *)&v68 - (float)(v62 * -0.67549032);
          v69 = v68;
          *(float *)&v68 = fsqrt(1.0 - (float)(*(float *)&v65 * *(float *)&v65)) * v7;
          v24[20] = (float)(*(float *)&v69 * *(float *)&v68) + v9;
          v24[21] = (float)(v67 * *(float *)&v68) + v10;
          v24[22] = (float)(*(float *)&v65 * v7) + v11;
          v70 = v65;
          *(float *)&v70 = *(float *)&v65 + 0.055555556;
          v21 = v70;
          v22 = (float)(*(float *)&v69 * -0.67549032) - (float)(v67 * 0.73736888);
          v71 = v69;
          *(float *)&v71 = (float)(*(float *)&v69 * -0.73736888) - (float)(v67 * -0.67549032);
          v23 = v71;
          v24 += 27;
          --v25;
          v26 = FLOAT_0_055555556;
          v28 = FLOAT_0_73736888;
        }
        while ( v25 );
        s_offsetHemisphereReady = 1;
        value = c[0];
      }
      v12 = s_offsetHemisphere;
    }
    *(_QWORD *)s = 0i64;
LABEL_40:
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(s[2]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    LODWORD(s[3]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    LODWORD(s[4]) = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    p_axis = &LocalClientGlobals->refdef.view.axis;
    v74 = LocalClientGlobals->refdef.view.axis.m[0].v[1];
    v75 = LODWORD(LocalClientGlobals->refdef.view.axis.m[0].v[0]);
    v76 = v75;
    *(float *)&v76 = fsqrt((float)(*(float *)&v75 * *(float *)&v75) + (float)(v74 * v74));
    _XMM2 = v76;
    __asm
    {
      vcmpless xmm0, xmm2, xmm15
      vblendvps xmm1, xmm2, xmm13, xmm0
    }
    v80 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v75;
    v81 = (float)(1.0 / *(float *)&_XMM1) * v74;
    LODWORD(v82) = LODWORD(v81) ^ _xmm;
    v83 = DVARINT_cg_playerLightSampleNormal;
    if ( !DVARINT_cg_playerLightSampleNormal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleNormal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v83);
    v84 = v83->current.integer;
    v85 = 0i64;
    v86 = center;
    v87 = (char *)v12 - (char *)center;
    v110 = (char *)v12 - (char *)center;
    v88 = 0i64;
    v109 = 18i64;
    while ( 1 )
    {
      if ( v85 < 0 || v85 >= v15 )
      {
        v = v12[v88 / 0xC].v;
        if ( &v12[v88 / 0xC] == &out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        v93 = LODWORD(v12[v88 / 0xC].v[1]);
        v94 = *v;
        v95 = v12[v88 / 0xC].v[2];
        v91 = (float)((float)(*(float *)&v93 * v82) + (float)(*v * v80)) + (float)(0.0 * v95);
        out.v[0] = v91;
        v96 = v93;
        *(float *)&v96 = (float)((float)(*(float *)&v93 * v80) + (float)(v81 * v94)) + (float)(0.0 * v95);
        v90 = v96;
        out.v[1] = *(float *)&v96;
        v89 = (float)((float)(*(float *)&v93 * 0.0) + (float)(0.0 * v94)) + (float)(1.0 * v95);
        out.v[2] = v89;
      }
      else
      {
        MatrixTransformVector((const vec3_t *)((char *)v86 + v87), p_axis, &out);
        v89 = out.v[2];
        v90 = LODWORD(out.v[1]);
        v91 = out.v[0];
      }
      center[v88 / 0xC].v[0] = v91 + s[2];
      center[v88 / 0xC].v[1] = *(float *)&v90 + s[3];
      center[v88 / 0xC].v[2] = v89 + s[4];
      switch ( v84 )
      {
        case 0:
          *(__int64 *)((char *)v150 + v88) = 0i64;
          *(_DWORD *)((char *)&v150[1] + v88) = 0;
          goto LABEL_68;
        case 1:
          *(__int64 *)((char *)v150 + v88) = 0i64;
          *(_DWORD *)((char *)&v150[1] + v88) = 1065353216;
          goto LABEL_68;
        case 2:
          *(__int64 *)((char *)v150 + v88) = *(__int64 *)p_axis->m[0].v;
          *(float *)((char *)&v150[1] + v88) = p_axis->m[0].v[2];
          goto LABEL_68;
        case 3:
          *(float *)((char *)v150 + v88) = COERCE_FLOAT(LODWORD(p_axis->m[0].v[0]) ^ _xmm);
          *(float *)((char *)v150 + v88 + 4) = COERCE_FLOAT(LODWORD(p_axis->m[0].v[1]) ^ _xmm);
          LODWORD(v97) = LODWORD(p_axis->m[0].v[2]) ^ _xmm;
          break;
        case 4:
          v98 = v90;
          *(float *)&v98 = fsqrt((float)((float)(*(float *)&v90 * *(float *)&v90) + (float)(v91 * v91)) + (float)(v89 * v89));
          _XMM3 = v98;
          __asm
          {
            vcmpless xmm0, xmm3, xmm15
            vblendvps xmm1, xmm3, xmm13, xmm0
          }
          *(float *)((char *)v150 + v88) = (float)(1.0 / *(float *)&_XMM1) * v91;
          *(float *)((char *)v150 + v88 + 4) = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v90;
          v97 = (float)(1.0 / *(float *)&_XMM1) * v89;
          break;
        default:
          goto LABEL_68;
      }
      *(float *)((char *)&v150[1] + v88) = v97;
LABEL_68:
      v102 = DCONST_DVARBOOL_cg_drawPlayerLightSample;
      if ( !DCONST_DVARBOOL_cg_drawPlayerLightSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerLightSample") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v102);
      if ( v102->current.enabled )
      {
        CG_DebugSphere(v86, value, &colorYellow, 1, 1);
        if ( v84 )
        {
          v103 = value * *(float *)((char *)v150 + v88 + 4);
          v104 = value * *(float *)((char *)&v150[1] + v88);
          end.v[0] = (float)(value * *(float *)((char *)v150 + v88)) + center[v88 / 0xC].v[0];
          end.v[1] = v103 + center[v88 / 0xC].v[1];
          end.v[2] = v104 + center[v88 / 0xC].v[2];
          CG_DebugLine(v86, &end, &colorRed, 1, 1);
        }
      }
      ++v86;
      ++v85;
      v88 += 12i64;
      v105 = v109-- == 1;
      LODWORD(v82) = LODWORD(v81) ^ _xmm;
      v15 = *(_QWORD *)s;
      v87 = v110;
      if ( v105 )
      {
        v106 = (const vec3_t *)v150;
        if ( !v84 )
          v106 = NULL;
        R_AllocLightSensors(0, center, 0x12u, value, v106);
        memset(&s[2], 0, 0xCui64);
        return;
      }
    }
  }
}

/*
==============
CG_LightSampler_Compare
==============
*/
__int64 CG_LightSampler_Compare(const void *a, const void *b)
{
  __int64 result; 

  result = 1i64;
  if ( *(float *)a <= *(float *)b )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
CG_LightSampler_DataChanged
==============
*/
bool CG_LightSampler_DataChanged(const usercmd_s *pPrevCmd, const usercmd_s *pNextCmd)
{
  return pPrevCmd->lightSample.bValid != pNextCmd->lightSample.bValid || pPrevCmd->lightSample.value != pNextCmd->lightSample.value;
}

/*
==============
CG_LightSampler_ProcessResults
==============
*/
void CG_LightSampler_ProcessResults(LocalClientNum_t clientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  unsigned int v4; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  signed int v11; 
  __int128 v12; 
  __int64 v13; 
  __int128 v14; 
  __int128 v15; 
  float v16; 
  unsigned int sampleCount; 
  __int64 v18; 
  __int128 v19; 
  signed int v20; 
  __int64 i; 
  __int128 v22; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  double Float; 
  float v27; 
  unsigned int v28; 
  const OmnvarDef *v29; 
  const OmnvarData *v30; 
  double v31; 
  float v32; 
  double v33; 
  const dvar_t *v34; 
  const char *v35; 
  const char *v36; 
  GfxLightSensorResult lightSensorOut; 
  __int64 v38; 
  float v39[2]; 
  float Base[64]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(clientNum);
  if ( R_LightSensor_Query(&lightSensorOut) )
  {
    v3 = DVARINT_cg_playerLightSampleFilter;
    if ( !DVARINT_cg_playerLightSampleFilter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLightSampleFilter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.integer )
    {
      if ( lightSensorOut.entity[0].sampleCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_light_sampler.cpp", 117, ASSERT_TYPE_ASSERT, "(64 >= pMapping->sampleCount)", (const char *)&queryFormat, "LIGHT_SENSOR_MAX_ENTITY_SAMPLES >= pMapping->sampleCount") )
        __debugbreak();
      sampleCount = lightSensorOut.entity[0].sampleCount;
      memcpy_0(Base, &lightSensorOut.sampleLuminance[lightSensorOut.entity[0].firstSample], 4i64 * lightSensorOut.entity[0].sampleCount);
      qsort(Base, sampleCount, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_LightSampler_Compare);
      if ( lightSensorOut.entity[0].sampleCount < 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_light_sampler.cpp", 124, ASSERT_TYPE_ASSERT, "(pMapping->sampleCount >= 12)", (const char *)&queryFormat, "pMapping->sampleCount >= 12") )
        __debugbreak();
      v18 = lightSensorOut.entity[0].sampleCount - 3;
      v19 = 0i64;
      v20 = lightSensorOut.entity[0].sampleCount - 6;
      if ( v18 > 3 )
      {
        for ( i = 3i64; i < v18; ++i )
        {
          if ( Base[i] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_light_sampler.cpp", 134, ASSERT_TYPE_ASSERT, "(sampleLuminance[i] >= 0.0f)", (const char *)&queryFormat, "sampleLuminance[i] >= 0.0f") )
            __debugbreak();
          v22 = v19;
          *(float *)&v22 = *(float *)&v19 + Base[i];
          v19 = v22;
        }
      }
      v16 = *(float *)&v19 / (float)v20;
    }
    else
    {
      v4 = 0;
      v38 = 0i64;
      v39[0] = 0.0;
      if ( lightSensorOut.entity[0].sampleCount )
      {
        _XMM3 = LODWORD(v39[0]);
        v6 = HIDWORD(v38);
        v7 = (unsigned int)v38;
        do
        {
          v8 = LODWORD(lightSensorOut.sampleLuminance[lightSensorOut.entity[0].firstSample + v4]);
          if ( *(float *)&v8 >= 0.0 )
          {
            if ( *(float *)&v8 <= *(float *)&v7 )
            {
              if ( *(float *)&v8 <= *(float *)&v6 )
              {
                __asm
                {
                  vcmpltss xmm0, xmm3, xmm1
                  vblendvps xmm0, xmm3, xmm1, xmm0
                }
                _XMM3 = _XMM0;
                v39[0] = *(float *)&_XMM0;
              }
              else
              {
                v39[0] = *(float *)&v6;
                _XMM3 = v6;
                v6 = v8;
                *((float *)&v38 + 1) = *(float *)&v8;
              }
            }
            else
            {
              v39[0] = *(float *)&v6;
              _XMM3 = v6;
              v6 = v7;
              *((float *)&v38 + 1) = *(float *)&v7;
              v7 = v8;
            }
          }
          ++v4;
        }
        while ( v4 < lightSensorOut.entity[0].sampleCount );
        *(float *)&v38 = *(float *)&v7;
      }
      v11 = 3;
      v12 = 0i64;
      if ( (int)lightSensorOut.entity[0].sampleCount < 3 )
        v11 = lightSensorOut.entity[0].sampleCount;
      v13 = 0i64;
      if ( v11 > 0i64 )
      {
        if ( v11 >= 4i64 )
        {
          do
          {
            v14 = v12;
            *(float *)&v14 = (float)((float)((float)(*(float *)&v12 + v39[v13 - 2]) + v39[v13 - 1]) + v39[v13]) + v39[v13 + 1];
            v12 = v14;
            v13 += 4i64;
          }
          while ( v13 < v11 - 3i64 );
        }
        for ( ; v13 < v11; ++v13 )
        {
          v15 = v12;
          *(float *)&v15 = *(float *)&v12 + v39[v13 - 2];
          v12 = v15;
        }
      }
      v16 = *(float *)&v12 / (float)v11;
    }
    IndexByName = BG_Omnvar_GetIndexByName("ai_fulllight");
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(clientNum, IndexByName);
    Float = Omnvar_GetFloat(Def, Data);
    v27 = *(float *)&Float;
    v28 = BG_Omnvar_GetIndexByName("ai_nolight");
    v29 = BG_Omnvar_GetDef(v28);
    v30 = CG_Omnvar_GetData(clientNum, v28);
    v31 = Omnvar_GetFloat(v29, v30);
    v32 = *(float *)&v31;
    v33 = I_fclamp((float)(v16 - *(float *)&v31) / (float)(v27 - *(float *)&v31), 0.0, 1.0);
    LocalClientGlobals->lightSample.value = (int)(float)(*(float *)&v33 * 7.0);
    LocalClientGlobals->lightSample.bValid = 1;
    v34 = DCONST_DVARBOOL_cg_drawPlayerLightSample;
    if ( !DCONST_DVARBOOL_cg_drawPlayerLightSample && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawPlayerLightSample") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.enabled )
    {
      v35 = j_va("light %.3f knits, %.3f nits", v16, (float)(v16 * 1000.0));
      CL_AddDebugString2D(100.0, 250.0, &colorYellow, 1.0, v35, 0, 1);
      v36 = j_va("light nml = %.3f, no light = %.3f nits, full light = %.3f nits", *(float *)&v33, (float)(v32 * 1000.0), (float)(v27 * 1000.0));
      CL_AddDebugString2D(100.0, 270.0, &colorYellow, 1.0, v36, 0, 1);
    }
  }
  else
  {
    LocalClientGlobals->lightSample = 0;
  }
}

/*
==============
CG_LightSampler_Update
==============
*/
void CG_LightSampler_Update(LocalClientNum_t clientNum)
{
  CG_LightSampler_ProcessResults(clientNum);
  CG_LightSampler_AddSamples(clientNum);
}

