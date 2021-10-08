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
  const ParticleSystem *v29; 
  unsigned __int64 v33; 
  bool v35; 
  unsigned int v54; 
  const ParticleModuleGroupDef **p_moduleGroupDefs; 
  const ParticleModuleGroupDef *v66; 
  ParticleModulePositionGraph *v67; 
  FxSpriteInfo *p_sprite; 
  bool v69; 
  bool v70; 
  ParticleEmitter *v72; 
  unsigned __int16 vertIndexOffset; 
  r_double_index_t *v74; 
  ParticleSystem *v75; 
  const ParticleSystemDef *Def; 
  const float4 *v87; 
  __int64 v99; 
  GfxMeshLightingType MeshLightingType; 
  bool v129; 
  const ParticleAtlasData *atlasData; 
  unsigned int entryCount; 
  GfxCodeSurfGlob *v194; 
  float4 *v219; 
  float4 *v221; 
  float4 *v222; 
  ParticleModule *v235; 
  unsigned int m_particleCountRunning; 
  unsigned int v264; 
  unsigned int v275; 
  __int16 v281; 
  ParticleModule *v284; 
  r_double_index_t *v297; 
  bool v298; 
  ParticleModule *v328; 
  char v346; 
  unsigned int v349; 
  ParticleModule *v350; 
  float v383; 
  float4 *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  ParticleEmitter *outCurvePoint2; 
  bool m_useCurvePoints; 
  unsigned int outLightmapOffset; 
  int v408; 
  unsigned int v409; 
  unsigned int vertCount; 
  int codeSurfFlags; 
  float outLightmapU; 
  float outLightmapV; 
  float outLightmapD; 
  ParticleEmitter *pEmitterOwnera; 
  Particle_DrawData *drawData; 
  const float4 *v422; 
  r_double_index_t *indices; 
  __int64 pModule; 
  ParticleModule *v428; 
  FxAtlasCoords outAtlasCoords; 
  float4 cameraPos; 
  float4 currLookAt; 
  ParticleModule *pModuleBase; 
  float4 v437; 
  GfxCodeSurfBuffers outBuffers; 
  vector3 outMatrix; 
  vec3_t lightIter; 
  float4 packedAtlasParams; 
  float4 outStartPos; 
  float4 outEndPos; 
  float4 v446; 
  float4 outCurvePoint1; 
  char v453; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  _R13 = r_drawData;
  _RDI = rParticleStateData;
  v422 = tangent;
  pEmitterOwnera = (ParticleEmitter *)pEmitterOwner;
  LOBYTE(codeSurfFlags) = r_drawData->codeSurfFlags;
  *(_QWORD *)lightIter.v = draw;
  drawData = (Particle_DrawData *)r_drawData;
  __asm
  {
    vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
    vxorps  xmm12, xmm12, xmm12
    vmovups xmmword ptr [rbp+220h+outAtlasCoords.u], xmm0
    vmovss  xmm0, dword ptr [r13+24h]
    vmovss  [rsp+320h+var_2A4], xmm0
    vmovss  [rbp+220h+outAtlasCoords.blendU], xmm12
    vmovss  [rbp+220h+outAtlasCoords.blendV], xmm12
  }
  if ( !rParticleStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 759, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( _RDI->m_particleState.m_pStateDef->elementType != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 760, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_BEAM)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_BEAM") )
    __debugbreak();
  pModule = (__int64)_RDI->m_particleState.m_elementTypeModule.pModule;
  if ( !pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 762, ASSERT_TYPE_ASSERT, "(pModuleInitBeam)", (const char *)&queryFormat, "pModuleInitBeam") )
    __debugbreak();
  SystemOwner = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  _RDI->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[0] = 0i64;
  _RDI->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[1] = 0i64;
  _RDI->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[0] = 0i64;
  _RDI->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[1] = 0i64;
  *(_QWORD *)&_RDI->m_particleState.m_moduleGraphLengthData.useLength = 0i64;
  *(_QWORD *)_RDI->m_particleState.m_moduleGraphLengthData.pad = 0i64;
  _RDI->m_particleState.m_moduleGraphLengthData.useLength = 1;
  v29 = ParticleEmitter::GetSystemOwner((ParticleEmitter *)pEmitterOwner);
  _RCX = pModule;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+78h]
    vmovss  xmm9, dword ptr [rcx+0Ch]
  }
  v33 = (unsigned __int64)LODWORD(v29->m_flags) >> 8;
  LOBYTE(v29) = *(_BYTE *)(pModule + 8) & 1;
  __asm
  {
    vmovss  [rbp+220h+var_280], xmm0
    vmovss  xmm0, dword ptr [rdi+30h]
  }
  LOBYTE(v408) = (_BYTE)v29;
  v35 = (v33 & 1) == 0;
  m_useCurvePoints = SystemOwner->m_beamData.m_useCurvePoints;
  __asm
  {
    vmovss  [rsp+320h+var_2B8], xmm0
    vmovss  xmm0, dword ptr [rdi+34h]
    vmovss  [rbp+220h+var_27C], xmm0
  }
  if ( m_useCurvePoints )
    ParticleEmitter::GetBeamCurvePoints((ParticleEmitter *)pEmitterOwner, &_RDI->m_particleState, &outStartPos, &outEndPos, &outCurvePoint1, &v446);
  else
    ParticleEmitter::GetBeamPos((ParticleEmitter *)pEmitterOwner, &_RDI->m_particleState, &outStartPos, &outEndPos);
  __asm
  {
    vmovaps xmmword ptr [rsp+320h+var_58+8], xmm7
    vmovups xmm1, xmmword ptr [rbp+220h+outStartPos.v]
  }
  if ( v35 )
    __asm { vaddps  xmm7, xmm1, xmmword ptr [r13+40h] }
  else
    __asm { vmovups xmm7, xmmword ptr [r13+40h] }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+220h+outEndPos.v]
    vmovss  xmm10, cs:__real@3f800000
    vsubps  xmm1, xmm0, xmm1
    vmulps  xmm0, xmm1, xmm1
    vmovups xmmword ptr [rbp+220h+currLookAt.v], xmm1
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm8, xmm0
    vxorps  xmm1, xmm1, xmm1
    vdivss  xmm6, xmm10, xmm9
    vmulss  xmm0, xmm6, xmm8
    vroundss xmm1, xmm1, xmm0, 2
    vcvttss2si r13, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmm2, xmm10; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  vertCount = 2 * _R13 + 2;
  v54 = 6 * _R13;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  [rbp+220h+var_28C], xmm0
    vmulss  xmm0, xmm0, xmm9
    vdivss  xmm0, xmm8, xmm0; val
    vmovups [rbp+220h+var_180], xmm8
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vmulss  xmm2, xmm1, xmm9
    vsubss  xmm3, xmm8, xmm2
    vmovss  [rbp+220h+var_290], xmm0
    vmulss  xmm0, xmm3, xmm6; val
    vmovaps xmm2, xmm10; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  p_moduleGroupDefs = (const ParticleModuleGroupDef **)&_RDI->m_particleState.m_pStateDef->moduleGroupDefs;
  __asm { vmovss  [rsp+320h+var_2A8], xmm0 }
  v66 = *p_moduleGroupDefs;
  pModuleBase = (ParticleModule *)ParticleModule::FindModule<ParticleModuleColorGraph>(*p_moduleGroupDefs, PARTICLE_MODULE_COLOR_GRAPH, 0x100u);
  v67 = (ParticleModulePositionGraph *)ParticleModule::FindModule<ParticleModulePositionGraph>(v66, PARTICLE_MODULE_POSITION_GRAPH, 0x100u);
  v69 = draw->codeSurfGlob == NULL;
  p_sprite = &draw->sprite;
  v428 = v67;
  if ( v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 833, ASSERT_TYPE_ASSERT, "(draw->codeSurfGlob)", (const char *)&queryFormat, "draw->codeSurfGlob") )
    __debugbreak();
  v69 = pMaterial == NULL;
  if ( !pMaterial )
  {
    v70 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 834, ASSERT_TYPE_ASSERT, "(pMaterial)", (const char *)&queryFormat, "pMaterial");
    v69 = !v70;
    if ( v70 )
      __debugbreak();
  }
  _RAX = drawData;
  __asm { vucomiss xmm12, dword ptr [rax+70h] }
  if ( !v69 && R_ReserveVertCodeSurfBuffers(&outBuffers, draw->codeSurfGlob, vertCount, v54, 0) )
  {
    v72 = pEmitterOwnera;
    vertIndexOffset = outBuffers.vertIndexOffset;
    __asm { vmovaps xmmword ptr [rsp+320h+var_98+8], xmm11 }
    vertCount = outBuffers.vertIndexBase;
    v74 = outBuffers.indices;
    pEmitterOwnera->m_numBeamSegments += _R13;
    __asm
    {
      vmovaps xmmword ptr [rsp+320h+var_B8+8], xmm13
      vmovaps [rsp+320h+var_C8+8], xmm14
      vmovaps [rsp+320h+var_D8+8], xmm15
    }
    indices = v74;
    v75 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v72);
    Def = ParticleSystem::GetDef(v75);
    FX_SpriteDirectContinue(*(GfxCodeSurfGlob **)(*(_QWORD *)lightIter.v + 56i64), Def->name, p_sprite, pMaterial, vertCount, indices, codeSurfFlags, perFrameActiveEmitterIndex);
    p_sprite->indexCount += v54;
    _R12 = drawData;
    __asm
    {
      vmovups xmm0, xmmword ptr [r12+60h]
      vbroadcastss xmm8, dword ptr [r12+20h]
      vmovups [rbp+220h+var_1F0], xmm0
    }
    if ( m_useCurvePoints && v35 )
    {
      __asm
      {
        vaddps  xmm0, xmm7, xmmword ptr [rbp+220h+outStartPos.v]
        vaddps  xmm1, xmm7, xmmword ptr [rbp+220h+outEndPos.v]
        vmovups xmmword ptr [rbp+220h+outStartPos.v], xmm0
        vaddps  xmm0, xmm7, xmmword ptr [rbp+220h+outCurvePoint1.v]
        vmovups xmmword ptr [rbp+220h+outEndPos.v], xmm1
        vaddps  xmm1, xmm7, xmmword ptr [rbp+220h+var_100.v]
        vmovups xmmword ptr [rbp+220h+outCurvePoint1.v], xmm0
        vmovups xmmword ptr [rbp+220h+var_100.v], xmm1
      }
    }
    __asm
    {
      vmulss  xmm6, xmm9, cs:__real@3f000000
      vbroadcastss xmm15, dword ptr [r12+70h]
      vshufps xmm6, xmm6, xmm6, 0
    }
    FX_GetAtlasCoords(drawData, &outAtlasCoords);
    __asm
    {
      vmovss  xmm2, [rbp+220h+outAtlasCoords.u]
      vmovss  xmm3, [rbp+220h+outAtlasCoords.v]
      vaddss  xmm1, xmm2, [rbp+220h+outAtlasCoords.du]
      vaddss  xmm4, xmm3, [rbp+220h+outAtlasCoords.dv]
      vmovaps xmm0, xmm2
      vinsertps xmm0, xmm0, xmm1, 10h
    }
    v69 = drawData->atlasData->entryCount == 0;
    __asm
    {
      vinsertps xmm0, xmm0, xmm3, 20h ; ' '
      vinsertps xmm0, xmm0, xmm4, 30h ; '0'
      vmovups [rbp+220h+var_210], xmm0
    }
    if ( v69 )
    {
      __asm { vxorps  xmm9, xmm9, xmm9 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r12+80h]; X
        vmovaps xmm1, xmm10; Y
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovaps xmm9, xmm0 }
    }
    if ( (*(_BYTE *)(pModule + 8) & 4) != 0 )
    {
      v99 = *(_QWORD *)lightIter.v;
      _RAX = *(_QWORD *)(*(_QWORD *)lightIter.v + 64i64);
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  xmm2, dword ptr [rax+8]
      }
      packedAtlasParams.v.m128_i32[3] = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp+0F0h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, xmm1, 10h
        vinsertps xmm3, xmm3, xmm2, 20h ; ' '
        vmovups xmmword ptr [rbp+0F0h], xmm3
        vmovups xmmword ptr [rbp+220h+cameraPos.v], xmm3
      }
      Particle_GenerateCameraFacingMatrix(&cameraPos, &outStartPos, &currLookAt, &outMatrix);
      __asm
      {
        vmovdqa xmm1, xmmword ptr [rbp+220h+outMatrix.x.v]
        vmovdqa xmm0, xmmword ptr [rbp+220h+outMatrix.y.v]
        vmovdqa xmm8, xmmword ptr [rbp+220h+outMatrix.z.v]
      }
    }
    else
    {
      __asm { vmovups xmm0, xmm8 }
      Float4SinCos(v87, &cameraPos, &currLookAt);
      __asm
      {
        vmovups xmm1, xmmword ptr [rbp+220h+cameraPos.v]
        vmovups xmm4, xmmword ptr [rbp+220h+currLookAt.v]
      }
      v99 = *(_QWORD *)lightIter.v;
      __asm
      {
        vmulps  xmm3, xmm1, xmmword ptr [rax]
        vmulps  xmm2, xmm4, xmmword ptr [rax]
        vmulps  xmm0, xmm1, xmmword ptr [rax]
        vaddps  xmm1, xmm0, xmm2
        vmulps  xmm0, xmm4, xmmword ptr [rax]
      }
      _RAX = normal;
      __asm
      {
        vsubps  xmm0, xmm3, xmm0
        vmovups xmm8, xmmword ptr [rax]
      }
    }
    v69 = !drawData->allowLighting;
    __asm
    {
      vmulps  xmm13, xmm6, xmm0
      vmulps  xmm14, xmm15, xmm1
      vsubps  xmm0, xmm7, xmm14
      vaddps  xmm2, xmm13, xmm0
      vmovups [rbp+220h+var_270], xmm1
      vaddps  xmm1, xmm7, xmm14
      vsubps  xmm10, xmm0, xmm13
      vaddps  xmm0, xmm13, xmm1
      vmovups [rbp+220h+var_1E0], xmm0
      vmovups xmmword ptr [rbp+220h+cameraPos.v], xmm8
      vmovups [rbp+220h+var_1D0], xmm2
      vsubps  xmm11, xmm1, xmm13
    }
    if ( v69 || (MeshLightingType = GetMeshLightingType(pMaterial), MeshLightingType == GFX_MESH_LIGHTING_NONE) )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr [r12+28h] }
      v129 = !Material_IsVolumetric(pMaterial);
      __asm { vxorps  xmm2, xmm2, xmm2 }
      if ( R_AllocateCodeSurfLightmap(*(GfxCodeSurfGlob **)(v99 + 56), MeshLightingType, 0, activeLightGridsBitmask, (GfxMeshDataLightingInput **)&lightIter, &outLightmapOffset, &outLightmapU, &outLightmapV, &outLightmapD) )
      {
        _RAX = *(_QWORD *)lightIter.v;
        __asm
        {
          vmovss  dword ptr [rax], xmm7
          vextractps dword ptr [rax+4], xmm7, 1
          vextractps dword ptr [rax+8], xmm7, 2
        }
        _RAX = *(_QWORD *)lightIter.v;
        v409 = outLightmapOffset & 0x3FFF | (outLightmapOffset >> 2) & 0xFFFC000 | (v129 << 28);
        __asm
        {
          vmovss  xmm0, [rsp+320h+var_2C4]
          vmovss  dword ptr [rax+0Ch], xmm0
        }
        _RAX = *(_QWORD *)lightIter.v;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vinsertps xmm0, xmm0, xmm6, 10h
          vcvtps2ph xmm1, xmm0, 0
          vshufps xmm0, xmm2, xmm1, 0FAh ; 'ú'
          vshufps xmm1, xmm2, xmm0, 84h ; '„'
          vmovups xmmword ptr [rax+10h], xmm1
          vmovss  xmm3, [rsp+320h+var_2AC]
          vmovss  xmm2, [rsp+320h+outLightmapV]
          vmovss  xmm4, [rsp+320h+outLightmapU]
        }
        goto LABEL_39;
      }
    }
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm4, xmm4, xmm4
      vmovss  [rsp+320h+var_2AC], xmm3
      vmovss  [rsp+320h+outLightmapU], xmm4
      vmovss  [rsp+320h+outLightmapV], xmm2
    }
LABEL_39:
    __asm
    {
      vaddss  xmm0, xmm4, xmm3
      vmovaps xmm12, xmm4
      vinsertps xmm12, xmm12, xmm0, 10h
      vinsertps xmm12, xmm12, xmm2, 20h ; ' '
      vaddss  xmm1, xmm2, xmm3
      vinsertps xmm12, xmm12, xmm1, 30h ; '0'
    }
    if ( _R12->hasAtlas && (atlasData = _R12->atlasData, (atlasData->behavior & 0x10) != 0) )
    {
      __asm
      {
        vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
      }
      entryCount = atlasData->entryCount;
      __asm
      {
        vcvttps2dq xmm3, xmm2
        vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm0, xmm4, 44h ; 'D'
        vpor    xmm1, xmm0, xmm4
        vpshufd xmm0, xmm1, 0FFh
        vpor    xmm1, xmm0, xmm1
        vmovups xmm0, xmmword ptr [rbp+220h+packedAtlasParams.v]
        vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
        vblendps xmm1, xmm0, xmm2, 4
        vmovss  xmm0, dword ptr [r12+80h]; atlasIndex
        vmovups xmmword ptr [rbp+220h+packedAtlasParams.v], xmm1
        vmovaps xmm1, xmm9; atlasBlend
      }
      FX_PackAtlasParamsAsNorm32W(*(const float *)&_XMM0, *(const float *)&_XMM1, entryCount, &packedAtlasParams);
      __asm { vmovups xmm5, xmmword ptr [rbp+220h+packedAtlasParams.v] }
    }
    else
    {
      __asm
      {
        vmovups xmm6, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm0, xmm0, xmm6
        vaddps  xmm1, xmm0, xmm6
        vmulps  xmm1, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
        vcvttps2dq xmm0, xmm1
        vpand   xmm2, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm1, xmm2, 44h ; 'D'
        vpor    xmm3, xmm1, xmm2
        vpshufd xmm0, xmm3, 0FFh
        vpor    xmm1, xmm0, xmm3
        vpor    xmm8, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
        vmovups xmm0, [rbp+220h+var_270]
        vmaxps  xmm0, xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm1, xmm0, xmm6
        vaddps  xmm2, xmm1, xmm6
        vmulps  xmm3, xmm2, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
        vcvttps2dq xmm0, xmm3
        vpand   xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm0, xmm1, 44h ; 'D'
        vpor    xmm2, xmm0, xmm1
        vpshufd xmm1, xmm2, 0AAh ; 'ª'
        vpor    xmm0, xmm1, xmm2
        vpor    xmm3, xmm0, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
        vmovups xmm0, xmmword ptr [rbp+220h+packedAtlasParams.v]
        vblendps xmm1, xmm0, xmm8, 4
        vblendps xmm5, xmm1, xmm3, 8
      }
    }
    __asm { vmovups xmm1, [rbp+220h+var_210] }
    v194 = *(GfxCodeSurfGlob **)(v99 + 56);
    __asm
    {
      vshufps xmm0, xmm1, xmm1, 8Ch ; 'Œ'
      vcvtps2ph xmm7, xmm0, 0
      vshufps xmm1, xmm1, xmm1, 0D9h ; 'Ù'
      vcvtps2ph xmm9, xmm1, 0
      vshufps xmm0, xmm12, xmm12, 8Ch ; 'Œ'
      vcvtps2ph xmm6, xmm0, 0
      vshufps xmm0, xmm6, xmm5, 50h ; 'P'
      vshufps xmm2, xmm0, xmm5, 0E8h ; 'è'
      vshufps xmm1, xmm12, xmm12, 0D9h ; 'Ù'
      vcvtps2ph xmm8, xmm1, 0
      vshufps xmm1, xmm5, xmm7, 50h ; 'P'
      vshufps xmm3, xmm1, xmm5, 0E8h ; 'è'
      vshufps xmm0, xmm8, xmm5, 50h ; 'P'
      vshufps xmm4, xmm0, xmm5, 0E8h ; 'è'
      vshufps xmm1, xmm5, xmm9, 50h ; 'P'
      vshufps xmm5, xmm1, xmm5, 0E8h ; 'è'
      vshufps xmm1, xmm3, xmm6, 55h ; 'U'
      vshufps xmm0, xmm2, xmm7, 0
      vshufps xmm7, xmm0, xmm2, 0E8h ; 'è'
      vshufps xmm0, xmm1, xmm3, 0E6h ; 'æ'
      vmovups xmmword ptr [rbp+220h+packedAtlasParams.v], xmm0
      vshufps xmm0, xmm4, xmm9, 0
      vshufps xmm1, xmm0, xmm4, 0E8h ; 'è'
      vmovups [rbp+220h+var_270], xmm1
      vshufps xmm1, xmm5, xmm8, 55h ; 'U'
      vshufps xmm6, xmm1, xmm5, 0E6h ; 'æ'
    }
    _RSI = R_CodeSurfVertIter_Begin(v194, vertCount + vertIndexOffset);
    if ( ((unsigned __int8)_RSI & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 941, ASSERT_TYPE_ASSERT, "(((uintptr_t)vertIter & 15) == 0)", (const char *)&queryFormat) )
      __debugbreak();
    __asm
    {
      vmulps  xmm1, xmm13, cs:__xmm@c0000000c0000000c0000000c0000000
      vbroadcastss xmm0, [rsp+320h+var_2A8]
      vmulps  xmm2, xmm0, xmm1
      vmovups xmm0, [rbp+220h+var_1E0]
      vmovups xmmword ptr [rbp+220h+currLookAt.v], xmm1
      vmovups xmm1, [rbp+220h+var_1D0]
      vsubps  xmm12, xmm1, xmm13
      vsubps  xmm13, xmm0, xmm13
      vmovups [rbp+220h+var_1D0], xmm13
      vmovups [rbp+220h+var_1B0], xmm2
      vmovups [rbp+220h+var_1E0], xmm12
    }
    if ( m_useCurvePoints )
    {
      __asm
      {
        vmovups xmm4, xmmword ptr [rbp+220h+outEndPos.v]
        vmovups xmm3, xmmword ptr [rbp+220h+var_100.v]
        vmovups xmm2, xmmword ptr [rbp+220h+outCurvePoint1.v]
        vmovups xmm1, xmmword ptr [rbp+220h+outStartPos.v]
        vxorps  xmm0, xmm0, xmm0
      }
      Float4EvalCubicBezierSpline(*(float *)&_XMM0, v219, v221, v222, fmt, &v437);
    }
    v235 = pModuleBase;
    m_particleCountRunning = _RDI->m_particleData.m_particleCountRunning;
    vertCount = m_particleCountRunning;
    _RDI->m_particleState.m_moduleGraphLengthData.lengthFraction = 0.0;
    if ( v235 )
    {
      __asm
      {
        vmovss  xmm0, [rbp+220h+outAtlasCoords.dv]
        vmovss  dword ptr [rsp+320h+fmt], xmm0
      }
      ParticleModuleColorGraph::Update(v235, &_RDI->m_particleData, 0, m_particleCountRunning, fmta, pEmitterOwnera, &_RDI->m_particleState);
      __asm { vmovups xmm3, xmmword ptr [rdi] }
    }
    else
    {
      __asm { vmovups xmm3, [rbp+220h+var_1F0] }
    }
    __asm
    {
      vmulps  xmm0, xmm14, xmm14
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vsqrtps xmm1, xmm0
      vdivps  xmm0, xmm14, xmm1
      vmovups [rbp+220h+var_1C0], xmm0
    }
    if ( m_useCurvePoints )
      __asm { vmulps  xmm0, xmm15, xmm0 }
    else
      __asm { vmovups xmm0, [rbp+220h+var_1B0] }
    __asm
    {
      vmovups xmm2, [rbp+220h+var_210]
      vmovups [rbp+220h+var_1F0], xmm0
      vmovss  xmm0, [rsp+320h+var_2B8]
      vxorps  xmm1, xmm1, xmm1
    }
    if ( (_BYTE)v408 )
      __asm { vsubss  xmm0, xmm0, cs:__real@3f800000 }
    else
      __asm { vaddss  xmm0, xmm0, cs:__real@3f800000 }
    __asm
    {
      vinsertps xmm1, xmm1, xmm0, 20h ; ' '
      vshufps xmm0, xmm1, xmm2, 0FAh ; 'ú'
      vshufps xmm2, xmm2, xmm0, 84h ; '„'
      vshufps xmm1, xmm2, xmm1, 0FAh ; 'ú'
      vshufps xmm0, xmm2, xmm1, 84h ; '„'
      vshufps xmm0, xmm0, xmm0, 98h ; '˜'
      vcvtps2ph xmm2, xmm0, 0
      vshufps xmm1, xmm7, xmm2, 0
      vshufps xmm0, xmm6, xmm2, 50h ; 'P'
      vshufps xmm7, xmm1, xmm7, 0E8h ; 'è'
      vmovups xmm1, xmmword ptr [r12+30h]
      vshufps xmm8, xmm0, xmm6, 0E8h ; 'è'
      vmovss  dword ptr [rbp+220h+lightIter], xmm1
      vextractps dword ptr [rbp+220h+lightIter+4], xmm1, 1
      vextractps [rbp+220h+var_138], xmm1, 2
      vcvtps2ph xmm6, xmm3, 0
    }
    v264 = Vec3PackR11G11B10F(&lightIter);
    __asm
    {
      vmovss  xmm1, dword ptr [r12+2Ch]; temperatureScale
      vxorps  xmm2, xmm2, xmm2
      vinsertps xmm2, xmm2, dword ptr [r12+3Ch], 0
      vinsertps xmm2, xmm2, [rsp+320h+var_2A4], 220h+var_210
      vcvtps2ph xmm0, xmm2, 0
      vmovss  [rsp+320h+var_2C4], xmm0
    }
    outLightmapOffset = v264;
    __asm
    {
      vshufps xmm0, xmm6, xmm6, 55h ; 'U'
      vmovaps xmm14, xmm6
      vinsertps xmm14, xmm14, xmm0, 10h
      vinsertps xmm14, xmm14, [rsp+320h+outLightmapOffset], 220h+pModuleBase
      vinsertps xmm14, xmm14, [rsp+320h+var_2C4], 220h+var_1F0
    }
    v275 = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, *(float *)&_XMM1);
    __asm
    {
      vmovups xmmword ptr [rsi], xmm13
      vmovups xmmword ptr [rsi+10h], xmm14
      vmovups xmmword ptr [rsi+20h], xmm8
    }
    _RSI->extraData = v275;
    __asm
    {
      vmovups xmmword ptr [rsi+30h], xmm12
      vmovups xmmword ptr [rsi+40h], xmm14
      vmovups xmmword ptr [rsi+50h], xmm7
    }
    _RSI[1].extraData = v275;
    _RSI = _RSI + 2;
    LODWORD(lightIter.v[0]) = v275;
    if ( (_DWORD)_R13 )
    {
      __asm { vmovups xmm15, xmmword ptr [rbp+220h+packedAtlasParams.v] }
      _R12 = &_RSI->lightingCoord;
      _EBX = 1;
      _R15 = &_RSI->color;
      v281 = vertIndexOffset + 1;
      do
      {
        __asm
        {
          vxorps  xmm8, xmm8, xmm8
          vcvtsi2ss xmm8, xmm8, rax
        }
        if ( _EBX == (_DWORD)_R13 )
          __asm { vmovss  xmm9, [rbp+220h+var_290] }
        else
          __asm { vdivss  xmm9, xmm8, [rbp+220h+var_28C] }
        v284 = pModuleBase;
        __asm { vmovss  dword ptr [rdi+24h], xmm9 }
        if ( v284 )
        {
          __asm
          {
            vmovss  xmm0, [rbp+220h+outAtlasCoords.dv]
            vmovss  dword ptr [rsp+320h+fmt], xmm0
          }
          ParticleModuleColorGraph::Update(v284, &_RDI->m_particleData, 0, vertCount, fmtb, pEmitterOwnera, &_RDI->m_particleState);
          _RAX = drawData;
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vcvtps2ph xmm6, xmm0, 0
            vmovups xmm1, xmmword ptr [rax+30h]
            vmovss  dword ptr [rbp+220h+packedAtlasParams.v], xmm1
            vextractps dword ptr [rbp+220h+packedAtlasParams.v+4], xmm1, 1
            vextractps dword ptr [rbp+220h+packedAtlasParams.v+8], xmm1, 2
          }
          LODWORD(v422) = Vec3PackR11G11B10F((const vec3_t *)&packedAtlasParams);
          __asm
          {
            vxorps  xmm2, xmm2, xmm2
            vmovaps xmm14, xmm6
            vinsertps xmm2, xmm2, dword ptr [rax+3Ch], 0
            vinsertps xmm2, xmm2, [rsp+320h+var_2A4], 220h+var_210
            vcvtps2ph xmm0, xmm2, 0
            vmovss  [rsp+320h+var_2C4], xmm0
            vshufps xmm0, xmm6, xmm6, 55h ; 'U'
            vinsertps xmm14, xmm14, xmm0, 10h
            vinsertps xmm14, xmm14, dword ptr [rbp+220h+var_288], 220h+pModuleBase
            vinsertps xmm14, xmm14, [rsp+320h+var_2C4], 220h+var_1F0
          }
        }
        v297 = indices;
        LOWORD(outLightmapOffset) = v281 - 1;
        HIWORD(outLightmapOffset) = v281;
        *indices = (r_double_index_t)outLightmapOffset;
        LOWORD(outLightmapOffset) = v281 + 1;
        HIWORD(outLightmapOffset) = v281 + 1;
        v297[1] = (r_double_index_t)outLightmapOffset;
        LOWORD(outLightmapOffset) = v281;
        v281 += 2;
        HIWORD(outLightmapOffset) = v281;
        v297[2] = (r_double_index_t)outLightmapOffset;
        indices = v297 + 3;
        v298 = m_useCurvePoints;
        if ( m_useCurvePoints )
        {
          __asm
          {
            vmovups xmm5, cs:__xmm@40400000404000004040000040400000
            vmulps  xmm1, xmm5, xmmword ptr [rbp+220h+var_100.v]
            vmovss  xmm0, cs:__real@3f800000
            vsubss  xmm7, xmm0, xmm9
            vmulss  xmm4, xmm9, xmm9
            vmovaps xmm0, xmm4
            vshufps xmm0, xmm0, xmm0, 0
            vshufps xmm7, xmm7, xmm7, 0
            vmulps  xmm2, xmm0, xmm7
            vmulps  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm9, xmm4
            vshufps xmm2, xmm2, xmm2, 0
            vmulps  xmm0, xmm2, xmmword ptr [rbp+220h+outEndPos.v]
            vaddps  xmm4, xmm3, xmm0
            vmulps  xmm6, xmm7, xmm7
            vmulps  xmm0, xmm6, xmm7
            vmovaps xmm1, xmm9
            vshufps xmm1, xmm1, xmm1, 0
            vmulps  xmm2, xmm1, xmm6
            vmulps  xmm1, xmm5, xmmword ptr [rbp+220h+outCurvePoint1.v]
            vmovups xmm5, [rbp+220h+var_1E0]
            vmovups xmm6, [rbp+220h+var_1D0]
            vmulps  xmm2, xmm2, xmm1
            vmulps  xmm1, xmm0, xmmword ptr [rbp+220h+outStartPos.v]
            vaddps  xmm3, xmm4, xmm2
            vaddps  xmm2, xmm3, xmm1
            vsubps  xmm4, xmm2, [rbp+220h+var_1F0]
            vaddps  xmm3, xmm2, [rbp+220h+var_1F0]
            vshufps xmm0, xmm4, xmm5, 0FAh ; 'ú'
            vshufps xmm1, xmm3, xmm6, 0FAh ; 'ú'
            vshufps xmm10, xmm4, xmm0, 84h ; '„'
            vshufps xmm11, xmm3, xmm1, 84h ; '„'
          }
        }
        else
        {
          __asm
          {
            vmovups xmm5, [rbp+220h+var_1E0]
            vmovups xmm6, [rbp+220h+var_1D0]
          }
        }
        v328 = v428;
        if ( v428 )
        {
          __asm
          {
            vmovss  xmm1, [rbp+220h+var_280]
            vxorps  xmm7, xmm7, xmm7
            vcomiss xmm1, xmm7
          }
          if ( _EBX == (_DWORD)_R13 )
          {
            __asm { vmovss  xmm0, dword ptr [rbp+220h+var_180] }
          }
          else
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vmulss  xmm0, xmm0, dword ptr [rax+0Ch]
            }
            v298 = m_useCurvePoints;
          }
          __asm
          {
            vdivss  xmm4, xmm0, xmm1
            vmovaps xmm1, xmm4
            vmovaps xmm2, xmm1
            vxorps  xmm1, xmm1, xmm1
            vroundss xmm3, xmm1, xmm2, 1
            vsubss  xmm0, xmm4, xmm3
            vmovss  dword ptr [rdi+24h], xmm0
          }
          if ( !v298 )
          {
            if ( _EBX == (_DWORD)_R13 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rcx
                vaddss  xmm1, xmm0, [rsp+320h+var_2A8]
              }
              v328 = v428;
            }
            else
            {
              __asm { vmovaps xmm1, xmm8 }
            }
            __asm
            {
              vmovaps xmm0, xmm1
              vshufps xmm0, xmm0, xmm0, 0
              vmulps  xmm1, xmm0, xmmword ptr [rbp+220h+currLookAt.v]
              vaddps  xmm10, xmm1, xmm5
              vaddps  xmm11, xmm1, xmm6
            }
          }
          __asm
          {
            vmovss  xmm12, [rbp+220h+outAtlasCoords.dv]
            vmovss  dword ptr [rsp+320h+fmt], xmm12
          }
          ParticleModulePositionGraph::Update(v328, &_RDI->m_particleData, 0, vertCount, fmtc, pEmitterOwnera, &_RDI->m_particleState);
          __asm
          {
            vmovss  xmm6, dword ptr [rdi+14h]
            vcomiss xmm6, xmm7
          }
          if ( !(v346 | v69) )
          {
            __asm
            {
              vmovss  xmm0, [rbp+220h+var_27C]
              vaddss  xmm4, xmm0, dword ptr [rdi+24h]
            }
            v349 = vertCount;
            v350 = v428;
            __asm
            {
              vmovaps xmm1, xmm4
              vmovaps xmm2, xmm1
              vxorps  xmm1, xmm1, xmm1
              vroundss xmm3, xmm1, xmm2, 1
              vsubss  xmm0, xmm4, xmm3
            }
            outCurvePoint2 = pEmitterOwnera;
            __asm
            {
              vmovss  dword ptr [rdi+24h], xmm0
              vmovss  dword ptr [rsp+320h+fmt], xmm12
            }
            ParticleModulePositionGraph::Update(v350, &_RDI->m_particleData, 0, v349, fmtd, outCurvePoint2, &_RDI->m_particleState);
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi+10h]
              vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
              vmulss  xmm0, xmm0, xmm6
              vshufps xmm0, xmm0, xmm0, 0
              vmulps  xmm2, xmm0, [rbp+220h+var_1C0]
              vmulss  xmm1, xmm1, xmm6
              vshufps xmm1, xmm1, xmm1, 0
              vmulps  xmm0, xmm1, xmmword ptr [rbp+220h+cameraPos.v]
              vaddps  xmm2, xmm0, xmm2
              vaddps  xmm10, xmm2, xmm10
              vaddps  xmm11, xmm2, xmm11
            }
          }
        }
        else if ( !m_useCurvePoints )
        {
          if ( _EBX == (_DWORD)_R13 )
          {
            __asm
            {
              vaddps  xmm10, xmm12, [rbp+220h+var_1B0]
              vaddps  xmm11, xmm13, [rbp+220h+var_1B0]
            }
          }
          else
          {
            __asm
            {
              vaddps  xmm10, xmm12, xmmword ptr [rbp+220h+currLookAt.v]
              vaddps  xmm11, xmm13, xmmword ptr [rbp+220h+currLookAt.v]
            }
          }
        }
        __asm { vxorps  xmm3, xmm3, xmm3 }
        if ( (_BYTE)v408 )
        {
          __asm
          {
            vmovd   xmm1, r13d
            vmovd   xmm0, ebx
            vpcmpeqd xmm2, xmm0, xmm1
            vmovss  xmm0, cs:__real@3f800000
            vmovss  xmm1, [rsp+320h+var_2A8]
            vblendvps xmm0, xmm0, xmm1, xmm2
            vaddss  xmm1, xmm0, xmm8
            vmovss  xmm0, [rsp+320h+var_2B8]
            vsubss  xmm2, xmm0, xmm1
            vmovups xmm1, [rbp+220h+var_210]
            vinsertps xmm3, xmm3, xmm2, 20h ; ' '
            vshufps xmm0, xmm3, xmm1, 0FAh ; 'ú'
            vshufps xmm2, xmm1, xmm0, 84h ; '„'
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovups xmm4, [rbp+220h+var_210]
            vsubss  xmm0, xmm0, xmm9
            vaddss  xmm1, xmm0, [rsp+320h+var_2B8]
            vinsertps xmm3, xmm3, xmm1, 20h ; ' '
            vshufps xmm0, xmm3, xmm4, 0FAh ; 'ú'
            vshufps xmm2, xmm4, xmm0, 84h ; '„'
          }
        }
        __asm { vmovups xmm9, [rbp+220h+var_270] }
        v383 = lightIter.v[0];
        ++_EBX;
        __asm
        {
          vmovups xmmword ptr [rsi], xmm11
          vmovups xmmword ptr [r15], xmm14
          vshufps xmm1, xmm2, xmm3, 0FAh ; 'ú'
          vshufps xmm0, xmm2, xmm1, 84h ; '„'
          vshufps xmm0, xmm0, xmm0, 98h ; '˜'
          vcvtps2ph xmm2, xmm0, 0
          vshufps xmm0, xmm9, xmm2, 50h ; 'P'
          vshufps xmm9, xmm0, xmm9, 0E8h ; 'è'
          vmovups xmmword ptr [r12], xmm9
        }
        *(float *)&_RSI->extraData = v383;
        __asm
        {
          vmovups xmmword ptr [rsi+30h], xmm10
          vmovups xmmword ptr [r15+30h], xmm14
          vshufps xmm1, xmm15, xmm2, 0
          vshufps xmm15, xmm1, xmm15, 0E8h ; 'è'
          vmovups xmmword ptr [r12+30h], xmm15
        }
        *(float *)&_RSI[1].extraData = v383;
        _R15 += 6;
        _RSI += 2;
        _R12 += 24;
        __asm
        {
          vmovups [rbp+220h+var_270], xmm9
          vmovups xmm12, xmm10
          vmovups xmm13, xmm11
        }
      }
      while ( _EBX - 1 < (unsigned int)_R13 );
    }
    __asm
    {
      vmovaps xmm15, [rsp+320h+var_D8+8]
      vmovaps xmm14, [rsp+320h+var_C8+8]
      vmovaps xmm13, xmmword ptr [rsp+320h+var_B8+8]
      vmovaps xmm11, xmmword ptr [rsp+320h+var_98+8]
    }
    _RDI->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[0] = 0i64;
    _RDI->m_particleState.m_moduleGraphLengthData.color.v.m128_u64[1] = 0i64;
    _RDI->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[0] = 0i64;
    _RDI->m_particleState.m_moduleGraphLengthData.position.v.m128_u64[1] = 0i64;
    *(_QWORD *)&_RDI->m_particleState.m_moduleGraphLengthData.useLength = 0i64;
    *(_QWORD *)_RDI->m_particleState.m_moduleGraphLengthData.pad = 0i64;
  }
  __asm { vmovaps xmm7, xmmword ptr [rsp+320h+var_58+8] }
  _R11 = &v453;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
