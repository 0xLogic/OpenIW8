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

void __fastcall ParticleSystem::SetSystemOrientation(ParticleSystem *this, const float4 *systemOrientationQuat, double a3)
{
  float4 v3; 
  __m128 v; 
  float4 v6; 
  float4 v7; 
  float4 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m256i v13; 
  float4 normal[2]; 
  float4 v15[2]; 

  v = systemOrientationQuat->v;
  Float4UnitQuatToAxis(&this->m_systemTransform, systemOrientationQuat);
  normal[1] = (float4)v3.v;
  normal[0] = (float4)v;
  v15[0] = *(float4 *)&a3;
  Particle_AssertFloat4IsNormalized(normal);
  Particle_AssertFloat4IsNormalized(&normal[1]);
  Particle_AssertFloat4IsNormalized(v15);
  v6.v = (__m128)normal[0];
  v7.v = (__m128)normal[1];
  v8.v = (__m128)v15[0];
  v9 = _mm_shuffle_ps(v15[0].v, this->m_systemTransform.w.v, 68);
  v10 = _mm_shuffle_ps(normal[0].v, normal[1].v, 68);
  normal[1].v = _mm_shuffle_ps(v10, v9, 221);
  normal[0].v = _mm_shuffle_ps(v10, v9, 136);
  this->m_systemTransform.y = (float4)v7.v;
  v11 = _mm_shuffle_ps(v6.v, v7.v, 238);
  this->m_systemTransform.z = (float4)v8.v;
  v12 = _mm_shuffle_ps(v8.v, this->m_systemTransform.w.v, 238);
  v15[0].v = _mm_shuffle_ps(v11, v12, 136);
  v15[1].v = _mm_shuffle_ps(v11, v12, 221);
  v13 = *(__m256i *)v15[0].v.m128_f32;
  *(__m256i *)this->m_systemTransformTranspose.x.v.m128_f32 = *(__m256i *)normal[0].v.m128_f32;
  *(__m256i *)this->m_systemTransformTranspose.z.v.m128_f32 = v13;
  this->m_systemTransform.x = (float4)v6.v;
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
  float4 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m256i v9; 
  __m256i v10; 

  Particle_AssertFloat4IsNormalized(&systemTransform->x);
  Particle_AssertFloat4IsNormalized(&systemTransform->y);
  Particle_AssertFloat4IsNormalized(&systemTransform->z);
  this->m_systemTransform = *systemTransform;
  v4.v = (__m128)this->m_systemTransform.z;
  v5 = _mm_shuffle_ps(v4.v, this->m_systemTransform.w.v, 68);
  v6 = _mm_shuffle_ps(v4.v, this->m_systemTransform.w.v, 238);
  v7 = _mm_shuffle_ps(this->m_systemTransform.x.v, this->m_systemTransform.y.v, 68);
  v8 = _mm_shuffle_ps(this->m_systemTransform.x.v, this->m_systemTransform.y.v, 238);
  *(__m128 *)&v9.m256i_u64[2] = _mm_shuffle_ps(v7, v5, 221);
  *(__m128 *)v9.m256i_i8 = _mm_shuffle_ps(v7, v5, 136);
  *(__m128 *)v10.m256i_i8 = _mm_shuffle_ps(v8, v6, 136);
  *(__m128 *)&v10.m256i_u64[2] = _mm_shuffle_ps(v8, v6, 221);
  *(__m256i *)this->m_systemTransformTranspose.x.v.m128_f32 = v9;
  *(__m256i *)this->m_systemTransformTranspose.z.v.m128_f32 = v10;
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
  __m128 v; 
  float4 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m256i v14; 
  __m256i v15; 

  Particle_AssertFloat4IsNormalized(&systemOrientationMat->x);
  Particle_AssertFloat4IsNormalized(&systemOrientationMat->y);
  Particle_AssertFloat4IsNormalized(&systemOrientationMat->z);
  this->m_systemTransform.x = systemOrientationMat->x;
  v = systemOrientationMat->y.v;
  v7.v = (__m128)this->m_systemTransform.x;
  v8 = _mm_shuffle_ps(this->m_systemTransform.x.v, v, 68);
  this->m_systemTransform.y.v = v;
  v9 = systemOrientationMat->z.v;
  v10 = _mm_shuffle_ps(v7.v, v, 238);
  this->m_systemTransform.z.v = v9;
  v11 = systemPos->v;
  v12 = _mm_shuffle_ps(v9, systemPos->v, 68);
  v13 = _mm_shuffle_ps(v9, systemPos->v, 238);
  *(__m128 *)&v14.m256i_u64[2] = _mm_shuffle_ps(v8, v12, 221);
  *(__m128 *)v14.m256i_i8 = _mm_shuffle_ps(v8, v12, 136);
  *(__m128 *)v15.m256i_i8 = _mm_shuffle_ps(v10, v13, 136);
  *(__m128 *)&v15.m256i_u64[2] = _mm_shuffle_ps(v10, v13, 221);
  *(__m256i *)this->m_systemTransformTranspose.x.v.m128_f32 = v14;
  *(__m256i *)this->m_systemTransformTranspose.z.v.m128_f32 = v15;
  this->m_systemTransform.w.v = v11;
}

