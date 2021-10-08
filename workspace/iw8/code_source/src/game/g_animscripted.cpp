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

void __fastcall GScr_GetAnglesForAnimTime(scrContext_t *scrContext, double _XMM1_8)
{
  const XAnim_s *Anims; 
  float v13; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v17; 
  vec4_t rot; 
  tmat33_t<vec3_t> axis; 
  vec3_t trans; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  __asm { vmovaps [rsp+128h+var_18], xmm6 }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
  }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  __asm { vmovss  [rsp+128h+var_108], xmm6 }
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v13);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+128h+vectorValue+4]
    vmovss  [rsp+128h+var_8C], xmm0
    vmovss  xmm0, dword ptr [rsp+128h+vectorValue+8]
    vmovss  [rsp+128h+var_84], xmm0
    vmovss  [rsp+128h+var_88], xmm1
  }
  AnglesToAxis(&angles, &axis);
  QuatToAxis(&rot, &in1);
  MatrixMultiply(&in1, &axis, &out);
  AxisToAngles(&out, &v17);
  Scr_AddVector(scrContext, v17.v);
  __asm { vmovaps xmm6, [rsp+128h+var_18] }
}

/*
==============
GScr_GetCycleOriginOffset
==============
*/
void GScr_GetCycleOriginOffset(scrContext_t *scrContext)
{
  const XAnim_s *Anims; 
  float v33; 
  float v34; 
  int linkPointer; 
  vec3_t v36; 
  vec3_t trans; 
  float value[4]; 
  tmat33_t<vec3_t> axis; 
  vec3_t vectorValue; 
  vec4_t rot; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  linkPointer = Scr_GetAnim(scrContext, 1u, NULL).linkPointer;
  AnglesToAxis(&vectorValue, &axis);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  __asm { vmovss  [rsp+0E0h+var_C0], xmm0 }
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v33);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0E0h+var_C0], xmm0
  }
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &v36, v34);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+var_A8]
    vsubss  xmm5, xmm0, dword ptr [rbp+57h+trans]
    vmovss  xmm0, dword ptr [rbp+57h+var_A8+8]
    vsubss  xmm7, xmm0, dword ptr [rbp+57h+trans+8]
    vmulss  xmm3, xmm5, dword ptr [rbp+57h+axis]
    vmulss  xmm0, xmm7, dword ptr [rbp+57h+axis+18h]
    vmovss  xmm1, dword ptr [rbp+57h+var_A8+4]
    vsubss  xmm6, xmm1, dword ptr [rbp+57h+trans+4]
    vmulss  xmm2, xmm6, dword ptr [rbp+57h+axis+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm5, dword ptr [rbp+57h+axis+4]
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm0, xmm7, dword ptr [rbp+57h+axis+1Ch]
    vmovss  [rbp+57h+value], xmm2
    vmulss  xmm2, xmm6, dword ptr [rbp+57h+axis+10h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm5, dword ptr [rbp+57h+axis+8]
    vaddss  xmm2, xmm4, xmm0
    vmulss  xmm0, xmm7, dword ptr [rbp+57h+axis+20h]
    vmovss  [rbp+57h+var_84], xmm2
    vmulss  xmm2, xmm6, dword ptr [rbp+57h+axis+14h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm0
    vmovss  [rbp+57h+var_80], xmm2
  }
  Scr_AddVector(scrContext, value);
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
GScr_GetEntAnimTree
==============
*/
XAnimTree *GScr_GetEntAnimTree(gentity_s *ent)
{
  XAnimTree *result; 
  scrContext_t *v6; 
  scrContext_t *v10; 
  const char *v14; 
  const char *EntityTypeName; 
  const char *v18; 
  __int64 v22; 
  __int64 v23; 

  _RBP = ent;
  result = G_Utils_GetEntAnimTree(ent);
  if ( !result )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovaps [rsp+68h+var_28], xmm7
      vmovaps [rsp+68h+var_38], xmm8
    }
    v6 = ScriptContext_Server();
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+138h]
      vmovss  xmm7, dword ptr [rbp+134h]
      vmovss  xmm8, dword ptr [rbp+130h]
    }
    v10 = v6;
    __asm
    {
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vcvtss2sd xmm8, xmm8, xmm8
    }
    v14 = SL_ConvertToString(_RBP->classname);
    EntityTypeName = G_GetEntityTypeName(_RBP);
    __asm
    {
      vmovaps xmm3, xmm8
      vmovq   r9, xmm3
      vmovsd  [rsp+68h+var_40], xmm6
      vmovsd  [rsp+68h+var_48], xmm7
    }
    v18 = j_va("entity of type '%s', classname '%s', origin (%f, %f, %f) does not have an animation tree", EntityTypeName, v14, _R9, v22, v23);
    Scr_Error(COM_ERR_1779, v10, v18);
    __asm { vmovaps xmm8, [rsp+68h+var_38] }
    result = NULL;
    __asm
    {
      vmovaps xmm7, [rsp+68h+var_28]
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
  return result;
}

