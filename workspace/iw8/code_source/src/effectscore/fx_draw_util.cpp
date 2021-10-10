/*
==============
FX_GenParticleSimAnimationVerts
==============
*/

void __fastcall FX_GenParticleSimAnimationVerts(FxDrawState *draw, const ParticleState *pParticleState, const ParticleEmitter *pParticleEmitter, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, FxParticleSimAnimation *particleSimAnimation, const Particle_DrawData *r_drawData, const vector4 *rParticleSimTransform, const ParticleState::ElementTypeModule *rElementTypeModule, const ParticleModuleInitParticleSim *pModuleInitParticleSim, unsigned int emitterDataIndex)
{
  ?FX_GenParticleSimAnimationVerts@@YAXPEAUFxDrawState@@PEBVParticleState@@PEBVParticleEmitter@@Ufloat4@@33IPEAUFxParticleSimAnimation@@AEBUParticle_DrawData@@AEBUvector4@@AEBTElementTypeModule@2@PEBUParticleModuleInitParticleSim@@I@Z(draw, pParticleState, pParticleEmitter, tangent, bitangent, normal, activeLightGridsBitmask, particleSimAnimation, r_drawData, rParticleSimTransform, rElementTypeModule, pModuleInitParticleSim, emitterDataIndex);
}

/*
==============
FX_QuadGenQuad
==============
*/

void __fastcall FX_QuadGenQuad(FxDrawState *draw, const ParticleState *pParticleState, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *pMaterial, const Particle_DrawData *r_drawData, unsigned int perFrameActiveEmitterIndex)
{
  ?FX_QuadGenQuad@@YAXPEAUFxDrawState@@PEBVParticleState@@Ufloat4@@22IPEAUMaterial@@AEBUParticle_DrawData@@I@Z(draw, pParticleState, tangent, bitangent, normal, activeLightGridsBitmask, pMaterial, r_drawData, perFrameActiveEmitterIndex);
}

/*
==============
FX_SpriteDirectFlush
==============
*/

void __fastcall FX_SpriteDirectFlush(GfxCodeSurfGlob *codeSurfGlob, FxSpriteInfo *sprite)
{
  ?FX_SpriteDirectFlush@@YAXPEAUGfxCodeSurfGlob@@PEAUFxSpriteInfo@@@Z(codeSurfGlob, sprite);
}

/*
==============
FX_TrailGenVerts
==============
*/

void __fastcall FX_TrailGenVerts(FxDrawState *draw, const ParticleEmitter *pEmitterOwner, const ParticleEmitter::ParticleStateData *rParticleStateData, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *pMaterial, const Particle_DrawData *r_drawData, Particle_TrailData *rTrailData, const float4 *position, unsigned int perFrameActiveEmitterIndex)
{
  ?FX_TrailGenVerts@@YAXPEAUFxDrawState@@PEBVParticleEmitter@@AEBUParticleStateData@2@Ufloat4@@33IPEAUMaterial@@AEBUParticle_DrawData@@AEAUParticle_TrailData@@AEBU4@I@Z(draw, pEmitterOwner, rParticleStateData, tangent, bitangent, normal, activeLightGridsBitmask, pMaterial, r_drawData, rTrailData, position, perFrameActiveEmitterIndex);
}

/*
==============
FX_BeamGenVerts
==============
*/

void __fastcall FX_BeamGenVerts(FxDrawState *draw, const ParticleEmitter *pEmitterOwner, const ParticleEmitter::ParticleStateData *rParticleStateData, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *pMaterial, const Particle_DrawData *r_drawData, unsigned int perFrameActiveEmitterIndex)
{
  ?FX_BeamGenVerts@@YAXPEAUFxDrawState@@PEBVParticleEmitter@@AEBUParticleStateData@2@Ufloat4@@33IPEAUMaterial@@AEBUParticle_DrawData@@I@Z(draw, pEmitterOwner, rParticleStateData, tangent, bitangent, normal, activeLightGridsBitmask, pMaterial, r_drawData, perFrameActiveEmitterIndex);
}

/*
==============
FX_CompareParticleDistance
==============
*/

bool __fastcall FX_CompareParticleDistance(const FxParticleSimAnimationSortInfo *a, const FxParticleSimAnimationSortInfo *b)
{
  return ?FX_CompareParticleDistance@@YA_NAEBUFxParticleSimAnimationSortInfo@@0@Z(a, b);
}

/*
==============
FX_SpriteDirectFlush
==============
*/

void __fastcall FX_SpriteDirectFlush(GfxCodeSurfGlob *codeSurfGlob, FxSpriteInfo *sprite, const bool forceDrawBatchBreak)
{
  ?FX_SpriteDirectFlush@@YAXPEAUGfxCodeSurfGlob@@PEAUFxSpriteInfo@@_N@Z(codeSurfGlob, sprite, forceDrawBatchBreak);
}

/*
==============
FX_GenFlareVerts
==============
*/

void __fastcall FX_GenFlareVerts(FxDrawState *draw, const vec3_t *clipPos, const vec2_t *du, const vec2_t *dv, Material *pMaterial, const Particle_DrawData *r_drawData, const ParticleState *pParticleState, unsigned int perFrameActiveEmitterIndex)
{
  ?FX_GenFlareVerts@@YAXPEAUFxDrawState@@AEBTvec3_t@@AEBTvec2_t@@2PEAUMaterial@@AEBUParticle_DrawData@@PEBVParticleState@@I@Z(draw, clipPos, du, dv, pMaterial, r_drawData, pParticleState, perFrameActiveEmitterIndex);
}

/*
==============
FX_DrawParticleSimAnimationModels
==============
*/

void __fastcall FX_DrawParticleSimAnimationModels(const ParticleState *pParticleState, ParticleEmitter *pParticleEmitter, FxParticleSimAnimation *particleSimAnimation, const float4 *color, const float4 *posWorld, const float4 *particleSimRotationAngles, const vector4 *rParticleSimTransform, const ParticleModuleInitParticleSim *pModuleInitParticleSim, float scale, float time, int randomSeed)
{
  ?FX_DrawParticleSimAnimationModels@@YAXPEBVParticleState@@PEAVParticleEmitter@@PEAUFxParticleSimAnimation@@AEBUfloat4@@33AEBUvector4@@PEBUParticleModuleInitParticleSim@@MMH@Z(pParticleState, pParticleEmitter, particleSimAnimation, color, posWorld, particleSimRotationAngles, rParticleSimTransform, pModuleInitParticleSim, scale, time, randomSeed);
}

/*
==============
GetMeshLightingType
==============
*/

GfxMeshLightingType __fastcall GetMeshLightingType(const Material *material)
{
  return ?GetMeshLightingType@@YA?AW4GfxMeshLightingType@@PEBUMaterial@@@Z(material);
}

/*
==============
FX_AddAtlasDataReserveCodeSurfBuffers
==============
*/
bool FX_AddAtlasDataReserveCodeSurfBuffers(FxDrawState *draw, const Material *material, unsigned int *outPackedAtlasDataOffset, unsigned int quadCount, GfxCodeSurfBuffers *outBuffers)
{
  unsigned __int8 *packedAtlasData; 
  const GfxPackedAtlasData *v9; 
  __int64 v10; 
  bool result; 
  unsigned int v12; 

  *outPackedAtlasDataOffset = 0;
  packedAtlasData = material->packedAtlasData;
  if ( !packedAtlasData )
    return R_ReserveQuadCodeSurfBuffers(outBuffers, draw->codeSurfGlob, quadCount, 0);
  v9 = (const GfxPackedAtlasData *)(packedAtlasData + 12);
  v10 = ((unsigned __int8)(83 * ((-51 * (((_BYTE)packedAtlasData + 12) ^ ((unsigned __int64)(packedAtlasData + 12) >> 33))) ^ ((0xFF51AFD7ED558CCDui64 * ((unsigned __int64)(packedAtlasData + 12) ^ ((unsigned __int64)(packedAtlasData + 12) >> 33))) >> 33))) ^ (unsigned __int8)((0xC4CEB9FE1A85EC53ui64 * ((0xFF51AFD7ED558CCDui64 * ((unsigned __int64)(packedAtlasData + 12) ^ ((unsigned __int64)(packedAtlasData + 12) >> 33))) ^ ((0xFF51AFD7ED558CCDui64 * ((unsigned __int64)(packedAtlasData + 12) ^ ((unsigned __int64)(packedAtlasData + 12) >> 33))) >> 33))) >> 33)) & 0x7F;
  if ( draw->atlasDataOwners[v10] == packedAtlasData + 12 )
  {
    *outPackedAtlasDataOffset = draw->atlasDataOffsets[v10];
    return R_ReserveQuadCodeSurfBuffers(outBuffers, draw->codeSurfGlob, quadCount, 0);
  }
  else
  {
    v12 = R_AddCodeSurfPackedAtlasData(draw->codeSurfGlob, v9, *(unsigned __int16 *)packedAtlasData);
    if ( v12 == -1 || !R_ReserveQuadCodeSurfBuffers(outBuffers, draw->codeSurfGlob, quadCount, 0) )
    {
      return 0;
    }
    else
    {
      draw->atlasDataOwners[v10] = v9;
      result = 1;
      draw->atlasDataOffsets[v10] = v12;
      *outPackedAtlasDataOffset = v12;
    }
  }
  return result;
}

