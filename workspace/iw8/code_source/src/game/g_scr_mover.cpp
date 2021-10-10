/*
==============
G_ScrMover_SpawnBrushModel
==============
*/

void __fastcall G_ScrMover_SpawnBrushModel(gentity_s *self)
{
  ?G_ScrMover_SpawnBrushModel@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
G_ScrMover_GetSlideVelocity
==============
*/

void __fastcall G_ScrMover_GetSlideVelocity(scrContext_t *scrContext, gentity_s *ent, int offset)
{
  ?G_ScrMover_GetSlideVelocity@@YAXAEAUscrContext_t@@PEAUgentity_s@@H@Z(scrContext, ent, offset);
}

/*
==============
G_ScrMover_SpawnScriptModel
==============
*/

void __fastcall G_ScrMover_SpawnScriptModel(gentity_s *mSelf)
{
  ?G_ScrMover_SpawnScriptModel@@YAXPEAUgentity_s@@@Z(mSelf);
}

/*
==============
G_ScrMover_Touch
==============
*/

void __fastcall G_ScrMover_Touch(gentity_s *ent, gentity_s *other, int bTouched)
{
  ?G_ScrMover_Touch@@YAXPEAUgentity_s@@0H@Z(ent, other, bTouched);
}

/*
==============
G_ScrMover_ClearServerAnim
==============
*/

void __fastcall G_ScrMover_ClearServerAnim(gentity_s *ent)
{
  ?G_ScrMover_ClearServerAnim@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ScrMover_SpawnOrigin
==============
*/

void __fastcall G_ScrMover_SpawnOrigin(gentity_s *mSelf)
{
  ?G_ScrMover_SpawnOrigin@@YAXPEAUgentity_s@@@Z(mSelf);
}

/*
==============
G_ScrMover_SpawnWeapon
==============
*/

void __fastcall G_ScrMover_SpawnWeapon(gentity_s *mSelf)
{
  ?G_ScrMover_SpawnWeapon@@YAXPEAUgentity_s@@@Z(mSelf);
}

/*
==============
G_ScrMover_Reached
==============
*/

void __fastcall G_ScrMover_Reached(gentity_s *pEnt)
{
  ?G_ScrMover_Reached@@YAXPEAUgentity_s@@@Z(pEnt);
}

/*
==============
G_ScrMover_NotifyScriptItemPickup
==============
*/

void __fastcall G_ScrMover_NotifyScriptItemPickup(gentity_s *ent, gentity_s *other)
{
  ?G_ScrMover_NotifyScriptItemPickup@@YAXPEAUgentity_s@@0@Z(ent, other);
}

/*
==============
G_ScrMover_SpawnArms
==============
*/

void __fastcall G_ScrMover_SpawnArms(gentity_s *const mSelf)
{
  ?G_ScrMover_SpawnArms@@YAXQEAUgentity_s@@@Z(mSelf);
}

/*
==============
G_ScrMover_ClearAnimatedTrajectory
==============
*/

void __fastcall G_ScrMover_ClearAnimatedTrajectory(gentity_s *ent)
{
  ?G_ScrMover_ClearAnimatedTrajectory@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_ScrMover_SetSlideVelocity
==============
*/

void __fastcall G_ScrMover_SetSlideVelocity(scrContext_t *scrContext, gentity_s *ent, int offset)
{
  ?G_ScrMover_SetSlideVelocity@@YAXAEAUscrContext_t@@PEAUgentity_s@@H@Z(scrContext, ent, offset);
}

/*
==============
G_ScrMover_InitScriptMover
==============
*/

void __fastcall G_ScrMover_InitScriptMover(gentity_s *mSelf)
{
  ?G_ScrMover_InitScriptMover@@YAXPEAUgentity_s@@@Z(mSelf);
}

/*
==============
G_ScrMoverCmd_MoveTo
==============
*/
void G_ScrMoverCmd_MoveTo(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1023, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2336, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
    G_ScrMover_Move(v4, &vectorValue, pfTotalTime, pfAccelTime, pfDecelTime);
  }
}

/*
==============
G_ScrMoverCmd_PhysicsWarpTo
==============
*/
void G_ScrMoverCmd_PhysicsWarpTo(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  G_PhysicsObject *v7; 
  unsigned int v8; 
  unsigned int v9; 
  vec4_t quat; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1055, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  v7 = G_PhysicsObject_Get(v4);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1059, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
    __debugbreak();
  v8 = v7->physicsInstances[0];
  v9 = v7->physicsInstances[1];
  if ( v8 == -1 )
  {
    Scr_Error(COM_ERR_2337, scrContext, "PhysicsWarpTo operating on gentity with no physics instance.\n");
  }
  else if ( v9 == -1 )
  {
    Scr_Error(COM_ERR_2338, scrContext, "PhysicsWarpTo operating on gentity with no detail physics instance.\n");
  }
  else
  {
    AnglesToQuat(&v4->r.currentAngles, &quat);
    Physics_WarpInstanceTo(PHYSICS_WORLD_ID_FIRST, v8, &v4->r.currentOrigin, &quat, 1);
    Physics_WarpInstanceTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v9, &v4->r.currentOrigin, &quat, 1);
  }
}

/*
==============
G_ScrMoverCmd_GravityMove
==============
*/
void G_ScrMoverCmd_GravityMove(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  const char *v7; 
  double Float; 
  float v9; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1103, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  v9 = vectorValue.v[0];
  if ( (LODWORD(vectorValue.v[0]) & 0x7F800000) == 2139095040 || (v9 = vectorValue.v[1], (LODWORD(vectorValue.v[1]) & 0x7F800000) == 2139095040) || (v9 = vectorValue.v[2], (LODWORD(vectorValue.v[2]) & 0x7F800000) == 2139095040) )
  {
    v7 = j_va("invalid velocity parameter in movegravity command: %f %f %f", vectorValue.v[0], vectorValue.v[1], vectorValue.v[2]);
    Scr_Error(COM_ERR_2339, scrContext, v7);
  }
  if ( v4->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )", v9) )
      __debugbreak();
    Scr_Error(COM_ERR_2340, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    Float = Scr_GetFloat(scrContext, 1u);
    G_ScrMover_GravityMove(v4, &vectorValue, *(const float *)&Float);
  }
}

/*
==============
G_ScrMoverCmd_MoveSlide
==============
*/
void G_ScrMoverCmd_MoveSlide(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  double Float; 
  const char *v8; 
  float v9; 
  vec3_t v10; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1139, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Float = Scr_GetFloat(scrContext, 1u);
  Scr_GetVector(scrContext, 2u, &v10);
  v9 = v10.v[0];
  if ( (LODWORD(v10.v[0]) & 0x7F800000) == 2139095040 || (v9 = v10.v[1], (LODWORD(v10.v[1]) & 0x7F800000) == 2139095040) || (v9 = v10.v[2], (LODWORD(v10.v[2]) & 0x7F800000) == 2139095040) )
  {
    v8 = j_va("invalid velocity parameter in moveslide command: %f %f %f", v10.v[0], v10.v[1], v10.v[2]);
    Scr_Error(COM_ERR_2341, scrContext, v8);
  }
  if ( v4->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )", v9) )
      __debugbreak();
    Scr_Error(COM_ERR_2342, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    v4->flags.m_flags[0] |= 0x80000u;
    v4->c.mover.pos.pos2 = v10;
    v4->c.mover.slide.bounds.midPoint = vectorValue;
    v4->c.mover.pos.pos1.v[0] = *(float *)&Float;
    v4->c.mover.pos.pos1.v[1] = *(float *)&Float;
    v4->c.mover.pos.pos1.v[2] = *(float *)&Float;
    v4->s.lerp.pos.trType = TR_INTERPOLATE;
  }
}

/*
==============
G_ScrMoverCmd_StopMoveSlide
==============
*/
void G_ScrMoverCmd_StopMoveSlide(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1170, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2343, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    v4->flags.m_flags[0] &= ~0x80000u;
    v4->s.lerp.pos.trType = TR_STATIONARY;
  }
}

/*
==============
G_ScrMoverCmd_MoveX
==============
*/
void G_ScrMoverCmd_MoveX(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_MoveAxis(scrContext, entref, 0);
}

/*
==============
G_ScrMoverCmd_MoveY
==============
*/
void G_ScrMoverCmd_MoveY(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_MoveAxis(scrContext, entref, 1);
}

/*
==============
G_ScrMoverCmd_MoveZ
==============
*/
void G_ScrMoverCmd_MoveZ(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_MoveAxis(scrContext, entref, 2);
}

/*
==============
G_ScrMoverCmd_RotateTo
==============
*/
void G_ScrMoverCmd_RotateTo(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1386, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2350, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    G_ScrMoverCmd_RotateToInternal(scrContext, v4, 0);
  }
}

/*
==============
G_ScrMoverCmd_RotateToLinked
==============
*/
void G_ScrMoverCmd_RotateToLinked(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1414, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( G_ScrMoverCmd_LinkedRotationSupported(scrContext, v4, "G_ScrMoverCmd_RotateToLinked") )
    G_ScrMoverCmd_RotateToInternal(scrContext, v4, 1);
}

/*
==============
G_ScrMoverCmd_RotateBy
==============
*/
void G_ScrMoverCmd_RotateBy(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1497, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2351, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    G_ScrMoverCmd_RotateByInternal(scrContext, v4, 0);
  }
}

/*
==============
G_ScrMoverCmd_RotateByLinked
==============
*/
void G_ScrMoverCmd_RotateByLinked(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1525, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( G_ScrMoverCmd_LinkedRotationSupported(scrContext, v4, "G_ScrMoverCmd_RotateByLinked") )
    G_ScrMoverCmd_RotateByInternal(scrContext, v4, 1);
}

/*
==============
G_ScrMoverCmd_SetLinkedAngles
==============
*/
void G_ScrMoverCmd_SetLinkedAngles(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  TagInfoLinkedRotation *TagInfoLinkedRotation; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1550, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( G_ScrMoverCmd_LinkedRotationSupported(scrContext, v4, "G_ScrMoverCmd_SetLinkedAngles") )
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    TagInfoLinkedRotation = G_GetTagInfoLinkedRotation(v4);
    TagInfoLinkedRotation->hasLinkedRotation = 1;
    TagInfoLinkedRotation->aposLocal.trBase = vectorValue;
    *(_QWORD *)TagInfoLinkedRotation->aposLocal.trDelta.v = 0i64;
    TagInfoLinkedRotation->aposLocal.trDelta.v[2] = 0.0;
    *(_QWORD *)&TagInfoLinkedRotation->aposLocal.trTime = 0i64;
    TagInfoLinkedRotation->aposLocal.trType = TR_STATIONARY;
  }
}

/*
==============
G_ScrMoverCmd_AddPitch
==============
*/
void G_ScrMoverCmd_AddPitch(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_AddRotate(scrContext, entref, 1);
}

/*
==============
G_ScrMoverCmd_AddYaw
==============
*/
void G_ScrMoverCmd_AddYaw(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_AddRotate(scrContext, entref, 2);
}

/*
==============
G_ScrMoverCmd_AddRoll
==============
*/
void G_ScrMoverCmd_AddRoll(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_AddRotate(scrContext, entref, 0);
}

/*
==============
G_ScrMoverCmd_RotatePitch
==============
*/
void G_ScrMoverCmd_RotatePitch(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_RotateAxis(scrContext, entref, 0);
}

/*
==============
G_ScrMoverCmd_RotateYaw
==============
*/
void G_ScrMoverCmd_RotateYaw(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_RotateAxis(scrContext, entref, 1);
}

/*
==============
G_ScrMoverCmd_RotateRoll
==============
*/
void G_ScrMoverCmd_RotateRoll(scrContext_t *scrContext, scr_entref_t entref)
{
  G_ScrMover_RotateAxis(scrContext, entref, 2);
}

