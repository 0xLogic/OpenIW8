/*
==============
ScrCmd_animscriptedInternal
==============
*/

void __fastcall ScrCmd_animscriptedInternal(scrContext_t *scrContext, gentity_s *ent, int bDelayForActor)
{
  ?ScrCmd_animscriptedInternal@@YAXAEAUscrContext_t@@PEAUgentity_s@@H@Z(scrContext, ent, bDelayForActor);
}

/*
==============
G_StopAnimScripted
==============
*/

void __fastcall G_StopAnimScripted(gentity_s *ent)
{
  ?G_StopAnimScripted@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GScr_HandleAnimError
==============
*/

void __fastcall GScr_HandleAnimError(scrContext_t *scrContext, int error)
{
  ?GScr_HandleAnimError@@YAXAEAUscrContext_t@@H@Z(scrContext, error);
}

/*
==============
GScr_Anim_SetAnimTree
==============
*/

void __fastcall GScr_Anim_SetAnimTree(scrContext_t *scrContext, gentity_s *ent, scr_animtree_t *animtree)
{
  ?GScr_Anim_SetAnimTree@@YAXAEAUscrContext_t@@PEAUgentity_s@@PEAUscr_animtree_t@@@Z(scrContext, ent, animtree);
}

/*
==============
Scr_FixupExtraAnimParams
==============
*/

unsigned int __fastcall Scr_FixupExtraAnimParams(scrContext_t *scrContext, unsigned int firstParamIndex, unsigned int *outGraftAnimIndex, XAnimSubTreeID *outSubTreeID, unsigned int *outAnimIndex, XAnimCurveID *outBlendCurveID)
{
  return ?Scr_FixupExtraAnimParams@@YAIAEAUscrContext_t@@IPEAIPEAW4XAnimSubTreeID@@1PEAW4XAnimCurveID@@@Z(scrContext, firstParamIndex, outGraftAnimIndex, outSubTreeID, outAnimIndex, outBlendCurveID);
}

/*
==============
DumpAnimCommand
==============
*/

void __fastcall DumpAnimCommand(const char *funcName, XAnimTree *tree, unsigned int anim, int root, float weight, float time, float rate)
{
  ?DumpAnimCommand@@YAXPEBDPEAUXAnimTree@@IHMMM@Z(funcName, tree, anim, root, weight, time, rate);
}

/*
==============
DumpAnimSetRateCommand
==============
*/

void __fastcall DumpAnimSetRateCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float rate)
{
  ?DumpAnimSetRateCommand@@YAXPEBDPEBUXAnim_s@@IHM@Z(funcName, treeanims, anim, root, rate);
}

/*
==============
ScrCmd_stopanimscripted
==============
*/

void __fastcall ScrCmd_stopanimscripted(scrContext_t *scrContext, scr_entref_t entref)
{
  ?ScrCmd_stopanimscripted@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DumpAnimSetCurveCommand
==============
*/

void __fastcall DumpAnimSetCurveCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, const char *curveName)
{
  ?DumpAnimSetCurveCommand@@YAXPEBDPEBUXAnim_s@@IH0@Z(funcName, treeanims, anim, root, curveName);
}

/*
==============
DumpAnimSetTimeCommand
==============
*/

void __fastcall DumpAnimSetTimeCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float time)
{
  ?DumpAnimSetTimeCommand@@YAXPEBDPEBUXAnim_s@@IHM@Z(funcName, treeanims, anim, root, time);
}

/*
==============
DumpAnimCommandInternal
==============
*/

void __fastcall DumpAnimCommandInternal(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float weight, float time, float rate)
{
  ?DumpAnimCommandInternal@@YAXPEBDPEBUXAnim_s@@IHMMM@Z(funcName, treeanims, anim, root, weight, time, rate);
}

/*
==============
Scr_AnimRelative
==============
*/

void __fastcall Scr_AnimRelative(scrContext_t *scrContext, scr_entref_t entref)
{
  ?Scr_AnimRelative@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
ShouldDumpAnimCommand
==============
*/

bool __fastcall ShouldDumpAnimCommand(scrContext_t *scrContext, int entNum, unsigned int verboseParamNumber)
{
  return ?ShouldDumpAnimCommand@@YA_NAEAUscrContext_t@@HI@Z(scrContext, entNum, verboseParamNumber);
}

/*
==============
GScr_SetFlaggedAnimKnob
==============
*/
void GScr_SetFlaggedAnimKnob(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetFlaggedAnimKnobLimited
==============
*/
void GScr_SetFlaggedAnimKnobLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetFlaggedAnimKnobRestart
==============
*/
void GScr_SetFlaggedAnimKnobRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetFlaggedAnimKnobLimitedRestart
==============
*/
void GScr_SetFlaggedAnimKnobLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobInternal(scrContext, entref, 2u);
}

/*
==============
GScr_SetFlaggedAnimKnobAll
==============
*/
void GScr_SetFlaggedAnimKnobAll(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobAllInternal(scrContext, entref, 1u, "illegal call to SetFlaggedAnimKnobAll()\n");
}

/*
==============
GScr_SetFlaggedAnimKnobAllRestart
==============
*/
void GScr_SetFlaggedAnimKnobAllRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimKnobAllInternal(scrContext, entref, 3u, "illegal call to SetFlaggedAnimKnobAllRestart()\n");
}

/*
==============
GScr_SetFlaggedAnim
==============
*/
void GScr_SetFlaggedAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetFlaggedAnimLimited
==============
*/
void GScr_SetFlaggedAnimLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetFlaggedAnimRestart
==============
*/
void GScr_SetFlaggedAnimRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetFlaggedAnimLimitedRestart
==============
*/
void GScr_SetFlaggedAnimLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetFlaggedAnimInternal(scrContext, entref, 2u);
}

/*
==============
GScr_UseAnimTree
==============
*/
void GScr_UseAnimTree(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  scr_animtree_t v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  scr_animtree_t animtree; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3497, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  v5.anims = Scr_GetAnimTree(scrContext, 0).anims;
  v6 = Entity->s.eType == ET_PLAYER;
  animtree.anims = v5.anims;
  if ( v6 )
  {
    v7 = SL_ConvertToString(Entity->classname);
    v8 = j_va("cannot change the animtree of classname '%s'", v7);
    Scr_Error(COM_ERR_3498, scrContext, v8);
  }
  GScr_Anim_SetAnimTree(scrContext, Entity, &animtree);
}

/*
==============
GScr_StopUseAnimTree
==============
*/
void GScr_StopUseAnimTree(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  entityType_s eType; 
  const char *v6; 
  const char *v7; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3499, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  eType = Entity->s.eType;
  if ( eType == ET_PLAYER )
  {
    v6 = SL_ConvertToString(Entity->classname);
    v7 = j_va("cannot change the animtree of classname '%s'", v6);
    Scr_Error(COM_ERR_3500, scrContext, v7);
    eType = Entity->s.eType;
  }
  Com_Printf(18, "StopUseAnimTree called on ent %i of type %i\n", (unsigned int)Entity->s.number, (unsigned int)eType);
  GScr_Anim_SetAnimTree(scrContext, Entity, NULL);
}

/*
==============
GScr_IsAnimLooping
==============
*/
void GScr_IsAnimLooping(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int index; 
  const XAnim_s *Anims; 
  bool IsLooped; 

  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  Anims = XAnimGetAnims(EntAnimTree);
  IsLooped = XAnimIsLooped(Anims, index);
  Scr_AddInt(scrContext, IsLooped);
}

/*
==============
GScr_SetAnimTime
==============
*/
void GScr_SetAnimTime(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int NumParam; 
  char v12; 
  char v13; 
  const char *v14; 
  ComErrorCode v15; 
  int v16; 
  unsigned int index; 
  unsigned int v18; 
  XAnimSubTreeID subTreeID; 
  unsigned __int64 linkPointer; 
  XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  int IsLeafNode; 
  bool v24; 
  const scrContext_t *v25; 
  int v26; 
  char *v27; 
  int time; 
  const char *AnimDebugName; 
  float fmta; 
  char *fmt; 
  unsigned __int64 line; 
  char *filename; 

  __asm
  {
    vmovaps [rsp+98h+var_48], xmm6
    vmovaps [rsp+98h+var_58], xmm7
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3501, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 1 )
  {
    if ( NumParam - 2 > 2 )
      Scr_Error(COM_ERR_3502, scrContext, "too many parameters");
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm
    {
      vcomiss xmm0, xmm7
      vmovaps xmm6, xmm0
    }
    if ( v12 )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
      v14 = "must be > 0";
      v15 = COM_ERR_3503;
LABEL_10:
      Scr_ParamError(v15, scrContext, 1u, v14);
      goto LABEL_11;
    }
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( !(v12 | v13) )
    {
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      v14 = "must be < 1";
      v15 = COM_ERR_3504;
      goto LABEL_10;
    }
  }
LABEL_11:
  v16 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  v18 = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) == VAR_ANIMATION )
  {
    v18 = index;
    linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
    line = linkPointer;
    if ( !WORD1(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, WORD1(line));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v16 = 1;
  }
  SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
  IsLeafNode = XAnimIsLeafNode(SubTreeAnims, index);
  v24 = IsLeafNode == 0;
  if ( !IsLeafNode )
    Scr_ParamError(COM_ERR_3505, scrContext, 0, "not a leaf animation");
  __asm { vucomiss xmm6, cs:__real@3f800000 }
  if ( v24 && XAnimIsLooped(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3506, scrContext, 1u, "cannot set time 1 on looping animation");
  __asm { vmovss  dword ptr [rsp+98h+fmt], xmm6 }
  XAnimSetTime(EntAnimTree, v18, subTreeID, index, fmta);
  G_FlagAnimForUpdate(Entity);
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v16 + 2) )
  {
    v25 = ScriptContext_Server();
    Scr_GetLastScriptPlace(v25, (int *)&line, (const char **)&filename);
    v26 = line;
    v27 = filename;
    time = level.time;
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, index);
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vmovq   r9, xmm3
    }
    LODWORD(fmt) = time;
    Com_Printf(19, "^3%s  ^7time=^5%.2f  ^7level time:%d  %s:%d   %s\n", AnimDebugName, *(double *)&_XMM3, fmt, v27, v26, "SetAnimTime");
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_48]
    vmovaps xmm7, [rsp+98h+var_58]
  }
}

