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
  ParticleSystem *v18; 
  const ParticleSystemDef *v19; 
  ParticleSystem *v21; 
  const ParticleSystemDef *v22; 
  ParticleSystem *v37; 
  const ParticleSystemDef *v38; 
  ParticleSystem *v65; 
  const ParticleSystemDef *v66; 
  double localClientNum; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  base_vec4_t<unsigned int> scriptablePackedColorEmissive; 
  char v78; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RBP = packedColorAndEmissive;
  _RBX = placement;
  if ( !pModel )
  {
    SystemOwner = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    Def = ParticleSystem::GetDef(SystemOwner);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 704, ASSERT_TYPE_ASSERT, "(pModel)", "%s\n\tVFX ASSERT for effect: %s\n", "pModel", Def->name) )
      __debugbreak();
  }
  if ( !_RBX )
  {
    v18 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
    v19 = ParticleSystem::GetDef(v18);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 705, ASSERT_TYPE_ASSERT, "(placement)", "%s\n\tVFX ASSERT for effect: %s\n", "placement", v19->name) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+1Ch]
  }
  v21 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
  v22 = ParticleSystem::GetDef(v21);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 706, ASSERT_TYPE_ASSERT, "(placement->scale > 0.0f)", "%s\n\tVFX ASSERT for effect: %s\n", "placement->scale > 0.0f", v22->name) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmovss  xmm4, dword ptr [rbx+0Ch]
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm7, xmm3, xmm0
    vsubss  xmm6, xmm7, xmm9
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm6, cs:__real@3b83126f
  }
  v37 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
  v38 = ParticleSystem::GetDef(v37);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 711, ASSERT_TYPE_ASSERT, "(diff < (4 * 0.001f))", "%s\n\tVFX ASSERT for effect: %s\n", "diff < (4 * 0.001f)", v38->name) )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, cs:__real@3b03126f
    vcomiss xmm6, xmm5
    vsqrtss xmm0, xmm7, xmm7
    vdivss  xmm2, xmm9, xmm0
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm0
    vmulss  xmm4, xmm2, dword ptr [rbx+0Ch]
    vmovss  dword ptr [rbx+0Ch], xmm4
    vmovss  xmm6, dword ptr [rbx+4]
    vmovss  xmm7, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rbx+8]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm9
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, xmm5
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+0D8h+var_90], xmm1
    vcvtss2sd xmm2, xmm4, xmm4
    vmovsd  [rsp+0D8h+var_98], xmm2
    vcvtss2sd xmm3, xmm8, xmm8
    vmovsd  [rsp+0D8h+var_A0], xmm3
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  [rsp+0D8h+var_A8], xmm0
    vcvtss2sd xmm4, xmm7, xmm7
    vmovsd  qword ptr [rsp+0D8h+localClientNum], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 719, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( placement->base.quat ) )", "(%g, %g, %g, %g) len: %g", localClientNum, v73, v74, v75, v76) )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovaps xmmword ptr [rsp+0D8h+scriptablePackedColorEmissive], xmm0
  }
  if ( particle_show_transient_warnings->current.enabled )
  {
    if ( !pModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( (pModel->flags & 0x8000) != 0 )
    {
      v65 = (ParticleSystem *)ParticleEmitter::GetSystemOwner(this);
      v66 = ParticleSystem::GetDef(v65);
      R_WarnOncePerFrame(R_WARN_VFX_MODEL_NOT_LOADED, pModel->name, v66->name);
    }
  }
  if ( R_FilterXModelIntoScene(pModel, _RBX, renderFlags, &scriptablePackedColorEmissive, hasPackedColorOrEmissive, this->m_pSystemOwner->m_localClientNum) )
  {
    if ( (((_BYTE)this - 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_numParticlesRendered) )
      __debugbreak();
    _InterlockedIncrement(&this->m_numParticlesRendered);
  }
  _R11 = &v78;
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
FX_PackEffectLightingArgsIntoXYZW
==============
*/

void __fastcall FX_PackEffectLightingArgsIntoXYZW(const float4 *colorRgba, const float4 *emissiveIntensity, double lightingFrac, float4 *outValue)
{
  vec3_t vec; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovups xmm1, xmmword ptr [rdx]
    vmovups xmm0, xmmword ptr [rcx]
  }
  _RDI = outValue;
  __asm
  {
    vmovss  dword ptr [rsp+68h+vec], xmm1
    vextractps dword ptr [rsp+68h+vec+4], xmm1, 1
    vextractps dword ptr [rsp+68h+vec+8], xmm1, 2
    vcvtps2ph xmm7, xmm0, 0
    vmovaps xmm6, xmm2
    vxorps  xmm2, xmm2, xmm2
    vinsertps xmm2, xmm2, dword ptr [rbx+0Ch], 0
  }
  Vec3PackR11G11B10F(&vec);
  __asm
  {
    vinsertps xmm2, xmm2, xmm6, 10h
    vcvtps2ph xmm0, xmm2, 0
    vmovss  [rsp+68h+var_48], xmm0
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm0, 10h
    vinsertps xmm1, xmm1, [rsp+68h+var_44], 20h
    vinsertps xmm1, xmm1, [rsp+68h+var_48], 30h
    vmovups xmmword ptr [rdi], xmm1
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
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
  char v1; 
  char v2; 

  v1 = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vcomiss xmm0, cs:__real@3d20e411
  }
  _RBX = color;
  __asm { vmovups [rsp+48h+var_28], xmm0 }
  if ( v2 )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
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
    vmovss  dword ptr [rsp+48h+var_28], xmm0
    vmovss  xmm0, dword ptr [rsp+48h+var_28+4]
    vcomiss xmm0, cs:__real@3d20e411
  }
  if ( v1 | v2 )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
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
    vmovss  dword ptr [rsp+48h+var_28+4], xmm0
    vmovss  xmm0, dword ptr [rsp+48h+var_28+8]
    vcomiss xmm0, cs:__real@3d20e411
  }
  if ( v1 | v2 )
  {
    __asm { vmulss  xmm0, xmm0, cs:__real@3d9e8391 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f72a76f
      vaddss  xmm0, xmm0, cs:__real@3d55891a; X
      vmovss  xmm1, cs:__real@4019999a; Y
    }
    powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  __asm
  {
    vmovups xmm1, [rsp+48h+var_28]
    vinsertps xmm1, xmm1, xmm0, 20h ; ' '
    vmovups xmmword ptr [rbx], xmm1
  }
}