/*
==============
G_ScrMoverCmd_Vibrate
==============
*/
void G_ScrMoverCmd_Vibrate(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  double Float; 
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  __int128 v12; 
  float v15; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  vec3_t vectorValue; 
  tmat33_t<vec3_t> axis; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1777, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( Scr_GetNumParam(scrContext) == 4 )
  {
    if ( BgTrajectory::IsAnimatedTrajectory(&v4->s.lerp.apos) )
    {
      Scr_Error(COM_ERR_2356, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
    }
    else
    {
      Scr_GetVector(scrContext, 0, &vectorValue);
      Float = Scr_GetFloat(scrContext, 1u);
      v8 = *(float *)&Float;
      v9 = Scr_GetFloat(scrContext, 2u);
      v10 = *(float *)&v9;
      v11 = Scr_GetFloat(scrContext, 3u);
      v12 = LODWORD(vectorValue.v[0]);
      *(float *)&v12 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(vectorValue.v[1] * vectorValue.v[1])) + (float)(vectorValue.v[2] * vectorValue.v[2]));
      _XMM4 = v12;
      __asm { vcmpless xmm1, xmm4, cs:__real@80000000 }
      v15 = *(float *)&v11;
      __asm { vblendvps xmm0, xmm4, xmm2, xmm1 }
      v17 = 1.0 / *(float *)&_XMM0;
      *(float *)&_XMM0 = vectorValue.v[2] * (float)(1.0 / *(float *)&_XMM0);
      v18 = (float)(vectorValue.v[0] * v17) * v8;
      *(float *)&v12 = (float)(vectorValue.v[1] * v17) * v8;
      v19 = *(float *)&_XMM0 * v8;
      vectorValue.v[0] = vectorValue.v[0] * v17;
      vectorValue.v[1] = vectorValue.v[1] * v17;
      vectorValue.v[2] = *(float *)&_XMM0;
      AnglesToAxis(&v4->r.currentAngles, &axis);
      *(float *)&_XMM0 = v19 * axis.m[1].v[2];
      v20 = *(float *)&v12 * axis.m[1].v[1];
      v21 = (float)((float)(*(float *)&v12 * axis.m[0].v[1]) + (float)(v18 * axis.m[0].v[0])) + (float)(v19 * axis.m[0].v[2]);
      *(float *)&_XMM1 = v18 * axis.m[1].v[0];
      v4->c.item[1].clipAmmoCount[0] = LODWORD(v4->r.currentAngles.v[0]);
      v4->c.item[1].clipAmmoCount[1] = LODWORD(v4->r.currentAngles.v[1]);
      v4->c.mover.angle.pos3.v[2] = v4->r.currentAngles.v[2];
      v4->s.lerp.apos.trDuration = (int)(float)(v10 * 1000.0);
      v4->s.lerp.apos.trTime = level.time - (int)(float)(v15 * -1000.0);
      v4->s.lerp.apos.trBase.v[0] = v4->r.currentAngles.v[0];
      v4->s.lerp.apos.trBase.v[1] = v4->r.currentAngles.v[1];
      v4->s.lerp.apos.trBase.v[2] = v4->r.currentAngles.v[2];
      v4->s.lerp.apos.trDelta.v[0] = v21;
      v4->s.lerp.apos.trDelta.v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v20 + *(float *)&_XMM1) + *(float *)&_XMM0) ^ _xmm);
      v4->s.lerp.apos.trDelta.v[1] = 0.0;
      v4->s.lerp.apos.trType = TR_SINE;
    }
  }
  else
  {
    Scr_Error(COM_ERR_2355, scrContext, "illegal call to vibrate()");
  }
}

/*
==============
G_ScrMoverCmd_RotateVelocity
==============
*/
void G_ScrMoverCmd_RotateVelocity(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1838, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2357, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
    G_ScrMover_SetupMoveSpeed(&v4->s.lerp.apos, &vectorValue, pfTotalTime, pfAccelTime, pfDecelTime, &v4->r.currentAngles, &v4->c.mover.angle);
    SV_LinkEntity(v4);
  }
}

/*
==============
G_ScrMoverCmd_SetCanDamage
==============
*/
void G_ScrMoverCmd_SetCanDamage(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  EntityClass entclass; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    if ( entclass )
    {
      Scr_ObjectError(COM_ERR_2359, scrContext, "not an entity");
      v4 = NULL;
    }
    else
    {
      if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1876, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
        __debugbreak();
      v4 = &g_entities[entnum];
    }
    p_eFlags = &v4->s.lerp.eFlags;
    if ( Scr_GetInt(scrContext, 0) )
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(p_eFlags, ACTIVE, 0x10u);
    else
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(p_eFlags, ACTIVE, 0x10u);
  }
  else
  {
    Scr_Error(COM_ERR_2358, scrContext, "illegal call to setcandamage()");
  }
}

/*
==============
G_ScrMoverCmd_SetCanRadiusDamage
==============
*/
void G_ScrMoverCmd_SetCanRadiusDamage(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  int Int; 
  unsigned int v6; 
  EntityClass entclass; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    if ( entclass )
    {
      Scr_ObjectError(COM_ERR_2361, scrContext, "not an entity");
      v4 = NULL;
    }
    else
    {
      if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1920, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
        __debugbreak();
      v4 = &g_entities[entnum];
    }
    Int = Scr_GetInt(scrContext, 0);
    v6 = v4->flags.m_flags[0];
    if ( Int )
      v4->flags.m_flags[0] = v6 & 0xFFFFFFEF;
    else
      v4->flags.m_flags[0] = v6 | 0x10;
  }
  else
  {
    Scr_Error(COM_ERR_2360, scrContext, "illegal call to setcanradiusdamage()");
  }
}

/*
==============
G_ScrMoverCmd_PhysicsLaunchClient
==============
*/
void G_ScrMoverCmd_PhysicsLaunchClient(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  unsigned int Instance; 
  unsigned int v8; 
  unsigned int NumRigidBodys; 
  const char *name; 
  const char *v11; 
  float v12; 
  GTrajectory v13; 
  vec3_t vectorValue; 
  vec3_t v15; 
  vec3_t outAng; 
  vec3_t outPos; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1953, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2362, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    Scr_GetVector(scrContext, 1u, &v15);
  }
  else
  {
    vectorValue.v[0] = 0.0;
    vectorValue.v[1] = 0.0;
    vectorValue.v[2] = 0.0;
    v15.v[0] = 0.0;
    v15.v[1] = 0.0;
    v15.v[2] = 0.0;
  }
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v4->s.number);
  v8 = Instance;
  if ( Instance != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, Instance);
    if ( NumRigidBodys > 1 )
    {
      if ( Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v8) )
        name = Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v8)->name;
      else
        name = "UNKNOWN";
      v11 = j_va("PhysicsLaunchClient only supports entities with 1 rigid body - %s has %i.\n", name, NumRigidBodys);
      Scr_Error(COM_ERR_2363, scrContext, v11);
    }
  }
  G_Utils_DestroyEntityPhysics(v4);
  if ( v4->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 396, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( pTr ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( pTr )") )
      __debugbreak();
  }
  if ( v4->s.lerp.pos.trType == TR_PHYSICS_CLIENT_AUTH )
    Scr_Error(COM_ERR_2327, scrContext, "physicslaunch called more than once for the same entity.");
  v4->s.lerp.pos.trTime = level.time;
  v4->s.lerp.pos.trDuration = 0x7FFFFFFF;
  GTrajectory::GTrajectory(&v13, v4);
  BgTrajectory::EvaluateTrajectories(&v13, level.time, &outPos, &outAng);
  Trajectory_SetTrBase(&v4->s.lerp.pos, &outPos);
  v12 = outAng.v[1];
  v4->s.lerp.apos.trBase.v[0] = outAng.v[0];
  v4->s.lerp.apos.trBase.v[2] = outAng.v[2];
  v4->s.lerp.apos.trBase.v[1] = v12;
  v4->s.lerp.pos.trDelta = vectorValue;
  v4->s.lerp.apos.trDelta = v15;
  v4->s.lerp.pos.trType = TR_PHYSICS_CLIENT_AUTH;
  v4->s.lerp.apos.trType = TR_PHYSICS_CLIENT_AUTH;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v4->s.lerp.eFlags, ACTIVE, 0x10u);
  SV_LinkEntity(v4);
}

/*
==============
G_ScrMoverCmd_PhysicsLaunchServer
==============
*/
void G_ScrMoverCmd_PhysicsLaunchServer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  gentity_s *v5; 
  scr_string_t classname; 
  const char *v7; 
  scr_string_t v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  __int128 v13; 
  unsigned int Instance; 
  unsigned int v17; 
  unsigned int NumRigidBodys; 
  const char *name; 
  const char *v20; 
  G_PhysicsObject *v21; 
  unsigned int RigidBodyID; 
  GTrajectory v23; 
  vec3_t v24; 
  vec3_t vectorValue; 
  vec3_t normalizedDirection; 
  vec3_t outAng; 
  vec3_t outPos; 

  entnum = entref.entnum;
  entclass = entref.entclass;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScrMoverCmd_PhysicsLaunchServer");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2010, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    classname = v5->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v7 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v7);
    }
  }
  if ( v5->s.eType != ET_SCRIPTMOVER || (v8 = v5->classname, v8 != scr_const.script_model) && v8 != scr_const.script_brushmodel )
    Scr_Error(COM_ERR_2364, scrContext, "physicsLaunchServer valid only for script models and script brush models");
  if ( !Com_GetServerDObjForEnt(v5) && v5->r.modelType != 5 )
    Scr_Error(COM_ERR_2365, scrContext, "Ent does not have a model and is not a brush.  Cannot create physics for an ent without a model or that is a brush.");
  if ( v5->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2366, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  if ( Scr_GetNumParam(scrContext) < 2 )
  {
    v11 = 0.0;
    v10 = 0i64;
    v9 = 0.0;
    v24.v[0] = 0.0;
    v24.v[1] = 0.0;
    v24.v[2] = 0.0;
    vectorValue.v[0] = 0.0;
    vectorValue.v[1] = 0.0;
    vectorValue.v[2] = 0.0;
  }
  else
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    Scr_GetVector(scrContext, 1u, &v24);
    v9 = v24.v[2];
    v10 = LODWORD(v24.v[1]);
    v11 = v24.v[0];
  }
  v13 = v10;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11)) + (float)(v9 * v9));
  _XMM7 = v13;
  __asm
  {
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
  }
  normalizedDirection.v[0] = v11 * (float)(1.0 / *(float *)&_XMM0);
  normalizedDirection.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
  normalizedDirection.v[1] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  GTrajectory::GTrajectory(&v23, v5);
  BgTrajectory::EvaluateTrajectories(&v23, level.time, &outPos, &outAng);
  if ( G_SetOriginAndAngle(v5, &outPos, &outAng, 1, 0) )
  {
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  }
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v5->s.number);
  v17 = Instance;
  if ( Instance != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, Instance);
    if ( NumRigidBodys > 1 )
    {
      if ( Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v17) )
        name = Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v17)->name;
      else
        name = "UNKNOWN";
      v20 = j_va("PhysicsLaunchServer only supports entities with 1 rigid body - %s has %i.\n", name, NumRigidBodys);
      Scr_Error(COM_ERR_2367, scrContext, v20);
    }
  }
  G_Items_EnablePhysics(v5);
  v21 = G_PhysicsObject_Get(v5);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2055, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( v21->physicsInstances[0] == -1 )
    Scr_Error(COM_ERR_2368, scrContext, "physicsLaunchServer failed to create physics");
  if ( v21->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH && *(float *)&v13 > 0.0 )
  {
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v21->physicsInstances[0], 0);
    Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &vectorValue, &normalizedDirection, *(float *)&v13);
  }
  SV_LinkEntity(v5);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ScrMoverCmd_PhysicsStopServer
==============
*/
void G_ScrMoverCmd_PhysicsStopServer(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  scr_string_t v7; 
  vec3_t trBase; 
  GTrajectory v9; 
  EntityClass entclass; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScrMoverCmd_PhysicsStopServer");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2087, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES", -2i64) )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.eType != ET_SCRIPTMOVER || (v7 = v4->classname, v7 != scr_const.script_model) && v7 != scr_const.script_brushmodel )
    Scr_Error(COM_ERR_2369, scrContext, "PhysicsStopServer valid only for script models and script brush models");
  if ( !Com_GetServerDObjForEnt(v4) && v4->r.modelType != 5 )
    Scr_Error(COM_ERR_2370, scrContext, "Ent does not have a model and is not a brush.  Cannot stop physics for an ent without a model or that is a brush.");
  if ( v4->s.lerp.pos.trType != TR_PHYSICS_SERVER_AUTH || v4->s.lerp.apos.trType != TR_PHYSICS_SERVER_AUTH )
    Scr_Error(COM_ERR_2371, scrContext, "You can only call PhysicsStopServer on an entity which PhysicsLaunchServer is executed upon.");
  GTrajectory::GTrajectory(&v9, v4);
  Trajectory_GetTrBase(&v4->s.lerp.pos, &trBase);
  BgTrajectory::EvaluateTrajectories(&v9, level.time, &trBase, &v4->s.lerp.apos.trBase);
  Trajectory_SetTrBase(&v4->s.lerp.pos, &trBase);
  if ( G_SetOriginAndAngle(v4, &trBase, &v4->s.lerp.apos.trBase, 1, 0) )
  {
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  }
  v4->s.lerp.pos.trType = TR_STATIONARY;
  v4->s.lerp.apos.trType = TR_STATIONARY;
  G_Items_CreatePhysObj(v4);
  SV_LinkEntity(v4);
  Sys_ProfEndNamedEvent();
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
G_ScrMoverCmd_PhysicsLaunchServerItem
==============
*/
void G_ScrMoverCmd_PhysicsLaunchServerItem(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  gentity_s *v5; 
  GWeaponMap *Instance; 
  unsigned __int16 weaponIdx; 
  bool v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  __int128 v13; 
  G_PhysicsObject *v16; 
  unsigned int RigidBodyID; 
  __int64 v18; 
  GTrajectory v19; 
  vec3_t v20; 
  vec3_t vectorValue; 
  vec3_t normalizedDirection; 
  vec3_t outAng; 
  vec3_t outPos; 

  entnum = entref.entnum;
  entclass = entref.entclass;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScrMoverCmd_PhysicsLaunchServerItem");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_2372, scrContext, "not an entity");
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2153, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    if ( v5->s.eType == ET_ITEM )
    {
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      weaponIdx = BgWeaponMap::GetWeapon(Instance, v5->s.weaponHandle)->weaponIdx;
      if ( weaponIdx )
      {
        if ( weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(v18) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v18, bg_lastParsedWeaponIndex) )
            __debugbreak();
        }
        v8 = bg_weaponDefs[weaponIdx] == NULL;
        if ( !bg_weaponDefs[weaponIdx] )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          v8 = bg_weaponDefs[weaponIdx] == NULL;
        }
        if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2170, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
          __debugbreak();
      }
    }
    else
    {
      Scr_Error(COM_ERR_2373, scrContext, "physicsLaunchServerItem valid only for weapons/items");
    }
    if ( !Com_GetServerDObjForEnt(v5) )
      Scr_Error(COM_ERR_2374, scrContext, "Ent does not have a model.  Cannot create physics for an ent without a model.");
    if ( BgTrajectory::IsAnimatedTrajectory(&v5->s.lerp.pos) )
      Scr_Error(COM_ERR_2375, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
    if ( Scr_GetNumParam(scrContext) == 2 )
    {
      Scr_GetVector(scrContext, 0, &vectorValue);
      Scr_GetVector(scrContext, 1u, &v20);
      v9 = v20.v[2];
      v10 = LODWORD(v20.v[1]);
      v11 = v20.v[0];
    }
    else
    {
      v9 = 0.0;
      v11 = 0.0;
      v10 = 0i64;
      vectorValue.v[0] = 0.0;
      vectorValue.v[1] = 0.0;
      vectorValue.v[2] = 0.0;
      v20.v[0] = 0.0;
      v20.v[1] = 0.0;
      v20.v[2] = 0.0;
    }
    v13 = v10;
    *(float *)&v13 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11)) + (float)(v9 * v9));
    _XMM6 = v13;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
    }
    normalizedDirection.v[0] = v11 * (float)(1.0 / *(float *)&_XMM0);
    normalizedDirection.v[2] = v9 * (float)(1.0 / *(float *)&_XMM0);
    normalizedDirection.v[1] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
    GTrajectory::GTrajectory(&v19, v5);
    BgTrajectory::EvaluateTrajectories(&v19, level.time, &outPos, &outAng);
    if ( G_SetOriginAndAngle(v5, &outPos, &outAng, 1, 0) )
    {
      Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
      Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    }
    G_Items_EnablePhysics(v5);
    v16 = G_PhysicsObject_Get(v5);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2208, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    if ( v16->physicsInstances[0] == -1 )
      Scr_Error(COM_ERR_2376, scrContext, "physicsLaunchServerItem failed to create physics");
    if ( v16->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH )
    {
      RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v16->physicsInstances[0], 0);
      Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &vectorValue, &normalizedDirection, *(float *)&v13);
    }
    SV_LinkEntity(v5);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ScrMoverCmd_CloneBrushModelToScriptModel
