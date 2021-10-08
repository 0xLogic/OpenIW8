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
  float fmt; 
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
    __asm
    {
      vmovss  xmm0, [rsp+78h+pfDecelTime]
      vmovss  xmm3, [rsp+78h+pfAccelTime]; fAccelTime
      vmovss  xmm2, [rsp+78h+pfTotalTime]; fTotalTime
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    G_ScrMover_Move(v4, &vectorValue, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt);
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
  const char *v16; 
  int v18; 
  int v19; 
  int v20; 
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
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+68h+vectorValue]
    vmovss  xmm0, dword ptr [rsp+68h+vectorValue+8]
    vmovss  xmm1, dword ptr [rsp+68h+vectorValue+4]
    vmovss  [rsp+68h+var_38], xmm4
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm { vmovss  [rsp+68h+var_38], xmm1 }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm { vmovss  [rsp+68h+var_38], xmm0 }
  if ( (v20 & 0x7F800000) == 2139095040 )
  {
LABEL_17:
    __asm
    {
      vcvtss2sd xmm2, xmm1, xmm1
      vcvtss2sd xmm1, xmm4, xmm4
      vcvtss2sd xmm3, xmm0, xmm0
      vmovq   rdx, xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    v16 = j_va("invalid velocity parameter in movegravity command: %f %f %f", _RDX, _R8, _R9);
    Scr_Error(COM_ERR_2339, scrContext, v16);
  }
  if ( v4->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2340, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm { vmovaps xmm2, xmm0; totalTime }
    G_ScrMover_GravityMove(v4, &vectorValue, *(const float *)&_XMM2);
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
  scr_string_t classname; 
  const char *v8; 
  const char *v19; 
  int v27; 
  int v28; 
  int v29; 
  vec3_t v30; 
  vec3_t vectorValue; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    _RDI = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1139, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RDI = &g_entities[entnum];
    classname = _RDI->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v8 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v8);
    }
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm6, xmm0 }
  Scr_GetVector(scrContext, 2u, &v30);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+88h+var_50]
    vmovss  xmm0, dword ptr [rsp+88h+var_50+8]
    vmovss  xmm1, dword ptr [rsp+88h+var_50+4]
    vmovss  [rsp+88h+var_58], xmm4
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm { vmovss  [rsp+88h+var_58], xmm1 }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm { vmovss  [rsp+88h+var_58], xmm0 }
  if ( (v29 & 0x7F800000) == 2139095040 )
  {
LABEL_17:
    __asm
    {
      vcvtss2sd xmm2, xmm1, xmm1
      vcvtss2sd xmm1, xmm4, xmm4
      vcvtss2sd xmm3, xmm0, xmm0
      vmovq   rdx, xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    v19 = j_va("invalid velocity parameter in moveslide command: %f %f %f", _RDX, _R8, _R9);
    Scr_Error(COM_ERR_2341, scrContext, v19);
  }
  if ( _RDI->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2342, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    _RDI->flags.m_flags[0] |= 0x80000u;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+var_50]
      vmovss  dword ptr [rdi+1D8h], xmm0
      vmovss  xmm1, dword ptr [rsp+88h+var_50+4]
      vmovss  dword ptr [rdi+1DCh], xmm1
      vmovss  xmm0, dword ptr [rsp+88h+var_50+8]
      vmovss  dword ptr [rdi+1E0h], xmm0
      vmovss  xmm1, dword ptr [rsp+88h+vectorValue]
      vmovss  dword ptr [rdi+1C0h], xmm1
      vmovss  xmm0, dword ptr [rsp+88h+vectorValue+4]
      vmovss  dword ptr [rdi+1C4h], xmm0
      vmovss  xmm1, dword ptr [rsp+88h+vectorValue+8]
      vmovss  dword ptr [rdi+1C8h], xmm1
      vmovss  dword ptr [rdi+1CCh], xmm6
      vmovss  dword ptr [rdi+1D0h], xmm6
      vmovss  dword ptr [rdi+1D4h], xmm6
    }
    _RDI->s.lerp.pos.trType = TR_INTERPOLATE;
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
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
    _RAX = G_GetTagInfoLinkedRotation(v4);
    _RAX->hasLinkedRotation = 1;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+vectorValue]
      vmovss  dword ptr [rax+0Ch], xmm0
      vmovss  xmm1, dword ptr [rsp+68h+vectorValue+4]
      vmovss  dword ptr [rax+10h], xmm1
      vmovss  xmm0, dword ptr [rsp+68h+vectorValue+8]
      vmovss  dword ptr [rax+14h], xmm0
    }
    *(_QWORD *)_RAX->aposLocal.trDelta.v = 0i64;
    _RAX->aposLocal.trDelta.v[2] = 0.0;
    *(_QWORD *)&_RAX->aposLocal.trTime = 0i64;
    _RAX->aposLocal.trType = TR_STATIONARY;
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
  scr_string_t classname; 
  const char *v12; 
  vec3_t vectorValue; 
  tmat33_t<vec3_t> axis; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    _RDI = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1777, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RDI = &g_entities[entnum];
    classname = _RDI->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v12 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v12);
    }
  }
  if ( Scr_GetNumParam(scrContext) == 4 )
  {
    if ( BgTrajectory::IsAnimatedTrajectory(&_RDI->s.lerp.apos) )
    {
      Scr_Error(COM_ERR_2356, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
    }
    else
    {
      __asm
      {
        vmovaps [rsp+0D8h+var_28], xmm6
        vmovaps [rsp+0D8h+var_38], xmm7
        vmovaps [rsp+0D8h+var_48], xmm8
        vmovaps [rsp+0D8h+var_58], xmm9
        vmovaps [rsp+0D8h+var_68], xmm10
      }
      Scr_GetVector(scrContext, 0, &vectorValue);
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
      __asm { vmovaps xmm8, xmm0 }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
      __asm { vmovaps xmm10, xmm0 }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+0D8h+vectorValue+4]
        vmovss  xmm7, dword ptr [rsp+0D8h+vectorValue+8]
        vmovss  xmm5, dword ptr [rsp+0D8h+vectorValue]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm2, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm7, xmm7
        vaddss  xmm1, xmm3, xmm2
        vmovss  xmm2, cs:__real@3f800000
        vsqrtss xmm4, xmm1, xmm1
        vcmpless xmm1, xmm4, cs:__real@80000000
        vmovaps xmm9, xmm0
        vblendvps xmm0, xmm4, xmm2, xmm1
        vdivss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm7, xmm3
        vmulss  xmm4, xmm5, xmm3
        vmulss  xmm1, xmm6, xmm3
        vmulss  xmm7, xmm4, xmm8
        vmulss  xmm6, xmm1, xmm8
        vmulss  xmm8, xmm0, xmm8
        vmovss  dword ptr [rsp+0D8h+vectorValue], xmm4
        vmovss  dword ptr [rsp+0D8h+vectorValue+4], xmm1
        vmovss  dword ptr [rsp+0D8h+vectorValue+8], xmm0
      }
      AnglesToAxis(&_RDI->r.currentAngles, &axis);
      __asm
      {
        vmulss  xmm3, xmm6, dword ptr [rsp+0D8h+axis+4]
        vmulss  xmm1, xmm8, dword ptr [rsp+0D8h+axis+8]
        vmulss  xmm0, xmm8, dword ptr [rsp+0D8h+axis+14h]
        vmulss  xmm2, xmm7, dword ptr [rsp+0D8h+axis]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm3, xmm6, dword ptr [rsp+0D8h+axis+10h]
        vaddss  xmm5, xmm4, xmm1
        vmulss  xmm1, xmm7, dword ptr [rsp+0D8h+axis+0Ch]
      }
      _RDI->c.item[1].clipAmmoCount[0] = LODWORD(_RDI->r.currentAngles.v[0]);
      _RDI->c.item[1].clipAmmoCount[1] = LODWORD(_RDI->r.currentAngles.v[1]);
      _RDI->c.mover.angle.pos3.v[2] = _RDI->r.currentAngles.v[2];
      __asm
      {
        vaddss  xmm4, xmm3, xmm1
        vaddss  xmm1, xmm4, xmm0
        vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm10, cs:__real@447a0000
        vmulss  xmm1, xmm9, cs:__real@c47a0000
        vcvttss2si eax, xmm0
      }
      _RDI->s.lerp.apos.trDuration = _EAX;
      __asm { vcvttss2si eax, xmm1 }
      _RDI->s.lerp.apos.trTime = level.time - _EAX;
      _RDI->s.lerp.apos.trBase.v[0] = _RDI->r.currentAngles.v[0];
      _RDI->s.lerp.apos.trBase.v[1] = _RDI->r.currentAngles.v[1];
      _RDI->s.lerp.apos.trBase.v[2] = _RDI->r.currentAngles.v[2];
      __asm
      {
        vmovss  dword ptr [rdi+4Ch], xmm5
        vmovss  dword ptr [rdi+54h], xmm3
      }
      _RDI->s.lerp.apos.trDelta.v[1] = 0.0;
      _RDI->s.lerp.apos.trType = TR_SINE;
      __asm
      {
        vmovaps xmm10, [rsp+0D8h+var_68]
        vmovaps xmm9, [rsp+0D8h+var_58]
        vmovaps xmm8, [rsp+0D8h+var_48]
        vmovaps xmm7, [rsp+0D8h+var_38]
        vmovaps xmm6, [rsp+0D8h+var_28]
      }
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
  float fmt; 
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
    __asm
    {
      vmovss  xmm0, [rsp+88h+pfDecelTime]
      vmovss  xmm3, [rsp+88h+pfAccelTime]; fAccelTime
      vmovss  xmm2, [rsp+88h+pfTotalTime]; fTotalTime
      vmovss  dword ptr [rsp+88h+fmt], xmm0
    }
    G_ScrMover_SetupMoveSpeed(&v4->s.lerp.apos, &vectorValue, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, &v4->r.currentAngles, &v4->c.mover.angle);
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
  scr_string_t classname; 
  const char *v7; 
  unsigned int Instance; 
  unsigned int v10; 
  unsigned int NumRigidBodys; 
  const char *name; 
  const char *v13; 
  GTrajectory v23; 
  vec3_t vectorValue; 
  vec3_t v25; 
  vec3_t outAng; 
  vec3_t outPos; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    _RDI = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1953, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RDI = &g_entities[entnum];
    classname = _RDI->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v7 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v7);
    }
  }
  if ( _RDI->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2362, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    Scr_GetVector(scrContext, 1u, &v25);
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0C8h+vectorValue], xmm0
      vmovss  dword ptr [rsp+0C8h+vectorValue+4], xmm0
      vmovss  dword ptr [rsp+0C8h+vectorValue+8], xmm0
      vmovss  dword ptr [rsp+0C8h+var_68], xmm0
      vmovss  dword ptr [rsp+0C8h+var_68+4], xmm0
      vmovss  dword ptr [rsp+0C8h+var_68+8], xmm0
    }
  }
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RDI->s.number);
  v10 = Instance;
  if ( Instance != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, Instance);
    if ( NumRigidBodys > 1 )
    {
      if ( Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v10) )
        name = Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v10)->name;
      else
        name = "UNKNOWN";
      v13 = j_va("PhysicsLaunchClient only supports entities with 1 rigid body - %s has %i.\n", name, NumRigidBodys);
      Scr_Error(COM_ERR_2363, scrContext, v13);
    }
  }
  G_Utils_DestroyEntityPhysics(_RDI);
  if ( _RDI->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 396, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( pTr ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( pTr )") )
      __debugbreak();
  }
  if ( _RDI->s.lerp.pos.trType == TR_PHYSICS_CLIENT_AUTH )
    Scr_Error(COM_ERR_2327, scrContext, "physicslaunch called more than once for the same entity.");
  _RDI->s.lerp.pos.trTime = level.time;
  _RDI->s.lerp.pos.trDuration = 0x7FFFFFFF;
  GTrajectory::GTrajectory(&v23, _RDI);
  BgTrajectory::EvaluateTrajectories(&v23, level.time, &outPos, &outAng);
  Trajectory_SetTrBase(&_RDI->s.lerp.pos, &outPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+outAng]
    vmovss  xmm1, dword ptr [rsp+0C8h+outAng+4]
    vmovss  dword ptr [rdi+40h], xmm0
    vmovss  xmm0, dword ptr [rsp+0C8h+outAng+8]
    vmovss  dword ptr [rdi+48h], xmm0
    vmovss  dword ptr [rdi+44h], xmm1
    vmovss  xmm1, dword ptr [rsp+0C8h+vectorValue]
    vmovss  dword ptr [rdi+28h], xmm1
    vmovss  xmm0, dword ptr [rsp+0C8h+vectorValue+4]
    vmovss  dword ptr [rdi+2Ch], xmm0
    vmovss  xmm1, dword ptr [rsp+0C8h+vectorValue+8]
    vmovss  dword ptr [rdi+30h], xmm1
    vmovss  xmm0, dword ptr [rsp+0C8h+var_68]
    vmovss  dword ptr [rdi+4Ch], xmm0
    vmovss  xmm1, dword ptr [rsp+0C8h+var_68+4]
    vmovss  dword ptr [rdi+50h], xmm1
    vmovss  xmm0, dword ptr [rsp+0C8h+var_68+8]
    vmovss  dword ptr [rdi+54h], xmm0
  }
  _RDI->s.lerp.pos.trType = TR_PHYSICS_CLIENT_AUTH;
  _RDI->s.lerp.apos.trType = TR_PHYSICS_CLIENT_AUTH;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 0x10u);
  SV_LinkEntity(_RDI);
}

