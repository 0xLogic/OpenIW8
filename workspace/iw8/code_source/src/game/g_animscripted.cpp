/*
==============
G_Animscripted_Think
==============
*/

void __fastcall G_Animscripted_Think(gentity_s *ent)
{
  ?G_Animscripted_Think@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GScr_GetEntAnimTree
==============
*/

XAnimTree *__fastcall GScr_GetEntAnimTree(gentity_s *ent)
{
  return ?GScr_GetEntAnimTree@@YAPEAUXAnimTree@@PEAUgentity_s@@@Z(ent);
}

/*
==============
GScr_GetStartAngles
==============
*/

void __fastcall GScr_GetStartAngles(scrContext_t *scrContext)
{
  ?GScr_GetStartAngles@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_ReduceAnglesError
==============
*/

void __fastcall G_ReduceAnglesError(vec3_t *angles, vec3_t *anglesError, float maxChange)
{
  ?G_ReduceAnglesError@@YAXAEATvec3_t@@0M@Z(angles, anglesError, maxChange);
}

/*
==============
GScr_GetCycleOriginOffset
==============
*/

void __fastcall GScr_GetCycleOriginOffset(scrContext_t *scrContext)
{
  ?GScr_GetCycleOriginOffset@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
GScr_GetAnglesForAnimTime
==============
*/

void __fastcall GScr_GetAnglesForAnimTime(scrContext_t *scrContext)
{
  ?GScr_GetAnglesForAnimTime@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_ReduceOriginError
==============
*/

void __fastcall G_ReduceOriginError(vec3_t *origin, vec3_t *originError, float maxChange)
{
  ?G_ReduceOriginError@@YAXAEATvec3_t@@0M@Z(origin, originError, maxChange);
}

/*
==============
GScr_GetStartOrigin
==============
*/

void __fastcall GScr_GetStartOrigin(scrContext_t *scrContext)
{
  ?GScr_GetStartOrigin@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_Animscripted
==============
*/

void __fastcall G_Animscripted(scrContext_t *scrContext, gentity_s *ent, const vec3_t *origin, const vec3_t *angles, unsigned int anim, unsigned int root, scr_string_t notifyName, unsigned __int8 animMode, float goalTime, float animRate)
{
  ?G_Animscripted@@YAXAEAUscrContext_t@@PEAUgentity_s@@AEBTvec3_t@@2IIW4scr_string_t@@EMM@Z(scrContext, ent, origin, angles, anim, root, notifyName, animMode, goalTime, animRate);
}

/*
==============
GScr_GetOriginForAnimTime
==============
*/

void __fastcall GScr_GetOriginForAnimTime(scrContext_t *scrContext)
{
  ?GScr_GetOriginForAnimTime@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_FlagAnimForUpdate
==============
*/

void __fastcall G_FlagAnimForUpdate(gentity_s *ent)
{
  ?G_FlagAnimForUpdate@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GScr_GetAnglesForAnimTime
==============
*/
void GScr_GetAnglesForAnimTime(scrContext_t *scrContext)
{
  float v2; 
  double Float; 
  double v4; 
  const XAnim_s *Anims; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v9; 
  vec4_t rot; 
  tmat33_t<vec3_t> axis; 
  vec3_t v12; 
  vec3_t trans; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
  v2 = 0.0;
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    Float = Scr_GetFloat(scrContext, 3u);
    v4 = I_fclamp(*(float *)&Float, 0.0, 1.0);
    v2 = *(float *)&v4;
  }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v2);
  v12 = vectorValue;
  AnglesToAxis(&angles, &axis);
  QuatToAxis(&rot, &in1);
  MatrixMultiply(&in1, &axis, &out);
  AxisToAngles(&out, &v9);
  Scr_AddVector(scrContext, v9.v);
}

/*
==============
GScr_GetCycleOriginOffset
==============
*/
void GScr_GetCycleOriginOffset(scrContext_t *scrContext)
{
  const XAnim_s *Anims; 
  int linkPointer; 
  vec3_t v4; 
  vec3_t trans; 
  float value[4]; 
  tmat33_t<vec3_t> axis; 
  vec3_t vectorValue; 
  vec4_t rot; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  linkPointer = Scr_GetAnim(scrContext, 1u, NULL).linkPointer;
  AnglesToAxis(&vectorValue, &axis);
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, 0.0);
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &v4, 1.0);
  value[0] = (float)((float)((float)(v4.v[0] - trans.v[0]) * axis.m[0].v[0]) + (float)((float)(v4.v[1] - trans.v[1]) * axis.m[1].v[0])) + (float)((float)(v4.v[2] - trans.v[2]) * axis.m[2].v[0]);
  value[1] = (float)((float)((float)(v4.v[0] - trans.v[0]) * axis.m[0].v[1]) + (float)((float)(v4.v[1] - trans.v[1]) * axis.m[1].v[1])) + (float)((float)(v4.v[2] - trans.v[2]) * axis.m[2].v[1]);
  value[2] = (float)((float)((float)(v4.v[0] - trans.v[0]) * axis.m[0].v[2]) + (float)((float)(v4.v[1] - trans.v[1]) * axis.m[1].v[2])) + (float)((float)(v4.v[2] - trans.v[2]) * axis.m[2].v[2]);
  Scr_AddVector(scrContext, value);
}

/*
==============
GScr_GetEntAnimTree
==============
*/
XAnimTree *GScr_GetEntAnimTree(gentity_s *ent)
{
  XAnimTree *result; 
  scrContext_t *v3; 
  double v4; 
  double v5; 
  double v6; 
  const char *v7; 
  const char *EntityTypeName; 
  const char *v9; 

  result = G_Utils_GetEntAnimTree(ent);
  if ( !result )
  {
    v3 = ScriptContext_Server();
    v4 = ent->r.currentOrigin.v[2];
    v5 = ent->r.currentOrigin.v[1];
    v6 = ent->r.currentOrigin.v[0];
    v7 = SL_ConvertToString(ent->classname);
    EntityTypeName = G_GetEntityTypeName(ent);
    v9 = j_va("entity of type '%s', classname '%s', origin (%f, %f, %f) does not have an animation tree", EntityTypeName, v7, v6, v5, v4);
    Scr_Error(COM_ERR_1779, v3, v9);
    return 0i64;
  }
  return result;
}

/*
==============
GScr_GetOriginForAnimTime
==============
*/
void GScr_GetOriginForAnimTime(scrContext_t *scrContext)
{
  float v2; 
  double Float; 
  double v4; 
  const XAnim_s *Anims; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t trans; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  vec4_t rot; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
  v2 = 0.0;
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    Float = Scr_GetFloat(scrContext, 3u);
    v4 = I_fclamp(*(float *)&Float, 0.0, 1.0);
    v2 = *(float *)&v4;
  }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v2);
  axis.m[3] = vectorValue;
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  MatrixTransformVector43(&trans, &axis, &out);
  Scr_AddVector(scrContext, out.v);
}

/*
==============
GScr_GetStartAngles
==============
*/
void GScr_GetStartAngles(scrContext_t *scrContext)
{
  float v2; 
  double Float; 
  double v4; 
  const XAnim_s *Anims; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v9; 
  vec4_t rot; 
  tmat33_t<vec3_t> axis; 
  vec3_t v12; 
  vec3_t trans; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
  v2 = 0.0;
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    Float = Scr_GetFloat(scrContext, 3u);
    v4 = I_fclamp(*(float *)&Float, 0.0, 1.0);
    v2 = *(float *)&v4;
  }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v2);
  v12 = vectorValue;
  AnglesToAxis(&angles, &axis);
  QuatToAxis(&rot, &in1);
  MatrixMultiply(&in1, &axis, &out);
  AxisToAngles(&out, &v9);
  Scr_AddVector(scrContext, v9.v);
}