==============
*/
void G_ScrMoverCmd_CloneBrushModelToScriptModel(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  gentity_s *Entity; 
  gentity_s *v8; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2242, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.eType != ET_SCRIPTMOVER || v4->classname != scr_const.script_model )
    Scr_Error(COM_ERR_2377, scrContext, "CloneBrushmodelToScriptmodel valid only for script models\n");
  Entity = GScr_GetEntity(0);
  v8 = Entity;
  if ( Entity->r.modelType != 5 || !Entity->s.index.brushModel )
    Scr_ParamError(COM_ERR_2378, scrContext, 0, "Entity has no brushmodel\n");
  SV_UnlinkEntity(v4);
  v4->s.index.brushModel = v8->s.index.brushModel;
  v4->r.modelType = 5;
  if ( Scr_GetNumParam(scrContext) >= 2 && Scr_GetInt(scrContext, 1u) )
    v4->s.lerp.u.anonymous.data[2] |= 0x100u;
  if ( v4->model )
    Scr_Error(COM_ERR_6151, scrContext, "CloneBrushmodelToScriptmodel will not work properly on an entity with a model defined (will not properly create physics for the entity)\n");
  if ( !SV_Game_SetBrushModel(v4) )
    Com_PrintError(131087, "CloneBrushmodelToScriptmodel: SetBrushModel failed because the brush was invalid.\n");
  SV_LinkEntity(v4);
}

/*
==============
G_ScrMoverCmd_Solid
==============
*/
void G_ScrMoverCmd_Solid(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2380, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2358, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle && classname != scr_const.misc_turret )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, light, script_vehicle or misc_turret", entnum);
      Scr_ObjectError(COM_ERR_2379, scrContext, v6);
    }
  }
  if ( v4->classname == scr_const.script_origin )
  {
    Com_DPrintf(23, "cannot use the solid/notsolid commands on a script_origin entity( number %i )\n", (unsigned int)v4->s.number);
  }
  else
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v4->s.lerp.eFlags, ACTIVE, 0);
    SV_LinkEntity(v4);
  }
}

/*
==============
G_ScrMoverCmd_NotSolid
==============
*/
void G_ScrMoverCmd_NotSolid(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2382, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2405, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle && classname != scr_const.misc_turret )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, light, script_vehicle or misc_turret", entnum);
      Scr_ObjectError(COM_ERR_2381, scrContext, v6);
    }
  }
  if ( v4->classname == scr_const.script_origin )
  {
    Com_DPrintf(23, "cannot use the solid/notsolid commands on a script_origin entity( number %i )\n", (unsigned int)v4->s.number);
  }
  else
  {
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v4->s.lerp.eFlags, ACTIVE, 0);
    SV_LinkEntity(v4);
  }
}

/*
==============
G_ScrMoverCmd_SetMoverWeapon
==============
*/
void G_ScrMoverCmd_SetMoverWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  unsigned int Int; 
  unsigned int v8; 
  const char *v9; 
  GWeaponMap *Instance; 
  GWeaponMap *v11; 
  bool outIsAlternate; 
  Weapon outWeapon; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2449, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( v4->s.eType != ET_SCRIPTMOVER )
    Scr_Error(COM_ERR_2383, scrContext, "Must be called on a script_weapon.\n");
  if ( (unsigned __int16)(v4->s.un.scriptMoverType - 5) > 2u )
    Scr_Error(COM_ERR_2384, scrContext, "Must be called on a script_weapon.\n");
  if ( !Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_2385, scrContext, "USAGE: SetClientWeapon( <weaponNameOrId> )");
  if ( Scr_GetType(scrContext, 0) == VAR_INTEGER && v4->s.un.scriptMoverType == 5 )
  {
    Int = Scr_GetInt(scrContext, 0);
    v8 = Int;
    if ( Int >= 0x32 )
    {
      v9 = j_va("Invalid index specified for client weapon - valid range is [0,%d) value is %d", 50i64, Int);
      Scr_Error(COM_ERR_2386, scrContext, v9);
    }
    v4->s.staticState.player.stowedWeaponHandle.m_mapEntryId = v8;
  }
  else if ( Scr_GetType(scrContext, 0) && v4->s.un.scriptMoverType == 6 )
  {
    GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
    Instance = GWeaponMap::GetInstance();
    BG_SetWeaponForEntity(Instance, &v4->s, &outWeapon);
    G_DObjUpdate(v4, 1);
  }
  else if ( Scr_GetType(scrContext, 0) && v4->s.un.scriptMoverType == 7 )
  {
    GScr_Main_GetWeaponParam(scrContext, 0, &outWeapon, &outIsAlternate);
    v11 = GWeaponMap::GetInstance();
    BG_SetWeaponForEntity(v11, &v4->s, &outWeapon);
  }
  else
  {
    Scr_Error(COM_ERR_2387, scrContext, "USAGE: spawn( \"script_weapon\", <origin>, <spawnflags>, <weaponNameOrId> )\nINVALID ARGUMENT: weaponNameOrId must be a string name of a weapon or an index specifying which client weapon to use\n");
  }
}

/*
==============
G_ScrMoverCmd_SetMoverLaserWeapon
==============
*/
void G_ScrMoverCmd_SetMoverLaserWeapon(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2508, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entref.entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entref.entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  v4->s.un.scriptMoverType = 7;
  G_ScrMoverCmd_SetMoverWeapon(scrContext, entref);
}

/*
==============
G_ScrMoverCmd_SetMoverBehavior
==============
*/
void G_ScrMoverCmd_SetMoverBehavior(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  scr_string_t ConstString; 
  const char *v8; 
  const char *v9; 
  const char *v10; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2527, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( !BGMovingPlatforms::IsMovingPlatform(v4->s.number) )
  {
    v8 = j_va("Calling SEtMoverBehavior on entity that is not a mover. Entity number %d", (unsigned int)v4->s.number);
    Scr_Error(COM_ERR_2388, scrContext, v8);
  }
  if ( ConstString == scr_const.addmoverveltoprojectiles )
  {
    v4->s.staticState.general.xmodel |= 4u;
  }
  else if ( ConstString == scr_const.addmoverdrawonradialsensor )
  {
    v4->s.staticState.general.xmodel |= 8u;
  }
  else
  {
    v9 = SL_ConvertToString(ConstString);
    v10 = j_va("Undefined mover behavior %s", v9);
    Scr_Error(COM_ERR_2389, scrContext, v10);
  }
}

/*
==============
G_ScrMoverCmd_SetMoverOptimized
==============
*/
void G_ScrMoverCmd_SetMoverOptimized(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  const char *v7; 
  int Int; 
  unsigned int v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2564, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( !BGMovingPlatforms::IsMovingPlatform(v4->s.number) )
  {
    v7 = j_va("Calling SetMoverOptimized on entity that is not a mover. Entity number %d", (unsigned int)v4->s.number);
    Scr_Error(COM_ERR_6626, scrContext, v7);
  }
  Int = Scr_GetInt(scrContext, 0);
  v9 = v4->s.staticState.general.xmodel & 0xFFFFFFDF;
  if ( Int )
    v9 = v4->s.staticState.general.xmodel | 0x20;
  v4->s.staticState.general.xmodel = v9;
}

/*
==============
G_ScrMoverCmd_SetMoverAntilagged
==============
*/
void G_ScrMoverCmd_SetMoverAntilagged(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  const char *v7; 
  int Int; 
  unsigned int v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2595, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( !BGMovingPlatforms::IsMovingPlatform(v4->s.number) )
  {
    v7 = j_va("Calling SetMoverAntilagged on entity that is not a mover. Entity number %d", (unsigned int)v4->s.number);
    Scr_Error(COM_ERR_6633, scrContext, v7);
  }
  Int = Scr_GetInt(scrContext, 0);
  v9 = v4->s.staticState.general.xmodel & 0xFFFFFFBF;
  if ( Int )
    v9 = v4->s.staticState.general.xmodel | 0x40;
  v4->s.staticState.general.xmodel = v9;
}

/*
==============
G_ScrMoverCmd_SetMoverAvatar
==============
*/
void G_ScrMoverCmd_SetMoverAvatar(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  scr_string_t classname; 
  const char *v7; 
  const char *String; 
  const char *v9; 
  GUtils *v10; 
  const char *v11; 
  const char *v12; 
  const DObj *ServerDObjForEnt; 
  int ModelIndex; 
  DObj *v15; 
  const char *v16; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2629, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    classname = v5->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v7 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v7);
    }
  }
  String = Scr_GetString(scrContext, 0);
  v9 = Scr_GetString(scrContext, 1u);
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v10 = GUtils::ms_gUtils;
  if ( GUtils::ms_gUtils->IsTransientCustomizationModel(GUtils::ms_gUtils, String) )
  {
    v11 = j_va("Can't set the body model '%s' to a transient model from the server", String);
    Scr_Error(COM_ERR_2390, scrContext, v11);
  }
  if ( v10->IsTransientCustomizationModel(v10, v9) )
  {
    v12 = j_va("Can't set the head model '%s' to a transient model from the server", v9);
    Scr_Error(COM_ERR_2391, scrContext, v12);
  }
  G_Utils_SetModel(v5, String);
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(v5);
    if ( ServerDObjForEnt )
    {
      if ( DObjGetTree(ServerDObjForEnt) && !v5->model )
        Scr_Error(COM_ERR_2392, scrContext, "Cannot remove an entity's model while it is playing an animation. Call scriptmodelclearanim first.\n");
    }
  }
  v5->s.un.scriptMoverType = 8;
  if ( *v9 )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    ModelIndex = GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, v9);
    v2 = ModelIndex;
    if ( ModelIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", (unsigned int)ModelIndex, "signed", ModelIndex) )
      __debugbreak();
  }
  v5->s.staticState.player.stowedWeaponHandle.m_mapEntryId = v2;
  G_DObjUpdate(v5, 1);
  v15 = Com_GetServerDObjForEnt(v5);
  if ( v15 )
  {
    if ( (v15->flags & 0x10) != 0 )
    {
      v16 = j_va("Trying to set model for entity in a way where the existing child models will no longer have the correct attach bones, this will cause child models to appear in front of the camera. %s\n", String);
      Scr_Error(COM_ERR_2393, scrContext, v16);
    }
  }
}

/*
==============
G_ScrMoverCmd_SetMoverTransparentVolume
==============
*/
void G_ScrMoverCmd_SetMoverTransparentVolume(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2693, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  v4->s.un.scriptMoverType = 11;
}

/*
==============
G_ScrMoverCmd_BrCircleMoveTo
==============
*/
void G_ScrMoverCmd_BrCircleMoveTo(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v5; 
  scr_string_t classname; 
  const char *v7; 
  double Float; 
  double v9; 
  double v10; 
  vec3_t vPos; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2718, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    classname = v5->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v7 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v7);
    }
  }
  if ( v5->s.un.scriptMoverType != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2720, ASSERT_TYPE_ASSERT, "(mSelf->s.un.scriptMoverType == ScriptMoverType_BrCircle)", (const char *)&queryFormat, "mSelf->s.un.scriptMoverType == ScriptMoverType_BrCircle") )
    __debugbreak();
  if ( v5->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_5832, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    Float = Scr_GetFloat(scrContext, 0);
    vPos.v[0] = *(float *)&Float;
    v9 = Scr_GetFloat(scrContext, 1u);
    vPos.v[1] = *(float *)&v9;
    v10 = Scr_GetFloat(scrContext, 2u);
    vPos.v[2] = *(float *)&v10;
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    LODWORD(_XMM6) = _XMM0;
    if ( *(float *)&_XMM0 > 0.0 )
      __asm { vmaxss  xmm6, xmm0, cs:__real@3a83126f }
    else
      Scr_ParamError(COM_ERR_5833, scrContext, 3u, "total time must be positive");
    G_ScrMover_Move(v5, &vPos, *(const float *)&_XMM6, 0.0, 0.0);
  }
}

