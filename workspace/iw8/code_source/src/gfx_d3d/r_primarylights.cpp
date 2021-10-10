/*
==============
R_IsDynEntClientVisibleToPrimaryLight
==============
*/

int __fastcall R_IsDynEntClientVisibleToPrimaryLight(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, unsigned int primaryLightIndex)
{
  return ?R_IsDynEntClientVisibleToPrimaryLight@@YAHW4LocalClientNum_t@@GW4DynEntityBasis@@I@Z(localClientNum, dynEntClientId, basis, primaryLightIndex);
}

/*
==============
R_LinkBoxEntityToPrimaryLights
==============
*/

unsigned int __fastcall R_LinkBoxEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const Bounds *bounds)
{
  return ?R_LinkBoxEntityToPrimaryLights@@YAIIIPEBUBounds@@@Z(localClientNum, entityNum, bounds);
}

/*
==============
GfxSpotShadowUpdateCandidate::Compare
==============
*/

int __fastcall GfxSpotShadowUpdateCandidate::Compare(const void *v0, const void *v1)
{
  return ?Compare@GfxSpotShadowUpdateCandidate@@SAHPEBX0@Z(v0, v1);
}

/*
==============
R_EntityHasSkinningAnimation
==============
*/

void __fastcall R_EntityHasSkinningAnimation(LocalClientNum_t localClientNum, unsigned int entnum)
{
  ?R_EntityHasSkinningAnimation@@YAXW4LocalClientNum_t@@I@Z(localClientNum, entnum);
}

/*
==============
R_GetPrimaryLightMotionBits
==============
*/

unsigned int *__fastcall R_GetPrimaryLightMotionBits(LocalClientNum_t localClientNum)
{
  return ?R_GetPrimaryLightMotionBits@@YAPEAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
R_CheckPrimaryLightMotionBit
==============
*/

int __fastcall R_CheckPrimaryLightMotionBit(LocalClientNum_t localClientNum, unsigned int primaryLightIndex)
{
  return ?R_CheckPrimaryLightMotionBit@@YAHW4LocalClientNum_t@@I@Z(localClientNum, primaryLightIndex);
}

/*
==============
R_AddDynamicSceneLight
==============
*/

unsigned int __fastcall R_AddDynamicSceneLight(GfxBackEndData *data, GfxViewInfo *viewInfo, const GfxLight *light)
{
  return ?R_AddDynamicSceneLight@@YAIPEAUGfxBackEndData@@PEAUGfxViewInfo@@PEBUGfxLight@@@Z(data, viewInfo, light);
}

/*
==============
R_DynEntClientMoved
==============
*/

void __fastcall R_DynEntClientMoved(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned __int16 dynEntClientId)
{
  ?R_DynEntClientMoved@@YAXW4LocalClientNum_t@@W4DynEntityBasis@@G@Z(localClientNum, basis, dynEntClientId);
}

/*
==============
R_ClearPrimaryLightMotionBit
==============
*/

void __fastcall R_ClearPrimaryLightMotionBit(LocalClientNum_t localClientNum, unsigned int primaryLightIndex)
{
  ?R_ClearPrimaryLightMotionBit@@YAXW4LocalClientNum_t@@I@Z(localClientNum, primaryLightIndex);
}

/*
==============
R_UnlinkEntityFromPrimaryLights
==============
*/

void __fastcall R_UnlinkEntityFromPrimaryLights(unsigned int localClientNum, unsigned int entityNum)
{
  ?R_UnlinkEntityFromPrimaryLights@@YAXII@Z(localClientNum, entityNum);
}

/*
==============
R_LinkSphereEntityToPrimaryLights
==============
*/

unsigned int __fastcall R_LinkSphereEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const vec3_t *origin, float radius)
{
  return ?R_LinkSphereEntityToPrimaryLights@@YAIIIAEBTvec3_t@@M@Z(localClientNum, entityNum, origin, radius);
}

/*
==============
R_LinkDynEntClientToPrimaryLights
==============
*/

unsigned int __fastcall R_LinkDynEntClientToPrimaryLights(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, const Bounds *bounds)
{
  return ?R_LinkDynEntClientToPrimaryLights@@YAIW4LocalClientNum_t@@GW4DynEntityBasis@@PEBUBounds@@@Z(localClientNum, dynEntClientId, basis, bounds);
}

/*
==============
R_ClearAllPrimaryLightMotionBits
==============
*/

void R_ClearAllPrimaryLightMotionBits(void)
{
  ?R_ClearAllPrimaryLightMotionBits@@YAXXZ();
}

/*
==============
R_ChooseShadowedLights
==============
*/

void __fastcall R_ChooseShadowedLights(GfxBackEndData *backEndData, GfxViewInfo *viewInfo, const GfxViewParms *viewParmsDpvs, const unsigned int *sceneLightIsUsed)
{
  ?R_ChooseShadowedLights@@YAXPEAUGfxBackEndData@@PEAUGfxViewInfo@@PEBUGfxViewParms@@PEBI@Z(backEndData, viewInfo, viewParmsDpvs, sceneLightIsUsed);
}

/*
==============
R_GetEntityPrimaryLightShadowBitArrayIndex
==============
*/

unsigned int __fastcall R_GetEntityPrimaryLightShadowBitArrayIndex(unsigned int primaryLightIndex)
{
  return ?R_GetEntityPrimaryLightShadowBitArrayIndex@@YAII@Z(primaryLightIndex);
}

/*
==============
R_NumPrimaryShadowLightsLinkedToDynEntClient
==============
*/

unsigned int __fastcall R_NumPrimaryShadowLightsLinkedToDynEntClient(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  return ?R_NumPrimaryShadowLightsLinkedToDynEntClient@@YAIW4LocalClientNum_t@@GW4DynEntityBasis@@@Z(localClientNum, dynEntClientId, basis);
}

/*
==============
R_EntityMoved
==============
*/

void __fastcall R_EntityMoved(LocalClientNum_t localClientNum, unsigned int entnum)
{
  ?R_EntityMoved@@YAXW4LocalClientNum_t@@I@Z(localClientNum, entnum);
}

/*
==============
R_IsEntityVisibleToPrimaryLight
==============
*/

int __fastcall R_IsEntityVisibleToPrimaryLight(unsigned int localClientNum, unsigned int entityNum, unsigned int primaryLightIndex)
{
  return ?R_IsEntityVisibleToPrimaryLight@@YAHIII@Z(localClientNum, entityNum, primaryLightIndex);
}

/*
==============
R_PopulateMotionBits
==============
*/

unsigned int __fastcall R_PopulateMotionBits(LocalClientNum_t localClientNum)
{
  return ?R_PopulateMotionBits@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
R_UnlinkDynEntClientFromPrimaryLights
==============
*/

void __fastcall R_UnlinkDynEntClientFromPrimaryLights(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  ?R_UnlinkDynEntClientFromPrimaryLights@@YAXW4LocalClientNum_t@@GW4DynEntityBasis@@@Z(localClientNum, dynEntClientId, basis);
}

/*
==============
R_IsDynEntClientVisibleToAnyShadowedPrimaryLight
==============
*/

int __fastcall R_IsDynEntClientVisibleToAnyShadowedPrimaryLight(LocalClientNum_t localClientNum, GfxBackEndData *data, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  return ?R_IsDynEntClientVisibleToAnyShadowedPrimaryLight@@YAHW4LocalClientNum_t@@PEAUGfxBackEndData@@GW4DynEntityBasis@@@Z(localClientNum, data, dynEntClientId, basis);
}

/*
==============
R_IsEntityVisibleToAnyShadowedPrimaryLight
==============
*/

int __fastcall R_IsEntityVisibleToAnyShadowedPrimaryLight(GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int entityNum)
{
  return ?R_IsEntityVisibleToAnyShadowedPrimaryLight@@YAHPEAUGfxBackEndData@@PEBUGfxViewInfo@@I@Z(data, viewInfo, entityNum);
}

/*
==============
R_PrimaryLightFrustumTestBox
==============
*/

bool __fastcall R_PrimaryLightFrustumTestBox(unsigned int primaryLightIndex, const Bounds *bounds)
{
  return ?R_PrimaryLightFrustumTestBox@@YA_NIPEBUBounds@@@Z(primaryLightIndex, bounds);
}

/*
==============
R_GetPrimaryLightEntityShadowBitsArray
==============
*/

unsigned int *__fastcall R_GetPrimaryLightEntityShadowBitsArray(unsigned int localClientNum, unsigned int entnum)
{
  return ?R_GetPrimaryLightEntityShadowBitsArray@@YAPEAIII@Z(localClientNum, entnum);
}

/*
==============
R_PrimaryLightFrustumTestSphere
==============
*/

bool __fastcall R_PrimaryLightFrustumTestSphere(unsigned int primaryLightIndex, const Sphere *sphere)
{
  return ?R_PrimaryLightFrustumTestSphere@@YA_NIPEBUSphere@@@Z(primaryLightIndex, sphere);
}

/*
==============
GfxSpotShadowUpdateCandidate::Compare
==============
*/
__int64 GfxSpotShadowUpdateCandidate::Compare(const void *v0, const void *v1)
{
  unsigned __int8 v2; 
  unsigned __int8 v3; 

  v2 = *((_BYTE *)v1 + 2);
  v3 = *((_BYTE *)v0 + 2);
  if ( v2 == v3 )
    return *((unsigned __int8 *)v0 + 3) - (unsigned int)*((unsigned __int8 *)v1 + 3);
  else
    return v2 - (unsigned int)v3;
}

/*
==============
R_AddDynamicSceneLight
==============
*/
__int64 R_AddDynamicSceneLight(GfxBackEndData *data, GfxViewInfo *viewInfo, const GfxLight *light)
{
  unsigned int sceneLightCount; 
  __int64 v6; 
  __int64 result; 
  __int64 v8; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 442, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->sceneLightCount >= 0x1984 )
  {
    LODWORD(v8) = data->sceneLightCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 443, ASSERT_TYPE_ASSERT, "(unsigned)( data->sceneLightCount ) < (unsigned)( (6500 + I_max( ( 4 + 1 ), I_max( 32, 32 ) )) )", "data->sceneLightCount doesn't index GFX_MAX_SCENE_LIGHTS\n\t%i not in [0, %i)", v8, 6532) )
      __debugbreak();
  }
  sceneLightCount = data->sceneLightCount;
  v6 = sceneLightCount;
  data->sceneLightCount = sceneLightCount + 1;
  result = sceneLightCount;
  *(__m256i *)&data->sceneLights[v6].type = *(__m256i *)&light->type;
  *(__m256i *)data->sceneLights[v6].dir.v = *(__m256i *)light->dir.v;
  *(__m256i *)&data->sceneLights[v6].origin.z = *(__m256i *)&light->origin.z;
  *(__m256i *)&data->sceneLights[v6].cosHalfFovOuter = *(__m256i *)&light->cosHalfFovOuter;
  *(_OWORD *)&data->sceneLights[v6].shadowArea = *(_OWORD *)&light->shadowArea;
  data->sceneLights[v6].def = light->def;
  return result;
}

/*
==============
R_AddPotentiallyShadowedLight
==============
*/
__int64 R_AddPotentiallyShadowedLight(const GfxLightScoreConfig *config, GfxBackEndData *backEndData, const GfxViewInfo *viewInfo, const GfxViewParms *viewParmsDpvs, unsigned int sceneLightIndex, GfxCandidateShadowedLight *candidateLights, unsigned int candidateLightCount, unsigned int candidateLightLimit, float scoreScale)
{
  GfxLight *v12; 
  float v13; 
  GfxCamera *p_camera; 
  float v15; 
  float v16; 
  bool useNightAndThermalVisionCombo; 
  float sceneSMLightScoreEyeProjectDist; 
  float sceneSMlightScorespotProjectFrac; 
  float radius; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float intensity; 
  float v26; 
  float v27; 
  float v28; 
  unsigned int v29; 
  GfxCandidateShadowedLight *v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  bool v35; 
  GfxCandidateShadowedLight *v36; 
  __int64 v37; 
  __int64 result; 

  g_lightScore[sceneLightIndex].score = 0.0;
  *(_DWORD *)&g_lightScore[sceneLightIndex].ranking0 = 16711935;
  if ( !sceneLightIndex )
    return candidateLightCount;
  if ( sceneLightIndex <= rgp.world->lastSunPrimaryLightIndex )
    return candidateLightCount;
  v12 = &backEndData->sceneLights[sceneLightIndex];
  if ( (backEndData->sceneLights[sceneLightIndex].flags & 0x10) != 0 )
    return candidateLightCount;
  if ( !backEndData->sceneLights[sceneLightIndex].canUseShadowMap )
    return candidateLightCount;
  if ( rg.smSpotDistCull > 0.0 )
  {
    v13 = rg.smSpotDistCull + backEndData->sceneLights[sceneLightIndex].radius;
    p_camera = &viewParmsDpvs->camera;
    v15 = backEndData->sceneLights[sceneLightIndex].origin.v[1] - p_camera->origin.v[1];
    v16 = backEndData->sceneLights[sceneLightIndex].origin.v[2] - p_camera->origin.v[2];
    if ( (float)((float)((float)(v15 * v15) + (float)((float)(backEndData->sceneLights[sceneLightIndex].origin.v[0] - p_camera->origin.v[0]) * (float)(backEndData->sceneLights[sceneLightIndex].origin.v[0] - p_camera->origin.v[0]))) + (float)(v16 * v16)) >= (float)(v13 * v13) || CullSphereFromCone(&backEndData->sceneLights[sceneLightIndex].origin, &backEndData->sceneLights[sceneLightIndex].dir, backEndData->sceneLights[sceneLightIndex].cosHalfFovOuter, &p_camera->origin, rg.smSpotDistCull) )
      return candidateLightCount;
  }
  useNightAndThermalVisionCombo = viewInfo->thermalParams.useNightAndThermalVisionCombo;
  if ( config->m_scoreSystem )
  {
    v27 = R_ShadowedSpotLightScore_MultiSamples(config, viewParmsDpvs, v12, useNightAndThermalVisionCombo);
  }
  else
  {
    sceneSMLightScoreEyeProjectDist = scene.sceneSMLightScoreEyeProjectDist;
    if ( (LODWORD(scene.sceneSMLightScoreEyeProjectDist) & 0x7F800000) == 2139095040 || scene.sceneSMLightScoreEyeProjectDist < 0.0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 332, ASSERT_TYPE_ASSERT, "( ( !IS_NAN(scene.sceneSMLightScoreEyeProjectDist) && (scene.sceneSMLightScoreEyeProjectDist >= 0.0f) ) )", "( scene.sceneSMLightScoreEyeProjectDist ) = %g", scene.sceneSMLightScoreEyeProjectDist) )
        __debugbreak();
      sceneSMLightScoreEyeProjectDist = scene.sceneSMLightScoreEyeProjectDist;
    }
    sceneSMlightScorespotProjectFrac = scene.sceneSMlightScorespotProjectFrac;
    if ( (LODWORD(scene.sceneSMlightScorespotProjectFrac) & 0x7F800000) == 2139095040 || scene.sceneSMlightScorespotProjectFrac < 0.0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 333, ASSERT_TYPE_ASSERT, "( ( !IS_NAN(scene.sceneSMlightScorespotProjectFrac) && (scene.sceneSMlightScorespotProjectFrac >= 0.0f) ) )", "( scene.sceneSMlightScorespotProjectFrac ) = %g", scene.sceneSMlightScorespotProjectFrac) )
        __debugbreak();
      sceneSMLightScoreEyeProjectDist = scene.sceneSMLightScoreEyeProjectDist;
      sceneSMlightScorespotProjectFrac = scene.sceneSMlightScorespotProjectFrac;
    }
    radius = v12->radius;
    LODWORD(v21) = COERCE_UNSIGNED_INT(radius * sceneSMlightScorespotProjectFrac) ^ _xmm;
    v22 = (float)(v12->origin.v[0] - (float)((float)(sceneSMLightScoreEyeProjectDist * viewParmsDpvs->camera.axis.m[0].v[0]) + viewParmsDpvs->camera.origin.v[0])) + (float)(v21 * v12->dir.v[0]);
    v23 = (float)(v12->origin.v[1] - (float)((float)(sceneSMLightScoreEyeProjectDist * viewParmsDpvs->camera.axis.m[0].v[1]) + viewParmsDpvs->camera.origin.v[1])) + (float)(v21 * v12->dir.v[1]);
    v24 = (float)(v12->origin.v[2] - (float)((float)(sceneSMLightScoreEyeProjectDist * viewParmsDpvs->camera.axis.m[0].v[2]) + viewParmsDpvs->camera.origin.v[2])) + (float)(v21 * v12->dir.v[2]);
    intensity = v12->intensity;
    v26 = fsqrt((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24));
    if ( useNightAndThermalVisionCombo )
      intensity = intensity + v12->irIntensity;
    v27 = (float)(radius * intensity) / (float)(v26 + 1.0);
  }
  v28 = v27 * scoreScale;
  g_lightScore[sceneLightIndex].score = v27 * scoreScale;
  if ( (float)(v27 * scoreScale) == 0.0 || v28 < sm_minSpotLightScore->current.value && !config->m_scoreSystem )
    return candidateLightCount;
  v29 = candidateLightCount;
  if ( candidateLightCount < 4 )
  {
LABEL_33:
    if ( v29 )
    {
      v36 = &candidateLights[v29];
      do
      {
        v37 = v29 - 1;
        if ( v28 <= candidateLights[v37].score )
          break;
        --v29;
        *v36-- = candidateLights[v37];
      }
      while ( (_DWORD)v37 );
    }
  }
  else
  {
    v30 = &candidateLights[candidateLightCount - 2];
    while ( 1 )
    {
      v31 = v29 - 1;
      if ( v28 <= candidateLights[v31].score )
        break;
      v30[2] = candidateLights[v31];
      v32 = v29 - 2;
      if ( v28 <= candidateLights[v32].score )
      {
        --v29;
        break;
      }
      v30[1] = candidateLights[v32];
      v33 = v29 - 3;
      if ( v28 <= candidateLights[v33].score )
      {
        v29 -= 2;
        break;
      }
      v34 = v29 - 4;
      v35 = v28 <= candidateLights[v34].score;
      *v30 = candidateLights[v33];
      if ( v35 )
      {
        v29 -= 3;
        break;
      }
      v29 -= 4;
      v30[-1] = candidateLights[v34];
      v30 -= 4;
      if ( (unsigned int)v34 <= 3 )
        goto LABEL_33;
    }
  }
  candidateLights[v29].score = v28;
  candidateLights[v29].sceneLightIndex = sceneLightIndex;
  result = candidateLightCount + 1;
  if ( (unsigned int)result > candidateLightLimit )
    return candidateLightLimit;
  return result;
}

