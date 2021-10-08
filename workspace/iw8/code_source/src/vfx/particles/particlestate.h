/*
==============
ParticleState::CopyPhysicsFXIDToAnotherState
==============
*/

void __fastcall ParticleState::CopyPhysicsFXIDToAnotherState(ParticleState *this, ParticleState *pParticleState, unsigned int fromIndex, unsigned int toIndex)
{
  ?CopyPhysicsFXIDToAnotherState@ParticleState@@QEAAXPEAV1@II@Z(this, pParticleState, fromIndex, toIndex);
}

/*
==============
Particle_TrailData::GetNextIndex
==============
*/

unsigned int __fastcall Particle_TrailData::GetNextIndex(Particle_TrailData *this, unsigned int currIndex)
{
  return ?GetNextIndex@Particle_TrailData@@QEBAII@Z(this, currIndex);
}

/*
==============
ParticleState::GetPhysicsInstanceIDList
==============
*/

const FxPhysics *__fastcall ParticleState::GetPhysicsInstanceIDList(ParticleState *this)
{
  return ?GetPhysicsInstanceIDList@ParticleState@@QEBAPEBUFxPhysics@@XZ(this);
}

/*
==============
ParticleState::CopyImpactDataToAnotherState
==============
*/

void __fastcall ParticleState::CopyImpactDataToAnotherState(ParticleState *this, ParticleState *pParticleState, unsigned int fromIndex, unsigned int toIndex)
{
  ?CopyImpactDataToAnotherState@ParticleState@@QEAAXPEAV1@II@Z(this, pParticleState, fromIndex, toIndex);
}

/*
==============
ParticleState::GetEmitterOwner
==============
*/

const ParticleEmitter *__fastcall ParticleState::GetEmitterOwner(ParticleState *this)
{
  return ?GetEmitterOwner@ParticleState@@QEBAPEBVParticleEmitter@@XZ(this);
}

/*
==============
ParticleState::IsRelativeToEmitterOrigin
==============
*/

bool __fastcall ParticleState::IsRelativeToEmitterOrigin(ParticleState *this)
{
  return ?IsRelativeToEmitterOrigin@ParticleState@@QEBA_NXZ(this);
}

/*
==============
ParticleState::GetTrailDataList
==============
*/

Particle_TrailData *__fastcall ParticleState::GetTrailDataList(ParticleState *this)
{
  return ?GetTrailDataList@ParticleState@@QEBAPEAUParticle_TrailData@@XZ(this);
}

/*
==============
ParticleState::GetOnImpactDataList
==============
*/

Particle_OnImpactData *__fastcall ParticleState::GetOnImpactDataList(ParticleState *this)
{
  return ?GetOnImpactDataList@ParticleState@@QEBAPEAUParticle_OnImpactData@@XZ(this);
}

/*
==============
ParticleState::UseBoltInfo
==============
*/

bool __fastcall ParticleState::UseBoltInfo(ParticleState *this)
{
  return ?UseBoltInfo@ParticleState@@QEBA_NXZ(this);
}

/*
==============
ParticleState::UsesModelPhysics
==============
*/

bool __fastcall ParticleState::UsesModelPhysics(ParticleState *this)
{
  return ?UsesModelPhysics@ParticleState@@QEBA_NXZ(this);
}

/*
==============
ParticleState::GetRelativeVelocityType
==============
*/

ParticleRelativeVelocityType __fastcall ParticleState::GetRelativeVelocityType(ParticleState *this)
{
  return ?GetRelativeVelocityType@ParticleState@@QEBA?AW4ParticleRelativeVelocityType@@XZ(this);
}

/*
==============
ParticleState::GetTimeInStateList
==============
*/

float *__fastcall ParticleState::GetTimeInStateList(ParticleState *this)
{
  return ?GetTimeInStateList@ParticleState@@QEBAPEAMXZ(this);
}

/*
==============
ParticleState::UsesPhysicsFX
==============
*/

bool __fastcall ParticleState::UsesPhysicsFX(ParticleState *this)
{
  return ?UsesPhysicsFX@ParticleState@@QEBA_NXZ(this);
}

/*
==============
ParticleState::CopyTrailDataToAnotherState
==============
*/

void __fastcall ParticleState::CopyTrailDataToAnotherState(ParticleState *this, ParticleState *pParticleState, unsigned int fromIndex, unsigned int toIndex)
{
  ?CopyTrailDataToAnotherState@ParticleState@@QEAAXPEAV1@II@Z(this, pParticleState, fromIndex, toIndex);
}

