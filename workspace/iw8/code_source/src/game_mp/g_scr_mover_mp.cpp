/*
==============
G_ScrMoverMPCmd_ScriptModelPlayAnim
==============
*/

void __fastcall G_ScrMoverMPCmd_ScriptModelPlayAnim(scrContext_t *scrContext, scr_entref_t entref, double _XMM2_8)
{
  unsigned int entnum; 
  gentity_s *v6; 
  scr_string_t classname; 
  const char *v8; 
  unsigned int NumParam; 
  float v10; 
  double Float; 
  float v12; 
  double v13; 
  __int128 v14; 
  const char *v16; 
  ScriptMoverAnimBlendType MoverAnimBlendType; 
  int v18; 
  float v19; 
  const char *animName; 
  scr_string_t notifyName; 
  const DObj *ServerDObjForEnt; 
  DObj *v24; 
  const char *LastAnimName; 
  char *fmt; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v6 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 265, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
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
    Scr_Error(COM_ERR_2608, scrContext, "Cannot play an animation on an entity that already has an animated trajectory. Call scriptmodelclearanim first.\n");
  }
  NumParam = Scr_GetNumParam(scrContext);
  v10 = 0.0;
  if ( NumParam >= 3 && Scr_GetType(scrContext, 2u) )
  {
    Float = Scr_GetFloat(scrContext, 2u);
    v10 = *(float *)&Float;
  }
  v12 = FLOAT_1_0;
  if ( NumParam >= 4 && Scr_GetType(scrContext, 3u) && ((v13 = Scr_GetFloat(scrContext, 3u), v12 = *(float *)&v13, *(float *)&v13 < 0.0) || *(float *)&v13 > 8.0 || (v14 = 0i64, *(float *)&v14 = (float)(unsigned int)(int)(float)(*(float *)&v13 * 1000.0), *(float *)&v14 = *(float *)&v14 - (float)(*(float *)&v13 * 1000.0), *(_OWORD *)&_XMM2_8 = v14 & _xmm, COERCE_FLOAT(v14 & _xmm) > 0.001)) )
  {
    __asm { vxorpd  xmm2, xmm2, xmm2 }
    LODWORD(fmt) = 3;
    v16 = j_va("ScriptModelPlayAnim: animRate %f not valid. Needs to be between %f and %f and rounded to %i decimal places\n", *(float *)&v13, (_QWORD)_XMM2, DOUBLE_8_0, fmt);
    Scr_Error(COM_ERR_2609, scrContext, v16);
  }
  else
  {
    MoverAnimBlendType = Scr_GetMoverAnimBlendType(scrContext, 4u);
    v18 = v6->s.lerp.u.anonymous.data[4];
    *(double *)&_XMM0 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(v6->s.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
    v19 = *(float *)&_XMM0;
    if ( G_ScrMoverMP_SetupClientAnim(scrContext, v6, (int)(float)(v10 * 1000.0), v12, MoverAnimBlendType) )
    {
      if ( v12 < 0.0 )
      {
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 301, ASSERT_TYPE_ASSERT, "( animRateRaw ) >= ( 0 )", "animRateRaw >= 0\n\t%g, %g", v12, *(double *)&_XMM0) )
          __debugbreak();
      }
      if ( NumParam >= 2 && Scr_GetType(scrContext, 1u) )
      {
        if ( Scr_GetType(scrContext, 0) == VAR_STRING || Scr_GetType(scrContext, 0) == VAR_ANIMATION )
        {
          if ( Scr_GetType(scrContext, 1u) == VAR_STRING )
          {
            animName = Scr_GetString(scrContext, 0);
            notifyName = Scr_GetConstString(scrContext, 1u);
            ServerDObjForEnt = Com_GetServerDObjForEnt(v6);
            v24 = (DObj *)ServerDObjForEnt;
            if ( ServerDObjForEnt )
            {
              LastAnimName = G_ScrMoverMP_GetLastAnimName(ServerDObjForEnt);
              G_ScrMoverMP_PlayServerAnim(v6, v24, LastAnimName, v18, v19, animName, v10, v12, notifyName);
            }
            else
            {
              Scr_Error(COM_ERR_2612, scrContext, "ScriptModelPlayAnim: Entity needs model to play animation.\n");
            }
          }
          else
          {
            Scr_Error(COM_ERR_2611, scrContext, "ScriptModelPlayAnim: <notify name> needs to be a string");
          }
        }
        else
        {
          Scr_Error(COM_ERR_2610, scrContext, "ScriptModelPlayAnim: <anim name> needs to be a string or an animation");
        }
      }
    }
  }
}

