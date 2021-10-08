/*
==============
LUIElement_RadarTargeting_Draw
==============
*/
void LUIElement_RadarTargeting_Draw(const LocalClientNum_t localClientNum, RadarTargetingOptions *options, LUIElement *element, LUIElement *root, float red, float green, float blue, float alpha, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  int clientNum; 
  targetInfo_t *targets; 
  __int64 v51; 
  const GfxImage *maskMaterial; 
  const GfxImage *maskResetMaterial; 
  int *p_minSize; 
  int v68; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  char v121; 
  char v126; 
  int v190; 
  Material *v199; 
  int v209; 
  Material *v212; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float height; 
  float heighta; 
  float heightb; 
  float heightc; 
  float heightd; 
  float heighte; 
  float material; 
  float materiala; 
  float materialb; 
  float materialc; 
  float v246; 
  float v247; 
  float v248; 
  float v249; 
  float v250; 
  float v251; 
  float v252; 
  float elementCenter; 
  float elementCentera; 
  float elementCenterb; 
  float v256; 
  float v257; 
  float v258; 
  float v259; 
  float targetScreenOffsets; 
  float targetScreenOffsetsa; 
  float targetScreenOffsetsb; 
  float targetScreenYaws; 
  float targetScreenYawsa; 
  float targetScreenYawsb; 
  float v266; 
  float v267; 
  float v268; 
  float v269; 
  float v270; 
  float v271; 
  vec2_t v279; 
  int v280; 
  tmat33_t<vec3_t> axis; 
  LUIElementAxisPosition v284; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t v287; 
  vec2_t v288[64]; 
  float v289[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  _R15 = element;
  _R13 = options;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 221, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 222, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( !root && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 223, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 224, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 225, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !LUIElement_IsImageLike(_R15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 228, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm13, [rbp+420h+alpha]
    vmovss  xmm15, [rbp+420h+green]
    vmovss  xmm8, [rbp+420h+red]
    vmovss  xmm14, [rbp+420h+blue]
    vmovss  [rsp+530h+height], xmm13
    vmovaps xmm3, xmm15; green
    vmovaps xmm2, xmm8; red
    vmovss  dword ptr [rsp+530h+fmt], xmm14
  }
  LUI_Render_ImageFill(localClientNum, _R15, *(float *)&_XMM2, *(float *)&_XMM3, fmt, height, _R15->imageData.image, luaVM);
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm
  {
    vmovups xmm1, xmmword ptr [r15]
    vmovsd  xmm2, qword ptr [r15+10h]
    vmovups [rbp+420h+var_430], xmm1
    vmovsd  [rbp+420h+var_420], xmm2
    vmovaps xmm6, xmm0
  }
  *(float *)&_XMM0 = LUI_Measure(&v284);
  __asm
  {
    vmovups xmm1, xmmword ptr [r15+18h]
    vmovsd  xmm2, qword ptr [r15+28h]
    vmovups [rbp+420h+var_430], xmm1
    vmovsd  [rbp+420h+var_420], xmm2
    vmulss  xmm7, xmm0, xmm6
  }
  *(float *)&_XMM0 = LUI_Measure(&v284);
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vmovss  xmm3, dword ptr [r15+0D0h]
  }
  clientNum = LocalClientGlobals->clientNum;
  __asm
  {
    vmulss  xmm9, xmm0, xmm6
    vaddss  xmm0, xmm2, dword ptr [r13+0]
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm11, xmm1, dword ptr [r15+0CCh]
    vaddss  xmm1, xmm2, dword ptr [r13+4]
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm6, xmm2, xmm3
    vsubss  xmm0, xmm6, xmm3
    vmovss  [rbp+420h+var_4A0], xmm0
    vmovss  [rbp+420h+var_49C], xmm9
    vmovss  dword ptr [rbp+420h+var_478], xmm11
    vmovss  dword ptr [rbp+420h+var_478+4], xmm6
  }
  _RBX = CG_GetEntity(localClientNum, clientNum);
  targets = LocalClientGlobals->targets;
  v51 = 0i64;
  while ( targets->entNum == 2047 || (targets->flags & 0x2000) == 0 )
  {
    ++v51;
    ++targets;
    if ( v51 >= 64 )
      goto LABEL_25;
  }
  _RBX = CG_GetEntity(localClientNum, targets->entNum);
LABEL_25:
  AnglesToAxis(&angles, &axis);
  CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+48h] }
  maskMaterial = _R13->maskMaterial;
  __asm
  {
    vmovaps [rsp+530h+var_88+8], xmm10
    vmovss  dword ptr [rbp+420h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vmovss  dword ptr [rbp+420h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  dword ptr [rbp+420h+angles+8], xmm0
    vxorps  xmm10, xmm10, xmm10
  }
  if ( maskMaterial )
  {
    maskResetMaterial = _R13->maskResetMaterial;
    if ( maskResetMaterial )
    {
      __asm
      {
        vmulss  xmm1, xmm9, cs:__real@40000000
        vmovss  xmm9, cs:__real@3f800000
        vmulss  xmm2, xmm7, cs:__real@40000000
        vmovss  xmm0, dword ptr [r15+30h]
        vmovss  dword ptr [rsp+530h+var_4C0], xmm9
        vmovss  [rsp+530h+var_4C8], xmm10
        vmovss  dword ptr [rsp+530h+targetScreenYaws], xmm10
        vmovss  dword ptr [rsp+530h+targetScreenOffsets], xmm10
        vmovss  dword ptr [rsp+530h+var_4E0], xmm0
        vmovss  dword ptr [rsp+530h+elementCenter], xmm9
        vmovss  dword ptr [rsp+530h+var_4F0], xmm9
        vmovss  dword ptr [rsp+530h+var_4F8], xmm10
        vmovss  dword ptr [rsp+530h+material], xmm10
        vmovss  [rsp+530h+height], xmm1
        vmovss  dword ptr [rsp+530h+fmt], xmm2
        vmovaps xmm2, xmm11; centerX
        vmovaps xmm3, xmm6; centerY
      }
      LUI_Render_DrawQuadRotated(localClientNum, _R15, *(float *)&_XMM2, *(float *)&_XMM3, fmta, heighta, material, v246, v250, elementCenter, v256, targetScreenOffsets, targetScreenYaws, v266, v269, maskResetMaterial, luaVM);
      maskMaterial = _R13->maskMaterial;
    }
    else
    {
      __asm { vmovss  xmm9, cs:__real@3f800000 }
    }
    __asm
    {
      vmovss  [rsp+530h+height], xmm13
      vmovaps xmm3, xmm15; green
      vmovaps xmm2, xmm8; red
      vmovss  dword ptr [rsp+530h+fmt], xmm14
    }
    LUI_Render_ImageFill(localClientNum, _R15, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, heightb, maskMaterial, luaVM);
  }
  else
  {
    __asm { vmovss  xmm9, cs:__real@3f800000 }
  }
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovsd  xmm6, cs:__real@3f30000000000000
  }
  _R14 = 0i64;
  p_minSize = &LocalClientGlobals->targets[0].minSize;
  do
  {
    v68 = *(p_minSize - 7);
    v288[_R14] = 0i64;
    if ( v68 != 2047 && (p_minSize[16] & 0x1000) != 0 && *(p_minSize - 3) >= 0 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rbx+4]
        vmovss  [rbp+420h+var_48C], xmm0
        vmovss  [rbp+420h+var_490], xmm1
        vmulss  xmm1, xmm1, xmm1
        vmulss  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm1, xmm0
        vdivss  xmm0, xmm9, [rbp+420h+var_49C]
        vsqrtss xmm2, xmm1, xmm1
        vmulss  xmm11, xmm2, xmm0
      }
      _RDI = CG_GetPose(localClientNum, v68);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !_RDI->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(_RDI->origin.Get_origin, _RDI);
      FunctionPointer_origin(&_RDI->origin.origin.origin, (vec3_t *)&v280);
      if ( _RDI->isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, [rbp+420h+var_470]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vmovd   xmm0, [rbp+420h+var_46C]
          vcvtdq2pd xmm0, xmm0
          vcvtsd2ss xmm2, xmm1, xmm1
          vmulsd  xmm1, xmm0, xmm6
          vmovd   xmm0, [rbp+420h+var_468]
          vcvtsd2ss xmm3, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm4, xmm1, xmm1
          vmovss  [rbp+420h+var_468], xmm4
          vmovss  [rbp+420h+var_470], xmm2
          vmovss  [rbp+420h+var_46C], xmm3
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm4, [rbp+420h+var_468]
          vmovss  xmm3, [rbp+420h+var_46C]
          vmovss  xmm2, [rbp+420h+var_470]
        }
      }
      __asm
      {
        vsubss  xmm6, xmm2, dword ptr [rbp+420h+outOrigin]
        vsubss  xmm7, xmm4, dword ptr [rbp+420h+outOrigin+8]
        vmovss  xmm0, dword ptr [rdi+48h]
        vsubss  xmm5, xmm3, dword ptr [rbp+420h+outOrigin+4]
        vmulss  xmm2, xmm6, dword ptr [rbp+420h+axis+0Ch]
        vmulss  xmm3, xmm5, dword ptr [rbp+420h+axis+10h]
        vmovss  dword ptr [rbp+420h+var_3F0], xmm0
        vmovss  xmm1, dword ptr [rdi+4Ch]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm3, xmm5, dword ptr [rbp+420h+axis+4]
        vmovss  dword ptr [rbp+420h+var_3F0+4], xmm1
        vmulss  xmm1, xmm7, dword ptr [rbp+420h+axis+14h]
        vmovss  xmm0, dword ptr [rdi+50h]
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm1, xmm7, dword ptr [rbp+420h+axis+8]
        vmovss  dword ptr [rbp+420h+var_3F0+8], xmm0
        vxorps  xmm8, xmm2, xmm12
        vmulss  xmm2, xmm6, dword ptr [rbp+420h+axis]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vxorps  xmm7, xmm2, xmm12
        vmulss  xmm0, xmm8, xmm8
        vmulss  xmm3, xmm7, xmm7
        vaddss  xmm1, xmm3, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vmovss  xmm1, dword ptr [r13+14h]; Y
        vblendvps xmm0, xmm2, xmm9, xmm0
        vdivss  xmm6, xmm9, xmm0
        vdivss  xmm0, xmm2, dword ptr [r13+10h]
        vminss  xmm0, xmm0, xmm9; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm2, xmm0
        vmovss  xmm0, dword ptr [r13+8]
        vcomiss xmm0, xmm10
        vmulss  xmm3, xmm6, xmm8
        vmulss  xmm4, xmm6, xmm7
      }
      if ( !(v121 | v126) )
      {
        __asm
        {
          vaddss  xmm1, xmm0, xmm11
          vmaxss  xmm2, xmm1, xmm2
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0Ch]
        vcomiss xmm0, xmm9
      }
      if ( v121 )
      {
        __asm
        {
          vsubss  xmm0, xmm0, xmm11
          vminss  xmm2, xmm0, xmm2
        }
      }
      __asm
      {
        vmulss  xmm0, xmm2, [rbp+420h+var_4A0]
        vmulss  xmm1, xmm0, xmm3
        vmulss  xmm0, xmm0, xmm4
        vmovss  [rbp+420h+var_498], xmm0
        vmovss  dword ptr [rbp+r14*8+420h+var_3E0+4], xmm0
        vmovss  [rbp+420h+var_494], xmm1
        vmovss  dword ptr [rbp+r14*8+420h+var_3E0], xmm1
      }
      AngleVectors(&v287, (vec3_t *)&v284, NULL, NULL);
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+420h+var_430]
        vmulss  xmm1, xmm3, dword ptr [rbp+420h+axis]
        vmovss  xmm7, dword ptr [rbp+420h+var_430+4]
        vmovss  xmm6, dword ptr [rbp+420h+var_430+8]
        vmovss  xmm15, dword ptr [rbp+420h+axis+4]
        vmovss  xmm12, dword ptr [rbp+420h+axis+8]
        vmovss  xmm13, dword ptr [rbp+420h+axis+10h]
        vmovss  xmm14, dword ptr [rbp+420h+axis+14h]
        vmulss  xmm0, xmm7, xmm15
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rbp+420h+axis+0Ch]
        vmulss  xmm3, xmm3, dword ptr [rbp+420h+axis+18h]
        vmulss  xmm0, xmm6, xmm12
        vaddss  xmm11, xmm2, xmm0
        vmulss  xmm0, xmm7, xmm13
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm7, dword ptr [rbp+420h+axis+1Ch]
        vmulss  xmm1, xmm6, xmm14
        vaddss  xmm8, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [rbp+420h+axis+20h]
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm0, xmm8, dword ptr [rbp+420h+axis+0Ch]
        vaddss  xmm6, xmm2, xmm1
        vmulss  xmm2, xmm11, dword ptr [rbp+420h+axis]
        vmulss  xmm1, xmm6, dword ptr [rbp+420h+axis+18h]
        vaddss  xmm3, xmm2, xmm0
        vaddss  xmm10, xmm3, xmm1
        vmulss  xmm1, xmm6, dword ptr [rbp+420h+axis+1Ch]
        vmulss  xmm2, xmm15, xmm11
        vmulss  xmm0, xmm13, xmm8
        vaddss  xmm3, xmm2, xmm0
        vaddss  xmm9, xmm3, xmm1
        vmulss  xmm1, xmm6, dword ptr [rbp+420h+axis+20h]
        vmulss  xmm2, xmm12, xmm11
        vmovss  xmm11, cs:__real@3f800000
        vmulss  xmm0, xmm14, xmm8
        vaddss  xmm3, xmm2, xmm0
        vaddss  xmm5, xmm3, xmm1
        vmulss  xmm2, xmm9, xmm9
        vmulss  xmm0, xmm10, xmm10
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm3, xmm1
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm11, xmm0
        vdivss  xmm1, xmm11, xmm0
        vmulss  xmm7, xmm1, xmm10
        vmulss  xmm0, xmm7, dword ptr [rbp+420h+axis]
        vmulss  xmm6, xmm1, xmm9
        vmulss  xmm8, xmm1, xmm5
        vmulss  xmm1, xmm15, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, xmm8
        vaddss  xmm0, xmm2, xmm1; X
      }
      *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm5, xmm0, cs:__real@c2652ee0
        vmulss  xmm1, xmm7, dword ptr [rbp+420h+axis+0Ch]
      }
      v190 = *(p_minSize - 3);
      __asm
      {
        vmulss  xmm2, xmm13, xmm6
        vaddss  xmm3, xmm2, xmm1
        vxorps  xmm1, xmm5, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm14, xmm8
        vaddss  xmm4, xmm3, xmm0
        vxorps  xmm6, xmm6, xmm6
        vcmpless xmm0, xmm6, xmm4
        vblendvps xmm9, xmm1, xmm5, xmm0
        vmovss  [rbp+r14*4+420h+var_1E0], xmm9
      }
      v199 = CG_Draw_MaterialHandleForIndex(localClientNum, v190);
      if ( !v199 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 363, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
        __debugbreak();
      if ( !v199->textureTable->image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 364, ASSERT_TYPE_ASSERT, "(material->textureTable[0].image)", (const char *)&queryFormat, "material->textureTable[0].image") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, [rbp+420h+red]
        vmulss  xmm0, xmm0, dword ptr [rbx+18h]
        vmovss  xmm13, [rbp+420h+alpha]
        vmulss  xmm5, xmm13, dword ptr [rbx+24h]
        vmovss  xmm14, [rbp+420h+blue]
        vmulss  xmm4, xmm14, dword ptr [rbx+20h]
        vmovss  xmm15, [rbp+420h+green]
        vmulss  xmm1, xmm15, dword ptr [rbx+1Ch]
        vmovss  xmm12, [rbp+420h+var_498]
        vmovss  xmm10, [rbp+420h+var_494]
        vmovss  xmm8, [rbp+420h+var_490]
        vmovss  xmm7, [rbp+420h+var_48C]
        vaddss  xmm3, xmm12, dword ptr [rbp+420h+var_478+4]; centerY
        vaddss  xmm2, xmm10, dword ptr [rbp+420h+var_478]; centerX
        vmovss  dword ptr [rsp+530h+var_4C0], xmm5
        vmovss  [rsp+530h+var_4C8], xmm4
        vmovss  dword ptr [rsp+530h+targetScreenYaws], xmm1
        vmovss  dword ptr [rsp+530h+targetScreenOffsets], xmm0
        vmovss  dword ptr [rsp+530h+var_4E0], xmm9
        vmovss  dword ptr [rsp+530h+elementCenter], xmm11
        vmovss  dword ptr [rsp+530h+var_4F0], xmm11
        vmovss  dword ptr [rsp+530h+var_4F8], xmm6
        vmovss  dword ptr [rsp+530h+material], xmm6
        vmovss  [rsp+530h+height], xmm8
        vmovss  dword ptr [rsp+530h+fmt], xmm7
      }
      LUI_Render_DrawQuadRotated(localClientNum, _R15, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, heightc, materiala, v247, v251, elementCentera, v257, targetScreenOffsetsa, targetScreenYawsa, v267, v270, v199->textureTable->image, luaVM);
      v209 = *(p_minSize - 2);
      if ( v209 < 0 )
      {
        __asm { vmovss  xmm8, [rbp+420h+red] }
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm8, xmm7
          vmulss  xmm7, xmm0, cs:__real@3f000000
        }
        v212 = CG_Draw_MaterialHandleForIndex(localClientNum, v209);
        if ( !v212 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 376, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
          __debugbreak();
        if ( !v212->textureTable->image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 377, ASSERT_TYPE_ASSERT, "(material->textureTable[0].image)", (const char *)&queryFormat, "material->textureTable[0].image") )
          __debugbreak();
        __asm
        {
          vmulss  xmm5, xmm13, dword ptr [rbx+24h]
          vmulss  xmm4, xmm14, dword ptr [rbx+20h]
          vmulss  xmm1, xmm15, dword ptr [rbx+1Ch]
          vmovss  xmm8, [rbp+420h+red]
          vmulss  xmm0, xmm8, dword ptr [rbx+18h]
          vaddss  xmm3, xmm12, dword ptr [rbp+420h+var_478+4]; centerY
          vaddss  xmm2, xmm10, dword ptr [rbp+420h+var_478]; centerX
          vmovss  dword ptr [rsp+530h+var_4C0], xmm5
          vmovss  [rsp+530h+var_4C8], xmm4
          vmovss  dword ptr [rsp+530h+targetScreenYaws], xmm1
          vmovss  dword ptr [rsp+530h+targetScreenOffsets], xmm0
          vmovss  dword ptr [rsp+530h+var_4E0], xmm9
          vmovss  dword ptr [rsp+530h+elementCenter], xmm11
          vmovss  dword ptr [rsp+530h+var_4F0], xmm11
          vmovss  dword ptr [rsp+530h+var_4F8], xmm6
          vmovss  dword ptr [rsp+530h+material], xmm6
          vmovss  [rsp+530h+height], xmm7
          vmovss  dword ptr [rsp+530h+fmt], xmm7
        }
        LUI_Render_DrawQuadRotated(localClientNum, _R15, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, heightd, materialb, v248, v252, elementCenterb, v258, targetScreenOffsetsb, targetScreenYawsb, v268, v271, v212->textureTable->image, luaVM);
      }
      __asm
      {
        vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovsd  xmm6, cs:__real@3f30000000000000
        vmovss  xmm9, cs:__real@3f800000
        vxorps  xmm10, xmm10, xmm10
      }
    }
    ++_R14;
    p_minSize += 30;
  }
  while ( _R14 < 64 );
  __asm
  {
    vmovaps xmm12, [rsp+530h+var_A8+8]
    vmovaps xmm11, [rsp+530h+var_98+8]
    vmovaps xmm10, [rsp+530h+var_88+8]
    vmovaps xmm9, [rsp+530h+var_78+8]
    vmovaps xmm7, [rsp+530h+var_58+8]
    vmovaps xmm6, [rsp+530h+var_48+8]
  }
  if ( _R13->cursorMaterial )
  {
    __asm
    {
      vmovss  xmm0, [rbp+420h+var_4A0]
      vmovss  dword ptr [rsp+530h+var_4E0], xmm0
      vmovss  dword ptr [rsp+530h+var_4F8], xmm13
      vmovss  dword ptr [rsp+530h+material], xmm14
      vmovss  [rsp+530h+height], xmm15
      vmovss  dword ptr [rsp+530h+fmt], xmm8
    }
    LUIElement_RadarTargeting_HandleCursor(localClientNum, _R13, _R15, root, fmte, heighte, materialc, v249, luaVM, &v279, v259, v288, v289);
  }
  __asm
  {
    vmovaps xmm8, [rsp+530h+var_68+8]
    vmovaps xmm13, [rsp+530h+var_B8+8]
    vmovaps xmm14, [rsp+530h+var_C8+8]
    vmovaps xmm15, [rsp+530h+var_D8+8]
  }
}