/*
==============
ParticleEmitter::GetChildOrientation
==============
*/
void ParticleEmitter::GetChildOrientation(ParticleEmitter *this, const float4 *position, const float4 *velocity, const float4 *rotationAngle, bool hasRotation, const vector4 *rEmitterTransform, ParticleUseOrientationOptions useOrientationOptions, bool useLegacyOrientationOptions, vector4 *outParticleTransform)
{
  __int64 v14; 
  const float4 *v24; 
  vector3 *v25; 
  const vector4 *v28; 
  vector4 result; 

  _RSI = outParticleTransform;
  if ( useLegacyOrientationOptions && hasRotation )
  {
    v14 = (unsigned __int8)useOrientationOptions;
    if ( useOrientationOptions )
      v14 = 1i64;
  }
  else
  {
    v14 = (unsigned __int8)useOrientationOptions;
  }
  switch ( (char)v14 )
  {
    case 1:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_1000@@3Ufloat4@@B.v; jumptable 00000001427A08CB case 1
        vmovups xmmword ptr [rsi], xmm0
        vmovups xmm1, xmmword ptr cs:?g_0100@@3Ufloat4@@B.v; float4 const g_0100
        vmovups xmmword ptr [rsi+10h], xmm1
        vmovups xmm0, xmmword ptr cs:?g_0010@@3Ufloat4@@B.v; float4 const g_0010
        vmovups xmmword ptr [rsi+20h], xmm0
        vmovups xmm1, xmmword ptr cs:?g_0001@@3Ufloat4@@B.v; float4 const g_0001
        vmovups xmmword ptr [rsi+30h], xmm1
      }
      goto LABEL_10;
    case 2:
      _RAX = rEmitterTransform;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+68h+result.baseclass_0.x.v], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+68h+result.baseclass_0.z.v], ymm0
        vmovups ymm0, ymmword ptr [rsp+68h+result.baseclass_0.x.v]
        vmovups ymm1, ymmword ptr [rsp+68h+result.baseclass_0.z.v]
        vmovups ymmword ptr [rsi], ymm0
        vmovups ymmword ptr [rsi+20h], ymm1
      }