/*
==============
GScr_GetStartOrigin
==============
*/
void GScr_GetStartOrigin(scrContext_t *scrContext)
{
  float v2; 
  double Float; 
  double v4; 
  const XAnim_s *Anims; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t trans; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  vec4_t rot; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
  v2 = 0.0;
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    Float = Scr_GetFloat(scrContext, 3u);
    v4 = I_fclamp(*(float *)&Float, 0.0, 1.0);
    v2 = *(float *)&v4;
  }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v2);
  axis.m[3] = vectorValue;
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  MatrixTransformVector43(&trans, &axis, &out);
  Scr_AddVector(scrContext, out.v);
}

/*
==============
G_AnimScripted_Think_DeathPlant
==============
*/
void G_AnimScripted_Think_DeathPlant(gentity_s *ent, XAnimTree *tree, vec3_t *origin, vec3_t *angles)
{
  __int128 v4; 
  __int128 v5; 
  float v6; 
  EntityAnimScript *scripted; 
  float v9; 
  float v10; 
  int passEntityNum; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double Time; 
  float v19; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 
  __int128 v23; 
  __int128 v24; 

  v6 = origin->v[2];
  scripted = ent->scripted;
  v9 = origin->v[0];
  v10 = origin->v[1];
  passEntityNum = ent->s.number;
  start.v[2] = v6;
  start.v[0] = v9;
  start.v[1] = v10;
  start.v[2] = (float)(scripted->fHeightOfs + 18.0) + v6;
  end.v[2] = v6;
  end.v[0] = v9;
  end.v[1] = v10;
  end.v[2] = (float)(v6 + scripted->fHeightOfs) - 18.0;
  G_Main_TraceCapsule(&results, &start, &end, &ent->r.box, passEntityNum, 131089);
  v14 = FLOAT_1_0;
  if ( !results.allsolid )
  {
    v23 = v5;
    if ( results.fraction < 1.0 )
    {
      v24 = v4;
      v15 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      v16 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      v17 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
      scripted->fHeightOfs = v17 - origin->v[2];
      origin->v[0] = v15;
      origin->v[1] = v16;
      origin->v[2] = v17;
    }
  }
  if ( scripted->fOrientLerp >= 0.0 )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v19 = (float)((float)level.frameDuration * 0.001) + scripted->fOrientLerp;
    scripted->fOrientLerp = v19;
    if ( v19 <= 1.0 )
      v14 = v19;
    else
      scripted->fOrientLerp = 1.0;
  }
  else
  {
    Time = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, scripted->anim);
    v14 = *(float *)&Time;
  }
  angles->v[0] = (float)(v14 * scripted->fEndPitch) + angles->v[0];
  angles->v[2] = (float)(v14 * scripted->fEndRoll) + angles->v[2];
}