/*
==============
GScr_SetAnimRate
==============
*/
void GScr_SetAnimRate(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  int v9; 
  unsigned int index; 
  unsigned int v11; 
  XAnimSubTreeID subTreeID; 
  unsigned __int64 linkPointer; 
  XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  const scrContext_t *v16; 
  int v17; 
  char *v18; 
  int time; 
  const char *AnimDebugName; 
  float fmta; 
  char *fmt; 
  unsigned __int64 line; 
  char *filename; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3507, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( Scr_GetNumParam(scrContext) < 2 || Scr_GetNumParam(scrContext) > 4 )
    Scr_Error(COM_ERR_3508, scrContext, "incorrect number of parameters");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm6, xmm0 }
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  v9 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  v11 = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) == VAR_ANIMATION )
  {
    v11 = index;
    linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
    line = linkPointer;
    if ( !WORD1(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, WORD1(line));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v9 = 1;
  }
  __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
  XAnimSetAnimRate(EntAnimTree, v11, subTreeID, index, fmta);
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v9 + 2) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
    v16 = ScriptContext_Server();
    Scr_GetLastScriptPlace(v16, (int *)&line, (const char **)&filename);
    v17 = line;
    v18 = filename;
    time = level.time;
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, index);
    __asm
    {
      vcvtss2sd xmm3, xmm6, xmm6
      vmovq   r9, xmm3
    }
    LODWORD(fmt) = time;
    Com_Printf(19, "^3%s  ^7rate=^5%.2f  ^7level time:%d  %s:%d   %s\n", AnimDebugName, *(double *)&_XMM3, fmt, v18, v17, "SetAnimRate");
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
GScr_SetAnimBlendCurve
==============
*/
void GScr_SetAnimBlendCurve(scrContext_t *scrContext, scr_entref_t entref)
{
  XAnimTree *EntAnimTree; 
  int v5; 
  unsigned int index; 
  unsigned int v7; 
  XAnimSubTreeID subTreeID; 
  unsigned __int64 linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  XAnimCurveID ID; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const XAnim_s *SubTreeAnims; 
  const scrContext_t *v17; 
  int v18; 
  char *v19; 
  int time; 
  const char *AnimDebugName; 
  char *fmt; 
  unsigned __int64 line; 
  char *filename; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3509, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( Scr_GetNumParam(scrContext) < 2 || Scr_GetNumParam(scrContext) > 4 )
    Scr_Error(COM_ERR_3510, scrContext, "incorrect number of parameters");
  filename = (char *)GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree((gentity_s *)filename);
  v5 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  v7 = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) == VAR_ANIMATION )
  {
    v7 = index;
    linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
    line = linkPointer;
    if ( !WORD1(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, WORD1(line));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v5 = 1;
  }
  ConstString = Scr_GetConstString(scrContext, 1u);
  ID = XAnimCurve_GetID(ConstString);
  if ( ID == CURVE_ASSET_END )
  {
    v13 = SL_ConvertToString(ConstString);
    v14 = j_va("SetAnimBlendCurve: could not find curve '%s'\n", v13);
    Scr_Error(COM_ERR_3511, scrContext, v14);
  }
  XAnimSetAnimCurve(EntAnimTree, v7, subTreeID, index, ID);
  if ( ShouldDumpAnimCommand(scrContext, *(__int16 *)filename, v5 + 2) )
  {
    v15 = SL_ConvertToString(ConstString);
    SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
    v17 = ScriptContext_Server();
    Scr_GetLastScriptPlace(v17, (int *)&line, (const char **)&filename);
    v18 = line;
    v19 = filename;
    time = level.time;
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, index);
    LODWORD(fmt) = time;
    Com_Printf(19, "^3%s  ^7curve=^5'%s'  ^7level time:%d  %s:%d   %s\n", AnimDebugName, v15, fmt, v19, v18, "SetAnimCurve");
  }
}

/*
==============
GScr_SetCustomNodeGameParameter
==============
*/
void GScr_SetCustomNodeGameParameter(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  scr_string_t ConstLowercaseString; 
  VariableType Type; 
  DObj *ServerDObjForEnt; 
  vec3_t vectorValue; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3512, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_3513, scrContext, "Invalid number of parameters.");
  ConstLowercaseString = Scr_GetConstLowercaseString(scrContext, 0);
  Type = Scr_GetType(scrContext, 1u);
  if ( !ConstLowercaseString )
    Scr_Error(COM_ERR_3514, scrContext, "Invalid parameter name.");
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3515, scrContext, "No model exists.");
  if ( Type == VAR_VECTOR )
  {
    Scr_GetVector(scrContext, 1u, &vectorValue);
    XAnimSetVec3GameParameterByName(ServerDObjForEnt, ConstLowercaseString, &vectorValue);
  }
  else if ( (unsigned __int8)(Type - 5) > 1u )
  {
    Scr_Error(COM_ERR_3516, scrContext, "Invalid value.");
  }
  else
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm { vmovaps xmm2, xmm0; value }
    XAnimSetFloatGameParameterByName(ServerDObjForEnt, ConstLowercaseString, *(float *)&_XMM2);
  }
}

/*
==============
GScr_SetCustomNodeGameParameterByte
==============
*/
void GScr_SetCustomNodeGameParameterByte(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  scr_string_t ConstLowercaseString; 
  VariableType Type; 
  DObj *ServerDObjForEnt; 
  unsigned int Int; 
  unsigned __int8 v9; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_5894, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_5700, scrContext, "Invalid number of parameters.");
  ConstLowercaseString = Scr_GetConstLowercaseString(scrContext, 0);
  Type = Scr_GetType(scrContext, 1u);
  if ( !ConstLowercaseString )
    Scr_Error(COM_ERR_5701, scrContext, "Invalid parameter name.");
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_5702, scrContext, "No model exists.");
  if ( Type == VAR_INTEGER )
  {
    Int = Scr_GetInt(scrContext, 1u);
    v9 = Int;
    if ( Int > 0xFF )
      Scr_Error(COM_ERR_5703, scrContext, "Byte value must be between 0 and 255");
    XAnimSetByteGameParameterByName(ServerDObjForEnt, ConstLowercaseString, v9);
  }
  else
  {
    Scr_Error(COM_ERR_5704, scrContext, "Invalid value.  Must be an int between 0 and 255");
  }
}

/*
==============
GScr_SetAnim
==============
*/
void GScr_SetAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetAnimLimited
==============
*/
void GScr_SetAnimLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetAnimRestart
==============
*/
void GScr_SetAnimRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetAnimLimitedRestart
==============
*/
void GScr_SetAnimLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimInternal(scrContext, entref, 2u);
}

/*
==============
ScrCmd_animscripted
==============
*/
void ScrCmd_animscripted(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3442, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( Scr_GetNumParam(scrContext) > 0xD )
    Scr_Error(COM_ERR_3443, scrContext, "too many parameters");
  if ( Scr_GetNumParam(scrContext) < 4 )
    Scr_Error(COM_ERR_3444, scrContext, "too few parameters");
  Entity = GetEntity(entref);
  ScrCmd_animscriptedInternal(scrContext, Entity, 1);
}

/*
==============
ScrCmd_stopanimscripted
==============
*/
void ScrCmd_stopanimscripted(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3445, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  G_StopAnimScripted(Entity);
}

/*
==============
GScr_ClearAnim
==============
*/
void GScr_ClearAnim(scrContext_t *scrContext, scr_entref_t entref)
{
  XAnimCurveID curveID; 
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int index; 
  int v11; 
  XAnimSubTreeID subTreeID; 
  unsigned int v14; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v18; 
  const char *v19; 
  const char *v20; 
  const XAnim_s *SubTreeAnims; 
  DObj *ServerDObjForEnt; 
  float fmt; 
  float fmta; 
  float time; 
  float objID; 
  unsigned int graftAnimIndex; 

  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3446, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  v11 = 0;
  __asm { vmovaps xmm6, xmm0 }
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v14 = 2;
  if ( Scr_GetNumParam(scrContext) > 2 && Scr_GetType(scrContext, 2u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 2u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v11 = 1;
    v14 = 3;
  }
  if ( Scr_GetNumParam(scrContext) > v14 && Scr_GetType(scrContext, v14) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v14);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v18 = Scr_GetConstString(scrContext, v14);
      v19 = SL_ConvertToString(v18);
      v20 = j_va("Invalid blend curve name '%s'", v19);
      Scr_Error(COM_ERR_3437, scrContext, v20);
    }
    ++v11;
  }
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v11 + 2) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+88h+objID], xmm0
      vxorps  xmm1, xmm1, xmm1
      vmovss  [rsp+88h+time], xmm6
      vmovss  dword ptr [rsp+88h+fmt], xmm1
    }
    DumpAnimCommandInternal("ClearAnim", SubTreeAnims, index, -1, fmt, time, objID);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  __asm { vmovss  dword ptr [rsp+88h+fmt], xmm6 }
  XAnimClearTreeGoalWeights(EntAnimTree, graftAnimIndex, subTreeID, index, fmta, 1, ServerDObjForEnt, curveID);
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
ScrCmd_animrelative
==============
*/
void ScrCmd_animrelative(scrContext_t *scrContext, scr_entref_t entref)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3451, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( Scr_GetNumParam(scrContext) > 6 )
    Scr_Error(COM_ERR_3452, scrContext, "too many parameters");
  if ( Scr_GetNumParam(scrContext) > 6 || Scr_GetNumParam(scrContext) < 4 )
    Scr_Error(COM_ERR_3453, scrContext, "Incorrect number of parameters for ScrCmd_animrelative command");
  Scr_AnimRelative(scrContext, entref);
}

/*
==============
GScr_SetAnimKnob
==============
*/
void GScr_SetAnimKnob(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetAnimKnobLimited
==============
*/
void GScr_SetAnimKnobLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetAnimKnobRestart
==============
*/
void GScr_SetAnimKnobRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetAnimKnobLimitedRestart
==============
*/
void GScr_SetAnimKnobLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobInternal(scrContext, entref, 2u);
}

/*
==============
GScr_SetAnimKnobAll
==============
*/
void GScr_SetAnimKnobAll(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobAllInternal(scrContext, entref, 1u);
}

/*
==============
GScr_SetAnimKnobAllLimited
==============
*/
void GScr_SetAnimKnobAllLimited(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobAllInternal(scrContext, entref, 0);
}

/*
==============
GScr_SetAnimKnobAllRestart
==============
*/
void GScr_SetAnimKnobAllRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobAllInternal(scrContext, entref, 3u);
}

