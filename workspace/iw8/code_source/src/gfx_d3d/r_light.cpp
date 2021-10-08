/*
==============
R_ChooseVisibleDynamicSpotLights
==============
*/

unsigned int __fastcall R_ChooseVisibleDynamicSpotLights(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  return ?R_ChooseVisibleDynamicSpotLights@@YAIPEAUGfxBackEndData@@PEAUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
R_RegisterLightDef
==============
*/

GfxLightDef *__fastcall R_RegisterLightDef(const char *name)
{
  return ?R_RegisterLightDef@@YAPEAUGfxLightDef@@PEBD@Z(name);
}

/*
==============
R_BoxInPlanes
==============
*/

int __fastcall R_BoxInPlanes(const vec4_t (*planes)[6], const Bounds *bounds)
{
  return ?R_BoxInPlanes@@YAHAEAY05$$CBTvec4_t@@PEIBUBounds@@@Z(planes, bounds);
}

/*
==============
R_UseBakedLighting
==============
*/

bool __fastcall R_UseBakedLighting()
{
  return ?R_UseBakedLighting@@YA_NXZ();
}

/*
==============
R_ChooseVisibleDynamicOmniLights
==============
*/

unsigned int __fastcall R_ChooseVisibleDynamicOmniLights(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  return ?R_ChooseVisibleDynamicOmniLights@@YAIPEAUGfxBackEndData@@PEAUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
R_CalcSpotLightPlanesAndBoundingBox
==============
*/

void __fastcall R_CalcSpotLightPlanesAndBoundingBox(const GfxLight *light, vec4_t (*planes)[6], Bounds *bounds)
{
  ?R_CalcSpotLightPlanesAndBoundingBox@@YAXPEBUGfxLight@@AEAY05Tvec4_t@@PEAUBounds@@@Z(light, planes, bounds);
}

/*
==============
R_SceneLightIndexToDynLightIndex
==============
*/

unsigned int __fastcall R_SceneLightIndexToDynLightIndex(unsigned int sceneLightIndex)
{
  return ?R_SceneLightIndexToDynLightIndex@@YAII@Z(sceneLightIndex);
}

/*
==============
R_RegisterIESProfile
==============
*/

GfxIESProfile *__fastcall R_RegisterIESProfile(const char *name)
{
  return ?R_RegisterIESProfile@@YAPEAUGfxIESProfile@@PEBD@Z(name);
}

/*
==============
R_GetStaticGeoDynamicLightSurfs
==============
*/

void __fastcall R_GetStaticGeoDynamicLightSurfs(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  ?R_GetStaticGeoDynamicLightSurfs@@YAXPEIAUGfxViewInfo@@I@Z(viewInfo, spotShadowUpdateIndex);
}

/*
==============
R_LightFadeOffsetRuntimeEncoding
==============
*/

void __fastcall R_LightFadeOffsetRuntimeEncoding(vec2_t *fadeOffsetStartEnd, unsigned __int8 type)
{
  ?R_LightFadeOffsetRuntimeEncoding@@YAXAEATvec2_t@@E@Z(fadeOffsetStartEnd, type);
}

/*
==============
R_ShutdownLightDefs
==============
*/

void R_ShutdownLightDefs(void)
{
  ?R_ShutdownLightDefs@@YAXXZ();
}

/*
==============
R_InitLightDefs
==============
*/

void R_InitLightDefs(void)
{
  ?R_InitLightDefs@@YAXXZ();
}

/*
==============
R_SphereInPlanes
==============
*/

int __fastcall R_SphereInPlanes(const vec4_t (*planes)[6], const vec3_t *center, const float radius)
{
  return ?R_SphereInPlanes@@YAHAEAY05$$CBTvec4_t@@AEBTvec3_t@@M@Z(planes, center, radius);
}

/*
==============
R_AllowBspSpotLightShadows
==============
*/
int R_AllowBspSpotLightShadows(int surfIndex, void *bspLightCallbackAsVoid)
{
  if ( r_spotLightShadows->current.enabled )
    return R_BoxInPlanes((const vec4_t (*)[6])((char *)bspLightCallbackAsVoid + 8), &rgp.world->surfaces.surfaceBounds[surfIndex].bounds);
  else
    return 0;
}

/*
==============
R_AllowStaticModelSpotLight
==============
*/
int R_AllowStaticModelSpotLight(int smodelIndex, void *context)
{
  __int64 v2; 

  v2 = smodelIndex;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 697, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( *((_BYTE *)context + 8) || ((0x80000000 >> (v2 & 0x1F)) & *(_DWORD *)(*(_QWORD *)context + 4 * (v2 >> 5))) != 0 )
    return R_BoxInPlanes((const vec4_t (*)[6])((char *)context + 12), &rgp.world->smodels.collectionBounds[v2]);
  else
    return 0;
}

/*
==============
R_BoxInPlanes
==============
*/
__int64 R_BoxInPlanes(const vec4_t (*planes)[6], const Bounds *bounds)
{
  unsigned int v17; 
  bool v19; 
  __int64 result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [rdx]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rdx+0Ch]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rdx+10h]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  v17 = 0;
  __asm
  {
    vmovss  xmm12, dword ptr [rdx+14h]
    vmovaps [rsp+88h+var_88], xmm13
  }
  v19 = __CFADD__(planes, 12i64);
  _RCX = &(*planes)[0].xyz + 1;
  __asm { vxorps  xmm13, xmm13, xmm13 }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx-0Ch]
      vmovss  xmm4, dword ptr [rcx-8]
      vmovss  xmm5, dword ptr [rcx-4]
      vmulss  xmm1, xmm7, xmm0
      vmulss  xmm2, xmm9, xmm4
      vandps  xmm0, xmm0, xmm6
      vmulss  xmm0, xmm0, xmm8
      vsubss  xmm1, xmm1, xmm0
      vaddss  xmm3, xmm1, dword ptr [rcx]
      vandps  xmm4, xmm4, xmm6
      vmulss  xmm0, xmm4, xmm10
      vsubss  xmm1, xmm2, xmm0
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm3, xmm11, xmm5
      vandps  xmm5, xmm5, xmm6
      vmulss  xmm0, xmm5, xmm12
      vsubss  xmm1, xmm3, xmm0
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm13
    }
    if ( !v19 )
      break;
    ++v17;
    _RCX = (vec3_t *)((char *)_RCX + 16);
    v19 = v17 < 6;
    if ( v17 >= 6 )
    {
      result = 1i64;
      goto LABEL_6;
    }
  }
  result = 0i64;