/*
==============
LUIElement_RadarTargeting_HandleCursor
==============
*/
void LUIElement_RadarTargeting_HandleCursor(const LocalClientNum_t localClientNum, RadarTargetingOptions *options, LUIElement *element, LUIElement *root, float red, float green, float blue, float alpha, lua_State *luaVM, const vec2_t *elementCenter, float radarRadius, const vec2_t *targetScreenOffsets, const float *targetScreenYaws)
{
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v26; 
  float v27; 
  float v28; 
  __int64 v31; 
  int v76; 
  int v78; 
  char v79; 
  CgHandler *Handler; 
  centity_t *Entity; 
  __int64 p_eType; 
  char v93; 
  unsigned __int64 paintedTargets; 
  unsigned __int64 v112; 
  const char *v113; 
  char *fmt; 
  float fmta; 
  float height; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float c; 
  float s; 
  const float *v148; 
  const vec2_t *v149; 
  lua_State *v150; 
  LUIElement *elementa; 
  __int64 v152; 
  char v153[384]; 
  char v154; 
  void *retaddr; 

  _RAX = &retaddr;
  v152 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  elementa = element;
  _RSI = options;
  v150 = luaVM;
  v149 = elementCenter;
  v148 = targetScreenYaws;
  _R15 = CG_GetLocalClientGlobals(localClientNum);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 89, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RSI->cursorMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 90, ASSERT_TYPE_ASSERT, "(options->cursorMaterial)", (const char *)&queryFormat, "options->cursorMaterial") )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  v26 = ClActiveClient::GetClient(localClientNum);
  v27 = COERCE_FLOAT(ClActiveClient_GetCmdNumber(v26));
  v28 = v27;
  c = v27;
  if ( CmdNumber > SLODWORD(v27) )
  {
    *(float *)&fmt = v27;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber <= LODWORD(v28) - 128 || CmdNumber <= 0 )
  {
    memset(&c, 0, sizeof(c));
  }
  else
  {
    _RBX = &v26->cmds[CmdNumber & 0x7F];
    memset(&c, 0, sizeof(c));
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    _RCX = v153;
    v31 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX += 128;
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _RBX = (usercmd_s *)((char *)_RBX + 128);
      --v31;
    }
    while ( v31 );
    *(_QWORD *)_RCX = _RBX->buttons;
  }
  _EAX = v153[157];
  __asm
  {
    vmovd   xmm2, eax
    vcvtdq2ps xmm2, xmm2
  }
  _EAX = -v153[156];
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmovss  xmm3, cs:__real@3c010204
    vmulss  xmm5, xmm0, xmm3
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm4, xmm1, cs:__real@38820610
    vmulss  xmm6, xmm2, xmm3
    vmovss  xmm7, cs:__real@80000000
    vmovss  xmm11, cs:__real@3f800000
    vcomiss xmm4, xmm11
    vmovss  xmm8, [rsp+278h+radarRadius]
    vmulss  xmm0, xmm8, dword ptr [rsi+38h]
    vmulss  xmm2, xmm0, cs:__real@3b03126f
    vmovd   xmm1, dword ptr [r15+65E4h]
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm4, xmm2, xmm1
    vmovss  xmm3, dword ptr [rsi+34h]
    vmovss  xmm0, dword ptr [rsi+30h]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm9, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm6
    vaddss  xmm1, xmm0, dword ptr [rsi+3Ch]
    vmovss  dword ptr [rsi+3Ch], xmm1
    vmulss  xmm0, xmm4, xmm5
    vaddss  xmm1, xmm0, dword ptr [rsi+40h]
    vmovss  dword ptr [rsi+40h], xmm1
    vmovaps xmm0, xmm1
    vmovss  xmm3, dword ptr [rsi+3Ch]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm4, xmm1, xmm0
    vmulss  xmm0, xmm8, dword ptr [rsi+0Ch]
    vsubss  xmm1, xmm0, xmm9
    vmulss  xmm2, xmm1, xmm1
    vcomiss xmm4, xmm2
  }
  v76 = -1;
  __asm { vmovss  xmm8, cs:__real@bf800000 }
  v78 = 0;
  v79 = 0;
  _RDI = &_R15->targets[0].materialIndex;
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm12, cs:__real@bc8efa35
    vmovss  xmm10, cs:__real@3f000000
  }
  do
  {
    if ( *(_RDI - 4) == 2047 || (_RDI[19] & 0x1000) == 0 || *_RDI < 0 )
    {
      _RSI->paintedTargets &= ~(1i64 << v79);
    }
    else
    {
      Handler = CgHandler::getHandler(localClientNum);
      Entity = CG_GetEntity((const LocalClientNum_t)Handler->m_localClientNum, *(_RDI - 4));
      if ( Entity )
        p_eType = (__int64)&Entity->nextState.eType;
      else
        p_eType = 8i64;
      if ( *(_WORD *)p_eType != 4 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+3Ch]
          vsubss  xmm6, xmm0, dword ptr [r12]
          vmovss  xmm1, dword ptr [rsi+40h]
          vsubss  xmm7, xmm1, dword ptr [r12+4]
          vmulss  xmm0, xmm12, dword ptr [rax]; radians
        }
        FastSinCos(*(const float *)&_XMM0, &s, &c);
        __asm
        {
          vmulss  xmm1, xmm6, [rsp+278h+c]
          vmulss  xmm0, xmm7, [rsp+278h+s]
          vsubss  xmm4, xmm1, xmm0
          vmulss  xmm2, xmm6, [rsp+278h+s]
          vmulss  xmm1, xmm7, [rsp+278h+c]
          vaddss  xmm5, xmm2, xmm1
          vandps  xmm4, xmm4, xmm9
          vmovd   xmm0, dword ptr [rdi+0Ch]
          vcvtdq2ps xmm0, xmm0
          vmulss  xmm1, xmm0, xmm10
          vcomiss xmm4, xmm1
        }
        if ( v93 )
        {
          __asm
          {
            vandps  xmm5, xmm5, xmm9
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rdi+10h]
            vmulss  xmm1, xmm0, xmm10
            vcomiss xmm5, xmm1
          }
          if ( v93 )
          {
            __asm
            {
              vmulss  xmm1, xmm6, xmm6
              vmulss  xmm0, xmm7, xmm7
              vaddss  xmm2, xmm1, xmm0
            }
            if ( v76 != -1 )
              __asm { vcomiss xmm2, xmm8 }
            v76 = v78;
            __asm { vmovaps xmm8, xmm2 }
          }
        }
      }
    }
    ++v78;
    ++v79;
    _RDI += 30;
    ++targetScreenOffsets;
    ++v148;
  }
  while ( v78 < 64 );
  if ( v76 < 0 )
  {
    if ( !_RSI->paintedTargets )
      goto LABEL_46;
  }
  else
  {
    paintedTargets = _RSI->paintedTargets;
    if ( _bittest64((const __int64 *)&paintedTargets, (unsigned int)v76) )
      goto LABEL_46;
  }
  v112 = 0i64;
  _RSI->paintedTargets = 0i64;
  if ( v76 >= 0 )
  {
    _bittestandset64((__int64 *)&v112, v76);
    _RSI->paintedTargets = v112;
  }
  if ( LUI_CoD_InFrontend() || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    v113 = j_va("cmd lui radar_targeted %i\n", (unsigned int)v76);
    goto LABEL_45;
  }
  if ( NetConstStrings_GetLuiStringIndex("radar_targeted", (unsigned int *)&s) )
  {
    v113 = j_va("cmd lui %i %i %i\n", s, (unsigned int)v76, (unsigned int)cls.serverId);
LABEL_45:
    Cbuf_AddText(localClientNum, v113);
    goto LABEL_46;
  }
  Com_PrintWarning(13, "LUI_CustomElement_RadarTargeting: could not find NetConstString index for radar_targeted\n");
