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
  __int64 result; 
  __int64 v14; 

  _RDI = light;
  _RBX = data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 442, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( _RBX->sceneLightCount >= 0x1984 )
  {
    LODWORD(v14) = _RBX->sceneLightCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 443, ASSERT_TYPE_ASSERT, "(unsigned)( data->sceneLightCount ) < (unsigned)( (6500 + I_max( ( 4 + 1 ), I_max( 32, 32 ) )) )", "data->sceneLightCount doesn't index GFX_MAX_SCENE_LIGHTS\n\t%i not in [0, %i)", v14, 6532) )
      __debugbreak();
  }
  sceneLightCount = _RBX->sceneLightCount;
  _RCX = 152i64 * sceneLightCount;
  _RBX->sceneLightCount = sceneLightCount + 1;
  result = sceneLightCount;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rcx+rbx+53A000h], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rcx+rbx+53A020h], ymm1
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rcx+rbx+53A040h], ymm0
    vmovups ymm1, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [rcx+rbx+53A060h], ymm1
    vmovups xmm0, xmmword ptr [rdi+80h]
    vmovups xmmword ptr [rcx+rbx+53A080h], xmm0
    vmovsd  xmm1, qword ptr [rdi+90h]
    vmovsd  qword ptr [rcx+rbx+53A090h], xmm1
  }
  return result;
}