/*
==============
FX_BeamGenVerts
==============
*/
void FX_BeamGenVerts(FxDrawState *draw, const ParticleEmitter *pEmitterOwner, const ParticleEmitter::ParticleStateData *rParticleStateData, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *pMaterial, const Particle_DrawData *r_drawData, unsigned int perFrameActiveEmitterIndex)
{
  const ParticleSystem *SystemOwner; 
  const ParticleSystem *v14; 
  __m128 m_flags; 
  unsigned __int64 v16; 
  float m_beamTextureOffsetV; 
  bool v18; 
  __m128 v20; 
  __m128 v24; 
  unsigned int v27; 
  unsigned int v28; 
  const ParticleStateDef *m_pStateDef; 
  const ParticleModuleGroupDef *moduleGroupDefs; 
  ParticleModulePositionGraph *v31; 
  bool v32; 
  FxSpriteInfo *p_sprite; 
  ParticleEmitter *v34; 
  unsigned __int16 vertIndexOffset; 
  r_double_index_t *v36; 
  ParticleSystem *v37; 
  const ParticleSystemDef *Def; 
  __m128 v41; 
  __m128 v43; 
  const float4 *v44; 
  float v49; 
  __int64 v50; 
  float v51; 
  __m128 v53; 
  float4 v56; 
  float4 v57; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v62; 
  __m128 v63; 
  __m128 v64; 
  GfxMeshLightingType MeshLightingType; 
  bool v66; 
  __int128 v71; 
  const ParticleAtlasData *atlasData; 
  unsigned int entryCount; 
  __m128 v114; 
  GfxCodeSurfGlob *v115; 
  __m128 v122; 
  __m128 v125; 
  __m128 v126; 
  __m128 v127; 
  __m128 v128; 
  __m128 v129; 
  float4 *v130; 
  GfxSpriteVertex *v131; 
  float4 *v132; 
  float4 *v133; 
  __m128 v135; 
  __m128 v136; 
  ParticleModule *v137; 
  unsigned int m_particleCountRunning; 
  __m128 v144; 
  __m128 v145; 
  __m128 v148; 
  __m128 v149; 
  __m128 v152; 
  __m128 v154; 
  unsigned int v156; 
  unsigned int v165; 
  GfxSpriteVertex *v166; 
  __m128 v167; 
  __m128 *p_lightingCoord; 
  unsigned int v169; 
  vec4_t *p_color; 
  __int16 v171; 
  __m128 v172; 
  __m128 v173; 
  __m128 v174; 
  ParticleModule *v175; 
  r_double_index_t *v186; 
  bool v187; 
  __m128 v188; 
  __m128 v189; 
  __m128 v190; 
  __m128 v191; 
  __m128 v192; 
  __m128 v193; 
  __m128 v194; 
  __m128 v195; 
  __m128 v196; 
  __m128 v197; 
  __m128 v198; 
  __m128 v199; 
  __m128 v200; 
  __m128 v201; 
  ParticleModule *v202; 
  float v203; 
  float v204; 
  __m128 v207; 
  __m128 v208; 
  __m128 v209; 
  float dv; 
  float v211; 
  unsigned int v212; 
  ParticleModule *v213; 
  float4 v216; 
  __m128 v217; 
  __m128 v218; 
  __m128 v219; 
  __m128 v220; 
  __m128 v223; 
  __m128 v228; 
  float v229; 
  __m128 v230; 
  __m128 v233; 
  float4 *fmt; 
  ParticleEmitter *outCurvePoint2; 
  bool m_useCurvePoints; 
  unsigned int outLightmapOffset; 
  int v238; 
  float v239; 
  unsigned int vertCount; 
  int codeSurfFlags; 
  float v242; 
  float outLightmapU; 
  float outLightmapV; 
  float outLightmapD; 
  float v246; 
  float lightingFrac; 
  ParticleEmitter *pEmitterOwnera; 
  Particle_DrawData *drawData; 
  unsigned int v250; 
  float v251; 
  const float4 *v252; 
  float v253; 
  float m_beamSpiralGraphOffset; 
  __m128 v255; 
  r_double_index_t *indices; 
  ParticleState::ElementTypeModule v257; 
  ParticleModule *v258; 
  FxAtlasCoords outAtlasCoords; 
  float4 cameraPos; 
  float4 currLookAt; 
  __m128 v262; 
  ParticleModule *pModuleBase; 
  __m128 v; 
  __m128 v265; 
  __m128 v266; 
  float4 v267; 
  __m128 v268; 
  GfxCodeSurfBuffers outBuffers; 
  __m128 v270; 
  vector3 outMatrix; 
  vec3_t lightIter; 
  float4 packedAtlasParams; 
  float4 outStartPos; 
  float4 outEndPos; 
  float4 v276; 
  float4 outCurvePoint1; 

  v252 = tangent;
  pEmitterOwnera = (ParticleEmitter *)pEmitterOwner;
  LOBYTE(codeSurfFlags) = r_drawData->codeSurfFlags;
  *(_QWORD *)lightIter.v = draw;
  drawData = (Particle_DrawData *)r_drawData;
  *(_OWORD *)&outAtlasCoords.u = _xmm;
  lightingFrac = r_drawData->lightingFrac;
  outAtlasCoords.blendU = 0.0;
  outAtlasCoords.blendV = 0.0;
  if ( !rParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 759, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( rParticleStateData->m_particleState.m_pStateDef->elementType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 760, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_BEAM)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_BEAM") )
    __debugbreak();
  v257.pModule = (const ParticleModule *)rParticleStateData->m_particleState.m_elementTypeModule;
  if ( !v257.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 762, ASSERT_TYPE_ASSERT, "(pModuleInitBeam)", (const char *)&queryFormat, "pModuleInitBeam") )
    __debugbreak();
  SystemOwner = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  rParticleStateData->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[0] = 0i64;
  rParticleStateData->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[1] = 0i64;
  rParticleStateData->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[0] = 0i64;
  rParticleStateData->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[1] = 0i64;
  *(_QWORD *)&rParticleStateData->m_particleState.m_moduleGraphLengthData.useLength = 0i64;
  *(_QWORD *)rParticleStateData->m_particleState.m_moduleGraphLengthData.pad = 0i64;
  rParticleStateData->m_particleState.m_moduleGraphLengthData.useLength = 1;
  v14 = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  m_flags = (__m128)v257.pModule[1].m_flags;
  v16 = (unsigned __int64)LODWORD(v14->m_flags) >> 8;
  LOBYTE(v14) = v257.pModule[1].m_type & 1;
  v253 = *(float *)&v257.pModule[15].m_type;
  m_beamTextureOffsetV = rParticleStateData->m_particleState.m_beamTextureOffsetV;
  LOBYTE(v238) = (_BYTE)v14;
  v18 = (v16 & 1) == 0;
  m_useCurvePoints = SystemOwner->m_beamData.m_useCurvePoints;
  v242 = m_beamTextureOffsetV;
  m_beamSpiralGraphOffset = rParticleStateData->m_particleState.m_beamSpiralGraphOffset;
  if ( m_useCurvePoints )
    ParticleEmitter::GetBeamCurvePoints((ParticleEmitter *)pEmitterOwner, &rParticleStateData->m_particleState, &outStartPos, &outEndPos, &outCurvePoint1, &v276);
  else
    ParticleEmitter::GetBeamPos((ParticleEmitter *)pEmitterOwner, &rParticleStateData->m_particleState, &outStartPos, &outEndPos);
  if ( v18 )
    _XMM7.v = _mm128_add_ps(outStartPos.v, r_drawData->posWorld.v);
  else
    _XMM7.v = (__m128)r_drawData->posWorld;
  v20 = _mm128_sub_ps(outEndPos.v, outStartPos.v);
  _XMM0 = _mm128_mul_ps(v20, v20);
  currLookAt.v = v20;
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v24 = _mm_sqrt_ps(_XMM0);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 2 }
  v27 = (int)*(float *)&_XMM1;
  vertCount = 2 * (int)*(float *)&_XMM1 + 2;
  v28 = 6 * (int)*(float *)&_XMM1;
  _XMM0.m128_f32[0] = (float)(unsigned int)(int)*(float *)&_XMM1;
  v251 = _XMM0.m128_f32[0];
  v270 = v24;
  *(double *)_XMM0.m128_u64 = I_fclamp(v24.m128_f32[0] / (float)(_XMM0.m128_f32[0] * m_flags.m128_f32[0]), 0.0, 1.0);
  *(float *)&_XMM1 = (float)(unsigned int)((int)*(float *)&_XMM1 - 1);
  v250 = _XMM0.m128_u32[0];
  *(double *)_XMM0.m128_u64 = I_fclamp((float)(v24.m128_f32[0] - (float)(*(float *)&_XMM1 * m_flags.m128_f32[0])) * (float)(1.0 / m_flags.m128_f32[0]), 0.0, 1.0);
  m_pStateDef = rParticleStateData->m_particleState.m_pStateDef;
  v246 = _XMM0.m128_f32[0];
  moduleGroupDefs = m_pStateDef->moduleGroupDefs;
  pModuleBase = (ParticleModule *)ParticleModule::FindModule<ParticleModuleColorGraph>(m_pStateDef->moduleGroupDefs, PARTICLE_MODULE_COLOR_GRAPH, 0x100u);
  v31 = (ParticleModulePositionGraph *)ParticleModule::FindModule<ParticleModulePositionGraph>(moduleGroupDefs, PARTICLE_MODULE_POSITION_GRAPH, 0x100u);
  v32 = draw->codeSurfGlob == NULL;
  p_sprite = &draw->sprite;
  v258 = v31;
  if ( v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 833, ASSERT_TYPE_ASSERT, "(draw->codeSurfGlob)", (const char *)&queryFormat, "draw->codeSurfGlob") )
    __debugbreak();
  if ( !pMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 834, ASSERT_TYPE_ASSERT, "(pMaterial)", (const char *)&queryFormat, "pMaterial") )
    __debugbreak();
  if ( drawData->size.v[0] != 0.0 && R_ReserveVertCodeSurfBuffers(&outBuffers, draw->codeSurfGlob, vertCount, v28, 0) )
  {
    v34 = pEmitterOwnera;
    vertIndexOffset = outBuffers.vertIndexOffset;
    vertCount = outBuffers.vertIndexBase;
    v36 = outBuffers.indices;
    pEmitterOwnera->m_numBeamSegments += v27;
    indices = v36;
    v37 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v34);
    Def = ParticleSystem::GetDef(v37);
    FX_SpriteDirectContinue(*(GfxCodeSurfGlob **)(*(_QWORD *)lightIter.v + 56i64), Def->name, p_sprite, pMaterial, vertCount, indices, codeSurfFlags, perFrameActiveEmitterIndex);
    p_sprite->indexCount += v28;
    _R12 = drawData;
    __asm { vbroadcastss xmm8, dword ptr [r12+20h] }
    v = drawData->color.v;
    if ( m_useCurvePoints && v18 )
    {
      outStartPos.v = _mm128_add_ps(_XMM7.v, outStartPos.v);
      outEndPos.v = _mm128_add_ps(_XMM7.v, outEndPos.v);
      outCurvePoint1.v = _mm128_add_ps(_XMM7.v, outCurvePoint1.v);
      v276.v = _mm128_add_ps(_XMM7.v, v276.v);
    }
    v41 = m_flags;
    v41.m128_f32[0] = m_flags.m128_f32[0] * 0.5;
    __asm { vbroadcastss xmm15, dword ptr [r12+70h] }
    v43 = _mm_shuffle_ps(v41, v41, 0);
    FX_GetAtlasCoords(drawData, &outAtlasCoords);
    _XMM0 = LODWORD(outAtlasCoords.u);
    __asm { vinsertps xmm0, xmm0, xmm1, 10h }
    v32 = drawData->atlasData->entryCount == 0;
    __asm
    {
      vinsertps xmm0, xmm0, xmm3, 20h ; ' '
      vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    }
    v262 = _XMM0;
    if ( v32 )
      v49 = 0.0;
    else
      v49 = fmodf_0(drawData->atlasIndex, 1.0);
    if ( (v257.pModule[1].m_type & 4) != 0 )
    {
      v50 = *(_QWORD *)lightIter.v;
      v51 = **(float **)(*(_QWORD *)lightIter.v + 64i64);
      packedAtlasParams.v.m128_i32[3] = 0;
      v53 = packedAtlasParams.v;
      v53.m128_f32[0] = v51;
      _XMM3 = v53;
      __asm
      {
        vinsertps xmm3, xmm3, xmm1, 10h
        vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      }
      packedAtlasParams.v = _XMM3;
      cameraPos.v = _XMM3;
      Particle_GenerateCameraFacingMatrix(&cameraPos, &outStartPos, &currLookAt, &outMatrix);
      v56.v = (__m128)outMatrix.x;
      v57.v = (__m128)outMatrix.y;
      _XMM8 = outMatrix.z.v;
    }
    else
    {
      Float4SinCos(v44, &cameraPos, &currLookAt);
      v50 = *(_QWORD *)lightIter.v;
      v56.v = _mm128_add_ps(_mm128_mul_ps(cameraPos.v, bitangent->v), _mm128_mul_ps(currLookAt.v, v252->v));
      v57.v = _mm128_sub_ps(_mm128_mul_ps(cameraPos.v, v252->v), _mm128_mul_ps(currLookAt.v, bitangent->v));
      _XMM8 = normal->v;
    }
    v32 = !drawData->allowLighting;
    v59 = _mm128_mul_ps(v43, v57.v);
    v60 = _mm128_mul_ps(_XMM15, v56.v);
    v61 = _mm128_sub_ps(_XMM7.v, v60);
    v255 = v56.v;
    v62 = _mm128_add_ps(_XMM7.v, v60);
    v63 = _mm128_sub_ps(v61, v59);
    v265 = _mm128_add_ps(v59, v62);
    cameraPos.v = _XMM8;
    v266 = _mm128_add_ps(v59, v61);
    v64 = _mm128_sub_ps(v62, v59);
    if ( v32 || (MeshLightingType = GetMeshLightingType(pMaterial), MeshLightingType == GFX_MESH_LIGHTING_NONE) || (v66 = !Material_IsVolumetric(pMaterial), !R_AllocateCodeSurfLightmap(*(GfxCodeSurfGlob **)(v50 + 56), MeshLightingType, 0, activeLightGridsBitmask, (GfxMeshDataLightingInput **)&lightIter, &outLightmapOffset, &outLightmapU, &outLightmapV, &outLightmapD)) )
    {
      v71 = 0i64;
      outLightmapD = 0.0;
      outLightmapU = 0.0;
      outLightmapV = 0.0;
    }
    else
    {
      _RAX = *(_QWORD *)lightIter.v;
      **(float **)lightIter.v = _XMM7.v.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rax+4], xmm7, 1
        vextractps dword ptr [rax+8], xmm7, 2
      }
      LODWORD(v239) = outLightmapOffset & 0x3FFF | (outLightmapOffset >> 2) & 0xFFFC000 | (v66 << 28);
      *(float *)(*(_QWORD *)lightIter.v + 12i64) = v239;
      _XMM0 = 0i64;
      __asm
      {
        vinsertps xmm0, xmm0, xmm6, 10h
        vcvtps2ph xmm1, xmm0, 0
      }
      *(__m128 *)(*(_QWORD *)lightIter.v + 16i64) = _mm_shuffle_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, _XMM1, 250), 132);
      v71 = LODWORD(outLightmapU);
    }
    _XMM12 = v71;
    __asm
    {
      vinsertps xmm12, xmm12, xmm0, 10h
      vinsertps xmm12, xmm12, xmm2, 20h ; ' '
      vinsertps xmm12, xmm12, xmm1, 30h ; '0'
    }
    if ( _R12->hasAtlas && (atlasData = _R12->atlasData, (atlasData->behavior & 0x10) != 0) )
    {
      __asm
      {
        vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      }
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
      entryCount = atlasData->entryCount;
      __asm
      {
        vcvttps2dq xmm3, xmm2
        vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm0, xmm4, 44h ; 'D'
        vpor    xmm1, xmm0, xmm4
        vpshufd xmm0, xmm1, 0FFh
        vpor    xmm1, xmm0, xmm1
      }
      _XMM0 = packedAtlasParams.v;
      __asm
      {
        vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
        vblendps xmm1, xmm0, xmm2, 4
      }
      _XMM0.m128_i32[0] = LODWORD(_R12->atlasIndex);
      packedAtlasParams.v = _XMM1;
      FX_PackAtlasParamsAsNorm32W(_XMM0.m128_f32[0], v49, entryCount, &packedAtlasParams);
      _XMM5 = packedAtlasParams.v;
    }
    else
    {
      __asm
      {
        vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm0, xmm0, xmm6
      }
      _XMM1 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
      __asm
      {
        vcvttps2dq xmm0, xmm1
        vpand   xmm2, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm1, xmm2, 44h ; 'D'
        vpor    xmm3, xmm1, xmm2
        vpshufd xmm0, xmm3, 0FFh
        vpor    xmm1, xmm0, xmm3
        vpor    xmm8, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
      }
      _XMM0 = v255;
      __asm
      {
        vmaxps  xmm0, xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm1, xmm0, xmm6
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM1, g_one.v), g_unpackMul1010102.v);
      __asm
      {
        vcvttps2dq xmm0, xmm3
        vpand   xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm0, xmm1, 44h ; 'D'
        vpor    xmm2, xmm0, xmm1
        vpshufd xmm1, xmm2, 0AAh ; 'ª'
        vpor    xmm0, xmm1, xmm2
        vpor    xmm3, xmm0, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
      }
      _XMM0 = packedAtlasParams.v;
      __asm
      {
        vblendps xmm1, xmm0, xmm8, 4
        vblendps xmm5, xmm1, xmm3, 8
      }
    }
    v114 = v262;
    v115 = *(GfxCodeSurfGlob **)(v50 + 56);
    _XMM0 = _mm_shuffle_ps(v114, v114, 140);
    __asm { vcvtps2ph xmm7, xmm0, 0 }
    _XMM1 = _mm_shuffle_ps(v114, v114, 217);
    __asm { vcvtps2ph xmm9, xmm1, 0 }
    _XMM0 = _mm_shuffle_ps(_XMM12, _XMM12, 140);
    __asm { vcvtps2ph xmm6, xmm0, 0 }
    v122 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM6, _XMM5, 80), _XMM5, 232);
    _XMM1 = _mm_shuffle_ps(_XMM12, _XMM12, 217);
    __asm { vcvtps2ph xmm8, xmm1, 0 }
    v125 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM5, _XMM7, 80), _XMM5, 232);
    v126 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM8, _XMM5, 80), _XMM5, 232);
    v127 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM5, _XMM9, 80), _XMM5, 232);
    v128 = _mm_shuffle_ps(_mm_shuffle_ps(v122, _XMM7, 0), v122, 232);
    packedAtlasParams.v = _mm_shuffle_ps(_mm_shuffle_ps(v125, _XMM6, 85), v125, 230);
    v255 = _mm_shuffle_ps(_mm_shuffle_ps(v126, _XMM9, 0), v126, 232);
    v129 = _mm_shuffle_ps(_mm_shuffle_ps(v127, _XMM8, 85), v127, 230);
    v131 = R_CodeSurfVertIter_Begin(v115, vertCount + vertIndexOffset);
    if ( ((unsigned __int8)v131 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 941, ASSERT_TYPE_ASSERT, "(((uintptr_t)vertIter & 15) == 0)", (const char *)&queryFormat) )
      __debugbreak();
    __asm { vbroadcastss xmm0, [rsp+320h+var_2A8] }
    currLookAt.v = _mm128_mul_ps(v59, (__m128)_xmm_c0000000c0000000c0000000c0000000);
    v135 = _mm128_sub_ps(v266, v59);
    v136 = _mm128_sub_ps(v265, v59);
    v266 = v136;
    v268 = _mm128_mul_ps(_XMM0, currLookAt.v);
    v265 = v135;
    if ( m_useCurvePoints )
      Float4EvalCubicBezierSpline(0.0, v130, v132, v133, fmt, &v267);
    v137 = pModuleBase;
    m_particleCountRunning = rParticleStateData->m_particleData.m_particleCountRunning;
    vertCount = m_particleCountRunning;
    rParticleStateData->m_particleState.m_moduleGraphLengthData.lengthFraction = 0.0;
    if ( v137 )
    {
      ParticleModuleColorGraph::Update(v137, &rParticleStateData->m_particleData, 0, m_particleCountRunning, outAtlasCoords.dv, pEmitterOwnera, &rParticleStateData->m_particleState);
      _XMM3.v = (__m128)rParticleStateData->m_particleState.m_moduleGraphLengthData.color;
    }
    else
    {
      _XMM3.v = v;
    }
    _XMM0 = _mm128_mul_ps(v60, v60);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    v144 = _mm128_div_ps(v60, _mm_sqrt_ps(_XMM0));
    v267.v = v144;
    if ( m_useCurvePoints )
      v145 = _mm128_mul_ps(_XMM15, v144);
    else
      v145 = v268;
    v = v145;
    _XMM1 = 0i64;
    __asm { vinsertps xmm1, xmm1, xmm0, 20h ; ' ' }
    v148 = _mm_shuffle_ps(v262, _mm_shuffle_ps(_XMM1, v262, 250), 132);
    v149 = _mm_shuffle_ps(v148, _mm_shuffle_ps(v148, _XMM1, 250), 132);
    _XMM0 = _mm_shuffle_ps(v149, v149, 152);
    __asm { vcvtps2ph xmm2, xmm0, 0 }
    v152 = _mm_shuffle_ps(_mm_shuffle_ps(v128, _XMM2, 0), v128, 232);
    _XMM1.v = (__m128)_R12->emissiveIntensity;
    v154 = _mm_shuffle_ps(_mm_shuffle_ps(v129, _XMM2, 80), v129, 232);
    LODWORD(lightIter.v[0]) = _XMM1.v.m128_i32[0];
    __asm
    {
      vextractps dword ptr [rbp+220h+lightIter+4], xmm1, 1
      vextractps [rbp+220h+var_138], xmm1, 2
      vcvtps2ph xmm6, xmm3, 0
    }
    v156 = Vec3PackR11G11B10F(&lightIter);
    _XMM1.v.m128_i32[0] = LODWORD(_R12->temperatureScale);
    _XMM2 = 0i64;
    __asm
    {
      vinsertps xmm2, xmm2, dword ptr [r12+3Ch], 0
      vinsertps xmm2, xmm2, [rsp+320h+var_2A4], 220h+var_210
      vcvtps2ph xmm0, xmm2, 0
    }
    outLightmapOffset = v156;
    _mm_shuffle_ps(_XMM6, _XMM6, 85);
    v239 = *(float *)&_XMM0;
    _XMM14 = _XMM6;
    __asm
    {
      vinsertps xmm14, xmm14, xmm0, 10h
      vinsertps xmm14, xmm14, [rsp+320h+outLightmapOffset], 220h+pModuleBase
      vinsertps xmm14, xmm14, [rsp+320h+var_2C4], 220h+var_1F0
    }
    v165 = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, _XMM1.v.m128_f32[0]);
    *(__m128 *)v131->xyz.v = v136;
    v131->color = _XMM14;
    *(__m128 *)&v131->lightingCoord.packed = v154;
    v131->extraData = v165;
    *(__m128 *)v131[1].xyz.v = v135;
    v131[1].color = _XMM14;
    *(__m128 *)&v131[1].lightingCoord.packed = v152;
    v131[1].extraData = v165;
    v166 = v131 + 2;
    LODWORD(lightIter.v[0]) = v165;
    if ( v27 )
    {
      v167 = packedAtlasParams.v;
      p_lightingCoord = (__m128 *)&v166->lightingCoord;
      v169 = 1;
      p_color = &v166->color;
      v171 = vertIndexOffset + 1;
      do
      {
        v173 = 0i64;
        v173.m128_f32[0] = (float)v169;
        v172 = v173;
        if ( v169 == v27 )
        {
          v174 = (__m128)v250;
        }
        else
        {
          v173.m128_f32[0] = v173.m128_f32[0] / v251;
          v174 = v173;
        }
        v175 = pModuleBase;
        rParticleStateData->m_particleState.m_moduleGraphLengthData.lengthFraction = v174.m128_f32[0];
        if ( v175 )
        {
          ParticleModuleColorGraph::Update(v175, &rParticleStateData->m_particleData, 0, vertCount, outAtlasCoords.dv, pEmitterOwnera, &rParticleStateData->m_particleState);
          _XMM0.v = (__m128)rParticleStateData->m_particleState.m_moduleGraphLengthData.color;
          __asm { vcvtps2ph xmm6, xmm0, 0 }
          _XMM1.v = (__m128)drawData->emissiveIntensity;
          packedAtlasParams.v.m128_i32[0] = _XMM1.v.m128_i32[0];
          __asm
          {
            vextractps dword ptr [rbp+220h+packedAtlasParams.v+4], xmm1, 1
            vextractps dword ptr [rbp+220h+packedAtlasParams.v+8], xmm1, 2
          }
          LODWORD(v252) = Vec3PackR11G11B10F((const vec3_t *)&packedAtlasParams);
          _XMM2 = 0i64;
          _XMM14 = _XMM6;
          __asm
          {
            vinsertps xmm2, xmm2, dword ptr [rax+3Ch], 0
            vinsertps xmm2, xmm2, [rsp+320h+var_2A4], 220h+var_210
            vcvtps2ph xmm0, xmm2, 0
          }
          _mm_shuffle_ps(_XMM6, _XMM6, 85);
          __asm
          {
            vinsertps xmm14, xmm14, xmm0, 10h
            vinsertps xmm14, xmm14, dword ptr [rbp+220h+var_288], 220h+pModuleBase
          }
          v239 = *(float *)&_XMM0;
          __asm { vinsertps xmm14, xmm14, [rsp+320h+var_2C4], 220h+var_1F0 }
        }
        v186 = indices;
        LOWORD(outLightmapOffset) = v171 - 1;
        HIWORD(outLightmapOffset) = v171;
        *indices = (r_double_index_t)outLightmapOffset;
        LOWORD(outLightmapOffset) = v171 + 1;
        HIWORD(outLightmapOffset) = v171 + 1;
        v186[1] = (r_double_index_t)outLightmapOffset;
        LOWORD(outLightmapOffset) = v171;
        v171 += 2;
        HIWORD(outLightmapOffset) = v171;
        v186[2] = (r_double_index_t)outLightmapOffset;
        indices = v186 + 3;
        v187 = m_useCurvePoints;
        if ( m_useCurvePoints )
        {
          v189 = (__m128)LODWORD(FLOAT_1_0);
          v189.m128_f32[0] = 1.0 - v174.m128_f32[0];
          v188 = v189;
          v190 = v174;
          v190.m128_f32[0] = v174.m128_f32[0] * v174.m128_f32[0];
          v191 = _mm_shuffle_ps(v188, v188, 0);
          v192 = _mm128_mul_ps(_mm128_mul_ps(_mm_shuffle_ps(v190, v190, 0), v191), _mm128_mul_ps((__m128)_xmm, v276.v));
          v193 = v174;
          v193.m128_f32[0] = v174.m128_f32[0] * (float)(v174.m128_f32[0] * v174.m128_f32[0]);
          v194 = _mm128_mul_ps(v191, v191);
          v195 = _mm128_mul_ps(v194, v191);
          v196 = _mm128_mul_ps(_mm_shuffle_ps(v174, v174, 0), v194);
          v197 = v265;
          v198 = v266;
          v199 = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(v192, _mm128_mul_ps(_mm_shuffle_ps(v193, v193, 0), outEndPos.v)), _mm128_mul_ps(v196, _mm128_mul_ps((__m128)_xmm, outCurvePoint1.v))), _mm128_mul_ps(v195, outStartPos.v));
          v200 = _mm128_sub_ps(v199, v);
          v201 = _mm128_add_ps(v199, v);
          v63 = _mm_shuffle_ps(v200, _mm_shuffle_ps(v200, v265, 250), 132);
          v64 = _mm_shuffle_ps(v201, _mm_shuffle_ps(v201, v266, 250), 132);
        }
        else
        {
          v197 = v265;
          v198 = v266;
        }
        v202 = v258;
        if ( v258 )
        {
          if ( v253 > 0.0 )
          {
            if ( v169 == v27 )
            {
              v203 = v270.m128_f32[0];
            }
            else
            {
              v204 = (float)v169;
              v203 = v204 * *(float *)&v257.pModule[1].m_flags;
              v187 = m_useCurvePoints;
            }
            _XMM1 = 0i64;
            __asm { vroundss xmm3, xmm1, xmm2, 1 }
            rParticleStateData->m_particleState.m_moduleGraphLengthData.lengthFraction = (float)(v203 / v253) - *(float *)&_XMM3;
          }
          if ( !v187 )
          {
            if ( v169 == v27 )
            {
              v207 = 0i64;
              v207.m128_f32[0] = (float)(v169 - 1);
              v207.m128_f32[0] = v207.m128_f32[0] + v246;
              v208 = v207;
              v202 = v258;
            }
            else
            {
              v208 = v172;
            }
            v209 = _mm128_mul_ps(_mm_shuffle_ps(v208, v208, 0), currLookAt.v);
            v63 = _mm128_add_ps(v209, v197);
            v64 = _mm128_add_ps(v209, v198);
          }
          dv = outAtlasCoords.dv;
          ParticleModulePositionGraph::Update(v202, &rParticleStateData->m_particleData, 0, vertCount, outAtlasCoords.dv, pEmitterOwnera, &rParticleStateData->m_particleState);
          v211 = rParticleStateData->m_particleState.m_moduleGraphLengthData.position.v.m128_f32[1];
          if ( v211 > 0.0 )
          {
            v212 = vertCount;
            v213 = v258;
            _XMM1 = 0i64;
            __asm { vroundss xmm3, xmm1, xmm2, 1 }
            outCurvePoint2 = pEmitterOwnera;
            rParticleStateData->m_particleState.m_moduleGraphLengthData.lengthFraction = (float)(m_beamSpiralGraphOffset + rParticleStateData->m_particleState.m_moduleGraphLengthData.lengthFraction) - *(float *)&_XMM3;
            ParticleModulePositionGraph::Update(v213, &rParticleStateData->m_particleData, 0, v212, dv, outCurvePoint2, &rParticleStateData->m_particleState);
            v216.v = (__m128)rParticleStateData->m_particleState.m_moduleGraphLengthData.position;
            v217 = v216.v;
            v217.m128_f32[0] = v216.v.m128_f32[0] * v211;
            v218 = _mm128_mul_ps(_mm_shuffle_ps(v217, v217, 0), v267.v);
            v219 = _mm_shuffle_ps(v216.v, v216.v, 170);
            v219.m128_f32[0] = v219.m128_f32[0] * v211;
            v220 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v219, v219, 0), cameraPos.v), v218);
            v63 = _mm128_add_ps(v220, v63);
            v64 = _mm128_add_ps(v220, v64);
          }
        }
        else if ( !m_useCurvePoints )
        {
          if ( v169 == v27 )
          {
            v63 = _mm128_add_ps(v135, v268);
            v64 = _mm128_add_ps(v136, v268);
          }
          else
          {
            v63 = _mm128_add_ps(v135, currLookAt.v);
            v64 = _mm128_add_ps(v136, currLookAt.v);
          }
        }
        _XMM3 = 0i64;
        if ( (_BYTE)v238 )
        {
          _XMM0 = v169;
          __asm { vpcmpeqd xmm2, xmm0, xmm1 }
          _XMM0 = LODWORD(FLOAT_1_0);
          __asm
          {
            vblendvps xmm0, xmm0, xmm1, xmm2
            vinsertps xmm3, xmm3, xmm2, 20h ; ' '
          }
        }
        else
        {
          __asm { vinsertps xmm3, xmm3, xmm1, 20h ; ' ' }
        }
        v223 = _mm_shuffle_ps(v262, _mm_shuffle_ps(_XMM3, v262, 250), 132);
        v228 = v255;
        v229 = lightIter.v[0];
        ++v169;
        *(__m128 *)v166->xyz.v = v64;
        *p_color = _XMM14;
        v230 = _mm_shuffle_ps(v223, _mm_shuffle_ps(v223, _XMM3, 250), 132);
        _XMM0 = _mm_shuffle_ps(v230, v230, 152);
        __asm { vcvtps2ph xmm2, xmm0, 0 }
        v233 = _mm_shuffle_ps(_mm_shuffle_ps(v228, _XMM2, 80), v228, 232);
        *p_lightingCoord = v233;
        *(float *)&v166->extraData = v229;
        *(__m128 *)v166[1].xyz.v = v63;
        p_color[3] = _XMM14;
        v167 = _mm_shuffle_ps(_mm_shuffle_ps(v167, _XMM2, 0), v167, 232);
        p_lightingCoord[3] = v167;
        *(float *)&v166[1].extraData = v229;
        p_color += 6;
        v166 += 2;
        p_lightingCoord += 6;
        v255 = v233;
        v135 = v63;
        v136 = v64;
      }
      while ( v169 - 1 < v27 );
    }
    rParticleStateData->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[0] = 0i64;
    rParticleStateData->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[1] = 0i64;
    rParticleStateData->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[0] = 0i64;
    rParticleStateData->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[1] = 0i64;
    *(_QWORD *)&rParticleStateData->m_particleState.m_moduleGraphLengthData.useLength = 0i64;
    *(_QWORD *)rParticleStateData->m_particleState.m_moduleGraphLengthData.pad = 0i64;
  }
}

/*
==============
FX_CalculateLightmapLevel
==============
*/
__int64 FX_CalculateLightmapLevel(const FxCamera *camera, const float4 *worldPos, const float4 *width, const float4 *height)
{
  float v4; 
  __int64 result; 
  __m128 v9; 
  float v10; 
  __m128 v14; 
  signed int v23; 
  DvarValue *p_current; 
  unsigned int v25; 
  __m128 v26; 

  v4 = camera->origin.v[0];
  __asm
  {
    vbroadcastss xmm3, dword ptr [rcx+0A4h]
    vbroadcastss xmm6, dword ptr [rcx+0C0h]
  }
  result = 0i64;
  v26.m128_i32[3] = 0;
  v9 = v26;
  v9.m128_f32[0] = v4;
  _XMM5 = v9;
  v10 = camera->axis.m[0].v[0];
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rcx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rcx+8], 20h ; ' '
  }
  v26 = _XMM5;
  v26.m128_i32[3] = 0;
  v14 = v26;
  v14.m128_f32[0] = v10;
  _XMM4 = v14;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rcx+74h], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+78h], 20h ; ' '
  }
  _XMM2 = _mm128_mul_ps(_XMM4, _mm128_sub_ps(worldPos->v, _XMM5));
  __asm
  {
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
  }
  _XMM0 = width->v;
  __asm
  {
    vhaddps xmm2, xmm1, xmm1
    vmaxps  xmm1, xmm0, xmmword ptr [r9]
  }
  v23 = (int)_mm128_mul_ps(_XMM6, _mm128_div_ps(_XMM1, _mm128_mul_ps(_XMM3, _XMM2))).m128_f32[0];
  if ( v23 > 0 )
  {
    p_current = (DvarValue *)&v25;
    v25 = 31 - __lzcnt(v23);
    if ( v25 >= fx_lightmap_max_level->current.integer )
      p_current = &fx_lightmap_max_level->current;
    result = ui_fx_lightmap_max_level->current.unsignedInt;
    if ( p_current->integer < (unsigned int)result )
      return p_current->unsignedInt;
  }
  return result;
}

/*
==============
FX_CalculateParticleSimColor
==============
*/
char FX_CalculateParticleSimColor(ParticleData *pParticleData, const ParticleModuleColorGraph *pModuleColorGraph, const ParticleModuleColorLerp *pModuleColorLerp, const ParticleEmitter *pParticleEmitter, const ParticleState *pParticleState, float dt, float4 *color)
{
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2002, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pModuleColorGraph || (pModuleColorGraph->m_flags & 4) != 0 )
  {
    if ( !pModuleColorLerp || (pModuleColorLerp->m_flags & 4) != 0 )
    {
      return 0;
    }
    else
    {
      ParticleModuleColorLerp::Update(pModuleColorLerp, pParticleData, 0, pParticleData->m_particleCountRunning, dt, pParticleEmitter, pParticleState);
      *color = (float4)Particle_GetColorArray(pParticleData)->v;
      return 1;
    }
  }
  else
  {
    ParticleModuleColorGraph::Update(pModuleColorGraph, pParticleData, 0, pParticleData->m_particleCountRunning, dt, pParticleEmitter, pParticleState);
    *color = (float4)Particle_GetColorArray(pParticleData)->v;
    return 1;
  }
}

/*
==============
FX_CalculateParticleSimSize
==============
*/
char FX_CalculateParticleSimSize(ParticleData *pParticleData, const ParticleModuleSizeGraph *pModuleSizeGraph, const ParticleModuleSizeLerp *pModuleSizeLerp, const ParticleEmitter *pParticleEmitter, const ParticleState *pParticleState, float dt, float4 *size)
{
  if ( !pModuleSizeGraph || (pModuleSizeGraph->m_flags & 4) != 0 )
  {
    if ( !pModuleSizeLerp || (pModuleSizeLerp->m_flags & 4) != 0 )
    {
      return 0;
    }
    else
    {
      ParticleModuleSizeLerp::Update(pModuleSizeLerp, pParticleData, 0, pParticleData->m_particleCountRunning, dt, pParticleEmitter, pParticleState);
      *size = (float4)Particle_GetSizeArray(pParticleData)->v;
      return 1;
    }
  }
  else
  {
    ParticleModuleSizeGraph::Update(pModuleSizeGraph, pParticleData, 0, pParticleData->m_particleCountRunning, dt, pParticleEmitter, pParticleState);
    *size = (float4)Particle_GetSizeArray(pParticleData)->v;
    return 1;
  }
}

/*
==============
FX_CompareParticleDistance
==============
*/
bool FX_CompareParticleDistance(const FxParticleSimAnimationSortInfo *a, const FxParticleSimAnimationSortInfo *b)
{
  return b->distanceSquared < a->distanceSquared;
}

