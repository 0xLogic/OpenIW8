/*
==============
IsCardinalDirection
==============
*/

bool __fastcall IsCardinalDirection(const int *tickRotationValue)
{
  return ?IsCardinalDirection@@YA_NAEBH@Z(tickRotationValue);
}

/*
==============
GetCurrentAngle
==============
*/
float GetCurrentAngle(const LocalClientNum_t *localClientNum, const CgCompassSystem *compassSystem)
{
  cg_t *LocalClientGlobals; 
  float outAngle; 
  vec2_t outVector; 

  LocalClientGlobals = CG_GetLocalClientGlobals(*localClientNum);
  CgCompassSystem::GetCompassYaw((CgCompassSystem *)compassSystem, COMPASS_TYPE_NAVBAR, 0, LocalClientGlobals, &outAngle, &outVector);
  return outAngle - LocalClientGlobals->compassNorthYaw;
}

/*
==============
GetObjectiveViewOrigin
==============
*/
void GetObjectiveViewOrigin(const LocalClientNum_t localClientNum, const ObjectiveView *obj, SecureVec3 *out_origin)
{
  __int64 v3; 
  __int64 v5; 
  CgEntitySystem *v6; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v12; 
  __int64 v22; 
  __int64 v23; 

  v3 = obj->entNum[0];
  v5 = localClientNum;
  if ( (_DWORD)v3 == 2047 )
  {
    *out_origin = (SecureVec3)obj->origin[0];
  }
  else
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
      __debugbreak();
    if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v23) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v22) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v5] )
    {
      LODWORD(v23) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v23) )
        __debugbreak();
    }
    v6 = CgEntitySystem::ms_entitySystemArray[v5];
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v23) = 2048;
      LODWORD(v22) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    p_pose = &v6->m_entities[v3].pose;
    if ( !p_pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
    FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)out_origin);
    if ( p_pose->isPosePrecise )
    {
      _XMM0 = LODWORD(out_origin->x);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v12;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      _XMM0 = LODWORD(out_origin->y);
      __asm { vcvtdq2pd xmm0, xmm0 }
      out_origin->x = *(float *)&_XMM1;
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v12;
      _XMM0 = LODWORD(out_origin->z);
      __asm
      {
        vcvtsd2ss xmm2, xmm1, xmm1
        vcvtdq2pd xmm0, xmm0
      }
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v12;
      out_origin->y = *(float *)&_XMM2;
      __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
      out_origin->z = *(float *)&_XMM2;
    }
  }
}

/*
==============
IsCardinalDirection
==============
*/
bool IsCardinalDirection(const int *tickRotationValue)
{
  return !*tickRotationValue || *tickRotationValue == 90 * (*tickRotationValue / 90);
}

/*
==============
LUIElement_CompassCalculateIconParameters
==============
*/
void LUIElement_CompassCalculateIconParameters(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, const float iconSizeScalar, vec2_t *toEntity, float *outX, float *outY, float *outW, float *outH, float smallDistanceScale, float medDistanceScale)
{
  bool v11; 
  float v14; 
  float v15; 
  int *customElementData; 
  CgCompassSystem *CompassSystem; 
  cg_t *LocalClientGlobals; 
  float v20; 
  int v21; 
  const dvar_t *v22; 
  float v25; 
  float v26; 
  __int128 unsignedInt; 
  const dvar_t *v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  double v34; 
  float v35; 
  double v36; 
  float v37; 
  double v38; 
  double v39; 
  float v40; 
  double v41; 
  const dvar_t *v42; 
  float v43; 
  unsigned int v44; 
  float v45; 
  float v46; 
  float v47; 
  double v48; 
  __int128 v49; 
  __int128 v53; 
  float v57; 
  int v58; 
  LocalClientNum_t localClientNuma; 
  int outFOVUsed; 
  float v61; 
  float v62; 
  playerState_s *p_predictedPlayerState; 
  int *v64; 
  vec2_t outFOV; 

  v11 = element->customElementData == NULL;
  localClientNuma = localClientNum;
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  v14 = element->bottom - element->top;
  v15 = element->right - element->left;
  customElementData = (int *)element->customElementData;
  v62 = v14;
  v61 = v15;
  v64 = customElementData;
  *(float *)&outFOVUsed = 0.0;
  _XMM10 = 0i64;
  p_predictedPlayerState = &CgGlobalsMP::GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  outFOV.v[0] = 0.0;
  LUI_Element_ComputeAppliedFOV(&localClientNuma, (float *)&outFOV, &outFOVUsed);
  CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CgCompassSystem::GetCompassYaw(CompassSystem, COMPASS_TYPE_NAVBAR, 0, LocalClientGlobals, (float *)&localClientNuma, &outFOV);
  v20 = (float)(*(float *)&localClientNuma - LocalClientGlobals->compassNorthYaw) - 360.0;
  v21 = outFOVUsed;
  v22 = DCONST_DVARBOOL_navbarUseRoundedCompass;
  localClientNuma = outFOVUsed / 2;
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  LODWORD(v25) = LODWORD(v20) & _xmm;
  LODWORD(v26) = COERCE_UNSIGNED_INT(*(float *)&_XMM1 - 360.0) & _xmm;
  unsignedInt = 0i64;
  if ( !DCONST_DVARBOOL_navbarUseRoundedCompass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarUseRoundedCompass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
  {
    v28 = DCONST_DVARFLT_compassShrinkFactor;
    if ( !DCONST_DVARFLT_compassShrinkFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShrinkFactor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    unsignedInt = v28->current.unsignedInt;
  }
  v29 = toEntity->v[1] * toEntity->v[1];
  v30 = _mm_cvtepi32_ps((__m128i)(unsigned int)v21).m128_f32[0];
  *(float *)&outFOVUsed = v15 / v30;
  v31 = v26 - v25;
  v32 = FLOAT_1_0;
  outFOV.v[0] = v31;
  v33 = v14 * iconSizeScalar;
  v34 = I_fclamp(fsqrt((float)(toEntity->v[0] * toEntity->v[0]) + v29) * 0.00039999999, 0.0, 1.0);
  v35 = (float)((float)(1.0 - *(float *)&v34) * medDistanceScale) + (float)(*(float *)&v34 * smallDistanceScale);
  v36 = vectoyaw(toEntity);
  v37 = _mm_cvtepi32_ps((__m128i)(unsigned int)(v21 / 2)).m128_f32[0];
  v38 = AngleDelta(p_predictedPlayerState->viewangles.v[1], *(const float *)&v36);
  v39 = I_fclamp(*(float *)&v38, COERCE_FLOAT(LODWORD(v37) ^ _xmm), v37);
  LODWORD(v40) = COERCE_UNSIGNED_INT(*(float *)&v39 + v37) & _xmm;
  v41 = I_fclamp(v40 / v30, 0.0, 1.0);
  v42 = DCONST_DVARBOOL_navbarUseRoundedCompass;
  v43 = *(float *)&v41 * v61;
  if ( !DCONST_DVARBOOL_navbarUseRoundedCompass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarUseRoundedCompass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.enabled )
  {
    LUI_Render_GetCurrentUnitScale();
    v44 = localClientNuma - (int)v40;
    v45 = 1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)localClientNuma).m128_f32[0];
    v46 = _mm_cvtepi32_ps((__m128i)abs32(v44)).m128_f32[0];
    v47 = (float)((float)(v46 * v45) * (float)(v46 * v45)) * (float)(v46 * v45);
    v48 = I_fclamp(1.0 - v47, 0.80000001, 1.0);
    v49 = LODWORD(FLOAT_1_0);
    *(float *)&v49 = (float)((float)(1.0 - *(float *)&v48) * v45) * outFOV.v[0];
    _XMM2 = v49 ^ (unsigned int)_xmm;
    _mm_cvtepi32_ps((__m128i)v44);
    __asm
    {
      vcmpless xmm1, xmm10, xmm4
      vblendvps xmm1, xmm2, xmm3, xmm1
    }
    v32 = *(float *)&_XMM1 + *(float *)&v48;
    v53 = unsignedInt;
    *(float *)&v53 = (float)(*(float *)&unsignedInt * *(float *)&outFOVUsed) * v47;
    _XMM1 = v53 ^ (unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm10, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
    }
    v43 = v43 + *(float *)&_XMM0;
  }
  v57 = (float)(v35 * v33) * v32;
  v58 = *v64;
  *outW = v57;
  *outH = v57;
  *outX = v43 + element->left;
  *outY = (float)((float)((float)v58 + element->top) + (float)(0.5 * v62)) - (float)((float)(v35 * v33) * 0.5);
}