/*
==============
G_ScrMoverCmd_EnablePhysicsMoverPush
==============
*/
void G_ScrMoverCmd_EnablePhysicsMoverPush(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  const char *v7; 
  ComErrorCode v8; 
  int Int; 
  int v10; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2758, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( !BGMovingPlatforms::IsMovingPlatform(v4->s.number) )
  {
    v7 = "EnablePhysicsMoverPUsh must be called on a moving platform.";
    v8 = COM_ERR_6559;
LABEL_22:
    Scr_Error(v8, scrContext, v7);
    return;
  }
  if ( v4->s.lerp.pos.trType != TR_PHYSICS_SERVER_AUTH || v4->s.lerp.apos.trType != TR_PHYSICS_SERVER_AUTH )
  {
    v7 = "EnablePhysicsMoverPUsh must be called on a server-authoritative-physics moving platform.";
    v8 = COM_ERR_6560;
    goto LABEL_22;
  }
  Int = Scr_GetInt(scrContext, 0);
  v10 = v4->s.lerp.u.anonymous.data[2];
  if ( Int )
    v4->s.lerp.u.anonymous.data[2] = v10 | 0x200;
  else
    v4->s.lerp.u.anonymous.data[2] = v10 & 0xFFFFFDFF;
}

/*
==============
G_ScrMoverCmd_LinkedRotationSupported
==============
*/
__int64 G_ScrMoverCmd_LinkedRotationSupported(scrContext_t *scrContext, gentity_s *mSelf, const char *funcName)
{
  const char *v6; 
  EntityTagInfo *tagInfo; 
  const char *v9; 
  scr_string_t classname; 
  const char *v11; 
  const char *v12; 

  if ( !mSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1333, ASSERT_TYPE_ASSERT, "( mSelf )", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  if ( !funcName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1334, ASSERT_TYPE_ASSERT, "( funcName )", (const char *)&queryFormat, "funcName") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) )
  {
    tagInfo = mSelf->tagInfo;
    if ( tagInfo )
    {
      classname = mSelf->classname;
      if ( classname == scr_const.script_model || classname == scr_const.script_origin )
      {
        if ( tagInfo->animScriptedDataInUse )
        {
          v12 = j_va("%s: not supporting animscripted entities at the moment.", funcName);
          Scr_Error(COM_ERR_2348, scrContext, v12);
          return 0i64;
        }
        else if ( BgTrajectory::IsAnimatedTrajectory(&mSelf->s.lerp.apos) )
        {
          Scr_Error(COM_ERR_2349, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
          return 0i64;
        }
        else
        {
          return 1i64;
        }
      }
      else
      {
        v11 = j_va("%s: only supporting script models & script origins at the moment.", funcName);
        Scr_Error(COM_ERR_2347, scrContext, v11);
        return 0i64;
      }
    }
    else
    {
      v9 = j_va("%s: only use this function on linked entities.", funcName);
      Scr_Error(COM_ERR_2346, scrContext, v9);
      return 0i64;
    }
  }
  else
  {
    v6 = j_va("%s is not supported in this game mode", funcName);
    Scr_Error(COM_ERR_2345, scrContext, v6);
    return 0i64;
  }
}

