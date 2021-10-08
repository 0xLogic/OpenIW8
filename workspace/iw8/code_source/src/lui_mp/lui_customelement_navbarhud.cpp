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
  const cg_t *LocalClientGlobals; 
  float outAngle; 
  vec2_t outVector; 

  LocalClientGlobals = CG_GetLocalClientGlobals(*localClientNum);
  CgCompassSystem::GetCompassYaw((CgCompassSystem *)compassSystem, COMPASS_TYPE_NAVBAR, 0, LocalClientGlobals, &outAngle, &outVector);
  __asm
  {
    vmovss  xmm0, [rsp+58h+var_28]
    vsubss  xmm0, xmm0, dword ptr [rbx+49FFCh]
  }
  return *(float *)&_XMM0;
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
  __int64 v22; 
  __int64 v23; 

  v3 = obj->entNum[0];
  _RDI = out_origin;
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
    FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)_RDI);
    if ( p_pose->isPosePrecise )
    {
      __asm
      {
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmovd   xmm0, dword ptr [rdi]
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovd   xmm0, dword ptr [rdi+4]
        vcvtdq2pd xmm0, xmm0
        vmovss  dword ptr [rdi], xmm1
        vmulsd  xmm1, xmm0, xmm3
        vmovd   xmm0, dword ptr [rdi+8]
        vcvtsd2ss xmm2, xmm1, xmm1
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm1, xmm0, xmm3
        vmovss  dword ptr [rdi+4], xmm2
        vcvtsd2ss xmm2, xmm1, xmm1
        vmovss  dword ptr [rdi+8], xmm2
      }
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

void __fastcall LUIElement_CompassCalculateIconParameters(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, double iconSizeScalar, vec2_t *toEntity, float *outX, float *outY, float *outW, float *outH)
{
  bool v20; 
  __int64 customElementData; 
  CgCompassSystem *CompassSystem; 
  const cg_t *LocalClientGlobals; 
  const dvar_t *v43; 
  const dvar_t *v85; 
  LocalClientNum_t localClientNuma; 
  int outFOVUsed[4]; 
  playerState_s *p_predictedPlayerState; 
  __int64 v139; 
  vec2_t outFOV; 
  char v141; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  v20 = element->customElementData == NULL;
  _RSI = element;
  _R13 = toEntity;
  _RBP = outX;
  _R14 = outY;
  _R15 = outW;
  _R12 = outH;
  __asm { vmovaps xmm12, xmm3 }
  localClientNuma = localClientNum;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0D8h]
    vmovss  xmm1, dword ptr [rsi+0D4h]
    vsubss  xmm13, xmm0, dword ptr [rsi+0D0h]
    vsubss  xmm15, xmm1, dword ptr [rsi+0CCh]
  }
  customElementData = (__int64)_RSI->customElementData;
  __asm
  {
    vmovss  xmm14, cs:__real@3f000000
    vmovss  [rsp+148h+var_F8], xmm13
    vmovss  [rsp+148h+var_FC], xmm15
  }
  v139 = customElementData;
  outFOVUsed[0] = 0;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  p_predictedPlayerState = &CgGlobalsMP::GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  __asm { vmovss  dword ptr [rsp+148h+outFOV], xmm10 }
  LUI_Element_ComputeAppliedFOV(&localClientNuma, (float *)&outFOV, outFOVUsed);
  CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CgCompassSystem::GetCompassYaw(CompassSystem, COMPASS_TYPE_NAVBAR, 0, LocalClientGlobals, (float *)&localClientNuma, &outFOV);
  __asm
  {
    vmovss  xmm0, [rsp+148h+localClientNum]
    vsubss  xmm1, xmm0, dword ptr [rdi+49FFCh]
    vsubss  xmm6, xmm1, cs:__real@43b40000
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  _EDI = outFOVUsed[0];
  v43 = DCONST_DVARBOOL_navbarUseRoundedCompass;
  localClientNuma = outFOVUsed[0] / 2;
  __asm
  {
    vmovaps xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1
    vsubss  xmm8, xmm1, cs:__real@43b40000
    vandps  xmm6, xmm6, xmm9
    vandps  xmm8, xmm8, xmm9
    vxorps  xmm11, xmm11, xmm11
  }
  if ( !DCONST_DVARBOOL_navbarUseRoundedCompass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarUseRoundedCompass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( v43->current.enabled )
  {
    _RBX = DCONST_DVARFLT_compassShrinkFactor;
    if ( !DCONST_DVARFLT_compassShrinkFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShrinkFactor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm11, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [r13+4]
    vmulss  xmm1, xmm1, xmm1
    vmovd   xmm7, edi
    vcvtdq2ps xmm7, xmm7
    vdivss  xmm0, xmm15, xmm7
    vmovss  [rsp+148h+outFOVUsed], xmm0
    vsubss  xmm0, xmm8, xmm6
    vmovss  xmm8, cs:__real@3f800000
    vmovss  dword ptr [rsp+148h+outFOV], xmm0
    vmovss  xmm0, dword ptr [r13+0]
    vmulss  xmm2, xmm0, xmm0
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm0, xmm0, cs:__real@39d1b717; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
    vmulss  xmm12, xmm13, xmm12
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm2, xmm0, [rsp+148h+smallDistanceScale]
    vsubss  xmm1, xmm8, xmm0
    vmulss  xmm3, xmm1, [rsp+148h+medDistanceScale]
    vaddss  xmm13, xmm3, xmm2
  }
  *(double *)&_XMM0 = vectoyaw(toEntity);
  _EAX = _EDI / 2;
  __asm { vmovd   xmm6, eax }
  _RAX = p_predictedPlayerState;
  __asm
  {
    vmovaps xmm1, xmm0; angle2
    vcvtdq2ps xmm6, xmm6
    vmovss  xmm0, dword ptr [rax+1DCh]; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm1, xmm6, xmm15; min
    vmovaps xmm2, xmm6; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vaddss  xmm6, xmm0, xmm6
    vandps  xmm6, xmm6, xmm9
    vdivss  xmm0, xmm6, xmm7; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v85 = DCONST_DVARBOOL_navbarUseRoundedCompass;
  __asm { vmulss  xmm9, xmm0, [rsp+148h+var_FC] }
  if ( !DCONST_DVARBOOL_navbarUseRoundedCompass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarUseRoundedCompass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v85);
  if ( v85->current.enabled )
  {
    LUI_Render_GetCurrentUnitScale();
    _ECX = localClientNuma;
    __asm { vcvttss2si eax, xmm6 }
    _EBX = localClientNuma - _EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm6, xmm8, xmm0
    }
    _EAX = abs32(localClientNuma - _EAX);
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm2, xmm0, xmm6
      vmulss  xmm1, xmm2, xmm2
      vmulss  xmm7, xmm1, xmm2
      vmovss  xmm1, cs:__real@3f4ccccd; min
      vsubss  xmm0, xmm8, xmm7; val
      vmovaps xmm2, xmm8; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm8, xmm0
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm3, xmm2, dword ptr [rsp+148h+outFOV]
      vxorps  xmm2, xmm3, xmm15
      vmovd   xmm4, ebx
      vcvtdq2ps xmm4, xmm4
      vcmpless xmm1, xmm10, xmm4
      vblendvps xmm1, xmm2, xmm3, xmm1
      vaddss  xmm8, xmm1, xmm0
      vmulss  xmm0, xmm11, [rsp+148h+outFOVUsed]
      vmulss  xmm2, xmm0, xmm7
      vxorps  xmm1, xmm2, xmm15
      vcmpless xmm0, xmm10, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm0
      vaddss  xmm9, xmm9, xmm0
    }
  }
  __asm
  {
    vmulss  xmm4, xmm13, xmm12
    vmulss  xmm0, xmm4, xmm8
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [r15], xmm0
    vmovss  dword ptr [r12], xmm0
    vaddss  xmm0, xmm9, dword ptr [rsi+0CCh]
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm0, xmm14, [rsp+148h+var_F8]
    vcvtsi2ss xmm1, xmm1, eax
    vaddss  xmm2, xmm1, dword ptr [rsi+0D0h]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm4, xmm14
    vsubss  xmm1, xmm3, xmm0
    vmovss  dword ptr [r14], xmm1
  }
  _R11 = &v141;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
LUIElement_CompassRenderEnemyIcon
==============
*/
void LUIElement_CompassRenderEnemyIcon(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, vec2_t *toEnemy, float finalAlpha, const vec4_t *enemyTeamColor, const float *radarTimeAmount, const float *lastFireTimeAmount, const float *fadeTimeAmount, const GfxImage *materialOverride)
{
  void *customElementData; 
  char v43; 
  bool v44; 
  const GfxImage *material; 
  lua_State *v64; 
  const float *v74; 
  const dvar_t *v75; 
  const dvar_t *v80; 
  bool enabled; 
  const dvar_t *v98; 
  GfxImage *image; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float height; 
  float heighta; 
  float heightb; 
  float outY; 
  float outYa; 
  float outYb; 
  float outW; 
  float outWa; 
  float outWb; 
  float outH; 
  float v170; 
  float v172; 
  float v174; 
  float v175; 
  float v176; 
  float v177; 
  int outFOVUsed; 
  float vMax; 
  float outFOV; 
  LocalClientNum_t localClientNuma; 
  float v184; 
  float v185; 
  float outX; 
  const float *v187; 
  const GfxImage *v188; 
  vec4_t color; 
  vec4_t result; 
  vec2_t outSize; 
  vec4_t quadVerts[4]; 
  char v197; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  v44 = element->customElementData == NULL;
  _R12 = lastFireTimeAmount;
  _RSI = element;
  _RDI = enemyTeamColor;
  v187 = radarTimeAmount;
  localClientNuma = localClientNum;
  v188 = materialOverride;
  if ( v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0D8h]
    vsubss  xmm1, xmm0, dword ptr [rsi+0D0h]
    vmovss  xmm11, cs:__real@3f000000
  }
  customElementData = _RSI->customElementData;
  __asm
  {
    vmulss  xmm9, xmm1, xmm11
    vxorps  xmm7, xmm7, xmm7
  }
  outFOVUsed = 0;
  _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  __asm { vmovss  [rbp+120h+outFOV], xmm7 }
  LUI_Element_ComputeAppliedFOV(&localClientNuma, &outFOV, &outFOVUsed);
  *(double *)&_XMM0 = vectoyaw(toEnemy);
  __asm
  {
    vmovaps xmm1, xmm0; angle2
    vmovss  xmm0, dword ptr [rbx+1E4h]; angle1
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, eax
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm4, dword ptr [rsi+0CCh]
    vmovss  xmm1, dword ptr [rsi+0D4h]
    vsubss  xmm2, xmm1, xmm4
    vmulss  xmm3, xmm2, xmm11
    vaddss  xmm6, xmm3, xmm4
    vmovaps xmm10, xmm0
  }
  LUI_Render_GetViewportSize(localClientNum, &outSize);
  __asm
  {
    vxorps  xmm2, xmm8, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm10, xmm2
    vmulss  xmm4, xmm11, dword ptr [r15+0Ch]
  }
  if ( v43 )
  {
    material = (const GfxImage *)*((_QWORD *)customElementData + 4);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vsubss  xmm2, xmm6, xmm4
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm11
      vsubss  xmm2, xmm2, xmm1
    }
LABEL_8:
    __asm
    {
      vmovss  xmm4, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  xmm1, dword ptr [rdi+4]
      vaddss  xmm3, xmm9, dword ptr [rsi+0D0h]; centerY
      vmovss  dword ptr [rsp+230h+var_1C0], xmm4
      vmovss  [rsp+230h+var_1C8], xmm0
      vmovss  xmm0, dword ptr [rdi]
      vmovss  [rsp+230h+var_1D0], xmm1
      vmovss  [rsp+230h+var_1D8], xmm0
      vmovss  [rsp+230h+var_1E0], xmm7
      vmovss  dword ptr [rsp+230h+var_1E8], xmm4
      vmovss  dword ptr [rsp+230h+outH], xmm4
      vmovss  dword ptr [rsp+230h+outW], xmm7
      vmovss  dword ptr [rsp+230h+outY], xmm7
      vmovss  [rsp+230h+height], xmm9
      vmovss  dword ptr [rsp+230h+fmt], xmm9
    }
    LUI_Render_DrawQuadRotated(localClientNum, _RSI, *(float *)&_XMM2, *(float *)&_XMM3, fmt, height, outY, outW, outH, v170, v172, v174, v175, v176, v177, material, luaVM);
    goto LABEL_39;
  }
  __asm { vcomiss xmm10, xmm8 }
  if ( !(v43 | v44) )
  {
    material = (const GfxImage *)*((_QWORD *)customElementData + 5);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm1, xmm4, xmm6
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm11
      vaddss  xmm2, xmm2, xmm1; centerX
    }
    goto LABEL_8;
  }
  _RBX = DCONST_DVARFLT_compassEnemyIconSizeScalar;
  __asm
  {
    vmovaps xmmword ptr [rsp+230h+var_B8+8], xmm12
    vmovaps [rsp+230h+var_C8+8], xmm13
    vmovaps [rsp+230h+var_D8+8], xmm14
    vmovaps [rsp+230h+var_E8+8], xmm15
  }
  if ( !DCONST_DVARFLT_compassEnemyIconSizeScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassEnemyIconSizeScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, cs:__real@3f666666 }
  v64 = luaVM;
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+28h]; iconSizeScalar
    vmovss  [rsp+230h+var_1E0], xmm0
    vmovss  dword ptr [rsp+230h+var_1E8], xmm11
  }
  LUIElement_CompassCalculateIconParameters(localClientNum, _RSI, luaVM, *(double *)&_XMM3, toEnemy, &outX, &v185, &vMax, &v184);
  __asm
  {
    vmovss  xmm14, [rbp+120h+vMax]
    vmovss  dword ptr [rbp+120h+var_1A0], xmm14
  }
  Dvar_GetVec3_Internal_DebugName(DCONST_DVARVEC3_navbarEnemyIconBackingColor, "navbarEnemyIconBackingColor", (vec3_t *)&result);
  __asm { vmovss  xmm0, dword ptr [rdi] }
  _RBX = DCONST_DVARFLT_navbarEnemyIconAnimationRange;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+120h+color], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+120h+color+8], xmm0
    vmovss  dword ptr [rbp+120h+color+4], xmm1
  }
  if ( !DCONST_DVARFLT_navbarEnemyIconAnimationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconAnimationRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RDI = fadeTimeAmount;
  _RAX = lastFireTimeAmount;
  v74 = v187;
  v75 = DCONST_DVARFLT_navbarEnemyIconMaxScalar;
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vcomiss xmm7, dword ptr [rdi]
    vsubss  xmm12, xmm8, xmm6
  }
  if ( !v43 )
    _RAX = v187;
  __asm { vmovss  xmm13, dword ptr [rax] }
  if ( !DCONST_DVARFLT_navbarEnemyIconMaxScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconMaxScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v75);
  __asm { vmulss  xmm10, xmm14, dword ptr [rbx+28h] }
  v80 = DCONST_DVARBOOL_navbarEnemyIconAnimPingPong;
  if ( !DCONST_DVARBOOL_navbarEnemyIconAnimPingPong && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconAnimPingPong") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v80);
  enabled = v80->current.enabled;
  __asm
  {
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm12; min
    vmovaps xmm0, xmm13; val
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm8, xmm0
    vdivss  xmm1, xmm0, xmm6
  }
  if ( enabled )
  {
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@40000000
      vsubss  xmm1, xmm0, xmm8
    }
  }
  __asm { vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  _RBX = DCONST_DVARFLT_navbarEnemyIconAnimationRange;
  __asm
  {
    vandps  xmm1, xmm1, xmm13
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm1
    vsubss  xmm0, xmm8, xmm1
    vmulss  xmm2, xmm0, xmm10
    vmulss  xmm1, xmm1, xmm14
    vaddss  xmm12, xmm2, xmm1
    vmovss  [rbp+120h+var_180], xmm12
    vmovss  [rbp+120h+vMax], xmm12
  }
  if ( !DCONST_DVARFLT_navbarEnemyIconAnimationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconAnimationRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vcomiss xmm7, dword ptr [rdi]
    vmovss  xmm10, dword ptr [rbx+28h]
  }
  v98 = DCONST_DVARFLT_navbarEnemyIconBackingMaxScalar;
  if ( !v43 )
    _R12 = v74;
  __asm
  {
    vsubss  xmm14, xmm8, xmm10
    vmovss  xmm15, dword ptr [r12]
  }
  if ( !DCONST_DVARFLT_navbarEnemyIconBackingMaxScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconBackingMaxScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v98);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+120h+var_1A0]
    vmulss  xmm6, xmm0, dword ptr [rbx+28h]
    vmovaps xmm0, xmm15; val
    vmovaps xmm2, xmm8; max
    vmovaps xmm1, xmm14; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  image = (GfxImage *)v188;
  __asm
  {
    vmovaps xmm15, [rsp+230h+var_E8+8]
    vmovaps xmm14, [rsp+230h+var_D8+8]
    vsubss  xmm0, xmm8, xmm0
    vdivss  xmm3, xmm0, xmm10
    vandps  xmm3, xmm3, xmm13
    vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
  }
  if ( !v188 )
    image = cgMedia.navBar.enemy[0]->textureTable->image;
  __asm
  {
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm2, xmm1, xmm2
    vsubss  xmm3, xmm3, xmm8
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm1, xmm0, xmm3
    vsubss  xmm10, xmm8, xmm2
    vmulss  xmm2, xmm1, xmm3
    vsubss  xmm4, xmm8, xmm2
    vsubss  xmm0, xmm8, xmm4
    vmulss  xmm2, xmm0, dword ptr [rbp+120h+var_1A0]
    vmulss  xmm1, xmm4, xmm6
    vaddss  xmm6, xmm2, xmm1
  }
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_customelement_navbarhud.cpp", 632, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+0D4h]
    vmovss  xmm13, [rbp+120h+var_17C]
    vaddss  xmm0, xmm13, xmm12
    vaddss  xmm4, xmm0, xmm9
    vmovss  xmm0, dword ptr [rsi+0CCh]
    vmaxss  xmm3, xmm1, xmm7; right
    vmaxss  xmm1, xmm0, xmm7; left
    vsubss  xmm2, xmm13, xmm9; top
    vmovss  dword ptr [rsp+230h+fmt], xmm4
  }
  LUI_Render_PushStencilRectangle(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
  __asm
  {
    vmulss  xmm0, xmm6, xmm11
    vmovss  xmm6, [rbp+120h+outX]
    vaddss  xmm2, xmm0, xmm6; right
    vaddss  xmm3, xmm0, xmm13; bottom
    vsubss  xmm1, xmm13, xmm0; top
    vsubss  xmm0, xmm6, xmm0; left
    vmovss  [rbp+120h+var_144], xmm10
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
  __asm
  {
    vmovss  dword ptr [rsp+230h+outW], xmm8
    vmovss  dword ptr [rsp+230h+outY], xmm8
    vmovss  [rsp+230h+height], xmm7
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  LUI_Render_DrawImage(localClientNum, _RSI, v64, (const vec4_t (*)[4])quadVerts, fmtb, heighta, outYa, outWa, &result, image);
  __asm
  {
    vmovss  xmm0, [rbp+120h+finalAlpha]
    vmulss  xmm1, xmm12, xmm11
    vmulss  xmm4, xmm12, xmm11
    vmovss  dword ptr [rbp+120h+color+0Ch], xmm0
    vaddss  xmm3, xmm1, xmm13; bottom
    vsubss  xmm1, xmm13, xmm1; top
    vsubss  xmm0, xmm6, xmm4; left
    vaddss  xmm2, xmm4, xmm6; right
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
  __asm
  {
    vmovss  dword ptr [rsp+230h+outW], xmm8
    vmovss  dword ptr [rsp+230h+outY], xmm8
    vmovss  [rsp+230h+height], xmm7
    vmovss  dword ptr [rsp+230h+fmt], xmm7
  }
  LUI_Render_DrawImage(localClientNum, _RSI, v64, (const vec4_t (*)[4])quadVerts, fmtc, heightb, outYb, outWb, &color, image);
  LUI_Render_PopStencilRectangle(localClientNum);
  __asm
  {
    vmovaps xmm13, [rsp+230h+var_C8+8]
    vmovaps xmm12, xmmword ptr [rsp+230h+var_B8+8]
  }
LABEL_39:
  _R11 = &v197;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
LUIElement_CompassRenderItems
==============
*/

void __fastcall LUIElement_CompassRenderItems(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUIElement *v17; 
  LocalClientNum_t v19; 
  LUINavBar *customElementData; 
  const CgCompassSystem *CompassSystem; 
  char ActiveGameMode; 
  bool v36; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  CgGlobalsMP *v52; 
  unsigned int v53; 
  const OmnvarDef *v54; 
  OmnvarData *v55; 
  unsigned int v56; 
  const OmnvarDef *v57; 
  const OmnvarData *v58; 
  int Integer; 
  int v60; 
  CgGlobalsMP *v62; 
  CgCompassSystemMP *CompassSystemMP; 
  int i; 
  CompassDecoyActorMP *DecoyCompassActor; 
  char v73; 
  char v74; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float maskRotation; 
  float maskRotationa; 
  float alphaScale; 
  float alphaScalea; 
  float lastFireTimeAmount; 
  float lastFireTimeAmounta; 
  float materialOverride; 
  float materialOverridea; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  LocalClientNum_t localClientNuma; 
  float v104; 
  float radarTimeAmount[2]; 
  SecureVec3 out; 
  __int64 v107; 
  vec2_t toEnemy; 
  vec2_t outSize; 
  vec4_t enemyTeamColor; 
  char v111; 
  void *retaddr; 

  _RAX = &retaddr;
  v107 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmm10, xmm3
  }
  v17 = root;
  toEnemy = (vec2_t)root;
  _R15 = element;
  v19 = localClientNum;
  localClientNuma = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUINavBar *)_R15->customElementData;
  CompassSystem = CgCompassSystem::GetCompassSystem(v19);
  *(_QWORD *)radarTimeAmount = CompassSystem;
  __asm
  {
    vmovss  xmm5, dword ptr [r15+0CCh]
    vmovss  xmm0, dword ptr [r15+0D4h]
    vsubss  xmm3, xmm0, xmm5
    vmovss  xmm4, dword ptr [r15+0D0h]
    vmovss  xmm1, dword ptr [r15+0D8h]
    vsubss  xmm8, xmm1, xmm4
    vmulss  xmm0, xmm3, cs:__real@3f000000
    vaddss  xmm11, xmm0, xmm5
    vmulss  xmm1, xmm8, cs:__real@3f000000
    vaddss  xmm12, xmm1, xmm4
  }
  _RDI = DCONST_DVARFLT_compassMaskScalar;
  if ( !DCONST_DVARFLT_compassMaskScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMaskScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm9, xmm0, dword ptr [r14+0Ch]
  }
  LUI_Render_GetViewportSize(v19, &outSize);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v36 = ActiveGameMode != 1;
  if ( ActiveGameMode != 1 )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(v19);
    IndexByName = BG_Omnvar_GetIndexByName("ui_scrambler_strength");
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(LocalClientGlobals->localClientNum, IndexByName);
    Omnvar_GetInteger(Def, Data);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@3e4ccccd; glitchAmount
    }
    LUI_Render_PushGlitch(*(float *)&_XMM0);
    v17 = (LUIElement *)toEnemy;
    CompassSystem = *(const CgCompassSystem **)radarTimeAmount;
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  if ( customElementData->shouldDrawCompass )
  {
    __asm
    {
      vmovss  [rsp+188h+var_128], xmm6
      vmovss  [rsp+188h+var_130], xmm6
      vmovss  [rsp+188h+var_138], xmm7
      vmovss  dword ptr [rsp+188h+materialOverride], xmm7
      vmovss  dword ptr [rsp+188h+lastFireTimeAmount], xmm7
      vmovss  [rsp+188h+alphaScale], xmm6
      vmovss  [rsp+188h+maskRotation], xmm7
      vmovss  dword ptr [rsp+188h+fmt], xmm8
      vmovaps xmm3, xmm9; maskWidth
      vmovaps xmm2, xmm12; maskCenterY
      vmovaps xmm1, xmm11; maskCenterX
    }
    LUI_Render_PushMask(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, maskRotation, alphaScale, lastFireTimeAmount, 0, materialOverride, v97, v99, v101, &outSize, customElementData->compassMask);
    LUI_Element_RenderCompass(v17, &localClientNuma, CompassSystem, customElementData, _R15, luaVM);
    v19 = localClientNuma;
    LUI_Render_PopMask(localClientNuma);
  }
  if ( v36 )
  {
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG || CG_GameInterface_PlayingBR() )
    {
      __asm
      {
        vmovss  [rsp+188h+var_128], xmm6
        vmovss  [rsp+188h+var_130], xmm6
        vmovss  [rsp+188h+var_138], xmm7
        vmovss  dword ptr [rsp+188h+materialOverride], xmm7
        vmovss  dword ptr [rsp+188h+lastFireTimeAmount], xmm7
        vmovss  [rsp+188h+alphaScale], xmm6
        vmovss  [rsp+188h+maskRotation], xmm7
        vmovss  dword ptr [rsp+188h+fmt], xmm8
        vmovaps xmm3, xmm9; maskWidth
        vmovaps xmm2, xmm12; maskCenterY
        vmovaps xmm1, xmm11; maskCenterX
      }
      LUI_Render_PushMask(v19, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, maskRotationa, alphaScalea, lastFireTimeAmounta, 0, materialOverridea, v98, v100, v102, &outSize, customElementData->compassMask);
      LUIElement_CompassRenderObjectives(v19, _R15, luaVM);
      LUI_Render_PopMask(v19);
    }
    v52 = CgGlobalsMP::GetLocalClientGlobals(v19);
    v53 = BG_Omnvar_GetIndexByName("ui_compass_hide_enemy_navbar");
    v54 = BG_Omnvar_GetDef(v53);
    v55 = CG_Omnvar_GetData(v52->localClientNum, v53);
    if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( v54->type )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
        __debugbreak();
      if ( v54->type )
        goto LABEL_26;
    }
    if ( !v55->current.enabled )
    {
LABEL_26:
      v56 = BG_Omnvar_GetIndexByName("ui_compass_hide_weapon_pings_navbar");
      v57 = BG_Omnvar_GetDef(v56);
      v58 = CG_Omnvar_GetData(v52->localClientNum, v56);
      Integer = Omnvar_GetInteger(v57, v58);
      v60 = Integer;
      if ( Integer != 1 )
      {
        __asm { vmovaps xmm2, xmm10; alpha }
        LUIElement_CompassRenderMPActors(v19, _R15, *(float *)&_XMM2, Integer, luaVM);
        v62 = CgGlobalsMP::GetLocalClientGlobals(v19);
        CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(v19);
        _RDI = DCONST_DVARVEC3_navbarEnemyIconColor;
        if ( !DCONST_DVARVEC3_navbarEnemyIconColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconColor") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vmovss  dword ptr [rsp+188h+enemyTeamColor], xmm0
          vmovss  xmm1, dword ptr [rdi+2Ch]
          vmovss  dword ptr [rsp+188h+enemyTeamColor+4], xmm1
          vmovss  xmm0, dword ptr [rdi+30h]
          vmovss  dword ptr [rsp+188h+enemyTeamColor+8], xmm0
        }
        CG_CalcPlayerPos(&out, v19);
        for ( i = 0; i < 15; ++i )
        {
          DecoyCompassActor = CgCompassSystemMP::GetDecoyCompassActor(CompassSystemMP, i);
          _RDI = DecoyCompassActor;
          if ( v62->time < DecoyCompassActor->pingTime && (v60 != 2 || v62->predictedPlayerState.radarEnabled) )
          {
            *(double *)&_XMM0 = CgCompassSystemMP::GetActorPingFadeAmount(CompassSystemMP, &DecoyCompassActor->beginRadarFadeTime);
            __asm
            {
              vmovaps xmm6, xmm0
              vmovss  [rsp+188h+radarTimeAmount], xmm0
            }
            *(double *)&_XMM0 = CgCompassSystemMP::GetActorFadeAmount(CompassSystemMP, &_RDI->beginFadeTime);
            __asm
            {
              vmovss  [rsp+188h+localClientNum], xmm0
              vmovss  [rsp+188h+var_100], xmm7
              vmaxss  xmm0, xmm0, xmm6
              vmulss  xmm3, xmm0, xmm10
              vcomiss xmm3, xmm7
            }
            if ( !(v73 | v74) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+0Ch]
                vsubss  xmm1, xmm0, dword ptr [rsp+188h+out.___u0]
                vmovss  dword ptr [rsp+188h+toEnemy], xmm1
                vmovss  xmm2, dword ptr [rdi+10h]
                vsubss  xmm0, xmm2, dword ptr [rsp+188h+out.___u0+4]
                vmovss  dword ptr [rsp+188h+toEnemy+4], xmm0
                vmovss  dword ptr [rsp+188h+fmt], xmm3
              }
              LUIElement_CompassRenderEnemyIcon(v19, _R15, luaVM, &toEnemy, fmtb, &enemyTeamColor, radarTimeAmount, &v104, (const float *)&localClientNuma, NULL);
            }
          }
        }
        memset(&out, 0, sizeof(out));
      }
    }
    LUI_Render_PopGlitch();
  }
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
LUIElement_CompassRenderMPActors
==============
*/