FX_CalculateLightmapLevel
==============
*/
__int64 FX_CalculateLightmapLevel(const FxCamera *camera, const float4 *worldPos, const float4 *width, const float4 *height)
{
  __int64 result; 
  DvarValue *p_current; 
  unsigned int v32; 
  __int128 v33; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovss  xmm0, dword ptr [rcx]
    vbroadcastss xmm3, dword ptr [rcx+0A4h]
    vbroadcastss xmm6, dword ptr [rcx+0C0h]
  }
  result = 0i64;
  HIDWORD(v33) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+40h]
    vmovss  xmm5, xmm5, xmm0
    vmovss  xmm0, dword ptr [rcx+70h]
    vinsertps xmm5, xmm5, dword ptr [rcx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rcx+8], 20h ; ' '
    vmovups xmmword ptr [rsp+40h], xmm5
  }
  HIDWORD(v33) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+40h]
    vmovss  xmm4, xmm4, xmm0
    vmovups xmm0, xmmword ptr [rdx]
    vinsertps xmm4, xmm4, dword ptr [rcx+74h], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+78h], 20h ; ' '
    vsubps  xmm1, xmm0, xmm5
    vmulps  xmm2, xmm4, xmm1
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vmovups xmm0, xmmword ptr [r8]
    vhaddps xmm2, xmm1, xmm1
    vmaxps  xmm1, xmm0, xmmword ptr [r9]
    vmulps  xmm3, xmm3, xmm2
    vdivps  xmm2, xmm1, xmm3
    vmulps  xmm0, xmm6, xmm2
    vcvttss2si ebx, xmm0
  }
  if ( _EBX > 0 )
  {
    p_current = (DvarValue *)&v32;
    v32 = 31 - __lzcnt(_EBX);
    if ( v32 >= fx_lightmap_max_level->current.integer )
      p_current = &fx_lightmap_max_level->current;
    result = ui_fx_lightmap_max_level->current.unsignedInt;
    if ( p_current->integer < (unsigned int)result )
      result = p_current->unsignedInt;
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

/*
==============
FX_CalculateParticleSimColor
==============
*/
char FX_CalculateParticleSimColor(ParticleData *pParticleData, const ParticleModuleColorGraph *pModuleColorGraph, const ParticleModuleColorLerp *pModuleColorLerp, const ParticleEmitter *pParticleEmitter, const ParticleState *pParticleState, float dt, float4 *color)
{
  float fmt; 
  float fmta; 

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
      __asm
      {
        vmovss  xmm0, [rsp+48h+dt]
        vmovss  dword ptr [rsp+48h+fmt], xmm0
      }
      ParticleModuleColorLerp::Update(pModuleColorLerp, pParticleData, 0, pParticleData->m_particleCountRunning, fmta, pParticleEmitter, pParticleState);
      _RAX = Particle_GetColorArray(pParticleData);
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX = color;
      __asm { vmovdqa xmmword ptr [rax], xmm0 }
      return 1;
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+48h+dt]
      vmovss  dword ptr [rsp+48h+fmt], xmm0
    }
    ParticleModuleColorGraph::Update(pModuleColorGraph, pParticleData, 0, pParticleData->m_particleCountRunning, fmt, pParticleEmitter, pParticleState);
    _RAX = Particle_GetColorArray(pParticleData);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = color;
    __asm { vmovdqa xmmword ptr [rax], xmm0 }
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
  float v17; 
  float v18; 

  if ( !pModuleSizeGraph || (pModuleSizeGraph->m_flags & 4) != 0 )
  {
    if ( !pModuleSizeLerp || (pModuleSizeLerp->m_flags & 4) != 0 )
    {
      return 0;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rsp+48h+dt]
        vmovss  [rsp+48h+var_28], xmm0
      }
      ParticleModuleSizeLerp::Update(pModuleSizeLerp, pParticleData, 0, pParticleData->m_particleCountRunning, v18, pParticleEmitter, pParticleState);
      _RAX = Particle_GetSizeArray(pParticleData);
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX = size;
      __asm { vmovdqa xmmword ptr [rax], xmm0 }
      return 1;
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+48h+dt]
      vmovss  [rsp+48h+var_28], xmm0
    }
    ParticleModuleSizeGraph::Update(pModuleSizeGraph, pParticleData, 0, pParticleData->m_particleCountRunning, v17, pParticleEmitter, pParticleState);
    _RAX = Particle_GetSizeArray(pParticleData);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = size;
    __asm { vmovdqa xmmword ptr [rax], xmm0 }
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
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vcomiss xmm0, dword ptr [rcx]
  }
  return v2;
}

/*
==============
FX_DrawParticleSimAnimationModels
==============
*/
void FX_DrawParticleSimAnimationModels(const ParticleState *pParticleState, ParticleEmitter *pParticleEmitter, FxParticleSimAnimation *particleSimAnimation, const float4 *color, const float4 *posWorld, const float4 *particleSimRotationAngles, const vector4 *rParticleSimTransform, const ParticleModuleInitParticleSim *pModuleInitParticleSim, float scale, float time, int randomSeed)
{
  unsigned int v21; 
  int v25; 
  const ParticleLinkedAssetListDef *pModule; 
  bool v30; 
  const ParticleLinkedAssetListDef *v36; 
  const float4 *v37; 
  bool v39; 
  bool v40; 
  const XModel *model; 
  unsigned int frameCount; 
  float4 *frames; 
  ParticleData *m_pParticleSimUpdateParticleData; 
  ParticleModuleGroupDef *moduleGroupDefs; 
  const ParticleModuleSizeLerp *v59; 
  float4 *v60; 
  __int64 v61; 
  const float4 *v93; 
  float4 *v94; 
  const char *VFXName; 
  bool v132; 
  int *RandomSeedArray; 
  char v138; 
  __int64 v141; 
  int v142; 
  unsigned int v143; 
  __int64 dt; 
  float dta; 
  float dtb; 
  float4 *colora; 
  char v159; 
  int v160; 
  unsigned int renderFlags; 
  const FxParticleSimAnimationParticleData *v162; 
  unsigned int v163; 
  float4 *v165; 
  int numAssets; 
  bool v167; 
  ParticleModuleColorLerp *pModuleColorLerp; 
  ParticleModuleColorGraph *pModuleColorGraph; 
  ParticleModuleSizeLerp *pModuleSizeLerp; 
  ParticleModuleSizeGraph *pModuleSizeGraph; 
  float4 v173; 
  float4 size; 
  float4 packedColorAndEmissive; 
  FxParticleSimAnimationInterpolatedData interpolatedData; 
  __int128 v177; 
  __int128 v178; 
  GfxScaledPlacement placement; 

  __asm
  {
    vmovaps [rsp+240h+var_50], xmm6
    vmovaps [rsp+240h+var_E0], xmm15
  }
  v21 = 0;
  _R15 = particleSimAnimation;
  pModuleColorGraph = NULL;
  pModuleColorLerp = NULL;
  pModuleSizeGraph = NULL;
  pModuleSizeLerp = NULL;
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2396, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( !pModuleInitParticleSim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2397, ASSERT_TYPE_ASSERT, "(pModuleInitParticleSim)", (const char *)&queryFormat, "pModuleInitParticleSim") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2398, ASSERT_TYPE_ASSERT, "(particleSimAnimation)", (const char *)&queryFormat, "particleSimAnimation") )
    __debugbreak();
  if ( !pParticleEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2399, ASSERT_TYPE_ASSERT, "(pParticleEmitter)", (const char *)&queryFormat, "pParticleEmitter") )
    __debugbreak();
  v25 = 3080;
  __asm { vmovss  xmm15, cs:__real@3f800000 }
  pModule = (const ParticleLinkedAssetListDef *)pParticleState->m_elementTypeModule.pModule;
  if ( fx_models_shadows_thermal->current.enabled )
    v25 = 0;
  renderFlags = v25;
  _RCX = fx_randomTable;
  _RAX = randomSeed;
  v30 = (pParticleState->m_pStateDef->flags & 0x100000) != 0;
  v167 = v30;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+rax*4+0ACh]
    vsubss  xmm0, xmm15, xmm1
    vmulss  xmm2, xmm0, dword ptr [r12+18h]
    vmulss  xmm1, xmm1, dword ptr [r12+1Ch]
    vaddss  xmm6, xmm2, xmm1
  }
  if ( !pModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2406, ASSERT_TYPE_ASSERT, "(pModuleInitModel)", (const char *)&queryFormat, "pModuleInitModel") )
    __debugbreak();
  if ( ParticleEmitter::ShouldDrawWithViewModel(pParticleEmitter, pParticleState) )
    renderFlags |= 1u;
  v36 = pModule + 1;
  Particle_VerifyAssetList(pModule + 1);
  numAssets = pModule[1].numAssets;
  v39 = numAssets == 0;
  v40 = numAssets == 1;
  if ( numAssets == 1 )
  {
    Particle_VerifyAssetList(pModule + 1);
    model = v36->assetList->model;
    v39 = 0;
    v40 = model == NULL;
    if ( !model )
      goto LABEL_71;
  }
  else
  {
    model = NULL;
  }
  __asm
  {
    vmovss  xmm0, [rbp+140h+time]
    vcomiss xmm0, dword ptr [r15+14h]
  }
  if ( v39 )
  {
    __asm { vmulss  xmm4, xmm0, dword ptr [r15+10h] }
  }
  else
  {
    if ( !pModuleInitParticleSim->m_holdLastFrame )
      goto LABEL_71;
    v40 = _R15->header.frameCount == 1;
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2ss xmm4, xmm4, rax
    }
  }
  __asm { vucomiss xmm4, cs:__real@bf800000 }
  if ( !v40 )
  {
    frameCount = _R15->header.frameCount;
    __asm
    {
      vmovaps xmm1, xmm4
      vmovaps xmm2, xmm1
      vxorps  xmm1, xmm1, xmm1
      vcvttss2si rax, xmm4
      vmovaps [rsp+240h+var_A0], xmm11
      vroundss xmm3, xmm1, xmm2, 1
      vcvttss2si r12d, xmm4
    }
    v160 = _ER12;
    __asm { vsubss  xmm11, xmm4, xmm3 }
    if ( (unsigned int)_RAX >= frameCount )
    {
      LODWORD(dt) = _ER12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2435, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( particleSimAnimation->header.frameCount )", "frameIndex doesn't index particleSimAnimation->header.frameCount\n\t%i not in [0, %i)", dt, frameCount) )
        __debugbreak();
    }
    frames = (float4 *)_R15->frames;
    v165 = frames;
    if ( frames->v.m128_i32[2 * _ER12 + 1] )
    {
      _RAX = particleSimRotationAngles;
      __asm
      {
        vmovaps [rsp+240h+var_D0], xmm14
        vmovups xmm0, xmmword ptr [rax]
      }
      Float4RadianToQuat(frames, v37);
      m_pParticleSimUpdateParticleData = pParticleState->m_pParticleSimUpdateParticleData;
      __asm { vmovups xmm14, xmm0 }
      if ( _R15->header.evalVisStatePerParticle && m_pParticleSimUpdateParticleData )
      {
        v159 = 1;
        if ( !pParticleEmitter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1983, ASSERT_TYPE_ASSERT, "(pParticleEmitter)", (const char *)&queryFormat, "pParticleEmitter") )
          __debugbreak();
        moduleGroupDefs = pParticleState->m_pStateDef->moduleGroupDefs;
        pModuleColorGraph = (ParticleModuleColorGraph *)ParticleModule::FindModule<ParticleModuleColorGraph>(moduleGroupDefs, PARTICLE_MODULE_COLOR_GRAPH, 0xFFFFFFFF);
        pModuleColorLerp = (ParticleModuleColorLerp *)ParticleModule::FindModule<ParticleModuleColorLerp>(moduleGroupDefs, PARTICLE_MODULE_COLOR_LERP, 0xFFFFFFFF);
        pModuleSizeGraph = (ParticleModuleSizeGraph *)ParticleModule::FindModule<ParticleModuleSizeGraph>(moduleGroupDefs, PARTICLE_MODULE_SIZE_GRAPH, 0xFFFFFFFF);
        v59 = ParticleModule::FindModule<ParticleModuleSizeLerp>(moduleGroupDefs, PARTICLE_MODULE_SIZE_LERP, 0xFFFFFFFF);
        v30 = v167;
        pModuleSizeLerp = (ParticleModuleSizeLerp *)v59;
      }
      else
      {
        v159 = 0;
      }
      v60 = v165;
      v61 = v160;
      if ( v165->v.m128_i32[2 * v160 + 1] )
      {
        __asm
        {
          vmovaps [rsp+240h+var_60], xmm7
          vmovaps [rsp+240h+var_70], xmm8
          vmovaps [rsp+240h+var_80], xmm9
          vmovaps [rsp+240h+var_90], xmm10
          vmovss  xmm10, [rbp+140h+scale]
          vmovaps [rsp+240h+var_B0], xmm12
          vmovaps [rsp+240h+var_C0], xmm13
          vmovaps xmm13, xmm6
          vshufps xmm13, xmm13, xmm13, 0
          vxorps  xmm12, xmm12, xmm12
        }
        do
        {
          v162 = &_R15->particleData[v21 + v60->v.m128_i32[2 * v61]];
          __asm { vmovaps xmm2, xmm11; frameLerp }
          FX_InterpolateParticleSimAnimationData(_R15, v162, *(float *)&_XMM2, &interpolatedData);
          __asm { vmovaps xmm2, xmm11; frameLerp }
          FX_InterpolateParticleSimAnimationDataOrientation3D(_R15, &_R15->particleDataOrientation3D[v21 + v165->v.m128_i32[2 * v160]], *(float *)&_XMM2, &interpolatedData);
          _RAX = posWorld;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+140h+interpolatedData.position]
            vmovups xmm6, xmmword ptr [rax]
          }
          HIDWORD(v177) = 0;
          __asm
          {
            vmovups xmm2, xmmword ptr [rbp+10h]
            vmovss  xmm2, xmm2, xmm0
            vinsertps xmm2, xmm2, dword ptr [rbp+140h+interpolatedData.position+4], 10h
            vinsertps xmm2, xmm2, dword ptr [rbp+140h+interpolatedData.position+8], 20h
            vmulps  xmm0, xmm13, xmm2
            vshufps xmm3, xmm0, xmm0, 0
            vshufps xmm5, xmm0, xmm0, 0AAh ; 'ª'
            vmovups xmmword ptr [rbp+10h], xmm2
            vshufps xmm2, xmm0, xmm0, 55h ; 'U'
            vmulps  xmm0, xmm3, xmmword ptr [rax]
            vaddps  xmm4, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
            vmulps  xmm0, xmm2, xmmword ptr [rax+10h]
            vaddps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
            vmulps  xmm0, xmm5, xmmword ptr [rax+20h]
            vaddps  xmm1, xmm0, xmm4
            vaddps  xmm2, xmm2, xmm1
            vandps  xmm0, xmm2, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
            vmovss  xmm1, dword ptr [rbp+140h+interpolatedData.orientation]
            vaddps  xmm9, xmm0, xmm6
          }
          HIDWORD(v178) = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+20h]
            vmovss  xmm0, xmm0, xmm1
            vinsertps xmm0, xmm0, dword ptr [rbp+140h+interpolatedData.orientation+4], 10h
            vinsertps xmm0, xmm0, dword ptr [rbp+140h+interpolatedData.orientation+8], 20h
            vmovups xmmword ptr [rbp+20h], xmm0
          }
          Float4RadianToQuat(v94, v93);
          __asm
          {
            vshufps xmm1, xmm0, xmm0, 0D2h ; 'Ò'
            vmovups xmm7, xmm0
            vshufps xmm8, xmm0, xmm0, 0FFh
            vshufps xmm2, xmm14, xmm14, 0C9h ; 'É'
            vmulps  xmm4, xmm2, xmm1
            vshufps xmm2, xmm0, xmm0, 0C9h ; 'É'
            vshufps xmm3, xmm14, xmm14, 0D2h ; 'Ò'
            vmulps  xmm1, xmm3, xmm2
            vmulps  xmm2, xmm14, xmm0
            vsubps  xmm5, xmm4, xmm1
            vinsertps xmm0, xmm2, xmm2, 8
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
            vshufps xmm6, xmm14, xmm14, 0FFh
            vmulps  xmm0, xmm8, xmm6
            vsubps  xmm2, xmm0, xmm2
            vmulps  xmm1, xmm7, xmm6
            vmulps  xmm3, xmm14, xmm8
            vaddps  xmm1, xmm3, xmm1
            vaddps  xmm0, xmm5, xmm1
            vblendps xmm4, xmm2, xmm0, 7
            vshufps xmm0, xmm4, xmm4, 55h ; 'U'
            vmulss  xmm0, xmm0, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm1, xmm0
            vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
            vmulss  xmm0, xmm1, xmm1
            vmovups xmmword ptr [rbp+140h+placement.base.quat], xmm4
            vaddss  xmm3, xmm2, xmm0
            vshufps xmm4, xmm4, xmm4, 0FFh
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm3, xmm0
            vsubss  xmm2, xmm1, xmm15
            vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vcomiss xmm2, cs:__real@3b03126f
          }
          if ( !v39 )
          {
            VFXName = ParticleState::GetVFXName((ParticleState *)pParticleState);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2467, ASSERT_TYPE_ASSERT, "(Vec4IsNormalized( placement.base.quat ))", "%s\n\tVFX ERROR: Unnormalized quat when using particle sim models: %s\n", "Vec4IsNormalized( placement.base.quat )", VFXName) )
              __debugbreak();
          }
          __asm
          {
            vmovss  dword ptr [rbp+140h+placement.base.origin], xmm9
            vextractps dword ptr [rbp+140h+placement.base.origin+4], xmm9, 1
            vextractps dword ptr [rbp+140h+placement.base.origin+8], xmm9, 2
            vmovss  xmm9, [rbp+140h+interpolatedData.width]
            vmulss  xmm0, xmm9, xmm10
            vmovss  [rbp+140h+placement.scale], xmm0
            vmovaps xmm7, xmm10
          }
          v132 = v159 == 0;
          v163 = (randomSeed + 10111 * (unsigned int)(unsigned __int8)v162->particleID) % 0x3FE9;
          _RAX = color;
          __asm
          {
            vmovups xmm8, xmmword ptr [rax]
            vmovups xmmword ptr [rbp+140h+var_1A0.v], xmm8
          }
          if ( v159 )
          {
            _RBX = Particle_GetLifeArray(m_pParticleSimUpdateParticleData);
            RandomSeedArray = Particle_GetRandomSeedArray(m_pParticleSimUpdateParticleData);
            __asm
            {
              vmovss  xmm6, [rbp+140h+interpolatedData.lifetime]
              vmovss  dword ptr [rbx], xmm6
            }
            v30 = v167;
            *RandomSeedArray = v163;
            if ( v167 )
            {
              __asm { vmovss  [rsp+240h+dt], xmm6 }
              FX_CalculateParticleSimColor(m_pParticleSimUpdateParticleData, pModuleColorGraph, pModuleColorLerp, pParticleEmitter, pParticleState, dta, &v173);
              __asm { vmovups xmm8, xmmword ptr [rbp+140h+var_1A0.v] }
            }
            __asm { vmovss  [rsp+240h+dt], xmm6 }
            v138 = FX_CalculateParticleSimSize(m_pParticleSimUpdateParticleData, pModuleSizeGraph, pModuleSizeLerp, pParticleEmitter, pParticleState, dtb, &size);
            v132 = v138 == 0;
            if ( v138 )
              __asm { vmovaps xmm7, xmmword ptr [rbp+140h+size.v] }
          }
          __asm
          {
            vmulss  xmm0, xmm7, xmm9
            vucomiss xmm0, xmm12
            vmovss  [rbp+140h+placement.scale], xmm0
          }
          if ( !v132 )
          {
            if ( numAssets != 1 )
            {
              if ( _R15->header.hasIndex )
              {
                __asm { vmovaps xmm2, xmm11; frameLerp }
                FX_InterpolateParticleSimAnimationDataIndex(_R15, &_R15->particleDataIndex[v21 + v165->v.m128_i32[2 * v160]], *(float *)&_XMM2, &interpolatedData);
                Particle_VerifyAssetList(v36);
                v141 = interpolatedData.index % v36->numAssets;
              }
              else
              {
                Particle_VerifyAssetList(v36);
                v142 = v36->numAssets;
                if ( v142 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlerandom.h", 74, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
                  __debugbreak();
                v143 = abs32((v142 * LOWORD(fx_randomTable[v163 + 22])) >> 16);
                if ( v143 >= v142 )
                {
                  LODWORD(colora) = v142;
                  LODWORD(dt) = v143;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlerandom.h", 78, ASSERT_TYPE_ASSERT, "(unsigned)( randomIndex ) < (unsigned)( count )", "randomIndex doesn't index count\n\t%i not in [0, %i)", dt, colora) )
                    __debugbreak();
                }
                v141 = (int)v143;
                v30 = v167;
              }
              model = v36->assetList[v141].model;
              if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2515, ASSERT_TYPE_ASSERT, "(pModel)", (const char *)&queryFormat, "pModel") )
                __debugbreak();
            }
            if ( v30 )
            {
              __asm
              {
                vmulps  xmm0, xmm8, xmmword ptr [rbp+140h+interpolatedData.color]
                vmovups xmmword ptr [rbp+140h+packedColorAndEmissive.v], xmm0
              }
            }
            ParticleEmitter::AddModelToScene(pParticleEmitter, model, &placement, &packedColorAndEmissive, v30, renderFlags);
          }
          ++v21;
          v60 = v165;
          v61 = v160;
        }
        while ( v21 < v165->v.m128_i32[2 * v160 + 1] );
        __asm
        {
          vmovaps xmm13, [rsp+240h+var_C0]
          vmovaps xmm12, [rsp+240h+var_B0]
          vmovaps xmm10, [rsp+240h+var_90]
          vmovaps xmm9, [rsp+240h+var_80]
          vmovaps xmm8, [rsp+240h+var_70]
          vmovaps xmm7, [rsp+240h+var_60]
        }
      }
      __asm { vmovaps xmm14, [rsp+240h+var_D0] }
    }
    __asm { vmovaps xmm11, [rsp+240h+var_A0] }
  }
