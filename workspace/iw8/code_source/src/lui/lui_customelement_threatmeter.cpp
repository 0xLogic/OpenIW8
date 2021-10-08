/*
==============
LUIElement_ThreatMeter_Render
==============
*/

void __fastcall LUIElement_ThreatMeter_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  lua_State *v18; 
  __int64 v21; 
  const cg_t *v22; 
  ThreatMeterOptions *customElementData; 
  const dvar_t *v24; 
  const CgSnapshotSP *NextSnap; 
  bool v26; 
  vec2_t *p_realViewportSize; 
  int currentThreats; 
  int v40; 
  unsigned int v47; 
  bool v48; 
  bool v49; 
  int v79; 
  __int64 v80; 
  const cg_t *v83; 
  lua_State *v84; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float height; 
  float heighta; 
  float heightb; 
  float heightc; 
  float heightd; 
  float heighte; 
  float heightf; 
  float heightg; 
  float heighth; 
  float uMin; 
  float uMina; 
  float uMinb; 
  float uMinc; 
  float uMind; 
  float uMine; 
  float uMinf; 
  float uMing; 
  float uMinh; 
  float v205; 
  float v206; 
  float v207; 
  float v208; 
  float v209; 
  float v210; 
  float v211; 
  float v212; 
  float v213; 
  float applyParallax; 
  float applyParallaxa; 
  float applyParallaxb; 
  float applyParallaxc; 
  float applyParallaxd; 
  float applyParallaxe; 
  float applyParallaxf; 
  float v221; 
  float v222; 
  float v223; 
  float v224; 
  float v225; 
  float v226; 
  float v227; 
  float v228; 
  float v229; 
  float v230; 
  float v231; 
  float v232; 
  float v233; 
  float v234; 
  float v235; 
  float v236; 
  float v237; 
  float v238; 
  float v239; 
  float v240; 
  float v241; 
  float v242; 
  float v243; 
  float v244; 
  float v245; 
  float v246; 
  float v247; 
  float v248; 
  float v249; 
  float v250; 
  float v251; 
  float v252; 
  float v253; 
  float v254; 
  float v255; 
  float v256; 
  float viewportSize; 
  float viewportSizea; 
  float viewportSizeb; 
  float viewportSizec; 
  float viewportSized; 
  float viewportSizee; 
  float viewportSizef; 
  float image; 
  float imagea; 
  float imageb; 
  float imagec; 
  float imaged; 
  float imagee; 
  float imagef; 
  unsigned int v274; 
  float c; 
  float s; 
  lua_State *v280; 
  const cg_t *LocalClientGlobals; 

  v18 = luaVM;
  v280 = luaVM;
  _R14 = element;
  v21 = localClientNum;
  __asm { vmovss  [rsp+1A8h+var_F8], xmm3 }
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 158, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !root && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 159, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 160, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v21);
  v22 = LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 163, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 72, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 73, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !_R14->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (ThreatMeterOptions *)_R14->customElementData;
  if ( !customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 166, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  v24 = DVARBOOL_ai_threatSightDisplay;
  if ( !DVARBOOL_ai_threatSightDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSightDisplay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( !v24->current.enabled )
    return;
  NextSnap = CG_SnapshotSP_GetNextSnap((const LocalClientNum_t)v21);
  if ( !NextSnap )
    return;
  LUIElement_ThreatMeter_UpdateEntityData((const LocalClientNum_t)v21, LocalClientGlobals, NextSnap, customElementData);
  if ( customElementData->currentThreats <= 0 )
    return;
  __asm
  {
    vmovaps [rsp+1A8h+var_48], xmm6
    vmovaps [rsp+1A8h+var_58], xmm7
    vmovaps [rsp+1A8h+var_68], xmm8
    vmovaps [rsp+1A8h+var_78], xmm9
    vmovaps [rsp+1A8h+var_88], xmm10
    vmovaps [rsp+1A8h+var_98], xmm11
    vmovaps [rsp+1A8h+var_D8], xmm15
  }
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      p_realViewportSize = &scrPlaceViewDisplay[v21].realViewportSize;
      goto LABEL_38;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v26 )
      __debugbreak();
  }
  p_realViewportSize = &scrPlaceFull.realViewportSize;