/*
==============
R_BitsArrayToLightList
==============
*/
__int64 R_BitsArrayToLightList(const unsigned int *bitsArray, unsigned int bitsArraySize, unsigned int lightCount, unsigned __int16 *lightListOut, unsigned int lightListSize)
{
  const unsigned int *v5; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  unsigned int v14; 
  unsigned int v16; 
  unsigned int v18; 
  __int64 v19; 
  __int64 result; 
  const unsigned int *v21; 
  unsigned int v23; 
  unsigned int lightListSizea; 

  v21 = bitsArray;
  v5 = bitsArray;
  v23 = s_world.lastSunPrimaryLightIndex + 1;
  v9 = 0;
  v10 = bitsArraySize;
  v11 = 1;
  v12 = truncate_cast<unsigned short,unsigned int>(lightListSize - 1);
  v13 = truncate_cast<unsigned short,unsigned int>(lightCount);
  if ( v12 > v13 )
    v12 = v13;
  *lightListOut = v12;
  v14 = 0;
  for ( lightListSizea = 0; v14 < v10; v21 = v5 )
  {
    _EDI = *v5;
    if ( *v5 )
    {
      v16 = 32 * v14 + v23;
      do
      {
        __asm { tzcnt   ebp, edi }
        v18 = v16 + _EBP;
        if ( v11 >= lightListSize )
        {
          ++v9;
        }
        else
        {
          if ( v18 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v16 + _EBP), "unsigned", v18) )
            __debugbreak();
          v19 = v11++;
          lightListOut[v19] = v18;
        }
        _EDI &= ~(1 << _EBP);
      }
      while ( _EDI );
      v14 = lightListSizea;
      v5 = v21;
      v10 = bitsArraySize;
    }
    ++v14;
    ++v5;
    lightListSizea = v14;
  }
  result = v9;
  if ( v11 < lightListSize )
    lightListOut[v11] = 0;
  return result;
}