/*
==============
G_ScrMoverCmd_PhysicsLaunchServer
==============
*/

void __fastcall G_ScrMoverCmd_PhysicsLaunchServer(scrContext_t *scrContext, scr_entref_t entref, __int64 a3, double _XMM3_8)
{
  unsigned int entnum; 
  EntityClass entclass; 
  gentity_s *v10; 
  scr_string_t classname; 
  const char *v12; 
  scr_string_t v13; 
  unsigned int Instance; 
  unsigned int v34; 
  unsigned int NumRigidBodys; 
  const char *name; 
  const char *v37; 
  G_PhysicsObject *v38; 
  unsigned int RigidBodyID; 
  float fmt; 
  GTrajectory v43; 
  vec3_t v44; 
  vec3_t vectorValue; 
  vec3_t normalizedDirection; 
  vec3_t outAng; 
  vec3_t outPos; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
  }
  entnum = entref.entnum;
  entclass = entref.entclass;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScrMoverCmd_PhysicsLaunchServer");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v10 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2010, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v10 = &g_entities[entnum];
    classname = v10->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v12 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v12);
    }
  }
  if ( v10->s.eType != ET_SCRIPTMOVER || (v13 = v10->classname, v13 != scr_const.script_model) && v13 != scr_const.script_brushmodel )
    Scr_Error(COM_ERR_2364, scrContext, "physicsLaunchServer valid only for script models and script brush models");
  if ( !Com_GetServerDObjForEnt(v10) && v10->r.modelType != 5 )
    Scr_Error(COM_ERR_2365, scrContext, "Ent does not have a model and is not a brush.  Cannot create physics for an ent without a model or that is a brush.");
  if ( v10->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2366, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( Scr_GetNumParam(scrContext) < 2 )
  {
    __asm
    {
      vxorps  xmm5, xmm5, xmm5
      vxorps  xmm4, xmm4, xmm4
      vxorps  xmm3, xmm3, xmm3
      vmovss  dword ptr [rsp+0E8h+var_98], xmm5
      vmovss  dword ptr [rsp+0E8h+var_98+4], xmm4
      vmovss  dword ptr [rsp+0E8h+var_98+8], xmm3
      vmovss  dword ptr [rsp+0E8h+vectorValue], xmm6
      vmovss  dword ptr [rsp+0E8h+vectorValue+4], xmm6
      vmovss  dword ptr [rsp+0E8h+vectorValue+8], xmm6
    }
  }
  else
  {
    Scr_GetVector(scrContext, 0, &vectorValue);
    Scr_GetVector(scrContext, 1u, &v44);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0E8h+var_98+8]
      vmovss  xmm4, dword ptr [rsp+0E8h+var_98+4]
      vmovss  xmm5, dword ptr [rsp+0E8h+var_98]
    }
  }
  __asm
  {
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm7, xmm2, xmm2
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+0E8h+normalizedDirection], xmm0
    vmulss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rsp+0E8h+normalizedDirection+8], xmm0
    vmovss  dword ptr [rsp+0E8h+normalizedDirection+4], xmm1
  }
  GTrajectory::GTrajectory(&v43, v10);
  BgTrajectory::EvaluateTrajectories(&v43, level.time, &outPos, &outAng);
  if ( G_SetOriginAndAngle(v10, &outPos, &outAng, 1, 0) )
  {
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  }
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v10->s.number);
  v34 = Instance;
  if ( Instance != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, Instance);
    if ( NumRigidBodys > 1 )
    {
      if ( Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v34) )
        name = Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v34)->name;
      else
        name = "UNKNOWN";
      v37 = j_va("PhysicsLaunchServer only supports entities with 1 rigid body - %s has %i.\n", name, NumRigidBodys);
      Scr_Error(COM_ERR_2367, scrContext, v37);
    }
  }
  G_Items_EnablePhysics(v10);
  v38 = G_PhysicsObject_Get(v10);
  if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2055, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( v38->physicsInstances[0] == -1 )
    Scr_Error(COM_ERR_2368, scrContext, "physicsLaunchServer failed to create physics");
  if ( v38->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH )
  {
    __asm { vcomiss xmm7, xmm6 }
    if ( v38->mapping > (unsigned int)PHYSICSOBJECT_MAPPING_PHYSICS_AUTH )
    {
      RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v38->physicsInstances[0], 0);
      __asm { vmovss  dword ptr [rsp+0E8h+fmt], xmm7 }
      Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &vectorValue, &normalizedDirection, fmt);
    }
  }
  SV_LinkEntity(v10);
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_28]
    vmovaps xmm7, [rsp+0E8h+var_38]
  }
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

void __fastcall G_ScrMoverCmd_PhysicsLaunchServerItem(scrContext_t *scrContext, scr_entref_t entref, __int64 a3, double _XMM3_8)
{
  unsigned int entnum; 
  EntityClass entclass; 
  gentity_s *v8; 
  GWeaponMap *Instance; 
  unsigned __int16 weaponIdx; 
  bool v11; 
  G_PhysicsObject *v30; 
  unsigned int RigidBodyID; 
  float fmt; 
  __int64 v34; 
  GTrajectory v35; 
  vec3_t v36; 
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
    __asm { vmovaps [rsp+0E8h+var_28], xmm6 }
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2153, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v8 = &g_entities[entnum];
    if ( v8->s.eType == ET_ITEM )
    {
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      weaponIdx = BgWeaponMap::GetWeapon(Instance, v8->s.weaponHandle)->weaponIdx;
      if ( weaponIdx )
      {
        if ( weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(v34) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v34, bg_lastParsedWeaponIndex) )
            __debugbreak();
        }
        v11 = bg_weaponDefs[weaponIdx] == NULL;
        if ( !bg_weaponDefs[weaponIdx] )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          v11 = bg_weaponDefs[weaponIdx] == NULL;
        }
        if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2170, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
          __debugbreak();
      }
    }
    else
    {
      Scr_Error(COM_ERR_2373, scrContext, "physicsLaunchServerItem valid only for weapons/items");
    }
    if ( !Com_GetServerDObjForEnt(v8) )
      Scr_Error(COM_ERR_2374, scrContext, "Ent does not have a model.  Cannot create physics for an ent without a model.");
    if ( BgTrajectory::IsAnimatedTrajectory(&v8->s.lerp.pos) )
      Scr_Error(COM_ERR_2375, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
    if ( Scr_GetNumParam(scrContext) == 2 )
    {
      Scr_GetVector(scrContext, 0, &vectorValue);
      Scr_GetVector(scrContext, 1u, &v36);
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+0E8h+var_88+8]
        vmovss  xmm4, dword ptr [rsp+0E8h+var_88+4]
        vmovss  xmm5, dword ptr [rsp+0E8h+var_88]
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vxorps  xmm5, xmm5, xmm5
        vxorps  xmm4, xmm4, xmm4
        vmovss  dword ptr [rsp+0E8h+vectorValue], xmm3
        vmovss  dword ptr [rsp+0E8h+vectorValue+4], xmm3
        vmovss  dword ptr [rsp+0E8h+vectorValue+8], xmm3
        vmovss  dword ptr [rsp+0E8h+var_88], xmm5
        vmovss  dword ptr [rsp+0E8h+var_88+4], xmm4
        vmovss  dword ptr [rsp+0E8h+var_88+8], xmm3
      }
    }
    __asm
    {
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm6, xmm2, xmm2
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rsp+0E8h+normalizedDirection], xmm0
      vmulss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rsp+0E8h+normalizedDirection+8], xmm0
      vmovss  dword ptr [rsp+0E8h+normalizedDirection+4], xmm1
    }
    GTrajectory::GTrajectory(&v35, v8);
    BgTrajectory::EvaluateTrajectories(&v35, level.time, &outPos, &outAng);
    if ( G_SetOriginAndAngle(v8, &outPos, &outAng, 1, 0) )
    {
      Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
      Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    }
    G_Items_EnablePhysics(v8);
    v30 = G_PhysicsObject_Get(v8);
    if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2208, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    if ( v30->physicsInstances[0] == -1 )
      Scr_Error(COM_ERR_2376, scrContext, "physicsLaunchServerItem failed to create physics");
    if ( v30->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH )
    {
      RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v30->physicsInstances[0], 0);
      __asm { vmovss  dword ptr [rsp+0E8h+fmt], xmm6 }
      Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &vectorValue, &normalizedDirection, fmt);
    }
    SV_LinkEntity(v8);
    __asm { vmovaps xmm6, [rsp+0E8h+var_28] }
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