/*
==============
G_ScrMoverCmd_RotateByInternal
==============
*/
void G_ScrMoverCmd_RotateByInternal(scrContext_t *scrContext, gentity_s *mSelf, int calculateLinkedRotation)
{
  TagInfoLinkedRotation *TagInfoLinkedRotation; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t vRot; 
  vec3_t vectorValue; 
  vec3_t angle; 
  tmat43_t<vec3_t> axis; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScrMoverCmd_RotateByInternal");
  Scr_GetVector(scrContext, 0, &vectorValue);
  G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
  if ( mSelf->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1436, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &mSelf->s.lerp.apos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &mSelf->s.lerp.apos )") )
      __debugbreak();
  }
  if ( calculateLinkedRotation )
  {
    if ( !mSelf->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1443, ASSERT_TYPE_ASSERT, "( mSelf->tagInfo )", (const char *)&queryFormat, "mSelf->tagInfo") )
      __debugbreak();
    if ( mSelf->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1444, ASSERT_TYPE_ASSERT, "( mSelf->s.eType == ET_SCRIPTMOVER )", (const char *)&queryFormat, "mSelf->s.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1445, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
      __debugbreak();
    TagInfoLinkedRotation = G_GetTagInfoLinkedRotation(mSelf);
    if ( !TagInfoLinkedRotation->hasLinkedRotation )
    {
      G_CalcFixedLinkTargetAxis(mSelf, &axis);
      AxisToAngles((const tmat33_t<vec3_t> *)&axis, &mSelf->r.currentAngles);
    }
    v7 = mSelf->r.currentAngles.v[1];
    angle.v[0] = mSelf->r.currentAngles.v[0];
    angle.v[2] = mSelf->r.currentAngles.v[2];
    angle.v[1] = v7;
    G_CalcTagConvertWorldToLocalAngles(mSelf, &mSelf->r.currentAngles, &mSelf->r.currentAngles);
    v8 = pfAccelTime;
    TagInfoLinkedRotation->hasLinkedRotation = 1;
    v9 = vectorValue.v[1] + mSelf->r.currentAngles.v[1];
    vRot.v[0] = vectorValue.v[0] + mSelf->r.currentAngles.v[0];
    v10 = vectorValue.v[2] + mSelf->r.currentAngles.v[2];
    vRot.v[1] = v9;
    vRot.v[2] = v10;
    G_ScrMover_RotateLinked(mSelf, &vRot, pfTotalTime, v8, pfDecelTime);
    G_SetAngle(mSelf, &angle, 1, 1);
    mSelf->s.lerp.apos.trType = TR_INTERPOLATE;
  }
  else
  {
    v11 = vectorValue.v[1] + mSelf->r.currentAngles.v[1];
    vRot.v[0] = vectorValue.v[0] + mSelf->r.currentAngles.v[0];
    v12 = vectorValue.v[2] + mSelf->r.currentAngles.v[2];
    vRot.v[1] = v11;
    vRot.v[2] = v12;
    G_ScrMover_Rotate(mSelf, &vRot, pfTotalTime, pfAccelTime, pfDecelTime);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ScrMoverCmd_RotateToInternal
==============
*/
void G_ScrMoverCmd_RotateToInternal(scrContext_t *scrContext, gentity_s *mSelf, int calculateLinkedRotation)
{
  TagInfoLinkedRotation *TagInfoLinkedRotation; 
  vec3_t *p_currentAngles; 
  float v8; 
  unsigned int v9; 
  bool v10; 
  float v12; 
  float v13; 
  float v15; 
  vec3_t *v16; 
  unsigned int v17; 
  bool v18; 
  float v20; 
  float v21; 
  float v23; 
  __int64 v24; 
  __int64 v25; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t angle; 
  vec3_t vRot; 
  vec3_t vectorValue; 
  tmat43_t<vec3_t> axis; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScrMoverCmd_RotateToInternal");
  Scr_GetVector(scrContext, 0, &vectorValue);
  G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
  if ( mSelf->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1282, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &mSelf->s.lerp.apos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &mSelf->s.lerp.apos )") )
      __debugbreak();
  }
  if ( calculateLinkedRotation )
  {
    if ( !mSelf->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1289, ASSERT_TYPE_ASSERT, "( mSelf->tagInfo )", (const char *)&queryFormat, "mSelf->tagInfo") )
      __debugbreak();
    if ( mSelf->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1290, ASSERT_TYPE_ASSERT, "( mSelf->s.eType == ET_SCRIPTMOVER )", (const char *)&queryFormat, "mSelf->s.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1291, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
      __debugbreak();
    TagInfoLinkedRotation = G_GetTagInfoLinkedRotation(mSelf);
    if ( !TagInfoLinkedRotation->hasLinkedRotation )
    {
      G_CalcFixedLinkTargetAxis(mSelf, &axis);
      AxisToAngles((const tmat33_t<vec3_t> *)&axis, &mSelf->r.currentAngles);
    }
    p_currentAngles = &mSelf->r.currentAngles;
    v8 = mSelf->r.currentAngles.v[1];
    angle.v[0] = mSelf->r.currentAngles.v[0];
    angle.v[2] = mSelf->r.currentAngles.v[2];
    angle.v[1] = v8;
    G_CalcTagConvertWorldToLocalAngles(mSelf, &mSelf->r.currentAngles, &mSelf->r.currentAngles);
    TagInfoLinkedRotation->hasLinkedRotation = 1;
    v9 = 0;
    v10 = 1;
    _XMM9 = 0i64;
    do
    {
      if ( !v10 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v12 = p_currentAngles->v[0];
      if ( v9 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v13 = (float)(*(float *)((char *)p_currentAngles->v + (char *)&vectorValue - (char *)&mSelf->r.currentAngles) - v12) * 0.0027777778;
      __asm { vroundss xmm7, xmm9, xmm2, 1 }
      if ( v9 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v15 = (float)((float)(v13 - *(float *)&_XMM7) * 360.0) + p_currentAngles->v[0];
      if ( v9 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      *(float *)((char *)p_currentAngles->v + (char *)&vRot - (char *)&mSelf->r.currentAngles) = v15;
      p_currentAngles = (vec3_t *)((char *)p_currentAngles + 4);
      v10 = ++v9 < 3;
    }
    while ( (int)v9 < 3 );
    G_ScrMover_RotateLinked(mSelf, &vRot, pfTotalTime, pfAccelTime, pfDecelTime);
    G_SetAngle(mSelf, &angle, 1, 1);
    mSelf->s.lerp.apos.trType = TR_INTERPOLATE;
  }
  else
  {
    v16 = &mSelf->r.currentAngles;
    v17 = 0;
    v18 = 1;
    _XMM9 = 0i64;
    do
    {
      if ( !v18 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v20 = v16->v[0];
      if ( v17 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v21 = (float)(*(float *)((char *)v16->v + (char *)&vectorValue - (char *)&mSelf->r.currentAngles) - v20) * 0.0027777778;
      __asm { vroundss xmm7, xmm9, xmm2, 1 }
      if ( v17 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v23 = (float)((float)(v21 - *(float *)&_XMM7) * 360.0) + v16->v[0];
      if ( v17 >= 3 )
      {
        LODWORD(v25) = 3;
        LODWORD(v24) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      *(float *)((char *)v16->v + (char *)&vRot - (char *)&mSelf->r.currentAngles) = v23;
      v16 = (vec3_t *)((char *)v16 + 4);
      v18 = ++v17 < 3;
    }
    while ( (int)v17 < 3 );
    G_ScrMover_Rotate(mSelf, &vRot, pfTotalTime, pfAccelTime, pfDecelTime);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ScrMover_AddRotate
==============
*/
void G_ScrMover_AddRotate(scrContext_t *scrContext, scr_entref_t entref, int iAxis)
{
  __int64 v3; 
  unsigned int entnum; 
  gentity_s *v6; 
  scr_string_t classname; 
  const char *v8; 
  double Float; 
  vec3_t *v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  char *v15; 
  float *v16; 
  float v17; 
  vec3_t *v18; 
  float v19; 
  float v20; 
  vec3_t *v21; 
  gentity_s *v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  float c; 
  float s; 
  gentity_s *gEnt; 
  vec3_t *v32; 
  char *v33; 
  vec3_t *v34; 
  vec3_t *angles; 
  trajectory_t *p_apos; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v38; 

  v3 = iAxis;
  gEnt = (gentity_s *)entref;
  entnum = entref.entnum;
  if ( (unsigned int)iAxis > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1577, ASSERT_TYPE_ASSERT, "( iAxis >= 0 && iAxis < 3 )", (const char *)&queryFormat, "iAxis >= 0 && iAxis < 3") )
    __debugbreak();
  if ( BYTE4(gEnt) )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v6 = NULL;
    gEnt = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1579, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v6 = &g_entities[entnum];
    gEnt = v6;
    classname = v6->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v8 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v8);
    }
  }
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    p_apos = &v6->s.lerp.apos;
    if ( BgTrajectory::IsAnimatedTrajectory(&v6->s.lerp.apos) )
    {
      Scr_Error(COM_ERR_2353, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
    }
    else
    {
      Float = Scr_GetFloat(scrContext, 0);
      FastSinCos(*(float *)&Float * 0.017453292, &s, &c);
      angles = &v6->r.currentAngles;
      AnglesToAxis(&v6->r.currentAngles, &axis);
      v10 = &v38.m[v3];
      v11 = 0;
      v34 = v10;
      v12 = 0i64;
      v13 = ((int)v3 + 1) % 3;
      v14 = ((int)v3 + 2) % 3;
      v15 = (char *)((char *)&axis.m[v3] - (char *)v10);
      v33 = v15;
      do
      {
        if ( (unsigned int)v3 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        if ( v11 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        v16 = &v10->v[v12];
        v17 = *(float *)&v15[(_QWORD)v16];
        if ( (unsigned int)v3 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        if ( v11 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        *v16 = v17;
        if ( v13 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = ((int)v3 + 1) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        v32 = &axis.m[v13];
        if ( v14 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = ((int)v3 + 2) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        v18 = &axis.m[v14];
        if ( v11 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
          LODWORD(v27) = 3;
          LODWORD(v24) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v24, v27) )
            __debugbreak();
        }
        v19 = (float)(s * v18->v[v12]) + (float)(c * axis.m[v13].v[v12]);
        if ( v13 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = ((int)v3 + 1) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        if ( v11 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        v38.m[v13].v[v12] = v19;
        if ( v14 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = ((int)v3 + 2) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        if ( v13 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = ((int)v3 + 1) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        if ( v11 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
          LODWORD(v28) = 3;
          LODWORD(v25) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v25, v28) )
            __debugbreak();
        }
        v20 = (float)(c * v18->v[v12]) - (float)(s * v32->v[v12]);
        if ( v14 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = ((int)v3 + 2) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        if ( v11 >= 3 )
        {
          LODWORD(v26) = 3;
          LODWORD(v23) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v26) )
            __debugbreak();
        }
        v15 = v33;
        v38.m[v14].v[v12] = v20;
        v10 = v34;
        ++v12;
        ++v11;
      }
      while ( (int)v11 < 3 );
      v21 = angles;
      AxisToAngles(&v38, angles);
      v22 = gEnt;
      p_apos->trType = TR_STATIONARY;
      v22->s.lerp.apos.trBase = *v21;
      SV_LinkEntity(v22);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2352, scrContext, "G_ScrMover_ProtoAddRotate: expect exactly one parameter.");
  }
}

/*
==============
G_ScrMover_ClearAnimatedTrajectory
==============
*/
void G_ScrMover_ClearAnimatedTrajectory(gentity_s *ent)
{
  bool v2; 
  const DObj *ServerDObjForEnt; 
  DObj *v4; 
  XAnimTree *Tree; 
  XAnimTree *v6; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScrMover_ClearAnimatedTrajectory");
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2322, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( ent->s.lerp.apos.trType == TR_ANIMATED_MOVER )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) )
      {
LABEL_14:
        ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
        v4 = (DObj *)ServerDObjForEnt;
        if ( ServerDObjForEnt )
        {
          Tree = DObjGetTree(ServerDObjForEnt);
          v6 = Tree;
          if ( Tree )
          {
            XAnimFreeAnimTreeByType(Tree);
            DObjSetTree(v4, NULL);
            if ( ent->pAnimTree == v6 )
              ent->pAnimTree = NULL;
          }
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2296, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
        {
          __debugbreak();
        }
        ent->s.lerp.pos.trType = TR_STATIONARY;
        ent->s.lerp.apos.trType = TR_STATIONARY;
        G_SetOriginAndAngle(ent, &ent->r.currentOrigin, &ent->r.currentAngles, 1, 1);
        goto LABEL_21;
      }
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )");
    }
    else
    {
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2330, ASSERT_TYPE_ASSERT, "( BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos ) )", (const char *)&queryFormat, "BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )");
    }
    if ( v2 )
      __debugbreak();
    goto LABEL_14;
  }
LABEL_21:
  Sys_ProfEndNamedEvent();
}

/*
==============
G_ScrMover_ClearServerAnim
==============
*/
void G_ScrMover_ClearServerAnim(gentity_s *ent)
{
  const DObj *ServerDObjForEnt; 
  DObj *v3; 
  XAnimTree *Tree; 
  XAnimTree *v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2293, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  v3 = (DObj *)ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    Tree = DObjGetTree(ServerDObjForEnt);
    v5 = Tree;
    if ( Tree )
    {
      XAnimFreeAnimTreeByType(Tree);
      DObjSetTree(v3, NULL);
      if ( ent->pAnimTree == v5 )
        ent->pAnimTree = NULL;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2296, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
  {
    __debugbreak();
  }
}

/*
==============
G_ScrMover_EnableScriptedAnim
==============
*/
void G_ScrMover_EnableScriptedAnim(gentity_s *const gent)
{
  gent->flags.m_flags[0] |= 0x80000000;
  if ( gent->handler == 8 )
  {
    gent->handler = 9;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 648, ASSERT_TYPE_ASSERT, "(gent->handler == ENT_HANDLER_SCRIPT_MOVER)", (const char *)&queryFormat, "gent->handler == ENT_HANDLER_SCRIPT_MOVER") )
      __debugbreak();
    gent->handler = 9;
  }
}

/*
==============
G_ScrMover_GetCommandTimes
==============
*/
void G_ScrMover_GetCommandTimes(scrContext_t *scrContext, float *pfTotalTime, float *pfAccelTime, float *pfDecelTime)
{
  double Float; 
  int NumParam; 
  double v10; 
  double v11; 
  float v12; 
  float v13; 

  Float = Scr_GetFloat(scrContext, 1u);
  *pfTotalTime = *(float *)&Float;
  if ( *(float *)&Float <= 0.0 )
  {
    Scr_ParamError(COM_ERR_2332, scrContext, 1u, "total time must be positive");
    *(float *)&Float = *pfTotalTime;
  }
  if ( *(float *)&Float < 0.001 )
    *pfTotalTime = 0.001;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam <= 2 )
  {
    *pfAccelTime = 0.0;
LABEL_13:
    LODWORD(v11) = 0;
    *pfDecelTime = 0.0;
    goto LABEL_14;
  }
  v10 = Scr_GetFloat(scrContext, 2u);
  *pfAccelTime = *(float *)&v10;
  if ( *(float *)&v10 < 0.0 )
    Scr_ParamError(COM_ERR_2333, scrContext, 2u, "accel time must be nonnegative");
  if ( NumParam <= 3 )
    goto LABEL_13;
  v11 = Scr_GetFloat(scrContext, 3u);
  *pfDecelTime = *(float *)&v11;
  if ( *(float *)&v11 < 0.0 )
  {
    Scr_ParamError(COM_ERR_2334, scrContext, 3u, "decel time must be nonnegative");
    *(float *)&v11 = *pfDecelTime;
  }
LABEL_14:
  v12 = *(float *)&v11 + *pfAccelTime;
  v13 = *pfTotalTime;
  if ( v12 > *pfTotalTime )
  {
    if ( v12 <= (float)(v13 * 1.0000005) )
      *pfTotalTime = v13 * 1.0000005;
    else
      Scr_Error(COM_ERR_2335, scrContext, "accel time plus decel time is greater than total time");
  }
}

/*
==============
G_ScrMover_GetPositionController
==============
*/
BgEntityComponents *G_ScrMover_GetPositionController(gentity_s *ent)
{
  if ( (ent->flags.m_flags[0] & 0x80000) == 0 )
    return &ent->c;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 107, ASSERT_TYPE_ASSERT, "( !ent->flags.TestFlag( BgEntityFlagsCommon::MOVER_SLIDE ) )", (const char *)&queryFormat, "!ent->flags.TestFlag( BgEntityFlagsCommon::MOVER_SLIDE )") )
    __debugbreak();
  return &ent->c;
}

/*
==============
G_ScrMover_GetSlideVelocity
==============
*/
void G_ScrMover_GetSlideVelocity(scrContext_t *scrContext, gentity_s *ent, int offset)
{
  if ( (ent->flags.m_flags[0] & 0x80000) != 0 )
    Scr_AddVector(scrContext, ent->c.mover.pos.pos2.v);
  else
    Scr_AddVector(scrContext, vec3_origin.v);
}

/*
==============
G_ScrMover_GravityMove
==============
*/
void G_ScrMover_GravityMove(gentity_s *mover, const vec3_t *velocity, const float totalTime)
{
  float v5; 
  GTrajectory v6; 

  if ( !mover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 535, ASSERT_TYPE_ASSERT, "( mover )", (const char *)&queryFormat, "mover") )
    __debugbreak();
  if ( ((LODWORD(velocity->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(velocity->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(velocity->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 536, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
    __debugbreak();
  if ( mover->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 540, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( trajectory ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( trajectory )") )
      __debugbreak();
  }
  mover->s.lerp.pos.trTime = level.time;
  Trajectory_SetTrBase(&mover->s.lerp.pos, &mover->r.currentOrigin);
  v5 = velocity->v[0];
  mover->s.lerp.pos.trDelta.v[0] = velocity->v[0];
  mover->s.lerp.pos.trDelta.v[1] = velocity->v[1];
  mover->s.lerp.pos.trDelta.v[2] = velocity->v[2];
  if ( ((LODWORD(v5) & 0x7F800000) == 2139095040 || (LODWORD(mover->s.lerp.pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(mover->s.lerp.pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 547, ASSERT_TYPE_SANITY, "( !IS_NAN( ( trajectory->trDelta )[0] ) && !IS_NAN( ( trajectory->trDelta )[1] ) && !IS_NAN( ( trajectory->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( trajectory->trDelta )[0] ) && !IS_NAN( ( trajectory->trDelta )[1] ) && !IS_NAN( ( trajectory->trDelta )[2] )") )
    __debugbreak();
  mover->s.lerp.pos.trDuration = (int)(float)(totalTime * 1000.0);
  mover->s.lerp.pos.trType = TR_GRAVITY;
  GTrajectory::GTrajectory(&v6, mover);
  BgTrajectory::EvaluatePosTrajectory(&v6, level.time, &mover->r.currentOrigin);
  SV_LinkEntity(mover);
}

/*
==============
G_ScrMover_InitScriptMover
==============
*/
void G_ScrMover_InitScriptMover(gentity_s *mSelf)
{
  int out; 

  mSelf->handler = 8;
  *(_QWORD *)&mSelf->hint.hintString = 0i64;
  mSelf->s.eType = ET_SCRIPTMOVER;
  *(_QWORD *)&mSelf->s.lerp.u.scriptMover.animIndex = 0i64;
  mSelf->s.lerp.u.anonymous.data[5] = 0;
  mSelf->s.lerp.u.anonymous.data[2] = 0;
  mSelf->s.staticState.player.stowedWeaponHandle.m_mapEntryId = 0;
  mSelf->r.svFlags = 0;
  mSelf->s.lerp.u.anonymous.data[0] = 2047;
  mSelf->s.lerp.u.anonymous.data[6] = 1000;
  Trajectory_SetTrBase(&mSelf->s.lerp.pos, &mSelf->r.currentOrigin);
  mSelf->s.lerp.pos.trType = TR_STATIONARY;
  mSelf->s.lerp.apos.trBase = mSelf->r.currentAngles;
  mSelf->s.lerp.apos.trType = TR_STATIONARY;
  mSelf->s.un.scriptMoverType = 0;
  mSelf->flags.m_flags[0] |= 0x200u;
  out = 0;
  if ( level.spawnVar.spawnVarsValid )
  {
    G_SpawnInt(0x259u, "0", &out);
    mSelf->s.lerp.u.anonymous.data[7] = out;
  }
  else
  {
    mSelf->s.lerp.u.anonymous.data[7] = 0;
  }
}

/*
==============
G_ScrMover_Move
==============
*/
void G_ScrMover_Move(gentity_s *pEnt, const vec3_t *vPos, const float fTotalTime, const float fAccelTime, const float fDecelTime)
{
  float v6; 
  BgEntityComponents *positionControl; 
  vec3_t inOutCurrPos; 

  pEnt->flags.m_flags[0] &= ~0x80000u;
  v6 = pEnt->r.currentOrigin.v[1];
  inOutCurrPos.v[0] = pEnt->r.currentOrigin.v[0];
  inOutCurrPos.v[2] = pEnt->r.currentOrigin.v[2];
  inOutCurrPos.v[1] = v6;
  positionControl = G_ScrMover_GetPositionController(pEnt);
  G_ScrMover_SetupMove(&pEnt->s.lerp.pos, vPos, fTotalTime, fAccelTime, fDecelTime, &inOutCurrPos, (mover_positions_t *)positionControl);
  SV_LinkEntity(pEnt);
}

/*
==============
G_ScrMover_MoveAxis
==============
*/
void G_ScrMover_MoveAxis(scrContext_t *scrContext, scr_entref_t entref, int iAxis)
{
  __int64 v3; 
  unsigned int entnum; 
  gentity_s *v6; 
  scr_string_t classname; 
  const char *v8; 
  double Float; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t vPos; 

  v3 = iAxis;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v6 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1190, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v6 = &g_entities[entnum];
    classname = v6->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v8 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v8);
    }
  }
  if ( v6->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2344, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    Float = Scr_GetFloat(scrContext, 0);
    G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
    v10 = v6->r.currentOrigin.v[1];
    vPos.v[0] = v6->r.currentOrigin.v[0];
    vPos.v[2] = v6->r.currentOrigin.v[2];
    vPos.v[1] = v10;
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v14) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v14, 3) )
        __debugbreak();
    }
    v11 = pfDecelTime;
    v12 = pfAccelTime;
    v13 = pfTotalTime;
    vPos.v[v3] = *(float *)&Float + vPos.v[v3];
    G_ScrMover_Move(v6, &vPos, v13, v12, v11);
  }
}

/*
==============
G_ScrMover_NotifyScriptItemPickup
==============
*/
void G_ScrMover_NotifyScriptItemPickup(gentity_s *ent, gentity_s *other)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 120, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 121, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  GScr_AddEntity(other);
  GScr_Notify(ent, scr_const.trigger, 1u);
  if ( other->client )
  {
    GScr_AddEntity(ent);
    GScr_Notify(other, scr_const.pickup, 1u);
  }
}

/*
==============
G_ScrMover_Reached
==============
*/
void G_ScrMover_Reached(gentity_s *pEnt)
{
  EntityTagInfo *tagInfo; 
  int v3; 
  TagInfoLinkedRotation *TagInfoLinkedRotation; 
  trType_t trType; 
  trajectory_t_secure *p_pos; 
  int time; 
  int v8; 
  int v9; 
  bool v10; 
  const DObj *ServerDObjForEnt; 
  const XAnimTree *Tree; 
  const XAnim_s *Anims; 
  double v16; 
  BgEntityComponents *PositionController; 
  int updated; 
  int v20; 
  double v23; 
  GTrajectory v25; 

  tagInfo = pEnt->tagInfo;
  v3 = 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && tagInfo )
  {
    TagInfoLinkedRotation = G_GetTagInfoLinkedRotation(pEnt);
    if ( !TagInfoLinkedRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 167, ASSERT_TYPE_ASSERT, "( linkedRotationData )", (const char *)&queryFormat, "linkedRotationData") )
      __debugbreak();
    trType = pEnt->s.lerp.pos.trType;
    p_pos = &pEnt->s.lerp.pos;
    time = level.time;
    v8 = 0;
    goto LABEL_9;
  }
  trType = pEnt->s.lerp.pos.trType;
  p_pos = &pEnt->s.lerp.pos;
  time = level.time;
  TagInfoLinkedRotation = (TagInfoLinkedRotation *)&pEnt->s.lerp.apos;
  v8 = 0;
  if ( trType == TR_STATIONARY || (v9 = 1, pEnt->s.lerp.pos.trTime + pEnt->s.lerp.pos.trDuration > level.time) )
LABEL_9:
    v9 = 0;
  if ( TagInfoLinkedRotation->aposLocal.trType == TR_STATIONARY || TagInfoLinkedRotation->aposLocal.trTime + TagInfoLinkedRotation->aposLocal.trDuration > time )
    v3 = 0;
  if ( trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( TagInfoLinkedRotation->aposLocal.trType == TR_ANIMATED_MOVER )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) )
        goto LABEL_23;
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )");
    }
    else
    {
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 186, ASSERT_TYPE_ASSERT, "( BgTrajectory::IsAnimatedTrajectory( angularTrajectory ) )", (const char *)&queryFormat, "BgTrajectory::IsAnimatedTrajectory( angularTrajectory )");
    }
    if ( v10 )
      __debugbreak();