/*
==============
R_CheckPrimaryLightMotionBit
==============
*/
__int64 R_CheckPrimaryLightMotionBit(LocalClientNum_t localClientNum, unsigned int primaryLightIndex)
{
  unsigned int *PrimaryLightMotionBits; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  unsigned int v6; 

  if ( (primaryLightIndex <= rgp.world->lastSunPrimaryLightIndex || primaryLightIndex >= rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1689, ASSERT_TYPE_ASSERT, "(primaryLightIndex > rgp.world->lastSunPrimaryLightIndex && primaryLightIndex < rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount)", (const char *)&queryFormat, "primaryLightIndex > rgp.world->lastSunPrimaryLightIndex && primaryLightIndex < rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount") )
    __debugbreak();
  PrimaryLightMotionBits = R_GetPrimaryLightMotionBits(localClientNum);
  EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(primaryLightIndex);
  if ( !PrimaryLightMotionBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v6 = PrimaryLightMotionBits[EntityPrimaryLightShadowBitArrayIndex >> 5];
  return _bittest((const int *)&v6, EntityPrimaryLightShadowBitArrayIndex & 0x1F);
}

/*
==============
R_ChooseShadowedLights
==============
*/
void R_ChooseShadowedLights(GfxBackEndData *backEndData, GfxViewInfo *viewInfo, const GfxViewParms *viewParmsDpvs, const unsigned int *sceneLightIsUsed)
{
  __int128 v4; 
  int spotCandidateLimit; 
  const GfxViewParms *v7; 
  int integer; 
  const dvar_t *v10; 
  signed int v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  signed int v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const bitarray<1536> *v17; 
  unsigned int v18; 
  __int64 v19; 
  R_SpotShadow_StaleCacheEntry *staleCacheEntry; 
  const ComPrimaryLight *PrimaryLight; 
  __int64 transientZoneList; 
  unsigned __int16 *transientTable; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 
  unsigned __int16 v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  const unsigned int *v33; 
  int v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 sceneLightCount; 
  __int64 v38; 
  unsigned int v39; 
  GfxWorld *world; 
  unsigned int i; 
  __int64 v42; 
  const dvar_t *v43; 
  __int64 v44; 
  unsigned int v45; 
  __int64 v46; 
  GfxCandidateShadowedLight *v47; 
  __int64 v48; 
  __int64 v49; 
  R_SpotShadow_StaleCacheEntry *StaleCacheEntryForSceneLight; 
  unsigned int v51; 
  unsigned int v52; 
  int v53; 
  unsigned int v54; 
  unsigned int v55; 
  __int64 v56; 
  GfxCandidateShadowedLight *v57; 
  __int64 v58; 
  unsigned int v59; 
  __int64 v60; 
  int v61; 
  __int64 v62; 
  char *v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  int v69; 
  GfxWorld *v70; 
  LocalClientNum_t clientIndex; 
  unsigned int v72; 
  unsigned __int64 v73; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  __int64 v75; 
  char v76; 
  int needsDynamicShadows; 
  __int64 v78; 
  GfxCandidateShadowedLight *v79; 
  unsigned int v80; 
  char *j; 
  R_SpotShadow_StaleCacheEntry *v82; 
  bool v83; 
  char *fmt; 
  GfxCandidateShadowedLight *candidateLights; 
  __int64 candidateLightCount; 
  bool enabled; 
  unsigned int NumOfElements; 
  unsigned int NumOfElementsa; 
  int NumOfElements_4; 
  unsigned int NumOfElements_4a; 
  unsigned int sceneLightIndex; 
  unsigned int sceneLightIndexa; 
  unsigned int sceneLightIndexb; 
  const bitarray<1536> *v95; 
  unsigned int v96; 
  __int64 v97; 
  __int64 v98; 
  unsigned int v99; 
  unsigned int spotShadowUpdateLimit; 
  GfxCandidateShadowedLight *v103; 
  unsigned int v105; 
  GfxLightScoreConfig config; 
  GfxCandidateShadowedLight v107; 
  __int16 Base; 
  char v109[254]; 
  GfxCandidateShadowedLight v110; 
  __int128 v111; 

  spotCandidateLimit = rg.spotCandidateLimit;
  v7 = viewParmsDpvs;
  integer = sm_roundRobinPrioritySpotShadowsMax->current.integer;
  if ( rg.roundRobinPrioritySpotShadows < integer )
    integer = rg.roundRobinPrioritySpotShadows;
  v99 = integer;
  spotShadowUpdateLimit = backEndData->spotShadowUpdateLimit;
  NumOfElements = backEndData->spotShadowDynLightUpdateLimit;
  NumOfElements_4 = rg.spotCandidateLimit;
  R_GetShadowedSpotLightScoreConfig(&config);
  v10 = DVARINT_r_evictPrimaryLightActiveCache;
  if ( !DVARINT_r_evictPrimaryLightActiveCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_evictPrimaryLightActiveCache") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.integer;
  v12 = DVARINT_r_evictPrimaryLightStaleCache;
  if ( !DVARINT_r_evictPrimaryLightStaleCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_evictPrimaryLightStaleCache") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = DVARINT_r_evictPrimaryLightCache;
  v14 = v12->current.integer;
  if ( !DVARINT_r_evictPrimaryLightCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_evictPrimaryLightCache") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer )
  {
    v15 = DVARINT_r_evictPrimaryLightCache;
    if ( !DVARINT_r_evictPrimaryLightCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_evictPrimaryLightCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v11 = v15->current.integer;
    v16 = DVARINT_r_evictPrimaryLightCache;
    if ( !DVARINT_r_evictPrimaryLightCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_evictPrimaryLightCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v14 = v16->current.integer;
    Dvar_SetInt_Internal(DVARINT_r_evictPrimaryLightCache, 0);
  }
  if ( v11 > 0 )
  {
    Com_Printf(8, "force evict primary light(%d) spotshadow active cache\n", (unsigned int)v11);
    R_SpotShadow_EvictSceneLightFromActiveCache(v11);
    Dvar_SetInt_Internal(DVARINT_r_evictPrimaryLightActiveCache, 0);
  }
  if ( v14 > 0 )
  {
    Com_Printf(8, "force evict primary light(%d) spotshadow stale cache\n", (unsigned int)v14);
    R_SpotShadow_EvictSceneLightFromStaleCache(v14);
    Dvar_SetInt_Internal(DVARINT_r_evictPrimaryLightStaleCache, 0);
  }
  v17 = CL_TransientsWorldMP_GetChangeVisible();
  v95 = v17;
  if ( CL_TransientsWorldMP_IsActive() && v17 )
  {
    R_SpotShadow_StaleCacheSnapshot(backEndData, viewInfo->clientIndex, 0);
    v18 = 0;
    if ( backEndData->spotShadowCount )
    {
      do
      {
        v19 = v18;
        staleCacheEntry = backEndData->spotShadows[v19].staleCacheEntry;
        if ( staleCacheEntry && staleCacheEntry->missingTransientBSP + staleCacheEntry->missingTransientSModel )
        {
          sceneLightIndex = backEndData->spotShadows[v19].sceneLightIndex;
          PrimaryLight = Com_GetPrimaryLight(sceneLightIndex);
          if ( PrimaryLight->transientZoneList >= comWorld.transientTableSize )
          {
            LODWORD(candidateLightCount) = comWorld.transientTableSize;
            LODWORD(candidateLights) = PrimaryLight->transientZoneList;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( comLight->transientZoneList ) < (unsigned)( comWorld.transientTableSize )", "comLight->transientZoneList doesn't index comWorld.transientTableSize\n\t%i not in [0, %i)", candidateLights, candidateLightCount) )
              __debugbreak();
          }
          transientZoneList = PrimaryLight->transientZoneList;
          if ( (_DWORD)transientZoneList )
          {
            transientTable = comWorld.transientTable;
            v24 = (unsigned int)transientZoneList;
            if ( (comWorld.transientTable[transientZoneList] & 0x8000u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 66, ASSERT_TYPE_ASSERT, "(zoneListBegin[0] & 0x8000)", (const char *)&queryFormat, "zoneListBegin[0] & 0x8000") )
              __debugbreak();
            v25 = (__int64)&transientTable[v24 + 1];
            v26 = transientTable[v24] & 0x7FFF;
          }
          else
          {
            v26 = 0;
            v25 = 0i64;
          }
          v27 = 0;
          if ( v26 )
          {
            while ( 1 )
            {
              v28 = *(_WORD *)(v25 + 2i64 * v27);
              if ( v28 >= 0x600u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 555, ASSERT_TYPE_ASSERT, "(zoneIndex < MAX_MAP_TRANSIENT_ZONES)", (const char *)&queryFormat, "zoneIndex < MAX_MAP_TRANSIENT_ZONES") )
                __debugbreak();
              if ( v28 >= 0x600u )
              {
                LODWORD(candidateLightCount) = 1536;
                LODWORD(candidateLights) = v28;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", candidateLights, candidateLightCount) )
                  __debugbreak();
              }
              if ( ((0x80000000 >> (v28 & 0x1F)) & v95->array[(unsigned __int64)v28 >> 5]) != 0 )
                break;
              if ( ++v27 >= v26 )
                goto LABEL_49;
            }
            LODWORD(fmt) = backEndData->frameCount;
            Com_Printf(8, "TransientZone(%d) trigger light(%d) cache eviction at frame(%d)\n", v28, sceneLightIndex, fmt);
            R_SpotShadow_EvictSceneLightFromStaleCache(backEndData->spotShadows[v19].staleCacheEntry);
            R_SpotShadow_EvictSceneLightFromActiveCache(sceneLightIndex);
          }
        }
LABEL_49:
        ++v18;
      }
      while ( v18 < backEndData->spotShadowCount );
      v7 = viewParmsDpvs;
      spotCandidateLimit = NumOfElements_4;
    }
    backEndData->spotShadowCount = 0;
  }
  v105 = 0;
  v29 = 0;
  v30 = 0;
  if ( spotCandidateLimit )
  {
    if ( backEndData->sceneLightCount < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 582, ASSERT_TYPE_ASSERT, "(backEndData->sceneLightCount >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "backEndData->sceneLightCount >= rgp.world->primaryLightCount") )
      __debugbreak();
    v31 = 0;
    sceneLightIndexa = 0;
    v32 = (backEndData->sceneLightCount + 31) >> 5;
    v96 = v32;
    if ( v32 )
    {
      v33 = sceneLightIsUsed;
      v34 = 0;
      v111 = v4;
      do
      {
        v35 = v33[v31];
        v36 = __lzcnt(v35);
        if ( v36 != 32 )
        {
          do
          {
            sceneLightCount = backEndData->sceneLightCount;
            v35 &= ~(1 << (31 - v36));
            v38 = v34 + 31 - v36;
            if ( (unsigned int)v38 >= (unsigned int)sceneLightCount )
            {
              Com_Printf(8, "ERROR: Invalid scene light index %d >= %d flagged as an used light\n", v38, sceneLightCount);
            }
            else if ( (unsigned int)v38 >= rgp.world->primaryLightCount )
            {
              v30 = R_AddPotentiallyShadowedLight(&config, backEndData, viewInfo, v7, v38, &v107, v30, NumOfElements, 1.0);
            }
            else
            {
              v29 = R_AddPotentiallyShadowedLight(&config, backEndData, viewInfo, v7, v38, &v110, v29, NumOfElements_4 - v30, 1.0);
            }
            v36 = __lzcnt(v35);
          }
          while ( v36 != 32 );
          v31 = sceneLightIndexa;
          v32 = v96;
          v33 = sceneLightIsUsed;
          v105 = v30;
        }
        ++v31;
        v34 += 32;
        sceneLightIndexa = v31;
      }
      while ( v31 != v32 );
    }
    v39 = NumOfElements_4 - v30;
    if ( NumOfElements_4 - v30 > v29 )
      v39 = v29;
    v29 = v39;
  }
  if ( backEndData->spotShadowCount )
  {
    LODWORD(candidateLights) = backEndData->spotShadowCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 617, ASSERT_TYPE_SANITY, "( backEndData->spotShadowCount ) == ( 0 )", "backEndData->spotShadowCount == 0\n\t%i, %i", candidateLights, 0i64) )
      __debugbreak();
  }
  if ( backEndData->spotShadowUpdateCount )
  {
    LODWORD(candidateLights) = backEndData->spotShadowUpdateCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 618, ASSERT_TYPE_SANITY, "( backEndData->spotShadowUpdateCount ) == ( 0 )", "backEndData->spotShadowUpdateCount == 0\n\t%i, %i", candidateLights, 0i64) )
      __debugbreak();
  }
  world = rgp.world;
  for ( i = 0; i < world->primaryLightCount; g_lightScore[v42].ranking0 = 255 )
    v42 = i++;
  v43 = DVARBOOL_sm_spotUpdateMoreDynObj;
  if ( !DVARBOOL_sm_spotUpdateMoreDynObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotUpdateMoreDynObj") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  enabled = v43->current.enabled;
  v44 = 0i64;
  v45 = 0;
  NumOfElementsa = 0;
  if ( v29 )
  {
    v46 = 0i64;
    v97 = 0i64;
    v47 = &v110;
    v103 = &v110;
    while ( 1 )
    {
      v48 = v47->sceneLightIndex;
      if ( (unsigned int)v48 >= rgp.world->primaryLightCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 655, ASSERT_TYPE_ASSERT, "(R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "R_IsPrimaryLight( sceneLightIndex )") )
          __debugbreak();
        v46 = v97;
      }
      v49 = v48;
      backEndData->sceneLights[v48].flags |= 0x100u;
      if ( v45 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v45, "unsigned", v46) )
        __debugbreak();
      g_lightScore[v48].ranking0 = v45;
      StaleCacheEntryForSceneLight = R_SpotShadow_GetStaleCacheEntryForSceneLight(v48);
      if ( (unsigned int)v48 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v48, "unsigned", v48) )
        __debugbreak();
      *(_WORD *)&v109[4 * v44 - 2] = v48;
      v109[4 * v44] = -1;
      if ( v45 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v45, "unsigned", v97) )
        __debugbreak();
      v109[4 * v44 + 1] = v45;
      if ( !backEndData->sceneLights[v49].needsDynamicShadows )
        break;
      if ( !StaleCacheEntryForSceneLight )
        goto LABEL_114;
      R_SpotShadow_StaleCacheEntry::Unrot(StaleCacheEntryForSceneLight);
      v109[4 * v44] = StaleCacheEntryForSceneLight->staleness;
      v53 = R_CheckPrimaryLightMotionBit(viewInfo->clientIndex, v48);
      if ( !rg.primaryLightMotionDetect || v53 )
      {
        if ( StaleCacheEntryForSceneLight->staleness )
          goto LABEL_114;
      }
      else if ( StaleCacheEntryForSceneLight->staleness )
      {
        backEndData->sceneLights[v49].flags |= 0x200u;
LABEL_108:
        v44 = NumOfElementsa;
        goto LABEL_115;
      }
      if ( v45 < v99 || enabled )
      {
        v109[4 * v44] = 1;
        StaleCacheEntryForSceneLight->staleness = 1;
        goto LABEL_114;
      }
      backEndData->sceneLights[v49].flags |= 0x400u;
      v44 = NumOfElementsa;
LABEL_115:
      v46 = v97 + 1;
      v47 = v103 + 1;
      ++v45;
      ++v97;
      ++v103;
      if ( v45 >= v29 )
      {
        v30 = v105;
        goto LABEL_117;
      }
    }
    v51 = v99 + 1;
    if ( v45 >= v99 )
      v51 = v99;
    v99 = v51;
    v52 = v51;
    if ( !StaleCacheEntryForSceneLight )
      goto LABEL_102;
    R_SpotShadow_StaleCacheEntry::Unrot(StaleCacheEntryForSceneLight);
    if ( StaleCacheEntryForSceneLight->staleness )
    {
      R_SpotShadow_EvictSceneLightFromStaleCache(v48);
LABEL_102:
      v99 = v52;
LABEL_114:
      v44 = NumOfElementsa + 1;
      backEndData->sceneLights[v49].flags |= 0x800u;
      ++NumOfElementsa;
      goto LABEL_115;
    }
    goto LABEL_108;
  }
LABEL_117:
  NumOfElements_4a = 0;
  v54 = 0;
  v55 = 0;
  if ( v30 )
  {
    v56 = 0i64;
    v57 = &v107;
    do
    {
      v58 = v57->sceneLightIndex;
      if ( (unsigned int)v58 < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 752, ASSERT_TYPE_ASSERT, "(!R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "!R_IsPrimaryLight( sceneLightIndex )") )
        __debugbreak();
      if ( R_SpotShadow_GetStaleCacheEntryForSceneLight(v58) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 753, ASSERT_TYPE_ASSERT, "(!R_SpotShadow_GetStaleCacheEntryForSceneLight( sceneLightIndex ))", (const char *)&queryFormat, "!R_SpotShadow_GetStaleCacheEntryForSceneLight( sceneLightIndex )") )
        __debugbreak();
      R_AddSpotShadowUpdateForSceneLight(backEndData, viewInfo, v58, 1);
      ++NumOfElements_4a;
      backEndData->sceneLights[v58].flags |= 0x1000u;
      if ( v55 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v55, "unsigned", v56) )
        __debugbreak();
      g_lightScore[v58].ranking0 = v55;
      if ( v54 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v54, "unsigned", v54) )
        __debugbreak();
      ++v55;
      g_lightScore[v58].ranking1 = v54;
      v54 = NumOfElements_4a;
      ++v56;
      ++v57;
    }
    while ( v55 < v30 );
  }
  v59 = NumOfElementsa;
  v60 = NumOfElementsa;
  qsort(&Base, NumOfElementsa, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)GfxSpotShadowUpdateCandidate::Compare);
  v61 = 0;
  sceneLightIndexb = 0;
  if ( NumOfElementsa )
  {
    v62 = NumOfElementsa;
    v63 = v109;
    v98 = NumOfElementsa;
    while ( 1 )
    {
      v64 = *((unsigned __int16 *)v63 - 1);
      v65 = v54;
      if ( (unsigned int)v64 >= rgp.world->primaryLightCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 785, ASSERT_TYPE_ASSERT, "(R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "R_IsPrimaryLight( sceneLightIndex )") )
          __debugbreak();
        v62 = v98;
      }
      v66 = spotShadowUpdateLimit;
      v67 = v64;
      v68 = v64;
      if ( v54 < spotShadowUpdateLimit )
        break;
      if ( (unsigned __int8)(*v63 - 1) <= 0xFCu )
      {
        needsDynamicShadows = backEndData->sceneLights[v68].needsDynamicShadows;
        if ( rg.primaryLightMotionDetect )
          needsDynamicShadows = (_BYTE)needsDynamicShadows && R_CheckPrimaryLightMotionBit(viewInfo->clientIndex, v64);
        *v63 += needsDynamicShadows != 0;
        if ( v61 || needsDynamicShadows )
        {
          v61 = 1;
          sceneLightIndexb = 1;
        }
        else
        {
          v61 = 0;
          sceneLightIndexb = 0;
        }
        goto LABEL_170;
      }
LABEL_171:
      v63 += 4;
      v98 = --v62;
      if ( !v62 )
      {
        if ( v61 )
          R_WarnOncePerFrame(R_WARN_DYNAMIC_SHADOWS_LIMIT_REACHED, v66, 0i64);
        v59 = NumOfElementsa;
        v30 = v105;
        v60 = NumOfElementsa;
        goto LABEL_175;
      }
    }
    if ( (unsigned __int8)v63[1] < v99 || (v69 = 0, enabled) )
      v69 = 1;
    R_AddSpotShadowUpdateForSceneLight(backEndData, viewInfo, v64, v69);
    if ( v69 )
    {
      v70 = rgp.world;
      clientIndex = viewInfo->clientIndex;
      if ( (unsigned int)v64 <= rgp.world->lastSunPrimaryLightIndex || (unsigned int)v64 >= rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1678, ASSERT_TYPE_ASSERT, "(primaryLightIndex > rgp.world->lastSunPrimaryLightIndex && primaryLightIndex < rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount)", (const char *)&queryFormat, "primaryLightIndex > rgp.world->lastSunPrimaryLightIndex && primaryLightIndex < rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount") )
          __debugbreak();
        v70 = rgp.world;
      }
      v72 = clientIndex * v70->staticSpotOmniPrimaryLightCountAligned;
      if ( (((_BYTE)clientIndex * LOBYTE(v70->staticSpotOmniPrimaryLightCountAligned)) & 0x1F) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 928, ASSERT_TYPE_ASSERT, "((firstBit & 31) == 0)", (const char *)&queryFormat, "(firstBit & 31) == 0") )
          __debugbreak();
        v70 = rgp.world;
      }
      v73 = (unsigned __int64)&v70->primaryLightMotionDetectBits[(unsigned __int64)v72 >> 5];
      EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(v64);
      if ( !v73 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v75 = EntityPrimaryLightShadowBitArrayIndex >> 5;
      v76 = EntityPrimaryLightShadowBitArrayIndex & 0x1F;
      v67 = v64;
      *(_DWORD *)(v73 + 4 * v75) &= ~(1 << v76);
      v54 = NumOfElements_4a;
    }
    *v63 = v69;
    NumOfElements_4a = ++v54;
    backEndData->sceneLights[v68].flags |= (v69 << 13) | 0x1000;
    if ( (unsigned int)v65 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v65, "unsigned", v65) )
      __debugbreak();
    v61 = sceneLightIndexb;
    g_lightScore[v67].ranking1 = v65;
LABEL_170:
    v62 = v98;
    v66 = spotShadowUpdateLimit;
    goto LABEL_171;
  }
LABEL_175:
  R_SpotShadow_StaleCacheSnapshot(backEndData, viewInfo->clientIndex, 1);
  if ( v30 )
  {
    v78 = v30;
    v79 = &v107;
    do
    {
      v80 = v79->sceneLightIndex;
      if ( v79->sceneLightIndex < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 845, ASSERT_TYPE_ASSERT, "(!R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "!R_IsPrimaryLight( sceneLightIndex )") )
        __debugbreak();
      R_SpotShadow_EvictSceneLightFromStaleCache(v80);
      ++v79;
      --v78;
    }
    while ( v78 );
    v60 = v59;
  }
  if ( v59 )
  {
    for ( j = v109; ; j += 4 )
    {
      v82 = R_SpotShadow_GetStaleCacheEntryForSceneLight(*((unsigned __int16 *)j - 1));
      if ( !*j )
        break;
      if ( *j == -1 )
      {
        if ( v82 )
        {
          v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 868, ASSERT_TYPE_ASSERT, "(entry == nullptr)", (const char *)&queryFormat, "entry == nullptr");
LABEL_195:
          if ( v83 )
            __debugbreak();
        }
      }
      else if ( !rg.primaryLightMotionDetect )
      {
        v82->staleness = *j;
      }
LABEL_197:
      if ( !--v60 )
        return;
    }
    if ( !v82 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 860, ASSERT_TYPE_ASSERT, "(entry != nullptr)", (const char *)&queryFormat, "entry != nullptr") )
      __debugbreak();
    if ( !v82->staleness )
      goto LABEL_197;
    v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 861, ASSERT_TYPE_ASSERT, "(entry->staleness == R_SpotShadow_StaleCacheEntry::STALENESS_IMMORTAL)", (const char *)&queryFormat, "entry->staleness == R_SpotShadow_StaleCacheEntry::STALENESS_IMMORTAL");
    goto LABEL_195;
  }
}

/*
==============
R_ClearAllPrimaryLightMotionBits
==============
*/
void R_ClearAllPrimaryLightMotionBits(void)
{
  GfxWorld *world; 
  unsigned int entityMotionBitsEntries; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int primaryLightMotionDetectBitsEntries; 

  world = rgp.world;
  if ( rgp.world )
  {
    entityMotionBitsEntries = rgp.world->entityMotionBitsEntries;
    if ( entityMotionBitsEntries )
    {
      memset_0(rgp.world->entityMotionBits, 0, 4i64 * entityMotionBitsEntries);
      world = rgp.world;
    }
    v2 = world->dynEntMotionBitsEntries[0];
    if ( v2 )
    {
      memset_0(world->dynEntMotionBits[0], 0, 4i64 * v2);
      world = rgp.world;
    }
    v3 = world->dynEntMotionBitsEntries[1];
    if ( v3 )
    {
      memset_0(world->dynEntMotionBits[1], 0, 4i64 * v3);
      world = rgp.world;
    }
    if ( world )
    {
      primaryLightMotionDetectBitsEntries = world->primaryLightMotionDetectBitsEntries;
      if ( primaryLightMotionDetectBitsEntries )
        memset_0(world->primaryLightMotionDetectBits, 0, primaryLightMotionDetectBitsEntries);
    }
  }
}

/*
==============
R_ClearPrimaryLightMotionBit
==============
*/
void R_ClearPrimaryLightMotionBit(LocalClientNum_t localClientNum, unsigned int primaryLightIndex)
{
  unsigned int *PrimaryLightMotionBits; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 

  if ( (primaryLightIndex <= rgp.world->lastSunPrimaryLightIndex || primaryLightIndex >= rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1678, ASSERT_TYPE_ASSERT, "(primaryLightIndex > rgp.world->lastSunPrimaryLightIndex && primaryLightIndex < rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount)", (const char *)&queryFormat, "primaryLightIndex > rgp.world->lastSunPrimaryLightIndex && primaryLightIndex < rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount") )
    __debugbreak();
  PrimaryLightMotionBits = R_GetPrimaryLightMotionBits(localClientNum);
  EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(primaryLightIndex);
  if ( !PrimaryLightMotionBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  PrimaryLightMotionBits[EntityPrimaryLightShadowBitArrayIndex >> 5] &= ~(1 << (EntityPrimaryLightShadowBitArrayIndex & 0x1F));
}

/*
==============
R_DynEntClientMoved
==============
*/
void R_DynEntClientMoved(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned __int16 dynEntClientId)
{
  __int64 v3; 
  unsigned int v4; 
  unsigned int v6; 
  char v7; 
  __int64 v8; 

  v3 = (unsigned __int8)basis;
  v4 = dynEntClientId;
  if ( dynEntClientId >= s_world.dpvsDyn.dynEntClientCount[(unsigned __int8)basis] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1494, ASSERT_TYPE_ASSERT, "(dynEntClientId < s_world.dpvsDyn.dynEntClientCount[basis])", (const char *)&queryFormat, "dynEntClientId < s_world.dpvsDyn.dynEntClientCount[basis]") )
    __debugbreak();
  if ( rg.primaryLightMotionDetect > 1u )
  {
    v6 = v4 >> 5;
    v7 = v4 & 0x1F;
    v8 = v6 + localClientNum * ((s_world.dpvsDyn.dynEntClientCount[v3] + 31) >> 5);
    if ( (unsigned int)v8 >= rgp.world->dynEntMotionBitsEntries[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1504, ASSERT_TYPE_ASSERT, "(entry < rgp.world->dynEntMotionBitsEntries[basis])", (const char *)&queryFormat, "entry < rgp.world->dynEntMotionBitsEntries[basis]") )
      __debugbreak();
    Sys_InterlockedOr((volatile int *)&rgp.world->dynEntMotionBits[v3][v8], 1 << v7);
  }
}