void __fastcall G_ScrMoverCmd_BrCircleMoveTo(scrContext_t *scrContext, scr_entref_t entref, __int64 a3, double _XMM3_8)
{
  unsigned int entnum; 
  gentity_s *v9; 
  scr_string_t classname; 
  const char *v11; 
  char v14; 
  char v15; 
  float fmt; 
  vec3_t vPos; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v9 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2718, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v9 = &g_entities[entnum];
    classname = v9->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v11 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v11);
    }
  }
  if ( v9->s.un.scriptMoverType != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 2720, ASSERT_TYPE_ASSERT, "(mSelf->s.un.scriptMoverType == ScriptMoverType_BrCircle)", (const char *)&queryFormat, "mSelf->s.un.scriptMoverType == ScriptMoverType_BrCircle") )
    __debugbreak();
  if ( v9->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_5832, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    __asm
    {
      vmovaps [rsp+88h+var_28], xmm6
      vmovaps [rsp+88h+var_38], xmm7
    }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovss  dword ptr [rsp+88h+vPos], xmm0 }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm { vmovss  dword ptr [rsp+88h+vPos+4], xmm0 }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm { vmovss  dword ptr [rsp+88h+vPos+8], xmm0 }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm0, xmm7
      vmovaps xmm6, xmm0
    }
    if ( v14 | v15 )
      Scr_ParamError(COM_ERR_5833, scrContext, 3u, "total time must be positive");
    else
      __asm { vmaxss  xmm6, xmm0, cs:__real@3a83126f }
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; fAccelTime
      vmovaps xmm2, xmm6; fTotalTime
      vmovss  dword ptr [rsp+88h+fmt], xmm7
    }
    G_ScrMover_Move(v9, &vPos, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt);
    __asm
    {
      vmovaps xmm7, [rsp+88h+var_38]
      vmovaps xmm6, [rsp+88h+var_28]
    }
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
  float fmt; 
  float fmta; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t vRot; 
  vec3_t vectorValue; 
  vec3_t angle; 
  tmat43_t<vec3_t> axis; 

  _RDI = mSelf;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_ScrMoverCmd_RotateByInternal");
  Scr_GetVector(scrContext, 0, &vectorValue);
  G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
  if ( _RDI->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1436, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &mSelf->s.lerp.apos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &mSelf->s.lerp.apos )") )
      __debugbreak();
  }
  if ( calculateLinkedRotation )
  {
    if ( !_RDI->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1443, ASSERT_TYPE_ASSERT, "( mSelf->tagInfo )", (const char *)&queryFormat, "mSelf->tagInfo") )
      __debugbreak();
    if ( _RDI->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1444, ASSERT_TYPE_ASSERT, "( mSelf->s.eType == ET_SCRIPTMOVER )", (const char *)&queryFormat, "mSelf->s.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1445, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
      __debugbreak();
    TagInfoLinkedRotation = G_GetTagInfoLinkedRotation(_RDI);
    if ( !TagInfoLinkedRotation->hasLinkedRotation )
    {
      G_CalcFixedLinkTargetAxis(_RDI, &axis);
      AxisToAngles((const tmat33_t<vec3_t> *)&axis, &_RDI->r.currentAngles);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+13Ch]
      vmovss  xmm1, dword ptr [rdi+140h]
      vmovss  dword ptr [rbp+57h+angle], xmm0
      vmovss  xmm0, dword ptr [rdi+144h]
      vmovss  dword ptr [rbp+57h+angle+8], xmm0
      vmovss  dword ptr [rbp+57h+angle+4], xmm1
    }
    G_CalcTagConvertWorldToLocalAngles(_RDI, &_RDI->r.currentAngles, &_RDI->r.currentAngles);
    __asm { vmovss  xmm3, [rbp+57h+pfAccelTime]; fAccelTime }
    TagInfoLinkedRotation->hasLinkedRotation = 1;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+vectorValue]
      vaddss  xmm1, xmm0, dword ptr [rdi+13Ch]
      vmovss  xmm2, dword ptr [rbp+57h+vectorValue+4]
      vaddss  xmm0, xmm2, dword ptr [rdi+140h]
      vmovss  dword ptr [rbp+57h+vRot], xmm1
      vmovss  xmm1, dword ptr [rbp+57h+vectorValue+8]
      vaddss  xmm2, xmm1, dword ptr [rdi+144h]
      vmovss  dword ptr [rbp+57h+vRot+4], xmm0
      vmovss  xmm0, [rbp+57h+pfDecelTime]
      vmovss  dword ptr [rbp+57h+vRot+8], xmm2
      vmovss  xmm2, [rbp+57h+pfTotalTime]; fTotalTime
      vmovss  dword ptr [rsp+0C0h+fmt], xmm0
    }
    G_ScrMover_RotateLinked(_RDI, &vRot, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt);
    G_SetAngle(_RDI, &angle, 1, 1);
    _RDI->s.lerp.apos.trType = TR_INTERPOLATE;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+vectorValue]
      vaddss  xmm1, xmm0, dword ptr [rdi+13Ch]
      vmovss  xmm2, dword ptr [rbp+57h+vectorValue+4]
      vaddss  xmm0, xmm2, dword ptr [rdi+140h]
      vmovss  xmm3, [rbp+57h+pfAccelTime]; fAccelTime
      vmovss  dword ptr [rbp+57h+vRot], xmm1
      vmovss  xmm1, dword ptr [rbp+57h+vectorValue+8]
      vaddss  xmm2, xmm1, dword ptr [rdi+144h]
      vmovss  dword ptr [rbp+57h+vRot+4], xmm0
      vmovss  xmm0, [rbp+57h+pfDecelTime]
      vmovss  dword ptr [rbp+57h+vRot+8], xmm2
      vmovss  xmm2, [rbp+57h+pfTotalTime]; fTotalTime
      vmovss  dword ptr [rsp+0C0h+fmt], xmm0
    }
    G_ScrMover_Rotate(_RDI, &vRot, *(const float *)&_XMM2, *(const float *)&_XMM3, fmta);
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
  unsigned int v22; 
  bool v23; 
  unsigned int v41; 
  bool v44; 
  float fmt; 
  float fmta; 
  __int64 v66; 
  __int64 v67; 
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
  __asm
  {
    vmovaps [rsp+148h+var_38], xmm6
    vmovaps [rsp+148h+var_48], xmm7
    vmovaps [rsp+148h+var_58], xmm8
    vmovaps [rsp+148h+var_68], xmm9
    vmovaps [rsp+148h+var_78], xmm10
    vmovaps [rsp+148h+var_88], xmm11
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
    _RDI = &mSelf->r.currentAngles;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+148h+angle], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+148h+angle+8], xmm0
      vmovss  dword ptr [rsp+148h+angle+4], xmm1
    }
    G_CalcTagConvertWorldToLocalAngles(mSelf, &mSelf->r.currentAngles, &mSelf->r.currentAngles);
    __asm
    {
      vmovss  xmm10, cs:__real@3b360b61
      vmovss  xmm11, cs:__real@3f000000
      vmovss  xmm8, cs:__real@43b40000
    }
    TagInfoLinkedRotation->hasLinkedRotation = 1;
    _R15 = (char *)&vectorValue - (char *)&mSelf->r.currentAngles;
    _R14 = (char *)&vRot - (char *)&mSelf->r.currentAngles;
    v22 = 0;
    v23 = 1;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    do
    {
      if ( !v23 )
      {
        LODWORD(v67) = 3;
        LODWORD(v66) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rdi] }
      if ( v22 >= 3 )
      {
        LODWORD(v67) = 3;
        LODWORD(v66) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+rdi]
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm6, xmm1, xmm10
        vaddss  xmm2, xmm6, xmm11
        vroundss xmm7, xmm9, xmm2, 1
      }
      if ( v22 >= 3 )
      {
        LODWORD(v67) = 3;
        LODWORD(v66) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm0, xmm6, xmm7
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm6, xmm1, dword ptr [rdi]
      }
      if ( v22 >= 3 )
      {
        LODWORD(v67) = 3;
        LODWORD(v66) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [r14+rdi], xmm6 }
      _RDI = (vec3_t *)((char *)_RDI + 4);
      v23 = ++v22 < 3;
    }
    while ( (int)v22 < 3 );
    __asm
    {
      vmovss  xmm0, [rsp+148h+pfDecelTime]
      vmovss  xmm3, [rsp+148h+pfAccelTime]; fAccelTime
      vmovss  xmm2, [rsp+148h+pfTotalTime]; fTotalTime
      vmovss  dword ptr [rsp+148h+fmt], xmm0
    }
    G_ScrMover_RotateLinked(mSelf, &vRot, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt);
    G_SetAngle(mSelf, &angle, 1, 1);
    mSelf->s.lerp.apos.trType = TR_INTERPOLATE;
  }
  else
  {
    __asm
    {
      vmovss  xmm10, cs:__real@3b360b61
      vmovss  xmm11, cs:__real@3f000000
      vmovss  xmm8, cs:__real@43b40000
    }
    _RDI = &mSelf->r.currentAngles;
    v41 = 0;
    _R15 = (char *)&vectorValue - (char *)&mSelf->r.currentAngles;
    _R14 = (char *)&vRot - (char *)&mSelf->r.currentAngles;
    v44 = 1;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    do
    {
      if ( !v44 )
      {
        LODWORD(v67) = 3;
        LODWORD(v66) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rdi] }
      if ( v41 >= 3 )
      {
        LODWORD(v67) = 3;
        LODWORD(v66) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+r15]
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm6, xmm1, xmm10
        vaddss  xmm2, xmm6, xmm11
        vroundss xmm7, xmm9, xmm2, 1
      }
      if ( v41 >= 3 )
      {
        LODWORD(v67) = 3;
        LODWORD(v66) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm0, xmm6, xmm7
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm6, xmm1, dword ptr [rdi]
      }
      if ( v41 >= 3 )
      {
        LODWORD(v67) = 3;
        LODWORD(v66) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rdi+r14], xmm6 }
      _RDI = (vec3_t *)((char *)_RDI + 4);
      v44 = ++v41 < 3;
    }
    while ( (int)v41 < 3 );
    __asm
    {
      vmovss  xmm0, [rsp+148h+pfDecelTime]
      vmovss  xmm3, [rsp+148h+pfAccelTime]; fAccelTime
      vmovss  xmm2, [rsp+148h+pfTotalTime]; fTotalTime
      vmovss  dword ptr [rsp+148h+fmt], xmm0
    }
    G_ScrMover_Rotate(mSelf, &vRot, *(const float *)&_XMM2, *(const float *)&_XMM3, fmta);
  }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm11, [rsp+148h+var_88]
    vmovaps xmm10, [rsp+148h+var_78]
    vmovaps xmm9, [rsp+148h+var_68]
    vmovaps xmm8, [rsp+148h+var_58]
    vmovaps xmm7, [rsp+148h+var_48]
    vmovaps xmm6, [rsp+148h+var_38]
  }
}