LABEL_71:
  __asm
  {
    vmovaps xmm6, [rsp+240h+var_50]
    vmovaps xmm15, [rsp+240h+var_E0]
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
  unsigned int v39; 
  r_double_index_t *v76; 
  r_double_index_t v83; 
  unsigned int v84; 
  unsigned int v85; 
  unsigned int v86; 
  unsigned int v87; 
  unsigned int vertIndexBase; 
  FxAtlasCoords outAtlasCoords; 
  Material *material; 
  float4 packedAtlasParams; 
  GfxCodeSurfBuffers outBuffers; 

  __asm { vmovaps [rsp+110h+var_80], xmm11 }
  _R13 = dv;
  _R12 = clipPos;
  __asm { vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000 }
  _RDI = r_drawData;
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vmovss  [rsp+110h+outAtlasCoords.blendU], xmm11
    vmovss  [rsp+110h+outAtlasCoords.blendV], xmm11
  }
  material = pMaterial;
  __asm { vmovups xmmword ptr [rsp+110h+outAtlasCoords.u], xmm0 }
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1801, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( R_ReserveFlareSurfBuffers(&outBuffers, draw->flareSurfGlob, 4u, 6u) )
  {
    vertIndexOffset = outBuffers.vertIndexOffset;
    indices = outBuffers.indices;
    __asm
    {
      vmovaps [rsp+110h+var_30], xmm6
      vmovaps [rsp+110h+var_40], xmm7
      vmovaps [rsp+110h+var_50], xmm8
      vmovaps [rsp+110h+var_60], xmm9
      vmovaps [rsp+110h+var_70], xmm10
    }
    vertIndexBase = outBuffers.vertIndexBase;
    FX_GetAtlasCoords(r_drawData, &outAtlasCoords);
    if ( r_drawData->hasAtlas && (atlasData = r_drawData->atlasData, (atlasData->behavior & 0x10) != 0) )
    {
      entryCount = atlasData->entryCount;
      __asm { vmovss  xmm6, dword ptr [rdi+80h] }
      if ( entryCount )
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3f800000; Y
          vmovaps xmm0, xmm6; X
        }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      __asm
      {
        vmovaps xmm1, xmm0; atlasBlend
        vmovaps xmm0, xmm6; atlasIndex
      }
      FX_PackAtlasParamsAsNorm32W(*(const float *)&_XMM0, *(const float *)&_XMM1, entryCount, &packedAtlasParams);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+37h+packedAtlasParams.v]
        vpextrd rbx, xmm0, 3
      }
    }
    else
    {
      LODWORD(_RBX) = 0;
    }
    __asm { vmovss  xmm2, dword ptr [rdi+24h]; lightingFrac }
    FX_PackEffectLightingArgsIntoXYZW(&r_drawData->color, &r_drawData->emissiveIntensity, *(const float *)&_XMM2, &packedAtlasParams);
    v83.value[0] = vertIndexOffset;
    v83.value[1] = vertIndexOffset + 1;
    *indices = v83;
    v83.value[0] = vertIndexOffset + 2;
    v83.value[1] = vertIndexOffset + 2;
    indices[1] = v83;
    v83.value[0] = vertIndexOffset + 3;
    v83.value[1] = vertIndexOffset;
    indices[2] = v83;
    _RSI = R_FlareSurfVertIter_Begin(draw->flareSurfGlob, vertIndexBase + vertIndexOffset);
    _RAX = du;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vaddss  xmm1, xmm0, dword ptr [r12]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm0, dword ptr [r12+4]
      vaddss  xmm1, xmm0, dword ptr [rax+4]
      vmovss  dword ptr [rsi+4], xmm1
    }
    _RSI->xyz.v[2] = 1.0;
    __asm { vxorps  xmm1, xmm1, xmm1; temperatureScale }
    _RSI->normal.packed = 0;
    _RSI->tangentBinormalSign.packed = _RBX;
    v39 = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm10, [rsp+110h+outAtlasCoords.u]
      vaddss  xmm7, xmm10, [rsp+110h+outAtlasCoords.du]
      vmovss  xmm9, [rsp+110h+outAtlasCoords.v]
      vmovups xmm8, xmmword ptr [rbp+37h+packedAtlasParams.v]
    }
    _RSI->extraData = v39;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vinsertps xmm1, xmm1, xmm7, 0
      vinsertps xmm1, xmm1, xmm9, 10h
      vcvtps2ph xmm0, xmm1, 0
      vmovss  [rsp+110h+var_E0], xmm0
    }
    _RSI->texCoord.packed = v84;
    __asm
    {
      vmovups xmmword ptr [rsi+10h], xmm8
      vmovss  xmm0, dword ptr [r12]
      vsubss  xmm1, xmm0, dword ptr [r13+0]
      vmovss  dword ptr [rsi+30h], xmm1
      vmovss  xmm0, dword ptr [r12+4]
      vsubss  xmm1, xmm0, dword ptr [r13+4]
      vmovss  dword ptr [rsi+34h], xmm1
    }
    _RSI[1].xyz.v[2] = 1.0;
    __asm { vxorps  xmm1, xmm1, xmm1; temperatureScale }
    _RSI[1].normal.packed = 0;
    _RSI[1].tangentBinormalSign.packed = _RBX;
    __asm { vaddss  xmm6, xmm9, [rsp+110h+outAtlasCoords.dv] }
    _RSI[1].extraData = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vinsertps xmm1, xmm1, xmm7, 0
      vinsertps xmm1, xmm1, xmm6, 10h
      vcvtps2ph xmm0, xmm1, 0
      vmovss  [rsp+110h+var_E0], xmm0
    }
    _RSI[1].texCoord.packed = v85;
    __asm
    {
      vmovups xmmword ptr [rsi+40h], xmm8
      vmovss  xmm0, dword ptr [r12]
      vsubss  xmm1, xmm0, dword ptr [rax]
      vmovss  dword ptr [rsi+60h], xmm1
      vmovss  xmm2, dword ptr [r12+4]
      vsubss  xmm0, xmm2, dword ptr [rax+4]
      vmovss  dword ptr [rsi+64h], xmm0
      vxorps  xmm1, xmm1, xmm1; temperatureScale
    }
    _RSI[2].normal.packed = 0;
    _RSI[2].tangentBinormalSign.packed = _RBX;
    _RSI[2].extraData = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, *(float *)&_XMM1);
    _RSI[2].xyz.v[2] = 1.0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vinsertps xmm0, xmm0, xmm10, 0
      vinsertps xmm0, xmm0, xmm6, 10h
      vcvtps2ph xmm0, xmm0, 0
      vmovss  [rsp+110h+var_E0], xmm0
    }
    _RSI[2].texCoord.packed = v86;
    __asm
    {
      vmovups xmmword ptr [rsi+70h], xmm8
      vmovss  xmm0, dword ptr [r13+0]
      vaddss  xmm2, xmm0, dword ptr [r12]
      vmovss  dword ptr [rsi+90h], xmm2
      vmovss  xmm3, dword ptr [r12+4]
      vaddss  xmm0, xmm3, dword ptr [r13+4]
      vmovss  dword ptr [rsi+94h], xmm0
      vxorps  xmm1, xmm1, xmm1; temperatureScale
    }
    _RSI[3].normal.packed = 0;
    _RSI[3].tangentBinormalSign.packed = _RBX;
    _RSI[3].extraData = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vinsertps xmm0, xmm0, xmm10, 0
    }
    _RSI[3].xyz.v[2] = 1.0;
    __asm
    {
      vinsertps xmm0, xmm0, xmm9, 10h
      vcvtps2ph xmm0, xmm0, 0
      vmovss  [rsp+110h+var_E0], xmm0
    }
    _RSI[3].texCoord.packed = v87;
    __asm { vmovups xmmword ptr [rsi+0A0h], xmm8 }
    v76 = R_FlareSurfIndexStart(draw->flareSurfGlob);
    R_AddFlareSurf(draw->flareSurfGlob, material, ((char *)indices - (char *)v76) >> 1, 2u, vertIndexBase, 4u);
    __asm
    {
      vmovaps xmm10, [rsp+110h+var_70]
      vmovaps xmm9, [rsp+110h+var_60]
      vmovaps xmm8, [rsp+110h+var_50]
      vmovaps xmm7, [rsp+110h+var_40]
      vmovaps xmm6, [rsp+110h+var_30]
    }
  }
  __asm { vmovaps xmm11, [rsp+110h+var_80] }
}

/*
==============
FX_GenParticleSimAnimationVerts
==============
*/
void FX_GenParticleSimAnimationVerts(FxDrawState *draw, const ParticleState *pParticleState, const ParticleEmitter *pParticleEmitter, const float4 *tangent, const float4 *bitangent, const float4 *normal, unsigned int activeLightGridsBitmask, FxParticleSimAnimation *particleSimAnimation, const Particle_DrawData *r_drawData, const vector4 *rParticleSimTransform, const ParticleState::ElementTypeModule *rElementTypeModule, const ParticleModuleInitParticleSim *pModuleInitParticleSim, unsigned int emitterDataIndex)
{
  unsigned int elementType; 
  bool v41; 
  bool v42; 
  bool v43; 
  unsigned int frameCount; 
  FxParticleSimAnimationFrame *frames; 
  __int64 v55; 
  unsigned int numActiveParticles; 
  Material *v57; 
  ParticleData *m_pParticleSimUpdateParticleData; 
  ParticleModuleGroupDef *moduleGroupDefs; 
  GfxMeshLightingType MeshLightingType; 
  bool v80; 
  unsigned int v91; 
  float v92; 
  r_double_index_t *v93; 
  int v94; 
  FxParticleSimAnimationParticleData *v98; 
  unsigned int v118; 
  int *RandomSeedArray; 
  unsigned int v121; 
  ParticleEmitter *v122; 
  ParticleModuleColorLerp *v123; 
  ParticleModuleColorGraph *v124; 
  ParticleData *v125; 
  char v127; 
  const float4 *v145; 
  float4 *v146; 
  const float4 *v147; 
  vector3 *v148; 
  const vector4 *v150; 
  const ParticleModule *pModule; 
  GfxMeshLightingType v310; 
  Material *v311; 
  bool IsVolumetric; 
  unsigned int v314; 
  const ParticleAtlasData *atlasData; 
  __int64 i; 
  unsigned __int16 v349; 
  unsigned int v350; 
  r_double_index_t *v351; 
  unsigned __int8 codeSurfFlags; 
  GfxCodeSurfGlob *codeSurfGlob; 
  char *fmt; 
  unsigned int *outLightmapOffset; 
  float outLightmapOffseta; 
  float outLightmapOffsetb; 
  float outLightmapV; 
  float v364; 
  float lightingType; 
  float v366; 
  float material; 
  float v368; 
  float v369; 
  float v370; 
  unsigned __int16 vertIndexOffset; 
  r_double_index_t v372; 
  r_double_index_t v373; 
  char v374; 
  float dt; 
  float outLightmapD; 
  float rotation; 
  float outLightmapU; 
  int v379; 
  unsigned int vertIndexBase; 
  unsigned int v381; 
  unsigned int v382; 
  GfxMeshDataLightingInput *lightIter; 
  FxParticleSimAnimationFrame *v385; 
  int randomSeed; 
  unsigned int outPackedAtlasDataOffset; 
  unsigned int v388; 
  ParticleData *pParticleData; 
  ParticleEmitter *pParticleEmittera; 
  vector4 *M1; 
  ParticleModuleColorLerp *pModuleColorLerp; 
  ParticleModuleColorGraph *pModuleColorGraph; 
  ParticleState *pParticleStatea; 
  ParticleModuleSizeLerp *pModuleSizeLerp; 
  ParticleModuleSizeGraph *pModuleSizeGraph; 
  const float4 *v397; 
  const float4 *v398; 
  r_double_index_t *indices; 
  float4 worldPos; 
  float4 bitangenta; 
  float4 tangenta; 
  float4 height; 
  float4 normala; 
  float4 width; 
  GfxCodeSurfArgs codeSurfArgs; 
  GfxCodeSurfBuffers outBuffers; 
  float4 color; 
  float4 size; 
  float4 v414; 
  vector4 result; 
  vec3_t dir; 
  vec3_t dst; 
  vec3_t point; 
  __int128 v420; 
  __int128 v421; 
  __int128 v422; 
  __int128 v423; 
  FxParticleSimAnimationInterpolatedData interpolatedData; 
  char v433; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-98h], xmm11
  }
  _RDI = particleSimAnimation;
  _RSI = r_drawData;
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vmovss  dword ptr [r11-3F4h], xmm11
    vmovss  dword ptr [r11-3F8h], xmm11
    vmovss  dword ptr [r11-3FCh], xmm11
  }
  v398 = bitangent;
  M1 = (vector4 *)rParticleSimTransform;
  pModuleColorGraph = NULL;
  pModuleColorLerp = NULL;
  pModuleSizeGraph = NULL;
  pModuleSizeLerp = NULL;
  v397 = tangent;
  pParticleEmittera = (ParticleEmitter *)pParticleEmitter;
  pParticleStatea = (ParticleState *)pParticleState;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    vmovdqa xmmword ptr [rsp+4B8h+result.w.v], xmm0
  }
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
  _RAX = r_drawData->randomSeed;
  _RCX = &fx_randomTable[43];
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  randomSeed = r_drawData->randomSeed;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+rax*4]
    vsubss  xmm0, xmm0, xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+18h]
    vmulss  xmm1, xmm1, dword ptr [rbx+1Ch]
  }
  elementType = pParticleState->m_pStateDef->elementType;
  v382 = elementType;
  __asm { vaddss  xmm8, xmm2, xmm1 }
  if ( (elementType & 0xFFFFFFF5) != 0 || (v41 = elementType < 2, v42 = elementType == 2) )
  {
    v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2101, ASSERT_TYPE_ASSERT, "(elementType == PARTICLE_ELEMENT_TYPE_BILLBOARD_SPRITE || elementType == PARTICLE_ELEMENT_TYPE_ORIENTED_SPRITE || elementType == PARTICLE_ELEMENT_TYPE_TAIL)", (const char *)&queryFormat, "elementType == PARTICLE_ELEMENT_TYPE_BILLBOARD_SPRITE || elementType == PARTICLE_ELEMENT_TYPE_ORIENTED_SPRITE || elementType == PARTICLE_ELEMENT_TYPE_TAIL");
    v41 = 0;
    v42 = !v43;
    if ( v43 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+18h]
    vcomiss xmm0, dword ptr [rdi+14h]
  }
  if ( v41 )
  {
    __asm { vmulss  xmm3, xmm0, dword ptr [rdi+10h] }
  }
  else
  {
    if ( !pModuleInitParticleSim->m_holdLastFrame )
      goto LABEL_102;
    v42 = particleSimAnimation->header.frameCount == 1;
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, rax
    }
  }
  __asm { vucomiss xmm3, cs:__real@bf800000 }
  if ( !v42 )
  {
    frameCount = particleSimAnimation->header.frameCount;
    __asm
    {
      vmovaps [rsp+4B8h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
      vmovaps xmm1, xmm3
      vroundss xmm2, xmm6, xmm1, 1
      vmovaps [rsp+4B8h+var_A8], xmm12
      vcvttss2si rax, xmm3
      vsubss  xmm12, xmm3, xmm2
      vcvttss2si ebx, xmm3
    }
    v379 = _EBX;
    __asm { vmovss  [rsp+4B8h+var_3E0], xmm12 }
    if ( (unsigned int)_RAX >= frameCount )
    {
      LODWORD(outLightmapOffset) = _EBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2109, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( particleSimAnimation->header.frameCount )", "frameIndex doesn't index particleSimAnimation->header.frameCount\n\t%i not in [0, %i)", outLightmapOffset, frameCount) )
        __debugbreak();
    }
    frames = particleSimAnimation->frames;
    v55 = _EBX;
    v385 = frames;
    numActiveParticles = frames[_EBX].numActiveParticles;
    if ( numActiveParticles )
    {
      if ( draw->sprite.indexCount )
      {
        FX_SpriteDirectFlush(draw->codeSurfGlob, &draw->sprite, 0);
        numActiveParticles = frames[_EBX].numActiveParticles;
      }
      v57 = particleSimAnimation->material;
      v388 = 6 * numActiveParticles;
      if ( FX_AddAtlasDataReserveCodeSurfBuffers(draw, v57, &outPackedAtlasDataOffset, numActiveParticles, &outBuffers) )
      {
        v42 = !particleSimAnimation->header.sortParticlesAtRuntime;
        vertIndexBase = outBuffers.vertIndexBase;
        vertIndexOffset = outBuffers.vertIndexOffset;
        __asm { vmovaps [rsp+4B8h+var_C8], xmm14 }
        indices = outBuffers.indices;
        __asm { vmovaps [rsp+4B8h+var_D8], xmm15 }
        if ( !v42 && frames[_EBX].numActiveParticles > 0x4080 )
        {
          LODWORD(fmt) = frames[_EBX].numActiveParticles;
          Com_PrintWarning(21, "%s: Particle Sim Animation '%s' contains too many particles to sort at runtime (%d particles, max %zu), disabling sorting.", "FX_GenParticleSimAnimationVerts", particleSimAnimation->name, fmt, 0x4080ui64);
          particleSimAnimation->header.sortParticlesAtRuntime = 0;
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi+60h]
          vbroadcastss xmm14, dword ptr [rsi+70h]
          vbroadcastss xmm15, dword ptr [rsi+74h]
          vmovups [rsp+4B8h+var_2C8], xmm0
          vmovaps [rsp+4B8h+var_78], xmm9
        }
        if ( v382 == 10 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vinsertps xmm1, xmm1, dword ptr [rdi+28h], 0
            vinsertps xmm1, xmm1, dword ptr [rdi+2Ch], 10h
            vinsertps xmm1, xmm1, dword ptr [rdi+30h], 20h ; ' '
            vmulps  xmm2, xmm1, cs:__xmm@37800080378000803780008037800080
            vxorps  xmm9, xmm9, xmm9
            vinsertps xmm9, xmm9, dword ptr [rdi+1Ch], 0
            vinsertps xmm9, xmm9, dword ptr [rdi+20h], 10h
            vinsertps xmm9, xmm9, dword ptr [rdi+24h], 20h ; ' '
          }
        }
        else
        {
          __asm
          {
            vmovups xmm9, [rsp+4B8h+var_308]
            vmovups xmm2, [rsp+4B8h+var_308]
          }
        }
        v42 = !particleSimAnimation->header.evalVisStatePerParticle;
        _RAX = v397;
        __asm
        {
          vmovups [rsp+4B8h+var_2F8], xmm2
          vmovups [rsp+4B8h+var_2D8], xmm9
          vmovaps [rsp+4B8h+var_58], xmm7
          vmovups xmm0, xmmword ptr [rax]
        }
        _RAX = normal;
        __asm
        {
          vmovups xmmword ptr [rsp+4B8h+tangent.v], xmm0
          vmovups xmm0, xmmword ptr [rax]
        }
        _RAX = v398;
        __asm
        {
          vmovups xmmword ptr [rsp+4B8h+normal.v], xmm0
          vmovups xmm1, xmmword ptr [rax]
        }
        m_pParticleSimUpdateParticleData = pParticleState->m_pParticleSimUpdateParticleData;
        pParticleData = m_pParticleSimUpdateParticleData;
        __asm { vmovups xmmword ptr [rsp+4B8h+bitangent.v], xmm1 }
        if ( v42 || !m_pParticleSimUpdateParticleData )
        {
          v374 = 0;
          if ( r_drawData->allowLighting )
          {
            MeshLightingType = GetMeshLightingType(particleSimAnimation->material);
            if ( MeshLightingType != GFX_MESH_LIGHTING_NONE )
            {
              __asm { vmovss  xmm7, dword ptr [rsi+28h] }
              v80 = !Material_IsVolumetric(particleSimAnimation->material);
              if ( R_AllocateCodeSurfLightmap(draw->codeSurfGlob, MeshLightingType, 0, activeLightGridsBitmask, &lightIter, (unsigned int *)&dt, &outLightmapU, &rotation, &outLightmapD) )
              {
                _RAX = lightIter;
                __asm
                {
                  vmovups xmm1, xmmword ptr [rsi+40h]
                  vmovss  dword ptr [rax], xmm1
                  vextractps dword ptr [rax+4], xmm1, 1
                  vextractps dword ptr [rax+8], xmm1, 2
                }
                _RAX = lightIter;
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vinsertps xmm1, xmm1, xmm7, 10h
                }
                v381 = LOWORD(dt) & 0x3FFF | (LODWORD(dt) >> 2) & 0xFFFC000 | (v80 << 28);
                __asm
                {
                  vmovss  xmm0, [rsp+4B8h+var_3E8]
                  vmovss  dword ptr [rax+0Ch], xmm0
                }
                _RAX = lightIter;
                __asm
                {
                  vcvtps2ph xmm0, xmm1, 0
                  vshufps xmm0, xmm6, xmm0, 0FAh ; 'ú'
                  vshufps xmm1, xmm6, xmm0, 84h ; '„'
                  vmovups xmmword ptr [rax+10h], xmm1
                }
              }
              else
              {
                __asm
                {
                  vmovss  [rsp+4B8h+var_3F4], xmm11
                  vmovss  [rsp+4B8h+rotation], xmm11
                  vmovss  [rsp+4B8h+var_3FC], xmm11
                }
              }
            }
          }
        }
        else
        {
          v374 = 1;
          if ( !pParticleEmittera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1983, ASSERT_TYPE_ASSERT, "(pParticleEmitter)", (const char *)&queryFormat, "pParticleEmitter") )
            __debugbreak();
          moduleGroupDefs = pParticleState->m_pStateDef->moduleGroupDefs;
          pModuleColorGraph = (ParticleModuleColorGraph *)ParticleModule::FindModule<ParticleModuleColorGraph>(moduleGroupDefs, PARTICLE_MODULE_COLOR_GRAPH, 0xFFFFFFFF);
          pModuleColorLerp = (ParticleModuleColorLerp *)ParticleModule::FindModule<ParticleModuleColorLerp>(moduleGroupDefs, PARTICLE_MODULE_COLOR_LERP, 0xFFFFFFFF);
          pModuleSizeGraph = (ParticleModuleSizeGraph *)ParticleModule::FindModule<ParticleModuleSizeGraph>(moduleGroupDefs, PARTICLE_MODULE_SIZE_GRAPH, 0xFFFFFFFF);
          pModuleSizeLerp = (ParticleModuleSizeLerp *)ParticleModule::FindModule<ParticleModuleSizeLerp>(moduleGroupDefs, PARTICLE_MODULE_SIZE_LERP, 0xFFFFFFFF);
        }
        v91 = frames[v55].numActiveParticles;
        v92 = 0.0;
        dt = 0.0;
        v93 = indices;
        if ( v91 )
        {
          v94 = vertIndexOffset;
          __asm
          {
            vmovaps xmm6, xmm8
            vshufps xmm6, xmm6, xmm6, 0
            vmovaps [rsp+4B8h+var_88], xmm10
            vmovups [rsp+4B8h+var_308], xmm6
          }
          LODWORD(lightIter) = 4 - vertIndexBase;
          __asm { vmovaps [rsp+4B8h+var_B8], xmm13 }
          while ( 1 )
          {
            __asm { vmovaps xmm2, xmm12; frameLerp }
            v98 = &particleSimAnimation->particleData[LODWORD(v92) + v385[v55].particleDataOffset];
            FX_InterpolateParticleSimAnimationData(particleSimAnimation, v98, *(float *)&_XMM2, &interpolatedData);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+4B8h+interpolatedData.position]
              vmovups xmm7, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
            }
            HIDWORD(v420) = 0;
            __asm
            {
              vmovups xmm2, xmmword ptr [rsp+360h]
              vmovss  xmm2, xmm2, xmm0
              vinsertps xmm2, xmm2, dword ptr [rsp+4B8h+interpolatedData.position+4], 10h
              vinsertps xmm2, xmm2, dword ptr [rsp+4B8h+interpolatedData.position+8], 20h
              vmulps  xmm0, xmm6, xmm2
              vshufps xmm1, xmm0, xmm0, 0
              vshufps xmm4, xmm0, xmm0, 0AAh ; 'ª'
              vmovups xmmword ptr [rsp+360h], xmm2
              vshufps xmm2, xmm0, xmm0, 55h ; 'U'
              vmulps  xmm0, xmm1, xmmword ptr [rax]
              vaddps  xmm3, xmm0, xmm7
              vmulps  xmm0, xmm2, xmmword ptr [rax+10h]
              vaddps  xmm2, xmm0, xmm7
              vmulps  xmm0, xmm4, xmmword ptr [rax+20h]
              vaddps  xmm1, xmm0, xmm3
              vaddps  xmm2, xmm2, xmm1
              vandps  xmm0, xmm2, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
              vaddps  xmm10, xmm0, xmmword ptr [rsi+40h]
            }
            v118 = randomSeed + 10111 * (unsigned __int8)v98->particleID;
            __asm { vmovups xmmword ptr [rsp+4B8h+worldPos.v], xmm10 }
            v381 = v118 % 0x3FE9;
            if ( v374 )
            {
              _RBX = Particle_GetLifeArray(pParticleData);
              RandomSeedArray = Particle_GetRandomSeedArray(pParticleData);
              __asm { vmovss  xmm6, [rsp+4B8h+interpolatedData.lifetime] }
              v121 = v381;
              v122 = pParticleEmittera;
              v123 = pModuleColorLerp;
              v124 = pModuleColorGraph;
              __asm { vmovss  dword ptr [rbx], xmm6 }
              v125 = pParticleData;
              *RandomSeedArray = v121;
              __asm { vmovss  dword ptr [rsp+4B8h+outLightmapOffset], xmm6 }
              if ( FX_CalculateParticleSimColor(v125, v124, v123, v122, pParticleStatea, outLightmapOffseta, &color) )
              {
                __asm
                {
                  vmovups xmm12, xmmword ptr [rsp+4B8h+color.v]
                  vmovups [rsp+4B8h+var_2C8], xmm12
                  vmovss  xmm12, [rsp+4B8h+var_3E0]
                }
              }
              __asm { vmovss  dword ptr [rsp+4B8h+outLightmapOffset], xmm6 }
              v127 = FX_CalculateParticleSimSize(v125, pModuleSizeGraph, pModuleSizeLerp, pParticleEmittera, pParticleStatea, outLightmapOffsetb, &size);
              v92 = dt;
              __asm { vmovups xmm7, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero }
              if ( v127 )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [rsp+4B8h+size.v]
                  vshufps xmm14, xmm0, xmm0, 0
                  vshufps xmm15, xmm0, xmm0, 55h ; 'U'
                }
              }
            }
            __asm { vmovss  xmm13, dword ptr [rsi+80h] }
            if ( r_drawData->hasAtlas && particleSimAnimation->header.hasIndex )
            {
              __asm { vmovaps xmm2, xmm12; frameLerp }
              FX_InterpolateParticleSimAnimationDataIndex(particleSimAnimation, &particleSimAnimation->particleDataIndex[LODWORD(v92) + v385[v379].particleDataOffset], *(float *)&_XMM2, &interpolatedData);
              __asm
              {
                vmovups xmm7, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
                vxorps  xmm13, xmm13, xmm13
                vcvtsi2ss xmm13, xmm13, [rsp+4B8h+interpolatedData.index]
              }
            }
            __asm
            {
              vbroadcastss xmm0, [rsp+4B8h+interpolatedData.width]
              vbroadcastss xmm1, [rsp+4B8h+interpolatedData.height]
              vmulps  xmm0, xmm0, xmm14
              vmulps  xmm8, xmm1, xmm15
              vmovups xmmword ptr [rsp+4B8h+width.v], xmm0
              vmovups xmmword ptr [rsp+4B8h+height.v], xmm8
            }
            if ( v382 == 8 )
              break;
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+4B8h+interpolatedData.orientation+8]
              vaddss  xmm12, xmm0, dword ptr [rsi+20h]
            }
            if ( v382 == 10 )
            {
              _RAX = M1;
              __asm
              {
                vxorps  xmm4, xmm4, xmm4
                vxorps  xmm3, xmm3, xmm3
                vmovups ymm5, ymmword ptr [rax]
                vmovups ymm6, ymmword ptr [rax+20h]
              }
              LODWORD(_RAX) = v98->zNormalizedPos;
              __asm { vmovd   xmm2, eax }
              LODWORD(_RAX) = v98->yNormalizedPos;
              __asm
              {
                vcvtdq2ps xmm2, xmm2
                vmovd   xmm1, eax
              }
              LODWORD(_RAX) = v98->xNormalizedPos;
              __asm
              {
                vcvtdq2ps xmm1, xmm1
                vmovd   xmm0, eax
              }
              LODWORD(_RAX) = v98->zNormalizedPosNextFrame;
              __asm
              {
                vcvtdq2ps xmm0, xmm0
                vinsertps xmm4, xmm4, xmm0, 0
                vinsertps xmm4, xmm4, xmm1, 10h
                vinsertps xmm4, xmm4, xmm2, 20h ; ' '
                vmovd   xmm2, eax
              }
              LODWORD(_RAX) = v98->yNormalizedPosNextFrame;
              __asm
              {
                vcvtdq2ps xmm2, xmm2
                vmovd   xmm1, eax
              }
              LODWORD(_RAX) = v98->xNormalizedPosNextFrame;
              __asm
              {
                vcvtdq2ps xmm1, xmm1
                vmovd   xmm0, eax
                vcvtdq2ps xmm0, xmm0
                vinsertps xmm3, xmm3, xmm0, 0
                vmulps  xmm0, xmm4, [rsp+4B8h+var_2F8]
                vinsertps xmm3, xmm3, xmm1, 10h
                vinsertps xmm3, xmm3, xmm2, 20h ; ' '
                vmulps  xmm1, xmm3, [rsp+4B8h+var_2F8]
                vaddps  xmm2, xmm0, xmm9
                vaddps  xmm0, xmm1, xmm9
                vbroadcastss xmm1, dword ptr [rdi+10h]
                vsubps  xmm2, xmm0, xmm2
                vmulps  xmm0, xmm2, xmm1
                vshufps xmm2, xmm0, xmm0, 55h ; 'U'
                vshufps xmm3, xmm0, xmm0, 0
                vshufps xmm4, xmm0, xmm0, 0AAh ; 'ª'
                vmulps  xmm0, xmm3, xmm5
                vaddps  xmm1, xmm0, xmm7
                vextractf128 xmm0, ymm5, 1
                vmulps  xmm0, xmm0, xmm2
                vaddps  xmm2, xmm0, xmm7
                vmulps  xmm0, xmm6, xmm4
                vaddps  xmm1, xmm0, xmm1
                vaddps  xmm2, xmm2, xmm1
                vandps  xmm0, xmm2, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
                vaddps  xmm9, xmm0, xmmword ptr [rsi+50h]
                vmovups xmm0, xmmword ptr cs:?g_equalsEpsilon@@3Ufloat4@@B.v; float4 const g_equalsEpsilon
                vandnps xmm2, xmm7, xmm9
                vcmpltps xmm1, xmm0, xmm2
                vmovmskps eax, xmm1
              }
              if ( ((unsigned __int8)_RAX & 0xF) != 0 )
              {
                __asm
                {
                  vmulps  xmm0, xmm9, xmm9
                  vinsertps xmm1, xmm0, xmm0, 8
                  vhaddps xmm2, xmm1, xmm1
                  vhaddps xmm0, xmm2, xmm2
                  vsqrtps xmm1, xmm0
                  vdivps  xmm7, xmm9, xmm1
                }
              }
              else
              {
                __asm { vmovups xmm7, cs:__xmm@0000000000000000000000003f800000 }
              }
              pModule = rElementTypeModule->pModule;
              if ( BYTE2(rElementTypeModule->pModule[1].m_flags) )
              {
                __asm { vucomiss xmm12, xmm11 }
                if ( BYTE2(rElementTypeModule->pModule[1].m_flags) )
                {
                  _RAX = draw->camera;
                  __asm
                  {
                    vshufps xmm2, xmm10, xmm10, 55h ; 'U'
                    vshufps xmm3, xmm10, xmm10, 0AAh ; 'ª'
                    vmovss  xmm0, dword ptr [rax]
                    vmovss  xmm1, dword ptr [rax+4]
                    vsubss  xmm4, xmm0, xmm10
                    vmovss  xmm0, dword ptr [rax+8]
                    vsubss  xmm5, xmm1, xmm2
                    vsubss  xmm6, xmm0, xmm3
                    vmulss  xmm0, xmm6, xmm6
                    vmulss  xmm2, xmm5, xmm5
                    vmulss  xmm1, xmm4, xmm4
                    vaddss  xmm3, xmm2, xmm1
                    vaddss  xmm2, xmm3, xmm0
                    vmulss  xmm3, xmm12, cs:__real@42652ee0; degrees
                    vsqrtss xmm1, xmm2, xmm2
                    vcmpless xmm0, xmm1, cs:__real@80000000
                    vmovss  xmm2, cs:__real@3f800000
                    vblendvps xmm0, xmm1, xmm2, xmm0
                    vdivss  xmm2, xmm2, xmm0
                    vmulss  xmm0, xmm2, xmm4
                    vmovss  dword ptr [rsp+4B8h+dir], xmm0
                    vmulss  xmm0, xmm2, xmm6
                    vmulss  xmm1, xmm2, xmm5
                    vmovss  dword ptr [rsp+4B8h+dir+8], xmm0
                    vmovss  dword ptr [rsp+4B8h+point], xmm7
                    vextractps dword ptr [rsp+4B8h+point+4], xmm7, 1
                    vextractps dword ptr [rsp+4B8h+point+8], xmm7, 2
                    vmovss  dword ptr [rsp+4B8h+dir+4], xmm1
                  }
                  RotatePointAroundVector(&dst, &dir, &point, *(float *)&_XMM3);
                  __asm { vmovss  xmm0, dword ptr [rsp+4B8h+dst] }
                  HIDWORD(v422) = 0;
                  __asm { vmovups xmm7, xmmword ptr [rsp+380h] }
                  pModule = rElementTypeModule->pModule;
                  __asm
                  {
                    vmovss  xmm7, xmm7, xmm0
                    vinsertps xmm7, xmm7, dword ptr [rsp+4B8h+dst+4], 10h
                    vinsertps xmm7, xmm7, dword ptr [rsp+4B8h+dst+8], 20h
                    vmovups xmmword ptr [rsp+380h], xmm7
                    vmovaps xmm12, xmm11
                  }
                }
              }
              if ( BYTE1(pModule[1].m_flags) )
              {
                __asm
                {
                  vmulps  xmm0, xmm9, xmm9
                  vinsertps xmm1, xmm0, xmm0, 8
                  vhaddps xmm2, xmm1, xmm1
                  vhaddps xmm0, xmm2, xmm2
                  vsqrtps xmm1, xmm0
                  vmulps  xmm8, xmm1, xmm8
                  vmovups xmmword ptr [rsp+4B8h+height.v], xmm8
                }
              }
              if ( LOBYTE(pModule[1].m_flags) )
              {
                __asm
                {
                  vmulps  xmm0, xmm8, cs:__xmm@bf800000bf800000bf800000bf800000
                  vmulps  xmm0, xmm0, xmm7
                }
              }
              else
              {
                __asm { vmulps  xmm0, xmm8, xmm7 }
              }
              _RAX = draw->camera;
              __asm
              {
                vaddps  xmm10, xmm0, xmm10
                vshufps xmm6, xmm7, xmm7, 0D2h ; 'Ò'
                vshufps xmm5, xmm7, xmm7, 0C9h ; 'É'
                vmovss  xmm0, dword ptr [rax]
                vmovss  xmm1, dword ptr [rax+4]
                vmovss  xmm2, dword ptr [rax+8]
              }
              HIDWORD(v423) = 0;
              __asm
              {
                vmovups xmm3, xmmword ptr [rsp+390h]
                vmovss  xmm3, xmm3, xmm0
                vinsertps xmm3, xmm3, xmm1, 10h
                vinsertps xmm3, xmm3, xmm2, 20h ; ' '
                vsubps  xmm1, xmm3, xmm10
                vshufps xmm0, xmm1, xmm1, 0D2h ; 'Ò'
                vshufps xmm1, xmm1, xmm1, 0C9h ; 'É'
                vmulps  xmm2, xmm1, xmm6
                vmovups xmmword ptr [rsp+390h], xmm3
                vmulps  xmm3, xmm0, xmm5
                vsubps  xmm4, xmm3, xmm2
                vmulps  xmm0, xmm4, xmm4
                vinsertps xmm1, xmm0, xmm0, 8
                vhaddps xmm2, xmm1, xmm1
                vhaddps xmm0, xmm2, xmm2
                vsqrtps xmm1, xmm0
                vdivps  xmm4, xmm4, xmm1
                vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
                vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
                vmulps  xmm3, xmm0, xmm5
                vmulps  xmm2, xmm1, xmm6
                vsubps  xmm0, xmm2, xmm3
                vmovups xmmword ptr [rsp+4B8h+worldPos.v], xmm10
                vmovups xmmword ptr [rsp+4B8h+tangent.v], xmm4
                vmovdqa xmmword ptr [rsp+4B8h+bitangent.v], xmm7
              }
              goto LABEL_77;
            }