/*
==============
R_EntityHasSkinningAnimation
==============
*/
void R_EntityHasSkinningAnimation(LocalClientNum_t localClientNum, unsigned int entnum)
{
  GfxWorld *world; 
  unsigned int v5; 
  char v6; 
  __int64 v7; 

  if ( rg.primaryLightMotionDetectUseSkinnedModel )
  {
    if ( entnum >= 0xA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1307, ASSERT_TYPE_ASSERT, "(entnum < ( ( 2048 ) + ( 96 + ( 32 ) + CLIENT_MODEL_MAX_COUNT + 0 ) ))", (const char *)&queryFormat, "entnum < MAX_GFXENTITIES") )
      __debugbreak();
    if ( (rg.primaryLightMotionDetect & 0xFFFFFFFD) != 0 )
    {
      world = rgp.world;
      if ( rgp.world )
      {
        v5 = entnum;
        v6 = entnum & 0x1F;
        v7 = (v5 >> 5) + 80 * localClientNum;
        if ( (unsigned int)v7 >= rgp.world->entityMotionBitsEntries )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1323, ASSERT_TYPE_ASSERT, "(entry < rgp.world->entityMotionBitsEntries)", (const char *)&queryFormat, "entry < rgp.world->entityMotionBitsEntries") )
            __debugbreak();
          world = rgp.world;
        }
        Sys_InterlockedOr((volatile int *)&world->entityMotionBits[v7], 1 << v6);
      }
    }
  }
}

/*
==============
R_EntityMoved
==============
*/
void R_EntityMoved(LocalClientNum_t localClientNum, unsigned int entnum)
{
  GfxWorld *world; 
  unsigned int v5; 
  char v6; 
  __int64 v7; 

  if ( entnum >= 0xA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1307, ASSERT_TYPE_ASSERT, "(entnum < ( ( 2048 ) + ( 96 + ( 32 ) + CLIENT_MODEL_MAX_COUNT + 0 ) ))", (const char *)&queryFormat, "entnum < MAX_GFXENTITIES") )
    __debugbreak();
  if ( (rg.primaryLightMotionDetect & 0xFFFFFFFD) != 0 )
  {
    world = rgp.world;
    if ( rgp.world )
    {
      v5 = entnum;
      v6 = entnum & 0x1F;
      v7 = (v5 >> 5) + 80 * localClientNum;
      if ( (unsigned int)v7 >= rgp.world->entityMotionBitsEntries )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1323, ASSERT_TYPE_ASSERT, "(entry < rgp.world->entityMotionBitsEntries)", (const char *)&queryFormat, "entry < rgp.world->entityMotionBitsEntries") )
          __debugbreak();
        world = rgp.world;
      }
      Sys_InterlockedOr((volatile int *)&world->entityMotionBits[v7], 1 << v6);
    }
  }
}

/*
==============
R_GetEntityPrimaryLightShadowBitArrayIndex
==============
*/
__int64 R_GetEntityPrimaryLightShadowBitArrayIndex(unsigned int primaryLightIndex)
{
  unsigned int v1; 
  unsigned int v3; 
  unsigned int v4; 

  v1 = primaryLightIndex - rgp.world->lastSunPrimaryLightIndex - 1;
  if ( v1 >= s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1 )
  {
    v4 = s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1;
    v3 = primaryLightIndex - rgp.world->lastSunPrimaryLightIndex - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 942, ASSERT_TYPE_ASSERT, "( bitIndex ) < ( staticSpotOmniPrimaryLightCount )", "%s < %s\n\t%i, %i", "bitIndex", "staticSpotOmniPrimaryLightCount", v3, v4) )
      __debugbreak();
  }
  return v1;
}

/*
==============
R_GetPrimaryLightDynEntClientShadowBitsArray
==============
*/
unsigned int *R_GetPrimaryLightDynEntClientShadowBitsArray(LocalClientNum_t localClientNum, DynEntityBasis basis, unsigned __int16 entnum)
{
  __int64 v4; 
  int v5; 
  unsigned int v6; 
  unsigned __int32 v7; 
  int v9; 
  unsigned int v10; 

  v4 = (unsigned __int8)basis;
  v5 = entnum;
  v6 = rgp.world->dpvsDyn.dynEntClientCount[(unsigned __int8)basis];
  if ( entnum >= v6 )
  {
    v10 = v6;
    v9 = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1343, ASSERT_TYPE_ASSERT, "( entnum ) < ( rgp.world->dpvsDyn.dynEntClientCount[basis] )", "%s < %s\n\t%i, %i", "entnum", "rgp.world->dpvsDyn.dynEntClientCount[basis]", v9, v10) )
      __debugbreak();
  }
  v7 = rgp.world->shadowBitsArrayPitch * (v5 + localClientNum * rgp.world->dpvsDyn.dynEntClientCount[v4]);
  if ( ((LOBYTE(rgp.world->shadowBitsArrayPitch) * ((_BYTE)v5 + (_BYTE)localClientNum * LOBYTE(rgp.world->dpvsDyn.dynEntClientCount[v4]))) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1345, ASSERT_TYPE_ASSERT, "((firstBit & 31) == 0)", (const char *)&queryFormat, "(firstBit & 31) == 0") )
    __debugbreak();
  return &rgp.world->primaryLightDynEntShadowVis[v4][(unsigned __int64)v7 >> 5];
}

/*
==============
R_GetPrimaryLightEntityShadowBitsArray
==============
*/
unsigned int *R_GetPrimaryLightEntityShadowBitsArray(unsigned int localClientNum, unsigned int entnum)
{
  unsigned int v4; 
  __int64 v5; 
  unsigned int v7; 
  unsigned int entCount; 

  if ( gfxCfg.entCount > 0xA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 951, ASSERT_TYPE_ASSERT, "(gfxCfg.entCount <= ( ( 2048 ) + ( 96 + ( 32 ) + CLIENT_MODEL_MAX_COUNT + 0 ) ))", (const char *)&queryFormat, "gfxCfg.entCount <= MAX_GFXENTITIES") )
    __debugbreak();
  if ( entnum >= gfxCfg.entCount )
  {
    entCount = gfxCfg.entCount;
    v7 = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 952, ASSERT_TYPE_ASSERT, "( entnum ) < ( gfxCfg.entCount )", "%s < %s\n\t%i, %i", "entnum", "gfxCfg.entCount", v7, entCount) )
      __debugbreak();
  }
  v4 = rgp.world->shadowBitsArrayPitch * (entnum + localClientNum * gfxCfg.entCount);
  if ( ((LOBYTE(rgp.world->shadowBitsArrayPitch) * ((_BYTE)entnum + (_BYTE)localClientNum * LOBYTE(gfxCfg.entCount))) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 954, ASSERT_TYPE_ASSERT, "(( firstBit & 31 ) == 0)", (const char *)&queryFormat, "( firstBit & 31 ) == 0") )
    __debugbreak();
  v5 = v4 >> 5;
  if ( (unsigned int)v5 >= rgp.world->numPrimaryLightEntityShadowVisEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 963, ASSERT_TYPE_ASSERT, "(entFirstEntry < rgp.world->numPrimaryLightEntityShadowVisEntries)", (const char *)&queryFormat, "entFirstEntry < rgp.world->numPrimaryLightEntityShadowVisEntries") )
    __debugbreak();
  return &rgp.world->primaryLightEntityShadowVis[v5];
}

/*
==============
R_GetPrimaryLightMotionBits
==============
*/
unsigned int *R_GetPrimaryLightMotionBits(LocalClientNum_t localClientNum)
{
  unsigned __int32 v1; 

  v1 = localClientNum * rgp.world->staticSpotOmniPrimaryLightCountAligned;
  if ( (((_BYTE)localClientNum * LOBYTE(rgp.world->staticSpotOmniPrimaryLightCountAligned)) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 928, ASSERT_TYPE_ASSERT, "((firstBit & 31) == 0)", (const char *)&queryFormat, "(firstBit & 31) == 0") )
    __debugbreak();
  return &rgp.world->primaryLightMotionDetectBits[(unsigned __int64)v1 >> 5];
}

/*
==============
R_GetShadowedSpotLightScoreConfig
==============
*/
void R_GetShadowedSpotLightScoreConfig(GfxLightScoreConfig *config)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  signed int integer; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  float value; 

  v1 = DVARINT_sm_spotShadowScoreSystem;
  if ( !DVARINT_sm_spotShadowScoreSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScoreSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  config->m_scoreSystem = v1->current.integer;
  v3 = DCONST_DVARINT_sm_spotShadowSampleCountMin;
  if ( !DCONST_DVARINT_sm_spotShadowSampleCountMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleCountMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  config->m_sampleCountMin = integer;
  v5 = DCONST_DVARINT_sm_spotShadowSampleCountMax;
  if ( !DCONST_DVARINT_sm_spotShadowSampleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleCountMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer > integer )
    integer = v5->current.integer;
  config->m_sampleCountMax = integer;
  v6 = DCONST_DVARFLT_sm_spotShadowSampleDistance;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  config->m_sampleDistanceRcp = 1.0 / v6->current.value;
  v7 = DCONST_DVARFLT_sm_spotShadowSampleBegin;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleBegin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  config->m_sampleBegin = v7->current.value;
  v8 = DCONST_DVARFLT_sm_spotShadowSampleEnd;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleEnd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  _XMM0 = v8->current.unsignedInt;
  __asm { vmaxss  xmm1, xmm0, xmm6 }
  config->m_sampleEnd = *(float *)&_XMM1;
  config->m_sampleRange = *(float *)&_XMM1 - config->m_sampleBegin;
  v11 = DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold0;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleLargeLightThreshold0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  LODWORD(config->m_sampleExtraThreshold0) = v11->current.integer;
  v12 = DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold1;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleLargeLightThreshold1") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  LODWORD(config->m_sampleExtraThreshold1) = v12->current.integer;
  v13 = DVARFLT_sm_spotShadowSampleExtra0;
  if ( !DVARFLT_sm_spotShadowSampleExtra0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleExtra0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  LODWORD(config->m_sampleExtra0) = v13->current.integer;
  v14 = DVARFLT_sm_spotShadowSampleExtra0;
  if ( !DVARFLT_sm_spotShadowSampleExtra0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleExtra0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  config->m_sampleExtra1 = v14->current.value * 0.5;
  v15 = DVARFLT_sm_spotShadowScore0Min;
  if ( !DVARFLT_sm_spotShadowScore0Min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore0Min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  LODWORD(config->m_score0Min) = v15->current.integer;
  config->m_score0Max = 1.0;
  v16 = DCONST_DVARFLT_sm_spotShadowScore1Min;
  if ( !DCONST_DVARFLT_sm_spotShadowScore1Min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore1Min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  LODWORD(config->m_score1Min) = v16->current.integer;
  config->m_score1Max = 1.0;
  v17 = DCONST_DVARFLT_sm_spotShadowScore1ConstA;
  if ( !DCONST_DVARFLT_sm_spotShadowScore1ConstA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore1ConstA") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  config->m_score1ConstA = v17->current.value;
  v18 = DCONST_DVARFLT_sm_spotShadowScore1ConstB;
  if ( !DCONST_DVARFLT_sm_spotShadowScore1ConstB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore1ConstB") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  _XMM0 = v18->current.unsignedInt;
  __asm { vmaxss  xmm1, xmm0, xmm6 }
  config->m_score1DistanceFalloffRcp = 1.0 / (float)(*(float *)&_XMM1 - config->m_score1ConstA);
  config->m_score1ConstB = *(float *)&_XMM1;
  v21 = DCONST_DVARFLT_sm_spotShadowScore2Min;
  if ( !DCONST_DVARFLT_sm_spotShadowScore2Min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore2Min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  LODWORD(config->m_score2Min) = v21->current.integer;
  config->m_score2Max = 1.0;
  v22 = DCONST_DVARFLT_sm_spotShadowScore2ConstA;
  if ( !DCONST_DVARFLT_sm_spotShadowScore2ConstA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore2ConstA") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  value = v22->current.value;
  config->m_score2ConstA = value;
  config->m_score2IntensityFalloffRcp = 1.0 / value;
}

/*
==============
R_IsDynEntClientVisibleToAnyShadowedPrimaryLight
==============
*/
__int64 R_IsDynEntClientVisibleToAnyShadowedPrimaryLight(LocalClientNum_t localClientNum, GfxBackEndData *data, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  __int64 v4; 
  unsigned int spotShadowUpdateCount; 
  int v9; 
  int *i; 
  unsigned int v11; 
  __int64 v13; 
  __int64 v14; 

  v4 = localClientNum;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1443, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, 2) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v14) = 2;
    LODWORD(v13) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 301, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( dynEntClientId >= g_dynEntClientEntsAllocCount[v4][(unsigned __int8)basis] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1444, ASSERT_TYPE_ASSERT, "(dynEntClientId < DynEnt_GetAllocatedClientCount( localClientNum, basis ))", (const char *)&queryFormat, "dynEntClientId < DynEnt_GetAllocatedClientCount( localClientNum, basis )") )
    __debugbreak();
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1447, ASSERT_TYPE_ASSERT, "(spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  v9 = 0;
  if ( !spotShadowUpdateCount )
    return 0i64;
  for ( i = &data->spotShadowUpdates[0].needsDynamicShadows; ; i += 4208 )
  {
    v11 = *(i - 2);
    if ( v11 <= rgp.world->lastSunPrimaryLightIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1452, ASSERT_TYPE_ASSERT, "(sceneLightIndex > rgp.world->lastSunPrimaryLightIndex)", (const char *)&queryFormat, "sceneLightIndex > rgp.world->lastSunPrimaryLightIndex") )
      __debugbreak();
    if ( v11 < rgp.world->primaryLightCount && *i && R_IsDynEntClientVisibleToPrimaryLight((LocalClientNum_t)v4, dynEntClientId, basis, v11) )
      break;
    if ( ++v9 >= spotShadowUpdateCount )
      return 0i64;
  }
  return 1i64;
}

/*
==============
R_IsDynEntClientVisibleToPrimaryLight
==============
*/
__int64 R_IsDynEntClientVisibleToPrimaryLight(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, unsigned int primaryLightIndex)
{
  __int64 v5; 
  unsigned int *PrimaryLightDynEntClientShadowBitsArray; 
  unsigned int *v9; 
  unsigned int shadowBitsArrayPitch; 
  unsigned int v11; 
  unsigned __int16 v12; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 

  v5 = localClientNum;
  if ( !rgp.world->staticSpotOmniPrimaryLightCountAligned && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1414, ASSERT_TYPE_ASSERT, "(rgp.world->staticSpotOmniPrimaryLightCountAligned)", (const char *)&queryFormat, "rgp.world->staticSpotOmniPrimaryLightCountAligned") )
    __debugbreak();
  PrimaryLightDynEntClientShadowBitsArray = R_GetPrimaryLightDynEntClientShadowBitsArray((LocalClientNum_t)v5, basis, dynEntClientId);
  v9 = PrimaryLightDynEntClientShadowBitsArray;
  shadowBitsArrayPitch = rgp.world->shadowBitsArrayPitch;
  if ( shadowBitsArrayPitch == rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    if ( (unsigned int)v5 >= 2 )
    {
      LODWORD(v16) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, 2) )
        __debugbreak();
    }
    if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = (unsigned __int8)basis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 301, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( dynEntClientId >= g_dynEntClientEntsAllocCount[v5][(unsigned __int8)basis] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1434, ASSERT_TYPE_ASSERT, "(dynEntClientId < DynEnt_GetAllocatedClientCount(localClientNum, basis ))", (const char *)&queryFormat, "dynEntClientId < DynEnt_GetAllocatedClientCount(localClientNum, basis )") )
      __debugbreak();
    EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(primaryLightIndex);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v15 = v9[EntityPrimaryLightShadowBitArrayIndex >> 5];
    return _bittest((const int *)&v15, EntityPrimaryLightShadowBitArrayIndex & 0x1F);
  }
  else
  {
    v11 = *(unsigned __int16 *)PrimaryLightDynEntClientShadowBitsArray;
    if ( v11 >= shadowBitsArrayPitch >> 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1421, ASSERT_TYPE_ASSERT, "(lightCount < R_GetEntityLightListSize())", (const char *)&queryFormat, "lightCount < R_GetEntityLightListSize()") )
      __debugbreak();
    v12 = 0;
    if ( (_WORD)v11 )
    {
      while ( primaryLightIndex != *((unsigned __int16 *)v9 + v12 + 1) )
      {
        if ( ++v12 >= (unsigned __int16)v11 )
          return 0i64;
      }
      return 1i64;
    }
    else
    {
      return 0i64;
    }
  }
}

