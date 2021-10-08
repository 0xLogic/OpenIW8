/*
==============
ParticleSystem::GetLoopedFxEnt
==============
*/

unsigned int __fastcall ParticleSystem::GetLoopedFxEnt(ParticleSystem *this)
{
  return ?GetLoopedFxEnt@ParticleSystem@@QEBAIXZ(this);
}

/*
==============
ParticleSystem::GetSystemHandle
==============
*/

ParticleSystemHandle __fastcall ParticleSystem::GetSystemHandle(ParticleSystem *this)
{
  return ?GetSystemHandle@ParticleSystem@@QEBA?AW4ParticleSystemHandle@@XZ(this);
}

/*
==============
ParticleSystem::SetSystemTransform
==============
*/

void __fastcall ParticleSystem::SetSystemTransform(ParticleSystem *this, const vector4 *systemTransform)
{
  ?SetSystemTransform@ParticleSystem@@QEAAXAEBUvector4@@@Z(this, systemTransform);
}

/*
==============
ParticleSystem::SetSystemTransform
==============
*/

void __fastcall ParticleSystem::SetSystemTransform(ParticleSystem *this, const float4 *systemPos, const vector3 *systemOrientationMat)
{
  ?SetSystemTransform@ParticleSystem@@QEAAXAEBUfloat4@@AEBUvector3@@@Z(this, systemPos, systemOrientationMat);
}

/*
==============
ParticleSystem::SetLoopedFxEnt
==============
*/

void __fastcall ParticleSystem::SetLoopedFxEnt(ParticleSystem *this, unsigned int loopedFxEnt)
{
  ?SetLoopedFxEnt@ParticleSystem@@QEAAXI@Z(this, loopedFxEnt);
}

/*
==============
ParticleSystem::GetDef
==============
*/

const ParticleSystemDef *__fastcall ParticleSystem::GetDef(ParticleSystem *this)
{
  return ?GetDef@ParticleSystem@@QEBAPEBUParticleSystemDef@@XZ(this);
}

/*
==============
ParticleSystem::SetSystemOrientation
==============
*/

void __fastcall ParticleSystem::SetSystemOrientation(ParticleSystem *this, const float4 *systemOrientationQuat)
{
  ?SetSystemOrientation@ParticleSystem@@QEAAXAEBUfloat4@@@Z(this, systemOrientationQuat);
}

/*
==============
ParticleSystem::CanUpdate
==============
*/

bool __fastcall ParticleSystem::CanUpdate(ParticleSystem *this)
{
  return ?CanUpdate@ParticleSystem@@QEBA_NXZ(this);
}

/*
==============
Particle_GetGameModeDisableFlag
==============
*/

unsigned int __fastcall Particle_GetGameModeDisableFlag(GameModeType gameMode, bool isHighPlayerCount)
{
  return ?Particle_GetGameModeDisableFlag@@YAIW4GameModeType@@_N@Z(gameMode, isHighPlayerCount);
}

/*
==============
ParticleSystem::GetDef
==============
*/
const ParticleSystemDef *ParticleSystem::GetDef(ParticleSystem *this)
{
  if ( this->m_pSystemDef )
    return this->m_pSystemDef;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 193, ASSERT_TYPE_ASSERT, "(m_pSystemDef)", (const char *)&queryFormat, "m_pSystemDef") )
    __debugbreak();
  return this->m_pSystemDef;
}

/*
==============
ParticleSystem::SetSystemOrientation
==============
*/

