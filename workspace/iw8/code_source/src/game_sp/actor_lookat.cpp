/*
==============
AIActorInterface::UpdateLookAt
==============
*/

void __fastcall AIActorInterface::UpdateLookAt(AIActorInterface *this)
{
  ?UpdateLookAt@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::UpdateLookAt
==============
*/
void AIActorInterface::UpdateLookAt(AIActorInterface *this)
{
  this->m_pAI->ent->s.lerp.u.actor.lookAtEntityNum = this->m_pAI->lookAtInfo.lookAtEntNum;
}