LABEL_6:
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
    vmovaps xmm11, [rsp+88h+var_68]
    vmovaps xmm12, [rsp+88h+var_78]
    vmovaps xmm13, [rsp+88h+var_88]
  }
  return result;
}

/*
==============
R_CalcSpotLightPlanesAndBoundingBox
==============
*/
void R_CalcSpotLightPlanesAndBoundingBox(const GfxLight *light, vec4_t (*planes)[6], Bounds *bounds)
{
  signed __int64 v3; 
  void *v14; 
  vec3_t *bulbLengthVec; 
  __int64 numVerts; 
  float v212; 
  __int128 v222; 
  __int128 v223; 
  GfxLightModel lightModel; 
  __int128 v225[19]; 
  char v226; 

  v14 = alloca(v3);
  __asm
  {
    vmovaps [rsp+1E00h+var_40], xmm6
    vmovaps [rsp+1E00h+var_50], xmm7
    vmovaps [rsp+1E00h+var_60], xmm8
    vmovaps [rsp+1E00h+var_70], xmm9
    vmovaps [rsp+1E00h+var_80], xmm10
    vmovaps [rsp+1E00h+var_90], xmm11
    vmovaps [rsp+1E00h+var_A0], xmm12
    vmovaps [rsp+1E00h+var_B0], xmm13
    vmovaps [rsp+1E00h+var_C0], xmm14
    vmovaps [rsp+1E00h+var_D0], xmm15
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm8, dword ptr [rcx+50h]
    vmovsd  xmm9, qword ptr [rcx+20h]
  }
  bulbLengthVec = &light->bulbLength;
  __asm
  {
    vmovsd  xmm6, qword ptr [r13+0]
    vmovss  xmm10, dword ptr [rcx+60h]
    vmulss  xmm1, xmm6, xmm6
    vmovsd  qword ptr [rsp+1E00h+var_1D90], xmm6
    vmovss  xmm5, dword ptr [rsp+1E00h+var_1D90+4]
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
  }
  DWORD2(v222) = LODWORD(light->bulbLength.v[2]);
  _RDI = bounds;
  __asm { vmovss  xmm7, dword ptr [rsp+1E00h+var_1D90+8] }
  _RBX = planes;
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
    vdivss  xmm4, xmm11, xmm0
    vmulss  xmm2, xmm5, xmm4
    vmulss  xmm0, xmm6, xmm4
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm6, xmm1, xmm6
    vmulss  xmm0, xmm2, xmm8
    vaddss  xmm5, xmm0, xmm5
    vmulss  xmm1, xmm7, xmm4
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm4, xmm2, xmm7
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vmulss  xmm1, xmm0, xmm5
    vmulss  xmm0, xmm9, xmm6
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  DWORD2(v223) = LODWORD(light->dir.v[2]);
  _RSI = light;
  __asm
  {
    vmulss  xmm2, xmm4, dword ptr [rbp+1D00h+var_1D80+8]
    vaddss  xmm7, xmm3, xmm2
    vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vsubss  xmm2, xmm3, xmm0
    vmovss  xmm3, dword ptr [rcx+24h]
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm4, xmm1, xmm10
    vmulss  xmm0, xmm10, xmm10
    vsubss  xmm0, xmm11, xmm0
    vsqrtss xmm1, xmm0, xmm0
    vdivss  xmm2, xmm4, xmm1
    vmovss  xmm4, dword ptr [rcx+20h]
    vaddss  xmm5, xmm2, xmm7
    vmovss  xmm2, dword ptr [rcx+28h]
    vaddss  xmm1, xmm5, xmm7
    vmulss  xmm0, xmm4, xmm5
    vaddss  xmm14, xmm0, dword ptr [rcx+38h]
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm13, xmm0, dword ptr [rcx+3Ch]
    vmulss  xmm0, xmm5, xmm2
    vaddss  xmm12, xmm0, dword ptr [rcx+40h]
    vaddss  xmm0, xmm1, dword ptr [rcx+74h]
    vaddss  xmm1, xmm5, dword ptr [rcx+44h]
    vmaxss  xmm7, xmm0, xmm11
    vaddss  xmm0, xmm7, xmm11
    vmaxss  xmm5, xmm1, xmm0
    vxorps  xmm10, xmm4, xmm6
    vmulss  xmm0, xmm10, xmm7
    vmovsd  qword ptr [rbp+1D00h+var_1D80], xmm9
    vxorps  xmm9, xmm2, xmm6
    vaddss  xmm2, xmm0, xmm14
    vxorps  xmm8, xmm3, xmm6
    vmovss  [rsp+1E00h+var_1DA4], xmm2
    vmovss  [rsp+1E00h+var_1DA8], xmm7
    vmovss  [rsp+1E00h+var_1DB8], xmm5
    vmulss  xmm1, xmm8, xmm7
    vmovss  dword ptr [rdx], xmm4
  }
  *(_QWORD *)&(*planes)[0].xyz.y = *(_QWORD *)&light->dir.y;
  __asm
  {
    vaddss  xmm1, xmm1, xmm13
    vmulss  xmm0, xmm9, xmm7
    vaddss  xmm3, xmm0, xmm12
    vmulss  xmm0, xmm2, dword ptr [rcx+20h]
    vmovss  [rsp+1E00h+var_1DC0], xmm1
    vmulss  xmm1, xmm1, dword ptr [rcx+24h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rcx+28h]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm2, xmm0, xmm6
    vmovss  dword ptr [rdx+0Ch], xmm2
    vmovss  [rsp+1E00h+var_1DBC], xmm3
  }
  R_ComputeSpotLightCrossDirs(light, (vec3_t *)v225);
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+60h]
    vmovss  xmm15, dword ptr [rbp+1D00h+var_160]
    vmulss  xmm0, xmm3, xmm3
    vsubss  xmm0, xmm11, xmm0
    vmovss  xmm11, dword ptr [rbp+1D00h+var_160+4]
    vsqrtss xmm0, xmm0, xmm0
    vxorps  xmm2, xmm0, xmm6
    vmovss  [rsp+1E00h+var_1DAC], xmm0
    vmulss  xmm5, xmm9, xmm2
    vmulss  xmm7, xmm10, xmm2
    vmulss  xmm6, xmm8, xmm2
    vmulss  xmm0, xmm15, xmm3
    vaddss  xmm4, xmm0, xmm7
    vmovss  dword ptr [rbx+10h], xmm4
    vmulss  xmm0, xmm11, xmm3
    vaddss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm3, dword ptr [rbp+1D00h+var_160+8]
    vmovss  dword ptr [rbx+14h], xmm1
    vaddss  xmm3, xmm0, xmm5
    vmovss  dword ptr [rbx+18h], xmm3
    vmulss  xmm1, xmm13, xmm1
    vmulss  xmm0, xmm14, xmm4
    vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm12, xmm3
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmovss  xmm3, dword ptr [rsi+60h]
    vmulss  xmm0, xmm3, dword ptr [rbp+1D00h+var_160+0Ch]
    vaddss  xmm2, xmm0, xmm7
    vmulss  xmm0, xmm3, [rbp+1D00h+var_150]
    vaddss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm3, [rbp+1D00h+var_14C]
    vaddss  xmm3, xmm0, xmm5
    vmovss  dword ptr [rbx+24h], xmm1
    vmovss  dword ptr [rbx+20h], xmm2
    vmulss  xmm0, xmm2, xmm14
    vmulss  xmm1, xmm13, xmm1
    vaddss  xmm2, xmm1, xmm0
    vmovss  dword ptr [rbx+28h], xmm3
    vmulss  xmm1, xmm3, xmm12
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbx+2Ch], xmm0
    vmovss  xmm1, dword ptr [rsi+60h]
    vxorps  xmm3, xmm1, xmm4
    vmulss  xmm0, xmm15, xmm3
    vaddss  xmm4, xmm0, xmm7
    vmulss  xmm0, xmm3, dword ptr [rbp+1D00h+var_160+8]
    vmulss  xmm1, xmm11, xmm3
    vaddss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm0, xmm5
    vmulss  xmm0, xmm13, xmm2
    vmulss  xmm1, xmm4, xmm14
    vmovss  dword ptr [rbx+34h], xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm12
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx+30h], xmm4
    vmovss  dword ptr [rbx+38h], xmm3
    vmovss  dword ptr [rbx+3Ch], xmm0
    vmovss  xmm1, dword ptr [rsi+60h]
    vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm3, dword ptr [rbp+1D00h+var_160+0Ch]
    vmulss  xmm1, xmm3, [rbp+1D00h+var_150]
    vaddss  xmm4, xmm0, xmm7
    vmulss  xmm0, xmm3, [rbp+1D00h+var_14C]
    vaddss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm0, xmm5
    vmovss  dword ptr [rbx+44h], xmm2
    vmulss  xmm0, xmm13, xmm2
    vmovss  dword ptr [rbx+48h], xmm3
    vmovss  dword ptr [rbx+40h], xmm4
    vmulss  xmm1, xmm4, xmm14
    vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm12
    vmovss  xmm3, [rsp+1E00h+var_1DB8]
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbx+4Ch], xmm0
    vmulss  xmm1, xmm10, xmm3
    vaddss  xmm2, xmm1, xmm14
    vmulss  xmm0, xmm8, xmm3
    vaddss  xmm0, xmm0, xmm13
    vmulss  xmm1, xmm9, xmm3
    vaddss  xmm3, xmm1, xmm12
    vmulss  xmm1, xmm8, xmm0
    vmovss  [rsp+1E00h+var_1DB4], xmm0
    vmulss  xmm0, xmm2, xmm10
    vmovss  [rsp+1E00h+var_1DA0], xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm3
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbx+5Ch], xmm0
    vmovss  [rsp+1E00h+var_1DB0], xmm3
    vmovss  dword ptr [rbx+50h], xmm10
    vmovss  dword ptr [rbx+54h], xmm8
    vmovss  dword ptr [rbx+58h], xmm9
  }
  if ( _RDI )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+60h]; coneCosHalfFov
      vcomiss xmm2, cs:__real@3f000000
      vmovss  xmm3, dword ptr [rsi+44h]; radius
      vcomiss xmm3, cs:__real@44960000
      vmovss  xmm0, dword ptr [rsi+50h]
      vmovss  [rsp+1E00h+var_1DD8], xmm0
    }
    R_GenerateSpotLightModel(&_RSI->origin, &_RSI->dir, *(float *)&_XMM2, *(float *)&_XMM3, bulbLengthVec, v212, &lightModel);
    numVerts = lightModel.numVerts;
    *(_QWORD *)_RDI->midPoint.v = 0i64;
    _RDI->midPoint.v[2] = 0.0;
    _RDI->halfSize.v[0] = -3.4028235e38;
    _RDI->halfSize.v[1] = -3.4028235e38;
    _RDI->halfSize.v[2] = -3.4028235e38;
    if ( (_DWORD)numVerts )
    {
      _RAX = &lightModel.verts[0].v[2];
      do
      {
        __asm { vmovss  xmm0, dword ptr [rax-8] }
        _RAX += 3;
        HIDWORD(v225[0]) = 0;
        HIDWORD(v223) = 0;
        HIDWORD(v222) = 0;
        __asm
        {
          vmovups xmm5, [rbp+1D00h+var_160]
          vmovups xmm4, [rbp+1D00h+var_1D80]
          vmovups xmm3, [rsp+1E00h+var_1D90]
          vmovss  xmm5, xmm5, xmm0
          vmovss  xmm0, dword ptr [rdi]
          vinsertps xmm5, xmm5, dword ptr [rax-10h], 10h
          vinsertps xmm5, xmm5, dword ptr [rax-0Ch], 20h ; ' '
          vmovss  xmm4, xmm4, xmm0
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
          vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rdi+10h], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+14h], 20h ; ' '
          vsubps  xmm0, xmm4, xmm3
          vaddps  xmm1, xmm4, xmm3
          vminps  xmm2, xmm0, xmm5
          vmaxps  xmm0, xmm1, xmm5
          vaddps  xmm1, xmm2, xmm0
          vmovups [rsp+1E00h+var_1D90], xmm3
          vmulps  xmm3, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
          vmovss  dword ptr [rdi], xmm3
          vextractps dword ptr [rdi+4], xmm3, 1
          vextractps dword ptr [rdi+8], xmm3, 2
          vmovups [rbp+1D00h+var_1D80], xmm4
          vsubps  xmm4, xmm3, xmm2
          vmovss  dword ptr [rdi+0Ch], xmm4
          vextractps dword ptr [rdi+10h], xmm4, 1
          vextractps dword ptr [rdi+14h], xmm4, 2
          vmovups [rbp+1D00h+var_160], xmm5
        }
        --numVerts;
      }
      while ( numVerts );
    }
  }
  _R11 = &v226;
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
R_ChooseVisibleDynamicOmniLights
==============
*/
__int64 R_ChooseVisibleDynamicOmniLights(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  GfxBackEndData *v3; 
  int v4; 
  __int64 v5; 
  volatile int v6; 
  unsigned int visDynamicOmniLightCount; 
  unsigned int dynamicOmniLightLimit; 
  __int64 result; 
  GfxDynamicLight *v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  GfxDynamicLight *lights[64]; 

  v3 = data;
  v4 = 1;
  if ( scene.dynamicOmniLightCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 517, ASSERT_TYPE_SANITY, "( ( scene.dynamicOmniLightCount <= ( 32 * 2 ) ) )", "( scene.dynamicOmniLightCount ) = %i", scene.dynamicOmniLightCount) )
    __debugbreak();
  R_CullDynamicPointLightsInCameraView(viewInfo->viewInfoIndex);
  v5 = 0i64;
  scene.visDynamicOmniLightCount = 0;
  v6 = 0;
  if ( scene.dynamicOmniLightCount > 0 )
  {
    _RBX = &scene.dynamicOmniLight[0].bounds.midPoint.v[2];
    do
    {
      if ( (unsigned int)v6 >= 0x40 )
      {
        LODWORD(v17) = 64;
        LODWORD(v16) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      if ( (v4 & scene.isDynamicOmniLightCulled[(__int64)v6 >> 5]) == 0 )
      {
        visDynamicOmniLightCount = scene.visDynamicOmniLightCount;
        lights[scene.visDynamicOmniLightCount] = (GfxDynamicLight *)(_RBX - 64);
        scene.visDynamicOmniLightCount = visDynamicOmniLightCount + 1;
        *(_RBX - 2) = *(_RBX - 50);
        *(_RBX - 1) = *(_RBX - 49);
        *_RBX = *(_RBX - 48);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-0BCh]
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  dword ptr [rbx+0Ch], xmm0
        }
        _RBX[4] = *(_RBX - 50);
        _RBX[5] = *(_RBX - 49);
        _RBX[6] = *(_RBX - 48);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-0BCh]
          vmovss  dword ptr [rbx+1Ch], xmm0
          vmulss  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbx+20h], xmm0
        }
      }
      ++v6;
      v4 = __ROL4__(v4, 1);
      _RBX += 76;
    }
    while ( v6 < scene.dynamicOmniLightCount );
    v3 = data;
  }
  dynamicOmniLightLimit = 32 - scene.visDynamicSpotLightCount;
  if ( scene.dynamicOmniLightLimit < (signed int)(32 - scene.visDynamicSpotLightCount) )
    dynamicOmniLightLimit = scene.dynamicOmniLightLimit;
  if ( dynamicOmniLightLimit > 0x20 )
  {
    LODWORD(v16) = dynamicOmniLightLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 543, ASSERT_TYPE_ASSERT, "( ( visibleLimit <= 32 ) )", "( visibleLimit ) = %i", v16) )
      __debugbreak();
  }
  result = scene.visDynamicOmniLightCount;
  if ( scene.visDynamicOmniLightCount > dynamicOmniLightLimit )
  {
    if ( dynamicOmniLightLimit )
      R_MostImportantLights((const GfxDynamicLight **)lights, scene.visDynamicOmniLightCount, dynamicOmniLightLimit);
    result = dynamicOmniLightLimit;
    scene.visDynamicOmniLightCount = dynamicOmniLightLimit;
  }
  if ( (_DWORD)result )
  {
    do
    {
      v14 = lights[v5];
      v15 = R_AddDynamicSceneLight(v3, viewInfo, &v14->lightCommon);
      if ( v15 < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 738, ASSERT_TYPE_ASSERT, "(sceneLightIndex >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "sceneLightIndex >= rgp.world->primaryLightCount") )
        __debugbreak();
      v5 = (unsigned int)(v5 + 1);
      scene.sceneDynamicLight[v15 - rgp.world->primaryLightCount] = v14;
      result = scene.visDynamicOmniLightCount;
    }
    while ( (unsigned int)v5 < scene.visDynamicOmniLightCount );
  }
  scene.addedDynamicLightCount += result;
  return result;
}