LABEL_23:
    if ( v9 != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 187, ASSERT_TYPE_ASSERT, "( reachedPositionMove == reachedRotationMove )", (const char *)&queryFormat, "reachedPositionMove == reachedRotationMove") )
      __debugbreak();
    ServerDObjForEnt = Com_GetServerDObjForEnt(pEnt);
    if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 190, ASSERT_TYPE_ASSERT, "( dObj )", (const char *)&queryFormat, "dObj") )
      __debugbreak();
    Tree = DObjGetTree(ServerDObjForEnt);
    if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 193, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
      __debugbreak();
    LOBYTE(v8) = XAnimIsSimpleBlendTree(Tree) != 0;
    Anims = XAnimGetAnims(Tree);
    if ( !XAnimIsLooped(Anims, v8 + 1) && (v9 || v3) )
    {
      G_ScrMover_ClearAnimatedTrajectory(pEnt);
      if ( p_pos->trType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 205, ASSERT_TYPE_ASSERT, "( pEnt->s.lerp.pos.trType == TR_STATIONARY )", (const char *)&queryFormat, "pEnt->s.lerp.pos.trType == TR_STATIONARY") )
        __debugbreak();
      if ( pEnt->s.lerp.apos.trType )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 206, ASSERT_TYPE_ASSERT, "( pEnt->s.lerp.apos.trType == TR_STATIONARY )", (const char *)&queryFormat, "pEnt->s.lerp.apos.trType == TR_STATIONARY") )
          __debugbreak();
      }
      SV_LinkEntity(pEnt);
      _XMM9 = 0i64;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      pEnt->r.currentAngles.v[0] = (float)((float)(pEnt->r.currentAngles.v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      v16 = AngleNormalize360(pEnt->r.currentAngles.v[1]);
      pEnt->r.currentAngles.v[1] = *(float *)&v16;
      __asm { vroundss xmm3, xmm9, xmm2, 1 }
      pEnt->r.currentAngles.v[2] = (float)((float)(pEnt->r.currentAngles.v[2] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      GScr_Notify(pEnt, scr_const.movedone, 0);
      goto LABEL_51;
    }
    return;
  }
  if ( v9 )
  {
    PositionController = G_ScrMover_GetPositionController(pEnt);
    updated = G_ScrMover_UpdateMove(p_pos, (const mover_positions_t *)PositionController);
    GTrajectory::GTrajectory(&v25, pEnt);
    BgTrajectory::EvaluatePosTrajectory(&v25, level.time, &pEnt->r.currentOrigin);
    SV_LinkEntity(pEnt);
    if ( updated )
      GScr_Notify(pEnt, scr_const.movedone, 0);
  }
  if ( v3 )
  {
    v20 = G_ScrMover_UpdateMove(&TagInfoLinkedRotation->aposLocal, &pEnt->c.mover.angle);
    BgTrajectory::LegacyEvaluateTrajectory(&TagInfoLinkedRotation->aposLocal, level.time, &pEnt->r.currentAngles);
    if ( Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && tagInfo )
      G_CalcTagConvertLocalToWorldAngles(pEnt, &pEnt->r.currentAngles, &pEnt->r.currentAngles);
    SV_LinkEntity(pEnt);
    if ( v20 )
    {
      _XMM9 = 0i64;
      __asm { vroundss xmm2, xmm9, xmm1, 1 }
      pEnt->r.currentAngles.v[0] = (float)((float)(pEnt->r.currentAngles.v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
      v23 = AngleNormalize360(pEnt->r.currentAngles.v[1]);
      pEnt->r.currentAngles.v[1] = *(float *)&v23;
      __asm { vroundss xmm3, xmm9, xmm2, 1 }
      pEnt->r.currentAngles.v[2] = (float)((float)(pEnt->r.currentAngles.v[2] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
LABEL_51:
      GScr_Notify(pEnt, scr_const.rotatedone, 0);
    }
  }
}

/*
==============
G_ScrMover_Rotate
==============
*/
void G_ScrMover_Rotate(gentity_s *pEnt, const vec3_t *vRot, const float fTotalTime, const float fAccelTime, const float fDecelTime)
{
  float v5; 
  int v7; 
  vec3_t *p_trBase; 
  bool v9; 
  double v10; 
  vec3_t *inOutCurrPos; 
  mover_positions_t *positionControl; 
  vec3_t v13; 

  v5 = pEnt->r.currentAngles.v[1];
  v13.v[0] = pEnt->r.currentAngles.v[0];
  v13.v[2] = pEnt->r.currentAngles.v[2];
  v13.v[1] = v5;
  G_ScrMover_SetupMove(&pEnt->s.lerp.apos, vRot, fTotalTime, fAccelTime, fDecelTime, &v13, &pEnt->c.mover.angle);
  v7 = 0;
  p_trBase = &pEnt->s.lerp.apos.trBase;
  v9 = 1;
  do
  {
    if ( !v9 )
    {
      LODWORD(positionControl) = 3;
      LODWORD(inOutCurrPos) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inOutCurrPos, positionControl) )
        __debugbreak();
    }
    v10 = AngleNormalize360(p_trBase->v[0]);
    if ( (unsigned int)v7 >= 3 )
    {
      LODWORD(positionControl) = 3;
      LODWORD(inOutCurrPos) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inOutCurrPos, positionControl) )
        __debugbreak();
    }
    p_trBase->v[0] = *(float *)&v10;
    p_trBase = (vec3_t *)((char *)p_trBase + 4);
    v9 = (unsigned int)++v7 < 3;
  }
  while ( v7 < 3 );
  SV_LinkEntity(pEnt);
}

/*
==============
G_ScrMover_RotateAxis
==============
*/
void G_ScrMover_RotateAxis(scrContext_t *scrContext, scr_entref_t entref, int iAxis)
{
  __int64 v3; 
  unsigned int entnum; 
  gentity_s *v6; 
  scr_string_t classname; 
  const char *v8; 
  double Float; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t vRot; 

  v3 = iAxis;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v6 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1675, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v6 = &g_entities[entnum];
    classname = v6->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v8 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v8);
    }
  }
  if ( v6->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2354, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    Float = Scr_GetFloat(scrContext, 0);
    G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
    v10 = v6->r.currentAngles.v[1];
    vRot.v[0] = v6->r.currentAngles.v[0];
    vRot.v[2] = v6->r.currentAngles.v[2];
    vRot.v[1] = v10;
    if ( (unsigned int)v3 >= 3 )
    {
      LODWORD(v14) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v14, 3) )
        __debugbreak();
    }
    v11 = pfDecelTime;
    v12 = pfAccelTime;
    v13 = pfTotalTime;
    vRot.v[v3] = *(float *)&Float + vRot.v[v3];
    G_ScrMover_Rotate(v6, &vRot, v13, v12, v11);
  }
}

/*
==============
G_ScrMover_RotateLinked
==============
*/
void G_ScrMover_RotateLinked(gentity_s *pEnt, const vec3_t *vRot, const float fTotalTime, const float fAccelTime, const float fDecelTime)
{
  TagInfoLinkedRotation *TagInfoLinkedRotation; 
  float v8; 
  vec3_t inOutCurrPos; 

  if ( !pEnt->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 622, ASSERT_TYPE_ASSERT, "( pEnt->tagInfo )", (const char *)&queryFormat, "pEnt->tagInfo") )
    __debugbreak();
  if ( pEnt->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 623, ASSERT_TYPE_ASSERT, "( pEnt->s.eType == ET_SCRIPTMOVER )", (const char *)&queryFormat, "pEnt->s.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 624, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
    __debugbreak();
  TagInfoLinkedRotation = G_GetTagInfoLinkedRotation(pEnt);
  if ( !TagInfoLinkedRotation->hasLinkedRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 627, ASSERT_TYPE_ASSERT, "( linkedRotationData->hasLinkedRotation )", (const char *)&queryFormat, "linkedRotationData->hasLinkedRotation") )
    __debugbreak();
  v8 = pEnt->r.currentAngles.v[1];
  inOutCurrPos.v[0] = pEnt->r.currentAngles.v[0];
  inOutCurrPos.v[2] = pEnt->r.currentAngles.v[2];
  inOutCurrPos.v[1] = v8;
  G_ScrMover_SetupMove(&TagInfoLinkedRotation->aposLocal, vRot, fTotalTime, fAccelTime, fDecelTime, &inOutCurrPos, &pEnt->c.mover.angle);
  SV_LinkEntity(pEnt);
}

/*
==============
G_ScrMover_SetSlideVelocity
==============
*/
void G_ScrMover_SetSlideVelocity(scrContext_t *scrContext, gentity_s *ent, int offset)
{
  if ( (ent->flags.m_flags[0] & 0x80000) == 0 )
    Scr_Error(COM_ERR_2328, scrContext, "Cannot set slide velocity on an entity which is not doing MoveSlide()");
  Scr_GetVector(scrContext, 0, &ent->c.mover.pos.pos2);
}