/*
==============
G_ScrMoverMPCmd_ScriptModelPlayAnimDeltaMotion
==============
*/
void G_ScrMoverMPCmd_ScriptModelPlayAnimDeltaMotion(scrContext_t *scrContext, scr_entref_t entref)
{
  scr_string_t notifyName; 
  gentity_s *v5; 
  scr_string_t classname; 
  const char *v7; 
  unsigned int NumParam; 
  const char *String; 
  float v10; 
  double Float; 
  ScriptMoverAnimBlendType blendType; 

  notifyName = 0;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 408, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entref.entnum];
    classname = v5->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v7 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entref.entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v7);
    }
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( Scr_GetType(scrContext, 0) == VAR_STRING || Scr_GetType(scrContext, 0) == VAR_ANIMATION )
  {
    String = Scr_GetString(scrContext, 0);
    if ( NumParam >= 2 && Scr_GetType(scrContext, 1u) )
      notifyName = Scr_GetConstString(scrContext, 1u);
    v10 = 0.0;
    if ( NumParam >= 3 && Scr_GetType(scrContext, 2u) && (Float = Scr_GetFloat(scrContext, 2u), v10 = *(float *)&Float, *(float *)&Float < 0.0) )
    {
      Scr_Error(COM_ERR_2615, scrContext, "ScriptModelPlayAnimDeltaMotion: start time must be non-negative");
    }
    else
    {
      blendType = Scr_GetMoverAnimBlendType(scrContext, 3u);
      G_ScrMoverMP_ScriptModelPlayAnimDeltaMotion_Internal(scrContext, entref, String, &v5->r.currentOrigin, &v5->r.currentAngles, notifyName, v10, blendType);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2614, scrContext, "ScriptModelPlayAnimDeltaMotion: <anim name> needs to be a string or an animation");
  }
}