/*
==============
G_ScrMover_AddRotate
==============
*/
void G_ScrMover_AddRotate(scrContext_t *scrContext, scr_entref_t entref, int iAxis)
{
  __int64 v5; 
  unsigned int entnum; 
  gentity_s *v8; 
  scr_string_t classname; 
  const char *v10; 
  vec3_t *v12; 
  unsigned int v13; 
  unsigned int v15; 
  unsigned int v16; 
  vec3_t *v32; 
  gentity_s *v33; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  float c; 
  float s; 
  gentity_s *gEnt; 
  vec3_t *v44; 
  char *v45; 
  vec3_t *v46; 
  vec3_t *angles; 
  trajectory_t *p_apos; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v50; 

  v5 = iAxis;
  gEnt = (gentity_s *)entref;
  entnum = entref.entnum;
  if ( (unsigned int)iAxis > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1577, ASSERT_TYPE_ASSERT, "( iAxis >= 0 && iAxis < 3 )", (const char *)&queryFormat, "iAxis >= 0 && iAxis < 3") )
    __debugbreak();
  if ( BYTE4(gEnt) )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v8 = NULL;
    gEnt = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1579, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v8 = &g_entities[entnum];
    gEnt = v8;
    classname = v8->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v10 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v10);
    }
  }
  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    p_apos = &v8->s.lerp.apos;
    if ( BgTrajectory::IsAnimatedTrajectory(&v8->s.lerp.apos) )
    {
      Scr_Error(COM_ERR_2353, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
    }
    else
    {
      __asm { vmovaps [rsp+118h+var_48], xmm6 }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
      __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      angles = &v8->r.currentAngles;
      AnglesToAxis(&v8->r.currentAngles, &axis);
      v12 = &v50.m[v5];
      v13 = 0;
      v46 = v12;
      _RDI = 0i64;
      v15 = ((int)v5 + 1) % 3;
      v16 = ((int)v5 + 2) % 3;
      _R15 = (char *)((char *)&axis.m[v5] - (char *)v12);
      v45 = _R15;
      do
      {
        if ( (unsigned int)v5 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        if ( v13 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        _RSI = (char *)v12 + _RDI;
        __asm { vmovss  xmm6, dword ptr [rsi+r15] }
        if ( (unsigned int)v5 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        if ( v13 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsi], xmm6 }
        if ( v15 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = ((int)v5 + 1) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        v44 = &axis.m[v15];
        if ( v16 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = ((int)v5 + 2) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        if ( v13 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
          LODWORD(v39) = 3;
          LODWORD(v36) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v36, v39) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, [rsp+118h+s]
          vmovss  xmm1, [rsp+118h+c]
          vmulss  xmm3, xmm0, dword ptr [rdi+r15]
          vmulss  xmm2, xmm1, dword ptr [rdi+rax]
          vaddss  xmm6, xmm3, xmm2
        }
        if ( v15 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = ((int)v5 + 1) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        _RSI = &v50.m[v15];
        if ( v13 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi+rsi], xmm6 }
        if ( v16 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = ((int)v5 + 2) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        if ( v15 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = ((int)v5 + 1) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        if ( v13 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
          LODWORD(v40) = 3;
          LODWORD(v37) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v40) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, [rsp+118h+c]
          vmovss  xmm1, [rsp+118h+s]
          vmulss  xmm3, xmm0, dword ptr [rdi+r15]
          vmulss  xmm2, xmm1, dword ptr [rdi+rax]
          vsubss  xmm6, xmm3, xmm2
        }
        if ( v16 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = ((int)v5 + 2) % 3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        _RSI = &v50.m[v16];
        if ( v13 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v35) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v35, v38) )
            __debugbreak();
        }
        _R15 = v45;
        __asm { vmovss  dword ptr [rdi+rsi], xmm6 }
        v12 = v46;
        _RDI += 4i64;
        ++v13;
      }
      while ( (int)v13 < 3 );
      v32 = angles;
      AxisToAngles(&v50, angles);
      v33 = gEnt;
      p_apos->trType = TR_STATIONARY;
      v33->s.lerp.apos.trBase = *v32;
      SV_LinkEntity(v33);
      __asm { vmovaps xmm6, [rsp+118h+var_48] }
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
  char v10; 
  int NumParam; 
  char v13; 
  char v14; 

  _RDI = pfTotalTime;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RSI = pfDecelTime;
  _R14 = pfAccelTime;
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovss  dword ptr [rdi], xmm0
  }
  if ( v10 | v14 )
  {
    Scr_ParamError(COM_ERR_2332, scrContext, 1u, "total time must be positive");
    __asm { vmovss  xmm0, dword ptr [rdi] }
  }
  __asm { vcomiss xmm0, cs:__real@3a83126f }
  if ( v10 )
    *_RDI = 0.001;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam <= 2 )
  {
    v13 = 0;
    v14 = 1;
    *_R14 = 0.0;
    goto LABEL_13;
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovss  dword ptr [r14], xmm0
  }
  if ( v10 )
    Scr_ParamError(COM_ERR_2333, scrContext, 2u, "accel time must be nonnegative");
  if ( NumParam <= 3 )
  {
    v13 = 0;
    v14 = 1;
LABEL_13:
    __asm { vxorps  xmm0, xmm0, xmm0 }
    *_RSI = 0.0;
    goto LABEL_14;
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovss  dword ptr [rsi], xmm0
  }
  if ( v13 )
  {
    Scr_ParamError(COM_ERR_2334, scrContext, 3u, "decel time must be nonnegative");
    __asm { vmovss  xmm0, dword ptr [rsi] }
  }
LABEL_14:
  __asm
  {
    vaddss  xmm1, xmm0, dword ptr [r14]
    vmovss  xmm2, dword ptr [rdi]
    vcomiss xmm1, xmm2
  }
  if ( !(v13 | v14) )
  {
    __asm
    {
      vmulss  xmm0, xmm2, cs:__real@3f800004
      vcomiss xmm1, xmm0
    }
    if ( v13 | v14 )
      __asm { vmovss  dword ptr [rdi], xmm0 }
    else
      Scr_Error(COM_ERR_2335, scrContext, "accel time plus decel time is greater than total time");
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
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

void __fastcall G_ScrMover_GravityMove(gentity_s *mover, const vec3_t *velocity, double totalTime)
{
  GTrajectory v16; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _RDI = velocity;
  _RSI = mover;
  __asm { vmovaps xmm6, xmm2 }
  if ( !mover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 535, ASSERT_TYPE_ASSERT, "( mover )", (const char *)&queryFormat, "mover") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 536, ASSERT_TYPE_SANITY, "( !IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( velocity )[0] ) && !IS_NAN( ( velocity )[1] ) && !IS_NAN( ( velocity )[2] )") )
      __debugbreak();
  }
  if ( _RSI->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 540, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( trajectory ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( trajectory )") )
      __debugbreak();
  }
  _RSI->s.lerp.pos.trTime = level.time;
  Trajectory_SetTrBase(&_RSI->s.lerp.pos, &_RSI->r.currentOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsi+28h], xmm0
  }
  _RSI->s.lerp.pos.trDelta.v[1] = _RDI->v[1];
  _RSI->s.lerp.pos.trDelta.v[2] = _RDI->v[2];
  __asm { vmovss  [rsp+78h+arg_10], xmm0 }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+30h]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 547, ASSERT_TYPE_SANITY, "( !IS_NAN( ( trajectory->trDelta )[0] ) && !IS_NAN( ( trajectory->trDelta )[1] ) && !IS_NAN( ( trajectory->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( trajectory->trDelta )[0] ) && !IS_NAN( ( trajectory->trDelta )[1] ) && !IS_NAN( ( trajectory->trDelta )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@447a0000
    vcvttss2si eax, xmm0
  }
  _RSI->s.lerp.pos.trDuration = _EAX;
  _RSI->s.lerp.pos.trType = TR_GRAVITY;
  GTrajectory::GTrajectory(&v16, _RSI);
  BgTrajectory::EvaluatePosTrajectory(&v16, level.time, &_RSI->r.currentOrigin);
  SV_LinkEntity(_RSI);
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
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

void __fastcall G_ScrMover_Move(gentity_s *pEnt, const vec3_t *vPos, double fTotalTime, double fAccelTime, const float fDecelTime)
{
  gentity_s *v13; 
  BgEntityComponents *positionControl; 
  float v20; 
  vec3_t inOutCurrPos; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
  }
  pEnt->flags.m_flags[0] &= ~0x80000u;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vmovss  xmm1, dword ptr [rcx+134h]
    vmovss  dword ptr [rsp+88h+var_48], xmm0
    vmovss  xmm0, dword ptr [rcx+138h]
    vmovss  dword ptr [rsp+88h+var_48+8], xmm0
    vmovss  dword ptr [rsp+88h+var_48+4], xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  v13 = pEnt;
  positionControl = G_ScrMover_GetPositionController(pEnt);
  __asm
  {
    vmovss  xmm0, [rsp+88h+fDecelTime]
    vmovaps xmm3, xmm6; fAccelTime
    vmovaps xmm2, xmm7; fTotalTime
    vmovss  [rsp+88h+var_68], xmm0
  }
  G_ScrMover_SetupMove(&v13->s.lerp.pos, vPos, *(const float *)&_XMM2, *(const float *)&_XMM3, v20, &inOutCurrPos, (mover_positions_t *)positionControl);
  SV_LinkEntity(v13);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