LABEL_10:
      if ( hasRotation )
      {
        __asm { vmovups xmm0, xmmword ptr [r9] }
        Float4RadianToQuat((float4 *)v14, (const float4 *)hasRotation);
        Float4UnitQuatToAxis(v25, v24);
        __asm
        {
          vmovups xmmword ptr [rsp+68h+result.baseclass_0.x.v], xmm0
          vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          vmovups xmmword ptr [rsp+68h+result.baseclass_0.y.v], xmm1
          vmovups ymm3, ymmword ptr [rsp+68h+result.baseclass_0.x.v]
          vmovups ymmword ptr [rsp+68h+result.baseclass_0.x.v], ymm3
          vmovdqa xmmword ptr [rsp+68h+result.w.v], xmm0
          vmovups xmmword ptr [rsp+68h+result.baseclass_0.z.v], xmm2
        }
        Float4x4Mul(&result, outParticleTransform, v28);
        __asm
        {
          vmovups xmmword ptr [rsp+68h+result.baseclass_0.x.v], xmm0
          vmovups xmmword ptr [rsp+68h+result.baseclass_0.y.v], xmm1
          vmovups ymm1, ymmword ptr [rsp+68h+result.baseclass_0.x.v]
          vmovups xmmword ptr [rsp+68h+result.w.v], xmm3
          vmovups xmmword ptr [rsp+68h+result.baseclass_0.z.v], xmm2
          vmovups ymm0, ymmword ptr [rsp+68h+result.baseclass_0.z.v]
          vmovups ymmword ptr [rsi], ymm1
          vmovups ymmword ptr [rsi+20h], ymm0
        }
      }
      break;
    case 3:
      Particle_GenerateMatrixFromLookAt(velocity, outParticleTransform);
      break;
    case 4:
      Particle_GenerateMatrixFromLookAt(velocity, outParticleTransform);
      __asm
      {
        vmovups xmm2, xmmword ptr [rsi+10h]
        vxorps  xmm0, xmm0, xmm0
        vsubps  xmm1, xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsi+10h], xmm1
        vmovups xmmword ptr [rsi], xmm2
      }
      Particle_AssertFloat4IsNormalized(&outParticleTransform->x);
      Particle_AssertFloat4IsNormalized(&outParticleTransform->y);
      Particle_AssertFloat4IsNormalized(&outParticleTransform->z);
      break;
    case 5:
      Particle_GenerateMatrixFromLookAt(velocity, outParticleTransform);
      __asm
      {
        vmovups xmm2, xmmword ptr [rsi+10h]
        vxorps  xmm0, xmm0, xmm0
        vsubps  xmm1, xmm0, xmmword ptr [rsi+20h]
        vmovups xmmword ptr [rsi+10h], xmm1
        vmovups xmmword ptr [rsi+20h], xmm2
      }
      Particle_AssertFloat4IsNormalized(&outParticleTransform->x);
      Particle_AssertFloat4IsNormalized(&outParticleTransform->y);
      Particle_AssertFloat4IsNormalized(&outParticleTransform->z);
      break;
    case 6:
      _RAX = rEmitterTransform;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+68h+result.baseclass_0.x.v], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+68h+result.baseclass_0.z.v], ymm0
        vmovups ymm0, ymmword ptr [rsp+68h+result.baseclass_0.x.v]
        vmovups ymm1, ymmword ptr [rsp+68h+result.baseclass_0.z.v]
        vmovups ymmword ptr [rsi], ymm0
        vmovups ymmword ptr [rsi+20h], ymm1
      }
      break;
    default:
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_1000@@3Ufloat4@@B.v; jumptable 00000001427A08CB default case
        vmovups xmmword ptr [rsi], xmm0
        vmovups xmm1, xmmword ptr cs:?g_0100@@3Ufloat4@@B.v; float4 const g_0100
        vmovups xmmword ptr [rsi+10h], xmm1
        vmovups xmm0, xmmword ptr cs:?g_0010@@3Ufloat4@@B.v; float4 const g_0010
        vmovups xmmword ptr [rsi+20h], xmm0
        vmovups xmm1, xmmword ptr cs:?g_0001@@3Ufloat4@@B.v; float4 const g_0001
        vmovups xmmword ptr [rsi+30h], xmm1
      }
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
void ParticleEmitter::GetWorldPos(ParticleEmitter *this, const float4 *posLocal, float4 *posWorld, const ParticleState *rParticleState)
{
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 

  _RBX = posWorld;
  m_pModuleInitRelativeVelocity = rParticleState->m_pModuleInitRelativeVelocity;
  if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 || ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) != 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovdqu xmmword ptr [rbx], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm3, xmm0, xmm0, 55h ; 'U'
      vshufps xmm4, xmm0, xmm0, 0
      vmulps  xmm0, xmm2, xmmword ptr [rax+20h]
      vaddps  xmm2, xmm0, xmmword ptr [rax+30h]
      vmulps  xmm0, xmm3, xmmword ptr [rax+10h]
      vaddps  xmm1, xmm0, xmm2
      vmulps  xmm0, xmm4, xmmword ptr [rax]
      vaddps  xmm1, xmm0, xmm1
      vmovups xmmword ptr [rbx], xmm1
    }
  }
  if ( (rParticleState->m_pStateDef->flags & 0x10000000) != 0 )
  {
    _RAX = ParticleEmitter::GetSystemOwner(this);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+30h]
      vaddps  xmm0, xmm1, xmmword ptr [rbx]
      vmovups xmmword ptr [rbx], xmm0
    }
  }
}

