/*
==============
R_InitPrimaryLights
==============
*/

void R_InitPrimaryLights(void)
{
  ?R_InitPrimaryLights@@YAXXZ();
}

/*
==============
R_InitSelectedPrimaryLights
==============
*/

void __fastcall R_InitSelectedPrimaryLights(unsigned int firstLight, unsigned int lastLight, GfxLight *primaryLights)
{
  ?R_InitSelectedPrimaryLights@@YAXIIPEAUGfxLight@@@Z(firstLight, lastLight, primaryLights);
}

/*
==============
R_InitPrimaryLights
==============
*/
void R_InitPrimaryLights(void)
{
  GfxWorld *world; 

  world = rgp.world;
  if ( !rgp.world )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 15004, (AssertType)rgp.world, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    world = rgp.world;
  }
  R_InitSelectedPrimaryLights(0, world->primaryLightCount - 1, world->primaryLights);
  R_SpotShadow_FlushStaleCache();
  R_SpotShadow_FlushActiveCache();
}

/*
==============
R_InitSelectedPrimaryLights
==============
*/
void R_InitSelectedPrimaryLights(unsigned int firstLight, unsigned int lastLight, GfxLight *primaryLights)
{
  unsigned int primaryLightCount; 
  char v30; 
  unsigned __int8 type; 
  char v38; 
  bool v39; 
  bool v46; 
  bool v47; 
  bool v48; 
  const char *defName; 
  GfxLightDef *v103; 
  int v104; 
  unsigned __int8 spawnFlags; 
  __int64 v117; 
  double v118; 
  __int64 v119; 
  vec3_t vec; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14890, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  primaryLightCount = rgp.world->primaryLightCount;
  if ( (firstLight >= primaryLightCount || lastLight >= primaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14891, ASSERT_TYPE_ASSERT, "(firstLight < rgp.world->primaryLightCount && lastLight < rgp.world->primaryLightCount)", (const char *)&queryFormat, "firstLight < rgp.world->primaryLightCount && lastLight < rgp.world->primaryLightCount") )
    __debugbreak();
  if ( firstLight <= lastLight )
    goto LABEL_12;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14892, ASSERT_TYPE_ASSERT, "(firstLight >= 0 && firstLight <= lastLight)", (const char *)&queryFormat, "firstLight >= 0 && firstLight <= lastLight") )
    __debugbreak();
  if ( firstLight <= lastLight )
  {
LABEL_12:
    __asm
    {
      vmovaps [rsp+168h+var_48], xmm6
      vmovss  xmm6, cs:__real@3dcccccd
      vmovaps [rsp+168h+var_78], xmm9
      vmovaps [rsp+168h+var_88], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps [rsp+168h+var_98], xmm11
      vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+168h+var_A8], xmm12
      vmovss  xmm12, cs:__real@3b808081
      vmovaps [rsp+168h+var_B8], xmm13
      vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+168h+var_C8], xmm14
      vmovss  xmm14, cs:__real@80000000
      vmovaps [rsp+168h+var_D8], xmm15
      vmovss  xmm15, cs:__real@3c23d70a
      vmovaps [rsp+168h+var_58], xmm7
      vmovaps [rsp+168h+var_68], xmm8
      vxorps  xmm9, xmm9, xmm9
    }
    do
    {
      if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
        __debugbreak();
      if ( firstLight >= comWorld.primaryLightCount )
      {
        LODWORD(v119) = comWorld.primaryLightCount;
        LODWORD(v117) = firstLight;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v117, v119) )
          __debugbreak();
      }
      _RDI = &primaryLights[firstLight];
      _RBX = &comWorld.primaryLights[firstLight];
      _RDI->type = _RBX->type;
      _RDI->canUseShadowMap = _RBX->canUseShadowMap;
      _RDI->needsDynamicShadows = _RBX->needsDynamicShadows;
      _RDI->isVolumetric = _RBX->isVolumetric;
      _RDI->entityId = _RBX->entityId;
      _RDI->intensity = _RBX->intensity;
      _RDI->uvIntensity = _RBX->uvIntensity;
      _RDI->irIntensity = _RBX->irIntensity;
      _RDI->heatIntensity = _RBX->heatIntensity;
      _RDI->colorLinearSrgb.v[0] = _RBX->colorLinearSrgb.v[0];
      _RDI->colorLinearSrgb.v[1] = _RBX->colorLinearSrgb.v[1];
      _RDI->colorLinearSrgb.v[2] = _RBX->colorLinearSrgb.v[2];
      _RDI->dir.v[0] = _RBX->dir.v[0];
      _RDI->dir.v[1] = _RBX->dir.v[1];
      _RDI->dir.v[2] = _RBX->dir.v[2];
      _RDI->up.v[0] = _RBX->up.v[0];
      _RDI->up.v[1] = _RBX->up.v[1];
      _RDI->up.v[2] = _RBX->up.v[2];
      _RDI->origin.v[0] = _RBX->origin.v[0];
      _RDI->origin.v[1] = _RBX->origin.v[1];
      _RDI->origin.v[2] = _RBX->origin.v[2];
      _RDI->radius = _RBX->radius;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+84h]
        vmaxss  xmm1, xmm0, xmm6
        vminss  xmm2, xmm1, xmm10
        vmovss  dword ptr [rdi+84h], xmm2
      }
      _RDI->fadeOffsetRt.v[0] = _RBX->fadeOffset.v[0];
      _RDI->fadeOffsetRt.v[1] = _RBX->fadeOffset.v[1];
      R_LightFadeOffsetRuntimeEncoding(&_RDI->fadeOffsetRt, _RBX->type);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+5Ch]
        vmaxss  xmm1, xmm0, xmm10
      }
      _R14 = &_RBX->bulbLength;
      __asm
      {
        vmovss  dword ptr [rdi+50h], xmm1
        vmovss  xmm0, dword ptr [r14]
        vucomiss xmm0, xmm9
      }
      if ( !v30 )
        goto LABEL_23;
      __asm { vucomiss xmm9, dword ptr [rbx+64h] }
      if ( !v30 )
        goto LABEL_23;
      __asm { vucomiss xmm9, dword ptr [rbx+68h] }
      if ( v30 )
      {
        _RSI = &_RDI->bulbLength;
        _RDI->bulbLength.v[0] = 0.0039215689;
        _RDI->bulbLength.v[1] = 0.0039215689;
        __asm { vmovaps xmm0, xmm12 }
      }
      else
      {
LABEL_23:
        _RSI = &_RDI->bulbLength;
        __asm { vmovss  dword ptr [rsi], xmm0 }
        _RDI->bulbLength.v[1] = _RBX->bulbLength.v[1];
        __asm { vmovss  xmm0, dword ptr [rbx+68h] }
      }
      __asm { vmovss  dword ptr [rsi+8], xmm0 }
      type = _RBX->type;
      v39 = type == 2;
      v38 = type - 2;
      if ( v39 || v38 == 1 )
      {
        __asm { vcomiss xmm10, dword ptr [rbx+8Ch] }
        if ( !v39 && v38 != 1 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+2Ch]
            vmovss  xmm2, dword ptr [rbx+30h]
            vxorps  xmm1, xmm0, xmm11
            vxorps  xmm0, xmm2, xmm11
            vmovss  dword ptr [rsp+168h+vec], xmm1
            vmovss  xmm1, dword ptr [rbx+34h]
            vxorps  xmm2, xmm1, xmm11
            vmovss  dword ptr [rsp+168h+vec+8], xmm2
            vmovss  dword ptr [rsp+168h+vec+4], xmm0
          }
          vectoangles(&vec, &angles);
          AnglesToAxis(&angles, &axis);
          v46 = _R14 < _RSI;
          v47 = _R14 <= _RSI;
          if ( _R14 == _RSI )
          {
            v48 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out");
            v46 = 0;
            v47 = !v48;
            if ( v48 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+168h+axis]
            vmulss  xmm3, xmm0, dword ptr [r14]
            vmovss  xmm1, dword ptr [rsp+168h+axis+0Ch]
            vmulss  xmm2, xmm1, dword ptr [r14+4]
            vmovss  xmm0, dword ptr [rsp+168h+axis+18h]
            vmulss  xmm1, xmm0, dword ptr [r14+8]
            vmovss  xmm0, dword ptr [rsp+168h+axis+4]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm6, xmm4, xmm1
            vmovss  xmm1, dword ptr [rsp+168h+axis+10h]
            vmovss  dword ptr [rsi], xmm6
            vmulss  xmm3, xmm0, dword ptr [r14]
            vmulss  xmm2, xmm1, dword ptr [r14+4]
            vmovss  xmm0, dword ptr [rsp+168h+axis+1Ch]
            vmulss  xmm1, xmm0, dword ptr [r14+8]
            vmovss  xmm0, dword ptr [rsp+168h+axis+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm7, xmm4, xmm1
            vmovss  xmm1, dword ptr [rsp+168h+axis+14h]
            vmovss  dword ptr [rsi+4], xmm7
            vmulss  xmm3, xmm0, dword ptr [r14]
            vmulss  xmm2, xmm1, dword ptr [r14+4]
            vmovss  xmm0, dword ptr [rsp+168h+axis+20h]
            vmulss  xmm1, xmm0, dword ptr [r14+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm8, xmm4, xmm1
            vmovss  dword ptr [rsi+8], xmm8
            vmovss  xmm0, dword ptr [r14]
            vmovss  xmm2, dword ptr [r14+4]
            vmovss  xmm3, dword ptr [r14+8]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, xmm10
          }
          if ( !v47 )
          {
            __asm
            {
              vmulss  xmm0, xmm7, xmm7
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm8, xmm8
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm3, xmm2, xmm2
              vcmpless xmm0, xmm3, xmm14
              vblendvps xmm0, xmm3, xmm10, xmm0
              vdivss  xmm5, xmm10, xmm0
              vmulss  xmm0, xmm5, xmm7
              vmulss  xmm3, xmm0, dword ptr [rdi+24h]
              vmulss  xmm1, xmm6, xmm5
              vmulss  xmm2, xmm1, dword ptr [rdi+20h]
              vaddss  xmm4, xmm3, xmm2
              vmulss  xmm0, xmm5, xmm8
              vmulss  xmm1, xmm0, dword ptr [rdi+28h]
              vaddss  xmm2, xmm4, xmm1
              vandps  xmm2, xmm2, xmm13
              vcomiss xmm2, xmm15
            }
            if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14958, ASSERT_TYPE_ASSERT, "(fdot < 0.01f)", (const char *)&queryFormat, "fdot < 0.01f") )
              __debugbreak();
          }
          __asm { vmovss  xmm6, cs:__real@3dcccccd }
        }
      }
      _RDI->cosHalfFovCollimation = _RBX->cosHalfFovCollimation;
      if ( _RBX->canUseShadowMap )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+6Ch]
          vcomiss xmm0, xmm9
        }
        if ( _RBX->canUseShadowMap )
          __asm { vcomiss xmm0, xmm10 }
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+168h+var_140], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14965, ASSERT_TYPE_ASSERT, "( ( !in->canUseShadowMap || in->cosHalfFovOuter > 0.0f && in->cosHalfFovOuter < 1.0f ) )", "( in->cosHalfFovOuter ) = %g", v118) )
          __debugbreak();
      }
      _RDI->cosHalfFovOuter = _RBX->cosHalfFovOuter;
      _RDI->cosHalfFovInner = _RBX->cosHalfFovInner;
      _RDI->tonemappingScaleFactor = 0.0;
      _RDI->shadowNearPlaneBias = _RBX->shadowNearPlaneBias;
      _RDI->shadowSoftness = _RBX->shadowSoftness;
      _RDI->shadowBias = _RBX->shadowBias;
      _RDI->shadowArea = _RBX->shadowArea;
      defName = _RBX->defName;
      if ( defName )
        v103 = R_RegisterLightDef(defName);
      else
        v103 = NULL;
      _RDI->def = v103;
      v104 = 1;
      _RDI->flags = 1;
      spawnFlags = _RBX->spawnFlags;
      if ( (_RBX->spawnFlags & 0x84) != 0 )
      {
        _RDI->flags = 3;
        v104 = 3;
        spawnFlags = _RBX->spawnFlags;
      }
      if ( (spawnFlags & 0x10) != 0 )
        _RDI->flags = v104 | 4;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vcomiss xmm0, xmm9
      }
      ++firstLight;
    }
    while ( firstLight <= lastLight );
    __asm
    {
      vmovaps xmm15, [rsp+168h+var_D8]
      vmovaps xmm14, [rsp+168h+var_C8]
      vmovaps xmm13, [rsp+168h+var_B8]
      vmovaps xmm12, [rsp+168h+var_A8]
      vmovaps xmm11, [rsp+168h+var_98]
      vmovaps xmm10, [rsp+168h+var_88]
      vmovaps xmm9, [rsp+168h+var_78]
      vmovaps xmm8, [rsp+168h+var_68]
      vmovaps xmm7, [rsp+168h+var_58]
      vmovaps xmm6, [rsp+168h+var_48]
    }
  }
}