/*
==============
G_Animscripted
==============
*/
void G_Animscripted(scrContext_t *scrContext, gentity_s *ent, const vec3_t *origin, const vec3_t *angles, unsigned int anim, unsigned int root, scr_string_t notifyName, unsigned __int8 animMode, float goalTime, float animRate)
{
  const char *v14; 
  const char *v15; 
  XAnimTree *EntAnimTree; 
  scrContext_t *v17; 
  double v18; 
  double v19; 
  double v20; 
  const char *v21; 
  const char *EntityTypeName; 
  const char *v23; 
  EntityAnimScript *scripted; 
  const XAnim_s *v25; 
  DObj *objID; 
  const dvar_t *v27; 
  bool IsLooped; 
  vec3_t anims; 
  vec3_t out; 
  vec3_t anglesa; 
  vec4_t rot; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v34; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_1781, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( (ent->flags.m_flags[0] & 0x80000000) == 0 )
  {
    v14 = SL_ConvertToString(ent->classname);
    v15 = j_va("entity (classname: '%s') does not currently support animscripted", v14);
    Scr_ObjectError(COM_ERR_1782, scrContext, v15);
  }
  EntAnimTree = G_Utils_GetEntAnimTree(ent);
  if ( !EntAnimTree )
  {
    v17 = ScriptContext_Server();
    v18 = ent->r.currentOrigin.v[2];
    v19 = ent->r.currentOrigin.v[1];
    v20 = ent->r.currentOrigin.v[0];
    v21 = SL_ConvertToString(ent->classname);
    EntityTypeName = G_GetEntityTypeName(ent);
    v23 = j_va("entity of type '%s', classname '%s', origin (%f, %f, %f) does not have an animation tree", EntityTypeName, v21, v20, v19, v18);
    Scr_Error(COM_ERR_1779, v17, v23);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animscripted.cpp", 167, ASSERT_TYPE_ASSERT, "( pAnimTree )", (const char *)&queryFormat, "pAnimTree") )
      __debugbreak();
  }
  scripted = ent->scripted;
  if ( !scripted )
  {
    scripted = (EntityAnimScript *)MT_Alloc(0x60ui64, 19);
    ent->scripted = scripted;
  }
  if ( ent->s.eType == ET_SCRIPTMOVER )
    ent->s.lerp.u.anonymous.data[2] |= 0x40u;
  scripted->mode = animMode;
  scripted->bStarted = 0;
  scripted->anim = anim;
  scripted->root = root;
  v25 = XAnimGetAnims(EntAnimTree);
  *(_QWORD *)anims.v = v25;
  if ( animMode == 1 )
  {
    G_Animscripted_DeathPlant(ent, v25, anim, origin, angles);
  }
  else
  {
    scripted->axis.m[3].v[0] = origin->v[0];
    scripted->axis.m[3].v[1] = origin->v[1];
    scripted->axis.m[3].v[2] = origin->v[2];
    AnglesToAxis(angles, (tmat33_t<vec3_t> *)scripted);
  }
  objID = Com_GetServerDObjForEnt(ent);
  XAnimClearTreeGoalWeightsStrict(EntAnimTree, 0, XANIM_SUBTREE_DEFAULT, root, goalTime, objID, LINEAR);
  v27 = DVARINT_g_dumpAnimsCommands;
  if ( !DVARINT_g_dumpAnimsCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnimsCommands") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.integer == ent->s.number )
    DumpAnimCommand("animscripted(internal)", EntAnimTree, ent->scripted->anim, -1, 1.0, goalTime, animRate);
  IsLooped = XAnimIsLooped(*(const XAnim_s **)anims.v, anim);
  XAnimSetCompleteGoalWeight(objID, 0, XANIM_SUBTREE_DEFAULT, anim, 1.0, goalTime, animRate, notifyName, 0, !IsLooped, LINEAR, NULL);
  if ( (ent->flags.m_flags[0] & 0x800) == 0 )
    ent->flags.m_flags[1] |= 2 * GameModeFlagValues::ms_spValue;
  XAnimCalcAbsDelta(objID, 0, XANIM_SUBTREE_DEFAULT, anim, &rot, &anims);
  MatrixTransformVector43(&anims, &scripted->axis, &out);
  QuatToAxis(&rot, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)scripted, &v34);
  AxisToAngles(&v34, &anglesa);
  scripted->originError.v[0] = ent->r.currentOrigin.v[0] - out.v[0];
  scripted->originError.v[1] = ent->r.currentOrigin.v[1] - out.v[1];
  scripted->originError.v[2] = ent->r.currentOrigin.v[2] - out.v[2];
  AnglesSubtract(&ent->r.currentAngles, &anglesa, &scripted->anglesError);
}

