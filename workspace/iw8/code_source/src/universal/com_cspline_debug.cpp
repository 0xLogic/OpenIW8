/*
==============
Com_CSpline_RegisterDvars
==============
*/

void Com_CSpline_RegisterDvars(void)
{
  ?Com_CSpline_RegisterDvars@@YAXXZ();
}

/*
==============
Com_CSpline_DebugRender
==============
*/

void __fastcall Com_CSpline_DebugRender(LocalClientNum_t localclientNum)
{
  ?Com_CSpline_DebugRender@@YAXW4LocalClientNum_t@@@Z(localclientNum);
}

/*
==============
Com_CSpline_DebugRender
==============
*/
void Com_CSpline_DebugRender(LocalClientNum_t localclientNum)
{
  bool v1; 
  const ScreenPlacement *v2; 
  unsigned __int16 v3; 
  __int128 v4; 
  const char *v5; 
  unsigned __int16 i; 
  int integer; 
  double CSplineLength; 
  unsigned __int16 CSplinePointCount; 
  float v10; 
  __int128 v11; 
  const char *v12; 
  unsigned __int16 v13; 
  float v14; 
  int v15; 
  int v16; 
  unsigned __int16 v17; 
  int v18; 
  int v19; 
  __int128 v20; 
  __int128 v21; 
  float v25; 
  __int128 v26; 
  __int128 v27; 
  float v28; 
  __int128 v29; 
  __int128 v30; 
  float v31; 
  float v32; 
  __int128 v33; 
  float v34; 
  float v38; 
  float v39; 
  float v40; 
  __int128 v41; 
  float v42; 
  float v43; 
  scr_string_t CSplinePointLabel; 
  const char *v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  int v59; 
  float v60; 
  float v61; 
  __int128 v62; 
  float v66; 
  __int128 v67; 
  __int128 v68; 
  float v69; 
  __int128 v70; 
  __int128 v71; 
  float v72; 
  float v73; 
  float v74; 
  __int128 v75; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  __int128 v83; 
  float v84; 
  float v85; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  __int128 v99; 
  float v103; 
  __int128 v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  __int128 v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  char *fmt; 
  __int64 forceColor; 
  float v134; 
  unsigned __int16 CSplineCount; 
  vec2_t v136; 
  tmat33_t<vec3_t> axes; 
  vec2_t v138; 
  vec3_t v139; 
  vec3_t v140; 
  vec3_t v141; 
  vec3_t v142; 
  vec3_t v143; 
  vec3_t out_position; 
  vec2_t out_dims; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v148; 
  vec3_t v149; 
  vec3_t v150; 
  vec3_t v151; 
  vec3_t v152; 
  vec3_t v153; 
  vec3_t v154; 
  char dest[128]; 

  if ( !cSplineDebugRender->current.enabled )
    return;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_8;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v1 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v1 )
      __debugbreak();
LABEL_8:
    v2 = &scrPlaceFull;
    goto LABEL_9;
  }
  v2 = &scrPlaceViewDisplay[localclientNum];