/*
==============
R_IsEntityVisibleToAnyShadowedPrimaryLight
==============
*/
__int64 R_IsEntityVisibleToAnyShadowedPrimaryLight(GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int entityNum)
{
  unsigned int spotShadowUpdateCount; 
  int v7; 
  int *i; 
  unsigned int v9; 
  unsigned int *PrimaryLightEntityShadowBitsArray; 
  unsigned int *v11; 
  unsigned int shadowBitsArrayPitch; 
  unsigned int v13; 
  unsigned __int16 v14; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  unsigned int v16; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1280, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1283, ASSERT_TYPE_ASSERT, "(spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  v7 = 0;
  if ( !spotShadowUpdateCount )
    return 0i64;
  for ( i = &data->spotShadowUpdates[0].needsDynamicShadows; ; i += 4208 )
  {
    v9 = *(i - 2);
    if ( v9 <= rgp.world->lastSunPrimaryLightIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1288, ASSERT_TYPE_ASSERT, "(sceneLightIndex > rgp.world->lastSunPrimaryLightIndex)", (const char *)&queryFormat, "sceneLightIndex > rgp.world->lastSunPrimaryLightIndex") )
      __debugbreak();
    if ( v9 >= rgp.world->primaryLightCount || !*i )
      goto LABEL_26;
    PrimaryLightEntityShadowBitsArray = R_GetPrimaryLightEntityShadowBitsArray(viewInfo->clientIndex, entityNum);
    v11 = PrimaryLightEntityShadowBitsArray;
    shadowBitsArrayPitch = rgp.world->shadowBitsArrayPitch;
    if ( shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
      break;
    EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(v9);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v16 = v11[EntityPrimaryLightShadowBitArrayIndex >> 5];
    if ( _bittest((const int *)&v16, EntityPrimaryLightShadowBitArrayIndex & 0x1F) )
      return 1i64;
LABEL_26:
    if ( ++v7 >= spotShadowUpdateCount )
      return 0i64;
  }
  v13 = *(unsigned __int16 *)PrimaryLightEntityShadowBitsArray;
  if ( v13 >= shadowBitsArrayPitch >> 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1259, ASSERT_TYPE_ASSERT, "(lightCount < R_GetEntityLightListSize())", (const char *)&queryFormat, "lightCount < R_GetEntityLightListSize()") )
    __debugbreak();
  v14 = 0;
  if ( !(_WORD)v13 )
    goto LABEL_26;
  while ( v9 != *((unsigned __int16 *)v11 + v14 + 1) )
  {
    if ( ++v14 >= (unsigned __int16)v13 )
      goto LABEL_26;
  }
  return 1i64;
}

/*
==============
R_IsEntityVisibleToPrimaryLight
==============
*/
__int64 R_IsEntityVisibleToPrimaryLight(unsigned int localClientNum, unsigned int entityNum, unsigned int primaryLightIndex)
{
  unsigned int *PrimaryLightEntityShadowBitsArray; 
  unsigned int *v5; 
  unsigned int shadowBitsArrayPitch; 
  unsigned int v7; 
  unsigned __int16 v8; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  unsigned int v11; 

  PrimaryLightEntityShadowBitsArray = R_GetPrimaryLightEntityShadowBitsArray(localClientNum, entityNum);
  v5 = PrimaryLightEntityShadowBitsArray;
  shadowBitsArrayPitch = rgp.world->shadowBitsArrayPitch;
  if ( shadowBitsArrayPitch == rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(primaryLightIndex);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v11 = v5[EntityPrimaryLightShadowBitArrayIndex >> 5];
    return _bittest((const int *)&v11, EntityPrimaryLightShadowBitArrayIndex & 0x1F);
  }
  else
  {
    v7 = *(unsigned __int16 *)PrimaryLightEntityShadowBitsArray;
    if ( v7 >= shadowBitsArrayPitch >> 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1259, ASSERT_TYPE_ASSERT, "(lightCount < R_GetEntityLightListSize())", (const char *)&queryFormat, "lightCount < R_GetEntityLightListSize()") )
      __debugbreak();
    v8 = 0;
    if ( (_WORD)v7 )
    {
      while ( primaryLightIndex != *((unsigned __int16 *)v5 + v8 + 1) )
      {
        if ( ++v8 >= (unsigned __int16)v7 )
          return 0i64;
      }
      return 1i64;
    }
    else
    {
      return 0i64;
    }
  }
}

/*
==============
R_LinkBoxEntityToPrimaryLights
==============
*/
__int64 R_LinkBoxEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const Bounds *bounds)
{
  unsigned int staticSpotOmniPrimaryLightCountAligned; 
  unsigned int v6; 
  unsigned int *PrimaryLightEntityShadowBitsArray; 
  unsigned __int16 *v8; 
  unsigned int v9; 
  unsigned int shadowBitsArrayPitch; 
  unsigned int v11; 
  char v13[816]; 

  staticSpotOmniPrimaryLightCountAligned = rgp.world->staticSpotOmniPrimaryLightCountAligned;
  if ( !staticSpotOmniPrimaryLightCountAligned || !rgp.world->lightAABB.nodeCount )
    return 0i64;
  v6 = staticSpotOmniPrimaryLightCountAligned >> 5;
  PrimaryLightEntityShadowBitsArray = R_GetPrimaryLightEntityShadowBitsArray(localClientNum, entityNum);
  v8 = (unsigned __int16 *)PrimaryLightEntityShadowBitsArray;
  if ( rgp.world->shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    memset_0(v13, 0, 4i64 * v6);
    PrimaryLightEntityShadowBitsArray = (unsigned int *)v13;
  }
  v9 = R_LinkBoxEntityToPrimaryLightsAABBTree(0, bounds, PrimaryLightEntityShadowBitsArray);
  shadowBitsArrayPitch = rgp.world->shadowBitsArrayPitch;
  if ( shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    v11 = R_BitsArrayToLightList(PrimaryLightEntityShadowBitsArray, v6, v9, v8, shadowBitsArrayPitch >> 4);
    if ( v11 )
      Com_Printf(8, "R_LinkSphereEntityToPrimaryLights missing %d lights for ent(%d)\n", v11, entityNum);
  }
  return v9;
}

/*
==============
R_LinkBoxEntityToPrimaryLightsAABBTree
==============
*/
__int64 R_LinkBoxEntityToPrimaryLightsAABBTree(unsigned int nodeIndex, const Bounds *bounds, unsigned int *visBits)
{
  GfxWorld *world; 
  unsigned int v6; 
  GfxLightAABBNode *v7; 
  unsigned __int16 childCount; 
  unsigned int v9; 
  __int16 firstChild; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  const ComPrimaryLight *PrimaryLight; 
  unsigned __int8 type; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  __int64 v18; 
  GfxWorld *v19; 

  world = rgp.world;
  v19 = rgp.world;
  v6 = 0;
  v7 = &rgp.world->lightAABB.nodeArray[nodeIndex];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 592, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 593, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7->bound.midPoint.v[0] - bounds->midPoint.v[0]) & _xmm) >= (float)(v7->bound.halfSize.v[0] + bounds->halfSize.v[0]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(v7->bound.midPoint.v[1] - bounds->midPoint.v[1]) & _xmm) >= (float)(v7->bound.halfSize.v[1] + bounds->halfSize.v[1]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(v7->bound.midPoint.v[2] - bounds->midPoint.v[2]) & _xmm) >= (float)(v7->bound.halfSize.v[2] + bounds->halfSize.v[2]) )
    return 0i64;
  childCount = v7->childCount;
  v9 = 0;
  firstChild = v7->firstChild;
  if ( firstChild >= 0 )
  {
    if ( childCount )
    {
      do
      {
        v6 += R_LinkBoxEntityToPrimaryLightsAABBTree(v9 + v7->firstChild, bounds, visBits);
        ++v9;
      }
      while ( v9 < v7->childCount );
    }
    return v6;
  }
  else
  {
    v11 = firstChild & 0x7FFF;
    v12 = childCount;
    if ( childCount )
    {
      do
      {
        v13 = world->lightAABB.lightArray[v9 + v11];
        PrimaryLight = Com_GetPrimaryLight(v13);
        type = PrimaryLight->type;
        if ( (unsigned __int8)(type - 2) > 1u )
        {
          LODWORD(v18) = type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 971, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", v18) )
            __debugbreak();
        }
        if ( PrimaryLight->needsDynamicShadows && R_PrimaryLightFrustumTestBox(v13, bounds) )
        {
          EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(v13);
          if ( !visBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          visBits[EntityPrimaryLightShadowBitArrayIndex >> 5] |= 1 << (EntityPrimaryLightShadowBitArrayIndex & 0x1F);
          ++v6;
        }
        world = v19;
        ++v9;
      }
      while ( v9 < v12 );
    }
    return v6;
  }
}

/*
==============
R_LinkDynEntClientToPrimaryLights
==============
*/
__int64 R_LinkDynEntClientToPrimaryLights(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, const Bounds *bounds)
{
  unsigned int staticSpotOmniPrimaryLightCountAligned; 
  unsigned int v7; 
  unsigned int *PrimaryLightDynEntClientShadowBitsArray; 
  unsigned __int16 *v9; 
  unsigned int v10; 
  unsigned int shadowBitsArrayPitch; 
  unsigned int v12; 
  char v14[816]; 

  staticSpotOmniPrimaryLightCountAligned = rgp.world->staticSpotOmniPrimaryLightCountAligned;
  if ( !staticSpotOmniPrimaryLightCountAligned || !rgp.world->lightAABB.nodeCount )
    return 0i64;
  v7 = staticSpotOmniPrimaryLightCountAligned >> 5;
  PrimaryLightDynEntClientShadowBitsArray = R_GetPrimaryLightDynEntClientShadowBitsArray(localClientNum, basis, dynEntClientId);
  v9 = (unsigned __int16 *)PrimaryLightDynEntClientShadowBitsArray;
  if ( rgp.world->shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    memset_0(v14, 0, 4i64 * v7);
    PrimaryLightDynEntClientShadowBitsArray = (unsigned int *)v14;
  }
  v10 = R_LinkBoxEntityToPrimaryLightsAABBTree(0, bounds, PrimaryLightDynEntClientShadowBitsArray);
  shadowBitsArrayPitch = rgp.world->shadowBitsArrayPitch;
  if ( shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    v12 = R_BitsArrayToLightList(PrimaryLightDynEntClientShadowBitsArray, v7, v10, v9, shadowBitsArrayPitch >> 4);
    if ( v12 )
      Com_Printf(8, "R_LinkDynEntClientToPrimaryLights missing %d lights for dynEnt(%d)\n", v12, dynEntClientId);
  }
  return v10;
}

/*
==============
R_LinkSphereEntityToPrimaryLights
==============
*/
__int64 R_LinkSphereEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const vec3_t *origin, float radius)
{
  unsigned int staticSpotOmniPrimaryLightCountAligned; 
  unsigned int v7; 
  unsigned int *PrimaryLightEntityShadowBitsArray; 
  unsigned __int16 *v9; 
  float v10; 
  float v11; 
  unsigned int v12; 
  unsigned int shadowBitsArrayPitch; 
  unsigned int v14; 
  Sphere sphere; 
  char v17[816]; 

  staticSpotOmniPrimaryLightCountAligned = rgp.world->staticSpotOmniPrimaryLightCountAligned;
  if ( !staticSpotOmniPrimaryLightCountAligned || !rgp.world->lightAABB.nodeCount )
    return 0i64;
  v7 = staticSpotOmniPrimaryLightCountAligned >> 5;
  PrimaryLightEntityShadowBitsArray = R_GetPrimaryLightEntityShadowBitsArray(localClientNum, entityNum);
  v9 = (unsigned __int16 *)PrimaryLightEntityShadowBitsArray;
  if ( rgp.world->shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    memset_0(v17, 0, 4i64 * v7);
    PrimaryLightEntityShadowBitsArray = (unsigned int *)v17;
  }
  v10 = origin->v[1];
  sphere.origin.v[0] = origin->v[0];
  v11 = origin->v[2];
  sphere.origin.v[1] = v10;
  sphere.origin.v[2] = v11;
  sphere.radiusSq = radius * radius;
  sphere.radius = radius;
  v12 = R_LinkSphereEntityToPrimaryLightsAABBTree(0, &sphere, PrimaryLightEntityShadowBitsArray);
  shadowBitsArrayPitch = rgp.world->shadowBitsArrayPitch;
  if ( shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    v14 = R_BitsArrayToLightList(PrimaryLightEntityShadowBitsArray, v7, v12, v9, shadowBitsArrayPitch >> 4);
    if ( v14 )
      Com_Printf(8, "R_LinkSphereEntityToPrimaryLights missing %d lights for ent(%d)\n", v14, entityNum);
  }
  return v12;
}