/*
==============
R_ChooseVisibleDynamicSpotLights
==============
*/
__int64 R_ChooseVisibleDynamicSpotLights(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  __int64 v4; 
  volatile int i; 
  unsigned int v6; 
  unsigned int visDynamicSpotLightCount; 
  unsigned int dynamicSpotLightLimit; 
  __int64 result; 
  GfxDynamicLight *v10; 
  unsigned int v11; 
  __int64 v12; 
  volatile int dynamicSpotLightCount; 
  __int64 v14; 
  GfxDynamicLight *lights[64]; 

  if ( scene.dynamicSpotLightCount > 64 )
  {
    dynamicSpotLightCount = scene.dynamicSpotLightCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 466, ASSERT_TYPE_SANITY, "( ( scene.dynamicSpotLightCount <= ( 32 * 2 ) ) )", "( scene.dynamicSpotLightCount ) = %i", dynamicSpotLightCount) )
      __debugbreak();
  }
  R_CullDynamicSpotLightInCameraView(viewInfo->viewInfoIndex);
  v4 = 0i64;
  scene.visDynamicSpotLightCount = 0;
  for ( i = 0; i < scene.dynamicSpotLightCount; ++i )
  {
    if ( (unsigned int)i >= 0x40 )
    {
      LODWORD(v14) = 64;
      LODWORD(v12) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v12, v14) )
        __debugbreak();
    }
    v6 = scene.isDynamicSpotLightCulled[(__int64)i >> 5];
    if ( !_bittest((const int *)&v6, i & 0x1F) )
    {
      visDynamicSpotLightCount = scene.visDynamicSpotLightCount;
      lights[scene.visDynamicSpotLightCount] = &scene.dynamicSpotLight[i];
      scene.visDynamicSpotLightCount = visDynamicSpotLightCount + 1;
    }
  }
  dynamicSpotLightLimit = scene.dynamicSpotLightLimit;
  if ( scene.dynamicSpotLightLimit > 0x20u )
  {
    LODWORD(v12) = scene.dynamicSpotLightLimit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 481, ASSERT_TYPE_ASSERT, "( ( visibleLimit <= 32 ) )", "( visibleLimit ) = %i", v12) )
      __debugbreak();
  }
  result = scene.visDynamicSpotLightCount;
  if ( scene.visDynamicSpotLightCount > dynamicSpotLightLimit )
  {
    if ( dynamicSpotLightLimit )
      R_MostImportantLights((const GfxDynamicLight **)lights, scene.visDynamicSpotLightCount, dynamicSpotLightLimit);
    result = dynamicSpotLightLimit;
    scene.visDynamicSpotLightCount = dynamicSpotLightLimit;
  }
  if ( (_DWORD)result )
  {
    do
    {
      v10 = lights[v4];
      if ( v10->lightCommon.type != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 498, ASSERT_TYPE_ASSERT, "(light->type == 2)", (const char *)&queryFormat, "light->type == GFX_LIGHT_TYPE_SPOT") )
        __debugbreak();
      v11 = R_AddDynamicSceneLight(data, viewInfo, &v10->lightCommon);
      if ( v11 < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 738, ASSERT_TYPE_ASSERT, "(sceneLightIndex >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "sceneLightIndex >= rgp.world->primaryLightCount") )
        __debugbreak();
      v4 = (unsigned int)(v4 + 1);
      scene.sceneDynamicLight[v11 - rgp.world->primaryLightCount] = v10;
      result = scene.visDynamicSpotLightCount;
    }
    while ( (unsigned int)v4 < scene.visDynamicSpotLightCount );
  }
  scene.addedDynamicLightCount += result;
  return result;
}