LABEL_38:
  __asm
  {
    vmovss  xmm3, dword ptr [r14+0CCh]
    vmovss  xmm0, dword ptr [r14+0D4h]
    vmovss  xmm2, dword ptr [r14+0D0h]
    vmovss  xmm1, dword ptr [r14+0D8h]
    vmovss  xmm6, cs:__real@3f000000
    vsubss  xmm7, xmm0, xmm3
    vsubss  xmm11, xmm1, xmm2
    vmulss  xmm0, xmm7, xmm6
    vmulss  xmm1, xmm11, xmm6
    vaddss  xmm15, xmm0, xmm3
    vaddss  xmm10, xmm1, xmm2
    vmovss  [rsp+1A8h+var_FC], xmm15
    vmovss  [rsp+1A8h+var_118], xmm10
    vmovss  [rsp+1A8h+var_100], xmm7
    vmovss  [rsp+1A8h+var_110], xmm11
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  currentThreats = customElementData->currentThreats;
  v40 = 0;
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  [rsp+1A8h+var_114], xmm0
    vxorps  xmm9, xmm9, xmm9
  }
  if ( currentThreats > 0 )
  {
    _RBX = &customElementData->threatEntities[0].detectionAnimState;
    do
    {
      if ( !*((_BYTE *)_RBX + 4) || *_RBX == THREAT_METER_ANIM_COMBAT )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-0Ch]
          vmovss  dword ptr [rsp+1A8h+image], xmm6
          vmovss  dword ptr [rsp+1A8h+viewportSize], xmm9
          vmovss  [rsp+1A8h+var_148], xmm9
          vmovss  [rsp+1A8h+var_150], xmm9
          vmovss  [rsp+1A8h+var_158], xmm0
          vmovss  [rsp+1A8h+var_160], xmm8
          vmovss  dword ptr [rsp+1A8h+applyParallax], xmm8
          vmovss  [rsp+1A8h+var_170], xmm9
          vmovss  [rsp+1A8h+uMin], xmm9
          vmovss  [rsp+1A8h+height], xmm11
          vmovaps xmm3, xmm10; centerY
          vmovaps xmm2, xmm15; centerX
          vmovss  dword ptr [rsp+1A8h+fmt], xmm7
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, _R14, *(float *)&_XMM2, *(float *)&_XMM3, fmt, height, uMin, v205, applyParallax, v221, v230, v239, v248, viewportSize, image, customElementData->imgInnerBG, luaVM);
      }
      currentThreats = customElementData->currentThreats;
      ++v40;
      _RBX += 5;
    }
    while ( v40 < currentThreats );
  }
  v274 = 0;
  v47 = 0;
  v48 = 0;
  v49 = currentThreats == 0;
  if ( currentThreats > 0 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm2, cs:__real@3f59999a
      vmovss  xmm1, cs:__real@bf19999a
      vmovaps [rsp+1A8h+var_A8], xmm12
    }
    _RDI = &customElementData->threatEntities[0].detectionAnimState;
    __asm { vmovaps [rsp+1A8h+var_B8], xmm13 }
    _EDX = 2;
    __asm { vmovaps [rsp+1A8h+var_C8], xmm14 }
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi-8]
        vmovss  xmm12, dword ptr [rdi-0Ch]
        vmaxss  xmm0, xmm0, xmm9
        vminss  xmm13, xmm0, xmm8
        vcomiss xmm13, xmm2
        vmovaps xmm10, xmm8
        vmovaps xmm11, xmm8
      }
      if ( !v49 )
      {
        __asm { vcomiss xmm13, xmm8 }
        _EAX = *_RDI;
        __asm
        {
          vsubss  xmm0, xmm13, xmm2
          vmulss  xmm3, xmm0, cs:__real@40d55558
          vmovd   xmm1, edx
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm1, xmm3, xmm8, xmm2
          vmulss  xmm0, xmm1, cs:__real@3f19999a
          vsubss  xmm11, xmm8, xmm1
          vmovss  xmm1, cs:__real@bf19999a
          vsubss  xmm10, xmm8, xmm0
        }
        if ( !v48 && _EAX == THREAT_METER_ANIM_OFF )
        {
          *_RDI = THREAT_METER_ANIM_WARNING;
          *(_RDI - 1) = (ThreatMeterAnimState)v22->time;
        }
      }
      __asm { vmovaps xmm14, xmm8 }
      if ( !*((_BYTE *)_RDI + 5) )
      {
        __asm
        {
          vmovss  xmm14, cs:__real@3ecccccc
          vmulss  xmm0, xmm10, xmm1
          vmulss  xmm1, xmm11, xmm1
          vaddss  xmm11, xmm11, xmm1
          vaddss  xmm10, xmm10, xmm0
        }
      }
      __asm { vmulss  xmm3, xmm13, xmm7; maskWidth }
      if ( !*((_BYTE *)_RDI + 4) || *_RDI == THREAT_METER_ANIM_COMBAT )
      {
        __asm
        {
          vmovss  xmm0, [rsp+1A8h+var_110]
          vmovss  xmm2, [rsp+1A8h+var_118]; maskCenterY
          vmovss  [rsp+1A8h+var_148], xmm8
          vmovss  [rsp+1A8h+var_150], xmm8
          vmovss  [rsp+1A8h+var_158], xmm9
          vmovss  [rsp+1A8h+var_160], xmm9
          vmovss  [rsp+1A8h+var_170], xmm9
          vxorps  xmm6, xmm12, xmm4
          vmovss  [rsp+1A8h+uMin], xmm8
          vmovss  [rsp+1A8h+height], xmm6
          vmovaps xmm1, xmm15; maskCenterX
          vmovss  dword ptr [rsp+1A8h+fmt], xmm0
        }
        LUI_Render_PushMask((const LocalClientNum_t)v21, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, heighta, uMina, v206, 1, v222, v231, v240, v249, p_realViewportSize, (GfxImage *)customElementData->imgMask);
        __asm
        {
          vmovss  xmm0, [rsp+1A8h+var_110]
          vmovss  xmm3, [rsp+1A8h+var_118]; centerY
          vmovss  dword ptr [rsp+1A8h+image], xmm8
          vmovss  dword ptr [rsp+1A8h+viewportSize], xmm11
          vmovss  [rsp+1A8h+var_148], xmm10
          vmovss  [rsp+1A8h+var_150], xmm14
          vmovss  [rsp+1A8h+var_158], xmm12
          vmovss  [rsp+1A8h+var_160], xmm8
          vmovss  dword ptr [rsp+1A8h+applyParallax], xmm8
          vmovss  [rsp+1A8h+var_170], xmm9
          vmovss  [rsp+1A8h+uMin], xmm9
          vmovss  [rsp+1A8h+height], xmm0
          vmovaps xmm2, xmm15; centerX
          vmovss  dword ptr [rsp+1A8h+fmt], xmm7
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, _R14, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, heightb, uMinb, v207, applyParallaxa, v223, v232, v241, v250, viewportSizea, imagea, customElementData->imgMeter, v18);
        LUI_Render_PopMask((const LocalClientNum_t)v21);
        v47 = v274;
      }
      else
      {
        __asm { vxorps  xmm6, xmm12, xmm4 }
      }
      if ( *_RDI == THREAT_METER_ANIM_OFF )
        goto LABEL_75;
      __asm { vmulss  xmm0, xmm12, cs:__real@3c8efa35; radians }
      v79 = v22->time - *((_DWORD *)_RDI - 1);
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      if ( *((_BYTE *)_RDI + 4) )
        break;
      __asm
      {
        vmovss  xmm0, [rsp+1A8h+var_110]
        vmulss  xmm3, xmm0, cs:__real@3f4ccccd
        vmulss  xmm15, xmm7, cs:__real@3f4ccccd
        vdivss  xmm6, xmm0, xmm7
        vmovss  xmm0, [rsp+1A8h+var_114]
        vmulss  xmm2, xmm0, cs:__real@420551ec
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vmulss  xmm0, xmm1, cs:__real@3e800000
        vaddss  xmm5, xmm0, xmm2
        vmulss  xmm2, xmm1, cs:__real@3dcccccd
        vmovss  xmm1, cs:__real@3f333333
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vsubss  xmm4, xmm1, xmm0
        vmulss  xmm1, xmm5, [rsp+1A8h+c]
        vmovss  dword ptr [rsp+1A8h+image], xmm4
        vmovss  dword ptr [rsp+1A8h+viewportSize], xmm11
        vmovss  [rsp+1A8h+var_148], xmm10
        vmovss  [rsp+1A8h+var_150], xmm14
        vmovss  [rsp+1A8h+var_158], xmm12
        vmovss  [rsp+1A8h+var_160], xmm8
        vmulss  xmm0, xmm2, xmm6
        vsubss  xmm6, xmm3, xmm0
        vmovss  xmm0, [rsp+1A8h+var_118]
        vmovss  dword ptr [rsp+1A8h+applyParallax], xmm8
        vmovss  [rsp+1A8h+var_170], xmm9
        vsubss  xmm7, xmm15, xmm2
        vsubss  xmm3, xmm0, xmm1; centerY
        vmulss  xmm0, xmm5, [rsp+1A8h+s]
        vaddss  xmm2, xmm0, [rsp+1A8h+var_FC]; centerX
        vmovss  [rsp+1A8h+uMin], xmm9
        vmovss  [rsp+1A8h+height], xmm6
        vmovss  dword ptr [rsp+1A8h+fmt], xmm7
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, _R14, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, heightg, uMing, v212, applyParallaxe, v228, v237, v246, v255, viewportSizee, imagee, customElementData->imgMeter, v18);
      if ( v79 % -500 <= 250 )
      {
        __asm { vmovss  xmm15, [rsp+1A8h+var_FC] }
      }
      else
      {
        __asm
        {
          vmovss  xmm3, [rsp+1A8h+var_114]
          vmulss  xmm2, xmm3, cs:__real@420551ec
          vmovss  xmm6, [rsp+1A8h+var_110]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ecx
          vmulss  xmm0, xmm1, cs:__real@3e800000
          vaddss  xmm5, xmm0, xmm2
          vmulss  xmm2, xmm1, cs:__real@3dcccccd
          vmovss  xmm1, cs:__real@3f333333
          vxorps  xmm0, xmm0, xmm0
          vsubss  xmm7, xmm15, xmm2
          vmovss  xmm15, [rsp+1A8h+var_FC]
          vcvtsi2ss xmm0, xmm0, edx
          vsubss  xmm4, xmm1, xmm0
          vdivss  xmm1, xmm6, [rsp+1A8h+var_100]
          vmovss  dword ptr [rsp+1A8h+image], xmm4
          vmovss  dword ptr [rsp+1A8h+viewportSize], xmm11
          vmovss  [rsp+1A8h+var_148], xmm10
          vmovss  [rsp+1A8h+var_150], xmm14
          vmulss  xmm0, xmm2, xmm1
          vmulss  xmm1, xmm6, cs:__real@3f4ccccd
          vmovss  [rsp+1A8h+var_158], xmm12
          vsubss  xmm6, xmm1, xmm0
          vmovss  xmm0, [rsp+1A8h+var_118]
          vmulss  xmm1, xmm5, [rsp+1A8h+c]
          vmovss  [rsp+1A8h+var_160], xmm8
          vmovss  dword ptr [rsp+1A8h+applyParallax], xmm8
          vmovss  [rsp+1A8h+var_170], xmm9
          vsubss  xmm3, xmm0, xmm1; centerY
          vmulss  xmm0, xmm5, [rsp+1A8h+s]
          vmovss  [rsp+1A8h+uMin], xmm9
          vaddss  xmm2, xmm0, xmm15; centerX
          vmovss  [rsp+1A8h+height], xmm6
          vmovss  dword ptr [rsp+1A8h+fmt], xmm7
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, _R14, *(float *)&_XMM2, *(float *)&_XMM3, fmth, heighth, uMinh, v213, applyParallaxf, v229, v238, v247, v256, viewportSizef, imagef, customElementData->imgMeter, v18);
      }
      __asm { vmovss  xmm7, [rsp+1A8h+var_100] }
