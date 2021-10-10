/*
==============
HLSL::TerrainLayerData::SetFrom
==============
*/

void __fastcall HLSL::TerrainLayerData::SetFrom(HLSL::TerrainLayerData *this, const HLSL::TerrainLayerDataCode *p)
{
  ?SetFrom@TerrainLayerData@HLSL@@QEAAXPEBUTerrainLayerDataCode@2@@Z(this, p);
}

/*
==============
HLSL::TerrainTileData::SetFrom
==============
*/

void __fastcall HLSL::TerrainTileData::SetFrom(HLSL::TerrainTileData *this, const HLSL::TerrainTileDataCode *p)
{
  ?SetFrom@TerrainTileData@HLSL@@QEAAXPEBUTerrainTileDataCode@2@@Z(this, p);
}

/*
==============
HLSL::TerrainLayerData::SetFrom
==============
*/
void HLSL::TerrainLayerData::SetFrom(HLSL::TerrainLayerData *this, const HLSL::TerrainLayerDataCode *p)
{
  float v3; 
  float v6; 
  float v7; 
  float v8; 
  int v9; 
  float alphaRevealSoftEdge; 
  float detailScaleHeight; 
  int v19; 
  float displacementScale; 
  float grassHeight; 
  float grassHeightVariance; 
  float grassWidth; 
  float grassWidthVariance; 
  float grassTilt; 
  float grassTiltVariance; 
  float grassBend; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  __int16 v50; 
  float v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  float v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  float v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  float v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  float v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  __int16 v85; 
  float v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  float v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  __int16 v97; 
  float v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  float v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  __int16 v109; 
  float v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  float v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  __int16 v121; 
  float v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  float v128; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  __int16 v133; 
  float v134; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  __int64 v139; 
  __int64 v140; 

  v3 = p->textureScale.v[0];
  if ( (v3 < -65504.0 || v3 > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 491, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->textureScale.x ) && ( p->textureScale.x ) <= ( 65504 )", "p->textureScale.x not in [-65504, 65504]\n\t%g not in [%g, %g]", v3, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  v6 = p->textureScale.v[1];
  if ( (v6 < -65504.0 || v6 > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 492, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->textureScale.y ) && ( p->textureScale.y ) <= ( 65504 )", "p->textureScale.y not in [-65504, 65504]\n\t%g not in [%g, %g]", v6, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  v7 = p->detailScale.v[0];
  if ( (v7 < -65504.0 || v7 > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 493, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->detailScale.x ) && ( p->detailScale.x ) <= ( 65504 )", "p->detailScale.x not in [-65504, 65504]\n\t%g not in [%g, %g]", v7, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  v8 = p->detailScale.v[1];
  if ( (v8 < -65504.0 || v8 > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 494, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->detailScale.y ) && ( p->detailScale.y ) <= ( 65504 )", "p->detailScale.y not in [-65504, 65504]\n\t%g not in [%g, %g]", v8, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  v9 = 0;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->flags;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 495, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->flags ) && ( p->flags ) <= ( 1.67772e+07 )", "p->flags not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  alphaRevealSoftEdge = p->alphaRevealSoftEdge;
  __asm { vxorpd  xmm14, xmm14, xmm14 }
  if ( (alphaRevealSoftEdge < 0.0 || alphaRevealSoftEdge > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 496, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->alphaRevealSoftEdge ) && ( p->alphaRevealSoftEdge ) <= ( 1 )", "p->alphaRevealSoftEdge not in [0, 1]\n\t%g not in [%g, %g]", alphaRevealSoftEdge, *(double *)&_XMM14, DOUBLE_1_0) )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->normalMapPackedScaleBias;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 497, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->normalMapPackedScaleBias ) && ( p->normalMapPackedScaleBias ) <= ( 1.67772e+07 )", "p->normalMapPackedScaleBias not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  detailScaleHeight = p->detailScaleHeight;
  if ( (detailScaleHeight < 0.0 || detailScaleHeight > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 498, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->detailScaleHeight ) && ( p->detailScaleHeight ) <= ( 1 )", "p->detailScaleHeight not in [0, 1]\n\t%g not in [%g, %g]", detailScaleHeight, *(double *)&_XMM14, DOUBLE_1_0) )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->colorMap;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 499, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->colorMap ) && ( p->colorMap ) <= ( 1.67772e+07 )", "p->colorMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  v19 = 255;
  if ( p->colorSampler > 0xFF )
  {
    LODWORD(v140) = 255;
    LODWORD(v139) = p->colorSampler;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 500, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->colorSampler ) && ( p->colorSampler ) <= ( 255 )", "p->colorSampler not in [0, 255]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->tintMask;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 501, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->tintMask ) && ( p->tintMask ) <= ( 1.67772e+07 )", "p->tintMask not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  if ( p->normalSampler > 0xFF )
  {
    LODWORD(v140) = 255;
    LODWORD(v139) = p->normalSampler;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 502, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->normalSampler ) && ( p->normalSampler ) <= ( 255 )", "p->normalSampler not in [0, 255]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->normalMap;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 503, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->normalMap ) && ( p->normalMap ) <= ( 1.67772e+07 )", "p->normalMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  if ( p->revealSampler > 0xFF )
  {
    LODWORD(v140) = 255;
    LODWORD(v139) = p->revealSampler;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 504, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->revealSampler ) && ( p->revealSampler ) <= ( 255 )", "p->revealSampler not in [0, 255]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->revealMap;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 505, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->revealMap ) && ( p->revealMap ) <= ( 1.67772e+07 )", "p->revealMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->emissiveMap;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 506, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->emissiveMap ) && ( p->emissiveMap ) <= ( 1.67772e+07 )", "p->emissiveMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->transmittanceMap;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 507, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->transmittanceMap ) && ( p->transmittanceMap ) <= ( 1.67772e+07 )", "p->transmittanceMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->thicknessMap;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 508, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->thicknessMap ) && ( p->thicknessMap ) <= ( 1.67772e+07 )", "p->thicknessMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( *(double *)&_XMM0 > 16777200.0 )
  {
    LODWORD(v140) = 16777200;
    LODWORD(v139) = p->displacementMap;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 509, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->displacementMap ) && ( p->displacementMap ) <= ( 1.67772e+07 )", "p->displacementMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  if ( p->albedoMapPackedScaleBias > 0xFFFF )
  {
    LODWORD(v140) = 0xFFFF;
    LODWORD(v139) = p->albedoMapPackedScaleBias;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 510, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->albedoMapPackedScaleBias ) && ( p->albedoMapPackedScaleBias ) <= ( 65535 )", "p->albedoMapPackedScaleBias not in [0, 65535]\n\t%i not in [%i, %i]", v139, 0i64, v140) )
      __debugbreak();
  }
  displacementScale = p->displacementScale;
  if ( (displacementScale < -65504.0 || displacementScale > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 511, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->displacementScale ) && ( p->displacementScale ) <= ( 65504 )", "p->displacementScale not in [-65504, 65504]\n\t%g not in [%g, %g]", displacementScale, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  grassHeight = p->grassHeight;
  if ( (grassHeight < -65504.0 || grassHeight > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 512, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassHeight ) && ( p->grassHeight ) <= ( 65504 )", "p->grassHeight not in [-65504, 65504]\n\t%g not in [%g, %g]", grassHeight, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  grassHeightVariance = p->grassHeightVariance;
  if ( (grassHeightVariance < -65504.0 || grassHeightVariance > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 513, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassHeightVariance ) && ( p->grassHeightVariance ) <= ( 65504 )", "p->grassHeightVariance not in [-65504, 65504]\n\t%g not in [%g, %g]", grassHeightVariance, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  grassWidth = p->grassWidth;
  if ( (grassWidth < -65504.0 || grassWidth > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 514, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassWidth ) && ( p->grassWidth ) <= ( 65504 )", "p->grassWidth not in [-65504, 65504]\n\t%g not in [%g, %g]", grassWidth, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  grassWidthVariance = p->grassWidthVariance;
  if ( (grassWidthVariance < -65504.0 || grassWidthVariance > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 515, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassWidthVariance ) && ( p->grassWidthVariance ) <= ( 65504 )", "p->grassWidthVariance not in [-65504, 65504]\n\t%g not in [%g, %g]", grassWidthVariance, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  grassTilt = p->grassTilt;
  if ( (grassTilt < -65504.0 || grassTilt > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 516, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassTilt ) && ( p->grassTilt ) <= ( 65504 )", "p->grassTilt not in [-65504, 65504]\n\t%g not in [%g, %g]", grassTilt, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  grassTiltVariance = p->grassTiltVariance;
  if ( (grassTiltVariance < -65504.0 || grassTiltVariance > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 517, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassTiltVariance ) && ( p->grassTiltVariance ) <= ( 65504 )", "p->grassTiltVariance not in [-65504, 65504]\n\t%g not in [%g, %g]", grassTiltVariance, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  grassBend = p->grassBend;
  if ( (grassBend < -65504.0 || grassBend > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 518, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassBend ) && ( p->grassBend ) <= ( 65504 )", "p->grassBend not in [-65504, 65504]\n\t%g not in [%g, %g]", grassBend, DOUBLE_N65504_0, DOUBLE_65504_0) )
    __debugbreak();
  v42 = p->colorTint.v[0];
  if ( (v42 < -63488.0 || v42 > 63488.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 519, ASSERT_TYPE_ASSERT, "( -63488 ) <= ( p->colorTint.x ) && ( p->colorTint.x ) <= ( 63488 )", "p->colorTint.x not in [-63488, 63488]\n\t%g not in [%g, %g]", v42, DOUBLE_N63488_0, DOUBLE_63488_0) )
    __debugbreak();
  v43 = p->colorTint.v[1];
  if ( (v43 < -63488.0 || v43 > 63488.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 520, ASSERT_TYPE_ASSERT, "( -63488 ) <= ( p->colorTint.y ) && ( p->colorTint.y ) <= ( 63488 )", "p->colorTint.y not in [-63488, 63488]\n\t%g not in [%g, %g]", v43, DOUBLE_N63488_0, DOUBLE_63488_0) )
    __debugbreak();
  v44 = p->colorTint.v[2];
  if ( (v44 < -63488.0 || v44 > 63488.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 521, ASSERT_TYPE_ASSERT, "( -63488 ) <= ( p->colorTint.z ) && ( p->colorTint.z ) <= ( 63488 )", "p->colorTint.z not in [-63488, 63488]\n\t%g not in [%g, %g]", v44, DOUBLE_N63488_0, DOUBLE_63488_0) )
    __debugbreak();
  this->data[0].v[0] = LODWORD(p->textureTransform[0].v[0]);
  this->data[0].v[1] = LODWORD(p->textureTransform[0].v[1]);
  this->data[0].v[2] = LODWORD(p->textureTransform[0].v[2]);
  this->data[0].v[3] = LODWORD(p->textureTransform[0].v[3]);
  this->data[1].v[0] = LODWORD(p->textureTransform[1].v[0]);
  this->data[1].v[1] = LODWORD(p->textureTransform[1].v[1]);
  this->data[1].v[2] = LODWORD(p->textureTransform[1].v[2]);
  this->data[1].v[3] = LODWORD(p->textureTransform[1].v[3]);
  this->data[2].v[0] = p->alphaLayer;
  v45 = p->textureScale.v[0];
  v46 = (unsigned __int8)(LODWORD(v45) >> 23) - 112;
  if ( v46 >= 0 )
  {
    v47 = (unsigned __int8)(LODWORD(v45) >> 23) - 112;
    if ( v46 > 30 )
      v47 = 30;
  }
  else
  {
    v47 = 0;
  }
  v48 = HIWORD(LODWORD(v45)) & 0x8000;
  v49 = v48 | (v47 << 10) | (LODWORD(v45) >> 13) & 0x3FF;
  v50 = v48 | ((_WORD)v47 << 10) | 0x3FF;
  v51 = p->textureScale.v[1];
  if ( v46 > 30 )
    LOWORD(v49) = v50;
  v52 = (unsigned __int8)(LODWORD(v51) >> 23) - 112;
  if ( v52 >= 0 )
  {
    v53 = (unsigned __int8)(LODWORD(v51) >> 23) - 112;
    if ( v52 > 30 )
      v53 = 30;
  }
  else
  {
    v53 = 0;
  }
  v54 = v53 << 10;
  v55 = HIWORD(LODWORD(v51)) & 0x8000;
  v56 = v55 | v54 | (LODWORD(v51) >> 13) & 0x3FF;
  if ( v52 > 30 )
    v56 = v55 | v54 | 0x3FF;
  this->data[2].v[1] = (unsigned __int16)v49 | (v56 << 16);
  v57 = p->detailScale.v[0];
  v58 = (unsigned __int8)(LODWORD(v57) >> 23) - 112;
  if ( v58 >= 0 )
  {
    v59 = (unsigned __int8)(LODWORD(v57) >> 23) - 112;
    if ( v58 > 30 )
      v59 = 30;
  }
  else
  {
    v59 = 0;
  }
  v60 = v59 << 10;
  v61 = HIWORD(LODWORD(v57)) & 0x8000;
  v62 = v61 | v60 | (LODWORD(v57) >> 13) & 0x3FF;
  v63 = p->detailScale.v[1];
  if ( v58 > 30 )
    LOWORD(v62) = v61 | v60 | 0x3FF;
  v64 = (unsigned __int8)(LODWORD(v63) >> 23) - 112;
  if ( v64 >= 0 )
  {
    v65 = (unsigned __int8)(LODWORD(v63) >> 23) - 112;
    if ( v64 > 30 )
      v65 = 30;
  }
  else
  {
    v65 = 0;
  }
  v66 = v65 << 10;
  v67 = HIWORD(LODWORD(v63)) & 0x8000;
  v68 = v67 | v66 | 0x3FF;
  v69 = v67 | v66 | (LODWORD(v63) >> 13) & 0x3FF;
  v70 = 255;
  if ( v64 > 30 )
    v69 = v68;
  v71 = (unsigned __int16)v62;
  v72 = 0;
  this->data[2].v[2] = v71 | (v69 << 16);
  if ( (int)(float)(255.0 * p->alphaRevealSoftEdge) < 255 )
    v70 = (int)(float)(255.0 * p->alphaRevealSoftEdge);
  if ( v70 >= 0 )
    v72 = v70;
  v73 = 0;
  this->data[2].v[3] = p->flags & 0xFFFFFF | (v72 << 24);
  if ( (int)(float)(255.0 * p->detailScaleHeight) < 255 )
    v19 = (int)(float)(255.0 * p->detailScaleHeight);
  if ( v19 >= 0 )
    v73 = v19;
  this->data[3].v[0] = p->normalMapPackedScaleBias & 0xFFFFFF | (v73 << 24);
  this->data[3].v[1] = (p->colorSampler << 24) | p->colorMap & 0xFFFFFF;
  this->data[3].v[2] = (p->normalSampler << 24) | p->tintMask & 0xFFFFFF;
  this->data[3].v[3] = (p->revealSampler << 24) | p->normalMap & 0xFFFFFF;
  this->data[4].v[0] = p->revealMap & 0xFFFFFF;
  this->data[4].v[1] = p->emissiveMap & 0xFFFFFF;
  this->data[4].v[2] = p->transmittanceMap & 0xFFFFFF;
  this->data[4].v[3] = p->thicknessMap & 0xFFFFFF;
  this->data[5].v[0] = p->displacementMap & 0xFFFFFF;
  v74 = p->displacementScale;
  v75 = (unsigned __int8)(LODWORD(v74) >> 23) - 112;
  if ( v75 >= 0 )
  {
    v76 = (unsigned __int8)(LODWORD(v74) >> 23) - 112;
    if ( v75 > 30 )
      v76 = 30;
  }
  else
  {
    v76 = 0;
  }
  v77 = v76 << 10;
  v78 = HIWORD(LODWORD(v74)) & 0x8000;
  v79 = v78 | v77 | (LODWORD(v74) >> 13) & 0x3FF;
  if ( v75 > 30 )
    v79 = v78 | v77 | 0x3FF;
  this->data[5].v[1] = (v79 << 16) | LOWORD(p->albedoMapPackedScaleBias);
  v80 = p->grassHeight;
  v81 = (unsigned __int8)(LODWORD(v80) >> 23) - 112;
  if ( v81 >= 0 )
  {
    v82 = (unsigned __int8)(LODWORD(v80) >> 23) - 112;
    if ( v81 > 30 )
      v82 = 30;
  }
  else
  {
    v82 = 0;
  }
  v83 = HIWORD(LODWORD(v80)) & 0x8000;
  v84 = v83 | (v82 << 10) | (LODWORD(v80) >> 13) & 0x3FF;
  v85 = v83 | ((_WORD)v82 << 10) | 0x3FF;
  v86 = p->grassHeightVariance;
  if ( v81 > 30 )
    LOWORD(v84) = v85;
  v87 = (unsigned __int8)(LODWORD(v86) >> 23) - 112;
  if ( v87 >= 0 )
  {
    v88 = (unsigned __int8)(LODWORD(v86) >> 23) - 112;
    if ( v87 > 30 )
      v88 = 30;
  }
  else
  {
    v88 = 0;
  }
  v89 = v88 << 10;
  v90 = HIWORD(LODWORD(v86)) & 0x8000;
  v91 = v90 | v89 | (LODWORD(v86) >> 13) & 0x3FF;
  if ( v87 > 30 )
    v91 = v90 | v89 | 0x3FF;
  this->data[5].v[2] = (unsigned __int16)v84 | (v91 << 16);
  v92 = p->grassWidth;
  v93 = (unsigned __int8)(LODWORD(v92) >> 23) - 112;
  if ( v93 >= 0 )
  {
    v94 = (unsigned __int8)(LODWORD(v92) >> 23) - 112;
    if ( v93 > 30 )
      v94 = 30;
  }
  else
  {
    v94 = 0;
  }
  v95 = HIWORD(LODWORD(v92)) & 0x8000;
  v96 = v95 | (v94 << 10) | (LODWORD(v92) >> 13) & 0x3FF;
  v97 = v95 | ((_WORD)v94 << 10) | 0x3FF;
  v98 = p->grassWidthVariance;
  if ( v93 > 30 )
    LOWORD(v96) = v97;
  v99 = (unsigned __int8)(LODWORD(v98) >> 23) - 112;
  if ( v99 >= 0 )
  {
    v100 = (unsigned __int8)(LODWORD(v98) >> 23) - 112;
    if ( v99 > 30 )
      v100 = 30;
  }
  else
  {
    v100 = 0;
  }
  v101 = v100 << 10;
  v102 = HIWORD(LODWORD(v98)) & 0x8000;
  v103 = v102 | v101 | (LODWORD(v98) >> 13) & 0x3FF;
  if ( v99 > 30 )
    v103 = v102 | v101 | 0x3FF;
  this->data[5].v[3] = (unsigned __int16)v96 | (v103 << 16);
  v104 = p->grassTilt;
  v105 = (unsigned __int8)(LODWORD(v104) >> 23) - 112;
  if ( v105 >= 0 )
  {
    v106 = (unsigned __int8)(LODWORD(v104) >> 23) - 112;
    if ( v105 > 30 )
      v106 = 30;
  }
  else
  {
    v106 = 0;
  }
  v107 = HIWORD(LODWORD(v104)) & 0x8000;
  v108 = v107 | (v106 << 10) | (LODWORD(v104) >> 13) & 0x3FF;
  v109 = v107 | ((_WORD)v106 << 10) | 0x3FF;
  v110 = p->grassTiltVariance;
  if ( v105 > 30 )
    LOWORD(v108) = v109;
  v111 = (unsigned __int8)(LODWORD(v110) >> 23) - 112;
  if ( v111 >= 0 )
  {
    v112 = (unsigned __int8)(LODWORD(v110) >> 23) - 112;
    if ( v111 > 30 )
      v112 = 30;
  }
  else
  {
    v112 = 0;
  }
  v113 = v112 << 10;
  v114 = HIWORD(LODWORD(v110)) & 0x8000;
  v115 = v114 | v113 | (LODWORD(v110) >> 13) & 0x3FF;
  if ( v111 > 30 )
    v115 = v114 | v113 | 0x3FF;
  this->data_align.v[0] = (unsigned __int16)v108 | (v115 << 16);
  v116 = p->grassBend;
  v117 = (unsigned __int8)(LODWORD(v116) >> 23) - 112;
  if ( v117 >= 0 )
  {
    v118 = (unsigned __int8)(LODWORD(v116) >> 23) - 112;
    if ( v117 > 30 )
      v118 = 30;
  }
  else
  {
    v118 = 0;
  }
  v119 = HIWORD(LODWORD(v116)) & 0x8000;
  v120 = v119 | (v118 << 10) | (LODWORD(v116) >> 13) & 0x3FF;
  v121 = v119 | ((_WORD)v118 << 10) | 0x3FF;
  v122 = p->colorTint.v[0];
  if ( v117 > 30 )
    LOWORD(v120) = v121;
  v123 = (unsigned __int8)(LODWORD(v122) >> 23) - 112;
  if ( v123 >= 0 )
  {
    v124 = (unsigned __int8)(LODWORD(v122) >> 23) - 112;
    if ( v123 > 30 )
      v124 = 30;
  }
  else
  {
    v124 = 0;
  }
  v125 = v124 << 10;
  v126 = HIWORD(LODWORD(v122)) & 0x8000;
  v127 = v126 | v125 | (LODWORD(v122) >> 13) & 0x3FF;
  if ( v123 > 30 )
    LOWORD(v127) = v126 | v125 | 0x3FF;
  this->data_align.v[1] = (unsigned __int16)v120 | ((v127 & 0xFFC0) << 10);
  v128 = p->colorTint.v[1];
  v129 = (unsigned __int8)(LODWORD(v128) >> 23) - 112;
  if ( v129 >= 0 )
  {
    v130 = (unsigned __int8)(LODWORD(v128) >> 23) - 112;
    if ( v129 > 30 )
      v130 = 30;
  }
  else
  {
    v130 = 0;
  }
  v131 = HIWORD(LODWORD(v128)) & 0x8000;
  v132 = v131 | (v130 << 10) | (LODWORD(v128) >> 13) & 0x3FF;
  v133 = v131 | ((_WORD)v130 << 10) | 0x3FF;
  v134 = p->colorTint.v[2];
  if ( v129 > 30 )
    LOWORD(v132) = v133;
  v135 = (unsigned __int8)(LODWORD(v134) >> 23) - 112;
  if ( v135 >= 0 )
  {
    v9 = (unsigned __int8)(LODWORD(v134) >> 23) - 112;
    if ( v135 > 30 )
      v9 = 30;
  }
  v136 = v9 << 10;
  v137 = HIWORD(LODWORD(v134)) & 0x8000;
  v138 = v137 | v136 | (LODWORD(v134) >> 13) & 0x3FF;
  if ( v135 > 30 )
    LOWORD(v138) = v137 | v136 | 0x3FF;
  this->data_align.v[2] = (16 * (v138 & 0xFFC0)) | ((unsigned __int16)v132 >> 6);
}

/*
==============
HLSL::TerrainTileData::SetFrom
==============
*/
void HLSL::TerrainTileData::SetFrom(HLSL::TerrainTileData *this, const HLSL::TerrainTileDataCode *p)
{
  int v2; 
  float maxDisplacementScale; 
  float terrainSize; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  __int16 v15; 
  int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 

  v2 = 0;
  if ( p->layerOffset > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 877, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->layerOffset ) && ( p->layerOffset ) <= ( 65535 )", "p->layerOffset not in [0, 65535]\n\t%i not in [%i, %i]", p->layerOffset, 0i64, 0xFFFF) )
    __debugbreak();
  maxDisplacementScale = p->maxDisplacementScale;
  if ( (maxDisplacementScale < -65504.0 || maxDisplacementScale > 65504.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 878, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->maxDisplacementScale ) && ( p->maxDisplacementScale ) <= ( 65504 )", "p->maxDisplacementScale not in [-65504, 65504]\n\t%g not in [%g, %g]", maxDisplacementScale, *(double *)&_xmm, *((double *)&_xmm + 1)) )
    __debugbreak();
  if ( p->sectorKey > 0xFF )
  {
    LODWORD(v20) = 255;
    LODWORD(v19) = p->sectorKey;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 879, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->sectorKey ) && ( p->sectorKey ) <= ( 255 )", "p->sectorKey not in [0, 255]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  if ( p->defaultSectorKey > 0xFF )
  {
    LODWORD(v20) = 255;
    LODWORD(v19) = p->defaultSectorKey;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 880, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->defaultSectorKey ) && ( p->defaultSectorKey ) <= ( 255 )", "p->defaultSectorKey not in [0, 255]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  if ( p->surfaceMapBaseIndex > 0xFFF )
  {
    LODWORD(v20) = 4095;
    LODWORD(v19) = p->surfaceMapBaseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 881, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->surfaceMapBaseIndex ) && ( p->surfaceMapBaseIndex ) <= ( 4095 )", "p->surfaceMapBaseIndex not in [0, 4095]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  if ( p->defaultSectorStartMip > 0xF )
  {
    LODWORD(v20) = 15;
    LODWORD(v19) = p->defaultSectorStartMip;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 882, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->defaultSectorStartMip ) && ( p->defaultSectorStartMip ) <= ( 15 )", "p->defaultSectorStartMip not in [0, 15]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  terrainSize = p->terrainSize;
  if ( terrainSize < 0.0 || terrainSize > 1048580.0 )
  {
    LODWORD(v20) = 1048580;
    LODWORD(v19) = (int)terrainSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 883, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->terrainSize ) && ( p->terrainSize ) <= ( 1.04858e+06 )", "p->terrainSize not in [0, 1.04858e+06]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  if ( p->layerSurfaceMapBaseIndex > 0xFFF )
  {
    LODWORD(v20) = 4095;
    LODWORD(v19) = p->layerSurfaceMapBaseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 884, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->layerSurfaceMapBaseIndex ) && ( p->layerSurfaceMapBaseIndex ) <= ( 4095 )", "p->layerSurfaceMapBaseIndex not in [0, 4095]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  if ( p->surfaceIndex > 0xFFF )
  {
    LODWORD(v20) = 4095;
    LODWORD(v19) = p->surfaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 885, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->surfaceIndex ) && ( p->surfaceIndex ) <= ( 4095 )", "p->surfaceIndex not in [0, 4095]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  v7 = p->windDir.v[0];
  if ( (v7 < -1.0 || v7 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 886, ASSERT_TYPE_ASSERT, "( -1 ) <= ( p->windDir.x ) && ( p->windDir.x ) <= ( 1 )", "p->windDir.x not in [-1, 1]\n\t%g not in [%g, %g]", v7, DOUBLE_N1_0, DOUBLE_1_0) )
    __debugbreak();
  v8 = p->windDir.v[1];
  if ( (v8 < -1.0 || v8 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 887, ASSERT_TYPE_ASSERT, "( -1 ) <= ( p->windDir.y ) && ( p->windDir.y ) <= ( 1 )", "p->windDir.y not in [-1, 1]\n\t%g not in [%g, %g]", v8, DOUBLE_N1_0, DOUBLE_1_0) )
    __debugbreak();
  v9 = p->windDir.v[2];
  if ( (v9 < -1.0 || v9 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 888, ASSERT_TYPE_ASSERT, "( -1 ) <= ( p->windDir.z ) && ( p->windDir.z ) <= ( 1 )", "p->windDir.z not in [-1, 1]\n\t%g not in [%g, %g]", v9, DOUBLE_N1_0, DOUBLE_1_0) )
    __debugbreak();
  if ( p->layerCount > 0x3F )
  {
    LODWORD(v20) = 63;
    LODWORD(v19) = p->layerCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 889, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->layerCount ) && ( p->layerCount ) <= ( 63 )", "p->layerCount not in [0, 63]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  if ( p->surfaceMapSetIndex > 7 )
  {
    LODWORD(v20) = 7;
    LODWORD(v19) = p->surfaceMapSetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 890, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->surfaceMapSetIndex ) && ( p->surfaceMapSetIndex ) <= ( 7 )", "p->surfaceMapSetIndex not in [0, 7]\n\t%i not in [%i, %i]", v19, 0i64, v20) )
      __debugbreak();
  }
  this->data[0].v[0] = p->flags;
  this->data[0].v[1] = p->layerMask;
  this->data[0].v[2] = p->layerGrassMask;
  this->data[0].v[3] = LODWORD(p->vertexScale.v[0]);
  this->data[1].v[0] = LODWORD(p->vertexScale.v[1]);
  this->data[1].v[1] = LODWORD(p->vertexOffset.v[0]);
  this->data[1].v[2] = LODWORD(p->vertexOffset.v[1]);
  this->data[1].v[3] = LODWORD(p->lodParamScale);
  this->data[2].v[0] = LODWORD(p->lodParamOffset);
  this->data[2].v[1] = LODWORD(p->surfaceMapOffOrigin.v[0]);
  this->data[2].v[2] = LODWORD(p->surfaceMapOffOrigin.v[1]);
  this->data[2].v[3] = p->surfaceMapXCount;
  this->data[3].v[0] = LODWORD(p->offToSurfaceMapX.v[0]);
  this->data[3].v[1] = LODWORD(p->offToSurfaceMapX.v[1]);
  this->data[3].v[2] = LODWORD(p->offToSurfaceMapX.v[2]);
  this->data[3].v[3] = p->vertXCount;
  this->data[4].v[0] = LODWORD(p->offToSurfaceMapY.v[0]);
  this->data[4].v[1] = LODWORD(p->offToSurfaceMapY.v[1]);
  this->data[4].v[2] = LODWORD(p->offToSurfaceMapY.v[2]);
  this->data[4].v[3] = LODWORD(p->vertSpacing);
  this->data[5].v[0] = LODWORD(p->generatedVerticesOffset.v[0]);
  this->data[5].v[1] = LODWORD(p->generatedVerticesOffset.v[1]);
  this->data[5].v[2] = LODWORD(p->heightOffsetAndScale.v[0]);
  this->data[5].v[3] = LODWORD(p->heightOffsetAndScale.v[1]);
  this->data[6].v[0] = LODWORD(p->windStrength);
  this->data[6].v[1] = LODWORD(p->windStrengthVariance);
  this->data[6].v[2] = LODWORD(p->windSpeed);
  this->data[6].v[3] = LODWORD(p->lodOutDistance);
  this->data[7].v[0] = LODWORD(p->grassSurfStep);
  this->data[7].v[1] = LODWORD(p->grassGrowRate);
  this->data[7].v[2] = p->frameCount;
  this->data[7].v[3] = LODWORD(p->tileUVToSectorUV.v[0]);
  this->data[8].v[0] = LODWORD(p->tileUVToSectorUV.v[1]);
  this->data[8].v[1] = LODWORD(p->tileUVToSectorUV.v[2]);
  this->data[8].v[2] = LODWORD(p->heightMapDx.v[0]);
  this->data[8].v[3] = LODWORD(p->heightMapDx.v[1]);
  this->data[9].v[0] = LODWORD(p->heightMapDy.v[0]);
  this->data[9].v[1] = LODWORD(p->heightMapDy.v[1]);
  v10 = p->maxDisplacementScale;
  v11 = (unsigned __int8)(LODWORD(v10) >> 23) - 112;
  if ( v11 >= 0 )
  {
    v2 = (unsigned __int8)(LODWORD(v10) >> 23) - 112;
    if ( v11 > 30 )
      v2 = 30;
  }
  v12 = v2 << 10;
  v13 = HIWORD(LODWORD(v10)) & 0x8000;
  v14 = v13 | v12 | (LODWORD(v10) >> 13) & 0x3FF;
  if ( v11 > 30 )
    v14 = v13 | v12 | 0x3FF;
  this->data[9].v[2] = LOWORD(p->layerOffset) | (v14 << 16);
  v15 = -511;
  this->data[9].v[3] = LOBYTE(p->sectorKey) | ((LOBYTE(p->defaultSectorKey) | (((p->defaultSectorStartMip << 12) | p->surfaceMapBaseIndex & 0xFFF) << 8)) << 8);
  this->data_align.v[0] = (p->layerSurfaceMapBaseIndex << 20) | (int)p->terrainSize & 0xFFFFF;
  v16 = (int)(float)(511.0 * p->windDir.v[0]);
  if ( v16 >= 511 )
  {
    LOWORD(v16) = 511;
  }
  else if ( v16 < -511 )
  {
    LOWORD(v16) = -511;
  }
  v17 = (int)(float)(511.0 * p->windDir.v[1]);
  if ( v17 >= 511 )
  {
    v17 = 511;
  }
  else if ( v17 < -511 )
  {
    v17 = -511;
  }
  this->data_align.v[1] = p->surfaceIndex & 0xFFF | (((v17 << 10) | v16 & 0x3FF) << 12);
  v18 = (int)(float)(511.0 * p->windDir.v[2]);
  if ( v18 >= 511 )
  {
    LOWORD(v18) = 511;
  }
  else if ( v18 < -511 )
  {
    goto LABEL_66;
  }
  v15 = v18;
LABEL_66:
  this->data_align.v[2] = v15 & 0x3FF | ((p->layerCount & 0x3F | ((p->surfaceMapSetIndex & 7) << 6)) << 10);
}