/*
==============
G_ScrMover_SetupMove
==============
*/
void G_ScrMover_SetupMove(trajectory_t_secure *pTr, const vec3_t *vPos, const float fTotalTime, const float fAccelTime, const float fDecelTime, vec3_t *inOutCurrPos, mover_positions_t *positionControl)
{
  float v10; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  int v16; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t *p_pos1; 
  bool v27; 
  float midTime; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  int trDuration; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 

  if ( pTr->trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 268, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( pTr ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( pTr )") )
      __debugbreak();
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  if ( (float)(fTotalTime - 0.001) > (float)((float)level.frameDuration * 0.001) )
  {
    if ( pTr->trType )
      BgTrajectory::LegacyEvaluateTrajectory(pTr, level.time, inOutCurrPos);
    v10 = vPos->v[0] - inOutCurrPos->v[0];
    v14 = LODWORD(vPos->v[1]);
    *(float *)&v14 = vPos->v[1] - inOutCurrPos->v[1];
    v11 = v14;
    v13 = vPos->v[2] - inOutCurrPos->v[2];
  }
  else
  {
    v10 = vPos->v[0] - inOutCurrPos->v[0];
    v12 = LODWORD(vPos->v[1]);
    *(float *)&v12 = vPos->v[1] - inOutCurrPos->v[1];
    v11 = v12;
    v13 = vPos->v[2] - inOutCurrPos->v[2];
    if ( pTr->trType )
      BgTrajectory::LegacyEvaluateTrajectory(pTr, level.time, inOutCurrPos);
  }
  if ( fAccelTime >= 0.0020000001 || fDecelTime >= 0.0020000001 )
  {
    v18 = v11;
    positionControl->midTime = (float)(fTotalTime - fAccelTime) - fDecelTime;
    *(float *)&v18 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v10 * v10)) + (float)(v13 * v13));
    _XMM13 = v18;
    v19 = (float)((float)(fTotalTime * 2.0) - fAccelTime) - fDecelTime;
    positionControl->decelTime = fDecelTime;
    if ( v19 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 324, ASSERT_TYPE_ASSERT, "( (2.0f * fTotalTime) - fAccelTime - fDecelTime )", (const char *)&queryFormat, "(2.0f * fTotalTime) - fAccelTime - fDecelTime") )
      __debugbreak();
    v20 = (float)(*(float *)&v18 * 2.0) / v19;
    __asm
    {
      vcmpless xmm0, xmm13, cs:__real@80000000
      vblendvps xmm0, xmm13, xmm1, xmm0
    }
    v23 = (float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * v20;
    v24 = (float)(*(float *)&v11 * (float)(1.0 / *(float *)&_XMM0)) * v20;
    positionControl->speed = v20;
    v25 = (float)(v13 * (float)(1.0 / *(float *)&_XMM0)) * v20;
    if ( fAccelTime <= 0.0020000001 )
    {
      p_pos1 = &positionControl->pos1;
      positionControl->pos1 = *inOutCurrPos;
      v27 = positionControl->midTime > 0.0020000001;
      pTr->trTime = level.time;
      if ( v27 )
      {
        pTr->trDuration = (int)(float)(1000.0 * positionControl->midTime);
        Trajectory_SetTrBase(pTr, inOutCurrPos);
        midTime = positionControl->midTime;
        v29 = midTime * v23;
        v30 = midTime * v24;
        v31 = midTime * v25;
        if ( !pTr->trDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 353, ASSERT_TYPE_ASSERT, "( pTr->trDuration )", (const char *)&queryFormat, "pTr->trDuration") )
          __debugbreak();
        v32 = 1000.0 / (float)pTr->trDuration;
        v37 = v29 * v32;
        pTr->trDelta.v[0] = v29 * v32;
        pTr->trDelta.v[1] = v30 * v32;
        pTr->trDelta.v[2] = v31 * v32;
        if ( (COERCE_UNSIGNED_INT(v29 * v32) & 0x7F800000) == 2139095040 || (v37 = v30 * v32, (COERCE_UNSIGNED_INT(v30 * v32) & 0x7F800000) == 2139095040) || (v37 = v31 * v32, (COERCE_UNSIGNED_INT(v31 * v32) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 356, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v37) )
            __debugbreak();
        }
        pTr->trType = TR_LINEAR_STOP;
      }
      else
      {
        pTr->trDuration = (int)(float)(positionControl->decelTime * 1000.0);
        Trajectory_SetTrBase(pTr, inOutCurrPos);
        v38 = (float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * v20;
        pTr->trDelta.v[0] = v23;
        pTr->trDelta.v[1] = v24;
        pTr->trDelta.v[2] = v25;
        if ( (LODWORD(v23) & 0x7F800000) == 2139095040 || (v38 = v24, (LODWORD(v24) & 0x7F800000) == 2139095040) || (v38 = v25, (LODWORD(v25) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 367, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v38) )
            __debugbreak();
        }
        pTr->trType = TR_DECELERATE;
      }
    }
    else
    {
      pTr->trTime = level.time;
      pTr->trDuration = (int)(float)(fAccelTime * 1000.0);
      Trajectory_SetTrBase(pTr, inOutCurrPos);
      v36 = (float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * v20;
      pTr->trDelta.v[0] = v23;
      pTr->trDelta.v[1] = v24;
      pTr->trDelta.v[2] = v25;
      if ( (LODWORD(v23) & 0x7F800000) == 2139095040 || (v36 = v24, (LODWORD(v24) & 0x7F800000) == 2139095040) || (v36 = v25, (LODWORD(v25) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 336, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v36) )
          __debugbreak();
      }
      pTr->trType = TR_ACCELERATE;
      p_pos1 = &positionControl->pos1;
      BgTrajectory::LegacyEvaluateTrajectory(pTr, pTr->trDuration + level.time, &positionControl->pos1);
    }
    v33 = positionControl->midTime;
    positionControl->pos2.v[0] = (float)(v33 * v23) + p_pos1->v[0];
    positionControl->pos2.v[1] = (float)(v33 * v24) + p_pos1->v[1];
    positionControl->pos2.v[2] = (float)(v33 * v25) + p_pos1->v[2];
    positionControl->pos3 = *vPos;
    if ( !pTr->trTime )
    {
      trDuration = pTr->trDuration;
      pTr->trTime = 1;
      if ( trDuration > 1 )
        pTr->trDuration = trDuration - 1;
    }
    BgTrajectory::LegacyEvaluateTrajectory(pTr, level.time, inOutCurrPos);
  }
  else
  {
    pTr->trTime = level.time;
    pTr->trDuration = (int)(float)(fTotalTime * 1000.0);
    positionControl->midTime = fTotalTime;
    positionControl->decelTime = 0.0;
    positionControl->pos3 = *vPos;
    Trajectory_SetTrBase(pTr, inOutCurrPos);
    if ( !pTr->trDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 301, ASSERT_TYPE_ASSERT, "( pTr->trDuration )", (const char *)&queryFormat, "pTr->trDuration") )
      __debugbreak();
    v15 = 1000.0 / (float)pTr->trDuration;
    v35 = v10 * v15;
    pTr->trDelta.v[0] = v10 * v15;
    pTr->trDelta.v[1] = *(float *)&v11 * v15;
    pTr->trDelta.v[2] = v13 * v15;
    if ( (COERCE_UNSIGNED_INT(v10 * v15) & 0x7F800000) == 2139095040 || (v35 = *(float *)&v11 * v15, (COERCE_UNSIGNED_INT(*(float *)&v11 * v15) & 0x7F800000) == 2139095040) || (v35 = v13 * v15, (COERCE_UNSIGNED_INT(v13 * v15) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 304, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v35) )
        __debugbreak();
    }
    pTr->trType = TR_LINEAR_STOP;
    BgTrajectory::LegacyEvaluateTrajectory(pTr, level.time, inOutCurrPos);
    if ( !pTr->trTime )
    {
      v16 = pTr->trDuration;
      pTr->trTime = 1;
      if ( v16 > 1 )
        pTr->trDuration = v16 - 1;
    }
  }
}

/*
==============
G_ScrMover_SetupMoveSpeed
==============
*/
void G_ScrMover_SetupMoveSpeed(trajectory_t *pTr, const vec3_t *vSpeed, const float fTotalTime, const float fAccelTime, const float fDecelTime, vec3_t *inOutCurrPos, mover_positions_t *positionControl)
{
  float v9; 
  vec3_t *p_pos3; 
  int time; 
  float v12; 
  vec3_t *p_pos1; 
  bool v14; 
  float v15; 
  float v16; 
  float midTime; 
  float v18; 
  float v19; 
  float v20; 
  float decelTime; 
  float v22; 
  int v23; 
  float v24; 
  float v25; 
  __int64 v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  char tr[40]; 

  if ( pTr->trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 419, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( pTr ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( pTr )") )
      __debugbreak();
  }
  if ( pTr->trType )
    BgTrajectory::LegacyEvaluateTrajectory(pTr, level.time, inOutCurrPos);
  if ( fAccelTime == 0.0 && fDecelTime == 0.0 )
  {
    pTr->trTime = level.time;
    pTr->trDuration = (int)(float)(fTotalTime * 1000.0);
    positionControl->midTime = fTotalTime;
    positionControl->decelTime = 0.0;
    pTr->trBase = *inOutCurrPos;
    v9 = vSpeed->v[0];
    pTr->trDelta.v[0] = vSpeed->v[0];
    pTr->trDelta.v[1] = vSpeed->v[1];
    pTr->trDelta.v[2] = vSpeed->v[2];
    v27 = v9;
    if ( (LODWORD(v9) & 0x7F800000) == 2139095040 || (v27 = pTr->trDelta.v[1], (LODWORD(v27) & 0x7F800000) == 2139095040) || (v27 = pTr->trDelta.v[2], (LODWORD(v27) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 437, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v27) )
        __debugbreak();
    }
    pTr->trType = TR_LINEAR_STOP;
    BgTrajectory::LegacyEvaluateTrajectory(pTr, level.time, inOutCurrPos);
    p_pos3 = &positionControl->pos3;
    time = level.time + pTr->trDuration;
  }
  else
  {
    positionControl->decelTime = fDecelTime;
    positionControl->midTime = (float)(fTotalTime - fAccelTime) - fDecelTime;
    positionControl->speed = fsqrt((float)((float)(vSpeed->v[0] * vSpeed->v[0]) + (float)(vSpeed->v[1] * vSpeed->v[1])) + (float)(vSpeed->v[2] * vSpeed->v[2]));
    if ( fAccelTime == 0.0 )
    {
      p_pos1 = &positionControl->pos1;
      positionControl->pos1 = *inOutCurrPos;
      v14 = positionControl->midTime == 0.0;
      pTr->trTime = level.time;
      if ( v14 )
      {
        pTr->trDuration = (int)(float)(1000.0 * positionControl->decelTime);
        pTr->trBase = *inOutCurrPos;
        v16 = vSpeed->v[0];
        pTr->trDelta.v[0] = vSpeed->v[0];
        pTr->trDelta.v[1] = vSpeed->v[1];
        pTr->trDelta.v[2] = vSpeed->v[2];
        v30 = v16;
        if ( (LODWORD(v16) & 0x7F800000) == 2139095040 || (v30 = pTr->trDelta.v[1], (LODWORD(v30) & 0x7F800000) == 2139095040) || (v30 = pTr->trDelta.v[2], (LODWORD(v30) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 486, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v30) )
            __debugbreak();
        }
        pTr->trType = TR_DECELERATE;
      }
      else
      {
        pTr->trDuration = (int)(float)(1000.0 * positionControl->midTime);
        pTr->trBase = *inOutCurrPos;
        v15 = vSpeed->v[0];
        pTr->trDelta.v[0] = vSpeed->v[0];
        pTr->trDelta.v[1] = vSpeed->v[1];
        pTr->trDelta.v[2] = vSpeed->v[2];
        v29 = v15;
        if ( (LODWORD(v15) & 0x7F800000) == 2139095040 || (v29 = pTr->trDelta.v[1], (LODWORD(v29) & 0x7F800000) == 2139095040) || (v29 = pTr->trDelta.v[2], (LODWORD(v29) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 476, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v29) )
            __debugbreak();
        }
        pTr->trType = TR_LINEAR_STOP;
      }
    }
    else
    {
      pTr->trTime = level.time;
      pTr->trDuration = (int)(float)(fAccelTime * 1000.0);
      pTr->trBase = *inOutCurrPos;
      v12 = vSpeed->v[0];
      pTr->trDelta.v[0] = vSpeed->v[0];
      pTr->trDelta.v[1] = vSpeed->v[1];
      pTr->trDelta.v[2] = vSpeed->v[2];
      v28 = v12;
      if ( (LODWORD(v12) & 0x7F800000) == 2139095040 || (v28 = pTr->trDelta.v[1], (LODWORD(v28) & 0x7F800000) == 2139095040) || (v28 = pTr->trDelta.v[2], (LODWORD(v28) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 459, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v28) )
          __debugbreak();
      }
      pTr->trType = TR_ACCELERATE;
      p_pos1 = &positionControl->pos1;
      BgTrajectory::LegacyEvaluateTrajectory(pTr, pTr->trDuration + level.time, &positionControl->pos1);
    }
    midTime = positionControl->midTime;
    v18 = (float)(midTime * vSpeed->v[0]) + p_pos1->v[0];
    positionControl->pos2.v[0] = v18;
    v19 = (float)(midTime * vSpeed->v[1]) + p_pos1->v[1];
    positionControl->pos2.v[1] = v19;
    v20 = (float)(midTime * vSpeed->v[2]) + p_pos1->v[2];
    positionControl->pos2.v[2] = v20;
    decelTime = positionControl->decelTime;
    if ( positionControl->decelTime == 0.0 )
    {
      positionControl->pos3.v[0] = v18;
      *(_QWORD *)&positionControl->pos3.y = *(_QWORD *)&positionControl->pos2.y;
    }
    else
    {
      v22 = vSpeed->v[1];
      *(_DWORD *)&tr[4] = level.time;
      v23 = (int)(float)(decelTime * 1000.0);
      v24 = vSpeed->v[0];
      *(_DWORD *)&tr[8] = v23;
      *(float *)&v26 = v24;
      *(_DWORD *)tr = 9;
      *(float *)&tr[12] = v18;
      v25 = vSpeed->v[2];
      *(float *)&tr[16] = v19;
      *(float *)&tr[20] = v20;
      *(float *)&tr[24] = v24;
      *(float *)&tr[28] = v22;
      *(float *)&tr[32] = v25;
      if ( (LODWORD(v24) & 0x7F800000) == 2139095040 || (*(float *)&v26 = v22, (LODWORD(v22) & 0x7F800000) == 2139095040) || (*(float *)&v26 = v25, (LODWORD(v25) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 504, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr.trDelta )[0] ) && !IS_NAN( ( tr.trDelta )[1] ) && !IS_NAN( ( tr.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr.trDelta )[0] ) && !IS_NAN( ( tr.trDelta )[1] ) && !IS_NAN( ( tr.trDelta )[2] )", v26, *(_QWORD *)tr, *(_OWORD *)&tr[8], *(_OWORD *)&tr[24]) )
          __debugbreak();
      }
      BgTrajectory::LegacyEvaluateTrajectory((const trajectory_t_secure *)tr, *(_DWORD *)&tr[8] + level.time, &positionControl->pos3);
    }
    time = level.time;
    p_pos3 = inOutCurrPos;
  }
  BgTrajectory::LegacyEvaluateTrajectory(pTr, time, p_pos3);
}

/*
==============
G_ScrMover_SpawnArms
==============
*/
void G_ScrMover_SpawnArms(gentity_s *const mSelf)
{
  scrContext_t *v2; 
  unsigned int NumParam; 
  const char *v4; 
  scr_entref_t EntityRef; 
  gentity_s *Entity; 
  const char *v7; 
  scr_string_t targetname; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  vec3_t vectorValue; 

  if ( !mSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 776, ASSERT_TYPE_ASSERT, "( ( mSelf != nullptr ) )", "%s\n\t( mSelf ) = %p", "( mSelf != nullptr )", NULL) )
    __debugbreak();
  G_ScrMover_InitScriptMover(mSelf);
  if ( level.spawnVar.spawnVarsValid )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7030, 6172i64);
  v2 = ScriptContext_Server();
  NumParam = Scr_GetNumParam(v2);
  if ( NumParam != 5 )
  {
    G_FreeEntity(mSelf);
    v4 = j_va("Spawn() with 'script_arms' expects 5 arguments, given %d. Usage: Spawn( \"script_arms\", <origin>, <spawnflags>, <forceNoCollision>, <character entity> )\n", NumParam);
    Scr_Error(COM_ERR_6224, v2, v4);
  }
  EntityRef = Scr_GetEntityRef(v2, 4u);
  Entity = GetEntity(EntityRef);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 801, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( EntityRef.entnum == -1 || (int)EntityRef.entnum >= level.maxclients )
  {
    G_FreeEntity(mSelf);
    v7 = j_va("Spawn() with 'script_arms' called with invalid client id %d (level max is currently %d)\n", EntityRef.entnum, (unsigned int)level.maxclients);
    Scr_Error(COM_ERR_6225, v2, v7);
  }
  if ( !G_Utils_IsClientOrAgent(Entity) )
  {
    targetname = Entity->targetname;
    if ( targetname )
      v9 = SL_ConvertToString(targetname);
    else
      v9 = "<undefined>";
    v10 = SL_ConvertToString(Entity->classname);
    v11 = j_va("SetOnWallAnimConditional(): Only valid on players or agents; called on entity %i at %.0f %.0f %.0f classname %s targetname %s\n", EntityRef.entnum, Entity->r.currentOrigin.v[0], Entity->r.currentOrigin.v[1], Entity->r.currentOrigin.v[2], v10, v9);
    Scr_Error(COM_ERR_6226, v2, v11);
  }
  if ( !SV_ClientMP_IsClientConnected(EntityRef.entnum) )
  {
    G_FreeEntity(mSelf);
    v12 = j_va("Spawn() with 'script_arms' given client %d, which is not currently connected!\n", EntityRef.entnum);
    Scr_Error(COM_ERR_2603, v2, v12);
  }
  mSelf->s.staticState.player.stowedWeaponHandle.m_mapEntryId = EntityRef.entnum;
  mSelf->s.clientNum = EntityRef.entnum;
  Scr_GetVector(v2, 1u, &vectorValue);
  G_SetOrigin(mSelf, &vectorValue, 1, 1);
  mSelf->r.svFlags |= 4u;
  mSelf->s.un.scriptMoverType = 4;
  G_DObjUpdate(mSelf, 1);
  G_ScrMover_EnableScriptedAnim(mSelf);
}