LABEL_9:
  CSplineCount = Com_GetCSplineCount();
  v3 = CSplineCount;
  if ( cSplineDebugRenderData->current.enabled )
  {
    CG_DrawStringExt(v2, 0.0, 48.0, "Spline Data:", &colorGreen, 0, 1, 12.0, 0);
    v4 = LODWORD(FLOAT_2_0);
    v5 = j_va(" Num Splines: %d", CSplineCount);
    CG_DrawStringExt(v2, 0.0, 60.0, v5, &colorGreen, 0, 1, 12.0, 0);
    for ( i = 1; i <= CSplineCount; ++i )
    {
      integer = cSplineDebugRenderSplineId->current.integer;
      if ( !integer || integer == i )
      {
        CSplineLength = Com_GetCSplineLength(i);
        CSplinePointCount = Com_GetCSplinePointCount(i);
        v10 = (float)(*(float *)&v4 * 12.0) + 48.0;
        v11 = v4;
        *(float *)&v11 = *(float *)&v4 + 1.0;
        v4 = v11;
        v12 = j_va(" Spline %d: points:%d length:%.2f", i, CSplinePointCount, *(float *)&CSplineLength);
        CG_DrawStringExt(v2, 0.0, v10, v12, &colorGreen, 0, 1, 12.0, 0);
      }
    }
  }
  v13 = 1;
  if ( CSplineCount )
  {
    v14 = FLOAT_0_5;
    do
    {
      v15 = cSplineDebugRenderSplineId->current.integer;
      if ( !v15 || v15 == v13 )
      {
        v16 = Com_GetCSplinePointCount(v13);
        v17 = 0;
        v18 = cSplineDebugRenderResolution->current.integer / v16;
        v19 = v16 - 1;
        do
        {
          v20 = LODWORD(FLOAT_1_0);
          axes.m[2].v[2] = FLOAT_1_0;
          axes.m[2].v[0] = 0.0;
          axes.m[2].v[1] = 0.0;
          Com_GetCSplinePointTangent(v13, v17, &axes.m[1]);
          v21 = LODWORD(axes.m[1].v[1]);
          *(float *)&v21 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(axes.m[1].v[0] * axes.m[1].v[0])) + (float)(axes.m[1].v[2] * axes.m[1].v[2]));
          _XMM3 = v21;
          __asm
          {
            vcmpless xmm0, xmm3, xmm14
            vblendvps xmm1, xmm3, xmm13, xmm0
          }
          v26 = LODWORD(axes.m[1].v[0]);
          v25 = axes.m[1].v[0] * (float)(1.0 / *(float *)&_XMM1);
          *(float *)&v26 = v25 * axes.m[2].v[2];
          v27 = v26;
          v28 = axes.m[1].v[1] * (float)(1.0 / *(float *)&_XMM1);
          v30 = LODWORD(axes.m[1].v[2]);
          *(float *)&v30 = axes.m[1].v[2] * (float)(1.0 / *(float *)&_XMM1);
          v29 = v30;
          v31 = (float)(*(float *)&v30 * axes.m[2].v[1]) - (float)(v28 * axes.m[2].v[2]);
          v33 = v27;
          v32 = *(float *)&v27 - (float)(*(float *)&v29 * axes.m[2].v[0]);
          v34 = (float)(v28 * axes.m[2].v[0]) - (float)(v25 * axes.m[2].v[1]);
          *(float *)&v33 = fsqrt((float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v34 * v34));
          _XMM3 = v33;
          __asm
          {
            vcmpless xmm0, xmm3, xmm14
            vblendvps xmm1, xmm3, xmm13, xmm0
          }
          *(float *)&_XMM3 = v34 * (float)(1.0 / *(float *)&_XMM1);
          v38 = v32 * (float)(1.0 / *(float *)&_XMM1);
          v39 = v31 * (float)(1.0 / *(float *)&_XMM1);
          v40 = (float)(*(float *)&_XMM3 * v28) - (float)(v38 * *(float *)&v29);
          v41 = v29;
          v42 = (float)(*(float *)&v29 * v39) - (float)(*(float *)&_XMM3 * v25);
          axes.m[0].v[2] = *(float *)&_XMM3;
          axes.m[0].v[1] = v38;
          v43 = (float)(v38 * v25) - (float)(v39 * v28);
          *(float *)&v41 = fsqrt((float)((float)(v42 * v42) + (float)(v40 * v40)) + (float)(v43 * v43));
          _XMM1 = v41;
          __asm
          {
            vcmpless xmm0, xmm1, xmm14
            vblendvps xmm1, xmm1, xmm13, xmm0
          }
          axes.m[2].v[0] = v40 * (float)(1.0 / *(float *)&_XMM1);
          axes.m[2].v[2] = v43 * (float)(1.0 / *(float *)&_XMM1);
          axes.m[1].v[0] = v25;
          axes.m[1].v[1] = v28;
          axes.m[1].v[2] = *(float *)&v29;
          axes.m[0].v[0] = v39;
          axes.m[2].v[1] = v42 * (float)(1.0 / *(float *)&_XMM1);
          CSplinePointLabel = Com_GetCSplinePointLabel(v13, v17);
          if ( CSplinePointLabel )
          {
            v48 = SL_ConvertToString(CSplinePointLabel);
            LODWORD(forceColor) = Com_GetCSplinePointId(v13, v17);
            LODWORD(fmt) = v17;
            Com_sprintf(dest, 0x80ui64, "%d:%d:%d:%s", v13, fmt, forceColor, v48);
            v19 = v16 - 1;
          }
          else
          {
            LODWORD(forceColor) = Com_GetCSplinePointId(v13, v17);
            LODWORD(fmt) = v17;
            Com_sprintf(dest, 0x80ui64, "%d:%d:%d", v13, fmt, forceColor);
          }
          Com_GetCSplinePointPosition(v13, v17, &out_position);
          CG_DebugAxis(&axes, &out_position, 4.0, 1, 0);
          CG_DebugString(&out_position, &colorGreen, v14, dest, 0, 0);
          if ( cSplineDebugRenderCorridor->current.enabled )
          {
            Com_GetCSplinePointCorridorDims(v13, v17, &out_dims);
            v49 = (float)((float)(out_dims.v[0] * -0.5) * axes.m[0].v[0]) + out_position.v[0];
            v50 = (float)((float)(out_dims.v[0] * -0.5) * axes.m[0].v[2]) + out_position.v[2];
            v51 = (float)((float)(out_dims.v[0] * -0.5) * axes.m[0].v[1]) + out_position.v[1];
            v52 = (float)((float)(out_dims.v[0] * v14) * axes.m[0].v[1]) + out_position.v[1];
            v53 = (float)((float)(out_dims.v[0] * v14) * axes.m[0].v[0]) + out_position.v[0];
            v54 = (float)(out_dims.v[1] * -0.5) * axes.m[2].v[1];
            v55 = (float)(out_dims.v[1] * -0.5) * axes.m[2].v[0];
            v56 = (float)((float)(out_dims.v[0] * v14) * axes.m[0].v[2]) + out_position.v[2];
            v57 = (float)(out_dims.v[1] * -0.5) * axes.m[2].v[2];
            start.v[0] = v49 + v55;
            start.v[1] = v51 + v54;
            start.v[2] = v50 + v57;
            end.v[0] = v53 + v55;
            v58 = (float)(out_dims.v[1] * v14) * axes.m[2].v[0];
            end.v[1] = v52 + v54;
            end.v[2] = v56 + v57;
            v148.v[0] = v49 + v58;
            v148.v[1] = v51 + (float)((float)(out_dims.v[1] * v14) * axes.m[2].v[1]);
            v148.v[2] = v50 + (float)((float)(out_dims.v[1] * v14) * axes.m[2].v[2]);
            v149.v[0] = v53 + v58;
            v149.v[1] = v52 + (float)((float)(out_dims.v[1] * v14) * axes.m[2].v[1]);
            v149.v[2] = v56 + (float)((float)(out_dims.v[1] * v14) * axes.m[2].v[2]);
            CG_DebugLine(&start, &end, &colorGreen, 1, 0);
            CG_DebugLine(&end, &v149, &colorGreen, 1, 0);
            CG_DebugLine(&v149, &v148, &colorGreen, 1, 0);
            CG_DebugLine(&v148, &start, &colorGreen, 1, 0);
            v20 = LODWORD(FLOAT_1_0);
          }
          if ( v17 < v19 )
          {
            v150 = out_position;
            v59 = 0;
            v151 = start;
            v152 = end;
            v153 = v148;
            v154 = v149;
            v136 = out_dims;
            if ( v18 > 0 )
            {
              v60 = *(float *)&v20 / (float)(v18 - 1);
              v134 = v60;
              do
              {
                v61 = (float)v59 * v60;
                Com_CalcCSplinePosition(v13, v17, v61, &v139);
                CG_DebugLine(&v150, &v139, &colorYellow, 1, 0);
                v150 = v139;
                if ( cSplineDebugRenderCorridor->current.enabled )
                {
                  Com_CalcCSplineCorridor(v13, v17, v61, &v138);
                  axes.m[2].v[0] = 0.0;
                  axes.m[2].v[1] = 0.0;
                  axes.m[2].v[2] = *(float *)&v20;
                  Com_CalcCSplineTangent(v13, v17, v61, &axes.m[1]);
                  v62 = LODWORD(axes.m[1].v[1]);
                  *(float *)&v62 = fsqrt((float)((float)(*(float *)&v62 * *(float *)&v62) + (float)(axes.m[1].v[0] * axes.m[1].v[0])) + (float)(axes.m[1].v[2] * axes.m[1].v[2]));
                  _XMM3 = v62;
                  __asm
                  {
                    vcmpless xmm0, xmm3, xmm14
                    vblendvps xmm1, xmm3, xmm13, xmm0
                  }
                  v67 = LODWORD(axes.m[1].v[0]);
                  v66 = axes.m[1].v[0] * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  *(float *)&v67 = v66 * axes.m[2].v[2];
                  v68 = v67;
                  v69 = axes.m[1].v[1] * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  v71 = LODWORD(axes.m[1].v[2]);
                  *(float *)&v71 = axes.m[1].v[2] * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  v70 = v71;
                  v72 = (float)(*(float *)&v71 * axes.m[2].v[1]) - (float)(v69 * axes.m[2].v[2]);
                  v73 = (float)(v69 * axes.m[2].v[0]) - (float)(v66 * axes.m[2].v[1]);
                  v75 = v68;
                  v74 = *(float *)&v68 - (float)(*(float *)&v70 * axes.m[2].v[0]);
                  *(float *)&v75 = fsqrt((float)((float)(v74 * v74) + (float)(v72 * v72)) + (float)(v73 * v73));
                  _XMM3 = v75;
                  __asm
                  {
                    vcmpless xmm0, xmm3, xmm14
                    vblendvps xmm1, xmm3, xmm13, xmm0
                  }
                  v79 = v73 * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  v80 = v72 * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  v81 = v74 * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  v82 = (float)(v79 * v69) - (float)(v81 * *(float *)&v70);
                  v83 = v70;
                  v84 = (float)(*(float *)&v70 * v80) - (float)(v66 * v79);
                  v85 = (float)(v66 * v81) - (float)(v80 * v69);
                  *(float *)&v83 = fsqrt((float)((float)(v84 * v84) + (float)(v82 * v82)) + (float)(v85 * v85));
                  _XMM1 = v83;
                  __asm
                  {
                    vcmpless xmm0, xmm1, xmm14
                    vblendvps xmm1, xmm1, xmm13, xmm0
                  }
                  axes.m[1].v[0] = v66;
                  axes.m[1].v[1] = v69;
                  axes.m[1].v[2] = *(float *)&v70;
                  axes.m[0].v[0] = v80;
                  axes.m[0].v[1] = v81;
                  axes.m[0].v[2] = v79;
                  axes.m[2].v[0] = v82 * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  axes.m[2].v[1] = v84 * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  axes.m[2].v[2] = v85 * (float)(*(float *)&v20 / *(float *)&_XMM1);
                  v89 = (float)(v80 * (float)(v138.v[0] * -0.5)) + v139.v[0];
                  v90 = (float)(v79 * (float)(v138.v[0] * -0.5)) + v139.v[2];
                  v91 = (float)(v81 * (float)(v138.v[0] * -0.5)) + v139.v[1];
                  v92 = (float)((float)(v138.v[0] * 0.5) * axes.m[0].v[0]) + v139.v[0];
                  *(float *)&v70 = (float)(v79 * (float)(v138.v[0] * 0.5)) + v139.v[2];
                  v93 = v138.v[1];
                  v94 = (float)((float)(v138.v[0] * 0.5) * v81) + v139.v[1];
                  v95 = (float)(v138.v[1] * -0.5) * axes.m[2].v[0];
                  v96 = (float)(v138.v[1] * -0.5) * axes.m[2].v[1];
                  *(float *)&_XMM3 = (float)(v138.v[1] * -0.5) * axes.m[2].v[2];
                  v140.v[0] = v89 + v95;
                  v140.v[2] = v90 + *(float *)&_XMM3;
                  v140.v[1] = v91 + v96;
                  v141.v[1] = v94 + v96;
                  v141.v[0] = v92 + v95;
                  v97 = (float)(v138.v[1] * 0.5) * axes.m[2].v[0];
                  v141.v[2] = *(float *)&v70 + *(float *)&_XMM3;
                  v142.v[0] = v97 + v89;
                  *(float *)&_XMM3 = (float)(v138.v[1] * 0.5) * axes.m[2].v[2];
                  v142.v[2] = *(float *)&_XMM3 + v90;
                  v142.v[1] = (float)((float)(v138.v[1] * 0.5) * axes.m[2].v[1]) + v91;
                  v143.v[1] = (float)((float)(v138.v[1] * 0.5) * axes.m[2].v[1]) + v94;
                  v98 = v138.v[0];
                  v143.v[0] = v97 + v92;
                  v143.v[2] = *(float *)&_XMM3 + *(float *)&v70;
                  if ( v138.v[0] > 0.0 || v138.v[1] > 0.0 )
                  {
                    CG_DebugLine(&v140, &v141, &colorYellow, 1, 0);
                    CG_DebugLine(&v141, &v143, &colorYellow, 1, 0);
                    CG_DebugLine(&v143, &v142, &colorYellow, 1, 0);
                    CG_DebugLine(&v142, &v140, &colorYellow, 1, 0);
                    v98 = v138.v[0];
                    v93 = v138.v[1];
                  }
                  if ( v136.v[0] > 0.0 || v136.v[1] > 0.0 || v98 > 0.0 || v93 > 0.0 )
                  {
                    CG_DebugLine(&v151, &v140, &colorLtYellow, 1, 0);
                    CG_DebugLine(&v152, &v141, &colorLtYellow, 1, 0);
                    CG_DebugLine(&v153, &v142, &colorLtYellow, 1, 0);
                    CG_DebugLine(&v154, &v143, &colorLtYellow, 1, 0);
                    v98 = v138.v[0];
                    v93 = v138.v[1];
                  }
                  v20 = LODWORD(FLOAT_1_0);
                  v136.v[0] = v98;
                  v151 = v140;
                  v152 = v141;
                  v153 = v142;
                  v154 = v143;
                  v136.v[1] = v93;
                }
                v60 = v134;
                ++v59;
              }
              while ( v59 < v18 );
            }
            Com_GetCSplinePointPosition(v13, v17 + 1, &v139);
            CG_DebugLine(&v150, &v139, &colorYellow, 1, 0);
            if ( cSplineDebugRenderCorridor->current.enabled )
            {
              Com_GetCSplinePointCorridorDims(v13, v17 + 1, &v138);
              axes.m[2].v[0] = 0.0;
              axes.m[2].v[1] = 0.0;
              axes.m[2].v[2] = *(float *)&v20;
              Com_GetCSplinePointTangent(v13, v17 + 1, &axes.m[1]);
              v99 = LODWORD(axes.m[1].v[1]);
              *(float *)&v99 = fsqrt((float)((float)(*(float *)&v99 * *(float *)&v99) + (float)(axes.m[1].v[0] * axes.m[1].v[0])) + (float)(axes.m[1].v[2] * axes.m[1].v[2]));
              _XMM3 = v99;
              __asm
              {
                vcmpless xmm0, xmm3, xmm12
                vblendvps xmm1, xmm3, xmm13, xmm0
              }
              v104 = LODWORD(axes.m[1].v[0]);
              v103 = axes.m[1].v[0] * (float)(*(float *)&v20 / *(float *)&_XMM1);
              v105 = axes.m[1].v[1] * (float)(*(float *)&v20 / *(float *)&_XMM1);
              v106 = axes.m[1].v[2] * (float)(*(float *)&v20 / *(float *)&_XMM1);
              v107 = (float)(v106 * axes.m[2].v[1]) - (float)(v105 * axes.m[2].v[2]);
              v108 = (float)(v103 * axes.m[2].v[2]) - (float)(v106 * axes.m[2].v[0]);
              v109 = (float)(v105 * axes.m[2].v[0]) - (float)(v103 * axes.m[2].v[1]);
              *(float *)&v104 = fsqrt((float)((float)(v108 * v108) + (float)(v107 * v107)) + (float)(v109 * v109));
              _XMM3 = v104;
              __asm
              {
                vcmpless xmm0, xmm3, xmm12
                vblendvps xmm1, xmm3, xmm13, xmm0
              }
              v113 = v20;
              v114 = (float)(*(float *)&v20 / *(float *)&_XMM1) * v109;
              v115 = (float)(*(float *)&v20 / *(float *)&_XMM1) * v107;
              v116 = (float)(*(float *)&v20 / *(float *)&_XMM1) * v108;
              v117 = (float)(v105 * v114) - (float)(v116 * v106);
              v118 = (float)(v115 * v106) - (float)(v114 * v103);
              v119 = (float)(v116 * v103) - (float)(v115 * v105);
              *(float *)&v113 = fsqrt((float)((float)(v118 * v118) + (float)(v117 * v117)) + (float)(v119 * v119));
              _XMM1 = v113;
              __asm
              {
                vcmpless xmm0, xmm1, xmm12
                vblendvps xmm1, xmm1, xmm13, xmm0
              }
              axes.m[1].v[0] = v103;
              axes.m[1].v[1] = v105;
              axes.m[1].v[2] = v106;
              axes.m[0].v[0] = v115;
              axes.m[0].v[1] = v116;
              axes.m[0].v[2] = v114;
              axes.m[2].v[0] = (float)(*(float *)&v20 / *(float *)&_XMM1) * v117;
              axes.m[2].v[1] = (float)(*(float *)&v20 / *(float *)&_XMM1) * v118;
              axes.m[2].v[2] = (float)(*(float *)&v20 / *(float *)&_XMM1) * v119;
              v123 = (float)(v115 * (float)(v138.v[0] * -0.5)) + v139.v[0];
              v124 = (float)((float)(v138.v[0] * -0.5) * v114) + v139.v[2];
              v125 = (float)((float)(v138.v[0] * -0.5) * v116) + v139.v[1];
              v126 = (float)((float)(v138.v[0] * 0.5) * axes.m[0].v[0]) + v139.v[0];
              v127 = (float)((float)(v138.v[0] * 0.5) * v114) + v139.v[2];
              v128 = (float)((float)(v138.v[0] * 0.5) * v116) + v139.v[1];
              v129 = (float)(v138.v[1] * -0.5) * axes.m[2].v[0];
              v130 = (float)(v138.v[1] * -0.5) * axes.m[2].v[1];
              *(float *)&_XMM3 = (float)(v138.v[1] * -0.5) * axes.m[2].v[2];
              v140.v[0] = v129 + v123;
              v140.v[1] = v130 + v125;
              v140.v[2] = *(float *)&_XMM3 + v124;
              v141.v[0] = v129 + v126;
              v141.v[2] = *(float *)&_XMM3 + v127;
              v131 = (float)(v138.v[1] * 0.5) * axes.m[2].v[0];
              v141.v[1] = v130 + v128;
              v142.v[1] = (float)((float)(v138.v[1] * 0.5) * axes.m[2].v[1]) + v125;
              v143.v[0] = v131 + v126;
              v142.v[0] = v131 + v123;
              v143.v[2] = (float)((float)(v138.v[1] * 0.5) * axes.m[2].v[2]) + v127;
              v142.v[2] = (float)((float)(v138.v[1] * 0.5) * axes.m[2].v[2]) + v124;
              v143.v[1] = (float)((float)(v138.v[1] * 0.5) * axes.m[2].v[1]) + v128;
              if ( v136.v[0] > 0.0 || v136.v[1] > 0.0 || v138.v[0] > 0.0 || v138.v[1] > 0.0 )
              {
                CG_DebugLine(&v151, &v140, &colorLtYellow, 1, 0);
                CG_DebugLine(&v152, &v141, &colorLtYellow, 1, 0);
                CG_DebugLine(&v153, &v142, &colorLtYellow, 1, 0);
                CG_DebugLine(&v154, &v143, &colorLtYellow, 1, 0);
              }
            }
            v19 = v16 - 1;
          }
          v14 = FLOAT_0_5;
          ++v17;
        }
        while ( v17 < (unsigned __int16)v16 );
        v3 = CSplineCount;
      }
      ++v13;
    }
    while ( v13 <= v3 );
  }
}

/*
==============
Com_CSpline_RegisterDvars
==============
*/
void Com_CSpline_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  cSplineDebugRender = Dvar_RegisterBool("SPRQNMPMK", 0, 0xC4u, "Debug Render the csplines.");
  cSplineDebugRenderResolution = Dvar_RegisterInt("NQSTPPRLPS", 128, 0, 2048, 0xC4u, "The number of lines used to draw each spline.");
  cSplineDebugRenderData = Dvar_RegisterBool("ROSKQOOMO", 0, 0xC4u, "Debug Render the cspline data.");
  cSplineDebugRenderCorridor = Dvar_RegisterBool("MNOQQRLKSS", 0, 0xC4u, "Debug Render the cspline corridor.");
  cSplineDebugRenderSplineId = Dvar_RegisterInt("NNRQMRSTQ", 0, 0, 2048, 0xC4u, "Select a cspline - 0 for all.");
  Dvar_EndPermanentRegistration();
}

