/*
==============
G_ScrMoverMPCmd_ScriptModelPlayAnim
==============
*/

void __fastcall G_ScrMoverMPCmd_ScriptModelPlayAnim(scrContext_t *scrContext, scr_entref_t entref, double _XMM2_8)
{
  unsigned int entnum; 
  gentity_s *v11; 
  scr_string_t classname; 
  const char *v13; 
  unsigned int NumParam; 
  char v21; 
  char v22; 
  const char *v34; 
  ScriptMoverAnimBlendType MoverAnimBlendType; 
  int v36; 
  const char *animName; 
  scr_string_t notifyName; 
  const DObj *ServerDObjForEnt; 
  DObj *v42; 
  const char *LastAnimName; 
  char *fmt; 
  float fmta; 
  float v51; 
  float v52; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  entnum = entref.entnum;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v11 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 265, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v11 = &g_entities[entnum];
    classname = v11->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v13 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v13);
    }
  }
  if ( v11->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    Scr_Error(COM_ERR_2608, scrContext, "Cannot play an animation on an entity that already has an animated trajectory. Call scriptmodelclearanim first.\n");
  }
  NumParam = Scr_GetNumParam(scrContext);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm9, xmm9, xmm9
  }
  if ( NumParam >= 3 && Scr_GetType(scrContext, 2u) )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm { vmovaps xmm9, xmm0 }
  }
  __asm
  {
    vmovss  xmm8, cs:__real@447a0000
    vmovss  xmm6, cs:__real@3f800000
    vmulss  xmm1, xmm9, xmm8
    vcvttss2si r14d, xmm1
  }
  if ( NumParam < 4 )
    goto LABEL_28;
  if ( Scr_GetType(scrContext, 3u) == VAR_UNDEFINED )
    goto LABEL_28;
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vcomiss xmm0, xmm7
    vmovaps xmm6, xmm0
  }
  if ( v21 )
    goto LABEL_27;
  __asm { vcomiss xmm0, cs:__real@41000000 }
  if ( !(v21 | v22) )
    goto LABEL_27;
  __asm
  {
    vmulss  xmm2, xmm0, xmm8
    vcvttss2si rcx, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vsubss  xmm2, xmm1, xmm2
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3a83126f
  }
  if ( v21 | v22 )
  {
LABEL_28:
    MoverAnimBlendType = Scr_GetMoverAnimBlendType(scrContext, 4u);
    v36 = v11->s.lerp.u.anonymous.data[4];
    *(double *)&_XMM0 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(v11->s.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
    __asm
    {
      vmovaps xmm3, xmm6; animRateRaw
      vmovaps xmm8, xmm0
    }
    if ( G_ScrMoverMP_SetupClientAnim(scrContext, v11, _ER14, *(float *)&_XMM3, MoverAnimBlendType) )
    {
      __asm { vcomiss xmm6, xmm7 }
      if ( NumParam >= 2 )
      {
        if ( Scr_GetType(scrContext, 1u) )
        {
          if ( Scr_GetType(scrContext, 0) == VAR_STRING || Scr_GetType(scrContext, 0) == VAR_ANIMATION )
          {
            if ( Scr_GetType(scrContext, 1u) == VAR_STRING )
            {
              animName = Scr_GetString(scrContext, 0);
              notifyName = Scr_GetConstString(scrContext, 1u);
              ServerDObjForEnt = Com_GetServerDObjForEnt(v11);
              v42 = (DObj *)ServerDObjForEnt;
              if ( ServerDObjForEnt )
              {
                LastAnimName = G_ScrMoverMP_GetLastAnimName(ServerDObjForEnt);
                __asm
                {
                  vmovss  [rsp+0A8h+var_70], xmm6
                  vmovss  dword ptr [rsp+0A8h+var_78], xmm9
                  vmovss  dword ptr [rsp+0A8h+fmt], xmm8
                }
                G_ScrMoverMP_PlayServerAnim(v11, v42, LastAnimName, v36, fmta, animName, v51, v52, notifyName);
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
  else
  {
LABEL_27:
    __asm
    {
      vmovsd  xmm3, cs:__real@4020000000000000
      vcvtss2sd xmm1, xmm6, xmm6
      vxorpd  xmm2, xmm2, xmm2
      vmovq   r9, xmm3
      vmovq   r8, xmm2
      vmovq   rdx, xmm1
    }
    LODWORD(fmt) = 3;
    v34 = j_va("ScriptModelPlayAnim: animRate %f not valid. Needs to be between %f and %f and rounded to %i decimal places\n", _RDX, _R8, _R9, fmt);
    Scr_Error(COM_ERR_2609, scrContext, v34);
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  gentity_s *v8; 
  scr_string_t classname; 
  const char *v10; 
  unsigned int NumParam; 
  const char *String; 
  char v15; 
  ScriptMoverAnimBlendType blendType; 
  float v19; 

  notifyName = 0;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v8 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 408, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v8 = &g_entities[entref.entnum];
    classname = v8->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v10 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entref.entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v10);
    }
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( Scr_GetType(scrContext, 0) == VAR_STRING || Scr_GetType(scrContext, 0) == VAR_ANIMATION )
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vmovaps [rsp+78h+var_38], xmm7
    }
    String = Scr_GetString(scrContext, 0);
    if ( NumParam >= 2 && Scr_GetType(scrContext, 1u) )
      notifyName = Scr_GetConstString(scrContext, 1u);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
    }
    if ( NumParam < 3 )
      goto LABEL_24;
    if ( Scr_GetType(scrContext, 2u) == VAR_UNDEFINED )
      goto LABEL_24;
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm7, xmm0
    }
    if ( v15 )
    {
      Scr_Error(COM_ERR_2615, scrContext, "ScriptModelPlayAnimDeltaMotion: start time must be non-negative");
    }
    else
    {
LABEL_24:
      blendType = Scr_GetMoverAnimBlendType(scrContext, 3u);
      __asm { vmovss  [rsp+78h+var_48], xmm7 }
      G_ScrMoverMP_ScriptModelPlayAnimDeltaMotion_Internal(scrContext, entref, String, &v8->r.currentOrigin, &v8->r.currentAngles, notifyName, v19, blendType);
    }
    __asm
    {
      vmovaps xmm6, [rsp+78h+var_28]
      vmovaps xmm7, [rsp+78h+var_38]
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
  const char *v8; 
  ComErrorCode v9; 
  unsigned int NumParam; 
  const char *String; 
  scr_string_t notifyName; 
  char v15; 
  ScriptMoverAnimBlendType blendType; 
  float v19; 
  vec3_t animAngles; 
  vec3_t vectorValue; 

  if ( entref.entclass )
  {
    v8 = "not an entity";
    v9 = COM_ERR_2787;
    goto LABEL_14;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 470, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  classname = g_entities[entref.entnum].classname;
  if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
  {
    v8 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entref.entnum);
    v9 = COM_ERR_2786;
LABEL_14:
    Scr_ObjectError(v9, scrContext, v8);
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( Scr_GetType(scrContext, 0) == VAR_STRING )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
    }
    String = Scr_GetString(scrContext, 0);
    Scr_GetVector(scrContext, 1u, &vectorValue);
    Scr_GetVector(scrContext, 2u, &animAngles);
    if ( NumParam >= 4 && Scr_GetType(scrContext, 3u) )
      notifyName = Scr_GetConstString(scrContext, 3u);
    else
      notifyName = 0;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
    }
    if ( NumParam < 5 )
      goto LABEL_25;
    if ( Scr_GetType(scrContext, 4u) == VAR_UNDEFINED )
      goto LABEL_25;
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm7, xmm0
    }
    if ( v15 )
    {
      Scr_Error(COM_ERR_2617, scrContext, "ScriptModelPlayAnimDeltaMotionFromPos: start time must be non-negative");
    }
    else
    {
LABEL_25:
      blendType = Scr_GetMoverAnimBlendType(scrContext, 5u);
      __asm { vmovss  [rsp+0A8h+var_78], xmm7 }
      G_ScrMoverMP_ScriptModelPlayAnimDeltaMotion_Internal(scrContext, entref, String, &vectorValue, &animAngles, notifyName, v19, blendType);
    }
    __asm
    {
      vmovaps xmm6, [rsp+0A8h+var_28]
      vmovaps xmm7, [rsp+0A8h+var_38]
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
  unsigned int v8; 

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
      __asm { vmovss  xmm0, cs:__real@3f800000; animRateRaw }
      *(_QWORD *)&v4->s.lerp.u.scriptMover.animIndex = 0i64;
      v4->s.lerp.u.anonymous.data[5] = 0;
      v8 = BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt(*(const float *)&_XMM0);
      v4->s.lerp.u.anonymous.data[2] &= 0xFFFFFFFC;
      v4->s.lerp.u.anonymous.data[6] = v8;
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
  int v4; 
  unsigned int entnum; 
  gentity_s *v7; 
  scr_string_t classname; 
  const char *v9; 
  const DObj *ServerDObjForEnt; 
  const char *v11; 
  ComErrorCode v12; 
  XAnimTree *Tree; 
  int Int; 
  int v15; 
  int time; 
  int v18; 
  int v19; 
  float fmt; 
  float fmta; 

  v4 = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    v7 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 567, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v7 = &g_entities[entnum];
    classname = v7->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v9 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v9);
    }
  }
  if ( G_ScrMoverMP_ValidateScriptMoverCanAnimate(scrContext, v7) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(v7);
    if ( !ServerDObjForEnt )
    {
      v11 = "Entity needs model to pause animation.\n";
      v12 = COM_ERR_2621;
LABEL_33:
      Scr_Error(v12, scrContext, v11);
      return;
    }
    if ( !v7->s.lerp.u.anonymous.data[3] )
    {
      v11 = "Entity needs to be playing an anim to pause.\n";
      v12 = COM_ERR_2622;
      goto LABEL_33;
    }
    Tree = DObjGetTree(ServerDObjForEnt);
    Int = Scr_GetInt(scrContext, 0);
    v15 = v7->s.lerp.u.anonymous.data[5];
    if ( Int )
    {
      if ( v15 )
      {
        v11 = "Animation is already paused.\n";
        v12 = COM_ERR_2623;
        goto LABEL_33;
      }
      time = 1;
      if ( level.time > 1 )
        time = level.time;
      v7->s.lerp.u.anonymous.data[5] = time;
      if ( Tree )
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
        LOBYTE(v4) = XAnimIsSimpleBlendTree(Tree) != 0;
        __asm { vmovss  dword ptr [rsp+48h+fmt], xmm0 }
        XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v4 + 1, fmt);
      }
    }
    else
    {
      if ( v15 <= 0 )
        goto LABEL_32;
      v18 = 1;
      if ( level.time > 1 )
        v18 = level.time;
      if ( v15 > v18 )
      {
LABEL_32:
        v11 = "Animation is not currently paused.\n";
        v12 = COM_ERR_2624;
        goto LABEL_33;
      }
      v19 = level.time - v15;
      v7->s.lerp.u.anonymous.data[5] = 0;
      v7->s.lerp.u.anonymous.data[4] += v19;
      v7->s.lerp.pos.trTime += v19;
      v7->s.lerp.apos.trTime += v19;
      if ( Tree )
      {
        __asm { vmovaps [rsp+48h+var_18], xmm6 }
        *(double *)&_XMM0 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(v7->s.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
        __asm
        {
          vmovaps xmm6, xmm0
          vmovss  dword ptr [rsp+48h+fmt], xmm6
        }
        LOBYTE(v4) = XAnimIsSimpleBlendTree(Tree) != 0;
        XAnimSetAnimRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v4 + 1, fmta);
        __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
int G_ScrMoverMP_PlayServerAnim(gentity_s *ent, DObj *obj, const char *prevAnimName, int prevAnimStartTimeLevelMS, float prevAnimRateRaw, const char *animName, float animStartTimeSec, float animRateRaw, scr_string_t notifyName)
{
  bool v19; 
  bool v20; 
  unsigned int v28; 
  __int64 v29; 
  const char *v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  int v35; 
  XAnimTree *SimpleTree; 
  const XAnim_s *v39; 
  int result; 
  XAnimTree *SimpleBlendTree; 
  const XAnim_s *Anims; 
  float fmt; 
  float blendTime; 
  double notifyType; 
  double notifyTypea; 
  double v75; 
  double v76; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0D8h+var_88], xmm11
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 204, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 205, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v19 = animName == NULL;
  if ( !animName )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 206, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName");
    v19 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, [rsp+0D8h+animStartTimeSec]
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm9, xmm10
    vxorpd  xmm11, xmm11, xmm11
    vmovss  xmm8, [rsp+0D8h+animRateRaw]
    vcomiss xmm8, xmm10
  }
  if ( v19 )
  {
    __asm
    {
      vmovsd  [rsp+0D8h+var_98], xmm11
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  qword ptr [rsp+0D8h+notifyType], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 208, ASSERT_TYPE_ASSERT, "( animRateRaw ) > ( 0 )", "%s > %s\n\t%g, %g", "animRateRaw", "0", notifyType, v75) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm9, cs:__real@447a0000
    vcvttss2si eax, xmm0
  }
  G_ScrMover_ClearServerAnim(ent);
  if ( DObjGetTree(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 214, ASSERT_TYPE_ASSERT, "( !tree )", (const char *)&queryFormat, "!tree") )
    __debugbreak();
  v28 = notifyName != 0 ? 4 : 0;
  if ( (LOBYTE(ent->s.lerp.u.vehicle.bodyPitch) & 1) == 0 && prevAnimName && *prevAnimName )
  {
    v29 = 0x7FFFFFFFi64;
    v30 = animName;
    if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v31 = (unsigned __int8)v30[prevAnimName - animName];
      v32 = v29;
      v33 = *(unsigned __int8 *)v30++;
      --v29;
      if ( !v32 )
        break;
      if ( v31 != v33 )
      {
        v34 = v31 + 32;
        if ( (unsigned int)(v31 - 65) > 0x19 )
          v34 = v31;
        v31 = v34;
        v35 = v33 + 32;
        if ( (unsigned int)(v33 - 65) > 0x19 )
          v35 = v33;
        if ( v31 != v35 )
        {
          _ECX = 0;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, cs:__real@3a83126f
            vmaxss  xmm2, xmm1, xmm10
          }
          v19 = (ent->s.lerp.u.anonymous.data[2] & 2) == 0;
          _EAX = ent->s.lerp.u.anonymous.data[2] & 2;
          __asm
          {
            vmovaps [rsp+0D8h+var_38], xmm6
            vmovss  xmm6, [rsp+0D8h+prevAnimRateRaw]
            vcomiss xmm6, xmm10
            vmovd   xmm1, ecx
            vmovd   xmm0, eax
            vpcmpeqd xmm3, xmm0, xmm1
            vmovss  xmm1, cs:__real@3f000000
            vmovaps [rsp+0D8h+var_48], xmm7
            vmulss  xmm7, xmm2, xmm6
            vmovss  xmm2, cs:__real@3e4ccccd
            vblendvps xmm0, xmm1, xmm2, xmm3
            vmovss  [rsp+0D8h+animRateRaw], xmm0
          }
          if ( v19 )
          {
            __asm
            {
              vmovsd  [rsp+0D8h+var_98], xmm11
              vcvtss2sd xmm0, xmm6, xmm6
              vmovsd  qword ptr [rsp+0D8h+notifyType], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 225, ASSERT_TYPE_ASSERT, "( prevAnimRateRaw ) > ( 0 )", "%s > %s\n\t%g, %g", "prevAnimRateRaw", "0", notifyTypea, v76) )
              __debugbreak();
          }
          SimpleBlendTree = XAnimCreateSimpleBlendTree(prevAnimName, animName, MOVEMENT);
          DObjSetTree(obj, SimpleBlendTree);
          __asm
          {
            vmovss  xmm0, [rsp+0D8h+animRateRaw]
            vmovss  [rsp+0D8h+blendTime], xmm0
            vmovaps xmm3, xmm9; newAnimTime
            vmovaps xmm2, xmm6; oldPlaybackRate
            vmovaps xmm1, xmm7; oldAnimTime
            vmovss  dword ptr [rsp+0D8h+fmt], xmm8
          }
          XAnimPlaySimpleBlendTreeAnim(obj, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, blendTime, notifyName, v28);
          Anims = XAnimGetAnims(SimpleBlendTree);
          XAnimGetLengthMsec(Anims, 2u);
          __asm
          {
            vmovaps xmm7, [rsp+0D8h+var_48]
            vmovaps xmm6, [rsp+0D8h+var_38]
          }
          goto LABEL_31;
        }
      }
    }
    while ( v31 );
  }
  SimpleTree = XAnimCreateSimpleTree(animName, MOVEMENT);
  DObjSetTree(obj, SimpleTree);
  __asm
  {
    vmovaps xmm2, xmm8; playbackRate
    vmovaps xmm1, xmm9; animTime
  }
  XAnimPlaySimpleTreeAnim(obj, *(float *)&_XMM1, *(float *)&_XMM2, notifyName, v28);
  v39 = XAnimGetAnims(SimpleTree);
  XAnimGetLengthMsec(v39, 1u);
