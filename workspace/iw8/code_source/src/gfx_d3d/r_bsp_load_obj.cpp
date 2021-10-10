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
  GfxLight *v7; 
  ComPrimaryLight *v8; 
  float *v; 
  float v15; 
  float *v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  float cosHalfFovOuter; 
  const char *defName; 
  GfxLightDef *v33; 
  int v34; 
  unsigned __int8 spawnFlags; 
  float uvIntensity; 
  __int64 v37; 
  __int64 v38; 
  vec3_t vec; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14890, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  primaryLightCount = rgp.world->primaryLightCount;
  if ( (firstLight >= primaryLightCount || lastLight >= primaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14891, ASSERT_TYPE_ASSERT, "(firstLight < rgp.world->primaryLightCount && lastLight < rgp.world->primaryLightCount)", (const char *)&queryFormat, "firstLight < rgp.world->primaryLightCount && lastLight < rgp.world->primaryLightCount") )
    __debugbreak();
  if ( firstLight <= lastLight )
    goto LABEL_49;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14892, ASSERT_TYPE_ASSERT, "(firstLight >= 0 && firstLight <= lastLight)", (const char *)&queryFormat, "firstLight >= 0 && firstLight <= lastLight") )
    __debugbreak();
  if ( firstLight <= lastLight )
  {
LABEL_49:
    do
    {
      if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
        __debugbreak();
      if ( firstLight >= comWorld.primaryLightCount )
      {
        LODWORD(v38) = comWorld.primaryLightCount;
        LODWORD(v37) = firstLight;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v37, v38) )
          __debugbreak();
      }
      v7 = &primaryLights[firstLight];
      v8 = &comWorld.primaryLights[firstLight];
      v7->type = v8->type;
      v7->canUseShadowMap = v8->canUseShadowMap;
      v7->needsDynamicShadows = v8->needsDynamicShadows;
      v7->isVolumetric = v8->isVolumetric;
      v7->entityId = v8->entityId;
      v7->intensity = v8->intensity;
      v7->uvIntensity = v8->uvIntensity;
      v7->irIntensity = v8->irIntensity;
      v7->heatIntensity = v8->heatIntensity;
      v7->colorLinearSrgb.v[0] = v8->colorLinearSrgb.v[0];
      v7->colorLinearSrgb.v[1] = v8->colorLinearSrgb.v[1];
      v7->colorLinearSrgb.v[2] = v8->colorLinearSrgb.v[2];
      v7->dir.v[0] = v8->dir.v[0];
      v7->dir.v[1] = v8->dir.v[1];
      v7->dir.v[2] = v8->dir.v[2];
      v7->up.v[0] = v8->up.v[0];
      v7->up.v[1] = v8->up.v[1];
      v7->up.v[2] = v8->up.v[2];
      v7->origin.v[0] = v8->origin.v[0];
      v7->origin.v[1] = v8->origin.v[1];
      v7->origin.v[2] = v8->origin.v[2];
      v7->radius = v8->radius;
      _XMM0 = LODWORD(v8->distanceFalloff);
      __asm
      {
        vmaxss  xmm1, xmm0, xmm6
        vminss  xmm2, xmm1, xmm10
      }
      v7->distanceFalloff = *(float *)&_XMM2;
      v7->fadeOffsetRt.v[0] = v8->fadeOffset.v[0];
      v7->fadeOffsetRt.v[1] = v8->fadeOffset.v[1];
      R_LightFadeOffsetRuntimeEncoding(&v7->fadeOffsetRt, v8->type);
      _XMM0 = LODWORD(v8->bulbRadius);
      __asm { vmaxss  xmm1, xmm0, xmm10 }
      v = v8->bulbLength.v;
      v7->bulbRadius = *(float *)&_XMM1;
      v15 = v8->bulbLength.v[0];
      if ( v15 == 0.0 && v8->bulbLength.v[1] == 0.0 && v8->bulbLength.v[2] == 0.0 )
      {
        v16 = v7->bulbLength.v;
        v7->bulbLength.v[0] = 0.0039215689;
        v7->bulbLength.v[1] = 0.0039215689;
        v17 = FLOAT_0_0039215689;
      }
      else
      {
        v16 = v7->bulbLength.v;
        v7->bulbLength.v[0] = v15;
        v7->bulbLength.v[1] = v8->bulbLength.v[1];
        v17 = v8->bulbLength.v[2];
      }
      v16[2] = v17;
      if ( (unsigned __int8)(v8->type - 2) <= 1u && v8->rotationLimit < 1.0 )
      {
        LODWORD(v18) = LODWORD(v8->dir.v[1]) ^ _xmm;
        LODWORD(vec.v[0]) = LODWORD(v8->dir.v[0]) ^ _xmm;
        LODWORD(vec.v[2]) = LODWORD(v8->dir.v[2]) ^ _xmm;
        vec.v[1] = v18;
        vectoangles(&vec, &angles);
        AnglesToAxis(&angles, &axis);
        if ( v == v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        v19 = LODWORD(axis.m[0].v[0]);
        v20 = axis.m[0].v[1];
        *(float *)&v19 = (float)((float)(axis.m[0].v[0] * v8->bulbLength.v[0]) + (float)(axis.m[1].v[0] * v8->bulbLength.v[1])) + (float)(axis.m[2].v[0] * v8->bulbLength.v[2]);
        v21 = v19;
        v22 = axis.m[1].v[1];
        *v16 = *(float *)&v19;
        *(float *)&v19 = v20 * *v;
        v23 = axis.m[0].v[2];
        v24 = (float)(*(float *)&v19 + (float)(v22 * v8->bulbLength.v[1])) + (float)(axis.m[2].v[1] * v8->bulbLength.v[2]);
        v25 = axis.m[1].v[2];
        v16[1] = v24;
        v26 = (float)((float)(v23 * v8->bulbLength.v[0]) + (float)(v25 * v8->bulbLength.v[1])) + (float)(axis.m[2].v[2] * v8->bulbLength.v[2]);
        v16[2] = v26;
        if ( (float)((float)((float)(*v * *v) + (float)(v8->bulbLength.v[1] * v8->bulbLength.v[1])) + (float)(v8->bulbLength.v[2] * v8->bulbLength.v[2])) > 1.0 )
        {
          v27 = v21;
          *(float *)&v27 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(v24 * v24)) + (float)(v26 * v26));
          _XMM3 = v27;
          __asm
          {
            vcmpless xmm0, xmm3, xmm14
            vblendvps xmm0, xmm3, xmm10, xmm0
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v24) * v7->dir.v[1]) + (float)((float)(*(float *)&v21 * (float)(1.0 / *(float *)&_XMM0)) * v7->dir.v[0])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v26) * v7->dir.v[2])) & _xmm) >= 0.0099999998 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14958, ASSERT_TYPE_ASSERT, "(fdot < 0.01f)", (const char *)&queryFormat, "fdot < 0.01f") )
            __debugbreak();
        }
      }
      v7->cosHalfFovCollimation = v8->cosHalfFovCollimation;
      if ( v8->canUseShadowMap )
      {
        cosHalfFovOuter = v8->cosHalfFovOuter;
        if ( (cosHalfFovOuter <= 0.0 || cosHalfFovOuter >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_load_obj.cpp", 14965, ASSERT_TYPE_ASSERT, "( ( !in->canUseShadowMap || in->cosHalfFovOuter > 0.0f && in->cosHalfFovOuter < 1.0f ) )", "( in->cosHalfFovOuter ) = %g", cosHalfFovOuter) )
          __debugbreak();
      }
      v7->cosHalfFovOuter = v8->cosHalfFovOuter;
      v7->cosHalfFovInner = v8->cosHalfFovInner;
      v7->tonemappingScaleFactor = 0.0;
      v7->shadowNearPlaneBias = v8->shadowNearPlaneBias;
      v7->shadowSoftness = v8->shadowSoftness;
      v7->shadowBias = v8->shadowBias;
      v7->shadowArea = v8->shadowArea;
      defName = v8->defName;
      if ( defName )
        v33 = R_RegisterLightDef(defName);
      else
        v33 = NULL;
      v7->def = v33;
      v34 = 1;
      v7->flags = 1;
      spawnFlags = v8->spawnFlags;
      if ( (v8->spawnFlags & 0x84) != 0 )
      {
        v7->flags = 3;
        v34 = 3;
        spawnFlags = v8->spawnFlags;
      }
      if ( (spawnFlags & 0x10) != 0 )
      {
        v34 |= 4u;
        v7->flags = v34;
      }
      uvIntensity = v7->uvIntensity;
      if ( uvIntensity < 0.0 )
      {
        v7->uvIntensity = COERCE_FLOAT(LODWORD(uvIntensity) ^ _xmm);
        v7->flags = v34 | 0x4000;
      }
      ++firstLight;
    }
    while ( firstLight <= lastLight );
  }
}