LABEL_78:
            __asm
            {
              vmovups xmm0, [rsp+4B8h+var_2C8]
              vmulps  xmm7, xmm0, xmmword ptr [rsp+4B8h+interpolatedData.color]
            }
            if ( v374 )
            {
              if ( !r_drawData->allowLighting || (v310 = GetMeshLightingType(particleSimAnimation->material), v310 == GFX_MESH_LIGHTING_NONE) )
              {
                __asm
                {
                  vmovss  [rsp+4B8h+var_3F4], xmm11
                  vmovss  [rsp+4B8h+rotation], xmm11
                  vmovss  [rsp+4B8h+var_3FC], xmm11
                }
              }
              else
              {
                v311 = particleSimAnimation->material;
                __asm { vmovss  xmm6, dword ptr [rsi+28h] }
                IsVolumetric = Material_IsVolumetric(v311);
                __asm
                {
                  vmovss  dword ptr [rsp+4B8h+var_470], xmm6
                  vmovss  dword ptr [rsp+4B8h+outLightmapV], xmm12
                }
                FX_SetupLighting(draw->codeSurfGlob, draw->camera, &worldPos, &tangenta, &bitangenta, &width, &height, outLightmapV, !IsVolumetric, v364, v310, activeLightGridsBitmask, v311, &outLightmapU, &rotation, &outLightmapD);
                __asm { vmovups xmm10, xmmword ptr [rsp+4B8h+worldPos.v] }
              }
            }
            v314 = v94 + vertIndexBase;
            if ( v94 + vertIndexBase + (unsigned int)lightIter >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2327, ASSERT_TYPE_ASSERT, "(particleVertIndexOffset + vertPerParticle < GFX_CODESURF_VERT_INDEX_MAX)", (const char *)&queryFormat, "particleVertIndexOffset + vertPerParticle < GFX_CODESURF_VERT_INDEX_MAX") )
              __debugbreak();
            atlasData = r_drawData->atlasData;
            __asm { vmovups xmmword ptr [rsp+4B8h+var_248.v], xmm7 }
            if ( atlasData->entryCount )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, ecx; Y
                vmovaps xmm0, xmm13; X
              }
              *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm { vmovaps xmm1, xmm0 }
            }
            else
            {
              __asm { vmovaps xmm1, xmm11 }
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+2Ch]
              vmovss  xmm3, dword ptr [rsi+24h]; lightingFrac
              vmovss  [rsp+4B8h+var_418], xmm0
              vmovss  xmm0, [rsp+4B8h+var_3FC]
              vmovss  dword ptr [rsp+4B8h+var_448], xmm1
              vmovss  xmm1, [rsp+4B8h+rotation]
              vmovss  dword ptr [rsp+4B8h+var_450], xmm0
              vmovss  xmm0, [rsp+4B8h+var_3F4]
              vmovss  dword ptr [rsp+4B8h+material], xmm1
              vmovss  [rsp+4B8h+var_460], xmm0
              vmovss  [rsp+4B8h+lightingType], xmm12
            }
            FX_SetupParticleQuad(draw->codeSurfGlob, &v414, &r_drawData->emissiveIntensity, *(float *)&_XMM3, &worldPos, &normala, &tangenta, &bitangenta, &width, &height, lightingType, v366, material, v368, v369, v314, emitterDataIndex, outPackedAtlasDataOffset, 0, 0, v370, particleSimAnimation->material);
            _R10 = g_fxParticleSimAnimationSort;
            if ( particleSimAnimation->header.sortParticlesAtRuntime )
            {
              _RAX = draw->camera;
              _RBX = LODWORD(dt);
              __asm
              {
                vshufps xmm2, xmm10, xmm10, 55h ; 'U'
                vshufps xmm3, xmm10, xmm10, 0AAh ; 'ª'
                vmovss  xmm0, dword ptr [rax]
                vmovss  xmm1, dword ptr [rax+4]
                vsubss  xmm2, xmm1, xmm2
                vsubss  xmm4, xmm0, xmm10
                vmovss  xmm0, dword ptr [rax+8]
                vsubss  xmm3, xmm0, xmm3
                vmulss  xmm1, xmm2, xmm2
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm3, xmm2, xmm1
                vmovss  dword ptr [r10+rbx*8], xmm3
              }
              g_fxParticleSimAnimationSort[_RBX].vertIndexOffset = v94;
            }
            else
            {
              *(float *)&_RBX = dt;
              v372.value[1] = v94 + 1;
              v372.value[0] = v94;
              *v93 = v372;
              v372.value[0] = v94 + 2;
              v372.value[1] = v94 + 2;
              v93[1] = v372;
              v372.value[0] = v94 + 3;
              v372.value[1] = v94;
              v93[2] = v372;
              v93 += 3;
            }
            LODWORD(v92) = _RBX + 1;
            v94 += 4;
            __asm
            {
              vmovups xmm9, [rsp+4B8h+var_2D8]
              vmovss  xmm12, [rsp+4B8h+var_3E0]
              vmovups xmm6, [rsp+4B8h+var_308]
            }
            v91 = v385[v379].numActiveParticles;
            v55 = v379;
            dt = v92;
            if ( LODWORD(v92) >= v91 )
            {
              frames = v385;
              __asm
              {
                vmovaps xmm13, [rsp+4B8h+var_B8]
                vmovaps xmm10, [rsp+4B8h+var_88]
              }
              goto LABEL_94;
            }
          }
          __asm { vmovaps xmm2, xmm12; frameLerp }
          FX_InterpolateParticleSimAnimationDataOrientation3D(particleSimAnimation, &particleSimAnimation->particleDataOrientation3D[LODWORD(v92) + v385[v379].particleDataOffset], *(float *)&_XMM2, &interpolatedData);
          __asm { vmovss  xmm0, dword ptr [rsp+4B8h+interpolatedData.orientation] }
          HIDWORD(v421) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rsp+370h]
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, dword ptr [rsp+4B8h+interpolatedData.orientation+4], 10h
            vinsertps xmm3, xmm3, dword ptr [rsp+4B8h+interpolatedData.orientation+8], 20h
            vmovups xmm0, xmm3
            vmovups xmmword ptr [rsp+370h], xmm3
          }
          Float4RadianToQuat(v146, v145);
          Float4UnitQuatToAxis(v148, v147);
          __asm
          {
            vmovups xmmword ptr [rsp+4B8h+var_238+10h], xmm1
            vmovups xmmword ptr [rsp+4B8h+var_238], xmm0
            vmovups ymm3, [rsp+4B8h+var_238]
            vmovups ymmword ptr [rsp+4B8h+result.baseclass_0.x.v], ymm3
            vmovups xmmword ptr [rsp+4B8h+result.baseclass_0.z.v], xmm2
          }
          Float4x4Mul(&result, M1, v150);
          __asm { vmovups xmm6, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero }
          _RAX = v397;
          __asm
          {
            vmovups xmm7, xmm0
            vmovups xmm9, xmm2
            vmovups xmm8, xmm1
            vmovups xmm3, xmmword ptr [rax]
          }
          _RAX = v398;
          __asm
          {
            vshufps xmm4, xmm3, xmm3, 55h ; 'U'
            vshufps xmm5, xmm3, xmm3, 0AAh ; 'ª'
            vshufps xmm0, xmm3, xmm3, 0
            vmulps  xmm0, xmm7, xmm0
            vaddps  xmm3, xmm0, xmm6
            vmulps  xmm0, xmm1, xmm4
            vaddps  xmm2, xmm0, xmm6
            vmulps  xmm1, xmm9, xmm5
            vmovups xmm5, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
            vaddps  xmm0, xmm1, xmm3
            vmovups xmm1, xmmword ptr [rax]
          }
          _RAX = normal;
          __asm
          {
            vaddps  xmm2, xmm2, xmm0
            vandps  xmm0, xmm2, xmm5
            vmovups xmmword ptr [rsp+4B8h+tangent.v], xmm0
            vshufps xmm2, xmm1, xmm1, 55h ; 'U'
            vshufps xmm0, xmm1, xmm1, 0
            vmulps  xmm0, xmm7, xmm0
            vaddps  xmm3, xmm0, xmm6
            vmulps  xmm0, xmm8, xmm2
            vaddps  xmm2, xmm0, xmm6
            vshufps xmm4, xmm1, xmm1, 0AAh ; 'ª'
            vmulps  xmm1, xmm9, xmm4
            vaddps  xmm0, xmm1, xmm3
            vmovups xmm1, xmmword ptr [rax]
            vaddps  xmm2, xmm2, xmm0
            vandps  xmm0, xmm2, xmm5
            vmovups xmmword ptr [rsp+4B8h+bitangent.v], xmm0
            vshufps xmm2, xmm1, xmm1, 55h ; 'U'
            vshufps xmm0, xmm1, xmm1, 0
            vmulps  xmm0, xmm7, xmm0
            vaddps  xmm3, xmm0, xmm6
            vmulps  xmm0, xmm8, xmm2
            vaddps  xmm2, xmm0, xmm6
            vshufps xmm4, xmm1, xmm1, 0AAh ; 'ª'
            vmulps  xmm1, xmm9, xmm4
            vaddps  xmm0, xmm1, xmm3
            vaddps  xmm2, xmm2, xmm0
            vandps  xmm0, xmm2, xmm5
            vmovaps xmm12, xmm11
          }
LABEL_77:
          __asm { vmovups xmmword ptr [rsp+4B8h+normal.v], xmm0 }
          goto LABEL_78;
        }
LABEL_94:
        __asm
        {
          vmovaps xmm15, [rsp+4B8h+var_D8]
          vmovaps xmm14, [rsp+4B8h+var_C8]
          vmovaps xmm9, [rsp+4B8h+var_78]
          vmovaps xmm7, [rsp+4B8h+var_58]
        }
        if ( particleSimAnimation->header.sortParticlesAtRuntime )
        {
          std::_Sort_unchecked<FxParticleSimAnimationSortInfo *,bool (*)(FxParticleSimAnimationSortInfo const &,FxParticleSimAnimationSortInfo const &)>(g_fxParticleSimAnimationSort, &g_fxParticleSimAnimationSort[v91], v91, FX_CompareParticleDistance);
          for ( i = 0i64; (unsigned int)i < frames[v55].numActiveParticles; v93 += 3 )
          {
            v349 = g_fxParticleSimAnimationSort[i].vertIndexOffset;
            i = (unsigned int)(i + 1);
            v373.value[0] = v349;
            v373.value[1] = v349 + 1;
            *v93 = v373;
            v373.value[0] = v349 + 2;
            v373.value[1] = v349 + 2;
            v93[1] = v373;
            v373.value[0] = v349 + 3;
            v373.value[1] = v349;
            v93[2] = v373;
          }
        }
        v350 = v388;
        v351 = indices;
        if ( v93 != (r_double_index_t *)&indices->value[v388] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 2358, ASSERT_TYPE_ASSERT, "(&indices[0].value[0] == &baseIndices[0].value[0] + indexCount)", (const char *)&queryFormat, "&indices[0].value[0] == &baseIndices[0].value[0] + indexCount") )
          __debugbreak();
        codeSurfArgs.material = particleSimAnimation->material;
        codeSurfArgs.vertIndexBase = vertIndexBase;
        codeSurfArgs.fxName = r_drawData->vfxName;
        codeSurfFlags = r_drawData->codeSurfFlags;
        *(_QWORD *)&codeSurfArgs.argOffset = 0i64;
        codeSurfArgs.sortOrder = 0;
        codeSurfGlob = draw->codeSurfGlob;
        codeSurfArgs.flags = codeSurfFlags;
        codeSurfArgs.indices = v351;
        codeSurfArgs.indexCount = v350;
        R_AddCodeSurf(codeSurfGlob, &codeSurfArgs);
      }
    }
    __asm
    {
      vmovaps xmm6, [rsp+4B8h+var_48]
      vmovaps xmm12, [rsp+4B8h+var_A8]
    }
  }
LABEL_102:
  _R11 = &v433;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-60h]
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
  int entryCount; 
  int v9; 
  int v12; 
  int v13; 
  int t0; 
  void *retaddr; 
  float s0; 
  float v23; 

  _RAX = &retaddr;
  atlasData = drawData->atlasData;
  _R14 = outAtlasCoords;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovss  xmm6, dword ptr [rcx+80h]
  }
  if ( atlasData->isAtlas )
  {
    entryCount = atlasData->entryCount;
    v9 = entryCount - 1;
    if ( (unsigned int)(entryCount - 1) > 0xFF || (v9 & entryCount) != 0 )
    {
      t0 = atlasData->entryCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 166, ASSERT_TYPE_ASSERT, "( ( atlasCount > 0 && atlasCount <= 256 && IsPowerOf2( atlasCount ) ) )", "( atlasCount ) = %i", t0) )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvttss2si r15d, xmm6
    }
    v12 = v9 & _ER15;
    v13 = 1 << (atlasData->colIndexBits + atlasData->rowIndexBits);
    __asm
    {
      vmovss  [rsp+78h+s0], xmm0
      vmovss  [rsp+78h+arg_10], xmm0
    }
    if ( v13 != entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 178, ASSERT_TYPE_ASSERT, "(( 1 << ( atlasData.colIndexBits + atlasData.rowIndexBits ) ) == atlasCount)", (const char *)&queryFormat, "( 1 << ( atlasData.colIndexBits + atlasData.rowIndexBits ) ) == atlasCount") )
      __debugbreak();
    TextureAtlas_GetCoords_ByIndex_Pow2Bits(v9 & (v12 + 1), atlasData->colIndexBits, atlasData->rowIndexBits, &s0, &_R14->du, &v23, &_R14->dv);
    TextureAtlas_GetCoords_ByIndex_Pow2Bits(v12, atlasData->colIndexBits, atlasData->rowIndexBits, &_R14->u, &_R14->du, &_R14->v, &_R14->dv);
    __asm
    {
      vmovss  xmm0, [rsp+78h+s0]
      vsubss  xmm1, xmm0, dword ptr [r14]
      vmovss  xmm2, [rsp+78h+arg_10]
      vsubss  xmm0, xmm2, dword ptr [rbx]
      vmovss  dword ptr [r14+14h], xmm0
      vmovss  dword ptr [r14+10h], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
FX_InterpolateParticleSimAnimationData
==============
*/

void __fastcall FX_InterpolateParticleSimAnimationData(const FxParticleSimAnimation *particleSimAnimation, const FxParticleSimAnimationParticleData *particleData, double frameLerp, FxParticleSimAnimationInterpolatedData *interpolatedData)
{
  _ER8 = particleData->xNormalizedPos;
  _R10 = particleSimAnimation;
  __asm { vmovss  xmm5, cs:__real@37800080 }
  _EAX = particleData->xNormalizedPosNextFrame - _ER8;
  __asm
  {
    vmovaps [rsp+18h+var_18], xmm6
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm3, xmm0, xmm2
    vmovaps xmm6, xmm2
    vmovd   xmm1, r8d
    vcvtdq2ps xmm1, xmm1
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm1, xmm0, dword ptr [rcx+28h]
    vaddss  xmm3, xmm1, dword ptr [rcx+1Ch]
    vmovss  dword ptr [r9], xmm3
  }
  _EDX = particleData->yNormalizedPos;
  _EAX = particleData->yNormalizedPosNextFrame - _EDX;
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm2
    vmovd   xmm1, edx
    vcvtdq2ps xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm3, xmm0, dword ptr [rcx+2Ch]
    vaddss  xmm1, xmm3, dword ptr [rcx+20h]
    vmovss  dword ptr [r9+4], xmm1
  }
  _ECX = particleData->zNormalizedPos;
  _EAX = particleData->zNormalizedPosNextFrame - _ECX;
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm6
    vmovd   xmm1, ecx
    vcvtdq2ps xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm3, xmm0, dword ptr [r10+30h]
    vaddss  xmm1, xmm3, dword ptr [r10+24h]
    vmovss  dword ptr [r9+8], xmm1
  }
  _ECX = particleData->xNormalizedWidth;
  _EAX = particleData->xNormalizedWidthNextFrame - _ECX;
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm6
    vmovd   xmm1, ecx
    vcvtdq2ps xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm3, xmm0, dword ptr [r10+34h]
    vmovss  dword ptr [r9+0Ch], xmm3
  }
  _ECX = particleData->yNormalizedHeight;
  _EAX = particleData->yNormalizedHeightNextFrame - _ECX;
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm2, xmm0, xmm6
    vmovd   xmm1, ecx
    vcvtdq2ps xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm3, xmm0, dword ptr [r10+38h]
    vmovss  dword ptr [r9+10h], xmm3
  }
  _EAX = particleData->orientationDelta;
  __asm { vmovd   xmm0, eax }
  _EAX = particleData->orientation;
  __asm
  {
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm1, xmm0, cs:__real@38c9116d
    vmulss  xmm2, xmm1, xmm6
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm1, xmm0, cs:__real@38c910a4
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [r9+1Ch], xmm2
    vmovss  xmm4, dword ptr [r10+14h]
    vmulss  xmm0, xmm4, dword ptr [r10+10h]
  }
  _EAX = particleData->lifetime;
  __asm
  {
    vdivss  xmm3, xmm6, xmm0
    vmovd   xmm1, eax
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm0, xmm1, xmm5
    vmulss  xmm2, xmm0, xmm4
    vaddss  xmm3, xmm3, xmm2
    vmovss  dword ptr [r9+30h], xmm3
  }
  _RCX = (__int64)&_R10->colorTable[particleData->nextColorTableIndex];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm0, dword ptr [rdx]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdx]
    vmovss  dword ptr [r9+20h], xmm3
    vmovss  xmm0, dword ptr [rcx+4]
    vsubss  xmm1, xmm0, dword ptr [rdx+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [r9+24h], xmm3
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm1, xmm0, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdx+8]
    vmovss  dword ptr [r9+28h], xmm3
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vsubss  xmm1, xmm0, dword ptr [rdx+0Ch]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdx+0Ch]
    vmovaps xmm6, [rsp+18h+var_18]
    vmovss  dword ptr [r9+2Ch], xmm3
  }
}