LABEL_83:
      if ( *_RDI == THREAT_METER_ANIM_WARNING )
      {
        __asm { vcomiss xmm13, xmm8 }
        v47 = v274;
        if ( *_RDI == THREAT_METER_ANIM_OFF )
          *_RDI = THREAT_METER_ANIM_OFF;
        goto LABEL_75;
      }
LABEL_74:
      v47 = v274;
LABEL_75:
      __asm
      {
        vmovss  xmm1, cs:__real@bf19999a
        vmovss  xmm2, cs:__real@3f59999a
        vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
      }
      v18 = v280;
      ++v47;
      v22 = LocalClientGlobals;
      _RDI += 5;
      _EDX = 2;
      v274 = v47;
      v48 = v47 < customElementData->currentThreats;
      v49 = v47 <= customElementData->currentThreats;
      if ( (signed int)v47 >= customElementData->currentThreats )
      {
        __asm
        {
          vmovaps xmm14, [rsp+1A8h+var_C8]
          vmovaps xmm13, [rsp+1A8h+var_B8]
          vmovaps xmm12, [rsp+1A8h+var_A8]
        }
        goto LABEL_77;
      }
    }
    v80 = tls_index;
    if ( dword_154790648 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_154790648);
      if ( dword_154790648 == -1 )
      {
        __asm
        {
          vmovss  xmm0, [rsp+1A8h+var_114]
          vmulss  xmm0, xmm0, cs:__real@43aaaa3d
          vmovss  cs:blurWidth, xmm0
        }
        j__Init_thread_footer(&dword_154790648);
      }
    }
    if ( dword_154790650 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v80) + 1772i64) )
    {
      j__Init_thread_header(&dword_154790650);
      if ( dword_154790650 == -1 )
      {
        __asm
        {
          vmovss  xmm0, [rsp+1A8h+var_114]
          vmulss  xmm0, xmm0, cs:__real@43aaaa3d
          vmovss  cs:blurHeight, xmm0
        }
        j__Init_thread_footer(&dword_154790650);
      }
    }
    if ( *_RDI == THREAT_METER_ANIM_WARNING )
    {
      v83 = LocalClientGlobals;
      *_RDI = THREAT_METER_ANIM_COMBAT;
      *(_RDI - 1) = (ThreatMeterAnimState)v83->time;
    }
    else if ( v79 >= 100 )
    {
      if ( v79 >= 300 )
      {
        *(_QWORD *)(_RDI - 1) = 0i64;
        goto LABEL_74;
      }
      v84 = v280;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm1, xmm0, cs:__real@3d872b02
        vmulss  xmm2, xmm1, [rsp+1A8h+var_114]
        vmovss  xmm1, [rsp+1A8h+var_118]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vsubss  xmm4, xmm8, xmm0
        vmulss  xmm0, xmm2, [rsp+1A8h+c]
        vmovss  dword ptr [rsp+1A8h+image], xmm4
        vmovss  dword ptr [rsp+1A8h+viewportSize], xmm11
        vmovss  [rsp+1A8h+var_148], xmm10
        vmovss  [rsp+1A8h+var_150], xmm14
        vmovss  [rsp+1A8h+var_158], xmm12
        vmovss  [rsp+1A8h+var_160], xmm8
        vmovss  dword ptr [rsp+1A8h+applyParallax], xmm8
        vsubss  xmm3, xmm1, xmm0; centerY
        vmulss  xmm1, xmm2, [rsp+1A8h+s]
        vmovss  xmm0, [rsp+1A8h+var_110]
        vmovss  [rsp+1A8h+var_170], xmm9
        vmovss  [rsp+1A8h+uMin], xmm9
        vmovss  [rsp+1A8h+height], xmm0
        vaddss  xmm2, xmm1, xmm15; centerX
        vmovss  dword ptr [rsp+1A8h+fmt], xmm7
      }
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, _R14, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, heightd, uMind, v209, applyParallaxc, v225, v234, v243, v252, viewportSizec, imagec, customElementData->imgArrow, v280);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm1, xmm0, cs:__real@bba3d70a
      }
      goto LABEL_72;
    }
    v84 = v280;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vmulss  xmm1, xmm0, cs:__real@3d872b02
      vmulss  xmm4, xmm1, [rsp+1A8h+var_114]
      vmulss  xmm2, xmm4, [rsp+1A8h+c]
      vmovss  xmm0, [rsp+1A8h+var_118]
      vsubss  xmm3, xmm0, xmm2; centerY
      vmulss  xmm0, xmm4, [rsp+1A8h+s]
      vaddss  xmm2, xmm0, xmm15; centerX
      vmovss  xmm0, [rsp+1A8h+var_F8]
      vmovss  dword ptr [rsp+1A8h+image], xmm0
      vmovss  xmm0, [rsp+1A8h+var_110]
      vmovss  dword ptr [rsp+1A8h+viewportSize], xmm11
      vmovss  [rsp+1A8h+var_148], xmm10
      vmovss  [rsp+1A8h+var_150], xmm14
      vmovss  [rsp+1A8h+var_158], xmm12
      vmovss  [rsp+1A8h+var_160], xmm8
      vmovss  dword ptr [rsp+1A8h+applyParallax], xmm8
      vmovss  [rsp+1A8h+var_170], xmm9
      vmovss  [rsp+1A8h+uMin], xmm9
      vmovss  [rsp+1A8h+height], xmm0
      vmovss  dword ptr [rsp+1A8h+fmt], xmm7
    }
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, _R14, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, heightc, uMinc, v208, applyParallaxb, v224, v233, v242, v251, viewportSizeb, imageb, customElementData->imgArrow, v280);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vsubss  xmm1, xmm0, xmm8
    }