LABEL_46:
  _RAX = v149;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vaddss  xmm3, xmm0, dword ptr [rsi+40h]; centerY
    vmovss  xmm1, dword ptr [rax]
    vaddss  xmm2, xmm1, dword ptr [rsi+3Ch]; centerX
    vmovss  xmm0, [rsp+278h+alpha]
    vmovss  [rsp+278h+var_208], xmm0
    vmovss  xmm1, [rsp+278h+blue]
    vmovss  [rsp+278h+var_210], xmm1
    vmovss  xmm0, [rsp+278h+green]
    vmovss  [rsp+278h+var_218], xmm0
    vmovss  xmm1, [rsp+278h+red]
    vmovss  [rsp+278h+var_220], xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+278h+var_228], xmm0
    vmovss  [rsp+278h+var_230], xmm11
    vmovss  [rsp+278h+var_238], xmm11
    vmovss  [rsp+278h+var_240], xmm0
    vmovss  [rsp+278h+var_248], xmm0
    vmovss  xmm0, dword ptr [rsi+34h]
    vmovss  [rsp+278h+height], xmm0
    vmovss  xmm1, dword ptr [rsi+30h]
    vmovss  dword ptr [rsp+278h+fmt], xmm1
  }
  LUI_Render_DrawQuadRotated(localClientNum, elementa, *(float *)&_XMM2, *(float *)&_XMM3, fmta, height, v137, v138, v139, v140, v141, v142, v143, v144, v145, _RSI->cursorMaterial, v150);
  _R11 = &v154;
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
LUIElement_RadarTargeting_Render
==============
*/