/*
==============
FX_DrawParticleSimAnimationModels
==============
*/
void FX_DrawParticleSimAnimationModels(const ParticleState *pParticleState, ParticleEmitter *pParticleEmitter, FxParticleSimAnimation *particleSimAnimation, const float4 *color, const float4 *posWorld, const float4 *particleSimRotationAngles, const vector4 *rParticleSimTransform, const ParticleModuleInitParticleSim *pModuleInitParticleSim, float scale, float time, int randomSeed)
{
  unsigned int v11; 
  int v15; 
  const ParticleLinkedAssetListDef *pModule; 
  bool v17; 
  float v18; 
  __m128 v19; 
  const ParticleLinkedAssetListDef *v20; 
  const float4 *v21; 
  const XModel *model; 
  float v23; 
  int v26; 
  float v27; 
  float4 *frames; 
  __m128 v; 
  ParticleData *m_pParticleSimUpdateParticleData; 
  __m128 v31; 
  ParticleModuleGroupDef *moduleGroupDefs; 
  const ParticleModuleSizeLerp *v33; 
  float4 *v34; 
  __int64 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v39; 
  __m128 v42; 
  __m128 v45; 
  const float4 *v48; 
  float4 *v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v53; 
  __m128 v57; 
  float v60; 
  const char *VFXName; 
  float width; 
  float v63; 
  __m128 v64; 
  float *LifeArray; 
  int *RandomSeedArray; 
  float lifetime; 
  __int64 v68; 
  int v69; 
  unsigned int v70; 
  __int64 dt; 
  float4 *colora; 
  char v73; 
  int v74; 
  unsigned int renderFlags; 
  FxParticleSimAnimationParticleData *v76; 
  unsigned int v77; 
  float4 *v79; 
  int numAssets; 
  bool v81; 
  ParticleModuleColorLerp *pModuleColorLerp; 
  ParticleModuleColorGraph *pModuleColorGraph; 
  ParticleModuleSizeLerp *pModuleSizeLerp; 
  ParticleModuleSizeGraph *pModuleSizeGraph; 
  float4 v87; 
  float4 size; 
  float4 packedColorAndEmissive; 
  FxParticleSimAnimationInterpolatedData interpolatedData; 
  __m128 v91; 
  __m128 v92; 
  GfxScaledPlacement placement; 

  v11 = 0;
  pModuleColorGraph = NULL;
  pModuleColorLerp = NULL;
  pModuleSizeGraph = NULL;
  pModuleSizeLerp = NULL;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2396, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pModuleInitParticleSim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2397, ASSERT_TYPE_ASSERT, "(pModuleInitParticleSim)", (const char *)&queryFormat, "pModuleInitParticleSim") )
    __debugbreak();
  if ( !particleSimAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2398, ASSERT_TYPE_ASSERT, "(particleSimAnimation)", (const char *)&queryFormat, "particleSimAnimation") )
    __debugbreak();
  if ( !pParticleEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2399, ASSERT_TYPE_ASSERT, "(pParticleEmitter)", (const char *)&queryFormat, "pParticleEmitter") )
    __debugbreak();
  v15 = 3080;
  pModule = (const ParticleLinkedAssetListDef *)pParticleState->m_elementTypeModule.pModule;
  if ( fx_models_shadows_thermal->current.enabled )
    v15 = 0;
  renderFlags = v15;
  v17 = (pParticleState->m_pStateDef->flags & 0x100000) != 0;
  v81 = v17;
  v18 = fx_randomTable[randomSeed + 43];
  v19 = (__m128)LODWORD(FLOAT_1_0);
  v19.m128_f32[0] = (float)((float)(1.0 - v18) * pModuleInitParticleSim->m_scaleFactor.min) + (float)(v18 * pModuleInitParticleSim->m_scaleFactor.max);
  if ( !pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2406, ASSERT_TYPE_ASSERT, "(pModuleInitModel)", (const char *)&queryFormat, "pModuleInitModel") )
    __debugbreak();
  if ( ParticleEmitter::ShouldDrawWithViewModel(pParticleEmitter, pParticleState) )
    renderFlags |= 1u;
  v20 = pModule + 1;
  Particle_VerifyAssetList(pModule + 1);
  numAssets = pModule[1].numAssets;
  if ( numAssets == 1 )
  {
    Particle_VerifyAssetList(pModule + 1);
    model = v20->assetList->model;
    if ( !model )
      return;
  }
  else
  {
    model = NULL;
  }
  if ( time < particleSimAnimation->header.duration )
  {
    v23 = time * particleSimAnimation->header.playbackRate;
  }
  else
  {
    if ( !pModuleInitParticleSim->m_holdLastFrame )
      return;
    v23 = (float)(particleSimAnimation->header.frameCount - 1);
  }
  if ( v23 != -1.0 )
  {
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm2, 1 }
    v26 = (int)v23;
    v74 = (int)v23;
    v27 = v23 - *(float *)&_XMM3;
    if ( (int)v23 >= particleSimAnimation->header.frameCount )
    {
      LODWORD(dt) = (int)v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2435, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( particleSimAnimation->header.frameCount )", "frameIndex doesn't index particleSimAnimation->header.frameCount\n\t%i not in [0, %i)", dt, particleSimAnimation->header.frameCount) )
        __debugbreak();
    }
    frames = (float4 *)particleSimAnimation->frames;
    v79 = frames;
    if ( frames->v.m128_i32[2 * v26 + 1] )
    {
      v = particleSimRotationAngles->v;
      Float4RadianToQuat(frames, v21);
      m_pParticleSimUpdateParticleData = pParticleState->m_pParticleSimUpdateParticleData;
      v31 = v;
      if ( particleSimAnimation->header.evalVisStatePerParticle && m_pParticleSimUpdateParticleData )
      {
        v73 = 1;
        if ( !pParticleEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1983, ASSERT_TYPE_ASSERT, "(pParticleEmitter)", (const char *)&queryFormat, "pParticleEmitter") )
          __debugbreak();
        moduleGroupDefs = pParticleState->m_pStateDef->moduleGroupDefs;
        pModuleColorGraph = (ParticleModuleColorGraph *)ParticleModule::FindModule<ParticleModuleColorGraph>(moduleGroupDefs, PARTICLE_MODULE_COLOR_GRAPH, 0xFFFFFFFF);
        pModuleColorLerp = (ParticleModuleColorLerp *)ParticleModule::FindModule<ParticleModuleColorLerp>(moduleGroupDefs, PARTICLE_MODULE_COLOR_LERP, 0xFFFFFFFF);
        pModuleSizeGraph = (ParticleModuleSizeGraph *)ParticleModule::FindModule<ParticleModuleSizeGraph>(moduleGroupDefs, PARTICLE_MODULE_SIZE_GRAPH, 0xFFFFFFFF);
        v33 = ParticleModule::FindModule<ParticleModuleSizeLerp>(moduleGroupDefs, PARTICLE_MODULE_SIZE_LERP, 0xFFFFFFFF);
        v17 = v81;
        pModuleSizeLerp = (ParticleModuleSizeLerp *)v33;
      }
      else
      {
        v73 = 0;
      }
      v34 = v79;
      v35 = v74;
      if ( v79->v.m128_i32[2 * v74 + 1] )
      {
        v36 = _mm_shuffle_ps(v19, v19, 0);
        do
        {
          v76 = &particleSimAnimation->particleData[v11 + v34->v.m128_i32[2 * v35]];
          FX_InterpolateParticleSimAnimationData(particleSimAnimation, v76, v27, &interpolatedData);
          FX_InterpolateParticleSimAnimationDataOrientation3D(particleSimAnimation, &particleSimAnimation->particleDataOrientation3D[v11 + v79->v.m128_i32[2 * v74]], v27, &interpolatedData);
          v37 = posWorld->v;
          v91.m128_i32[3] = 0;
          v39 = v91;
          v39.m128_f32[0] = interpolatedData.position.v[0];
          _XMM2 = v39;
          __asm
          {
            vinsertps xmm2, xmm2, dword ptr [rbp+140h+interpolatedData.position+4], 10h
            vinsertps xmm2, xmm2, dword ptr [rbp+140h+interpolatedData.position+8], 20h
          }
          v42 = _mm128_mul_ps(v36, _XMM2);
          v91 = _XMM2;
          _XMM9 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v42, v42, 85), rParticleSimTransform->y.v), g_negativeZero.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v42, v42, 170), rParticleSimTransform->z.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v42, v42, 0), rParticleSimTransform->x.v), g_negativeZero.v))) & *(_OWORD *)&g_keepXYZ.v), v37);
          v92.m128_i32[3] = 0;
          v45 = v92;
          v45.m128_f32[0] = interpolatedData.orientation.v[0];
          _XMM0 = v45;
          __asm
          {
            vinsertps xmm0, xmm0, dword ptr [rbp+140h+interpolatedData.orientation+4], 10h
            vinsertps xmm0, xmm0, dword ptr [rbp+140h+interpolatedData.orientation+8], 20h
          }
          v92 = _XMM0;
          Float4RadianToQuat(v49, v48);
          v50 = _XMM0;
          v51 = _mm_shuffle_ps(_XMM0, _XMM0, 255);
          _XMM2 = _mm128_mul_ps(v31, _XMM0);
          v53 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v31, v31, 201), _mm_shuffle_ps(_XMM0, _XMM0, 210)), _mm128_mul_ps(_mm_shuffle_ps(v31, v31, 210), _mm_shuffle_ps(_XMM0, _XMM0, 201)));
          __asm
          {
            vinsertps xmm0, xmm2, xmm2, 8
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
          }
          v57 = _mm_shuffle_ps(v31, v31, 255);
          _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v51, v57), _XMM2);
          _mm128_add_ps(v53, _mm128_add_ps(_mm128_mul_ps(v31, v51), _mm128_mul_ps(v50, v57)));
          __asm { vblendps xmm4, xmm2, xmm0, 7 }
          *(float *)&_XMM0 = _mm_shuffle_ps((__m128)_XMM4, (__m128)_XMM4, 85).m128_f32[0];
          *(float *)&_XMM1 = _mm_shuffle_ps((__m128)_XMM4, (__m128)_XMM4, 170).m128_f32[0];
          placement.base.quat = _XMM4;
          v60 = (float)((float)(_XMM4.v[0] * _XMM4.v[0]) + (float)(*(float *)&_XMM0 * *(float *)&_XMM0)) + (float)(*(float *)&_XMM1 * *(float *)&_XMM1);
          _XMM4.v[0] = _mm_shuffle_ps((__m128)_XMM4, (__m128)_XMM4, 255).m128_f32[0];
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v60 + (float)(_XMM4.v[0] * _XMM4.v[0])) - 1.0) & _xmm) >= 0.0020000001 )
          {
            VFXName = ParticleState::GetVFXName((ParticleState *)pParticleState);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2467, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( placement.base.quat ))", "%s\n\tVFX ERROR: Unnormalized quat when using particle sim models: %s\n", "Vec4IsNormalized( placement.base.quat )", VFXName) )
              __debugbreak();
          }
          placement.base.origin.v[0] = _XMM9.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rbp+140h+placement.base.origin+4], xmm9, 1
            vextractps dword ptr [rbp+140h+placement.base.origin+8], xmm9, 2
          }
          width = interpolatedData.width;
          placement.scale = interpolatedData.width * scale;
          v63 = scale;
          v77 = (randomSeed + 10111 * (unsigned int)(unsigned __int8)v76->particleID) % 0x3FE9;
          v64 = color->v;
          v87.v = color->v;
          if ( v73 )
          {
            LifeArray = Particle_GetLifeArray(m_pParticleSimUpdateParticleData);
            RandomSeedArray = Particle_GetRandomSeedArray(m_pParticleSimUpdateParticleData);
            lifetime = interpolatedData.lifetime;
            *LifeArray = interpolatedData.lifetime;
            v17 = v81;
            *RandomSeedArray = v77;
            if ( v81 )
            {
              FX_CalculateParticleSimColor(m_pParticleSimUpdateParticleData, pModuleColorGraph, pModuleColorLerp, pParticleEmitter, pParticleState, lifetime, &v87);
              v64 = v87.v;
            }
            if ( FX_CalculateParticleSimSize(m_pParticleSimUpdateParticleData, pModuleSizeGraph, pModuleSizeLerp, pParticleEmitter, pParticleState, lifetime, &size) )
              v63 = size.v.m128_f32[0];
          }
          placement.scale = v63 * width;
          if ( (float)(v63 * width) != 0.0 )
          {
            if ( numAssets != 1 )
            {
              if ( particleSimAnimation->header.hasIndex )
              {
                FX_InterpolateParticleSimAnimationDataIndex(particleSimAnimation, &particleSimAnimation->particleDataIndex[v11 + v79->v.m128_i32[2 * v74]], v27, &interpolatedData);
                Particle_VerifyAssetList(v20);
                v68 = interpolatedData.index % v20->numAssets;
              }
              else
              {
                Particle_VerifyAssetList(v20);
                v69 = v20->numAssets;
                if ( v69 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlerandom.h", 74, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
                  __debugbreak();
                v70 = abs32((v69 * LOWORD(fx_randomTable[v77 + 22])) >> 16);
                if ( v70 >= v69 )
                {
                  LODWORD(colora) = v69;
                  LODWORD(dt) = v70;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlerandom.h", 78, ASSERT_TYPE_ASSERT, "(unsigned)( randomIndex ) < (unsigned)( count )", "randomIndex doesn't index count\n\t%i not in [0, %i)", dt, colora) )
                    __debugbreak();
                }
                v68 = (int)v70;
                v17 = v81;
              }
              model = v20->assetList[v68].model;
              if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2515, ASSERT_TYPE_ASSERT, "(pModel)", (const char *)&queryFormat, "pModel") )
                __debugbreak();
            }
            if ( v17 )
              packedColorAndEmissive.v = _mm128_mul_ps(v64, (__m128)interpolatedData.color);
            ParticleEmitter::AddModelToScene(pParticleEmitter, model, &placement, &packedColorAndEmissive, v17, renderFlags);
          }
          ++v11;
          v34 = v79;
          v35 = v74;
        }
        while ( v11 < v79->v.m128_i32[2 * v74 + 1] );
      }
    }
  }
}

/*
==============
FX_GenFlareVerts
==============
*/
void FX_GenFlareVerts(FxDrawState *draw, const vec3_t *clipPos, const vec2_t *du, const vec2_t *dv, Material *pMaterial, const Particle_DrawData *r_drawData, const ParticleState *pParticleState, unsigned int perFrameActiveEmitterIndex)
{
  unsigned __int16 vertIndexOffset; 
  r_double_index_t *indices; 
  const ParticleAtlasData *atlasData; 
  __int16 entryCount; 
  float atlasIndex; 
  float v16; 
  GfxSpriteVertex *v19; 
  unsigned int v20; 
  __m128 v; 
  r_double_index_t *v38; 
  r_double_index_t v39; 
  unsigned int vertIndexBase; 
  FxAtlasCoords outAtlasCoords; 
  Material *material; 
  float4 packedAtlasParams; 
  GfxCodeSurfBuffers outBuffers; 

  outAtlasCoords.blendU = 0.0;
  outAtlasCoords.blendV = 0.0;
  material = pMaterial;
  *(_OWORD *)&outAtlasCoords.u = _xmm;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1801, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( R_ReserveFlareSurfBuffers(&outBuffers, draw->flareSurfGlob, 4u, 6u) )
  {
    vertIndexOffset = outBuffers.vertIndexOffset;
    indices = outBuffers.indices;
    vertIndexBase = outBuffers.vertIndexBase;
    FX_GetAtlasCoords(r_drawData, &outAtlasCoords);
    if ( r_drawData->hasAtlas && (atlasData = r_drawData->atlasData, (atlasData->behavior & 0x10) != 0) )
    {
      entryCount = atlasData->entryCount;
      atlasIndex = r_drawData->atlasIndex;
      if ( entryCount )
        v16 = fmodf_0(r_drawData->atlasIndex, 1.0);
      else
        v16 = 0.0;
      FX_PackAtlasParamsAsNorm32W(atlasIndex, v16, entryCount, &packedAtlasParams);
      _XMM0 = packedAtlasParams.v;
      __asm { vpextrd rbx, xmm0, 3 }
    }
    else
    {
      LODWORD(_RBX) = 0;
    }
    FX_PackEffectLightingArgsIntoXYZW(&r_drawData->color, &r_drawData->emissiveIntensity, r_drawData->lightingFrac, &packedAtlasParams);
    v39.value[0] = vertIndexOffset;
    v39.value[1] = vertIndexOffset + 1;
    *indices = v39;
    v39.value[0] = vertIndexOffset + 2;
    v39.value[1] = vertIndexOffset + 2;
    indices[1] = v39;
    v39.value[0] = vertIndexOffset + 3;
    v39.value[1] = vertIndexOffset;
    indices[2] = v39;
    v19 = R_FlareSurfVertIter_Begin(draw->flareSurfGlob, vertIndexBase + vertIndexOffset);
    v19->xyz.v[0] = du->v[0] + clipPos->v[0];
    v19->xyz.v[1] = clipPos->v[1] + du->v[1];
    v19->xyz.v[2] = 1.0;
    v19->normal.packed = 0;
    v19->tangentBinormalSign.packed = _RBX;
    v20 = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, 0.0);
    v = packedAtlasParams.v;
    v19->extraData = v20;
    _XMM1 = 0i64;
    __asm
    {
      vinsertps xmm1, xmm1, xmm7, 0
      vinsertps xmm1, xmm1, xmm9, 10h
      vcvtps2ph xmm0, xmm1, 0
    }
    v19->texCoord.packed = _XMM0;
    v19->color = (vec4_t)v;
    v19[1].xyz.v[0] = clipPos->v[0] - dv->v[0];
    v19[1].xyz.v[1] = clipPos->v[1] - dv->v[1];
    v19[1].xyz.v[2] = 1.0;
    v19[1].normal.packed = 0;
    v19[1].tangentBinormalSign.packed = _RBX;
    v19[1].extraData = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, 0.0);
    _XMM1 = 0i64;
    __asm
    {
      vinsertps xmm1, xmm1, xmm7, 0
      vinsertps xmm1, xmm1, xmm6, 10h
      vcvtps2ph xmm0, xmm1, 0
    }
    v19[1].texCoord.packed = _XMM0;
    v19[1].color = (vec4_t)v;
    v19[2].xyz.v[0] = clipPos->v[0] - du->v[0];
    v19[2].xyz.v[1] = clipPos->v[1] - du->v[1];
    v19[2].normal.packed = 0;
    v19[2].tangentBinormalSign.packed = _RBX;
    v19[2].extraData = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, 0.0);
    v19[2].xyz.v[2] = 1.0;
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, xmm10, 0
      vinsertps xmm0, xmm0, xmm6, 10h
      vcvtps2ph xmm0, xmm0, 0
    }
    v19[2].texCoord.packed = _XMM0;
    v19[2].color = (vec4_t)v;
    v19[3].xyz.v[0] = dv->v[0] + clipPos->v[0];
    v19[3].xyz.v[1] = clipPos->v[1] + dv->v[1];
    v19[3].normal.packed = 0;
    v19[3].tangentBinormalSign.packed = _RBX;
    v19[3].extraData = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, 0.0);
    _XMM0 = 0i64;
    __asm { vinsertps xmm0, xmm0, xmm10, 0 }
    v19[3].xyz.v[2] = 1.0;
    __asm
    {
      vinsertps xmm0, xmm0, xmm9, 10h
      vcvtps2ph xmm0, xmm0, 0
    }
    v19[3].texCoord.packed = _XMM0;
    v19[3].color = (vec4_t)v;
    v38 = R_FlareSurfIndexStart(draw->flareSurfGlob);
    R_AddFlareSurf(draw->flareSurfGlob, material, ((char *)indices - (char *)v38) >> 1, 2u, vertIndexBase, 4u);
  }
}

