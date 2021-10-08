/*
==============
AIActorInterface::Grenade_Attach
==============
*/

void __fastcall AIActorInterface::Grenade_Attach(AIActorInterface *this)
{
  ?Grenade_Attach@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::Grenade_Detach
==============
*/

void __fastcall AIActorInterface::Grenade_Detach(AIActorInterface *this)
{
  ?Grenade_Detach@AIActorInterface@@UEBAXXZ(this);
}

/*
==============
AIActorInterface::Grenade_Attach
==============
*/
void AIActorInterface::Grenade_Attach(AIActorInterface *this)
{
  actor_s *m_pAI; 
  unsigned __int16 number; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  gentity_s *v8; 
  char v9; 
  __int64 errorMessageSize; 
  char *outErrorMessage; 
  int outErrorMessagea; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_grenade.cpp", 25, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  number = m_pAI->grenade.pGrenade.number;
  if ( !number )
    goto LABEL_26;
  v5 = number;
  v6 = number - 1;
  if ( v6 >= 0x800 )
  {
    outErrorMessagea = 2048;
    LODWORD(errorMessageSize) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", errorMessageSize, outErrorMessagea) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v7 = v5 - 1;
  if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7] )
  {
    LODWORD(outErrorMessage) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", outErrorMessage) )
      __debugbreak();
  }
  if ( !m_pAI->grenade.pGrenade.number )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_grenade.cpp", 26, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
      __debugbreak();
  }
  v8 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  G_EntLinkToWithOffset(v8, this->m_pAI->ent, scr_const.tag_accessory_right, &vec3_origin, &vec3_origin, 0, NULL);
  G_Utils_AddEvent(v8, 0x6Fu, 0);
  _RDX = this->m_pAI;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _R8 = &_RDX->grenade.vGrenadeTossVel;
  __asm { vucomiss xmm0, dword ptr [r8] }
  if ( !v9 )
    goto LABEL_22;
  __asm { vucomiss xmm0, dword ptr [rdx+4D4h] }
  if ( !v9 )
LABEL_22:
    AIScriptedInterface::FaceVector(this, &_RDX->CodeOrient, _R8);
  AIScriptedInterface::SetOrientMode(this, AI_ORIENT_DONT_CHANGE_RELATIVE);
  EntHandle::setEnt(&v8->parent, this->m_pAI->ent);
}

/*
==============
AIActorInterface::Grenade_Detach
==============
*/
void AIActorInterface::Grenade_Detach(AIActorInterface *this)
{
  actor_s *m_pAI; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  gentity_s *v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  vec3_t outPos; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "AIActorInterface::Grenade_Detach");
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_grenade.cpp", 50, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  number = m_pAI->grenade.pGrenade.number;
  if ( !number )
    goto LABEL_26;
  v4 = number;
  v5 = number - 1;
  if ( v5 >= 0x800 )
  {
    v10 = 2048;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = v4 - 1;
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(v9) = m_pAI->grenade.pGrenade.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v9) )
      __debugbreak();
  }
  if ( !m_pAI->grenade.pGrenade.number )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_grenade.cpp", 51, ASSERT_TYPE_ASSERT, "(m_pAI->grenade.pGrenade.isDefined())", (const char *)&queryFormat, "m_pAI->grenade.pGrenade.isDefined()") )
      __debugbreak();
  }
  v7 = EntHandle::ent(&this->m_pAI->grenade.pGrenade);
  G_EntUnlink(v7);
  G_Utils_AddEvent(v7, 0x70u, 0);
  G_Utils_DObjGetWorldTagPos_CheckTagExists(this->m_pAI->ent, (const scr_string_t)scr_const.tag_accessory_right, 1, &outPos);
  G_SetOrigin(v7, &outPos, 1, 1);
  *(_QWORD *)v7->s.lerp.pos.trDelta.v = 0i64;
  v7->s.lerp.pos.trDelta.v[2] = 0.0;
  EntHandle::setEnt(&v7->grenadeActivator, NULL);
  if ( !G_Missile_IsGrenade(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_grenade.cpp", 67, ASSERT_TYPE_ASSERT, "(G_Missile_IsGrenade( pGrenade ))", (const char *)&queryFormat, "G_Missile_IsGrenade( pGrenade )") )
    __debugbreak();
  *(_QWORD *)(&v7->c.beam + 15) = 0i64;
  v7->c.mover.angle.pos1.v[2] = 0.0;
  Sys_ProfEndNamedEvent();
}

