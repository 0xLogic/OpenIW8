/*
==============
ParticleEmitter::GetSystemOwner
==============
*/

const ParticleSystem *__fastcall ParticleEmitter::GetSystemOwner(ParticleEmitter *this)
{
  return ?GetSystemOwner@ParticleEmitter@@QEBAPEBVParticleSystem@@XZ(this);
}

/*
==============
ParticleEmitter::GetWorldPos
==============
*/

void __fastcall ParticleEmitter::GetWorldPos(ParticleEmitter *this, const float4 *posLocal, float4 *posWorld, const ParticleState *rParticleState, const vector4 *rEmitterTransform)
{
  ?GetWorldPos@ParticleEmitter@@QEBAXAEBUfloat4@@AEAU2@AEBVParticleState@@AEBUvector4@@@Z(this, posLocal, posWorld, rParticleState, rEmitterTransform);
}

/*
==============
FX_PackEffectLightingArgsIntoXYZW
==============
*/

void __fastcall FX_PackEffectLightingArgsIntoXYZW(const float4 *colorRgba, const float4 *emissiveIntensity, const float lightingFrac, float4 *outValue)
{
  ?FX_PackEffectLightingArgsIntoXYZW@@YAXAEBUfloat4@@0MAEAU1@@Z(colorRgba, emissiveIntensity, lightingFrac, outValue);
}

/*
==============
FX_GammaToLinear
==============
*/

void __fastcall FX_GammaToLinear(float4 *color)
{
  ?FX_GammaToLinear@@YAXAEAUfloat4@@@Z(color);
}

/*
==============
ParticleEmitter::GetEmitterTransformTranspose
==============
*/

const vector4 *__fastcall ParticleEmitter::GetEmitterTransformTranspose(ParticleEmitter *this, const ParticleState *pParticleState)
{
  return ?GetEmitterTransformTranspose@ParticleEmitter@@QEBAAEBUvector4@@PEBVParticleState@@@Z(this, pParticleState);
}

/*
==============
ParticleEmitter::GetEmitterTransformWithCameraOffset
==============
*/

const vector4 *__fastcall ParticleEmitter::GetEmitterTransformWithCameraOffset(ParticleEmitter *this)
{
  return ?GetEmitterTransformWithCameraOffset@ParticleEmitter@@AEBAAEBUvector4@@XZ(this);
}

/*
==============
ParticleEmitter::GetEmitterDef
==============
*/

const ParticleEmitterDef *__fastcall ParticleEmitter::GetEmitterDef(ParticleEmitter *this)
{
  return ?GetEmitterDef@ParticleEmitter@@QEBAPEBUParticleEmitterDef@@XZ(this);
}

/*
==============
ParticleEmitter::GetEmitterTransformWithCameraOffsetPosOnly
==============
*/

const vector4 *__fastcall ParticleEmitter::GetEmitterTransformWithCameraOffsetPosOnly(ParticleEmitter *this)
{
  return ?GetEmitterTransformWithCameraOffsetPosOnly@ParticleEmitter@@AEBAAEBUvector4@@XZ(this);
}

/*
==============
ParticleEmitter::HandleSpecial3DRotation
==============
*/

void __fastcall ParticleEmitter::HandleSpecial3DRotation(ParticleEmitter *this, bool hasRotation3D, float4 *rotationAngle, bool isSystemBolted, ParticleRelativeVelocityType relativeVelocityType, const float4 *spawnQuat, const vec4_t *emitterTransformQuat, vec4_t *outQuat)
{
  ?HandleSpecial3DRotation@ParticleEmitter@@QEBAX_NUfloat4@@0W4ParticleRelativeVelocityType@@AEBU2@AEBTvec4_t@@AEAT4@@Z(this, hasRotation3D, rotationAngle, isSystemBolted, relativeVelocityType, spawnQuat, emitterTransformQuat, outQuat);
}

/*
==============
ParticleEmitter::GetEmitterPos
==============
*/

const float4 *__fastcall ParticleEmitter::GetEmitterPos(ParticleEmitter *this, const ParticleState *pParticleState)
{
  return ?GetEmitterPos@ParticleEmitter@@QEBAAEBUfloat4@@PEBVParticleState@@@Z(this, pParticleState);
}

/*
==============
ParticleEmitter::GetChildOrientation
==============
*/