/*
==============
R_ComputeSpotLightCrossDirs
==============
*/
void R_ComputeSpotLightCrossDirs(const GfxLight *light, vec3_t *crossDirs)
{
  __int64 v5; 
  int v7; 
  bool v13; 
  bool v14; 
  __int64 v16; 
  unsigned int v18; 
  __int64 v52; 
  __int64 v53; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _R14 = &light->dir;
  LODWORD(v5) = 0;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm7
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  v7 = 1;
  _RBP = 0i64;
  _RSI = 1i64;
  _R15 = crossDirs;
  do
  {
    if ( (unsigned int)v5 >= 3 )
    {
      LODWORD(v53) = 3;
      LODWORD(v52) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [r14+rbp*4]
      vandps  xmm6, xmm6, xmm7
    }
    v13 = (unsigned int)v7 <= 3;
    if ( (unsigned int)v7 >= 3 )
    {
      LODWORD(v53) = 3;
      LODWORD(v52) = v7;
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53);
      v13 = !v14;
      if ( v14 )
        __debugbreak();
    }
    __asm { vmovss  xmm0, dword ptr [r14+rsi*4] }
    v16 = _RSI;
    __asm
    {
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm6, xmm0
    }
    if ( v13 )
      v16 = _RBP;
    _RBP = v16;
    v18 = v7;
    if ( v13 )
      v18 = v5;
    ++v7;
    ++_RSI;
    v5 = (int)v18;
  }
  while ( v7 < 3 );
  *(_QWORD *)_R15->v = 0i64;
  _R15->v[2] = 0.0;
  if ( v18 >= 3 )
  {
    LODWORD(v53) = 3;
    LODWORD(v52) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v52, v53) )
      __debugbreak();
  }
  _R15->v[v5] = 1.0;
  Vec3Cross(_R14, _R15, _R15 + 1);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+10h]
    vmovss  xmm5, dword ptr [r15+0Ch]
    vmovss  xmm3, dword ptr [r15+14h]
    vmovss  xmm7, cs:__real@3f800000
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [r15+0Ch], xmm0
    vmulss  xmm1, xmm2, dword ptr [r15+10h]
    vmovss  dword ptr [r15+10h], xmm1
    vmulss  xmm0, xmm2, dword ptr [r15+14h]
    vmovss  dword ptr [r15+14h], xmm0
  }
  Vec3Cross(_R15 + 1, _R14, _R15);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  xmm5, dword ptr [r15]
    vmovss  xmm3, dword ptr [r15+8]
    vmovaps xmm6, [rsp+78h+var_28]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmovaps xmm7, [rsp+78h+var_38]
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [r15], xmm0
    vmulss  xmm1, xmm2, dword ptr [r15+4]
    vmovss  dword ptr [r15+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [r15+8]
    vmovss  dword ptr [r15+8], xmm0
  }
}