/*
==============
GScr_GetOriginForAnimTime
==============
*/

void __fastcall GScr_GetOriginForAnimTime(scrContext_t *scrContext, double _XMM1_8)
{
  const XAnim_s *Anims; 
  float v13; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t trans; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  vec4_t rot; 

  __asm { vmovaps [rsp+0D8h+var_18], xmm6 }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
  }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  __asm { vmovss  [rsp+0D8h+var_B8], xmm6 }
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v13);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+0D8h+vectorValue+4]
    vmovss  [rsp+0D8h+var_3C], xmm0
    vmovss  xmm0, dword ptr [rsp+0D8h+vectorValue+8]
    vmovss  [rsp+0D8h+var_34], xmm0
    vmovss  [rsp+0D8h+var_38], xmm1
  }
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  MatrixTransformVector43(&trans, &axis, &out);
  Scr_AddVector(scrContext, out.v);
  __asm { vmovaps xmm6, [rsp+0D8h+var_18] }
}

/*
==============
GScr_GetStartAngles
==============
*/

void __fastcall GScr_GetStartAngles(scrContext_t *scrContext, double _XMM1_8)
{
  const XAnim_s *Anims; 
  float v13; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v17; 
  vec4_t rot; 
  tmat33_t<vec3_t> axis; 
  vec3_t trans; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  __asm { vmovaps [rsp+128h+var_18], xmm6 }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
  }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  __asm { vmovss  [rsp+128h+var_108], xmm6 }
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v13);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+128h+vectorValue+4]
    vmovss  [rsp+128h+var_8C], xmm0
    vmovss  xmm0, dword ptr [rsp+128h+vectorValue+8]
    vmovss  [rsp+128h+var_84], xmm0
    vmovss  [rsp+128h+var_88], xmm1
  }
  AnglesToAxis(&angles, &axis);
  QuatToAxis(&rot, &in1);
  MatrixMultiply(&in1, &axis, &out);
  AxisToAngles(&out, &v17);
  Scr_AddVector(scrContext, v17.v);
  __asm { vmovaps xmm6, [rsp+128h+var_18] }
}

/*
==============
GScr_GetStartOrigin
==============
*/

void __fastcall GScr_GetStartOrigin(scrContext_t *scrContext, double _XMM1_8)
{
  const XAnim_s *Anims; 
  float v13; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t trans; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  vec4_t rot; 

  __asm { vmovaps [rsp+0D8h+var_18], xmm6 }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( Scr_GetNumParam(scrContext) > 3 )
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
  }
  Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
  __asm { vmovss  [rsp+0D8h+var_B8], xmm6 }
  XAnimGetAbsDelta(Anims, (unsigned __int16)linkPointer, &rot, &trans, v13);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+0D8h+vectorValue+4]
    vmovss  [rsp+0D8h+var_3C], xmm0
    vmovss  xmm0, dword ptr [rsp+0D8h+vectorValue+8]
    vmovss  [rsp+0D8h+var_34], xmm0
    vmovss  [rsp+0D8h+var_38], xmm1
  }
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  MatrixTransformVector43(&trans, &axis, &out);
  Scr_AddVector(scrContext, out.v);
  __asm { vmovaps xmm6, [rsp+0D8h+var_18] }
}