/*
==============
LUIElement_CompassRenderEnemyIcon
==============
*/
void LUIElement_CompassRenderEnemyIcon(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, vec2_t *toEnemy, float finalAlpha, const vec4_t *enemyTeamColor, const float *radarTimeAmount, const float *lastFireTimeAmount, const float *fadeTimeAmount, const GfxImage *materialOverride)
{
  __int128 v10; 
  __int128 v11; 
  bool v12; 
  const float *v15; 
  void *customElementData; 
  float height; 
  CgGlobalsMP *LocalClientGlobals; 
  double v20; 
  float v21; 
  double v22; 
  float v23; 
  float v24; 
  const GfxImage *material; 
  float v26; 
  const dvar_t *v27; 
  lua_State *v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  float value; 
  const float *v33; 
  const float *v34; 
  const dvar_t *v35; 
  float v36; 
  float v37; 
  const dvar_t *v38; 
  bool enabled; 
  double v40; 
  float v41; 
  const dvar_t *v42; 
  float v43; 
  float v44; 
  float v45; 
  const dvar_t *v46; 
  float v47; 
  float v48; 
  double v49; 
  GfxImage *image; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v56; 
  float v60; 
  float v62; 
  int outFOVUsed; 
  float vMax; 
  float outFOV; 
  LocalClientNum_t localClientNuma; 
  float outH; 
  float outY; 
  float outX; 
  const float *v70; 
  const GfxImage *v71; 
  vec4_t color; 
  vec4_t result; 
  vec2_t outSize; 
  vec4_t quadVerts[4]; 
  __int128 v76; 
  __int128 v77; 

  v12 = element->customElementData == NULL;
  v15 = lastFireTimeAmount;
  v70 = radarTimeAmount;
  localClientNuma = localClientNum;
  v71 = materialOverride;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = element->customElementData;
  height = (float)(element->bottom - element->top) * 0.5;
  outFOVUsed = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  outFOV = 0.0;
  LUI_Element_ComputeAppliedFOV(&localClientNuma, &outFOV, &outFOVUsed);
  v20 = vectoyaw(toEnemy);
  v21 = (float)(outFOVUsed / 2);
  v22 = AngleDelta(LocalClientGlobals->predictedPlayerState.viewangles.v[1], *(const float *)&v20);
  v23 = (float)((float)(element->right - element->left) * 0.5) + element->left;
  LUI_Render_GetViewportSize(localClientNum, &outSize);
  v24 = 0.5 * *((float *)customElementData + 3);
  if ( *(float *)&v22 < COERCE_FLOAT(LODWORD(v21) ^ _xmm) )
  {
    material = (const GfxImage *)*((_QWORD *)customElementData + 4);
    v26 = (float)(v23 - v24) - (float)((float)material->width * 0.5);
LABEL_8:
    LUI_Render_DrawQuadRotated(localClientNum, element, v26, height + element->top, height, height, 0.0, 0.0, 1.0, 1.0, 0.0, enemyTeamColor->v[0], enemyTeamColor->v[1], enemyTeamColor->v[2], 1.0, material, luaVM);
    return;
  }
  if ( *(float *)&v22 > v21 )
  {
    material = (const GfxImage *)*((_QWORD *)customElementData + 5);
    v26 = (float)((float)material->width * 0.5) + (float)(v24 + v23);
    goto LABEL_8;
  }
  v27 = DCONST_DVARFLT_compassEnemyIconSizeScalar;
  v77 = v10;
  v76 = v11;
  if ( !DCONST_DVARFLT_compassEnemyIconSizeScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyIconSizeScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  v28 = luaVM;
  LUIElement_CompassCalculateIconParameters(localClientNum, element, luaVM, v27->current.value, toEnemy, &outX, &outY, &vMax, &outH, 0.5, 0.89999998);
  v29 = vMax;
  v62 = vMax;
  Dvar_GetVec3_Internal_DebugName(DCONST_DVARVEC3_navbarEnemyIconBackingColor, "navbarEnemyIconBackingColor", (vec3_t *)&result);
  v30 = DCONST_DVARFLT_navbarEnemyIconAnimationRange;
  v31 = enemyTeamColor->v[1];
  color.v[0] = enemyTeamColor->v[0];
  color.v[2] = enemyTeamColor->v[2];
  color.v[1] = v31;
  if ( !DCONST_DVARFLT_navbarEnemyIconAnimationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconAnimationRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  value = v30->current.value;
  v33 = lastFireTimeAmount;
  v34 = v70;
  v35 = DCONST_DVARFLT_navbarEnemyIconMaxScalar;
  if ( *fadeTimeAmount <= 0.0 )
    v33 = v70;
  v36 = *v33;
  if ( !DCONST_DVARFLT_navbarEnemyIconMaxScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconMaxScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  v37 = v29 * v35->current.value;
  v38 = DCONST_DVARBOOL_navbarEnemyIconAnimPingPong;
  if ( !DCONST_DVARBOOL_navbarEnemyIconAnimPingPong && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconAnimPingPong") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  enabled = v38->current.enabled;
  v40 = I_fclamp(v36, 1.0 - value, 1.0);
  v41 = (float)(1.0 - *(float *)&v40) / value;
  if ( enabled )
    v41 = (float)((float)((float)(1.0 - *(float *)&v40) / value) * 2.0) - 1.0;
  v42 = DCONST_DVARFLT_navbarEnemyIconAnimationRange;
  v43 = (float)(COERCE_FLOAT(LODWORD(v41) & _xmm) * COERCE_FLOAT(LODWORD(v41) & _xmm)) * COERCE_FLOAT(LODWORD(v41) & _xmm);
  v44 = (float)((float)(1.0 - v43) * v37) + (float)(v43 * v29);
  outH = v44;
  vMax = v44;
  if ( !DCONST_DVARFLT_navbarEnemyIconAnimationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconAnimationRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v45 = v42->current.value;
  v46 = DCONST_DVARFLT_navbarEnemyIconBackingMaxScalar;
  if ( *fadeTimeAmount <= 0.0 )
    v15 = v34;
  v47 = *v15;
  if ( !DCONST_DVARFLT_navbarEnemyIconBackingMaxScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconBackingMaxScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  v48 = v62 * v46->current.value;
  v49 = I_fclamp(v47, 1.0 - v45, 1.0);
  image = (GfxImage *)v71;
  LODWORD(v51) = COERCE_UNSIGNED_INT((float)(1.0 - *(float *)&v49) / v45) & _xmm;
  LODWORD(v52) = LODWORD(v51) ^ _xmm;
  if ( !v71 )
    image = cgMedia.navBar.enemy[0]->textureTable->image;
  v53 = 1.0 - (float)((float)((float)((float)(v51 - 1.0) * (float)(v51 - 1.0)) * (float)(v51 - 1.0)) * (float)(v51 - 1.0));
  v54 = (float)((float)(1.0 - v53) * v62) + (float)(v53 * v48);
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_navbarhud.cpp", 632, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  _XMM1 = LODWORD(element->right);
  v56 = outY;
  _XMM0 = LODWORD(element->left);
  __asm
  {
    vmaxss  xmm3, xmm1, xmm7; right
    vmaxss  xmm1, xmm0, xmm7; left
  }
  LUI_Render_PushStencilRectangle(localClientNum, *(float *)&_XMM1, outY - height, *(float *)&_XMM3, (float)(outY + v44) + height);
  v60 = outX;
  result.v[3] = 1.0 - (float)((float)((float)(v52 * v52) * v52) * v52);
  LUI_CoD_GenerateQuadVerts(outX - (float)(v54 * 0.5), v56 - (float)(v54 * 0.5), (float)(v54 * 0.5) + outX, (float)(v54 * 0.5) + v56, (vec4_t (*)[4])quadVerts);
  LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
  LUI_Render_DrawImage(localClientNum, element, v28, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &result, image);
  color.v[3] = finalAlpha;
  LUI_CoD_GenerateQuadVerts(v60 - (float)(v44 * 0.5), v56 - (float)(v44 * 0.5), (float)(v44 * 0.5) + v60, (float)(v44 * 0.5) + v56, (vec4_t (*)[4])quadVerts);
  LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
  LUI_Render_DrawImage(localClientNum, element, v28, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &color, image);
  LUI_Render_PopStencilRectangle(localClientNum);
}

/*
==============
LUIElement_CompassRenderItems
==============
*/
void LUIElement_CompassRenderItems(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUIElement *v8; 
  LocalClientNum_t v10; 
  LUINavBar *customElementData; 
  const CgCompassSystem *CompassSystem; 
  float top; 
  float v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  char ActiveGameMode; 
  bool v20; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  float v25; 
  CgGlobalsMP *v26; 
  unsigned int v27; 
  const OmnvarDef *v28; 
  OmnvarData *v29; 
  unsigned int v30; 
  const OmnvarDef *v31; 
  const OmnvarData *v32; 
  int Integer; 
  int v34; 
  CgGlobalsMP *v35; 
  CgCompassSystemMP *CompassSystemMP; 
  const dvar_t *v37; 
  int i; 
  CompassDecoyActorMP *DecoyCompassActor; 
  CompassDecoyActorMP *v41; 
  LocalClientNum_t localClientNuma; 
  float lastFireTimeAmount; 
  float radarTimeAmount[2]; 
  SecureVec3 out; 
  __int64 v46; 
  vec2_t toEnemy; 
  vec2_t outSize; 
  vec4_t enemyTeamColor; 

  v46 = -2i64;
  v8 = root;
  toEnemy = (vec2_t)root;
  v10 = localClientNum;
  localClientNuma = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUINavBar *)element->customElementData;
  CompassSystem = CgCompassSystem::GetCompassSystem(v10);
  *(_QWORD *)radarTimeAmount = CompassSystem;
  top = element->top;
  v14 = element->bottom - top;
  v15 = (float)((float)(element->right - element->left) * 0.5) + element->left;
  v16 = (float)(v14 * 0.5) + top;
  v17 = DCONST_DVARFLT_compassMaskScalar;
  if ( !DCONST_DVARFLT_compassMaskScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMaskScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.value * customElementData->actualWidth;
  LUI_Render_GetViewportSize(v10, &outSize);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v20 = ActiveGameMode != 1;
  if ( ActiveGameMode != 1 )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(v10);
    IndexByName = BG_Omnvar_GetIndexByName("ui_scrambler_strength");
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(LocalClientGlobals->localClientNum, IndexByName);
    v25 = (float)Omnvar_GetInteger(Def, Data) * 0.2;
    LUI_Render_PushGlitch(v25);
    v8 = (LUIElement *)toEnemy;
    CompassSystem = *(const CgCompassSystem **)radarTimeAmount;
  }
  if ( customElementData->shouldDrawCompass )
  {
    LUI_Render_PushMask(v10, v15, v16, v18, v14, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, customElementData->compassMask);
    LUI_Element_RenderCompass(v8, &localClientNuma, CompassSystem, customElementData, element, luaVM);
    v10 = localClientNuma;
    LUI_Render_PopMask(localClientNuma);
  }
  if ( v20 )
  {
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG || CG_GameInterface_PlayingBR() )
    {
      LUI_Render_PushMask(v10, v15, v16, v18, v14, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, customElementData->compassMask);
      LUIElement_CompassRenderObjectives(v10, element, luaVM);
      LUI_Render_PopMask(v10);
    }
    v26 = CgGlobalsMP::GetLocalClientGlobals(v10);
    v27 = BG_Omnvar_GetIndexByName("ui_compass_hide_enemy_navbar");
    v28 = BG_Omnvar_GetDef(v27);
    v29 = CG_Omnvar_GetData(v26->localClientNum, v27);
    if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( v28->type )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
        __debugbreak();
      if ( v28->type )
        goto LABEL_26;
    }
    if ( !v29->current.enabled )
    {
LABEL_26:
      v30 = BG_Omnvar_GetIndexByName("ui_compass_hide_weapon_pings_navbar");
      v31 = BG_Omnvar_GetDef(v30);
      v32 = CG_Omnvar_GetData(v26->localClientNum, v30);
      Integer = Omnvar_GetInteger(v31, v32);
      v34 = Integer;
      if ( Integer != 1 )
      {
        LUIElement_CompassRenderMPActors(v10, element, alpha, Integer, luaVM);
        v35 = CgGlobalsMP::GetLocalClientGlobals(v10);
        CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(v10);
        v37 = DCONST_DVARVEC3_navbarEnemyIconColor;
        if ( !DCONST_DVARVEC3_navbarEnemyIconColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconColor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v37);
        *(_QWORD *)enemyTeamColor.v = v37->current.integer64;
        _XMM0 = LODWORD(v37->current.vector.v[2]);
        enemyTeamColor.v[2] = v37->current.vector.v[2];
        CG_CalcPlayerPos(&out, v10);
        for ( i = 0; i < 15; ++i )
        {
          DecoyCompassActor = CgCompassSystemMP::GetDecoyCompassActor(CompassSystemMP, i);
          v41 = DecoyCompassActor;
          if ( v35->time < DecoyCompassActor->pingTime && (v34 != 2 || v35->predictedPlayerState.radarEnabled) )
          {
            *(double *)&_XMM0 = CgCompassSystemMP::GetActorPingFadeAmount(CompassSystemMP, &DecoyCompassActor->beginRadarFadeTime);
            radarTimeAmount[0] = *(float *)&_XMM0;
            *(double *)&_XMM0 = CgCompassSystemMP::GetActorFadeAmount(CompassSystemMP, &v41->beginFadeTime);
            localClientNuma = _XMM0;
            lastFireTimeAmount = 0.0;
            __asm { vmaxss  xmm0, xmm0, xmm6 }
            if ( (float)(*(float *)&_XMM0 * alpha) > 0.0 )
            {
              toEnemy.v[0] = v41->pos.v[0] - out.x;
              *((_QWORD *)&_XMM0 + 1) = 0i64;
              toEnemy.v[1] = v41->pos.v[1] - out.y;
              LUIElement_CompassRenderEnemyIcon(v10, element, luaVM, &toEnemy, *(float *)&_XMM0 * alpha, &enemyTeamColor, radarTimeAmount, &lastFireTimeAmount, (const float *)&localClientNuma, NULL);
            }
          }
        }
        memset(&out, 0, sizeof(out));
      }
    }
    LUI_Render_PopGlitch();
  }
}

/*
==============
LUIElement_CompassRenderMPActors
==============
*/
void LUIElement_CompassRenderMPActors(const LocalClientNum_t localClientNum, LUIElement *element, float alpha, int weaponPingsStatus, lua_State *luaVM)
{
  signed __int64 v5; 
  void *v6; 
  const dvar_t *v10; 
  CgCompassSystemMP *CompassSystemMP; 
  CgGlobalsMP *LocalClientGlobals; 
  int v14; 
  int v15; 
  ActorWithDistance *v16; 
  const CompassActorMP *v17; 
  const CompassActorMP *v18; 
  float v19; 
  float v20; 
  __int64 v22; 
  ActorWithDistance *v23; 
  LocalClientNum_t v24; 
  LUIElement *v25; 
  const CompassActorMP *actor; 
  double LastShotFireAmount; 
  float v29; 
  __int64 *v30; 
  float v31; 
  __int128 v32; 
  const GfxImage *materialOverride; 
  const ScriptableEventCompassIconDef *iconState; 
  Material *v36; 
  vec4_t *enemyTeamColor; 
  float *radarTimeAmount; 
  std::less<void> v39; 
  LocalClientNum_t localClientNuma; 
  vec2_t outPos; 
  vec2_t v42; 
  SecureVec3 out; 
  float lastFireTimeAmount; 
  float v45; 
  __int128 v46; 
  lua_State *luaVMa; 
  __int64 v48[3]; 
  LUIElement *elementa; 
  vec4_t rgbColor; 
  ActorWithDistance _First[256]; 

  v6 = alloca(v5);
  v48[2] = -2i64;
  elementa = element;
  localClientNuma = localClientNum;
  luaVMa = luaVM;
  v10 = DCONST_DVARVEC3_navbarEnemyIconColor;
  if ( !DCONST_DVARVEC3_navbarEnemyIconColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  *(_QWORD *)rgbColor.v = v10->current.integer64;
  _XMM0 = LODWORD(v10->current.vector.v[2]);
  rgbColor.v[2] = v10->current.vector.v[2];
  CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  CG_CalcPlayerPos(&out, localClientNum);
  v14 = 0;
  v15 = 0;
  v16 = _First;
  do
  {
    v17 = (const CompassActorMP *)CompassSystemMP->GetCompassActor(CompassSystemMP, v15);
    v18 = v17;
    if ( v17->ownerNum != LocalClientGlobals->predictedPlayerState.clientNum && (v17->flags & 1) != 0 && (weaponPingsStatus != 2 || LocalClientGlobals->predictedPlayerState.radarEnabled) )
    {
      if ( CgCompassSystemMP::IsEnemyFullyVisible(CompassSystemMP, v17) )
      {
        CompassActor_GetLastPos(v18, &v42);
        v19 = v42.v[0];
        v20 = v42.v[1];
        goto LABEL_14;
      }
      if ( CgCompassSystemMP::IsActorWithinFadeTime(CompassSystemMP, &v18->beginFadeTime) || CgCompassSystemMP::IsActorWithinPingTime(CompassSystemMP, &v18->beginRadarFadeTime) )
      {
        CompassActor_GetLastEnemyPos(v18, &outPos);
        v19 = outPos.v[0];
        v20 = outPos.v[1];
LABEL_14:
        fsqrt((float)((float)(v20 - out.y) * (float)(v20 - out.y)) + (float)((float)(v19 - out.x) * (float)(v19 - out.x)));
        *(_QWORD *)&v46 = v18;
        _XMM0 = v46;
        __asm { vinsertps xmm0, xmm0, xmm2, 20h ; ' ' }
        v46 = _XMM0;
        *v16 = (ActorWithDistance)_XMM0;
        ++v14;
        ++v16;
      }
    }
    ++v15;
  }
  while ( v15 < 255 );
  v22 = v14;
  std::_Sort_unchecked<ActorWithDistance *,std::less<void>>(_First, &_First[v14], v14, v39);
  if ( v14 > 0 )
  {
    v23 = _First;
    v24 = localClientNuma;
    v25 = elementa;
    do
    {
      actor = v23->actor;
      *(double *)&_XMM0 = CgCompassSystemMP::GetActorPingFadeAmount(CompassSystemMP, &v23->actor->beginRadarFadeTime);
      v45 = *(float *)&_XMM0;
      *(double *)&_XMM0 = CgCompassSystemMP::GetActorFadeAmount(CompassSystemMP, &actor->beginFadeTime);
      _XMM7 = _XMM0;
      localClientNuma = _XMM0;
      LastShotFireAmount = CgCompassSystemMP::GetLastShotFireAmount(CompassSystemMP, &actor->lastShotFiredTime);
      lastFireTimeAmount = *(float *)&LastShotFireAmount;
      if ( CgCompassSystemMP::IsEnemyFullyVisible(CompassSystemMP, actor) )
      {
        v29 = FLOAT_1_0;
        if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 169, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
          __debugbreak();
        if ( !actor->lastPos.Get_lastPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 177, ASSERT_TYPE_ASSERT, "(actor->lastPos.Get_lastPos)", (const char *)&queryFormat, "actor->lastPos.Get_lastPos") )
          __debugbreak();
        ((void (__fastcall *)(vec4_t *, __int64 *))((unsigned __int64)&actor->lastPos ^ (__int64)actor->lastPos.Get_lastPos ^ s_aab_get_pointer_lastpos))(&actor->lastPos.lastPos, v48);
        v42 = (vec2_t)v48[0];
        v30 = v48;
        v31 = *(float *)v48;
        v32 = HIDWORD(v48[0]);
      }
      else
      {
        __asm { vmaxss  xmm0, xmm7, xmm6 }
        v29 = *(float *)&_XMM0 * alpha;
        if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 225, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
          __debugbreak();
        if ( !actor->lastEnemyPos.Get_lastEnemyPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 233, ASSERT_TYPE_ASSERT, "(actor->lastEnemyPos.Get_lastEnemyPos)", (const char *)&queryFormat, "actor->lastEnemyPos.Get_lastEnemyPos") )
          __debugbreak();
        ((void (__fastcall *)(vec4_t *, __int128 *))((unsigned __int64)actor->lastEnemyPos.Get_lastEnemyPos ^ (unsigned __int64)&actor->lastEnemyPos ^ s_aab_get_pointer_lastenemypos))(&actor->lastEnemyPos.lastEnemyPos, &v46);
        outPos = (vec2_t)v46;
        v30 = (__int64 *)&v46;
        v31 = *(float *)&v46;
        v32 = DWORD1(v46);
      }
      *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v32 + 1);
      *((float *)&elementa + 1) = *(float *)&v32 - out.y;
      *(float *)&elementa = v31 - out.x;
      memset(v30, 0, 0xCui64);
      materialOverride = NULL;
      if ( actor->ownerNum >= 0xC8u )
      {
        LODWORD(radarTimeAmount) = 200;
        LODWORD(enemyTeamColor) = actor->ownerNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_navbarhud.cpp", 763, ASSERT_TYPE_ASSERT, "(unsigned)( actor->ownerNum ) < (unsigned)( 200 )", "actor->ownerNum doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", enemyTeamColor, radarTimeAmount) )
          __debugbreak();
      }
      if ( (Game_GetClientExtraInfo(actor->ownerNum) & 0x40) != 0 )
      {
        LUI_COD_GetSwatchRGBColor(v24, "BattleRoyale.BRZombieColor", (vec3_t *)&rgbColor);
        iconState = actor->iconState;
        if ( iconState )
        {
          v36 = iconState->enemyCompassIconQuiet[0];
          if ( v36 )
            materialOverride = v36->textureTable->image;
        }
      }
      LUIElement_CompassRenderEnemyIcon(v24, v25, luaVMa, (vec2_t *)&elementa, v29, &rgbColor, &v45, &lastFireTimeAmount, (const float *)&localClientNuma, materialOverride);
      ++v23;
      --v22;
    }
    while ( v22 );
  }
  memset(&out, 0, sizeof(out));
  memset(&outPos, 0, sizeof(outPos));
  memset(&v42, 0, sizeof(v42));
}

/*
==============
LUIElement_CompassRenderObjectiveIcon
==============
*/
void LUIElement_CompassRenderObjectiveIcon(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, vec2_t *toObjective, const vec4_t *objectiveColor, const vec4_t *bgColor, ObjectiveBackground objectiveBackground, const ObjectiveView *obj, const GfxImage *icon)
{
  CgGlobalsMP *LocalClientGlobals; 
  double v14; 
  float v15; 
  double v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  Material *objectiveBackgroundDiamond; 
  float outFOV; 
  float uMax; 
  float vMin; 
  LocalClientNum_t localClientNuma; 
  int outFOVUsed; 

  localClientNuma = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v14 = vectoyaw(toObjective);
  outFOVUsed = 0;
  outFOV = 0.0;
  LUI_Element_ComputeAppliedFOV(&localClientNuma, &outFOV, &outFOVUsed);
  v15 = (float)(outFOVUsed / 2);
  v16 = AngleDelta(LocalClientGlobals->predictedPlayerState.viewangles.v[1], *(const float *)&v14);
  if ( *(float *)&v16 >= COERCE_FLOAT(LODWORD(v15) ^ _xmm) && *(float *)&v16 <= v15 )
  {
    v17 = DCONST_DVARFLT_navbarObjectiveIconSizeScalar;
    if ( !DCONST_DVARFLT_navbarObjectiveIconSizeScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarObjectiveIconSizeScalar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    LUIElement_CompassCalculateIconParameters(localClientNum, element, luaVM, v17->current.value, toObjective, &outFOV, (float *)&outFOVUsed, &vMin, &uMax, 0.80000001, 1.2);
    v18 = uMax;
    v19 = vMin;
    if ( objectiveBackground )
    {
      if ( objectiveBackground != EASE_OUT_QUAD )
      {
LABEL_14:
        LUI_Render_DrawQuadRotated(localClientNum, element, outFOV, *(float *)&outFOVUsed, v19, v18, 0.0, 0.0, 1.0, 1.0, 0.0, objectiveColor->v[0], objectiveColor->v[1], objectiveColor->v[2], 1.0, icon, luaVM);
        return;
      }
      objectiveBackgroundDiamond = cgMedia.objectiveBackgroundDiamond;
    }
    else
    {
      objectiveBackgroundDiamond = cgMedia.objectiveBackgroundPentagon;
    }
    LUI_Render_DrawQuadRotated(localClientNum, element, outFOV, *(float *)&outFOVUsed, vMin, uMax, 0.0, 0.0, 1.0, 1.0, 0.0, bgColor->v[0], bgColor->v[1], bgColor->v[2], 1.0, objectiveBackgroundDiamond->textureTable->image, luaVM);
    goto LABEL_14;
  }
}

/*
==============
LUIElement_CompassRenderObjectives
==============
*/
void LUIElement_CompassRenderObjectives(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM)
{
  _QWORD *customElementData; 
  CgGlobalsMP *LocalClientGlobals; 
  CgCompassSystemMP *CompassSystemMP; 
  ObjectiveView *obj; 
  __int64 v10; 
  void (__fastcall *GetObjectiveCompassColor)(CgCompassSystemMP *, const vec3_t *, ObjectiveSide, ObjectiveSide, ObjectiveBackground, int, vec4_t *, vec4_t *, const vec4_t *); 
  unsigned __int8 v12; 
  const ObjectiveSettings *v13; 
  void (__fastcall *v14)(CgCompassSystemMP *, const vec3_t *, ObjectiveSide, ObjectiveSide, ObjectiveBackground, int, vec4_t *, vec4_t *, const vec4_t *); 
  int fmt; 
  int fmta; 
  GfxImage *outIcon; 
  SecureVec3 out; 
  lua_State *luaVMa; 
  __int64 v20; 
  vec2_t toObjective; 
  SecureVec3 out_origin; 
  vec4_t bgColor; 
  vec4_t objectiveColor; 
  __int128 v25; 

  v20 = -2i64;
  luaVMa = luaVM;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = element->customElementData;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
  customElementData[13] = 0i64;
  *((_DWORD *)customElementData + 28) = -1082130432;
  customElementData[15] = 0i64;
  *((_DWORD *)customElementData + 32) = -1082130432;
  outIcon = NULL;
  toObjective.v[0] = 0.0;
  toObjective.v[1] = 0.0;
  objectiveColor = (vec4_t)_xmm;
  bgColor = (vec4_t)_xmm;
  CG_CalcPlayerPos(&out, localClientNum);
  obj = LocalClientGlobals->predictedPlayerState.objectives;
  v10 = 32i64;
  do
  {
    if ( CgCompassSystemMP::GetObjectiveShouldRender(CompassSystemMP, obj->state, (ObjectiveFlags)*(unsigned __int16 *)obj->flags, 1, obj->icon, (const GfxImage **)&outIcon) )
    {
      GetObjectiveViewOrigin(localClientNum, obj, &out_origin);
      toObjective.v[0] = out_origin.x - out.x;
      toObjective.v[1] = out_origin.y - out.y;
      GetObjectiveCompassColor = CompassSystemMP->GetObjectiveCompassColor;
      v25 = _xmm;
      LOBYTE(fmt) = obj->background;
      GetObjectiveCompassColor(CompassSystemMP, (const vec3_t *)&out_origin, obj->side, obj->progressSide, (ObjectiveBackground)fmt, obj->entNum[0], &objectiveColor, &bgColor, (const vec4_t *)&v25);
      LUIElement_CompassRenderObjectiveIcon(localClientNum, element, luaVM, &toObjective, &objectiveColor, &bgColor, obj->background, obj, outIcon);
      memset(&out_origin, 0, sizeof(out_origin));
    }
    ++obj;
    --v10;
  }
  while ( v10 );
  v12 = ScriptableCl_ObjectiveCount(localClientNum);
  if ( v12 )
  {
    do
    {
      v13 = ScriptableCl_ObjectiveGet(localClientNum, v10, (vec3_t *)&out_origin);
      if ( v13 && CgCompassSystemMP::GetObjectiveShouldRender(CompassSystemMP, v13->state, (ObjectiveFlags)*(unsigned __int16 *)v13->flags, 1, v13->icon, (const GfxImage **)&outIcon) )
      {
        out_origin.z = (float)v13->zOffset + out_origin.z;
        toObjective.v[0] = out_origin.x - out.x;
        toObjective.v[1] = out_origin.y - out.y;
        v14 = CompassSystemMP->GetObjectiveCompassColor;
        v25 = _xmm;
        LOBYTE(fmta) = v13->background;
        v14(CompassSystemMP, (const vec3_t *)&out_origin, NEUTRAL, NEUTRAL, (ObjectiveBackground)fmta, 2047, &objectiveColor, &bgColor, (const vec4_t *)&v25);
        LUIElement_CompassRenderObjectiveIcon(localClientNum, element, luaVMa, &toObjective, &objectiveColor, &bgColor, v13->background, NULL, outIcon);
      }
      LOBYTE(v10) = v10 + 1;
    }
    while ( (unsigned __int8)v10 < v12 );
  }
  memset(&out, 0, sizeof(out));
}

/*
==============
LUI_Element_ComputeAppliedFOV
==============
*/
void LUI_Element_ComputeAppliedFOV(const LocalClientNum_t *localClientNum, float *outFOV, int *outFOVUsed)
{
  float tanHalfFovX; 
  const dvar_t *v9; 
  float value; 
  const dvar_t *v11; 
  const char *v12; 
  const dvar_t *v13; 
  float v14; 
  __int128 v19; 
  double v22; 

  tanHalfFovX = CG_GetLocalClientGlobals(*localClientNum)->refdef.view.fov.tanHalfFovX;
  atanf_0(tanHalfFovX);
  _XMM8 = 0i64;
  __asm { vroundss xmm8, xmm8, xmm2, 1 }
  if ( CG_GetLocalClientGlobals(*localClientNum)->predictedPlayerState.weapCommon.fWeaponPosFrac <= 0.0 )
  {
    v13 = DCONST_DVARFLT_compass_stretch_min_fov_Hip;
    if ( !DCONST_DVARFLT_compass_stretch_min_fov_Hip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compass_stretch_min_fov_Hip") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    value = v13->current.value;
    v11 = DCONST_DVARFLT_compass_stretch_max_fov_Hip;
    if ( !DCONST_DVARFLT_compass_stretch_max_fov_Hip )
    {
      v12 = "compass_stretch_max_fov_Hip";
LABEL_12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v12) )
        __debugbreak();
    }
  }
  else
  {
    v9 = DCONST_DVARFLT_compass_stretch_min_fov_ADS;
    if ( !DCONST_DVARFLT_compass_stretch_min_fov_ADS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compass_stretch_min_fov_ADS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
    v11 = DCONST_DVARFLT_compass_stretch_max_fov_ADS;
    if ( !DCONST_DVARFLT_compass_stretch_max_fov_ADS )
    {
      v12 = "compass_stretch_max_fov_ADS";
      goto LABEL_12;
    }
  }
  Dvar_CheckFrontendServerThread(v11);
  v14 = v11->current.value;
  *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM8, value, v14);
  __asm
  {
    vminss  xmm4, xmm0, xmm8
    vmaxss  xmm3, xmm0, xmm8
  }
  v19 = LODWORD(FLOAT_1_0);
  *(float *)&v19 = 1.0 - (float)(*(float *)&_XMM4 / *(float *)&_XMM3);
  _XMM3 = v19;
  __asm
  {
    vmaxss  xmm3, xmm3, xmm9
    vminss  xmm5, xmm3, xmm4
  }
  v22 = I_fclamp((float)((float)(1.0 - *(float *)&_XMM5) * *(float *)&_XMM8) + (float)(*(float *)&_XMM5 * *(float *)&_XMM0), value, v14);
  *outFOV = *(float *)&v22;
  *outFOVUsed = (int)*(float *)&v22;
  if ( ((int)*(float *)&v22 & 1) != 0 )
    *outFOVUsed = (int)*(float *)&v22 + 1;
}

/*
==============
LUI_Element_RenderCompass
==============
*/
void LUI_Element_RenderCompass(LUIElement *root, const LocalClientNum_t *localClientNum, const CgCompassSystem *compassSystem, LUINavBar *navBarData, LUIElement *element, lua_State *luaVM)
{
  const LocalClientNum_t *v8; 
  float top; 
  float left; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  LocalClientNum_t v19; 
  float v20; 
  __int64 v21; 
  float v22; 
  const dvar_t *v23; 
  float v24; 
  int v25; 
  float CurrentAngle; 
  const dvar_t *v28; 
  float prevAngle; 
  float v32; 
  const dvar_t *v33; 
  __int128 v34; 
  int v37; 
  float v38; 
  int v39; 
  const dvar_t *v40; 
  float v43; 
  float value; 
  const dvar_t *v45; 
  float v46; 
  const dvar_t *v47; 
  float v48; 
  const dvar_t *v49; 
  float v50; 
  float v51; 
  __int128 v52; 
  float v53; 
  float v54; 
  const dvar_t *v55; 
  __int128 v56; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  __m128 v64; 
  __m128 v65; 
  double v66; 
  __int128 v67; 
  __m128 v71; 
  int v75; 
  int v79; 
  const char *v80; 
  const char *v81; 
  float v82; 
  float v83; 
  float v84; 
  GfxImage *material; 
  const dvar_t *v86; 
  int outFOVUsed; 
  float offset; 
  float outFOV; 
  float height; 
  float unitScale; 
  float v92; 
  int v93; 
  float v94; 
  float sizeScalar; 
  float tickHeight; 
  float roundedCompassHeightOffset; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  int tickRotationValue; 
  lua_State *v104; 
  LocalClientNum_t *v105; 
  LUIElement *v106; 
  vec4_t tickColor; 
  vec2_t outSize; 
  vec4_t color; 

  v8 = localClientNum;
  v105 = (LocalClientNum_t *)localClientNum;
  top = element->top;
  left = element->left;
  v11 = element->bottom - top;
  v12 = (float)(element->right - left) * 0.5;
  offset = element->right - left;
  height = v11 * 0.5;
  v13 = (float)(v11 * 0.5) + top;
  v106 = root;
  v104 = luaVM;
  v14 = left + v12;
  _XMM14 = LODWORD(FLOAT_1_0);
  _XMM0 = (unsigned int)SEH_GetCurrentLanguage();
  __asm
  {
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm6, xmm14, xmm2, xmm3
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  v19 = *v8;
  v20 = *(float *)&_XMM0 * *(float *)&_XMM6;
  *(float *)&_XMM0 = (float)navBarData->tickWidth;
  v21 = navBarData->tickHeight;
  v101 = *(float *)&_XMM0 * v20;
  v22 = (float)v21;
  tickHeight = v22 * v20;
  v102 = (float)(v22 * v20) * 0.5;
  unitScale = v20;
  v93 = _XMM6;
  LUI_Render_GetViewportSize(v19, &outSize);
  v23 = DCONST_DVARFLT_compassCenterMaskScalar;
  if ( !DCONST_DVARFLT_compassCenterMaskScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCenterMaskScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  v24 = v23->current.value * navBarData->actualWidth;
  CgCompassSystem::GetMainHudColor((CgCompassSystem *)compassSystem, &color);
  v25 = 0;
  _XMM15 = 0i64;
  *(float *)&outFOVUsed = 0.0;
  outFOV = 0.0;
  LUI_Element_ComputeAppliedFOV(v8, &outFOV, &outFOVUsed);
  CurrentAngle = GetCurrentAngle(v8, compassSystem);
  v28 = DCONST_DVARBOOL_compassDelayEnabled;
  prevAngle = navBarData->prevAngle;
  v92 = CurrentAngle;
  *(float *)&_XMM8 = CurrentAngle;
  if ( !DCONST_DVARBOOL_compassDelayEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassDelayEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  _XMM7 = LODWORD(FLOAT_360_0);
  if ( v28->current.enabled )
  {
    v32 = CurrentAngle - navBarData->prevAngle;
    if ( v32 <= 180.0 )
    {
      if ( v32 < -180.0 )
        prevAngle = prevAngle + -360.0;
    }
    else
    {
      prevAngle = prevAngle + 360.0;
    }
    v33 = DCONST_DVARFLT_compassDelayEase;
    if ( !DCONST_DVARFLT_compassDelayEase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassDelayEase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    v34 = LODWORD(FLOAT_1_0);
    *(float *)&v34 = (float)((float)(1.0 - v33->current.value) * prevAngle) + (float)(CurrentAngle * v33->current.value);
    _XMM4 = v34;
    __asm
    {
      vcmpltss xmm0, xmm7, xmm4
      vblendvps xmm8, xmm4, xmm3, xmm0
    }
    v92 = *(float *)&_XMM8;
    v93 = _XMM8;
  }
  v37 = outFOVUsed;
  LODWORD(v38) = COERCE_UNSIGNED_INT(*(float *)&_XMM8 - 360.0) & _xmm;
  v39 = outFOVUsed / 2;
  navBarData->currentAngle = *(float *)&_XMM8;
  v40 = DCONST_DVARBOOL_navbarUseRoundedCompass;
  v94 = *(float *)&v39;
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm8, 1 }
  LODWORD(v43) = COERCE_UNSIGNED_INT(*(float *)&_XMM1 - 360.0) & _xmm;
  value = 0.0;
  if ( !DCONST_DVARBOOL_navbarUseRoundedCompass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarUseRoundedCompass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  if ( v40->current.enabled )
  {
    v45 = DCONST_DVARFLT_compassShrinkFactor;
    if ( !DCONST_DVARFLT_compassShrinkFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShrinkFactor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v45);
    value = v45->current.value;
  }
  v46 = offset / (float)v37;
  v98 = v43 - v38;
  v100 = v46;
  v99 = v46 * value;
  *(float *)&outFOVUsed = (float)(v43 - v38) * v46;
  navBarData->actualWidth = offset - (float)((float)(v46 * value) * 2.0);
  v47 = DCONST_DVARFLT_compassBackgroundWidthScalar;
  if ( !DCONST_DVARFLT_compassBackgroundWidthScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBackgroundWidthScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  v48 = v47->current.value;
  v49 = DCONST_DVARVEC4_compassBackgroundColor;
  v50 = v48 * navBarData->actualWidth;
  if ( !DCONST_DVARVEC4_compassBackgroundColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBackgroundColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  LUI_Render_DrawQuadRotated(*v8, element, v12 + element->left, (float)(v11 * 0.75) + element->top, v50, height, 0.0, 0.0, 1.0, 1.0, 0.0, v49->current.value, v49->current.vector.v[1], v49->current.vector.v[2], v49->current.vector.v[3], navBarData->compassBackground, v104);
  LUI_Render_PushMask(*v8, v14, v13, v24, v11, 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, &outSize, navBarData->compassCenterMask);
  if ( v37 > 0 )
  {
    v51 = v94;
    v52 = (unsigned int)_xmm;
    v53 = unitScale;
    v54 = offset;
    v93 = (int)v43;
    outFOV = v94;
    while ( 1 )
    {
      v55 = DCONST_DVARBOOL_navbarUseRoundedCompass;
      v56 = 0i64;
      *(float *)&v56 = (float)v25 / (float)v37;
      _XMM2 = v56;
      __asm
      {
        vmaxss  xmm1, xmm2, xmm15
        vminss  xmm0, xmm1, xmm14
      }
      v60 = *(float *)&_XMM0 * v54;
      offset = *(float *)&_XMM0 * v54;
      sizeScalar = FLOAT_1_0;
      roundedCompassHeightOffset = 0.0;
      v61 = FLOAT_1_0;
      if ( !DCONST_DVARBOOL_navbarUseRoundedCompass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarUseRoundedCompass") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v55);
      if ( v55->current.enabled )
      {
        v62 = 1.0 / _mm_cvtepi32_ps((__m128i)LODWORD(v94)).m128_f32[0];
        v64 = _mm_cvtepi32_ps((__m128i)abs32(SLODWORD(v51)));
        v63 = v64.m128_f32[0] * v62;
        v64.m128_f32[0] = (float)(v63 * v63) * v63;
        v65 = v64;
        v66 = I_fclamp(1.0 - v64.m128_f32[0], 0.80000001, 1.0);
        v67 = LODWORD(FLOAT_1_0);
        *(float *)&v67 = (float)((float)(1.0 - *(float *)&v66) * v62) * v98;
        _XMM2 = v67 ^ v52;
        _mm_cvtepi32_ps((__m128i)LODWORD(v51));
        __asm
        {
          vcmpless xmm1, xmm15, xmm4
          vblendvps xmm1, xmm2, xmm3, xmm1
        }
        v71 = v65;
        v71.m128_f32[0] = v65.m128_f32[0] * v99;
        v61 = *(float *)&v66 + *(float *)&_XMM1;
        _XMM1 = *(_OWORD *)&v71 ^ v52;
        __asm
        {
          vcmpless xmm0, xmm15, xmm4
          vblendvps xmm0, xmm1, xmm2, xmm0
        }
        *(float *)&v75 = (float)(v61 * v100) * v98;
        v60 = v60 + *(float *)&_XMM0;
        roundedCompassHeightOffset = (float)(v63 * v53) * 5.0;
        sizeScalar = v61;
        offset = v60;
        outFOVUsed = v75;
      }
      else
      {
        v75 = outFOVUsed;
      }
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, ecx; X }
      *(double *)&_XMM0 = fmod_0(*(double *)&_XMM0, 360.0);
      __asm { vcvttsd2si eax, xmm0 }
      v79 = _EAX + 360;
      if ( _EAX >= 0 )
        v79 = _EAX;
      tickRotationValue = v79;
      if ( v79 > 180 )
      {
        switch ( v79 )
        {
          case 225:
            v80 = "HUD/SOUTH_WEST";
            goto LABEL_59;
          case 270:
            v80 = "HUD/WEST";
            goto LABEL_59;
          case 315:
            v80 = "HUD/NORTH_WEST";
            goto LABEL_59;
          case 360:
LABEL_49:
            v80 = "HUD/NORTH";
            goto LABEL_59;
        }
      }
      else
      {
        switch ( v79 )
        {
          case 180:
            v80 = "HUD/SOUTH";
            goto LABEL_59;
          case 0:
            goto LABEL_49;
          case 45:
            v80 = "HUD/NORTH_EAST";
            goto LABEL_59;
          case 90:
            v80 = "HUD/EAST";
            goto LABEL_59;
          case 135:
            v80 = "HUD/SOUTH_EAST";
LABEL_59:
            v81 = SEH_LocalizeTextMessage(v80, "ui string", LOCMSG_SAFE);
            goto LABEL_60;
        }
      }
      v81 = (char *)&queryFormat.fmt + 3;
LABEL_60:
      if ( v79 == 5 * (v79 / 5) )
      {
        v82 = color.v[0];
        v83 = color.v[1];
        v84 = color.v[2];
        tickColor.v[0] = color.v[0];
        tickColor.v[1] = color.v[1];
        tickColor.v[2] = color.v[2];
        tickColor.v[3] = FLOAT_1_0;
        if ( v79 == 15 * (v79 / 15) )
        {
          material = navBarData->compassTickLarge;
          if ( !v79 || v79 == 90 * (v79 / 90) )
          {
            v86 = DCONST_DVARVEC4_compassMainHeadingColor;
            if ( !DCONST_DVARVEC4_compassMainHeadingColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMainHeadingColor") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v86);
            v82 = v86->current.value;
            tickColor.v[0] = v82;
            v83 = v86->current.vector.v[1];
            tickColor.v[1] = v83;
            v84 = v86->current.vector.v[2];
            *(_QWORD *)&tickColor.xyz.z = *((_QWORD *)&v86->current.string + 1);
          }
          LUI_Render_DrawQuadRotated(*v105, element, (float)(v60 + element->left) + *(float *)&v75, (float)(height + element->top) + (float)(v61 * v102), v61 * v101, v61 * tickHeight, 0.0, 0.0, 1.0, 1.0, 0.0, v82, v83, v84, 1.0, material, v104);
          v51 = outFOV;
        }
        LUI_Element_RenderCompassText(v81, &tickRotationValue, &roundedCompassHeightOffset, &tickHeight, &unitScale, &sizeScalar, &tickColor, &offset, (const float *)&outFOVUsed, &height, v106, v105, navBarData, element, v104);
        v53 = unitScale;
      }
      v52 = (unsigned int)_xmm;
      --LODWORD(v51);
      ++v25;
      outFOV = v51;
      if ( v25 >= v37 )
      {
        v8 = v105;
        break;
      }
    }
  }
  LUI_Render_PopMask(*v8);
  navBarData->prevAngle = v92;
}

/*
==============
LUI_Element_RenderCompassText
==============
*/
void LUI_Element_RenderCompassText(const char *heading, const int *tickRotationValue, const float *roundedCompassHeightOffset, const float *tickHeight, const float *unitScale, const float *sizeScalar, const vec4_t *tickColor, const float *offset, const float *subPixelOffset, const float *halfElementHeight, const LUIElement *root, const LocalClientNum_t *localClientNum, LUINavBar *navBarData, LUIElement *element, lua_State *luaVM)
{
  float value; 
  const dvar_t *v19; 
  int angleRenderStepSize; 
  float v21; 
  int ControllerFromClient; 
  int UseNumbersForCompassCardinalDirText; 
  int v24; 
  float v25; 
  GfxFont *font; 
  float v27; 
  int v28; 
  int v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  vec4_t quadVerts[4]; 
  char dest[64]; 

  Com_sprintf(dest, 0x40ui64, "%i", *(unsigned int *)tickRotationValue);
  if ( SEH_GetCurrentLanguage() == 17 )
  {
    value = FLOAT_0_80000001;
  }
  else
  {
    v19 = DCONST_DVARFLT_compassTextVerticalOffset;
    if ( !DCONST_DVARFLT_compassTextVerticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTextVerticalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    value = v19->current.value;
  }
  angleRenderStepSize = navBarData->angleRenderStepSize;
  v21 = *tickHeight;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(*localClientNum);
  UseNumbersForCompassCardinalDirText = GamerProfile_GetUseNumbersForCompassCardinalDirText(ControllerFromClient);
  v24 = *tickRotationValue;
  if ( !(*tickRotationValue % angleRenderStepSize) )
  {
    if ( UseNumbersForCompassCardinalDirText || !*heading )
    {
      v25 = v21 * 0.25;
      heading = dest;
      if ( v24 == 15 * (v24 / 15) )
        font = navBarData->largeAngleFont;
      else
        font = navBarData->smallAngleFont;
    }
    else if ( !v24 || v24 == 90 * (v24 / 90) )
    {
      v25 = v21 * 0.25;
      font = navBarData->mainHeadingFont;
    }
    else
    {
      v25 = v21 * 0.25;
      font = navBarData->subHeadingFont;
    }
    v27 = value - (float)(v25 / (float)R_TextHeight(font));
    v28 = R_TextHeight(font);
    v29 = R_TextWidth(heading, 0, font, v28);
    v30 = (float)v28;
    v31 = (float)((float)(element->top + *halfElementHeight) + *tickHeight) - (float)((float)(v30 * v27) * *unitScale);
    v32 = (float)((float)(*unitScale * (float)v29) * 0.5) * *sizeScalar;
    v33 = (float)(element->left + *offset) + *subPixelOffset;
    LUI_CoD_GenerateQuadVerts(v33 - v32, v31 - (float)(*sizeScalar * *roundedCompassHeightOffset), v32 + v33, (float)((float)(*unitScale * v30) * *sizeScalar) + (float)(v31 - *roundedCompassHeightOffset), (vec4_t (*)[4])quadVerts);
    LUI_Render_DrawText(*localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, tickColor, font, heading, 0, 0, 0.0, (int)(float)(v30 * *unitScale), NULL, &navBarData->fontGlowStyle);
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupNavBarHUD
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupNavBarHUD(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupNavBarHUD_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupNavBarHUD_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupNavBarHUD_impl(lua_State *const luaVM)
{
  bool v2; 
  LUIElement *v3; 
  FontGlowStyle *v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  const char **v12; 
  __int64 v13; 
  int v14; 
  const char *v15; 
  const char *v16; 
  const char **v17; 
  __int64 v18; 
  int v19; 
  const char *v20; 
  const char **v21; 
  __int64 v22; 
  const char *v23; 
  const char **v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  v2 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->usageFlags |= 1u;
  v3->renderFunction = LUIElement_CompassRenderItems;
  LUIElement_InitTextLikeElement(v3);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v3, luaVM);
  v4 = (FontGlowStyle *)j_lua_newuserdata(luaVM, 0xE0ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v3->customElementData = v4;
  memset_0(v4, 0, 0xE0ui64);
  j_lua_getfield(luaVM, 2, "iconTop");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v5 = j_lua_tointeger(luaVM, -1);
    v6 = truncate_cast<int,__int64>(v5);
  }
  else
  {
    v6 = 0;
  }
  LODWORD(v4->glowMinDistance) = v6;
  j_lua_getfield(luaVM, 2, "tickWidth");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v7 = j_lua_tointeger(luaVM, -1);
    v8 = truncate_cast<unsigned int,__int64>(v7);
  }
  else
  {
    v8 = 4;
  }
  LODWORD(v4->glowColor.v[2]) = v8;
  j_lua_getfield(luaVM, 2, "tickHeight");
  v9 = 12;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v10 = j_lua_tointeger(luaVM, -1);
    v11 = truncate_cast<unsigned int,__int64>(v10);
  }
  else
  {
    v11 = 12;
  }
  LODWORD(v4->glowColor.v[3]) = v11;
  j_lua_getfield(luaVM, 2, "shouldDrawCompass");
  if ( j_lua_type(luaVM, -1) == 1 )
    v2 = j_lua_toboolean(luaVM, -1) > 0;
  LOBYTE(v4->glowColor.xyz.y) = v2;
  j_lua_getfield(luaVM, 2, "compassMainHeadingFont");
  if ( j_lua_isuserdata(luaVM, -1) )
    v12 = (const char **)j_lua_touserdata(luaVM, -1);
  else
    v12 = NULL;
  j_lua_getfield(luaVM, 2, "compassMainHeadingFontSize");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v13 = j_lua_tointeger(luaVM, -1);
    v14 = truncate_cast<int,__int64>(v13);
  }
  else
  {
    v14 = 18;
  }
  v15 = "fonts/body_regular.ttf";
  if ( v12 )
    v16 = *v12;
  else
    v16 = "fonts/body_regular.ttf";
  *(_QWORD *)&v4[2].glowColor.xyz.z = R_RegisterFont(v16, v14);
  j_lua_getfield(luaVM, 2, "compassSubHeadingFont");
  if ( j_lua_isuserdata(luaVM, -1) )
    v17 = (const char **)j_lua_touserdata(luaVM, -1);
  else
    v17 = NULL;
  j_lua_getfield(luaVM, 2, "compassSubHeadingFontSize");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v18 = j_lua_tointeger(luaVM, -1);
    v19 = truncate_cast<int,__int64>(v18);
  }
  else
  {
    v19 = 14;
  }
  if ( v17 )
    v20 = *v17;
  else
    v20 = "fonts/body_regular.ttf";
  *(_QWORD *)&v4[2].outlineGlowMinDistance = R_RegisterFont(v20, v19);
  j_lua_getfield(luaVM, 2, "compassLargeAngleFont");
  if ( j_lua_isuserdata(luaVM, -1) )
    v21 = (const char **)j_lua_touserdata(luaVM, -1);
  else
    v21 = NULL;
  j_lua_getfield(luaVM, 2, "compassLargeAngleFontSize");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v22 = j_lua_tointeger(luaVM, -1);
    v9 = truncate_cast<int,__int64>(v22);
  }
  if ( v21 )
    v23 = *v21;
  else
    v23 = "fonts/body_regular.ttf";
  *(_QWORD *)v4[2].outlineGlowColor.v = R_RegisterFont(v23, v9);
  j_lua_getfield(luaVM, 2, "compassSmallAngleFont");
  if ( j_lua_isuserdata(luaVM, -1) )
    v24 = (const char **)j_lua_touserdata(luaVM, -1);
  else
    v24 = NULL;
  j_lua_getfield(luaVM, 2, "compassSmallAngleFontSize");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v25 = j_lua_tointeger(luaVM, -1);
    v26 = truncate_cast<int,__int64>(v25);
  }
  else
  {
    v26 = 8;
  }
  if ( v24 )
    v15 = *v24;
  *(_QWORD *)&v4[2].outlineGlowColor.xyz.z = R_RegisterFont(v15, v26);
  SetFontGlowStyle(luaVM, v4 + 3, "shadowMinDistance", "shadowMaxDistance", "shadowUOffset", "shadowVOffset");
  j_lua_getfield(luaVM, 2, "angleRenderStepSize");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v27 = j_lua_tointeger(luaVM, -1);
    v28 = truncate_cast<int,__int64>(v27);
  }
  else
  {
    v28 = 5;
  }
  LODWORD(v4->glowMaxDistance) = v28;
  j_lua_settop(luaVM, -2);
  *(_QWORD *)&v4->outlineGlowMinDistance = Image_Register("icon_navbar_warning_left", IMAGE_TRACK_HUD);
  *(_QWORD *)v4->outlineGlowColor.v = Image_Register("icon_navbar_warning_right", IMAGE_TRACK_HUD);
  *(_QWORD *)&v4->outlineGlowColor.xyz.z = Image_Register("compass_tick_small", IMAGE_TRACK_HUD);
  *(_QWORD *)&v4[1].glowMinDistance = Image_Register("compass_tick_medium", IMAGE_TRACK_HUD);
  v4[1].glowUVOffset = (vec2_t)Image_Register("compass_tick_large", IMAGE_TRACK_HUD);
  *(_QWORD *)v4[1].glowColor.v = Image_Register("compass_tickertape_mask", IMAGE_TRACK_HUD);
  *(_QWORD *)&v4[1].glowColor.xyz.z = Image_Register("compass_center_mask", IMAGE_TRACK_HUD);
  *(_QWORD *)&v4[1].outlineGlowMinDistance = Image_Register("compass_center_side_mask", IMAGE_TRACK_HUD);
  *(_QWORD *)v4[1].outlineGlowColor.v = Image_Register("compass_backing_gradient", IMAGE_TRACK_HUD);
  result = 0i64;
  v4->glowUVOffset = 0i64;
  v4->glowColor.v[0] = 0.0;
  return result;
}

/*
==============
SetFontGlowStyle
==============
*/
void SetFontGlowStyle(lua_State *luaVM, FontGlowStyle *outGlowStyle, const char *shadowMinDistance, const char *shadowMaxDistance, const char *shadowUOffset, const char *shadowVOffset)
{
  __m256i v7; 
  const dvar_t *v16; 
  _BYTE v18[48]; 

  _RDI = outGlowStyle;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(__m256i *)&v18[16] = v7;
  j_lua_getfield(luaVM, 2, shadowMinDistance);
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *(float *)v18 = *(float *)&_XMM1;
  }
  else
  {
    *(float *)v18 = 0.0;
  }
  j_lua_getfield(luaVM, 2, shadowMaxDistance);
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *(float *)&v18[4] = *(float *)&_XMM1;
  }
  else
  {
    *(float *)&v18[4] = 0.0;
  }
  j_lua_getfield(luaVM, 2, shadowUOffset);
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *(float *)&v18[8] = *(float *)&_XMM1;
  }
  else
  {
    *(float *)&v18[8] = 0.0;
  }
  j_lua_getfield(luaVM, 2, shadowVOffset);
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *(float *)&v18[12] = *(float *)&_XMM1;
  }
  else
  {
    *(float *)&v18[12] = 0.0;
  }
  v16 = DCONST_DVARVEC4_compassTextOutlineColor;
  if ( !DCONST_DVARVEC4_compassTextOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTextOutlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  _XMM2 = v16->current;
  *(_QWORD *)&v18[40] = _XMM2.integer64;
  *(__m256i *)&_RDI->glowMinDistance = *(__m256i *)v18;
  *(_OWORD *)&_RDI->outlineGlowMinDistance = *(_OWORD *)&v18[32];
  __asm { vmovhpd qword ptr [rdi+30h], xmm2 }
}