/*
==============
FX_InterpolateParticleSimAnimationDataIndex
==============
*/

void __fastcall FX_InterpolateParticleSimAnimationDataIndex(const FxParticleSimAnimation *particleSimAnimation, const FxParticleSimAnimationParticleDataIndex *particleDataIndex, double frameLerp, FxParticleSimAnimationInterpolatedData *interpolatedData)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( particleSimAnimation->particleDataIndex )
  {
    if ( !particleDataIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1969, ASSERT_TYPE_ASSERT, "(particleDataIndex)", (const char *)&queryFormat, "particleDataIndex") )
      __debugbreak();
    __asm { vcomiss xmm6, cs:__real@3f000000 }
    interpolatedData->index = particleDataIndex->nextIndex;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  else
  {
    interpolatedData->index = 0;
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
}

/*
==============
FX_InterpolateParticleSimAnimationDataOrientation3D
==============
*/

void __fastcall FX_InterpolateParticleSimAnimationDataOrientation3D(const FxParticleSimAnimation *particleSimAnimation, const FxParticleSimAnimationParticleDataOrientation3D *particleDataOrientation3D, double frameLerp, FxParticleSimAnimationInterpolatedData *interpolatedData)
{
  _RBX = interpolatedData;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( particleSimAnimation->particleDataOrientation3D )
  {
    if ( !particleDataOrientation3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1953, ASSERT_TYPE_ASSERT, "(particleDataOrientation3D)", (const char *)&queryFormat, "particleDataOrientation3D") )
      __debugbreak();
    _EAX = particleDataOrientation3D->yOrientationDelta;
    __asm { vmovd   xmm0, eax }
    _EAX = particleDataOrientation3D->yOrientation;
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm0, xmm0, cs:__real@38c9116d
      vmulss  xmm2, xmm0, xmm6
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm0, xmm1, cs:__real@38c910a4
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+14h], xmm1
    }
    _EAX = particleDataOrientation3D->zOrientationDelta;
    __asm { vmovd   xmm0, eax }
    _EAX = particleDataOrientation3D->zOrientation;
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, cs:__real@38c9116d
      vmulss  xmm2, xmm1, xmm6
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, cs:__real@38c910a4
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx+18h], xmm2
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    interpolatedData->orientation.v[0] = 0.0;
    __asm
    {
      vmovss  dword ptr [r9+18h], xmm0
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
}

/*
==============
FX_PackAtlasParamsAsNorm32W
==============
*/

void __fastcall FX_PackAtlasParamsAsNorm32W(double atlasIndex, double atlasBlend, const unsigned int atlasEntries, float4 *packedAtlasParams)
{
  __int64 v53; 
  char v57; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vcomiss xmm1, xmm8
  }
  _RDI = packedAtlasParams;
  __asm
  {
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
  }
  if ( (unsigned __int64)&v53 != _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 115, ASSERT_TYPE_ASSERT, "(atlasBlend <= 1.0f)", (const char *)&queryFormat, "atlasBlend <= 1.0f") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
    vcomiss xmm6, xmm0
  }
  if ( atlasEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 116, ASSERT_TYPE_ASSERT, "(( atlasIndex < atlasEntries ) || ( atlasEntries == 0 ))", (const char *)&queryFormat, "( atlasIndex < atlasEntries ) || ( atlasEntries == 0 )") )
    __debugbreak();
  __asm { vxorps  xmm5, xmm5, xmm5 }
  if ( atlasEntries <= 1 )
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  else
  {
    __asm
    {
      vcvttss2si eax, xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm1, xmm0, cs:__real@447fc000
    }
  }
  __asm
  {
    vxorps  xmm4, xmm4, xmm4
    vroundss xmm4, xmm4, xmm1, 1
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm0, cs:__real@35804018
    vsubss  xmm2, xmm8, xmm1
    vmulss  xmm0, xmm7, xmm7
    vsubss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm4, cs:__real@3a802008
    vmaxss  xmm1, xmm3, xmm5
    vsqrtss xmm2, xmm1, xmm1
    vxorps  xmm3, xmm3, xmm3
    vinsertps xmm3, xmm3, xmm0, 0
    vinsertps xmm3, xmm3, xmm7, 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    vmaxps  xmm0, xmm3, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0AAh ; 'ª'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vmovups xmm0, xmmword ptr [rdi]
    vblendps xmm1, xmm0, xmm2, 8
    vmovups xmmword ptr [rdi], xmm1
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
FX_PackParticleVertExtraData
==============
*/

__int64 __fastcall FX_PackParticleVertExtraData(unsigned int perFrameActiveEmitterIndex, double temperatureScale)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( perFrameActiveEmitterIndex > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 214, ASSERT_TYPE_ASSERT, "(perFrameActiveEmitterIndex <= 0x00ffff)", (const char *)&queryFormat, "perFrameActiveEmitterIndex <= 0x00ffff") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@437f0000
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vmovaps xmm6, [rsp+48h+var_18]
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si eax, xmm4
  }
  if ( _EAX > 255 )
    _EAX = 255;
  if ( _EAX < 0 )
    _EAX = 0;
  return perFrameActiveEmitterIndex | (_EAX << 24);
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
  GfxCodeSurfGlob *codeSurfGlob; 
  char flipU; 
  char flipV; 
  int randomSeed; 
  unsigned __int64 flags; 
  bool v25; 
  GfxMeshLightingType MeshLightingType; 
  bool IsVolumetric; 
  float4 *p_posWorld; 
  float4 *v34; 
  float perFrameActiveEmitterIndexa; 
  float v49; 
  GfxMeshLightingType lightingType; 
  float lightingTypea; 
  float activeLightGridsBitmaska; 
  float v53; 
  float outLightmapU; 
  float outLightmapV; 
  float v56; 
  r_double_index_t v57; 
  unsigned __int16 v58; 
  float v59; 
  float v60; 
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
    __asm
    {
      vmovaps [rsp+190h+var_40], xmm6
      vmovaps [rsp+190h+var_50], xmm7
    }
    vertIndexBase = outBuffers.vertIndexBase;
    codeSurfGlob = draw->codeSurfGlob;
    __asm
    {
      vmovaps [rsp+190h+var_60], xmm8
      vmovaps [rsp+190h+var_70], xmm9
    }
    v58 = outBuffers.vertIndexOffset;
    FX_SpriteDirectContinue(codeSurfGlob, vfxName, &draw->sprite, pMaterial, outBuffers.vertIndexBase, outBuffers.indices, codeSurfFlags, perFrameActiveEmitterIndex);
    draw->sprite.indexCount += 6;
    v57.value[1] = vertIndexOffset + 1;
    flipU = 0;
    v57.value[0] = vertIndexOffset;
    *indices = v57;
    v57.value[0] = vertIndexOffset + 2;
    v57.value[1] = vertIndexOffset + 2;
    indices[1] = v57;
    v57.value[0] = vertIndexOffset + 3;
    v57.value[1] = vertIndexOffset;
    indices[2] = v57;
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
    v25 = !r_drawData->allowLighting;
    __asm
    {
      vbroadcastss xmm0, dword ptr [rdi+70h]
      vbroadcastss xmm1, dword ptr [rdi+74h]
      vmovups xmmword ptr [rbp+60h+width.v], xmm0
      vmovups xmmword ptr [rbp+60h+height.v], xmm1
      vxorps  xmm7, xmm7, xmm7
    }
    if ( v25 || (MeshLightingType = GetMeshLightingType(pMaterial), MeshLightingType == GFX_MESH_LIGHTING_NONE) )
    {
      v34 = tangenta;
      p_posWorld = &r_drawData->posWorld;
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm8, xmm8, xmm8
        vxorps  xmm6, xmm6, xmm6
        vmovss  [rbp+60h+var_D8], xmm9
        vmovss  [rbp+60h+var_D4], xmm8
        vmovss  [rbp+60h+var_D0], xmm6
      }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
      IsVolumetric = Material_IsVolumetric(pMaterial);
      __asm { vmovss  xmm0, dword ptr [rdi+20h] }
      p_posWorld = &r_drawData->posWorld;
      lightingType = MeshLightingType;
      v34 = tangenta;
      __asm
      {
        vmovss  dword ptr [rsp+190h+var_148], xmm6
        vmovss  [rsp+190h+perFrameActiveEmitterIndex], xmm0
      }
      FX_SetupLighting(draw->codeSurfGlob, draw->camera, &r_drawData->posWorld, tangenta, bitangenta, &width, &height, perFrameActiveEmitterIndexa, !IsVolumetric, v49, lightingType, activeLightGridsBitmask, pMaterial, &v59, &v60, &outLightmapD);
      __asm
      {
        vmovss  xmm6, [rbp+60h+var_D0]
        vmovss  xmm8, [rbp+60h+var_D4]
        vmovss  xmm9, [rbp+60h+var_D8]
      }
    }
    if ( r_drawData->atlasData->entryCount )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+80h]; X
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ecx; Y
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovaps xmm7, xmm0 }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+2Ch]
      vmovss  xmm3, dword ptr [rdi+24h]; lightingFrac
      vmovss  [rsp+190h+var_F0], xmm0
      vmovss  xmm0, dword ptr [rdi+20h]
      vmovss  dword ptr [rsp+190h+outLightmapV], xmm7
      vmovss  dword ptr [rsp+190h+outLightmapU], xmm6
      vmovss  dword ptr [rsp+190h+var_130], xmm8
      vmovss  [rsp+190h+activeLightGridsBitmask], xmm9
      vmovss  [rsp+190h+lightingType], xmm0
    }
    FX_SetupParticleQuad(draw->codeSurfGlob, &r_drawData->color, &r_drawData->emissiveIntensity, *(float *)&_XMM3, p_posWorld, normal, v34, bitangenta, &width, &height, lightingTypea, activeLightGridsBitmaska, v53, outLightmapU, outLightmapV, vertIndexBase + v58, perFrameActiveEmitterIndex, outPackedAtlasDataOffset, flipU, flipV, v56, pMaterial);
    __asm
    {
      vmovaps xmm9, [rsp+190h+var_70]
      vmovaps xmm8, [rsp+190h+var_60]
      vmovaps xmm7, [rsp+190h+var_50]
      vmovaps xmm6, [rsp+190h+var_40]
    }
  }
}

/*
==============
FX_SetupLighting
==============
*/
void FX_SetupLighting(GfxCodeSurfGlob *codeSurfGlob, const FxCamera *camera, const float4 *worldPos, const float4 *tangent, const float4 *bitangent, const float4 *width, const float4 *height, float rotation, bool isSurface, float anisotropy, GfxMeshLightingType lightingType, unsigned int activeLightGridsBitmask, const Material *material, float *outLightmapU, float *outLightmapV, float *outLightmapD)
{
  unsigned int v22; 
  unsigned int v23; 
  bool v24; 
  __int64 v28; 
  float *v87; 
  float *v88; 
  double v89; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned int outLightmapOffset; 
  GfxMeshDataLightingInput *lightIter; 
  const float4 *v94; 
  const float4 *v95; 
  const Material *v96; 
  const float4 *v97; 
  const float4 *v98; 

  v98 = tangent;
  v95 = worldPos;
  v97 = width;
  v94 = height;
  v96 = material;
  v22 = FX_CalculateLightmapLevel(camera, worldPos, width, height);
  v90 = v22;
  while ( 1 )
  {
    v23 = v22;
    v24 = R_AllocateCodeSurfLightmap(codeSurfGlob, lightingType, v22, activeLightGridsBitmask, &lightIter, &outLightmapOffset, outLightmapU, outLightmapV, outLightmapD);
    if ( !v22-- )
      break;
    if ( v24 )
      goto LABEL_6;
  }
  if ( !v24 )
  {
    *outLightmapU = 0.0;
    *outLightmapV = 0.0;
    *outLightmapD = 0.0;
    return;
  }
LABEL_6:
  __asm
  {
    vmovaps [rsp+118h+var_48], xmm6
    vmovaps [rsp+118h+var_58], xmm7
    vmovaps [rsp+118h+var_68], xmm8
    vmovaps [rsp+118h+var_78], xmm9
    vmovaps [rsp+118h+var_88], xmm10
  }
  if ( v23 != v90 )
    R_WarnOncePerFrame(R_WARN_FX_LIGHTMAP_FALLBACK, (unsigned int)lightingType, v90, v23);
  _RAX = lightIter;
  _RCX = v95;
  v28 = (__int64)v96;
  _RDI = v97;
  __asm
  {
    vmovss  xmm2, cs:__real@48bfff40
    vmovups xmm1, xmmword ptr [rcx]
  }
  _RBX = v94;
  __asm
  {
    vmovss  dword ptr [rax], xmm1
    vextractps dword ptr [rax+4], xmm1, 1
    vextractps dword ptr [rax+8], xmm1, 2
  }
  _RAX = lightIter;
  v91 = outLightmapOffset & 0x3FFF | (isSurface << 28) | (outLightmapOffset >> 2) & 0xFFFC000 | ((*(_WORD *)(v28 + 26) & 0x40) << 23);
  __asm
  {
    vmovss  xmm0, [rsp+118h+var_C8]
    vmovss  dword ptr [rax+0Ch], xmm0
    vmovups xmm1, xmmword ptr [rdi]
    vcomiss xmm1, xmm2
    vmovups xmm1, xmmword ptr [rbx]
    vmovups xmm0, xmmword ptr [rdi]
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+118h+var_D0], xmm1
    vmovsd  [rsp+118h+var_D8], xmm0
    vmovsd  xmm0, cs:__real@4117ffe800000000
    vmovsd  [rsp+118h+var_E0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 381, ASSERT_TYPE_ASSERT, "(Float4ExtractX( width ) < fp16FloatZLimit && Float4ExtractX( height ) < fp16FloatZLimit)", "%s\n\tParticle with material name %s - has illegal size size over compressed f16 limit (of %f) : %f, %f /n", "Float4ExtractX( width ) < fp16FloatZLimit && Float4ExtractX( height ) < fp16FloatZLimit", *(const char **)v28, *(double *)&v87, *(double *)&v88, v89) )
    __debugbreak();
  __asm
  {
    vmovups xmm6, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovups xmm1, xmmword ptr [rdi]
    vshufps xmm0, xmm1, xmmword ptr [rbx], 50h ; 'P'
  }
  _RAX = v98;
  __asm
  {
    vmovaps xmm9, [rsp+118h+var_78]
    vmovaps xmm8, [rsp+118h+var_68]
    vshufps xmm2, xmm0, xmm1, 0E8h ; 'è'
    vmulps  xmm2, xmm2, cs:__xmm@3e2aaaab3e2aaaab3e2aaaab3e2aaaab
    vmovups xmm0, xmmword ptr [rax]
    vmaxps  xmm0, xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
  }
  _RAX = bitangent;
  __asm
  {
    vminps  xmm0, xmm0, xmm6
    vaddps  xmm1, xmm0, xmm6
    vmulps  xmm1, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm0, xmm1
    vcvtps2ph xmm10, xmm2, 0
    vpand   xmm2, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm1, xmm2, 0EEh ; 'î'
    vpor    xmm3, xmm1, xmm2
    vpshufd xmm0, xmm3, 0
    vpor    xmm1, xmm0, xmm3
    vpor    xmm7, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vmovups xmm0, xmmword ptr [rax]
    vmaxps  xmm0, xmm0, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
  }
  _RAX = lightIter;
  __asm
  {
    vminps  xmm1, xmm0, xmm6
    vaddps  xmm2, xmm1, xmm6
    vmulps  xmm3, xmm2, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vmovaps xmm6, [rsp+118h+var_48]
    vcvttps2dq xmm0, xmm3
    vpand   xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm1, 44h ; 'D'
    vpor    xmm2, xmm0, xmm1
    vpshufd xmm1, xmm2, 0FFh
    vpor    xmm0, xmm1, xmm2
    vpor    xmm3, xmm0, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm10, xmm7, 2
    vmovaps xmm10, [rsp+118h+var_88]
    vmovaps xmm7, [rsp+118h+var_58]
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm1, xmm1, [rsp+118h+rotation], 0
    vinsertps xmm1, xmm1, [rsp+118h+anisotropy], 10h
    vblendps xmm2, xmm0, xmm3, 4
    vcvtps2ph xmm0, xmm1, 0
    vshufps xmm0, xmm2, xmm0, 0FAh ; 'ú'
    vshufps xmm1, xmm2, xmm0, 84h ; '„'
    vmovups xmmword ptr [rax+10h], xmm1
  }
}

/*
==============
FX_SetupParticleQuad
==============
*/