void __fastcall ParticleEmitter::GetChildOrientation(ParticleEmitter *this, const float4 *position, const float4 *velocity, const float4 *rotationAngle, bool hasRotation, const vector4 *rEmitterTransform, ParticleUseOrientationOptions useOrientationOptions, bool useLegacyOrientationOptions, vector4 *outParticleTransform)
{
  ?GetChildOrientation@ParticleEmitter@@QEBAXAEBUfloat4@@00_NAEBUvector4@@W4ParticleUseOrientationOptions@@1AEAU3@@Z(this, position, velocity, rotationAngle, hasRotation, rEmitterTransform, useOrientationOptions, useLegacyOrientationOptions, outParticleTransform);
}

/*
==============
ParticleEmitter::GetEmitterTransform
==============
*/

const vector4 *__fastcall ParticleEmitter::GetEmitterTransform(ParticleEmitter *this, const ParticleState *pParticleState)
{
  return ?GetEmitterTransform@ParticleEmitter@@QEBAAEBUvector4@@PEBVParticleState@@@Z(this, pParticleState);
}

/*
==============
ParticleEmitter::AddModelToScene
==============
*/

void __fastcall ParticleEmitter::AddModelToScene(ParticleEmitter *this, const XModel *pModel, GfxScaledPlacement *placement, const float4 *packedColorAndEmissive, bool hasPackedColorOrEmissive, unsigned int renderFlags)
{
  ?AddModelToScene@ParticleEmitter@@QEAAXPEBUXModel@@PEAUGfxScaledPlacement@@AEBUfloat4@@_NI@Z(this, pModel, placement, packedColorAndEmissive, hasPackedColorOrEmissive, renderFlags);
}