/*
==============
R_GetBspSpotLightSurfs
==============
*/
void R_GetBspSpotLightSurfs(const GfxLight *light, const vec4_t *planes, const R_CollInfo *collInfo, const unsigned int dynLightIndex, GfxDrawList *drawListShadow, GfxDrawListType drawlistyType)
{
  char *fmt; 
  unsigned int surfArraySize; 
  GfxSurface **surfLists; 
  GfxBspSurfListOut out; 
  __int64 callbackContext; 
  char v28; 

  _RSI = planes;
  _RBX = light;
  if ( !drawListShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 663, ASSERT_TYPE_ASSERT, "(drawListShadow)", (const char *)&queryFormat, "drawListShadow") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymm1, ymmword ptr [rsi+20h]
  }
  surfLists = (GfxSurface **)&v28;
  callbackContext = 0i64;
  __asm
  {
    vmovups [rsp+4108h+var_4090], ymm0
    vmovups ymm0, ymmword ptr [rsi+40h]
    vmovups [rsp+4108h+var_4070], ymm1
    vmovups [rsp+4108h+var_4050], ymm0
  }
  if ( R_SphereSurfaces(collInfo, allowSurf, &callbackContext, &surfLists, 0x800u, &surfArraySize, 1u) )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+3Ch]
      vmovss  xmm2, dword ptr [rbx+38h]
      vmovss  xmm0, dword ptr [rbx+40h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+4108h+fmt], xmm0
    }
    R_WarnOncePerFrame(R_WARN_BSPSURF_SPOT_LIGHT_LIMIT, 2048i64, _R8, _R9, fmt);
  }
  if ( surfArraySize )
  {
    out.drawlistType = drawlistyType;
    *(_QWORD *)&out.missingTransient = 0i64;
    out.bspSurfList = &drawListShadow->bspSurfList;
    R_GetSortedBspSurfListIndirect(surfLists, surfArraySize, &out);
  }
}

