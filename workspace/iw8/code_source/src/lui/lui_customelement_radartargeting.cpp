/*
==============
LUIElement_RadarTargeting_Draw
==============
*/
void LUIElement_RadarTargeting_Draw(const LocalClientNum_t localClientNum, RadarTargetingOptions *options, LUIElement *element, LUIElement *root, float red, float green, float blue, float alpha, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double CurrentUnitScale; 
  double v19; 
  float v20; 
  double v21; 
  float v22; 
  float top; 
  int clientNum; 
  float v25; 
  float v26; 
  float v27; 
  centity_t *Entity; 
  targetInfo_t *targets; 
  __int64 v30; 
  const GfxImage *material; 
  const GfxImage *maskResetMaterial; 
  float height; 
  float v34; 
  __int128 v35; 
  double v36; 
  __int64 v37; 
  int *p_minSize; 
  int v39; 
  float v40; 
  const cpose_t *Pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v46; 
  __int128 v56; 
  float v57; 
  __int128 v58; 
  __int128 v59; 
  float v62; 
  float minRadiusPct; 
  __int128 minRadiusPct_low; 
  float maxRadiusPct; 
  __int128 maxRadiusPct_low; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  __int128 v76; 
  float v77; 
  float v78; 
  __int128 v82; 
  int v83; 
  Material *v88; 
  int v89; 
  Material *v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  vec2_t elementCenter; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  tmat33_t<vec3_t> axis; 
  LUIElementAxisPosition v103; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t v106; 
  vec2_t targetScreenOffsets[64]; 
  float targetScreenYaws[64]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 221, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !options && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 222, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( !root && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 223, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 224, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 225, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 228, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  v14 = alpha;
  v15 = green;
  v16 = red;
  v17 = blue;
  LUI_Render_ImageFill(localClientNum, element, red, green, blue, alpha, element->imageData.image, luaVM);
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v19 = *(double *)element->currentAnimationState.position.x.anchors;
  *(_OWORD *)v103.offsets = *(_OWORD *)element->currentAnimationState.position.x.offsets;
  *(double *)v103.anchors = v19;
  v20 = *(float *)&CurrentUnitScale;
  *(float *)&CurrentUnitScale = LUI_Measure(&v103);
  v21 = *(double *)element->currentAnimationState.position.y.anchors;
  *(_OWORD *)v103.offsets = *(_OWORD *)element->currentAnimationState.position.y.offsets;
  *(double *)v103.anchors = v21;
  v22 = *(float *)&CurrentUnitScale * v20;
  *(float *)&CurrentUnitScale = LUI_Measure(&v103);
  top = element->top;
  clientNum = LocalClientGlobals->clientNum;
  v25 = *(float *)&CurrentUnitScale * v20;
  v26 = (float)((float)(options->radarCenterOffsetX + 0.5) * v22) + element->left;
  v27 = (float)((float)(options->radarCenterOffsetY + 0.5) * (float)(*(float *)&CurrentUnitScale * v20)) + top;
  v91 = v27 - top;
  v92 = v25;
  elementCenter.v[0] = v26;
  elementCenter.v[1] = v27;
  Entity = CG_GetEntity(localClientNum, clientNum);
  targets = LocalClientGlobals->targets;
  v30 = 0i64;
  while ( targets->entNum == 2047 || (targets->flags & 0x2000) == 0 )
  {
    ++v30;
    ++targets;
    if ( v30 >= 64 )
      goto LABEL_25;
  }
  Entity = CG_GetEntity(localClientNum, targets->entNum);
LABEL_25:
  AnglesToAxis(&angles, &axis);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  material = options->maskMaterial;
  angles = Entity->pose.angles;
  if ( material )
  {
    maskResetMaterial = options->maskResetMaterial;
    if ( maskResetMaterial )
    {
      height = v25 * 2.0;
      v34 = FLOAT_1_0;
      LUI_Render_DrawQuadRotated(localClientNum, element, v26, v27, v22 * 2.0, height, 0.0, 0.0, 1.0, 1.0, element->currentAnimationState.zRot, 0.0, 0.0, 0.0, 1.0, maskResetMaterial, luaVM);
      material = options->maskMaterial;
    }
    else
    {
      v34 = FLOAT_1_0;
    }
    LUI_Render_ImageFill(localClientNum, element, red, green, blue, alpha, material, luaVM);
  }
  else
  {
    v34 = FLOAT_1_0;
  }
  v35 = (unsigned int)_xmm;
  v36 = DOUBLE_0_000244140625;
  v37 = 0i64;
  p_minSize = &LocalClientGlobals->targets[0].minSize;
  do
  {
    v39 = *(p_minSize - 7);
    targetScreenOffsets[v37] = 0i64;
    if ( v39 != 2047 && (p_minSize[16] & 0x1000) != 0 && *(p_minSize - 3) >= 0 )
    {
      v96 = (float)*p_minSize;
      v95 = (float)p_minSize[1];
      v40 = fsqrt((float)(v95 * v95) + (float)(v96 * v96)) * (float)(v34 / v92);
      Pose = CG_GetPose(localClientNum, v39);
      if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !Pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Pose->origin.Get_origin, Pose);
      FunctionPointer_origin(&Pose->origin.origin.origin, (vec3_t *)&v99);
      if ( Pose->isPosePrecise )
      {
        _XMM0 = v99;
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v46 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v46 = *(double *)&_XMM0 * v36;
        _XMM1 = v46;
        _XMM0 = v100;
        __asm
        {
          vcvtdq2pd xmm0, xmm0
          vcvtsd2ss xmm2, xmm1, xmm1
        }
        *((_QWORD *)&v46 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v46 = *(double *)&_XMM0 * v36;
        _XMM1 = v46;
        _XMM0 = v101;
        __asm
        {
          vcvtsd2ss xmm3, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
        }
        *((_QWORD *)&v46 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v46 = *(double *)&_XMM0 * v36;
        _XMM1 = v46;
        __asm { vcvtsd2ss xmm4, xmm1, xmm1 }
        v101 = _XMM4;
        v99 = _XMM2;
        v100 = _XMM3;
      }
      else
      {
        LODWORD(_XMM4) = v101;
        _XMM3 = v100;
        LODWORD(_XMM2) = v99;
      }
      v56 = _XMM3;
      v106 = Pose->angles;
      LODWORD(v57) = COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&_XMM3 - outOrigin.v[1]) * axis.m[1].v[1]) + (float)((float)(*(float *)&_XMM2 - outOrigin.v[0]) * axis.m[1].v[0])) + (float)((float)(*(float *)&_XMM4 - outOrigin.v[2]) * axis.m[1].v[2])) ^ v35;
      *(float *)&v56 = (float)((float)((float)(*(float *)&_XMM3 - outOrigin.v[1]) * axis.m[0].v[1]) + (float)((float)(*(float *)&_XMM2 - outOrigin.v[0]) * axis.m[0].v[0])) + (float)((float)(*(float *)&_XMM4 - outOrigin.v[2]) * axis.m[0].v[2]);
      v58 = v56 ^ v35;
      v59 = v58;
      *(float *)&v59 = fsqrt((float)(*(float *)&v58 * *(float *)&v58) + (float)(v57 * v57));
      _XMM2 = v59;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm9, xmm0
      }
      v62 = v34 / *(float *)&_XMM0;
      *(float *)&v59 = *(float *)&v59 / options->maxDistance;
      _XMM0 = v59;
      __asm { vminss  xmm0, xmm0, xmm9; X }
      LODWORD(_XMM2) = powf_0(*(float *)&_XMM0, options->distanceExponent);
      minRadiusPct = options->minRadiusPct;
      if ( minRadiusPct > 0.0 )
      {
        minRadiusPct_low = LODWORD(options->minRadiusPct);
        *(float *)&minRadiusPct_low = minRadiusPct + v40;
        _XMM1 = minRadiusPct_low;
        __asm { vmaxss  xmm2, xmm1, xmm2 }
      }
      maxRadiusPct = options->maxRadiusPct;
      if ( maxRadiusPct < v34 )
      {
        maxRadiusPct_low = LODWORD(options->maxRadiusPct);
        *(float *)&maxRadiusPct_low = maxRadiusPct - v40;
        _XMM0 = maxRadiusPct_low;
        __asm { vminss  xmm2, xmm0, xmm2 }
      }
      v93 = (float)(*(float *)&_XMM2 * v91) * (float)(v62 * *(float *)&v58);
      targetScreenOffsets[v37].v[1] = v93;
      v94 = (float)(*(float *)&_XMM2 * v91) * (float)(v62 * v57);
      targetScreenOffsets[v37].v[0] = v94;
      AngleVectors(&v106, (vec3_t *)&v103, NULL, NULL);
      v72 = (float)((float)(v103.offsets[0] * axis.m[0].v[0]) + (float)(v103.offsets[1] * axis.m[0].v[1])) + (float)(v103.global[0] * axis.m[0].v[2]);
      v73 = (float)((float)(v103.offsets[0] * axis.m[1].v[0]) + (float)(v103.offsets[1] * axis.m[1].v[1])) + (float)(v103.global[0] * axis.m[1].v[2]);
      v74 = (float)((float)(v103.offsets[0] * axis.m[2].v[0]) + (float)(v103.offsets[1] * axis.m[2].v[1])) + (float)(v103.global[0] * axis.m[2].v[2]);
      v75 = (float)((float)(v72 * axis.m[0].v[0]) + (float)(v73 * axis.m[1].v[0])) + (float)(v74 * axis.m[2].v[0]);
      v76 = LODWORD(axis.m[0].v[1]);
      v77 = (float)((float)(axis.m[0].v[1] * v72) + (float)(axis.m[1].v[1] * v73)) + (float)(v74 * axis.m[2].v[1]);
      v78 = (float)((float)(axis.m[0].v[2] * v72) + (float)(axis.m[1].v[2] * v73)) + (float)(v74 * axis.m[2].v[2]);
      *(float *)&v76 = fsqrt((float)((float)(v77 * v77) + (float)(v75 * v75)) + (float)(v78 * v78));
      _XMM4 = v76;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm11, xmm0
      }
      v82 = LODWORD(axis.m[0].v[1]);
      *(float *)&v82 = acosf_0((float)((float)(axis.m[0].v[1] * (float)((float)(1.0 / *(float *)&_XMM0) * v77)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v75) * axis.m[0].v[0])) + (float)(axis.m[0].v[2] * (float)((float)(1.0 / *(float *)&_XMM0) * v78))) * -57.295776;
      v83 = *(p_minSize - 3);
      _XMM1 = v82 ^ _xmm;
      _XMM6 = 0i64;
      __asm
      {
        vcmpless xmm0, xmm6, xmm4
        vblendvps xmm9, xmm1, xmm5, xmm0
      }
      targetScreenYaws[v37] = *(float *)&_XMM9;
      v88 = CG_Draw_MaterialHandleForIndex(localClientNum, v83);
      if ( !v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 363, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
        __debugbreak();
      if ( !v88->textureTable->image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 364, ASSERT_TYPE_ASSERT, "(material->textureTable[0].image)", (const char *)&queryFormat, "material->textureTable[0].image") )
        __debugbreak();
      v14 = alpha;
      v17 = blue;
      v15 = green;
      LUI_Render_DrawQuadRotated(localClientNum, element, v94 + elementCenter.v[0], v93 + elementCenter.v[1], v96, v95, 0.0, 0.0, 1.0, 1.0, *(float *)&_XMM9, red * *((float *)p_minSize + 6), green * *((float *)p_minSize + 7), blue * *((float *)p_minSize + 8), alpha * *((float *)p_minSize + 9), v88->textureTable->image, luaVM);
      v89 = *(p_minSize - 2);
      if ( v89 < 0 )
      {
        v16 = red;
      }
      else
      {
        v90 = CG_Draw_MaterialHandleForIndex(localClientNum, v89);
        if ( !v90 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 376, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
          __debugbreak();
        if ( !v90->textureTable->image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 377, ASSERT_TYPE_ASSERT, "(material->textureTable[0].image)", (const char *)&queryFormat, "material->textureTable[0].image") )
          __debugbreak();
        v16 = red;
        LUI_Render_DrawQuadRotated(localClientNum, element, v94 + elementCenter.v[0], v93 + elementCenter.v[1], (float)(v95 + v96) * 0.5, (float)(v95 + v96) * 0.5, 0.0, 0.0, 1.0, 1.0, *(float *)&_XMM9, red * *((float *)p_minSize + 6), green * *((float *)p_minSize + 7), blue * *((float *)p_minSize + 8), alpha * *((float *)p_minSize + 9), v90->textureTable->image, luaVM);
      }
      v35 = (unsigned int)_xmm;
      v36 = DOUBLE_0_000244140625;
      v34 = FLOAT_1_0;
    }
    ++v37;
    p_minSize += 30;
  }
  while ( v37 < 64 );
  if ( options->cursorMaterial )
    LUIElement_RadarTargeting_HandleCursor(localClientNum, options, element, root, v16, v15, v17, v14, luaVM, &elementCenter, v91, targetScreenOffsets, targetScreenYaws);
}

