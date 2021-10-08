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
  bool v19; 
  bool v20; 
  bool v23; 
  bool v26; 
  int v28; 
  unsigned int v41; 
  int v42; 
  bool v43; 
  bool v44; 
  unsigned int v47; 
  bool v48; 
  bool v49; 
  unsigned int v52; 
  bool v53; 
  bool v54; 
  bool v57; 
  bool v60; 
  bool v63; 
  bool v66; 
  unsigned int v69; 
  bool v70; 
  bool v71; 
  bool v72; 
  bool v75; 
  bool v78; 
  bool v81; 
  bool v84; 
  bool v87; 
  bool v90; 
  bool v93; 
  bool v96; 
  bool v103; 
  bool v106; 
  int v117; 
  int v118; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v128; 
  int v129; 
  int v131; 
  int v132; 
  int v133; 
  int v134; 
  int v135; 
  int v137; 
  int v138; 
  int v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  int v146; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v156; 
  int v157; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  int v164; 
  int v165; 
  int v167; 
  int v168; 
  int v170; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v178; 
  int v179; 
  int v181; 
  int v182; 
  int v183; 
  int v184; 
  int v185; 
  int v186; 
  int v187; 
  int v189; 
  int v190; 
  int v192; 
  int v193; 
  int v194; 
  int v195; 
  int v196; 
  int v197; 
  int v198; 
  int v200; 
  int v201; 
  int v203; 
  int v204; 
  int v205; 
  int v206; 
  int v207; 
  int v208; 
  double v218; 
  __int64 v219; 
  double v220; 
  double v221; 
  double v222; 
  double v223; 
  double v224; 
  double v225; 
  double v226; 
  double v227; 
  double v228; 
  double v229; 
  double v230; 
  double v231; 
  double v232; 
  double v233; 
  double v234; 
  double v235; 
  double v236; 
  double v237; 
  double v238; 
  double v239; 
  double v240; 
  double v241; 
  double v242; 
  double v243; 
  double v244; 
  double v245; 
  double v246; 
  double v247; 
  double v248; 
  double v249; 
  __int64 v250; 
  double v251; 
  double v252; 
  double v253; 
  double v254; 
  double v255; 
  double v256; 
  double v257; 
  double v258; 
  double v259; 
  double v260; 
  double v261; 
  double v262; 
  double v263; 
  double v264; 
  char v266; 
  void *retaddr; 
  unsigned int v268; 
  unsigned int v269; 
  unsigned int v270; 
  unsigned int v271; 
  unsigned int v272; 
  unsigned int v273; 
  unsigned int v274; 
  unsigned int v275; 
  unsigned int v276; 
  unsigned int v277; 
  unsigned int v278; 
  unsigned int v279; 
  unsigned int v280; 
  unsigned int v281; 
  unsigned int v282; 
  unsigned int v283; 
  unsigned int v284; 
  unsigned int v285; 
  unsigned int v286; 
  unsigned int v287; 
  unsigned int v288; 
  unsigned int v289; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+28h]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = (unsigned int *)p;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, cs:__real@c77fe000
    vcomiss xmm0, xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@477fe000
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovsd  xmm9, cs:__real@40effc0000000000
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovsd  xmm10, cs:__real@c0effc0000000000
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps [rsp+0C8h+var_88], xmm14
    vcomiss xmm0, xmm8
    vmovsd  [rsp+0C8h+var_90], xmm9
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+0C8h+var_98], xmm10
    vmovsd  [rsp+0C8h+var_A0], xmm0
  }
  v19 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 491, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->textureScale.x ) && ( p->textureScale.x ) <= ( 65504 )", "p->textureScale.x not in [-65504, 65504]\n\t%g not in [%g, %g]", v218, v234, v249);
  v20 = !v19;
  if ( v19 )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( v19 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 492, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->textureScale.y ) && ( p->textureScale.y ) <= ( 65504 )", "p->textureScale.y not in [-65504, 65504]\n\t%g not in [%g, %g]", v220, v235, v251);
    v20 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v20 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 493, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->detailScale.x ) && ( p->detailScale.x ) <= ( 65504 )", "p->detailScale.x not in [-65504, 65504]\n\t%g not in [%g, %g]", v221, v236, v252);
    v20 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+34h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v20 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 494, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->detailScale.y ) && ( p->detailScale.y ) <= ( 65504 )", "p->detailScale.y not in [-65504, 65504]\n\t%g not in [%g, %g]", v222, v237, v253) )
      __debugbreak();
  }
  v28 = 0;
  __asm
  {
    vmovsd  xmm6, cs:__real@416ffffe00000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx+44h]
    vmovsd  xmm13, cs:__real@3ff0000000000000
    vxorps  xmm12, xmm12, xmm12
    vcomiss xmm0, xmm12
    vxorpd  xmm14, xmm14, xmm14
    vcomiss xmm0, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
    vmovss  xmm0, dword ptr [rbx+48h]
    vcomiss xmm0, xmm12
    vcomiss xmm0, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
  }
  v41 = _RBX[21];
  v42 = 255;
  v43 = v41 <= 0xFF;
  if ( v41 > 0xFF )
  {
    LODWORD(v250) = 255;
    LODWORD(v219) = _RBX[21];
    v44 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 500, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->colorSampler ) && ( p->colorSampler ) <= ( 255 )", "p->colorSampler not in [0, 255]\n\t%i not in [%i, %i]", v219, 0i64, v250);
    v43 = !v44;
    if ( v44 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
  }
  if ( !v43 )
  {
    LODWORD(v250) = 16777200;
    LODWORD(v219) = _RBX[23];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 501, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->tintMask ) && ( p->tintMask ) <= ( 1.67772e+07 )", "p->tintMask not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v219, 0i64, v250) )
      __debugbreak();
  }
  v47 = _RBX[24];
  v48 = v47 <= 0xFF;
  if ( v47 > 0xFF )
  {
    LODWORD(v250) = 255;
    LODWORD(v219) = _RBX[24];
    v49 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 502, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->normalSampler ) && ( p->normalSampler ) <= ( 255 )", "p->normalSampler not in [0, 255]\n\t%i not in [%i, %i]", v219, 0i64, v250);
    v48 = !v49;
    if ( v49 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
  }
  if ( !v48 )
  {
    LODWORD(v250) = 16777200;
    LODWORD(v219) = _RBX[25];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 503, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->normalMap ) && ( p->normalMap ) <= ( 1.67772e+07 )", "p->normalMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v219, 0i64, v250) )
      __debugbreak();
  }
  v52 = _RBX[26];
  v53 = v52 <= 0xFF;
  if ( v52 > 0xFF )
  {
    LODWORD(v250) = 255;
    LODWORD(v219) = _RBX[26];
    v54 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 504, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->revealSampler ) && ( p->revealSampler ) <= ( 255 )", "p->revealSampler not in [0, 255]\n\t%i not in [%i, %i]", v219, 0i64, v250);
    v53 = !v54;
    if ( v54 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
  }
  if ( !v53 )
  {
    LODWORD(v250) = 16777200;
    LODWORD(v219) = _RBX[27];
    v57 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 505, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->revealMap ) && ( p->revealMap ) <= ( 1.67772e+07 )", "p->revealMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v219, 0i64, v250);
    v53 = !v57;
    if ( v57 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
  }
  if ( !v53 )
  {
    LODWORD(v250) = 16777200;
    LODWORD(v219) = _RBX[28];
    v60 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 506, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->emissiveMap ) && ( p->emissiveMap ) <= ( 1.67772e+07 )", "p->emissiveMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v219, 0i64, v250);
    v53 = !v60;
    if ( v60 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
  }
  if ( !v53 )
  {
    LODWORD(v250) = 16777200;
    LODWORD(v219) = _RBX[29];
    v63 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 507, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->transmittanceMap ) && ( p->transmittanceMap ) <= ( 1.67772e+07 )", "p->transmittanceMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v219, 0i64, v250);
    v53 = !v63;
    if ( v63 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
  }
  if ( !v53 )
  {
    LODWORD(v250) = 16777200;
    LODWORD(v219) = _RBX[30];
    v66 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 508, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->thicknessMap ) && ( p->thicknessMap ) <= ( 1.67772e+07 )", "p->thicknessMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v219, 0i64, v250);
    v53 = !v66;
    if ( v66 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vcomisd xmm0, xmm6
  }
  if ( !v53 )
  {
    LODWORD(v250) = 16777200;
    LODWORD(v219) = _RBX[31];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 509, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->displacementMap ) && ( p->displacementMap ) <= ( 1.67772e+07 )", "p->displacementMap not in [0, 1.67772e+07]\n\t%i not in [%i, %i]", v219, 0i64, v250) )
      __debugbreak();
  }
  v69 = _RBX[20];
  v70 = v69 < 0xFFFF;
  v71 = v69 <= 0xFFFF;
  if ( v69 > 0xFFFF )
  {
    LODWORD(v250) = 0xFFFF;
    LODWORD(v219) = _RBX[20];
    v72 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 510, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->albedoMapPackedScaleBias ) && ( p->albedoMapPackedScaleBias ) <= ( 65535 )", "p->albedoMapPackedScaleBias not in [0, 65535]\n\t%i not in [%i, %i]", v219, 0i64, v250);
    v70 = 0;
    v71 = !v72;
    if ( v72 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+80h]
    vcomiss xmm0, xmm7
  }
  if ( v70 )
    goto LABEL_179;
  __asm { vcomiss xmm0, xmm8 }
  if ( !v71 )
  {
LABEL_179:
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v75 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 511, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->displacementScale ) && ( p->displacementScale ) <= ( 65504 )", "p->displacementScale not in [-65504, 65504]\n\t%g not in [%g, %g]", v223, v238, v254);
    v71 = !v75;
    if ( v75 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+84h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v78 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 512, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassHeight ) && ( p->grassHeight ) <= ( 65504 )", "p->grassHeight not in [-65504, 65504]\n\t%g not in [%g, %g]", v224, v239, v255);
    v71 = !v78;
    if ( v78 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+88h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v81 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 513, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassHeightVariance ) && ( p->grassHeightVariance ) <= ( 65504 )", "p->grassHeightVariance not in [-65504, 65504]\n\t%g not in [%g, %g]", v225, v240, v256);
    v71 = !v81;
    if ( v81 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8Ch]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v84 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 514, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassWidth ) && ( p->grassWidth ) <= ( 65504 )", "p->grassWidth not in [-65504, 65504]\n\t%g not in [%g, %g]", v226, v241, v257);
    v71 = !v84;
    if ( v84 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+90h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v87 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 515, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassWidthVariance ) && ( p->grassWidthVariance ) <= ( 65504 )", "p->grassWidthVariance not in [-65504, 65504]\n\t%g not in [%g, %g]", v227, v242, v258);
    v71 = !v87;
    if ( v87 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+94h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v90 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 516, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassTilt ) && ( p->grassTilt ) <= ( 65504 )", "p->grassTilt not in [-65504, 65504]\n\t%g not in [%g, %g]", v228, v243, v259);
    v71 = !v90;
    if ( v90 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+98h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v93 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 517, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassTiltVariance ) && ( p->grassTiltVariance ) <= ( 65504 )", "p->grassTiltVariance not in [-65504, 65504]\n\t%g not in [%g, %g]", v229, v244, v260);
    v71 = !v93;
    if ( v93 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+9Ch]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm8
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm10
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v96 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 518, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->grassBend ) && ( p->grassBend ) <= ( 65504 )", "p->grassBend not in [-65504, 65504]\n\t%g not in [%g, %g]", v230, v245, v261);
    v71 = !v96;
    if ( v96 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  xmm7, cs:__real@c7780000
    vcomiss xmm0, xmm7
    vmovsd  xmm8, cs:__real@40ef000000000000
    vmovsd  xmm9, cs:__real@c0ef000000000000
    vmovss  xmm6, cs:__real@47780000
    vcomiss xmm0, xmm6
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm9
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v103 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 519, ASSERT_TYPE_ASSERT, "( -63488 ) <= ( p->colorTint.x ) && ( p->colorTint.x ) <= ( 63488 )", "p->colorTint.x not in [-63488, 63488]\n\t%g not in [%g, %g]", v231, v246, v262);
    v71 = !v103;
    if ( v103 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm9
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    v106 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 520, ASSERT_TYPE_ASSERT, "( -63488 ) <= ( p->colorTint.y ) && ( p->colorTint.y ) <= ( 63488 )", "p->colorTint.y not in [-63488, 63488]\n\t%g not in [%g, %g]", v232, v247, v263);
    v71 = !v106;
    if ( v106 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !v71 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0C8h+var_98], xmm9
      vmovsd  [rsp+0C8h+var_A0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 521, ASSERT_TYPE_ASSERT, "( -63488 ) <= ( p->colorTint.z ) && ( p->colorTint.z ) <= ( 63488 )", "p->colorTint.z not in [-63488, 63488]\n\t%g not in [%g, %g]", v233, v248, v264) )
      __debugbreak();
  }
  this->data[0].v[0] = *_RBX;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  this->data[0].v[1] = v268;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  this->data[0].v[2] = v269;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  this->data[0].v[3] = v270;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  this->data[1].v[0] = v271;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  this->data[1].v[1] = v272;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  this->data[1].v[2] = v273;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  this->data[1].v[3] = v274;
  this->data[2].v[0] = _RBX[9];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v117 = (unsigned __int8)(v275 >> 23) - 112;
  if ( v117 >= 0 )
  {
    v118 = (unsigned __int8)(v275 >> 23) - 112;
    if ( v117 > 30 )
      v118 = 30;
  }
  else
  {
    v118 = 0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+2Ch] }
  v120 = HIWORD(v275) & 0x8000;
  v121 = v120 | (v118 << 10) | (v275 >> 13) & 0x3FF;
  __asm { vmovss  [rsp+0C8h+arg_0], xmm0 }
  if ( v117 > 30 )
    LOWORD(v121) = v120 | ((_WORD)v118 << 10) | 0x3FF;
  v122 = (unsigned __int8)(v276 >> 23) - 112;
  if ( v122 >= 0 )
  {
    v123 = (unsigned __int8)(v276 >> 23) - 112;
    if ( v122 > 30 )
      v123 = 30;
  }
  else
  {
    v123 = 0;
  }
  v124 = v123 << 10;
  v125 = HIWORD(v276) & 0x8000;
  v126 = v125 | v124 | (v276 >> 13) & 0x3FF;
  if ( v122 > 30 )
    v126 = v125 | v124 | 0x3FF;
  this->data[2].v[1] = (unsigned __int16)v121 | (v126 << 16);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v128 = (unsigned __int8)(v277 >> 23) - 112;
  if ( v128 >= 0 )
  {
    v129 = (unsigned __int8)(v277 >> 23) - 112;
    if ( v128 > 30 )
      v129 = 30;
  }
  else
  {
    v129 = 0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+34h] }
  v131 = v129 << 10;
  v132 = HIWORD(v277) & 0x8000;
  v133 = v132 | v131 | (v277 >> 13) & 0x3FF;
  __asm { vmovss  [rsp+0C8h+arg_0], xmm0 }
  if ( v128 > 30 )
    LOWORD(v133) = v132 | v131 | 0x3FF;
  v134 = (unsigned __int8)(v278 >> 23) - 112;
  if ( v134 >= 0 )
  {
    v135 = (unsigned __int8)(v278 >> 23) - 112;
    if ( v134 > 30 )
      v135 = 30;
  }
  else
  {
    v135 = 0;
  }
  __asm { vmovss  xmm1, cs:__real@437f0000 }
  v137 = v135 << 10;
  v138 = HIWORD(v278) & 0x8000;
  v139 = v138 | v137 | 0x3FF;
  v140 = v138 | v137 | (v278 >> 13) & 0x3FF;
  v141 = 255;
  if ( v134 > 30 )
    v140 = v139;
  v142 = (unsigned __int16)v133;
  v143 = 0;
  this->data[2].v[2] = v142 | (v140 << 16);
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [rbx+44h]
    vcvttss2si eax, xmm0
  }
  if ( _EAX < 255 )
    v141 = _EAX;
  if ( v141 >= 0 )
    v143 = v141;
  v146 = 0;
  this->data[2].v[3] = _RBX[8] & 0xFFFFFF | (v143 << 24);
  __asm
  {
    vmulss  xmm1, xmm1, dword ptr [rbx+48h]
    vcvttss2si eax, xmm1
  }
  if ( _EAX < 255 )
    v42 = _EAX;
  if ( v42 >= 0 )
    v146 = v42;
  this->data[3].v[0] = _RBX[19] & 0xFFFFFF | (v146 << 24);
  this->data[3].v[1] = (_RBX[21] << 24) | _RBX[22] & 0xFFFFFF;
  this->data[3].v[2] = (_RBX[24] << 24) | _RBX[23] & 0xFFFFFF;
  this->data[3].v[3] = (_RBX[26] << 24) | _RBX[25] & 0xFFFFFF;
  this->data[4].v[0] = _RBX[27] & 0xFFFFFF;
  this->data[4].v[1] = _RBX[28] & 0xFFFFFF;
  this->data[4].v[2] = _RBX[29] & 0xFFFFFF;
  this->data[4].v[3] = _RBX[30] & 0xFFFFFF;
  this->data[5].v[0] = _RBX[31] & 0xFFFFFF;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+80h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v150 = (unsigned __int8)(v279 >> 23) - 112;
  if ( v150 >= 0 )
  {
    v151 = (unsigned __int8)(v279 >> 23) - 112;
    if ( v150 > 30 )
      v151 = 30;
  }
  else
  {
    v151 = 0;
  }
  v152 = v151 << 10;
  v153 = HIWORD(v279) & 0x8000;
  v154 = v153 | v152 | (v279 >> 13) & 0x3FF;
  if ( v150 > 30 )
    v154 = v153 | v152 | 0x3FF;
  this->data[5].v[1] = (v154 << 16) | *((unsigned __int16 *)_RBX + 40);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+84h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v156 = (unsigned __int8)(v280 >> 23) - 112;
  if ( v156 >= 0 )
  {
    v157 = (unsigned __int8)(v280 >> 23) - 112;
    if ( v156 > 30 )
      v157 = 30;
  }
  else
  {
    v157 = 0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+88h] }
  v159 = HIWORD(v280) & 0x8000;
  v160 = v159 | (v157 << 10) | (v280 >> 13) & 0x3FF;
  __asm { vmovss  [rsp+0C8h+arg_0], xmm0 }
  if ( v156 > 30 )
    LOWORD(v160) = v159 | ((_WORD)v157 << 10) | 0x3FF;
  v161 = (unsigned __int8)(v281 >> 23) - 112;
  if ( v161 >= 0 )
  {
    v162 = (unsigned __int8)(v281 >> 23) - 112;
    if ( v161 > 30 )
      v162 = 30;
  }
  else
  {
    v162 = 0;
  }
  v163 = v162 << 10;
  v164 = HIWORD(v281) & 0x8000;
  v165 = v164 | v163 | (v281 >> 13) & 0x3FF;
  if ( v161 > 30 )
    v165 = v164 | v163 | 0x3FF;
  this->data[5].v[2] = (unsigned __int16)v160 | (v165 << 16);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8Ch]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v167 = (unsigned __int8)(v282 >> 23) - 112;
  if ( v167 >= 0 )
  {
    v168 = (unsigned __int8)(v282 >> 23) - 112;
    if ( v167 > 30 )
      v168 = 30;
  }
  else
  {
    v168 = 0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+90h] }
  v170 = HIWORD(v282) & 0x8000;
  v171 = v170 | (v168 << 10) | (v282 >> 13) & 0x3FF;
  __asm { vmovss  [rsp+0C8h+arg_0], xmm0 }
  if ( v167 > 30 )
    LOWORD(v171) = v170 | ((_WORD)v168 << 10) | 0x3FF;
  v172 = (unsigned __int8)(v283 >> 23) - 112;
  if ( v172 >= 0 )
  {
    v173 = (unsigned __int8)(v283 >> 23) - 112;
    if ( v172 > 30 )
      v173 = 30;
  }
  else
  {
    v173 = 0;
  }
  v174 = v173 << 10;
  v175 = HIWORD(v283) & 0x8000;
  v176 = v175 | v174 | (v283 >> 13) & 0x3FF;
  if ( v172 > 30 )
    v176 = v175 | v174 | 0x3FF;
  this->data[5].v[3] = (unsigned __int16)v171 | (v176 << 16);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+94h]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v178 = (unsigned __int8)(v284 >> 23) - 112;
  if ( v178 >= 0 )
  {
    v179 = (unsigned __int8)(v284 >> 23) - 112;
    if ( v178 > 30 )
      v179 = 30;
  }
  else
  {
    v179 = 0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+98h] }
  v181 = HIWORD(v284) & 0x8000;
  v182 = v181 | (v179 << 10) | (v284 >> 13) & 0x3FF;
  __asm { vmovss  [rsp+0C8h+arg_0], xmm0 }
  if ( v178 > 30 )
    LOWORD(v182) = v181 | ((_WORD)v179 << 10) | 0x3FF;
  v183 = (unsigned __int8)(v285 >> 23) - 112;
  if ( v183 >= 0 )
  {
    v184 = (unsigned __int8)(v285 >> 23) - 112;
    if ( v183 > 30 )
      v184 = 30;
  }
  else
  {
    v184 = 0;
  }
  v185 = v184 << 10;
  v186 = HIWORD(v285) & 0x8000;
  v187 = v186 | v185 | (v285 >> 13) & 0x3FF;
  if ( v183 > 30 )
    v187 = v186 | v185 | 0x3FF;
  this->data_align.v[0] = (unsigned __int16)v182 | (v187 << 16);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+9Ch]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v189 = (unsigned __int8)(v286 >> 23) - 112;
  if ( v189 >= 0 )
  {
    v190 = (unsigned __int8)(v286 >> 23) - 112;
    if ( v189 > 30 )
      v190 = 30;
  }
  else
  {
    v190 = 0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+38h] }
  v192 = HIWORD(v286) & 0x8000;
  v193 = v192 | (v190 << 10) | (v286 >> 13) & 0x3FF;
  __asm { vmovss  [rsp+0C8h+arg_0], xmm0 }
  if ( v189 > 30 )
    LOWORD(v193) = v192 | ((_WORD)v190 << 10) | 0x3FF;
  v194 = (unsigned __int8)(v287 >> 23) - 112;
  if ( v194 >= 0 )
  {
    v195 = (unsigned __int8)(v287 >> 23) - 112;
    if ( v194 > 30 )
      v195 = 30;
  }
  else
  {
    v195 = 0;
  }
  v196 = v195 << 10;
  v197 = HIWORD(v287) & 0x8000;
  v198 = v197 | v196 | (v287 >> 13) & 0x3FF;
  if ( v194 > 30 )
    LOWORD(v198) = v197 | v196 | 0x3FF;
  this->data_align.v[1] = (unsigned __int16)v193 | ((v198 & 0xFFC0) << 10);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmovss  [rsp+0C8h+arg_0], xmm0
  }
  v200 = (unsigned __int8)(v288 >> 23) - 112;
  if ( v200 >= 0 )
  {
    v201 = (unsigned __int8)(v288 >> 23) - 112;
    if ( v200 > 30 )
      v201 = 30;
  }
  else
  {
    v201 = 0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+40h] }
  v203 = HIWORD(v288) & 0x8000;
  v204 = v203 | (v201 << 10) | (v288 >> 13) & 0x3FF;
  __asm { vmovss  [rsp+0C8h+arg_0], xmm0 }
  if ( v200 > 30 )
    LOWORD(v204) = v203 | ((_WORD)v201 << 10) | 0x3FF;
  v205 = (unsigned __int8)(v289 >> 23) - 112;
  if ( v205 >= 0 )
  {
    v28 = (unsigned __int8)(v289 >> 23) - 112;
    if ( v205 > 30 )
      v28 = 30;
  }
  v206 = v28 << 10;
  v207 = HIWORD(v289) & 0x8000;
  v208 = v207 | v206 | (v289 >> 13) & 0x3FF;
  _R11 = &v266;
  if ( v205 > 30 )
    LOWORD(v208) = v207 | v206 | 0x3FF;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
  this->data_align.v[2] = (16 * (v208 & 0xFFC0)) | ((unsigned __int16)v204 >> 6);
}