void __fastcall LUIElement_CompassRenderMPActors(const LocalClientNum_t localClientNum, LUIElement *element, double alpha, int weaponPingsStatus, lua_State *luaVM)
{
  signed __int64 v5; 
  void *v10; 
  CgCompassSystemMP *CompassSystemMP; 
  CgGlobalsMP *LocalClientGlobals; 
  int v20; 
  int v21; 
  const CompassActorMP *v23; 
  const CompassActorMP *v24; 
  __int64 v34; 
  ActorWithDistance *v35; 
  LocalClientNum_t v37; 
  LUIElement *v38; 
  const CompassActorMP *actor; 
  __int64 *v43; 
  const GfxImage *materialOverride; 
  const ScriptableEventCompassIconDef *iconState; 
  Material *v50; 
  float fmt; 
  vec4_t *enemyTeamColor; 
  float *radarTimeAmount; 
  std::less<void> v59; 
  LocalClientNum_t localClientNuma; 
  vec2_t outPos; 
  vec2_t v62; 
  SecureVec3 out; 
  float lastFireTimeAmount; 
  float v65; 
  __int128 v66; 
  lua_State *luaVMa; 
  __int64 v68[3]; 
  LUIElement *elementa; 
  vec4_t rgbColor; 
  ActorWithDistance _First[256]; 
  char v76; 

  v10 = alloca(v5);
  v68[2] = -2i64;
  __asm
  {
    vmovaps [rsp+1150h+var_40], xmm6
    vmovaps [rsp+1150h+var_50], xmm7
    vmovaps [rsp+1150h+var_60], xmm8
    vmovaps [rsp+1150h+var_70], xmm9
    vmovaps xmm9, xmm2
  }
  elementa = element;
  localClientNuma = localClientNum;
  luaVMa = luaVM;
  _RDI = DCONST_DVARVEC3_navbarEnemyIconColor;
  if ( !DCONST_DVARVEC3_navbarEnemyIconColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarEnemyIconColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rbp+1050h+rgbColor], xmm0
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rbp+1050h+rgbColor+4], xmm1
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rbp+1050h+rgbColor+8], xmm0
  }
  CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP(localClientNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  CG_CalcPlayerPos(&out, localClientNum);
  v20 = 0;
  v21 = 0;
  _R14 = _First;
  do
  {
    v23 = (const CompassActorMP *)CompassSystemMP->GetCompassActor(CompassSystemMP, v21);
    v24 = v23;
    if ( v23->ownerNum != LocalClientGlobals->predictedPlayerState.clientNum && (v23->flags & 1) != 0 && (weaponPingsStatus != 2 || LocalClientGlobals->predictedPlayerState.radarEnabled) )
    {
      if ( CgCompassSystemMP::IsEnemyFullyVisible(CompassSystemMP, v23) )
      {
        CompassActor_GetLastPos(v24, &v62);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1150h+var_10F0]
          vmovss  xmm1, dword ptr [rsp+1150h+var_10F0+4]
        }
        goto LABEL_14;
      }
      if ( CgCompassSystemMP::IsActorWithinFadeTime(CompassSystemMP, &v24->beginFadeTime) || CgCompassSystemMP::IsActorWithinPingTime(CompassSystemMP, &v24->beginRadarFadeTime) )
      {
        CompassActor_GetLastEnemyPos(v24, &outPos);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1150h+outPos]
          vmovss  xmm1, dword ptr [rsp+1150h+outPos+4]
        }