/*
==============
G_AnimScripted_Think_DeathPlant
==============
*/
void G_AnimScripted_Think_DeathPlant(gentity_s *ent, XAnimTree *tree, vec3_t *origin, vec3_t *angles)
{
  int passEntityNum; 
  bool v23; 
  bool v24; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovss  xmm3, dword ptr [r8+8]
  }
  _RBX = ent->scripted;
  _RDI = angles;
  __asm
  {
    vmovss  xmm5, dword ptr [r8]
    vmovss  xmm4, dword ptr [r8+4]
  }
  passEntityNum = ent->s.number;
  __asm
  {
    vmovss  dword ptr [rsp+118h+start+8], xmm3
    vmovss  dword ptr [rsp+118h+start], xmm5
    vmovss  dword ptr [rsp+118h+start+4], xmm4
    vmovss  xmm0, dword ptr [rbx+50h]
    vaddss  xmm0, xmm0, cs:__real@41900000
    vaddss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+118h+start+8], xmm1
    vmovss  dword ptr [rsp+118h+end+8], xmm3
    vmovss  dword ptr [rsp+118h+end], xmm5
    vmovss  dword ptr [rsp+118h+end+4], xmm4
    vaddss  xmm0, xmm3, dword ptr [rbx+50h]
    vsubss  xmm1, xmm0, cs:__real@41900000
    vmovss  dword ptr [rsp+118h+end+8], xmm1
  }
  G_Main_TraceCapsule(&results, &start, &end, &ent->r.box, passEntityNum, 131089);
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( !results.allsolid )
  {
    __asm
    {
      vmovaps [rsp+118h+var_58], xmm8
      vmovss  xmm8, [rsp+118h+results.fraction]
      vcomiss xmm8, xmm7
      vmovaps xmm8, [rsp+118h+var_58]
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+5Ch]
  }
  if ( results.allsolid )
  {
    *(double *)&_XMM0 = XAnimGetTime(tree, 0, XANIM_SUBTREE_DEFAULT, _RBX->anim);
    __asm { vmovaps xmm7, xmm0 }
  }
  else
  {
    v23 = level.frameDuration == 0;
    if ( !level.frameDuration )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration");
      v23 = !v24;
      if ( v24 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vaddss  xmm2, xmm1, dword ptr [rbx+5Ch]
      vcomiss xmm2, xmm7
      vmovss  dword ptr [rbx+5Ch], xmm2
    }
    if ( v23 )
      __asm { vmovaps xmm7, xmm2 }
    else
      _RBX->fOrientLerp = 1.0;
  }
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rbx+54h]
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm7, dword ptr [rbx+58h]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm1
    vmovaps xmm7, [rsp+118h+var_48]
  }
}

