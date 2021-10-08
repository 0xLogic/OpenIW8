/*
==============
HavokPhysicsXModelLOD::XModelCollisionTagData::Matches
==============
*/

bool __fastcall HavokPhysicsXModelLOD::XModelCollisionTagData::Matches(HavokPhysicsXModelLOD::XModelCollisionTagData *this, const HavokPhysicsXModelLOD::XModelCollisionTagData *other)
{
  return ?Matches@XModelCollisionTagData@HavokPhysicsXModelLOD@@QEBA_NAEBU12@@Z(this, other);
}

/*
==============
HavokPhysicsXModelLOD::XModelCollisionTagData::Matches
==============
*/
bool HavokPhysicsXModelLOD::XModelCollisionTagData::Matches(HavokPhysicsXModelLOD::XModelCollisionTagData *this, const HavokPhysicsXModelLOD::XModelCollisionTagData *other)
{
  return other->m_surfaceFlags == this->m_surfaceFlags && other->m_collisionFilterInfo == this->m_collisionFilterInfo;
}