/*
==============
FX_GenParticleSimAnimationVerts
==============
*/
void FX_GenParticleSimAnimationVerts(FxDrawState *draw, const ParticleState *pParticleState, const ParticleEmitter *pParticleEmitter, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, FxParticleSimAnimation *particleSimAnimation, const Particle_DrawData *r_drawData, const vector4 *rParticleSimTransform, const ParticleState::ElementTypeModule *rElementTypeModule, const ParticleModuleInitParticleSim *pModuleInitParticleSim, unsigned int emitterDataIndex)
{
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  float v24; 
  __m128 v25; 
  float v26; 
  unsigned int elementType; 
  __m128 v28; 
  float particleLifeInSecs; 
  __m128 v30; 
  __m128 v31; 
  __m128 particleLifeInSecs_low; 
  unsigned int frameCount; 
  float4 v36; 
  __m128 v37; 
  int v38; 
  FxParticleSimAnimationFrame *frames; 
  __int64 v40; 
  unsigned int numActiveParticles; 
  Material *v42; 
  bool v43; 
  __m128 v50; 
  __m128 v55; 
  ParticleData *m_pParticleSimUpdateParticleData; 
  ParticleModuleGroupDef *moduleGroupDefs; 
  GfxMeshLightingType MeshLightingType; 
  bool v59; 
  unsigned int v65; 
  float v66; 
  r_double_index_t *v67; 
  int v68; 
  __m128 lifetime_low; 
  FxParticleSimAnimationParticleData *v70; 
  __m128 v71; 
  __m128 v74; 
  __m128 v77; 
  __m128 v78; 
  unsigned int v79; 
  float *LifeArray; 
  int *RandomSeedArray; 
  float v82; 
  ParticleEmitter *v83; 
  ParticleModuleColorLerp *v84; 
  ParticleModuleColorGraph *v85; 
  ParticleData *v86; 
  char v87; 
  __m128 v88; 
  float atlasIndex; 
  __m128 v92; 
  __m128 v94; 
  const float4 *v97; 
  float4 *v98; 
  const float4 *v99; 
  vector3 *v100; 
  const vector4 *v101; 
  __m128 v102; 
  __m128 v103; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  __m128 v110; 
  float v111; 
  __m128 v122; 
  __m128 v123; 
  __m128 v124; 
  __m128 v125; 
  __m128 v127; 
  const ParticleModule *pModule; 
  const FxCamera *camera; 
  float v139; 
  float v140; 
  __int128 v141; 
  float v142; 
  __m128 v147; 
  __m128 v153; 
  __m128 v154; 
  __m128 v155; 
  float v156; 
  __m128 v158; 
  __m128 v161; 
  __m128 v162; 
  __m128 v167; 
  __m128 v168; 
  GfxMeshLightingType lightingType; 
  Material *material; 
  float anisotropy; 
  bool IsVolumetric; 
  unsigned int v173; 
  const ParticleAtlasData *atlasData; 
  float v175; 
  const FxCamera *v176; 
  __int64 v177; 
  float v178; 
  float v179; 
  __int64 i; 
  unsigned __int16 v181; 
  unsigned int v182; 
  r_double_index_t *v183; 
  unsigned __int8 codeSurfFlags; 
  GfxCodeSurfGlob *codeSurfGlob; 
  char *fmt; 
  unsigned int *outLightmapOffset; 
  unsigned __int16 vertIndexOffset; 
  r_double_index_t v189; 
  r_double_index_t v190; 
  char v191; 
  float dt; 
  float outLightmapD; 
  float rotation; 
  float outLightmapU; 
  int v196; 
  unsigned int vertIndexBase; 
  float v198; 
  unsigned int v199; 
  float v200; 
  GfxMeshDataLightingInput *lightIter; 
  FxParticleSimAnimationFrame *v202; 
  int randomSeed; 
  unsigned int outPackedAtlasDataOffset; 
  unsigned int v205; 
  ParticleData *pParticleData; 
  ParticleEmitter *pParticleEmittera; 
  vector4 *M1; 
  ParticleModuleColorLerp *pModuleColorLerp; 
  ParticleModuleColorGraph *pModuleColorGraph; 
  ParticleState *pParticleStatea; 
  ParticleModuleSizeLerp *pModuleSizeLerp; 
  ParticleModuleSizeGraph *pModuleSizeGraph; 
  const float4 *v214; 
  const float4 *v215; 
  r_double_index_t *indices; 
  float4 worldPos; 
  float4 bitangenta; 
  float4 tangenta; 
  float4 height; 
  float4 normala; 
  __m128 v222; 
  __m128 v223; 
  float4 width; 
  __m128 v225; 
  __m128 v; 
  GfxCodeSurfArgs codeSurfArgs; 
  GfxCodeSurfBuffers outBuffers; 
  float4 color; 
  float4 size; 
  float4 v231; 
  __m256i v232; 
  vector4 result; 
  vec3_t dir; 
  vec3_t dst; 
  vec3_t point; 
  __m128 v237; 
  __m128 v238; 
  __m128 v239; 
  __m128 v240; 
  FxParticleSimAnimationInterpolatedData interpolatedData; 
  __int128 v242; 
  __int128 v243; 
  __int128 v244; 
  __int128 v245; 
  __int128 v246; 
  __int128 v247; 

  _RDI = particleSimAnimation;
  _RSI = r_drawData;
  outLightmapU = 0.0;
  rotation = 0.0;
  outLightmapD = 0.0;
  v215 = bitangent;
  M1 = (vector4 *)rParticleSimTransform;
  pModuleColorGraph = NULL;
  pModuleColorLerp = NULL;
  pModuleSizeGraph = NULL;
  pModuleSizeLerp = NULL;
  v214 = tangent;
  pParticleEmittera = (ParticleEmitter *)pParticleEmitter;
  pParticleStatea = (ParticleState *)pParticleState;
  result.w = (float4)g_unit.v;
  if ( !pModuleInitParticleSim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2089, ASSERT_TYPE_ASSERT, "(pModuleInitParticleSim)", (const char *)&queryFormat, "pModuleInitParticleSim") )
    __debugbreak();
  if ( !draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2090, ASSERT_TYPE_ASSERT, "(draw)", (const char *)&queryFormat, "draw") )
    __debugbreak();
  if ( !draw->codeSurfGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2091, ASSERT_TYPE_ASSERT, "(draw->codeSurfGlob)", (const char *)&queryFormat, "draw->codeSurfGlob") )
    __debugbreak();
  if ( !particleSimAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2092, ASSERT_TYPE_ASSERT, "(particleSimAnimation)", (const char *)&queryFormat, "particleSimAnimation") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2093, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pParticleEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2094, ASSERT_TYPE_ASSERT, "(pParticleEmitter)", (const char *)&queryFormat, "pParticleEmitter") )
    __debugbreak();
  randomSeed = r_drawData->randomSeed;
  v24 = fx_randomTable[randomSeed + 43];
  v25 = (__m128)LODWORD(FLOAT_1_0);
  v25.m128_f32[0] = (float)(1.0 - v24) * pModuleInitParticleSim->m_scaleFactor.min;
  v26 = v24 * pModuleInitParticleSim->m_scaleFactor.max;
  elementType = pParticleState->m_pStateDef->elementType;
  v199 = elementType;
  v25.m128_f32[0] = v25.m128_f32[0] + v26;
  v28 = v25;
  if ( ((elementType & 0xFFFFFFF5) != 0 || elementType == 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2101, ASSERT_TYPE_ASSERT, "(elementType == PARTICLE_ELEMENT_TYPE_BILLBOARD_SPRITE || elementType == PARTICLE_ELEMENT_TYPE_ORIENTED_SPRITE || elementType == PARTICLE_ELEMENT_TYPE_TAIL)", (const char *)&queryFormat, "elementType == PARTICLE_ELEMENT_TYPE_BILLBOARD_SPRITE || elementType == PARTICLE_ELEMENT_TYPE_ORIENTED_SPRITE || elementType == PARTICLE_ELEMENT_TYPE_TAIL") )
    __debugbreak();
  particleLifeInSecs = r_drawData->particleLifeInSecs;
  if ( particleLifeInSecs < particleSimAnimation->header.duration )
  {
    particleLifeInSecs_low = (__m128)LODWORD(r_drawData->particleLifeInSecs);
    particleLifeInSecs_low.m128_f32[0] = particleLifeInSecs * particleSimAnimation->header.playbackRate;
    v30 = particleLifeInSecs_low;
  }
  else
  {
    if ( !pModuleInitParticleSim->m_holdLastFrame )
      return;
    v31 = 0i64;
    v31.m128_f32[0] = (float)(particleSimAnimation->header.frameCount - 1);
    v30 = v31;
  }
  if ( v30.m128_f32[0] != -1.0 )
  {
    frameCount = particleSimAnimation->header.frameCount;
    _XMM6 = 0i64;
    __asm { vroundss xmm2, xmm6, xmm1, 1 }
    v37 = v30;
    v37.m128_f32[0] = v30.m128_f32[0] - *(float *)&_XMM2;
    v36.v = v37;
    v38 = (int)v30.m128_f32[0];
    v196 = (int)v30.m128_f32[0];
    v200 = v30.m128_f32[0] - *(float *)&_XMM2;
    if ( (int)v30.m128_f32[0] >= frameCount )
    {
      LODWORD(outLightmapOffset) = (int)v30.m128_f32[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2109, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( particleSimAnimation->header.frameCount )", "frameIndex doesn't index particleSimAnimation->header.frameCount\n\t%i not in [0, %i)", outLightmapOffset, frameCount) )
        __debugbreak();
    }
    frames = particleSimAnimation->frames;
    v40 = v38;
    v202 = frames;
    numActiveParticles = frames[v38].numActiveParticles;
    if ( numActiveParticles )
    {
      if ( draw->sprite.indexCount )
      {
        FX_SpriteDirectFlush(draw->codeSurfGlob, &draw->sprite, 0);
        numActiveParticles = frames[v38].numActiveParticles;
      }
      v42 = particleSimAnimation->material;
      v205 = 6 * numActiveParticles;
      if ( FX_AddAtlasDataReserveCodeSurfBuffers(draw, v42, &outPackedAtlasDataOffset, numActiveParticles, &outBuffers) )
      {
        v43 = !particleSimAnimation->header.sortParticlesAtRuntime;
        vertIndexBase = outBuffers.vertIndexBase;
        vertIndexOffset = outBuffers.vertIndexOffset;
        v243 = v17;
        indices = outBuffers.indices;
        v242 = v18;
        if ( !v43 && frames[v38].numActiveParticles > 0x4080 )
        {
          LODWORD(fmt) = frames[v38].numActiveParticles;
          Com_PrintWarning(21, "%s: Particle Sim Animation '%s' contains too many particles to sort at runtime (%d particles, max %zu), disabling sorting.", "FX_GenParticleSimAnimationVerts", particleSimAnimation->name, fmt, 0x4080ui64);
          particleSimAnimation->header.sortParticlesAtRuntime = 0;
        }
        __asm
        {
          vbroadcastss xmm14, dword ptr [rsi+70h]
          vbroadcastss xmm15, dword ptr [rsi+74h]
        }
        v = r_drawData->color.v;
        v246 = v14;
        if ( v199 == 10 )
        {
          _XMM1 = 0i64;
          __asm
          {
            vinsertps xmm1, xmm1, dword ptr [rdi+28h], 0
            vinsertps xmm1, xmm1, dword ptr [rdi+2Ch], 10h
            vinsertps xmm1, xmm1, dword ptr [rdi+30h], 20h ; ' '
          }
          v50 = _mm128_mul_ps(_XMM1, (__m128)_xmm);
          _XMM9 = 0i64;
          __asm
          {
            vinsertps xmm9, xmm9, dword ptr [rdi+1Ch], 0
            vinsertps xmm9, xmm9, dword ptr [rdi+20h], 10h
            vinsertps xmm9, xmm9, dword ptr [rdi+24h], 20h ; ' '
          }
        }
        else
        {
          _XMM9 = v222;
          v50 = v222;
        }
        v43 = !particleSimAnimation->header.evalVisStatePerParticle;
        v223 = v50;
        v225 = _XMM9;
        v247 = v13;
        tangenta.v = v214->v;
        normala.v = normal->v;
        v55 = v215->v;
        m_pParticleSimUpdateParticleData = pParticleState->m_pParticleSimUpdateParticleData;
        pParticleData = m_pParticleSimUpdateParticleData;
        bitangenta.v = v55;
        if ( v43 || !m_pParticleSimUpdateParticleData )
        {
          v191 = 0;
          if ( r_drawData->allowLighting )
          {
            MeshLightingType = GetMeshLightingType(particleSimAnimation->material);
            if ( MeshLightingType != GFX_MESH_LIGHTING_NONE )
            {
              v59 = !Material_IsVolumetric(particleSimAnimation->material);
              if ( R_AllocateCodeSurfLightmap(draw->codeSurfGlob, MeshLightingType, 0, activeLightGridsBitmask, &lightIter, (unsigned int *)&dt, &outLightmapU, &rotation, &outLightmapD) )
              {
                _RAX = lightIter;
                _XMM1.v = (__m128)r_drawData->posWorld;
                lightIter->data0.v[0] = _XMM1.v.m128_f32[0];
                __asm
                {
                  vextractps dword ptr [rax+4], xmm1, 1
                  vextractps dword ptr [rax+8], xmm1, 2
                }
                _XMM1 = 0i64;
                __asm { vinsertps xmm1, xmm1, xmm7, 10h }
                LODWORD(v198) = LOWORD(dt) & 0x3FFF | (LODWORD(dt) >> 2) & 0xFFFC000 | (v59 << 28);
                lightIter->data0.v[3] = v198;
                __asm { vcvtps2ph xmm0, xmm1, 0 }
                lightIter->data1 = (vec4_t)_mm_shuffle_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, _XMM0, 250), 132);
              }
              else
              {
                outLightmapU = 0.0;
                rotation = 0.0;
                outLightmapD = 0.0;
              }
            }
          }
        }
        else
        {
          v191 = 1;
          if ( !pParticleEmittera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1983, ASSERT_TYPE_ASSERT, "(pParticleEmitter)", (const char *)&queryFormat, "pParticleEmitter") )
            __debugbreak();
          moduleGroupDefs = pParticleState->m_pStateDef->moduleGroupDefs;
          pModuleColorGraph = (ParticleModuleColorGraph *)ParticleModule::FindModule<ParticleModuleColorGraph>(moduleGroupDefs, PARTICLE_MODULE_COLOR_GRAPH, 0xFFFFFFFF);
          pModuleColorLerp = (ParticleModuleColorLerp *)ParticleModule::FindModule<ParticleModuleColorLerp>(moduleGroupDefs, PARTICLE_MODULE_COLOR_LERP, 0xFFFFFFFF);
          pModuleSizeGraph = (ParticleModuleSizeGraph *)ParticleModule::FindModule<ParticleModuleSizeGraph>(moduleGroupDefs, PARTICLE_MODULE_SIZE_GRAPH, 0xFFFFFFFF);
          pModuleSizeLerp = (ParticleModuleSizeLerp *)ParticleModule::FindModule<ParticleModuleSizeLerp>(moduleGroupDefs, PARTICLE_MODULE_SIZE_LERP, 0xFFFFFFFF);
        }
        v65 = frames[v40].numActiveParticles;
        v66 = 0.0;
        dt = 0.0;
        v67 = indices;
        if ( v65 )
        {
          v68 = vertIndexOffset;
          lifetime_low = _mm_shuffle_ps(v28, v28, 0);
          v245 = v15;
          v222 = lifetime_low;
          LODWORD(lightIter) = 4 - vertIndexBase;
          v244 = v16;
          while ( 1 )
          {
            v70 = &particleSimAnimation->particleData[LODWORD(v66) + v202[v40].particleDataOffset];
            FX_InterpolateParticleSimAnimationData(particleSimAnimation, v70, v36.v.m128_f32[0], &interpolatedData);
            _XMM7 = g_negativeZero.v;
            v237.m128_i32[3] = 0;
            v74 = v237;
            v74.m128_f32[0] = interpolatedData.position.v[0];
            _XMM2 = v74;
            __asm
            {
              vinsertps xmm2, xmm2, dword ptr [rsp+4B8h+interpolatedData.position+4], 10h
              vinsertps xmm2, xmm2, dword ptr [rsp+4B8h+interpolatedData.position+8], 20h
            }
            v77 = _mm128_mul_ps(lifetime_low, _XMM2);
            v237 = _XMM2;
            v78 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v77, v77, 85), M1->y.v), g_negativeZero.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v77, v77, 170), M1->z.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v77, v77, 0), M1->x.v), g_negativeZero.v))) & *(_OWORD *)&g_keepXYZ.v), r_drawData->posWorld.v);
            v79 = randomSeed + 10111 * (unsigned __int8)v70->particleID;
            worldPos.v = v78;
            LODWORD(v198) = v79 % 0x3FE9;
            if ( v191 )
            {
              LifeArray = Particle_GetLifeArray(pParticleData);
              RandomSeedArray = Particle_GetRandomSeedArray(pParticleData);
              lifetime_low = (__m128)LODWORD(interpolatedData.lifetime);
              v82 = v198;
              v83 = pParticleEmittera;
              v84 = pModuleColorLerp;
              v85 = pModuleColorGraph;
              *LifeArray = interpolatedData.lifetime;
              v86 = pParticleData;
              *(float *)RandomSeedArray = v82;
              if ( FX_CalculateParticleSimColor(v86, v85, v84, v83, pParticleStatea, lifetime_low.m128_f32[0], &color) )
              {
                v = color.v;
                v36.v = (__m128)LODWORD(v200);
              }
              v87 = FX_CalculateParticleSimSize(v86, pModuleSizeGraph, pModuleSizeLerp, pParticleEmittera, pParticleStatea, lifetime_low.m128_f32[0], &size);
              v66 = dt;
              _XMM7 = g_negativeZero.v;
              if ( v87 )
              {
                v88 = size.v;
                _XMM14 = _mm_shuffle_ps(v88, v88, 0);
                _XMM15 = _mm_shuffle_ps(v88, v88, 85);
              }
            }
            atlasIndex = r_drawData->atlasIndex;
            if ( r_drawData->hasAtlas && particleSimAnimation->header.hasIndex )
            {
              FX_InterpolateParticleSimAnimationDataIndex(particleSimAnimation, &particleSimAnimation->particleDataIndex[LODWORD(v66) + v202[v196].particleDataOffset], v36.v.m128_f32[0], &interpolatedData);
              _XMM7 = g_negativeZero.v;
              atlasIndex = (float)interpolatedData.index;
            }
            __asm
            {
              vbroadcastss xmm0, [rsp+4B8h+interpolatedData.width]
              vbroadcastss xmm1, [rsp+4B8h+interpolatedData.height]
            }
            v92 = _mm128_mul_ps(_XMM1, _XMM15);
            width.v = _mm128_mul_ps(_XMM0, _XMM14);
            height.v = v92;
            if ( v199 == 8 )
              break;
            v111 = interpolatedData.orientation.v[2] + r_drawData->rotationAngle;
            if ( v199 == 10 )
            {
              _XMM4 = 0i64;
              _XMM3 = 0i64;
              _YMM5 = *(__m256i *)M1->x.v.m128_f32;
              _mm_cvtepi32_ps((__m128i)v70->zNormalizedPos);
              _mm_cvtepi32_ps((__m128i)v70->yNormalizedPos);
              _mm_cvtepi32_ps((__m128i)v70->xNormalizedPos);
              __asm
              {
                vinsertps xmm4, xmm4, xmm0, 0
                vinsertps xmm4, xmm4, xmm1, 10h
                vinsertps xmm4, xmm4, xmm2, 20h ; ' '
              }
              _mm_cvtepi32_ps((__m128i)v70->zNormalizedPosNextFrame);
              _mm_cvtepi32_ps((__m128i)v70->yNormalizedPosNextFrame);
              _mm_cvtepi32_ps((__m128i)v70->xNormalizedPosNextFrame);
              __asm
              {
                vinsertps xmm3, xmm3, xmm0, 0
                vinsertps xmm3, xmm3, xmm1, 10h
                vinsertps xmm3, xmm3, xmm2, 20h ; ' '
                vbroadcastss xmm1, dword ptr [rdi+10h]
              }
              v122 = _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(_XMM3, v223), _XMM9), _mm128_add_ps(_mm128_mul_ps(_XMM4, v223), _XMM9)), _XMM1);
              v123 = _mm_shuffle_ps(v122, v122, 85);
              v124 = _mm_shuffle_ps(v122, v122, 0);
              v125 = _mm_shuffle_ps(v122, v122, 170);
              __asm { vextractf128 xmm0, ymm5, 1 }
              v127 = _mm128_add_ps((__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_XMM0, v123), _XMM7), _mm128_add_ps(_mm128_mul_ps(lifetime_low, v125), _mm128_add_ps(_mm128_mul_ps(v124, v71), _XMM7))) & *(_OWORD *)&g_keepXYZ.v), r_drawData->velDirWorld.v);
              _XMM0 = g_equalsEpsilon.v;
              __asm
              {
                vandnps xmm2, xmm7, xmm9
                vcmpltps xmm1, xmm0, xmm2
                vmovmskps eax, xmm1
              }
              if ( (_EAX & 0xF) != 0 )
              {
                _XMM0 = _mm128_mul_ps(v127, v127);
                __asm
                {
                  vinsertps xmm1, xmm0, xmm0, 8
                  vhaddps xmm2, xmm1, xmm1
                  vhaddps xmm0, xmm2, xmm2
                }
                _XMM7 = _mm128_div_ps(v127, _mm_sqrt_ps(_XMM0));
              }
              else
              {
                _XMM7 = (__m128)_xmm;
              }
              pModule = rElementTypeModule->pModule;
              if ( BYTE2(rElementTypeModule->pModule[1].m_flags) && (float)(interpolatedData.orientation.v[2] + r_drawData->rotationAngle) != 0.0 )
              {
                camera = draw->camera;
                v139 = camera->origin.v[0] - v78.m128_f32[0];
                v141 = LODWORD(camera->origin.v[1]);
                v140 = camera->origin.v[1] - _mm_shuffle_ps(v78, v78, 85).m128_f32[0];
                v142 = camera->origin.v[2] - _mm_shuffle_ps(v78, v78, 170).m128_f32[0];
                *(float *)&v141 = fsqrt((float)((float)(v140 * v140) + (float)(v139 * v139)) + (float)(v142 * v142));
                _XMM1 = v141;
                __asm
                {
                  vcmpless xmm0, xmm1, cs:__real@80000000
                  vblendvps xmm0, xmm1, xmm2, xmm0
                }
                dir.v[0] = (float)(1.0 / *(float *)&_XMM0) * v139;
                dir.v[2] = (float)(1.0 / *(float *)&_XMM0) * v142;
                point.v[0] = _XMM7.m128_f32[0];
                __asm
                {
                  vextractps dword ptr [rsp+4B8h+point+4], xmm7, 1
                  vextractps dword ptr [rsp+4B8h+point+8], xmm7, 2
                }
                dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * v140;
                RotatePointAroundVector(&dst, &dir, &point, v111 * 57.295776);
                v239.m128_i32[3] = 0;
                pModule = rElementTypeModule->pModule;
                v147 = v239;
                v147.m128_f32[0] = dst.v[0];
                _XMM7 = v147;
                __asm
                {
                  vinsertps xmm7, xmm7, dword ptr [rsp+4B8h+dst+4], 10h
                  vinsertps xmm7, xmm7, dword ptr [rsp+4B8h+dst+8], 20h
                }
                v239 = _XMM7;
                v111 = 0.0;
              }
              if ( BYTE1(pModule[1].m_flags) )
              {
                _XMM0 = _mm128_mul_ps(v127, v127);
                __asm
                {
                  vinsertps xmm1, xmm0, xmm0, 8
                  vhaddps xmm2, xmm1, xmm1
                  vhaddps xmm0, xmm2, xmm2
                }
                v92 = _mm128_mul_ps(_mm_sqrt_ps(_XMM0), v92);
                height.v = v92;
              }
              if ( LOBYTE(pModule[1].m_flags) )
                v153 = _mm128_mul_ps(_mm128_mul_ps(v92, (__m128)_xmm_bf800000bf800000bf800000bf800000), _XMM7);
              else
                v153 = _mm128_mul_ps(v92, _XMM7);
              v78 = _mm128_add_ps(v153, v78);
              v154 = _mm_shuffle_ps(_XMM7, _XMM7, 210);
              v155 = _mm_shuffle_ps(_XMM7, _XMM7, 201);
              v156 = draw->camera->origin.v[0];
              v240.m128_i32[3] = 0;
              v158 = v240;
              v158.m128_f32[0] = v156;
              _XMM3 = v158;
              __asm
              {
                vinsertps xmm3, xmm3, xmm1, 10h
                vinsertps xmm3, xmm3, xmm2, 20h ; ' '
              }
              v161 = _mm128_sub_ps(_XMM3, v78);
              v240 = _XMM3;
              v162 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v161, v161, 210), v155), _mm128_mul_ps(_mm_shuffle_ps(v161, v161, 201), v154));
              _XMM0 = _mm128_mul_ps(v162, v162);
              __asm
              {
                vinsertps xmm1, xmm0, xmm0, 8
                vhaddps xmm2, xmm1, xmm1
                vhaddps xmm0, xmm2, xmm2
              }
              v167 = _mm128_div_ps(v162, _mm_sqrt_ps(_XMM0));
              v110 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v167, v167, 201), v154), _mm128_mul_ps(_mm_shuffle_ps(v167, v167, 210), v155));
              worldPos.v = v78;
              tangenta.v = v167;
              bitangenta.v = _XMM7;
              goto LABEL_77;
            }
LABEL_78:
            v168 = _mm128_mul_ps(v, (__m128)interpolatedData.color);
            if ( v191 )
            {
              if ( !r_drawData->allowLighting || (lightingType = GetMeshLightingType(particleSimAnimation->material), lightingType == GFX_MESH_LIGHTING_NONE) )
              {
                outLightmapU = 0.0;
                rotation = 0.0;
                outLightmapD = 0.0;
              }
              else
              {
                material = particleSimAnimation->material;
                anisotropy = r_drawData->anisotropy;
                IsVolumetric = Material_IsVolumetric(material);
                FX_SetupLighting(draw->codeSurfGlob, draw->camera, &worldPos, &tangenta, &bitangenta, &width, &height, v111, !IsVolumetric, anisotropy, lightingType, activeLightGridsBitmask, material, &outLightmapU, &rotation, &outLightmapD);
                v78 = worldPos.v;
              }
            }
            v173 = v68 + vertIndexBase;
            if ( v68 + vertIndexBase + (unsigned int)lightIter >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2327, ASSERT_TYPE_ASSERT, "(particleVertIndexOffset + vertPerParticle < GFX_CODESURF_VERT_INDEX_MAX)", (const char *)&queryFormat, "particleVertIndexOffset + vertPerParticle < GFX_CODESURF_VERT_INDEX_MAX") )
              __debugbreak();
            atlasData = r_drawData->atlasData;
            v231.v = v168;
            if ( atlasData->entryCount )
              v175 = fmodf_0(atlasIndex, (float)atlasData->entryCount);
            else
              v175 = 0.0;
            FX_SetupParticleQuad(draw->codeSurfGlob, &v231, &r_drawData->emissiveIntensity, r_drawData->lightingFrac, &worldPos, &normala, &tangenta, &bitangenta, &width, &height, v111, outLightmapU, rotation, outLightmapD, v175, v173, emitterDataIndex, outPackedAtlasDataOffset, 0, 0, r_drawData->temperatureScale, particleSimAnimation->material);
            if ( particleSimAnimation->header.sortParticlesAtRuntime )
            {
              v176 = draw->camera;
              v177 = LODWORD(dt);
              v178 = v176->origin.v[1] - _mm_shuffle_ps(v78, v78, 85).m128_f32[0];
              v179 = v176->origin.v[2] - _mm_shuffle_ps(v78, v78, 170).m128_f32[0];
              g_fxParticleSimAnimationSort[LODWORD(dt)].distanceSquared = (float)((float)(v178 * v178) + (float)((float)(v176->origin.v[0] - v78.m128_f32[0]) * (float)(v176->origin.v[0] - v78.m128_f32[0]))) + (float)(v179 * v179);
              g_fxParticleSimAnimationSort[v177].vertIndexOffset = v68;
            }
            else
            {
              *(float *)&v177 = dt;
              v189.value[1] = v68 + 1;
              v189.value[0] = v68;
              *v67 = v189;
              v189.value[0] = v68 + 2;
              v189.value[1] = v68 + 2;
              v67[1] = v189;
              v189.value[0] = v68 + 3;
              v189.value[1] = v68;
              v67[2] = v189;
              v67 += 3;
            }
            LODWORD(v66) = v177 + 1;
            v68 += 4;
            _XMM9 = v225;
            v36.v = (__m128)LODWORD(v200);
            lifetime_low = v222;
            v65 = v202[v196].numActiveParticles;
            v40 = v196;
            dt = v66;
            if ( LODWORD(v66) >= v65 )
            {
              frames = v202;
              goto LABEL_94;
            }
          }
          FX_InterpolateParticleSimAnimationDataOrientation3D(particleSimAnimation, &particleSimAnimation->particleDataOrientation3D[LODWORD(v66) + v202[v196].particleDataOffset], v36.v.m128_f32[0], &interpolatedData);
          v238.m128_i32[3] = 0;
          v94 = v238;
          v94.m128_f32[0] = interpolatedData.orientation.v[0];
          _XMM3 = v94;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rsp+4B8h+interpolatedData.orientation+4], 10h
            vinsertps xmm3, xmm3, dword ptr [rsp+4B8h+interpolatedData.orientation+8], 20h
          }
          v238 = _XMM3;
          Float4RadianToQuat(v98, v97);
          Float4UnitQuatToAxis(v100, v99);
          *(__m128 *)&v232.m256i_u64[2] = _XMM1;
          *(__m128 *)v232.m256i_i8 = _XMM3;
          *(__m256i *)result.x.v.m128_f32 = v232;
          result.z = (float4)v36.v;
          Float4x4Mul(&result, M1, v101);
          v102 = _XMM3;
          v103 = _XMM1;
          v104 = v214->v;
          v105 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _mm_shuffle_ps(v104, v104, 85)), g_negativeZero.v);
          v106 = v215->v;
          tangenta.v = (__m128)(*(_OWORD *)&_mm128_add_ps(v105, _mm128_add_ps(_mm128_mul_ps(v36.v, _mm_shuffle_ps(v104, v104, 170)), _mm128_add_ps(_mm128_mul_ps(v102, _mm_shuffle_ps(v104, v104, 0)), g_negativeZero.v))) & *(_OWORD *)&g_keepXYZ.v);
          v107 = _mm128_add_ps(_mm128_mul_ps(v103, _mm_shuffle_ps(v106, v106, 85)), g_negativeZero.v);
          v108 = _mm128_add_ps(_mm128_mul_ps(v36.v, _mm_shuffle_ps(v106, v106, 170)), _mm128_add_ps(_mm128_mul_ps(v102, _mm_shuffle_ps(v106, v106, 0)), g_negativeZero.v));
          v109 = normal->v;
          bitangenta.v = (__m128)(*(_OWORD *)&_mm128_add_ps(v107, v108) & *(_OWORD *)&g_keepXYZ.v);
          v110 = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v103, _mm_shuffle_ps(v109, v109, 85)), g_negativeZero.v), _mm128_add_ps(_mm128_mul_ps(v36.v, _mm_shuffle_ps(v109, v109, 170)), _mm128_add_ps(_mm128_mul_ps(v102, _mm_shuffle_ps(v109, v109, 0)), g_negativeZero.v))) & *(_OWORD *)&g_keepXYZ.v);
          v111 = 0.0;
LABEL_77:
          normala.v = v110;
          goto LABEL_78;
        }