/*
==============
ParticleState::GetPhysicsFXParticleIDList
==============
*/

int *__fastcall ParticleState::GetPhysicsFXParticleIDList(ParticleState *this)
{
  return ?GetPhysicsFXParticleIDList@ParticleState@@QEBAPEAHXZ(this);
}

/*
==============
ParticleState::CopyPhysicsInstanceIDToAnotherState
==============
*/

void __fastcall ParticleState::CopyPhysicsInstanceIDToAnotherState(ParticleState *this, ParticleState *pParticleState, unsigned int fromIndex, unsigned int toIndex)
{
  ?CopyPhysicsInstanceIDToAnotherState@ParticleState@@QEAAXPEAV1@II@Z(this, pParticleState, fromIndex, toIndex);
}

/*
==============
Particle_TrailData::CopyTrailData
==============
*/

void __fastcall Particle_TrailData::CopyTrailData(Particle_TrailData *this, Particle_TrailData *pDstTrailData)
{
  ?CopyTrailData@Particle_TrailData@@QEAAXPEAU1@@Z(this, pDstTrailData);
}

/*
==============
ParticleState::UsesPhysicsFX
==============
*/
bool ParticleState::UsesPhysicsFX(ParticleState *this)
{
  return (this->m_pStateDef->flags & 0x400) != 0 && this->m_pModulePhysicsLight;
}

/*
==============
ParticleState::CopyImpactDataToAnotherState
==============
*/
void ParticleState::CopyImpactDataToAnotherState(ParticleState *this, ParticleState *pParticleState, unsigned int fromIndex, unsigned int toIndex)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v15; 
  __int64 v16; 

  v4 = toIndex;
  v6 = fromIndex;
  if ( (this->m_pStateDef->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 443, ASSERT_TYPE_ASSERT, "(HasFlag( PARTICLE_STATE_DEF_FLAG_HANDLE_ON_IMPACT ))", (const char *)&queryFormat, "HasFlag( PARTICLE_STATE_DEF_FLAG_HANDLE_ON_IMPACT )") )
    __debugbreak();
  if ( !this->m_onImpactDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 444, ASSERT_TYPE_ASSERT, "(m_onImpactDataList)", (const char *)&queryFormat, "m_onImpactDataList") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 446, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( (pParticleState->m_pStateDef->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 447, ASSERT_TYPE_ASSERT, "(pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_HANDLE_ON_IMPACT ))", (const char *)&queryFormat, "pParticleState->HasFlag( PARTICLE_STATE_DEF_FLAG_HANDLE_ON_IMPACT )") )
    __debugbreak();
  if ( !pParticleState->m_onImpactDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 448, ASSERT_TYPE_ASSERT, "(pParticleState->m_onImpactDataList)", (const char *)&queryFormat, "pParticleState->m_onImpactDataList") )
    __debugbreak();
  if ( (unsigned int)v6 >= this->m_particleCountMax )
  {
    LODWORD(v15) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 450, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v15, this->m_particleCountMax) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= pParticleState->m_particleCountMax )
  {
    LODWORD(v16) = pParticleState->m_particleCountMax;
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 451, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( pParticleState->m_particleCountMax )", "toIndex doesn't index pParticleState->m_particleCountMax\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  _RDX = this->m_onImpactDataList;
  _RAX = pParticleState->m_onImpactDataList;
  _R8 = 10 * v6;
  _RCX = 10 * v4;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+r8*8]
    vmovups ymmword ptr [rax+rcx*8], ymm0
    vmovups ymm1, ymmword ptr [rdx+r8*8+20h]
    vmovups ymmword ptr [rax+rcx*8+20h], ymm1
    vmovups xmm0, xmmword ptr [rdx+r8*8+40h]
    vmovups xmmword ptr [rax+rcx*8+40h], xmm0
  }
}