void __fastcall ParticleSystem::SetSystemOrientation(ParticleSystem *this, const float4 *systemOrientationQuat, double _XMM2_8)
{
  float4 normal[2]; 
  float4 v21[2]; 

  __asm { vmovups xmm0, xmmword ptr [rdx] }
  _RBX = this;
  Float4UnitQuatToAxis(&this->m_systemTransform, systemOrientationQuat);
  __asm
  {
    vmovups xmmword ptr [rsp+68h+normal.v+10h], xmm1
    vmovups xmmword ptr [rsp+68h+normal.v], xmm0
    vmovups ymm3, ymmword ptr [rsp+68h+normal.v]
    vmovups ymmword ptr [rsp+68h+normal.v], ymm3
    vmovups xmmword ptr [rsp+68h+var_28.v], xmm2
  }
  Particle_AssertFloat4IsNormalized(normal);
  Particle_AssertFloat4IsNormalized(&normal[1]);
  Particle_AssertFloat4IsNormalized(v21);
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+68h+normal.v]
    vmovups xmm3, xmmword ptr [rsp+68h+normal.v+10h]
    vmovups xmm2, xmmword ptr [rsp+68h+var_28.v]
    vshufps xmm1, xmm2, xmmword ptr [rbx+30h], 44h ; 'D'
    vshufps xmm4, xmm5, xmm3, 44h ; 'D'
    vshufps xmm0, xmm4, xmm1, 88h ; 'ˆ'
    vshufps xmm1, xmm4, xmm1, 0DDh ; 'Ý'
    vmovups xmmword ptr [rsp+68h+normal.v+10h], xmm1
    vmovups xmmword ptr [rsp+68h+normal.v], xmm0
    vmovups xmmword ptr [rbx+10h], xmm3
    vshufps xmm3, xmm5, xmm3, 0EEh ; 'î'
    vmovups xmmword ptr [rbx+20h], xmm2
    vshufps xmm2, xmm2, xmmword ptr [rbx+30h], 0EEh ; 'î'
    vshufps xmm0, xmm3, xmm2, 88h ; 'ˆ'
    vshufps xmm1, xmm3, xmm2, 0DDh ; 'Ý'
    vmovups xmmword ptr [rsp+68h+var_28.v], xmm0
    vmovups ymm0, ymmword ptr [rsp+68h+normal.v]
    vmovups xmmword ptr [rsp+68h+var_28.v+10h], xmm1
    vmovups ymm1, ymmword ptr [rsp+68h+var_28.v]
    vmovups ymmword ptr [rbx+40h], ymm0
    vmovups ymmword ptr [rbx+60h], ymm1
    vmovups xmmword ptr [rbx], xmm5
  }
}

/*
==============
ParticleSystem::SetLoopedFxEnt
==============
*/
void ParticleSystem::SetLoopedFxEnt(ParticleSystem *this, unsigned int loopedFxEnt)
{
  if ( loopedFxEnt == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 205, ASSERT_TYPE_ASSERT, "(loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT)", (const char *)&queryFormat, "loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT") )
    __debugbreak();
  this->m_loopedFxEnt = loopedFxEnt;
  this->m_flags |= 0x400000ui64;
}

/*
==============
ParticleSystem::GetSystemHandle
==============
*/
__int64 ParticleSystem::GetSystemHandle(ParticleSystem *this)
{
  if ( this->m_systemHandle )
    return (unsigned int)this->m_systemHandle;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 196, ASSERT_TYPE_ASSERT, "(m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "m_systemHandle != PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  return (unsigned int)this->m_systemHandle;
}

/*
==============
ParticleSystem::GetLoopedFxEnt
==============
*/
__int64 ParticleSystem::GetLoopedFxEnt(ParticleSystem *this)
{
  if ( this->m_loopedFxEnt != -1 )
    return this->m_loopedFxEnt;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 202, ASSERT_TYPE_ASSERT, "(m_loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT)", (const char *)&queryFormat, "m_loopedFxEnt != PARTICLE_SYSTEM_INVALID_LOOPED_FX_ENT") )
    __debugbreak();
  return this->m_loopedFxEnt;
}

/*
==============
ParticleSystem::SetSystemTransform
==============
*/
void ParticleSystem::SetSystemTransform(ParticleSystem *this, const vector4 *systemTransform)
{
  _RDI = this;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = systemTransform;
  Particle_AssertFloat4IsNormalized(&systemTransform->x);
  Particle_AssertFloat4IsNormalized(&_RBX->y);
  Particle_AssertFloat4IsNormalized(&_RBX->z);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm1, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups xmm1, xmmword ptr [rdi+20h]
    vshufps xmm4, xmm1, xmmword ptr [rdi+30h], 44h ; 'D'
    vshufps xmm5, xmm1, xmmword ptr [rdi+30h], 0EEh ; 'î'
    vmovups xmm3, xmmword ptr [rdi]
    vshufps xmm6, xmm3, xmmword ptr [rdi+10h], 44h ; 'D'
    vshufps xmm2, xmm3, xmmword ptr [rdi+10h], 0EEh ; 'î'
    vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
    vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
    vmovaps xmm6, [rsp+78h+var_18]
    vmovups xmmword ptr [rsp+78h+var_58+10h], xmm1
    vmovups xmmword ptr [rsp+78h+var_58], xmm0
    vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
    vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
    vmovups xmmword ptr [rsp+78h+var_38], xmm0
    vmovups ymm0, [rsp+78h+var_58]
    vmovups xmmword ptr [rsp+78h+var_38+10h], xmm1
    vmovups ymm1, [rsp+78h+var_38]
    vmovups ymmword ptr [rdi+40h], ymm0
    vmovups ymmword ptr [rdi+60h], ymm1
  }
}

