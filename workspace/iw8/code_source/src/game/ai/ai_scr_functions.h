/*
==============
AICallback_OnScrCmd_StartScriptedAnim
==============
*/
void AICallback_OnScrCmd_StartScriptedAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1336,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_ShouldPlayMeleeDeathAnim
==============
*/
void AICallback_OnScrCmd_ShouldPlayMeleeDeathAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1344,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_EnterProne
==============
*/
void AICallback_OnScrCmd_EnterProne(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1352,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_ExitProne
==============
*/
void AICallback_OnScrCmd_ExitProne(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1360,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetProneAnimNodes
==============
*/
void AICallback_OnScrCmd_SetProneAnimNodes(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1368,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_UpdateProne
==============
*/
void AICallback_OnScrCmd_UpdateProne(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1376,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetAnimLookAtRanges
==============
*/
void AICallback_OnScrCmd_SetAnimLookAtRanges(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetAnimLookAtRanges(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetAnimLookAtNeutralDir
==============
*/
void AICallback_OnScrCmd_SetAnimLookAtNeutralDir(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetAnimLookAtNeutralDir(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetupLookAtForNotetrack
==============
*/
void AICallback_OnScrCmd_SetupLookAtForNotetrack(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetupLookAtForNotetrack(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetLookAt
==============
*/
void AICallback_OnScrCmd_SetLookAt(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetLookAt(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetLookAtEntity
==============
*/
void AICallback_OnScrCmd_SetLookAtEntity(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetLookAtEntity(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_GlanceAtPos
==============
*/
void AICallback_OnScrCmd_GlanceAtPos(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_GlanceAtPos(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_GlanceAtEntity
==============
*/
void AICallback_OnScrCmd_GlanceAtEntity(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_GlanceAtEntity(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_EnableStateLookAt
==============
*/
void AICallback_OnScrCmd_EnableStateLookAt(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_EnableStateLookAt(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_EnableScriptedLookAt
==============
*/
void AICallback_OnScrCmd_EnableScriptedLookAt(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_EnableScriptedLookAt(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetLookAtStateOverride
==============
*/
void AICallback_OnScrCmd_SetLookAtStateOverride(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetLookAtStateOverride(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_ClearLookAtStateOverride
==============
*/
void AICallback_OnScrCmd_ClearLookAtStateOverride(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_ClearLookAtStateOverride(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_Teleport
==============
*/
void AICallback_OnScrCmd_Teleport(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1384,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_ForceTeleport
==============
*/
void AICallback_OnScrCmd_ForceTeleport(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_ForceTeleport(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SafeTeleport
==============
*/
void AICallback_OnScrCmd_SafeTeleport(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SafeTeleport(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_UseTurret
==============
*/
void AICallback_OnScrCmd_UseTurret(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1392,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_StopUseTurret
==============
*/
void AICallback_OnScrCmd_StopUseTurret(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1400,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_CanUseTurret
==============
*/
void AICallback_OnScrCmd_CanUseTurret(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1408,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetTurretAnim
==============
*/
void AICallback_OnScrCmd_SetTurretAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1416,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_GetTurret
==============
*/
void AICallback_OnScrCmd_GetTurret(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1424,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AnimCustom
==============
*/
void AICallback_OnScrCmd_AnimCustom(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1432,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_CheckProne
==============
*/
void AICallback_OnScrCmd_CheckProne(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1440,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetTalkToSpecies
==============
*/
void AICallback_OnScrCmd_SetTalkToSpecies(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1448,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_LaserAltOn
==============
*/
void AICallback_OnScrCmd_LaserAltOn(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1456,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_LaserAltOff
==============
*/
void AICallback_OnScrCmd_LaserAltOff(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1464,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_InvisibleNotSolid
==============
*/
void AICallback_OnScrCmd_InvisibleNotSolid(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1472,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_VisibleSolid
==============
*/
void AICallback_OnScrCmd_VisibleSolid(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1480,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_VisibleNotSolid
==============
*/
void AICallback_OnScrCmd_VisibleNotSolid(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1488,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_InitRiotshieldHealth
==============
*/
void AICallback_OnScrCmd_InitRiotshieldHealth(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1496,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AimAssistOn
==============
*/
void AICallback_OnScrCmd_AimAssistOn(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1504,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AimAssistOff
==============
*/
void AICallback_OnScrCmd_AimAssistOff(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1512,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_CodeMoveAnimRate
==============
*/
void AICallback_OnScrCmd_CodeMoveAnimRate(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1520,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetMoveAnimKnob
==============
*/
void AICallback_OnScrCmd_SetMoveAnimKnob(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{864,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetLaserFlag
==============
*/
void AICallback_OnScrCmd_SetLaserFlag(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{1528,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AISetAnim
==============
*/
void AICallback_OnScrCmd_AISetAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{784,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AISetAnimLimited
==============
*/
void AICallback_OnScrCmd_AISetAnimLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{800,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AIClearAnim
==============
*/
void AICallback_OnScrCmd_AIClearAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{792,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AISetAnimKnob
==============
*/
void AICallback_OnScrCmd_AISetAnimKnob(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{808,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AISetAnimKnobLimited
==============
*/
void AICallback_OnScrCmd_AISetAnimKnobLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{824,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AISetAnimKnobRestart
==============
*/
void AICallback_OnScrCmd_AISetAnimKnobRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{816,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AISetAnimRate
==============
*/
void AICallback_OnScrCmd_AISetAnimRate(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{832,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AISetAnimBlendCurve
==============
*/
void AICallback_OnScrCmd_AISetAnimBlendCurve(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{840,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_AISetAnimTime
==============
*/
void AICallback_OnScrCmd_AISetAnimTime(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{848,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetPupilDiameter
==============
*/
void AICallback_OnScrCmd_SetPupilDiameter(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
   AIScriptedInterface::`vcall'{856,{flat}}(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetAnimset
==============
*/
void AICallback_OnScrCmd_SetAnimset(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetAnimset(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_GetAnimset
==============
*/
void AICallback_OnScrCmd_GetAnimset(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_GetAnimset(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetCivilianFocus
==============
*/
void AICallback_OnScrCmd_SetCivilianFocus(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetCivilianFocus(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetAimState
==============
*/
void AICallback_OnScrCmd_SetAimState(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetAimState(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_CalcSuppressSpot
==============
*/
void AICallback_OnScrCmd_CalcSuppressSpot(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_CalcSuppressSpot(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_EnableAvoidance
==============
*/
void AICallback_OnScrCmd_EnableAvoidance(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_EnableAvoidance(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetAvoidanceReciprocity
==============
*/
void AICallback_OnScrCmd_SetAvoidanceReciprocity(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetAvoidanceReciprocity(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetAvoidanceRadius
==============
*/
void AICallback_OnScrCmd_SetAvoidanceRadius(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetAvoidanceRadius(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetAvoidanceBounds
==============
*/
void AICallback_OnScrCmd_SetAvoidanceBounds(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetAvoidanceBounds(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetAvoidanceIgnoreEnt
==============
*/
void AICallback_OnScrCmd_SetAvoidanceIgnoreEnt(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetAvoidanceIgnoreEnt(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_ClearAvoidanceIgnoreEnt
==============
*/
void AICallback_OnScrCmd_ClearAvoidanceIgnoreEnt(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_ClearAvoidanceIgnoreEnt(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_StopLookAt
==============
*/
void AICallback_OnScrCmd_StopLookAt(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_StopLookAt(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_CheckGrenadeLaunchPos
==============
*/
void AICallback_OnScrCmd_CheckGrenadeLaunchPos(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_CheckGrenadeLaunchPos(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_CheckGrenadeLaunch
==============
*/
void AICallback_OnScrCmd_CheckGrenadeLaunch(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_CheckGrenadeLaunch(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_PickUpGrenade
==============
*/
void AICallback_OnScrCmd_PickUpGrenade(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_PickUpGrenade(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_ThrowGrenade
==============
*/
void AICallback_OnScrCmd_ThrowGrenade(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_ThrowGrenade(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_IsGrenadePosSafe
==============
*/
void AICallback_OnScrCmd_IsGrenadePosSafe(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_IsGrenadePosSafe(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_CheckGrenadeThrow
==============
*/
void AICallback_OnScrCmd_CheckGrenadeThrow(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_CheckGrenadeThrow(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_CheckGrenadeThrowPos
==============
*/
void AICallback_OnScrCmd_CheckGrenadeThrowPos(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_CheckGrenadeThrowPos(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_MagicGrenade
==============
*/
void AICallback_OnScrCmd_MagicGrenade(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_MagicGrenade(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_MagicGrenadeManual
==============
*/
void AICallback_OnScrCmd_MagicGrenadeManual(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_MagicGrenadeManual(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_GetGrenadeTossVel
==============
*/
void AICallback_OnScrCmd_GetGrenadeTossVel(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_GetGrenadeTossVel(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_Shoot
==============
*/
void AICallback_OnScrCmd_Shoot(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_Shoot(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_ShootCustomWeapon
==============
*/
void AICallback_OnScrCmd_ShootCustomWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_ShootCustomWeapon(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetupShootStyleAdditive
==============
*/
void AICallback_OnScrCmd_SetupShootStyleAdditive(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetupShootStyleAdditive(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_EnableMissedBulletClientOnly
==============
*/
void AICallback_OnScrCmd_EnableMissedBulletClientOnly(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_EnableMissedBulletClientOnly(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_ShootStopSound
==============
*/
void AICallback_OnScrCmd_ShootStopSound(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_ShootStopSound(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_MayShoot
==============
*/
void AICallback_OnScrCmd_MayShoot(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_MayShoot(m_pAI, scrContext);
}

/*
==============
AICallback_OnScrCmd_SetArrivalAnimData
==============
*/
void AICallback_OnScrCmd_SetArrivalAnimData(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  AIScriptedInterface *m_pAI; 
  const char *v6; 
  AIWrapper v7; 

  AIActorInterface::AIActorInterface(&v7.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
  v7.m_pAI = NULL;
  v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  Entity = GetEntity(entref);
  AIWrapper::Setup(&v7, Entity);
  m_pAI = v7.m_pAI;
  if ( !v7.m_pAI )
  {
    v6 = j_va("Entity %d does not have a valid AI type for this function.", entref.entnum);
    Scr_Error(COM_ERR_3804, scrContext, v6);
  }
  AIScriptedInterface::OnScrCmd_SetArrivalAnimData(m_pAI, scrContext);
}