/*
==============
G_ScrMover_SpawnBrushModel
==============
*/
void G_ScrMover_SpawnBrushModel(gentity_s *self)
{
  vec3_t trBase; 

  if ( SV_Game_SetBrushModel(self) )
  {
    G_ScrMover_InitScriptMover(self);
    SV_LinkEntity(self);
    if ( (self->spawnflags & 1) != 0 )
      self->flags.m_flags[0] |= 0xC0u;
  }
  else
  {
    Trajectory_GetTrBase(&self->s.lerp.pos, &trBase);
    Com_PrintError(1, "Killing script_brushmodel at (%f %f %f) because the brush model is invalid.\n", trBase.v[0], trBase.v[1], trBase.v[2]);
    G_FreeEntity(self);
    memset(&trBase, 0, sizeof(trBase));
  }
}

/*
==============
G_ScrMover_SpawnOrigin
==============
*/
void G_ScrMover_SpawnOrigin(gentity_s *mSelf)
{
  G_ScrMover_InitScriptMover(mSelf);
  SV_LinkEntity(mSelf);
  mSelf->r.svFlags |= 1u;
}

/*
==============
G_ScrMover_SpawnScriptModel
==============
*/
void G_ScrMover_SpawnScriptModel(gentity_s *mSelf)
{
  G_ScrMover_InitScriptMover(mSelf);
  mSelf->r.svFlags |= 4u;
  G_DObjUpdate(mSelf, 1);
  if ( (mSelf->spawnflags & 8) != 0 )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&mSelf->s.lerp.eFlags, GameModeFlagValues::ms_spValue, 0x14u);
  G_ScrMover_EnableScriptedAnim(mSelf);
}

/*
==============
G_ScrMover_SpawnWeapon
==============
*/
void G_ScrMover_SpawnWeapon(gentity_s *mSelf)
{
  scrContext_t *v2; 
  unsigned int Int; 
  char *v4; 
  GWeaponMap *Instance; 
  const char *v6; 
  GWeaponMap *v7; 
  DObj *ServerDObjForEnt; 
  DObj *v9; 
  int out; 
  bool outIsAlternate; 
  char *name; 
  Weapon result; 
  Weapon r_weapon; 

  if ( !mSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 855, ASSERT_TYPE_ASSERT, "( mSelf )", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  v2 = ScriptContext_Server();
  G_ScrMover_InitScriptMover(mSelf);
  if ( level.spawnVar.spawnVarsValid )
  {
    if ( G_SpawnInt(0x200u, (const char *)&queryFormat.fmt + 3, &out) )
    {
      mSelf->s.un.scriptMoverType = 5;
      Int = out;
      if ( (unsigned int)out > 0x31 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7230, 346i64, mSelf->r.currentOrigin.v[0], mSelf->r.currentOrigin.v[1], mSelf->r.currentOrigin.v[2], 50, out);
        mSelf->s.staticState.player.stowedWeaponHandle.m_mapEntryId = out;
        goto LABEL_23;
      }
LABEL_16:
      mSelf->s.staticState.player.stowedWeaponHandle.m_mapEntryId = Int;
      goto LABEL_23;
    }
    if ( G_LevelSpawnString(0x49Fu, "none", (const char **)&name) )
    {
      v4 = name;
      mSelf->s.un.scriptMoverType = 6;
      r_weapon = *G_Weapon_GetWeaponForName(&result, v4);
      Instance = GWeaponMap::GetInstance();
      BG_SetWeaponForEntity(Instance, &mSelf->s, &r_weapon);
      G_DObjUpdate(mSelf, 1);
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE72B8, 347i64, mSelf->r.currentOrigin.v[0], mSelf->r.currentOrigin.v[1], mSelf->r.currentOrigin.v[2]);
    }
  }
  else
  {
    if ( Scr_GetNumParam(v2) < 5 )
      Scr_Error(COM_ERR_2329, v2, "USAGE: spawn( \"script_weapon\", <origin>, <spawnflags>, <forceNoCollision>, <weaponNameOrId> )");
    if ( Scr_GetType(v2, 4u) == VAR_INTEGER )
    {
      mSelf->s.un.scriptMoverType = 5;
      Int = Scr_GetInt(v2, 4u);
      out = Int;
      if ( Int > 0x31 )
      {
        v6 = j_va("Invalid index specified for client weapon - valid range is [0,%d) value is %d", 50i64, Int);
        Scr_Error(COM_ERR_2330, v2, v6);
        Int = out;
      }
      goto LABEL_16;
    }
    if ( Scr_GetType(v2, 4u) )
    {
      mSelf->s.un.scriptMoverType = 6;
      GScr_Main_GetWeaponParam(v2, 4u, &r_weapon, &outIsAlternate);
      v7 = GWeaponMap::GetInstance();
      BG_SetWeaponForEntity(v7, &mSelf->s, &r_weapon);
      G_DObjUpdate(mSelf, 1);
      ServerDObjForEnt = Com_GetServerDObjForEnt(mSelf);
      v9 = ServerDObjForEnt;
      if ( ServerDObjForEnt )
      {
        BG_UpdateWeaponHidePartBitsForDObj(ServerDObjForEnt, &r_weapon, 0, 0);
        BG_UpdatedWeaponBones(&r_weapon, v9, 0);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 918, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      {
        __debugbreak();
      }
    }
    else
    {
      Scr_Error(COM_ERR_2331, v2, "USAGE: spawn( \"script_weapon\", <origin>, <spawnflags>, <weaponNameOrId> )\nINVALID ARGUMENT: weaponNameOrId must be a string name of a weapon or an index specifying which client weapon to use\n");
    }
  }
LABEL_23:
  SV_LinkEntity(mSelf);
}

/*
==============
G_ScrMover_Touch
==============
*/
void G_ScrMover_Touch(gentity_s *ent, gentity_s *other, int bTouched)
{
  gclient_s *client; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 136, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 137, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( (!bTouched || (client = other->client) == NULL || !client->bDisableAutoPickup) && (ent->flags.m_flags[0] & 0x2000000) != 0 )
  {
    if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 121, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
      __debugbreak();
    GScr_AddEntity(other);
    GScr_Notify(ent, scr_const.trigger, 1u);
    if ( other->client )
    {
      GScr_AddEntity(ent);
      GScr_Notify(other, scr_const.pickup, 1u);
    }
    if ( (ent->spawnflags & 0x10) == 0 )
      G_FreeEntity(ent);
  }
}

/*
==============
G_ScrMover_UpdateMove
==============
*/
__int64 G_ScrMover_UpdateMove(trajectory_t_secure *pTr, const mover_positions_t *positionControl)
{
  int v4; 
  trType_t trType; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float speed; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  vec3_t result; 
  __int64 v25; 

  v25 = -2i64;
  if ( pTr->trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 48, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( pTr ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( pTr )") )
      __debugbreak();
  }
  v4 = (int)(float)(1000.0 * positionControl->midTime);
  trType = pTr->trType;
  if ( pTr->trType == TR_ACCELERATE )
  {
    if ( v4 > 0 )
    {
      pTr->trTime = level.time;
      pTr->trDuration = v4;
      Trajectory_SetTrBase(pTr, &positionControl->pos1);
      v6 = positionControl->pos2.v[1] - positionControl->pos1.v[1];
      v7 = positionControl->pos2.v[2] - positionControl->pos1.v[2];
      v8 = 1000.0 / (float)v4;
      v9 = (float)(positionControl->pos2.v[0] - positionControl->pos1.v[0]) * v8;
      pTr->trDelta.v[0] = v9;
      pTr->trDelta.v[1] = v6 * v8;
      pTr->trDelta.v[2] = v7 * v8;
      v22 = v9;
      if ( (LODWORD(v9) & 0x7F800000) == 2139095040 || (v22 = v6 * v8, (COERCE_UNSIGNED_INT(v6 * v8) & 0x7F800000) == 2139095040) || (v22 = v7 * v8, (COERCE_UNSIGNED_INT(v7 * v8) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 65, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v22) )
          __debugbreak();
      }
      pTr->trType = TR_LINEAR_STOP;
      return 0i64;
    }
  }
  else if ( trType != TR_LINEAR_STOP )
  {
    goto LABEL_23;
  }
  if ( positionControl->decelTime <= 0.0 )
  {
LABEL_23:
    if ( trType == TR_GRAVITY || (unsigned int)(trType - 24) <= 1 )
      BgTrajectory::LegacyEvaluateTrajectory(pTr, level.time, &result);
    else
      result = positionControl->pos3;
    Trajectory_SetTrBase(pTr, &result);
    pTr->trTime = level.time;
    pTr->trType = TR_STATIONARY;
    memset(&result, 0, sizeof(result));
    return 1i64;
  }
  pTr->trTime = level.time;
  pTr->trDuration = (int)(float)(1000.0 * positionControl->decelTime);
  Trajectory_SetTrBase(pTr, &positionControl->pos2);
  v11 = positionControl->pos3.v[0] - positionControl->pos2.v[0];
  v13 = LODWORD(positionControl->pos3.v[1]);
  v12 = positionControl->pos3.v[1] - positionControl->pos2.v[1];
  v14 = positionControl->pos3.v[2] - positionControl->pos2.v[2];
  *(float *)&v13 = fsqrt((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v14 * v14));
  _XMM4 = v13;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  speed = positionControl->speed;
  v19 = (float)(v11 * (float)(1.0 / *(float *)&_XMM0)) * speed;
  v20 = (float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * speed;
  v21 = (float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * speed;
  pTr->trDelta.v[0] = v19;
  pTr->trDelta.v[1] = v20;
  pTr->trDelta.v[2] = v21;
  v23 = v19;
  if ( (LODWORD(v19) & 0x7F800000) == 2139095040 || (v23 = (float)(v12 * (float)(1.0 / *(float *)&_XMM0)) * speed, (LODWORD(v20) & 0x7F800000) == 2139095040) || (v23 = (float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * speed, (LODWORD(v21) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 81, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )", v23) )
      __debugbreak();
  }
  pTr->trType = TR_DECELERATE;
  return 0i64;
}