/*
==============
G_Animscripted_DeathPlant
==============
*/
void G_Animscripted_DeathPlant(gentity_s *ent, const XAnim_s *anims, unsigned int anim, const vec3_t *origin, const vec3_t *angles)
{
  EntityAnimScript *scripted; 
  float v10; 
  float v11; 
  float v12; 
  int number; 
  float fraction; 
  float v15; 
  float v16; 
  int v18; 
  float v19; 
  int v21; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v26; 
  vec3_t trans; 
  vec3_t out; 
  vec3_t vOrigin; 
  vec4_t rot; 
  trace_t results; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v33; 

  scripted = ent->scripted;
  if ( !scripted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animscripted.cpp", 90, ASSERT_TYPE_ASSERT, "( scripted )", (const char *)&queryFormat, "scripted") )
    __debugbreak();
  v10 = origin->v[2];
  v11 = origin->v[0];
  v12 = origin->v[1];
  number = ent->s.number;
  start.v[2] = v10 + 36.0;
  end.v[2] = v10 - 18.0;
  start.v[0] = v11;
  start.v[1] = v12;
  end.v[0] = v11;
  end.v[1] = v12;
  G_Main_TraceCapsule(&results, &start, &end, &ent->r.box, number, 131089);
  if ( results.allsolid || (fraction = results.fraction, results.fraction >= 1.0) )
  {
    scripted->axis.m[3].v[0] = origin->v[0];
    scripted->axis.m[3].v[1] = origin->v[1];
    v15 = origin->v[2];
  }
  else
  {
    scripted->axis.m[3].v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    scripted->axis.m[3].v[1] = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
    v15 = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
  }
  scripted->axis.m[3].v[2] = v15;
  scripted->fHeightOfs = 0.0;
  v16 = angles->v[2];
  _XMM8 = 0i64;
  v26.v[1] = angles->v[1];
  v26.v[2] = v16;
  v26.v[0] = 0.0;
  AnglesToAxis(&v26, (tmat33_t<vec3_t> *)scripted);
  XAnimGetAbsDelta(anims, anim, &rot, &trans, 1.0);
  MatrixTransformVector43(&trans, &scripted->axis, &out);
  QuatToAxis(&rot, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)scripted, &v33);
  AxisToAngles(&v33, &v26);
  v18 = ent->s.number;
  v19 = fsqrt((float)((float)(trans.v[0] * trans.v[0]) + (float)(trans.v[1] * trans.v[1])) + (float)(trans.v[2] * trans.v[2]));
  start.v[2] = (float)(v19 + 64.0) + out.v[2];
  *((_QWORD *)&_XMM0 + 1) = 0i64;
  end.v[2] = out.v[2] - (float)(v19 + 128.0);
  start.v[0] = out.v[0];
  start.v[1] = out.v[1];
  end.v[0] = out.v[0];
  end.v[1] = out.v[1];
  G_Main_TraceCapsule(&results, &start, &end, &ent->r.box, v18, 131089);
  if ( results.allsolid || results.fraction >= 1.0 )
  {
    *(_QWORD *)&scripted->fEndPitch = 0i64;
  }
  else
  {
    v21 = ent->s.number;
    _XMM0 = LODWORD(end.v[2]);
    vOrigin.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    vOrigin.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
    vOrigin.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
    AIScriptedInterface::GetBodyPlantAngles(v21, 131089, &vOrigin, v26.v[1], &scripted->fEndPitch, &scripted->fEndRoll, NULL);
  }
  *(double *)&_XMM0 = XAnimGetLength(anims, anim);
  __asm
  {
    vcmpltss xmm2, xmm0, xmm7
    vblendvps xmm0, xmm8, xmm1, xmm2
  }
  scripted->fOrientLerp = *(float *)&_XMM0;
}