/*
==============
LUIElement_RadarTargeting_HandleCursor
==============
*/
void LUIElement_RadarTargeting_HandleCursor(const LocalClientNum_t localClientNum, RadarTargetingOptions *options, LUIElement *element, LUIElement *root, float red, float green, float blue, float alpha, lua_State *luaVM, const vec2_t *elementCenter, float radarRadius, const vec2_t *targetScreenOffsets, const float *targetScreenYaws)
{
  cg_t *LocalClientGlobals; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  char *v22; 
  __int64 v23; 
  float v24; 
  __m128 v25; 
  float v26; 
  __m128 v27; 
  float v28; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  int v40; 
  float v41; 
  int v42; 
  char v43; 
  int *p_materialIndex; 
  CgHandler *Handler; 
  centity_t *Entity; 
  __int64 p_eType; 
  float v49; 
  float v50; 
  unsigned __int64 paintedTargets; 
  unsigned __int64 v52; 
  const char *v53; 
  char *fmt; 
  float c; 
  float s; 
  const float *v57; 
  const vec2_t *v58; 
  lua_State *v59; 
  LUIElement *elementa; 
  __int64 v61; 
  char v62[384]; 

  v61 = -2i64;
  elementa = element;
  v59 = luaVM;
  v58 = elementCenter;
  v57 = targetScreenYaws;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 89, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !options->cursorMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 90, ASSERT_TYPE_ASSERT, "(options->cursorMaterial)", (const char *)&queryFormat, "options->cursorMaterial") )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  v18 = ClActiveClient::GetClient(localClientNum);
  v19 = COERCE_FLOAT(ClActiveClient_GetCmdNumber(v18));
  v20 = v19;
  c = v19;
  if ( CmdNumber > SLODWORD(v19) )
  {
    *(float *)&fmt = v19;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber <= LODWORD(v20) - 128 || CmdNumber <= 0 )
  {
    memset(&c, 0, sizeof(c));
  }
  else
  {
    v21 = (__int64)&v18->cmds[CmdNumber & 0x7F];
    memset(&c, 0, sizeof(c));
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    v22 = v62;
    v23 = 2i64;
    do
    {
      *(__m256i *)v22 = *(__m256i *)v21;
      *((__m256i *)v22 + 1) = *(__m256i *)(v21 + 32);
      *((__m256i *)v22 + 2) = *(__m256i *)(v21 + 64);
      *((_OWORD *)v22 + 6) = *(_OWORD *)(v21 + 96);
      v22 += 128;
      *((_OWORD *)v22 - 1) = *(_OWORD *)(v21 + 112);
      v21 += 128i64;
      --v23;
    }
    while ( v23 );
    *(_QWORD *)v22 = *(_QWORD *)v21;
  }
  v24 = _mm_cvtepi32_ps((__m128i)(unsigned int)v62[157]).m128_f32[0];
  v25 = _mm_cvtepi32_ps((__m128i)(unsigned int)-v62[156]);
  v26 = v25.m128_f32[0] * 0.0078740157;
  v27 = v25;
  v27.m128_f32[0] = (float)((float)(v25.m128_f32[0] * v25.m128_f32[0]) + (float)(v24 * v24)) * 0.000062000123;
  v28 = v24 * 0.0078740157;
  if ( v27.m128_f32[0] > 1.0 )
  {
    v27.m128_f32[0] = fsqrt(v27.m128_f32[0]);
    _XMM1 = v27;
    __asm
    {
      vcmpless xmm0, xmm1, xmm7
      vblendvps xmm0, xmm1, xmm11, xmm0
    }
    v28 = (float)((float)(1.0 / *(float *)&_XMM0) * v24) * 0.0078740157;
    v26 = (float)(1.0 / *(float *)&_XMM0) * v26;
  }
  v32 = (float)((float)(radarRadius * options->cursorMoveRate) * 0.0020000001) * _mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0];
  v33 = fsqrt((float)(options->cursorWidth * options->cursorWidth) + (float)(options->cursorHeight * options->cursorHeight));
  options->cursorOffset.v[0] = (float)(v32 * v28) + options->cursorOffset.v[0];
  v34 = (float)(v32 * v26) + options->cursorOffset.v[1];
  options->cursorOffset.v[1] = v34;
  v35 = LODWORD(options->cursorOffset.v[0]);
  v36 = v35;
  *(float *)&v36 = (float)(*(float *)&v35 * *(float *)&v35) + (float)(v34 * v34);
  if ( *(float *)&v36 > (float)((float)((float)(radarRadius * options->maxRadiusPct) - v33) * (float)((float)(radarRadius * options->maxRadiusPct) - v33)) )
  {
    *(float *)&v36 = fsqrt(*(float *)&v36);
    _XMM1 = v36;
    __asm
    {
      vcmpless xmm0, xmm1, xmm7
      vblendvps xmm0, xmm1, xmm11, xmm0
    }
    options->cursorOffset.v[0] = *(float *)&v35 * (float)(1.0 / *(float *)&_XMM0);
    options->cursorOffset.v[1] = (float)(1.0 / *(float *)&_XMM0) * options->cursorOffset.v[1];
    *(float *)&_XMM1 = (float)(radarRadius * options->maxRadiusPct) - v33;
    options->cursorOffset.v[0] = *(float *)&_XMM1 * options->cursorOffset.v[0];
    options->cursorOffset.v[1] = *(float *)&_XMM1 * options->cursorOffset.v[1];
  }
  v40 = -1;
  v41 = FLOAT_N1_0;
  v42 = 0;
  v43 = 0;
  p_materialIndex = &LocalClientGlobals->targets[0].materialIndex;
  do
  {
    if ( *(p_materialIndex - 4) == 2047 || (p_materialIndex[19] & 0x1000) == 0 || *p_materialIndex < 0 )
    {
      options->paintedTargets &= ~(1i64 << v43);
    }
    else
    {
      Handler = CgHandler::getHandler(localClientNum);
      Entity = CG_GetEntity((const LocalClientNum_t)Handler->m_localClientNum, *(p_materialIndex - 4));
      if ( Entity )
        p_eType = (__int64)&Entity->nextState.eType;
      else
        p_eType = 8i64;
      if ( *(_WORD *)p_eType != 4 )
      {
        v49 = options->cursorOffset.v[0] - targetScreenOffsets->v[0];
        v50 = options->cursorOffset.v[1] - targetScreenOffsets->v[1];
        FastSinCos(-0.017453292 * *v57, &s, &c);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v49 * c) - (float)(v50 * s)) & _xmm) < (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)p_materialIndex[3]).m128_f32[0] * 0.5) && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v49 * s) + (float)(v50 * c)) & _xmm) < (float)((float)p_materialIndex[4] * 0.5) && (v40 == -1 || (float)((float)(v49 * v49) + (float)(v50 * v50)) < v41) )
        {
          v40 = v42;
          v41 = (float)(v49 * v49) + (float)(v50 * v50);
        }
      }
    }
    ++v42;
    ++v43;
    p_materialIndex += 30;
    ++targetScreenOffsets;
    ++v57;
  }
  while ( v42 < 64 );
  if ( v40 < 0 )
  {
    if ( !options->paintedTargets )
      goto LABEL_50;
  }
  else
  {
    paintedTargets = options->paintedTargets;
    if ( _bittest64((const __int64 *)&paintedTargets, (unsigned int)v40) )
      goto LABEL_50;
  }
  v52 = 0i64;
  options->paintedTargets = 0i64;
  if ( v40 >= 0 )
  {
    _bittestandset64((__int64 *)&v52, v40);
    options->paintedTargets = v52;
  }
  if ( LUI_CoD_InFrontend() || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    v53 = j_va("cmd lui radar_targeted %i\n", (unsigned int)v40);
    goto LABEL_49;
  }
  if ( NetConstStrings_GetLuiStringIndex("radar_targeted", (unsigned int *)&s) )
  {
    v53 = j_va("cmd lui %i %i %i\n", s, (unsigned int)v40, (unsigned int)cls.serverId);
LABEL_49:
    Cbuf_AddText(localClientNum, v53);
    goto LABEL_50;
  }
  Com_PrintWarning(13, "LUI_CustomElement_RadarTargeting: could not find NetConstString index for radar_targeted\n");