/*
==============
R_GetStaticGeoDynamicLightSurfs
==============
*/
void R_GetStaticGeoDynamicLightSurfs(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  __int64 v2; 
  __int64 sceneLightIndex; 
  GfxLight *v5; 
  __int64 v6; 
  unsigned int v27; 
  unsigned int *callbackContext; 
  bool enabled; 
  R_CollInfo collInfo; 
  unsigned __int16 smodelList[1024]; 

  v2 = spotShadowUpdateIndex;
  collInfo.nodeCount = 0;
  collInfo.planeCount = 0;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 748, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 749, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 750, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->sceneLightCount <= rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 751, ASSERT_TYPE_ASSERT, "(frontEndDataOut->sceneLightCount > rgp.world->primaryLightCount)", (const char *)&queryFormat, "frontEndDataOut->sceneLightCount > rgp.world->primaryLightCount") )
    __debugbreak();
  sceneLightIndex = frontEndDataOut->spotShadowUpdates[v2].sceneLightIndex;
  if ( (unsigned int)sceneLightIndex < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 754, ASSERT_TYPE_ASSERT, "(!R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "!R_IsPrimaryLight( sceneLightIndex )") )
    __debugbreak();
  v5 = &frontEndDataOut->sceneLights[sceneLightIndex];
  if ( (unsigned __int8)(v5->type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 757, ASSERT_TYPE_ASSERT, "(light->type == 3 || light->type == 2)", (const char *)&queryFormat, "light->type == GFX_LIGHT_TYPE_OMNI || light->type == GFX_LIGHT_TYPE_SPOT") )
    __debugbreak();
  if ( (unsigned int)sceneLightIndex < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 738, ASSERT_TYPE_ASSERT, "(sceneLightIndex >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "sceneLightIndex >= rgp.world->primaryLightCount") )
    __debugbreak();
  v6 = (unsigned int)(sceneLightIndex - rgp.world->primaryLightCount);
  _RCX = scene.sceneDynamicLight[v6];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+104h]
    vmovss  xmm2, dword ptr [rcx+108h]
    vmovss  xmm3, dword ptr [rcx+10Ch]
    vmulss  xmm1, xmm0, xmm0
  }
  _RBX = _RCX->planes;
  __asm
  {
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rcx+0F8h]
    vmovss  dword ptr [rsp+4958h+collInfo.sphere.origin], xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
    vmovss  xmm1, dword ptr [rcx+0FCh]
    vmovss  dword ptr [rsp+4958h+collInfo.sphere.origin+4], xmm1
    vmovss  xmm0, dword ptr [rcx+100h]
    vmovss  dword ptr [rsp+4958h+collInfo.sphere.origin+8], xmm0
    vmovss  [rsp+4958h+collInfo.sphere.radiusSq], xmm4
    vsqrtss xmm1, xmm4, xmm4
    vmovss  [rsp+4958h+collInfo.sphere.radius], xmm1
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+4958h+collInfo.planes], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rsp+4958h+collInfo.planes+20h], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
  }
  collInfo.planeCount = 6;
  __asm { vmovups ymmword ptr [rsp+4958h+collInfo.planes+40h], ymm0 }
  R_SetupSphereStaticGeo(&collInfo, &frontEndDataOut->transientDrawContext);
  R_GetBspSpotLightSurfs(v5, _RBX, &collInfo, v6, &viewInfo->drawList[(int)v2 + 29], (GfxDrawListType)(v2 + 29));
  callbackContext = rgp.world->dpvs.smodelVisData[0];
  enabled = sm_dynlightAllSModels->current.enabled;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rsp+4958h+var_491C], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups [rsp+4958h+var_48FC], ymm1
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups [rsp+4958h+var_48DC], ymm0
  }
  v27 = R_SphereStaticModels(&collInfo, R_AllowStaticModelSpotLight, &callbackContext, smodelList, 0x400u);
  if ( v27 == 1024 )
    R_WarnOncePerFrame(R_WARN_DLIGHT_SMODEL_LIMIT, 1024i64);
  R_AddAllStaticModelSurfacesDynLight(viewInfo, sceneLightIndex, smodelList, v27, &viewInfo->drawList[(int)v2 + 29], v2);
}