LABEL_31:
  _R11 = &v80;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm1, xmm0, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
G_ScrMoverMP_ScriptModelPlayAnimDeltaMotion_Internal
==============
*/
void G_ScrMoverMP_ScriptModelPlayAnimDeltaMotion_Internal(scrContext_t *scrContext, scr_entref_t entref, const char *animName, const vec3_t *animOrigin, const vec3_t *animAngles, scr_string_t notifyName, float animStartTimeSec, const ScriptMoverAnimBlendType blendType)
{
  unsigned int entnum; 
  scr_string_t classname; 
  const char *v20; 
  int v21; 
  const DObj *ServerDObjForEnt; 
  DObj *v26; 
  const char *LastAnimName; 
  int v28; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  float fmt; 
  float v66; 
  float v67; 
  int v68[3]; 
  char v69; 
  void *retaddr; 
  __int64 v71; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  entnum = entref.entnum;
  __asm
  {
    vmovss  xmm7, [rsp+0C8h+animStartTimeSec]
    vmulss  xmm0, xmm7, cs:__real@447a0000
    vcvttss2si ebp, xmm0
  }
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_2787, scrContext, "not an entity");
    _RBX = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 342, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RBX = &g_entities[entnum];
    classname = _RBX->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.script_origin && classname != scr_const.script_arms && classname != scr_const.script_weapon && classname != scr_const.light && classname != scr_const.script_vehicle )
    {
      v20 = j_va("entity %i is not a script_brushmodel, script_model, script_origin, script_arms, script_weapon, light or script_vehicle", entnum);
      Scr_ObjectError(COM_ERR_2786, scrContext, v20);
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 344, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  v21 = _RBX->s.lerp.u.anonymous.data[4];
  *(double *)&_XMM0 = BG_AnimTreeMP_ConvertScriptModelAnimRateIntToFloat(_RBX->s.lerp.u.player.accessoryWeaponHandle.m_mapEntryId);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm3, xmm6; animRateRaw
  }
  if ( G_ScrMoverMP_SetupClientAnim(scrContext, _RBX, _EBP, *(float *)&_XMM3, blendType) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
    v26 = (DObj *)ServerDObjForEnt;
    if ( ServerDObjForEnt )
    {
      LastAnimName = G_ScrMoverMP_GetLastAnimName(ServerDObjForEnt);
      G_ScrMover_ClearAnimatedTrajectory(_RBX);
      if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 364, ASSERT_TYPE_ASSERT, "( animName )", (const char *)&queryFormat, "animName") )
        __debugbreak();
      __asm
      {
        vmovss  [rsp+0C8h+var_90], xmm6
        vmovss  [rsp+0C8h+var_98], xmm7
        vmovss  dword ptr [rsp+0C8h+fmt], xmm8
      }
      v28 = G_ScrMoverMP_PlayServerAnim(_RBX, v26, LastAnimName, v21, fmt, animName, v66, v67, notifyName);
      _RDI = &_RBX->s.lerp.pos;
      _RBX->s.lerp.pos.trType = TR_ANIMATED_MOVER;
      _RBX->s.lerp.apos.trType = TR_ANIMATED_MOVER;
      __asm
      {
        vmovss  xmm5, cs:__real@3f000000
        vaddss  xmm1, xmm5, dword ptr [r12]
        vxorps  xmm4, xmm4, xmm4
        vroundss xmm0, xmm4, xmm1, 1
        vcvttss2si eax, xmm0
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, eax
        vmovss  [rsp+0C8h+var_70], xmm6
        vaddss  xmm2, xmm5, dword ptr [r12+4]
        vroundss xmm0, xmm4, xmm2, 1
        vcvttss2si eax, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  [rsp+0C8h+var_6C], xmm0
        vaddss  xmm2, xmm5, dword ptr [r12+8]
        vroundss xmm1, xmm4, xmm2, 1
        vcvttss2si eax, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  [rsp+0C8h+var_68], xmm0
      }
      if ( _RBX == (gentity_s *)-16i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        __asm { vmovss  xmm6, [rsp+0C8h+var_70] }
      }
      if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
      {
        __asm { vmovss  [rsp+0C8h+animStartTimeSec], xmm6 }
        if ( (LODWORD(animStartTimeSec) & 0x7F800000) == 2139095040 )
          goto LABEL_39;
        __asm
        {
          vmovss  xmm0, [rsp+0C8h+var_6C]
          vmovss  [rsp+0C8h+animStartTimeSec], xmm0
        }
        if ( (LODWORD(animStartTimeSec) & 0x7F800000) == 2139095040 )
          goto LABEL_39;
        __asm
        {
          vmovss  xmm0, [rsp+0C8h+var_68]
          vmovss  [rsp+0C8h+animStartTimeSec], xmm0
        }
        if ( (LODWORD(animStartTimeSec) & 0x7F800000) == 2139095040 )
        {
LABEL_39:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        v50 = v68[0] ^ ~s_trbase_aab_X;
        v51 = s_trbase_aab_Y ^ v50 ^ v68[1];
        v52 = s_trbase_aab_Z ^ v51 ^ v68[2];
        LODWORD(_RBX->s.lerp.pos.trBase.v[0]) = v50;
        LODWORD(_RBX->s.lerp.pos.trBase.v[1]) = v51;
        LODWORD(_RBX->s.lerp.pos.trBase.v[2]) = v52;
        memset(&v71, 0, sizeof(v71));
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rdi+0Ch], xmm6
          vmovss  xmm0, [rsp+0C8h+var_6C]
          vmovss  dword ptr [rdi+10h], xmm0
          vmovss  xmm1, [rsp+0C8h+var_68]
          vmovss  dword ptr [rdi+14h], xmm1
        }
      }
      _RCX = animAngles;
      _RBX->s.lerp.apos.trBase.v[0] = animAngles->v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+4]
        vmovss  dword ptr [rbx+44h], xmm0
        vmovss  xmm1, dword ptr [rcx+8]
        vmovss  dword ptr [rbx+48h], xmm1
      }
      _RBX->s.lerp.pos.trDuration = v28;
      _RBX->s.lerp.apos.trDuration = v28;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vcvttss2si eax, xmm0
      }
      LODWORD(_RCX) = level.time - _EAX;
      _RBX->s.lerp.pos.trTime = level.time - _EAX;
      _RBX->s.lerp.apos.trTime = (int)_RCX;
      memset(v68, 0, sizeof(v68));
    }
    else
    {
      Scr_Error(COM_ERR_2613, scrContext, "Entity needs model to play delta motion animation.\n");
    }
  }
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
G_ScrMoverMP_SetupClientAnim
==============
*/