/*
==============
R_AddPotentiallyShadowedLight
==============
*/
__int64 R_AddPotentiallyShadowedLight(const GfxLightScoreConfig *config, GfxBackEndData *backEndData, const GfxViewInfo *viewInfo, const GfxViewParms *viewParmsDpvs, unsigned int sceneLightIndex, GfxCandidateShadowedLight *candidateLights, unsigned int candidateLightCount, unsigned int candidateLightLimit)
{
  GfxCamera *p_camera; 
  bool useNightAndThermalVisionCombo; 
  bool v71; 
  bool v72; 
  unsigned int v80; 
  bool v81; 
  GfxCandidateShadowedLight *v82; 
  bool v87; 
  GfxCandidateShadowedLight *v88; 
  __int64 result; 
  float fmt; 
  double v96; 
  double v97; 
  int v98; 
  int v99; 

  _R14 = sceneLightIndex;
  _RBX = candidateLights;
  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
  }
  g_lightScore[sceneLightIndex].score = 0.0;
  *(_DWORD *)&g_lightScore[sceneLightIndex].ranking0 = 16711935;
  __asm { vmovaps [rsp+0B8h+var_68], xmm8 }
  if ( !sceneLightIndex )
    goto LABEL_36;
  if ( sceneLightIndex <= rgp.world->lastSunPrimaryLightIndex )
    goto LABEL_36;
  _RDI = &backEndData->sceneLights[sceneLightIndex];
  if ( (backEndData->sceneLights[sceneLightIndex].flags & 0x10) != 0 )
    goto LABEL_36;
  if ( !backEndData->sceneLights[sceneLightIndex].canUseShadowMap )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.smSpotDistCull; r_globals_t rg
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm7, xmm8
  }
  if ( backEndData->sceneLights[sceneLightIndex].canUseShadowMap )
  {
    __asm { vaddss  xmm6, xmm7, dword ptr [rdi+44h] }
    v71 = __CFADD__(viewParmsDpvs, 256i64);
    p_camera = &viewParmsDpvs->camera;
    _RCX = &backEndData->sceneLights[sceneLightIndex].origin;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vmovss  xmm1, dword ptr [rcx+4]
      vsubss  xmm4, xmm0, dword ptr [r9]
      vsubss  xmm3, xmm1, dword ptr [r9+4]
      vmovss  xmm0, dword ptr [rcx+8]
      vsubss  xmm5, xmm0, dword ptr [r9+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm3, xmm3, xmm3
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm5, xmm4, xmm0
      vmulss  xmm1, xmm6, xmm6
      vcomiss xmm5, xmm1
    }
    if ( !v71 )
      goto LABEL_36;
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+60h]; cosHalfFov
      vmovss  dword ptr [rsp+0B8h+fmt], xmm7
    }
    if ( CullSphereFromCone(_RCX, &backEndData->sceneLights[sceneLightIndex].dir, *(float *)&_XMM2, &p_camera->origin, fmt) )
      goto LABEL_36;
  }
  useNightAndThermalVisionCombo = viewInfo->thermalParams.useNightAndThermalVisionCombo;
  if ( config->m_scoreSystem )
  {
    *(float *)&_XMM0 = R_ShadowedSpotLightScore_MultiSamples(config, viewParmsDpvs, _RDI, useNightAndThermalVisionCombo);
  }
  else
  {
    __asm
    {
      vmovss  xmm7, cs:?scene@@3UGfxScene@@A.sceneSMLightScoreEyeProjectDist; GfxScene scene
      vmovss  [rsp+0B8h+var_88], xmm7
      vmovaps [rsp+0B8h+var_78], xmm9
    }
    if ( (v98 & 0x7F800000) != 2139095040 )
      __asm { vcomiss xmm7, xmm8 }
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0B8h+var_90], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 332, ASSERT_TYPE_ASSERT, "( ( !IS_NAN(scene.sceneSMLightScoreEyeProjectDist) && (scene.sceneSMLightScoreEyeProjectDist >= 0.0f) ) )", "( scene.sceneSMLightScoreEyeProjectDist ) = %g", v96) )
      __debugbreak();
    __asm
    {
      vmovss  xmm7, cs:?scene@@3UGfxScene@@A.sceneSMLightScoreEyeProjectDist; GfxScene scene
      vmovss  xmm0, cs:?scene@@3UGfxScene@@A.sceneSMlightScorespotProjectFrac; GfxScene scene
      vmovss  [rsp+0B8h+var_88], xmm0
    }
    if ( (v99 & 0x7F800000) == 2139095040 )
      goto LABEL_15;
    __asm { vcomiss xmm0, xmm8 }
    if ( (v99 & 0x7F800000u) < 0x7F800000 )
    {
LABEL_15:
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0B8h+var_90], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 333, ASSERT_TYPE_ASSERT, "( ( !IS_NAN(scene.sceneSMlightScorespotProjectFrac) && (scene.sceneSMlightScorespotProjectFrac >= 0.0f) ) )", "( scene.sceneSMlightScorespotProjectFrac ) = %g", v97) )
        __debugbreak();
      __asm
      {
        vmovss  xmm7, cs:?scene@@3UGfxScene@@A.sceneSMLightScoreEyeProjectDist; GfxScene scene
        vmovss  xmm0, cs:?scene@@3UGfxScene@@A.sceneSMlightScorespotProjectFrac; GfxScene scene
      }
    }
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [r15+10Ch]
      vaddss  xmm2, xmm1, dword ptr [r15+100h]
      vmovss  xmm9, dword ptr [rdi+44h]
      vmulss  xmm0, xmm9, xmm0
      vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm4, dword ptr [rdi+20h]
      vmovss  xmm0, dword ptr [rdi+38h]
      vsubss  xmm3, xmm0, xmm2
      vmulss  xmm0, xmm7, dword ptr [r15+110h]
      vaddss  xmm2, xmm0, dword ptr [r15+104h]
      vmulss  xmm0, xmm4, dword ptr [rdi+24h]
      vaddss  xmm6, xmm3, xmm1
      vmovss  xmm1, dword ptr [rdi+3Ch]
      vsubss  xmm3, xmm1, xmm2
      vmulss  xmm1, xmm7, dword ptr [r15+114h]
      vaddss  xmm2, xmm1, dword ptr [r15+108h]
      vmulss  xmm1, xmm4, dword ptr [rdi+28h]
      vaddss  xmm5, xmm3, xmm0
      vmovss  xmm0, dword ptr [rdi+40h]
      vsubss  xmm3, xmm0, xmm2
      vmulss  xmm2, xmm5, xmm5
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm0
      vmovss  xmm0, dword ptr [rdi+10h]
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm5, xmm2, xmm2
    }
    v71 = 0;
    v72 = !useNightAndThermalVisionCombo;
    if ( useNightAndThermalVisionCombo )
      __asm { vaddss  xmm0, xmm0, dword ptr [rdi+8] }
    __asm
    {
      vmulss  xmm1, xmm9, xmm0
      vaddss  xmm0, xmm5, cs:__real@3f800000
      vmovaps xmm9, [rsp+0B8h+var_78]
      vdivss  xmm0, xmm1, xmm0
    }
  }
  __asm
  {
    vmulss  xmm0, xmm0, [rsp+0B8h+scoreScale]
    vucomiss xmm0, xmm8
  }
  _RAX = g_lightScore;
  __asm { vmovss  dword ptr [rax+r14*8], xmm0 }
  if ( v72 )
    goto LABEL_36;
  _RAX = sm_minSpotLightScore;
  __asm { vcomiss xmm0, dword ptr [rax+28h] }
  if ( !v71 )
    goto LABEL_25;
  if ( !config->m_scoreSystem )
  {
LABEL_36:
    result = candidateLightCount;
  }
  else
  {
LABEL_25:
    v80 = candidateLightCount;
    v81 = candidateLightCount <= 4;
    if ( candidateLightCount < 4 )
    {
LABEL_29:
      v87 = v80 == 0;
      if ( v80 )
      {
        v88 = &candidateLights[v80];
        do
        {
          _R8 = v80 - 1;
          __asm { vcomiss xmm0, dword ptr [rbx+r8*8+4] }
          if ( v87 )
            break;
          --v80;
          *v88-- = candidateLights[_R8];
          v87 = (_DWORD)_R8 == 0;
        }
        while ( (_DWORD)_R8 );
      }
    }
    else
    {
      v82 = &candidateLights[candidateLightCount - 2];
      while ( 1 )
      {
        _RAX = v80 - 1;
        __asm { vcomiss xmm0, dword ptr [rbx+rax*8+4] }
        if ( v81 )
          break;
        v82[2] = candidateLights[_RAX];
        _RAX = v80 - 2;
        __asm { vcomiss xmm0, dword ptr [rbx+rax*8+4] }
        v82[1] = candidateLights[_RAX];
        _RAX = v80 - 3;
        __asm { vcomiss xmm0, dword ptr [rbx+rax*8+4] }
        _R8 = v80 - 4;
        __asm { vcomiss xmm0, dword ptr [rbx+r8*8+4] }
        *v82 = candidateLights[_RAX];
        v80 -= 4;
        v82[-1] = candidateLights[_R8];
        v82 -= 4;
        v81 = (unsigned int)_R8 <= 3;
        if ( (unsigned int)_R8 <= 3 )
          goto LABEL_29;
      }
    }
    _RAX = v80;
    __asm { vmovss  dword ptr [rbx+rax*8+4], xmm0 }
    candidateLights[v80].sceneLightIndex = sceneLightIndex;
    result = candidateLightCount + 1;
    if ( (unsigned int)result > candidateLightLimit )
      result = candidateLightLimit;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_68]
  }
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
  unsigned int v36; 
  unsigned int v37; 
  __int64 sceneLightCount; 
  __int64 v39; 
  unsigned int v41; 
  GfxWorld *world; 
  unsigned int i; 
  __int64 v44; 
  const dvar_t *v45; 
  __int64 v46; 
  unsigned int v47; 
  __int64 v48; 
  GfxCandidateShadowedLight *v49; 
  __int64 v50; 
  __int64 v51; 
  R_SpotShadow_StaleCacheEntry *StaleCacheEntryForSceneLight; 
  unsigned int v53; 
  unsigned int v54; 
  int v55; 
  unsigned int v56; 
  unsigned int v57; 
  __int64 v58; 
  GfxCandidateShadowedLight *v59; 
  __int64 v60; 
  unsigned int v61; 
  __int64 v62; 
  int v63; 
  __int64 v64; 
  char *v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  int v71; 
  GfxWorld *v72; 
  LocalClientNum_t clientIndex; 
  unsigned int v74; 
  unsigned __int64 v75; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  __int64 v77; 
  char v78; 
  int needsDynamicShadows; 
  __int64 v80; 
  GfxCandidateShadowedLight *v81; 
  unsigned int v82; 
  char *j; 
  R_SpotShadow_StaleCacheEntry *v84; 
  bool v85; 
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
  const bitarray<1536> *v98; 
  unsigned int v99; 
  __int64 v100; 
  __int64 v101; 
  unsigned int v102; 
  unsigned int spotShadowUpdateLimit; 
  GfxCandidateShadowedLight *v106; 
  unsigned int v108; 
  GfxLightScoreConfig config; 
  GfxCandidateShadowedLight v110; 
  __int16 Base; 
  char v112[254]; 
  GfxCandidateShadowedLight v113; 

  spotCandidateLimit = rg.spotCandidateLimit;
  v7 = viewParmsDpvs;
  integer = sm_roundRobinPrioritySpotShadowsMax->current.integer;
  if ( rg.roundRobinPrioritySpotShadows < integer )
    integer = rg.roundRobinPrioritySpotShadows;
  v102 = integer;
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
  v98 = v17;
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
              if ( ((0x80000000 >> (v28 & 0x1F)) & v98->array[(unsigned __int64)v28 >> 5]) != 0 )
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
  v108 = 0;
  v29 = 0;
  v30 = 0;
  if ( spotCandidateLimit )
  {
    if ( backEndData->sceneLightCount < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 582, ASSERT_TYPE_ASSERT, "(backEndData->sceneLightCount >= rgp.world->primaryLightCount)", (const char *)&queryFormat, "backEndData->sceneLightCount >= rgp.world->primaryLightCount") )
      __debugbreak();
    v31 = 0;
    sceneLightIndexa = 0;
    v32 = (backEndData->sceneLightCount + 31) >> 5;
    v99 = v32;
    if ( v32 )
    {
      v33 = sceneLightIsUsed;
      v34 = 0;
      __asm
      {
        vmovaps [rsp+4A8h+var_58], xmm6
        vmovss  xmm6, cs:__real@3f800000
      }
      do
      {
        v36 = v33[v31];
        v37 = __lzcnt(v36);
        if ( v37 != 32 )
        {
          do
          {
            sceneLightCount = backEndData->sceneLightCount;
            v36 &= ~(1 << (31 - v37));
            v39 = v34 + 31 - v37;
            if ( (unsigned int)v39 >= (unsigned int)sceneLightCount )
            {
              Com_Printf(8, "ERROR: Invalid scene light index %d >= %d flagged as an used light\n", v39, sceneLightCount);
            }
            else
            {
              __asm { vmovss  dword ptr [rsp+4A8h+var_468], xmm6 }
              if ( (unsigned int)v39 >= rgp.world->primaryLightCount )
                v30 = R_AddPotentiallyShadowedLight(&config, backEndData, viewInfo, v7, v39, &v110, v30, NumOfElements);
              else
                v29 = R_AddPotentiallyShadowedLight(&config, backEndData, viewInfo, v7, v39, &v113, v29, NumOfElements_4 - v30);
            }
            v37 = __lzcnt(v36);
          }
          while ( v37 != 32 );
          v31 = sceneLightIndexa;
          v32 = v99;
          v33 = sceneLightIsUsed;
          v108 = v30;
        }
        ++v31;
        v34 += 32;
        sceneLightIndexa = v31;
      }
      while ( v31 != v32 );
      __asm { vmovaps xmm6, [rsp+4A8h+var_58] }
    }
    v41 = NumOfElements_4 - v30;
    if ( NumOfElements_4 - v30 > v29 )
      v41 = v29;
    v29 = v41;
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
  for ( i = 0; i < world->primaryLightCount; g_lightScore[v44].ranking0 = 255 )
    v44 = i++;
  v45 = DVARBOOL_sm_spotUpdateMoreDynObj;
  if ( !DVARBOOL_sm_spotUpdateMoreDynObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotUpdateMoreDynObj") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  enabled = v45->current.enabled;
  v46 = 0i64;
  v47 = 0;
  NumOfElementsa = 0;
  if ( v29 )
  {
    v48 = 0i64;
    v100 = 0i64;
    v49 = &v113;
    v106 = &v113;
    while ( 1 )
    {
      v50 = v49->sceneLightIndex;
      if ( (unsigned int)v50 >= rgp.world->primaryLightCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 655, ASSERT_TYPE_ASSERT, "(R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "R_IsPrimaryLight( sceneLightIndex )") )
          __debugbreak();
        v48 = v100;
      }
      v51 = v50;
      backEndData->sceneLights[v50].flags |= 0x100u;
      if ( v47 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v47, "unsigned", v48) )
        __debugbreak();
      g_lightScore[v50].ranking0 = v47;
      StaleCacheEntryForSceneLight = R_SpotShadow_GetStaleCacheEntryForSceneLight(v50);
      if ( (unsigned int)v50 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v50, "unsigned", v50) )
        __debugbreak();
      *(_WORD *)&v112[4 * v46 - 2] = v50;
      v112[4 * v46] = -1;
      if ( v47 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v47, "unsigned", v100) )
        __debugbreak();
      v112[4 * v46 + 1] = v47;
      if ( !backEndData->sceneLights[v51].needsDynamicShadows )
        break;
      if ( !StaleCacheEntryForSceneLight )
        goto LABEL_115;
      R_SpotShadow_StaleCacheEntry::Unrot(StaleCacheEntryForSceneLight);
      v112[4 * v46] = StaleCacheEntryForSceneLight->staleness;
      v55 = R_CheckPrimaryLightMotionBit(viewInfo->clientIndex, v50);
      if ( !rg.primaryLightMotionDetect || v55 )
      {
        if ( StaleCacheEntryForSceneLight->staleness )
          goto LABEL_115;
      }
      else if ( StaleCacheEntryForSceneLight->staleness )
      {
        backEndData->sceneLights[v51].flags |= 0x200u;
LABEL_109:
        v46 = NumOfElementsa;
        goto LABEL_116;
      }
      if ( v47 < v102 || enabled )
      {
        v112[4 * v46] = 1;
        StaleCacheEntryForSceneLight->staleness = 1;
        goto LABEL_115;
      }
      backEndData->sceneLights[v51].flags |= 0x400u;
      v46 = NumOfElementsa;
