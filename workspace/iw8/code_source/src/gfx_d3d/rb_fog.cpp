/*
==============
R_SetFrameFog
==============
*/

void __fastcall R_SetFrameFog(GfxViewInfo *viewInfo)
{
  ?R_SetFrameFog@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_SetFrameFog
==============
*/
void R_SetFrameFog(GfxViewInfo *viewInfo)
{
  GfxCmdBufInput *p_input; 
  GfxVoxelTree *voxelTree; 
  vec3_t *p_halfSize; 
  const GfxImage *Image; 
  __int128 v9; 
  float v11; 
  float skyDistance; 
  float skyFalloffBias; 
  float v14; 
  float v15; 
  float v17; 
  float v19; 
  float v20; 
  float sunFalloffScale; 
  __int128 fogInset_low; 
  __int128 distanceHalfPlane_low; 
  const dvar_t *v51; 
  __int128 unsignedInt; 
  __int128 v54; 
  __int128 v57; 

  p_input = &viewInfo->input;
  voxelTree = rgp.world->voxelTree;
  if ( voxelTree )
    p_halfSize = &voxelTree[viewInfo->input.voxelTreeZoneIndex].zoneBound.halfSize;
  else
    p_halfSize = &rgp.world->bounds.halfSize;
  _XMM1 = (__m128)*(unsigned __int64 *)p_halfSize->v;
  _mm_shuffle_ps(_XMM1, _XMM1, 85);
  *(_QWORD *)&viewInfo->input.sceneConstants.fogSkyDomeParams.xyz.y = 0i64;
  viewInfo->input.sceneConstants.fogSkyDomeParams.v[3] = 0.0;
  __asm { vminss  xmm0, xmm1, xmm0 }
  viewInfo->input.sceneConstants.fogSkyDomeParams.v[0] = *(float *)&_XMM0 * 1.4142135;
  if ( r_fog->current.enabled )
  {
    Image = RB_FogSpline_GetImage(&viewInfo->fog, viewInfo->clientIndex);
    if ( !Image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_fog.cpp", 83, ASSERT_TYPE_ASSERT, "(fogSplineImage)", (const char *)&queryFormat, "fogSplineImage") )
      __debugbreak();
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[35] = Image;
    v9 = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2]);
    *(float *)&v9 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - viewInfo->fog.heightFogBaseHeight;
    _XMM2 = v9;
    __asm { vmaxss  xmm1, xmm2, xmm0 }
    v11 = expf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM1 * viewInfo->fog.heightFogDenstiy) ^ _xmm));
    skyDistance = viewInfo->fog.skyDistance;
    skyFalloffBias = viewInfo->fog.skyFalloffBias;
    *(float *)&_XMM2 = viewInfo->fog.skyFalloffScale;
    p_input->sceneConstants.fogParams0.v[0] = skyDistance - viewInfo->fog.startDist;
    p_input->sceneConstants.fogParams0.v[2] = skyFalloffBias;
    p_input->sceneConstants.fogParams0.v[1] = *(float *)&_XMM2;
    p_input->sceneConstants.fogParams0.v[3] = skyDistance;
    *(float *)&_XMM1 = viewInfo->fog.startDist;
    *(float *)&_XMM2 = viewInfo->fog.sunDir.v[2];
    v14 = viewInfo->fog.sunDir.v[0];
    v15 = v11;
    p_input->sceneConstants.fogParams1.v[1] = viewInfo->fog.sunDir.v[1];
    p_input->sceneConstants.fogParams1.v[2] = *(float *)&_XMM2;
    p_input->sceneConstants.fogParams1.v[0] = v14;
    p_input->sceneConstants.fogParams1.v[3] = COERCE_FLOAT(_XMM1 ^ _xmm);
    _XMM4 = LODWORD(viewInfo->fog.heightFogDenstiy);
    *(float *)&_XMM1 = viewInfo->fog.maxOpticalDepth.v[2];
    v17 = viewInfo->fog.maxOpticalDepth.v[0];
    p_input->sceneConstants.fogParams2.v[1] = viewInfo->fog.maxOpticalDepth.v[1];
    p_input->sceneConstants.fogParams2.v[2] = *(float *)&_XMM1;
    __asm { vmaxss  xmm0, xmm4, cs:__real@34000000 }
    p_input->sceneConstants.fogParams2.v[3] = *(float *)&_XMM0;
    p_input->sceneConstants.fogParams2.v[0] = v17;
    *(float *)&_XMM2 = viewInfo->fog.mieAnisotropy;
    *(float *)&_XMM1 = viewInfo->fog.mieCoeffs.v[2];
    v19 = viewInfo->fog.mieCoeffs.v[0];
    p_input->sceneConstants.fogParams3.v[1] = viewInfo->fog.mieCoeffs.v[1];
    p_input->sceneConstants.fogParams3.v[2] = *(float *)&_XMM1;
    p_input->sceneConstants.fogParams3.v[3] = *(float *)&_XMM2;
    p_input->sceneConstants.fogParams3.v[0] = v19;
    *(float *)&_XMM2 = viewInfo->fog.rayleighCoeffs.v[2];
    v20 = viewInfo->fog.rayleighCoeffs.v[0];
    p_input->sceneConstants.fogParams4.v[1] = viewInfo->fog.rayleighCoeffs.v[1];
    p_input->sceneConstants.fogParams4.v[2] = *(float *)&_XMM2;
    p_input->sceneConstants.fogParams4.v[3] = v15;
    p_input->sceneConstants.fogParams4.v[0] = v20;
    p_input->sceneConstants.fogParams5.v[3] = viewInfo->fog.heightFogAdditionalFog;
    *(_QWORD *)p_input->sceneConstants.fogParams5.v = 0i64;
    p_input->sceneConstants.fogParams5.v[2] = 1.0;
    _XMM4 = LODWORD(viewInfo->fog.maxDistance);
    _XMM0 = viewInfo->fog.useAtmosphericScattering;
    sunFalloffScale = viewInfo->fog.sunFalloffScale;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    p_input->sceneConstants.fogParams6.v[1] = viewInfo->fog.sunFalloffBias;
    p_input->sceneConstants.fogParams6.v[0] = sunFalloffScale;
    __asm { vmaxss  xmm0, xmm4, xmm6 }
    _XMM5 = 0i64;
    p_input->sceneConstants.fogParams6.v[3] = 1.0 / *(float *)&_XMM0;
    __asm { vblendvps xmm1, xmm5, xmm2, xmm3 }
    p_input->sceneConstants.fogParams6.v[2] = *(float *)&_XMM1;
    p_input->sceneConstants.fogCirclePosition.v[0] = viewInfo->brCircle.position.v[0];
    p_input->sceneConstants.fogCirclePosition.v[1] = viewInfo->brCircle.position.v[1];
    p_input->sceneConstants.fogCircleDistInnerColor.v[0] = viewInfo->brCircle.distanceInnerColor.v[0];
    p_input->sceneConstants.fogCircleDistInnerColor.v[1] = viewInfo->brCircle.distanceInnerColor.v[1];
    p_input->sceneConstants.fogCircleDistInnerColor.v[2] = viewInfo->brCircle.distanceInnerColor.v[2];
    p_input->sceneConstants.fogCircleDistOuterColor.v[0] = viewInfo->brCircle.distanceOuterColor.v[0];
    p_input->sceneConstants.fogCircleDistOuterColor.v[1] = viewInfo->brCircle.distanceOuterColor.v[1];
    p_input->sceneConstants.fogCircleDistOuterColor.v[2] = viewInfo->brCircle.distanceOuterColor.v[2];
    p_input->sceneConstants.fogCircleVolInnerColor.v[0] = viewInfo->brCircle.volumetricInnerColor.v[0];
    p_input->sceneConstants.fogCircleVolInnerColor.v[1] = viewInfo->brCircle.volumetricInnerColor.v[1];
    p_input->sceneConstants.fogCircleVolInnerColor.v[2] = viewInfo->brCircle.volumetricInnerColor.v[2];
    p_input->sceneConstants.fogCircleVolOuterColor.v[0] = viewInfo->brCircle.volumetricOuterColor.v[0];
    p_input->sceneConstants.fogCircleVolOuterColor.v[1] = viewInfo->brCircle.volumetricOuterColor.v[1];
    p_input->sceneConstants.fogCircleVolOuterColor.v[2] = viewInfo->brCircle.volumetricOuterColor.v[2];
    p_input->sceneConstants.fogCirclePerceptualTint.v[0] = viewInfo->brCircle.perceptualTint.v[0];
    p_input->sceneConstants.fogCirclePerceptualTint.v[1] = viewInfo->brCircle.perceptualTint.v[1];
    p_input->sceneConstants.fogCirclePerceptualTint.v[2] = viewInfo->brCircle.perceptualTint.v[2];
    _XMM0 = LODWORD(viewInfo->brCircle.blendDistance);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
    p_input->sceneConstants.fogCircleInvBlendDistance = 1.0 / *(float *)&_XMM1;
    _XMM0 = LODWORD(viewInfo->brCircle.volumetricHeightFalloff);
    __asm { vmaxss  xmm2, xmm0, xmm6 }
    p_input->sceneConstants.fogCircleVolHeightFalloff = 1.0 / *(float *)&_XMM2;
    fogInset_low = LODWORD(viewInfo->brCircle.fogInset);
    *(float *)&fogInset_low = viewInfo->brCircle.fogInset + viewInfo->brCircle.radius;
    _XMM1 = fogInset_low;
    __asm { vmaxss  xmm1, xmm1, xmm5 }
    p_input->sceneConstants.fogCircleRadius = *(float *)&_XMM1;
    p_input->sceneConstants.fogCircleHeight = viewInfo->brCircle.height;
    p_input->sceneConstants.fogCircleVolDensity = viewInfo->brCircle.volumetricDensity;
    _XMM0 = LODWORD(viewInfo->brCircle.volumetricScale);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
    p_input->sceneConstants.fogCircleVolScale = 1.0 / *(float *)&_XMM1;
    distanceHalfPlane_low = LODWORD(viewInfo->brCircle.distanceHalfPlane);
    *(float *)&distanceHalfPlane_low = viewInfo->brCircle.distanceHalfPlane * viewInfo->brCircle.distanceHeightFalloff;
    _XMM2 = distanceHalfPlane_low;
    __asm { vmaxss  xmm3, xmm2, xmm6 }
    _XMM0 = LODWORD(FLOAT_65000_0);
    p_input->sceneConstants.fogCircleDistDensity = (float)(0.72134751 / *(float *)&_XMM3) * (float)(viewInfo->brCircle.distanceScale * viewInfo->brCircle.distanceDensity);
    __asm
    {
      vcmpltss xmm1, xmm5, xmm3
      vblendvps xmm3, xmm0, xmm3, xmm1
    }
    _XMM1 = LODWORD(viewInfo->brCircle.skyDistanceMultiplier);
    __asm { vmaxss  xmm2, xmm1, xmm6 }
    p_input->sceneConstants.fogCircleSkyDistance = *(float *)&_XMM3 / *(float *)&_XMM2;
    p_input->sceneConstants.fogCircleDistDensityIntegrationConst = (float)(viewInfo->brCircle.height * -2.0) - (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] * 2.0);
    p_input->sceneConstants.fogCircleAFogColorBlend = viewInfo->brCircle.aFogColorBlend;
    p_input->sceneConstants.fogCircleAFogBlendOut = viewInfo->brCircle.aFogDistanceBlend;
    _XMM0 = LODWORD(viewInfo->brCircle.distanceHeightBlend);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
    p_input->sceneConstants.invFogCircleDistanceHeightBlend = 1.0 / *(float *)&_XMM1;
    _XMM0 = LODWORD(viewInfo->brCircle.distanceHeightViewBlend);
    __asm { vmaxss  xmm2, xmm0, xmm6 }
    p_input->sceneConstants.invFogCircleDistanceHeightViewBlend = 1.0 / *(float *)&_XMM2;
    _XMM0 = LODWORD(viewInfo->brCircle.distanceHeightBlendStart);
    __asm { vmaxss  xmm2, xmm0, xmm6 }
    p_input->sceneConstants.invFogCircleDistanceHeightBlendStart = 1.0 / *(float *)&_XMM2;
    p_input->sceneConstants.fogCircleDensityScale = viewInfo->brCircle.densityScale;
    p_input->sceneConstants.fogCircleDensityBias = viewInfo->brCircle.densityBias;
    p_input->sceneConstants.fogCircleNoiseScale = viewInfo->brCircle.densityNoiseScale;
    p_input->sceneConstants.fogCircleNoiseBias = viewInfo->brCircle.densityNoiseBias;
    p_input->sceneConstants.fogCircleTiling.v[0] = viewInfo->brCircle.densityTiling.v[0];
    p_input->sceneConstants.fogCircleTiling.v[1] = viewInfo->brCircle.densityTiling.v[1];
    *(float *)&_XMM0 = fmodf_0(viewInfo->sceneDef.floatTime, 43200.0);
    p_input->sceneConstants.fogCircleScroll.v[0] = (float)(*(float *)&_XMM0 * 0.001) * viewInfo->brCircle.densityScrollingSpeed.v[0];
    p_input->sceneConstants.fogCircleScroll.v[1] = (float)(*(float *)&_XMM0 * 0.001) * viewInfo->brCircle.densityScrollingSpeed.v[1];
    v51 = r_fogHeightMapBBoxMin;
    LODWORD(p_input->sceneConstants.heightMapBBoxMin.v[0]) = r_fogHeightMapBBoxMin->current.integer;
    p_input->sceneConstants.heightMapBBoxMin.v[1] = v51->current.vector.v[1];
    *(float *)&_XMM3 = v51->current.vector.v[1];
    unsignedInt = r_fogHeightMapBBoxMax->current.unsignedInt;
    *(float *)&unsignedInt = r_fogHeightMapBBoxMax->current.value - v51->current.value;
    _XMM1 = unsignedInt;
    v54 = LODWORD(r_fogHeightMapBBoxMax->current.vector.v[1]);
    __asm { vmaxss  xmm2, xmm1, xmm7 }
    p_input->sceneConstants.invHeightMapBBoxSize.v[0] = 1.0 / *(float *)&_XMM2;
    v57 = v54;
    *(float *)&v57 = *(float *)&v54 - *(float *)&_XMM3;
    _XMM1 = v57;
    __asm { vmaxss  xmm2, xmm1, xmm7 }
    p_input->sceneConstants.invHeightMapBBoxSize.v[1] = 1.0 / *(float *)&_XMM2;
    LODWORD(p_input->sceneConstants.heightMapStartScale) = r_fogHeightMapScale->current.integer;
    p_input->sceneConstants.heightMapStopScale = r_fogHeightMapScale->current.vector.v[1];
    p_input->sceneConstants.heightMapDensityScale = r_fogHeightMapScale->current.vector.v[2];
    p_input->sceneConstants.brCircleRadius = viewInfo->brCircle.radius;
  }
  else
  {
    viewInfo->input.sceneConstants.fogParams0 = 0ui64;
    viewInfo->input.sceneConstants.fogParams1 = 0ui64;
    viewInfo->input.sceneConstants.fogParams2 = 0ui64;
    viewInfo->input.sceneConstants.fogParams3 = 0ui64;
    *(_QWORD *)viewInfo->input.sceneConstants.fogParams4.v = 0i64;
    viewInfo->input.sceneConstants.fogParams4.v[2] = 0.0;
    *(vec4_t *)((char *)&viewInfo->input.sceneConstants.fogParams4 + 12) = (vec4_t)0x3F800000ui64;
    *(vec4_t *)((char *)&viewInfo->input.sceneConstants.fogParams5 + 12) = 0ui64;
    viewInfo->input.sceneConstants.fogParams6.v[3] = 0.0;
    viewInfo->input.sceneConstants.fogCirclePosition = 0i64;
    *(_OWORD *)viewInfo->input.sceneConstants.fogCircleDistInnerColor.v = 0ui64;
    *(_OWORD *)viewInfo->input.sceneConstants.fogCircleDistOuterColor.v = 0ui64;
    *(_OWORD *)viewInfo->input.sceneConstants.fogCircleVolInnerColor.v = 0ui64;
    *(_OWORD *)viewInfo->input.sceneConstants.fogCircleVolOuterColor.v = 0ui64;
    viewInfo->input.sceneConstants.fogCircleVolHeightFalloff = 0.0;
    *(_QWORD *)&viewInfo->input.sceneConstants.fogCircleRadius = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.fogCircleVolScale = 0i64;
    viewInfo->input.sceneConstants.fogCircleSkyDistance = 0.0;
    *(_QWORD *)&viewInfo->input.sceneConstants.fogCircleAFogBlendOut = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.invFogCircleDistanceHeightViewBlend = 0i64;
    viewInfo->input.sceneConstants.invFogCircleDistanceHeightBlendStart = 0.0;
    *(_QWORD *)&viewInfo->input.sceneConstants.fogCircleDensityScale = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.fogCircleNoiseScale = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.fogCircleTiling.y = 0i64;
    viewInfo->input.sceneConstants.fogCircleScroll.v[1] = 0.0;
    viewInfo->input.sceneConstants.heightMapBBoxMin = 0i64;
    viewInfo->input.sceneConstants.invHeightMapBBoxSize = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.heightMapStartScale = 0i64;
    viewInfo->input.sceneConstants.heightMapDensityScale = 0.0;
    *(_QWORD *)viewInfo->input.sceneConstants.fogCirclePerceptualTint.v = 0i64;
    viewInfo->input.sceneConstants.fogCirclePerceptualTint.v[2] = 0.0;
    viewInfo->input.sceneConstants.brCircleRadius = viewInfo->brCircle.radius;
    viewInfo->input.codePersistentImages[35] = rgp.zero1DImage;
  }
}