bool __fastcall G_ScrMoverMP_SetupClientAnim(scrContext_t *scrContext, gentity_s *ent, int animStartTimeMS, double animRateRaw, const ScriptMoverAnimBlendType blendType)
{
  bool result; 
  const char *String; 
  const char *v13; 
  unsigned int v16; 
  bool v17; 
  bool v18; 
  int v24; 
  unsigned int v25; 
  int v26; 
  unsigned int v27; 
  __int64 v29; 
  unsigned int outIndex[4]; 
  char dest[1024]; 

  __asm
  {
    vmovaps [rsp+498h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( animStartTimeMS < 0 )
  {
    Scr_Error(COM_ERR_2602, scrContext, "start time must be non-negative");
LABEL_3:
    result = 0;
    goto LABEL_28;
  }
  if ( !G_ScrMoverMP_ValidateScriptMoverCanAnimate(scrContext, ent) )
    goto LABEL_3;
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
        __asm
        {
          vmovaps [rsp+498h+var_38], xmm7
          vxorps  xmm7, xmm7, xmm7
          vcomiss xmm6, xmm7
          vmovaps xmm0, xmm6; animRateRaw
        }
        v16 = BG_AnimTreeMP_ConvertScriptModelAnimRateFloatToInt(*(const float *)&_XMM0);
        v17 = outIndex[0] == 0;
        if ( !outIndex[0] )
        {
          LODWORD(v29) = 0;
          v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_mover_mp.cpp", 131, ASSERT_TYPE_ASSERT, "( animIndex ) != ( 0 )", "animIndex != 0\n\t%i, %i", v29, 0i64);
          v17 = !v18;
          if ( v18 )
            __debugbreak();
        }
        __asm
        {
          vcomiss xmm6, xmm7
          vmovaps xmm7, [rsp+498h+var_38]
        }
        if ( v17 )
        {
          v24 = level.time - animStartTimeMS;
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, esi
            vdivss  xmm1, xmm0, xmm6
            vcvttss2si eax, xmm1
          }
          v24 = level.time - _EAX;
        }
        v25 = outIndex[0];
        ent->s.lerp.u.anonymous.data[4] = v24;
        v26 = ent->s.lerp.u.anonymous.data[2];
        ent->s.lerp.u.anonymous.data[3] = v25;
        ent->s.lerp.u.anonymous.data[5] = 0;
        ent->s.lerp.u.anonymous.data[6] = v16;
        if ( blendType == FLAT_TIRE )
        {
          v27 = v26 & 0xFFFFFFFC | 2;
        }
        else if ( blendType == 2 )
        {
          v27 = v26 & 0xFFFFFFFC | 1;
        }
        else
        {
          v27 = v26 & 0xFFFFFFFC;
        }
        ent->s.lerp.u.anonymous.data[2] = v27;
        result = 1;
      }
      else
      {
        v13 = j_va("MP Anim [%s] was not precached.\n", dest);
        Scr_Error(COM_ERR_2606, scrContext, v13);
        result = 0;
      }
    }
    else
    {
      Scr_Error(COM_ERR_2605, scrContext, "<anim name> needs to be a string or an animation");
      result = 0;
    }
  }
  else
  {
    Scr_Error(COM_ERR_2604, scrContext, "Cannot change a 'willNeverChange' entity\n");
    result = 0;
  }
LABEL_28:
  __asm { vmovaps xmm6, [rsp+498h+var_28] }
  return result;
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