LABEL_94:
        if ( particleSimAnimation->header.sortParticlesAtRuntime )
        {
          std::_Sort_unchecked<FxParticleSimAnimationSortInfo *,bool (*)(FxParticleSimAnimationSortInfo const &,FxParticleSimAnimationSortInfo const &)>(g_fxParticleSimAnimationSort, &g_fxParticleSimAnimationSort[v65], v65, FX_CompareParticleDistance);
          for ( i = 0i64; (unsigned int)i < frames[v40].numActiveParticles; v67 += 3 )
          {
            v181 = g_fxParticleSimAnimationSort[i].vertIndexOffset;
            i = (unsigned int)(i + 1);
            v190.value[0] = v181;
            v190.value[1] = v181 + 1;
            *v67 = v190;
            v190.value[0] = v181 + 2;
            v190.value[1] = v181 + 2;
            v67[1] = v190;
            v190.value[0] = v181 + 3;
            v190.value[1] = v181;
            v67[2] = v190;
          }
        }
        v182 = v205;
        v183 = indices;
        if ( v67 != (r_double_index_t *)&indices->value[v205] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2358, ASSERT_TYPE_ASSERT, "(&indices[0].value[0] == &baseIndices[0].value[0] + indexCount)", (const char *)&queryFormat, "&indices[0].value[0] == &baseIndices[0].value[0] + indexCount") )
          __debugbreak();
        codeSurfArgs.material = particleSimAnimation->material;
        codeSurfArgs.vertIndexBase = vertIndexBase;
        codeSurfArgs.fxName = r_drawData->vfxName;
        codeSurfFlags = r_drawData->codeSurfFlags;
        *(_QWORD *)&codeSurfArgs.argOffset = 0i64;
        codeSurfArgs.sortOrder = 0;
        codeSurfGlob = draw->codeSurfGlob;
        codeSurfArgs.flags = codeSurfFlags;
        codeSurfArgs.indices = v183;
        codeSurfArgs.indexCount = v182;
        R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
      }
    }
  }
}

/*
==============
FX_GetAtlasCoords
==============
*/
void FX_GetAtlasCoords(const Particle_DrawData *drawData, FxAtlasCoords *outAtlasCoords)
{
  const ParticleAtlasData *atlasData; 
  float atlasIndex; 
  int entryCount; 
  int v6; 
  int v7; 
  int v8; 
  float v9; 
  int t0; 
  float s0; 
  float v12; 

  atlasData = drawData->atlasData;
  atlasIndex = drawData->atlasIndex;
  if ( atlasData->isAtlas )
  {
    entryCount = atlasData->entryCount;
    v6 = entryCount - 1;
    if ( (unsigned int)(entryCount - 1) > 0xFF || (v6 & entryCount) != 0 )
    {
      t0 = atlasData->entryCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 166, ASSERT_TYPE_ASSERT, "( ( atlasCount > 0 && atlasCount <= 256 && IsPowerOf2( atlasCount ) ) )", "( atlasCount ) = %i", t0) )
        __debugbreak();
    }
    v7 = v6 & (int)atlasIndex;
    v8 = 1 << (atlasData->colIndexBits + atlasData->rowIndexBits);
    s0 = 0.0;
    v12 = 0.0;
    if ( v8 != entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 178, ASSERT_TYPE_ASSERT, "(( 1 << ( atlasData.colIndexBits + atlasData.rowIndexBits ) ) == atlasCount)", (const char *)&queryFormat, "( 1 << ( atlasData.colIndexBits + atlasData.rowIndexBits ) ) == atlasCount") )
      __debugbreak();
    TextureAtlas_GetCoords_ByIndex_Pow2Bits(v6 & (v7 + 1), atlasData->colIndexBits, atlasData->rowIndexBits, &s0, &outAtlasCoords->du, &v12, &outAtlasCoords->dv);
    TextureAtlas_GetCoords_ByIndex_Pow2Bits(v7, atlasData->colIndexBits, atlasData->rowIndexBits, &outAtlasCoords->u, &outAtlasCoords->du, &outAtlasCoords->v, &outAtlasCoords->dv);
    v9 = s0 - outAtlasCoords->u;
    outAtlasCoords->blendV = v12 - outAtlasCoords->v;
    outAtlasCoords->blendU = v9;
  }
}

/*
==============
FX_InterpolateParticleSimAnimationData
==============
*/
void FX_InterpolateParticleSimAnimationData(const FxParticleSimAnimation *particleSimAnimation, const FxParticleSimAnimationParticleData *particleData, float frameLerp, FxParticleSimAnimationInterpolatedData *interpolatedData)
{
  vec4_t *v5; 
  vec4_t *v6; 

  interpolatedData->position.v[0] = (float)((float)((float)((float)(_mm_cvtepi32_ps((__m128i)(particleData->xNormalizedPosNextFrame - (unsigned int)particleData->xNormalizedPos)).m128_f32[0] * frameLerp) + _mm_cvtepi32_ps((__m128i)particleData->xNormalizedPos).m128_f32[0]) * 0.000015259022) * particleSimAnimation->header.boundsXDelta) + particleSimAnimation->header.minX;
  interpolatedData->position.v[1] = (float)((float)((float)((float)(_mm_cvtepi32_ps((__m128i)(particleData->yNormalizedPosNextFrame - (unsigned int)particleData->yNormalizedPos)).m128_f32[0] * frameLerp) + _mm_cvtepi32_ps((__m128i)particleData->yNormalizedPos).m128_f32[0]) * 0.000015259022) * particleSimAnimation->header.boundsYDelta) + particleSimAnimation->header.minY;
  interpolatedData->position.v[2] = (float)((float)((float)((float)(_mm_cvtepi32_ps((__m128i)(particleData->zNormalizedPosNextFrame - (unsigned int)particleData->zNormalizedPos)).m128_f32[0] * frameLerp) + _mm_cvtepi32_ps((__m128i)particleData->zNormalizedPos).m128_f32[0]) * 0.000015259022) * particleSimAnimation->header.boundsZDelta) + particleSimAnimation->header.minZ;
  interpolatedData->width = (float)((float)((float)(_mm_cvtepi32_ps((__m128i)(particleData->xNormalizedWidthNextFrame - (unsigned int)particleData->xNormalizedWidth)).m128_f32[0] * frameLerp) + _mm_cvtepi32_ps((__m128i)particleData->xNormalizedWidth).m128_f32[0]) * 0.000015259022) * particleSimAnimation->header.maxWidth;
  interpolatedData->height = (float)((float)((float)(_mm_cvtepi32_ps((__m128i)(particleData->yNormalizedHeightNextFrame - (unsigned int)particleData->yNormalizedHeight)).m128_f32[0] * frameLerp) + _mm_cvtepi32_ps((__m128i)particleData->yNormalizedHeight).m128_f32[0]) * 0.000015259022) * particleSimAnimation->header.maxHeight;
  interpolatedData->orientation.v[2] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)particleData->orientationDelta).m128_f32[0] * 0.000095876727) * frameLerp) + (float)(_mm_cvtepi32_ps((__m128i)particleData->orientation).m128_f32[0] * 0.000095875264);
  interpolatedData->lifetime = (float)(frameLerp / (float)(particleSimAnimation->header.duration * particleSimAnimation->header.playbackRate)) + (float)((float)(_mm_cvtepi32_ps((__m128i)particleData->lifetime).m128_f32[0] * 0.000015259022) * particleSimAnimation->header.duration);
  v5 = &particleSimAnimation->colorTable[particleData->colorTableIndex];
  v6 = &particleSimAnimation->colorTable[particleData->nextColorTableIndex];
  interpolatedData->color.v[0] = (float)((float)(v6->v[0] - v5->v[0]) * frameLerp) + v5->v[0];
  interpolatedData->color.v[1] = (float)((float)(v6->v[1] - v5->v[1]) * frameLerp) + v5->v[1];
  interpolatedData->color.v[2] = (float)((float)(v6->v[2] - v5->v[2]) * frameLerp) + v5->v[2];
  interpolatedData->color.v[3] = (float)((float)(v6->v[3] - v5->v[3]) * frameLerp) + v5->v[3];
}

/*
==============
FX_InterpolateParticleSimAnimationDataIndex
==============
*/
void FX_InterpolateParticleSimAnimationDataIndex(const FxParticleSimAnimation *particleSimAnimation, const FxParticleSimAnimationParticleDataIndex *particleDataIndex, float frameLerp, FxParticleSimAnimationInterpolatedData *interpolatedData)
{
  int nextIndex; 

  if ( particleSimAnimation->particleDataIndex )
  {
    if ( !particleDataIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1969, ASSERT_TYPE_ASSERT, "(particleDataIndex)", (const char *)&queryFormat, "particleDataIndex") )
      __debugbreak();
    if ( frameLerp >= 0.5 )
      nextIndex = particleDataIndex->nextIndex;
    else
      nextIndex = particleDataIndex->index;
    interpolatedData->index = nextIndex;
  }
  else
  {
    interpolatedData->index = 0;
  }
}

/*
==============
FX_InterpolateParticleSimAnimationDataOrientation3D
==============
*/
void FX_InterpolateParticleSimAnimationDataOrientation3D(const FxParticleSimAnimation *particleSimAnimation, const FxParticleSimAnimationParticleDataOrientation3D *particleDataOrientation3D, float frameLerp, FxParticleSimAnimationInterpolatedData *interpolatedData)
{
  if ( particleSimAnimation->particleDataOrientation3D )
  {
    if ( !particleDataOrientation3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1953, ASSERT_TYPE_ASSERT, "(particleDataOrientation3D)", (const char *)&queryFormat, "particleDataOrientation3D") )
      __debugbreak();
    interpolatedData->orientation.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)particleDataOrientation3D->yOrientationDelta).m128_f32[0] * 0.000095876727) * frameLerp) + (float)(_mm_cvtepi32_ps((__m128i)particleDataOrientation3D->yOrientation).m128_f32[0] * 0.000095875264);
    interpolatedData->orientation.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)particleDataOrientation3D->zOrientationDelta).m128_f32[0] * 0.000095876727) * frameLerp) + (float)(_mm_cvtepi32_ps((__m128i)particleDataOrientation3D->zOrientation).m128_f32[0] * 0.000095875264);
  }
  else
  {
    interpolatedData->orientation.v[0] = 0.0;
    interpolatedData->orientation.v[1] = 0;
  }
}

/*
==============
FX_PackAtlasParamsAsNorm32W
==============
*/
void FX_PackAtlasParamsAsNorm32W(const float atlasIndex, const float atlasBlend, const unsigned int atlasEntries, float4 *packedAtlasParams)
{
  __int64 v5; 
  float v6; 
  __int128 v9; 

  v5 = atlasEntries;
  if ( atlasBlend > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 115, ASSERT_TYPE_ASSERT, "(atlasBlend <= 1.0f)", (const char *)&queryFormat, "atlasBlend <= 1.0f") )
    __debugbreak();
  v6 = (float)v5;
  if ( atlasIndex >= v6 && (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 116, ASSERT_TYPE_ASSERT, "(( atlasIndex < atlasEntries ) || ( atlasEntries == 0 ))", (const char *)&queryFormat, "( atlasIndex < atlasEntries ) || ( atlasEntries == 0 )") )
    __debugbreak();
  _XMM4 = 0i64;
  __asm { vroundss xmm4, xmm4, xmm1, 1 }
  v9 = LODWORD(FLOAT_1_0);
  *(float *)&v9 = (float)(1.0 - (float)((float)(*(float *)&_XMM4 * *(float *)&_XMM4) * 0.00000095553969)) - (float)(atlasBlend * atlasBlend);
  _XMM3 = v9;
  __asm { vmaxss  xmm1, xmm3, xmm5 }
  fsqrt(*(float *)&_XMM1);
  _XMM3 = 0i64;
  __asm
  {
    vinsertps xmm3, xmm3, xmm0, 0
    vinsertps xmm3, xmm3, xmm7, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    vmaxps  xmm0, xmm3, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0AAh ; 'ª'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
  }
  _XMM0 = packedAtlasParams->v;
  __asm { vblendps xmm1, xmm0, xmm2, 8 }
  *packedAtlasParams = (float4)_XMM1.v;
}

/*
==============
FX_PackParticleVertExtraData
==============
*/
__int64 FX_PackParticleVertExtraData(unsigned int perFrameActiveEmitterIndex, float temperatureScale)
{
  int v5; 

  if ( perFrameActiveEmitterIndex > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 214, ASSERT_TYPE_ASSERT, "(perFrameActiveEmitterIndex <= 0x00ffff)", (const char *)&queryFormat, "perFrameActiveEmitterIndex <= 0x00ffff") )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  v5 = (int)*(float *)&_XMM4;
  if ( (int)*(float *)&_XMM4 > 255 )
    v5 = 255;
  if ( v5 < 0 )
    v5 = 0;
  return perFrameActiveEmitterIndex | (v5 << 24);
}

/*
==============
FX_QuadGenQuad
==============
*/
void FX_QuadGenQuad(FxDrawState *draw, const ParticleState *pParticleState, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *pMaterial, const Particle_DrawData *r_drawData, unsigned int perFrameActiveEmitterIndex)
{
  r_double_index_t *indices; 
  const char *vfxName; 
  unsigned __int8 codeSurfFlags; 
  unsigned __int16 vertIndexOffset; 
  char flipU; 
  char flipV; 
  int randomSeed; 
  unsigned __int64 flags; 
  bool v20; 
  float v23; 
  GfxMeshLightingType MeshLightingType; 
  float anisotropy; 
  bool IsVolumetric; 
  float4 *p_posWorld; 
  float4 *v28; 
  float v29; 
  float v30; 
  float v31; 
  const ParticleAtlasData *atlasData; 
  GfxMeshLightingType lightingType; 
  r_double_index_t v34; 
  unsigned __int16 v35; 
  float outLightmapU; 
  float outLightmapV; 
  float outLightmapD; 
  unsigned int vertIndexBase; 
  unsigned int outPackedAtlasDataOffset; 
  float4 *tangenta; 
  float4 *bitangenta; 
  float4 height; 
  float4 width; 
  GfxCodeSurfBuffers outBuffers; 

  _RDI = r_drawData;
  bitangenta = (float4 *)bitangent;
  tangenta = (float4 *)tangent;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 622, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !draw->codeSurfGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 626, ASSERT_TYPE_ASSERT, "(draw->codeSurfGlob)", (const char *)&queryFormat, "draw->codeSurfGlob") )
    __debugbreak();
  if ( !pMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 627, ASSERT_TYPE_ASSERT, "(pMaterial)", (const char *)&queryFormat, "pMaterial") )
    __debugbreak();
  if ( !r_drawData->vfxName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 628, ASSERT_TYPE_ASSERT, "(r_drawData.vfxName)", (const char *)&queryFormat, "r_drawData.vfxName") )
    __debugbreak();
  if ( FX_AddAtlasDataReserveCodeSurfBuffers(draw, pMaterial, &outPackedAtlasDataOffset, 1u, &outBuffers) )
  {
    indices = outBuffers.indices;
    vfxName = r_drawData->vfxName;
    codeSurfFlags = r_drawData->codeSurfFlags;
    vertIndexOffset = outBuffers.vertIndexOffset;
    vertIndexBase = outBuffers.vertIndexBase;
    v35 = outBuffers.vertIndexOffset;
    FX_SpriteDirectContinue(draw->codeSurfGlob, vfxName, &draw->sprite, pMaterial, outBuffers.vertIndexBase, outBuffers.indices, codeSurfFlags, perFrameActiveEmitterIndex);
    draw->sprite.indexCount += 6;
    v34.value[1] = vertIndexOffset + 1;
    flipU = 0;
    v34.value[0] = vertIndexOffset;
    *indices = v34;
    v34.value[0] = vertIndexOffset + 2;
    v34.value[1] = vertIndexOffset + 2;
    indices[1] = v34;
    v34.value[0] = vertIndexOffset + 3;
    v34.value[1] = vertIndexOffset;
    indices[2] = v34;
    flipV = 0;
    if ( r_drawData->hasMirrorTexture )
    {
      randomSeed = r_drawData->randomSeed;
      if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 540, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
        __debugbreak();
      if ( (pParticleState->m_pStateDef->flags & 0x7800) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 541, ASSERT_TYPE_ASSERT, "(pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_HAS_MIRROR_TEXTURE ))", (const char *)&queryFormat, "pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_HAS_MIRROR_TEXTURE )") )
        __debugbreak();
      flags = pParticleState->m_pStateDef->flags;
      if ( (flags & 0x1000) != 0 )
        flipU = (int)LOWORD(fx_randomTable[randomSeed + 48]) >> 15;
      else
        flipU = (flags & 0x800) != 0;
      if ( (flags & 0x4000) != 0 )
        flipV = (int)LOWORD(fx_randomTable[randomSeed + 49]) >> 15;
      else
        flipV = (flags & 0x2000) != 0;
    }
    v20 = !r_drawData->allowLighting;
    __asm
    {
      vbroadcastss xmm0, dword ptr [rdi+70h]
      vbroadcastss xmm1, dword ptr [rdi+74h]
    }
    width.v = _XMM0;
    height.v = _XMM1;
    v23 = 0.0;
    if ( v20 || (MeshLightingType = GetMeshLightingType(pMaterial), MeshLightingType == GFX_MESH_LIGHTING_NONE) )
    {
      v28 = tangenta;
      p_posWorld = &r_drawData->posWorld;
      v31 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
      outLightmapU = 0.0;
      outLightmapV = 0.0;
      outLightmapD = 0.0;
    }
    else
    {
      anisotropy = r_drawData->anisotropy;
      IsVolumetric = Material_IsVolumetric(pMaterial);
      p_posWorld = &r_drawData->posWorld;
      lightingType = MeshLightingType;
      v28 = tangenta;
      FX_SetupLighting(draw->codeSurfGlob, draw->camera, &r_drawData->posWorld, tangenta, bitangenta, &width, &height, r_drawData->rotationAngle, !IsVolumetric, anisotropy, lightingType, activeLightGridsBitmask, pMaterial, &outLightmapU, &outLightmapV, &outLightmapD);
      v29 = outLightmapD;
      v30 = outLightmapV;
      v31 = outLightmapU;
    }
    atlasData = r_drawData->atlasData;
    if ( atlasData->entryCount )
      v23 = fmodf_0(r_drawData->atlasIndex, (float)atlasData->entryCount);
    FX_SetupParticleQuad(draw->codeSurfGlob, &r_drawData->color, &r_drawData->emissiveIntensity, r_drawData->lightingFrac, p_posWorld, normal, v28, bitangenta, &width, &height, r_drawData->rotationAngle, v31, v30, v29, v23, vertIndexBase + v35, perFrameActiveEmitterIndex, outPackedAtlasDataOffset, flipU, flipV, r_drawData->temperatureScale, pMaterial);
  }
}

/*
==============
FX_SetupLighting
==============
*/
void FX_SetupLighting(GfxCodeSurfGlob *codeSurfGlob, const FxCamera *camera, const float4 *worldPos, const float4 *tangent, const float4 *bitangent, const float4 *width, const float4 *height, float rotation, bool isSurface, float anisotropy, GfxMeshLightingType lightingType, unsigned int activeLightGridsBitmask, const Material *material, float *outLightmapU, float *outLightmapV, float *outLightmapD)
{
  unsigned int v17; 
  unsigned int v18; 
  bool v19; 
  __int64 v22; 
  __m128 *p_v; 
  __m128 *v25; 
  unsigned int v56; 
  unsigned int outLightmapOffset; 
  GfxMeshDataLightingInput *lightIter; 
  const float4 *v59; 
  const float4 *v60; 
  const Material *v61; 
  const float4 *v62; 
  const float4 *v63; 

  v63 = tangent;
  v60 = worldPos;
  v62 = width;
  v59 = height;
  v61 = material;
  v17 = FX_CalculateLightmapLevel(camera, worldPos, width, height);
  v56 = v17;
  while ( 1 )
  {
    v18 = v17;
    v19 = R_AllocateCodeSurfLightmap(codeSurfGlob, lightingType, v17, activeLightGridsBitmask, &lightIter, &outLightmapOffset, outLightmapU, outLightmapV, outLightmapD);
    if ( !v17-- )
      break;
    if ( v19 )
      goto LABEL_6;
  }
  if ( !v19 )
  {
    *outLightmapU = 0.0;
    *outLightmapV = 0.0;
    *outLightmapD = 0.0;
    return;
  }
LABEL_6:
  if ( v18 != v56 )
    R_WarnOncePerFrame(R_WARN_FX_LIGHTMAP_FALLBACK, (unsigned int)lightingType, v56, v18);
  _RAX = lightIter;
  v22 = (__int64)v61;
  p_v = &v62->v;
  _XMM1 = v60->v;
  v25 = &v59->v;
  lightIter->data0.v[0] = COERCE_FLOAT(*v60);
  __asm
  {
    vextractps dword ptr [rax+4], xmm1, 1
    vextractps dword ptr [rax+8], xmm1, 2
  }
  lightIter->data0.v[3] = COERCE_FLOAT(outLightmapOffset & 0x3FFF | (isSurface << 28) | (outLightmapOffset >> 2) & 0xFFFC000 | ((*(_WORD *)(v22 + 26) & 0x40) << 23));
  if ( (COERCE_FLOAT(*p_v) >= 393210.0 || COERCE_FLOAT(*v25) >= 393210.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 381, ASSERT_TYPE_ASSERT, "(Float4ExtractX( width ) < fp16FloatZLimit && Float4ExtractX( height ) < fp16FloatZLimit)", "%s\n\tParticle with material name %s - has illegal size size over compressed f16 limit (of %f) : %f, %f /n", "Float4ExtractX( width ) < fp16FloatZLimit && Float4ExtractX( height ) < fp16FloatZLimit", *(const char **)v22, DOUBLE_393210_0, COERCE_FLOAT(*p_v), COERCE_FLOAT(*v25)) )
    __debugbreak();
  _XMM2 = _mm128_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(*p_v, *v25, 80), *p_v, 232), (__m128)_xmm);
  _XMM0 = v63->v;
  __asm
  {
    vmaxps  xmm0, xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmm6
  }
  _XMM1 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm0, xmm1
    vcvtps2ph xmm10, xmm2, 0
    vpand   xmm2, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm1, xmm2, 0EEh ; 'î'
    vpor    xmm3, xmm1, xmm2
    vpshufd xmm0, xmm3, 0
    vpor    xmm1, xmm0, xmm3
    vpor    xmm7, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
  }
  _XMM0 = bitangent->v;
  __asm
  {
    vmaxps  xmm0, xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm1, xmm0, xmm6
  }
  _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM1, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm0, xmm3
    vpand   xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm1, 44h ; 'D'
    vpor    xmm2, xmm0, xmm1
    vpshufd xmm1, xmm2, 0FFh
    vpor    xmm0, xmm1, xmm2
    vpor    xmm3, xmm0, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm10, xmm7, 2
  }
  _XMM1 = 0i64;
  __asm
  {
    vinsertps xmm1, xmm1, [rsp+118h+rotation], 0
    vinsertps xmm1, xmm1, [rsp+118h+anisotropy], 10h
    vblendps xmm2, xmm0, xmm3, 4
    vcvtps2ph xmm0, xmm1, 0
  }
  lightIter->data1 = (vec4_t)_mm_shuffle_ps(_XMM2, _mm_shuffle_ps(_XMM2, _XMM0, 250), 132);
}

/*
==============
FX_SetupParticleQuad
==============
*/
void FX_SetupParticleQuad(GfxCodeSurfGlob *codeSurfGlob, const float4 *color, const float4 *emissiveIntensity, float lightingFrac, const float4 *position, const float4 *normal, const float4 *tangent, const float4 *bitangent, const float4 *width, const float4 *height, float rotationAngle, float lightmapU, float lightmapV, float lightmapD, float frameIndex, unsigned int vertIndexBegin, unsigned int perFrameActiveEmitterIndex, unsigned int packedAtlasDataOffset, bool flipU, bool flipV, float temperatureScale, const Material *material)
{
  int v28; 
  int v34; 

  if ( !codeSurfGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 235, ASSERT_TYPE_ASSERT, "(codeSurfGlob)", (const char *)&queryFormat, "codeSurfGlob") )
    __debugbreak();
  _RBX = (float4 *)R_CodeSurfQuadIter_Begin(codeSurfGlob, vertIndexBegin >> 2);
  _XMM1 = position->v;
  _RBX->v.m128_f32[0] = COERCE_FLOAT(*position);
  __asm
  {
    vextractps dword ptr [rax+4], xmm1, 1
    vextractps dword ptr [rax+8], xmm1, 2
  }
  _RBX->v.m128_f32[3] = rotationAngle;
  _XMM1 = normal->v;
  _RBX[1].v.m128_f32[0] = COERCE_FLOAT(*normal);
  __asm
  {
    vextractps dword ptr [rbx+14h], xmm1, 1
    vextractps dword ptr [rbx+18h], xmm1, 2
  }
  v28 = flipU | 2;
  if ( !flipV )
    v28 = flipU;
  _RBX[1].v.m128_i32[3] = v28;
  _RBX[1].v.m128_i32[3] = v28 | (material->runtimeFlags >> 4) & 4;
  _XMM1 = tangent->v;
  _RBX[2].v.m128_f32[0] = COERCE_FLOAT(*tangent);
  __asm
  {
    vextractps dword ptr [rbx+24h], xmm1, 1
    vextractps dword ptr [rbx+28h], xmm1, 2
  }
  _RBX[2].v.m128_i32[3] = (unsigned __int16)(int)frameIndex | (truncate_cast<unsigned short,unsigned int>(packedAtlasDataOffset) << 16);
  _XMM1 = bitangent->v;
  _RBX[3].v.m128_f32[0] = COERCE_FLOAT(*bitangent);
  __asm
  {
    vextractps dword ptr [rbx+34h], xmm1, 1
    vextractps dword ptr [rbx+38h], xmm1, 2
  }
  _RBX[3].v.m128_f32[3] = lightingFrac;
  _RBX[4] = (float4)emissiveIntensity->v;
  _RBX[5].v.m128_f32[0] = lightmapU;
  _RBX[5].v.m128_f32[1] = lightmapV;
  _RBX[5].v.m128_f32[2] = lightmapD;
  _XMM6 = 0i64;
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  _RBX[5].v.m128_f32[3] = frameIndex - *(float *)&_XMM2;
  _RBX[6] = (float4)color->v;
  _RBX[7].v.m128_f32[0] = COERCE_FLOAT(*width);
  _RBX[7].v.m128_f32[1] = COERCE_FLOAT(*height);
  if ( perFrameActiveEmitterIndex > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 224, ASSERT_TYPE_ASSERT, "(perFrameActiveEmitterIndex <= 0x00ffff)", (const char *)&queryFormat, "perFrameActiveEmitterIndex <= 0x00ffff") )
    __debugbreak();
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  v34 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 > 255 )
    v34 = 255;
  if ( v34 < 0 )
    v34 = 0;
  _RBX[7].v.m128_i32[2] = perFrameActiveEmitterIndex | (v34 << 24);
}