G_ScrMover_MoveAxis
==============
*/
void G_ScrMover_MoveAxis(scrContext_t *scrContext, scr_entref_t entref, int iAxis)
{
  unsigned int entnum; 
  scr_string_t classname; 
  const char *v10; 
  float fmt; 
  __int64 v21; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t vPos; 

  _RBP = iAxis;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    _RDI = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1190, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RDI = &g_entities[entnum];
    classname = _RDI->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v10 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v10);
    }
  }
  if ( _RDI->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2344, scrContext, "Cannot set an entity's position while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovaps xmm6, xmm0 }
    G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+130h]
      vmovss  xmm2, dword ptr [rdi+134h]
      vmovss  dword ptr [rsp+0A8h+vPos], xmm1
      vmovss  xmm1, dword ptr [rdi+138h]
      vmovss  dword ptr [rsp+0A8h+vPos+8], xmm1
      vmovss  dword ptr [rsp+0A8h+vPos+4], xmm2
    }
    if ( (unsigned int)_RBP >= 3 )
    {
      LODWORD(v21) = _RBP;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, 3) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rsp+rbp*4+0A8h+vPos]
      vmovss  xmm1, [rsp+0A8h+pfDecelTime]
      vmovss  xmm3, [rsp+0A8h+pfAccelTime]; fAccelTime
      vmovss  xmm2, [rsp+0A8h+pfTotalTime]; fTotalTime
      vmovss  dword ptr [rsp+rbp*4+0A8h+vPos], xmm0
      vmovss  dword ptr [rsp+0A8h+fmt], xmm1
    }
    G_ScrMover_Move(_RDI, &vPos, *(double *)&_XMM2, *(double *)&_XMM3, fmt);
    __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
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
  int v4; 
  TagInfoLinkedRotation *TagInfoLinkedRotation; 
  trType_t trType; 
  trajectory_t_secure *p_pos; 
  int time; 
  int v9; 
  int v10; 
  bool v11; 
  const DObj *ServerDObjForEnt; 
  const XAnimTree *Tree; 
  const XAnim_s *Anims; 
  BgEntityComponents *PositionController; 
  int updated; 
  int v31; 
  GTrajectory v47; 

  tagInfo = pEnt->tagInfo;
  _RDI = pEnt;
  v4 = 1;
  if ( Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && tagInfo )
  {
    TagInfoLinkedRotation = G_GetTagInfoLinkedRotation(_RDI);
    if ( !TagInfoLinkedRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 167, ASSERT_TYPE_ASSERT, "( linkedRotationData )", (const char *)&queryFormat, "linkedRotationData") )
      __debugbreak();
    trType = _RDI->s.lerp.pos.trType;
    p_pos = &_RDI->s.lerp.pos;
    time = level.time;
    v9 = 0;
    goto LABEL_9;
  }
  trType = _RDI->s.lerp.pos.trType;
  p_pos = &_RDI->s.lerp.pos;
  time = level.time;
  TagInfoLinkedRotation = (TagInfoLinkedRotation *)&_RDI->s.lerp.apos;
  v9 = 0;
  if ( trType == TR_STATIONARY || (v10 = 1, _RDI->s.lerp.pos.trTime + _RDI->s.lerp.pos.trDuration > level.time) )
LABEL_9:
    v10 = 0;
  if ( TagInfoLinkedRotation->aposLocal.trType == TR_STATIONARY || TagInfoLinkedRotation->aposLocal.trTime + TagInfoLinkedRotation->aposLocal.trDuration > time )
    v4 = 0;
  __asm { vmovaps [rsp+88h+var_38], xmm9 }
  if ( trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( TagInfoLinkedRotation->aposLocal.trType == TR_ANIMATED_MOVER )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) )
        goto LABEL_23;
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )");
    }
    else
    {
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 186, ASSERT_TYPE_ASSERT, "( BgTrajectory::IsAnimatedTrajectory( angularTrajectory ) )", (const char *)&queryFormat, "BgTrajectory::IsAnimatedTrajectory( angularTrajectory )");
    }
    if ( v11 )
      __debugbreak();
LABEL_23:
    if ( v10 != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 187, ASSERT_TYPE_ASSERT, "( reachedPositionMove == reachedRotationMove )", (const char *)&queryFormat, "reachedPositionMove == reachedRotationMove") )
      __debugbreak();
    ServerDObjForEnt = Com_GetServerDObjForEnt(_RDI);
    if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 190, ASSERT_TYPE_ASSERT, "( dObj )", (const char *)&queryFormat, "dObj") )
      __debugbreak();
    Tree = DObjGetTree(ServerDObjForEnt);
    if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 193, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
      __debugbreak();
    LOBYTE(v9) = XAnimIsSimpleBlendTree(Tree) != 0;
    Anims = XAnimGetAnims(Tree);
    if ( !XAnimIsLooped(Anims, v9 + 1) && (v10 || v4) )
    {
      G_ScrMover_ClearAnimatedTrajectory(_RDI);
      if ( p_pos->trType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 205, ASSERT_TYPE_ASSERT, "( pEnt->s.lerp.pos.trType == TR_STATIONARY )", (const char *)&queryFormat, "pEnt->s.lerp.pos.trType == TR_STATIONARY") )
        __debugbreak();
      if ( _RDI->s.lerp.apos.trType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 206, ASSERT_TYPE_ASSERT, "( pEnt->s.lerp.apos.trType == TR_STATIONARY )", (const char *)&queryFormat, "pEnt->s.lerp.apos.trType == TR_STATIONARY") )
        __debugbreak();
      SV_LinkEntity(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+13Ch]
        vmulss  xmm3, xmm0, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vxorps  xmm9, xmm9, xmm9
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm0, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rdi+13Ch], xmm0
        vmovss  xmm0, dword ptr [rdi+140h]; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vmovss  dword ptr [rdi+140h], xmm0
        vmovss  xmm1, dword ptr [rdi+144h]
        vmulss  xmm4, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm9, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rdi+144h], xmm1
      }
      GScr_Notify(_RDI, scr_const.movedone, 0);
      goto LABEL_51;
    }
    goto LABEL_52;
  }
  if ( v10 )
  {
    PositionController = G_ScrMover_GetPositionController(_RDI);
    updated = G_ScrMover_UpdateMove(p_pos, (const mover_positions_t *)PositionController);
    GTrajectory::GTrajectory(&v47, _RDI);
    BgTrajectory::EvaluatePosTrajectory(&v47, level.time, &_RDI->r.currentOrigin);
    SV_LinkEntity(_RDI);
    if ( updated )
      GScr_Notify(_RDI, scr_const.movedone, 0);
  }
  if ( v4 )
  {
    v31 = G_ScrMover_UpdateMove(&TagInfoLinkedRotation->aposLocal, &_RDI->c.mover.angle);
    BgTrajectory::LegacyEvaluateTrajectory(&TagInfoLinkedRotation->aposLocal, level.time, &_RDI->r.currentAngles);
    if ( Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && tagInfo )
      G_CalcTagConvertLocalToWorldAngles(_RDI, &_RDI->r.currentAngles, &_RDI->r.currentAngles);
    SV_LinkEntity(_RDI);
    if ( v31 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+13Ch]
        vmulss  xmm3, xmm0, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vxorps  xmm9, xmm9, xmm9
        vroundss xmm2, xmm9, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm0, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rdi+13Ch], xmm0
        vmovss  xmm0, dword ptr [rdi+140h]; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vmovss  dword ptr [rdi+140h], xmm0
        vmovss  xmm1, dword ptr [rdi+144h]
        vmulss  xmm4, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm9, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rdi+144h], xmm1
      }
LABEL_51:
      GScr_Notify(_RDI, scr_const.rotatedone, 0);
    }
  }
LABEL_52:
  __asm { vmovaps xmm9, [rsp+88h+var_38] }
}

/*
==============
G_ScrMover_Rotate
==============
*/
void G_ScrMover_Rotate(gentity_s *pEnt, const vec3_t *vRot, const float fTotalTime, const float fAccelTime, const float fDecelTime)
{
  gentity_s *v8; 
  int v11; 
  bool v13; 
  float fmt; 
  vec3_t *inOutCurrPos; 
  mover_positions_t *positionControl; 
  vec3_t v20; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovss  xmm0, dword ptr [rcx+13Ch]
    vmovss  xmm1, dword ptr [rcx+140h]
  }
  v8 = pEnt;
  __asm
  {
    vmovss  dword ptr [rsp+88h+var_48], xmm0
    vmovss  xmm0, dword ptr [rcx+144h]
    vmovss  dword ptr [rsp+88h+var_48+8], xmm0
    vmovss  xmm0, [rsp+88h+fDecelTime]
    vmovss  dword ptr [rsp+88h+fmt], xmm0
    vmovss  dword ptr [rsp+88h+var_48+4], xmm1
  }
  G_ScrMover_SetupMove(&pEnt->s.lerp.apos, vRot, fTotalTime, fAccelTime, fmt, &v20, &pEnt->c.mover.angle);
  v11 = 0;
  _RDI = &v8->s.lerp.apos.trBase;
  v13 = 1;
  do
  {
    if ( !v13 )
    {
      LODWORD(positionControl) = 3;
      LODWORD(inOutCurrPos) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inOutCurrPos, positionControl) )
        __debugbreak();
    }
    __asm { vmovss  xmm0, dword ptr [rdi]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovaps xmm6, xmm0 }
    if ( (unsigned int)v11 >= 3 )
    {
      LODWORD(positionControl) = 3;
      LODWORD(inOutCurrPos) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", inOutCurrPos, positionControl) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v13 = (unsigned int)++v11 < 3;
  }
  while ( v11 < 3 );
  SV_LinkEntity(v8);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
G_ScrMover_RotateAxis
==============
*/
void G_ScrMover_RotateAxis(scrContext_t *scrContext, scr_entref_t entref, int iAxis)
{
  unsigned int entnum; 
  scr_string_t classname; 
  const char *v10; 
  float fmt; 
  __int64 v21; 
  float pfDecelTime; 
  float pfAccelTime; 
  float pfTotalTime; 
  vec3_t vRot; 

  _RBP = iAxis;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    _RDI = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 1675, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RDI = &g_entities[entnum];
    classname = _RDI->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v10 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v10);
    }
  }
  if ( _RDI->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2354, scrContext, "Cannot set an entity's angles while it is playing a delta animation. Call scriptmodelclearanim first.\n");
  }
  else
  {
    __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovaps xmm6, xmm0 }
    G_ScrMover_GetCommandTimes(scrContext, &pfTotalTime, &pfAccelTime, &pfDecelTime);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+13Ch]
      vmovss  xmm2, dword ptr [rdi+140h]
      vmovss  dword ptr [rsp+0A8h+vRot], xmm1
      vmovss  xmm1, dword ptr [rdi+144h]
      vmovss  dword ptr [rsp+0A8h+vRot+8], xmm1
      vmovss  dword ptr [rsp+0A8h+vRot+4], xmm2
    }
    if ( (unsigned int)_RBP >= 3 )
    {
      LODWORD(v21) = _RBP;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v21, 3) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rsp+rbp*4+0A8h+vRot]
      vmovss  xmm1, [rsp+0A8h+pfDecelTime]
      vmovss  xmm3, [rsp+0A8h+pfAccelTime]; fAccelTime
      vmovss  xmm2, [rsp+0A8h+pfTotalTime]; fTotalTime
      vmovss  dword ptr [rsp+rbp*4+0A8h+vRot], xmm0
      vmovss  dword ptr [rsp+0A8h+fmt], xmm1
    }
    G_ScrMover_Rotate(_RDI, &vRot, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt);
    __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  }
}

/*
==============
G_ScrMover_RotateLinked
==============
*/