/*
==============
G_Animscripted_Think
==============
*/
void G_Animscripted_Think(gentity_s *ent)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  EntityAnimScript *scripted; 
  XAnimTree *EntAnimTree; 
  const DObj *ServerDObjForEnt; 
  __int128 v9; 
  __int128 v10; 
  float v11; 
  float frameDuration; 
  float v13; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  bool v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  AIAgentInterface *v30; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v32; 
  actor_s *actor; 
  ai_scripted_t *m_pAI; 
  bool v35; 
  AIActorInterface v36; 
  AIAgentInterface v37; 
  AIAgentInterface *v38; 
  vec3_t out; 
  vec3_t angles; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v43; 
  vec4_t rot; 
  tmat43_t<vec3_t> parentRelAxis; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 

  scripted = ent->scripted;
  if ( scripted )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animscripted.cpp", 381, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    EntAnimTree = G_Utils_GetEntAnimTree(ent);
    if ( EntAnimTree && scripted->anim )
    {
      v49 = v1;
      v46 = v4;
      ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
      XAnimCalcAbsDelta(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, scripted->anim, &rot, &in1);
      MatrixTransformVector43(&in1, &scripted->axis, &out);
      QuatToAxis(&rot, (tmat33_t<vec3_t> *)&axis);
      MatrixMultiply((const tmat33_t<vec3_t> *)&axis, (const tmat33_t<vec3_t> *)scripted, (tmat33_t<vec3_t> *)&v43);
      AxisToAngles((const tmat33_t<vec3_t> *)&v43, &angles);
      if ( scripted->mode == 1 )
        G_AnimScripted_Think_DeathPlant(ent, EntAnimTree, &out, &angles);
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v9 = LODWORD(scripted->originError.v[0]);
      *(float *)&v9 = (float)((float)(scripted->originError.v[0] * scripted->originError.v[0]) + (float)(scripted->originError.v[1] * scripted->originError.v[1])) + (float)(scripted->originError.v[2] * scripted->originError.v[2]);
      v10 = v9;
      v48 = v2;
      frameDuration = (float)level.frameDuration;
      v11 = frameDuration;
      if ( *(float *)&v10 != 0.0 )
      {
        v47 = v3;
        if ( *(float *)&v10 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
          __debugbreak();
        v13 = scripted->originError.v[0];
        _XMM1 = v10;
        __asm { vrsqrtss xmm2, xmm1, xmm6 }
        v16 = (float)(frameDuration * 0.0049999999) * *(float *)&_XMM2;
        if ( v16 >= 1.0 )
        {
          out.v[0] = v13 + out.v[0];
          out.v[1] = out.v[1] + scripted->originError.v[1];
          out.v[2] = out.v[2] + scripted->originError.v[2];
          *(_QWORD *)scripted->originError.v = 0i64;
          scripted->originError.v[2] = 0.0;
        }
        else
        {
          v17 = v13 + out.v[0];
          v18 = out.v[1] + scripted->originError.v[1];
          v19 = out.v[2] + scripted->originError.v[2];
          out.v[0] = (float)(v13 * v16) + out.v[0];
          out.v[1] = out.v[1] + (float)(v16 * scripted->originError.v[1]);
          out.v[2] = out.v[2] + (float)(v16 * scripted->originError.v[2]);
          scripted->originError.v[0] = v17 - out.v[0];
          scripted->originError.v[1] = v18 - out.v[1];
          scripted->originError.v[2] = v19 - out.v[2];
        }
      }
      G_ReduceAnglesError(&angles, &scripted->anglesError, (float)(v11 * ent->angleLerpRate) * 0.001);
      if ( ent->tagInfo )
      {
        G_CalcTagParentRelAxis(ent, &parentRelAxis);
        v43.m[3] = out;
        AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&v43);
        MatrixMultiply43(&v43, &parentRelAxis, &axis);
        v20 = axis.m[3].v[1];
        v21 = axis.m[3].v[2];
        v22 = (float)((float)((float)((float)(ent->r.currentOrigin.v[1] - axis.m[3].v[1]) * (float)(ent->r.currentOrigin.v[1] - axis.m[3].v[1])) + (float)((float)(ent->r.currentOrigin.v[0] - axis.m[3].v[0]) * (float)(ent->r.currentOrigin.v[0] - axis.m[3].v[0]))) + (float)((float)(ent->r.currentOrigin.v[2] - axis.m[3].v[2]) * (float)(ent->r.currentOrigin.v[2] - axis.m[3].v[2]))) > 10000.0;
        ent->r.currentOrigin.v[0] = axis.m[3].v[0];
        ent->r.currentOrigin.v[1] = v20;
        ent->r.currentOrigin.v[2] = v21;
        AxisToAngles((const tmat33_t<vec3_t> *)&axis, &ent->r.currentAngles);
        G_CalcTagAxis(ent, 0);
      }
      else
      {
        v23 = out.v[1];
        v24 = out.v[2];
        v25 = ent->r.currentOrigin.v[0] - out.v[0];
        v26 = ent->r.currentOrigin.v[1] - out.v[1];
        v27 = ent->r.currentOrigin.v[2] - out.v[2];
        ent->r.currentOrigin.v[0] = out.v[0];
        ent->r.currentOrigin.v[1] = v23;
        ent->r.currentOrigin.v[2] = v24;
        v28 = angles.v[1];
        ent->r.currentAngles.v[0] = angles.v[0];
        v29 = angles.v[2];
        v22 = (float)((float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27)) > 10000.0;
        ent->r.currentAngles.v[1] = v28;
        ent->r.currentAngles.v[2] = v29;
      }
      if ( v22 )
        G_PhysicsObject_WarpToCurrentTransform(ent, 0);
      AIActorInterface::AIActorInterface(&v36);
      AIAgentInterface::AIAgentInterface(&v37);
      v30 = NULL;
      v37.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v38 = NULL;
      if ( ent->agent )
      {
        if ( SV_Agent_IsScripted(ent->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ent);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v37, ScriptedAgentInfo);
          v30 = &v37;
          v38 = &v37;
          v32 = &v37;
LABEL_40:
          m_pAI = v30->AIScriptedInterface::m_pAI;
          m_pAI->Physics.vOrigin.v[0] = ent->r.currentOrigin.v[0];
          m_pAI->Physics.vOrigin.v[1] = ent->r.currentOrigin.v[1];
          m_pAI->Physics.vOrigin.v[2] = ent->r.currentOrigin.v[2];
          AIScriptedInterface::GetGroundTraceOrigin(v32, &m_pAI->Physics.groundTraceOrigin);
          AIScriptedInterface::Physics_GroundTraceOnly(v32);
LABEL_41:
          if ( scripted->bStarted )
          {
            if ( XAnimHasFinished(EntAnimTree, 0, XANIM_SUBTREE_DEFAULT, scripted->anim) )
            {
              XAnimSetCompleteGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, scripted->anim, 1.0, 0.2, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
              scripted->anim = 0;
            }
          }
          else
          {
            scripted->bStarted = 1;
          }
          return;
        }
        v30 = v38;
      }
      actor = ent->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v36, ent->actor);
        v30 = (AIAgentInterface *)&v36;
        v38 = (AIAgentInterface *)&v36;
      }
      v32 = v30;
      if ( !v30 )
        goto LABEL_41;
      goto LABEL_40;
    }
    MT_Free(scripted, 0x60ui64);
    v35 = ent->s.eType == ET_SCRIPTMOVER;
    ent->scripted = NULL;
    if ( v35 )
      ent->s.lerp.u.anonymous.data[2] &= ~0x40u;
  }
}