/*
==============
R_LinkSphereEntityToPrimaryLightsAABBTree
==============
*/
__int64 R_LinkSphereEntityToPrimaryLightsAABBTree(unsigned int nodeIndex, Sphere *sphere, unsigned int *visBits)
{
  GfxWorld *world; 
  unsigned int v6; 
  GfxLightAABBNode *v7; 
  __int64 result; 
  __int128 v10; 
  __m128 v14; 
  __m128 v18; 
  unsigned __int16 childCount; 
  __int16 firstChild; 
  int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  const ComPrimaryLight *PrimaryLight; 
  unsigned __int8 type; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  unsigned int v37; 
  __int64 v38; 
  GfxWorld *v39; 
  __int128 v40; 
  __m128 v41; 
  __m128 v42; 

  world = rgp.world;
  v39 = rgp.world;
  v6 = 0;
  v7 = &rgp.world->lightAABB.nodeArray[nodeIndex];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
    __debugbreak();
  if ( !sphere && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  result = 0i64;
  HIDWORD(v40) = 0;
  v10 = v40;
  *(float *)&v10 = sphere->origin.v[0];
  _XMM5 = v10;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [r15+4], 10h
    vinsertps xmm5, xmm5, dword ptr [r15+8], 20h ; ' '
  }
  v41 = _XMM5;
  v41.m128_i32[3] = 0;
  v14 = v41;
  v14.m128_f32[0] = v7->bound.midPoint.v[0];
  _XMM4 = v14;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rsi+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rsi+8], 20h ; ' '
  }
  v42 = _XMM4;
  _mm128_sub_ps(_XMM5, _XMM4);
  v42.m128_i32[3] = 0;
  v18 = v42;
  v18.m128_f32[0] = v7->bound.halfSize.v[0];
  _XMM3 = v18;
  __asm { vinsertps xmm3, xmm3, dword ptr [rsi+10h], 10h }
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsi+14h], 20h ; ' '
    vandnps xmm2, xmm0, xmm1
  }
  _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
  __asm { vmaxps  xmm1, xmm3, xmm0 }
  _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm
  {
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  if ( *(float *)&_XMM1 <= sphere->radiusSq )
  {
    childCount = v7->childCount;
    firstChild = v7->firstChild;
    if ( firstChild >= 0 )
    {
      v37 = 0;
      if ( childCount )
      {
        do
        {
          v6 += R_LinkSphereEntityToPrimaryLightsAABBTree(v37 + v7->firstChild, sphere, visBits);
          ++v37;
        }
        while ( v37 < v7->childCount );
      }
      return v6;
    }
    else
    {
      v30 = firstChild & 0x7FFF;
      v31 = childCount;
      v32 = 0;
      if ( childCount )
      {
        do
        {
          v33 = world->lightAABB.lightArray[v32 + v30];
          PrimaryLight = Com_GetPrimaryLight(v33);
          type = PrimaryLight->type;
          if ( (unsigned __int8)(type - 2) > 1u )
          {
            LODWORD(v38) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 971, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", v38) )
              __debugbreak();
          }
          if ( PrimaryLight->needsDynamicShadows && R_PrimaryLightFrustumTestSphere(v33, sphere) )
          {
            EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(v33);
            if ( !visBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
              __debugbreak();
            visBits[EntityPrimaryLightShadowBitArrayIndex >> 5] |= 1 << (EntityPrimaryLightShadowBitArrayIndex & 0x1F);
            ++v6;
          }
          world = v39;
          ++v32;
        }
        while ( v32 < v31 );
        return v6;
      }
      else
      {
        return 0i64;
      }
    }
  }
  return result;
}

/*
==============
R_NumPrimaryShadowLightsLinkedToDynEntClient
==============
*/
__int64 R_NumPrimaryShadowLightsLinkedToDynEntClient(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  unsigned int *PrimaryLightDynEntClientShadowBitsArray; 
  __int64 result; 
  unsigned int staticSpotOmniPrimaryLightCountAligned; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int *v9; 

  PrimaryLightDynEntClientShadowBitsArray = R_GetPrimaryLightDynEntClientShadowBitsArray(localClientNum, basis, dynEntClientId);
  result = 0i64;
  staticSpotOmniPrimaryLightCountAligned = rgp.world->staticSpotOmniPrimaryLightCountAligned;
  if ( rgp.world->shadowBitsArrayPitch != staticSpotOmniPrimaryLightCountAligned )
    return *(unsigned __int16 *)PrimaryLightDynEntClientShadowBitsArray;
  v7 = staticSpotOmniPrimaryLightCountAligned >> 5;
  if ( v7 )
  {
    v8 = v7;
    v9 = rgp.world->primaryLightDynEntShadowVis[(unsigned __int8)basis];
    do
    {
      result = __popcnt(*v9++) + (unsigned int)result;
      --v8;
    }
    while ( v8 );
  }
  return result;
}

/*
==============
R_PopulateMotionBits
==============
*/
__int64 R_PopulateMotionBits(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  unsigned int staticSpotOmniPrimaryLightCountAligned; 
  int v4; 
  unsigned int v5; 
  unsigned int *v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 
  unsigned int *entityMotionBits; 
  unsigned int *v12; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int shadowBitsArrayPitch; 
  unsigned int *v18; 
  unsigned int v19; 
  unsigned __int16 *v20; 
  unsigned int v21; 
  __int64 v22; 
  signed int v23; 
  unsigned int v24; 
  unsigned int *v25; 
  unsigned int lastSunPrimaryLightIndex; 
  int integer; 
  int v28; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned int v32; 
  unsigned int v33; 
  int v34; 
  __int64 v35; 
  int v36; 
  const char *v37; 
  __int64 v39; 
  __int64 v40; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned __int32 v44; 
  const char *v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned __int16 *v48; 
  __int64 v49; 
  signed int v50; 
  unsigned int v51; 
  unsigned int *v52; 
  __int64 v53; 
  unsigned int *v54; 
  int v55; 
  unsigned int *v56; 
  __int64 v57; 
  int v58; 
  unsigned int v59; 
  int v60; 
  signed int v61; 
  int v62; 
  __int64 v63; 
  __int64 v64; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int v68; 
  int v69; 
  int v70; 
  unsigned int v71; 
  unsigned int *PrimaryLightMotionBits; 
  unsigned int *v73; 
  __int64 v74; 
  __int64 v75; 
  unsigned int v76; 
  int v77; 
  const char *v78; 
  int v80; 
  int v81; 
  unsigned int v82; 
  int v83; 

  v1 = localClientNum;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1542, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  staticSpotOmniPrimaryLightCountAligned = rgp.world->staticSpotOmniPrimaryLightCountAligned;
  if ( !staticSpotOmniPrimaryLightCountAligned )
    return 0i64;
  v4 = 80 * v1;
  v5 = staticSpotOmniPrimaryLightCountAligned >> 5;
  v70 = 80 * v1;
  v82 = v5;
  PrimaryLightMotionBits = R_GetPrimaryLightMotionBits(v1);
  v6 = PrimaryLightMotionBits;
  v69 = 0;
  v7 = 0;
  v83 = 0;
  v65 = 0;
  do
  {
    v8 = v7 + v4;
    v9 = 32 * v7;
    v80 = 32 * v7;
    if ( (unsigned int)v8 >= rgp.world->entityMotionBitsEntries )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1559, ASSERT_TYPE_ASSERT, "(firstEntEntry + elem < rgp.world->entityMotionBitsEntries)", (const char *)&queryFormat, "firstEntEntry + elem < rgp.world->entityMotionBitsEntries") )
        __debugbreak();
      v9 = v80;
    }
    entityMotionBits = rgp.world->entityMotionBits;
    _EAX = entityMotionBits[v8];
    v12 = &entityMotionBits[v8];
    v73 = v12;
    if ( _EAX )
    {
      do
      {
        __asm { tzcnt   r13d, eax }
        v14 = _ER13 + v9;
        v67 = _ER13 + v9;
        if ( gfxCfg.entCount > 0xA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 951, ASSERT_TYPE_ASSERT, "(gfxCfg.entCount <= ( ( 2048 ) + ( 96 + ( 32 ) + CLIENT_MODEL_MAX_COUNT + 0 ) ))", (const char *)&queryFormat, "gfxCfg.entCount <= MAX_GFXENTITIES") )
          __debugbreak();
        if ( v14 >= gfxCfg.entCount )
        {
          LODWORD(v64) = gfxCfg.entCount;
          LODWORD(v63) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 952, ASSERT_TYPE_ASSERT, "( entnum ) < ( gfxCfg.entCount )", "%s < %s\n\t%i, %i", "entnum", "gfxCfg.entCount", v63, v64) )
            __debugbreak();
        }
        v15 = rgp.world->shadowBitsArrayPitch * (v14 + v1 * gfxCfg.entCount);
        if ( ((LOBYTE(rgp.world->shadowBitsArrayPitch) * ((_BYTE)v14 + (_BYTE)v1 * LOBYTE(gfxCfg.entCount))) & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 954, ASSERT_TYPE_ASSERT, "(( firstBit & 31 ) == 0)", (const char *)&queryFormat, "( firstBit & 31 ) == 0") )
          __debugbreak();
        v16 = v15 >> 5;
        if ( (unsigned int)v16 >= rgp.world->numPrimaryLightEntityShadowVisEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 963, ASSERT_TYPE_ASSERT, "(entFirstEntry < rgp.world->numPrimaryLightEntityShadowVisEntries)", (const char *)&queryFormat, "entFirstEntry < rgp.world->numPrimaryLightEntityShadowVisEntries") )
          __debugbreak();
        shadowBitsArrayPitch = rgp.world->shadowBitsArrayPitch;
        v18 = &rgp.world->primaryLightEntityShadowVis[v16];
        if ( shadowBitsArrayPitch == rgp.world->staticSpotOmniPrimaryLightCountAligned )
        {
          if ( v5 )
          {
            v53 = v5;
            v54 = v6;
            do
            {
              v55 = *(unsigned int *)((char *)v54 + (char *)v18 - (char *)v6);
              if ( v55 )
                *v54 |= v55;
              ++v54;
              --v53;
            }
            while ( v53 );
          }
        }
        else
        {
          v19 = *(unsigned __int16 *)v18;
          if ( v19 >= shadowBitsArrayPitch >> 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1517, ASSERT_TYPE_ASSERT, "(lightCount < R_GetEntityLightListSize())", (const char *)&queryFormat, "lightCount < R_GetEntityLightListSize()") )
            __debugbreak();
          v20 = (unsigned __int16 *)v18 + 1;
          if ( (_WORD)v19 )
          {
            v21 = 32 * v5;
            v22 = (unsigned __int16)v19;
            do
            {
              v23 = *v20 - rgp.world->lastSunPrimaryLightIndex;
              v24 = v23 - 1;
              if ( v23 - 1 >= s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1 )
              {
                LODWORD(v64) = s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1;
                LODWORD(v63) = v23 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 942, ASSERT_TYPE_ASSERT, "( bitIndex ) < ( staticSpotOmniPrimaryLightCount )", "%s < %s\n\t%i, %i", "bitIndex", "staticSpotOmniPrimaryLightCount", v63, v64) )
                  __debugbreak();
              }
              if ( v24 >= v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1522, ASSERT_TYPE_ASSERT, "(bitIndex < entryCount * 32)", (const char *)&queryFormat, "bitIndex < entryCount * 32") )
                __debugbreak();
              if ( !PrimaryLightMotionBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                __debugbreak();
              ++v20;
              v25 = &PrimaryLightMotionBits[(v23 - 1i64) >> 5];
              *v25 |= 1 << (v24 & 0x1F);
              --v22;
            }
            while ( v22 );
            v14 = v67;
            v12 = v73;
            v5 = v82;
            v1 = localClientNum;
          }
          v6 = PrimaryLightMotionBits;
        }
        ++v69;
        *v12 &= ~(1 << _ER13);
        lastSunPrimaryLightIndex = rgp.world->lastSunPrimaryLightIndex;
        integer = r_primaryLightMotionDebug->current.integer;
        if ( integer >= (int)(lastSunPrimaryLightIndex + 1) )
        {
          v28 = integer - lastSunPrimaryLightIndex - 1;
          if ( v28 >= s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1 )
          {
            LODWORD(v64) = s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1;
            LODWORD(v63) = v28;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 942, ASSERT_TYPE_ASSERT, "( bitIndex ) < ( staticSpotOmniPrimaryLightCount )", "%s < %s\n\t%i, %i", "bitIndex", "staticSpotOmniPrimaryLightCount", v63, v64) )
              __debugbreak();
          }
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v29 = v18[(__int64)v28 >> 5];
          if ( _bittest((const int *)&v29, v28 & 0x1F) )
            Com_Printf(8, "Entity(%d) triggered motion for primary light %d\n", v14, r_primaryLightMotionDebug->current.unsignedInt);
        }
        _EAX = *v12;
        v9 = v80;
      }
      while ( *v12 );
    }
    v4 = v70;
    v7 = v65 + 1;
    v65 = v7;
  }
  while ( v7 < 0x50 );
  if ( (unsigned int)(r_primaryLightMotionDetect->current.integer - 2) <= 1 )
  {
    v30 = 15264i64;
    v68 = 0;
    v31 = 15256i64;
    v74 = 15264i64;
    v32 = 0;
    v75 = 15256i64;
    do
    {
      v33 = 0;
      v66 = 0;
      v76 = (unsigned int)(*(_DWORD *)((char *)&s_world.smodels.clutterCollectionGPUDataBuffer.rwView.rwCounterResource + v31) + 31) >> 5;
      v34 = v1 * v76;
      v77 = v1 * v76;
      if ( v76 )
      {
        do
        {
          v35 = v33 + v34;
          v36 = 32 * v33;
          v81 = 32 * v33;
          if ( (unsigned int)v35 >= *(_DWORD *)((char *)&rgp.world->name + v31) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1605, ASSERT_TYPE_ASSERT, "(firstDynEntEntry + elem < rgp.world->dynEntMotionBitsEntries[dynType])", (const char *)&queryFormat, "firstDynEntEntry + elem < rgp.world->dynEntMotionBitsEntries[dynType]") )
              __debugbreak();
            v36 = v81;
          }
          v37 = &(*(const char **)((char *)&rgp.world->name + v30))[4 * v35];
          _ECX = *(_DWORD *)v37;
          v78 = v37;
          if ( *(_DWORD *)v37 )
          {
            v39 = 4i64 * (unsigned __int8)v32 + 15976;
            v40 = 8i64 * (unsigned __int8)v32 + 15288;
            do
            {
              __asm { tzcnt   r13d, ecx }
              v42 = _ER13 + v36;
              if ( (unsigned int)(_ER13 + v36) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v42, "unsigned", v42) )
                __debugbreak();
              v43 = (unsigned __int16)v42;
              v71 = (unsigned __int16)v42;
              if ( (unsigned int)(unsigned __int16)v42 >= *(_DWORD *)((char *)&rgp.world->name + v39) )
              {
                LODWORD(v64) = *(_DWORD *)((char *)&rgp.world->name + v39);
                LODWORD(v63) = (unsigned __int16)v42;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1343, ASSERT_TYPE_ASSERT, "( entnum ) < ( rgp.world->dpvsDyn.dynEntClientCount[basis] )", "%s < %s\n\t%i, %i", "entnum", "rgp.world->dpvsDyn.dynEntClientCount[basis]", v63, v64) )
                  __debugbreak();
              }
              v44 = rgp.world->shadowBitsArrayPitch * ((unsigned __int16)v42 + localClientNum * *(_DWORD *)((char *)&rgp.world->name + v39));
              if ( (v44 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1345, ASSERT_TYPE_ASSERT, "((firstBit & 31) == 0)", (const char *)&queryFormat, "(firstBit & 31) == 0") )
                __debugbreak();
              v45 = &(*(const char **)((char *)&rgp.world->name + v40))[4 * ((unsigned __int64)v44 >> 5)];
              v46 = rgp.world->shadowBitsArrayPitch;
              if ( v46 == rgp.world->staticSpotOmniPrimaryLightCountAligned )
              {
                if ( v82 )
                {
                  v56 = v6;
                  v57 = v82;
                  do
                  {
                    v58 = *(unsigned int *)((char *)v56 + v45 - (const char *)v6);
                    if ( v58 )
                      *v56 |= v58;
                    ++v56;
                    --v57;
                  }
                  while ( v57 );
                }
              }
              else
              {
                v47 = *(unsigned __int16 *)v45;
                if ( v47 >= v46 >> 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1517, ASSERT_TYPE_ASSERT, "(lightCount < R_GetEntityLightListSize())", (const char *)&queryFormat, "lightCount < R_GetEntityLightListSize()") )
                  __debugbreak();
                v48 = (unsigned __int16 *)(v45 + 2);
                if ( (_WORD)v47 )
                {
                  v49 = (unsigned __int16)v47;
                  do
                  {
                    v50 = *v48 - rgp.world->lastSunPrimaryLightIndex;
                    v51 = v50 - 1;
                    if ( v50 - 1 >= s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1 )
                    {
                      LODWORD(v64) = s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1;
                      LODWORD(v63) = v50 - 1;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 942, ASSERT_TYPE_ASSERT, "( bitIndex ) < ( staticSpotOmniPrimaryLightCount )", "%s < %s\n\t%i, %i", "bitIndex", "staticSpotOmniPrimaryLightCount", v63, v64) )
                        __debugbreak();
                    }
                    if ( v51 >= 32 * v82 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1522, ASSERT_TYPE_ASSERT, "(bitIndex < entryCount * 32)", (const char *)&queryFormat, "bitIndex < entryCount * 32") )
                      __debugbreak();
                    if ( !PrimaryLightMotionBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                      __debugbreak();
                    ++v48;
                    v52 = &PrimaryLightMotionBits[(v50 - 1i64) >> 5];
                    *v52 |= 1 << (v51 & 0x1F);
                    --v49;
                  }
                  while ( v49 );
                  v43 = v71;
                  v37 = v78;
                }
              }
              ++v83;
              *(_DWORD *)v37 &= ~(1 << _ER13);
              v59 = rgp.world->lastSunPrimaryLightIndex;
              v60 = r_primaryLightMotionDebug->current.integer;
              if ( v60 >= (int)(v59 + 1) )
              {
                v61 = v60 - v59;
                if ( v61 - 1 >= s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1 )
                {
                  LODWORD(v64) = s_world.primaryLightCount - s_world.lastSunPrimaryLightIndex - s_world.movingScriptablePrimaryLightCount - 1;
                  LODWORD(v63) = v61 - 1;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 942, ASSERT_TYPE_ASSERT, "( bitIndex ) < ( staticSpotOmniPrimaryLightCount )", "%s < %s\n\t%i, %i", "bitIndex", "staticSpotOmniPrimaryLightCount", v63, v64) )
                    __debugbreak();
                }
                if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                  __debugbreak();
                v62 = *(_DWORD *)&v45[4 * ((v61 - 1i64) >> 5)];
                if ( _bittest(&v62, ((_BYTE)v61 - 1) & 0x1F) )
                  Com_Printf(8, "dynEnt(%d) triggered motion for primary light %d\n", v43, r_primaryLightMotionDebug->current.unsignedInt);
              }
              _ECX = *(_DWORD *)v37;
              v6 = PrimaryLightMotionBits;
              v39 = 4i64 * (unsigned __int8)v32 + 15976;
              v36 = v81;
              v40 = 8i64 * (unsigned __int8)v32 + 15288;
            }
            while ( *(_DWORD *)v37 );
            v31 = v75;
            v32 = v68;
            v30 = v74;
          }
          v6 = PrimaryLightMotionBits;
          v34 = v77;
          v33 = v66 + 1;
          v66 = v33;
        }
        while ( v33 < v76 );
        v1 = localClientNum;
      }
      v6 = PrimaryLightMotionBits;
      ++v32;
      v30 += 8i64;
      v68 = v32;
      v31 += 4i64;
      v74 = v30;
      v75 = v31;
    }
    while ( v32 < 2 );
  }
  return v69 | (unsigned int)(v83 << 16);
}