/*
==============
ParticleEmitter::AddModelToScene
==============
*/
void ParticleEmitter::AddModelToScene(ParticleEmitter *this, const XModel *pModel, GfxScaledPlacement *placement, const float4 *packedColorAndEmissive, bool hasPackedColorOrEmissive, unsigned int renderFlags)
{
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  ParticleSystem *v12; 
  const ParticleSystemDef *v13; 
  ParticleSystem *v14; 
  const ParticleSystemDef *v15; 
  float v16; 
  float v17; 
  ParticleSystem *v18; 
  const ParticleSystemDef *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  ParticleSystem *v26; 
  const ParticleSystemDef *v27; 
  base_vec4_t<unsigned int> scriptablePackedColorEmissive; 

  if ( !pModel )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 704, ASSERT_TYPE_ASSERT, "(pModel)", "%s\n\tVFX ASSERT for effect: %s\n", "pModel", Def->name) )
      __debugbreak();
  }
  if ( !placement )
  {
    v12 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    v13 = ParticleSystem::GetDef(v12);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 705, ASSERT_TYPE_ASSERT, "(placement)", "%s\n\tVFX ASSERT for effect: %s\n", "placement", v13->name) )
      __debugbreak();
  }
  if ( placement->scale <= 0.0 )
  {
    v14 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    v15 = ParticleSystem::GetDef(v14);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 706, ASSERT_TYPE_ASSERT, "(placement->scale > 0.0f)", "%s\n\tVFX ASSERT for effect: %s\n", "placement->scale > 0.0f", v15->name) )
      __debugbreak();
  }
  v16 = (float)((float)((float)(placement->base.quat.v[0] * placement->base.quat.v[0]) + (float)(placement->base.quat.v[1] * placement->base.quat.v[1])) + (float)(placement->base.quat.v[2] * placement->base.quat.v[2])) + (float)(placement->base.quat.v[3] * placement->base.quat.v[3]);
  LODWORD(v17) = COERCE_UNSIGNED_INT(v16 - 1.0) & _xmm;
  if ( v17 >= 0.0040000002 )
  {
    v18 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    v19 = ParticleSystem::GetDef(v18);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 711, ASSERT_TYPE_ASSERT, "(diff < (4 * 0.001f))", "%s\n\tVFX ASSERT for effect: %s\n", "diff < (4 * 0.001f)", v19->name) )
      __debugbreak();
  }
  if ( v17 < 0.0020000001 )
  {
    v21 = placement->base.quat.v[3];
  }
  else
  {
    v20 = 1.0 / fsqrt(v16);
    placement->base.quat.v[0] = v20 * placement->base.quat.v[0];
    placement->base.quat.v[1] = v20 * placement->base.quat.v[1];
    placement->base.quat.v[2] = v20 * placement->base.quat.v[2];
    v21 = v20 * placement->base.quat.v[3];
    placement->base.quat.v[3] = v21;
  }
  v22 = placement->base.quat.v[1];
  v23 = placement->base.quat.v[0];
  v24 = placement->base.quat.v[2];
  v25 = (float)((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24)) + (float)(v21 * v21);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 719, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( placement->base.quat ) )", "(%g, %g, %g, %g) len: %g", v23, v22, v24, v21, fsqrt(v25)) )
    __debugbreak();
  scriptablePackedColorEmissive = (base_vec4_t<unsigned int>)packedColorAndEmissive->v;
  if ( particle_show_transient_warnings->current.enabled )
  {
    if ( !pModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( (pModel->flags & 0x8000) != 0 )
    {
      v26 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
      v27 = ParticleSystem::GetDef(v26);
      R_WarnOncePerFrame(R_WARN_VFX_MODEL_NOT_LOADED, pModel->name, v27->name);
    }
  }
  if ( R_FilterXModelIntoScene(pModel, placement, renderFlags, &scriptablePackedColorEmissive, hasPackedColorOrEmissive, this->m_pSystemOwner->m_localClientNum) )
  {
    if ( (((_BYTE)this - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numParticlesRendered) )
      __debugbreak();
    _InterlockedIncrement(&this->m_numParticlesRendered);
  }
}

/*
==============
FX_PackEffectLightingArgsIntoXYZW
==============
*/
void FX_PackEffectLightingArgsIntoXYZW(const float4 *colorRgba, const float4 *emissiveIntensity, const float lightingFrac, float4 *outValue)
{
  vec3_t vec; 

  _XMM1 = emissiveIntensity->v;
  _XMM0 = colorRgba->v;
  LODWORD(vec.v[0]) = *(const float4 *)emissiveIntensity->v.m128_f32;
  __asm
  {
    vextractps dword ptr [rsp+68h+vec+4], xmm1, 1
    vextractps dword ptr [rsp+68h+vec+8], xmm1, 2
    vcvtps2ph xmm7, xmm0, 0
  }
  _XMM2 = 0i64;
  __asm { vinsertps xmm2, xmm2, dword ptr [rbx+0Ch], 0 }
  Vec3PackR11G11B10F(&vec);
  __asm
  {
    vinsertps xmm2, xmm2, xmm6, 10h
    vcvtps2ph xmm0, xmm2, 0
  }
  _mm_shuffle_ps(_XMM7, _XMM7, 85);
  _XMM1 = _XMM7;
  __asm
  {
    vinsertps xmm1, xmm1, xmm0, 10h
    vinsertps xmm1, xmm1, [rsp+68h+var_44], 20h
    vinsertps xmm1, xmm1, [rsp+68h+var_48], 30h
  }
  *outValue = (float4)_XMM1.v;
}

/*
==============
ParticleEmitter::GetSystemOwner
==============
*/
const ParticleSystem *ParticleEmitter::GetSystemOwner(ParticleEmitter *this)
{
  if ( this->m_pSystemOwner )
    return this->m_pSystemOwner;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 204, ASSERT_TYPE_ASSERT, "(m_pSystemOwner)", (const char *)&queryFormat, "m_pSystemOwner") )
    __debugbreak();
  return this->m_pSystemOwner;
}

/*
==============
FX_GammaToLinear
==============
*/
void FX_GammaToLinear(float4 *color)
{
  __m128 v; 
  float v3; 
  float v4; 
  __m128 v7; 

  v = color->v;
  v7 = color->v;
  if ( COERCE_FLOAT(*color) > 0.039280001 )
    v3 = powf_0((float)(v.m128_f32[0] * 0.94786733) + 0.052132703, 2.4000001);
  else
    v3 = v.m128_f32[0] * 0.077399381;
  v7.m128_f32[0] = v3;
  if ( v7.m128_f32[1] > 0.039280001 )
    v4 = powf_0((float)(v7.m128_f32[1] * 0.94786733) + 0.052132703, 2.4000001);
  else
    v4 = v7.m128_f32[1] * 0.077399381;
  v7.m128_f32[1] = v4;
  if ( v7.m128_f32[2] > 0.039280001 )
    powf_0((float)(v7.m128_f32[2] * 0.94786733) + 0.052132703, 2.4000001);
  _XMM1 = v7;
  __asm { vinsertps xmm1, xmm1, xmm0, 20h ; ' ' }
  *color = (float4)_XMM1.v;
}