/*
==============
GScr_SetAnimKnobAllLimitedRestart
==============
*/
void GScr_SetAnimKnobAllLimitedRestart(scrContext_t *scrContext, scr_entref_t entref)
{
  GScr_SetAnimKnobAllInternal(scrContext, entref, 2u);
}

/*
==============
GScr_GetAnimTime
==============
*/
void GScr_GetAnimTime(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int v7; 
  unsigned int index; 
  XAnimSubTreeID subTreeID; 
  XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 v13; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3467, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  v7 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_ANIMATION )
  {
    v7 = index;
    index = Scr_GetAnim(scrContext, 1u, NULL).linkPointer;
    v13 = HIWORD(index);
    if ( !HIWORD(index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)index;
    Anims = Scr_GetAnims(scrContext, v13);
    if ( (unsigned __int16)index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
  }
  SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3468, scrContext, 0, "blended nonsynchronized animation has no concept of time");
  *(double *)&_XMM0 = XAnimGetTime(EntAnimTree, v7, subTreeID, index);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
GScr_GetAnimWeight
==============
*/
void GScr_GetAnimWeight(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int v7; 
  unsigned int index; 
  XAnimSubTreeID subTreeID; 
  XAnim_s *Anims; 
  unsigned __int16 v12; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3469, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  v7 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_ANIMATION )
  {
    v7 = index;
    index = Scr_GetAnim(scrContext, 1u, NULL).linkPointer;
    v12 = HIWORD(index);
    if ( !HIWORD(index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)index;
    Anims = Scr_GetAnims(scrContext, v12);
    if ( (unsigned __int16)index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
  }
  *(double *)&_XMM0 = XAnimGetWeight(EntAnimTree, v7, subTreeID, index);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
GScr_GetAnimIKWeights
==============
*/
void GScr_GetAnimIKWeights(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  int index; 
  const DObj *ServerDObjForEnt; 
  float ikWeights[2]; 
  __int64 v11; 
  float animWeights[2]; 
  __int64 v13; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3470, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3471, scrContext, "GetAnimIKWeights: No model exists.");
  *(_QWORD *)ikWeights = 0i64;
  v11 = 0i64;
  *(_QWORD *)animWeights = 0i64;
  v13 = 0i64;
  XAnimIKGetWeightsByAnimIndex(ServerDObjForEnt, index, ikWeights, animWeights);
  Scr_MakeArray(scrContext);
  for ( _RBX = 0i64; _RBX < 4; ++_RBX )
  {
    __asm { vmovss  xmm1, [rsp+rbx*4+58h+ikWeights]; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
    Scr_AddArray(scrContext);
  }
}

/*
==============
GScr_GetAnimRate
==============
*/
void GScr_GetAnimRate(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned int v7; 
  unsigned int index; 
  XAnimSubTreeID subTreeID; 
  XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 v13; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3472, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  v7 = 0;
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > 1 && Scr_GetType(scrContext, 1u) == VAR_ANIMATION )
  {
    v7 = index;
    index = Scr_GetAnim(scrContext, 1u, NULL).linkPointer;
    v13 = HIWORD(index);
    if ( !HIWORD(index) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)index;
    Anims = Scr_GetAnims(scrContext, v13);
    if ( (unsigned __int16)index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
  }
  SubTreeAnims = XAnimGetSubTreeAnims(EntAnimTree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3473, scrContext, 0, "blended nonsynchronized animation has no concept of rate");
  *(double *)&_XMM0 = XAnimGetRate(EntAnimTree, v7, subTreeID, index);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
GScr_GetAnimAssetType
==============
*/
void GScr_GetAnimAssetType(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  XAnimTree *EntAnimTree; 
  unsigned __int16 index; 
  unsigned __int8 AssetType; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3474, scrContext, "AnimScripted entities are not supported in this game mode");
  Entity = GetEntity(entref);
  EntAnimTree = GScr_GetEntAnimTree(Entity);
  index = Scr_GetAnim(scrContext, 0, EntAnimTree).index;
  AssetType = XAnimGetAssetType(EntAnimTree, index);
  Scr_AddInt(scrContext, AssetType);
}

/*
==============
DumpAnimCommand
==============
*/
void DumpAnimCommand(const char *funcName, XAnimTree *tree, unsigned int anim, int root, float weight, float time, float rate)
{
  const XAnim_s *Anims; 

  Anims = XAnimGetAnims(tree);
  DumpAnimCommandInternal(funcName, Anims, anim, root, weight, time, rate);
}

/*
==============
DumpAnimCommandInternal
==============
*/
void DumpAnimCommandInternal(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float weight, float time, float rate)
{
  const scrContext_t *v10; 
  int v11; 
  char *v12; 
  int v13; 
  const char *AnimDebugName; 
  double v22; 
  double v23; 
  int v24; 
  int v25; 
  int line; 
  char *filename; 

  g_animSP_lastDumpCommandTime = level.time;
  v10 = ScriptContext_Server();
  Scr_GetLastScriptPlace(v10, &line, (const char **)&filename);
  v11 = line;
  v12 = filename;
  v13 = level.time;
  AnimDebugName = XAnimGetAnimDebugName(treeanims, anim);
  __asm
  {
    vmovss  xmm0, [rsp+78h+rate]
    vmovss  xmm3, [rsp+78h+weight]
    vmovss  xmm1, [rsp+78h+time]
  }
  v25 = v11;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm1, xmm1, xmm1
  }
  v24 = v13;
  __asm
  {
    vmovsd  [rsp+78h+var_50], xmm0
    vmovq   r9, xmm3
    vmovsd  [rsp+78h+var_58], xmm1
  }
  Com_Printf(19, "^3%s  ^7weight=^5%.3f ^7time=^5%.2f ^7rate=^5%.2f   ^7level time:%d  %s:%d   %s\n", AnimDebugName, *(double *)&_XMM3, v22, v23, v24, v12, v25, funcName);
}

/*
==============
DumpAnimSetCurveCommand
==============
*/
void DumpAnimSetCurveCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, const char *curveName)
{
  const scrContext_t *v8; 
  int v9; 
  char *v10; 
  int time; 
  const char *AnimDebugName; 
  int v13; 
  int v14; 
  int line; 
  char *filename; 

  v8 = ScriptContext_Server();
  Scr_GetLastScriptPlace(v8, &line, (const char **)&filename);
  v9 = line;
  v10 = filename;
  time = level.time;
  AnimDebugName = XAnimGetAnimDebugName(treeanims, anim);
  v14 = v9;
  v13 = time;
  Com_Printf(19, "^3%s  ^7curve=^5'%s'  ^7level time:%d  %s:%d   %s\n", AnimDebugName, curveName, v13, v10, v14, funcName);
}

/*
==============
DumpAnimSetRateCommand
==============
*/
void DumpAnimSetRateCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float rate)
{
  const scrContext_t *v8; 
  int v9; 
  char *v10; 
  int time; 
  const char *AnimDebugName; 
  int v16; 
  int v17; 
  int line; 
  char *filename; 

  v8 = ScriptContext_Server();
  Scr_GetLastScriptPlace(v8, &line, (const char **)&filename);
  v9 = line;
  v10 = filename;
  time = level.time;
  AnimDebugName = XAnimGetAnimDebugName(treeanims, anim);
  __asm
  {
    vmovss  xmm3, [rsp+68h+rate]
    vcvtss2sd xmm3, xmm3, xmm3
  }
  v17 = v9;
  __asm { vmovq   r9, xmm3 }
  v16 = time;
  Com_Printf(19, "^3%s  ^7rate=^5%.2f  ^7level time:%d  %s:%d   %s\n", AnimDebugName, *(double *)&_XMM3, v16, v10, v17, funcName);
}

/*
==============
DumpAnimSetTimeCommand
==============
*/
void DumpAnimSetTimeCommand(const char *funcName, const XAnim_s *treeanims, unsigned int anim, int root, float time)
{
  const scrContext_t *v8; 
  int v9; 
  char *v10; 
  int v11; 
  const char *AnimDebugName; 
  int v16; 
  int v17; 
  int line; 
  char *filename; 

  v8 = ScriptContext_Server();
  Scr_GetLastScriptPlace(v8, &line, (const char **)&filename);
  v9 = line;
  v10 = filename;
  v11 = level.time;
  AnimDebugName = XAnimGetAnimDebugName(treeanims, anim);
  __asm
  {
    vmovss  xmm3, [rsp+68h+time]
    vcvtss2sd xmm3, xmm3, xmm3
  }
  v17 = v9;
  __asm { vmovq   r9, xmm3 }
  v16 = v11;
  Com_Printf(19, "^3%s  ^7time=^5%.2f  ^7level time:%d  %s:%d   %s\n", AnimDebugName, *(double *)&_XMM3, v16, v10, v17, funcName);
}

/*
==============
GScr_Anim_SetAnimTree
==============
*/
void GScr_Anim_SetAnimTree(scrContext_t *scrContext, gentity_s *ent, scr_animtree_t *animtree)
{
  XAnimTree *pAnimTree; 
  XAnimTree *SmallTree; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 2446, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE) )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((ent->s.eType - 12) & 0xFFFD) == 0 )
      Scr_Error(COM_ERR_3522, scrContext, "Cannot set the animTree for a vehicle using the an always loaded .atr");
  }
  G_StopAnimScripted(ent);
  if ( ent->scripted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 2463, ASSERT_TYPE_ASSERT, "( !ent->scripted )", (const char *)&queryFormat, "!ent->scripted") )
    __debugbreak();
  pAnimTree = ent->pAnimTree;
  if ( animtree )
  {
    if ( pAnimTree && XAnimGetAnims(ent->pAnimTree) == animtree->anims )
      return;
    SmallTree = Com_XAnimCreateSmallTree(animtree->anims, MOVEMENT);
  }
  else
  {
    if ( !pAnimTree )
      return;
    SmallTree = NULL;
  }
  ent->pAnimTree = SmallTree;
  G_UtilsSP_DObjUpdateAndKeepHiddenPartBits(ent, ent->r.isLinked);
  if ( pAnimTree )
    Com_XAnimFreeSmallTree(pAnimTree);
  if ( ent->s.eType == ET_TURRET )
    G_Turret_SetDObjTransferFlag(ent);
}