void __fastcall G_ScrMover_RotateLinked(gentity_s *pEnt, const vec3_t *vRot, double fTotalTime, double fAccelTime, const float fDecelTime)
{
  TagInfoLinkedRotation *TagInfoLinkedRotation; 
  float fmt; 
  vec3_t inOutCurrPos; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  _RBX = pEnt;
  if ( !pEnt->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 622, ASSERT_TYPE_ASSERT, "( pEnt->tagInfo )", (const char *)&queryFormat, "pEnt->tagInfo") )
    __debugbreak();
  if ( _RBX->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 623, ASSERT_TYPE_ASSERT, "( pEnt->s.eType == ET_SCRIPTMOVER )", (const char *)&queryFormat, "pEnt->s.eType == ET_SCRIPTMOVER") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 624, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
    __debugbreak();
  TagInfoLinkedRotation = G_GetTagInfoLinkedRotation(_RBX);
  if ( !TagInfoLinkedRotation->hasLinkedRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 627, ASSERT_TYPE_ASSERT, "( linkedRotationData->hasLinkedRotation )", (const char *)&queryFormat, "linkedRotationData->hasLinkedRotation") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+13Ch]
    vmovss  xmm1, dword ptr [rbx+140h]
    vmovss  dword ptr [rsp+98h+var_58], xmm0
    vmovss  xmm0, dword ptr [rbx+144h]
    vmovss  dword ptr [rsp+98h+var_58+8], xmm0
    vmovss  xmm0, [rsp+98h+fDecelTime]
    vmovaps xmm3, xmm6; fAccelTime
    vmovaps xmm2, xmm7; fTotalTime
    vmovss  dword ptr [rsp+98h+fmt], xmm0
    vmovss  dword ptr [rsp+98h+var_58+4], xmm1
  }
  G_ScrMover_SetupMove(&TagInfoLinkedRotation->aposLocal, vRot, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, &inOutCurrPos, &_RBX->c.mover.angle);
  SV_LinkEntity(_RBX);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
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

void __fastcall G_ScrMover_SetupMove(trajectory_t_secure *pTr, const vec3_t *vPos, double fTotalTime, double fAccelTime, const float fDecelTime, vec3_t *inOutCurrPos, mover_positions_t *positionControl)
{
  bool v22; 
  bool v23; 
  char v28; 
  bool v29; 
  int trDuration; 
  bool v64; 
  int v104; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  char v129; 
  void *retaddr; 

  _RAX = &retaddr;
  v22 = pTr->trType == TR_ANIMATED_MOVER;
  _R14 = (vec3_t *)vPos;
  _RSI = positionControl;
  _RBX = pTr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmm11, xmm3
    vmovaps xmm6, xmm2
  }
  if ( v22 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 268, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( pTr ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( pTr )") )
      __debugbreak();
  }
  v22 = level.frameDuration == 0;
  if ( !level.frameDuration )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm2, xmm6, cs:__real@3a83126f
    vmovaps [rsp+0D8h+var_38], xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vcomiss xmm2, xmm1
    vmovaps [rsp+0D8h+var_48], xmm8
    vmovaps [rsp+0D8h+var_58], xmm9
  }
  if ( v22 )
  {
    v28 = 0;
    v29 = _RBX->trType == TR_STATIONARY;
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vsubss  xmm7, xmm0, dword ptr [rdi]
      vmovss  xmm0, dword ptr [r14+4]
      vsubss  xmm8, xmm0, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [r14+8]
      vsubss  xmm9, xmm0, dword ptr [rdi+8]
    }
    if ( _RBX->trType )
      BgTrajectory::LegacyEvaluateTrajectory(_RBX, level.time, inOutCurrPos);
  }
  else
  {
    v28 = 0;
    v29 = _RBX->trType == TR_STATIONARY;
    if ( _RBX->trType )
      BgTrajectory::LegacyEvaluateTrajectory(_RBX, level.time, inOutCurrPos);
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vsubss  xmm7, xmm0, dword ptr [rdi]
      vmovss  xmm0, dword ptr [r14+4]
      vsubss  xmm8, xmm0, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [r14+8]
      vsubss  xmm9, xmm0, dword ptr [rdi+8]
    }
  }
  __asm
  {
    vmovss  xmm10, cs:__real@3b03126f
    vcomiss xmm11, xmm10
    vmovss  xmm4, [rsp+0D8h+fDecelTime]
  }
  if ( !v28 )
    goto LABEL_29;
  __asm { vcomiss xmm4, xmm10 }
  if ( v28 )
  {
    __asm { vmovss  xmm10, cs:__real@447a0000 }
    _RBX->trTime = level.time;
    __asm
    {
      vmulss  xmm0, xmm6, xmm10
      vcvttss2si eax, xmm0
    }
    _RBX->trDuration = _EAX;
    __asm { vmovss  dword ptr [rsi+8], xmm6 }
    positionControl->decelTime = 0.0;
    positionControl->pos3 = *_R14;
    Trajectory_SetTrBase(_RBX, inOutCurrPos);
    if ( !_RBX->trDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 301, ASSERT_TYPE_ASSERT, "( pTr->trDuration )", (const char *)&queryFormat, "pTr->trDuration") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+8]
      vdivss  xmm1, xmm10, xmm0
      vmulss  xmm2, xmm7, xmm1
      vmulss  xmm0, xmm8, xmm1
      vmovss  [rsp+0D8h+var_A8], xmm2
      vmulss  xmm1, xmm9, xmm1
      vmovss  dword ptr [rbx+18h], xmm2
      vmovss  dword ptr [rbx+1Ch], xmm0
      vmovss  dword ptr [rbx+20h], xmm1
    }
    if ( (v112 & 0x7F800000) == 2139095040 )
      goto LABEL_62;
    __asm { vmovss  [rsp+0D8h+var_A8], xmm0 }
    if ( (v113 & 0x7F800000) == 2139095040 )
      goto LABEL_62;
    __asm { vmovss  [rsp+0D8h+var_A8], xmm1 }
    if ( (v114 & 0x7F800000) == 2139095040 )
    {
LABEL_62:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 304, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )") )
        __debugbreak();
    }
    _RBX->trType = TR_LINEAR_STOP;
    BgTrajectory::LegacyEvaluateTrajectory(_RBX, level.time, inOutCurrPos);
    if ( !_RBX->trTime )
    {
      trDuration = _RBX->trDuration;
      _RBX->trTime = 1;
      if ( trDuration > 1 )
        _RBX->trDuration = trDuration - 1;
    }
  }
  else
  {
LABEL_29:
    __asm
    {
      vsubss  xmm0, xmm6, xmm11
      vsubss  xmm1, xmm0, xmm4
      vmulss  xmm0, xmm7, xmm7
      vmovaps [rsp+0D8h+var_88], xmm12
      vmovss  xmm12, cs:__real@40000000
      vmulss  xmm2, xmm8, xmm8
      vaddss  xmm3, xmm2, xmm0
      vmovss  dword ptr [rsi+8], xmm1
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm2, xmm3, xmm1
      vmulss  xmm0, xmm6, xmm12
      vsubss  xmm1, xmm0, xmm11
      vmovaps [rsp+0D8h+var_98], xmm13
      vsqrtss xmm13, xmm2, xmm2
      vsubss  xmm6, xmm1, xmm4
      vxorps  xmm2, xmm2, xmm2
      vucomiss xmm6, xmm2
      vmovss  dword ptr [rsi], xmm4
    }
    if ( v29 )
    {
      v64 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 324, ASSERT_TYPE_ASSERT, "( (2.0f * fTotalTime) - fAccelTime - fDecelTime )", (const char *)&queryFormat, "(2.0f * fTotalTime) - fAccelTime - fDecelTime");
      v28 = 0;
      v29 = !v64;
      if ( v64 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm11, xmm10
      vmovss  xmm1, cs:__real@3f800000
      vmulss  xmm0, xmm13, xmm12
      vdivss  xmm3, xmm0, xmm6
      vcmpless xmm0, xmm13, cs:__real@80000000
      vblendvps xmm0, xmm13, xmm1, xmm0
      vmovaps xmm13, [rsp+0D8h+var_98]
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm7, xmm2
      vmulss  xmm6, xmm0, xmm3
      vmulss  xmm0, xmm8, xmm2
      vmulss  xmm1, xmm9, xmm2
      vmulss  xmm8, xmm0, xmm3
      vmovss  dword ptr [rsi+4], xmm3
      vmulss  xmm9, xmm1, xmm3
    }
    if ( v28 | v29 )
    {
      positionControl->pos1 = *inOutCurrPos;
      __asm { vcomiss xmm10, dword ptr [rsi+8] }
      _RBX->trTime = level.time;
      if ( v28 )
      {
        __asm
        {
          vmovss  xmm7, cs:__real@447a0000
          vmulss  xmm0, xmm7, dword ptr [rsi+8]
          vcvttss2si eax, xmm0
        }
        _RBX->trDuration = _EAX;
        Trajectory_SetTrBase(_RBX, inOutCurrPos);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+8]
          vmulss  xmm10, xmm0, xmm6
          vmulss  xmm11, xmm0, xmm8
          vmulss  xmm12, xmm0, xmm9
        }
        if ( !_RBX->trDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 353, ASSERT_TYPE_ASSERT, "( pTr->trDuration )", (const char *)&queryFormat, "pTr->trDuration") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+8]
          vdivss  xmm1, xmm7, xmm0
          vmulss  xmm2, xmm10, xmm1
          vmulss  xmm0, xmm11, xmm1
          vmovss  [rsp+0D8h+var_A8], xmm2
          vmulss  xmm1, xmm12, xmm1
          vmovss  dword ptr [rbx+18h], xmm2
          vmovss  dword ptr [rbx+1Ch], xmm0
          vmovss  dword ptr [rbx+20h], xmm1
        }
        if ( (v118 & 0x7F800000) == 2139095040 )
          goto LABEL_63;
        __asm { vmovss  [rsp+0D8h+var_A8], xmm0 }
        if ( (v119 & 0x7F800000) == 2139095040 )
          goto LABEL_63;
        __asm { vmovss  [rsp+0D8h+var_A8], xmm1 }
        if ( (v120 & 0x7F800000) == 2139095040 )
        {
LABEL_63:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 356, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )") )
            __debugbreak();
        }
        _RBX->trType = TR_LINEAR_STOP;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vmulss  xmm1, xmm0, cs:__real@447a0000
          vcvttss2si eax, xmm1
        }
        _RBX->trDuration = _EAX;
        Trajectory_SetTrBase(_RBX, inOutCurrPos);
        __asm
        {
          vmovss  [rsp+0D8h+var_A8], xmm6
          vmovss  dword ptr [rbx+18h], xmm6
          vmovss  dword ptr [rbx+1Ch], xmm8
          vmovss  dword ptr [rbx+20h], xmm9
        }
        if ( (v121 & 0x7F800000) == 2139095040 )
          goto LABEL_64;
        __asm { vmovss  [rsp+0D8h+var_A8], xmm8 }
        if ( (v122 & 0x7F800000) == 2139095040 )
          goto LABEL_64;
        __asm { vmovss  [rsp+0D8h+var_A8], xmm9 }
        if ( (v123 & 0x7F800000) == 2139095040 )
        {
LABEL_64:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 367, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )") )
            __debugbreak();
        }
        _RBX->trType = TR_DECELERATE;
      }
    }
    else
    {
      __asm { vmulss  xmm0, xmm11, cs:__real@447a0000 }
      _RBX->trTime = level.time;
      __asm { vcvttss2si eax, xmm0 }
      _RBX->trDuration = _EAX;
      Trajectory_SetTrBase(_RBX, inOutCurrPos);
      __asm
      {
        vmovss  [rsp+0D8h+var_A8], xmm6
        vmovss  dword ptr [rbx+18h], xmm6
        vmovss  dword ptr [rbx+1Ch], xmm8
        vmovss  dword ptr [rbx+20h], xmm9
      }
      if ( (v115 & 0x7F800000) == 2139095040 )
        goto LABEL_65;
      __asm { vmovss  [rsp+0D8h+var_A8], xmm8 }
      if ( (v116 & 0x7F800000) == 2139095040 )
        goto LABEL_65;
      __asm { vmovss  [rsp+0D8h+var_A8], xmm9 }
      if ( (v117 & 0x7F800000) == 2139095040 )
      {
LABEL_65:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 336, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )") )
          __debugbreak();
      }
      _RBX->trType = TR_ACCELERATE;
      BgTrajectory::LegacyEvaluateTrajectory(_RBX, _RBX->trDuration + level.time, &positionControl->pos1);
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+8]
      vmovaps xmm12, [rsp+0D8h+var_88]
      vmulss  xmm0, xmm3, xmm6
      vaddss  xmm1, xmm0, dword ptr [r15]
      vmovss  dword ptr [rsi+18h], xmm1
      vmulss  xmm2, xmm3, xmm8
      vaddss  xmm0, xmm2, dword ptr [r15+4]
      vmovss  dword ptr [rsi+1Ch], xmm0
      vmulss  xmm1, xmm3, xmm9
      vaddss  xmm2, xmm1, dword ptr [r15+8]
      vmovss  dword ptr [rsi+20h], xmm2
    }
    positionControl->pos3 = *_R14;
    if ( !_RBX->trTime )
    {
      v104 = _RBX->trDuration;
      _RBX->trTime = 1;
      if ( v104 > 1 )
        _RBX->trDuration = v104 - 1;
    }
    BgTrajectory::LegacyEvaluateTrajectory(_RBX, level.time, inOutCurrPos);
  }
  __asm { vmovaps xmm9, [rsp+0D8h+var_58] }
  _R11 = &v129;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm8, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_38]
  }
}