LABEL_116:
      v48 = v100 + 1;
      v49 = v106 + 1;
      ++v47;
      ++v100;
      ++v106;
      if ( v47 >= v29 )
      {
        v30 = v108;
        goto LABEL_118;
      }
    }
    v53 = v102 + 1;
    if ( v47 >= v102 )
      v53 = v102;
    v102 = v53;
    v54 = v53;
    if ( !StaleCacheEntryForSceneLight )
      goto LABEL_103;
    R_SpotShadow_StaleCacheEntry::Unrot(StaleCacheEntryForSceneLight);
    if ( StaleCacheEntryForSceneLight->staleness )
    {
      R_SpotShadow_EvictSceneLightFromStaleCache(v50);
LABEL_103:
      v102 = v54;
LABEL_115:
      v46 = NumOfElementsa + 1;
      backEndData->sceneLights[v51].flags |= 0x800u;
      ++NumOfElementsa;
      goto LABEL_116;
    }
    goto LABEL_109;
  }
LABEL_118:
  NumOfElements_4a = 0;
  v56 = 0;
  v57 = 0;
  if ( v30 )
  {
    v58 = 0i64;
    v59 = &v110;
    do
    {
      v60 = v59->sceneLightIndex;
      if ( (unsigned int)v60 < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 752, ASSERT_TYPE_ASSERT, "(!R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "!R_IsPrimaryLight( sceneLightIndex )") )
        __debugbreak();
      if ( R_SpotShadow_GetStaleCacheEntryForSceneLight(v60) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 753, ASSERT_TYPE_ASSERT, "(!R_SpotShadow_GetStaleCacheEntryForSceneLight( sceneLightIndex ))", (const char *)&queryFormat, "!R_SpotShadow_GetStaleCacheEntryForSceneLight( sceneLightIndex )") )
        __debugbreak();
      R_AddSpotShadowUpdateForSceneLight(backEndData, viewInfo, v60, 1);
      ++NumOfElements_4a;
      backEndData->sceneLights[v60].flags |= 0x1000u;
      if ( v57 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v57, "unsigned", v58) )
        __debugbreak();
      g_lightScore[v60].ranking0 = v57;
      if ( v56 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v56, "unsigned", v56) )
        __debugbreak();
      ++v57;
      g_lightScore[v60].ranking1 = v56;
      v56 = NumOfElements_4a;
      ++v58;
      ++v59;
    }
    while ( v57 < v30 );
  }
  v61 = NumOfElementsa;
  v62 = NumOfElementsa;
  qsort(&Base, NumOfElementsa, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)GfxSpotShadowUpdateCandidate::Compare);
  v63 = 0;
  sceneLightIndexb = 0;
  if ( NumOfElementsa )
  {
    v64 = NumOfElementsa;
    v65 = v112;
    v101 = NumOfElementsa;
    while ( 1 )
    {
      v66 = *((unsigned __int16 *)v65 - 1);
      v67 = v56;
      if ( (unsigned int)v66 >= rgp.world->primaryLightCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 785, ASSERT_TYPE_ASSERT, "(R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "R_IsPrimaryLight( sceneLightIndex )") )
          __debugbreak();
        v64 = v101;
      }
      v68 = spotShadowUpdateLimit;
      v69 = v66;
      v70 = v66;
      if ( v56 < spotShadowUpdateLimit )
        break;
      if ( (unsigned __int8)(*v65 - 1) <= 0xFCu )
      {
        needsDynamicShadows = backEndData->sceneLights[v70].needsDynamicShadows;
        if ( rg.primaryLightMotionDetect )
          needsDynamicShadows = (_BYTE)needsDynamicShadows && R_CheckPrimaryLightMotionBit(viewInfo->clientIndex, v66);
        *v65 += needsDynamicShadows != 0;
        if ( v63 || needsDynamicShadows )
        {
          v63 = 1;
          sceneLightIndexb = 1;
        }
        else
        {
          v63 = 0;
          sceneLightIndexb = 0;
        }
        goto LABEL_171;
      }
LABEL_172:
      v65 += 4;
      v101 = --v64;
      if ( !v64 )
      {
        if ( v63 )
          R_WarnOncePerFrame(R_WARN_DYNAMIC_SHADOWS_LIMIT_REACHED, v68, 0i64);
        v61 = NumOfElementsa;
        v30 = v108;
        v62 = NumOfElementsa;
        goto LABEL_176;
      }
    }
    if ( (unsigned __int8)v65[1] < v102 || (v71 = 0, enabled) )
      v71 = 1;
    R_AddSpotShadowUpdateForSceneLight(backEndData, viewInfo, v66, v71);
    if ( v71 )
    {
      v72 = rgp.world;
      clientIndex = viewInfo->clientIndex;
      if ( (unsigned int)v66 <= rgp.world->lastSunPrimaryLightIndex || (unsigned int)v66 >= rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1678, ASSERT_TYPE_ASSERT, "(primaryLightIndex > rgp.world->lastSunPrimaryLightIndex && primaryLightIndex < rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount)", (const char *)&queryFormat, "primaryLightIndex > rgp.world->lastSunPrimaryLightIndex && primaryLightIndex < rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount") )
          __debugbreak();
        v72 = rgp.world;
      }
      v74 = clientIndex * v72->staticSpotOmniPrimaryLightCountAligned;
      if ( (((_BYTE)clientIndex * LOBYTE(v72->staticSpotOmniPrimaryLightCountAligned)) & 0x1F) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 928, ASSERT_TYPE_ASSERT, "((firstBit & 31) == 0)", (const char *)&queryFormat, "(firstBit & 31) == 0") )
          __debugbreak();
        v72 = rgp.world;
      }
      v75 = (unsigned __int64)&v72->primaryLightMotionDetectBits[(unsigned __int64)v74 >> 5];
      EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(v66);
      if ( !v75 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v77 = EntityPrimaryLightShadowBitArrayIndex >> 5;
      v78 = EntityPrimaryLightShadowBitArrayIndex & 0x1F;
      v69 = v66;
      *(_DWORD *)(v75 + 4 * v77) &= ~(1 << v78);
      v56 = NumOfElements_4a;
    }
    *v65 = v71;
    NumOfElements_4a = ++v56;
    backEndData->sceneLights[v70].flags |= (v71 << 13) | 0x1000;
    if ( (unsigned int)v67 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v67, "unsigned", v67) )
      __debugbreak();
    v63 = sceneLightIndexb;
    g_lightScore[v69].ranking1 = v67;
LABEL_171:
    v64 = v101;
    v68 = spotShadowUpdateLimit;
    goto LABEL_172;
  }