LABEL_14:
        __asm
        {
          vsubss  xmm3, xmm1, dword ptr [rsp+1150h+out.___u0+4]
          vsubss  xmm2, xmm0, dword ptr [rsp+1150h+out.___u0]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
        }
        *(_QWORD *)&v66 = v24;
        __asm
        {
          vmovups xmm0, [rbp+1050h+var_10D0]
          vinsertps xmm0, xmm0, xmm2, 20h ; ' '
          vmovups [rbp+1050h+var_10D0], xmm0
          vmovups xmmword ptr [r14], xmm0
        }
        ++v20;
        ++_R14;
      }
    }
    ++v21;
  }
  while ( v21 < 255 );
  v34 = v20;
  std::_Sort_unchecked<ActorWithDistance *,std::less<void>>(_First, &_First[v20], v20, v59);
  if ( v20 > 0 )
  {
    v35 = _First;
    __asm { vmovss  xmm8, cs:__real@3f800000 }
    v37 = localClientNuma;
    v38 = elementa;
    do
    {
      actor = v35->actor;
      *(double *)&_XMM0 = CgCompassSystemMP::GetActorPingFadeAmount(CompassSystemMP, &v35->actor->beginRadarFadeTime);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovss  [rsp+1150h+var_10D4], xmm0
      }
      *(double *)&_XMM0 = CgCompassSystemMP::GetActorFadeAmount(CompassSystemMP, &actor->beginFadeTime);
      __asm
      {
        vmovaps xmm7, xmm0
        vmovss  [rsp+1150h+localClientNum], xmm0
      }
      *(double *)&_XMM0 = CgCompassSystemMP::GetLastShotFireAmount(CompassSystemMP, &actor->lastShotFiredTime);
      __asm { vmovss  [rsp+1150h+var_10D8], xmm0 }
      if ( CgCompassSystemMP::IsEnemyFullyVisible(CompassSystemMP, actor) )
      {
        __asm { vmovaps xmm6, xmm8 }
        if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 169, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
          __debugbreak();
        if ( !actor->lastPos.Get_lastPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 177, ASSERT_TYPE_ASSERT, "(actor->lastPos.Get_lastPos)", (const char *)&queryFormat, "actor->lastPos.Get_lastPos") )
          __debugbreak();
        ((void (__fastcall *)(vec4_t *, __int64 *))((unsigned __int64)&actor->lastPos ^ (__int64)actor->lastPos.Get_lastPos ^ s_aab_get_pointer_lastpos))(&actor->lastPos.lastPos, v68);
        v62 = (vec2_t)v68[0];
        v43 = v68;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1150h+var_10F0]
          vmovss  xmm2, dword ptr [rsp+1150h+var_10F0+4]
        }
      }
      else
      {
        __asm
        {
          vmaxss  xmm0, xmm7, xmm6
          vmulss  xmm6, xmm0, xmm9
        }
        if ( !actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 225, ASSERT_TYPE_ASSERT, "(actor)", (const char *)&queryFormat, "actor") )
          __debugbreak();
        if ( !actor->lastEnemyPos.Get_lastEnemyPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 233, ASSERT_TYPE_ASSERT, "(actor->lastEnemyPos.Get_lastEnemyPos)", (const char *)&queryFormat, "actor->lastEnemyPos.Get_lastEnemyPos") )
          __debugbreak();
        ((void (__fastcall *)(vec4_t *, __int128 *))((unsigned __int64)actor->lastEnemyPos.Get_lastEnemyPos ^ (unsigned __int64)&actor->lastEnemyPos ^ s_aab_get_pointer_lastenemypos))(&actor->lastEnemyPos.lastEnemyPos, &v66);
        outPos = (vec2_t)v66;
        v43 = (__int64 *)&v66;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1150h+outPos]
          vmovss  xmm2, dword ptr [rsp+1150h+outPos+4]
        }
      }
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [rsp+1150h+out.___u0]
        vsubss  xmm0, xmm2, dword ptr [rsp+1150h+out.___u0+4]
        vmovss  dword ptr [rbp+1050h+element+4], xmm0
        vmovss  dword ptr [rbp+1050h+element], xmm1
      }
      memset(v43, 0, 0xCui64);
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
        LUI_COD_GetSwatchRGBColor(v37, "BattleRoyale.BRZombieColor", (vec3_t *)&rgbColor);
        iconState = actor->iconState;
        if ( iconState )
        {
          v50 = iconState->enemyCompassIconQuiet[0];
          if ( v50 )
            materialOverride = v50->textureTable->image;
        }
      }
      __asm { vmovss  dword ptr [rsp+1150h+fmt], xmm6 }
      LUIElement_CompassRenderEnemyIcon(v37, v38, luaVMa, (vec2_t *)&elementa, fmt, &rgbColor, &v65, &lastFireTimeAmount, (const float *)&localClientNuma, materialOverride);
      ++v35;
      --v34;
    }
    while ( v34 );
  }
  memset(&out, 0, sizeof(out));
  memset(&outPos, 0, sizeof(outPos));
  memset(&v62, 0, sizeof(v62));
  _R11 = &v76;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