/*
==============
G_ScrMover_SetupMoveSpeed
==============
*/

void __fastcall G_ScrMover_SetupMoveSpeed(trajectory_t *pTr, const vec3_t *vSpeed, double fTotalTime, double fAccelTime, const float fDecelTime, vec3_t *inOutCurrPos, mover_positions_t *positionControl)
{
  bool v16; 
  vec3_t *p_pos3; 
  int time; 
  bool v43; 
  bool v49; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  trajectory_t_secure tr; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBP = vSpeed;
  _RDI = positionControl;
  _RBX = pTr;
  __asm
  {
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
  }
  if ( pTr->trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 419, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( pTr ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( pTr )") )
      __debugbreak();
  }
  v16 = _RBX->trType == TR_STATIONARY;
  if ( _RBX->trType )
    BgTrajectory::LegacyEvaluateTrajectory(_RBX, level.time, inOutCurrPos);
  __asm
  {
    vmovss  xmm2, [rsp+0B8h+fDecelTime]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm8, xmm6
  }
  if ( !v16 )
    goto LABEL_17;
  __asm { vucomiss xmm2, xmm6 }
  if ( v16 )
  {
    __asm { vmulss  xmm0, xmm7, cs:__real@447a0000 }
    _RBX->trTime = level.time;
    __asm { vcvttss2si eax, xmm0 }
    _RBX->trDuration = _EAX;
    __asm { vmovss  dword ptr [rdi+8], xmm7 }
    positionControl->decelTime = 0.0;
    _RBX->trBase = *inOutCurrPos;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vmovss  dword ptr [rbx+18h], xmm0
    }
    _RBX->trDelta.v[1] = _RBP->v[1];
    _RBX->trDelta.v[2] = _RBP->v[2];
    __asm { vmovss  [rsp+0B8h+var_88], xmm0 }
    if ( (v67 & 0x7F800000) == 2139095040 )
      goto LABEL_42;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vmovss  [rsp+0B8h+var_88], xmm0
    }
    if ( (v68 & 0x7F800000) == 2139095040 )
      goto LABEL_42;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+20h]
      vmovss  [rsp+0B8h+var_88], xmm0
    }
    if ( (v69 & 0x7F800000) == 2139095040 )
    {
LABEL_42:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 437, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )") )
        __debugbreak();
    }
    _RBX->trType = TR_LINEAR_STOP;
    BgTrajectory::LegacyEvaluateTrajectory(_RBX, level.time, inOutCurrPos);
    p_pos3 = &positionControl->pos3;
    time = level.time + _RBX->trDuration;
  }
  else
  {
LABEL_17:
    __asm
    {
      vucomiss xmm8, xmm6
      vmovss  dword ptr [rdi], xmm2
      vsubss  xmm0, xmm7, xmm8
      vmovss  xmm7, cs:__real@447a0000
      vsubss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rdi+8], xmm1
      vmovss  xmm0, dword ptr [rbp+0]
      vmovss  xmm2, dword ptr [rbp+4]
      vmovss  xmm3, dword ptr [rbp+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  dword ptr [rdi+4], xmm0
    }
    if ( v16 )
    {
      positionControl->pos1 = *inOutCurrPos;
      __asm { vucomiss xmm6, dword ptr [rdi+8] }
      _RBX->trTime = level.time;
      __asm
      {
        vmulss  xmm0, xmm7, dword ptr [rdi]
        vcvttss2si eax, xmm0
      }
      _RBX->trDuration = _EAX;
      _RBX->trBase = *inOutCurrPos;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0]
        vmovss  dword ptr [rbx+18h], xmm0
      }
      _RBX->trDelta.v[1] = _RBP->v[1];
      _RBX->trDelta.v[2] = _RBP->v[2];
      __asm { vmovss  [rsp+0B8h+var_88], xmm0 }
      if ( (v73 & 0x7F800000) == 2139095040 )
        goto LABEL_43;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vmovss  [rsp+0B8h+var_88], xmm0
      }
      if ( (v74 & 0x7F800000) == 2139095040 )
        goto LABEL_43;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vmovss  [rsp+0B8h+var_88], xmm0
      }
      v43 = (v75 & 0x7F800000) == 2139095040;
      if ( (v75 & 0x7F800000) == 2139095040 )
      {
LABEL_43:
        v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 486, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )");
        v43 = !v49;
        if ( v49 )
          __debugbreak();
      }
      _RBX->trType = TR_DECELERATE;
    }
    else
    {
      _RBX->trTime = level.time;
      __asm
      {
        vmulss  xmm0, xmm8, xmm7
        vcvttss2si eax, xmm0
      }
      _RBX->trDuration = _EAX;
      _RBX->trBase = *inOutCurrPos;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0]
        vmovss  dword ptr [rbx+18h], xmm0
      }
      _RBX->trDelta.v[1] = _RBP->v[1];
      _RBX->trDelta.v[2] = _RBP->v[2];
      __asm { vmovss  [rsp+0B8h+var_88], xmm0 }
      if ( (v70 & 0x7F800000) == 2139095040 )
        goto LABEL_44;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vmovss  [rsp+0B8h+var_88], xmm0
      }
      if ( (v71 & 0x7F800000) == 2139095040 )
        goto LABEL_44;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vmovss  [rsp+0B8h+var_88], xmm0
      }
      if ( (v72 & 0x7F800000) == 2139095040 )
      {
LABEL_44:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 459, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )") )
          __debugbreak();
      }
      _RBX->trType = TR_ACCELERATE;
      BgTrajectory::LegacyEvaluateTrajectory(_RBX, _RBX->trDuration + level.time, &positionControl->pos1);
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+8]
      vmulss  xmm0, xmm1, dword ptr [rbp+0]
      vaddss  xmm2, xmm0, dword ptr [r14]
      vmovss  dword ptr [rdi+18h], xmm2
      vmulss  xmm0, xmm1, dword ptr [rbp+4]
      vaddss  xmm3, xmm0, dword ptr [r14+4]
      vmovss  dword ptr [rdi+1Ch], xmm3
      vmulss  xmm0, xmm1, dword ptr [rbp+8]
      vaddss  xmm4, xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rdi+20h], xmm4
      vmovss  xmm0, dword ptr [rdi]
      vucomiss xmm0, xmm6
    }
    if ( v43 )
    {
      __asm { vmovss  dword ptr [rdi+24h], xmm2 }
      *(_QWORD *)&positionControl->pos3.y = *(_QWORD *)&positionControl->pos2.y;
    }
    else
    {
      __asm { vmovss  xmm1, dword ptr [rbp+4] }
      tr.trTime = level.time;
      __asm
      {
        vmulss  xmm0, xmm0, xmm7
        vcvttss2si eax, xmm0
        vmovss  xmm0, dword ptr [rbp+0]
      }
      tr.trDuration = _EAX;
      __asm { vmovss  [rsp+0B8h+var_88], xmm0 }
      tr.trType = TR_DECELERATE;
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+tr.trBase], xmm2
        vmovss  xmm2, dword ptr [rbp+8]
        vmovss  dword ptr [rsp+0B8h+tr.trBase+4], xmm3
        vmovss  dword ptr [rsp+0B8h+tr.trBase+8], xmm4
        vmovss  dword ptr [rsp+0B8h+tr.trDelta], xmm0
        vmovss  dword ptr [rsp+0B8h+tr.trDelta+4], xmm1
        vmovss  dword ptr [rsp+0B8h+tr.trDelta+8], xmm2
      }
      if ( (v76 & 0x7F800000) == 2139095040 )
        goto LABEL_45;
      __asm { vmovss  [rsp+0B8h+var_88], xmm1 }
      if ( (v77 & 0x7F800000) == 2139095040 )
        goto LABEL_45;
      __asm { vmovss  [rsp+0B8h+var_88], xmm2 }
      if ( (v78 & 0x7F800000) == 2139095040 )
      {
LABEL_45:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 504, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tr.trDelta )[0] ) && !IS_NAN( ( tr.trDelta )[1] ) && !IS_NAN( ( tr.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tr.trDelta )[0] ) && !IS_NAN( ( tr.trDelta )[1] ) && !IS_NAN( ( tr.trDelta )[2] )") )
          __debugbreak();
      }
      BgTrajectory::LegacyEvaluateTrajectory(&tr, tr.trDuration + level.time, &positionControl->pos3);
    }
    time = level.time;
    p_pos3 = inOutCurrPos;
  }
  BgTrajectory::LegacyEvaluateTrajectory(_RBX, time, p_pos3);
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  const char *v7; 
  scr_string_t targetname; 
  const char *v9; 
  const char *v10; 
  const char *v19; 
  const char *v20; 
  char *fmt; 
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
  _RBP = GetEntity(EntityRef);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 801, ASSERT_TYPE_ASSERT, "( ( ent != nullptr ) )", "%s\n\t( ent ) = %p", "( ent != nullptr )", NULL) )
    __debugbreak();
  if ( EntityRef.entnum == -1 || (int)EntityRef.entnum >= level.maxclients )
  {
    G_FreeEntity(mSelf);
    v7 = j_va("Spawn() with 'script_arms' called with invalid client id %d (level max is currently %d)\n", EntityRef.entnum, (unsigned int)level.maxclients);
    Scr_Error(COM_ERR_6225, v2, v7);
  }
  if ( !G_Utils_IsClientOrAgent(_RBP) )
  {
    targetname = _RBP->targetname;
    if ( targetname )
      v9 = SL_ConvertToString(targetname);
    else
      v9 = "<undefined>";
    v10 = SL_ConvertToString(_RBP->classname);
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+134h]
      vmovss  xmm2, dword ptr [rbp+130h]
      vmovss  xmm0, dword ptr [rbp+138h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovsd  [rsp+78h+fmt], xmm0
    }
    v19 = j_va("SetOnWallAnimConditional(): Only valid on players or agents; called on entity %i at %.0f %.0f %.0f classname %s targetname %s\n", EntityRef.entnum, _R8, _R9, fmt, v10, v9);
    Scr_Error(COM_ERR_6226, v2, v19);
  }
  if ( !SV_ClientMP_IsClientConnected(EntityRef.entnum) )
  {
    G_FreeEntity(mSelf);
    v20 = j_va("Spawn() with 'script_arms' given client %d, which is not currently connected!\n", EntityRef.entnum);
    Scr_Error(COM_ERR_2603, v2, v20);
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
  __int64 v10; 
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
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+trBase+8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rsp+58h+trBase+4]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsp+58h+trBase]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+58h+var_38], xmm0
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_PrintError(1, "Killing script_brushmodel at (%f %f %f) because the brush model is invalid.\n", _R8, _R9, v10);
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
  char *v11; 
  GWeaponMap *Instance; 
  const char *v24; 
  GWeaponMap *v25; 
  DObj *ServerDObjForEnt; 
  DObj *v27; 
  char *fmt; 
  char *fmta; 
  __int64 v30; 
  __int64 v31; 
  int out; 
  bool outIsAlternate; 
  char *name; 
  Weapon result; 
  Weapon r_weapon; 

  _RBX = mSelf;
  if ( !mSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 855, ASSERT_TYPE_ASSERT, "( mSelf )", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  v2 = ScriptContext_Server();
  G_ScrMover_InitScriptMover(_RBX);
  if ( level.spawnVar.spawnVarsValid )
  {
    if ( G_SpawnInt(0x200u, (const char *)&queryFormat.fmt + 3, &out) )
    {
      _RBX->s.un.scriptMoverType = 5;
      Int = out;
      if ( (unsigned int)out > 0x31 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+138h]
          vmovss  xmm3, dword ptr [rbx+130h]
          vmovss  xmm1, dword ptr [rbx+134h]
          vcvtss2sd xmm0, xmm0, xmm0
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+0E8h+var_C0], xmm0
          vmovq   r9, xmm3
          vmovsd  [rsp+0E8h+fmt], xmm1
        }
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE7230, 346i64, _R9, fmt, v30, 50, out);
        _RBX->s.staticState.player.stowedWeaponHandle.m_mapEntryId = out;
        goto LABEL_23;
      }