/*
==============
FX_SpriteDirectFlush
==============
*/
void FX_SpriteDirectFlush(GfxCodeSurfGlob *codeSurfGlob, FxSpriteInfo *sprite)
{
  FX_SpriteDirectFlush(codeSurfGlob, sprite, 0);
}

/*
==============
FX_SpriteDirectFlush
==============
*/
void FX_SpriteDirectFlush(GfxCodeSurfGlob *codeSurfGlob, FxSpriteInfo *sprite, const bool forceDrawBatchBreak)
{
  GfxCodeSurfArgs codeSurfArgs; 

  if ( !sprite->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 262, ASSERT_TYPE_ASSERT, "(sprite->indexCount)", (const char *)&queryFormat, "sprite->indexCount") )
    __debugbreak();
  if ( !sprite->indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 263, ASSERT_TYPE_ASSERT, "(sprite->indices)", (const char *)&queryFormat, "sprite->indices") )
    __debugbreak();
  if ( !sprite->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 264, ASSERT_TYPE_ASSERT, "(sprite->material)", (const char *)&queryFormat, "sprite->material") )
    __debugbreak();
  if ( !sprite->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 265, ASSERT_TYPE_ASSERT, "(sprite->name)", (const char *)&queryFormat, "sprite->name") )
    __debugbreak();
  codeSurfArgs.material = sprite->material;
  codeSurfArgs.vertIndexBase = sprite->vertIndexBase;
  codeSurfArgs.indices = sprite->indices;
  codeSurfArgs.indexCount = sprite->indexCount;
  codeSurfArgs.argCount = forceDrawBatchBreak;
  codeSurfArgs.fxName = sprite->name;
  codeSurfArgs.flags = sprite->codeSurfFlags;
  codeSurfArgs.argOffset = 0;
  codeSurfArgs.sortOrder = 0;
  DebugWipe(sprite, 0x30ui64);
  sprite->indexCount = 0;
  R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
}

/*
==============
FX_TrailGenVerts
==============
*/
void FX_TrailGenVerts(FxDrawState *draw, const ParticleEmitter *pEmitterOwner, const ParticleEmitter::ParticleStateData *rParticleStateData, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, Material *pMaterial, const Particle_DrawData *r_drawData, Particle_TrailData *rTrailData, const float4 *position, unsigned int perFrameActiveEmitterIndex)
{
  float atlasFrameIx; 
  bool IsVolumetric; 
  ParticleState::ElementTypeModule v16; 
  int lightingFrac_low; 
  int temperatureScale_low; 
  ParticleData *pParticleData; 
  bool v20; 
  const ParticleStateDef *m_pStateDef; 
  unsigned __int8 v22; 
  unsigned __int64 flags; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int8 *ParticleDataArray; 
  unsigned __int8 *v28; 
  unsigned __int8 *v29; 
  unsigned __int8 *v30; 
  unsigned __int8 *v31; 
  unsigned __int8 *v32; 
  unsigned __int8 *v33; 
  unsigned __int8 *v34; 
  unsigned int numPointsRunning; 
  unsigned int numPointsMax; 
  __int64 lastPointIndex; 
  bool v38; 
  Particle_TrailPoint *pointList; 
  float v40; 
  float numSheets; 
  float v42; 
  bool v43; 
  float v44; 
  float v45; 
  float geoTrailSpawnDistance; 
  char v50; 
  bool v52; 
  float v53; 
  float v54; 
  ParticleEmitter *v55; 
  const ParticleSystem *SystemOwner; 
  __int64 m_localClientNum; 
  vector4 *p_m_cameraTransformPosOnly; 
  int v59; 
  FxSpriteInfo *p_sprite; 
  char m_flags_high; 
  int v62; 
  int v63; 
  __int128 tileOffset_low; 
  unsigned int v65; 
  float v66; 
  __int64 v67; 
  unsigned int v68; 
  float v69; 
  __int128 v70; 
  FxDrawState *v71; 
  unsigned int v72; 
  int vertIndexOffset; 
  unsigned int vertIndexBase; 
  r_double_index_t *v75; 
  ParticleSystem *v76; 
  const ParticleSystemDef *Def; 
  __int64 v78; 
  GfxCodeSurfGlob *codeSurfGlob; 
  const ParticleAtlasData *atlasData; 
  GfxSpriteVertex *v81; 
  unsigned int v82; 
  float v83; 
  int v84; 
  float v85; 
  __int64 v86; 
  unsigned int v87; 
  __int64 v88; 
  __int64 v89; 
  Particle_TrailData *v90; 
  __int64 v91; 
  __m128 v92; 
  __m128 v93; 
  __int128 v94; 
  __m128 v95; 
  __m128 v98; 
  __m128 v99; 
  __m128 v101; 
  __m128 v104; 
  __m128 v107; 
  __m128 v111; 
  __int64 v112; 
  __m128 v113; 
  char v114; 
  __m128 *v115; 
  float v116; 
  float v117; 
  float v122; 
  __int64 v123; 
  __m128 v124; 
  __m128 v125; 
  __m128 *v126; 
  float v127; 
  __m128 v132; 
  float4 v133; 
  float4 v134; 
  float4 v135; 
  float4 v136; 
  __m128 v137; 
  __m128 v138; 
  float v140; 
  __m128 v141; 
  __m128 v142; 
  float v143; 
  __m128 *v144; 
  float v145; 
  float v146; 
  float v150; 
  float v151; 
  float v152; 
  __m128 v160; 
  __m128 v163; 
  __m128 v164; 
  __int128 v178; 
  Material *v200; 
  __int64 v201; 
  __int128 v207; 
  __m128 v214; 
  __m128 v215; 
  float v217; 
  __m128 v222; 
  __m128 v223; 
  float v224; 
  __m128 v226; 
  __m128 v227; 
  __int64 v228; 
  float v229; 
  int v230; 
  int v231; 
  int v232; 
  unsigned int v233; 
  char v234; 
  char v235; 
  unsigned int v236; 
  unsigned int v237; 
  __int64 v238; 
  float v239; 
  float v240; 
  float v241; 
  float v242; 
  char v243; 
  float v244; 
  __int64 v245; 
  float v246; 
  __m128 v251; 
  __m128 v252; 
  __m128 v253; 
  __m128 v254; 
  __m128 v257; 
  __m128 v258; 
  __m128 v259; 
  __m128 v260; 
  __m128 v261; 
  double v264; 
  float v265; 
  int v282; 
  unsigned int v283; 
  int v284; 
  __int64 v285; 
  unsigned int v286; 
  __int64 v287; 
  Particle_TrailData *v288; 
  unsigned int v289; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v291; 
  float4 v292; 
  const ParticleStateDef *v293; 
  __int64 v294; 
  __m128 *v295; 
  __m128 v296; 
  __int64 v297; 
  __m128 v298; 
  __m128 *v299; 
  __m128 v300; 
  int v301; 
  int v302; 
  float v306; 
  double v308; 
  bool v309; 
  float v310; 
  float v311; 
  float v312; 
  float v313; 
  float v314; 
  float v316; 
  float v317; 
  __m128 v318; 
  __m128 v319; 
  __m128 v320; 
  __m128 v321; 
  float v323; 
  __m128 v324; 
  __m128 v325; 
  float v326; 
  __m128 v327; 
  float v328; 
  __m128 v329; 
  float v330; 
  bool v331; 
  GfxMeshLightingType v332; 
  bool v333; 
  __m128 v334; 
  __m128 v335; 
  float v336; 
  __m128 v337; 
  float v338; 
  __m128 v339; 
  float v340; 
  bool v341; 
  float v342; 
  float v343; 
  float v344; 
  float v345; 
  float v346; 
  float v347; 
  __m128 v348; 
  float v349; 
  const ParticleAtlasData *v350; 
  __int128 v352; 
  bool v356; 
  float v357; 
  const ParticleAtlasData *v358; 
  r_double_index_t *indices; 
  r_double_index_t *indicesa; 
  __int64 codeSurfFlags; 
  bool v362; 
  bool v363; 
  bool v364; 
  bool v365; 
  char v366; 
  bool v367; 
  bool v368; 
  char v369; 
  char v370; 
  unsigned __int8 v371; 
  unsigned __int16 v372[2]; 
  float v373; 
  unsigned int entryCount; 
  float v375; 
  unsigned int v376; 
  float v377; 
  unsigned int v378; 
  float v379; 
  float spawnDistance; 
  float v381; 
  float v382; 
  float v383; 
  float v384; 
  float v385; 
  float v386; 
  int v387; 
  float v388; 
  float v389; 
  float v390; 
  unsigned int firstPointIndex; 
  unsigned int v392; 
  int v393; 
  unsigned __int8 *v394; 
  float outLightmapV; 
  unsigned int v396; 
  float outLightmapU; 
  float v398; 
  ParticleEmitter *v399; 
  __int64 v400; 
  FxDrawState *v401; 
  __int64 v402; 
  float4 v403; 
  unsigned int v404; 
  unsigned __int8 *v405; 
  __int64 v406; 
  FxSpriteInfo *v407; 
  float outLightmapD; 
  Particle_TrailPoint *v409; 
  float t0[4]; 
  float v411; 
  float v412; 
  Particle_TrailData *v413; 
  __int64 v414; 
  unsigned __int8 *v415; 
  unsigned __int8 *v416; 
  __int64 v417; 
  unsigned __int8 *v418; 
  __int64 v419; 
  unsigned __int8 *v420; 
  __int64 v421; 
  unsigned int outLightmapOffset; 
  int v423; 
  float v424; 
  int v425; 
  float v426; 
  int v427; 
  Material *v428; 
  GfxMeshDataLightingInput *lightIter; 
  __m128 *p_v; 
  unsigned __int8 *v431; 
  unsigned int v432; 
  FX_TrailGenVerts_DrawData v433; 
  const ParticleEmitter::ParticleStateData *v434; 
  const float4 *v435; 
  unsigned __int8 *v436; 
  __m128 v437; 
  unsigned __int8 *v438; 
  const Particle_DrawData *v439; 
  float4 v440; 
  float4 v441; 
  __m128 v442; 
  __m128 v443; 
  __m128 v444; 
  __m128 v445; 
  GfxCodeSurfBuffers outBuffers; 
  FX_TrailGenVerts_DrawData v447; 
  __m128 v; 
  __m128 v449; 
  __m256i v450; 
  __m256i v451; 
  __m256i v452; 
  __m256i v453; 
  __int128 v454; 
  float4 v455; 
  vec3_t vec; 

  v401 = draw;
  atlasFrameIx = 0.0;
  v428 = pMaterial;
  v411 = 0.0;
  v412 = 0.0;
  v434 = rParticleStateData;
  v399 = (ParticleEmitter *)pEmitterOwner;
  v439 = r_drawData;
  v413 = rTrailData;
  v435 = position;
  *(_OWORD *)t0 = _xmm;
  IsVolumetric = Material_IsVolumetric(pMaterial);
  v16.pModule = (const ParticleModule *)rParticleStateData->m_particleState.m_elementTypeModule;
  lightingFrac_low = SLODWORD(r_drawData->lightingFrac);
  temperatureScale_low = SLODWORD(r_drawData->temperatureScale);
  v390 = *(float *)&lightingFrac_low;
  v368 = !IsVolumetric;
  v384 = *(float *)&temperatureScale_low;
  if ( !v16.pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1383, ASSERT_TYPE_ASSERT, "(pModuleInitGeoTrail)", (const char *)&queryFormat, "pModuleInitGeoTrail") )
    __debugbreak();
  pParticleData = rTrailData->pParticleData;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1386, ASSERT_TYPE_ASSERT, "(pTrailParticleData)", (const char *)&queryFormat, "pTrailParticleData") )
    __debugbreak();
  v20 = !ParticleEmitter::ShouldDrawWithViewModel((ParticleEmitter *)pEmitterOwner, &rParticleStateData->m_particleState);
  v369 = BYTE1(v16.pModule[6].m_flags);
  m_pStateDef = rParticleStateData->m_particleState.m_pStateDef;
  v22 = !v20;
  LOBYTE(v372[0]) = !v20;
  flags = m_pStateDef->flags;
  v364 = (flags & 8) != 0;
  v24 = flags >> 22;
  LOBYTE(v24) = (flags & 0x400000) != 0;
  v417 = v24;
  v25 = flags >> 23;
  v26 = flags >> 41;
  LOBYTE(v25) = v25 & 1;
  LOBYTE(v26) = v26 & 1;
  v419 = v25;
  v414 = v26;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  ParticleDataArray = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_COLOR);
  v20 = pParticleData->m_pParticleData == NULL;
  v415 = ParticleDataArray;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v28 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_POSITION);
  v20 = pParticleData->m_pParticleData == NULL;
  v394 = v28;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v29 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_SIZE);
  v20 = pParticleData->m_pParticleData == NULL;
  v431 = v29;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 357, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v30 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_EMISSIVE);
  v20 = pParticleData->m_pParticleData == NULL;
  v416 = v30;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 358, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v418 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_LIGHTING_FRAC);
  v31 = NULL;
  if ( (_BYTE)v26 )
  {
    if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 360, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
      __debugbreak();
    v31 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_TEMPERATURE);
  }
  v20 = pParticleData->m_pParticleData == NULL;
  v405 = v31;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 359, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v32 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_INTENSITY);
  v20 = pParticleData->m_pParticleData == NULL;
  v420 = v32;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v33 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_ATLAS_INDEX);
  v20 = pParticleData->m_pParticleData == NULL;
  v438 = v33;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 361, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v34 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_CAMERA_DISTANCE);
  numPointsRunning = rTrailData->numPointsRunning;
  v436 = v34;
  if ( numPointsRunning <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1407, ASSERT_TYPE_ASSERT, "(numTrailPoints > 1)", (const char *)&queryFormat, "numTrailPoints > 1") )
    __debugbreak();
  numPointsMax = rTrailData->numPointsMax;
  lastPointIndex = rTrailData->lastPointIndex;
  if ( rTrailData->numPointsRunning == numPointsMax )
    firstPointIndex = ((int)lastPointIndex + 1) % numPointsMax;
  else
    firstPointIndex = rTrailData->firstPointIndex;
  v38 = *(float *)&v16.pModule[4].m_type > 0.0;
  pointList = rTrailData->pointList;
  v40 = *(float *)&v16.pModule[2].m_flags;
  numSheets = (float)rTrailData->numSheets;
  v396 = rTrailData->numSheets;
  v42 = 3.1415927 / numSheets;
  v43 = *(float *)&v16.pModule[3].m_flags > 0.0;
  v409 = pointList;
  v367 = v38;
  v365 = v43;
  v424 = 3.1415927 / numSheets;
  v377 = v40;
  if ( v43 || (v366 = 0, v38) )
    v366 = 1;
  v404 = numPointsRunning - 1;
  if ( !v434->m_particleState.m_pEmitterOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  v44 = *(float *)&v16.pModule[4].m_flags;
  v45 = 1000.0 * *(float *)&v16.pModule[6].m_type;
  v427 = (int)(float)(1000.0 * v434->m_particleState.m_pEmitterOwner->m_emitterLife);
  v423 = (int)v45;
  v389 = v44;
  if ( v44 <= 0.00000011920929 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1428, ASSERT_TYPE_ASSERT, "(tileDistance > 1.192092896e-07F)", (const char *)&queryFormat, "tileDistance > FLT_EPSILON") )
    __debugbreak();
  geoTrailSpawnDistance = r_drawData->geoTrailSpawnDistance;
  v379 = geoTrailSpawnDistance;
  spawnDistance = pointList[lastPointIndex].spawnDistance;
  if ( (float)((float)(spawnDistance - geoTrailSpawnDistance) * 0.5) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1434, ASSERT_TYPE_ASSERT, "(halfDistance)", (const char *)&queryFormat, "halfDistance") )
    __debugbreak();
  _XMM0 = *(unsigned int *)&v16.pModule[4].m_type;
  _XMM1 = v16.pModule[3].m_flags;
  __asm { vminss  xmm0, xmm0, xmm6 }
  v50 = (unsigned __int8)v434->m_particleState.m_pStateDef->flags >> 1;
  __asm { vminss  xmm1, xmm1, xmm6 }
  v52 = (v434->m_particleState.m_pStateDef->flags & 0x10000000) != 0;
  v53 = *(float *)&_XMM0 + geoTrailSpawnDistance;
  v54 = spawnDistance - *(float *)&_XMM1;
  v381 = *(float *)&_XMM0;
  v382 = *(float *)&_XMM1;
  v386 = *(float *)&_XMM0 + geoTrailSpawnDistance;
  v388 = spawnDistance - *(float *)&_XMM1;
  if ( (v50 & 1) != 0 || v52 )
  {
    v55 = v399;
    m_localClientNum = v399->m_pSystemOwner->m_localClientNum;
    if ( v52 )
    {
      if ( (unsigned int)m_localClientNum >= 2 )
      {
        LODWORD(indices) = v399->m_pSystemOwner->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", indices, 2) )
          __debugbreak();
      }
      p_m_cameraTransformPosOnly = &g_particleManager[0].m_cameraTransformPosOnly;
    }
    else
    {
      if ( (unsigned int)m_localClientNum >= 2 )
      {
        LODWORD(indices) = v399->m_pSystemOwner->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", indices, 2) )
          __debugbreak();
      }
      p_m_cameraTransformPosOnly = &g_particleManager[0].m_cameraTransform;
    }
    SystemOwner = (const ParticleSystem *)&p_m_cameraTransformPosOnly[4916 * m_localClientNum];
  }
  else
  {
    v55 = v399;
    SystemOwner = ParticleEmitter::GetSystemOwner(v399);
  }
  p_v = &SystemOwner->m_systemTransform.x.v;
  v59 = v55->m_flags >> 1;
  LOBYTE(v59) = (v55->m_flags & 2) == 0;
  v425 = v59;
  v20 = v401->codeSurfGlob == NULL;
  p_sprite = &v401->sprite;
  v407 = &v401->sprite;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1445, ASSERT_TYPE_ASSERT, "(draw->codeSurfGlob)", (const char *)&queryFormat, "draw->codeSurfGlob") )
    __debugbreak();
  if ( !v428 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1446, ASSERT_TYPE_ASSERT, "(pMaterial)", (const char *)&queryFormat, "pMaterial") )
    __debugbreak();
  m_flags_high = HIBYTE(v16.pModule[6].m_flags);
  v393 = 0;
  v62 = 0;
  v387 = 0;
  v63 = 0;
  v370 = m_flags_high;
  tileOffset_low = LODWORD(v413->tileOffset);
  v392 = LODWORD(v413->tileOffset);
  if ( !m_flags_high || (v371 = 1, !LOBYTE(v16.pModule[7].m_type)) )
    v371 = 0;
  if ( v366 || m_flags_high )
  {
    v65 = firstPointIndex;
    v66 = r_drawData->geoTrailSpawnDistance;
    if ( numPointsRunning != 1 )
    {
      v67 = numPointsRunning - 1;
      v68 = v413->numPointsMax;
      do
      {
        if ( v65 >= v68 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
            __debugbreak();
          m_flags_high = v370;
          v63 = v387;
          v62 = v393;
          tileOffset_low = v392;
        }
        v68 = v413->numPointsMax;
        v65 = (v65 + 1) % v68;
        v69 = pointList[v65].spawnDistance;
        if ( v367 && v69 > v53 && v53 > v66 )
          v393 = ++v62;
        if ( v365 && v69 > v54 && v54 > v66 )
          v387 = ++v63;
        if ( m_flags_high )
        {
          v70 = tileOffset_low;
          *(float *)&v70 = *(float *)&tileOffset_low + (float)((float)(v69 - v66) / v44);
          tileOffset_low = v70;
          v392 = v70;
        }
        v66 = v69;
        --v67;
      }
      while ( v67 );
      p_sprite = v407;
      v22 = v372[0];
    }
  }
  v71 = v401;
  v432 = 2 * v396 * (v63 + v62 + numPointsRunning);
  v72 = 6 * v396 * (numPointsRunning - 1 + v63 + v62);
  if ( R_ReserveVertCodeSurfBuffers(&outBuffers, v401->codeSurfGlob, v432, v72, 0) )
  {
    vertIndexOffset = outBuffers.vertIndexOffset;
    vertIndexBase = outBuffers.vertIndexBase;
    v75 = outBuffers.indices;
    LOWORD(v375) = outBuffers.vertIndexOffset;
    v372[0] = outBuffers.vertIndexOffset;
    v76 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v399);
    Def = ParticleSystem::GetDef(v76);
    FX_SpriteDirectContinue(v401->codeSurfGlob, Def->name, p_sprite, v428, vertIndexBase, v75, v22, perFrameActiveEmitterIndex);
    p_sprite->indexCount += v72;
    v78 = (__int64)v439;
    codeSurfGlob = v71->codeSurfGlob;
    v443 = 0i64;
    atlasData = v439->atlasData;
    v407 = (FxSpriteInfo *)v75;
    entryCount = atlasData->entryCount;
    outLightmapU = 0.0;
    outLightmapV = 0.0;
    outLightmapD = 0.0;
    v81 = R_CodeSurfVertIter_Begin(codeSurfGlob, vertIndexBase + vertIndexOffset);
    if ( ((unsigned __int8)v81 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1540, ASSERT_TYPE_ASSERT, "(((uintptr_t)vertIter & 15) == 0)", (const char *)&queryFormat, "((uintptr_t)vertIter & 15) == 0") )
      __debugbreak();
    v82 = 0;
    v376 = 0;
    if ( v396 )
    {
      v83 = *(float *)&firstPointIndex;
      v84 = entryCount;
      v85 = (float)entryCount;
      v426 = v85;
      v = v403.v;
      v421 = firstPointIndex;
      v86 = 80i64 * firstPointIndex;
      v87 = firstPointIndex + 1;
      v444 = v403.v;
      v88 = 16i64 * firstPointIndex;
      v89 = firstPointIndex;
      v445 = v403.v;
      v406 = v86;
      v400 = v88;
      do
      {
        v90 = v413;
        v398 = v83;
        if ( LODWORD(v83) >= v413->numPointsMax )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
            __debugbreak();
          v86 = v406;
          v89 = v421;
          v88 = v400;
          v84 = entryCount;
        }
        v91 = v87 % v90->numPointsMax;
        if ( v82 )
        {
          *(float *)&lightingFrac_low = v390;
          *(float *)&temperatureScale_low = v384;
          v92 = 0i64;
          v92.m128_f32[0] = (float)v82;
          v92.m128_f32[0] = v92.m128_f32[0] * v42;
          v93 = _mm_shuffle_ps(v92, v92, 0);
          v94 = *(_OWORD *)&v93 & _xmm;
          v95 = _mm128_add_ps((__m128)(*(_OWORD *)&v93 & _xmm), (__m128)_xmm);
          v442 = v93;
          _XMM1 = _mm128_add_ps(_mm128_mul_ps((__m128)(*(_OWORD *)&v93 & _xmm), (__m128)_xmm), (__m128)_xmm);
          __asm { vcvttps2dq xmm3, xmm1 }
          v98 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM3), (__m128)_xmm);
          v99 = _mm128_sub_ps((__m128)v94, v98);
          _XMM1 = _mm128_sub_ps(v95, v98);
          v101 = _mm128_sub_ps(_XMM1, (__m128)_xmm);
          _XMM0 = _xmm;
          __asm { vpand   xmm2, xmm0, xmm3 }
          v104 = _mm128_mul_ps(v99, v99);
          __asm
          {
            vpxor   xmm1, xmm1, xmm1
            vpcmpeqd xmm2, xmm2, xmm1
          }
          v107 = _mm128_mul_ps(v101, v101);
          v403.v = v99;
          __asm { vandnps xmm10, xmm2, cs:__xmm@80000000800000008000000080000000 }
          _XMM0 = v442;
          __asm { vcmpltps xmm0, xmm0, xmm4 }
          v441.v = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(v104, (__m128)_xmm_ab573f9fab573f9fab573f9fab573f9f), (__m128)_xmm), v104), (__m128)_xmm_b2d7322bb2d7322bb2d7322bb2d7322b), v104), (__m128)_xmm), v104), (__m128)_xmm_b9500d01b9500d01b9500d01b9500d01), v104), (__m128)_xmm), v104), (__m128)_xmm_be2aaaabbe2aaaabbe2aaaabbe2aaaab), v104), v403.v), v403.v) ^ _XMM10 ^ _XMM0 & _xmm);
          v440.v = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(v107, (__m128)_xmm_ad49cba5ad49cba5ad49cba5ad49cba5), (__m128)_xmm), v107), (__m128)_xmm_b493f27eb493f27eb493f27eb493f27e), v107), (__m128)_xmm), v107), (__m128)_xmm_bab60b61bab60b61bab60b61bab60b61), v107), (__m128)_xmm), v107), (__m128)_xmm_bf000000bf000000bf000000bf000000), v107), (__m128)_xmm) ^ _XMM10);
          atlasFrameIx = 0.0;
        }
        v112 = (__int64)v409;
        v373 = *(float *)(v78 + 132);
        v111 = (__m128)LODWORD(v373);
        if ( v373 <= 0.0 )
        {
          if ( v364 )
            v133.v = _mm128_add_ps(*(__m128 *)((char *)&v409->offset.v + v86), *(__m128 *)&v394[v88]);
          else
            v133.v = *(__m128 *)&v394[v88];
          v134.v = *(__m128 *)((char *)&v409->normal + v86);
          v142 = _mm128_mul_ps(*(__m128 *)(v78 + 144), *(__m128 *)&v415[v88]);
          v135.v = *(__m128 *)((char *)&v409->tangent + v86);
          v433.position = (float4)v133.v;
          v433.normal = (float4)v134.v;
          v141 = *(__m128 *)&v431[v88];
          v144 = (__m128 *)&v416[v88];
          v433.tangent = (float4)v135.v;
          if ( !(_BYTE)v417 )
            v144 = (__m128 *)(v78 + 48);
          v433.color.v = v142;
          v433.size.v = v141;
          v137 = *v144;
          if ( (_BYTE)v417 )
            v145 = *(float *)&v418[4 * v89];
          else
            v145 = v390;
          v433.lightingFrac = v145;
          if ( (_BYTE)v414 )
            v146 = *(float *)&v405[4 * v89];
          else
            v146 = v384;
          v433.temperatureScale = v146;
          _XMM7 = _xmm;
          __asm
          {
            vinsertps xmm7, xmm7, xmm0, 0
            vinsertps xmm7, xmm7, xmm0, 10h
            vinsertps xmm7, xmm7, xmm0, 20h ; ' '
          }
          v433.intensity = (float4)_XMM7.v;
          if ( v84 )
          {
            v143 = *(float *)&v438[4 * v89];
            v433.atlasFrameIx = fmodf_0(v143, (float)v84);
            atlasFrameIx = v433.atlasFrameIx;
            v433.atlasBlend = fmodf_0(v143, 1.0);
            goto LABEL_153;
          }
          v433.atlasFrameIx = 0.0;
        }
        else
        {
          if ( v364 )
            v113 = _mm128_add_ps(*(__m128 *)((char *)&v409->offset.v + v86), *(__m128 *)&v394[v88]);
          else
            v113 = *(__m128 *)&v394[v88];
          v114 = v417;
          v115 = (__m128 *)&v416[v88];
          v403.v = _mm128_mul_ps(*(__m128 *)(v78 + 144), *(__m128 *)&v415[v88]);
          if ( !(_BYTE)v417 )
            v115 = (__m128 *)(v78 + 48);
          if ( (_BYTE)v417 )
            v116 = *(float *)&v418[4 * v89];
          else
            v116 = *(float *)&lightingFrac_low;
          if ( (_BYTE)v414 )
            v117 = *(float *)&v405[4 * v89];
          else
            v117 = *(float *)&temperatureScale_low;
          _XMM6 = _xmm;
          __asm
          {
            vinsertps xmm6, xmm6, xmm0, 0
            vinsertps xmm6, xmm6, xmm0, 10h
            vinsertps xmm6, xmm6, xmm0, 20h ; ' '
          }
          if ( v84 )
          {
            v122 = fmodf_0(*(float *)&v438[4 * v89], (float)v84);
            v111 = (__m128)LODWORD(v373);
            v84 = entryCount;
            v88 = v400;
            v114 = v417;
            atlasFrameIx = v122;
          }
          v123 = 16 * v91;
          if ( v364 )
            v124 = _mm128_add_ps(*(__m128 *)(v112 + 80 * v91 + 48), *(__m128 *)&v394[16 * v91]);
          else
            v124 = *(__m128 *)&v394[16 * v91];
          v125 = _mm128_mul_ps(*(__m128 *)(v78 + 144), *(__m128 *)&v415[v123]);
          v126 = (__m128 *)&v416[v123];
          if ( !v114 )
            v126 = (__m128 *)(v78 + 48);
          if ( v114 )
            lightingFrac_low = *(int *)&v418[4 * v91];
          if ( (_BYTE)v414 )
            v127 = *(float *)&v405[4 * v91];
          else
            v127 = v384;
          _XMM4 = _xmm;
          __asm
          {
            vinsertps xmm4, xmm4, xmm0, 0
            vinsertps xmm4, xmm4, xmm0, 10h
            vinsertps xmm4, xmm4, xmm0, 20h ; ' '
          }
          v132 = _mm_shuffle_ps(v111, v111, 0);
          v133.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v124, v113), v132), v113);
          v134.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)(v112 + 80 * v91 + 32), *(__m128 *)(v406 + v112 + 32)), v132), *(__m128 *)(v406 + v112 + 32));
          v135.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)(v112 + 80 * v91), *(__m128 *)(v406 + v112)), v132), *(__m128 *)(v406 + v112));
          v136.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v125, v403.v), v132), v403.v);
          v433.size.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)&v431[v123], *(__m128 *)&v431[v88]), v132), *(__m128 *)&v431[v88]);
          v137 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(*v126, *v115), v132), *v115);
          v138 = _mm128_mul_ps(_mm128_sub_ps(_XMM4, _XMM6), v132);
          v132.m128_i32[0] = *(_DWORD *)(v78 + 132);
          _XMM7.v = _mm128_add_ps(v138, _XMM6);
          v433.color = (float4)v136.v;
          v433.temperatureScale = (float)((float)(1.0 - v132.m128_f32[0]) * v117) + (float)(v127 * v132.m128_f32[0]);
          v433.lightingFrac = (float)((float)(1.0 - v132.m128_f32[0]) * v116) + (float)(*(float *)&lightingFrac_low * v132.m128_f32[0]);
          v433.atlasFrameIx = atlasFrameIx;
          v433.position = (float4)v133.v;
          v433.normal = (float4)v134.v;
          v433.tangent = (float4)v135.v;
          v433.intensity = (float4)_XMM7.v;
          if ( v84 )
          {
            v140 = fmodf_0(atlasFrameIx, 1.0);
            v141 = v433.size.v;
            v142 = v433.color.v;
            v82 = v376;
            v433.atlasBlend = v140;
            v143 = atlasFrameIx;
            goto LABEL_153;
          }
          v141 = v433.size.v;
          v142 = v433.color.v;
          v82 = v376;
        }
        v143 = 0.0;
        v433.atlasBlend = 0.0;