/*
==============
GScr_HandleAnimError
==============
*/
void GScr_HandleAnimError(scrContext_t *scrContext, int error)
{
  if ( error == 1 )
  {
    Scr_Error(COM_ERR_3523, scrContext, "root anim is not an ancestor of the anim");
  }
  else if ( error == 2 )
  {
    goto LABEL_6;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 2624, ASSERT_TYPE_ASSERT, "(error == XANIM_ERROR_BAD_NOTIFY)", (const char *)&queryFormat, "error == XANIM_ERROR_BAD_NOTIFY") )
    __debugbreak();
LABEL_6:
  Scr_Error(COM_ERR_3524, scrContext, "cannot flag anim since it has 0 effective goal weight");
}

/*
==============
GScr_SetAnimInternal
==============
*/
void GScr_SetAnimInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  XAnimCurveID curveID; 
  gentity_s *Entity; 
  unsigned int NumParam; 
  char v19; 
  unsigned int index; 
  int v22; 
  XAnimSubTreeID subTreeID; 
  unsigned int v24; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const XAnim_s *SubTreeAnims; 
  const DObj *ServerDObjForEnt; 
  int bRestart; 
  int v35; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float time; 
  float timea; 
  float timeb; 
  float v45; 
  float v46; 
  float v47; 
  XAnimTree *tree; 
  void *retaddr; 
  unsigned int graftAnimIndex; 

  _RAX = &retaddr;
  curveID = LINEAR;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3517, scrContext, "AnimScripted entities are not supported in this game mode");
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm8, cs:__real@3e4ccccd
  }
  Entity = GetEntity(entref);
  __asm { vmovaps xmm7, xmm9 }
  tree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 1 )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    if ( NumParam != 2 )
    {
      if ( NumParam != 3 )
      {
        if ( NumParam - 4 > 3 )
          Scr_Error(COM_ERR_3518, scrContext, "too many parameters");
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
        __asm { vmovaps xmm9, xmm0 }
      }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm8, xmm0
      }
      if ( v19 )
        Scr_ParamError(COM_ERR_3519, scrContext, 2u, "must set nonnegative goal time");
    }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+0E8h+var_48]
      vmovaps xmm7, xmm0
    }
    if ( v19 )
      Scr_ParamError(COM_ERR_3520, scrContext, 1u, "must set nonnegative weight");
  }
  index = Scr_GetAnim(scrContext, 0, tree).index;
  v22 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v24 = 4;
  if ( Scr_GetNumParam(scrContext) > 4 && Scr_GetType(scrContext, 4u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 4u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v22 = 1;
    v24 = 5;
  }
  if ( Scr_GetNumParam(scrContext) > v24 && Scr_GetType(scrContext, v24) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v24);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v28 = Scr_GetConstString(scrContext, v24);
      v29 = SL_ConvertToString(v28);
      v30 = j_va("Invalid blend curve name '%s'", v29);
      Scr_Error(COM_ERR_3437, scrContext, v30);
    }
    ++v22;
  }
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v22 + 4) )
  {
    switch ( flags )
    {
      case 1u:
        v31 = "SetAnim";
        break;
      case 2u:
        v31 = "SetAnimLimitedRestart";
        break;
      case 3u:
        v31 = "SetAnimRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 2318, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v31 = "SetAnimLimited";
        break;
    }
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm9
      vmovss  [rsp+0E8h+time], xmm8
      vmovss  dword ptr [rsp+0E8h+fmt], xmm7
    }
    DumpAnimCommandInternal(v31, SubTreeAnims, index, -1, fmt, time, v45);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3521, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
  {
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm9
      vmovss  [rsp+0E8h+time], xmm8
      vmovss  dword ptr [rsp+0E8h+fmt], xmm7
    }
    v35 = XAnimSetCompleteGoalWeight(ServerDObjForEnt, graftAnimIndex, subTreeID, index, fmta, timea, v46, (scr_string_t)0, 0, bRestart, curveID, NULL);
  }
  else
  {
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm9
      vmovss  [rsp+0E8h+time], xmm8
      vmovss  dword ptr [rsp+0E8h+fmt], xmm7
    }
    v35 = XAnimSetGoalWeight(ServerDObjForEnt, graftAnimIndex, subTreeID, index, fmtb, timeb, v47, (scr_string_t)0, 0, bRestart, curveID, NULL);
  }
  __asm
  {
    vmovaps xmm9, [rsp+0E8h+var_78]
    vmovaps xmm8, [rsp+0E8h+var_68]
    vmovaps xmm7, [rsp+0E8h+var_58]
  }
  if ( v35 )
    GScr_HandleAnimError(scrContext, v35);
  else
    G_FlagAnimForUpdate(Entity);
}

/*
==============
GScr_SetAnimKnobAllInternal
==============
*/
void GScr_SetAnimKnobAllInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  unsigned int NumParam; 
  char v16; 
  unsigned int v18; 
  int v19; 
  XAnimSubTreeID subTreeID; 
  unsigned int v21; 
  int v22; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v25; 
  const char *v26; 
  const char *v27; 
  XAnimSubTreeID v28; 
  unsigned int v29; 
  const char *v30; 
  const XAnim_s *SubTreeAnims; 
  const DObj *ServerDObjForEnt; 
  int v33; 
  float fmt; 
  float time; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  unsigned int bRestart; 
  unsigned int graftAnimIndex; 
  int v48; 
  int linkPointer; 
  gentity_s *ent; 
  XAnimTree *tree; 
  void *retaddr; 
  XAnimCurveID curveID; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3461, scrContext, "AnimScripted entities are not supported in this game mode");
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm8, cs:__real@3e4ccccd
  }
  ent = GetEntity(entref);
  __asm { vmovaps xmm7, xmm9 }
  tree = GScr_GetEntAnimTree(ent);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 2 )
  {
    __asm
    {
      vmovaps [rsp+108h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    if ( NumParam != 3 )
    {
      if ( NumParam != 4 )
      {
        if ( NumParam - 5 > 3 )
          Scr_Error(COM_ERR_3462, scrContext, "incorrect number of parameters");
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
        __asm { vmovaps xmm9, xmm0 }
      }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm8, xmm0
      }
      if ( v16 )
        Scr_ParamError(COM_ERR_3463, scrContext, 3u, "must set nonnegative goal time");
    }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+108h+var_48]
      vmovaps xmm7, xmm0
    }
    if ( v16 )
      Scr_ParamError(COM_ERR_3464, scrContext, 2u, "must set nonnegative weight");
  }
  linkPointer = Scr_GetAnim(scrContext, 1u, tree).linkPointer;
  v48 = Scr_GetAnim(scrContext, 0, tree).linkPointer;
  v18 = (unsigned __int16)v48;
  v19 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v21 = 5;
  if ( Scr_GetNumParam(scrContext) > 5 && Scr_GetType(scrContext, 5u) == VAR_ANIMATION )
  {
    graftAnimIndex = (unsigned __int16)v48;
    v22 = Scr_GetAnim(scrContext, 5u, NULL).linkPointer;
    if ( !HIWORD(v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    v18 = (unsigned __int16)v22;
    Anims = Scr_GetAnims(scrContext, HIWORD(v22));
    if ( v18 >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v21 = 6;
    v19 = 1;
  }
  if ( Scr_GetNumParam(scrContext) > v21 && Scr_GetType(scrContext, v21) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v21);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v25 = Scr_GetConstString(scrContext, v21);
      v26 = SL_ConvertToString(v25);
      v27 = j_va("Invalid blend curve name '%s'", v26);
      Scr_Error(COM_ERR_3437, scrContext, v27);
    }
    ++v19;
  }
  v28 = XANIM_SUBTREE_DEFAULT;
  if ( v19 && HIWORD(linkPointer) != HIWORD(v48) )
    v28 = subTreeID;
  v29 = (unsigned __int16)linkPointer;
  if ( (unsigned __int16)linkPointer == v18 && v28 == subTreeID )
    Scr_Error(COM_ERR_3465, scrContext, "root anim is not an ancestor of the anim");
  if ( ShouldDumpAnimCommand(scrContext, ent->s.number, v19 + 5) )
  {
    switch ( flags )
    {
      case 1u:
        v30 = "SetAnimKnobAll";
        break;
      case 2u:
        v30 = "SetAnimKnobAllLimitedRestart";
        break;
      case 3u:
        v30 = "SetAnimKnobAllRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 880, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v30 = "SetAnimKnobAllLimited";
        break;
    }
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    __asm { vmovss  [rsp+108h+var_D8], xmm9 }
    v29 = (unsigned __int16)linkPointer;
    __asm
    {
      vmovss  [rsp+108h+time], xmm8
      vmovss  dword ptr [rsp+108h+fmt], xmm7
    }
    DumpAnimCommandInternal(v30, SubTreeAnims, v18, (unsigned __int16)linkPointer, fmt, time, v39);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3466, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
  {
    __asm
    {
      vmovss  [rsp+108h+var_C8], xmm9
      vmovss  [rsp+108h+var_D0], xmm8
      vmovss  [rsp+108h+var_D8], xmm7
    }
    v33 = XAnimSetCompleteGoalWeightKnobAll(ServerDObjForEnt, graftAnimIndex, subTreeID, v18, v28, v29, v40, v42, v44, (scr_string_t)0, bRestart, curveID);
  }
  else
  {
    __asm
    {
      vmovss  [rsp+108h+var_C8], xmm9
      vmovss  [rsp+108h+var_D0], xmm8
      vmovss  [rsp+108h+var_D8], xmm7
    }
    v33 = XAnimSetGoalWeightKnobAll(ServerDObjForEnt, graftAnimIndex, subTreeID, v18, v28, v29, v41, v43, v45, (scr_string_t)0, bRestart, curveID);
  }
  __asm
  {
    vmovaps xmm9, [rsp+108h+var_78]
    vmovaps xmm8, [rsp+108h+var_68]
    vmovaps xmm7, [rsp+108h+var_58]
  }
  if ( v33 )
    GScr_HandleAnimError(scrContext, v33);
  else
    G_FlagAnimForUpdate(ent);
}

/*
==============
GScr_SetAnimKnobInternal
==============
*/
void GScr_SetAnimKnobInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  XAnimCurveID curveID; 
  gentity_s *Entity; 
  unsigned int NumParam; 
  char v19; 
  unsigned int index; 
  int v22; 
  XAnimSubTreeID subTreeID; 
  unsigned int v24; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const XAnim_s *SubTreeAnims; 
  const DObj *ServerDObjForEnt; 
  int bRestart; 
  int v35; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float time; 
  float timea; 
  float timeb; 
  float v45; 
  float v46; 
  float v47; 
  XAnimTree *tree; 
  void *retaddr; 
  unsigned int graftAnimIndex; 

  _RAX = &retaddr;
  curveID = LINEAR;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3456, scrContext, "AnimScripted entities are not supported in this game mode");
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm8, cs:__real@3e4ccccd
  }
  Entity = GetEntity(entref);
  __asm { vmovaps xmm7, xmm9 }
  tree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 1 )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    if ( NumParam != 2 )
    {
      if ( NumParam != 3 )
      {
        if ( NumParam - 4 > 3 )
          Scr_Error(COM_ERR_3457, scrContext, "too many parameters");
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
        __asm { vmovaps xmm9, xmm0 }
      }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm8, xmm0
      }
      if ( v19 )
        Scr_ParamError(COM_ERR_3458, scrContext, 2u, "must set nonnegative goal time");
    }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+0E8h+var_48]
      vmovaps xmm7, xmm0
    }
    if ( v19 )
      Scr_ParamError(COM_ERR_3459, scrContext, 1u, "must set nonnegative weight");
  }
  index = Scr_GetAnim(scrContext, 0, tree).index;
  v22 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v24 = 4;
  if ( Scr_GetNumParam(scrContext) > 4 && Scr_GetType(scrContext, 4u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 4u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v22 = 1;
    v24 = 5;
  }
  if ( Scr_GetNumParam(scrContext) > v24 && Scr_GetType(scrContext, v24) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v24);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v28 = Scr_GetConstString(scrContext, v24);
      v29 = SL_ConvertToString(v28);
      v30 = j_va("Invalid blend curve name '%s'", v29);
      Scr_Error(COM_ERR_3437, scrContext, v30);
    }
    ++v22;
  }
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v22 + 4) )
  {
    switch ( flags )
    {
      case 1u:
        v31 = "SetAnimKnob";
        break;
      case 2u:
        v31 = "SetAnimKnobLimitedRestart";
        break;
      case 3u:
        v31 = "SetAnimKnobRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 652, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v31 = "SetAnimKnobLimited";
        break;
    }
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm9
      vmovss  [rsp+0E8h+time], xmm8
      vmovss  dword ptr [rsp+0E8h+fmt], xmm7
    }
    DumpAnimCommandInternal(v31, SubTreeAnims, index, -1, fmt, time, v45);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3460, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
  {
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm9
      vmovss  [rsp+0E8h+time], xmm8
      vmovss  dword ptr [rsp+0E8h+fmt], xmm7
    }
    v35 = XAnimSetCompleteGoalWeightKnob(ServerDObjForEnt, graftAnimIndex, subTreeID, index, fmta, timea, v46, (scr_string_t)0, 0, bRestart, curveID);
  }
  else
  {
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm9
      vmovss  [rsp+0E8h+time], xmm8
      vmovss  dword ptr [rsp+0E8h+fmt], xmm7
    }
    v35 = XAnimSetGoalWeightKnob(ServerDObjForEnt, graftAnimIndex, subTreeID, index, fmtb, timeb, v47, (scr_string_t)0, bRestart, curveID);
  }
  __asm
  {
    vmovaps xmm9, [rsp+0E8h+var_78]
    vmovaps xmm8, [rsp+0E8h+var_68]
    vmovaps xmm7, [rsp+0E8h+var_58]
  }
  if ( v35 )
    GScr_HandleAnimError(scrContext, v35);
  else
    G_FlagAnimForUpdate(Entity);
}