/*
==============
G_FlagAnimForUpdate
==============
*/
void G_FlagAnimForUpdate(gentity_s *ent)
{
  if ( (ent->flags.m_flags[0] & 0x800) == 0 )
    ent->flags.m_flags[1] |= 2 * GameModeFlagValues::ms_spValue;
}

/*
==============
G_ReduceAnglesError
==============
*/
void G_ReduceAnglesError(vec3_t *angles, vec3_t *anglesError, float maxChange)
{
  signed __int64 v5; 
  vec3_t *v6; 
  unsigned int v7; 
  bool v8; 
  double v9; 
  float v10; 
  float *v11; 
  float v12; 
  float *v13; 
  float v14; 
  double v15; 
  float *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  if ( maxChange != 0.0 )
  {
    v5 = (char *)angles - (char *)anglesError;
    v6 = anglesError;
    v7 = 0;
    v8 = 1;
    do
    {
      if ( !v8 )
      {
        LODWORD(v19) = 3;
        LODWORD(v17) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v19) )
          __debugbreak();
      }
      if ( v6->v[0] != 0.0 )
      {
        if ( v7 >= 3 )
        {
          LODWORD(v19) = 3;
          LODWORD(v17) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v19) )
            __debugbreak();
        }
        if ( maxChange >= v6->v[0] )
        {
          if ( v7 >= 3 )
          {
            LODWORD(v19) = 3;
            LODWORD(v17) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v19) )
              __debugbreak();
          }
          v10 = v6->v[0];
          v11 = vec3_t::operator[](anglesError, v7);
          v12 = *v11;
          if ( v10 >= COERCE_FLOAT(LODWORD(maxChange) ^ _xmm) )
          {
            v16 = vec3_t::operator[](angles, v7);
            *v16 = v12 + *v16;
            *vec3_t::operator[](anglesError, v7) = 0.0;
          }
          else
          {
            *v11 = v12 + maxChange;
            v13 = vec3_t::operator[](angles, v7);
            v14 = *v13 + *vec3_t::operator[](anglesError, v7);
            v15 = AngleNormalize360(v14);
            *vec3_t::operator[](angles, v7) = *(float *)&v15;
          }
        }
        else
        {
          if ( v7 >= 3 )
          {
            LODWORD(v19) = 3;
            LODWORD(v17) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v19) )
              __debugbreak();
          }
          v6->v[0] = v6->v[0] - maxChange;
          if ( v7 >= 3 )
          {
            LODWORD(v19) = 3;
            LODWORD(v17) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v19) )
              __debugbreak();
            LODWORD(v20) = 3;
            LODWORD(v18) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v18, v20) )
              __debugbreak();
          }
          v9 = AngleNormalize360(*(float *)((char *)v6->v + v5) + v6->v[0]);
          if ( v7 >= 3 )
          {
            LODWORD(v19) = 3;
            LODWORD(v17) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v19) )
              __debugbreak();
          }
          *(float *)((char *)v6->v + v5) = *(float *)&v9;
        }
      }
      ++v7;
      v6 = (vec3_t *)((char *)v6 + 4);
      v8 = v7 < 3;
    }
    while ( (int)v7 < 3 );
  }
}