/*
==============
HLSL::TerrainTileData::SetFrom
==============
*/
void HLSL::TerrainTileData::SetFrom(HLSL::TerrainTileData *this, const HLSL::TerrainTileDataCode *p)
{
  unsigned int layerOffset; 
  int v5; 
  bool v8; 
  bool v9; 
  bool v10; 
  unsigned int defaultSectorStartMip; 
  bool v14; 
  bool v15; 
  bool v16; 
  unsigned int surfaceIndex; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v28; 
  bool v31; 
  int v67; 
  int v69; 
  int v70; 
  int v71; 
  __int16 v72; 
  __int64 v82; 
  double v83; 
  double v84; 
  double v85; 
  double v86; 
  __int128 v87; 
  double v88; 
  double v89; 
  double v90; 
  __int64 v91; 
  double v92; 
  double v93; 
  double v94; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  unsigned int v105; 
  unsigned int v106; 
  unsigned int v107; 
  unsigned int v108; 
  unsigned int v109; 
  unsigned int v110; 
  unsigned int v111; 
  unsigned int v112; 
  unsigned int v113; 
  unsigned int v114; 
  unsigned int v115; 
  unsigned int v116; 
  unsigned int v117; 
  unsigned int v118; 
  unsigned int v119; 
  unsigned int v120; 
  unsigned int v121; 
  unsigned int v122; 
  unsigned int v123; 
  unsigned int v124; 
  unsigned int v125; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int v128; 
  unsigned int v129; 

  layerOffset = p->layerOffset;
  v5 = 0;
  __asm { vmovaps [rsp+68h+var_18], xmm8 }
  _RBX = p;
  __asm { vmovaps [rsp+68h+var_28], xmm9 }
  v8 = layerOffset < 0xFFFF;
  v9 = layerOffset <= 0xFFFF;
  if ( layerOffset > 0xFFFF )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 877, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->layerOffset ) && ( p->layerOffset ) <= ( 65535 )", "p->layerOffset not in [0, 65535]\n\t%i not in [%i, %i]", p->layerOffset, 0i64, 0xFFFF);
    v8 = 0;
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vcomiss xmm0, cs:__real@c77fe000
  }
  if ( v8 )
    goto LABEL_69;
  __asm { vcomiss xmm0, cs:__real@477fe000 }
  if ( !v9 )
  {
LABEL_69:
    __asm
    {
      vcvtss2sd xmm2, xmm0, xmm0
      vmovaps xmm0, cs:__xmm@40effc0000000000c0effc0000000000
      vmovups [rsp+68h+var_38], xmm0
      vmovsd  [rsp+68h+var_40], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 878, ASSERT_TYPE_ASSERT, "( -65504 ) <= ( p->maxDisplacementScale ) && ( p->maxDisplacementScale ) <= ( 65504 )", "p->maxDisplacementScale not in [-65504, 65504]\n\t%g not in [%g, %g]", v83, *(double *)&v87, *((double *)&v87 + 1)) )
      __debugbreak();
  }
  if ( _RBX->sectorKey > 0xFF )
  {
    LODWORD(v91) = 255;
    LODWORD(v82) = _RBX->sectorKey;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 879, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->sectorKey ) && ( p->sectorKey ) <= ( 255 )", "p->sectorKey not in [0, 255]\n\t%i not in [%i, %i]", v82, 0i64, v91) )
      __debugbreak();
  }
  if ( _RBX->defaultSectorKey > 0xFF )
  {
    LODWORD(v91) = 255;
    LODWORD(v82) = _RBX->defaultSectorKey;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 880, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->defaultSectorKey ) && ( p->defaultSectorKey ) <= ( 255 )", "p->defaultSectorKey not in [0, 255]\n\t%i not in [%i, %i]", v82, 0i64, v91) )
      __debugbreak();
  }
  if ( _RBX->surfaceMapBaseIndex > 0xFFF )
  {
    LODWORD(v91) = 4095;
    LODWORD(v82) = _RBX->surfaceMapBaseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 881, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->surfaceMapBaseIndex ) && ( p->surfaceMapBaseIndex ) <= ( 4095 )", "p->surfaceMapBaseIndex not in [0, 4095]\n\t%i not in [%i, %i]", v82, 0i64, v91) )
      __debugbreak();
  }
  defaultSectorStartMip = _RBX->defaultSectorStartMip;
  v14 = defaultSectorStartMip < 0xF;
  v15 = defaultSectorStartMip <= 0xF;
  if ( defaultSectorStartMip > 0xF )
  {
    LODWORD(v91) = 15;
    LODWORD(v82) = _RBX->defaultSectorStartMip;
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 882, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->defaultSectorStartMip ) && ( p->defaultSectorStartMip ) <= ( 15 )", "p->defaultSectorStartMip not in [0, 15]\n\t%i not in [%i, %i]", v82, 0i64, v91);
    v14 = 0;
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+14h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v14 )
    goto LABEL_70;
  __asm { vcomiss xmm1, cs:__real@49800020 }
  if ( !v15 )
  {
LABEL_70:
    __asm { vcvttss2si eax, xmm1 }
    LODWORD(v91) = 1048580;
    LODWORD(v82) = _EAX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 883, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->terrainSize ) && ( p->terrainSize ) <= ( 1.04858e+06 )", "p->terrainSize not in [0, 1.04858e+06]\n\t%i not in [%i, %i]", v82, 0i64, v91) )
      __debugbreak();
  }
  if ( _RBX->layerSurfaceMapBaseIndex > 0xFFF )
  {
    LODWORD(v91) = 4095;
    LODWORD(v82) = _RBX->layerSurfaceMapBaseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 884, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->layerSurfaceMapBaseIndex ) && ( p->layerSurfaceMapBaseIndex ) <= ( 4095 )", "p->layerSurfaceMapBaseIndex not in [0, 4095]\n\t%i not in [%i, %i]", v82, 0i64, v91) )
      __debugbreak();
  }
  surfaceIndex = _RBX->surfaceIndex;
  v21 = surfaceIndex < 0xFFF;
  v22 = surfaceIndex <= 0xFFF;
  if ( surfaceIndex > 0xFFF )
  {
    LODWORD(v91) = 4095;
    LODWORD(v82) = _RBX->surfaceIndex;
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 885, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->surfaceIndex ) && ( p->surfaceIndex ) <= ( 4095 )", "p->surfaceIndex not in [0, 4095]\n\t%i not in [%i, %i]", v82, 0i64, v91);
    v21 = 0;
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+7Ch]
    vcomiss xmm0, cs:__real@bf800000
    vmovsd  xmm8, cs:__real@3ff0000000000000
    vmovsd  xmm9, cs:__real@bff0000000000000
  }
  if ( v21 )
    goto LABEL_71;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( !v22 )
  {
LABEL_71:
    __asm
    {
      vmovsd  qword ptr [rsp+68h+var_38+8], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rsp+68h+var_38], xmm9
      vmovsd  [rsp+68h+var_40], xmm0
    }
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 886, ASSERT_TYPE_ASSERT, "( -1 ) <= ( p->windDir.x ) && ( p->windDir.x ) <= ( 1 )", "p->windDir.x not in [-1, 1]\n\t%g not in [%g, %g]", v84, v88, v92);
    v22 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+80h]
    vcomiss xmm0, cs:__real@bf800000
    vcomiss xmm0, cs:__real@3f800000
  }
  if ( !v22 )
  {
    __asm
    {
      vmovsd  qword ptr [rsp+68h+var_38+8], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rsp+68h+var_38], xmm9
      vmovsd  [rsp+68h+var_40], xmm0
    }
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 887, ASSERT_TYPE_ASSERT, "( -1 ) <= ( p->windDir.y ) && ( p->windDir.y ) <= ( 1 )", "p->windDir.y not in [-1, 1]\n\t%g not in [%g, %g]", v85, v89, v93);
    v22 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+84h]
    vcomiss xmm0, cs:__real@bf800000
    vcomiss xmm0, cs:__real@3f800000
  }
  if ( !v22 )
  {
    __asm
    {
      vmovsd  qword ptr [rsp+68h+var_38+8], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rsp+68h+var_38], xmm9
      vmovsd  [rsp+68h+var_40], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 888, ASSERT_TYPE_ASSERT, "( -1 ) <= ( p->windDir.z ) && ( p->windDir.z ) <= ( 1 )", "p->windDir.z not in [-1, 1]\n\t%g not in [%g, %g]", v86, v90, v94) )
      __debugbreak();
  }
  if ( _RBX->layerCount > 0x3F )
  {
    LODWORD(v91) = 63;
    LODWORD(v82) = _RBX->layerCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 889, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->layerCount ) && ( p->layerCount ) <= ( 63 )", "p->layerCount not in [0, 63]\n\t%i not in [%i, %i]", v82, 0i64, v91) )
      __debugbreak();
  }
  if ( _RBX->surfaceMapSetIndex > 7 )
  {
    LODWORD(v91) = 7;
    LODWORD(v82) = _RBX->surfaceMapSetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\superterrain_cshared_pack.hlsl", 890, ASSERT_TYPE_ASSERT, "( 0 ) <= ( p->surfaceMapSetIndex ) && ( p->surfaceMapSetIndex ) <= ( 7 )", "p->surfaceMapSetIndex not in [0, 7]\n\t%i not in [%i, %i]", v82, 0i64, v91) )
      __debugbreak();
  }
  this->data[0].v[0] = _RBX->flags;
  this->data[0].v[1] = _RBX->layerMask;
  this->data[0].v[2] = _RBX->layerGrassMask;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[0].v[3] = v97;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[1].v[0] = v98;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[1].v[1] = v99;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[1].v[2] = v100;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[1].v[3] = v101;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[2].v[0] = v102;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+34h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[2].v[1] = v103;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[2].v[2] = v104;
  this->data[2].v[3] = _RBX->surfaceMapXCount;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[3].v[0] = v105;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[3].v[1] = v106;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+54h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[3].v[2] = v107;
  this->data[3].v[3] = _RBX->vertXCount;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+5Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[4].v[0] = v108;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+60h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[4].v[1] = v109;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+64h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[4].v[2] = v110;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+68h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[4].v[3] = v111;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+6Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[5].v[0] = v112;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+70h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[5].v[1] = v113;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+74h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[5].v[2] = v114;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+78h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[5].v[3] = v115;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+88h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[6].v[0] = v116;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[6].v[1] = v117;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+90h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[6].v[2] = v118;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+94h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[6].v[3] = v119;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+98h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[7].v[0] = v120;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+9Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[7].v[1] = v121;
  this->data[7].v[2] = _RBX->frameCount;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B4h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[7].v[3] = v122;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B8h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[8].v[0] = v123;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0BCh]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[8].v[1] = v124;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C0h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[8].v[2] = v125;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C4h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[8].v[3] = v126;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C8h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[9].v[0] = v127;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0CCh]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  this->data[9].v[1] = v128;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  v67 = (unsigned __int8)(v129 >> 23) - 112;
  if ( v67 >= 0 )
  {
    v5 = (unsigned __int8)(v129 >> 23) - 112;
    if ( v67 > 30 )
      v5 = 30;
  }
  __asm { vmovss  xmm2, cs:__real@43ff8000 }
  v69 = v5 << 10;
  v70 = HIWORD(v129) & 0x8000;
  v71 = v70 | v69 | (v129 >> 13) & 0x3FF;
  if ( v67 > 30 )
    v71 = v70 | v69 | 0x3FF;
  this->data[9].v[2] = LOWORD(_RBX->layerOffset) | (v71 << 16);
  v72 = -511;
  this->data[9].v[3] = LOBYTE(_RBX->sectorKey) | ((LOBYTE(_RBX->defaultSectorKey) | (((_RBX->defaultSectorStartMip << 12) | _RBX->surfaceMapBaseIndex & 0xFFF) << 8)) << 8);
  __asm { vcvttss2si rcx, dword ptr [rbx+14h] }
  this->data_align.v[0] = (_RBX->layerSurfaceMapBaseIndex << 20) | _RCX & 0xFFFFF;
  __asm
  {
    vmulss  xmm0, xmm2, dword ptr [rbx+7Ch]
    vcvttss2si ecx, xmm0
  }
  if ( _ECX >= 511 )
  {
    LOWORD(_ECX) = 511;
  }
  else if ( _ECX < -511 )
  {
    LOWORD(_ECX) = -511;
  }
  __asm
  {
    vmulss  xmm1, xmm2, dword ptr [rbx+80h]
    vcvttss2si eax, xmm1
  }
  if ( _EAX >= 511 )
  {
    _EAX = 511;
  }
  else if ( _EAX < -511 )
  {
    _EAX = -511;
  }
  this->data_align.v[1] = _RBX->surfaceIndex & 0xFFF | (((_EAX << 10) | _ECX & 0x3FF) << 12);
  __asm
  {
    vmulss  xmm1, xmm2, dword ptr [rbx+84h]
    vcvttss2si eax, xmm1
  }
  if ( _EAX >= 511 )
  {
    LOWORD(_EAX) = 511;
  }
  else if ( _EAX < -511 )
  {
    goto LABEL_66;
  }
  v72 = _EAX;
LABEL_66:
  __asm
  {
    vmovaps xmm8, [rsp+68h+var_18]
    vmovaps xmm9, [rsp+68h+var_28]
  }
  this->data_align.v[2] = v72 & 0x3FF | ((_RBX->layerCount & 0x3F | ((_RBX->surfaceMapSetIndex & 7) << 6)) << 10);
}

