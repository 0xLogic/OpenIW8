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
  GfxVoxelTree *voxelTree; 
  const GfxImage *Image; 
  float v27; 
  float v35; 
  float v40; 
  float v44; 
  float sunFalloffScale; 

  _RBX = &viewInfo->input;
  _RDI = viewInfo;
  voxelTree = rgp.world->voxelTree;
  if ( voxelTree )
    _RAX = &voxelTree[viewInfo->input.voxelTreeZoneIndex].zoneBound.halfSize;
  else
    _RAX = &rgp.world->bounds.halfSize;
  __asm { vmovsd  xmm1, qword ptr [rax] }
  _ER14 = 0;
  __asm { vshufps xmm0, xmm1, xmm1, 55h ; 'U' }
  *(_QWORD *)&viewInfo->input.sceneConstants.fogSkyDomeParams.xyz.y = 0i64;
  viewInfo->input.sceneConstants.fogSkyDomeParams.v[3] = 0.0;
  __asm
  {
    vminss  xmm0, xmm1, xmm0
    vmulss  xmm1, xmm0, cs:__real@3fb504f3
    vmovss  dword ptr [rbx+12A0h], xmm1
  }
  if ( r_fog->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+88h+var_28], xmm6
      vmovaps [rsp+88h+var_38], xmm7
    }
    Image = RB_FogSpline_GetImage(&viewInfo->fog, viewInfo->clientIndex);
    if ( !Image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_fog.cpp", 83, ASSERT_TYPE_ASSERT, "(fogSplineImage)", (const char *)&queryFormat, "fogSplineImage") )
      __debugbreak();
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
    _RBX->codePersistentImages[35] = Image;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+108h]
      vsubss  xmm2, xmm0, dword ptr [rdi+0B00h]
      vmovss  xmm1, dword ptr [rdi+0B08h]
      vxorps  xmm0, xmm1, xmm6
      vmaxss  xmm1, xmm2, xmm0
      vmulss  xmm2, xmm1, dword ptr [rdi+0B04h]
      vxorps  xmm0, xmm2, xmm6; X
    }
    *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+0AF4h]
      vsubss  xmm1, xmm4, dword ptr [rdi+0AC4h]
      vmovss  xmm3, dword ptr [rdi+0AFCh]
      vmovss  xmm2, dword ptr [rdi+0AF8h]
      vmovss  dword ptr [rbx+1230h], xmm1
      vmovss  dword ptr [rbx+1238h], xmm3
      vmovss  dword ptr [rbx+1234h], xmm2
      vmovss  dword ptr [rbx+123Ch], xmm4
      vmovss  xmm1, dword ptr [rdi+0AC4h]
      vmovss  xmm2, dword ptr [rdi+0AF0h]
    }
    v27 = _RDI->fog.sunDir.v[0];
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vmovaps xmm5, xmm0
      vmovss  xmm0, dword ptr [rdi+0AECh]
      vmovss  dword ptr [rbx+1244h], xmm0
      vmovss  dword ptr [rbx+1248h], xmm2
    }
    _RBX->sceneConstants.fogParams1.v[0] = v27;
    __asm
    {
      vxorps  xmm3, xmm1, xmm6
      vmovss  dword ptr [rbx+124Ch], xmm3
      vmovss  xmm4, dword ptr [rdi+0B04h]
      vmovss  xmm0, dword ptr [rdi+0ABCh]
      vmovss  xmm1, dword ptr [rdi+0AC0h]
    }
    v35 = _RDI->fog.maxOpticalDepth.v[0];
    __asm
    {
      vmovss  dword ptr [rbx+1254h], xmm0
      vmovss  dword ptr [rbx+1258h], xmm1
      vmaxss  xmm0, xmm4, cs:__real@34000000
      vmovss  dword ptr [rbx+125Ch], xmm0
    }
    _RBX->sceneConstants.fogParams2.v[0] = v35;
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0AE4h]
      vmovss  xmm1, dword ptr [rdi+0AE0h]
      vmovss  xmm0, dword ptr [rdi+0ADCh]
    }
    v40 = _RDI->fog.mieCoeffs.v[0];
    __asm
    {
      vmovss  xmm6, cs:__real@3a83126f
      vmovss  dword ptr [rbx+1264h], xmm0
      vmovss  dword ptr [rbx+1268h], xmm1
      vmovss  dword ptr [rbx+126Ch], xmm2
    }
    _RBX->sceneConstants.fogParams3.v[0] = v40;
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0AD0h]
      vmovss  xmm0, dword ptr [rdi+0ACCh]
    }
    v44 = _RDI->fog.rayleighCoeffs.v[0];
    __asm
    {
      vmovss  dword ptr [rbx+1274h], xmm0
      vmovss  dword ptr [rbx+1278h], xmm2
      vmovss  xmm2, cs:__real@bf800000
      vmovss  dword ptr [rbx+127Ch], xmm5
    }
    _RBX->sceneConstants.fogParams4.v[0] = v44;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0B0Ch]
      vmovss  dword ptr [rbx+128Ch], xmm0
    }
    *(_QWORD *)_RBX->sceneConstants.fogParams5.v = 0i64;
    _RBX->sceneConstants.fogParams5.v[2] = 1.0;
    _EAX = _RDI->fog.useAtmosphericScattering;
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+0AD4h]
      vmovd   xmm0, eax
    }
    sunFalloffScale = _RDI->fog.sunFalloffScale;
    __asm
    {
      vmovd   xmm1, r14d
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm0, dword ptr [rdi+0BD8h]
      vmovss  dword ptr [rbx+1294h], xmm0
    }
    _RBX->sceneConstants.fogParams6.v[0] = sunFalloffScale;
    __asm
    {
      vmaxss  xmm0, xmm4, xmm6
      vxorps  xmm5, xmm5, xmm5
      vdivss  xmm0, xmm7, xmm0
      vmovss  dword ptr [rbx+129Ch], xmm0
      vblendvps xmm1, xmm5, xmm2, xmm3
      vmovss  dword ptr [rbx+1298h], xmm1
    }
    _RBX->sceneConstants.fogCirclePosition.v[0] = _RDI->brCircle.position.v[0];
    _RBX->sceneConstants.fogCirclePosition.v[1] = _RDI->brCircle.position.v[1];
    _RBX->sceneConstants.fogCircleDistInnerColor.v[0] = _RDI->brCircle.distanceInnerColor.v[0];
    _RBX->sceneConstants.fogCircleDistInnerColor.v[1] = _RDI->brCircle.distanceInnerColor.v[1];
    _RBX->sceneConstants.fogCircleDistInnerColor.v[2] = _RDI->brCircle.distanceInnerColor.v[2];
    _RBX->sceneConstants.fogCircleDistOuterColor.v[0] = _RDI->brCircle.distanceOuterColor.v[0];
    _RBX->sceneConstants.fogCircleDistOuterColor.v[1] = _RDI->brCircle.distanceOuterColor.v[1];
    _RBX->sceneConstants.fogCircleDistOuterColor.v[2] = _RDI->brCircle.distanceOuterColor.v[2];
    _RBX->sceneConstants.fogCircleVolInnerColor.v[0] = _RDI->brCircle.volumetricInnerColor.v[0];
    _RBX->sceneConstants.fogCircleVolInnerColor.v[1] = _RDI->brCircle.volumetricInnerColor.v[1];
    _RBX->sceneConstants.fogCircleVolInnerColor.v[2] = _RDI->brCircle.volumetricInnerColor.v[2];
    _RBX->sceneConstants.fogCircleVolOuterColor.v[0] = _RDI->brCircle.volumetricOuterColor.v[0];
    _RBX->sceneConstants.fogCircleVolOuterColor.v[1] = _RDI->brCircle.volumetricOuterColor.v[1];
    _RBX->sceneConstants.fogCircleVolOuterColor.v[2] = _RDI->brCircle.volumetricOuterColor.v[2];
    _RBX->sceneConstants.fogCirclePerceptualTint.v[0] = _RDI->brCircle.perceptualTint.v[0];
    _RBX->sceneConstants.fogCirclePerceptualTint.v[1] = _RDI->brCircle.perceptualTint.v[1];
    _RBX->sceneConstants.fogCirclePerceptualTint.v[2] = _RDI->brCircle.perceptualTint.v[2];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0C24h]
      vmaxss  xmm1, xmm0, xmm6
      vdivss  xmm1, xmm7, xmm1
      vmovss  dword ptr [rbx+1300h], xmm1
      vmovss  xmm0, dword ptr [rdi+0C34h]
      vmaxss  xmm2, xmm0, xmm6
      vdivss  xmm1, xmm7, xmm2
      vmovss  dword ptr [rbx+12E0h], xmm1
      vmovss  xmm0, dword ptr [rdi+0C30h]
      vaddss  xmm1, xmm0, dword ptr [rdi+0C28h]
      vmaxss  xmm1, xmm1, xmm5
      vmovss  dword ptr [rbx+12B8h], xmm1
    }
    _RBX->sceneConstants.fogCircleHeight = _RDI->brCircle.height;
    _RBX->sceneConstants.fogCircleVolDensity = _RDI->brCircle.volumetricDensity;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0C3Ch]
      vmaxss  xmm1, xmm0, xmm6
      vdivss  xmm1, xmm7, xmm1
      vmovss  dword ptr [rbx+12D4h], xmm1
      vmovss  xmm0, dword ptr [rdi+0C4Ch]
      vmulss  xmm2, xmm0, dword ptr [rdi+0C40h]
      vmovss  xmm0, dword ptr [rdi+0C48h]
      vmovss  xmm1, cs:__real@3f38aa3b
      vmaxss  xmm3, xmm2, xmm6
      vmulss  xmm2, xmm0, dword ptr [rdi+0C44h]
      vmovss  xmm0, cs:__real@477de800
      vdivss  xmm4, xmm1, xmm3
      vmulss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rbx+12D8h], xmm1
      vmovss  xmm3, dword ptr [rdi+0AF4h]
      vcmpltss xmm1, xmm5, xmm3
      vblendvps xmm3, xmm0, xmm3, xmm1
      vmovss  xmm1, dword ptr [rdi+0C50h]
      vmaxss  xmm2, xmm1, xmm6
      vdivss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rbx+12C0h], xmm0
      vmovss  xmm1, dword ptr [rdi+0C2Ch]
      vmovss  xmm0, dword ptr [rdi+108h]
      vmulss  xmm2, xmm0, cs:__real@40000000
      vmovss  [rsp+88h+var_58], xmm3
      vmulss  xmm3, xmm1, cs:__real@c0000000
      vsubss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rbx+12F0h], xmm1
    }
    _RBX->sceneConstants.fogCircleAFogColorBlend = _RDI->brCircle.aFogColorBlend;
    _RBX->sceneConstants.fogCircleAFogBlendOut = _RDI->brCircle.aFogDistanceBlend;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0C5Ch]
      vmaxss  xmm1, xmm0, xmm6
      vdivss  xmm1, xmm7, xmm1
      vmovss  dword ptr [rbx+1318h], xmm1
      vmovss  xmm0, dword ptr [rdi+0C60h]
      vmaxss  xmm2, xmm0, xmm6
      vdivss  xmm1, xmm7, xmm2
      vmovss  dword ptr [rbx+131Ch], xmm1
      vmovss  xmm0, dword ptr [rdi+0C64h]
      vmaxss  xmm2, xmm0, xmm6
      vdivss  xmm1, xmm7, xmm2
      vmovss  dword ptr [rbx+1388h], xmm1
      vmovss  xmm1, cs:__real@4728c000; Y
    }
    _RBX->sceneConstants.fogCircleDensityScale = _RDI->brCircle.densityScale;
    _RBX->sceneConstants.fogCircleDensityBias = _RDI->brCircle.densityBias;
    _RBX->sceneConstants.fogCircleNoiseScale = _RDI->brCircle.densityNoiseScale;
    _RBX->sceneConstants.fogCircleNoiseBias = _RDI->brCircle.densityNoiseBias;
    _RBX->sceneConstants.fogCircleTiling.v[0] = _RDI->brCircle.densityTiling.v[0];
    _RBX->sceneConstants.fogCircleTiling.v[1] = _RDI->brCircle.densityTiling.v[1];
    __asm { vmovss  xmm0, dword ptr [rdi+5B4h]; X }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm2, xmm0, xmm6
      vmulss  xmm1, xmm2, dword ptr [rdi+0C80h]
      vmovaps xmm6, [rsp+88h+var_28]
      vmovss  dword ptr [rbx+1328h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+0C84h]
      vmovss  dword ptr [rbx+132Ch], xmm0
    }
    _RCX = r_fogHeightMapBBoxMin;
    LODWORD(_RBX->sceneConstants.heightMapBBoxMin.v[0]) = r_fogHeightMapBBoxMin->current.integer;
    _RBX->sceneConstants.heightMapBBoxMin.v[1] = _RCX->current.vector.v[1];
    __asm { vmovss  xmm3, dword ptr [rcx+2Ch] }
    _RAX = r_fogHeightMapBBoxMax;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vsubss  xmm1, xmm0, dword ptr [rcx+28h]
      vmovss  xmm4, dword ptr [rax+2Ch]
      vmaxss  xmm2, xmm1, xmm7
      vdivss  xmm0, xmm7, xmm2
      vmovss  dword ptr [rbx+1358h], xmm0
      vsubss  xmm1, xmm4, xmm3
      vmaxss  xmm2, xmm1, xmm7
      vdivss  xmm0, xmm7, xmm2
      vmovaps xmm7, [rsp+88h+var_38]
      vmovss  dword ptr [rbx+135Ch], xmm0
    }
    LODWORD(_RBX->sceneConstants.heightMapStartScale) = r_fogHeightMapScale->current.integer;
    _RBX->sceneConstants.heightMapStopScale = r_fogHeightMapScale->current.vector.v[1];
    _RBX->sceneConstants.heightMapDensityScale = r_fogHeightMapScale->current.vector.v[2];
    _RBX->sceneConstants.brCircleRadius = _RDI->brCircle.radius;
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