/*
==============
G_ScrMoverMPCmd_ScriptModelPlayAnimDeltaMotionFromPos
==============
*/
void G_ScrMoverMPCmd_ScriptModelPlayAnimDeltaMotionFromPos(scrContext_t *scrContext, scr_entref_t entref)
{
  scr_string_t classname; 
  const char *v5; 
  ComErrorCode v6; 
  unsigned int NumParam; 
  const char *String; 
  scr_string_t notifyName; 
  float v10; 
  double Float; 
  ScriptMoverAnimBlendType blendType; 
  vec3_t animAngles; 
  vec3_t vectorValue; 

  if ( entref.entclass )
  {
    v5 = "not an entity";
    v6 = COM_ERR_2787;
    goto LABEL_14;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 470, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  classname = g_entities[entref.entnum].classname;
  if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
  {
    v5 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entref.entnum);
    v6 = COM_ERR_2786;
LABEL_14:
    Scr_ObjectError(v6, scrContext, v5);
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( Scr_GetType(scrContext, 0) == VAR_STRING )
  {
    String = Scr_GetString(scrContext, 0);
    Scr_GetVector(scrContext, 1u, &vectorValue);
    Scr_GetVector(scrContext, 2u, &animAngles);
    if ( NumParam >= 4 && Scr_GetType(scrContext, 3u) )
      notifyName = Scr_GetConstString(scrContext, 3u);
    else
      notifyName = 0;
    v10 = 0.0;
    if ( NumParam >= 5 && Scr_GetType(scrContext, 4u) && (Float = Scr_GetFloat(scrContext, 4u), v10 = *(float *)&Float, *(float *)&Float < 0.0) )
    {
      Scr_Error(COM_ERR_2617, scrContext, "ScriptModelPlayAnimDeltaMotionFromPos: start time must be non-negative");
    }
    else
    {
      blendType = Scr_GetMoverAnimBlendType(scrContext, 5u);
      G_ScrMoverMP_ScriptModelPlayAnimDeltaMotion_Internal(scrContext, entref, String, &vectorValue, &animAngles, notifyName, v10, blendType);
    }
  }
  else
  {
    Scr_Error(COM_ERR_2616, scrContext, "ScriptModelPlayAnimDeltaMotionFromPos: <anim name> needs to be a string");
  }
}

/*
==============
G_ScrMoverMPCmd_ScriptModelClearAnim
==============
*/
void G_ScrMoverMPCmd_ScriptModelClearAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  unsigned int v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 524, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v6 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v6);
    }
  }
  if ( G_ScrMoverMP_ValidateScriptMoverCanAnimate(scrContext, v4) )
  {
    if ( Com_GetServerDObjForEnt(v4) )
    {
      *(_QWORD *)&v4->s.lerp.u.scriptMover.animIndex = 0i64;
      v4->s.lerp.u.anonymous.data[5] = 0;
      v7 = BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt(1.0);
      v4->s.lerp.u.anonymous.data[2] &= 0xFFFFFFFC;
      v4->s.lerp.u.anonymous.data[6] = v7;
      G_ScrMover_ClearServerAnim(v4);
      G_ScrMover_ClearAnimatedTrajectory(v4);
    }
    else
    {
      Scr_Error(COM_ERR_2619, scrContext, "Entity needs model to clear animation.\n");
    }
  }
}

/*
==============
G_ScrMoverMPCmd_ScriptModelPauseAnim
==============
*/
void G_ScrMoverMPCmd_ScriptModelPauseAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  int v2; 
  unsigned int entnum; 
  gentity_s *v5; 
  scr_string_t classname; 
  const char *v7; 
  const DObj *ServerDObjForEnt; 
  const char *v9; 
  ComErrorCode v10; 
  XAnimTree *Tree; 
  int Int; 
  int v13; 
  int time; 
  int v15; 
  int v16; 
  double v17; 

  v2 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 567, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    classname = v5->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v7 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v7);
    }
  }
  if ( G_ScrMoverMP_ValidateScriptMoverCanAnimate(scrContext, v5) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(v5);
    if ( !ServerDObjForEnt )
    {
      v9 = "Entity needs model to pause animation.\n";
      v10 = COM_ERR_2621;
LABEL_33:
      Scr_Error(v10, scrContext, v9);
      return;
    }
    if ( !v5->s.lerp.u.anonymous.data[3] )
    {
      v9 = "Entity needs to be playing an anim to pause.\n";
      v10 = COM_ERR_2622;
      goto LABEL_33;
    }
    Tree = DObjGetTree(ServerDObjForEnt);
    Int = Scr_GetInt(scrContext, 0);
    v13 = v5->s.lerp.u.anonymous.data[5];
    if ( Int )
    {
      if ( v13 )
      {
        v9 = "Animation is already paused.\n";
        v10 = COM_ERR_2623;
        goto LABEL_33;
      }
      time = 1;
      if ( level.time > 1 )
        time = level.time;
      v5->s.lerp.u.anonymous.data[5] = time;
      if ( Tree )
      {
        LOBYTE(v2) = XAnimIsSimpleBlendTree(Tree) != 0;
        XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v2 + 1, 0.0);
      }
    }
    else
    {
      if ( v13 <= 0 )
        goto LABEL_32;
      v15 = 1;
      if ( level.time > 1 )
        v15 = level.time;
      if ( v13 > v15 )
      {
LABEL_32:
        v9 = "Animation is not currently paused.\n";
        v10 = COM_ERR_2624;
        goto LABEL_33;
      }
      v16 = level.time - v13;
      v5->s.lerp.u.anonymous.data[5] = 0;
      v5->s.lerp.u.anonymous.data[4] += v16;
      v5->s.lerp.pos.trTime += v16;
      v5->s.lerp.apos.trTime += v16;
      if ( Tree )
      {
        v17 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(v5->s.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
        LOBYTE(v2) = XAnimIsSimpleBlendTree(Tree) != 0;
        XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v2 + 1, *(float *)&v17);
      }
    }
  }
}