LABEL_176:
  R_SpotShadow_StaleCacheSnapshot(backEndData, viewInfo->clientIndex, 1);
  if ( v30 )
  {
    v80 = v30;
    v81 = &v110;
    do
    {
      v82 = v81->sceneLightIndex;
      if ( v81->sceneLightIndex < rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 845, ASSERT_TYPE_ASSERT, "(!R_IsPrimaryLight( sceneLightIndex ))", (const char *)&queryFormat, "!R_IsPrimaryLight( sceneLightIndex )") )
        __debugbreak();
      R_SpotShadow_EvictSceneLightFromStaleCache(v82);
      ++v81;
      --v80;
    }
    while ( v80 );
    v62 = v61;
  }
  if ( v61 )
  {
    for ( j = v112; ; j += 4 )
    {
      v84 = R_SpotShadow_GetStaleCacheEntryForSceneLight(*((unsigned __int16 *)j - 1));
      if ( !*j )
        break;
      if ( *j == -1 )
      {
        if ( v84 )
        {
          v85 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 868, ASSERT_TYPE_ASSERT, "(entry == nullptr)", (const char *)&queryFormat, "entry == nullptr");
LABEL_196:
          if ( v85 )
            __debugbreak();
        }
      }
      else if ( !rg.primaryLightMotionDetect )
      {
        v84->staleness = *j;
      }
LABEL_198:
      if ( !--v62 )
        return;
    }
    if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 860, ASSERT_TYPE_ASSERT, "(entry != nullptr)", (const char *)&queryFormat, "entry != nullptr") )
      __debugbreak();
    if ( !v84->staleness )
      goto LABEL_198;
    v85 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 861, ASSERT_TYPE_ASSERT, "(entry->staleness == R_SpotShadow_StaleCacheEntry::STALENESS_IMMORTAL)", (const char *)&queryFormat, "entry->staleness == R_SpotShadow_StaleCacheEntry::STALENESS_IMMORTAL");
    goto LABEL_196;
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
  const dvar_t *v3; 
  const dvar_t *v5; 
  signed int integer; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v34; 

  v3 = DVARINT_sm_spotShadowScoreSystem;
  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = config;
  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  if ( !DVARINT_sm_spotShadowScoreSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScoreSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  _RBX->m_scoreSystem = v3->current.integer;
  v5 = DCONST_DVARINT_sm_spotShadowSampleCountMin;
  if ( !DCONST_DVARINT_sm_spotShadowSampleCountMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleCountMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  _RBX->m_sampleCountMin = integer;
  v7 = DCONST_DVARINT_sm_spotShadowSampleCountMax;
  if ( !DCONST_DVARINT_sm_spotShadowSampleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleCountMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer > integer )
    integer = v7->current.integer;
  _RBX->m_sampleCountMax = integer;
  v8 = DCONST_DVARFLT_sm_spotShadowSampleDistance;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vdivss  xmm0, xmm7, dword ptr [rdi+28h]
    vmovss  dword ptr [rbx+0Ch], xmm0
  }
  _RDI = DCONST_DVARFLT_sm_spotShadowSampleBegin;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleBegin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleBegin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vaddss  xmm6, xmm0, cs:__real@3c23d70a
    vmovss  dword ptr [rbx+10h], xmm0
  }
  _RDI = DCONST_DVARFLT_sm_spotShadowSampleEnd;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleEnd") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmaxss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+14h], xmm1
    vsubss  xmm1, xmm1, dword ptr [rbx+10h]
    vmovss  dword ptr [rbx+18h], xmm1
  }
  v18 = DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold0;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleLargeLightThreshold0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  LODWORD(_RBX->m_sampleExtraThreshold0) = v18->current.integer;
  v19 = DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold1;
  if ( !DCONST_DVARFLT_sm_spotShadowSampleLargeLightThreshold1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleLargeLightThreshold1") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  LODWORD(_RBX->m_sampleExtraThreshold1) = v19->current.integer;
  v20 = DVARFLT_sm_spotShadowSampleExtra0;
  if ( !DVARFLT_sm_spotShadowSampleExtra0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleExtra0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  LODWORD(_RBX->m_sampleExtra0) = v20->current.integer;
  _RDI = DVARFLT_sm_spotShadowSampleExtra0;
  if ( !DVARFLT_sm_spotShadowSampleExtra0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowSampleExtra0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmovss  dword ptr [rbx+28h], xmm1
  }
  v24 = DVARFLT_sm_spotShadowScore0Min;
  if ( !DVARFLT_sm_spotShadowScore0Min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore0Min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  LODWORD(_RBX->m_score0Min) = v24->current.integer;
  _RBX->m_score0Max = 1.0;
  v25 = DCONST_DVARFLT_sm_spotShadowScore1Min;
  if ( !DCONST_DVARFLT_sm_spotShadowScore1Min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore1Min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  LODWORD(_RBX->m_score1Min) = v25->current.integer;
  _RBX->m_score1Max = 1.0;
  _RDI = DCONST_DVARFLT_sm_spotShadowScore1ConstA;
  if ( !DCONST_DVARFLT_sm_spotShadowScore1ConstA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore1ConstA") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rbx+3Ch], xmm0
  }
  _RDI = DCONST_DVARFLT_sm_spotShadowScore1ConstB;
  __asm { vaddss  xmm6, xmm0, xmm7 }
  if ( !DCONST_DVARFLT_sm_spotShadowScore1ConstB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore1ConstB") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmaxss  xmm1, xmm0, xmm6
    vsubss  xmm2, xmm1, dword ptr [rbx+3Ch]
    vdivss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rbx+44h], xmm0
    vmovss  dword ptr [rbx+40h], xmm1
  }
  v34 = DCONST_DVARFLT_sm_spotShadowScore2Min;
  if ( !DCONST_DVARFLT_sm_spotShadowScore2Min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore2Min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  LODWORD(_RBX->m_score2Min) = v34->current.integer;
  _RBX->m_score2Max = 1.0;
  _RDI = DCONST_DVARFLT_sm_spotShadowScore2ConstA;
  if ( !DCONST_DVARFLT_sm_spotShadowScore2ConstA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScore2ConstA") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rbx+50h], xmm0
    vdivss  xmm0, xmm7, xmm0
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr [rbx+54h], xmm0
  }
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
  _RDI = &rgp.world->lightAABB.nodeArray[nodeIndex];
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 592, ASSERT_TYPE_ASSERT, "(b0)", (const char *)&queryFormat, "b0") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 593, ASSERT_TYPE_ASSERT, "(b1)", (const char *)&queryFormat, "b1") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm2, xmm0, dword ptr [rbp+0]
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm1, xmm0, dword ptr [rbp+0Ch]
    vandps  xmm2, xmm2, xmm3
    vcomiss xmm2, xmm1
  }
  return 0i64;
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

__int64 __fastcall R_LinkSphereEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const vec3_t *origin, double radius)
{
  unsigned int staticSpotOmniPrimaryLightCountAligned; 
  unsigned int v10; 
  unsigned int *PrimaryLightEntityShadowBitsArray; 
  unsigned __int16 *v12; 
  unsigned int v17; 
  unsigned int shadowBitsArrayPitch; 
  unsigned int v19; 
  __int64 result; 
  Sphere sphere; 
  char v23[816]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  _RBX = origin;
  __asm { vmovaps xmm6, xmm3 }
  staticSpotOmniPrimaryLightCountAligned = rgp.world->staticSpotOmniPrimaryLightCountAligned;
  if ( staticSpotOmniPrimaryLightCountAligned && rgp.world->lightAABB.nodeCount )
  {
    v10 = staticSpotOmniPrimaryLightCountAligned >> 5;
    PrimaryLightEntityShadowBitsArray = R_GetPrimaryLightEntityShadowBitsArray(localClientNum, entityNum);
    v12 = (unsigned __int16 *)PrimaryLightEntityShadowBitsArray;
    if ( rgp.world->shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
    {
      memset_0(v23, 0, 4i64 * v10);
      PrimaryLightEntityShadowBitsArray = (unsigned int *)v23;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+3C8h+sphere.origin], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+3C8h+sphere.origin+4], xmm1
      vmulss  xmm1, xmm6, xmm6
      vmovss  dword ptr [rsp+3C8h+sphere.origin+8], xmm0
      vmovss  [rsp+3C8h+sphere.radiusSq], xmm1
      vmovss  [rsp+3C8h+sphere.radius], xmm6
    }
    v17 = R_LinkSphereEntityToPrimaryLightsAABBTree(0, &sphere, PrimaryLightEntityShadowBitsArray);
    shadowBitsArrayPitch = rgp.world->shadowBitsArrayPitch;
    if ( shadowBitsArrayPitch != rgp.world->staticSpotOmniPrimaryLightCountAligned )
    {
      v19 = R_BitsArrayToLightList(PrimaryLightEntityShadowBitsArray, v10, v17, v12, shadowBitsArrayPitch >> 4);
      if ( v19 )
        Com_Printf(8, "R_LinkSphereEntityToPrimaryLights missing %d lights for ent(%d)\n", v19, entityNum);
    }
    result = v17;
  }
  else
  {
    result = 0i64;
  }
  __asm { vmovaps xmm6, [rsp+3C8h+var_38] }
  return result;
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
  unsigned __int16 childCount; 
  __int16 firstChild; 
  int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  const ComPrimaryLight *PrimaryLight; 
  unsigned __int8 type; 
  __int64 EntityPrimaryLightShadowBitArrayIndex; 
  unsigned int v42; 
  __int64 v43; 
  GfxWorld *v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 

  world = rgp.world;
  _R15 = sphere;
  v44 = rgp.world;
  v6 = 0;
  _RSI = &rgp.world->lightAABB.nodeArray[nodeIndex];
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1335, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 1336, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [r15] }
  HIDWORD(v45) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+40h]
    vmovss  xmm5, xmm5, xmm0
    vmovss  xmm0, dword ptr [rsi]
    vinsertps xmm5, xmm5, dword ptr [r15+4], 10h
    vinsertps xmm5, xmm5, dword ptr [r15+8], 20h ; ' '
    vmovups xmmword ptr [rsp+40h], xmm5
  }
  HIDWORD(v46) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+40h]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vinsertps xmm4, xmm4, dword ptr [rsi+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rsi+8], 20h ; ' '
    vmovups xmmword ptr [rsp+40h], xmm4
    vsubps  xmm1, xmm5, xmm4
  }
  HIDWORD(v47) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+40h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rsi+10h], 10h
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vinsertps xmm3, xmm3, dword ptr [rsi+14h], 20h ; ' '
    vandnps xmm2, xmm0, xmm1
    vsubps  xmm3, xmm2, xmm3
    vxorps  xmm0, xmm0, xmm0
    vmaxps  xmm1, xmm3, xmm0
    vmulps  xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vcomiss xmm1, dword ptr [r15+10h]
  }
  childCount = _RSI->childCount;
  firstChild = _RSI->firstChild;
  if ( firstChild >= 0 )
  {
    v42 = 0;
    if ( childCount )
    {
      do
      {
        v6 += R_LinkSphereEntityToPrimaryLightsAABBTree(v42 + _RSI->firstChild, _R15, visBits);
        ++v42;
      }
      while ( v42 < _RSI->childCount );
    }
    return v6;
  }
  else
  {
    v34 = firstChild & 0x7FFF;
    v35 = childCount;
    v36 = 0;
    if ( childCount )
    {
      do
      {
        v37 = world->lightAABB.lightArray[v36 + v34];
        PrimaryLight = Com_GetPrimaryLight(v37);
        type = PrimaryLight->type;
        if ( (unsigned __int8)(type - 2) > 1u )
        {
          LODWORD(v43) = type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 971, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", v43) )
            __debugbreak();
        }
        if ( PrimaryLight->needsDynamicShadows && R_PrimaryLightFrustumTestSphere(v37, _R15) )
        {
          EntityPrimaryLightShadowBitArrayIndex = (int)R_GetEntityPrimaryLightShadowBitArrayIndex(v37);
          if ( !visBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          visBits[EntityPrimaryLightShadowBitArrayIndex >> 5] |= 1 << (EntityPrimaryLightShadowBitArrayIndex & 0x1F);
          ++v6;
        }
        world = v44;
        ++v36;
      }
      while ( v36 < v35 );
      return v6;
    }
    else
    {
      return 0i64;
    }
  }
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

bool __fastcall R_PrimaryLightFrustumTestBox(unsigned int primaryLightIndex, const Bounds *bounds, double _XMM2_8)
{
  __int64 v13; 
  unsigned __int8 type; 
  int integer; 
  GfxLightViewFrustum *lightViewFrustums; 
  unsigned __int8 planeCount; 
  unsigned int v20; 
  unsigned int v21; 
  bool v22; 
  bool result; 
  float v60; 
  float v64; 
  vec3_t v74; 
  vec3_t v75; 
  vec3_t coneOrg; 

  _RDI = bounds;
  v13 = primaryLightIndex;
  _RBX = Com_GetPrimaryLight(primaryLightIndex);
  type = _RBX->type;
  if ( (unsigned __int8)(type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 993, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", type) )
    __debugbreak();
  integer = sm_spotShadowCulling->current.integer;
  if ( integer != 2 )
  {
    if ( !integer )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
      goto LABEL_17;
    }
LABEL_15:
    __asm { vmovsd  xmm0, qword ptr [rbx+60h] }
    v60 = _RBX->bulbLength.v[2];
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+6Ch]
      vmovss  xmm2, dword ptr [rbx+5Ch]
      vmovsd  [rsp+108h+var_D8], xmm0
      vmovsd  xmm0, qword ptr [rbx+2Ch]
    }
    v74.v[2] = v60;
    v64 = _RBX->dir.v[2];
    __asm { vmovsd  [rsp+108h+var_C8], xmm0 }
    v75.v[2] = v64;
    *(float *)&_XMM0 = PhysicallyBasedLight_AreaLightVPLOffsetTube(&v75, &v74, *(const float *)&_XMM2, *(const float *)&_XMM3);
    __asm { vmovaps xmm2, xmm0 }
LABEL_17:
    __asm
    {
      vaddss  xmm3, xmm2, dword ptr [rbx+50h]; radius
      vmulss  xmm0, xmm2, dword ptr [rdx]
      vaddss  xmm1, xmm0, dword ptr [rbx+44h]
      vmulss  xmm0, xmm2, dword ptr [rdx+4]
      vmovss  dword ptr [rsp+108h+coneOrg], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+48h]
      vmulss  xmm0, xmm2, dword ptr [rdx+8]
      vmovss  xmm2, dword ptr [rbx+6Ch]; cosHalfFov
      vmovss  dword ptr [rsp+108h+coneOrg+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+4Ch]
      vmovss  dword ptr [rsp+108h+coneOrg+8], xmm1
    }
    return !CullBoxFromConicSectionOfSphere(&coneOrg, &_RBX->dir, *(float *)&_XMM2, *(float *)&_XMM3, _RDI);
  }
  lightViewFrustums = rgp.world->lightViewFrustums;
  if ( !lightViewFrustums )
    goto LABEL_15;
  planeCount = lightViewFrustums[v13].planeCount;
  if ( !planeCount )
    goto LABEL_15;
  _RCX = lightViewFrustums[v13].planes;
  __asm
  {
    vmovaps [rsp+108h+var_18], xmm6
    vmovaps [rsp+108h+var_28], xmm7
    vmovaps [rsp+108h+var_38], xmm8
    vmovaps [rsp+108h+var_48], xmm9
    vmovaps [rsp+108h+var_58], xmm10
    vmovaps [rsp+108h+var_68], xmm11
  }
  v20 = planeCount;
  v21 = 0;
  __asm
  {
    vmovaps [rsp+108h+var_78], xmm12
    vmovaps [rsp+108h+var_88], xmm13
    vmovaps [rsp+108h+var_98], xmm14
  }
  v22 = v20 == 0;
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+0Ch]
    vmovss  xmm9, dword ptr [rdi]
    vmovss  xmm10, dword ptr [rdi+4]
    vmovss  xmm11, dword ptr [rdi+10h]
    vmovss  xmm12, dword ptr [rdi+8]
    vmovss  xmm13, dword ptr [rdi+14h]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm14, xmm14, xmm14
  }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rcx]
      vmovss  xmm5, dword ptr [rcx+4]
      vmovss  xmm6, dword ptr [rcx+8]
      vandps  xmm0, xmm1, xmm7
      vmulss  xmm2, xmm0, xmm8
      vmulss  xmm0, xmm9, xmm1
      vaddss  xmm1, xmm0, dword ptr [rcx+0Ch]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm10, xmm5
      vmulss  xmm1, xmm12, xmm6
      vaddss  xmm4, xmm3, xmm2
      vandps  xmm5, xmm5, xmm7
      vmulss  xmm0, xmm5, xmm11
      vaddss  xmm2, xmm4, xmm0
      vandps  xmm6, xmm6, xmm7
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm13
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, xmm14
    }
    if ( v22 )
      break;
    ++v21;
    ++_RCX;
    v22 = v21 <= v20;
    if ( (int)v21 >= (int)v20 )
    {
      result = 1;
      goto LABEL_12;
    }
  }
  result = 0;