LUIElement_CompassRenderObjectiveIcon
==============
*/
void LUIElement_CompassRenderObjectiveIcon(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM, vec2_t *toObjective, const vec4_t *objectiveColor, const vec4_t *bgColor, ObjectiveBackground objectiveBackground, const ObjectiveView *obj, const GfxImage *icon)
{
  char v25; 
  bool v26; 
  Material *objectiveBackgroundDiamond; 
  float fmt; 
  float fmta; 
  float outX; 
  float outXa; 
  float outY; 
  float outYa; 
  float outW; 
  float outWa; 
  float outH; 
  float outHa; 
  float v65; 
  float v66; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  GfxImage *material; 
  float outFOV; 
  float uMax; 
  float vMin; 
  char v83; 
  void *retaddr; 
  LocalClientNum_t localClientNuma; 
  int outFOVUsed; 

  _RAX = &retaddr;
  localClientNuma = localClientNum;
  v26 = element->customElementData == NULL;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  *(double *)&_XMM0 = vectoyaw(toObjective);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  outFOVUsed = 0;
  __asm
  {
    vmovss  [rsp+0F8h+outFOV], xmm7
    vmovaps xmm6, xmm0
  }
  LUI_Element_ComputeAppliedFOV(&localClientNuma, &outFOV, &outFOVUsed);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1E4h]; angle1
    vxorps  xmm8, xmm8, xmm8
    vmovaps xmm1, xmm6; angle2
    vcvtsi2ss xmm8, xmm8, eax
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vxorps  xmm1, xmm8, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm0, xmm1
  }
  if ( !v25 )
  {
    __asm { vcomiss xmm0, xmm8 }
    if ( v25 | v26 )
    {
      _RBX = DCONST_DVARFLT_navbarObjectiveIconSizeScalar;
      __asm { vmovaps [rsp+0F8h+var_58], xmm9 }
      if ( !DCONST_DVARFLT_navbarObjectiveIconSizeScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarObjectiveIconSizeScalar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, cs:__real@3f99999a
        vmovss  xmm1, cs:__real@3f4ccccd
        vmovss  xmm3, dword ptr [rbx+28h]; iconSizeScalar
        vmovss  [rsp+0F8h+var_A8], xmm0
        vmovss  [rsp+0F8h+var_B0], xmm1
      }
      LUIElement_CompassCalculateIconParameters(localClientNum, element, luaVM, *(double *)&_XMM3, toObjective, &outFOV, (float *)&outFOVUsed, &vMin, &uMax);
      __asm
      {
        vmovss  xmm8, [rsp+0F8h+uMax]
        vmovss  xmm9, [rsp+0F8h+vMin]
        vmovss  xmm6, cs:__real@3f800000
      }
      if ( objectiveBackground )
      {
        if ( objectiveBackground != EASE_OUT_QUAD )
        {
LABEL_14:
          __asm
          {
            vmovss  xmm3, [rsp+0F8h+outFOVUsed]; centerY
            vmovss  xmm2, [rsp+0F8h+outFOV]; centerX
          }
          _RAX = objectiveColor;
          __asm
          {
            vmovss  [rsp+0F8h+var_88], xmm6
            vmovss  xmm0, dword ptr [rax+8]
            vmovss  xmm1, dword ptr [rax+4]
            vmovss  [rsp+0F8h+var_90], xmm0
            vmovss  xmm0, dword ptr [rax]
            vmovss  [rsp+0F8h+var_98], xmm1
            vmovss  [rsp+0F8h+var_A0], xmm0
            vmovss  [rsp+0F8h+var_A8], xmm7
            vmovss  [rsp+0F8h+var_B0], xmm6
            vmovss  dword ptr [rsp+0F8h+outH], xmm6
            vmovss  dword ptr [rsp+0F8h+outW], xmm7
            vmovss  dword ptr [rsp+0F8h+outY], xmm7
            vmovss  dword ptr [rsp+0F8h+outX], xmm8
            vmovss  dword ptr [rsp+0F8h+fmt], xmm9
          }
          LUI_Render_DrawQuadRotated(localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outXa, outYa, outWa, outHa, v66, v69, v71, v73, v75, v77, icon, luaVM);
          __asm { vmovaps xmm9, [rsp+0F8h+var_58] }
          goto LABEL_15;
        }
        objectiveBackgroundDiamond = cgMedia.objectiveBackgroundDiamond;
      }
      else
      {
        objectiveBackgroundDiamond = cgMedia.objectiveBackgroundPentagon;
      }
      __asm
      {
        vmovss  xmm3, [rsp+0F8h+outFOVUsed]; centerY
        vmovss  xmm2, [rsp+0F8h+outFOV]; centerX
      }
      material = objectiveBackgroundDiamond->textureTable->image;
      _RAX = bgColor;
      __asm
      {
        vmovss  [rsp+0F8h+var_88], xmm6
        vmovss  xmm0, dword ptr [rax+8]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  [rsp+0F8h+var_90], xmm0
        vmovss  xmm0, dword ptr [rax]
        vmovss  [rsp+0F8h+var_98], xmm1
        vmovss  [rsp+0F8h+var_A0], xmm0
        vmovss  [rsp+0F8h+var_A8], xmm7
        vmovss  [rsp+0F8h+var_B0], xmm6
        vmovss  dword ptr [rsp+0F8h+outH], xmm6
        vmovss  dword ptr [rsp+0F8h+outW], xmm7
        vmovss  dword ptr [rsp+0F8h+outY], xmm7
        vmovss  dword ptr [rsp+0F8h+outX], xmm8
        vmovss  dword ptr [rsp+0F8h+fmt], xmm9
      }
      LUI_Render_DrawQuadRotated(localClientNum, element, *(float *)&_XMM2, *(float *)&_XMM3, fmt, outX, outY, outW, outH, v65, v68, v70, v72, v74, v76, material, luaVM);
      goto LABEL_14;
    }
  }