/*
==============
ParticleState::CopyPhysicsFXIDToAnotherState
==============
*/
void ParticleState::CopyPhysicsFXIDToAnotherState(ParticleState *this, ParticleState *pParticleState, unsigned int fromIndex, unsigned int toIndex)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  v4 = toIndex;
  v6 = fromIndex;
  if ( (this->m_pStateDef->flags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 541, ASSERT_TYPE_ASSERT, "(HasPhysics())", (const char *)&queryFormat, "HasPhysics()") )
    __debugbreak();
  if ( !ParticleState::UsesPhysicsFX(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 542, ASSERT_TYPE_ASSERT, "(UsesPhysicsFX())", (const char *)&queryFormat, "UsesPhysicsFX()") )
    __debugbreak();
  if ( !this->m_physicsFXParticleIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 543, ASSERT_TYPE_ASSERT, "(m_physicsFXParticleIDList)", (const char *)&queryFormat, "m_physicsFXParticleIDList") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 545, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( (pParticleState->m_pStateDef->flags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 546, ASSERT_TYPE_ASSERT, "(pParticleState->HasPhysics())", (const char *)&queryFormat, "pParticleState->HasPhysics()") )
    __debugbreak();
  if ( !ParticleState::UsesPhysicsFX(pParticleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 547, ASSERT_TYPE_ASSERT, "(pParticleState->UsesPhysicsFX())", (const char *)&queryFormat, "pParticleState->UsesPhysicsFX()") )
    __debugbreak();
  if ( !pParticleState->m_physicsFXParticleIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 548, ASSERT_TYPE_ASSERT, "(pParticleState->m_physicsFXParticleIDList)", (const char *)&queryFormat, "pParticleState->m_physicsFXParticleIDList") )
    __debugbreak();
  if ( (unsigned int)v6 >= this->m_particleCountMax )
  {
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 550, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v8, this->m_particleCountMax) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= pParticleState->m_particleCountMax )
  {
    LODWORD(v9) = pParticleState->m_particleCountMax;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 551, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( pParticleState->m_particleCountMax )", "toIndex doesn't index pParticleState->m_particleCountMax\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  pParticleState->m_physicsFXParticleIDList[v4] = this->m_physicsFXParticleIDList[v6];
}

/*
==============
ParticleState::CopyPhysicsInstanceIDToAnotherState
==============
*/
void ParticleState::CopyPhysicsInstanceIDToAnotherState(ParticleState *this, ParticleState *pParticleState, unsigned int fromIndex, unsigned int toIndex)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v12; 
  __int64 v13; 

  v4 = toIndex;
  v6 = fromIndex;
  if ( (this->m_pStateDef->flags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 589, ASSERT_TYPE_ASSERT, "(HasPhysics())", (const char *)&queryFormat, "HasPhysics()") )
    __debugbreak();
  if ( !ParticleState::UsesModelPhysics(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 590, ASSERT_TYPE_ASSERT, "(UsesModelPhysics())", (const char *)&queryFormat, "UsesModelPhysics()") )
    __debugbreak();
  if ( !this->m_physicsInstanceIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 591, ASSERT_TYPE_ASSERT, "(m_physicsInstanceIDList)", (const char *)&queryFormat, "m_physicsInstanceIDList") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 593, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( (pParticleState->m_pStateDef->flags & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 594, ASSERT_TYPE_ASSERT, "(pParticleState->HasPhysics())", (const char *)&queryFormat, "pParticleState->HasPhysics()") )
    __debugbreak();
  if ( !ParticleState::UsesModelPhysics(pParticleState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 595, ASSERT_TYPE_ASSERT, "(pParticleState->UsesModelPhysics())", (const char *)&queryFormat, "pParticleState->UsesModelPhysics()") )
    __debugbreak();
  if ( !pParticleState->m_physicsInstanceIDList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 596, ASSERT_TYPE_ASSERT, "(pParticleState->m_physicsInstanceIDList)", (const char *)&queryFormat, "pParticleState->m_physicsInstanceIDList") )
    __debugbreak();
  if ( (unsigned int)v6 >= this->m_particleCountMax )
  {
    LODWORD(v12) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 598, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v12, this->m_particleCountMax) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= pParticleState->m_particleCountMax )
  {
    LODWORD(v13) = pParticleState->m_particleCountMax;
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 599, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( pParticleState->m_particleCountMax )", "toIndex doesn't index pParticleState->m_particleCountMax\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  _RDX = this->m_physicsInstanceIDList;
  _R9 = 3 * v6;
  __asm { vmovsd  xmm0, qword ptr [rdx+r9*4] }
  _R8 = &pParticleState->m_physicsInstanceIDList[v4];
  __asm { vmovsd  qword ptr [r8], xmm0 }
  _R8->createListIndex = _RDX[v6].createListIndex;
}