void __fastcall FX_SetupParticleQuad(GfxCodeSurfGlob *codeSurfGlob, const float4 *color, const float4 *emissiveIntensity, double lightingFrac, const float4 *position, const float4 *normal, const float4 *tangent, const float4 *bitangent, const float4 *width, const float4 *height, float rotationAngle, float lightmapU, float lightmapV, float lightmapD, float frameIndex, unsigned int vertIndexBegin, unsigned int perFrameActiveEmitterIndex, unsigned int packedAtlasDataOffset, bool flipU, bool flipV, float temperatureScale, const Material *material)
{
  int v34; 
  int v38; 
  int v40; 

  _RBP = emissiveIntensity;
  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  _RSI = color;
  __asm { vmovaps xmm6, xmm3 }
  if ( !codeSurfGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 235, ASSERT_TYPE_ASSERT, "(codeSurfGlob)", (const char *)&queryFormat, "codeSurfGlob") )
    __debugbreak();
  _RAX = R_CodeSurfQuadIter_Begin(codeSurfGlob, vertIndexBegin >> 2);
  _RCX = position;
  _RBX = _RAX;
  __asm
  {
    vmovss  xmm0, [rsp+68h+rotationAngle]
    vmovups xmm1, xmmword ptr [rcx]
    vmovss  dword ptr [rax], xmm1
    vextractps dword ptr [rax+4], xmm1, 1
    vextractps dword ptr [rax+8], xmm1, 2
    vmovss  dword ptr [rax+0Ch], xmm0
  }
  _RAX = normal;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax]
    vmovss  dword ptr [rbx+10h], xmm1
    vextractps dword ptr [rbx+14h], xmm1, 1
    vextractps dword ptr [rbx+18h], xmm1, 2
  }
  v34 = flipU | 2;
  if ( !flipV )
    v34 = flipU;
  _RBX->flags = v34;
  _RAX = tangent;
  _RBX->flags = v34 | (material->runtimeFlags >> 4) & 4;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax]
    vmovss  dword ptr [rbx+20h], xmm1
    vextractps dword ptr [rbx+24h], xmm1, 1
    vextractps dword ptr [rbx+28h], xmm1, 2
    vmovss  xmm3, [rsp+68h+frameIndex]
  }
  v38 = truncate_cast<unsigned short,unsigned int>(packedAtlasDataOffset);
  __asm { vcvttss2si eax, xmm3 }
  v40 = (unsigned __int16)_EAX;
  _RAX = bitangent;
  _RBX->atlasFrameInfo = v40 | (v38 << 16);
  __asm { vmovups xmm1, xmmword ptr [rax] }
  _RAX = width;
  __asm
  {
    vmovss  dword ptr [rbx+30h], xmm1
    vextractps dword ptr [rbx+34h], xmm1, 1
    vextractps dword ptr [rbx+38h], xmm1, 2
    vmovss  xmm1, [rsp+68h+lightmapV]
    vmovss  dword ptr [rbx+3Ch], xmm6
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups xmmword ptr [rbx+40h], xmm0
    vmovss  xmm0, [rsp+68h+lightmapU]
    vmovss  dword ptr [rbx+50h], xmm0
    vmovss  xmm0, [rsp+68h+lightmapD]
    vmovss  dword ptr [rbx+54h], xmm1
    vmovss  dword ptr [rbx+58h], xmm0
    vmovaps xmm1, xmm3
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm2, xmm6, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+5Ch], xmm0
    vmovups xmm1, xmmword ptr [rsi]
    vmovups xmmword ptr [rbx+60h], xmm1
    vmovups xmm0, xmmword ptr [rax]
  }
  _RAX = height;
  __asm
  {
    vmovss  dword ptr [rbx+70h], xmm0
    vmovups xmm1, xmmword ptr [rax]
    vmovss  dword ptr [rbx+74h], xmm1
  }
  if ( perFrameActiveEmitterIndex > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 224, ASSERT_TYPE_ASSERT, "(perFrameActiveEmitterIndex <= 0x00ffff)", (const char *)&queryFormat, "perFrameActiveEmitterIndex <= 0x00ffff") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+68h+temperatureScale]
    vmulss  xmm1, xmm0, cs:__real@437f0000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vroundss xmm1, xmm6, xmm3, 1
    vmovaps xmm6, [rsp+68h+var_38]
    vcvttss2si eax, xmm1
  }
  if ( _EAX > 255 )
    _EAX = 255;
  if ( _EAX < 0 )
    _EAX = 0;
  _RBX->packedEmitterIndexAndTempScale = perFrameActiveEmitterIndex | (_EAX << 24);
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
  bool IsVolumetric; 
  ParticleData *pParticleData; 
  const ParticleStateDef *m_pStateDef; 
  unsigned __int8 v35; 
  unsigned __int64 flags; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned __int8 *ParticleDataArray; 
  unsigned __int8 *v41; 
  unsigned __int8 *v42; 
  unsigned __int8 *v43; 
  unsigned __int8 *v44; 
  unsigned __int8 *v45; 
  unsigned __int8 *v46; 
  unsigned __int8 *v47; 
  unsigned int numPointsRunning; 
  unsigned int numPointsMax; 
  __int64 lastPointIndex; 
  bool v51; 
  bool v58; 
  bool v59; 
  char v74; 
  bool v76; 
  ParticleEmitter *v79; 
  GfxMeshDataLightingInput *SystemOwner; 
  __int64 m_localClientNum; 
  vector4 *p_m_cameraTransformPosOnly; 
  int v83; 
  FxSpriteInfo *p_sprite; 
  char v85; 
  int v86; 
  int v87; 
  unsigned int v90; 
  __int64 v91; 
  unsigned int v92; 
  FxDrawState *v96; 
  unsigned int v97; 
  int vertIndexOffset; 
  unsigned int vertIndexBase; 
  r_double_index_t *v100; 
  ParticleSystem *v101; 
  const ParticleSystemDef *Def; 
  GfxCodeSurfGlob *codeSurfGlob; 
  const ParticleAtlasData *atlasData; 
  unsigned int v108; 
  unsigned int v109; 
  int v110; 
  unsigned int v116; 
  Particle_TrailData *v120; 
  __int64 v121; 
  char v186; 
  char v261; 
  bool v262; 
  bool v307; 
  unsigned int v344; 
  Material *v381; 
  __int64 v382; 
  bool v387; 
  __int64 v434; 
  int v436; 
  int v437; 
  int v439; 
  unsigned int v441; 
  unsigned int v442; 
  int v513; 
  unsigned int v514; 
  int v515; 
  __int64 v516; 
  unsigned int v517; 
  Particle_TrailData *v519; 
  unsigned int v522; 
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  const ParticleStateDef *v538; 
  char v568; 
  char v569; 
  char v573; 
  bool v599; 
  bool v600; 
  bool v647; 
  GfxMeshLightingType v656; 
  bool v658; 
  bool v660; 
  bool v661; 
  bool v706; 
  const ParticleAtlasData *v716; 
  bool v729; 
  const ParticleAtlasData *v731; 
  r_double_index_t *indices; 
  r_double_index_t *indicesa; 
  float indicesb; 
  float indicesc; 
  float indicesd; 
  __int64 codeSurfFlags; 
  float v750; 
  float v751; 
  float v752; 
  float v753; 
  float v754; 
  float v755; 
  bool v756; 
  bool v757; 
  float v758; 
  float v759; 
  float v760; 
  float v761; 
  float v762; 
  float v763; 
  float v764; 
  float v765; 
  float v766; 
  float v767; 
  float v768; 
  float v769; 
  float v770; 
  float v771; 
  float v772; 
  float v773; 
  float v774; 
  float v775; 
  bool v776; 
  bool v777; 
  bool v778; 
  bool v779; 
  bool v780; 
  char v781; 
  char v782; 
  unsigned __int8 v783; 
  unsigned __int16 v784[2]; 
  unsigned int v785; 
  unsigned int entryCount; 
  int v787; 
  unsigned int v788; 
  unsigned int v797; 
  int v799; 
  unsigned int firstPointIndex; 
  int v805; 
  unsigned __int8 *v806; 
  float outLightmapV; 
  unsigned int numSheets; 
  float outLightmapU; 
  unsigned int v810; 
  ParticleEmitter *v811; 
  __int64 v812; 
  FxDrawState *v813; 
  __int64 v814; 
  float4 v815; 
  unsigned int v816; 
  unsigned __int8 *v817; 
  __int64 v818; 
  FxSpriteInfo *v819; 
  float outLightmapD; 
  Particle_TrailPoint *v821; 
  float t0[4]; 
  Particle_TrailData *v825; 
  __int64 v826; 
  unsigned __int8 *v827; 
  unsigned __int8 *v828; 
  __int64 v829; 
  unsigned __int8 *v830; 
  __int64 v831; 
  unsigned __int8 *v832; 
  __int64 v833; 
  unsigned int outLightmapOffset; 
  int v835; 
  int v837; 
  int v839; 
  Material *v840; 
  GfxMeshDataLightingInput *lightIter[2]; 
  unsigned __int8 *v842; 
  unsigned int v843; 
  FX_TrailGenVerts_DrawData v844; 
  const ParticleEmitter::ParticleStateData *v845; 
  const float4 *v846; 
  unsigned __int8 *v847; 
  unsigned __int8 *v849; 
  const Particle_DrawData *v850; 
  float4 v851; 
  float4 v852; 
  GfxCodeSurfBuffers outBuffers; 
  FX_TrailGenVerts_DrawData v858; 
  __int128 v865; 
  float4 v866; 
  vec3_t vec; 
  char v868; 
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
    vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
  }
  _R13 = r_drawData;
  v813 = draw;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  v840 = pMaterial;
  __asm
  {
    vmovss  [rsp+5E8h+var_408], xmm10
    vmovss  [rsp+5E8h+var_404], xmm10
  }
  v845 = rParticleStateData;
  v811 = (ParticleEmitter *)pEmitterOwner;
  v850 = r_drawData;
  v825 = rTrailData;
  v846 = position;
  __asm { vmovups xmmword ptr [rsp+5E8h+t0], xmm0 }
  IsVolumetric = Material_IsVolumetric(pMaterial);
  _RDI = rParticleStateData->m_particleState.m_elementTypeModule.pModule;
  __asm
  {
    vmovss  xmm11, dword ptr [r13+24h]
    vmovss  xmm9, dword ptr [r13+2Ch]
    vmovss  [rsp+5E8h+var_4A8], xmm11
  }
  v780 = !IsVolumetric;
  __asm { vmovss  [rsp+5E8h+var_4D0], xmm9 }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1383, ASSERT_TYPE_ASSERT, "(pModuleInitGeoTrail)", (const char *)&queryFormat, "pModuleInitGeoTrail") )
    __debugbreak();
  pParticleData = rTrailData->pParticleData;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1386, ASSERT_TYPE_ASSERT, "(pTrailParticleData)", (const char *)&queryFormat, "pTrailParticleData") )
    __debugbreak();
  v58 = !ParticleEmitter::ShouldDrawWithViewModel((ParticleEmitter *)pEmitterOwner, &rParticleStateData->m_particleState);
  v781 = _RDI[53];
  m_pStateDef = rParticleStateData->m_particleState.m_pStateDef;
  v35 = !v58;
  LOBYTE(v784[0]) = !v58;
  flags = m_pStateDef->flags;
  v776 = (flags & 8) != 0;
  v37 = flags >> 22;
  LOBYTE(v37) = (flags & 0x400000) != 0;
  v829 = v37;
  v38 = flags >> 23;
  v39 = flags >> 41;
  LOBYTE(v38) = v38 & 1;
  LOBYTE(v39) = v39 & 1;
  v831 = v38;
  v826 = v39;
  if ( !pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData)", (const char *)&queryFormat, "pParticleData") )
    __debugbreak();
  if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 343, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  ParticleDataArray = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_COLOR);
  v58 = pParticleData->m_pParticleData == NULL;
  v827 = ParticleDataArray;
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 341, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v41 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_POSITION);
  v58 = pParticleData->m_pParticleData == NULL;
  v806 = v41;
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 348, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v42 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_SIZE);
  v58 = pParticleData->m_pParticleData == NULL;
  v842 = v42;
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 357, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v43 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_EMISSIVE);
  v58 = pParticleData->m_pParticleData == NULL;
  v828 = v43;
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 358, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v830 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_LIGHTING_FRAC);
  v44 = NULL;
  if ( (_BYTE)v39 )
  {
    if ( !pParticleData->m_pParticleData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 360, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
      __debugbreak();
    v44 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_TEMPERATURE);
  }
  v58 = pParticleData->m_pParticleData == NULL;
  v817 = v44;
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 359, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v45 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_INTENSITY);
  v58 = pParticleData->m_pParticleData == NULL;
  v832 = v45;
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 365, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v46 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_ATLAS_INDEX);
  v58 = pParticleData->m_pParticleData == NULL;
  v849 = v46;
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particle.h", 361, ASSERT_TYPE_ASSERT, "(pParticleData->GetParticleData())", (const char *)&queryFormat, "pParticleData->GetParticleData()") )
    __debugbreak();
  v47 = ParticleData::GetParticleDataArray(pParticleData, PARTICLE_DATA_CAMERA_DISTANCE);
  numPointsRunning = rTrailData->numPointsRunning;
  v847 = v47;
  if ( numPointsRunning <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1407, ASSERT_TYPE_ASSERT, "(numTrailPoints > 1)", (const char *)&queryFormat, "numTrailPoints > 1") )
    __debugbreak();
  numPointsMax = rTrailData->numPointsMax;
  lastPointIndex = rTrailData->lastPointIndex;
  v51 = rTrailData->numPointsRunning < numPointsMax;
  if ( rTrailData->numPointsRunning == numPointsMax )
    firstPointIndex = ((int)lastPointIndex + 1) % numPointsMax;
  else
    firstPointIndex = rTrailData->firstPointIndex;
  __asm
  {
    vcomiss xmm10, dword ptr [rdi+20h]
    vmovss  xmm0, cs:__real@40490fdb
  }
  _R12 = rTrailData->pointList;
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+14h]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
  }
  numSheets = rTrailData->numSheets;
  __asm
  {
    vcomiss xmm10, dword ptr [rdi+1Ch]
    vdivss  xmm15, xmm0, xmm1
  }
  v821 = _R12;
  v779 = v51;
  v777 = v51;
  __asm
  {
    vmovss  [rsp+5E8h+var_3B0], xmm15
    vmovss  [rsp+5E8h+var_4EC], xmm2
  }
  v778 = v51;
  v816 = numPointsRunning - 1;
  v58 = v845->m_particleState.m_pEmitterOwner == NULL;
  if ( !v845->m_particleState.m_pEmitterOwner )
  {
    v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner");
    v58 = !v59;
    if ( v59 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@447a0000
    vmovss  xmm14, dword ptr [rdi+24h]
    vcomiss xmm14, cs:__real@34000000
    vmulss  xmm0, xmm2, dword ptr [rax+174h]
    vmulss  xmm2, xmm2, dword ptr [rdi+30h]
    vcvttss2si eax, xmm0
  }
  v839 = _EAX;
  __asm { vcvttss2si eax, xmm2 }
  v835 = _EAX;
  __asm { vmovss  [rsp+5E8h+var_4AC], xmm14 }
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1428, ASSERT_TYPE_ASSERT, "(tileDistance > 1.192092896e-07F)", (const char *)&queryFormat, "tileDistance > FLT_EPSILON") )
    __debugbreak();
  __asm { vmovss  xmm12, dword ptr [r13+88h] }
  _RCX = 10 * lastPointIndex;
  __asm
  {
    vmovss  [rsp+5E8h+var_4E4], xmm12
    vmovss  xmm13, dword ptr [r12+rcx*8+40h]
    vsubss  xmm0, xmm13, xmm12
    vmulss  xmm6, xmm0, cs:__real@3f000000
    vucomiss xmm6, xmm10
    vmovss  [rsp+5E8h+var_4E0], xmm13
  }
  if ( !(10 * lastPointIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1434, ASSERT_TYPE_ASSERT, "(halfDistance)", (const char *)&queryFormat, "halfDistance") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  xmm1, dword ptr [rdi+1Ch]
    vminss  xmm0, xmm0, xmm6
  }
  v74 = (unsigned __int8)v845->m_particleState.m_pStateDef->flags >> 1;
  __asm { vminss  xmm1, xmm1, xmm6 }
  v76 = (v845->m_particleState.m_pStateDef->flags & 0x10000000) != 0;
  __asm
  {
    vaddss  xmm8, xmm0, xmm12
    vsubss  xmm7, xmm13, xmm1
    vmovss  [rsp+5E8h+var_4DC], xmm0
    vmovss  [rsp+5E8h+var_4D8], xmm1
    vmovss  [rsp+5E8h+var_4B8], xmm8
    vmovss  [rsp+5E8h+var_4B0], xmm7
  }
  if ( (v74 & 1) != 0 || v76 )
  {
    v79 = v811;
    m_localClientNum = v811->m_pSystemOwner->m_localClientNum;
    if ( v76 )
    {
      if ( (unsigned int)m_localClientNum >= 2 )
      {
        LODWORD(indices) = v811->m_pSystemOwner->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", indices, 2) )
          __debugbreak();
      }
      p_m_cameraTransformPosOnly = &g_particleManager[0].m_cameraTransformPosOnly;
    }
    else
    {
      if ( (unsigned int)m_localClientNum >= 2 )
      {
        LODWORD(indices) = v811->m_pSystemOwner->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", indices, 2) )
          __debugbreak();
      }
      p_m_cameraTransformPosOnly = &g_particleManager[0].m_cameraTransform;
    }
    SystemOwner = (GfxMeshDataLightingInput *)&p_m_cameraTransformPosOnly[4916 * m_localClientNum];
  }
  else
  {
    v79 = v811;
    SystemOwner = (GfxMeshDataLightingInput *)ParticleEmitter::GetSystemOwner(v811);
  }
  lightIter[1] = SystemOwner;
  v83 = v79->m_flags >> 1;
  LOBYTE(v83) = (v79->m_flags & 2) == 0;
  v837 = v83;
  v58 = v813->codeSurfGlob == NULL;
  p_sprite = &v813->sprite;
  v819 = &v813->sprite;
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1445, ASSERT_TYPE_ASSERT, "(draw->codeSurfGlob)", (const char *)&queryFormat, "draw->codeSurfGlob") )
    __debugbreak();
  if ( !v840 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1446, ASSERT_TYPE_ASSERT, "(pMaterial)", (const char *)&queryFormat, "pMaterial") )
    __debugbreak();
  v85 = _RDI[55];
  v805 = 0;
  v86 = 0;
  v799 = 0;
  v87 = 0;
  _RAX = v825;
  v782 = v85;
  __asm
  {
    vmovss  xmm3, dword ptr [rax+50h]
    vmovss  [rsp+5E8h+var_4A0], xmm3
  }
  if ( !v85 || (v783 = 1, !_RDI[56]) )
    v783 = 0;
  if ( v778 || v85 )
  {
    v90 = firstPointIndex;
    __asm { vmovss  xmm6, dword ptr [r13+88h] }
    if ( numPointsRunning != 1 )
    {
      v91 = numPointsRunning - 1;
      v92 = v825->numPointsMax;
      do
      {
        if ( v90 >= v92 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
            __debugbreak();
          v85 = v782;
          v87 = v799;
          v86 = v805;
          __asm { vmovss  xmm3, [rsp+5E8h+var_4A0] }
        }
        v92 = v825->numPointsMax;
        v90 = (v90 + 1) % v92;
        _RCX = 10i64 * v90;
        __asm { vmovss  xmm2, dword ptr [r12+rcx*8+40h] }
        if ( v779 )
        {
          __asm
          {
            vcomiss xmm2, xmm8
            vcomiss xmm8, xmm6
          }
          v805 = ++v86;
        }
        if ( v777 )
        {
          __asm
          {
            vcomiss xmm2, xmm7
            vcomiss xmm7, xmm6
          }
          v799 = ++v87;
        }
        if ( v85 )
        {
          __asm
          {
            vsubss  xmm0, xmm2, xmm6
            vdivss  xmm1, xmm0, xmm14
            vaddss  xmm3, xmm3, xmm1
            vmovss  [rsp+5E8h+var_4A0], xmm3
          }
        }
        __asm { vmovaps xmm6, xmm2 }
        --v91;
      }
      while ( v91 );
      p_sprite = v819;
      v35 = v784[0];
    }
  }
  v96 = v813;
  v843 = 2 * numSheets * (v87 + v86 + numPointsRunning);
  v97 = 6 * numSheets * (numPointsRunning - 1 + v87 + v86);
  if ( R_ReserveVertCodeSurfBuffers(&outBuffers, v813->codeSurfGlob, v843, v97, 0) )
  {
    vertIndexOffset = outBuffers.vertIndexOffset;
    vertIndexBase = outBuffers.vertIndexBase;
    v100 = outBuffers.indices;
    LOWORD(v787) = outBuffers.vertIndexOffset;
    v784[0] = outBuffers.vertIndexOffset;
    v101 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(v811);
    Def = ParticleSystem::GetDef(v101);
    FX_SpriteDirectContinue(v813->codeSurfGlob, Def->name, p_sprite, v840, vertIndexBase, v100, v35, perFrameActiveEmitterIndex);
    p_sprite->indexCount += v97;
    _R14 = (__int64)v850;
    codeSurfGlob = v96->codeSurfGlob;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups [rsp+5E8h+var_288], xmm0
    }
    atlasData = v850->atlasData;
    v819 = (FxSpriteInfo *)v100;
    entryCount = atlasData->entryCount;
    __asm
    {
      vmovss  [rsp+5E8h+outLightmapU], xmm10
      vmovss  [rsp+5E8h+outLightmapV], xmm10
      vmovss  [rsp+5E8h+var_428], xmm10
    }
    _R13 = R_CodeSurfVertIter_Begin(codeSurfGlob, vertIndexBase + vertIndexOffset);
    if ( ((unsigned __int8)_R13 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1540, ASSERT_TYPE_ASSERT, "(((uintptr_t)vertIter & 15) == 0)", (const char *)&queryFormat, "((uintptr_t)vertIter & 15) == 0") )
      __debugbreak();
    v108 = 0;
    v788 = 0;
    if ( numSheets )
    {
      v109 = firstPointIndex;
      v110 = entryCount;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r9
        vmovss  [rsp+5E8h+var_3A8], xmm0
        vmovups xmm0, [rsp+5E8h+var_458]
        vmovups [rsp+5E8h+var_1B8], xmm0
        vmovups xmm0, [rsp+5E8h+var_458]
      }
      v833 = firstPointIndex;
      _R11 = 80i64 * firstPointIndex;
      v116 = firstPointIndex + 1;
      __asm
      {
        vmovups [rsp+5E8h+var_278], xmm0
        vmovups xmm0, [rsp+5E8h+var_458]
      }
      _R10 = 16i64 * firstPointIndex;
      _R8 = firstPointIndex;
      __asm { vmovups [rsp+5E8h+var_268], xmm0 }
      v818 = _R11;
      v812 = _R10;
      do
      {
        v120 = v825;
        v810 = v109;
        if ( v109 >= v825->numPointsMax )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
            __debugbreak();
          _R11 = v818;
          _R8 = v833;
          _R10 = v812;
          v110 = entryCount;
        }
        v121 = v116 % v120->numPointsMax;
        if ( v108 )
        {
          __asm
          {
            vmovss  xmm11, [rsp+5E8h+var_4A8]
            vmovss  xmm9, [rsp+5E8h+var_4D0]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm15
            vshufps xmm1, xmm1, xmm1, 0
            vandps  xmm4, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vaddps  xmm0, xmm4, cs:__xmm@3fc90fdb3fc90fdb3fc90fdb3fc90fdb
            vmovups [rsp+5E8h+var_298], xmm1
            vmulps  xmm1, xmm4, cs:__xmm@3ea2f9833ea2f9833ea2f9833ea2f983
            vaddps  xmm1, xmm1, cs:__xmm@3f0000003f0000003f0000003f000000
            vcvttps2dq xmm3, xmm1
            vcvtdq2ps xmm2, xmm3
            vmulps  xmm1, xmm2, cs:__xmm@40490fdb40490fdb40490fdb40490fdb
            vsubps  xmm10, xmm4, xmm1
            vsubps  xmm1, xmm0, xmm1
            vsubps  xmm5, xmm1, cs:__xmm@3fc90fdb3fc90fdb3fc90fdb3fc90fdb
            vmovdqu xmm0, cs:__xmm@00000001000000010000000100000001
            vpand   xmm2, xmm0, xmm3
            vmulps  xmm4, xmm10, xmm10
            vmulps  xmm0, xmm4, cs:__xmm@ab573f9fab573f9fab573f9fab573f9f
            vpxor   xmm1, xmm1, xmm1
            vpcmpeqd xmm2, xmm2, xmm1
            vaddps  xmm1, xmm0, cs:__xmm@2f3092312f3092312f3092312f309231
            vmulps  xmm12, xmm5, xmm5
            vmovups [rsp+5E8h+var_458], xmm10
            vandnps xmm10, xmm2, cs:__xmm@80000000800000008000000080000000
            vmulps  xmm2, xmm1, xmm4
            vaddps  xmm3, xmm2, cs:__xmm@b2d7322bb2d7322bb2d7322bb2d7322b
            vmulps  xmm0, xmm3, xmm4
            vaddps  xmm1, xmm0, cs:__xmm@3638ef1d3638ef1d3638ef1d3638ef1d
            vmulps  xmm2, xmm1, xmm4
            vaddps  xmm3, xmm2, cs:__xmm@b9500d01b9500d01b9500d01b9500d01
            vmulps  xmm0, xmm3, xmm4
            vaddps  xmm1, xmm0, cs:__xmm@3c0888893c0888893c0888893c088889
            vmulps  xmm2, xmm1, xmm4
            vaddps  xmm3, xmm2, cs:__xmm@be2aaaabbe2aaaabbe2aaaabbe2aaaab
            vmulps  xmm0, xmm3, xmm4
            vmulps  xmm1, xmm0, [rsp+5E8h+var_458]
            vaddps  xmm2, xmm1, [rsp+5E8h+var_458]
            vmovups xmm0, [rsp+5E8h+var_298]
            vxorps  xmm3, xmm2, xmm10
            vxorps  xmm4, xmm4, xmm4
            vcmpltps xmm0, xmm0, xmm4
            vandps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
            vxorps  xmm0, xmm3, xmm1
            vmovups [rsp+5E8h+var_2A8], xmm0
            vmulps  xmm0, xmm12, cs:__xmm@ad49cba5ad49cba5ad49cba5ad49cba5
            vaddps  xmm1, xmm0, cs:__xmm@310f76c7310f76c7310f76c7310f76c7
            vmulps  xmm2, xmm1, xmm12
            vaddps  xmm3, xmm2, cs:__xmm@b493f27eb493f27eb493f27eb493f27e
            vmulps  xmm0, xmm3, xmm12
            vaddps  xmm1, xmm0, cs:__xmm@37d00d0137d00d0137d00d0137d00d01
            vmulps  xmm2, xmm1, xmm12
            vaddps  xmm3, xmm2, cs:__xmm@bab60b61bab60b61bab60b61bab60b61
            vmulps  xmm0, xmm3, xmm12
            vaddps  xmm1, xmm0, cs:__xmm@3d2aaaab3d2aaaab3d2aaaab3d2aaaab
            vmulps  xmm2, xmm1, xmm12
            vaddps  xmm3, xmm2, cs:__xmm@bf000000bf000000bf000000bf000000
            vmulps  xmm4, xmm3, xmm12
            vaddps  xmm1, xmm4, cs:__xmm@3f8000003f8000003f8000003f800000
            vxorps  xmm0, xmm1, xmm10
            vmovups [rsp+5E8h+var_2B8], xmm0
            vxorps  xmm10, xmm10, xmm10
          }
        }
        __asm
        {
          vmovss  xmm3, dword ptr [r14+84h]
          vcomiss xmm3, xmm10
        }
        _RSI = (__int64)v821;
        _RAX = (__int64)v806;
        __asm { vmovss  [rsp+5E8h+var_4FC], xmm3 }
        if ( v108 )
        {
          if ( v776 )
          {
            __asm
            {
              vmovups xmm1, xmmword ptr [r11+rsi+30h]
              vaddps  xmm8, xmm1, xmmword ptr [r10+rax]
            }
          }
          else
          {
            __asm { vmovups xmm8, xmmword ptr [r10+rax] }
          }
          __asm { vmovups xmm1, xmmword ptr [r14+90h] }
          v186 = v829;
          __asm
          {
            vmulps  xmm0, xmm1, xmmword ptr [r10+rax]
            vmovups [rsp+5E8h+var_458], xmm0
          }
          if ( (_BYTE)v829 )
          {
            _RAX = v830;
            __asm { vmovss  xmm15, dword ptr [rax+r8*4] }
          }
          else
          {
            __asm { vmovaps xmm15, xmm11 }
          }
          if ( (_BYTE)v826 )
          {
            _RAX = (__int64)v817;
            __asm { vmovss  xmm14, dword ptr [rax+r8*4] }
          }
          else
          {
            __asm { vmovaps xmm14, xmm9 }
          }
          __asm { vmovss  xmm9, cs:__real@3f800000 }
          if ( (_BYTE)v831 )
          {
            _RAX = (__int64)v832;
            __asm { vmovss  xmm0, dword ptr [rax+r8*4] }
          }
          else
          {
            __asm { vmovaps xmm0, xmm9 }
          }
          __asm
          {
            vmovups xmm6, cs:__xmm@3f800000000000000000000000000000
            vinsertps xmm6, xmm6, xmm0, 0
            vinsertps xmm6, xmm6, xmm0, 10h
            vinsertps xmm6, xmm6, xmm0, 20h ; ' '
          }
          if ( v110 )
          {
            _RAX = (__int64)v849;
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, r9d; Y
              vmovss  xmm0, dword ptr [rax+r8*4]; X
            }
            *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm { vmovss  xmm3, [rsp+5E8h+var_4FC] }
            v110 = entryCount;
            v186 = v829;
            __asm { vmovaps xmm10, xmm0 }
          }
          _RCX = v121;
          _RDX = 16 * v121;
          if ( v776 )
          {
            _RAX = 10 * v121;
            __asm
            {
              vmovups xmm1, xmmword ptr [rsi+rax*8+30h]
              vaddps  xmm2, xmm1, xmmword ptr [rax+rdx]
            }
          }
          else
          {
            _RAX = (__int64)v806;
            __asm { vmovups xmm2, xmmword ptr [rax+rdx] }
          }
          __asm { vmovups xmm1, xmmword ptr [r14+90h] }
          _RAX = 10 * v121;
          __asm { vmulps  xmm7, xmm1, xmmword ptr [rdx+r8] }
          _R8 = (__int64)&v828[_RDX];
          if ( !v186 )
            _R8 = _R14 + 48;
          if ( v186 )
          {
            _R11 = v830;
            __asm { vmovss  xmm11, dword ptr [r11+rcx*4] }
          }
          if ( (_BYTE)v826 )
          {
            _R11 = (__int64)v817;
            __asm { vmovss  xmm5, dword ptr [r11+rcx*4] }
          }
          else
          {
            __asm { vmovss  xmm5, [rsp+5E8h+var_4D0] }
          }
          if ( (_BYTE)v831 )
          {
            _R11 = (__int64)v832;
            __asm { vmovss  xmm0, dword ptr [r11+rcx*4] }
          }
          else
          {
            __asm { vmovaps xmm0, xmm9 }
          }
          __asm
          {
            vmovups xmm4, cs:__xmm@3f800000000000000000000000000000
            vinsertps xmm4, xmm4, xmm0, 0
            vinsertps xmm4, xmm4, xmm0, 10h
            vinsertps xmm4, xmm4, xmm0, 20h ; ' '
            vshufps xmm3, xmm3, xmm3, 0
            vsubps  xmm0, xmm2, xmm8
            vmulps  xmm1, xmm0, xmm3
            vmovups xmm0, xmmword ptr [rsi+rax*8+20h]
            vsubps  xmm0, xmm0, xmmword ptr [r11+rsi+20h]
            vaddps  xmm9, xmm1, xmm8
            vmulps  xmm1, xmm0, xmm3
            vaddps  xmm12, xmm1, xmmword ptr [r11+rsi+20h]
            vmovups xmm0, xmmword ptr [rsi+rax*8]
          }
          _RAX = (__int64)v842;
          __asm
          {
            vsubps  xmm0, xmm0, xmmword ptr [r11+rsi]
            vmulps  xmm1, xmm0, xmm3
            vaddps  xmm13, xmm1, xmmword ptr [r11+rsi]
            vsubps  xmm0, xmm7, [rsp+5E8h+var_458]
            vmulps  xmm1, xmm0, xmm3
            vaddps  xmm2, xmm1, [rsp+5E8h+var_458]
            vmovups xmm0, xmmword ptr [rdx+rax]
            vsubps  xmm0, xmm0, xmmword ptr [r10+rax]
            vmulps  xmm1, xmm0, xmm3
            vaddps  xmm0, xmm1, xmmword ptr [r10+rax]
            vmovups xmmword ptr [rsp+5E8h+var_338], xmm0
            vmovups xmm0, xmmword ptr [r8]
            vsubps  xmm0, xmm0, xmmword ptr [rdi]
            vmulps  xmm1, xmm0, xmm3
            vaddps  xmm8, xmm1, xmmword ptr [rdi]
            vsubps  xmm0, xmm4, xmm6
            vmovss  xmm4, cs:__real@3f800000
            vmulps  xmm1, xmm0, xmm3
            vmovss  xmm3, dword ptr [r14+84h]
            vaddps  xmm7, xmm1, xmm6
            vmovups xmmword ptr [rsp+5E8h+var_358+10h], xmm2
            vsubss  xmm2, xmm4, xmm3
            vmulss  xmm1, xmm2, xmm15
            vmulss  xmm0, xmm11, xmm3
            vaddss  xmm15, xmm1, xmm0
            vmulss  xmm0, xmm5, xmm3
            vmulss  xmm2, xmm2, xmm14
            vaddss  xmm1, xmm2, xmm0
            vmovss  dword ptr [rsp+5E8h+var_318+14h], xmm1
            vmovss  dword ptr [rsp+5E8h+var_318+10h], xmm15
            vmovss  dword ptr [rsp+5E8h+var_318+18h], xmm10
            vmovups xmmword ptr [rsp+5E8h+var_378], xmm9
            vmovups xmmword ptr [rsp+5E8h+var_378+10h], xmm12
            vmovups xmmword ptr [rsp+5E8h+var_358], xmm13
            vmovups xmmword ptr [rsp+5E8h+var_318], xmm7
          }
          v261 = 0;
          v262 = v110 == 0;
          if ( v110 )
          {
            __asm
            {
              vmovaps xmm1, xmm4; Y
              vmovaps xmm0, xmm10; X
            }
            *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm
            {
              vmovups xmm11, xmmword ptr [rsp+5E8h+var_338]
              vmovups xmm14, xmmword ptr [rsp+5E8h+var_358+10h]
            }
            v108 = v788;
            __asm
            {
              vmovss  dword ptr [rsp+5E8h+var_318+1Ch], xmm0
              vmovaps xmm6, xmm0
            }
            goto LABEL_153;
          }
          __asm
          {
            vmovups xmm11, xmmword ptr [rsp+5E8h+var_338]
            vmovups xmm14, xmmword ptr [rsp+5E8h+var_358+10h]
          }
          v108 = v788;
        }
        else
        {
          if ( v776 )
          {
            __asm
            {
              vmovups xmm1, xmmword ptr [r11+rsi+30h]
              vaddps  xmm9, xmm1, xmmword ptr [r10+rax]
            }
          }
          else
          {
            __asm { vmovups xmm9, xmmword ptr [r10+rax] }
          }
          __asm
          {
            vmovups xmm1, xmmword ptr [r14+90h]
            vmovups xmm12, xmmword ptr [r11+rsi+20h]
            vmulps  xmm14, xmm1, xmmword ptr [r10+rax]
          }
          _RAX = (__int64)v842;
          __asm
          {
            vmovups xmm13, xmmword ptr [r11+rsi]
            vmovups xmmword ptr [rsp+5E8h+var_378], xmm9
            vmovups xmmword ptr [rsp+5E8h+var_378+10h], xmm12
            vmovups xmm11, xmmword ptr [r10+rax]
          }
          _RAX = (__int64)&v828[_R10];
          __asm { vmovups xmmword ptr [rsp+5E8h+var_358], xmm13 }
          if ( !(_BYTE)v829 )
            _RAX = _R14 + 48;
          __asm
          {
            vmovups xmmword ptr [rsp+5E8h+var_358+10h], xmm14
            vmovups xmmword ptr [rsp+5E8h+var_338], xmm11
            vmovups xmm8, xmmword ptr [rax]
          }
          if ( (_BYTE)v829 )
          {
            _RAX = v830;
            __asm { vmovss  xmm15, dword ptr [rax+r8*4] }
          }
          else
          {
            __asm { vmovss  xmm15, [rsp+5E8h+var_4A8] }
          }
          __asm { vmovss  dword ptr [rsp+5E8h+var_318+10h], xmm15 }
          if ( (_BYTE)v826 )
          {
            _RAX = (__int64)v817;
            __asm { vmovss  xmm0, dword ptr [rax+r8*4] }
          }
          else
          {
            __asm { vmovss  xmm0, [rsp+5E8h+var_4D0] }
          }
          __asm { vmovss  dword ptr [rsp+5E8h+var_318+14h], xmm0 }
          if ( (_BYTE)v831 )
          {
            _RAX = (__int64)v832;
            __asm { vmovss  xmm0, dword ptr [rax+r8*4] }
          }
          else
          {
            __asm { vmovss  xmm0, cs:__real@3f800000 }
          }
          __asm
          {
            vmovups xmm7, cs:__xmm@3f800000000000000000000000000000
            vinsertps xmm7, xmm7, xmm0, 0
            vinsertps xmm7, xmm7, xmm0, 10h
            vinsertps xmm7, xmm7, xmm0, 20h ; ' '
            vmovups xmmword ptr [rsp+5E8h+var_318], xmm7
          }
          v261 = 0;
          v262 = v110 == 0;
          if ( v110 )
          {
            _RAX = (__int64)v849;
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, r9d; Y
              vmovss  xmm6, dword ptr [rax+r8*4]
              vmovaps xmm0, xmm6; X
            }
            *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm
            {
              vmovss  xmm1, cs:__real@3f800000; Y
              vmovss  dword ptr [rsp+5E8h+var_318+18h], xmm0
              vmovaps xmm10, xmm0
              vmovaps xmm0, xmm6; X
            }
            *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm
            {
              vmovss  dword ptr [rsp+5E8h+var_318+1Ch], xmm0
              vmovaps xmm6, xmm0
            }
            goto LABEL_153;
          }
          __asm { vmovss  dword ptr [rsp+5E8h+var_318+18h], xmm10 }
        }
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vmovss  dword ptr [rsp+5E8h+var_318+1Ch], xmm6
        }