/*
==============
G_Animscripted
==============
*/
void G_Animscripted(scrContext_t *scrContext, gentity_s *ent, const vec3_t *origin, const vec3_t *angles, unsigned int anim, unsigned int root, scr_string_t notifyName, unsigned __int8 animMode, float goalTime, float animRate)
{
  const char *v18; 
  const char *v19; 
  XAnimTree *EntAnimTree; 
  scrContext_t *v21; 
  scrContext_t *v25; 
  const char *v29; 
  const char *EntityTypeName; 
  const char *v33; 
  const XAnim_s *v35; 
  DObj *ServerDObjForEnt; 
  const dvar_t *v38; 
  bool IsLooped; 
  char *fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  void *objID; 
  float objIDa; 
  float objIDb; 
  float curveID; 
  float curveIDa; 
  vec3_t anims; 
  vec3_t out; 
  vec3_t anglesa; 
  vec4_t rot; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v66; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _RSI = ent;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_1781, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( (_RSI->flags.m_flags[0] & 0x80000000) == 0 )
  {
    v18 = SL_ConvertToString(_RSI->classname);
    v19 = j_va("entity (classname: '%s') does not currently support animscripted", v18);
    Scr_ObjectError(COM_ERR_1782, scrContext, v19);
  }
  EntAnimTree = G_Utils_GetEntAnimTree(_RSI);
  if ( !EntAnimTree )
  {
    v21 = ScriptContext_Server();
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+138h]
      vmovss  xmm7, dword ptr [rsi+134h]
      vmovss  xmm8, dword ptr [rsi+130h]
    }
    v25 = v21;
    __asm
    {
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vcvtss2sd xmm8, xmm8, xmm8
    }
    v29 = SL_ConvertToString(_RSI->classname);
    EntityTypeName = G_GetEntityTypeName(_RSI);
    __asm
    {
      vmovaps xmm3, xmm8
      vmovq   r9, xmm3
      vmovsd  [rsp+178h+objID], xmm6
      vmovsd  [rsp+178h+fmt], xmm7
    }
    v33 = j_va("entity of type '%s', classname '%s', origin (%f, %f, %f) does not have an animation tree", EntityTypeName, v29, _R9, fmt, objID);
    Scr_Error(COM_ERR_1779, v25, v33);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animscripted.cpp", 167, ASSERT_TYPE_ASSERT, "( pAnimTree )", (const char *)&queryFormat, "pAnimTree") )
      __debugbreak();
  }
  _RDI = _RSI->scripted;
  if ( !_RDI )
  {
    _RDI = (EntityAnimScript *)MT_Alloc(0x60ui64, 19);
    _RSI->scripted = _RDI;
  }
  if ( _RSI->s.eType == ET_SCRIPTMOVER )
    _RSI->s.lerp.u.anonymous.data[2] |= 0x40u;
  _RDI->mode = animMode;
  _RDI->bStarted = 0;
  _RDI->anim = anim;
  _RDI->root = root;
  v35 = XAnimGetAnims(EntAnimTree);
  *(_QWORD *)anims.v = v35;
  if ( animMode == 1 )
  {
    G_Animscripted_DeathPlant(_RSI, v35, anim, origin, angles);
  }
  else
  {
    _RDI->axis.m[3].v[0] = origin->v[0];
    _RDI->axis.m[3].v[1] = origin->v[1];
    _RDI->axis.m[3].v[2] = origin->v[2];
    AnglesToAxis(angles, (tmat33_t<vec3_t> *)_RDI);
  }
  __asm
  {
    vmovss  xmm6, [rsp+178h+goalTime]
    vmovss  dword ptr [rsp+178h+fmt], xmm6
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RSI);
  XAnimClearTreeGoalWeightsStrict(EntAnimTree, 0, XANIM_SUBTREE_DEFAULT, root, fmta, ServerDObjForEnt, LINEAR);
  v38 = DVARINT_g_dumpAnimsCommands;
  if ( !DVARINT_g_dumpAnimsCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnimsCommands") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  __asm
  {
    vmovss  xmm7, [rsp+178h+animRate]
    vmovss  xmm8, cs:__real@3f800000
  }
  if ( v38->current.integer == _RSI->s.number )
  {
    __asm
    {
      vmovss  dword ptr [rsp+178h+curveID], xmm7
      vmovss  dword ptr [rsp+178h+objID], xmm6
      vmovss  dword ptr [rsp+178h+fmt], xmm8
    }
    DumpAnimCommand("animscripted(internal)", EntAnimTree, _RSI->scripted->anim, -1, fmtb, objIDa, curveID);
  }
  IsLooped = XAnimIsLooped(*(const XAnim_s **)anims.v, anim);
  __asm
  {
    vmovss  dword ptr [rsp+178h+curveID], xmm7
    vmovss  dword ptr [rsp+178h+objID], xmm6
    vmovss  dword ptr [rsp+178h+fmt], xmm8
  }
  XAnimSetCompleteGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, anim, fmtc, objIDb, curveIDa, notifyName, 0, !IsLooped, LINEAR, NULL);
  if ( (_RSI->flags.m_flags[0] & 0x800) == 0 )
    _RSI->flags.m_flags[1] |= 2 * GameModeFlagValues::ms_spValue;
  XAnimCalcAbsDelta(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, anim, &rot, &anims);
  MatrixTransformVector43(&anims, &_RDI->axis, &out);
  QuatToAxis(&rot, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)_RDI, &v66);
  AxisToAngles(&v66, &anglesa);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+130h]
    vsubss  xmm1, xmm0, dword ptr [rsp+178h+out]
    vmovss  dword ptr [rdi+30h], xmm1
    vmovss  xmm2, dword ptr [rsi+134h]
    vsubss  xmm0, xmm2, dword ptr [rsp+178h+out+4]
    vmovss  dword ptr [rdi+34h], xmm0
    vmovss  xmm1, dword ptr [rsi+138h]
    vsubss  xmm2, xmm1, dword ptr [rsp+178h+out+8]
    vmovss  dword ptr [rdi+38h], xmm2
  }
  AnglesSubtract(&_RSI->r.currentAngles, &anglesa, &_RDI->anglesError);
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
G_Animscripted_DeathPlant
==============
*/
void G_Animscripted_DeathPlant(gentity_s *ent, const XAnim_s *anims, unsigned int anim, const vec3_t *origin, const vec3_t *angles)
{
  int number; 
  int v29; 
  float fmt; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v54; 
  vec3_t trans; 
  vec3_t out; 
  vec4_t rot; 
  trace_t results; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v60; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
  }
  _RBX = ent->scripted;
  _RDI = origin;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animscripted.cpp", 90, ASSERT_TYPE_ASSERT, "( scripted )", (const char *)&queryFormat, "scripted") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+8]
    vaddss  xmm0, xmm1, cs:__real@42100000
    vmovss  xmm3, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
  }
  number = ent->s.number;
  __asm
  {
    vmovss  dword ptr [rsp+1E0h+start+8], xmm0
    vsubss  xmm0, xmm1, cs:__real@41900000
    vmovaps [rsp+1E0h+var_48+8], xmm6
    vmovss  dword ptr [rsp+1E0h+end+8], xmm0
    vmovss  dword ptr [rsp+1E0h+start], xmm3
    vmovss  dword ptr [rsp+1E0h+start+4], xmm2
    vmovss  dword ptr [rsp+1E0h+end], xmm3
    vmovss  dword ptr [rsp+1E0h+end+4], xmm2
  }
  G_Main_TraceCapsule(&results, &start, &end, &ent->r.box, number, 131089);
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( !results.allsolid )
  {
    __asm
    {
      vmovss  xmm6, [rbp+0E0h+results.fraction]
      vcomiss xmm6, xmm7
    }
  }
  _RBX->axis.m[3].v[0] = _RDI->v[0];
  _RBX->axis.m[3].v[1] = _RDI->v[1];
  __asm { vmovss  xmm3, dword ptr [rdi+8] }
  _RAX = angles;
  __asm { vmovss  dword ptr [rbx+2Ch], xmm3 }
  _RBX->fHeightOfs = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  xmm1, dword ptr [rax+8]
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rsp+1E0h+var_178+4], xmm0
    vmovss  dword ptr [rsp+1E0h+var_178+8], xmm1
    vmovss  dword ptr [rsp+1E0h+var_178], xmm8
  }
  AnglesToAxis(&v54, (tmat33_t<vec3_t> *)_RBX);
  __asm { vmovss  dword ptr [rsp+1E0h+fmt], xmm7 }
  XAnimGetAbsDelta(anims, anim, &rot, &trans, fmt);
  MatrixTransformVector43(&trans, &_RBX->axis, &out);
  QuatToAxis(&rot, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)_RBX, &v60);
  AxisToAngles(&v60, &v54);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1E0h+trans]
    vmovss  xmm1, dword ptr [rsp+1E0h+trans+4]
  }
  v29 = ent->s.number;
  __asm
  {
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rbp+0E0h+trans+8]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm3, dword ptr [rbp+0E0h+out]
    vaddss  xmm2, xmm4, xmm1
    vmovss  xmm1, dword ptr [rbp+0E0h+out+8]
    vsqrtss xmm5, xmm2, xmm2
    vaddss  xmm0, xmm5, cs:__real@42800000
    vmovss  xmm2, dword ptr [rbp+0E0h+out+4]
    vaddss  xmm0, xmm0, xmm1
    vmovss  dword ptr [rsp+1E0h+start+8], xmm0
    vaddss  xmm0, xmm5, cs:__real@43000000
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rsp+1E0h+end+8], xmm1
    vmovss  dword ptr [rsp+1E0h+start], xmm3
    vmovss  dword ptr [rsp+1E0h+start+4], xmm2
    vmovss  dword ptr [rsp+1E0h+end], xmm3
    vmovss  dword ptr [rsp+1E0h+end+4], xmm2
  }
  G_Main_TraceCapsule(&results, &start, &end, &ent->r.box, v29, 131089);
  if ( !results.allsolid )
  {
    __asm
    {
      vmovss  xmm6, [rbp+0E0h+results.fraction]
      vcomiss xmm6, xmm7
    }
  }
  *(_QWORD *)&_RBX->fEndPitch = 0i64;
  *(double *)&_XMM0 = XAnimGetLength(anims, anim);
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000
    vcmpltss xmm2, xmm0, xmm7
    vblendvps xmm0, xmm8, xmm1, xmm2
    vmovss  dword ptr [rbx+5Ch], xmm0
    vmovaps xmm6, [rsp+1E0h+var_48+8]
    vmovaps xmm7, [rsp+1E0h+var_58+8]
    vmovaps xmm8, [rsp+1E0h+var_68+8]
  }
}