LABEL_15:
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  __int64 v14; 
  void (__fastcall *GetObjectiveCompassColor)(CgCompassSystemMP *, const vec3_t *, ObjectiveSide, ObjectiveSide, ObjectiveBackground, int, vec4_t *, vec4_t *, const vec4_t *); 
  unsigned __int8 v20; 
  const ObjectiveSettings *v21; 
  void (__fastcall *v28)(CgCompassSystemMP *, const vec3_t *, ObjectiveSide, ObjectiveSide, ObjectiveBackground, int, vec4_t *, vec4_t *, const vec4_t *); 
  int fmt; 
  int fmta; 
  GfxImage *outIcon; 
  SecureVec3 out; 
  lua_State *luaVMa; 
  __int64 v35; 
  vec2_t toObjective; 
  SecureVec3 out_origin; 
  vec4_t bgColor; 
  vec4_t objectiveColor; 
  __int128 v40; 

  v35 = -2i64;
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+57h+toObjective], xmm0
    vmovss  dword ptr [rbp+57h+toObjective+4], xmm0
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmmword ptr [rbp+57h+objectiveColor], xmm0
    vmovups xmm1, xmm0
    vmovups xmmword ptr [rbp+57h+bgColor], xmm0
  }
  CG_CalcPlayerPos(&out, localClientNum);
  obj = LocalClientGlobals->predictedPlayerState.objectives;
  v14 = 32i64;
  do
  {
    if ( CgCompassSystemMP::GetObjectiveShouldRender(CompassSystemMP, obj->state, (ObjectiveFlags)*(unsigned __int16 *)obj->flags, 1, obj->icon, (const GfxImage **)&outIcon) )
    {
      GetObjectiveViewOrigin(localClientNum, obj, &out_origin);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+out_origin.___u0]
        vsubss  xmm1, xmm0, dword ptr [rbp+57h+out.___u0]
        vmovss  dword ptr [rbp+57h+toObjective], xmm1
        vmovss  xmm2, dword ptr [rbp+57h+out_origin.___u0+4]
        vsubss  xmm0, xmm2, dword ptr [rbp+57h+out.___u0+4]
        vmovss  dword ptr [rbp+57h+toObjective+4], xmm0
      }
      GetObjectiveCompassColor = CompassSystemMP->GetObjectiveCompassColor;
      __asm
      {
        vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups [rbp+57h+var_50], xmm0
      }
      LOBYTE(fmt) = obj->background;
      GetObjectiveCompassColor(CompassSystemMP, (const vec3_t *)&out_origin, obj->side, obj->progressSide, (ObjectiveBackground)fmt, obj->entNum[0], &objectiveColor, &bgColor, (const vec4_t *)&v40);
      LUIElement_CompassRenderObjectiveIcon(localClientNum, element, luaVM, &toObjective, &objectiveColor, &bgColor, obj->background, obj, outIcon);
      memset(&out_origin, 0, sizeof(out_origin));
    }
    ++obj;
    --v14;
  }
  while ( v14 );
  v20 = ScriptableCl_ObjectiveCount(localClientNum);
  if ( v20 )
  {
    do
    {
      v21 = ScriptableCl_ObjectiveGet(localClientNum, v14, (vec3_t *)&out_origin);
      if ( v21 && CgCompassSystemMP::GetObjectiveShouldRender(CompassSystemMP, v21->state, (ObjectiveFlags)*(unsigned __int16 *)v21->flags, 1, v21->icon, (const GfxImage **)&outIcon) )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [rbx+4]
          vaddss  xmm1, xmm1, dword ptr [rbp+57h+out_origin.___u0+8]
          vmovss  dword ptr [rbp+57h+out_origin.___u0+8], xmm1
          vmovss  xmm2, dword ptr [rbp+57h+out_origin.___u0]
          vsubss  xmm0, xmm2, dword ptr [rbp+57h+out.___u0]
          vmovss  dword ptr [rbp+57h+toObjective], xmm0
          vmovss  xmm1, dword ptr [rbp+57h+out_origin.___u0+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+57h+out.___u0+4]
          vmovss  dword ptr [rbp+57h+toObjective+4], xmm2
        }
        v28 = CompassSystemMP->GetObjectiveCompassColor;
        __asm
        {
          vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
          vmovups [rbp+57h+var_50], xmm0
        }
        LOBYTE(fmta) = v21->background;
        v28(CompassSystemMP, (const vec3_t *)&out_origin, NEUTRAL, NEUTRAL, (ObjectiveBackground)fmta, 2047, &objectiveColor, &bgColor, (const vec4_t *)&v40);
        LUIElement_CompassRenderObjectiveIcon(localClientNum, element, luaVMa, &toObjective, &objectiveColor, &bgColor, v21->background, NULL, outIcon);
      }
      LOBYTE(v14) = v14 + 1;
    }
    while ( (unsigned __int8)v14 < v20 );
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
  LocalClientNum_t v10; 
  char v20; 
  const char *v24; 
  void *retaddr; 

  _RAX = &retaddr;
  v10 = *localClientNum;
  _RBP = outFOV;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RAX = CG_GetLocalClientGlobals(v10);
  __asm { vmovss  xmm0, dword ptr [rax+6930h]; X }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmulss  xmm2, xmm1, cs:__real@40000000
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm8, xmm8, xmm2, 1
  }
  _RAX = CG_GetLocalClientGlobals(*localClientNum);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm9, dword ptr [rax+738h]
  }
  if ( v20 )
  {
    _RSI = DCONST_DVARFLT_compass_stretch_min_fov_ADS;
    if ( !DCONST_DVARFLT_compass_stretch_min_fov_ADS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compass_stretch_min_fov_ADS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm7, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_compass_stretch_max_fov_ADS;
    if ( !DCONST_DVARFLT_compass_stretch_max_fov_ADS )
    {
      v24 = "compass_stretch_max_fov_ADS";
      goto LABEL_12;
    }
  }
  else
  {
    _RSI = DCONST_DVARFLT_compass_stretch_min_fov_Hip;
    if ( !DCONST_DVARFLT_compass_stretch_min_fov_Hip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compass_stretch_min_fov_Hip") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm7, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_compass_stretch_max_fov_Hip;
    if ( !DCONST_DVARFLT_compass_stretch_max_fov_Hip )
    {
      v24 = "compass_stretch_max_fov_Hip";
LABEL_12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v24) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm6, dword ptr [rsi+28h]
    vmovaps xmm2, xmm6; max
    vmovaps xmm1, xmm7; min
    vmovaps xmm0, xmm8; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vminss  xmm4, xmm0, xmm8
    vmaxss  xmm3, xmm0, xmm8
    vdivss  xmm5, xmm4, xmm3
    vmovss  xmm4, cs:__real@3f800000
    vsubss  xmm3, xmm4, xmm5
    vmaxss  xmm3, xmm3, xmm9
    vminss  xmm5, xmm3, xmm4
    vsubss  xmm4, xmm4, xmm5
    vmulss  xmm3, xmm4, xmm8
    vmulss  xmm0, xmm5, xmm0
    vaddss  xmm0, xmm3, xmm0; val
    vmovaps xmm2, xmm6; max
    vmovaps xmm1, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm6, [rsp+88h+var_18]
    vcvttss2si eax, xmm0
    vmovss  dword ptr [rbp+0], xmm0
  }
  *outFOVUsed = _EAX;
  if ( (_EAX & 1) != 0 )
    *outFOVUsed = _EAX + 1;
}

/*
==============
LUI_Element_RenderCompass
==============
*/
void LUI_Element_RenderCompass(LUIElement *root, const LocalClientNum_t *localClientNum, const CgCompassSystem *compassSystem, LUINavBar *navBarData, LUIElement *element, lua_State *luaVM)
{
  const LocalClientNum_t *v21; 
  LocalClientNum_t v40; 
  int v51; 
  const dvar_t *v54; 
  const dvar_t *v60; 
  int v65; 
  int v68; 
  const dvar_t *v69; 
  const dvar_t *v106; 
  int v146; 
  const char *v147; 
  const char *v148; 
  const GfxImage *material; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float height; 
  float heighta; 
  float heightb; 
  float uMin; 
  float uMina; 
  float uMinb; 
  float offset; 
  float offseta; 
  float offsetb; 
  float applyParallax; 
  float applyParallaxa; 
  float halfElementHeight; 
  float halfElementHeighta; 
  float halfElementHeightb; 
  float roota; 
  float rootb; 
  float rootc; 
  float localClientNuma; 
  float localClientNumb; 
  float localClientNumc; 
  float navBarDataa; 
  float navBarDatab; 
  float navBarDatac; 
  float viewportSize; 
  float viewportSizea; 
  float image; 
  float imagea; 
  int outFOVUsed; 
  float v206; 
  float outFOV; 
  float v208; 
  float unitScale; 
  int v211; 
  float v212; 
  float sizeScalar; 
  float tickHeight; 
  float roundedCompassHeightOffset[6]; 
  int tickRotationValue; 
  lua_State *v217; 
  LocalClientNum_t *v218; 
  LUIElement *v219; 
  vec4_t tickColor; 
  vec2_t outSize; 
  vec4_t color; 
  char v223; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R13 = element;
  _R15 = navBarData;
  __asm { vmovss  xmm7, cs:__real@3f000000 }
  v21 = localClientNum;
  v218 = (LocalClientNum_t *)localClientNum;
  __asm
  {
    vmovss  xmm2, dword ptr [r13+0D0h]
    vmovss  xmm0, dword ptr [r13+0D8h]
    vmovss  xmm1, dword ptr [r13+0CCh]
    vsubss  xmm9, xmm0, xmm2
    vmovss  xmm0, dword ptr [r13+0D4h]
    vsubss  xmm0, xmm0, xmm1
    vmulss  xmm10, xmm0, xmm7
    vmovss  [rbp+0E0h+var_15C], xmm0
    vmulss  xmm0, xmm9, xmm7
    vmovss  [rbp+0E0h+var_154], xmm0
    vaddss  xmm13, xmm0, xmm2
  }
  v219 = root;
  v217 = luaVM;
  __asm { vaddss  xmm12, xmm1, xmm10 }
  _EAX = SEH_GetCurrentLanguage();
  __asm
  {
    vmovss  xmm2, cs:__real@3fc00000
    vmovss  xmm14, cs:__real@3f800000
  }
  _ECX = 17;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm6, xmm14, xmm2, xmm3
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  v40 = *v21;
  __asm
  {
    vmulss  xmm2, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm2
    vmovss  [rbp+0E0h+var_128], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm2
    vmovss  [rbp+0E0h+tickHeight], xmm0
    vmulss  xmm0, xmm0, xmm7
    vmovss  [rbp+0E0h+var_124], xmm0
    vmovss  [rbp+0E0h+unitScale], xmm2
    vmovss  [rbp+0E0h+var_148], xmm6
  }
  LUI_Render_GetViewportSize(v40, &outSize);
  _RBX = DCONST_DVARFLT_compassCenterMaskScalar;
  if ( !DCONST_DVARFLT_compassCenterMaskScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassCenterMaskScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm11, xmm0, dword ptr [r15+0Ch]
  }
  CgCompassSystem::GetMainHudColor((CgCompassSystem *)compassSystem, &color);
  v51 = 0;
  __asm { vxorps  xmm15, xmm15, xmm15 }
  outFOVUsed = 0;
  __asm { vmovss  [rbp+0E0h+outFOV], xmm15 }
  LUI_Element_ComputeAppliedFOV(v21, &outFOV, &outFOVUsed);
  *(float *)&_XMM0 = GetCurrentAngle(v21, compassSystem);
  v54 = DCONST_DVARBOOL_compassDelayEnabled;
  __asm
  {
    vmovss  xmm6, dword ptr [r15+8]
    vmovss  [rbp+0E0h+var_14C], xmm0
    vmovaps xmm8, xmm0
  }
  if ( !DCONST_DVARBOOL_compassDelayEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassDelayEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  __asm { vmovss  xmm7, cs:__real@43b40000 }
  if ( v54->current.enabled )
  {
    __asm
    {
      vsubss  xmm0, xmm8, dword ptr [r15+8]
      vcomiss xmm0, cs:__real@43340000
    }
    if ( v54->current.enabled )
      __asm { vaddss  xmm6, xmm6, xmm7 }
    else
      __asm { vcomiss xmm0, cs:__real@c3340000 }
    v60 = DCONST_DVARFLT_compassDelayEase;
    if ( !DCONST_DVARFLT_compassDelayEase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassDelayEase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v60);
    __asm
    {
      vsubss  xmm0, xmm14, dword ptr [rbx+28h]
      vmulss  xmm1, xmm8, dword ptr [rbx+28h]
      vmulss  xmm2, xmm0, xmm6
      vaddss  xmm4, xmm2, xmm1
      vsubss  xmm3, xmm4, xmm7
      vcmpltss xmm0, xmm7, xmm4
      vblendvps xmm8, xmm4, xmm3, xmm0
      vmovss  [rbp+0E0h+var_14C], xmm8
      vmovss  [rbp+0E0h+var_148], xmm8
    }
  }
  v65 = outFOVUsed;
  __asm
  {
    vsubss  xmm6, xmm8, xmm7
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  v68 = outFOVUsed / 2;
  __asm { vmovss  dword ptr [r15+10h], xmm8 }
  v69 = DCONST_DVARBOOL_navbarUseRoundedCompass;
  v212 = *(float *)&v68;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm8, 1
    vsubss  xmm7, xmm1, xmm7
    vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm8, xmm8, xmm8
  }
  if ( !DCONST_DVARBOOL_navbarUseRoundedCompass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarUseRoundedCompass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v69);
  if ( v69->current.enabled )
  {
    _RBX = DCONST_DVARFLT_compassShrinkFactor;
    if ( !DCONST_DVARFLT_compassShrinkFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassShrinkFactor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovss  xmm2, [rbp+0E0h+var_15C]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r12d
    vdivss  xmm0, xmm2, xmm0
    vsubss  xmm1, xmm7, xmm6
    vmovss  [rbp+0E0h+var_134], xmm1
    vmulss  xmm1, xmm1, xmm0
    vmovss  [rbp+0E0h+var_12C], xmm0
    vmulss  xmm0, xmm0, xmm8
    vmovss  [rbp+0E0h+var_130], xmm0
    vmulss  xmm0, xmm0, cs:__real@40000000
    vmovss  [rbp+0E0h+outFOVUsed], xmm1
    vsubss  xmm1, xmm2, xmm0
    vmovss  dword ptr [r15+0Ch], xmm1
  }
  _RBX = DCONST_DVARFLT_compassBackgroundWidthScalar;
  if ( !DCONST_DVARFLT_compassBackgroundWidthScalar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBackgroundWidthScalar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARVEC4_compassBackgroundColor;
  __asm { vmulss  xmm8, xmm0, dword ptr [r15+0Ch] }
  if ( !DCONST_DVARVEC4_compassBackgroundColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassBackgroundColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmulss  xmm0, xmm9, cs:__real@3f400000
    vmovss  xmm1, dword ptr [rbx+34h]
    vmovss  xmm4, dword ptr [rbx+30h]
    vmovss  xmm5, dword ptr [rbx+2Ch]
    vmovss  xmm6, dword ptr [rbx+28h]
    vaddss  xmm3, xmm0, dword ptr [r13+0D0h]; centerY
    vmovss  xmm0, [rbp+0E0h+var_154]
    vaddss  xmm2, xmm10, dword ptr [r13+0CCh]; centerX
    vmovss  dword ptr [rsp+1F0h+image], xmm1
    vmovss  dword ptr [rsp+1F0h+viewportSize], xmm4
    vmovss  dword ptr [rsp+1F0h+navBarData], xmm5
    vmovss  dword ptr [rsp+1F0h+localClientNum], xmm6
    vmovss  dword ptr [rsp+1F0h+root], xmm15
    vmovss  dword ptr [rsp+1F0h+halfElementHeight], xmm14
    vmovss  dword ptr [rsp+1F0h+applyParallax], xmm14
    vmovss  dword ptr [rsp+1F0h+offset], xmm15
    vmovss  [rsp+1F0h+uMin], xmm15
    vmovss  [rsp+1F0h+height], xmm0
    vmovss  dword ptr [rsp+1F0h+fmt], xmm8
  }
  LUI_Render_DrawQuadRotated(*v21, element, *(float *)&_XMM2, *(float *)&_XMM3, fmt, height, uMin, offset, applyParallax, halfElementHeight, roota, localClientNuma, navBarDataa, viewportSize, image, _R15->compassBackground, v217);
  __asm
  {
    vmovss  dword ptr [rsp+1F0h+navBarData], xmm14
    vmovss  dword ptr [rsp+1F0h+localClientNum], xmm14
    vmovss  dword ptr [rsp+1F0h+root], xmm15
    vmovss  dword ptr [rsp+1F0h+halfElementHeight], xmm15
    vmovss  dword ptr [rsp+1F0h+offset], xmm15
    vmovss  [rsp+1F0h+uMin], xmm14
    vmovss  [rsp+1F0h+height], xmm15
    vmovaps xmm3, xmm11; maskWidth
    vmovaps xmm2, xmm13; maskCenterY
    vmovaps xmm1, xmm12; maskCenterX
    vmovss  dword ptr [rsp+1F0h+fmt], xmm9
  }
  LUI_Render_PushMask(*v21, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, heighta, uMina, offseta, 0, halfElementHeighta, rootb, localClientNumb, navBarDatab, &outSize, _R15->compassCenterMask);
  if ( v65 > 0 )
  {
    _ESI = v212;
    __asm
    {
      vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm11, [rbp+0E0h+unitScale]
      vmovss  xmm13, [rbp+0E0h+var_15C]
      vcvttss2si edi, xmm7
    }
    v211 = _EDI;
    outFOV = v212;
    while ( 1 )
    {
      v106 = DCONST_DVARBOOL_navbarUseRoundedCompass;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, r14d
        vcvtsi2ss xmm0, xmm0, r12d
        vdivss  xmm2, xmm1, xmm0
        vmaxss  xmm1, xmm2, xmm15
        vminss  xmm0, xmm1, xmm14
        vmulss  xmm10, xmm0, xmm13
        vmovss  [rbp+0E0h+var_15C], xmm10
        vmovss  [rbp+0E0h+sizeScalar], xmm14
        vmovss  [rbp+0E0h+roundedCompassHeightOffset], xmm15
        vmovaps xmm9, xmm14
      }
      if ( !DCONST_DVARBOOL_navbarUseRoundedCompass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "navbarUseRoundedCompass") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v106);
      if ( v106->current.enabled )
      {
        __asm
        {
          vmovd   xmm0, [rbp+0E0h+var_144]
          vcvtdq2ps xmm0, xmm0
          vdivss  xmm6, xmm14, xmm0
        }
        _EAX = abs32(SLODWORD(_ESI));
        __asm
        {
          vmovd   xmm0, eax
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm8, xmm0, xmm6
          vmulss  xmm1, xmm8, xmm8
          vmulss  xmm7, xmm1, xmm8
          vmovss  xmm1, cs:__real@3f4ccccd; min
          vsubss  xmm0, xmm14, xmm7; val
          vmovaps xmm2, xmm14; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vsubss  xmm1, xmm14, xmm0
          vmulss  xmm2, xmm1, xmm6
          vmulss  xmm3, xmm2, [rbp+0E0h+var_134]
          vxorps  xmm2, xmm3, xmm12
          vmovd   xmm4, esi
          vcvtdq2ps xmm4, xmm4
          vcmpless xmm1, xmm15, xmm4
          vblendvps xmm1, xmm2, xmm3, xmm1
          vmulss  xmm2, xmm7, [rbp+0E0h+var_130]
          vaddss  xmm9, xmm0, xmm1
          vxorps  xmm1, xmm2, xmm12
          vcmpless xmm0, xmm15, xmm4
          vblendvps xmm0, xmm1, xmm2, xmm0
          vmulss  xmm1, xmm9, [rbp+0E0h+var_12C]
          vmulss  xmm12, xmm1, [rbp+0E0h+var_134]
          vaddss  xmm10, xmm10, xmm0
          vmulss  xmm0, xmm8, xmm11
          vmulss  xmm1, xmm0, cs:__real@40a00000
          vmovss  [rbp+0E0h+roundedCompassHeightOffset], xmm1
          vmovss  [rbp+0E0h+sizeScalar], xmm9
          vmovss  [rbp+0E0h+var_15C], xmm10
          vmovss  [rbp+0E0h+outFOVUsed], xmm12
        }
      }
      else
      {
        __asm { vmovss  xmm12, [rbp+0E0h+outFOVUsed] }
      }
      __asm
      {
        vmovsd  xmm1, cs:__real@4076800000000000; Y
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, ecx; X
      }
      *(double *)&_XMM0 = fmod_0(*(double *)&_XMM0, *(double *)&_XMM1);
      __asm { vcvttsd2si eax, xmm0 }
      v146 = _EAX + 360;
      if ( _EAX >= 0 )
        v146 = _EAX;
      tickRotationValue = v146;
      if ( v146 > 180 )
      {
        switch ( v146 )
        {
          case 225:
            v147 = "HUD/SOUTH_WEST";
            goto LABEL_58;
          case 270:
            v147 = "HUD/WEST";
            goto LABEL_58;
          case 315:
            v147 = "HUD/NORTH_WEST";
            goto LABEL_58;
          case 360:
LABEL_48:
            v147 = "HUD/NORTH";
            goto LABEL_58;
        }
      }
      else
      {
        switch ( v146 )
        {
          case 180:
            v147 = "HUD/SOUTH";
            goto LABEL_58;
          case 0:
            goto LABEL_48;
          case 45:
            v147 = "HUD/NORTH_EAST";
            goto LABEL_58;
          case 90:
            v147 = "HUD/EAST";
            goto LABEL_58;
          case 135:
            v147 = "HUD/SOUTH_EAST";
LABEL_58:
            v148 = SEH_LocalizeTextMessage(v147, "ui string", LOCMSG_SAFE);
            goto LABEL_59;
        }
      }
      v148 = (char *)&queryFormat.fmt + 3;
LABEL_59:
      if ( v146 == 5 * (v146 / 5) )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+0E0h+color]
          vmovss  xmm7, dword ptr [rbp+0E0h+color+4]
          vmovss  xmm8, dword ptr [rbp+0E0h+color+8]
          vmovss  dword ptr [rbp+0E0h+tickColor], xmm6
          vmovss  dword ptr [rbp+0E0h+tickColor+4], xmm7
          vmovss  dword ptr [rbp+0E0h+tickColor+8], xmm8
          vmovss  dword ptr [rbp+0E0h+tickColor+0Ch], xmm14
        }
        if ( v146 == 15 * (v146 / 15) )
        {
          material = _R15->compassTickLarge;
          if ( !v146 || v146 == 90 * (v146 / 90) )
          {
            _RBX = DCONST_DVARVEC4_compassMainHeadingColor;
            if ( !DCONST_DVARVEC4_compassMainHeadingColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassMainHeadingColor") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RBX);
            __asm
            {
              vmovss  xmm6, dword ptr [rbx+28h]
              vmovss  dword ptr [rbp+0E0h+tickColor], xmm6
              vmovss  xmm7, dword ptr [rbx+2Ch]
              vmovss  dword ptr [rbp+0E0h+tickColor+4], xmm7
              vmovss  xmm8, dword ptr [rbx+30h]
              vmovss  dword ptr [rbp+0E0h+tickColor+8], xmm8
              vmovss  xmm0, dword ptr [rbx+34h]
              vmovss  dword ptr [rbp+0E0h+tickColor+0Ch], xmm0
            }
          }
          __asm
          {
            vmovss  xmm0, [rbp+0E0h+var_154]
            vaddss  xmm1, xmm0, dword ptr [r13+0D0h]
            vmulss  xmm0, xmm9, [rbp+0E0h+var_124]
            vmulss  xmm4, xmm9, [rbp+0E0h+tickHeight]
            vmulss  xmm5, xmm9, [rbp+0E0h+var_128]
            vmovss  dword ptr [rsp+1F0h+image], xmm14
            vmovss  dword ptr [rsp+1F0h+viewportSize], xmm8
            vmovss  dword ptr [rsp+1F0h+navBarData], xmm7
            vmovss  dword ptr [rsp+1F0h+localClientNum], xmm6
            vmovss  dword ptr [rsp+1F0h+root], xmm15
            vmovss  dword ptr [rsp+1F0h+halfElementHeight], xmm14
            vmovss  dword ptr [rsp+1F0h+applyParallax], xmm14
            vmovss  dword ptr [rsp+1F0h+offset], xmm15
            vaddss  xmm3, xmm1, xmm0; centerY
            vaddss  xmm1, xmm10, dword ptr [r13+0CCh]
            vmovss  [rsp+1F0h+uMin], xmm15
            vmovss  [rsp+1F0h+height], xmm4
            vaddss  xmm2, xmm1, xmm12; centerX
            vmovss  dword ptr [rsp+1F0h+fmt], xmm5
          }
          LUI_Render_DrawQuadRotated(*v218, element, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, heightb, uMinb, offsetb, applyParallaxa, halfElementHeightb, rootc, localClientNumc, navBarDatac, viewportSizea, imagea, material, v217);
          _ESI = outFOV;
        }
        LUI_Element_RenderCompassText(v148, &tickRotationValue, roundedCompassHeightOffset, &tickHeight, &unitScale, &sizeScalar, &tickColor, &v206, (const float *)&outFOVUsed, &v208, v219, v218, _R15, element, v217);
        __asm { vmovss  xmm11, [rbp+0E0h+unitScale] }
      }
      __asm { vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000 }
      --LODWORD(_ESI);
      ++v51;
      outFOV = _ESI;
      if ( v51 >= v65 )
      {
        v21 = v218;
        break;
      }
    }
  }
  LUI_Render_PopMask(*v21);
  __asm
  {
    vmovss  xmm0, [rbp+0E0h+var_14C]
    vmovss  dword ptr [r15+8], xmm0
  }
  _R11 = &v223;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
LUI_Element_RenderCompassText
==============
*/
void LUI_Element_RenderCompassText(const char *heading, const int *tickRotationValue, const float *roundedCompassHeightOffset, const float *tickHeight, const float *unitScale, const float *sizeScalar, const vec4_t *tickColor, const float *offset, const float *subPixelOffset, const float *halfElementHeight, const LUIElement *root, const LocalClientNum_t *localClientNum, LUINavBar *navBarData, LUIElement *element, lua_State *luaVM)
{
  int angleRenderStepSize; 
  int ControllerFromClient; 
  int UseNumbersForCompassCardinalDirText; 
  int v33; 
  GfxFont *font; 
  int v40; 
  int fontSize; 
  float v79; 
  vec4_t quadVerts[4]; 
  char dest[64]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _RBP = tickHeight;
  _R13 = unitScale;
  _R12 = element;
  Com_sprintf(dest, 0x40ui64, "%i", *(unsigned int *)tickRotationValue);
  if ( SEH_GetCurrentLanguage() == 17 )
  {
    __asm { vmovss  xmm7, cs:__real@3f4ccccd }
  }
  else
  {
    _RBX = DCONST_DVARFLT_compassTextVerticalOffset;
    if ( !DCONST_DVARFLT_compassTextVerticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTextVerticalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  angleRenderStepSize = navBarData->angleRenderStepSize;
  __asm { vmovss  xmm6, dword ptr [rbp+0] }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(*localClientNum);
  UseNumbersForCompassCardinalDirText = GamerProfile_GetUseNumbersForCompassCardinalDirText(ControllerFromClient);
  v33 = *tickRotationValue;
  if ( !(*tickRotationValue % angleRenderStepSize) )
  {
    __asm
    {
      vmovaps [rsp+1D8h+var_78], xmm8
      vmovaps [rsp+1D8h+var_88], xmm9
      vmovaps [rsp+1D8h+var_98], xmm10
    }
    if ( UseNumbersForCompassCardinalDirText || !*heading )
    {
      __asm { vmulss  xmm6, xmm6, cs:__real@3e800000 }
      heading = dest;
      if ( v33 == 15 * (v33 / 15) )
        font = navBarData->largeAngleFont;
      else
        font = navBarData->smallAngleFont;
    }
    else if ( !v33 || v33 == 90 * (v33 / 90) )
    {
      __asm { vmulss  xmm6, xmm6, cs:__real@3e800000 }
      font = navBarData->mainHeadingFont;
    }
    else
    {
      __asm { vmulss  xmm6, xmm6, cs:__real@3e800000 }
      font = navBarData->subHeadingFont;
    }
    R_TextHeight(font);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm6, xmm0
      vsubss  xmm6, xmm7, xmm1
    }
    v40 = R_TextHeight(font);
    R_TextWidth(heading, 0, font, v40);
    __asm
    {
      vmovss  xmm8, dword ptr [r13+0]
      vmovss  xmm0, dword ptr [r12+0D0h]
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2ss xmm4, xmm4, eax
      vxorps  xmm10, xmm10, xmm10
      vcvtsi2ss xmm10, xmm10, ebx
      vmulss  xmm2, xmm10, xmm6
      vaddss  xmm1, xmm0, dword ptr [rax]
      vaddss  xmm3, xmm1, dword ptr [rbp+0]
    }
    _RAX = roundedCompassHeightOffset;
    __asm
    {
      vmulss  xmm0, xmm2, xmm8
      vsubss  xmm9, xmm3, xmm0
      vmovss  xmm0, dword ptr [r12+0CCh]
      vmovss  xmm7, dword ptr [rax]
    }
    _RAX = sizeScalar;
    __asm
    {
      vmulss  xmm2, xmm8, xmm4
      vmovss  xmm6, dword ptr [rax]
      vaddss  xmm1, xmm0, dword ptr [rax]
      vmulss  xmm0, xmm2, cs:__real@3f000000
      vmulss  xmm4, xmm0, xmm6
      vsubss  xmm0, xmm9, xmm7
      vaddss  xmm5, xmm1, dword ptr [rax]
      vmulss  xmm1, xmm8, xmm10
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm0; bottom
      vmulss  xmm1, xmm6, xmm7
      vaddss  xmm2, xmm4, xmm5; right
      vsubss  xmm1, xmm9, xmm1; top
      vsubss  xmm0, xmm5, xmm4; left
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmulss  xmm0, xmm10, dword ptr [r13+0]
      vcvttss2si r9d, xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+1D8h+var_190], xmm0
    }
    LUI_Render_DrawText(*localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, tickColor, font, heading, 0, 0, v79, fontSize, NULL, &navBarData->fontGlowStyle);
    __asm
    {
      vmovaps xmm10, [rsp+1D8h+var_98]
      vmovaps xmm9, [rsp+1D8h+var_88]
      vmovaps xmm8, [rsp+1D8h+var_78]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+1D8h+var_58]
    vmovaps xmm7, [rsp+1D8h+var_68]
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
  v3->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_CompassRenderItems;
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
  __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
  _RDI = outGlowStyle;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+0C8h+var_88+10h], ymm0
  }
  j_lua_getfield(luaVM, 2, shadowMinDistance);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rsp+0C8h+var_88], xmm1
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rsp+0C8h+var_88], xmm6 }
  }
  j_lua_getfield(luaVM, 2, shadowMaxDistance);
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rsp+0C8h+var_88+4], xmm1
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rsp+0C8h+var_88+4], xmm6 }
  }
  j_lua_getfield(luaVM, 2, shadowUOffset);
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rsp+0C8h+var_88+8], xmm1
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rsp+0C8h+var_88+8], xmm6 }
  }
  j_lua_getfield(luaVM, 2, shadowVOffset);
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, -1);
    __asm
    {
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rsp+0C8h+var_88+0Ch], xmm1
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rsp+0C8h+var_88+0Ch], xmm6 }
  }
  _RBX = DCONST_DVARVEC4_compassTextOutlineColor;
  if ( !DCONST_DVARVEC4_compassTextOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassTextOutlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+28h]
    vmovups xmm2, xmm0
    vmovups xmmword ptr [rsp+68h], xmm0
    vmovups xmm1, xmmword ptr [rsp+60h]
    vmovups [rsp+0C8h+var_50], xmm0
    vmovups ymm0, [rsp+0C8h+var_88]
    vmovups ymmword ptr [rdi], ymm0
    vmovups xmmword ptr [rdi+20h], xmm1
    vmovhpd qword ptr [rdi+30h], xmm2
    vmovaps xmm6, [rsp+0C8h+var_38]
  }
}