/*
==============
G_ReduceOriginError
==============
*/
void G_ReduceOriginError(vec3_t *origin, vec3_t *originError, float maxChange)
{
  __int128 v6; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 

  v6 = LODWORD(originError->v[0]);
  *(float *)&v6 = (float)((float)(originError->v[0] * originError->v[0]) + (float)(originError->v[1] * originError->v[1])) + (float)(originError->v[2] * originError->v[2]);
  if ( *(float *)&v6 != 0.0 )
  {
    if ( *(float *)&v6 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    _XMM1 = v6;
    __asm { vrsqrtss xmm2, xmm1, xmm6 }
    v9 = *(float *)&_XMM2 * maxChange;
    v10 = origin->v[0] + originError->v[0];
    if ( (float)(*(float *)&_XMM2 * maxChange) >= 1.0 )
    {
      v16 = origin->v[1];
      v17 = origin->v[2];
      origin->v[0] = v10;
      origin->v[1] = v16 + originError->v[1];
      origin->v[2] = v17 + originError->v[2];
      *(_QWORD *)originError->v = 0i64;
      originError->v[2] = 0.0;
    }
    else
    {
      v11 = origin->v[1];
      v12 = origin->v[2];
      v13 = originError->v[1];
      v14 = originError->v[2];
      v15 = (float)(originError->v[0] * v9) + origin->v[0];
      origin->v[0] = v15;
      origin->v[1] = (float)(v9 * originError->v[1]) + v11;
      origin->v[2] = (float)(v9 * originError->v[2]) + v12;
      originError->v[0] = v10 - v15;
      originError->v[1] = (float)(v11 + v13) - origin->v[1];
      originError->v[2] = (float)(v12 + v14) - origin->v[2];
    }
  }
}