/*
==============
ParticleEmitter::GetChildOrientation
==============
*/
void ParticleEmitter::GetChildOrientation(ParticleEmitter *this, const float4 *position, const float4 *velocity, const float4 *rotationAngle, bool hasRotation, const vector4 *rEmitterTransform, ParticleUseOrientationOptions useOrientationOptions, bool useLegacyOrientationOptions, vector4 *outParticleTransform)
{
  __m128 v; 
  float4 v10; 
  float4 v11; 
  __int64 v12; 
  __m256i v13; 
  __m128 v14; 
  const float4 *v15; 
  vector3 *v16; 
  __m128 v17; 
  const vector4 *v18; 
  __m256i v19; 
  __m256i v20; 
  float4 v21; 
  float4 v22; 
  vector4 result; 

  if ( useLegacyOrientationOptions && hasRotation )
  {
    v12 = (unsigned __int8)useOrientationOptions;
    if ( useOrientationOptions )
      v12 = 1i64;
  }
  else
  {
    v12 = (unsigned __int8)useOrientationOptions;
  }
  switch ( (char)v12 )
  {
    case 1:
      outParticleTransform->x = (float4)g_1000.v;
      outParticleTransform->y = (float4)g_0100.v;
      outParticleTransform->z = (float4)g_0010.v;
      v = g_0001.v;
      outParticleTransform->w = (float4)g_0001.v;
      goto LABEL_10;
    case 2:
      result = *rEmitterTransform;
      v13 = *(__m256i *)result.z.v.m128_f32;
      *(__m256i *)outParticleTransform->x.v.m128_f32 = *(__m256i *)result.x.v.m128_f32;
      *(__m256i *)outParticleTransform->z.v.m128_f32 = v13;
LABEL_10:
      if ( hasRotation )
      {
        v14 = rotationAngle->v;
        Float4RadianToQuat((float4 *)v12, (const float4 *)hasRotation);
        Float4UnitQuatToAxis(v16, v15);
        result.x.v = v14;
        v17 = g_unit.v;
        result.y.v = v;
        result.w = (float4)g_unit.v;
        result.z = (float4)v10.v;
        Float4x4Mul(&result, outParticleTransform, v18);
        result.x.v = v17;
        result.y.v = v;
        result.w = (float4)v11.v;
        result.z = (float4)v10.v;
        v19 = *(__m256i *)result.z.v.m128_f32;
        *(__m256i *)outParticleTransform->x.v.m128_f32 = *(__m256i *)result.x.v.m128_f32;
        *(__m256i *)outParticleTransform->z.v.m128_f32 = v19;
      }
      break;
    case 3:
      Particle_GenerateMatrixFromLookAt(velocity, outParticleTransform);
      break;
    case 4:
      Particle_GenerateMatrixFromLookAt(velocity, outParticleTransform);
      v21.v = (__m128)outParticleTransform->y;
      outParticleTransform->y.v = _mm128_sub_ps((__m128)0i64, outParticleTransform->x.v);
      outParticleTransform->x = (float4)v21.v;
      Particle_AssertFloat4IsNormalized(&outParticleTransform->x);
      Particle_AssertFloat4IsNormalized(&outParticleTransform->y);
      Particle_AssertFloat4IsNormalized(&outParticleTransform->z);
      break;
    case 5:
      Particle_GenerateMatrixFromLookAt(velocity, outParticleTransform);
      v22.v = (__m128)outParticleTransform->y;
      outParticleTransform->y.v = _mm128_sub_ps((__m128)0i64, outParticleTransform->z.v);
      outParticleTransform->z = (float4)v22.v;
      Particle_AssertFloat4IsNormalized(&outParticleTransform->x);
      Particle_AssertFloat4IsNormalized(&outParticleTransform->y);
      Particle_AssertFloat4IsNormalized(&outParticleTransform->z);
      break;
    case 6:
      *(__m256i *)result.x.v.m128_f32 = *(__m256i *)rEmitterTransform->x.v.m128_f32;
      v20 = *(__m256i *)rEmitterTransform->z.v.m128_f32;
      *(__m256i *)outParticleTransform->x.v.m128_f32 = *(__m256i *)result.x.v.m128_f32;
      *(__m256i *)outParticleTransform->z.v.m128_f32 = v20;
      break;
    default:
      outParticleTransform->x = (float4)g_1000.v;
      outParticleTransform->y = (float4)g_0100.v;
      outParticleTransform->z = (float4)g_0010.v;
      outParticleTransform->w = (float4)g_0001.v;
      break;
  }
}