LABEL_50:
  LUI_Render_DrawQuadRotated(localClientNum, elementa, v58->v[0] + options->cursorOffset.v[0], v58->v[1] + options->cursorOffset.v[1], options->cursorWidth, options->cursorHeight, 0.0, 0.0, 1.0, 1.0, 0.0, red, green, blue, alpha, options->cursorMaterial, v59);
}

/*
==============
LUIElement_RadarTargeting_Render
==============
*/
void LUIElement_RadarTargeting_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  RadarTargetingOptions *customElementData; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 399, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 400, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 401, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !root && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 402, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 74, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 75, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (RadarTargetingOptions *)element->customElementData;
  if ( !customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 405, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  LUIElement_RadarTargeting_Draw(localClientNum, customElementData, element, root, red, green, blue, alpha, luaVM);
}

/*
==============
LUI_LuaCall_LUIElement_SetupRadarTargeting
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRadarTargeting(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupRadarTargeting_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRadarTargeting_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRadarTargeting_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  GfxImage *v3; 
  float *v4; 
  const char *v5; 
  const char *v6; 
  GfxImage *v7; 
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  float v18; 
  double v19; 
  float v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  double v25; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = NULL;
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_RadarTargeting_Render;
  v2->imageData.uMin = 0.0;
  *(_QWORD *)&v2->textData.fontSize = 1065353216i64;
  v2->imageData.vMax = 1.0;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v4 = (float *)j_lua_newuserdata(luaVM, 0x50ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v4;
  memset_0(v4, 0, 0x50ui64);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 477, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 440, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "maskMaterial");
  if ( j_lua_isstring(luaVM, -1) )
    v5 = j_lua_tolstring(luaVM, -1, NULL);
  else
    v5 = NULL;
  j_lua_settop(luaVM, -2);
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 440, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "cursorMaterial");
  if ( j_lua_isstring(luaVM, -1) )
    v6 = j_lua_tolstring(luaVM, -1, NULL);
  else
    v6 = NULL;
  j_lua_settop(luaVM, -2);
  if ( v5 && *v5 )
  {
    *((_QWORD *)v4 + 3) = Image_Register("radar_targeting_mask_reset", IMAGE_TRACK_HUD);
    v7 = Image_Register(v5, IMAGE_TRACK_HUD);
  }
  else
  {
    *((_QWORD *)v4 + 3) = 0i64;
    v7 = NULL;
  }
  *((_QWORD *)v4 + 4) = v7;
  if ( v6 && *v6 )
    v3 = Image_Register(v6, IMAGE_TRACK_HUD);
  *((_QWORD *)v4 + 5) = v3;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "radarCenterOffsetX");
  v8 = 0.0;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lui_tonumber32(luaVM, -1);
    v10 = *(float *)&v9;
  }
  else
  {
    v10 = 0.0;
  }
  j_lua_settop(luaVM, -2);
  *v4 = v10;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "radarCenterOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v11 = lui_tonumber32(luaVM, -1);
    v12 = *(float *)&v11;
  }
  else
  {
    v12 = 0.0;
  }
  j_lua_settop(luaVM, -2);
  v4[1] = v12;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minRadiusPct");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v13 = lui_tonumber32(luaVM, -1);
    v8 = *(float *)&v13;
  }
  j_lua_settop(luaVM, -2);
  v4[2] = v8;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "maxRadiusPct");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v14 = lui_tonumber32(luaVM, -1);
    v15 = *(float *)&v14;
  }
  else
  {
    v15 = FLOAT_1_0;
  }
  j_lua_settop(luaVM, -2);
  v4[3] = v15;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "maxDistance");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v16 = lui_tonumber32(luaVM, -1);
    v17 = *(float *)&v16;
  }
  else
  {
    v17 = FLOAT_5000_0;
  }
  j_lua_settop(luaVM, -2);
  v4[4] = v17;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "distanceExponent");
  v18 = FLOAT_0_5;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v19 = lui_tonumber32(luaVM, -1);
    v20 = *(float *)&v19;
  }
  else
  {
    v20 = FLOAT_0_5;
  }
  j_lua_settop(luaVM, -2);
  v4[5] = v20;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "cursorWidth");
  v21 = FLOAT_40_0;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v22 = lui_tonumber32(luaVM, -1);
    v23 = *(float *)&v22;
  }
  else
  {
    v23 = FLOAT_40_0;
  }
  j_lua_settop(luaVM, -2);
  v4[12] = v23;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "cursorHeight");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v24 = lui_tonumber32(luaVM, -1);
    v21 = *(float *)&v24;
  }
  j_lua_settop(luaVM, -2);
  v4[13] = v21;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "cursorMoveRate");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v25 = lui_tonumber32(luaVM, -1);
    v18 = *(float *)&v25;
  }
  j_lua_settop(luaVM, -2);
  result = 0i64;
  v4[14] = v18;
  return result;
}