/*
==============
Particle_TrailData::CopyTrailData
==============
*/
void Particle_TrailData::CopyTrailData(Particle_TrailData *this, Particle_TrailData *pDstTrailData)
{
  Particle_TrailPoint *pointList; 
  ParticleData *pParticleData; 

  _RBX = pDstTrailData;
  _RDI = this;
  if ( !pDstTrailData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 92, ASSERT_TYPE_ASSERT, "(pDstTrailData)", (const char *)&queryFormat, "pDstTrailData") )
    __debugbreak();
  if ( _RBX == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 93, ASSERT_TYPE_ASSERT, "(pDstTrailData != this)", (const char *)&queryFormat, "pDstTrailData != this") )
    __debugbreak();
  if ( _RDI->numPointsMax != _RBX->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 97, ASSERT_TYPE_ASSERT, "(numPointsMax == pDstTrailData->numPointsMax)", (const char *)&queryFormat, "numPointsMax == pDstTrailData->numPointsMax") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  pointList = _RBX->pointList;
  pParticleData = _RBX->pParticleData;
  __asm
  {
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rbx+20h], ymm1
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rbx+40h], ymm0
  }
  _RDI->pointList = pointList;
  _RDI->pParticleData = pParticleData;
}

/*
==============
ParticleState::CopyTrailDataToAnotherState
==============
*/
void ParticleState::CopyTrailDataToAnotherState(ParticleState *this, ParticleState *pParticleState, unsigned int fromIndex, unsigned int toIndex)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  v4 = toIndex;
  v6 = fromIndex;
  if ( this->m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 470, ASSERT_TYPE_ASSERT, "(GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  if ( !this->m_trailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 471, ASSERT_TYPE_ASSERT, "(m_trailDataList)", (const char *)&queryFormat, "m_trailDataList") )
    __debugbreak();
  if ( !pParticleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 473, ASSERT_TYPE_ASSERT, "(pParticleState)", (const char *)&queryFormat, "pParticleState") )
    __debugbreak();
  if ( pParticleState->m_pStateDef->elementType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 474, ASSERT_TYPE_ASSERT, "(pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL)", (const char *)&queryFormat, "pParticleState->GetElementType() == PARTICLE_ELEMENT_TYPE_GEO_TRAIL") )
    __debugbreak();
  if ( !pParticleState->m_trailDataList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 475, ASSERT_TYPE_ASSERT, "(pParticleState->m_trailDataList)", (const char *)&queryFormat, "pParticleState->m_trailDataList") )
    __debugbreak();
  if ( (unsigned int)v6 >= this->m_particleCountMax )
  {
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 477, ASSERT_TYPE_ASSERT, "(unsigned)( fromIndex ) < (unsigned)( m_particleCountMax )", "fromIndex doesn't index m_particleCountMax\n\t%i not in [0, %i)", v8, this->m_particleCountMax) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= pParticleState->m_particleCountMax )
  {
    LODWORD(v9) = pParticleState->m_particleCountMax;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 478, ASSERT_TYPE_ASSERT, "(unsigned)( toIndex ) < (unsigned)( pParticleState->m_particleCountMax )", "toIndex doesn't index pParticleState->m_particleCountMax\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Particle_TrailData::CopyTrailData(&this->m_trailDataList[v6], &pParticleState->m_trailDataList[v4]);
}

/*
==============
ParticleState::GetPhysicsInstanceIDList
==============
*/
FxPhysics *ParticleState::GetPhysicsInstanceIDList(ParticleState *this)
{
  if ( this->m_physicsInstanceIDList )
    return this->m_physicsInstanceIDList;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 604, ASSERT_TYPE_ASSERT, "(m_physicsInstanceIDList)", (const char *)&queryFormat, "m_physicsInstanceIDList") )
    __debugbreak();
  return this->m_physicsInstanceIDList;
}

/*
==============
ParticleState::GetRelativeVelocityType
==============
*/
__int64 ParticleState::GetRelativeVelocityType(ParticleState *this)
{
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 

  m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
  if ( !m_pModuleInitRelativeVelocity || (m_pModuleInitRelativeVelocity->m_flags & 1) != 0 )
    return 0i64;
  else
    return (unsigned int)m_pModuleInitRelativeVelocity->m_velocityType;
}