/*
==============
R_InitLightDefs
==============
*/
void R_InitLightDefs(void)
{
  rgp.dlightDef = DB_FindXAssetHeader(ASSET_TYPE_LIGHT_DEF, "light_dynamic", 1).lightDef;
}

/*
==============
R_LightFadeOffsetRuntimeEncoding
==============
*/
void R_LightFadeOffsetRuntimeEncoding(vec2_t *fadeOffsetStartEnd, unsigned __int8 type)
{
  bool v8; 
  bool v9; 
  bool v12; 
  bool v13; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RBX = fadeOffsetStartEnd;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
  }
  v8 = type < 3u;
  v9 = type <= 3u;
  if ( type == 3 )
  {
    __asm
    {
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
      vmovss  dword ptr [rcx], xmm0
      vmovss  dword ptr [rcx+4], xmm1
    }
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vsubss  xmm7, xmm1, xmm0
  }
  if ( type < 3u )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 241, ASSERT_TYPE_ASSERT, "(fadeOffsetStartEnd[0] >= 0.0f)", (const char *)&queryFormat, "fadeOffsetStartEnd[0] >= 0.0f");
    v8 = 0;
    v9 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( v8 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 242, ASSERT_TYPE_ASSERT, "(endMinusStart >= 0.0f)", (const char *)&queryFormat, "endMinusStart >= 0.0f");
    v9 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm7, cs:__real@3a83126f
    vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, cs:__real@3f800000
  }
  if ( !v9 )
  {
    __asm
    {
      vdivss  xmm6, xmm0, xmm7
      vmulss  xmm1, xmm6, dword ptr [rbx]
      vxorps  xmm0, xmm1, xmm2
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  dword ptr [rbx], xmm6
  }
  if ( type == 3 )
  {
    __asm
    {
      vxorps  xmm1, xmm0, xmm2
      vmovss  dword ptr [rbx+4], xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
R_MostImportantLights
==============
*/
void R_MostImportantLights(const GfxDynamicLight **lights, int lightCount, int keepCount)
{
  int v7; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  unsigned __int8 type; 
  bool v18; 
  __int64 v44; 
  unsigned __int8 v46; 
  bool v47; 
  const GfxDynamicLight *v73; 
  const GfxDynamicLight *v74; 
  int v78; 
  int v79; 

  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps [rsp+0A8h+var_58], xmm7
  }
  v7 = lightCount;
  __asm { vmovaps [rsp+0A8h+var_68], xmm8 }
  v79 = keepCount;
  v78 = lightCount;
  if ( lightCount <= keepCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 391, ASSERT_TYPE_ASSERT, "(lightCount > keepCount)", (const char *)&queryFormat, "lightCount > keepCount") )
    __debugbreak();
  if ( keepCount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 392, ASSERT_TYPE_ASSERT, "(keepCount >= 1)", (const char *)&queryFormat, "keepCount >= 1") )
    __debugbreak();
  while ( 1 )
  {
    _R14 = *lights;
    v10 = 0;
    v11 = v7;
    v12 = v7;
    v13 = 0i64;
    while ( 1 )
    {
      if ( v12 < v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 405, ASSERT_TYPE_SANITY, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
        __debugbreak();
      do
      {
        v14 = v10;
        v15 = v13;
        ++v10;
        if ( ++v13 >= v12 )
          break;
        _RCX = lights[v13];
        type = _RCX->lightCommon.type;
        if ( _RCX->lightCommon.type == _R14->lightCommon.type )
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4; r_globals_t rg
            vsubss  xmm4, xmm0, dword ptr [rcx+3Ch]
            vsubss  xmm0, xmm0, dword ptr [r14+3Ch]
            vmovss  xmm2, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg; r_globals_t rg
            vsubss  xmm7, xmm2, dword ptr [rcx+38h]
            vsubss  xmm2, xmm2, dword ptr [r14+38h]
            vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8; r_globals_t rg
            vsubss  xmm6, xmm1, dword ptr [rcx+40h]
            vsubss  xmm3, xmm1, dword ptr [r14+40h]
            vmovss  xmm5, dword ptr [rcx+44h]
            vmovss  xmm8, dword ptr [r14+44h]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm4, xmm4
            vmulss  xmm0, xmm5, xmm5
            vmulss  xmm5, xmm3, xmm0
            vmulss  xmm1, xmm7, xmm7
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm1, xmm8, xmm8
            vmulss  xmm2, xmm4, xmm1
            vcomiss xmm5, xmm2
          }
          v18 = type >= _R14->lightCommon.type;
        }
        else
        {
          v18 = type == 2;
        }
      }
      while ( v18 );
      if ( v15 >= v12 )
        break;
      do
      {
        --v11;
        v44 = v12--;
        if ( v44 <= v13 )
          break;
        _RCX = lights[v12];
        v46 = _R14->lightCommon.type;
        if ( _R14->lightCommon.type == _RCX->lightCommon.type )
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4; r_globals_t rg
            vsubss  xmm4, xmm0, dword ptr [r14+3Ch]
            vsubss  xmm0, xmm0, dword ptr [rcx+3Ch]
            vmovss  xmm2, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg; r_globals_t rg
            vsubss  xmm7, xmm2, dword ptr [r14+38h]
            vsubss  xmm2, xmm2, dword ptr [rcx+38h]
            vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8; r_globals_t rg
            vsubss  xmm6, xmm1, dword ptr [r14+40h]
            vsubss  xmm3, xmm1, dword ptr [rcx+40h]
            vmovss  xmm5, dword ptr [r14+44h]
            vmovss  xmm8, dword ptr [rcx+44h]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm4, xmm4
            vmulss  xmm0, xmm5, xmm5
            vmulss  xmm5, xmm3, xmm0
            vmulss  xmm1, xmm7, xmm7
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm1, xmm8, xmm8
            vmulss  xmm2, xmm4, xmm1
            vcomiss xmm5, xmm2
          }
          v47 = v46 >= _RCX->lightCommon.type;
        }
        else
        {
          v47 = v46 == 2;
        }
      }
      while ( v47 );
      if ( v15 >= v12 )
        break;
      v73 = lights[v13];
      lights[v13] = lights[v12];
      lights[v12] = v73;
    }
    if ( v10 != v11 + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 427, ASSERT_TYPE_SANITY, "( bot == top + 1 )", (const char *)&queryFormat, "bot == top + 1") )
      __debugbreak();
    if ( v10 == v78 )
    {
      v74 = *lights;
      v10 = v14;
      *lights = lights[v11];
      lights[v11] = v74;
    }
    if ( v10 == v79 )
      break;
    if ( v78 <= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 443, ASSERT_TYPE_SANITY, "( lightCount > bot )", (const char *)&queryFormat, "lightCount > bot") )
      __debugbreak();
    if ( v10 >= v79 )
    {
      v7 = v10;
      v78 = v10;
    }
    else
    {
      v7 = v78 - v10;
      v78 -= v10;
      v79 -= v10;
      lights += v10;
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_48]
    vmovaps xmm7, [rsp+0A8h+var_58]
    vmovaps xmm8, [rsp+0A8h+var_68]
  }
}