/*
==============
GScr_SetFlaggedAnimInternal
==============
*/
void GScr_SetFlaggedAnimInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  XAnimCurveID curveID; 
  gentity_s *Entity; 
  unsigned int NumParam; 
  char v19; 
  unsigned int index; 
  int v21; 
  XAnimSubTreeID subTreeID; 
  unsigned int v23; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v27; 
  const char *v28; 
  const char *v29; 
  const XAnim_s *SubTreeAnims; 
  const char *v31; 
  const XAnim_s *v32; 
  const DObj *ServerDObjForEnt; 
  bool v34; 
  int v35; 
  float fmta; 
  float fmt; 
  float timea; 
  float time; 
  float v45; 
  float v46; 
  unsigned int bRestart; 
  XAnimTree *tree; 
  char v49; 
  void *retaddr; 
  scr_string_t notifyName; 
  unsigned int graftAnimIndex; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3490, scrContext, "AnimScripted entities are not supported int this game mode");
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm8, cs:__real@3e4ccccd
  }
  Entity = GetEntity(entref);
  __asm { vmovaps xmm6, xmm7 }
  tree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( NumParam != 2 )
  {
    if ( NumParam != 3 )
    {
      if ( NumParam != 4 )
      {
        if ( NumParam - 5 > 3 )
          Scr_Error(COM_ERR_3491, scrContext, "incorrect number of parameters");
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
        __asm
        {
          vcomiss xmm0, xmm9
          vmovaps xmm7, xmm0
        }
        if ( v19 )
          Scr_ParamError(COM_ERR_3492, scrContext, 4u, "must set nonnegative rate for flagged anims");
      }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
      __asm
      {
        vcomiss xmm0, xmm9
        vmovaps xmm8, xmm0
      }
      if ( v19 )
        Scr_ParamError(COM_ERR_3493, scrContext, 3u, "must set nonnegative goal time");
    }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm
    {
      vcomiss xmm0, xmm9
      vmovaps xmm6, xmm0
    }
    if ( v19 | v34 )
      Scr_ParamError(COM_ERR_3494, scrContext, 2u, "must set positive weight");
  }
  index = Scr_GetAnim(scrContext, 1u, tree).index;
  notifyName = Scr_GetConstString(scrContext, 0);
  v21 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v23 = 5;
  if ( Scr_GetNumParam(scrContext) > 5 && Scr_GetType(scrContext, 5u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 5u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v21 = 1;
    v23 = 6;
  }
  if ( Scr_GetNumParam(scrContext) > v23 && Scr_GetType(scrContext, v23) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v23);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v27 = Scr_GetConstString(scrContext, v23);
      v28 = SL_ConvertToString(v27);
      v29 = j_va("Invalid blend curve name '%s'", v28);
      Scr_Error(COM_ERR_3437, scrContext, v29);
    }
    ++v21;
  }
  if ( !notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1672, ASSERT_TYPE_ASSERT, "(notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3495, scrContext, 1u, "blended nonsynchronized animation has no concept of time");
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v21 + 5) )
  {
    switch ( flags )
    {
      case 1u:
        v31 = "SetFlaggedAnim";
        break;
      case 2u:
        v31 = "SetFlaggedAnimLimitedRestart";
        break;
      case 3u:
        v31 = "SetFlaggedAnimRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1696, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v31 = "SetFlaggedAnimLimited";
        break;
    }
    v32 = XAnimGetSubTreeAnims(tree, subTreeID);
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm7
      vmovss  [rsp+0E8h+time], xmm8
      vmovss  dword ptr [rsp+0E8h+fmt], xmm6
    }
    DumpAnimCommandInternal(v31, v32, index, -1, fmta, timea, v45);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  v34 = ServerDObjForEnt == NULL;
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3496, scrContext, "No model exists.");
  __asm { vucomiss xmm6, xmm9 }
  if ( v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1709, ASSERT_TYPE_ASSERT, "(goalWeight)", (const char *)&queryFormat, "goalWeight") )
    __debugbreak();
  bRestart = (flags >> 1) & 1;
  __asm
  {
    vmovss  [rsp+0E8h+var_B8], xmm7
    vmovss  [rsp+0E8h+time], xmm8
    vmovss  dword ptr [rsp+0E8h+fmt], xmm6
  }
  if ( (flags & 1) != 0 )
    v35 = XAnimSetCompleteGoalWeight(ServerDObjForEnt, graftAnimIndex, subTreeID, index, fmt, time, v46, notifyName, 0, bRestart, curveID, NULL);
  else
    v35 = XAnimSetGoalWeight(ServerDObjForEnt, graftAnimIndex, subTreeID, index, fmt, time, v46, notifyName, 0, bRestart, curveID, NULL);
  if ( v35 )
    GScr_HandleAnimError(scrContext, v35);
  else
    G_FlagAnimForUpdate(Entity);
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
GScr_SetFlaggedAnimKnobAllInternal
==============
*/
void GScr_SetFlaggedAnimKnobAllInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags, const char *usage)
{
  unsigned int NumParam; 
  char v19; 
  char v21; 
  XAnimSubTreeID v22; 
  unsigned int v23; 
  int v24; 
  XAnimSubTreeID subTreeID; 
  unsigned int v26; 
  int v27; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v30; 
  const char *v31; 
  const char *v32; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v34; 
  unsigned int v35; 
  gentity_s *v36; 
  const char *v37; 
  const XAnim_s *v38; 
  const DObj *ServerDObjForEnt; 
  int v40; 
  float fmt; 
  float time; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  unsigned int bRestart; 
  scr_string_t notifyName; 
  unsigned int graftAnimIndex; 
  XAnimTree *tree; 
  gentity_s *ent; 
  int v55; 
  int linkPointer; 
  void *retaddr; 
  XAnimCurveID curveID; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  curveID = LINEAR;
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3482, scrContext, "AnimScripted entities are not supported in this game mode");
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm9, cs:__real@3e4ccccd
  }
  ent = GetEntity(entref);
  __asm { vmovaps xmm8, xmm7 }
  tree = GScr_GetEntAnimTree(ent);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 3 )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    if ( NumParam != 4 )
    {
      if ( NumParam != 5 )
      {
        if ( NumParam - 6 > 3 )
          Scr_Error(COM_ERR_3483, scrContext, usage);
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 5u);
        __asm
        {
          vcomiss xmm0, xmm6
          vmovaps xmm7, xmm0
        }
        if ( v19 )
          Scr_ParamError(COM_ERR_3484, scrContext, 5u, "must set nonnegative rate for flagged anims");
      }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm9, xmm0
      }
      if ( v19 )
        Scr_ParamError(COM_ERR_3485, scrContext, 4u, "must set nonnegative goal time");
    }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+0F8h+var_38]
      vmovaps xmm8, xmm0
    }
    if ( v19 | v21 )
      Scr_ParamError(COM_ERR_3486, scrContext, 3u, "must set positive weight");
  }
  linkPointer = Scr_GetAnim(scrContext, 2u, tree).linkPointer;
  v55 = Scr_GetAnim(scrContext, 1u, tree).linkPointer;
  v22 = XANIM_SUBTREE_DEFAULT;
  v23 = (unsigned __int16)v55;
  notifyName = Scr_GetConstString(scrContext, 0);
  v24 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v26 = 6;
  if ( Scr_GetNumParam(scrContext) > 6 && Scr_GetType(scrContext, 6u) == VAR_ANIMATION )
  {
    graftAnimIndex = (unsigned __int16)v55;
    v27 = Scr_GetAnim(scrContext, 6u, NULL).linkPointer;
    if ( !HIWORD(v27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    v23 = (unsigned __int16)v27;
    Anims = Scr_GetAnims(scrContext, HIWORD(v27));
    if ( v23 >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v26 = 7;
    v24 = 1;
  }
  if ( Scr_GetNumParam(scrContext) > v26 && Scr_GetType(scrContext, v26) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v26);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v30 = Scr_GetConstString(scrContext, v26);
      v31 = SL_ConvertToString(v30);
      v32 = j_va("Invalid blend curve name '%s'", v31);
      Scr_Error(COM_ERR_3437, scrContext, v32);
    }
    ++v24;
  }
  if ( v24 && HIWORD(linkPointer) != HIWORD(v55) )
    v22 = subTreeID;
  if ( !notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1495, ASSERT_TYPE_ASSERT, "(notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, v23) )
    Scr_ParamError(COM_ERR_3487, scrContext, 1u, "blended nonsynchronized animation has no concept of time");
  v34 = (unsigned __int16)linkPointer;
  if ( (unsigned __int16)linkPointer == v23 && v22 == subTreeID )
    Scr_Error(COM_ERR_3488, scrContext, "root anim is not an ancestor of the anim");
  v35 = v24 + 6;
  v36 = ent;
  if ( ShouldDumpAnimCommand(scrContext, ent->s.number, v35) )
  {
    if ( flags == 3 )
    {
      v37 = "SetFlaggedAnimKnobAllRestart";
    }
    else
    {
      if ( flags != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1523, ASSERT_TYPE_ASSERT, "(flags == (1 << 0))", (const char *)&queryFormat, "flags == ANIM_FLAG_COMPLETE") )
        __debugbreak();
      v37 = "SetFlaggedAnimKnobAll";
    }
    v38 = XAnimGetSubTreeAnims(tree, subTreeID);
    __asm { vmovss  [rsp+0F8h+var_C8], xmm7 }
    v34 = (unsigned __int16)linkPointer;
    __asm
    {
      vmovss  [rsp+0F8h+time], xmm9
      vmovss  dword ptr [rsp+0F8h+fmt], xmm8
    }
    DumpAnimCommandInternal(v37, v38, v23, (unsigned __int16)linkPointer, fmt, time, v46);
    v36 = ent;
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(v36);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3489, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  __asm
  {
    vmovss  [rsp+0F8h+var_B8], xmm7
    vmovss  [rsp+0F8h+var_C0], xmm9
    vmovss  [rsp+0F8h+var_C8], xmm8
  }
  if ( (flags & 1) != 0 )
    v40 = XAnimSetCompleteGoalWeightKnobAll(ServerDObjForEnt, graftAnimIndex, subTreeID, v23, v22, v34, v47, v48, v49, notifyName, bRestart, curveID);
  else
    v40 = XAnimSetGoalWeightKnobAll(ServerDObjForEnt, graftAnimIndex, subTreeID, v23, v22, v34, v47, v48, v49, notifyName, bRestart, curveID);
  __asm
  {
    vmovaps xmm9, [rsp+0F8h+var_68]
    vmovaps xmm8, [rsp+0F8h+var_58]
    vmovaps xmm7, [rsp+0F8h+var_48]
  }
  if ( v40 )
    GScr_HandleAnimError(scrContext, v40);
  else
    G_FlagAnimForUpdate(v36);
}

/*
==============
GScr_SetFlaggedAnimKnobInternal
==============
*/
void GScr_SetFlaggedAnimKnobInternal(scrContext_t *scrContext, scr_entref_t entref, unsigned int flags)
{
  XAnimCurveID curveID; 
  gentity_s *Entity; 
  unsigned int NumParam; 
  char v19; 
  char v21; 
  unsigned int index; 
  int v23; 
  XAnimSubTreeID subTreeID; 
  unsigned int v25; 
  int linkPointer; 
  XAnim_s *Anims; 
  scr_string_t ConstString; 
  scr_string_t v29; 
  const char *v30; 
  const char *v31; 
  const XAnim_s *SubTreeAnims; 
  const char *v33; 
  const XAnim_s *v34; 
  const DObj *ServerDObjForEnt; 
  int bRestart; 
  int v37; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float time; 
  float timea; 
  float timeb; 
  float v47; 
  float v48; 
  float v49; 
  XAnimTree *tree; 
  void *retaddr; 
  scr_string_t notifyName; 
  unsigned int graftAnimIndex; 

  _RAX = &retaddr;
  curveID = LINEAR;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3475, scrContext, "AnimScripted entities are not supported in this game mode");
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm9, cs:__real@3e4ccccd
  }
  Entity = GetEntity(entref);
  __asm { vmovaps xmm8, xmm7 }
  tree = GScr_GetEntAnimTree(Entity);
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam != 2 )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    if ( NumParam != 3 )
    {
      if ( NumParam != 4 )
      {
        if ( NumParam - 5 > 3 )
          Scr_Error(COM_ERR_3476, scrContext, "too many parameters");
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
        __asm
        {
          vcomiss xmm0, xmm6
          vmovaps xmm7, xmm0
        }
        if ( v19 )
          Scr_ParamError(COM_ERR_3477, scrContext, 4u, "must set nonnegative rate for flagged anims");
      }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm9, xmm0
      }
      if ( v19 )
        Scr_ParamError(COM_ERR_3478, scrContext, 3u, "must set nonnegative goal time");
    }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+0E8h+var_48]
      vmovaps xmm8, xmm0
    }
    if ( v19 | v21 )
      Scr_ParamError(COM_ERR_3479, scrContext, 2u, "must set positive weight");
  }
  index = Scr_GetAnim(scrContext, 1u, tree).index;
  notifyName = Scr_GetConstString(scrContext, 0);
  v23 = 0;
  graftAnimIndex = 0;
  subTreeID = XANIM_SUBTREE_DEFAULT;
  v25 = 5;
  if ( Scr_GetNumParam(scrContext) > 5 && Scr_GetType(scrContext, 5u) == VAR_ANIMATION )
  {
    graftAnimIndex = index;
    linkPointer = Scr_GetAnim(scrContext, 5u, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    index = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( index >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v23 = 1;
    v25 = 6;
  }
  if ( Scr_GetNumParam(scrContext) > v25 && Scr_GetType(scrContext, v25) == VAR_STRING )
  {
    ConstString = Scr_GetConstString(scrContext, v25);
    curveID = XAnimCurve_GetID(ConstString);
    if ( curveID == CURVE_ASSET_END )
    {
      v29 = Scr_GetConstString(scrContext, v25);
      v30 = SL_ConvertToString(v29);
      v31 = j_va("Invalid blend curve name '%s'", v30);
      Scr_Error(COM_ERR_3437, scrContext, v31);
    }
    ++v23;
  }
  if ( !notifyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1264, ASSERT_TYPE_ASSERT, "(notifyName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "notifyName != NULL_SCR_STRING") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
  if ( !XAnimHasTime(SubTreeAnims, index) )
    Scr_ParamError(COM_ERR_3480, scrContext, 1u, "blended nonsynchronized animation has no concept of time");
  if ( ShouldDumpAnimCommand(scrContext, Entity->s.number, v23 + 5) )
  {
    switch ( flags )
    {
      case 1u:
        v33 = "SetFlaggedAnimKnob";
        break;
      case 2u:
        v33 = "SetFlaggedAnimKnobLimitedRestart";
        break;
      case 3u:
        v33 = "SetFlaggedAnimKnobRestart";
        break;
      default:
        if ( flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 1294, ASSERT_TYPE_ASSERT, "(flags == 0)", (const char *)&queryFormat, "flags == 0") )
          __debugbreak();
        v33 = "SetFlaggedAnimKnobLimited";
        break;
    }
    v34 = XAnimGetSubTreeAnims(tree, subTreeID);
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm7
      vmovss  [rsp+0E8h+time], xmm9
      vmovss  dword ptr [rsp+0E8h+fmt], xmm8
    }
    DumpAnimCommandInternal(v33, v34, index, -1, fmt, time, v47);
  }
  ServerDObjForEnt = Com_GetServerDObjForEnt(Entity);
  if ( !ServerDObjForEnt )
    Scr_ObjectError(COM_ERR_3481, scrContext, "No model exists.");
  bRestart = (flags >> 1) & 1;
  if ( (flags & 1) != 0 )
  {
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm7
      vmovss  [rsp+0E8h+time], xmm9
      vmovss  dword ptr [rsp+0E8h+fmt], xmm8
    }
    v37 = XAnimSetCompleteGoalWeightKnob(ServerDObjForEnt, graftAnimIndex, subTreeID, index, fmta, timea, v48, notifyName, 0, bRestart, curveID);
  }
  else
  {
    __asm
    {
      vmovss  [rsp+0E8h+var_B8], xmm7
      vmovss  [rsp+0E8h+time], xmm9
      vmovss  dword ptr [rsp+0E8h+fmt], xmm8
    }
    v37 = XAnimSetGoalWeightKnob(ServerDObjForEnt, graftAnimIndex, subTreeID, index, fmtb, timeb, v49, notifyName, bRestart, curveID);
  }
  __asm
  {
    vmovaps xmm9, [rsp+0E8h+var_78]
    vmovaps xmm8, [rsp+0E8h+var_68]
    vmovaps xmm7, [rsp+0E8h+var_58]
  }
  if ( v37 )
    GScr_HandleAnimError(scrContext, v37);
  else
    G_FlagAnimForUpdate(Entity);
}