/*
==============
ParticleEmitter::GetEmitterDef
==============
*/
const ParticleEmitterDef *ParticleEmitter::GetEmitterDef(ParticleEmitter *this)
{
  ParticleSystem *SystemOwner; 
  const ParticleSystemDef *Def; 
  __int64 v4; 
  __int64 v6; 

  SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
  Def = ParticleSystem::GetDef(SystemOwner);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 171, ASSERT_TYPE_ASSERT, "(pSystemDef)", (const char *)&queryFormat, "pSystemDef") )
    __debugbreak();
  if ( !Def->emitterDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 172, ASSERT_TYPE_ASSERT, "(pSystemDef->emitterDefs)", (const char *)&queryFormat, "pSystemDef->emitterDefs") )
    __debugbreak();
  if ( (unsigned int)this->m_emitterIndex >= Def->numEmitters )
  {
    LODWORD(v6) = this->m_emitterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( m_emitterIndex ) < (unsigned)( pSystemDef->numEmitters )", "m_emitterIndex doesn't index pSystemDef->numEmitters\n\t%i not in [0, %i)", v6, Def->numEmitters) )
      __debugbreak();
  }
  v4 = (__int64)&Def->emitterDefs[this->m_emitterIndex];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 176, ASSERT_TYPE_ASSERT, "(pEmitterDef)", (const char *)&queryFormat, "pEmitterDef") )
    __debugbreak();
  return (const ParticleEmitterDef *)v4;
}

/*
==============
ParticleEmitter::GetEmitterTransform
==============
*/
const ParticleSystem *ParticleEmitter::GetEmitterTransform(ParticleEmitter *this, const ParticleState *pParticleState)
{
  unsigned __int64 flags; 
  char v3; 
  bool v4; 
  __int64 m_localClientNum; 

  flags = pParticleState->m_pStateDef->flags;
  v3 = (unsigned __int8)flags >> 1;
  v4 = (flags & 0x10000000) != 0;
  if ( (v3 & 1) == 0 && !v4 )
    return ParticleEmitter::GetSystemOwner(this);
  m_localClientNum = this->m_pSystemOwner->m_localClientNum;
  if ( v4 )
  {
    if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, 2) )
      __debugbreak();
    return (const ParticleSystem *)&g_particleManager[m_localClientNum].m_cameraTransformPosOnly;
  }
  else
  {
    if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, 2) )
      __debugbreak();
    return (const ParticleSystem *)&g_particleManager[m_localClientNum].m_cameraTransform;
  }
}

/*
==============
ParticleEmitter::GetWorldPos
==============
*/
void ParticleEmitter::GetWorldPos(ParticleEmitter *this, const float4 *posLocal, float4 *posWorld, const ParticleState *rParticleState, const vector4 *rEmitterTransform)
{
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  __m128 v; 

  m_pModuleInitRelativeVelocity = rParticleState->m_pModuleInitRelativeVelocity;
  if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
  {
    *posWorld = (float4)posLocal->v;
  }
  else
  {
    v = posLocal->v;
    posWorld->v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 0), rEmitterTransform->x.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 85), rEmitterTransform->y.v), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 170), rEmitterTransform->z.v), rEmitterTransform->w.v)));
  }
  if ( (rParticleState->m_pStateDef->flags & 0x10000000) != 0 )
    posWorld->v = _mm128_add_ps(ParticleEmitter::GetSystemOwner(this)->m_systemTransform.w.v, posWorld->v);
}