/*
==============
R_RegisterIESProfile
==============
*/
GfxIESProfile *R_RegisterIESProfile(const char *name)
{
  return 0i64;
}

/*
==============
R_RegisterLightDef
==============
*/
GfxLightDef *R_RegisterLightDef(const char *name)
{
  return DB_FindXAssetHeader(ASSET_TYPE_LIGHT_DEF, name, 1).lightDef;
}

/*
==============
R_SceneLightIndexToDynLightIndex
==============
*/
__int64 R_SceneLightIndexToDynLightIndex(unsigned int sceneLightIndex)
{
  if ( sceneLightIndex < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_light.cpp", 738, ASSERT_TYPE_ASSERT, "(sceneLightIndex >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "sceneLightIndex >= rgp.world->primaryLightCount") )
    __debugbreak();
  return sceneLightIndex - rgp.world->primaryLightCount;
}

/*
==============
R_ShutdownLightDefs
==============
*/
void R_ShutdownLightDefs(void)
{
  ;
}

/*
==============
R_SphereInPlanes
==============
*/

__int64 __fastcall R_SphereInPlanes(const vec4_t (*planes)[6], const vec3_t *center, double radius)
{
  unsigned int v7; 
  bool v9; 
  float *v10; 
  __int64 result; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  v7 = 0;
  __asm
  {
    vmovss  xmm6, dword ptr [rdx+4]
    vmovaps [rsp+38h+var_28], xmm7
  }
  v9 = __CFADD__(planes, 8i64) || (const vec4_t *)&(*planes)[0].xyz.z == NULL;
  v10 = &(*planes)[0].v[2];
  __asm
  {
    vmovss  xmm7, dword ptr [rdx]
    vmovaps [rsp+38h+var_38], xmm8
    vmovss  xmm8, dword ptr [rdx+8]
    vmovaps xmm4, xmm2
    vxorps  xmm5, xmm5, xmm5
  }
  while ( 1 )
  {
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rcx-4]
      vmulss  xmm0, xmm7, dword ptr [rcx-8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rcx]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rcx+4]
      vsubss  xmm3, xmm2, xmm4
      vcomiss xmm3, xmm5
    }
    if ( !v9 )
      break;
    ++v7;
    v10 += 4;
    v9 = v7 <= 6;
    if ( v7 >= 6 )
    {
      result = 1i64;
      __asm
      {
        vmovaps xmm6, [rsp+38h+var_18]
        vmovaps xmm7, [rsp+38h+var_28]
        vmovaps xmm8, [rsp+38h+var_38]
      }
      return result;
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
  result = 0i64;
  __asm
  {
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
  }
  return result;
}

/*
==============
R_UseBakedLighting
==============
*/
bool R_UseBakedLighting()
{
  if ( !rgp.world )
    return 0;
  return rgp.world->voxelTreeCount && R_GpuLightGrid_DataAvailable(rgp.world);
}