LABEL_16:
      _RBX->s.staticState.player.stowedWeaponHandle.m_mapEntryId = Int;
      goto LABEL_23;
    }
    if ( G_LevelSpawnString(0x49Fu, "none", (const char **)&name) )
    {
      v11 = name;
      _RBX->s.un.scriptMoverType = 6;
      _RAX = G_Weapon_GetWeaponForName(&result, v11);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+0E8h+r_weapon.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+0E8h+r_weapon.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsp+0E8h+r_weapon.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      Instance = GWeaponMap::GetInstance();
      BG_SetWeaponForEntity(Instance, &_RBX->s, &r_weapon);
      G_DObjUpdate(_RBX, 1);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm3, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0E8h+var_C0], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+0E8h+fmt], xmm1
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FE72B8, 347i64, _R9, fmta, v31);
    }
  }
  else
  {
    if ( Scr_GetNumParam(v2) < 5 )
      Scr_Error(COM_ERR_2329, v2, "USAGE: spawn( \"script_weapon\", <origin>, <spawnflags>, <forceNoCollision>, <weaponNameOrId> )");
    if ( Scr_GetType(v2, 4u) == VAR_INTEGER )
    {
      _RBX->s.un.scriptMoverType = 5;
      Int = Scr_GetInt(v2, 4u);
      out = Int;
      if ( Int > 0x31 )
      {
        v24 = j_va("Invalid index specified for client weapon - valid range is [0,%d) value is %d", 50i64, Int);
        Scr_Error(COM_ERR_2330, v2, v24);
        Int = out;
      }
      goto LABEL_16;
    }
    if ( Scr_GetType(v2, 4u) )
    {
      _RBX->s.un.scriptMoverType = 6;
      GScr_Main_GetWeaponParam(v2, 4u, &r_weapon, &outIsAlternate);
      v25 = GWeaponMap::GetInstance();
      BG_SetWeaponForEntity(v25, &_RBX->s, &r_weapon);
      G_DObjUpdate(_RBX, 1);
      ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
      v27 = ServerDObjForEnt;
      if ( ServerDObjForEnt )
      {
        BG_UpdateWeaponHidePartBitsForDObj(ServerDObjForEnt, &r_weapon, 0, 0);
        BG_UpdatedWeaponBones(&r_weapon, v27, 0);
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
  SV_LinkEntity(_RBX);
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
  unsigned int trType; 
  bool v11; 
  __int64 v24; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  vec3_t result; 
  __int64 v63; 
  void *retaddr; 

  _RAX = &retaddr;
  v63 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RSI = positionControl;
  _RBX = pTr;
  if ( pTr->trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 48, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( pTr ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( pTr )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@447a0000
    vmulss  xmm0, xmm6, dword ptr [rsi+8]
    vcvttss2si ebp, xmm0
  }
  trType = _RBX->trType;
  if ( _RBX->trType == TR_ACCELERATE )
  {
    v11 = 0;
    if ( _EBP > 0 )
    {
      _RBX->trTime = level.time;
      _RBX->trDuration = _EBP;
      Trajectory_SetTrBase(_RBX, &_RSI->pos1);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+18h]
        vsubss  xmm3, xmm0, dword ptr [rsi+0Ch]
        vmovss  xmm1, dword ptr [rsi+1Ch]
        vsubss  xmm4, xmm1, dword ptr [rsi+10h]
        vmovss  xmm0, dword ptr [rsi+20h]
        vsubss  xmm5, xmm0, dword ptr [rsi+14h]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebp
        vdivss  xmm2, xmm6, xmm1
        vmulss  xmm3, xmm3, xmm2
        vmovss  dword ptr [rbx+18h], xmm3
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rbx+20h], xmm1
        vmovss  [rsp+88h+var_58], xmm3
      }
      if ( (v56 & 0x7F800000) == 2139095040 )
        goto LABEL_31;
      __asm { vmovss  [rsp+88h+var_58], xmm0 }
      if ( (v57 & 0x7F800000) == 2139095040 )
        goto LABEL_31;
      __asm { vmovss  [rsp+88h+var_58], xmm1 }
      if ( (v58 & 0x7F800000) == 2139095040 )
      {
LABEL_31:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 65, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )") )
          __debugbreak();
      }
      _RBX->trType = TR_LINEAR_STOP;
      v24 = 0i64;
      goto LABEL_28;
    }
  }
  else
  {
    v11 = trType < 3;
    if ( trType != 3 )
      goto LABEL_23;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rsi]
  }
  if ( !v11 )
  {
LABEL_23:
    if ( trType == 6 || trType - 24 <= 1 )
    {
      BgTrajectory::LegacyEvaluateTrajectory(_RBX, level.time, &result);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+24h]
        vmovss  dword ptr [rsp+88h+result], xmm0
        vmovss  xmm1, dword ptr [rsi+28h]
        vmovss  dword ptr [rsp+88h+result+4], xmm1
        vmovss  xmm0, dword ptr [rsi+2Ch]
        vmovss  dword ptr [rsp+88h+result+8], xmm0
      }
    }
    Trajectory_SetTrBase(_RBX, &result);
    _RBX->trTime = level.time;
    _RBX->trType = TR_STATIONARY;
    memset(&result, 0, sizeof(result));
    v24 = 1i64;
    goto LABEL_28;
  }
  _RBX->trTime = level.time;
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rsi]
    vcvttss2si eax, xmm1
  }
  _RBX->trDuration = _EAX;
  Trajectory_SetTrBase(_RBX, &_RSI->pos2);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vsubss  xmm5, xmm0, dword ptr [rsi+18h]
    vmovss  xmm1, dword ptr [rsi+28h]
    vsubss  xmm6, xmm1, dword ptr [rsi+1Ch]
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vsubss  xmm7, xmm0, dword ptr [rsi+20h]
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmovss  xmm4, dword ptr [rsi+4]
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm5, xmm0, xmm4
    vmulss  xmm1, xmm6, xmm2
    vmulss  xmm3, xmm1, xmm4
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm2, xmm0, xmm4
    vmovss  dword ptr [rbx+18h], xmm5
    vmovss  dword ptr [rbx+1Ch], xmm3
    vmovss  dword ptr [rbx+20h], xmm2
    vmovss  [rsp+88h+var_58], xmm5
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm { vmovss  [rsp+88h+var_58], xmm3 }
  if ( (v60 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm { vmovss  [rsp+88h+var_58], xmm2 }
  if ( (v61 & 0x7F800000) == 2139095040 )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_mover.cpp", 81, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pTr->trDelta )[0] ) && !IS_NAN( ( pTr->trDelta )[1] ) && !IS_NAN( ( pTr->trDelta )[2] )") )
      __debugbreak();
  }
  _RBX->trType = TR_DECELERATE;
  v24 = 0i64;
LABEL_28:
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  return v24;
}