/*
==============
G_StopAnimScripted
==============
*/
void G_StopAnimScripted(gentity_s *ent)
{
  actor_s *actor; 
  EntityAnimScript *scripted; 
  XAnimTree *EntAnimTree; 
  const dvar_t *v8; 
  const DObj *ServerDObjForEnt; 
  bool v16; 
  float fmt; 
  float fmta; 
  float time; 
  float timea; 
  float rate; 
  float ratea; 
  AIActorInterface v23; 
  AIActorInterface *v24; 

  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
  {
    actor = ent->actor;
    if ( actor )
    {
      AIActorInterface::AIActorInterface(&v23);
      v24 = NULL;
      AIActorInterface::SetActor(&v23, actor);
      v24 = &v23;
      if ( actor->eSimulatedState[actor->simulatedStateLevel] == AIS_SCRIPTEDANIM )
        AIScriptedInterface::PopState(&v23);
    }
  }
  scripted = ent->scripted;
  if ( scripted )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 352, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    if ( scripted->anim )
    {
      __asm
      {
        vmovaps [rsp+0C8h+var_18], xmm6
        vmovaps [rsp+0C8h+var_28], xmm7
        vmovaps [rsp+0C8h+var_38], xmm8
      }
      EntAnimTree = GScr_GetEntAnimTree(ent);
      if ( !EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 358, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
        __debugbreak();
      v8 = DVARINT_g_dumpAnimsCommands;
      if ( !DVARINT_g_dumpAnimsCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnimsCommands") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovss  xmm7, cs:__real@3e4ccccd
        vxorps  xmm8, xmm8, xmm8
      }
      if ( v8->current.integer == ent->s.number )
      {
        __asm
        {
          vmovss  [rsp+0C8h+rate], xmm6
          vmovss  [rsp+0C8h+time], xmm7
          vmovss  dword ptr [rsp+0C8h+fmt], xmm8
        }
        DumpAnimCommandInternal("stopanimscripted", EntAnimTree->anims, scripted->anim, -1, fmt, time, rate);
      }
      ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
      if ( ServerDObjForEnt )
      {
        __asm
        {
          vmovss  [rsp+0C8h+rate], xmm6
          vmovss  [rsp+0C8h+time], xmm7
          vmovss  dword ptr [rsp+0C8h+fmt], xmm8
        }
        XAnimSetCompleteGoalWeight(ServerDObjForEnt, 0, XANIM_SUBTREE_DEFAULT, scripted->anim, fmta, timea, ratea, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
      __asm
      {
        vmovaps xmm7, [rsp+0C8h+var_28]
        vmovaps xmm6, [rsp+0C8h+var_18]
        vmovaps xmm8, [rsp+0C8h+var_38]
      }
    }
    MT_Free(scripted, 0x60ui64);
    v16 = ent->s.eType == ET_SCRIPTMOVER;
    ent->scripted = NULL;
    if ( v16 )
      ent->s.lerp.u.anonymous.data[2] &= ~0x40u;
  }
}

/*
==============
ScrCmd_animscriptedInternal
==============
*/
void ScrCmd_animscriptedInternal(scrContext_t *scrContext, gentity_s *ent, int bDelayForActor)
{
  unsigned __int64 linkPointer; 
  int NumParam; 
  unsigned __int16 v20; 
  scr_string_t v21; 
  scr_string_t ConstString; 
  const char *v26; 
  const char *v27; 
  scr_anim_t v28; 
  unsigned __int64 v29; 
  actor_s *actor; 
  const char *v31; 
  scr_string_t targetname; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  actor_s *v36; 
  EntityAnimScript *scripted; 
  scr_string_t v44; 
  unsigned int v45; 
  EntityTagInfo *tagInfo; 
  EntityTagInfo *v54; 
  float fmt; 
  float fmta; 
  float time; 
  float timea; 
  float v59; 
  float v60; 
  float notifyType; 
  int bRestart; 
  unsigned __int64 v63; 
  scr_string_t value; 
  const char *weight; 
  actor_s *pActor; 
  const char *goalTime; 
  XAnimTree *EntAnimTree; 
  DObj *obj; 
  AIActorInterface v71; 
  AIActorInterface *v72; 
  vec3_t vectorValue; 
  vec3_t origin; 
  tmat43_t<vec3_t> parentAxis; 
  void *retaddr; 

  _R11 = &retaddr;
  linkPointer = UNDEFINED_ANIM_2.linkPointer;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm11, xmm11, xmm11
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3438, scrContext, "AnimScripted entities are not supported in this game mode");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 125, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  obj = Com_GetServerDObjForEnt(ent);
  if ( !obj )
    Scr_ObjectError(COM_ERR_3439, scrContext, "No model exists.");
  EntAnimTree = GScr_GetEntAnimTree(ent);
  if ( !EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 131, ASSERT_TYPE_ASSERT, "( pAnimTree )", (const char *)&queryFormat, "pAnimTree") )
    __debugbreak();
  __asm { vmovaps [rsp+1C8h+var_58], xmm7 }
  LODWORD(v63) = 0;
  v20 = 0;
  v21 = 0;
  if ( NumParam <= 6 )
  {
    __asm { vmovss  xmm7, cs:__real@3e4ccccd }
  }
  else
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 6u);
    __asm { vmovaps xmm7, xmm0 }
  }
  __asm
  {
    vmovaps [rsp+1C8h+var_48], xmm6
    vmovss  xmm9, cs:__real@3f800000
  }
  if ( NumParam <= 7 )
  {
    __asm { vmovaps xmm6, xmm9 }
  }
  else
  {
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 7u);
    __asm { vmovaps xmm6, xmm0 }
  }
  if ( NumParam <= 4 )
    goto LABEL_26;
  if ( Scr_GetType(scrContext, 4u) )
  {
    ConstString = Scr_GetConstString(scrContext, 4u);
    v21 = ConstString;
    if ( ConstString != scr_const.normal && ConstString != scr_const.deathplant )
    {
      v26 = SL_ConvertToString(ConstString);
      v27 = j_va("Illegal mode %s for animScripted. Valid modes are normal and deathplant", v26);
      Scr_Error(COM_ERR_3440, scrContext, v27);
    }
    SL_AddRefToString(v21);
  }
  if ( NumParam > 5 && Scr_GetType(scrContext, 5u) )
  {
    v63 = Scr_GetAnim(scrContext, 5u, EntAnimTree).linkPointer;
    v28 = (scr_anim_t)v63;
    v20 = v63;
  }
  else
  {
LABEL_26:
    v28 = (scr_anim_t)v63;
  }
  v29 = Scr_GetAnim(scrContext, 3u, EntAnimTree).linkPointer;
  Scr_GetVector(scrContext, 2u, &vectorValue);
  Scr_GetVector(scrContext, 1u, &origin);
  value = Scr_GetConstString(scrContext, 0);
  SL_AddRefToString(value);
  actor = ent->actor;
  pActor = actor;
  if ( !actor )
    goto LABEL_82;
  if ( !actor->Physics.bIsAlive )
  {
    v31 = SL_ConvertToString(ent->classname);
    targetname = ent->targetname;
    goalTime = v31;
    if ( targetname )
      v33 = SL_ConvertToString(targetname);
    else
      v33 = "<undefined>";
    weight = v33;
    v34 = vtos(&ent->r.currentOrigin);
    v35 = j_va("tried to play a scripted animation on a dead AI; entity %i team %i origin %s targetname %s classname %s\n", (unsigned int)ent->s.number, (unsigned int)ent->sentient->eTeam, v34, weight, goalTime);
    Scr_Error(COM_ERR_3441, scrContext, v35);
  }
  if ( bDelayForActor )
  {
    if ( NumParam > 12 )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 8u);
      __asm { vmovaps xmm8, xmm0 }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 9u);
      __asm { vmovaps xmm10, xmm0 }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0xAu);
      __asm { vmovaps xmm11, xmm0 }
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0xBu);
      __asm { vmovaps xmm12, xmm0 }
      linkPointer = Scr_GetAnim(scrContext, 0xCu, NULL).linkPointer;
    }
    AIActorInterface::AIActorInterface(&v71);
    v36 = pActor;
    v72 = NULL;
    AIActorInterface::SetActor(&v71, pActor);
    v72 = &v71;
    AIScriptedInterface::PushState(&v71, AIS_SCRIPTEDANIM);
    AIScriptedInterface::KillAnimScript(&v71);
    scripted = ent->scripted;
    if ( scripted && scripted->anim )
    {
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_g_dumpAnimsCommands, "g_dumpAnimsCommands") == ent->s.number )
      {
        __asm
        {
          vmovss  [rsp+1C8h+var_198], xmm6
          vmovss  [rsp+1C8h+time], xmm7
          vmovss  dword ptr [rsp+1C8h+fmt], xmm9
        }
        DumpAnimCommandInternal("animscripted", EntAnimTree->anims, ent->scripted->anim, -1, fmt, time, v59);
      }
      __asm
      {
        vmovss  [rsp+1C8h+var_198], xmm6
        vmovss  [rsp+1C8h+time], xmm7
        vmovss  dword ptr [rsp+1C8h+fmt], xmm9
      }
      XAnimSetCompleteGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ent->scripted->anim, fmta, timea, v60, (scr_string_t)0, 0, 0, LINEAR, NULL);
      G_FlagAnimForUpdate(ent);
    }
    if ( NumParam <= 12 )
    {
      Scr_AddUndefined(scrContext);
      Scr_AddUndefined(scrContext);
      Scr_AddUndefined(scrContext);
      Scr_AddUndefined(scrContext);
      Scr_AddUndefined(scrContext);
    }
    else
    {
      Scr_AddAnim(scrContext, (scr_anim_t)linkPointer);
      __asm { vmovaps xmm1, xmm12; value }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
      __asm { vmovaps xmm1, xmm11; value }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
      __asm { vmovaps xmm1, xmm10; value }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
      __asm { vmovaps xmm1, xmm8; value }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
    }
    __asm { vmovaps xmm1, xmm6; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm7; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
    if ( WORD1(v63) )
      Scr_AddAnim(scrContext, v28);
    else
      Scr_AddUndefined(scrContext);
    if ( v21 )
      Scr_AddConstString(scrContext, v21);
    else
      Scr_AddUndefined(scrContext);
    Scr_AddAnim(scrContext, (scr_anim_t)v29);
    Scr_AddVector(scrContext, vectorValue.v);
    Scr_AddVector(scrContext, origin.v);
    v44 = value;
    Scr_AddConstString(scrContext, value);
    if ( (_BYTE)GameScriptData::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_scr_data_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
      __debugbreak();
    if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    v45 = GScr_ExecEntThread(ent, GameScriptData::ms_gScriptData[1].levelscript, 0xDu);
    Scr_FreeThread(scrContext, v45);
  }
  else
  {
LABEL_82:
    if ( !WORD1(v63) && v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 254, ASSERT_TYPE_ASSERT, "(root.tree || !root.index)", (const char *)&queryFormat, "root.tree || !root.index") )
      __debugbreak();
    v44 = value;
    __asm
    {
      vmovss  [rsp+1C8h+bRestart], xmm6
      vmovss  [rsp+1C8h+notifyType], xmm7
    }
    G_Animscripted(scrContext, ent, &origin, &vectorValue, (unsigned __int16)v29, v20, value, v21 == scr_const.deathplant, notifyType, *(float *)&bRestart);
    v36 = pActor;
  }
  SL_RemoveRefToString(v44);
  __asm
  {
    vmovaps xmm12, [rsp+1C8h+var_A8]
    vmovaps xmm11, [rsp+1C8h+var_98]
    vmovaps xmm10, [rsp+1C8h+var_88]
    vmovaps xmm9, [rsp+1C8h+var_78]
    vmovaps xmm8, [rsp+1C8h+var_68]
    vmovaps xmm7, [rsp+1C8h+var_58]
    vmovaps xmm6, [rsp+1C8h+var_48]
  }
  if ( v21 )
    SL_RemoveRefToString(v21);
  tagInfo = ent->tagInfo;
  if ( tagInfo )
  {
    tagInfo->animScriptedDataInUse = 1;
    if ( !v36 || bDelayForActor )
    {
      if ( !ent->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 48, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
        __debugbreak();
      if ( !ent->tagInfo->animScriptedDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 49, ASSERT_TYPE_ASSERT, "(ent->tagInfo->animScriptedDataInUse)", "%s\n\tAttemping to use animScripted data of a linked entity that is not animscripted.\n", "ent->tagInfo->animScriptedDataInUse") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 50, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ))", "%s\n\tScripted animation data is not available in this game mode", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
        __debugbreak();
      v54 = ent->tagInfo;
      G_CalcTagParentAxis(ent, &parentAxis);
      MatrixInverseOrthogonal43(&parentAxis, (tmat43_t<vec3_t> *)&v54->extraDataUnion);
    }
  }
}