/*
==============
ParticleSystem::CanUpdate
==============
*/
bool ParticleSystem::CanUpdate(ParticleSystem *this)
{
  ParticleSystemFlags m_flags; 
  bool result; 

  result = 0;
  if ( this->m_isRunning )
  {
    m_flags = this->m_flags;
    if ( (m_flags & 0x30) == 0 && (BYTE2(m_flags) & 1) == 0 )
      return 1;
  }
  return result;
}

/*
==============
Particle_GetGameModeDisableFlag
==============
*/
__int64 Particle_GetGameModeDisableFlag(GameModeType gameMode, bool isHighPlayerCount)
{
  char v3; 
  __int64 result; 

  v3 = gameMode;
  if ( (_BYTE)gameMode != HALF && !BG_GameInterface_GameModeIsOnline(gameMode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlesystem.h", 604, ASSERT_TYPE_ASSERT, "(gameMode == GameModeType::SP || BG_GameInterface_GameModeIsOnline( gameMode ))", (const char *)&queryFormat, "gameMode == GameModeType::SP || BG_GameInterface_GameModeIsOnline( gameMode )") )
    __debugbreak();
  if ( v3 == 2 )
  {
    result = 0x20000i64;
    if ( isHighPlayerCount )
      return 0x40000i64;
  }
  else if ( v3 == 3 )
  {
    return 0x80000i64;
  }
  else
  {
    return 0x10000i64;
  }
  return result;
}

/*
==============
ParticleSystem::SetSystemTransform
==============
*/
void ParticleSystem::SetSystemTransform(ParticleSystem *this, const float4 *systemPos, const vector3 *systemOrientationMat)
{
  _R15 = this;
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RSI = systemOrientationMat;
  _R14 = systemPos;
  Particle_AssertFloat4IsNormalized(&systemOrientationMat->x);
  Particle_AssertFloat4IsNormalized(&_RSI->y);
  Particle_AssertFloat4IsNormalized(&_RSI->z);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovdqu xmmword ptr [r15], xmm0
    vmovups xmm1, xmmword ptr [rsi+10h]
    vmovups xmm3, xmmword ptr [r15]
    vshufps xmm6, xmm3, xmm1, 44h ; 'D'
    vmovdqu xmmword ptr [r15+10h], xmm1
    vmovups xmm0, xmmword ptr [rsi+20h]
    vshufps xmm4, xmm3, xmm1, 0EEh ; 'î'
    vmovdqu xmmword ptr [r15+20h], xmm0
    vmovups xmm5, xmmword ptr [r14]
    vshufps xmm2, xmm0, xmm5, 44h ; 'D'
    vshufps xmm3, xmm0, xmm5, 0EEh ; 'î'
    vshufps xmm0, xmm6, xmm2, 88h ; 'ˆ'
    vshufps xmm1, xmm6, xmm2, 0DDh ; 'Ý'
    vmovaps xmm6, [rsp+78h+var_18]
    vmovups xmmword ptr [rsp+78h+var_58+10h], xmm1
    vmovups xmmword ptr [rsp+78h+var_58], xmm0
    vshufps xmm0, xmm4, xmm3, 88h ; 'ˆ'
    vshufps xmm1, xmm4, xmm3, 0DDh ; 'Ý'
    vmovups xmmword ptr [rsp+78h+var_38], xmm0
    vmovups ymm0, [rsp+78h+var_58]
    vmovups xmmword ptr [rsp+78h+var_38+10h], xmm1
    vmovups ymm1, [rsp+78h+var_38]
    vmovups ymmword ptr [r15+40h], ymm0
    vmovups ymmword ptr [r15+60h], ymm1
    vmovdqu xmmword ptr [r15+30h], xmm5
  }
}