/*
==============
ParticleEmitter::HandleSpecial3DRotation
==============
*/
void ParticleEmitter::HandleSpecial3DRotation(ParticleEmitter *this, const float4 *hasRotation3D, float4 *rotationAngle, bool isSystemBolted, ParticleRelativeVelocityType relativeVelocityType, const float4 *spawnQuat, const vec4_t *emitterTransformQuat, vec4_t *outQuat)
{
  __m128 v; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  __m128 v17; 

  if ( (_BYTE)hasRotation3D )
  {
    v = rotationAngle->v;
    Float4RadianToQuat((float4 *)spawnQuat, hasRotation3D);
    v17 = v;
    if ( &v17 == (__m128 *)outQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    if ( emitterTransformQuat == outQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
      __debugbreak();
    v9 = v17.m128_f32[3];
    v10 = v17.m128_f32[0];
    v11 = v17.m128_f32[2];
    v12 = v17.m128_f32[1];
    outQuat->v[0] = (float)((float)((float)(v17.m128_f32[3] * emitterTransformQuat->v[0]) + (float)(v17.m128_f32[0] * emitterTransformQuat->v[3])) + (float)(v17.m128_f32[2] * emitterTransformQuat->v[1])) - (float)(v17.m128_f32[1] * emitterTransformQuat->v[2]);
    outQuat->v[1] = (float)((float)((float)(v12 * emitterTransformQuat->v[3]) - (float)(v11 * emitterTransformQuat->v[0])) + (float)(v9 * emitterTransformQuat->v[1])) + (float)(v10 * emitterTransformQuat->v[2]);
    outQuat->v[2] = (float)((float)((float)(v12 * emitterTransformQuat->v[0]) + (float)(v11 * emitterTransformQuat->v[3])) - (float)(v10 * emitterTransformQuat->v[1])) + (float)(v9 * emitterTransformQuat->v[2]);
    outQuat->v[3] = (float)((float)((float)(v9 * emitterTransformQuat->v[3]) - (float)(v10 * emitterTransformQuat->v[0])) - (float)(v12 * emitterTransformQuat->v[1])) - (float)(v11 * emitterTransformQuat->v[2]);
  }
  else if ( relativeVelocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN || relativeVelocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO || isSystemBolted && relativeVelocityType != PARTICLE_RELATIVE_VELOCITY_TYPE_COUNT )
  {
    *outQuat = (vec4_t)spawnQuat->v;
  }
  v13 = outQuat->v[1];
  v14 = outQuat->v[0];
  v15 = outQuat->v[2];
  v16 = outQuat->v[3];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15)) + (float)(v16 * v16)) - 1.0) & _xmm) >= 0.0040000002 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 698, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( outQuat ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( outQuat )", v14, v13, v15, v16) )
    __debugbreak();
}

/*
==============
ParticleEmitter::GetEmitterPos
==============
*/
float4 *ParticleEmitter::GetEmitterPos(ParticleEmitter *this, const ParticleState *pParticleState)
{
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 210, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  return &ParticleEmitter::GetEmitterTransform(this, pParticleState)->w;
}

/*
==============
ParticleEmitter::GetEmitterTransformTranspose
==============
*/
vector4 *ParticleEmitter::GetEmitterTransformTranspose(ParticleEmitter *this, const ParticleState *pParticleState)
{
  unsigned __int64 flags; 
  char v3; 
  bool v4; 
  __int64 m_localClientNum; 

  flags = pParticleState->m_pStateDef->flags;
  v3 = (unsigned __int8)flags >> 1;
  v4 = (flags & 0x10000000) != 0;
  if ( (v3 & 1) == 0 && !v4 )
    return &ParticleEmitter::GetSystemOwner(this)->m_systemTransformTranspose;
  m_localClientNum = this->m_pSystemOwner->m_localClientNum;
  if ( v4 )
  {
    if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, 2) )
      __debugbreak();
    return &g_particleManager[m_localClientNum].m_cameraTransformPosOnlyTranspose;
  }
  else
  {
    if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", m_localClientNum, 2) )
      __debugbreak();
    return &g_particleManager[m_localClientNum].m_cameraTransformTranspose;
  }
}

/*
==============
ParticleEmitter::GetEmitterTransformWithCameraOffset
==============
*/
vector4 *ParticleEmitter::GetEmitterTransformWithCameraOffset(ParticleEmitter *this)
{
  __int64 m_localClientNum; 

  m_localClientNum = this->m_pSystemOwner->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_pSystemOwner->m_localClientNum, 2) )
    __debugbreak();
  return &g_particleManager[m_localClientNum].m_cameraTransform;
}

/*
==============
ParticleEmitter::GetEmitterTransformWithCameraOffsetPosOnly
==============
*/
vector4 *ParticleEmitter::GetEmitterTransformWithCameraOffsetPosOnly(ParticleEmitter *this)
{
  __int64 m_localClientNum; 

  m_localClientNum = this->m_pSystemOwner->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_pSystemOwner->m_localClientNum, 2) )
    __debugbreak();
  return &g_particleManager[m_localClientNum].m_cameraTransformPosOnly;
}