LABEL_12:
  __asm
  {
    vmovaps xmm14, [rsp+108h+var_98]
    vmovaps xmm13, [rsp+108h+var_88]
    vmovaps xmm12, [rsp+108h+var_78]
    vmovaps xmm11, [rsp+108h+var_68]
    vmovaps xmm10, [rsp+108h+var_58]
    vmovaps xmm9, [rsp+108h+var_48]
    vmovaps xmm8, [rsp+108h+var_38]
    vmovaps xmm7, [rsp+108h+var_28]
    vmovaps xmm6, [rsp+108h+var_18]
  }
  return result;
}

/*
==============
R_PrimaryLightFrustumTestSphere
==============
*/
bool R_PrimaryLightFrustumTestSphere(unsigned int primaryLightIndex, const Sphere *sphere)
{
  __int64 v7; 
  unsigned __int8 type; 
  GfxLightViewFrustum *lightViewFrustums; 
  unsigned __int8 planeCount; 
  vec4_t *planes; 
  unsigned int v15; 
  unsigned int v16; 
  bool v17; 
  bool result; 
  int v61; 

  _RDI = sphere;
  v7 = primaryLightIndex;
  _RBX = Com_GetPrimaryLight(primaryLightIndex);
  type = _RBX->type;
  if ( (unsigned __int8)(type - 2) > 1u )
  {
    v61 = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1036, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", v61) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+0B8h+var_18], xmm6
    vmovaps [rsp+0B8h+var_28], xmm7
    vmovaps [rsp+0B8h+var_38], xmm8
  }
  if ( sm_spotShadowCulling->current.integer == 2 && (lightViewFrustums = rgp.world->lightViewFrustums) != NULL && (planeCount = lightViewFrustums[v7].planeCount) != 0 )
  {
    __asm { vmovss  xmm8, dword ptr [rdi+0Ch] }
    planes = lightViewFrustums[v7].planes;
    v15 = planeCount;
    v16 = 0;
    v17 = v15 == 0;
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm7, dword ptr [rdi+8]
      vxorps  xmm5, xmm5, xmm5
    }
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rax+4]
        vmulss  xmm0, xmm4, dword ptr [rax]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, dword ptr [rax+8]
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm2, xmm0, dword ptr [rax+0Ch]
        vaddss  xmm3, xmm2, xmm8
        vcomiss xmm3, xmm5
      }
      if ( v17 )
        break;
      ++v16;
      ++planes;
      v17 = v16 <= v15;
      if ( (int)v16 >= (int)v15 )
      {
        result = 1;
        goto LABEL_20;
      }
    }
    result = 0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm9
      vmovss  xmm9, dword ptr [rdi+0Ch]
    }
    if ( (unsigned __int8)(_RBX->type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 1018, ASSERT_TYPE_ASSERT, "(light->type == 2 || light->type == 3)", (const char *)&queryFormat, "light->type == GFX_LIGHT_TYPE_SPOT || light->type == GFX_LIGHT_TYPE_OMNI") )
      __debugbreak();
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( sm_spotShadowCulling->current.integer )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+60h]
        vmovss  xmm2, dword ptr [rbx+64h]
        vmovss  xmm3, dword ptr [rbx+68h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm5, xmm2, xmm2
      }
    }
    else
    {
      __asm { vxorps  xmm5, xmm5, xmm5 }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm3, xmm0, dword ptr [rbx+44h]
      vmovss  xmm0, dword ptr [rdi+4]
      vaddss  xmm1, xmm5, dword ptr [rbx+50h]
      vmovss  xmm7, dword ptr [rbx+48h]
      vmovss  xmm8, dword ptr [rbx+4Ch]
      vsubss  xmm2, xmm0, xmm7
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm4, xmm0, xmm8
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm5, xmm1, xmm9
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm0, xmm5, xmm5
      vcomiss xmm4, xmm0
      vmovaps xmm9, [rsp+0B8h+var_48]
    }
    result = 0;
  }