LABEL_153:
        v454 = (__int128)v137;
        if ( v137.m128_f32[0] > 0.039280001 )
        {
          v151 = powf_0((float)(v137.m128_f32[0] * 0.94786733) + 0.052132703, 2.4000001);
          v150 = FLOAT_0_077399381;
        }
        else
        {
          v150 = FLOAT_0_077399381;
          v151 = v137.m128_f32[0] * 0.077399381;
        }
        *(float *)&v454 = v151;
        if ( *((float *)&v454 + 1) > 0.039280001 )
          v152 = powf_0((float)(*((float *)&v454 + 1) * 0.94786733) + 0.052132703, 2.4000001);
        else
          v152 = *((float *)&v454 + 1) * v150;
        *((float *)&v454 + 1) = v152;
        if ( *((float *)&v454 + 2) > 0.039280001 )
          powf_0((float)(*((float *)&v454 + 2) * 0.94786733) + 0.052132703, 2.4000001);
        _XMM8 = v454;
        __asm { vinsertps xmm8, xmm8, xmm0, 20h ; ' ' }
        v454 = (__int128)_XMM8.v;
        v433.emissive = (float4)_XMM8.v;
        if ( v82 )
        {
          _XMM4 = _mm128_add_ps(_mm128_mul_ps(v135.v, _mm128_sub_ps((__m128)0i64, v441.v)), _mm128_mul_ps(v134.v, v440.v));
          v135.v = _mm128_add_ps(_mm128_mul_ps(v134.v, v441.v), _mm128_mul_ps(v135.v, v440.v));
        }
        else
        {
          _XMM4 = v134.v;
        }
        if ( v377 != 0.0 )
        {
          _XMM3 = LODWORD(v377) ^ (unsigned __int128)_xmm;
          _XMM0 = v82 & 1;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm3, xmm5, xmm2
          }
          v133.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 0), _XMM4), v133.v);
        }
        v160 = _mm128_mul_ps(v135.v, _mm_shuffle_ps(v141, v141, 0));
        __asm
        {
          vmaxps  xmm0, xmm4, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
          vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        }
        v163 = _mm128_sub_ps(v133.v, v160);
        v164 = _mm128_add_ps(v133.v, v160);
        _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
        __asm
        {
          vcvttps2dq xmm3, xmm2
          vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
          vpshufd xmm0, xmm4, 44h ; 'D'
          vpor    xmm1, xmm0, xmm4
          vpshufd xmm0, xmm1, 0FFh
          vpor    xmm1, xmm0, xmm1
          vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
        }
        _XMM0 = v;
        _XMM11 = _mm128_mul_ps(v142, _XMM7.v);
        __asm { vblendps xmm7, xmm0, xmm2, 4 }
        if ( v143 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 115, ASSERT_TYPE_ASSERT, "(atlasBlend <= 1.0f)", (const char *)&queryFormat, "atlasBlend <= 1.0f") )
          __debugbreak();
        if ( atlasFrameIx >= v426 && entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 116, ASSERT_TYPE_ASSERT, "(( atlasIndex < atlasEntries ) || ( atlasEntries == 0 ))", (const char *)&queryFormat, "( atlasIndex < atlasEntries ) || ( atlasEntries == 0 )") )
          __debugbreak();
        v20 = *(_BYTE *)(v78 + 18) == 0;
        _XMM4 = 0i64;
        __asm { vroundss xmm4, xmm4, xmm1, 1 }
        v178 = LODWORD(FLOAT_1_0);
        *(float *)&v178 = (float)(1.0 - (float)((float)(*(float *)&_XMM4 * *(float *)&_XMM4) * 0.00000095553969)) - (float)(v143 * v143);
        _XMM3 = v178;
        __asm { vmaxss  xmm1, xmm3, xmm5 }
        fsqrt(*(float *)&_XMM1);
        _XMM3 = 0i64;
        __asm
        {
          vinsertps xmm3, xmm3, xmm0, 0
          vinsertps xmm3, xmm3, xmm6, 10h
          vinsertps xmm3, xmm3, xmm2, 20h ; ' '
          vmaxps  xmm0, xmm3, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
          vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        }
        _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
        __asm
        {
          vcvttps2dq xmm3, xmm2
          vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
          vpshufd xmm0, xmm4, 44h ; 'D'
          vpor    xmm1, xmm0, xmm4
          vpshufd xmm0, xmm1, 0AAh ; 'ª'
          vpor    xmm1, xmm0, xmm1
          vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
        }
        _XMM0 = v444;
        _XMM1 = v445;
        __asm { vblendps xmm2, xmm7, xmm2, 8 }
        v = _XMM2;
        __asm
        {
          vblendps xmm9, xmm0, xmm2, 0Ch
          vblendps xmm10, xmm1, xmm2, 0Ch
        }
        if ( v20 )
        {
          LODWORD(v402) = -1;
        }
        else
        {
          v200 = v428;
          if ( !v428 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 29, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 630, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
          }
          if ( !v200->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 631, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
            __debugbreak();
          if ( (v200->techniqueSet->flags & 0x400) != 0 && fx_gpu_lighting->current.enabled && R_UseBakedLighting() )
          {
            if ( !v200->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 639, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
              __debugbreak();
            v201 = (LODWORD(v200->techniqueSet->flags) >> 11) & 1;
          }
          else
          {
            v201 = 0xFFFFFFFFi64;
          }
          v402 = v201;
          if ( (_DWORD)v201 != -1 )
          {
            if ( v364 )
              _XMM6 = _mm128_add_ps(*(__m128 *)(v406 + v112 + 48), *(__m128 *)&v394[v400]);
            else
              _XMM6 = *(__m128 *)&v394[v400];
            if ( R_AllocateCodeSurfLightmap(v401->codeSurfGlob, (GfxMeshLightingType)v201, 0, activeLightGridsBitmask, &lightIter, &outLightmapOffset, &outLightmapU, &outLightmapV, &outLightmapD) )
            {
              _RAX = lightIter;
              _XMM1 = 0i64;
              __asm { vinsertps xmm1, xmm1, xmm7, 10h }
              lightIter->data0.v[0] = _XMM6.m128_f32[0];
              __asm
              {
                vextractps dword ptr [rax+4], xmm6, 1
                vextractps dword ptr [rax+8], xmm6, 2
              }
              LODWORD(v373) = outLightmapOffset & 0x3FFF | (outLightmapOffset >> 2) & 0xFFFC000 | (v368 << 28);
              lightIter->data0.v[3] = v373;
              __asm { vcvtps2ph xmm0, xmm1, 0 }
              lightIter->data1 = (vec4_t)_mm_shuffle_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, _XMM0, 250), 132);
              v207 = LODWORD(outLightmapU);
            }
            else
            {
              v207 = 0i64;
              outLightmapU = 0.0;
              outLightmapV = 0.0;
              outLightmapD = 0.0;
            }
            _XMM1 = v207;
            __asm
            {
              vinsertps xmm1, xmm1, xmm2, 10h
              vinsertps xmm1, xmm1, xmm0, 20h ; ' '
              vinsertps xmm1, xmm1, xmm0, 30h ; '0'
            }
            v443 = _XMM1;
            goto LABEL_200;
          }
        }
        _XMM1 = v443;