/*
==============
Scr_AnimRelative
==============
*/
void Scr_AnimRelative(scrContext_t *scrContext, scr_entref_t entref)
{
  XAnimTree *EntAnimTree; 
  __int16 v6; 
  unsigned __int16 v7; 
  scr_string_t v8; 
  scr_string_t ConstString; 
  const char *v10; 
  const char *v11; 
  unsigned __int16 index; 
  scr_string_t v13; 
  actor_s *actor; 
  scr_string_t notifyName; 
  const char *v16; 
  scr_string_t targetname; 
  const char *v18; 
  const char *v19; 
  const char *v27; 
  actor_s *v30; 
  char *fmt; 
  __int64 root; 
  float v33; 
  float v34; 
  int linkPointer; 
  vec3_t vectorValue; 
  vec3_t origin; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
    Scr_Error(COM_ERR_3447, scrContext, "AnimScripted entities are not supported in this game mode");
  _RSI = GetEntity(entref);
  if ( !Com_GetServerDObjForEnt(_RSI) )
    Scr_ObjectError(COM_ERR_3448, scrContext, "No model exists.");
  EntAnimTree = GScr_GetEntAnimTree(_RSI);
  if ( !EntAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 478, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( Scr_GetNumParam(scrContext) > 4 )
  {
    ConstString = Scr_GetConstString(scrContext, 4u);
    v8 = ConstString;
    if ( ConstString != scr_const.normal && ConstString != scr_const.deathplant )
    {
      v10 = SL_ConvertToString(ConstString);
      v11 = j_va("Illegal mode %s for animScripted. Valid modes are normal and deathplant", v10);
      Scr_Error(COM_ERR_3449, scrContext, v11);
    }
    if ( Scr_GetNumParam(scrContext) > 5 )
    {
      linkPointer = Scr_GetAnim(scrContext, 5u, EntAnimTree).linkPointer;
      v7 = linkPointer;
      v6 = HIWORD(linkPointer);
    }
  }
  index = Scr_GetAnim(scrContext, 3u, EntAnimTree).index;
  Scr_GetVector(scrContext, 2u, &vectorValue);
  Scr_GetVector(scrContext, 1u, &origin);
  v13 = Scr_GetConstString(scrContext, 0);
  actor = _RSI->actor;
  notifyName = v13;
  if ( actor && !actor->Physics.bIsAlive )
  {
    v16 = SL_ConvertToString(_RSI->classname);
    targetname = _RSI->targetname;
    v18 = v16;
    if ( targetname )
      v19 = SL_ConvertToString(targetname);
    else
      v19 = "<undefined>";
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+138h]
      vmovss  xmm3, dword ptr [rsi+130h]
      vmovss  xmm1, dword ptr [rsi+134h]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  qword ptr [rsp+0B8h+root], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+0B8h+fmt], xmm1
    }
    v27 = j_va("tried to play a scripted animation on a dead AI; entity %i team %i origin %.2f %.2f %.2f targetname %s classname %s\n", (unsigned int)_RSI->s.number, (unsigned int)_RSI->sentient->eTeam, _R9, fmt, root, v19, v18);
    Scr_Error(COM_ERR_3450, scrContext, v27);
  }
  if ( !v6 && v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 508, ASSERT_TYPE_ASSERT, "(root.tree || !root.index)", (const char *)&queryFormat, "root.tree || !root.index") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3e4ccccd
    vmovss  [rsp+0B8h+var_70], xmm0
    vmovss  [rsp+0B8h+var_78], xmm1
  }
  G_Animscripted(scrContext, _RSI, &origin, &vectorValue, index, v7, notifyName, v8 == scr_const.deathplant, v33, v34);
  v30 = _RSI->actor;
  if ( v30 )
  {
    v30->eScriptSetAnimMode = AI_ANIM_POINT_RELATIVE;
    _RSI->actor->eAnimMode = AI_ANIM_POINT_RELATIVE;
  }
}