LABEL_20:
  __asm
  {
    vmovaps xmm8, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_28]
    vmovaps xmm6, [rsp+0B8h+var_18]
  }
  return result;
}

/*
==============
R_ShadowedSpotLightScore_MultiSamples
==============
*/
float R_ShadowedSpotLightScore_MultiSamples(const GfxLightScoreConfig *config, const GfxViewParms *viewParms, const GfxLight *light, const bool nvgMode)
{
  float v35; 
  unsigned int v99; 
  int v105; 
  unsigned int v109; 
  __int64 v127; 
  unsigned int v128; 
  unsigned int v135; 
  __int64 v173; 
  bool v204; 
  bool v205; 
  bool v206; 
  char v211; 
  char v212; 
  unsigned int v215; 
  __int64 v226; 
  __int64 v233; 
  __int64 v242; 
  __int64 v258; 
  __int64 v265; 
  __int64 v274; 
  __int64 v296; 
  float v370; 
  float v374; 
  char v375; 
  float v376; 
  int v378[190]; 

  _RDI = light;
  _R15 = config;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+10h]
    vmovss  [rsp+490h+var_454], xmm0
  }
  if ( nvgMode )
  {
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [r8+8]
      vmovss  [rsp+490h+var_454], xmm0
    }
  }
  __asm
  {
    vcomiss xmm0, cs:__real@34000000
    vmovsd  xmm5, qword ptr [r8+54h]
    vmovss  xmm0, dword ptr [rcx+2Ch]
    vmovss  [rsp+490h+var_444], xmm0
    vmovss  xmm0, dword ptr [rcx+30h]
    vmovss  [rsp+490h+var_440], xmm0
    vmovss  xmm0, dword ptr [rcx+3Ch]
    vmovss  [rsp+490h+var_43C], xmm0
    vmovss  xmm0, dword ptr [rcx+34h]
    vmovss  [rsp+490h+var_434], xmm0
    vmovss  xmm0, dword ptr [rcx+38h]
    vmovss  [rsp+490h+var_430], xmm0
    vmovss  xmm0, dword ptr [rcx+44h]
    vmovss  [rsp+490h+var_438], xmm0
    vmovsd  xmm0, qword ptr [rdx+10Ch]
  }
  _R13 = (char *)&light->dir;
  __asm
  {
    vmovsd  [rbp+390h+var_3F8], xmm0
    vmovaps [rsp+490h+var_30], xmm6
    vmovaps [rsp+490h+var_40], xmm7
    vmovaps [rsp+490h+var_50], xmm8
    vmovsd  xmm8, qword ptr [r13+0]
    vmovaps [rsp+490h+var_60], xmm9
    vmovss  xmm9, dword ptr [r8+50h]
    vmovaps [rsp+490h+var_70], xmm10
    vmovaps [rsp+490h+var_80], xmm11
    vmovss  xmm11, dword ptr [r8+60h]
    vmovaps [rsp+490h+var_90], xmm12
    vmovss  xmm12, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm5
    vmovsd  [rsp+490h+var_420], xmm5
    vmovss  xmm4, dword ptr [rsp+490h+var_420+4]
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
  }
  v374 = viewParms->camera.axis.m[0].v[2];
  v370 = light->bulbLength.v[2];
  __asm { vmovss  xmm6, [rsp+490h+var_418] }
  v35 = light->dir.v[2];
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm7, xmm1, xmm5
    vmulss  xmm0, xmm2, xmm4
    vmulss  xmm1, xmm0, xmm9
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm5, xmm1, xmm4
    vmulss  xmm1, xmm0, xmm9
    vaddss  xmm4, xmm1, xmm6
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vmulss  xmm0, xmm0, xmm5
    vmulss  xmm2, xmm8, xmm7
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm7, xmm7
    vmovaps [rsp+490h+var_A0], xmm13
    vmovaps [rsp+490h+var_B0], xmm14
    vmovsd  xmm14, qword ptr [rdx+100h]
  }
  v376 = v35;
  __asm
  {
    vmulss  xmm2, xmm4, [rbp+390h+var_3D8]
    vaddss  xmm6, xmm3, xmm2
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vmovaps [rsp+490h+var_C0], xmm15
    vmovsd  [rbp+390h+var_410], xmm14
    vsubss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm4, xmm1, xmm11
    vmovsd  [rbp+390h+var_408], xmm14
    vmulss  xmm0, xmm11, xmm11
    vsubss  xmm0, xmm12, xmm0
    vsqrtss xmm1, xmm0, xmm0
    vdivss  xmm2, xmm4, xmm1
    vaddss  xmm13, xmm2, xmm6
    vmulss  xmm0, xmm13, dword ptr [r13+0]
    vaddss  xmm2, xmm0, dword ptr [r8+38h]
    vmulss  xmm1, xmm13, dword ptr [r13+4]
    vaddss  xmm0, xmm1, dword ptr [r8+3Ch]
    vsubss  xmm4, xmm0, dword ptr [rbp+390h+var_408+4]
    vmulss  xmm0, xmm13, dword ptr [r13+8]
    vaddss  xmm1, xmm0, dword ptr [r8+40h]
    vsubss  xmm6, xmm1, [rbp+390h+var_400]
    vsubss  xmm7, xmm2, xmm14
    vmulss  xmm2, xmm4, xmm4
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm14, xmm2, xmm2
    vcmpless xmm0, xmm14, cs:__real@80000000
    vblendvps xmm0, xmm14, xmm12, xmm0
    vdivss  xmm5, xmm12, xmm0
    vmulss  xmm0, xmm5, xmm4
    vmulss  xmm3, xmm0, dword ptr [r13+4]
    vmulss  xmm1, xmm5, xmm7
    vmulss  xmm2, xmm1, dword ptr [r13+0]
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm1, xmm0, dword ptr [r13+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm11
  }
  v99 = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+18h]
    vmulss  xmm1, xmm0, dword ptr [r8+44h]
    vmulss  xmm0, xmm1, dword ptr [r15+0Ch]
    vmovss  xmm8, dword ptr [r15+10h]
    vcvttss2si rcx, xmm0; val
  }
  v105 = I_clamp(_RCX, _R15->m_sampleCountMin, _R15->m_sampleCountMax);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+14h]
    vsubss  xmm2, xmm0, dword ptr [r15+10h]
    vmovss  xmm0, dword ptr [rdi+60h]
  }
  v109 = v105 - 1;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vdivss  xmm9, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm0
    vsubss  xmm1, xmm12, xmm2
    vsqrtss xmm0, xmm1, xmm1
    vmovss  [rsp+490h+var_448], xmm0
  }
  if ( &_RDI->up == (vec3_t *)&v375 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( _R13 == &v375 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [r13+8]
    vmovss  xmm6, dword ptr [r13+4]
    vmulss  xmm1, xmm5, dword ptr [r12+4]
    vmulss  xmm0, xmm6, dword ptr [r12+8]
    vmovss  xmm10, dword ptr [r13+0]
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [r12+8]
    vmulss  xmm0, xmm5, dword ptr [r12]
    vsubss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [r12+4]
  }
  v127 = 0i64;
  v128 = 0;
  __asm
  {
    vmovss  [rsp+490h+var_450], xmm2
    vmulss  xmm2, xmm6, dword ptr [r12]
    vsubss  xmm0, xmm2, xmm1
    vmovss  [rsp+490h+var_460], xmm0
    vmovss  [rsp+490h+var_44C], xmm3
  }
  if ( v109 + 1 < 4 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm11, dword ptr [rdi+44h]
    vmovss  xmm13, dword ptr [rdi+38h]
    vmovss  xmm14, dword ptr [rdi+3Ch]
    vmovss  xmm15, dword ptr [rdi+40h]
  }
  v135 = 1;
  do
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RCX = 3 * v127;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm9
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm3, xmm2, xmm11
      vxorps  xmm4, xmm3, xmm7
      vmulss  xmm0, xmm10, xmm4
      vaddss  xmm1, xmm0, xmm13
      vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
      vmulss  xmm2, xmm4, xmm6
      vaddss  xmm0, xmm2, xmm14
      vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm5
      vaddss  xmm2, xmm1, xmm15
      vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
    }
    v127 = (unsigned int)(v127 + 4);
    v128 += 4;
    _RCX = 3i64 * v135;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm9
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm3, xmm2, xmm11
      vxorps  xmm4, xmm3, xmm7
      vmulss  xmm0, xmm10, xmm4
      vaddss  xmm1, xmm0, xmm13
      vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
      vmulss  xmm2, xmm4, xmm6
      vaddss  xmm0, xmm2, xmm14
      vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm5
      vaddss  xmm2, xmm1, xmm15
      vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
    }
    _RDX = 3i64 * (v135 + 1);
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm9
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm3, xmm2, xmm11
      vxorps  xmm4, xmm3, xmm7
      vmulss  xmm0, xmm10, xmm4
      vaddss  xmm1, xmm0, xmm13
      vmovss  [rbp+rdx*4+390h+var_3D0], xmm1
      vmulss  xmm2, xmm4, xmm6
      vaddss  xmm0, xmm2, xmm14
      vmovss  [rbp+rdx*4+390h+var_3CC], xmm0
    }
    v173 = v135 + 2;
    v135 += 4;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm5
      vaddss  xmm2, xmm1, xmm15
      vmovss  [rbp+rdx*4+390h+var_3C8], xmm2
    }
    _RDX = 3 * v173;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm9
      vaddss  xmm2, xmm1, xmm8
      vmulss  xmm3, xmm2, xmm11
      vxorps  xmm4, xmm3, xmm7
      vmulss  xmm0, xmm10, xmm4
      vaddss  xmm1, xmm0, xmm13
      vmovss  [rbp+rdx*4+390h+var_3D0], xmm1
      vmulss  xmm2, xmm4, xmm6
      vaddss  xmm0, xmm2, xmm14
      vmulss  xmm1, xmm4, xmm5
      vaddss  xmm2, xmm1, xmm15
      vmovss  [rbp+rdx*4+390h+var_3CC], xmm0
      vmovss  [rbp+rdx*4+390h+var_3C8], xmm2
    }
  }
  while ( v128 <= v109 - 3 );
  if ( v128 <= v109 )
  {
LABEL_13:
    __asm
    {
      vmovss  xmm10, dword ptr [rdi+44h]
      vmovss  xmm11, dword ptr [r13+0]
      vmovss  xmm13, dword ptr [rdi+38h]
      vmovss  xmm14, dword ptr [rdi+3Ch]
      vmovss  xmm15, dword ptr [rdi+40h]
    }
    do
    {
      _RCX = 3 * v127;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm2, xmm1, xmm8
        vmulss  xmm3, xmm2, xmm10
        vxorps  xmm4, xmm3, xmm7
        vmulss  xmm0, xmm4, xmm11
        vaddss  xmm1, xmm0, xmm13
        vmulss  xmm2, xmm4, xmm6
        vaddss  xmm0, xmm2, xmm14
        vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
        vmulss  xmm1, xmm4, xmm5
      }
      v127 = (unsigned int)(v127 + 1);
      ++v128;
      __asm
      {
        vaddss  xmm2, xmm1, xmm15
        vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
        vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
      }
    }
    while ( v128 <= v109 );
  }
  v204 = (unsigned int)v127 < 0x40;
  v205 = (unsigned int)v127 <= 0x40;
  if ( (unsigned int)v127 > 0x40 )
  {
    v206 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 220, ASSERT_TYPE_ASSERT, "(sampleCount <= ( sizeof( *array_counter( sampleTable ) ) + 0 ))", (const char *)&queryFormat, "sampleCount <= ARRAY_COUNT( sampleTable )");
    v204 = 0;
    v205 = !v206;
    if ( v206 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm13, dword ptr [rdi+44h]
    vcomiss xmm13, dword ptr [r15+1Ch]
    vmovss  xmm4, dword ptr [r15+28h]
    vmovss  xmm15, dword ptr [r15+24h]
    vmovss  [rsp+490h+var_45C], xmm4
    vxorps  xmm11, xmm11, xmm11
  }
  if ( v204 )
    goto LABEL_21;
  __asm { vcomiss xmm15, xmm11 }
  if ( v205 )
  {
LABEL_21:
    v211 = 0;
    v205 = 1;
  }
  else
  {
    v211 = 1;
  }
  __asm
  {
    vcomiss xmm13, dword ptr [r15+20h]
    vcomiss xmm4, xmm11
  }
  v212 = !v205;
  if ( v211 || v212 )
  {
    if ( v109 )
    {
      __asm
      {
        vmovss  xmm12, [rsp+490h+var_450]
        vmovss  xmm11, [rsp+490h+var_44C]
      }
      v215 = v127 + 4;
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm1, xmm8
          vmulss  xmm3, xmm2, xmm13
          vmulss  xmm10, xmm3, [rsp+490h+var_448]
        }
        if ( v211 && v215 <= 0x40 )
        {
          __asm
          {
            vmovss  xmm14, [rsp+490h+var_460]
            vmovss  xmm4, [rsp+490h+var_45C]
          }
          _RCX = 3 * v127;
          __asm
          {
            vmulss  xmm6, xmm10, xmm15
            vmulss  xmm0, xmm6, dword ptr [r12]
          }
          v226 = (unsigned int)(v127 + 1);
          __asm
          {
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3D0]
            vmulss  xmm0, xmm6, dword ptr [rdi+30h]
            vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3CC]
            vmulss  xmm0, xmm6, dword ptr [rdi+34h]
            vmovss  [rbp+rcx*4+390h+var_3CC], xmm1
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3C8]
            vmovss  [rbp+rcx*4+390h+var_3C8], xmm1
          }
          _RCX = 3 * v226;
          v233 = (unsigned int)(v226 + 1);
          __asm
          {
            vxorps  xmm5, xmm6, xmm7
            vmulss  xmm0, xmm5, dword ptr [r12]
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3D0]
            vmulss  xmm2, xmm5, dword ptr [rdi+30h]
            vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
            vaddss  xmm0, xmm2, [rbp+rdx*4+390h+var_3CC]
            vmulss  xmm1, xmm5, dword ptr [rdi+34h]
            vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
            vaddss  xmm2, xmm1, [rbp+rdx*4+390h+var_3C8]
            vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
          }
          _RCX = 3 * v233;
          v242 = (unsigned int)(v233 + 1);
          __asm
          {
            vmulss  xmm0, xmm12, xmm6
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3D0]
            vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
            vmulss  xmm2, xmm11, xmm6
            vaddss  xmm0, xmm2, [rbp+rdx*4+390h+var_3CC]
            vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
            vmulss  xmm1, xmm14, xmm6
            vaddss  xmm2, xmm1, [rbp+rdx*4+390h+var_3C8]
            vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
          }
          _RCX = 3 * v242;
          v127 = (unsigned int)(v242 + 1);
          __asm
          {
            vmulss  xmm0, xmm12, xmm5
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3D0]
            vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
            vmulss  xmm2, xmm11, xmm5
            vaddss  xmm0, xmm2, [rbp+rdx*4+390h+var_3CC]
            vmulss  xmm1, xmm14, xmm5
            vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
            vaddss  xmm2, xmm1, [rbp+rdx*4+390h+var_3C8]
            vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
          }
          v215 += 4;
        }
        else
        {
          __asm { vmovss  xmm14, [rsp+490h+var_460] }
        }
        if ( v212 && v215 <= 0x40 )
        {
          _RCX = 3 * v127;
          __asm
          {
            vmulss  xmm6, xmm10, xmm4
            vmulss  xmm0, xmm6, dword ptr [r12]
          }
          v258 = (unsigned int)(v127 + 1);
          __asm
          {
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3D0]
            vmulss  xmm0, xmm6, dword ptr [rdi+30h]
            vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3CC]
            vmulss  xmm0, xmm6, dword ptr [rdi+34h]
            vmovss  [rbp+rcx*4+390h+var_3CC], xmm1
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3C8]
            vmovss  [rbp+rcx*4+390h+var_3C8], xmm1
          }
          _RCX = 3 * v258;
          v265 = (unsigned int)(v258 + 1);
          __asm
          {
            vxorps  xmm5, xmm6, xmm7
            vmulss  xmm0, xmm5, dword ptr [r12]
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3D0]
            vmulss  xmm2, xmm5, dword ptr [rdi+30h]
            vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
            vaddss  xmm0, xmm2, [rbp+rdx*4+390h+var_3CC]
            vmulss  xmm1, xmm5, dword ptr [rdi+34h]
            vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
            vaddss  xmm2, xmm1, [rbp+rdx*4+390h+var_3C8]
            vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
          }
          _RCX = 3 * v265;
          v274 = (unsigned int)(v265 + 1);
          __asm
          {
            vmulss  xmm0, xmm12, xmm6
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3D0]
            vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
            vmulss  xmm2, xmm11, xmm6
            vaddss  xmm0, xmm2, [rbp+rdx*4+390h+var_3CC]
            vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
            vmulss  xmm1, xmm14, xmm6
            vaddss  xmm2, xmm1, [rbp+rdx*4+390h+var_3C8]
            vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
          }
          _RCX = 3 * v274;
          v127 = (unsigned int)(v274 + 1);
          __asm
          {
            vmulss  xmm0, xmm12, xmm5
            vaddss  xmm1, xmm0, [rbp+rdx*4+390h+var_3D0]
            vmovss  [rbp+rcx*4+390h+var_3D0], xmm1
            vmulss  xmm2, xmm11, xmm5
            vaddss  xmm0, xmm2, [rbp+rdx*4+390h+var_3CC]
            vmulss  xmm1, xmm14, xmm5
            vmovss  [rbp+rcx*4+390h+var_3CC], xmm0
            vaddss  xmm2, xmm1, [rbp+rdx*4+390h+var_3C8]
            vmovss  [rbp+rcx*4+390h+var_3C8], xmm2
          }
          v215 += 4;
        }
        __asm { vmovss  xmm4, [rsp+490h+var_45C] }
        ++v99;
      }
      while ( v99 <= v109 );
      __asm
      {
        vmovss  xmm12, cs:__real@3f800000
        vxorps  xmm11, xmm11, xmm11
      }
    }
    if ( (unsigned int)v127 > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_primarylights.cpp", 254, ASSERT_TYPE_ASSERT, "(sampleCount <= ( sizeof( *array_counter( sampleTable ) ) + 0 ))", (const char *)&queryFormat, "sampleCount <= ARRAY_COUNT( sampleTable )") )
      __debugbreak();
  }
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( (_DWORD)v127 )
  {
    __asm
    {
      vmovss  xmm9, [rbp+390h+var_3F0]
      vmovss  xmm10, dword ptr [rbp+390h+var_3F8+4]
      vmovss  xmm13, dword ptr [rbp+390h+var_3F8]
      vmovss  xmm14, cs:__real@3f000000
      vmovss  xmm15, [rsp+490h+var_444]
    }
    _RAX = v378;
    v296 = (unsigned int)v127;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax-8]
        vsubss  xmm6, xmm0, dword ptr [rbp+390h+var_410]
        vmovss  xmm1, dword ptr [rax-4]
        vsubss  xmm5, xmm1, dword ptr [rbp+390h+var_408+4]
        vmovss  xmm0, dword ptr [rax]
        vsubss  xmm4, xmm0, [rbp+390h+var_400]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm7, xmm2, xmm2
        vcmpless xmm0, xmm7, cs:__real@80000000
        vblendvps xmm0, xmm7, xmm12, xmm0
        vdivss  xmm1, xmm12, xmm0
        vmulss  xmm3, xmm5, xmm1
        vmovaps xmm5, xmm12
        vmulss  xmm2, xmm6, xmm1
        vmulss  xmm4, xmm4, xmm1
        vmulss  xmm0, xmm13, xmm2
        vmulss  xmm1, xmm10, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, xmm4
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm0, xmm2, xmm12
        vmulss  xmm3, xmm0, xmm14
        vmulss  xmm0, xmm3, [rsp+490h+var_440]
        vsubss  xmm1, xmm12, xmm3
        vmulss  xmm2, xmm1, xmm15
        vaddss  xmm5, xmm2, xmm0
        vsubss  xmm0, xmm7, [rsp+490h+var_43C]
        vmulss  xmm1, xmm0, [rsp+490h+var_438]
        vmaxss  xmm1, xmm1, xmm11
        vminss  xmm0, xmm1, xmm12
        vsubss  xmm3, xmm12, xmm0
        vmulss  xmm1, xmm3, [rsp+490h+var_430]
        vsubss  xmm0, xmm12, xmm3
        vmulss  xmm2, xmm0, [rsp+490h+var_434]
        vaddss  xmm2, xmm2, xmm1
      }
      _RAX += 3;
      __asm
      {
        vmulss  xmm0, xmm2, xmm5
        vmaxss  xmm8, xmm0, xmm8
      }
      --v296;
    }
    while ( v296 );
  }
  __asm
  {
    vmovss  xmm0, [rsp+490h+var_454]
    vmulss  xmm0, xmm0, dword ptr [r15+54h]
    vmovaps xmm15, [rsp+490h+var_C0]
    vmovaps xmm14, [rsp+490h+var_B0]
    vmovaps xmm13, [rsp+490h+var_A0]
    vmovaps xmm11, [rsp+490h+var_80]
    vmovaps xmm10, [rsp+490h+var_70]
    vmovaps xmm9, [rsp+490h+var_60]
    vmovaps xmm7, [rsp+490h+var_40]
    vmovaps xmm6, [rsp+490h+var_30]
    vminss  xmm3, xmm0, xmm12
    vmulss  xmm0, xmm3, dword ptr [r15+4Ch]
    vsubss  xmm1, xmm12, xmm3
    vmulss  xmm2, xmm1, dword ptr [r15+48h]
    vmovaps xmm12, [rsp+490h+var_90]
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm0, xmm1, xmm8
    vmovaps xmm8, [rsp+490h+var_50]
  }
  return *(float *)&_XMM0;
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

