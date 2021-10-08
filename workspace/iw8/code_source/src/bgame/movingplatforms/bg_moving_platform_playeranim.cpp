/*
==============
BGMovingPlatformPlayerAnim::PlayerAnimCachePosition
==============
*/

void __fastcall BGMovingPlatformPlayerAnim::PlayerAnimCachePosition(BGMovingPlatformPlayerAnim *this, const entityState_t *es, lerpFrame_t *lf, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles)
{
  ?PlayerAnimCachePosition@BGMovingPlatformPlayerAnim@@QEAAXPEBUentityState_t@@PEAUlerpFrame_t@@AEBTvec3_t@@2@Z(this, es, lf, movingPlatformOrigin, movingPlatformAngles);
}

/*
==============
BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation
==============
*/

void __fastcall BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation(BGMovingPlatformPlayerAnim *this, const entityState_t *es, const vec3_t *movingPlatformAngles, lerpFrame_t *lf, vec3_t *outAngleDela)
{
  ?PlayerAnimApplyRotation@BGMovingPlatformPlayerAnim@@QEAAXPEBUentityState_t@@AEBTvec3_t@@PEAUlerpFrame_t@@AEAT3@@Z(this, es, movingPlatformAngles, lf, outAngleDela);
}

/*
==============
BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation
==============
*/
void BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation(BGMovingPlatformPlayerAnim *this, const entityState_t *es, const vec3_t *movingPlatformAngles, lerpFrame_t *lf, vec3_t *outAngleDela)
{
  _RSI = lf;
  _RDI = movingPlatformAngles;
  if ( BGMovingPlatforms::IsEntityOnMovingPlatform(es) && this->m_originValid )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, dword ptr [rbx+0Ch]
    }
    _RAX = outAngleDela;
    __asm
    {
      vmovss  dword ptr [rax], xmm1
      vmovss  xmm0, dword ptr [rdi+4]
      vsubss  xmm2, xmm0, dword ptr [rbx+10h]
      vmovss  dword ptr [rax+4], xmm2
      vmovss  xmm1, dword ptr [rdi+8]
      vsubss  xmm0, xmm1, dword ptr [rbx+14h]
      vmovss  dword ptr [rax+8], xmm0
      vaddss  xmm1, xmm2, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
  }
  else
  {
    *(_QWORD *)outAngleDela->v = 0i64;
    outAngleDela->v[2] = 0.0;
  }
}

/*
==============
BGMovingPlatformPlayerAnim::PlayerAnimCachePosition
==============
*/
void BGMovingPlatformPlayerAnim::PlayerAnimCachePosition(BGMovingPlatformPlayerAnim *this, const entityState_t *es, lerpFrame_t *lf, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles)
{
  _RBX = this;
  if ( BGMovingPlatforms::IsEntityOnMovingPlatform(es) )
  {
    _RCX = movingPlatformAngles;
    _RBX->m_originValid = 1;
    _RBX->m_prevPlatformOrigin.v[0] = movingPlatformOrigin->v[0];
    _RBX->m_prevPlatformOrigin.v[1] = movingPlatformOrigin->v[1];
    _RBX->m_prevPlatformOrigin.v[2] = movingPlatformOrigin->v[2];
    *(_QWORD *)_RBX->m_prevPlatformAngles.v = *(_QWORD *)movingPlatformAngles->v;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+8]
      vmovss  dword ptr [rbx+14h], xmm0
    }
  }
  else
  {
    _RBX->m_originValid = 0;
    *(_QWORD *)_RBX->m_prevPlatformOrigin.v = 0i64;
    *(_QWORD *)&_RBX->m_prevPlatformOrigin.z = 0i64;
    _RBX->m_prevPlatformAngles.v[1] = 0.0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbx+14h], xmm0
    }
  }
}