/*
==============
R_PrimaryLightFrustumTestBox
==============
*/
bool R_PrimaryLightFrustumTestBox(unsigned int primaryLightIndex, const Bounds *bounds)
{
  __int64 v3; 
  const ComPrimaryLight *PrimaryLight; 
  unsigned __int8 type; 
  int integer; 
  GfxLightViewFrustum *lightViewFrustums; 
  unsigned __int8 planeCount; 
  vec4_t *planes; 
  int v10; 
  int v11; 
  float v13; 
  float cosHalfFovOuter; 
  float bulbRadius; 
  double v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  vec3_t v23; 
  vec3_t v24; 
  vec3_t coneOrg; 

  v3 = primaryLightIndex;
  PrimaryLight = Com_GetPrimaryLight(primaryLightIndex);
  type = PrimaryLight->type;
  if ( (unsigned __int8)(type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 993, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", type) )
    __debugbreak();
  integer = sm_spotShadowCulling->current.integer;
  if ( integer != 2 )
  {
    if ( !integer )
    {
      v18 = 0.0;
      goto LABEL_15;
    }
LABEL_13:
    v13 = PrimaryLight->bulbLength.v[2];
    cosHalfFovOuter = PrimaryLight->cosHalfFovOuter;
    bulbRadius = PrimaryLight->bulbRadius;
    *(_QWORD *)v23.v = *(_QWORD *)PrimaryLight->bulbLength.v;
    v16 = *(double *)PrimaryLight->dir.v;
    v23.v[2] = v13;
    v17 = PrimaryLight->dir.v[2];
    *(double *)v24.v = v16;
    v24.v[2] = v17;
    v18 = PhysicallyBasedLight_AreaLightVPLOffsetTube(&v24, &v23, bulbRadius, cosHalfFovOuter);
LABEL_15:
    v19 = v18 + PrimaryLight->radius;
    v20 = v18 * PrimaryLight->dir.v[1];
    coneOrg.v[0] = (float)(v18 * PrimaryLight->dir.v[0]) + PrimaryLight->origin.v[0];
    v21 = v18 * PrimaryLight->dir.v[2];
    v22 = PrimaryLight->cosHalfFovOuter;
    coneOrg.v[1] = v20 + PrimaryLight->origin.v[1];
    coneOrg.v[2] = v21 + PrimaryLight->origin.v[2];
    return !CullBoxFromConicSectionOfSphere(&coneOrg, &PrimaryLight->dir, v22, v19, bounds);
  }
  lightViewFrustums = rgp.world->lightViewFrustums;
  if ( !lightViewFrustums )
    goto LABEL_13;
  planeCount = lightViewFrustums[v3].planeCount;
  if ( !planeCount )
    goto LABEL_13;
  planes = lightViewFrustums[v3].planes;
  v10 = planeCount;
  v11 = 0;
  while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(planes->v[0]) & _xmm) * bounds->halfSize.v[0]) + (float)((float)(bounds->midPoint.v[0] * planes->v[0]) + planes->v[3])) + (float)(bounds->midPoint.v[1] * planes->v[1])) + (float)(COERCE_FLOAT(LODWORD(planes->v[1]) & _xmm) * bounds->halfSize.v[1])) + (float)(bounds->midPoint.v[2] * planes->v[2])) + (float)(COERCE_FLOAT(LODWORD(planes->v[2]) & _xmm) * bounds->halfSize.v[2])) > 0.0 )
  {
    ++v11;
    ++planes;
    if ( v11 >= v10 )
      return 1;
  }
  return 0;
}