/*
==============
Scr_FixupExtraAnimParams
==============
*/
__int64 Scr_FixupExtraAnimParams(scrContext_t *scrContext, unsigned int firstParamIndex, unsigned int *outGraftAnimIndex, XAnimSubTreeID *outSubTreeID, unsigned int *outAnimIndex, XAnimCurveID *outBlendCurveID)
{
  unsigned int v10; 
  int linkPointer; 
  XAnim_s *Anims; 
  XAnimSubTreeID subTreeID; 
  scr_string_t ConstString; 
  XAnimCurveID ID; 
  scr_string_t v16; 
  const char *v17; 
  const char *v18; 

  if ( !outSubTreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 50, ASSERT_TYPE_ASSERT, "(outSubTreeID)", (const char *)&queryFormat, "outSubTreeID") )
    __debugbreak();
  if ( !outAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 51, ASSERT_TYPE_ASSERT, "(outAnimIndex)", (const char *)&queryFormat, "outAnimIndex") )
    __debugbreak();
  if ( !outGraftAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 52, ASSERT_TYPE_ASSERT, "(outGraftAnimIndex)", (const char *)&queryFormat, "outGraftAnimIndex") )
    __debugbreak();
  if ( !outAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 53, ASSERT_TYPE_ASSERT, "(outAnimIndex)", (const char *)&queryFormat, "outAnimIndex") )
    __debugbreak();
  v10 = 0;
  *outGraftAnimIndex = 0;
  *outSubTreeID = XANIM_SUBTREE_DEFAULT;
  if ( Scr_GetNumParam(scrContext) > firstParamIndex && Scr_GetType(scrContext, firstParamIndex) == VAR_ANIMATION )
  {
    *outGraftAnimIndex = *outAnimIndex;
    linkPointer = Scr_GetAnim(scrContext, firstParamIndex, NULL).linkPointer;
    if ( !HIWORD(linkPointer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 68, ASSERT_TYPE_ASSERT, "(anim.tree)", (const char *)&queryFormat, "anim.tree") )
      __debugbreak();
    *outAnimIndex = (unsigned __int16)linkPointer;
    Anims = Scr_GetAnims(scrContext, HIWORD(linkPointer));
    if ( (unsigned __int16)linkPointer >= Anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 72, ASSERT_TYPE_ASSERT, "(anim.index < anims->size)", (const char *)&queryFormat, "anim.index < anims->size") )
      __debugbreak();
    subTreeID = Anims->subTreeID;
    *outSubTreeID = subTreeID;
    if ( subTreeID == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", (const char *)&queryFormat, "*outSubTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
      __debugbreak();
    v10 = 1;
    ++firstParamIndex;
  }
  if ( !outBlendCurveID || Scr_GetNumParam(scrContext) <= firstParamIndex || Scr_GetType(scrContext, firstParamIndex) != VAR_STRING )
    return v10;
  ConstString = Scr_GetConstString(scrContext, firstParamIndex);
  ID = XAnimCurve_GetID(ConstString);
  if ( ID == CURVE_ASSET_END )
  {
    v16 = Scr_GetConstString(scrContext, firstParamIndex);
    v17 = SL_ConvertToString(v16);
    v18 = j_va("Invalid blend curve name '%s'", v17);
    Scr_Error(COM_ERR_3437, scrContext, v18);
  }
  *outBlendCurveID = ID;
  return v10 + 1;
}

/*
==============
ShouldDumpAnimCommand
==============
*/
bool ShouldDumpAnimCommand(scrContext_t *scrContext, int entNum, unsigned int verboseParamNumber)
{
  const dvar_t *v3; 
  bool enabled; 
  const dvar_t *v8; 
  int integer; 

  v3 = DVARBOOL_g_animsCommandsVerbose;
  if ( !DVARBOOL_g_animsCommandsVerbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_animsCommandsVerbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  enabled = v3->current.enabled;
  v8 = DVARINT_g_dumpAnimsCommands;
  if ( !DVARINT_g_dumpAnimsCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnimsCommands") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  if ( enabled || Scr_GetNumParam(scrContext) - 1 < verboseParamNumber || !Scr_GetInt(scrContext, verboseParamNumber) )
    ++g_animSP_commandCounter;
  return integer == entNum && (enabled || Scr_GetNumParam(scrContext) - 1 < verboseParamNumber || !Scr_GetInt(scrContext, verboseParamNumber));
}