/*
==============
ParticleState::GetTrailDataList
==============
*/
Particle_TrailData *ParticleState::GetTrailDataList(ParticleState *this)
{
  if ( this->m_trailDataList )
    return this->m_trailDataList;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 482, ASSERT_TYPE_ASSERT, "(m_trailDataList)", (const char *)&queryFormat, "m_trailDataList") )
    __debugbreak();
  return this->m_trailDataList;
}

/*
==============
ParticleState::IsRelativeToEmitterOrigin
==============
*/
bool ParticleState::IsRelativeToEmitterOrigin(ParticleState *this)
{
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 
  ParticleRelativeVelocityType m_velocityType; 
  bool result; 

  m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
  result = 0;
  if ( m_pModuleInitRelativeVelocity )
  {
    if ( (m_pModuleInitRelativeVelocity->m_flags & 1) == 0 )
    {
      m_velocityType = m_pModuleInitRelativeVelocity->m_velocityType;
      if ( m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN || m_velocityType == PARTICLE_RELATIVE_VELOCITY_TYPE_RELATIVE_TO_EFFECT_ORIGIN_WITH_BOLT_INFO )
        return 1;
    }
  }
  return result;
}

/*
==============
ParticleState::UseBoltInfo
==============
*/
bool ParticleState::UseBoltInfo(ParticleState *this)
{
  const ParticleModuleInitRelativeVelocity *m_pModuleInitRelativeVelocity; 

  m_pModuleInitRelativeVelocity = this->m_pModuleInitRelativeVelocity;
  return m_pModuleInitRelativeVelocity && (m_pModuleInitRelativeVelocity->m_flags & 1) == 0 && ((m_pModuleInitRelativeVelocity->m_velocityType - 3) & 0xFFFFFFFD) == 0;
}

/*
==============
ParticleState::UsesModelPhysics
==============
*/
bool ParticleState::UsesModelPhysics(ParticleState *this)
{
  return (this->m_pStateDef->flags & 0x400) != 0 && !this->m_pModulePhysicsLight && this->m_physicsInstanceIDList;
}

/*
==============
ParticleState::GetEmitterOwner
==============
*/
const ParticleEmitter *ParticleState::GetEmitterOwner(ParticleState *this)
{
  if ( this->m_pEmitterOwner )
    return this->m_pEmitterOwner;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 341, ASSERT_TYPE_ASSERT, "(m_pEmitterOwner)", (const char *)&queryFormat, "m_pEmitterOwner") )
    __debugbreak();
  return this->m_pEmitterOwner;
}

/*
==============
ParticleState::GetOnImpactDataList
==============
*/
Particle_OnImpactData *ParticleState::GetOnImpactDataList(ParticleState *this)
{
  if ( this->m_onImpactDataList )
    return this->m_onImpactDataList;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 455, ASSERT_TYPE_ASSERT, "(m_onImpactDataList)", (const char *)&queryFormat, "m_onImpactDataList") )
    __debugbreak();
  return this->m_onImpactDataList;
}

/*
==============
ParticleState::GetTimeInStateList
==============
*/
float *ParticleState::GetTimeInStateList(ParticleState *this)
{
  if ( this->m_timeInStateList )
    return this->m_timeInStateList;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 525, ASSERT_TYPE_ASSERT, "(m_timeInStateList)", (const char *)&queryFormat, "m_timeInStateList") )
    __debugbreak();
  return this->m_timeInStateList;
}

/*
==============
ParticleState::GetPhysicsFXParticleIDList
==============
*/
int *ParticleState::GetPhysicsFXParticleIDList(ParticleState *this)
{
  if ( this->m_physicsFXParticleIDList )
    return this->m_physicsFXParticleIDList;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 555, ASSERT_TYPE_ASSERT, "(m_physicsFXParticleIDList)", (const char *)&queryFormat, "m_physicsFXParticleIDList") )
    __debugbreak();
  return this->m_physicsFXParticleIDList;
}

/*
==============
Particle_TrailData::GetNextIndex
==============
*/
__int64 Particle_TrailData::GetNextIndex(Particle_TrailData *this, unsigned int currIndex)
{
  if ( currIndex >= this->numPointsMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlestate.h", 122, ASSERT_TYPE_ASSERT, "(currIndex < numPointsMax)", (const char *)&queryFormat, "currIndex < numPointsMax") )
    __debugbreak();
  return (currIndex + 1) % this->numPointsMax;
}