/*
==============
G_ScrMoverMP_GetLastAnimName
==============
*/
const char *G_ScrMoverMP_GetLastAnimName(const DObj *obj)
{
  const XAnimTree *Tree; 
  const XAnimTree *v3; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 178, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  Tree = DObjGetTree(obj);
  v3 = Tree;
  if ( !Tree )
    return (char *)&queryFormat.fmt + 3;
  if ( XAnimIsSimpleBlendTree(Tree) )
    return XAnimGetSimpleBlendTreeToAnimName(v3);
  return XAnimGetSimpleTreeAnimName(v3);
}

/*
==============
G_ScrMoverMP_PlayServerAnim
==============
*/
__int64 G_ScrMoverMP_PlayServerAnim(gentity_s *ent, DObj *obj, const char *prevAnimName, int prevAnimStartTimeLevelMS, float prevAnimRateRaw, const char *animName, float animStartTimeSec, float animRateRaw, scr_string_t notifyName)
{
  unsigned int notifyType; 
  __int64 v15; 
  const char *v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  XAnimTree *SimpleTree; 
  const XAnim_s *v23; 
  int LengthMsec; 
  __int128 v26; 
  __int128 blendTime; 
  XAnimTree *SimpleBlendTree; 
  const XAnim_s *Anims; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 204, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 205, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 206, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
    __debugbreak();
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( animStartTimeSec < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 207, ASSERT_TYPE_ASSERT, "( animStartTimeSec ) >= ( 0 )", "%s >= %s\n\t%g, %g", "animStartTimeSec", "0", animStartTimeSec, *(double *)&_XMM11) )
    __debugbreak();
  if ( animRateRaw <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 208, ASSERT_TYPE_ASSERT, "( animRateRaw ) > ( 0 )", "%s > %s\n\t%g, %g", "animRateRaw", "0", animRateRaw, *(double *)&_XMM11) )
    __debugbreak();
  G_ScrMover_ClearServerAnim(ent);
  if ( DObjGetTree(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 214, ASSERT_TYPE_ASSERT, "( !tree )", (const char *)&queryFormat, "!tree") )
    __debugbreak();
  notifyType = notifyName != 0 ? 4 : 0;
  if ( (LOBYTE(ent->s.lerp.u.vehicle.bodyPitch) & 1) == 0 && prevAnimName && *prevAnimName )
  {
    v15 = 0x7FFFFFFFi64;
    v16 = animName;
    if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v17 = (unsigned __int8)v16[prevAnimName - animName];
      v18 = v15;
      v19 = *(unsigned __int8 *)v16++;
      --v15;
      if ( !v18 )
        break;
      if ( v17 != v19 )
      {
        v20 = v17 + 32;
        if ( (unsigned int)(v17 - 65) > 0x19 )
          v20 = v17;
        v17 = v20;
        v21 = v19 + 32;
        if ( (unsigned int)(v19 - 65) > 0x19 )
          v21 = v19;
        if ( v17 != v21 )
        {
          v26 = 0i64;
          *(float *)&v26 = (float)(level.time - prevAnimStartTimeLevelMS) * 0.001;
          _XMM1 = v26;
          __asm { vmaxss  xmm2, xmm1, xmm10 }
          _XMM0 = ent->s.lerp.u.anonymous.data[2] & 2;
          __asm { vpcmpeqd xmm3, xmm0, xmm1 }
          _XMM1 = LODWORD(FLOAT_0_5);
          __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
          if ( prevAnimRateRaw <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 225, ASSERT_TYPE_ASSERT, "( prevAnimRateRaw ) > ( 0 )", "%s > %s\n\t%g, %g", "prevAnimRateRaw", "0", prevAnimRateRaw, *(double *)&_XMM11) )
            __debugbreak();
          SimpleBlendTree = XAnimCreateSimpleBlendTree(prevAnimName, animName, MOVEMENT);
          DObjSetTree(obj, SimpleBlendTree);
          XAnimPlaySimpleBlendTreeAnim(obj, *(float *)&_XMM2 * prevAnimRateRaw, prevAnimRateRaw, animStartTimeSec, animRateRaw, *(float *)&blendTime, notifyName, notifyType);
          Anims = XAnimGetAnims(SimpleBlendTree);
          LengthMsec = XAnimGetLengthMsec(Anims, 2u);
          return (unsigned int)(int)(float)((float)(LengthMsec - (int)(float)(animStartTimeSec * 1000.0)) / animRateRaw);
        }
      }
    }
    while ( v17 );
  }
  SimpleTree = XAnimCreateSimpleTree(animName, MOVEMENT);
  DObjSetTree(obj, SimpleTree);
  XAnimPlaySimpleTreeAnim(obj, animStartTimeSec, animRateRaw, notifyName, notifyType);
  v23 = XAnimGetAnims(SimpleTree);
  LengthMsec = XAnimGetLengthMsec(v23, 1u);
  return (unsigned int)(int)(float)((float)(LengthMsec - (int)(float)(animStartTimeSec * 1000.0)) / animRateRaw);
}