LABEL_153:
        __asm
        {
          vcomiss xmm8, cs:__real@3d20e411
          vmovups [rsp+5E8h+var_118], xmm8
        }
        if ( v261 | v262 )
        {
          __asm
          {
            vmovss  xmm1, cs:__real@3d9e8391
            vmulss  xmm0, xmm8, xmm1
          }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm8, cs:__real@3f72a76f
            vaddss  xmm0, xmm0, cs:__real@3d55891a; X
            vmovss  xmm1, cs:__real@4019999a; Y
          }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vmovss  xmm1, cs:__real@3d9e8391 }
        }
        __asm
        {
          vmovss  xmm8, cs:__real@3d20e411
          vmovss  dword ptr [rsp+5E8h+var_118], xmm0
          vmovss  xmm0, dword ptr [rsp+5E8h+var_118+4]
          vcomiss xmm0, xmm8
        }
        if ( v261 | v262 )
        {
          __asm { vmulss  xmm0, xmm0, xmm1 }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm0, cs:__real@3f72a76f
            vaddss  xmm0, xmm0, cs:__real@3d55891a; X
            vmovss  xmm1, cs:__real@4019999a; Y
          }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm { vmovss  xmm1, cs:__real@3d9e8391 }
        }
        __asm
        {
          vmovss  dword ptr [rsp+5E8h+var_118+4], xmm0
          vmovss  xmm0, dword ptr [rsp+5E8h+var_118+8]
          vcomiss xmm0, xmm8
        }
        if ( v261 | v262 )
        {
          __asm { vmulss  xmm0, xmm0, xmm1 }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm0, cs:__real@3f72a76f
            vaddss  xmm0, xmm0, cs:__real@3d55891a; X
            vmovss  xmm1, cs:__real@4019999a; Y
          }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        }
        __asm
        {
          vmovups xmm8, [rsp+5E8h+var_118]
          vinsertps xmm8, xmm8, xmm0, 20h ; ' '
          vmovups [rsp+5E8h+var_118], xmm8
          vmovups xmmword ptr [rsp+5E8h+var_338+10h], xmm8
        }
        v307 = v108 == 0;
        if ( v108 )
        {
          __asm
          {
            vmulps  xmm1, xmm12, [rsp+5E8h+var_2B8]
            vmulps  xmm2, xmm13, [rsp+5E8h+var_2B8]
            vxorps  xmm0, xmm0, xmm0
            vsubps  xmm0, xmm0, [rsp+5E8h+var_2A8]
            vmulps  xmm0, xmm13, xmm0
            vaddps  xmm4, xmm0, xmm1
            vmulps  xmm0, xmm12, [rsp+5E8h+var_2A8]
            vaddps  xmm13, xmm0, xmm2
          }
        }
        else
        {
          __asm { vmovdqa xmm4, xmm12 }
        }
        __asm
        {
          vmovss  xmm5, [rsp+5E8h+var_4EC]
          vucomiss xmm5, cs:__real@00000000
        }
        if ( v108 )
        {
          __asm { vxorps  xmm3, xmm5, cs:__xmm@80000000800000008000000080000000 }
          _EAX = v108 & 1;
          __asm { vmovd   xmm0, eax }
          v307 = 1;
          _ECX = 0;
          __asm
          {
            vmovd   xmm1, ecx
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm3, xmm5, xmm2
            vshufps xmm3, xmm3, xmm3, 0
            vmulps  xmm0, xmm3, xmm4
            vaddps  xmm9, xmm0, xmm9
          }
        }
        __asm
        {
          vshufps xmm0, xmm11, xmm11, 0
          vmulps  xmm1, xmm13, xmm0
          vmaxps  xmm0, xmm4, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
          vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          vsubps  xmm12, xmm9, xmm1
          vaddps  xmm13, xmm9, xmm1
          vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
          vcvttps2dq xmm3, xmm2
          vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
          vpshufd xmm0, xmm4, 44h ; 'D'
          vpor    xmm1, xmm0, xmm4
          vpshufd xmm0, xmm1, 0FFh
          vpor    xmm1, xmm0, xmm1
          vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
          vmovups xmm0, [rsp+5E8h+var_1B8]
          vmulps  xmm11, xmm14, xmm7
          vmovss  xmm14, cs:__real@3f800000
          vcomiss xmm6, xmm14
          vblendps xmm7, xmm0, xmm2, 4
        }
        if ( !v307 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 115, ASSERT_TYPE_ASSERT, "(atlasBlend <= 1.0f)", (const char *)&queryFormat, "atlasBlend <= 1.0f") )
          __debugbreak();
        __asm { vcomiss xmm10, [rsp+5E8h+var_3A8] }
        v344 = entryCount;
        if ( entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 116, ASSERT_TYPE_ASSERT, "(( atlasIndex < atlasEntries ) || ( atlasEntries == 0 ))", (const char *)&queryFormat, "( atlasIndex < atlasEntries ) || ( atlasEntries == 0 )") )
          __debugbreak();
        __asm { vxorps  xmm5, xmm5, xmm5 }
        if ( v344 <= 1 )
        {
          __asm { vxorps  xmm1, xmm1, xmm1 }
        }
        else
        {
          __asm
          {
            vcvttss2si eax, xmm10
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rcx
            vmulss  xmm1, xmm0, cs:__real@447fc000
          }
        }
        v58 = *(_BYTE *)(_R14 + 18) == 0;
        __asm
        {
          vxorps  xmm4, xmm4, xmm4
          vroundss xmm4, xmm4, xmm1, 1
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm1, xmm0, cs:__real@35804018
          vsubss  xmm2, xmm14, xmm1
          vmulss  xmm0, xmm6, xmm6
          vsubss  xmm3, xmm2, xmm0
          vmulss  xmm0, xmm4, cs:__real@3a802008
          vmaxss  xmm1, xmm3, xmm5
          vsqrtss xmm2, xmm1, xmm1
          vxorps  xmm3, xmm3, xmm3
          vinsertps xmm3, xmm3, xmm0, 0
          vinsertps xmm3, xmm3, xmm6, 10h
          vinsertps xmm3, xmm3, xmm2, 20h ; ' '
          vmaxps  xmm0, xmm3, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
          vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
          vcvttps2dq xmm3, xmm2
          vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
          vpshufd xmm0, xmm4, 44h ; 'D'
          vpor    xmm1, xmm0, xmm4
          vpshufd xmm0, xmm1, 0AAh ; 'ª'
          vpor    xmm1, xmm0, xmm1
          vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
          vmovups xmm0, [rsp+5E8h+var_278]
          vmovups xmm1, [rsp+5E8h+var_268]
          vblendps xmm2, xmm7, xmm2, 8
          vmovups [rsp+5E8h+var_1B8], xmm2
          vblendps xmm9, xmm0, xmm2, 0Ch
          vblendps xmm10, xmm1, xmm2, 0Ch
        }
        if ( v58 )
        {
          LODWORD(v814) = -1;
        }
        else
        {
          v381 = v840;
          if ( !v840 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 29, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 630, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
              __debugbreak();
          }
          if ( !v381->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 631, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
            __debugbreak();
          if ( (v381->techniqueSet->flags & 0x400) != 0 && fx_gpu_lighting->current.enabled && R_UseBakedLighting() )
          {
            if ( !v381->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 639, ASSERT_TYPE_ASSERT, "(material->techniqueSet)", (const char *)&queryFormat, "material->techniqueSet") )
              __debugbreak();
            v382 = (LODWORD(v381->techniqueSet->flags) >> 11) & 1;
          }
          else
          {
            v382 = 0xFFFFFFFFi64;
          }
          v814 = v382;
          if ( (_DWORD)v382 != -1 )
          {
            _RDX = (__int64)v806;
            if ( v776 )
            {
              _RCX = v818;
              __asm
              {
                vmovups xmm1, xmmword ptr [rcx+rsi+30h]
                vaddps  xmm6, xmm1, xmmword ptr [rcx+rdx]
              }
            }
            else
            {
              _RCX = v812;
              __asm { vmovups xmm6, xmmword ptr [rcx+rdx] }
            }
            __asm { vmovss  xmm7, dword ptr [r14+28h] }
            v387 = R_AllocateCodeSurfLightmap(v813->codeSurfGlob, (GfxMeshLightingType)v382, 0, activeLightGridsBitmask, lightIter, &outLightmapOffset, &outLightmapU, &outLightmapV, &outLightmapD);
            __asm { vxorps  xmm5, xmm5, xmm5 }
            if ( v387 )
            {
              _RAX = lightIter[0];
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vinsertps xmm1, xmm1, xmm7, 10h
                vmovss  dword ptr [rax], xmm6
                vextractps dword ptr [rax+4], xmm6, 1
                vextractps dword ptr [rax+8], xmm6, 2
              }
              _RAX = lightIter[0];
              v785 = outLightmapOffset & 0x3FFF | (outLightmapOffset >> 2) & 0xFFFC000 | (v780 << 28);
              __asm
              {
                vmovss  xmm0, [rsp+5E8h+var_4FC]
                vmovss  dword ptr [rax+0Ch], xmm0
              }
              _RAX = lightIter[0];
              __asm
              {
                vcvtps2ph xmm0, xmm1, 0
                vxorps  xmm1, xmm1, xmm1
                vshufps xmm0, xmm1, xmm0, 0FAh ; 'ú'
                vshufps xmm1, xmm1, xmm0, 84h ; '„'
                vmovups xmmword ptr [rax+10h], xmm1
                vmovss  xmm2, [rsp+5E8h+outLightmapU]
                vmovss  xmm0, [rsp+5E8h+outLightmapV]
              }
            }
            else
            {
              __asm
              {
                vxorps  xmm2, xmm2, xmm2
                vxorps  xmm0, xmm0, xmm0
                vmovss  [rsp+5E8h+outLightmapU], xmm2
                vmovss  [rsp+5E8h+outLightmapV], xmm0
                vmovss  [rsp+5E8h+var_428], xmm5
              }
            }
            __asm
            {
              vmovaps xmm1, xmm2
              vinsertps xmm1, xmm1, xmm2, 10h
              vinsertps xmm1, xmm1, xmm0, 20h ; ' '
              vinsertps xmm1, xmm1, xmm0, 30h ; '0'
              vmovups [rsp+5E8h+var_288], xmm1
            }
            goto LABEL_204;
          }
          __asm { vxorps  xmm5, xmm5, xmm5 }
        }
        __asm { vmovups xmm1, [rsp+5E8h+var_288] }