/*
==============
G_Animscripted_Think
==============
*/
void G_Animscripted_Think(gentity_s *ent)
{
  XAnimTree *EntAnimTree; 
  const DObj *ServerDObjForEnt; 
  bool v24; 
  char v42; 
  bool v43; 
  AIAgentInterface *v63; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v65; 
  actor_s *actor; 
  ai_scripted_t *m_pAI; 
  float fmt; 
  float trans; 
  float v72; 
  AIActorInterface v73; 
  AIAgentInterface v74; 
  AIAgentInterface *v75; 
  vec3_t out; 
  vec3_t angles; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v80; 
  vec4_t rot; 
  tmat43_t<vec3_t> parentRelAxis; 

  _RDI = ent->scripted;
  _RBX = ent;
  if ( !_RDI )
    return;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animscripted.cpp", 381, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  EntAnimTree = G_Utils_GetEntAnimTree(_RBX);
  if ( EntAnimTree && _RDI->anim )
  {
    __asm
    {
      vmovaps [rsp+200h+var_38+8], xmm6
      vmovaps [rsp+200h+var_68+8], xmm9
      vmovaps [rsp+200h+var_78+8], xmm10
    }
    ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
    XAnimCalcAbsDelta(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, _RDI->anim, &rot, &in1);
    MatrixTransformVector43(&in1, &_RDI->axis, &out);
    QuatToAxis(&rot, (tmat33_t<vec3_t> *)&axis);
    MatrixMultiply((const tmat33_t<vec3_t> *)&axis, (const tmat33_t<vec3_t> *)_RDI, (tmat33_t<vec3_t> *)&v80);
    AxisToAngles((const tmat33_t<vec3_t> *)&v80, &angles);
    if ( _RDI->mode == 1 )
      G_AnimScripted_Think_DeathPlant(_RBX, EntAnimTree, &out, &angles);
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+30h]
      vmovss  xmm2, dword ptr [rdi+34h]
      vmovss  xmm3, dword ptr [rdi+38h]
      vmovss  xmm10, cs:__real@3f800000
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm6, xmm2, xmm1
      vxorps  xmm0, xmm0, xmm0
      vmovaps [rsp+200h+var_48+8], xmm7
      vucomiss xmm6, xmm0
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vmulss  xmm0, xmm9, dword ptr [rbx+490h]
      vmulss  xmm2, xmm0, cs:__real@3a83126f; maxChange
    }
    G_ReduceAnglesError(&angles, &_RDI->anglesError, *(float *)&_XMM2);
    __asm { vmovaps xmm9, [rsp+200h+var_68+8] }
    v24 = _RBX->tagInfo == NULL;
    if ( _RBX->tagInfo )
    {
      G_CalcTagParentRelAxis(_RBX, &parentRelAxis);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+100h+out]
        vmovss  xmm1, dword ptr [rbp+100h+out+4]
        vmovss  [rbp+100h+var_CC], xmm0
        vmovss  xmm0, dword ptr [rbp+100h+out+8]
        vmovss  [rbp+100h+var_C4], xmm0
        vmovss  [rbp+100h+var_C8], xmm1
      }
      AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&v80);
      MatrixMultiply43(&v80, &parentRelAxis, &axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  xmm7, [rbp+100h+var_FC]
        vmovss  xmm6, [rbp+100h+var_F8]
        vmovss  xmm5, [rbp+100h+var_F4]
        vsubss  xmm2, xmm1, xmm6
        vmulss  xmm1, xmm2, xmm2
        vsubss  xmm4, xmm0, xmm7
        vmovss  xmm0, dword ptr [rbx+138h]
        vsubss  xmm3, xmm0, xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, cs:__real@461c4000
      }
      v43 = !(v42 | v24);
      __asm
      {
        vmovss  dword ptr [rbx+130h], xmm7
        vmovss  dword ptr [rbx+134h], xmm6
        vmovss  dword ptr [rbx+138h], xmm5
      }
      AxisToAngles((const tmat33_t<vec3_t> *)&axis, &_RBX->r.currentAngles);
      G_CalcTagAxis(_RBX, 0);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  xmm7, dword ptr [rbp+100h+out]
        vmovss  xmm6, dword ptr [rbp+100h+out+4]
        vmovss  xmm5, dword ptr [rbp+100h+out+8]
        vsubss  xmm4, xmm0, xmm7
        vmovss  xmm0, dword ptr [rbx+138h]
        vsubss  xmm2, xmm1, xmm6
        vsubss  xmm3, xmm0, xmm5
        vmulss  xmm1, xmm2, xmm2
        vmovss  dword ptr [rbx+130h], xmm7
        vmovss  dword ptr [rbx+134h], xmm6
        vmovss  dword ptr [rbx+138h], xmm5
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rbp+100h+angles]
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, cs:__real@461c4000
        vmovss  xmm1, dword ptr [rbp+100h+angles+4]
        vmovss  dword ptr [rbx+13Ch], xmm0
        vmovss  xmm0, dword ptr [rbp+100h+angles+8]
      }
      v43 = !v24;
      __asm
      {
        vmovss  dword ptr [rbx+140h], xmm1
        vmovss  dword ptr [rbx+144h], xmm0
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+200h+var_48+8]
      vmovaps xmm6, [rsp+200h+var_38+8]
    }
    if ( v43 )
      G_PhysicsObject_WarpToCurrentTransform(_RBX, 0);
    AIActorInterface::AIActorInterface(&v73);
    AIAgentInterface::AIAgentInterface(&v74);
    v63 = NULL;
    v74.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v75 = NULL;
    if ( _RBX->agent )
    {
      if ( SV_Agent_IsScripted(_RBX->s.number) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(_RBX);
        if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
          __debugbreak();
        if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
          __debugbreak();
        AINewAgentInterface::SetAgent((AINewAgentInterface *)&v74, ScriptedAgentInfo);
        v63 = &v74;
        v75 = &v74;
        v65 = &v74;
LABEL_33:
        m_pAI = v63->AIScriptedInterface::m_pAI;
        m_pAI->Physics.vOrigin.v[0] = _RBX->r.currentOrigin.v[0];
        m_pAI->Physics.vOrigin.v[1] = _RBX->r.currentOrigin.v[1];
        m_pAI->Physics.vOrigin.v[2] = _RBX->r.currentOrigin.v[2];
        AIScriptedInterface::GetGroundTraceOrigin(v65, &m_pAI->Physics.groundTraceOrigin);
        AIScriptedInterface::Physics_GroundTraceOnly(v65);
LABEL_34:
        if ( _RDI->bStarted )
        {
          if ( XAnimHasFinished(EntAnimTree, 0, XANIM_SUBTREE_DEFAULT, _RDI->anim) )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@3e4ccccd
              vmovss  [rsp+200h+var_1D0], xmm10
              vmovss  dword ptr [rsp+200h+trans], xmm0
              vmovss  dword ptr [rsp+200h+fmt], xmm10
            }
            XAnimSetCompleteGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, _RDI->anim, fmt, trans, v72, (scr_string_t)0, 0, 0, LINEAR, NULL);
            _RDI->anim = 0;
          }
        }
        else
        {
          _RDI->bStarted = 1;
        }
        __asm { vmovaps xmm10, [rsp+200h+var_78+8] }
        return;
      }
      v63 = v75;
    }
    actor = _RBX->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v73, _RBX->actor);
      v63 = (AIAgentInterface *)&v73;
      v75 = (AIAgentInterface *)&v73;
    }
    v65 = v63;
    if ( !v63 )
      goto LABEL_34;
    goto LABEL_33;
  }
  MT_Free(_RDI, 0x60ui64);
  v24 = _RBX->s.eType == ET_SCRIPTMOVER;
  _RBX->scripted = NULL;
  if ( v24 )
    _RBX->s.lerp.u.anonymous.data[2] &= ~0x40u;
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