/*
==============
G_ScrMoverMP_ScriptModelPlayAnimDeltaMotion_Internal
==============
*/
void G_ScrMoverMP_ScriptModelPlayAnimDeltaMotion_Internal(scrContext_t *scrContext, scr_entref_t entref, const char *animName, const vec3_t *animOrigin, const vec3_t *animAngles, scr_string_t notifyName, float animStartTimeSec, const ScriptMoverAnimBlendType blendType)
{
  unsigned int entnum; 
  float v11; 
  int v12; 
  gentity_s *v13; 
  scr_string_t classname; 
  const char *v15; 
  int v16; 
  double v17; 
  const DObj *ServerDObjForEnt; 
  DObj *v19; 
  const char *LastAnimName; 
  int v21; 
  float v24; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  int v30; 
  int v31[3]; 
  __int64 v32; 

  entnum = entref.entnum;
  v11 = animStartTimeSec;
  v12 = (int)(float)(animStartTimeSec * 1000.0);
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v13 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v13 = &g_entities[entnum];
    classname = v13->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v15 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v15);
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 344, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  v16 = v13->s.lerp.u.anonymous.data[4];
  v17 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(v13->s.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
  if ( G_ScrMoverMP_SetupClientAnim(scrContext, v13, v12, 1.0, blendType) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(v13);
    v19 = (DObj *)ServerDObjForEnt;
    if ( ServerDObjForEnt )
    {
      LastAnimName = G_ScrMoverMP_GetLastAnimName(ServerDObjForEnt);
      G_ScrMover_ClearAnimatedTrajectory(v13);
      if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 364, ASSERT_TYPE_ASSERT, "( animName )", (const char *)&queryFormat, "animName") )
        __debugbreak();
      v21 = G_ScrMoverMP_PlayServerAnim(v13, v19, LastAnimName, v16, *(float *)&v17, animName, v11, 1.0, notifyName);
      v13->s.lerp.pos.trType = TR_ANIMATED_MOVER;
      v13->s.lerp.apos.trType = TR_ANIMATED_MOVER;
      _XMM4 = 0i64;
      __asm { vroundss xmm0, xmm4, xmm1, 1 }
      v24 = (float)(int)*(float *)&_XMM0;
      *(float *)v31 = v24;
      __asm { vroundss xmm0, xmm4, xmm2, 1 }
      *(float *)&v31[1] = (float)(int)*(float *)&_XMM0;
      __asm { vroundss xmm1, xmm4, xmm2, 1 }
      *(float *)&v31[2] = (float)(int)*(float *)&_XMM1;
      if ( v13 == (gentity_s *)-16i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        v24 = *(float *)v31;
      }
      if ( v13->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
      {
        animStartTimeSec = v24;
        if ( (LODWORD(v24) & 0x7F800000) == 2139095040 || (animStartTimeSec = *(float *)&v31[1], (v31[1] & 0x7F800000) == 2139095040) || (animStartTimeSec = *(float *)&v31[2], (v31[2] & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        v27 = v31[0] ^ ~s_trbase_aab_X;
        v28 = s_trbase_aab_Y ^ v27 ^ v31[1];
        v29 = s_trbase_aab_Z ^ v28 ^ v31[2];
        LODWORD(v13->s.lerp.pos.trBase.v[0]) = v27;
        LODWORD(v13->s.lerp.pos.trBase.v[1]) = v28;
        LODWORD(v13->s.lerp.pos.trBase.v[2]) = v29;
        memset(&v32, 0, sizeof(v32));
      }
      else
      {
        v13->s.lerp.pos.trBase.v[0] = v24;
        v13->s.lerp.pos.trBase.v[1] = *(float *)&v31[1];
        v13->s.lerp.pos.trBase.v[2] = *(float *)&v31[2];
      }
      v13->s.lerp.apos.trBase = *animAngles;
      v13->s.lerp.pos.trDuration = v21;
      v13->s.lerp.apos.trDuration = v21;
      v30 = level.time - (int)(float)v12;
      v13->s.lerp.pos.trTime = v30;
      v13->s.lerp.apos.trTime = v30;
      memset(v31, 0, sizeof(v31));
    }
    else
    {
      Scr_Error(COM_ERR_2613, scrContext, "Entity needs model to play delta motion animation.\n");
    }
  }
}

/*
==============
G_ScrMoverMP_SetupClientAnim
==============
*/
char G_ScrMoverMP_SetupClientAnim(scrContext_t *scrContext, gentity_s *ent, int animStartTimeMS, float animRateRaw, const ScriptMoverAnimBlendType blendType)
{
  const char *String; 
  const char *v11; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int outIndex[4]; 
  char dest[1024]; 

  if ( animStartTimeMS < 0 )
  {
    Scr_Error(COM_ERR_2602, scrContext, "start time must be non-negative");
    return 0;
  }
  if ( !G_ScrMoverMP_ValidateScriptMoverCanAnimate(scrContext, ent) )
    return 0;
  if ( level.initializing )
    goto LABEL_12;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x1Eu) )
  {
LABEL_12:
    if ( Scr_GetType(scrContext, 0) == VAR_STRING || Scr_GetType(scrContext, 0) == VAR_ANIMATION )
    {
      String = Scr_GetString(scrContext, 0);
      Core_strcpy(dest, 0x400ui64, String);
      I_strlwr(dest);
      if ( NetConstStrings_GetIndexPlusOneFromName(NETCONSTSTRINGTYPE_ANIM, dest, outIndex) )
      {
        if ( animRateRaw < 0.0 )
        {
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 128, ASSERT_TYPE_ASSERT, "( animRateRaw ) >= ( 0 )", "animRateRaw >= 0\n\t%g, %g", animRateRaw, *(double *)&_XMM0) )
            __debugbreak();
        }
        v13 = BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt(animRateRaw);
        if ( !outIndex[0] )
        {
          LODWORD(v18) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 131, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "animIndex != 0\n\t%i, %i", v18, 0i64) )
            __debugbreak();
        }
        if ( animRateRaw <= 0.0 )
          v14 = level.time - animStartTimeMS;
        else
          v14 = level.time - (int)(float)((float)animStartTimeMS / animRateRaw);
        v15 = outIndex[0];
        ent->s.lerp.u.anonymous.data[4] = v14;
        v16 = ent->s.lerp.u.anonymous.data[2];
        ent->s.lerp.u.anonymous.data[3] = v15;
        ent->s.lerp.u.anonymous.data[5] = 0;
        ent->s.lerp.u.anonymous.data[6] = v13;
        if ( blendType == FLAT_TIRE )
        {
          v17 = v16 & 0xFFFFFFFC | 2;
        }
        else if ( blendType == 2 )
        {
          v17 = v16 & 0xFFFFFFFC | 1;
        }
        else
        {
          v17 = v16 & 0xFFFFFFFC;
        }
        ent->s.lerp.u.anonymous.data[2] = v17;
        return 1;
      }
      else
      {
        v11 = j_va("MP Anim [%s] was not precached.\n", dest);
        Scr_Error(COM_ERR_2606, scrContext, v11);
        return 0;
      }
    }
    else
    {
      Scr_Error(COM_ERR_2605, scrContext, "<anim name> needs to be a string or an animation");
      return 0;
    }
  }
  else
  {
    Scr_Error(COM_ERR_2604, scrContext, "Cannot change a 'willNeverChange' entity\n");
    return 0;
  }
}