LABEL_204:
        __asm
        {
          vshufps xmm0, xmm1, xmm1, 98h ; '˜'
          vcvtps2ph xmm2, xmm0, 0
          vshufps xmm1, xmm2, xmm9, 50h ; 'P'
          vshufps xmm0, xmm10, xmm2, 55h ; 'U'
          vshufps xmm9, xmm1, xmm9, 0E8h ; 'è'
          vshufps xmm10, xmm0, xmm10, 0E6h ; 'æ'
          vxorps  xmm6, xmm6, xmm6
        }
        if ( v779 )
        {
          __asm
          {
            vshufps xmm0, xmm11, xmm6, 0FAh ; 'ú'
            vxorps  xmm8, xmm8, xmm8
            vshufps xmm11, xmm11, xmm0, 84h ; '„'
            vmovups xmmword ptr [rsp+5E8h+var_338+10h], xmm8
          }
        }
        __asm
        {
          vmovss  xmm4, dword ptr [r14+88h]
          vmovss  [rsp+5E8h+var_4D4], xmm4
        }
        if ( v782 )
        {
          __asm { vmovss  xmm4, [rsp+5E8h+var_4A0] }
          _EAX = v783;
          _ECX = 0;
          __asm
          {
            vxorps  xmm3, xmm4, cs:__xmm@80000000800000008000000080000000
            vmovd   xmm1, ecx
            vmovd   xmm0, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm14, xmm4, xmm3, xmm2
            vmovss  [rsp+5E8h+var_4FC], xmm14
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rcx
            vmulss  xmm1, xmm0, dword ptr [r15+50h]
            vaddss  xmm2, xmm1, xmm4
            vdivss  xmm3, xmm2, [rsp+5E8h+var_4AC]
          }
          if ( v835 )
          {
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm1, xmm1, edx
              vcvtsi2ss xmm0, xmm0, ecx
              vdivss  xmm2, xmm1, xmm0
            }
            if ( v835 <= 0 )
            {
              __asm
              {
                vsubss  xmm0, xmm14, xmm2
                vaddss  xmm3, xmm3, xmm0
              }
            }
            else
            {
              __asm { vsubss  xmm3, xmm3, xmm2 }
            }
          }
          __asm
          {
            vcomiss xmm3, xmm5
            vmovaps xmm1, xmm3
            vroundss xmm0, xmm6, xmm1, 1
            vsubss  xmm14, xmm3, xmm0
          }
        }
        v434 = *(_QWORD *)(_R14 + 8);
        __asm
        {
          vmovss  xmm6, dword ptr [r14+80h]
          vmovss  [rsp+5E8h+var_4E8], xmm14
        }
        if ( *(_BYTE *)(v434 + 6) )
        {
          v436 = *(__int16 *)(v434 + 4);
          v437 = v436 - 1;
          if ( (unsigned int)(v436 - 1) > 0xFF || (v436 & v437) != 0 )
          {
            LODWORD(indicesa) = *(__int16 *)(v434 + 4);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 166, ASSERT_TYPE_ASSERT, "( ( atlasCount > 0 && atlasCount <= 256 && IsPowerOf2( atlasCount ) ) )", "( atlasCount ) = %i", indicesa) )
              __debugbreak();
          }
          __asm { vcvttss2si r15d, xmm6 }
          v439 = v437 & _ER15;
          if ( 1 << (*(_BYTE *)(v434 + 2) + *(_BYTE *)(v434 + 3)) != v436 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 178, ASSERT_TYPE_ASSERT, "(( 1 << ( atlasData.colIndexBits + atlasData.rowIndexBits ) ) == atlasCount)", (const char *)&queryFormat, "( 1 << ( atlasData.colIndexBits + atlasData.rowIndexBits ) ) == atlasCount") )
            __debugbreak();
          if ( (v437 & (unsigned int)(v439 + 1)) >= 1 << (*(_BYTE *)(v434 + 2) + *(_BYTE *)(v434 + 3)) )
          {
            LODWORD(codeSurfFlags) = 1 << (*(_BYTE *)(v434 + 2) + *(_BYTE *)(v434 + 3));
            LODWORD(indicesa) = v437 & (v439 + 1);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\textureatlas.h", 25, ASSERT_TYPE_ASSERT, "(unsigned)( tileIndex ) < (unsigned)( 1 << ( tilesWidePow2Bits + tilesHighPow2Bits ) )", "tileIndex doesn't index 1 << ( tilesWidePow2Bits + tilesHighPow2Bits )\n\t%i not in [0, %i)", indicesa, codeSurfFlags) )
              __debugbreak();
          }
          __asm { vmovss  xmm1, cs:__real@3f800000 }
          v441 = *(unsigned __int8 *)(v434 + 3);
          v442 = *(unsigned __int8 *)(v434 + 2);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rbx
            vdivss  xmm6, xmm1, xmm0
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vdivss  xmm7, xmm1, xmm0
            vmovss  [rsp+5E8h+t0+8], xmm6
            vmovss  [rsp+5E8h+t0+0Ch], xmm7
          }
          TextureAtlas_GetCoords_ByIndex_Pow2Bits(v439, v442, v441, t0, &t0[2], &t0[1], &t0[3]);
          __asm { vmovss  xmm5, [rsp+5E8h+t0+4] }
          LOWORD(vertIndexOffset) = v787;
          _R14 = (__int64)v850;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm6
            vsubss  xmm1, xmm1, [rsp+5E8h+t0]
          }
          v108 = v788;
          __asm
          {
            vmovss  [rsp+5E8h+var_408], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm7
            vsubss  xmm1, xmm1, xmm5
            vmovss  [rsp+5E8h+var_404], xmm1
          }
        }
        else
        {
          __asm { vmovss  xmm5, [rsp+5E8h+t0+4] }
        }
        __asm
        {
          vmovss  xmm1, [rsp+5E8h+t0+8]
          vaddss  xmm2, xmm1, [rsp+5E8h+t0]
          vmovss  xmm4, [rsp+5E8h+t0]
          vmovss  xmm0, [rsp+5E8h+t0+0Ch]
          vinsertps xmm4, xmm4, xmm2, 10h
          vinsertps xmm4, xmm4, xmm5, 20h ; ' '
          vaddss  xmm3, xmm0, xmm5
          vinsertps xmm4, xmm4, xmm3, 30h ; '0'
          vmovups [rsp+5E8h+var_2D8], xmm4
        }
        if ( v781 )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vsubss  xmm1, xmm0, xmm14
            vshufps xmm1, xmm1, xmm1, 0
            vshufps xmm0, xmm1, xmm4, 0FAh ; 'ú'
            vshufps xmm2, xmm4, xmm0, 84h ; '„'
            vshufps xmm1, xmm2, xmm1, 0FAh ; 'ú'
            vshufps xmm0, xmm2, xmm1, 84h ; '„'
            vshufps xmm0, xmm0, xmm0, 98h ; '˜'
            vcvtps2ph xmm2, xmm0, 0
            vshufps xmm1, xmm9, xmm2, 0
            vshufps xmm0, xmm10, xmm2, 50h ; 'P'
            vshufps xmm7, xmm1, xmm9, 0E8h ; 'è'
            vshufps xmm14, xmm0, xmm10, 0E8h ; 'è'
          }
        }
        else
        {
          __asm
          {
            vmovaps xmm1, xmm14
            vshufps xmm1, xmm1, xmm1, 0
            vshufps xmm0, xmm1, xmm4, 50h ; 'P'
            vshufps xmm2, xmm0, xmm4, 0E8h ; 'è'
            vshufps xmm1, xmm2, xmm1, 50h ; 'P'
            vshufps xmm0, xmm1, xmm2, 0E8h ; 'è'
            vshufps xmm0, xmm0, xmm0, 0C8h ; 'È'
            vcvtps2ph xmm2, xmm0, 0
            vshufps xmm1, xmm10, xmm2, 0
            vshufps xmm0, xmm9, xmm2, 50h ; 'P'
            vshufps xmm14, xmm1, xmm10, 0E8h ; 'è'
            vshufps xmm7, xmm0, xmm9, 0E8h ; 'è'
          }
        }
        _RAX = v833;
        _RCX = (__int64)v847;
        __asm
        {
          vmovups [rsp+5E8h+var_278], xmm7
          vmovups [rsp+5E8h+var_268], xmm14
          vmovss  xmm1, dword ptr [rcx+rax*4]; cameraDistance
        }
        *(double *)&_XMM0 = ParticleEmitter::EvaluateDistanceFade(v811, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm10, cs:__real@3f800000
          vcomiss xmm0, xmm10
        }
        if ( v51 )
        {
          __asm
          {
            vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
            vmulss  xmm2, xmm0, xmm0
            vmovups xmm0, cs:__xmm@000000003f8000003f8000003f800000
            vinsertps xmm1, xmm1, xmm2, 0
            vinsertps xmm1, xmm1, xmm2, 10h
            vinsertps xmm1, xmm1, xmm2, 20h ; ' '
            vmulps  xmm8, xmm1, xmm8
            vinsertps xmm0, xmm0, xmm2, 30h ; '0'
            vmovups xmmword ptr [rsp+5E8h+var_338+10h], xmm8
            vmulps  xmm11, xmm0, xmm11
          }
        }
        __asm
        {
          vmovss  dword ptr [rsp+5E8h+vec], xmm8
          vextractps dword ptr [rsp+5E8h+vec+4], xmm8, 1
          vextractps dword ptr [rsp+5E8h+vec+8], xmm8, 2
          vcvtps2ph xmm6, xmm11, 0
        }
        v797 = Vec3PackR11G11B10F(&vec);
        __asm
        {
          vshufps xmm0, xmm8, xmm8, 0FFh
          vxorps  xmm1, xmm1, xmm1
          vinsertps xmm1, xmm1, xmm0, 0
          vinsertps xmm1, xmm1, xmm15, 10h
          vcvtps2ph xmm0, xmm1, 0
          vmovss  [rsp+5E8h+var_4FC], xmm0
          vshufps xmm0, xmm6, xmm6, 55h ; 'U'
          vinsertps xmm6, xmm6, xmm0, 10h
          vinsertps xmm6, xmm6, [rsp+5E8h+var_4C8], 20h
          vinsertps xmm6, xmm6, [rsp+5E8h+var_4FC], 30h
        }
        if ( perFrameActiveEmitterIndex > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 214, ASSERT_TYPE_ASSERT, "(perFrameActiveEmitterIndex <= 0x00ffff)", (const char *)&queryFormat, "perFrameActiveEmitterIndex <= 0x00ffff") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+5E8h+var_318+14h]
          vmulss  xmm0, xmm0, cs:__real@437f0000
          vaddss  xmm2, xmm0, cs:__real@3f000000
          vxorps  xmm0, xmm0, xmm0
          vroundss xmm0, xmm0, xmm2, 1
          vcvttss2si ecx, xmm0; val
        }
        v513 = I_clamp(_ECX, 0, 255);
        __asm
        {
          vmovups xmmword ptr [r13+0], xmm13
          vmovups xmmword ptr [r13+10h], xmm6
          vmovups xmmword ptr [r13+20h], xmm14
        }
        v514 = perFrameActiveEmitterIndex | (v513 << 24);
        _R13->extraData = v514;
        __asm
        {
          vmovups xmmword ptr [r13+30h], xmm12
          vmovups xmmword ptr [r13+40h], xmm6
          vmovups xmmword ptr [r13+50h], xmm7
        }
        _R13[1].extraData = v514;
        _R13 += 2;
        v515 = 0;
        *(_QWORD *)&v865 = _R13;
        if ( v816 )
        {
          LODWORD(v516) = v810;
          v517 = v816 - 1;
          _R12 = (__int64)v821;
          while ( 1 )
          {
            v519 = v825;
            if ( (unsigned int)v516 >= v825->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
              __debugbreak();
            __asm
            {
              vmovups ymm0, [rsp+5E8h+var_378]
              vmovups ymm1, [rsp+5E8h+var_358]
            }
            v522 = (unsigned int)(v516 + 1) % v519->numPointsMax;
            __asm { vmovups [rsp+5E8h+var_198], ymm0 }
            v516 = v522;
            __asm
            {
              vmovups ymm0, [rsp+5E8h+var_338]
              vmovups [rsp+5E8h+var_178], ymm1
              vmovups ymm1, [rsp+5E8h+var_318]
              vmovups [rsp+5E8h+var_158], ymm0
              vmovups [rsp+5E8h+var_138], ymm1
            }
            if ( v515 != v517 )
              goto LABEL_250;
            if ( (_BYTE)v837 )
            {
              m_pModuleInitRelativeVelocity = v845->m_particleState.m_pModuleInitRelativeVelocity;
              if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
              {
                _RAX = v846;
                __asm { vmovups xmm7, xmmword ptr [rax] }
              }
              else
              {
                _RAX = v846;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rax]
                  vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                  vshufps xmm3, xmm0, xmm0, 55h ; 'U'
                  vshufps xmm4, xmm0, xmm0, 0
                  vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
                  vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
                  vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
                  vaddps  xmm1, xmm0, xmm2
                  vmulps  xmm0, xmm4, xmmword ptr [rax]
                  vaddps  xmm7, xmm0, xmm1
                }
              }
              v538 = v845->m_particleState.m_pStateDef;
              __asm { vmovups xmmword ptr [rsp+5E8h+var_378], xmm7 }
              if ( (v538->flags & 0x10000000) != 0 )
              {
                ParticleEmitter::GetSystemOwner(v811);
                __asm
                {
                  vaddps  xmm7, xmm7, xmmword ptr [rax+30h]
                  vmovups xmmword ptr [rsp+5E8h+var_378], xmm7
                }
              }
              _RCX = v516;
            }
            else
            {
LABEL_250:
              _RCX = v522;
              _RDX = &v806[16 * v522];
              if ( v776 )
              {
                _RAX = 10 * v516;
                __asm
                {
                  vmovups xmm1, xmmword ptr [r12+rax*8+30h]
                  vaddps  xmm7, xmm1, xmmword ptr [rdx]
                }
              }
              else
              {
                __asm { vmovups xmm7, xmmword ptr [rdx] }
              }
              __asm { vmovups xmmword ptr [rsp+5E8h+var_378], xmm7 }
            }
            __asm { vmovups xmm1, xmmword ptr [r14+90h] }
            _RBX = 80 * _RCX;
            _RAX = 16 * _RCX;
            __asm
            {
              vmovups xmm0, xmmword ptr [rbx+r12+20h]
              vmovups [rsp+5E8h+var_1A8], xmm0
              vmovups xmmword ptr [rsp+5E8h+var_378+10h], xmm0
              vmovups xmm0, xmmword ptr [rbx+r12]
              vmovups [rsp+5E8h+var_298], xmm0
              vmovups xmmword ptr [rsp+5E8h+var_358], xmm0
              vmulps  xmm0, xmm1, xmmword ptr [rax+rdx]
            }
            _RDX = (__int64)v842;
            __asm
            {
              vmovups xmmword ptr [rsp+5E8h+var_358+10h], xmm0
              vmovups xmm0, xmmword ptr [rax+rdx]
            }
            _RAX = (__int64)&v828[16 * _RCX];
            __asm { vmovups [rsp+5E8h+var_458], xmm0 }
            if ( !(_BYTE)v829 )
              _RAX = _R14 + 48;
            __asm
            {
              vmovups xmmword ptr [rsp+5E8h+var_338], xmm0
              vmovups xmm6, xmmword ptr [rax]
            }
            if ( (_BYTE)v829 )
            {
              _RAX = v830;
              __asm { vmovss  xmm0, dword ptr [rax+rcx*4] }
            }
            else
            {
              __asm { vmovss  xmm0, [rsp+5E8h+var_4A8] }
            }
            __asm
            {
              vmovss  dword ptr [rsp+5E8h+var_318+10h], xmm0
              vmovss  [rsp+5E8h+var_4C8], xmm0
            }
            if ( (_BYTE)v826 )
            {
              _RAX = (__int64)v817;
              __asm { vmovss  xmm0, dword ptr [rax+rcx*4] }
            }
            else
            {
              __asm { vmovss  xmm0, [rsp+5E8h+var_4D0] }
            }
            __asm
            {
              vmovss  dword ptr [rsp+5E8h+var_318+14h], xmm0
              vmovss  [rsp+5E8h+var_4FC], xmm0
            }
            if ( (_BYTE)v831 )
            {
              _RAX = (__int64)v832;
              __asm { vmovss  xmm0, dword ptr [rax+rcx*4] }
            }
            else
            {
              __asm { vmovaps xmm0, xmm10 }
            }
            _RAX = (__int64)v847;
            __asm
            {
              vmovups xmm8, cs:__xmm@3f800000000000000000000000000000
              vinsertps xmm8, xmm8, xmm0, 0
              vinsertps xmm8, xmm8, xmm0, 10h
              vmovss  xmm1, dword ptr [rax+rcx*4]; cameraDistance
              vinsertps xmm8, xmm8, xmm0, 20h ; ' '
              vmovss  xmm0, dword ptr [rsp+5E8h+var_138+18h]
              vmovss  dword ptr [rsp+5E8h+var_318+18h], xmm0
              vmovss  xmm0, dword ptr [rsp+5E8h+var_138+1Ch]
              vmovss  dword ptr [rsp+5E8h+var_318+1Ch], xmm0
              vmovups xmmword ptr [rsp+5E8h+var_318], xmm8
            }
            *(double *)&_XMM0 = ParticleEmitter::EvaluateDistanceFade(v811, *(float *)&_XMM1);
            __asm
            {
              vmovss  xmm9, cs:__real@3d20e411
              vmovss  xmm11, cs:__real@4019999a
              vcomiss xmm0, xmm10
              vmovss  xmm10, cs:__real@3f72a76f
            }
            v573 = v568;
            __asm
            {
              vcomiss xmm6, xmm9
              vmovss  [rsp+5E8h+var_4F4], xmm0
              vmovups [rsp+5E8h+var_108], xmm6
            }
            if ( v568 | v569 )
            {
              __asm
              {
                vmovss  xmm1, cs:__real@3d9e8391
                vmulss  xmm0, xmm6, xmm1
                vmovss  xmm6, cs:__real@3d55891a
              }
            }
            else
            {
              __asm
              {
                vmulss  xmm0, xmm6, xmm10
                vmovss  xmm6, cs:__real@3d55891a
                vaddss  xmm0, xmm0, xmm6; X
                vmovaps xmm1, xmm11; Y
              }
              *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm { vmovss  xmm1, cs:__real@3d9e8391 }
            }
            __asm
            {
              vmovss  dword ptr [rsp+5E8h+var_108], xmm0
              vmovss  xmm0, dword ptr [rsp+5E8h+var_108+4]
              vcomiss xmm0, xmm9
            }
            if ( v568 | v569 )
            {
              __asm { vmulss  xmm0, xmm0, xmm1 }
            }
            else
            {
              __asm
              {
                vmulss  xmm0, xmm0, xmm10
                vaddss  xmm0, xmm0, xmm6; X
                vmovaps xmm1, xmm11; Y
              }
              *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm { vmovss  xmm1, cs:__real@3d9e8391 }
            }
            __asm
            {
              vmovss  dword ptr [rsp+5E8h+var_108+4], xmm0
              vmovss  xmm0, dword ptr [rsp+5E8h+var_108+8]
              vcomiss xmm0, xmm9
            }
            if ( v568 | v569 )
            {
              __asm { vmulss  xmm0, xmm0, xmm1 }
            }
            else
            {
              __asm
              {
                vmulss  xmm0, xmm0, xmm10
                vaddss  xmm0, xmm0, xmm6; X
                vmovaps xmm1, xmm11; Y
              }
              powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            }
            __asm
            {
              vmovups xmm9, [rsp+5E8h+var_108]
              vmovss  xmm11, dword ptr [rbx+r12+40h]
              vmovss  xmm6, [rsp+5E8h+var_4D4]
              vmovups xmm12, xmmword ptr [rsp+5E8h+var_138]
              vmovups xmm13, xmmword ptr [rsp+5E8h+var_158+10h]
              vmovups xmm14, xmmword ptr [rsp+5E8h+var_158]
              vmovups xmm15, xmmword ptr [rsp+5E8h+var_178+10h]
              vinsertps xmm9, xmm9, xmm0, 20h ; ' '
              vmovups [rsp+5E8h+var_108], xmm9
              vmovups xmmword ptr [rsp+5E8h+var_338+10h], xmm9
              vsubss  xmm10, xmm11, xmm6
            }
            if ( v779 )
            {
              __asm
              {
                vmovss  xmm0, [rsp+5E8h+var_4B8]
                vcomiss xmm11, xmm0
                vcomiss xmm0, xmm6
              }
              v599 = v805 == 0;
              if ( !v805 )
              {
                v600 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1741, ASSERT_TYPE_ASSERT, "(createFadeOutSegment)", (const char *)&queryFormat, "createFadeOutSegment");
                v599 = !v600;
                if ( v600 )
                  __debugbreak();
                __asm { vmovss  xmm0, [rsp+5E8h+var_4B8] }
              }
              __asm
              {
                vcomiss xmm10, cs:__real@00000000
                vsubss  xmm6, xmm0, xmm6
              }
              if ( v599 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1744, ASSERT_TYPE_ASSERT, "(segmentSize > 0.f)", (const char *)&queryFormat, "segmentSize > 0.f") )
                __debugbreak();
              __asm
              {
                vmovss  xmm1, cs:__real@3f800000
                vdivss  xmm0, xmm1, [rsp+5E8h+var_4AC]
                vmovss  xmm5, cs:__real@3f800000
                vmulss  xmm0, xmm6, xmm0
                vdivss  xmm4, xmm6, xmm10
                vaddss  xmm6, xmm0, [rsp+5E8h+var_4E8]
                vsubps  xmm0, xmm7, xmmword ptr [rsp+5E8h+var_198]
                vmovaps xmm3, xmm4
                vshufps xmm3, xmm3, xmm3, 0
                vmulps  xmm1, xmm0, xmm3
                vaddps  xmm2, xmm1, xmmword ptr [rsp+5E8h+var_198]
                vmovups xmm0, [rsp+5E8h+var_1A8]
                vsubps  xmm0, xmm0, xmmword ptr [rsp+5E8h+var_198+10h]
                vmulps  xmm1, xmm0, xmm3
                vmovups xmm0, [rsp+5E8h+var_298]
                vsubps  xmm0, xmm0, xmmword ptr [rsp+5E8h+var_178]
                vmovups [rsp+5E8h+var_238], xmm2
                vaddps  xmm2, xmm1, xmmword ptr [rsp+5E8h+var_198+10h]
                vmulps  xmm1, xmm0, xmm3
                vmovups xmm0, xmmword ptr [rsp+5E8h+var_358+10h]
                vsubps  xmm0, xmm0, xmm15
                vmovups [rsp+5E8h+var_228], xmm2
                vaddps  xmm2, xmm1, xmmword ptr [rsp+5E8h+var_178]
                vmulps  xmm1, xmm0, xmm3
                vmovups xmm0, [rsp+5E8h+var_458]
                vsubps  xmm0, xmm0, xmm14
                vmovups [rsp+5E8h+var_218], xmm2
                vaddps  xmm2, xmm1, xmm15
                vmulps  xmm1, xmm0, xmm3
                vmovups [rsp+5E8h+var_208], xmm2
                vaddps  xmm2, xmm1, xmm14
                vmovups [rsp+5E8h+var_1F8], xmm2
                vsubps  xmm0, xmm9, xmm13
                vmulps  xmm1, xmm0, xmm3
                vaddps  xmm2, xmm1, xmm13
                vmovups [rsp+5E8h+var_1E8], xmm2
                vsubps  xmm0, xmm8, xmm12
                vmulps  xmm1, xmm0, xmm3
                vaddps  xmm2, xmm1, xmm12
                vmulss  xmm1, xmm4, [rsp+5E8h+var_4C8]
                vsubss  xmm3, xmm5, xmm4
                vmulss  xmm0, xmm3, dword ptr [rsp+5E8h+var_138+10h]
                vaddss  xmm1, xmm1, xmm0
                vmulss  xmm0, xmm3, dword ptr [rsp+5E8h+var_138+14h]
                vmovups [rsp+5E8h+var_1D8], xmm2
                vmulss  xmm2, xmm4, [rsp+5E8h+var_4FC]
                vmovss  [rsp+5E8h+var_1C8], xmm1
                vaddss  xmm1, xmm2, xmm0
                vmovss  [rsp+5E8h+var_1C4], xmm1
                vmovss  xmm1, dword ptr [rsp+5E8h+var_138+18h]
                vsubss  xmm2, xmm1, xmm1
                vmulss  xmm0, xmm2, xmm4
                vaddss  xmm0, xmm0, xmm1; X
                vmovss  [rsp+5E8h+var_1C0], xmm0
              }
              if ( entryCount )
              {
                __asm { vmovaps xmm1, xmm5; Y }
                *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              }
              else
              {
                __asm { vxorps  xmm0, xmm0, xmm0 }
              }
              __asm { vmovss  [rsp+5E8h+var_1BC], xmm0 }
              v647 = v778 || v573;
              __asm
              {
                vmovups xmm0, [rsp+5E8h+var_2D8]
                vmovss  xmm1, [rsp+5E8h+var_4E0]
                vmovss  xmm2, [rsp+5E8h+var_4D8]
                vmovss  [rsp+5E8h+var_520], xmm1
                vmovss  xmm1, [rsp+5E8h+var_4DC]
                vmovdqa [rsp+5E8h+var_108], xmm0
                vmovss  xmm0, [rsp+5E8h+var_4E4]
                vmovss  [rsp+5E8h+var_528], xmm0
                vmovss  xmm0, [rsp+5E8h+var_4B8]
                vmovss  [rsp+5E8h+var_530], xmm0
                vmovss  xmm0, [rsp+5E8h+var_4F4]
                vmovss  [rsp+5E8h+var_538], xmm1
                vmovss  [rsp+5E8h+var_540], xmm2
                vmovss  xmm2, [rsp+5E8h+var_4EC]
              }
              v656 = (int)v814;
              __asm
              {
                vmovss  [rsp+5E8h+var_558], xmm0
                vmovss  xmm0, dword ptr [r14+28h]
                vmovss  [rsp+5E8h+var_578], xmm2
                vmovss  [rsp+5E8h+var_5A0], xmm0
                vmovss  dword ptr [rsp+5E8h+indices], xmm6
              }
              FX_TrailGenVerts_AddSegment(v813, (GfxSpriteVertex **)&v865, v784, (r_double_index_t **)&v819, v781, indicesb, (GfxMeshLightingType)v814, activeLightGridsBitmask, v780, v750, v788, &v866, &v858, *(const ParticleAtlasData **)(_R14 + 8), v753, &v852, &v851, v647, v758, v777, v779, v761, v764, v767, v770, v773, perFrameActiveEmitterIndex);
              __asm { vmovss  xmm6, [rsp+5E8h+var_4D4] }
            }
            else
            {
              v656 = (int)v814;
            }
            v658 = v777;
            if ( v777 )
            {
              __asm
              {
                vmovss  xmm0, [rsp+5E8h+var_4B0]
                vcomiss xmm11, xmm0
                vcomiss xmm0, xmm6
              }
              v660 = v799 == 0;
              if ( !v799 )
              {
                v661 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1759, ASSERT_TYPE_ASSERT, "(createFadeInSegment)", (const char *)&queryFormat, "createFadeInSegment");
                v660 = !v661;
                if ( v661 )
                  __debugbreak();
                __asm { vmovss  xmm0, [rsp+5E8h+var_4B0] }
              }
              __asm
              {
                vcomiss xmm10, cs:__real@00000000
                vsubss  xmm6, xmm0, xmm6
              }
              if ( v660 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1762, ASSERT_TYPE_ASSERT, "(segmentSize > 0.f)", (const char *)&queryFormat, "segmentSize > 0.f") )
                __debugbreak();
              __asm
              {
                vmovss  xmm5, cs:__real@3f800000
                vdivss  xmm0, xmm5, [rsp+5E8h+var_4AC]
                vmulss  xmm0, xmm6, xmm0
                vdivss  xmm4, xmm6, xmm10
                vaddss  xmm6, xmm0, [rsp+5E8h+var_4E8]
                vsubps  xmm0, xmm7, xmmword ptr [rsp+5E8h+var_198]
                vmovaps xmm3, xmm4
                vshufps xmm3, xmm3, xmm3, 0
                vmulps  xmm1, xmm0, xmm3
                vaddps  xmm2, xmm1, xmmword ptr [rsp+5E8h+var_198]
                vmovups xmm0, [rsp+5E8h+var_1A8]
                vsubps  xmm0, xmm0, xmmword ptr [rsp+5E8h+var_198+10h]
                vmulps  xmm1, xmm0, xmm3
                vmovups xmm0, [rsp+5E8h+var_298]
                vsubps  xmm0, xmm0, xmmword ptr [rsp+5E8h+var_178]
                vmovups [rsp+5E8h+var_238], xmm2
                vaddps  xmm2, xmm1, xmmword ptr [rsp+5E8h+var_198+10h]
                vmulps  xmm1, xmm0, xmm3
                vmovups xmm0, xmmword ptr [rsp+5E8h+var_358+10h]
                vsubps  xmm0, xmm0, xmm15
                vmovups [rsp+5E8h+var_228], xmm2
                vaddps  xmm2, xmm1, xmmword ptr [rsp+5E8h+var_178]
                vmulps  xmm1, xmm0, xmm3
                vmovups xmm0, [rsp+5E8h+var_458]
                vsubps  xmm0, xmm0, xmm14
                vmovups [rsp+5E8h+var_218], xmm2
                vaddps  xmm2, xmm1, xmm15
                vmulps  xmm1, xmm0, xmm3
                vmovups [rsp+5E8h+var_208], xmm2
                vaddps  xmm2, xmm1, xmm14
                vmovups [rsp+5E8h+var_1F8], xmm2
                vsubps  xmm0, xmm9, xmm13
                vmulps  xmm1, xmm0, xmm3
                vaddps  xmm2, xmm1, xmm13
                vmovups [rsp+5E8h+var_1E8], xmm2
                vsubps  xmm0, xmm8, xmm12
                vmulps  xmm1, xmm0, xmm3
                vaddps  xmm2, xmm1, xmm12
                vmulss  xmm1, xmm4, [rsp+5E8h+var_4C8]
                vsubss  xmm3, xmm5, xmm4
                vmulss  xmm0, xmm3, dword ptr [rsp+5E8h+var_138+10h]
                vaddss  xmm1, xmm1, xmm0
                vmulss  xmm0, xmm3, dword ptr [rsp+5E8h+var_138+14h]
                vmovups [rsp+5E8h+var_1D8], xmm2
                vmulss  xmm2, xmm4, [rsp+5E8h+var_4FC]
                vmovss  [rsp+5E8h+var_1C8], xmm1
                vaddss  xmm1, xmm2, xmm0
                vmovss  [rsp+5E8h+var_1C4], xmm1
                vmovss  xmm1, dword ptr [rsp+5E8h+var_138+18h]
                vsubss  xmm2, xmm1, xmm1
                vmulss  xmm0, xmm2, xmm4
                vaddss  xmm0, xmm0, xmm1; X
                vmovss  [rsp+5E8h+var_1C0], xmm0
              }
              if ( entryCount )
              {
                __asm { vmovaps xmm1, xmm5; Y }
                *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              }
              else
              {
                __asm { vxorps  xmm0, xmm0, xmm0 }
              }
              __asm { vmovss  [rsp+5E8h+var_1BC], xmm0 }
              v706 = v778 || v573;
              __asm
              {
                vmovss  xmm0, [rsp+5E8h+var_4B0]
                vmovss  xmm13, [rsp+5E8h+var_4E0]
                vmovss  xmm12, [rsp+5E8h+var_4E4]
                vmovss  xmm15, [rsp+5E8h+var_4DC]
                vmovss  xmm14, [rsp+5E8h+var_4D8]
                vmovss  xmm7, [rsp+5E8h+var_4F4]
                vmovss  xmm9, [rsp+5E8h+var_4EC]
                vmovups xmm8, [rsp+5E8h+var_2D8]
                vmovss  [rsp+5E8h+var_520], xmm13
                vmovss  [rsp+5E8h+var_528], xmm12
                vmovss  [rsp+5E8h+var_530], xmm0
                vmovss  xmm0, dword ptr [r14+28h]
                vmovss  [rsp+5E8h+var_538], xmm15
                vmovss  [rsp+5E8h+var_540], xmm14
                vmovss  [rsp+5E8h+var_558], xmm7
              }
              v756 = v706;
              v716 = *(const ParticleAtlasData **)(_R14 + 8);
              __asm
              {
                vmovss  [rsp+5E8h+var_578], xmm9
                vmovss  [rsp+5E8h+var_5A0], xmm0
                vmovss  dword ptr [rsp+5E8h+indices], xmm6
                vmovdqa [rsp+5E8h+var_458], xmm8
              }
              FX_TrailGenVerts_AddSegment(v813, (GfxSpriteVertex **)&v865, v784, (r_double_index_t **)&v819, v781, indicesc, v656, activeLightGridsBitmask, v780, v751, v788, &v815, &v858, v716, v754, &v852, &v851, v756, v759, v777, v779, v762, v765, v768, v771, v774, perFrameActiveEmitterIndex);
              v658 = v777;
            }
            else
            {
              __asm
              {
                vmovss  xmm7, [rsp+5E8h+var_4F4]
                vmovups xmm8, [rsp+5E8h+var_2D8]
                vmovss  xmm9, [rsp+5E8h+var_4EC]
                vmovss  xmm12, [rsp+5E8h+var_4E4]
                vmovss  xmm13, [rsp+5E8h+var_4E0]
                vmovss  xmm15, [rsp+5E8h+var_4DC]
                vmovss  xmm14, [rsp+5E8h+var_4D8]
              }
            }
            __asm
            {
              vmovss  xmm1, cs:__real@3f800000
              vdivss  xmm0, xmm1, [rsp+5E8h+var_4AC]
              vmovss  xmm1, [rsp+5E8h+var_4E8]
            }
            _EAX = v783;
            _ECX = 0;
            __asm
            {
              vmulss  xmm0, xmm10, xmm0
              vaddss  xmm3, xmm0, xmm1
              vsubss  xmm2, xmm1, xmm0
              vmovd   xmm1, ecx
              vmovd   xmm0, eax
              vpcmpeqd xmm1, xmm0, xmm1
              vblendvps xmm2, xmm2, xmm3, xmm1
              vmovss  [rsp+5E8h+var_484], xmm2
              vmovss  [rsp+5E8h+var_4D4], xmm11
            }
            v729 = v778 || v573;
            __asm { vmovss  xmm0, dword ptr [r14+28h] }
            v108 = v788;
            __asm
            {
              vmovss  [rsp+5E8h+var_520], xmm13
              vmovss  [rsp+5E8h+var_528], xmm12
              vmovss  [rsp+5E8h+var_530], xmm11
              vmovss  [rsp+5E8h+var_538], xmm15
              vmovss  [rsp+5E8h+var_540], xmm14
              vmovss  xmm14, [rsp+5E8h+var_484]
              vmovss  [rsp+5E8h+var_558], xmm7
            }
            v757 = v729;
            v731 = *(const ParticleAtlasData **)(_R14 + 8);
            __asm
            {
              vmovss  [rsp+5E8h+var_578], xmm9
              vmovss  [rsp+5E8h+var_5A0], xmm0
              vmovss  dword ptr [rsp+5E8h+indices], xmm14
              vmovss  [rsp+5E8h+var_4E8], xmm14
              vmovdqa [rsp+5E8h+var_458], xmm8
            }
            FX_TrailGenVerts_AddSegment(v813, (GfxSpriteVertex **)&v865, v784, (r_double_index_t **)&v819, v781, indicesd, v656, activeLightGridsBitmask, v780, v752, v788, &v815, &v844, v731, v755, &v852, &v851, v757, v760, v658, v779, v763, v766, v769, v772, v775, perFrameActiveEmitterIndex);
            if ( ++v515 >= v816 )
              break;
            __asm { vmovss  xmm10, cs:__real@3f800000 }
          }
          LOWORD(vertIndexOffset) = v784[0];
          _R13 = (GfxSpriteVertex *)v865;
        }
        v109 = firstPointIndex;
        LOWORD(vertIndexOffset) = vertIndexOffset + 2;
        __asm
        {
          vmovss  xmm11, [rsp+5E8h+var_4A8]
          vmovss  xmm9, [rsp+5E8h+var_4D0]
          vmovss  xmm15, [rsp+5E8h+var_3B0]
        }
        v110 = entryCount;
        v116 = firstPointIndex + 1;
        _R10 = v812;
        ++v108;
        _R8 = v833;
        _R11 = v818;
        LOWORD(v787) = vertIndexOffset;
        v784[0] = vertIndexOffset;
        v788 = v108;
        __asm { vxorps  xmm10, xmm10, xmm10 }
      }
      while ( v108 < numSheets );
    }
    if ( v843 != (unsigned __int16)vertIndexOffset - outBuffers.vertIndexOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_draw_util.cpp", 1787, ASSERT_TYPE_ASSERT, "(numVerts == static_cast<uint>(vertIndexOffset - codeSurfBuffers.vertIndexOffset))", (const char *)&queryFormat, "numVerts == static_cast<uint>(vertIndexOffset - codeSurfBuffers.vertIndexOffset)") )
      __debugbreak();
  }
  _R11 = &v868;
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
FX_TrailGenVerts_AddSegment
==============
*/
void FX_TrailGenVerts_AddSegment(FxDrawState *draw, GfxSpriteVertex **vertIter, unsigned __int16 *vertIndexOffset, r_double_index_t **indices, bool useVerticalTexture, float uOffset, GfxMeshLightingType lightingType, unsigned int activeLightGridsBitmask, bool isSurface, float anisotropy, unsigned int sheetIndex, float4 *texCoords, FX_TrailGenVerts_DrawData *drawData, const ParticleAtlasData *atlasData, float centerOffset, float4 *sinRot, float4 *cosRot, bool hasAlphaFade, float cameraDistanceFade, bool fadeIn, bool fadeOut, float fadeInDistance, float fadeOutDistance, float spawnDistanceCurr, float spawnDistanceStart, float spawnDistanceEnd, unsigned int perFrameActiveEmitterIndex)
{
  unsigned int entryCount; 
  char v144; 
  bool v145; 
  unsigned __int16 v160; 
  r_double_index_t *v161; 
  unsigned int v165; 
  unsigned int v176; 
  unsigned int v178; 
  unsigned int outLightmapOffset; 
  unsigned int v196; 
  float outLightmapU; 
  float outLightmapV; 
  float outLightmapD; 
  float4 packedAtlasParams_8; 
  char v201; 
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
  _RAX = texCoords;
  _RBX = drawData;
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovups xmm2, xmmword ptr [rax]
  }
  if ( useVerticalTexture )
  {
    __asm
    {
      vsubss  xmm1, xmm8, [rbp+60h+arg_28]
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm2, 0FAh ; 'ú'
      vshufps xmm2, xmm2, xmm0, 84h ; '„'
      vshufps xmm1, xmm2, xmm1, 0FAh ; 'ú'
      vshufps xmm0, xmm2, xmm1, 84h ; '„'
      vmovups xmm1, xmmword ptr [rsp+160h+packedAtlasParams.v+8]
      vmovups xmm2, xmmword ptr [rsp+160h+packedAtlasParams.v+8]
      vshufps xmm0, xmm0, xmm0, 98h ; '˜'
      vcvtps2ph xmm3, xmm0, 0
      vshufps xmm0, xmm1, xmm3, 0
      vshufps xmm7, xmm0, xmm1, 0E8h ; 'è'
      vshufps xmm0, xmm2, xmm3, 50h ; 'P'
      vshufps xmm9, xmm0, xmm2, 0E8h ; 'è'
    }
  }
  else
  {
    __asm
    {
      vbroadcastss xmm1, [rbp+60h+arg_28]
      vshufps xmm0, xmm1, xmm2, 50h ; 'P'
      vshufps xmm2, xmm0, xmm2, 0E8h ; 'è'
      vshufps xmm1, xmm2, xmm1, 50h ; 'P'
      vshufps xmm0, xmm1, xmm2, 0E8h ; 'è'
      vmovups xmm1, xmmword ptr [rsp+160h+packedAtlasParams.v+8]
      vmovups xmm2, xmmword ptr [rsp+160h+packedAtlasParams.v+8]
      vshufps xmm0, xmm0, xmm0, 0C8h ; 'È'
      vcvtps2ph xmm3, xmm0, 0
      vshufps xmm0, xmm1, xmm3, 0
      vshufps xmm9, xmm0, xmm1, 0E8h ; 'è'
      vshufps xmm0, xmm2, xmm3, 50h ; 'P'
      vshufps xmm7, xmm0, xmm2, 0E8h ; 'è'
    }
  }
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( lightingType == GFX_MESH_LIGHTING_NONE )
  {
    __asm { vmovups xmm0, xmmword ptr [rsp+160h+packedAtlasParams.v+8] }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
    if ( R_AllocateCodeSurfLightmap(draw->codeSurfGlob, lightingType, 0, activeLightGridsBitmask, (GfxMeshDataLightingInput **)&packedAtlasParams_8, &outLightmapOffset, &outLightmapU, &outLightmapV, &outLightmapD) )
    {
      _RAX = packedAtlasParams_8.v.m128_u64[0];
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx]
        vmovss  dword ptr [rax], xmm1
        vextractps dword ptr [rax+4], xmm1, 1
        vextractps dword ptr [rax+8], xmm1, 2
      }
      _RAX = packedAtlasParams_8.v.m128_u64[0];
      v196 = outLightmapOffset & 0x3FFF | (outLightmapOffset >> 2) & 0xFFFC000 | (isSurface << 28);
      __asm
      {
        vmovss  xmm0, [rsp+160h+var_10C]
        vmovss  dword ptr [rax+0Ch], xmm0
      }
      _RAX = packedAtlasParams_8.v.m128_u64[0];
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vinsertps xmm0, xmm0, [rbp+60h+arg_48], 10h
        vcvtps2ph xmm1, xmm0, 0
        vshufps xmm0, xmm2, xmm1, 0FAh ; 'ú'
        vshufps xmm1, xmm2, xmm0, 84h ; '„'
        vmovups xmmword ptr [rax+10h], xmm1
        vmovss  xmm3, [rsp+160h+var_104]
        vmovss  xmm2, [rsp+160h+var_108]
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vmovss  [rsp+160h+var_104], xmm3
        vmovss  [rsp+160h+var_108], xmm2
        vmovss  [rsp+160h+var_100], xmm6
      }
    }
    __asm
    {
      vmovaps xmm0, xmm2
      vinsertps xmm0, xmm0, xmm2, 10h
      vinsertps xmm0, xmm0, xmm3, 20h ; ' '
      vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    }
  }
  __asm
  {
    vshufps xmm0, xmm0, xmm0, 98h ; '˜'
    vcvtps2ph xmm2, xmm0, 0
    vshufps xmm1, xmm2, xmm7, 50h ; 'P'
    vshufps xmm0, xmm9, xmm2, 55h ; 'U'
    vshufps xmm10, xmm1, xmm7, 0E8h ; 'è'
    vshufps xmm9, xmm0, xmm9, 0E6h ; 'æ'
  }
  if ( sheetIndex )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+10h]
      vxorps  xmm0, xmm0, xmm0
      vsubps  xmm3, xmm0, xmmword ptr [rcx]
      vmulps  xmm2, xmm1, xmmword ptr [rax]
      vmulps  xmm0, xmm3, xmmword ptr [rbx+20h]
      vmovups xmm1, xmmword ptr [rbx+20h]
      vaddps  xmm5, xmm0, xmm2
      vmulps  xmm2, xmm1, xmmword ptr [rax]
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmulps  xmm0, xmm1, xmmword ptr [rcx]
      vaddps  xmm7, xmm0, xmm2
    }
  }
  else
  {
    __asm
    {
      vmovups xmm7, xmmword ptr [rbx+20h]
      vmovups xmm5, xmmword ptr [rbx+10h]
    }
  }
  __asm
  {
    vmovss  xmm4, [rbp+60h+arg_70]
    vucomiss xmm4, xmm6
  }
  if ( sheetIndex )
  {
    __asm { vxorps  xmm3, xmm4, cs:__xmm@80000000800000008000000080000000 }
    _EDX = sheetIndex & 1;
    __asm { vmovd   xmm0, edx }
    _EAX = 0;
    __asm
    {
      vmovd   xmm1, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm4, xmm3, xmm4, xmm2
      vshufps xmm4, xmm4, xmm4, 0
      vmulps  xmm0, xmm4, xmm5
      vaddps  xmm3, xmm0, xmmword ptr [rbx]
    }
  }
  else
  {
    __asm { vmovups xmm3, xmmword ptr [rbx] }
  }
  __asm
  {
    vbroadcastss xmm1, dword ptr [rbx+40h]
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  entryCount = atlasData->entryCount;
  __asm
  {
    vmulps  xmm2, xmm7, xmm1
    vmovups xmm1, xmmword ptr [rbx+60h]
    vmulps  xmm11, xmm1, xmmword ptr [rbx+30h]
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vsubps  xmm12, xmm3, xmm2
    vaddps  xmm13, xmm3, xmm2
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0FFh
    vpor    xmm1, xmm0, xmm1
    vmovups xmm0, xmmword ptr [rsp+160h+packedAtlasParams.v+8]
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm1, xmm0, xmm2, 4
    vmovss  xmm0, dword ptr [rbx+78h]; atlasIndex
    vmovups xmmword ptr [rsp+160h+packedAtlasParams.v+8], xmm1
    vmovss  xmm1, dword ptr [rbx+7Ch]; atlasBlend
  }
  FX_PackAtlasParamsAsNorm32W(*(double *)&_XMM0, *(double *)&_XMM1, entryCount, &packedAtlasParams_8);
  __asm
  {
    vblendps xmm14, xmm10, xmmword ptr [rsp+160h+packedAtlasParams.v+8], 0Ch
    vblendps xmm15, xmm9, xmmword ptr [rsp+160h+packedAtlasParams.v+8], 0Ch
  }
  if ( hasAlphaFade )
  {
    __asm
    {
      vmovss  xmm10, [rbp+60h+arg_B8]
      vmovaps xmm7, xmm8
    }
    if ( fadeOut )
    {
      __asm
      {
        vmovss  xmm7, [rbp+60h+arg_B0]
        vucomiss xmm7, xmm6
        vsubss  xmm0, xmm10, [rbp+60h+arg_C0]
        vdivss  xmm0, xmm0, xmm7; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
    }
    v144 = 0;
    v145 = !fadeIn;
    if ( fadeIn )
    {
      __asm
      {
        vmovss  xmm9, [rbp+60h+arg_A8]
        vucomiss xmm9, xmm6
        vmovss  xmm0, [rbp+60h+arg_C8]
        vsubss  xmm1, xmm0, xmm10
        vdivss  xmm0, xmm1, xmm9; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm8; max
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmulss  xmm7, xmm7, xmm0 }
    }
    __asm
    {
      vmovss  xmm0, [rbp+60h+arg_90]; val
      vcomiss xmm0, xmm8
    }
    if ( v144 )
    {
      __asm
      {
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmulss  xmm7, xmm7, xmm0 }
    }
    __asm { vucomiss xmm7, xmm8 }
    if ( !v145 )
    {
      __asm
      {
        vmovups xmm3, cs:__xmm@3f800000000000000000000000000000
        vmovups xmm1, cs:__xmm@000000003f8000003f8000003f800000
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm2, xmm7, xmm0
        vinsertps xmm3, xmm3, xmm2, 0
        vinsertps xmm3, xmm3, xmm2, 10h
        vinsertps xmm3, xmm3, xmm2, 20h ; ' '
        vmulps  xmm0, xmm3, xmmword ptr [rbx+50h]
        vinsertps xmm1, xmm1, xmm2, 30h ; '0'
        vmovups xmmword ptr [rbx+50h], xmm0
        vmulps  xmm11, xmm1, xmm11
      }
    }
  }
  v160 = *vertIndexOffset;
  v161 = *indices;
  LOWORD(outLightmapOffset) = v160;
  __asm { vcvtps2ph xmm7, xmm11, 0 }
  HIWORD(outLightmapOffset) = v160 + 1;
  *v161 = (r_double_index_t)outLightmapOffset;
  LOWORD(outLightmapOffset) = v160 + 2;
  HIWORD(outLightmapOffset) = v160 + 2;
  v161[1] = (r_double_index_t)outLightmapOffset;
  LOWORD(outLightmapOffset) = v160 + 1;
  HIWORD(outLightmapOffset) = v160 + 3;
  v161[2] = (r_double_index_t)outLightmapOffset;
  *indices = v161 + 3;
  *vertIndexOffset += 2;
  __asm
  {
    vmovups xmm1, xmmword ptr [rbx+50h]
    vmovss  xmm6, dword ptr [rbx+70h]
    vmovss  dword ptr [rsp+160h+packedAtlasParams.v+8], xmm1
    vextractps dword ptr [rsp+160h+packedAtlasParams.v+0Ch], xmm1, 1
    vextractps [rsp+160h+var_E8], xmm1, 2
  }
  v165 = Vec3PackR11G11B10F((const vec3_t *)&packedAtlasParams_8);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+74h]; temperatureScale
    vxorps  xmm2, xmm2, xmm2
    vinsertps xmm2, xmm2, dword ptr [rbx+5Ch], 0
    vinsertps xmm2, xmm2, xmm6, 10h
    vcvtps2ph xmm0, xmm2, 0
    vmovss  [rsp+160h+var_10C], xmm0
  }
  outLightmapOffset = v165;
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vmovaps xmm6, xmm7
    vinsertps xmm6, xmm6, xmm0, 10h
    vinsertps xmm6, xmm6, [rsp+160h+var_110], 20h
    vinsertps xmm6, xmm6, [rsp+160h+var_10C], 30h
  }
  v176 = FX_PackParticleVertExtraData(perFrameActiveEmitterIndex, *(double *)&_XMM1);
  _RCX = *vertIter;
  v178 = v176;
  __asm { vmovups xmmword ptr [rcx], xmm13 }
  _RCX = *vertIter;
  __asm { vmovups xmmword ptr [rcx+10h], xmm6 }
  _RCX = *vertIter;
  __asm { vmovups xmmword ptr [rcx+20h], xmm15 }
  (*vertIter)->extraData = v176;
  _RCX = ++*vertIter;
  __asm { vmovups xmmword ptr [rcx], xmm12 }
  _RAX = *vertIter;
  __asm { vmovups xmmword ptr [rax+10h], xmm6 }
  _RAX = *vertIter;
  __asm { vmovups xmmword ptr [rax+20h], xmm14 }
  (*vertIter)->extraData = v178;
  ++*vertIter;
  _R11 = &v201;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
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