/*
==============
R_PrimaryLightFrustumTestSphere
==============
*/
char R_PrimaryLightFrustumTestSphere(unsigned int primaryLightIndex, const Sphere *sphere)
{
  __int64 v3; 
  const ComPrimaryLight *PrimaryLight; 
  unsigned __int8 type; 
  GfxLightViewFrustum *lightViewFrustums; 
  unsigned __int8 planeCount; 
  float *v; 
  int v9; 
  int v10; 
  float radius; 
  float v13; 
  int integer; 
  float v15; 
  float v16; 
  float v17; 
  bool v18; 
  float v19; 
  float cosHalfFovOuter; 
  float bulbRadius; 
  double v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  vec3_t v27; 
  vec3_t v28; 
  vec3_t coneOrg; 

  v3 = primaryLightIndex;
  PrimaryLight = Com_GetPrimaryLight(primaryLightIndex);
  type = PrimaryLight->type;
  if ( (unsigned __int8)(type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1036, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", type) )
    __debugbreak();
  if ( sm_spotShadowCulling->current.integer == 2 && (lightViewFrustums = rgp.world->lightViewFrustums) != NULL && (planeCount = lightViewFrustums[v3].planeCount) != 0 )
  {
    v = lightViewFrustums[v3].planes->v;
    v9 = planeCount;
    v10 = 0;
    while ( (float)((float)((float)((float)((float)(sphere->origin.v[1] * v[1]) + (float)(sphere->origin.v[0] * *v)) + (float)(sphere->origin.v[2] * v[2])) + v[3]) + sphere->radius) > 0.0 )
    {
      ++v10;
      v += 4;
      if ( v10 >= v9 )
        return 1;
    }
    return 0;
  }
  else
  {
    radius = sphere->radius;
    if ( (unsigned __int8)(PrimaryLight->type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1018, ASSERT_TYPE_ASSERT, "(light->type == 2 || light->type == 3)", (const char *)&queryFormat, "light->type == GFX_LIGHT_TYPE_SPOT || light->type == GFX_LIGHT_TYPE_OMNI") )
      __debugbreak();
    v13 = 0.0;
    integer = sm_spotShadowCulling->current.integer;
    if ( integer )
      v15 = fsqrt((float)((float)(PrimaryLight->bulbLength.v[0] * PrimaryLight->bulbLength.v[0]) + (float)(PrimaryLight->bulbLength.v[1] * PrimaryLight->bulbLength.v[1])) + (float)(PrimaryLight->bulbLength.v[2] * PrimaryLight->bulbLength.v[2]));
    else
      v15 = 0.0;
    v16 = PrimaryLight->origin.v[1];
    v17 = PrimaryLight->origin.v[2];
    if ( (float)((float)((float)((float)(sphere->origin.v[1] - v16) * (float)(sphere->origin.v[1] - v16)) + (float)((float)(sphere->origin.v[0] - PrimaryLight->origin.v[0]) * (float)(sphere->origin.v[0] - PrimaryLight->origin.v[0]))) + (float)((float)(sphere->origin.v[2] - v17) * (float)(sphere->origin.v[2] - v17))) < (float)((float)((float)(v15 + PrimaryLight->radius) + radius) * (float)((float)(v15 + PrimaryLight->radius) + radius)) )
    {
      if ( integer )
      {
        v19 = PrimaryLight->bulbLength.v[2];
        cosHalfFovOuter = PrimaryLight->cosHalfFovOuter;
        bulbRadius = PrimaryLight->bulbRadius;
        *(_QWORD *)v27.v = *(_QWORD *)PrimaryLight->bulbLength.v;
        v22 = *(double *)PrimaryLight->dir.v;
        v27.v[2] = v19;
        v23 = PrimaryLight->dir.v[2];
        *(double *)v28.v = v22;
        v28.v[2] = v23;
        *(float *)&v22 = PhysicallyBasedLight_AreaLightVPLOffsetTube(&v28, &v27, bulbRadius, cosHalfFovOuter);
        v16 = PrimaryLight->origin.v[1];
        v17 = PrimaryLight->origin.v[2];
        v13 = *(float *)&v22;
      }
      v24 = v13 * PrimaryLight->dir.v[1];
      v25 = PrimaryLight->cosHalfFovOuter;
      coneOrg.v[0] = (float)(v13 * PrimaryLight->dir.v[0]) + PrimaryLight->origin.v[0];
      v26 = v13 * PrimaryLight->dir.v[2];
      coneOrg.v[1] = v24 + v16;
      coneOrg.v[2] = v26 + v17;
      v18 = CullSphereFromCone(&coneOrg, &PrimaryLight->dir, v25, &sphere->origin, radius);
    }
    else
    {
      v18 = 1;
    }
    return !v18;
  }
}

/*
==============
R_ShadowedSpotLightScore_MultiSamples
==============
*/
float R_ShadowedSpotLightScore_MultiSamples(const GfxLightScoreConfig *config, const GfxViewParms *viewParms, const GfxLight *light, const bool nvgMode)
{
  float intensity; 
  __int128 v8; 
  vec3_t *p_dir; 
  float bulbRadius; 
  float cosHalfFovOuter; 
  __int128 v12; 
  __int128 v13; 
  float v17; 
  float v18; 
  double v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v25; 
  unsigned int v28; 
  float m_sampleBegin; 
  unsigned int v30; 
  vec3_t *p_up; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  __int64 v37; 
  unsigned int v38; 
  float radius; 
  float v40; 
  float v41; 
  float v42; 
  unsigned int v43; 
  __int64 v44; 
  float v45; 
  float v46; 
  __int64 v47; 
  float v48; 
  float v49; 
  __int64 v50; 
  float v51; 
  float v52; 
  __int64 v53; 
  __int64 v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  __int64 v62; 
  float v63; 
  float v64; 
  float v65; 
  float m_sampleExtra1; 
  float m_sampleExtra0; 
  bool v68; 
  bool v69; 
  unsigned int v70; 
  float v71; 
  float v72; 
  float v73; 
  __int64 v74; 
  __int64 v75; 
  float v76; 
  int v77; 
  float v78; 
  __int64 v79; 
  __int64 v80; 
  float v81; 
  float v82; 
  float v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  float v89; 
  int v90; 
  float v91; 
  __int64 v92; 
  __int64 v93; 
  float v94; 
  float v95; 
  float v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  float *v101; 
  __int64 v102; 
  float v103; 
  float v104; 
  float v105; 
  __int128 v107; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  __int128 v117; 
  __int128 v120; 
  float v122; 
  float v123; 
  bool v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float m_score0Min; 
  float m_score0Max; 
  float m_score1ConstA; 
  float m_score1DistanceFalloffRcp; 
  float m_score1Min; 
  float m_score1Max; 
  vec3_t bulbLength; 
  double v136; 
  double v137; 
  float v138; 
  __int64 v139; 
  float v140; 
  char v141; 
  float v142; 
  int v143[2]; 
  float v144[190]; 

  intensity = light->intensity;
  v125 = intensity;
  if ( nvgMode )
  {
    intensity = intensity + light->irIntensity;
    v125 = intensity;
  }
  if ( intensity < 0.00000011920929 )
    return 0.0;
  v8 = *(unsigned __int64 *)light->bulbLength.v;
  m_score0Min = config->m_score0Min;
  m_score0Max = config->m_score0Max;
  m_score1ConstA = config->m_score1ConstA;
  m_score1Min = config->m_score1Min;
  m_score1Max = config->m_score1Max;
  m_score1DistanceFalloffRcp = config->m_score1DistanceFalloffRcp;
  p_dir = &light->dir;
  v139 = *(_QWORD *)viewParms->camera.axis.m[0].v;
  bulbRadius = light->bulbRadius;
  cosHalfFovOuter = light->cosHalfFovOuter;
  v12 = LODWORD(FLOAT_1_0);
  v138 = viewParms->camera.origin.v[2];
  v13 = v8;
  bulbLength = light->bulbLength;
  v140 = viewParms->camera.axis.m[0].v[2];
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(bulbLength.v[1] * bulbLength.v[1])) + (float)(bulbLength.v[2] * bulbLength.v[2]));
  _XMM3 = v13;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm12, xmm0
  }
  v25 = LODWORD(FLOAT_1_0);
  v17 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v8) * bulbRadius) + *(float *)&v8;
  *(float *)&v25 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * bulbLength.v[1]) * bulbRadius) + bulbLength.v[1];
  v18 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * bulbLength.v[2]) * bulbRadius) + bulbLength.v[2];
  *(float *)&_XMM3 = (float)(COERCE_FLOAT(*(_QWORD *)light->dir.v) * v17) + (float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)light->dir.v, (__m128)*(unsigned __int64 *)light->dir.v, 85).m128_f32[0] * *(float *)&v25);
  v19 = *(double *)viewParms->camera.origin.v;
  v142 = light->dir.v[2];
  v136 = v19;
  v124 = 0;
  v137 = v19;
  v20 = (float)((float)(fsqrt((float)((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v17 * v17)) + (float)(v18 * v18)) - (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM3 + (float)(v18 * v142)) & _xmm) * COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM3 + (float)(v18 * v142)) & _xmm))) * cosHalfFovOuter) / fsqrt(1.0 - (float)(cosHalfFovOuter * cosHalfFovOuter))) + COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM3 + (float)(v18 * v142)) & _xmm);
  v21 = (float)((float)(v20 * light->dir.v[1]) + light->origin.v[1]) - *((float *)&v137 + 1);
  v22 = (float)((float)(v20 * light->dir.v[2]) + light->origin.v[2]) - v138;
  v23 = (float)((float)(v20 * light->dir.v[0]) + light->origin.v[0]) - *(float *)&v19;
  *(float *)&v25 = fsqrt((float)((float)(v21 * v21) + (float)(v23 * v23)) + (float)(v22 * v22));
  _XMM14 = v25;
  __asm
  {
    vcmpless xmm0, xmm14, cs:__real@80000000
    vblendvps xmm0, xmm14, xmm12, xmm0
  }
  v28 = 1;
  if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v21) * light->dir.v[1]) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v23) * light->dir.v[0])) + (float)((float)(v22 * (float)(1.0 / *(float *)&_XMM0)) * light->dir.v[2])) > cosHalfFovOuter && *(float *)&v25 < (float)(v20 + light->radius) )
    v124 = *(float *)&v25 > v20;
  m_sampleBegin = config->m_sampleBegin;
  v30 = I_clamp((int)(float)((float)(config->m_sampleRange * light->radius) * config->m_sampleDistanceRcp), config->m_sampleCountMin, config->m_sampleCountMax) - 1;
  p_up = &light->up;
  v32 = (float)v30;
  v33 = (float)(config->m_sampleEnd - config->m_sampleBegin) / v32;
  v128 = fsqrt(1.0 - (float)(light->cosHalfFovOuter * light->cosHalfFovOuter));
  if ( &light->up == (vec3_t *)&v141 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( p_dir == (vec3_t *)&v141 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  v34 = p_dir->v[2];
  v35 = p_dir->v[1];
  v36 = p_dir->v[0];
  v37 = 0i64;
  v38 = 0;
  v126 = (float)(v34 * light->up.v[1]) - (float)(v35 * light->up.v[2]);
  v122 = (float)(v35 * p_up->v[0]) - (float)(p_dir->v[0] * light->up.v[1]);
  v127 = (float)(p_dir->v[0] * light->up.v[2]) - (float)(v34 * light->up.v[0]);
  if ( v30 + 1 < 4 )
    goto LABEL_18;
  radius = light->radius;
  v40 = light->origin.v[0];
  v41 = light->origin.v[1];
  v42 = light->origin.v[2];
  v43 = 1;
  do
  {
    v44 = 3 * v37;
    v45 = (float)v38;
    LODWORD(v46) = COERCE_UNSIGNED_INT((float)((float)(v45 * v33) + m_sampleBegin) * radius) ^ _xmm;
    *(float *)&v143[v44] = (float)(v36 * v46) + v40;
    *(float *)&v143[v44 + 1] = (float)(v46 * v35) + v41;
    v144[v44] = (float)(v46 * v34) + v42;
    v37 = (unsigned int)(v37 + 4);
    v38 += 4;
    v47 = 3i64 * v43;
    v48 = (float)v43;
    LODWORD(v49) = COERCE_UNSIGNED_INT((float)((float)(v48 * v33) + m_sampleBegin) * radius) ^ _xmm;
    *(float *)&v143[v47] = (float)(v36 * v49) + v40;
    *(float *)&v143[v47 + 1] = (float)(v49 * v35) + v41;
    v144[v47] = (float)(v49 * v34) + v42;
    v50 = 3i64 * (v43 + 1);
    v51 = (float)(v43 + 1);
    LODWORD(v52) = COERCE_UNSIGNED_INT((float)((float)(v51 * v33) + m_sampleBegin) * radius) ^ _xmm;
    *(float *)&v143[v50] = (float)(v36 * v52) + v40;
    *(float *)&v143[v50 + 1] = (float)(v52 * v35) + v41;
    v53 = v43 + 2;
    v43 += 4;
    v144[v50] = (float)(v52 * v34) + v42;
    v54 = 3 * v53;
    v55 = (float)(unsigned int)v53;
    LODWORD(v56) = COERCE_UNSIGNED_INT((float)((float)(v55 * v33) + m_sampleBegin) * radius) ^ _xmm;
    *(float *)&v143[v54] = (float)(v36 * v56) + v40;
    *(float *)&v143[v54 + 1] = (float)(v56 * v35) + v41;
    v144[v54] = (float)(v56 * v34) + v42;
  }
  while ( v38 <= v30 - 3 );
  if ( v38 <= v30 )
  {
LABEL_18:
    v57 = light->radius;
    v58 = p_dir->v[0];
    v59 = light->origin.v[0];
    v60 = light->origin.v[1];
    v61 = light->origin.v[2];
    do
    {
      v62 = 3 * v37;
      v63 = (float)v38;
      LODWORD(v64) = COERCE_UNSIGNED_INT((float)((float)(v63 * v33) + m_sampleBegin) * v57) ^ _xmm;
      *(float *)&v143[v62] = (float)(v64 * v58) + v59;
      v37 = (unsigned int)(v37 + 1);
      ++v38;
      v144[v62] = (float)(v64 * v34) + v61;
      *(float *)&v143[v62 + 1] = (float)(v64 * v35) + v60;
    }
    while ( v38 <= v30 );
  }
  if ( (unsigned int)v37 > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 220, ASSERT_TYPE_ASSERT, "(sampleCount <= ( sizeof( *array_counter( sampleTable ) ) + 0 ))", (const char *)&queryFormat, "sampleCount <= ARRAY_COUNT( sampleTable )") )
    __debugbreak();
  v65 = light->radius;
  m_sampleExtra1 = config->m_sampleExtra1;
  m_sampleExtra0 = config->m_sampleExtra0;
  v123 = m_sampleExtra1;
  v68 = v65 >= config->m_sampleExtraThreshold0 && m_sampleExtra0 > 0.0;
  v69 = v65 >= config->m_sampleExtraThreshold1 && m_sampleExtra1 > 0.0;
  if ( v68 || v69 )
  {
    if ( v30 )
    {
      v70 = v37 + 4;
      do
      {
        v71 = (float)v28;
        v72 = (float)((float)((float)(v71 * v33) + m_sampleBegin) * v65) * v128;
        if ( v68 && v70 <= 0x40 )
        {
          v73 = v122;
          m_sampleExtra1 = v123;
          v74 = 3 * v37;
          v75 = (unsigned int)(v37 + 1);
          v76 = (float)(v72 * m_sampleExtra0) * light->up.v[1];
          *(float *)&v143[v74] = (float)((float)(v72 * m_sampleExtra0) * p_up->v[0]) + *(float *)&v143[3 * v28];
          *(float *)&v77 = v76 + *(float *)&v143[3 * v28 + 1];
          v78 = (float)(v72 * m_sampleExtra0) * light->up.v[2];
          v143[v74 + 1] = v77;
          v144[v74] = v78 + v144[3 * v28];
          v79 = 3 * v75;
          v80 = (unsigned int)(v75 + 1);
          LODWORD(v81) = COERCE_UNSIGNED_INT(v72 * m_sampleExtra0) ^ _xmm;
          v82 = v81 * light->up.v[1];
          *(float *)&v143[v79] = (float)(v81 * p_up->v[0]) + *(float *)&v143[3 * v28];
          v83 = v81 * light->up.v[2];
          *(float *)&v143[v79 + 1] = v82 + *(float *)&v143[3 * v28 + 1];
          v144[v79] = v83 + v144[3 * v28];
          v84 = 3 * v80;
          v85 = (unsigned int)(v80 + 1);
          *(float *)&v143[v84] = (float)(v126 * (float)(v72 * m_sampleExtra0)) + *(float *)&v143[3 * v28];
          *(float *)&v143[v84 + 1] = (float)(v127 * (float)(v72 * m_sampleExtra0)) + *(float *)&v143[3 * v28 + 1];
          v144[v84] = (float)(v122 * (float)(v72 * m_sampleExtra0)) + v144[3 * v28];
          v86 = 3 * v85;
          v37 = (unsigned int)(v85 + 1);
          *(float *)&v143[v86] = (float)(v126 * v81) + *(float *)&v143[3 * v28];
          *(float *)&v143[v86 + 1] = (float)(v127 * v81) + *(float *)&v143[3 * v28 + 1];
          v144[v86] = (float)(v122 * v81) + v144[3 * v28];
          v70 += 4;
        }
        else
        {
          v73 = v122;
        }
        if ( v69 && v70 <= 0x40 )
        {
          v87 = 3 * v37;
          v88 = (unsigned int)(v37 + 1);
          v89 = (float)(v72 * m_sampleExtra1) * light->up.v[1];
          *(float *)&v143[v87] = (float)((float)(v72 * m_sampleExtra1) * p_up->v[0]) + *(float *)&v143[3 * v28];
          *(float *)&v90 = v89 + *(float *)&v143[3 * v28 + 1];
          v91 = (float)(v72 * m_sampleExtra1) * light->up.v[2];
          v143[v87 + 1] = v90;
          v144[v87] = v91 + v144[3 * v28];
          v92 = 3 * v88;
          v93 = (unsigned int)(v88 + 1);
          LODWORD(v94) = COERCE_UNSIGNED_INT(v72 * m_sampleExtra1) ^ _xmm;
          v95 = v94 * light->up.v[1];
          *(float *)&v143[v92] = (float)(v94 * p_up->v[0]) + *(float *)&v143[3 * v28];
          v96 = v94 * light->up.v[2];
          *(float *)&v143[v92 + 1] = v95 + *(float *)&v143[3 * v28 + 1];
          v144[v92] = v96 + v144[3 * v28];
          v97 = 3 * v93;
          v98 = (unsigned int)(v93 + 1);
          *(float *)&v143[v97] = (float)(v126 * (float)(v72 * m_sampleExtra1)) + *(float *)&v143[3 * v28];
          *(float *)&v143[v97 + 1] = (float)(v127 * (float)(v72 * m_sampleExtra1)) + *(float *)&v143[3 * v28 + 1];
          v144[v97] = (float)(v73 * (float)(v72 * m_sampleExtra1)) + v144[3 * v28];
          v99 = 3 * v98;
          v37 = (unsigned int)(v98 + 1);
          *(float *)&v143[v99] = (float)(v126 * v94) + *(float *)&v143[3 * v28];
          *(float *)&v143[v99 + 1] = (float)(v127 * v94) + *(float *)&v143[3 * v28 + 1];
          v144[v99] = (float)(v73 * v94) + v144[3 * v28];
          v70 += 4;
        }
        m_sampleExtra1 = v123;
        ++v28;
      }
      while ( v28 <= v30 );
      v12 = LODWORD(FLOAT_1_0);
    }
    if ( (unsigned int)v37 > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 254, ASSERT_TYPE_ASSERT, "(sampleCount <= ( sizeof( *array_counter( sampleTable ) ) + 0 ))", (const char *)&queryFormat, "sampleCount <= ARRAY_COUNT( sampleTable )") )
      __debugbreak();
  }
  LODWORD(_XMM8) = 0;
  if ( (_DWORD)v37 )
  {
    v101 = v144;
    v102 = (unsigned int)v37;
    do
    {
      v103 = *(v101 - 2) - *(float *)&v136;
      v107 = *((unsigned int *)v101 - 1);
      v104 = *(v101 - 1) - *((float *)&v137 + 1);
      v105 = *v101 - v138;
      *(float *)&v107 = fsqrt((float)((float)(v104 * v104) + (float)(v103 * v103)) + (float)(v105 * v105));
      _XMM7 = v107;
      __asm
      {
        vcmpless xmm0, xmm7, cs:__real@80000000
        vblendvps xmm0, xmm7, xmm12, xmm0
      }
      v110 = v104 * (float)(*(float *)&v12 / *(float *)&_XMM0);
      v111 = *(float *)&v12;
      v112 = v105 * (float)(*(float *)&v12 / *(float *)&_XMM0);
      if ( !v124 )
      {
        v113 = (float)((float)((float)((float)(*((float *)&v139 + 1) * v110) + (float)(*(float *)&v139 * (float)(v103 * (float)(*(float *)&v12 / *(float *)&_XMM0)))) + (float)(v140 * v112)) + *(float *)&v12) * 0.5;
        v111 = (float)((float)(*(float *)&v12 - v113) * m_score0Min) + (float)(v113 * m_score0Max);
      }
      *(float *)&v107 = (float)(*(float *)&v107 - m_score1ConstA) * m_score1DistanceFalloffRcp;
      _XMM1 = v107;
      __asm
      {
        vmaxss  xmm1, xmm1, xmm11
        vminss  xmm0, xmm1, xmm12
      }
      v117 = v12;
      v101 += 3;
      *(float *)&v117 = (float)((float)((float)(*(float *)&v12 - (float)(*(float *)&v12 - *(float *)&_XMM0)) * m_score1Min) + (float)((float)(*(float *)&v12 - *(float *)&_XMM0) * m_score1Max)) * v111;
      _XMM0 = v117;
      __asm { vmaxss  xmm8, xmm0, xmm8 }
      --v102;
    }
    while ( v102 );
  }
  v120 = LODWORD(v125);
  *(float *)&v120 = v125 * config->m_score2IntensityFalloffRcp;
  _XMM0 = v120;
  __asm { vminss  xmm3, xmm0, xmm12 }
  return (float)((float)((float)(*(float *)&v12 - *(float *)&_XMM3) * config->m_score2Min) + (float)(*(float *)&_XMM3 * config->m_score2Max)) * *(float *)&_XMM8;
}

/*
==============
R_UnlinkDynEntClientFromPrimaryLights
==============
*/
void R_UnlinkDynEntClientFromPrimaryLights(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  unsigned int *PrimaryLightDynEntClientShadowBitsArray; 
  unsigned __int64 staticSpotOmniPrimaryLightCountAligned; 

  if ( rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    PrimaryLightDynEntClientShadowBitsArray = R_GetPrimaryLightDynEntClientShadowBitsArray(localClientNum, basis, dynEntClientId);
    staticSpotOmniPrimaryLightCountAligned = rgp.world->staticSpotOmniPrimaryLightCountAligned;
    if ( rgp.world->shadowBitsArrayPitch == (_DWORD)staticSpotOmniPrimaryLightCountAligned )
      memset_0(PrimaryLightDynEntClientShadowBitsArray, 0, staticSpotOmniPrimaryLightCountAligned >> 3);
    else
      *(_WORD *)PrimaryLightDynEntClientShadowBitsArray = 0;
  }
}

/*
==============
R_UnlinkEntityFromPrimaryLights
==============
*/
void R_UnlinkEntityFromPrimaryLights(unsigned int localClientNum, unsigned int entityNum)
{
  unsigned int *PrimaryLightEntityShadowBitsArray; 
  unsigned __int64 staticSpotOmniPrimaryLightCountAligned; 

  if ( rgp.world->staticSpotOmniPrimaryLightCountAligned )
  {
    PrimaryLightEntityShadowBitsArray = R_GetPrimaryLightEntityShadowBitsArray(localClientNum, entityNum);
    staticSpotOmniPrimaryLightCountAligned = rgp.world->staticSpotOmniPrimaryLightCountAligned;
    if ( rgp.world->shadowBitsArrayPitch == (_DWORD)staticSpotOmniPrimaryLightCountAligned )
      memset_0(PrimaryLightEntityShadowBitsArray, 0, staticSpotOmniPrimaryLightCountAligned >> 3);
    else
      *(_WORD *)PrimaryLightEntityShadowBitsArray = 0;
  }
}

