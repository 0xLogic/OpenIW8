/*
==============
AIActorInterface::NotifyBlockingEntity
==============
*/

void __fastcall AIActorInterface::NotifyBlockingEntity(AIActorInterface *this)
{
  ?NotifyBlockingEntity@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::GetAI
==============
*/

actor_s *__fastcall AIActorInterface::GetAI(AIActorInterface *this)
{
  return ?GetAI@AIActorInterface@@UEBAPEAUactor_s@@XZ(this);
}

/*
==============
AIActorInterface::GetAI
==============
*/
actor_s *AIActorInterface::GetAI(AIActorInterface *this)
{
  return this->m_pAI;
}

/*
==============
AIActorInterface::NotifyBlockingEntity
==============
*/
void AIActorInterface::NotifyBlockingEntity(AIActorInterface *this)
{
  ;
}