LABEL_72:
    __asm
    {
      vmovss  xmm0, cs:blurHeight
      vmovss  xmm3, cs:blurWidth; maskWidth
      vmovss  xmm2, [rsp+1A8h+var_118]; maskCenterY
      vmovss  [rsp+1A8h+var_148], xmm8
      vmovss  [rsp+1A8h+var_150], xmm8
      vmovss  [rsp+1A8h+var_158], xmm9
      vmovss  [rsp+1A8h+var_160], xmm9
      vmovss  [rsp+1A8h+var_170], xmm1
      vmovss  [rsp+1A8h+uMin], xmm8
      vmovss  [rsp+1A8h+height], xmm6
      vmovaps xmm1, xmm15; maskCenterX
      vmovss  dword ptr [rsp+1A8h+fmt], xmm0
    }
    LUI_Render_PushMask((const LocalClientNum_t)v21, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, heighte, uMine, v210, 1, v226, v235, v244, v253, p_realViewportSize, (GfxImage *)customElementData->imgBlurMask);
    __asm
    {
      vmovss  xmm0, cs:blurHeight
      vmovss  xmm1, cs:blurWidth
      vmovss  xmm3, [rsp+1A8h+var_118]; centerY
      vmovss  dword ptr [rsp+1A8h+image], xmm8
      vmovss  dword ptr [rsp+1A8h+viewportSize], xmm11
      vmovss  [rsp+1A8h+var_148], xmm10
      vmovss  [rsp+1A8h+var_150], xmm14
      vmovss  [rsp+1A8h+var_158], xmm12
      vmovss  [rsp+1A8h+var_160], xmm8
      vmovss  dword ptr [rsp+1A8h+applyParallax], xmm8
      vmovss  [rsp+1A8h+var_170], xmm9
      vmovss  [rsp+1A8h+uMin], xmm9
      vmovss  [rsp+1A8h+height], xmm0
      vmovaps xmm2, xmm15; centerX
      vmovss  dword ptr [rsp+1A8h+fmt], xmm1
    }
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)v21, _R14, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, heightf, uMinf, v211, applyParallaxd, v227, v236, v245, v254, viewportSized, imaged, customElementData->imgBlur, v84);
    LUI_Render_PopMask((const LocalClientNum_t)v21);
    goto LABEL_83;
  }