LABEL_200:
        _XMM0 = _mm_shuffle_ps(_XMM1, _XMM1, 152);
        __asm { vcvtps2ph xmm2, xmm0, 0 }
        v214 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM2, _XMM9, 80), _XMM9, 232);
        v215 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM10, _XMM2, 85), _XMM10, 230);
        _XMM6 = 0i64;
        if ( v367 )
        {
          _XMM8.v = 0i64;
          _XMM11 = _mm_shuffle_ps(_XMM11, _mm_shuffle_ps(_XMM11, (__m128)0i64, 250), 132);
          v433.emissive = 0i64;
        }
        v217 = *(float *)(v78 + 136);
        v383 = v217;
        if ( v370 )
        {
          _XMM4 = v392;
          _XMM0 = v371;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm14, xmm4, xmm3, xmm2
          }
          v373 = _XMM14.m128_f32[0];
        }
        else
        {
          v223 = 0i64;
          v223.m128_f32[0] = (float)(v82 + 1);
          v223.m128_f32[0] = (float)((float)(v223.m128_f32[0] * v90->tileOffset) + v217) / v389;
          v222 = v223;
          if ( v423 )
          {
            v224 = (float)(v427 % v423) / (float)v423;
            if ( v423 <= 0 )
            {
              v223.m128_f32[0] = v223.m128_f32[0] + (float)(1.0 - v224);
              v222 = v223;
            }
            else
            {
              v223.m128_f32[0] = v223.m128_f32[0] - v224;
              v222 = v223;
            }
          }
          __asm { vroundss xmm0, xmm6, xmm1, 1 }
          if ( v222.m128_f32[0] < 0.0 )
          {
            v227 = v222;
            v227.m128_f32[0] = (float)(v222.m128_f32[0] - *(float *)&_XMM0) - 1.0;
            _XMM14 = v227;
            v383 = v217;
          }
          else
          {
            v226 = v222;
            v226.m128_f32[0] = v222.m128_f32[0] - *(float *)&_XMM0;
            _XMM14 = v226;
          }
        }
        v228 = *(_QWORD *)(v78 + 8);
        v229 = *(float *)(v78 + 128);
        v378 = _XMM14.m128_u32[0];
        if ( *(_BYTE *)(v228 + 6) )
        {
          v230 = *(__int16 *)(v228 + 4);
          v231 = v230 - 1;
          if ( (unsigned int)(v230 - 1) > 0xFF || (v230 & v231) != 0 )
          {
            LODWORD(indicesa) = *(__int16 *)(v228 + 4);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 166, ASSERT_TYPE_ASSERT, "( ( atlasCount > 0 && atlasCount <= 256 && IsPowerOf2( atlasCount ) ) )", "( atlasCount ) = %i", indicesa) )
              __debugbreak();
          }
          v232 = v231 & (int)v229;
          v233 = v231 & (v232 + 1);
          if ( 1 << (*(_BYTE *)(v228 + 2) + *(_BYTE *)(v228 + 3)) != v230 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 178, ASSERT_TYPE_ASSERT, "(( 1 << ( atlasData.colIndexBits + atlasData.rowIndexBits ) ) == atlasCount)", (const char *)&queryFormat, "( 1 << ( atlasData.colIndexBits + atlasData.rowIndexBits ) ) == atlasCount") )
            __debugbreak();
          v234 = *(_BYTE *)(v228 + 3);
          v235 = *(_BYTE *)(v228 + 2);
          if ( v233 >= 1 << (v235 + v234) )
          {
            LODWORD(codeSurfFlags) = 1 << (v235 + v234);
            LODWORD(indicesa) = v233;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.h", 25, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( 1 << ( tilesWidePow2Bits + tilesHighPow2Bits ) )", "tileIndex doesn't index 1 << ( tilesWidePow2Bits + tilesHighPow2Bits )\n\t%i not in [0, %i)", indicesa, codeSurfFlags) )
              __debugbreak();
          }
          v236 = *(unsigned __int8 *)(v228 + 3);
          v237 = *(unsigned __int8 *)(v228 + 2);
          v238 = (unsigned int)(1 << v235);
          v239 = (float)v238;
          v240 = 1.0 / v239;
          v241 = (float)(unsigned int)(1 << v234);
          v242 = 1.0 / v241;
          t0[2] = v240;
          t0[3] = 1.0 / v241;
          TextureAtlas_GetCoords_ByIndex_Pow2Bits(v232, v237, v236, t0, &t0[2], &t0[1], &t0[3]);
          LOWORD(vertIndexOffset) = LOWORD(v375);
          v243 = v235;
          v78 = (__int64)v439;
          v244 = (float)(v233 & (v238 - 1));
          v245 = v233 >> v243;
          v82 = v376;
          v411 = (float)(v244 * v240) - t0[0];
          v246 = (float)v245;
          v412 = (float)(v246 * v242) - t0[1];
        }
        _XMM4 = LODWORD(t0[0]);
        __asm
        {
          vinsertps xmm4, xmm4, xmm2, 10h
          vinsertps xmm4, xmm4, xmm5, 20h ; ' '
          vinsertps xmm4, xmm4, xmm3, 30h ; '0'
        }
        v437 = _XMM4;
        if ( v369 )
        {
          v251 = (__m128)LODWORD(FLOAT_1_0);
          v251.m128_f32[0] = 1.0 - _XMM14.m128_f32[0];
          v252 = _mm_shuffle_ps(v251, v251, 0);
          v253 = _mm_shuffle_ps(_XMM4, _mm_shuffle_ps(v252, _XMM4, 250), 132);
          v254 = _mm_shuffle_ps(v253, _mm_shuffle_ps(v253, v252, 250), 132);
          _XMM0 = _mm_shuffle_ps(v254, v254, 152);
          __asm { vcvtps2ph xmm2, xmm0, 0 }
          v257 = _mm_shuffle_ps(_mm_shuffle_ps(v214, _XMM2, 0), v214, 232);
          v258 = _mm_shuffle_ps(_mm_shuffle_ps(v215, _XMM2, 80), v215, 232);
        }
        else
        {
          v259 = _mm_shuffle_ps(_XMM14, _XMM14, 0);
          v260 = _mm_shuffle_ps(_mm_shuffle_ps(v259, _XMM4, 80), _XMM4, 232);
          v261 = _mm_shuffle_ps(_mm_shuffle_ps(v260, v259, 80), v260, 232);
          _XMM0 = _mm_shuffle_ps(v261, v261, 200);
          __asm { vcvtps2ph xmm2, xmm0, 0 }
          v258 = _mm_shuffle_ps(_mm_shuffle_ps(v215, _XMM2, 0), v215, 232);
          v257 = _mm_shuffle_ps(_mm_shuffle_ps(v214, _XMM2, 80), v214, 232);
        }
        v444 = v257;
        v445 = v258;
        v264 = ParticleEmitter::EvaluateDistanceFade(v399, *(float *)&v436[4 * v421]);
        v265 = FLOAT_1_0;
        if ( *(float *)&v264 < 1.0 )
        {
          _XMM1 = _xmm;
          _XMM0 = _xmm;
          __asm
          {
            vinsertps xmm1, xmm1, xmm2, 0
            vinsertps xmm1, xmm1, xmm2, 10h
            vinsertps xmm1, xmm1, xmm2, 20h ; ' '
          }
          _XMM8.v = _mm128_mul_ps(_XMM1, _XMM8.v);
          __asm { vinsertps xmm0, xmm0, xmm2, 30h ; '0' }
          v433.emissive = (float4)_XMM8.v;
          _XMM11 = _mm128_mul_ps(_XMM0, _XMM11);
        }
        vec.v[0] = _XMM8.v.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rsp+5E8h+vec+4], xmm8, 1
          vextractps dword ptr [rsp+5E8h+vec+8], xmm8, 2
          vcvtps2ph xmm6, xmm11, 0
        }
        v385 = COERCE_FLOAT(Vec3PackR11G11B10F(&vec));
        _mm_shuffle_ps(_XMM8.v, _XMM8.v, 255);
        _XMM1 = 0i64;
        __asm
        {
          vinsertps xmm1, xmm1, xmm0, 0
          vinsertps xmm1, xmm1, xmm15, 10h
          vcvtps2ph xmm0, xmm1, 0
        }
        v373 = *(float *)&_XMM0;
        _mm_shuffle_ps(_XMM6, _XMM6, 85);
        __asm
        {
          vinsertps xmm6, xmm6, xmm0, 10h
          vinsertps xmm6, xmm6, [rsp+5E8h+var_4C8], 20h
          vinsertps xmm6, xmm6, [rsp+5E8h+var_4FC], 30h
        }
        if ( perFrameActiveEmitterIndex > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 214, ASSERT_TYPE_ASSERT, "(perFrameActiveEmitterIndex <= 0x00ffff)", (const char *)&queryFormat, "perFrameActiveEmitterIndex <= 0x00ffff") )
          __debugbreak();
        _XMM0 = 0i64;
        __asm { vroundss xmm0, xmm0, xmm2, 1 }
        v282 = I_clamp((int)*(float *)&_XMM0, 0, 255);
        *(__m128 *)v81->xyz.v = v164;
        v81->color = _XMM6;
        *(__m128 *)&v81->lightingCoord.packed = v258;
        v283 = perFrameActiveEmitterIndex | (v282 << 24);
        v81->extraData = v283;
        *(__m128 *)v81[1].xyz.v = v163;
        v81[1].color = _XMM6;
        *(__m128 *)&v81[1].lightingCoord.packed = v257;
        v81[1].extraData = v283;
        v81 += 2;
        v284 = 0;
        *(_QWORD *)&v454 = v81;
        if ( v404 )
        {
          *(float *)&v285 = v398;
          v286 = v404 - 1;
          v287 = (__int64)v409;
          while ( 1 )
          {
            v288 = v413;
            if ( (unsigned int)v285 >= v413->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
              __debugbreak();
            v289 = (unsigned int)(v285 + 1) % v288->numPointsMax;
            v450 = *(__m256i *)v433.position.v.m128_f32;
            v285 = v289;
            v451 = *(__m256i *)v433.tangent.v.m128_f32;
            v452 = *(__m256i *)v433.size.v.m128_f32;
            v453 = *(__m256i *)v433.intensity.v.m128_f32;
            if ( v284 == v286 && (_BYTE)v425 )
            {
              m_pModuleInitRelativeVelocity = v434->m_particleState.m_pModuleInitRelativeVelocity;
              if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
              {
                v292.v = v435->v;
              }
              else
              {
                v291 = v435->v;
                v292.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v291, v291, 0), *p_v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v291, v291, 85), p_v[1]), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v291, v291, 170), p_v[2]), p_v[3])));
              }
              v293 = v434->m_particleState.m_pStateDef;
              v433.position = (float4)v292.v;
              if ( (v293->flags & 0x10000000) != 0 )
              {
                v292.v = _mm128_add_ps(v292.v, ParticleEmitter::GetSystemOwner(v399)->m_systemTransform.w.v);
                v433.position = (float4)v292.v;
              }
              v294 = v285;
            }
            else
            {
              v294 = v289;
              v295 = (__m128 *)&v394[16 * v289];
              if ( v364 )
                v292.v = _mm128_add_ps(*(__m128 *)(v287 + 80 * v285 + 48), *v295);
              else
                v292.v = *v295;
              v433.position = (float4)v292.v;
            }
            v296 = *(__m128 *)(v78 + 144);
            v297 = 80 * v294;
            v449 = *(__m128 *)(80 * v294 + v287 + 32);
            v433.normal.v = v449;
            v442 = *(__m128 *)(80 * v294 + v287);
            v433.tangent.v = v442;
            v433.color.v = _mm128_mul_ps(v296, *(__m128 *)&v415[16 * v294]);
            v298 = *(__m128 *)&v431[16 * v294];
            v299 = (__m128 *)&v416[16 * v294];
            v403.v = v298;
            if ( !(_BYTE)v417 )
              v299 = (__m128 *)(v78 + 48);
            v433.size.v = v298;
            v300 = *v299;
            if ( (_BYTE)v417 )
              v301 = *(int *)&v418[4 * v294];
            else
              *(float *)&v301 = v390;
            v433.lightingFrac = *(float *)&v301;
            v385 = *(float *)&v301;
            if ( (_BYTE)v414 )
              v302 = *(int *)&v405[4 * v294];
            else
              *(float *)&v302 = v384;
            v433.temperatureScale = *(float *)&v302;
            v373 = *(float *)&v302;
            _XMM8 = _xmm;
            __asm
            {
              vinsertps xmm8, xmm8, xmm0, 0
              vinsertps xmm8, xmm8, xmm0, 10h
            }
            v306 = *(float *)&v436[4 * v294];
            __asm { vinsertps xmm8, xmm8, xmm0, 20h ; ' ' }
            v433.atlasFrameIx = *(float *)&v453.m256i_i32[6];
            v433.atlasBlend = *(float *)&v453.m256i_i32[7];
            v433.intensity = (float4)_XMM8.v;
            v308 = ParticleEmitter::EvaluateDistanceFade(v399, v306);
            v309 = *(float *)&v308 < v265;
            v375 = *(float *)&v308;
            v455.v = v300;
            if ( v300.m128_f32[0] > 0.039280001 )
            {
              v313 = v300.m128_f32[0] * 0.94786733;
              v312 = FLOAT_0_052132703;
              v311 = powf_0(v313 + 0.052132703, 2.4000001);
              v310 = FLOAT_0_077399381;
            }
            else
            {
              v310 = FLOAT_0_077399381;
              v311 = v300.m128_f32[0] * 0.077399381;
              v312 = FLOAT_0_052132703;
            }
            v455.v.m128_f32[0] = v311;
            if ( v455.v.m128_f32[1] > 0.039280001 )
              v314 = powf_0((float)(v455.v.m128_f32[1] * 0.94786733) + v312, 2.4000001);
            else
              v314 = v455.v.m128_f32[1] * v310;
            v455.v.m128_f32[1] = v314;
            if ( v455.v.m128_f32[2] > 0.039280001 )
              powf_0((float)(v455.v.m128_f32[2] * 0.94786733) + v312, 2.4000001);
            _XMM9 = v455.v;
            v316 = *(float *)(v297 + v287 + 64);
            v317 = v383;
            v318 = *(__m128 *)v453.m256i_i8;
            v319 = *(__m128 *)&v452.m256i_u64[2];
            v320 = *(__m128 *)v452.m256i_i8;
            v321 = *(__m128 *)&v451.m256i_u64[2];
            __asm { vinsertps xmm9, xmm9, xmm0, 20h ; ' ' }
            v455.v = _XMM9;
            v433.emissive.v = _XMM9;
            v323 = v316 - v383;
            if ( !v367 )
              goto LABEL_285;
            v324 = (__m128)LODWORD(v386);
            if ( v316 > v386 && v386 > v383 )
            {
              if ( !v393 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1741, ASSERT_TYPE_ASSERT, "(createFadeOutSegment)", (const char *)&queryFormat, "createFadeOutSegment") )
                  __debugbreak();
                v324 = (__m128)LODWORD(v386);
              }
              v325 = v324;
              v325.m128_f32[0] = v324.m128_f32[0] - v317;
              if ( v323 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1744, ASSERT_TYPE_ASSERT, "(segmentSize > 0.f)", (const char *)&queryFormat, "segmentSize > 0.f") )
                __debugbreak();
              v326 = v325.m128_f32[0] * (float)(1.0 / v389);
              v325.m128_f32[0] = v325.m128_f32[0] / v323;
              v327 = v325;
              v328 = v326 + *(float *)&v378;
              v329 = _mm_shuffle_ps(v327, v327, 0);
              v447.position.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v292.v, *(__m128 *)v450.m256i_i8), v329), *(__m128 *)v450.m256i_i8);
              v447.normal.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v449, *(__m128 *)&v450.m256i_u64[2]), v329), *(__m128 *)&v450.m256i_u64[2]);
              v447.tangent.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v442, *(__m128 *)v451.m256i_i8), v329), *(__m128 *)v451.m256i_i8);
              v447.color.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v433.color.v, v321), v329), v321);
              v447.size.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v403.v, v320), v329), v320);
              v447.emissive.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM9, v319), v329), v319);
              v447.intensity.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM8.v, v318), v329), v318);
              v447.lightingFrac = (float)(v327.m128_f32[0] * v385) + (float)((float)(1.0 - v327.m128_f32[0]) * *(float *)&v453.m256i_i32[4]);
              v447.temperatureScale = (float)(v327.m128_f32[0] * v373) + (float)((float)(1.0 - v327.m128_f32[0]) * *(float *)&v453.m256i_i32[5]);
              v447.atlasFrameIx = (float)((float)(*(float *)&v453.m256i_i32[6] - *(float *)&v453.m256i_i32[6]) * v325.m128_f32[0]) + *(float *)&v453.m256i_i32[6];
              v330 = entryCount ? fmodf_0((float)((float)(*(float *)&v453.m256i_i32[6] - *(float *)&v453.m256i_i32[6]) * v325.m128_f32[0]) + *(float *)&v453.m256i_i32[6], 1.0) : 0.0;
              v447.atlasBlend = v330;
              v331 = v366 || v309;
              v455.v = v437;
              v332 = (int)v402;
              FX_TrailGenVerts_AddSegment(v401, (GfxSpriteVertex **)&v454, v372, (r_double_index_t **)&v407, v369, v328, (GfxMeshLightingType)v402, activeLightGridsBitmask, v368, *(float *)(v78 + 40), v376, &v455, &v447, *(const ParticleAtlasData **)(v78 + 8), v377, &v441, &v440, v331, v375, v365, v367, v382, v381, v386, v379, spawnDistance, perFrameActiveEmitterIndex);
              v317 = v383;
            }
            else
            {
LABEL_285:
              v332 = (int)v402;
            }
            v333 = v365;
            if ( v365 && (v334 = (__m128)LODWORD(v388), v316 > v388) && v388 > v317 )
            {
              if ( !v387 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1759, ASSERT_TYPE_ASSERT, "(createFadeInSegment)", (const char *)&queryFormat, "createFadeInSegment") )
                  __debugbreak();
                v334 = (__m128)LODWORD(v388);
              }
              v335 = v334;
              v335.m128_f32[0] = v334.m128_f32[0] - v317;
              if ( v323 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1762, ASSERT_TYPE_ASSERT, "(segmentSize > 0.f)", (const char *)&queryFormat, "segmentSize > 0.f") )
                __debugbreak();
              v336 = v335.m128_f32[0] * (float)(1.0 / v389);
              v335.m128_f32[0] = v335.m128_f32[0] / v323;
              v337 = v335;
              v338 = v336 + *(float *)&v378;
              v339 = _mm_shuffle_ps(v337, v337, 0);
              v447.position.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v292.v, *(__m128 *)v450.m256i_i8), v339), *(__m128 *)v450.m256i_i8);
              v447.normal.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v449, *(__m128 *)&v450.m256i_u64[2]), v339), *(__m128 *)&v450.m256i_u64[2]);
              v447.tangent.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v442, *(__m128 *)v451.m256i_i8), v339), *(__m128 *)v451.m256i_i8);
              v447.color.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v433.color.v, v321), v339), v321);
              v447.size.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v403.v, v320), v339), v320);
              v447.emissive.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM9, v319), v339), v319);
              v447.intensity.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM8.v, v318), v339), v318);
              v447.lightingFrac = (float)(v337.m128_f32[0] * v385) + (float)((float)(1.0 - v337.m128_f32[0]) * *(float *)&v453.m256i_i32[4]);
              v447.temperatureScale = (float)(v337.m128_f32[0] * v373) + (float)((float)(1.0 - v337.m128_f32[0]) * *(float *)&v453.m256i_i32[5]);
              v447.atlasFrameIx = (float)((float)(*(float *)&v453.m256i_i32[6] - *(float *)&v453.m256i_i32[6]) * v337.m128_f32[0]) + *(float *)&v453.m256i_i32[6];
              v340 = entryCount ? fmodf_0((float)((float)(*(float *)&v453.m256i_i32[6] - *(float *)&v453.m256i_i32[6]) * v337.m128_f32[0]) + *(float *)&v453.m256i_i32[6], 1.0) : 0.0;
              v447.atlasBlend = v340;
              v341 = v366 || v309;
              v342 = spawnDistance;
              v343 = v379;
              v344 = v381;
              v345 = v382;
              v346 = v375;
              v347 = v377;
              v348 = v437;
              v349 = *(float *)(v78 + 40);
              v362 = v341;
              v350 = *(const ParticleAtlasData **)(v78 + 8);
              v403.v = v437;
              FX_TrailGenVerts_AddSegment(v401, (GfxSpriteVertex **)&v454, v372, (r_double_index_t **)&v407, v369, v338, v332, activeLightGridsBitmask, v368, v349, v376, &v403, &v447, v350, v377, &v441, &v440, v362, v375, v365, v367, v382, v381, v388, v379, spawnDistance, perFrameActiveEmitterIndex);
              v333 = v365;
            }
            else
            {
              v346 = v375;
              v348 = v437;
              v347 = v377;
              v343 = v379;
              v342 = spawnDistance;
              v344 = v381;
              v345 = v382;
            }
            v352 = v378;
            *(float *)&v352 = *(float *)&v378 - (float)(v323 * (float)(1.0 / v389));
            _XMM2 = v352;
            _XMM0 = v371;
            __asm
            {
              vpcmpeqd xmm1, xmm0, xmm1
              vblendvps xmm2, xmm2, xmm3, xmm1
            }
            v398 = *(float *)&_XMM2;
            v383 = v316;
            v356 = v366 || v309;
            v357 = *(float *)(v78 + 40);
            v82 = v376;
            v363 = v356;
            v358 = *(const ParticleAtlasData **)(v78 + 8);
            *(float *)&v378 = v398;
            v403.v = v348;
            FX_TrailGenVerts_AddSegment(v401, (GfxSpriteVertex **)&v454, v372, (r_double_index_t **)&v407, v369, v398, v332, activeLightGridsBitmask, v368, v357, v376, &v403, &v433, v358, v347, &v441, &v440, v363, v346, v333, v367, v345, v344, v316, v343, v342, perFrameActiveEmitterIndex);
            if ( ++v284 >= v404 )
              break;
            v265 = FLOAT_1_0;
          }
          LOWORD(vertIndexOffset) = v372[0];
          v81 = (GfxSpriteVertex *)v454;
        }
        v83 = *(float *)&firstPointIndex;
        LOWORD(vertIndexOffset) = vertIndexOffset + 2;
        *(float *)&lightingFrac_low = v390;
        *(float *)&temperatureScale_low = v384;
        v42 = v424;
        v84 = entryCount;
        v87 = firstPointIndex + 1;
        v88 = v400;
        ++v82;
        v89 = v421;
        v86 = v406;
        LOWORD(v375) = vertIndexOffset;
        v372[0] = vertIndexOffset;
        v376 = v82;
        atlasFrameIx = 0.0;
      }
      while ( v82 < v396 );
    }
    if ( v432 != (unsigned __int16)vertIndexOffset - outBuffers.vertIndexOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1787, ASSERT_TYPE_ASSERT, "(numVerts == static_cast<uint>(vertIndexOffset - codeSurfBuffers.vertIndexOffset))", (const char *)&queryFormat, "numVerts == static_cast<uint>(vertIndexOffset - codeSurfBuffers.vertIndexOffset)") )
      __debugbreak();
  }
}

/*
==============
FX_TrailGenVerts_AddSegment
==============
*/
void FX_TrailGenVerts_AddSegment(FxDrawState *draw, GfxSpriteVertex **vertIter, unsigned __int16 *vertIndexOffset, r_double_index_t **indices, bool useVerticalTexture, float uOffset, GfxMeshLightingType lightingType, unsigned int activeLightGridsBitmask, bool isSurface, float anisotropy, unsigned int sheetIndex, float4 *texCoords, FX_TrailGenVerts_DrawData *drawData, const ParticleAtlasData *atlasData, float centerOffset, float4 *sinRot, float4 *cosRot, bool hasAlphaFade, float cameraDistanceFade, bool fadeIn, bool fadeOut, float fadeInDistance, float fadeOutDistance, float spawnDistanceCurr, float spawnDistanceStart, float spawnDistanceEnd, unsigned int perFrameActiveEmitterIndex)
{
  __m128 v; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v38; 
  __m128 v39; 
  __m128 v41; 
  __m128 v42; 
  __int128 v45; 
  float4 v60; 
  float4 v65; 
  unsigned int entryCount; 
  __m128 v70; 
  __m128 v72; 
  __m128 v73; 
  float v86; 
  double v87; 
  double v88; 
  unsigned __int16 v95; 
  r_double_index_t *v96; 
  unsigned int v99; 
  unsigned int v108; 
  unsigned int outLightmapOffset; 
  float v110; 
  float outLightmapU; 
  float outLightmapV; 
  float outLightmapD; 
  float4 packedAtlasParams_8; 

  _RBX = drawData;
  v = texCoords->v;
  if ( useVerticalTexture )
  {
    v32 = (__m128)LODWORD(FLOAT_1_0);
    v32.m128_f32[0] = 1.0 - uOffset;
    v33 = _mm_shuffle_ps(v32, v32, 0);
    v34 = _mm_shuffle_ps(v, _mm_shuffle_ps(v33, v, 250), 132);
    v35 = _mm_shuffle_ps(v34, _mm_shuffle_ps(v34, v33, 250), 132);
    _XMM0 = _mm_shuffle_ps(v35, v35, 152);
    __asm { vcvtps2ph xmm3, xmm0, 0 }
    v38 = _mm_shuffle_ps(_mm_shuffle_ps(packedAtlasParams_8.v, _XMM3, 0), packedAtlasParams_8.v, 232);
    v39 = _mm_shuffle_ps(_mm_shuffle_ps(packedAtlasParams_8.v, _XMM3, 80), packedAtlasParams_8.v, 232);
  }
  else
  {
    __asm { vbroadcastss xmm1, [rbp+60h+arg_28] }
    v41 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM1, v, 80), v, 232);
    v42 = _mm_shuffle_ps(_mm_shuffle_ps(v41, _XMM1, 80), v41, 232);
    _XMM0 = _mm_shuffle_ps(v42, v42, 200);
    __asm { vcvtps2ph xmm3, xmm0, 0 }
    v39 = _mm_shuffle_ps(_mm_shuffle_ps(packedAtlasParams_8.v, _XMM3, 0), packedAtlasParams_8.v, 232);
    v38 = _mm_shuffle_ps(_mm_shuffle_ps(packedAtlasParams_8.v, _XMM3, 80), packedAtlasParams_8.v, 232);
  }
  if ( lightingType == GFX_MESH_LIGHTING_NONE )
  {
    _XMM0 = packedAtlasParams_8.v;
  }
  else
  {
    v45 = 0i64;
    if ( R_AllocateCodeSurfLightmap(draw->codeSurfGlob, lightingType, 0, activeLightGridsBitmask, (GfxMeshDataLightingInput **)&packedAtlasParams_8, &outLightmapOffset, &outLightmapU, &outLightmapV, &outLightmapD) )
    {
      _RAX = packedAtlasParams_8.v.m128_u64[0];
      _XMM1.v = (__m128)drawData->position;
      *(float *)packedAtlasParams_8.v.m128_u64[0] = COERCE_FLOAT(*(_OWORD *)&drawData->position);
      __asm
      {
        vextractps dword ptr [rax+4], xmm1, 1
        vextractps dword ptr [rax+8], xmm1, 2
      }
      LODWORD(v110) = outLightmapOffset & 0x3FFF | (outLightmapOffset >> 2) & 0xFFFC000 | (isSurface << 28);
      *(float *)(packedAtlasParams_8.v.m128_u64[0] + 12) = v110;
      _XMM0 = 0i64;
      __asm
      {
        vinsertps xmm0, xmm0, [rbp+60h+arg_48], 10h
        vcvtps2ph xmm1, xmm0, 0
      }
      *(__m128 *)(packedAtlasParams_8.v.m128_u64[0] + 16) = _mm_shuffle_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, _XMM1, 250), 132);
      v45 = LODWORD(outLightmapU);
    }
    else
    {
      outLightmapV = 0.0;
      outLightmapU = 0.0;
      outLightmapD = 0.0;
    }
    _XMM0 = v45;
    __asm
    {
      vinsertps xmm0, xmm0, xmm2, 10h
      vinsertps xmm0, xmm0, xmm3, 20h ; ' '
      vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    }
  }
  _XMM0 = _mm_shuffle_ps(_XMM0, _XMM0, 152);
  __asm { vcvtps2ph xmm2, xmm0, 0 }
  _XMM10 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM2, v38, 80), v38, 232);
  _XMM9 = _mm_shuffle_ps(_mm_shuffle_ps(v39, _XMM2, 85), v39, 230);
  if ( sheetIndex )
  {
    _XMM5.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)0i64, sinRot->v), drawData->tangent.v), _mm128_mul_ps(drawData->normal.v, cosRot->v));
    v60.v = _mm128_add_ps(_mm128_mul_ps(drawData->normal.v, sinRot->v), _mm128_mul_ps(drawData->tangent.v, cosRot->v));
  }
  else
  {
    v60.v = (__m128)drawData->tangent;
    _XMM5.v = (__m128)drawData->normal;
  }
  if ( centerOffset == 0.0 )
  {
    v65.v = (__m128)drawData->position;
  }
  else
  {
    _XMM3 = LODWORD(centerOffset) ^ (unsigned __int128)_xmm;
    _XMM0 = sheetIndex & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm4, xmm3, xmm4, xmm2
    }
    v65.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM4, _XMM4, 0), _XMM5.v), drawData->position.v);
  }
  __asm
  {
    vbroadcastss xmm1, dword ptr [rbx+40h]
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  entryCount = atlasData->entryCount;
  v70 = _mm128_mul_ps(v60.v, _XMM1);
  _XMM11 = _mm128_mul_ps(drawData->intensity.v, drawData->color.v);
  v72 = _mm128_sub_ps(v65.v, v70);
  v73 = _mm128_add_ps(v65.v, v70);
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0FFh
    vpor    xmm1, xmm0, xmm1
  }
  _XMM0 = packedAtlasParams_8.v;
  __asm
  {
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm1, xmm0, xmm2, 4
  }
  _XMM0.m128_i32[0] = LODWORD(drawData->atlasFrameIx);
  packedAtlasParams_8.v = _XMM1;
  FX_PackAtlasParamsAsNorm32W(_XMM0.m128_f32[0], drawData->atlasBlend, entryCount, &packedAtlasParams_8);
  __asm
  {
    vblendps xmm14, xmm10, xmmword ptr [rsp+160h+packedAtlasParams.v+8], 0Ch
    vblendps xmm15, xmm9, xmmword ptr [rsp+160h+packedAtlasParams.v+8], 0Ch
  }
  if ( hasAlphaFade )
  {
    v86 = FLOAT_1_0;
    if ( fadeOut )
    {
      if ( fadeOutDistance == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1308, ASSERT_TYPE_ASSERT, "(fadeOutDistance != 0.f)", (const char *)&queryFormat, "fadeOutDistance != 0.f") )
        __debugbreak();
      I_fclamp((float)(spawnDistanceCurr - spawnDistanceStart) / fadeOutDistance, 0.0, 1.0);
      v86 = (float)(spawnDistanceCurr - spawnDistanceStart) / fadeOutDistance;
    }
    if ( fadeIn )
    {
      if ( fadeInDistance == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1314, ASSERT_TYPE_ASSERT, "(fadeInDistance != 0.f)", (const char *)&queryFormat, "fadeInDistance != 0.f") )
        __debugbreak();
      v87 = I_fclamp((float)(spawnDistanceEnd - spawnDistanceCurr) / fadeInDistance, 0.0, 1.0);
      v86 = v86 * *(float *)&v87;
    }
    if ( cameraDistanceFade < 1.0 )
    {
      v88 = I_fclamp(cameraDistanceFade, 0.0, 1.0);
      v86 = v86 * *(float *)&v88;
    }
    if ( v86 != 1.0 )
    {
      _XMM3 = _xmm;
      _XMM1 = _xmm;
      __asm
      {
        vinsertps xmm3, xmm3, xmm2, 0
        vinsertps xmm3, xmm3, xmm2, 10h
        vinsertps xmm3, xmm3, xmm2, 20h ; ' '
        vinsertps xmm1, xmm1, xmm2, 30h ; '0'
      }
      drawData->emissive.v = _mm128_mul_ps(_XMM3, drawData->emissive.v);
      _XMM11 = _mm128_mul_ps(_XMM1, _XMM11);
    }
  }
  v95 = *vertIndexOffset;
  v96 = *indices;
  LOWORD(outLightmapOffset) = v95;
  __asm { vcvtps2ph xmm7, xmm11, 0 }
  HIWORD(outLightmapOffset) = v95 + 1;
  *v96 = (r_double_index_t)outLightmapOffset;
  LOWORD(outLightmapOffset) = v95 + 2;
  HIWORD(outLightmapOffset) = v95 + 2;
  v96[1] = (r_double_index_t)outLightmapOffset;
  LOWORD(outLightmapOffset) = v95 + 1;
  HIWORD(outLightmapOffset) = v95 + 3;
  v96[2] = (r_double_index_t)outLightmapOffset;
  *indices = v96 + 3;
  *vertIndexOffset += 2;
  _XMM1.v = (__m128)drawData->emissive;
  packedAtlasParams_8.v.m128_i32[0] = _XMM1.v.m128_i32[0];
  __asm
  {
    vextractps dword ptr [rsp+160h+packedAtlasParams.v+0Ch], xmm1, 1
    vextractps [rsp+160h+var_E8], xmm1, 2
  }
  v99 = Vec3PackR11G11B10F((const vec3_t *)&packedAtlasParams_8);
  _XMM1.v.m128_i32[0] = LODWORD(drawData->temperatureScale);
  _XMM2 = 0i64;
  __asm
  {
    vinsertps xmm2, xmm2, dword ptr [rbx+5Ch], 0
    vinsertps xmm2, xmm2, xmm6, 10h
    vcvtps2ph xmm0, xmm2, 0
  }
  outLightmapOffset = v99;
  _mm_shuffle_ps(_XMM7, _XMM7, 85);
  v110 = *(float *)&_XMM0;
  _XMM6 = _XMM7;
  __asm
  {
    vinsertps xmm6, xmm6, xmm0, 10h
    vinsertps xmm6, xmm6, [rsp+160h+var_110], 20h
    vinsertps xmm6, xmm6, [rsp+160h+var_10C], 30h
  }
  v108 = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, _XMM1.v.m128_f32[0]);
  *(__m128 *)(*vertIter)->xyz.v = v73;
  (*vertIter)->color = _XMM6;
  *(_OWORD *)&(*vertIter)->lightingCoord.packed = _XMM15;
  (*vertIter)->extraData = v108;
  ++*vertIter;
  *(__m128 *)(*vertIter)->xyz.v = v72;
  (*vertIter)->color = _XMM6;
  *(_OWORD *)&(*vertIter)->lightingCoord.packed = _XMM14;
  (*vertIter)->extraData = v108;
  ++*vertIter;
}

/*
==============
GetMeshLightingType
==============
*/
__int64 GetMeshLightingType(const Material *material)
{
  if ( !material )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 29, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 630, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
      __debugbreak();
  }
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 631, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  if ( (material->techniqueSet->flags & 0x400) == 0 || !fx_gpu_lighting->current.enabled || !R_UseBakedLighting() )
    return 0xFFFFFFFFi64;
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 639, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
    __debugbreak();
  return (LODWORD(material->techniqueSet->flags) >> 11) & 1;
}