void __fastcall G_ReduceAnglesError(vec3_t *angles, vec3_t *anglesError, double maxChange)
{
  unsigned int v15; 
  bool v17; 
  bool v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm2, xmm9
    vmovaps xmm8, xmm2
  }
  _RBP = (char *)angles - (char *)anglesError;
  _RSI = anglesError;
  __asm { vmovaps xmmword ptr [rax-78h], xmm10 }
  v15 = 0;
  __asm { vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000 }
  v17 = 1;
  v18 = 0;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  do
  {
    if ( !v17 )
    {
      LODWORD(v46) = 3;
      LODWORD(v44) = v15;
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v46);
      v18 = !v19;
      if ( v19 )
        __debugbreak();
    }
    __asm { vucomiss xmm9, dword ptr [rsi] }
    if ( !v18 )
    {
      v20 = v15 < 3;
      if ( v15 >= 3 )
      {
        LODWORD(v46) = 3;
        LODWORD(v44) = v15;
        v21 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v46);
        v20 = 0;
        if ( v21 )
          __debugbreak();
      }
      __asm { vcomiss xmm8, dword ptr [rsi] }
      if ( v20 )
      {
        if ( v15 >= 3 )
        {
          LODWORD(v46) = 3;
          LODWORD(v44) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v46) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vsubss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rsi], xmm1
        }
        if ( v15 >= 3 )
        {
          LODWORD(v46) = 3;
          LODWORD(v44) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v46) )
            __debugbreak();
          LODWORD(v47) = 3;
          LODWORD(v45) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v47) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+rbp]
          vaddss  xmm0, xmm0, dword ptr [rsi]; angle
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm { vmovaps xmm6, xmm0 }
        if ( v15 >= 3 )
        {
          LODWORD(v46) = 3;
          LODWORD(v44) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v46) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsi+rbp], xmm6 }
      }
      else
      {
        if ( v15 >= 3 )
        {
          LODWORD(v46) = 3;
          LODWORD(v44) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v46) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, dword ptr [rsi] }
        _RAX = vec3_t::operator[](anglesError, v15);
        __asm
        {
          vxorps  xmm0, xmm8, xmm10
          vcomiss xmm6, xmm0
          vmovss  xmm7, dword ptr [rax]
        }
        if ( v17 )
        {
          __asm
          {
            vaddss  xmm0, xmm7, xmm8
            vmovss  dword ptr [rax], xmm0
          }
          _RBX = vec3_t::operator[](angles, v15);
          vec3_t::operator[](anglesError, v15);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vaddss  xmm0, xmm0, dword ptr [rax]; angle
          }
          *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
          __asm { vmovaps xmm6, xmm0 }
          _RAX = vec3_t::operator[](angles, v15);
          __asm { vmovss  dword ptr [rax], xmm6 }
        }
        else
        {
          _RAX = vec3_t::operator[](angles, v15);
          __asm
          {
            vaddss  xmm0, xmm7, dword ptr [rax]
            vmovss  dword ptr [rax], xmm0
          }
          *vec3_t::operator[](anglesError, v15) = 0.0;
        }
      }
    }
    ++v15;
    _RSI = (vec3_t *)((char *)_RSI + 4);
    v17 = v15 < 3;
    v18 = v15 == 3;
  }
  while ( (int)v15 < 3 );
  __asm
  {
    vmovaps xmm10, [rsp+0B8h+var_78]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm8, [rsp+0B8h+var_58]
    vmovaps xmm9, [rsp+0B8h+var_68]
  }
}

/*
==============
G_ReduceOriginError
==============
*/

void __fastcall G_ReduceOriginError(vec3_t *origin, vec3_t *originError, double maxChange)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm4, dword ptr [rdx+4]
    vmovss  xmm3, dword ptr [rdx+8]
    vmulss  xmm1, xmm0, xmm0
    vmovaps [rsp+68h+var_18], xmm6
  }
  _RBX = originError;
  __asm
  {
    vmulss  xmm0, xmm4, xmm4
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RDI = origin;
  __asm
  {
    vmovaps xmm7, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm6, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
    vcomiss xmm6, xmm0
    vmovaps [rsp+68h+var_38], xmm8
    vmovss  xmm0, dword ptr [rbx]
    vmovaps xmm1, xmm6
    vrsqrtss xmm2, xmm1, xmm6
    vmovss  xmm1, dword ptr [rdi]
    vmulss  xmm8, xmm2, xmm7
    vcomiss xmm8, cs:__real@3f800000
    vaddss  xmm7, xmm1, xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rdi], xmm7
    vaddss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  dword ptr [rdi+4], xmm1
    vaddss  xmm0, xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
  *(_QWORD *)originError->v = 0i64;
  originError->v[2] = 0.0;
  __asm
  {
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