LABEL_77:
  __asm
  {
    vmovaps xmm11, [rsp+1A8h+var_98]
    vmovaps xmm10, [rsp+1A8h+var_88]
    vmovaps xmm9, [rsp+1A8h+var_78]
    vmovaps xmm8, [rsp+1A8h+var_68]
    vmovaps xmm7, [rsp+1A8h+var_58]
    vmovaps xmm6, [rsp+1A8h+var_48]
    vmovaps xmm15, [rsp+1A8h+var_D8]
  }
}

/*
==============
LUIElement_ThreatMeter_UpdateEntityData
==============
*/
void LUIElement_ThreatMeter_UpdateEntityData(const LocalClientNum_t localClientNum, const cg_t *cgameGlob, const CgSnapshotSP *nextSnap, ThreatMeterOptions *options)
{
  __int64 v9; 
  __int64 clientNum; 
  int v11; 
  __int64 v12; 
  unsigned __int16 *entityNums; 
  __int64 v15; 
  CgEntitySystem *v16; 
  __int64 v17; 
  __int16 v18; 
  cg_t *LocalClientGlobals; 
  int v20; 
  __int64 v32; 
  __int64 v33; 
  vec3_t outOrigin; 
  __int64 v35; 
  vec3_t outEyePos; 
  vec3_t vec; 
  vec3_t outForward; 
  vec3_t angles; 
  vec3_t v40; 
  vec3_t outUp; 
  vec3_t outRight; 

  v35 = -2i64;
  __asm { vmovaps [rsp+138h+var_58], xmm6 }
  _RBP = options;
  v9 = localClientNum;
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  v11 = 0;
  options->currentThreats = 0;
  if ( nextSnap->numEntities > 0 )
  {
    v12 = localClientNum;
    entityNums = nextSnap->entityNums;
    __asm { vmovss  xmm6, cs:__real@3c010204 }
    do
    {
      if ( _RBP->currentThreats >= 16 )
        break;
      v15 = *entityNums;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v33) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v33) )
          __debugbreak();
      }
      if ( (unsigned int)v9 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v33) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v32) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v12] )
      {
        LODWORD(v33) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v33) )
          __debugbreak();
      }
      v16 = CgEntitySystem::ms_entitySystemArray[v12];
      if ( (unsigned int)v15 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v32, v33) )
          __debugbreak();
      }
      v17 = (__int64)&v16->m_entities[v15];
      if ( (*(_BYTE *)(v17 + 648) & 1) != 0 && *(_WORD *)(v17 + 408) == 19 )
      {
        if ( (_DWORD)clientNum )
        {
          LODWORD(v33) = 1;
          LODWORD(v32) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 135, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cent->nextState.lerp.u.actor.threatSight ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( cent->nextState.lerp.u.actor.threatSight )\n\t%i not in [0, %i)", v32, v33) )
            __debugbreak();
        }
        v18 = *(_WORD *)(v17 + 2 * clientNum + 492);
        if ( (v18 & 0x7F) != 0 )
        {
          CG_GetPoseOrigin((const cpose_t *)v17, &outOrigin);
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
          if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 90, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          v20 = LocalClientGlobals->predictedPlayerState.clientNum;
          CG_CalcEyePoint((LocalClientNum_t)v9, v20, &outEyePos);
          if ( CG_GetViewDirection((LocalClientNum_t)v9, v20, &outForward, &outRight, &outUp) )
          {
            vectoangles(&outForward, &angles);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+138h+outOrigin]
              vsubss  xmm1, xmm0, dword ptr [rsp+138h+outEyePos]
              vmovss  dword ptr [rsp+138h+vec], xmm1
              vmovss  xmm2, dword ptr [rsp+138h+outOrigin+4]
              vsubss  xmm0, xmm2, dword ptr [rsp+138h+outEyePos+4]
              vmovss  dword ptr [rsp+138h+vec+4], xmm0
              vmovss  xmm1, dword ptr [rsp+138h+outOrigin+8]
              vsubss  xmm2, xmm1, dword ptr [rsp+138h+outEyePos+8]
              vmovss  dword ptr [rsp+138h+vec+8], xmm2
            }
            vectoangles(&vec, &v40);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+138h+angles+4]
              vsubss  xmm0, xmm0, dword ptr [rsp+138h+var_98+4]; angle
            }
            *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          }
          else
          {
            __asm { vxorps  xmm0, xmm0, xmm0 }
          }
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vmulss  xmm2, xmm1, xmm6
          }
          _RCX = 5i64 * _RBP->currentThreats;
          __asm { vmovss  dword ptr [rbp+rcx*4+30h], xmm0 }
          _RCX = 5i64 * _RBP->currentThreats;
          __asm { vmovss  dword ptr [rbp+rcx*4+34h], xmm2 }
          _RBP->threatEntities[_RBP->currentThreats].inCombat = HIBYTE(v18) & 1;
          _RBP->threatEntities[_RBP->currentThreats++].isVisible = (unsigned __int8)v18 >> 7;
        }
      }
      ++v11;
      ++entityNums;
      v12 = v9;
    }
    while ( v11 < nextSnap->numEntities );
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  __asm { vmovaps xmm6, [rsp+138h+var_58] }
}

/*
==============
LUI_LuaCall_LUIElement_SetupThreatMeter
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupThreatMeter(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupThreatMeter_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupThreatMeter_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupThreatMeter_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  _QWORD *v3; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_ThreatMeter_Render;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0x178ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, 0x178ui64);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 370, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  memset_0(v3, 0, 0x178ui64);
  *v3 = Image_Register("hud_stealth_meter_full", IMAGE_TRACK_HUD);
  v3[1] = Image_Register("hud_stealth_meter_inner", IMAGE_TRACK_HUD);
  v3[2] = Image_Register("white_2d_stencil_mask", IMAGE_TRACK_HUD);
  v3[3] = Image_Register("hud_stealth_meter_arrow", IMAGE_TRACK_HUD);
  v3[4] = Image_Register("white", IMAGE_TRACK_HUD);
  v3[5] = Image_Register("hud_stealth_meter_blur_mask", IMAGE_TRACK_HUD);
  return 0i64;
}

