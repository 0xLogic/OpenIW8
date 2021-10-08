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

void __fastcall Com_CSpline_DebugRender(LocalClientNum_t localclientNum, double _XMM1_8)
{
  bool v13; 
  const ScreenPlacement *v14; 
  unsigned __int16 v15; 
  const char *v22; 
  unsigned __int16 v25; 
  int integer; 
  unsigned __int16 CSplinePointCount; 
  const char *v33; 
  unsigned __int16 v36; 
  int v39; 
  int v40; 
  unsigned __int16 v41; 
  int v42; 
  int v43; 
  scr_string_t CSplinePointLabel; 
  const char *v105; 
  int v146; 
  char v162; 
  char v163; 
  char v265; 
  char v266; 
  char *fmt; 
  __int64 forceColor; 
  float v377; 
  float v378; 
  float v379; 
  unsigned __int16 CSplineCount; 
  tmat33_t<vec3_t> axes; 
  vec2_t v386; 
  vec3_t v387; 
  vec3_t v388; 
  vec3_t v389; 
  vec3_t v390; 
  vec3_t v391; 
  vec3_t out_position; 
  vec2_t out_dims; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v396; 
  vec3_t v397; 
  vec3_t v398; 
  vec3_t v399; 
  vec3_t v400; 
  vec3_t v401; 
  vec3_t v402; 
  char dest[128]; 

  if ( !cSplineDebugRender->current.enabled )
    return;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_8;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v13 )
      __debugbreak();
LABEL_8:
    v14 = &scrPlaceFull;
    goto LABEL_9;
  }
  v14 = &scrPlaceViewDisplay[localclientNum];