/*
==============
G_ScrMoverMP_ValidateScriptMoverCanAnimate
==============
*/
char G_ScrMoverMP_ValidateScriptMoverCanAnimate(scrContext_t *scrContext, gentity_s *ent)
{
  entityType_s eType; 
  const char *v5; 
  __int16 scriptMoverType; 
  __int64 v8; 
  const char *v9; 

  eType = ent->s.eType;
  if ( eType == ET_SCRIPTMOVER )
  {
    if ( ent->classname == scr_const.script_model )
      return 1;
    scriptMoverType = ent->s.un.scriptMoverType;
    if ( scriptMoverType == 4 )
    {
      return 1;
    }
    else
    {
      v8 = scriptMoverType;
      if ( (unsigned int)scriptMoverType >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 30, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( SCRIPT_MOVER_TYPE_NAMES ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( SCRIPT_MOVER_TYPE_NAMES )\n\t%i not in [0, %i)", scriptMoverType, 12) )
        __debugbreak();
      v9 = j_va("Script mover animations not supported for entity %u with script mover type '%s'.\n", (unsigned int)ent->s.number, off_14792C1B0[v8]);
      Scr_Error(COM_ERR_6174, scrContext, v9);
      return 0;
    }
  }
  else
  {
    v5 = j_va("Attempted to use script mover animations with non-script mover entity %u with eType %u.\n", (unsigned int)ent->s.number, (unsigned int)eType);
    Scr_Error(COM_ERR_6173, scrContext, v5);
    return 0;
  }
}

/*
==============
Scr_GetMoverAnimBlendType
==============
*/
char Scr_GetMoverAnimBlendType(scrContext_t *scrContext, unsigned int index)
{
  scr_string_t ConstString; 

  if ( Scr_GetNumParam(scrContext) > index && Scr_GetType(scrContext, index) )
  {
    ConstString = Scr_GetConstString(scrContext, index);
    if ( ConstString == scr_const.none )
      return 2;
    if ( ConstString == scr_const.slow )
      return 1;
    if ( ConstString != scr_const.normal )
      Scr_Error(COM_ERR_2601, scrContext, "Invalid blend type. Valid options include 'normal', 'slow' and 'none'.");
  }
  return 0;
}