void __fastcall LUIElement_RadarTargeting_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  cg_t *LocalClientGlobals; 
  RadarTargetingOptions *customElementData; 
  float fmt; 
  float v20; 
  float v21; 
  float v22; 

  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps xmm6, xmm3
  }
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
  __asm
  {
    vmovss  xmm0, [rsp+88h+blue]
    vmovss  xmm1, [rsp+88h+green]
    vmovss  [rsp+88h+var_50], xmm6
    vmovss  [rsp+88h+var_58], xmm0
    vmovss  xmm0, [rsp+88h+red]
    vmovss  [rsp+88h+var_60], xmm1
    vmovss  dword ptr [rsp+88h+fmt], xmm0
  }
  LUIElement_RadarTargeting_Draw(localClientNum, customElementData, element, root, fmt, v20, v21, v22, luaVM);
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
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
  LUIElement *v7; 
  GfxImage *v8; 
  const char *v10; 
  const char *v11; 
  GfxImage *v12; 
  __int64 result; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v7 = LUI_ToElement(luaVM, 1);
  v8 = NULL;
  v7->usageFlags |= 1u;
  v7->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_RadarTargeting_Render;
  v7->imageData.uMin = 0.0;
  *(_QWORD *)&v7->textData.fontSize = 1065353216i64;
  v7->imageData.vMax = 1.0;
  if ( !LUI_ElementHasWeakTableEntry(v7, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v7, luaVM);
  _RSI = j_lua_newuserdata(luaVM, 0x50ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v7->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v7->customElementData = _RSI;
  memset_0(_RSI, 0, 0x50ui64);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 477, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 440, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "maskMaterial");
  if ( j_lua_isstring(luaVM, -1) )
    v10 = j_lua_tolstring(luaVM, -1, NULL);
  else
    v10 = NULL;
  j_lua_settop(luaVM, -2);
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 440, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "cursorMaterial");
  if ( j_lua_isstring(luaVM, -1) )
    v11 = j_lua_tolstring(luaVM, -1, NULL);
  else
    v11 = NULL;
  j_lua_settop(luaVM, -2);
  if ( v10 && *v10 )
  {
    _RSI[3] = Image_Register("radar_targeting_mask_reset", IMAGE_TRACK_HUD);
    v12 = Image_Register(v10, IMAGE_TRACK_HUD);
  }
  else
  {
    _RSI[3] = 0i64;
    v12 = NULL;
  }
  _RSI[4] = v12;
  if ( v11 && *v11 )
    v8 = Image_Register(v11, IMAGE_TRACK_HUD);
  _RSI[5] = v8;
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "radarCenterOffsetX");
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovss  dword ptr [rsi], xmm6 }
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "radarCenterOffsetY");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovss  dword ptr [rsi+4], xmm6 }
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "minRadiusPct");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm7, xmm0 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovss  dword ptr [rsi+8], xmm7 }
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "maxRadiusPct");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm6, cs:__real@3f800000 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovss  dword ptr [rsi+0Ch], xmm6 }
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "maxDistance");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm6, cs:__real@459c4000 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovss  dword ptr [rsi+10h], xmm6 }
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "distanceExponent");
  __asm { vmovss  xmm8, cs:__real@3f000000 }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vmovaps xmm6, xmm8 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovss  dword ptr [rsi+14h], xmm6 }
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "cursorWidth");
  __asm { vmovss  xmm7, cs:__real@42200000 }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vmovaps xmm6, xmm7 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovss  dword ptr [rsi+30h], xmm6 }
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "cursorHeight");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm7, xmm0 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovss  dword ptr [rsi+34h], xmm7 }
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radartargeting.cpp", 416, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  j_lua_getfield(luaVM, 2, "cursorMoveRate");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm8, xmm0 }
  }
  j_lua_settop(luaVM, -2);
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  _R11 = &v29;
  result = 0i64;
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_38]
    vmovss  dword ptr [rsi+38h], xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