LABEL_9:
  __asm
  {
    vmovaps [rsp+2E0h+var_38+8], xmm6
    vmovaps [rsp+2E0h+var_48+8], xmm7
    vmovaps [rsp+2E0h+var_58+8], xmm8
    vmovaps [rsp+2E0h+var_68+8], xmm9
    vmovaps [rsp+2E0h+var_78+8], xmm10
    vmovaps [rsp+2E0h+var_88+8], xmm11
    vmovaps [rsp+2E0h+var_98+8], xmm12
  }
  CSplineCount = Com_GetCSplineCount();
  v15 = CSplineCount;
  __asm { vxorps  xmm12, xmm12, xmm12 }
  if ( cSplineDebugRenderData->current.enabled )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@41400000
      vmovss  xmm11, cs:__real@42400000
      vmovss  [rsp+2E0h+var_2A8], xmm10
      vmovaps xmm2, xmm11; y
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(v14, *(float *)&_XMM1, *(float *)&_XMM2, "Spline Data:", &colorGreen, 0, 1, v377, 0);
    __asm { vmovss  xmm9, cs:__real@40000000 }
    v22 = j_va(" Num Splines: %d", CSplineCount);
    __asm
    {
      vmovss  xmm2, cs:__real@42700000; y
      vmovss  [rsp+2E0h+var_2A8], xmm10
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(v14, *(float *)&_XMM1, *(float *)&_XMM2, v22, &colorGreen, 0, 1, v378, 0);
    v25 = 1;
    if ( CSplineCount )
    {
      __asm { vmovss  xmm8, cs:__real@3f800000 }
      do
      {
        integer = cSplineDebugRenderSplineId->current.integer;
        if ( !integer || integer == v25 )
        {
          *(double *)&_XMM0 = Com_GetCSplineLength(v25);
          __asm { vcvtss2sd xmm6, xmm0, xmm0 }
          CSplinePointCount = Com_GetCSplinePointCount(v25);
          __asm
          {
            vmulss  xmm0, xmm9, xmm10
            vmovaps xmm3, xmm6
            vmovq   r9, xmm3
            vaddss  xmm7, xmm0, xmm11
            vaddss  xmm9, xmm9, xmm8
          }
          v33 = j_va(" Spline %d: points:%d length:%.2f", v25, CSplinePointCount, _R9);
          __asm
          {
            vmovss  [rsp+2E0h+var_2A8], xmm10
            vmovaps xmm2, xmm7; y
            vmovaps xmm1, xmm12; x
          }
          CG_DrawStringExt(v14, *(float *)&_XMM1, *(float *)&_XMM2, v33, &colorGreen, 0, 1, v379, 0);
        }
        ++v25;
      }
      while ( v25 <= CSplineCount );
    }
  }
  v36 = 1;
  if ( CSplineCount )
  {
    __asm
    {
      vmovaps [rsp+2E0h+var_A8+8], xmm13
      vmovaps [rsp+2E0h+var_B8+8], xmm14
      vmovss  xmm14, cs:__real@80000000
      vmovaps [rsp+2E0h+var_C8+8], xmm15
      vmovss  xmm15, cs:__real@3f000000
    }
    do
    {
      v39 = cSplineDebugRenderSplineId->current.integer;
      if ( !v39 || v39 == v36 )
      {
        v40 = Com_GetCSplinePointCount(v36);
        v41 = 0;
        v42 = cSplineDebugRenderResolution->current.integer / v40;
        v43 = v40 - 1;
        do
        {
          __asm
          {
            vmovss  xmm13, cs:__real@3f800000
            vmovss  dword ptr [rbp+1E0h+axes+20h], xmm13
            vmovss  dword ptr [rbp+1E0h+axes+18h], xmm12
            vmovss  dword ptr [rbp+1E0h+axes+1Ch], xmm12
          }
          Com_GetCSplinePointTangent(v36, v41, &axes.m[1]);
          __asm
          {
            vmovss  xmm4, dword ptr [rsp+2E0h+axes+0Ch]
            vmovss  xmm6, dword ptr [rsp+2E0h+axes+10h]
            vmovss  xmm5, dword ptr [rsp+2E0h+axes+14h]
            vmulss  xmm0, xmm4, xmm4
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm0, xmm2, xmm1
            vsqrtss xmm3, xmm0, xmm0
            vcmpless xmm0, xmm3, xmm14
            vblendvps xmm1, xmm3, xmm13, xmm0
            vdivss  xmm0, xmm13, xmm1
            vmulss  xmm11, xmm4, xmm0
            vmulss  xmm3, xmm11, dword ptr [rbp+1E0h+axes+20h]
            vmulss  xmm10, xmm6, xmm0
            vmulss  xmm2, xmm10, dword ptr [rbp+1E0h+axes+18h]
            vmulss  xmm9, xmm5, xmm0
            vmulss  xmm0, xmm10, dword ptr [rbp+1E0h+axes+20h]
            vmovss  [rsp+2E0h+var_288], xmm1
            vmulss  xmm1, xmm9, dword ptr [rbp+1E0h+axes+1Ch]
            vsubss  xmm8, xmm1, xmm0
            vmulss  xmm0, xmm9, dword ptr [rbp+1E0h+axes+18h]
            vmulss  xmm1, xmm11, dword ptr [rbp+1E0h+axes+1Ch]
            vsubss  xmm6, xmm3, xmm0
            vsubss  xmm7, xmm2, xmm1
            vmulss  xmm1, xmm7, xmm7
            vmulss  xmm3, xmm6, xmm6
            vmulss  xmm0, xmm8, xmm8
            vaddss  xmm2, xmm3, xmm0
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, xmm14
            vblendvps xmm1, xmm3, xmm13, xmm0
            vdivss  xmm0, xmm13, xmm1
            vmulss  xmm3, xmm7, xmm0
            vmulss  xmm4, xmm6, xmm0
            vmulss  xmm5, xmm8, xmm0
            vmovss  [rsp+2E0h+var_288], xmm1
            vmulss  xmm1, xmm3, xmm10
            vmulss  xmm0, xmm4, xmm9
            vsubss  xmm7, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm11
            vmulss  xmm2, xmm9, xmm5
            vsubss  xmm6, xmm2, xmm1
            vmovss  dword ptr [rsp+2E0h+axes+8], xmm3
            vmulss  xmm3, xmm4, xmm11
            vmulss  xmm0, xmm5, xmm10
            vmulss  xmm2, xmm6, xmm6
            vmulss  xmm1, xmm7, xmm7
            vmovss  dword ptr [rsp+2E0h+axes+4], xmm4
            vsubss  xmm4, xmm3, xmm0
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcmpless xmm0, xmm1, xmm14
            vblendvps xmm1, xmm1, xmm13, xmm0
            vdivss  xmm2, xmm13, xmm1
            vmulss  xmm0, xmm7, xmm2
            vmovss  dword ptr [rbp+1E0h+axes+18h], xmm0
            vmovss  [rsp+2E0h+var_288], xmm1
            vmulss  xmm0, xmm4, xmm2
            vmulss  xmm1, xmm6, xmm2
            vmovss  dword ptr [rbp+1E0h+axes+20h], xmm0
            vmovss  dword ptr [rsp+2E0h+axes+0Ch], xmm11
            vmovss  dword ptr [rsp+2E0h+axes+10h], xmm10
            vmovss  dword ptr [rsp+2E0h+axes+14h], xmm9
            vmovss  dword ptr [rsp+2E0h+axes], xmm5
            vmovss  dword ptr [rbp+1E0h+axes+1Ch], xmm1
          }
          CSplinePointLabel = Com_GetCSplinePointLabel(v36, v41);
          if ( CSplinePointLabel )
          {
            v105 = SL_ConvertToString(CSplinePointLabel);
            LODWORD(forceColor) = Com_GetCSplinePointId(v36, v41);
            LODWORD(fmt) = v41;
            Com_sprintf(dest, 0x80ui64, "%d:%d:%d:%s", v36, fmt, forceColor, v105);
            v43 = v40 - 1;
          }
          else
          {
            LODWORD(forceColor) = Com_GetCSplinePointId(v36, v41);
            LODWORD(fmt) = v41;
            Com_sprintf(dest, 0x80ui64, "%d:%d:%d", v36, fmt, forceColor);
          }
          Com_GetCSplinePointPosition(v36, v41, &out_position);
          __asm { vmovss  xmm2, cs:__real@40800000; length }
          CG_DebugAxis(&axes, &out_position, *(float *)&_XMM2, 1, 0);
          __asm { vmovaps xmm2, xmm15; scale }
          CG_DebugString(&out_position, &colorGreen, *(float *)&_XMM2, dest, 0, 0);
          if ( cSplineDebugRenderCorridor->current.enabled )
          {
            Com_GetCSplinePointCorridorDims(v36, v41, &out_dims);
            __asm
            {
              vmovss  xmm9, dword ptr [rbp+1E0h+out_dims]
              vmulss  xmm2, xmm9, cs:__real@bf000000
              vmulss  xmm0, xmm2, dword ptr [rsp+2E0h+axes]
              vaddss  xmm14, xmm0, dword ptr [rbp+1E0h+out_position]
              vmulss  xmm0, xmm2, dword ptr [rsp+2E0h+axes+8]
              vaddss  xmm12, xmm0, dword ptr [rbp+1E0h+out_position+8]
              vmulss  xmm1, xmm2, dword ptr [rsp+2E0h+axes+4]
              vaddss  xmm13, xmm1, dword ptr [rbp+1E0h+out_position+4]
              vmovss  xmm8, dword ptr [rbp+1E0h+out_dims+4]
              vmulss  xmm2, xmm9, xmm15
              vmulss  xmm1, xmm2, dword ptr [rsp+2E0h+axes+4]
              vaddss  xmm10, xmm1, dword ptr [rbp+1E0h+out_position+4]
              vmulss  xmm0, xmm2, dword ptr [rsp+2E0h+axes]
              vaddss  xmm9, xmm0, dword ptr [rbp+1E0h+out_position]
              vmulss  xmm1, xmm8, cs:__real@bf000000
              vmulss  xmm3, xmm1, dword ptr [rbp+1E0h+axes+1Ch]
              vmulss  xmm4, xmm1, dword ptr [rbp+1E0h+axes+18h]
              vmulss  xmm0, xmm2, dword ptr [rsp+2E0h+axes+8]
              vaddss  xmm11, xmm0, dword ptr [rbp+1E0h+out_position+8]
              vmulss  xmm2, xmm1, dword ptr [rbp+1E0h+axes+20h]
              vaddss  xmm0, xmm14, xmm4
              vmovss  dword ptr [rbp+1E0h+start], xmm0
              vaddss  xmm0, xmm13, xmm3
              vmovss  dword ptr [rbp+1E0h+start+4], xmm0
              vaddss  xmm0, xmm12, xmm2
              vmovss  dword ptr [rbp+1E0h+start+8], xmm0
              vaddss  xmm1, xmm9, xmm4
              vmovss  dword ptr [rbp+1E0h+end], xmm1
              vaddss  xmm0, xmm10, xmm3
              vmulss  xmm3, xmm8, xmm15
              vmulss  xmm5, xmm3, dword ptr [rbp+1E0h+axes+18h]
              vmulss  xmm4, xmm3, dword ptr [rbp+1E0h+axes+1Ch]
              vaddss  xmm1, xmm11, xmm2
              vmulss  xmm2, xmm3, dword ptr [rbp+1E0h+axes+20h]
              vmovss  dword ptr [rbp+1E0h+end+4], xmm0
              vmovss  dword ptr [rbp+1E0h+end+8], xmm1
              vaddss  xmm0, xmm14, xmm5
              vaddss  xmm1, xmm13, xmm4
              vmovss  dword ptr [rbp+1E0h+var_1C0], xmm0
              vmovss  dword ptr [rbp+1E0h+var_1C0+4], xmm1
              vaddss  xmm0, xmm12, xmm2
              vaddss  xmm1, xmm9, xmm5
              vmovss  dword ptr [rbp+1E0h+var_1C0+8], xmm0
              vmovss  dword ptr [rbp+1E0h+var_1B0], xmm1
              vaddss  xmm0, xmm10, xmm4
              vaddss  xmm1, xmm11, xmm2
              vmovss  dword ptr [rbp+1E0h+var_1B0+4], xmm0
              vmovss  dword ptr [rbp+1E0h+var_1B0+8], xmm1
            }
            CG_DebugLine(&start, &end, &colorGreen, 1, 0);
            CG_DebugLine(&end, &v397, &colorGreen, 1, 0);
            CG_DebugLine(&v397, &v396, &colorGreen, 1, 0);
            CG_DebugLine(&v396, &start, &colorGreen, 1, 0);
            __asm
            {
              vmovss  xmm13, cs:__real@3f800000
              vmovss  xmm14, cs:__real@80000000
              vxorps  xmm12, xmm12, xmm12
            }
          }
          if ( v41 < v43 )
          {
            __asm { vmovsd  xmm0, qword ptr [rbp+1E0h+out_position] }
            v398.v[2] = out_position.v[2];
            v146 = 0;
            v399.v[2] = start.v[2];
            v400.v[2] = end.v[2];
            v401.v[2] = v396.v[2];
            v402.v[2] = v397.v[2];
            __asm
            {
              vmovsd  qword ptr [rbp+1E0h+var_1A0], xmm0
              vmovss  xmm0, dword ptr [rbp+1E0h+out_dims]
              vmovss  [rsp+2E0h+var_280], xmm0
              vmovss  xmm0, dword ptr [rbp+1E0h+out_dims+4]
              vmovss  [rsp+2E0h+var_27C], xmm0
              vmovsd  xmm0, qword ptr [rbp+1E0h+start]
              vmovsd  qword ptr [rbp+1E0h+var_190], xmm0
              vmovsd  xmm0, qword ptr [rbp+1E0h+end]
              vmovsd  qword ptr [rbp+1E0h+var_180], xmm0
              vmovsd  xmm0, qword ptr [rbp+1E0h+var_1C0]
              vmovsd  qword ptr [rbp+1E0h+var_170], xmm0
              vmovsd  xmm0, qword ptr [rbp+1E0h+var_1B0]
              vmovsd  qword ptr [rbp+1E0h+var_160], xmm0
            }
            if ( v42 > 0 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vdivss  xmm1, xmm13, xmm0
                vmovss  [rsp+2E0h+var_288], xmm1
              }
              do
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ebx
                  vmulss  xmm6, xmm0, xmm1
                  vmovaps xmm2, xmm6; lambda
                }
                Com_CalcCSplinePosition(v36, v41, *(float *)&_XMM2, &v387);
                CG_DebugLine(&v398, &v387, &colorYellow, 1, 0);
                __asm { vmovsd  xmm0, qword ptr [rbp+1E0h+var_248] }
                v398.v[2] = v387.v[2];
                __asm { vmovsd  qword ptr [rbp+1E0h+var_1A0], xmm0 }
                if ( cSplineDebugRenderCorridor->current.enabled )
                {
                  __asm { vmovaps xmm2, xmm6; lambda }
                  Com_CalcCSplineCorridor(v36, v41, *(float *)&_XMM2, &v386);
                  __asm
                  {
                    vmovaps xmm2, xmm6; lambda
                    vmovss  dword ptr [rbp+1E0h+axes+18h], xmm12
                    vmovss  dword ptr [rbp+1E0h+axes+1Ch], xmm12
                    vmovss  dword ptr [rbp+1E0h+axes+20h], xmm13
                  }
                  Com_CalcCSplineTangent(v36, v41, *(float *)&_XMM2, &axes.m[1]);
                  __asm
                  {
                    vmovss  xmm4, dword ptr [rsp+2E0h+axes+0Ch]
                    vmovss  xmm6, dword ptr [rsp+2E0h+axes+10h]
                    vmovss  xmm5, dword ptr [rsp+2E0h+axes+14h]
                    vmulss  xmm1, xmm6, xmm6
                    vmulss  xmm0, xmm4, xmm4
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm5, xmm5
                    vaddss  xmm0, xmm2, xmm1
                    vsqrtss xmm3, xmm0, xmm0
                    vcmpless xmm0, xmm3, xmm14
                    vblendvps xmm1, xmm3, xmm13, xmm0
                    vdivss  xmm0, xmm13, xmm1
                    vmulss  xmm10, xmm4, xmm0
                    vmulss  xmm3, xmm10, dword ptr [rbp+1E0h+axes+20h]
                    vmulss  xmm9, xmm6, xmm0
                    vmulss  xmm2, xmm9, dword ptr [rbp+1E0h+axes+18h]
                    vmulss  xmm8, xmm5, xmm0
                    vmulss  xmm1, xmm8, dword ptr [rbp+1E0h+axes+1Ch]
                    vmulss  xmm0, xmm9, dword ptr [rbp+1E0h+axes+20h]
                    vsubss  xmm7, xmm1, xmm0
                    vmulss  xmm0, xmm8, dword ptr [rbp+1E0h+axes+18h]
                    vmulss  xmm1, xmm10, dword ptr [rbp+1E0h+axes+1Ch]
                    vsubss  xmm4, xmm2, xmm1
                    vsubss  xmm6, xmm3, xmm0
                    vmulss  xmm3, xmm6, xmm6
                    vmulss  xmm0, xmm7, xmm7
                    vaddss  xmm2, xmm3, xmm0
                    vmulss  xmm1, xmm4, xmm4
                    vaddss  xmm2, xmm2, xmm1
                    vsqrtss xmm3, xmm2, xmm2
                    vcmpless xmm0, xmm3, xmm14
                    vblendvps xmm1, xmm3, xmm13, xmm0
                    vdivss  xmm0, xmm13, xmm1
                    vmulss  xmm15, xmm4, xmm0
                    vmulss  xmm11, xmm7, xmm0
                    vmulss  xmm7, xmm6, xmm0
                    vmulss  xmm0, xmm7, xmm8
                    vmulss  xmm1, xmm15, xmm9
                    vsubss  xmm6, xmm1, xmm0
                    vmulss  xmm1, xmm10, xmm15
                    vmulss  xmm2, xmm8, xmm11
                    vsubss  xmm5, xmm2, xmm1
                    vmulss  xmm1, xmm6, xmm6
                    vmulss  xmm3, xmm10, xmm7
                    vmulss  xmm0, xmm11, xmm9
                    vsubss  xmm4, xmm3, xmm0
                    vmulss  xmm0, xmm4, xmm4
                    vmulss  xmm2, xmm5, xmm5
                    vaddss  xmm3, xmm2, xmm1
                    vaddss  xmm2, xmm3, xmm0
                    vsqrtss xmm1, xmm2, xmm2
                    vcmpless xmm0, xmm1, xmm14
                    vblendvps xmm1, xmm1, xmm13, xmm0
                    vdivss  xmm0, xmm13, xmm1
                    vmulss  xmm12, xmm6, xmm0
                    vmovss  xmm6, dword ptr [rbp+1E0h+var_250]
                    vmulss  xmm2, xmm6, cs:__real@bf000000
                    vmulss  xmm13, xmm5, xmm0
                    vmulss  xmm14, xmm4, xmm0
                    vmovss  dword ptr [rsp+2E0h+axes+0Ch], xmm10
                    vmovss  dword ptr [rsp+2E0h+axes+10h], xmm9
                    vmovss  dword ptr [rsp+2E0h+axes+14h], xmm8
                    vmovss  dword ptr [rsp+2E0h+axes], xmm11
                    vmovss  dword ptr [rsp+2E0h+axes+4], xmm7
                    vmovss  dword ptr [rsp+2E0h+axes+8], xmm15
                    vmovss  dword ptr [rbp+1E0h+axes+18h], xmm12
                    vmovss  dword ptr [rbp+1E0h+axes+1Ch], xmm13
                    vmovss  dword ptr [rbp+1E0h+axes+20h], xmm14
                    vmulss  xmm0, xmm11, xmm2
                    vaddss  xmm9, xmm0, dword ptr [rbp+1E0h+var_248]
                    vmulss  xmm0, xmm15, xmm2
                    vaddss  xmm11, xmm0, dword ptr [rbp+1E0h+var_248+8]
                    vmulss  xmm1, xmm7, xmm2
                    vaddss  xmm10, xmm1, dword ptr [rbp+1E0h+var_248+4]
                    vmulss  xmm2, xmm6, cs:__real@3f000000
                    vmulss  xmm0, xmm2, dword ptr [rsp+2E0h+axes]
                    vaddss  xmm6, xmm0, dword ptr [rbp+1E0h+var_248]
                    vmulss  xmm0, xmm15, xmm2
                    vaddss  xmm8, xmm0, dword ptr [rbp+1E0h+var_248+8]
                    vmovss  xmm15, dword ptr [rbp+1E0h+var_250+4]
                    vmulss  xmm1, xmm2, xmm7
                    vaddss  xmm7, xmm1, dword ptr [rbp+1E0h+var_248+4]
                    vmulss  xmm2, xmm15, cs:__real@bf000000
                    vmulss  xmm5, xmm2, xmm12
                    vmulss  xmm4, xmm2, xmm13
                    vmulss  xmm3, xmm2, xmm14
                    vmulss  xmm2, xmm15, cs:__real@3f000000
                    vaddss  xmm0, xmm9, xmm5
                    vmovss  dword ptr [rbp+1E0h+var_238], xmm0
                    vaddss  xmm0, xmm11, xmm3
                    vmovss  dword ptr [rbp+1E0h+var_238+8], xmm0
                    vaddss  xmm1, xmm10, xmm4
                    vmovss  dword ptr [rbp+1E0h+var_238+4], xmm1
                    vaddss  xmm0, xmm7, xmm4
                    vmovss  dword ptr [rbp+1E0h+var_228+4], xmm0
                    vaddss  xmm1, xmm6, xmm5
                    vmovss  dword ptr [rbp+1E0h+var_228], xmm1
                    vmulss  xmm5, xmm2, xmm12
                    vaddss  xmm1, xmm8, xmm3
                    vmovss  dword ptr [rbp+1E0h+var_228+8], xmm1
                    vaddss  xmm0, xmm5, xmm9
                    vmovss  dword ptr [rbp+1E0h+var_218], xmm0
                    vmulss  xmm3, xmm2, xmm14
                    vmulss  xmm4, xmm2, xmm13
                    vaddss  xmm0, xmm3, xmm11
                    vaddss  xmm1, xmm4, xmm10
                    vmovss  dword ptr [rbp+1E0h+var_218+8], xmm0
                    vaddss  xmm0, xmm4, xmm7
                    vmovss  dword ptr [rbp+1E0h+var_218+4], xmm1
                    vaddss  xmm1, xmm5, xmm6
                    vmovss  dword ptr [rbp+1E0h+var_208+4], xmm0
                    vmovss  xmm0, dword ptr [rbp+1E0h+var_250]
                    vmovss  dword ptr [rbp+1E0h+var_208], xmm1
                    vxorps  xmm12, xmm12, xmm12
                    vcomiss xmm0, xmm12
                    vaddss  xmm1, xmm3, xmm8
                    vmovss  dword ptr [rbp+1E0h+var_208+8], xmm1
                  }
                  if ( !(v162 | v163) )
                    goto LABEL_35;
                  __asm { vcomiss xmm15, xmm12 }
                  if ( !(v162 | v163) )
                  {
LABEL_35:
                    CG_DebugLine(&v388, &v389, &colorYellow, 1, 0);
                    CG_DebugLine(&v389, &v391, &colorYellow, 1, 0);
                    CG_DebugLine(&v391, &v390, &colorYellow, 1, 0);
                    CG_DebugLine(&v390, &v388, &colorYellow, 1, 0);
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbp+1E0h+var_250]
                      vmovss  xmm15, dword ptr [rbp+1E0h+var_250+4]
                    }
                  }
                  __asm
                  {
                    vmovss  xmm1, [rsp+2E0h+var_280]
                    vcomiss xmm1, xmm12
                  }
                  if ( !(v162 | v163) )
                    goto LABEL_40;
                  __asm
                  {
                    vmovss  xmm1, [rsp+2E0h+var_27C]
                    vcomiss xmm1, xmm12
                  }
                  if ( !(v162 | v163) )
                    goto LABEL_40;
                  __asm { vcomiss xmm0, xmm12 }
                  if ( !(v162 | v163) )
                    goto LABEL_40;
                  __asm { vcomiss xmm15, xmm12 }
                  if ( !(v162 | v163) )
                  {
LABEL_40:
                    CG_DebugLine(&v399, &v388, &colorLtYellow, 1, 0);
                    CG_DebugLine(&v400, &v389, &colorLtYellow, 1, 0);
                    CG_DebugLine(&v401, &v390, &colorLtYellow, 1, 0);
                    CG_DebugLine(&v402, &v391, &colorLtYellow, 1, 0);
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbp+1E0h+var_250]
                      vmovss  xmm15, dword ptr [rbp+1E0h+var_250+4]
                    }
                  }
                  __asm
                  {
                    vmovss  xmm13, cs:__real@3f800000
                    vmovss  [rsp+2E0h+var_280], xmm0
                    vmovsd  xmm0, qword ptr [rbp+1E0h+var_238]
                    vmovsd  qword ptr [rbp+1E0h+var_190], xmm0
                    vmovsd  xmm0, qword ptr [rbp+1E0h+var_228]
                  }
                  v399.v[2] = v388.v[2];
                  __asm
                  {
                    vmovsd  qword ptr [rbp+1E0h+var_180], xmm0
                    vmovsd  xmm0, qword ptr [rbp+1E0h+var_218]
                  }
                  v400.v[2] = v389.v[2];
                  __asm
                  {
                    vmovsd  qword ptr [rbp+1E0h+var_170], xmm0
                    vmovsd  xmm0, qword ptr [rbp+1E0h+var_208]
                  }
                  v401.v[2] = v390.v[2];
                  __asm
                  {
                    vmovsd  qword ptr [rbp+1E0h+var_160], xmm0
                    vmovss  [rsp+2E0h+var_27C], xmm15
                  }
                  v402.v[2] = v391.v[2];
                }
                __asm
                {
                  vmovss  xmm1, [rsp+2E0h+var_288]
                  vmovss  xmm14, cs:__real@80000000
                }
                ++v146;
              }
              while ( v146 < v42 );
            }
            Com_GetCSplinePointPosition(v36, v41 + 1, &v387);
            CG_DebugLine(&v398, &v387, &colorYellow, 1, 0);
            if ( cSplineDebugRenderCorridor->current.enabled )
            {
              Com_GetCSplinePointCorridorDims(v36, v41 + 1, &v386);
              __asm
              {
                vmovss  dword ptr [rbp+1E0h+axes+18h], xmm12
                vmovss  dword ptr [rbp+1E0h+axes+1Ch], xmm12
                vmovss  dword ptr [rbp+1E0h+axes+20h], xmm13
              }
              Com_GetCSplinePointTangent(v36, v41 + 1, &axes.m[1]);
              __asm
              {
                vmovss  xmm4, dword ptr [rsp+2E0h+axes+0Ch]
                vmovss  xmm6, dword ptr [rsp+2E0h+axes+10h]
                vmovss  xmm5, dword ptr [rsp+2E0h+axes+14h]
                vmovss  xmm12, cs:__real@80000000
                vmulss  xmm1, xmm6, xmm6
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm5, xmm5
                vaddss  xmm0, xmm2, xmm1
                vsqrtss xmm3, xmm0, xmm0
                vcmpless xmm0, xmm3, xmm12
                vblendvps xmm1, xmm3, xmm13, xmm0
                vdivss  xmm0, xmm13, xmm1
                vmulss  xmm10, xmm4, xmm0
                vmulss  xmm3, xmm10, dword ptr [rbp+1E0h+axes+20h]
                vmulss  xmm9, xmm6, xmm0
                vmulss  xmm2, xmm9, dword ptr [rbp+1E0h+axes+18h]
                vmulss  xmm8, xmm5, xmm0
                vmulss  xmm1, xmm8, dword ptr [rbp+1E0h+axes+1Ch]
                vmulss  xmm0, xmm9, dword ptr [rbp+1E0h+axes+20h]
                vsubss  xmm7, xmm1, xmm0
                vmulss  xmm0, xmm8, dword ptr [rbp+1E0h+axes+18h]
                vmulss  xmm1, xmm10, dword ptr [rbp+1E0h+axes+1Ch]
                vsubss  xmm6, xmm3, xmm0
                vsubss  xmm4, xmm2, xmm1
                vmulss  xmm3, xmm6, xmm6
                vmulss  xmm0, xmm7, xmm7
                vaddss  xmm2, xmm3, xmm0
                vmulss  xmm1, xmm4, xmm4
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm3, xmm2, xmm2
                vcmpless xmm0, xmm3, xmm12
                vblendvps xmm1, xmm3, xmm13, xmm0
                vdivss  xmm0, xmm13, xmm1
                vmulss  xmm15, xmm0, xmm4
                vmulss  xmm11, xmm0, xmm7
                vmulss  xmm7, xmm0, xmm6
                vmulss  xmm0, xmm7, xmm8
                vmulss  xmm1, xmm9, xmm15
                vsubss  xmm6, xmm1, xmm0
                vmulss  xmm1, xmm15, xmm10
                vmulss  xmm2, xmm11, xmm8
                vsubss  xmm5, xmm2, xmm1
                vmulss  xmm1, xmm6, xmm6
                vmulss  xmm3, xmm7, xmm10
                vmulss  xmm0, xmm11, xmm9
                vsubss  xmm4, xmm3, xmm0
                vmulss  xmm0, xmm4, xmm4
                vmulss  xmm2, xmm5, xmm5
                vaddss  xmm3, xmm2, xmm1
                vaddss  xmm2, xmm3, xmm0
                vsqrtss xmm1, xmm2, xmm2
                vcmpless xmm0, xmm1, xmm12
                vblendvps xmm1, xmm1, xmm13, xmm0
                vdivss  xmm0, xmm13, xmm1
                vmulss  xmm12, xmm0, xmm6
                vmovss  xmm6, dword ptr [rbp+1E0h+var_250]
                vmulss  xmm2, xmm6, cs:__real@bf000000
                vmulss  xmm13, xmm0, xmm5
                vmulss  xmm14, xmm0, xmm4
                vmulss  xmm0, xmm11, xmm2
                vmovss  dword ptr [rsp+2E0h+axes+0Ch], xmm10
                vmovss  dword ptr [rsp+2E0h+axes+10h], xmm9
                vmovss  dword ptr [rsp+2E0h+axes+14h], xmm8
                vmovss  dword ptr [rsp+2E0h+axes], xmm11
                vmovss  dword ptr [rsp+2E0h+axes+4], xmm7
                vmovss  dword ptr [rsp+2E0h+axes+8], xmm15
                vmovss  dword ptr [rbp+1E0h+axes+18h], xmm12
                vmovss  dword ptr [rbp+1E0h+axes+1Ch], xmm13
                vmovss  dword ptr [rbp+1E0h+axes+20h], xmm14
                vaddss  xmm9, xmm0, dword ptr [rbp+1E0h+var_248]
                vmulss  xmm0, xmm2, xmm15
                vaddss  xmm11, xmm0, dword ptr [rbp+1E0h+var_248+8]
                vmulss  xmm1, xmm2, xmm7
                vaddss  xmm10, xmm1, dword ptr [rbp+1E0h+var_248+4]
                vmulss  xmm2, xmm6, cs:__real@3f000000
                vmulss  xmm0, xmm2, dword ptr [rsp+2E0h+axes]
                vaddss  xmm6, xmm0, dword ptr [rbp+1E0h+var_248]
                vmulss  xmm0, xmm2, xmm15
                vaddss  xmm8, xmm0, dword ptr [rbp+1E0h+var_248+8]
                vmovss  xmm15, dword ptr [rbp+1E0h+var_250+4]
                vmulss  xmm1, xmm2, xmm7
                vaddss  xmm7, xmm1, dword ptr [rbp+1E0h+var_248+4]
                vmulss  xmm2, xmm15, cs:__real@bf000000
                vmulss  xmm5, xmm2, xmm12
                vmulss  xmm4, xmm2, xmm13
                vmulss  xmm3, xmm2, xmm14
                vmulss  xmm2, xmm15, cs:__real@3f000000
                vaddss  xmm0, xmm5, xmm9
                vmovss  dword ptr [rbp+1E0h+var_238], xmm0
                vaddss  xmm1, xmm4, xmm10
                vmovss  dword ptr [rbp+1E0h+var_238+4], xmm1
                vaddss  xmm0, xmm3, xmm11
                vmovss  dword ptr [rbp+1E0h+var_238+8], xmm0
                vaddss  xmm1, xmm5, xmm6
                vmovss  dword ptr [rbp+1E0h+var_228], xmm1
                vaddss  xmm0, xmm4, xmm7
                vaddss  xmm1, xmm3, xmm8
                vmovss  dword ptr [rbp+1E0h+var_228+8], xmm1
                vmulss  xmm5, xmm2, xmm12
                vmovss  dword ptr [rbp+1E0h+var_228+4], xmm0
                vmulss  xmm4, xmm2, xmm13
                vaddss  xmm1, xmm4, xmm10
                vmovss  dword ptr [rbp+1E0h+var_218+4], xmm1
                vaddss  xmm1, xmm5, xmm6
                vaddss  xmm0, xmm5, xmm9
                vmulss  xmm3, xmm2, xmm14
                vmovss  dword ptr [rbp+1E0h+var_208], xmm1
                vaddss  xmm1, xmm3, xmm8
                vmovss  dword ptr [rbp+1E0h+var_218], xmm0
                vaddss  xmm0, xmm3, xmm11
                vmovss  dword ptr [rbp+1E0h+var_208+8], xmm1
                vmovss  xmm1, [rsp+2E0h+var_280]
                vmovss  dword ptr [rbp+1E0h+var_218+8], xmm0
                vxorps  xmm12, xmm12, xmm12
                vcomiss xmm1, xmm12
                vaddss  xmm0, xmm4, xmm7
                vmovss  dword ptr [rbp+1E0h+var_208+4], xmm0
              }
              if ( !(v265 | v266) )
                goto LABEL_48;
              __asm
              {
                vmovss  xmm1, [rsp+2E0h+var_27C]
                vcomiss xmm1, xmm12
              }
              if ( !(v265 | v266) )
                goto LABEL_48;
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+1E0h+var_250]
                vcomiss xmm0, xmm12
              }
              if ( !(v265 | v266) )
                goto LABEL_48;
              __asm { vcomiss xmm15, xmm12 }
              if ( !(v265 | v266) )
              {
LABEL_48:
                CG_DebugLine(&v399, &v388, &colorLtYellow, 1, 0);
                CG_DebugLine(&v400, &v389, &colorLtYellow, 1, 0);
                CG_DebugLine(&v401, &v390, &colorLtYellow, 1, 0);
                CG_DebugLine(&v402, &v391, &colorLtYellow, 1, 0);
              }
            }
            v43 = v40 - 1;
          }
          __asm
          {
            vmovss  xmm15, cs:__real@3f000000
            vmovss  xmm14, cs:__real@80000000
          }
          ++v41;
        }
        while ( v41 < (unsigned __int16)v40 );
        v15 = CSplineCount;
      }
      ++v36;
    }
    while ( v36 <= v15 );
    __asm
    {
      vmovaps xmm15, [rsp+2E0h+var_C8+8]
      vmovaps xmm14, [rsp+2E0h+var_B8+8]
      vmovaps xmm13, [rsp+2E0h+var_A8+8]
    }
  }
  __asm
  {
    vmovaps xmm11, [rsp+2E0h+var_88+8]
    vmovaps xmm10, [rsp+2E0h+var_78+8]
    vmovaps xmm9, [rsp+2E0h+var_68+8]
    vmovaps xmm8, [rsp+2E0h+var_58+8]
    vmovaps xmm7, [rsp+2E0h+var_48+8]
    vmovaps xmm6, [rsp+2E0h+var_38+8]
    vmovaps xmm12, [rsp+2E0h+var_98+8]
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