/*
==============
ParticleEmitter::HandleSpecial3DRotation
==============
*/
void ParticleEmitter::HandleSpecial3DRotation(ParticleEmitter *this, const float4 *hasRotation3D, float4 *rotationAngle, bool isSystemBolted, ParticleRelativeVelocityType relativeVelocityType, const float4 *spawnQuat, const vec4_t *emitterTransformQuat, vec4_t *outQuat)
{
  bool v14; 
  bool v15; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  __int128 v72; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
  }
  _RCX = spawnQuat;
  _RBX = outQuat;
  if ( (_BYTE)hasRotation3D )
  {
    __asm { vmovups xmm0, xmmword ptr [r8] }
    Float4RadianToQuat((float4 *)spawnQuat, hasRotation3D);
    __asm { vmovups [rsp+98h+var_48], xmm0 }
    if ( &v72 == (__int128 *)outQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v14 = emitterTransformQuat < outQuat;
    if ( emitterTransformQuat == outQuat )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out");
      v14 = 0;
      if ( v15 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+98h+var_48+0Ch]
      vmulss  xmm1, xmm6, dword ptr [rdi]
      vmovss  xmm5, dword ptr [rsp+98h+var_48]
      vmulss  xmm0, xmm5, dword ptr [rdi+0Ch]
      vmovss  xmm7, dword ptr [rsp+98h+var_48+8]
      vmovss  xmm4, dword ptr [rsp+98h+var_48+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm7, dword ptr [rdi+4]
      vaddss  xmm1, xmm2, xmm0
      vmulss  xmm0, xmm4, dword ptr [rdi+8]
      vsubss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx], xmm1
      vmulss  xmm2, xmm4, dword ptr [rdi+0Ch]
      vmulss  xmm0, xmm7, dword ptr [rdi]
      vmulss  xmm1, xmm6, dword ptr [rdi+4]
      vsubss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm5, dword ptr [rdi+8]
      vaddss  xmm2, xmm3, xmm1
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm2, xmm4, dword ptr [rdi]
      vmulss  xmm0, xmm7, dword ptr [rdi+0Ch]
      vmulss  xmm1, xmm5, dword ptr [rdi+4]
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm6, dword ptr [rdi+8]
      vsubss  xmm2, xmm3, xmm1
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+8], xmm1
      vmulss  xmm2, xmm6, dword ptr [rdi+0Ch]
      vmulss  xmm0, xmm5, dword ptr [rdi]
      vmulss  xmm1, xmm4, dword ptr [rdi+4]
      vsubss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm7, dword ptr [rdi+8]
      vsubss  xmm2, xmm3, xmm1
      vsubss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+0Ch], xmm1
    }
  }
  else
  {
    v14 = (unsigned int)relativeVelocityType < PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN;
    if ( relativeVelocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN || (v14 = (unsigned int)relativeVelocityType < PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO, relativeVelocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO) || (v14 = 0, isSystemBolted) && (v14 = (unsigned int)relativeVelocityType < PARTICLE_RELATIVE_VELOCITY_TYPE_COUNT, relativeVelocityType != PARTICLE_RELATIVE_VELOCITY_TYPE_COUNT) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx]
        vmovups xmmword ptr [rbx], xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rbx+8]
    vmovss  xmm7, dword ptr [rbx+0Ch]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, cs:__real@3f800000
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b83126f
  }
  if ( !v14 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+98h+var_50], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+98h+var_58], xmm1
      vcvtss2sd xmm2, xmm4, xmm4
      vmovsd  [rsp+98h+var_60], xmm2
      vcvtss2sd xmm3, xmm5, xmm5
      vmovsd  [rsp+98h+var_68], xmm3
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleemitter.h", 698, ASSERT_TYPE_ASSERT, "(Particle_Vec4IsNormalized( outQuat ))", "%s\n\t%g %g %g %g", "Particle_Vec4IsNormalized( outQuat )", v68, v69, v70, v71) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
  }
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

