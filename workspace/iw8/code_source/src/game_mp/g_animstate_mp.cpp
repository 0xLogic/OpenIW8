/*
==============
AnimStateCmd_SetAnimClass
==============
*/

void __fastcall AnimStateCmd_SetAnimClass(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_SetAnimClass@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
G_UpdateAnimationState
==============
*/

void G_UpdateAnimationState(void)
{
  ?G_UpdateAnimationState@@YAXXZ();
}

/*
==============
AnimStateCmd_GetAllAnimsForAlias
==============
*/

void __fastcall AnimStateCmd_GetAllAnimsForAlias(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_GetAllAnimsForAlias@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
AnimStateCmd_SetAnimState
==============
*/

void __fastcall AnimStateCmd_SetAnimState(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_SetAnimState@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
AnimStateCmd_GetAnimEntryName
==============
*/

void __fastcall AnimStateCmd_GetAnimEntryName(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_GetAnimEntryName@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
AnimStateCmd_EnableAnimState
==============
*/

void __fastcall AnimStateCmd_EnableAnimState(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_EnableAnimState@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
AnimStateCmd_GetAnimEntry
==============
*/

void __fastcall AnimStateCmd_GetAnimEntry(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_GetAnimEntry@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
AnimStateCmd_HasAnimAlias
==============
*/

void __fastcall AnimStateCmd_HasAnimAlias(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_HasAnimAlias@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
AnimStateCmd_GetAnimEntryCount
==============
*/

void __fastcall AnimStateCmd_GetAnimEntryCount(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_GetAnimEntryCount@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
AnimStateCmd_GetAnimIndexFromAlias
==============
*/

void __fastcall AnimStateCmd_GetAnimIndexFromAlias(scrContext_t *scrContext, scr_entref_t entref)
{
  ?AnimStateCmd_GetAnimIndexFromAlias@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
AnimStateCmd_EnableAnimState
==============
*/
void AnimStateCmd_EnableAnimState(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const playerState_s *p_ps; 
  const char *v6; 
  __int64 v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3682, scrContext, "not an entity");
    v4 = NULL;
    goto LABEL_9;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 324, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  p_ps = &v4->client->ps;
  if ( !p_ps )
  {
    p_ps = &v4->agent->playerState;
    if ( !p_ps )
    {
      v6 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_3679, scrContext, v6);
LABEL_9:
      p_ps = NULL;
    }
  }
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)v4->s.number);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 329, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( Scr_GetInt(scrContext, 0) )
  {
    *(_DWORD *)(v7 + 2568) = 1;
    v4->s.animInfo.animData = v4->s.animInfo.animData & 0xFFFC0000 | 1;
    if ( !G_SetAnimationClass(v4, "default_anim") )
      Scr_ObjectError(COM_ERR_5143, scrContext, "Trying to enable animation state machine without a default class to assign. \"default_anim\" must be present.");
    SV_AgentInitAsScripted(v4);
  }
  else
  {
    *(_DWORD *)(v7 + 2568) = 0;
    v4->s.animInfo.animData &= ~1u;
    BG_AnimationMP_PlayerToEntityAnimation(p_ps, &v4->s);
    SV_AgentInitAsBot(v4);
  }
}

/*
==============
AnimStateCmd_GetAllAnimsForAlias
==============
*/
void AnimStateCmd_GetAllAnimsForAlias(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t ConstString; 
  unsigned int v6; 
  scr_string_t v7; 
  scr_string_t AnimsetName; 
  const char *v9; 
  const char *v10; 
  const char *String; 
  const char *v12; 
  scr_string_t v13; 
  int v14; 
  unsigned int v15; 
  unsigned int numAnimAliases; 
  AnimsetAlias *animAliases; 
  __int64 v18; 
  __int64 v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  AnimsetState *outState; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_5148, scrContext, "not an entity");
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 399, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    ConstString = Scr_GetConstString(scrContext, 0);
    v6 = 0;
    outState = NULL;
    v7 = ConstString;
    AnimsetName = BG_AnimationState_GetAnimsetName(&v4->s);
    if ( !AnimsetName )
    {
      v9 = j_va("entity %i references an animset that has not been loaded", entnum);
      Scr_ObjectError(COM_ERR_5145, scrContext, v9);
    }
    BG_Animset_GetStateInfoByName(AnimsetName, v7, &outState, NULL);
    if ( !outState )
    {
      v10 = SL_ConvertToString(AnimsetName);
      String = Scr_GetString(scrContext, 0);
      v12 = j_va("animation state %s does not exist in animset %s", String, v10);
      Scr_ParamError(COM_ERR_5146, scrContext, 0, v12);
    }
    v13 = Scr_GetConstString(scrContext, 1u);
    v14 = 0;
    v15 = 0;
    numAnimAliases = outState->numAnimAliases;
    if ( numAnimAliases )
    {
      animAliases = outState->animAliases;
      while ( 1 )
      {
        v18 = v15;
        v19 = v15;
        if ( animAliases[v15].name == v13 )
          break;
        v14 += animAliases[v15++].numAnims;
        if ( v15 >= numAnimAliases )
          goto LABEL_13;
      }
      Scr_MakeArray(scrContext);
      if ( outState->animAliases[v19].numAnims )
      {
        do
        {
          Scr_AddInt(scrContext, v14);
          Scr_AddArray(scrContext);
          ++v14;
          ++v6;
        }
        while ( v6 < outState->animAliases[v18].numAnims );
      }
    }
    else
    {
LABEL_13:
      v20 = SL_ConvertToString(AnimsetName);
      v21 = Scr_GetString(scrContext, 0);
      v22 = Scr_GetString(scrContext, 1u);
      v23 = j_va("Unable to find alias %s in state %s in animset %s", v22, v21, v20);
      Scr_Error(COM_ERR_5147, scrContext, v23);
    }
  }
}

/*
==============
AnimStateCmd_GetAnimEntry
==============
*/
void AnimStateCmd_GetAnimEntry(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  __int64 v4; 
  const XAnim_s *Anims; 
  scr_string_t AnimsetName; 
  unsigned __int16 AnimsIndex; 
  int stateIndex; 
  int pOutAnimtreeIndex; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode[3]; 
  XAnimSubTreeID pOutAnimSubtreeID; 
  scr_anim_t entryIndex; 

  entnum = entref.entnum;
  if ( AnimStateCmd_GetAnimEntry_Internal(scrContext, entref, &stateIndex, (int *)&entryIndex) )
  {
    v4 = entnum;
    Anims = BG_AnimationState_GetAnims(&g_entities[v4].s);
    AnimsetName = BG_AnimationState_GetAnimsetName(&g_entities[v4].s);
    BG_Animset_GetAnimIndexFromStateIndexAndEntry(AnimsetName, stateIndex, *(_DWORD *)&entryIndex.0, &pOutAnimIndex, pOutGraftNode, &pOutAnimSubtreeID, NULL, &pOutAnimtreeIndex, 1);
    AnimsIndex = pOutAnimtreeIndex;
    if ( pOutAnimtreeIndex < 0 )
      AnimsIndex = Scr_GetAnimsIndex(Anims, 1u);
    entryIndex.tree = AnimsIndex;
    entryIndex.index = pOutAnimIndex;
    Scr_AddAnim(scrContext, entryIndex);
  }
  else
  {
    Scr_Error(COM_ERR_5160, scrContext, "could not find the specified animation entry");
  }
}

/*
==============
AnimStateCmd_GetAnimEntryCount
==============
*/
void AnimStateCmd_GetAnimEntryCount(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t ConstString; 
  scr_string_t AnimsetName; 
  const char *v7; 
  int NumEntriesForState; 
  const char *v9; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_5165, scrContext, "not an entity");
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 688, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( BG_IsCharacterEntity(&v4->s) )
    {
      ConstString = Scr_GetConstString(scrContext, 0);
      AnimsetName = BG_AnimationState_GetAnimsetName(&v4->s);
      if ( !AnimsetName )
      {
        v7 = j_va("entity %i references an animset that has not been loaded", entnum);
        Scr_ObjectError(COM_ERR_5163, scrContext, v7);
      }
      NumEntriesForState = BG_Animset_GetNumEntriesForState(AnimsetName, ConstString);
      Scr_AddInt(scrContext, NumEntriesForState);
    }
    else
    {
      v9 = j_va("entity %i is not a player or agent", entnum);
      Scr_ObjectError(COM_ERR_5164, scrContext, v9);
    }
  }
}

/*
==============
AnimStateCmd_GetAnimEntryName
==============
*/
void AnimStateCmd_GetAnimEntryName(scrContext_t *scrContext, scr_entref_t entref)
{
  int entryIndex; 
  int stateIndex; 

  if ( AnimStateCmd_GetAnimEntry_Internal(scrContext, entref, &stateIndex, &entryIndex) )
  {
    Scr_Error(COM_ERR_5161, scrContext, "not currently supported with animsets");
    Scr_AddConstString(scrContext, (scr_string_t)0);
  }
  else
  {
    Scr_Error(COM_ERR_5162, scrContext, "could not find the specified animation entry");
  }
}

/*
==============
AnimStateCmd_GetAnimEntry_Internal
==============
*/
__int64 AnimStateCmd_GetAnimEntry_Internal(scrContext_t *scrContext, scr_entref_t entref, int *stateIndex, int *entryIndex)
{
  unsigned int entnum; 
  gentity_s *v8; 
  scr_string_t ConstString; 
  scr_string_t AnimsetName; 
  scr_string_t v11; 
  const char *v12; 
  const char *v13; 
  const char *String; 
  const char *v15; 
  unsigned int v16; 
  scrContext_t *v17; 
  ComErrorCode v18; 
  VariableType Type; 
  int Int; 
  const char *v22; 
  const char *v23; 
  scr_string_t v24; 
  int IndexOfRandomAnimFromAlias; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  AnimsetState *outState; 

  outState = (AnimsetState *)entref;
  entnum = entref.entnum;
  if ( !stateIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 184, ASSERT_TYPE_ASSERT, "( stateIndex )", (const char *)&queryFormat, "stateIndex") )
    __debugbreak();
  if ( !entryIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 185, ASSERT_TYPE_ASSERT, "( entryIndex )", (const char *)&queryFormat, "entryIndex") )
    __debugbreak();
  if ( BYTE4(outState) )
  {
    Scr_ObjectError(COM_ERR_5138, scrContext, "not an entity");
    return 0i64;
  }
  if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 189, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v8 = &g_entities[entnum];
  if ( !BG_IsCharacterEntity(&v8->s) )
  {
    v29 = j_va("entity %i is not a player or agent", entnum);
    Scr_ObjectError(COM_ERR_5137, scrContext, v29);
    return 0i64;
  }
  if ( !Scr_GetNumParam(scrContext) )
  {
    *stateIndex = (v8->s.animInfo.animData >> 1) & 0x3FF;
    *entryIndex = (v8->s.animInfo.animData >> 11) & 0x7F;
    return 1i64;
  }
  ConstString = Scr_GetConstString(scrContext, 0);
  AnimsetName = BG_AnimationState_GetAnimsetName(&v8->s);
  v11 = AnimsetName;
  if ( AnimsetName )
  {
    outState = NULL;
    if ( !BG_Animset_GetStateInfoByName(AnimsetName, ConstString, &outState, stateIndex) )
    {
      v13 = SL_ConvertToString(v11);
      String = Scr_GetString(scrContext, 0);
      v15 = j_va("animation state %s does not exist in animset %s", String, v13);
      v16 = 0;
      v17 = scrContext;
      v18 = COM_ERR_5133;
LABEL_17:
      Scr_ParamError(v18, v17, v16, v15);
      return 0i64;
    }
    Type = Scr_GetType(scrContext, 1u);
    if ( Type == VAR_INTEGER )
    {
      Int = Scr_GetInt(scrContext, 1u);
      *entryIndex = Int;
      if ( Int < 0 || *entryIndex >= BG_Animset_GetNumEntriesForState(v11, ConstString) )
      {
        v22 = SL_ConvertToString(v11);
        v23 = Scr_GetString(scrContext, 0);
        v15 = j_va("animation entry %d is not a part of the state %s in animset %s", (unsigned int)*entryIndex, v23, v22);
        v16 = 1;
        v17 = scrContext;
        v18 = COM_ERR_5134;
        goto LABEL_17;
      }
    }
    else
    {
      if ( Type != VAR_STRING )
      {
        v15 = "entry must be either int or string";
        v16 = 1;
        v17 = scrContext;
        v18 = COM_ERR_5136;
        goto LABEL_17;
      }
      v24 = Scr_GetConstString(scrContext, 1u);
      IndexOfRandomAnimFromAlias = G_Animset_GetIndexOfRandomAnimFromAlias(v11, ConstString, v24);
      *entryIndex = IndexOfRandomAnimFromAlias;
      if ( IndexOfRandomAnimFromAlias < 0 )
      {
        v26 = SL_ConvertToString(v11);
        v27 = Scr_GetString(scrContext, 0);
        v28 = Scr_GetString(scrContext, 1u);
        v15 = j_va("animation entry %s is not a part of the state %s in animset %s", v28, v27, v26);
        v16 = 1;
        v17 = scrContext;
        v18 = COM_ERR_5135;
        goto LABEL_17;
      }
    }
    return 1i64;
  }
  v12 = j_va("entity %i references an animset that has not been loaded", entnum);
  Scr_ObjectError(COM_ERR_5132, scrContext, v12);
  return 0i64;
}

/*
==============
AnimStateCmd_GetAnimIndexFromAlias
==============
*/
void AnimStateCmd_GetAnimIndexFromAlias(scrContext_t *scrContext, scr_entref_t entref)
{
  int entryIndex; 
  int stateIndex; 

  if ( (unsigned int)AnimStateCmd_GetAnimEntry_Internal(scrContext, entref, &stateIndex, &entryIndex) )
    Scr_AddInt(scrContext, entryIndex);
  else
    Scr_Error(COM_ERR_5144, scrContext, "could not find the specified animation entry");
}

/*
==============
AnimStateCmd_HasAnimAlias
==============
*/
void AnimStateCmd_HasAnimAlias(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t ConstString; 
  scr_string_t AnimsetName; 
  const char *v7; 
  int v8; 
  const char *v9; 
  const char *String; 
  const char *v11; 
  scr_string_t v12; 
  int v13; 
  unsigned int numAnimAliases; 
  AnimsetAlias *animAliases; 
  int pOutStateIndex; 
  AnimsetState *outState; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_5151, scrContext, "not an entity");
LABEL_16:
    Scr_AddBool(scrContext, 0);
    return;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 468, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  ConstString = Scr_GetConstString(scrContext, 0);
  AnimsetName = BG_AnimationState_GetAnimsetName(&v4->s);
  if ( !AnimsetName )
  {
    v7 = j_va("entity %i references an animset that has not been loaded", entnum);
    Scr_ObjectError(COM_ERR_5149, scrContext, v7);
  }
  v8 = 0;
  outState = NULL;
  if ( !BG_Animset_GetStateInfoByName(AnimsetName, ConstString, &outState, &pOutStateIndex) )
  {
    v9 = SL_ConvertToString(AnimsetName);
    String = Scr_GetString(scrContext, 0);
    v11 = j_va("animation state %s does not exist in animset %s", String, v9);
    Scr_ParamError(COM_ERR_5150, scrContext, 0, v11);
  }
  v12 = Scr_GetConstString(scrContext, 1u);
  v13 = 0;
  numAnimAliases = outState->numAnimAliases;
  if ( !numAnimAliases )
    goto LABEL_16;
  animAliases = outState->animAliases;
  while ( animAliases[v13].name != v12 )
  {
    if ( ++v13 >= numAnimAliases )
      goto LABEL_16;
  }
  LOBYTE(v8) = animAliases[v13].numAnims != 0;
  Scr_AddBool(scrContext, v8);
}

/*
==============
AnimStateCmd_SetAnimClass
==============
*/
void AnimStateCmd_SetAnimClass(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *String; 
  const char *v6; 
  scrContext_t *v7; 
  ComErrorCode v8; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_5142, scrContext, "not an entity");
    return;
  }
  if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 278, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
    __debugbreak();
  v4 = &g_entities[entnum];
  if ( BG_IsCharacterEntity(&v4->s) )
  {
    if ( (*(_BYTE *)&v4->s.animInfo.selectAnim & 1) != 0 )
    {
      String = Scr_GetString(scrContext, 0);
      if ( G_SetAnimationClass(v4, String) )
        return;
      v6 = j_va("%s is not a valid anim class", String);
      v7 = scrContext;
      v8 = COM_ERR_5139;
    }
    else
    {
      v6 = j_va("Entity %d is not a using animation states. Use \"agent EnableAnimState( true )\"", entnum);
      v7 = scrContext;
      v8 = COM_ERR_5140;
    }
  }
  else
  {
    v6 = j_va("entity %i is not a player or agent", entnum);
    v7 = scrContext;
    v8 = COM_ERR_5141;
  }
  Scr_ObjectError(v8, v7, v6);
}

/*
==============
AnimStateCmd_SetAnimState
==============
*/
void AnimStateCmd_SetAnimState(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  float v5; 
  scr_string_t ConstString; 
  int Int; 
  scr_string_t AnimsetName; 
  const char *v9; 
  const char *v10; 
  const char *String; 
  const char *v12; 
  VariableType Type; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  ComErrorCode v17; 
  scr_string_t v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  double Float; 
  int v25; 
  const char *v26; 
  unsigned int pHoldrand; 
  int pOutStateIndex; 
  AnimsetState *outState; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_5159, scrContext, "not an entity");
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 527, ASSERT_TYPE_ASSERT, "( entref.entnum < ( 2048 ) )", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( BG_IsCharacterEntity(&v4->s) )
    {
      v5 = FLOAT_1_0;
      ConstString = Scr_GetConstString(scrContext, 0);
      Int = 0;
      AnimsetName = BG_AnimationState_GetAnimsetName(&v4->s);
      if ( !AnimsetName )
      {
        v9 = j_va("entity %i references an animset that has not been loaded", entnum);
        Scr_ObjectError(COM_ERR_5152, scrContext, v9);
      }
      if ( !BG_Animset_GetStateInfoByName(AnimsetName, ConstString, &outState, &pOutStateIndex) )
      {
        v10 = SL_ConvertToString(AnimsetName);
        String = Scr_GetString(scrContext, 0);
        v12 = j_va("state %s does not exist in animset %s", String, v10);
        Scr_ParamError(COM_ERR_5153, scrContext, 0, v12);
      }
      if ( Scr_GetNumParam(scrContext) <= 1 )
      {
        pHoldrand = v4->s.number * (v4->s.number + level.time);
        v25 = BG_irand(0, outState->numAnimAliases, &pHoldrand);
        Int = BG_irand(0, outState->animAliases[v25].numAnims, &pHoldrand);
LABEL_26:
        BG_AnimationState_SetState(pOutStateIndex, Int, &v4->s);
        v4->s.animInfo.animTime = level.time;
        v4->s.un.animRate = v5;
        Scr_AddInt(scrContext, Int);
        return;
      }
      Type = Scr_GetType(scrContext, 1u);
      if ( Type == VAR_INTEGER )
      {
        Int = Scr_GetInt(scrContext, 1u);
        if ( Int >= 0 && Int <= BG_Animset_GetNumEntriesForStateIndex(AnimsetName, pOutStateIndex) )
          goto LABEL_23;
        v14 = SL_ConvertToString(AnimsetName);
        v15 = Scr_GetString(scrContext, 0);
        v16 = j_va("animation entry %d is not part of state %s in animset %s", (unsigned int)Int, v15, v14);
        v17 = COM_ERR_5154;
      }
      else if ( Type == VAR_STRING )
      {
        v18 = Scr_GetConstString(scrContext, 1u);
        Int = G_Animset_GetIndexOfRandomAnimFromAlias(AnimsetName, ConstString, v18);
        if ( Int >= 0 )
          goto LABEL_23;
        v19 = SL_ConvertToString(AnimsetName);
        v20 = Scr_GetString(scrContext, 0);
        v21 = Scr_GetString(scrContext, 1u);
        v16 = j_va("animation entry %s is not part of state %s in animset %s", v21, v20, v19);
        v17 = COM_ERR_5155;
      }
      else if ( Type )
      {
        v16 = "entry must be either int, string, or undefined (to select at random)";
        v17 = COM_ERR_5157;
      }
      else
      {
        Int = G_Animset_GetIndexOfRandomAnimFromRandomAlias(AnimsetName, ConstString);
        if ( Int >= 0 )
          goto LABEL_23;
        v22 = SL_ConvertToString(AnimsetName);
        v23 = Scr_GetString(scrContext, 0);
        v16 = j_va("malformed state %s in animset %s", v23, v22);
        v17 = COM_ERR_5156;
      }
      Scr_ParamError(v17, scrContext, 1u, v16);
LABEL_23:
      if ( Scr_GetNumParam(scrContext) > 2 )
      {
        Float = Scr_GetFloat(scrContext, 2u);
        v5 = *(float *)&Float;
      }
      goto LABEL_26;
    }
    v26 = j_va("entity %i is not a player or agent", entnum);
    Scr_ObjectError(COM_ERR_5158, scrContext, v26);
  }
}

/*
==============
G_NotifyEntityAnimationState
==============
*/
void G_NotifyEntityAnimationState(gentity_s *ent)
{
  const DObj *v2; 
  const XAnimTree *Tree; 
  scr_string_t AnimsetName; 
  const Animset *v5; 
  scr_string_t Notify; 
  unsigned int AnimIndex; 
  double Time; 
  float v9; 
  double Length; 
  float v11; 
  scrContext_t *v12; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 30, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v2 = (const DObj *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 232i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)ent->s.number);
  if ( v2 )
  {
    Tree = DObjGetTree(v2);
    if ( Tree )
    {
      AnimsetName = BG_AnimationState_GetAnimsetName(&ent->s);
      if ( AnimsetName )
      {
        v5 = Animset_Find(AnimsetName);
        Notify = BG_AnimationState_GetNotify(v5, &ent->s);
        if ( Notify )
        {
          AnimIndex = BG_AnimationState_GetAnimIndex(v5, &ent->s);
          if ( XAnimIsLeafNode(Tree->anims, AnimIndex) )
          {
            Time = XAnimGetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, AnimIndex);
            v9 = *(float *)&Time;
            Length = XAnimGetLength(Tree->anims, AnimIndex);
            v11 = *(float *)&Length * v9;
            if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
              __debugbreak();
            if ( (float)(*(float *)&Length - v11) < (float)((float)level.frameDuration * 0.001) )
            {
              v12 = ScriptContext_Server();
              Scr_AddConstString(v12, scr_const.anim_will_finish);
              GScr_Notify(ent, Notify, 1u);
              Scr_RunCurrentThreads(v12);
            }
          }
        }
      }
    }
  }
}

/*
==============
G_SetAnimationClass
==============
*/
__int64 G_SetAnimationClass(gentity_s *entity, const char *animClassName)
{
  entityType_s eType; 
  unsigned int v5; 
  __int64 v6; 
  char v7; 
  __int64 number; 
  __int64 v9; 
  XAnim_s *Anims; 
  XAnimTree *v11; 
  XAnim_s *v12; 
  XAnimTree *v13; 
  __int64 v15; 
  unsigned int outIndex; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 131, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !animClassName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 132, ASSERT_TYPE_ASSERT, "(animClassName)", (const char *)&queryFormat, "animClassName") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = entity->s.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 133, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &entity->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &entity->s )") )
    __debugbreak();
  if ( !NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_ANIMCLASS, animClassName, &outIndex) )
    return 0i64;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v5 = outIndex;
  v6 = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( outIndex >= 0x40 )
  {
    LODWORD(v15) = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( animClassIndex ) < (unsigned)( (1 << 6) )", "animClassIndex doesn't index MAX_ANIM_CLASS_COUNT\n\t%i not in [0, %i)", v15, 64) )
      __debugbreak();
    v5 = outIndex;
  }
  BG_AnimationState_GetClassByIndex(v5);
  v7 = outIndex;
  entity->s.animInfo.animData &= 0xFF03FFFF;
  number = (unsigned int)entity->s.number;
  entity->s.animInfo.animData |= (v7 & 0x3F) << 18;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 224i64))(v6, number);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 145, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Anims = BG_AnimationState_GetAnims(&entity->s);
  v11 = *(XAnimTree **)(v9 + 2040);
  v12 = Anims;
  if ( Anims )
  {
    if ( !v11 || XAnimGetAnims(v11) != Anims )
    {
      v13 = *(XAnimTree **)(v9 + 2040);
      if ( v13 )
        Com_XAnimFreeSmallTree(v13);
      *(_QWORD *)(v9 + 2040) = Com_XAnimCreateSmallTree(v12, MOVEMENT);
    }
  }
  else if ( v11 )
  {
    Com_XAnimFreeSmallTree(v11);
    *(_QWORD *)(v9 + 2040) = 0i64;
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, entity, 0);
  return 1i64;
}

/*
==============
G_UpdateAnimationState
==============
*/
void G_UpdateAnimationState(void)
{
  __int64 v0; 
  unsigned int v1; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  gentity_s *v5; 
  characterInfo_t *v6; 
  unsigned int v7; 
  gentity_s *v8; 
  characterInfo_t *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v0 = *(_QWORD *)&GStatic::ms_gameStatics;
  v1 = 0;
  v2 = 0;
  if ( level.maxclients > 0 )
  {
    v3 = 0i64;
    v4 = 0i64;
    do
    {
      if ( v2 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        v5 = &g_entities[v2];
        v6 = (characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, v2);
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 90, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        if ( v6->usingAnimState && v6->pXAnimTree )
        {
          BG_AnimationState_Update(&v5->s, v6, 0);
          G_NotifyEntityAnimationState(v5);
        }
      }
      ++v2;
      ++v3;
      ++v4;
    }
    while ( (int)v2 < level.maxclients );
    v1 = 0;
  }
  if ( level.maxagents > 0 )
  {
    do
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v1 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v11) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v10) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v7 = v1 + ComCharacterLimits::ms_gameData.m_clientCount;
      if ( v1 + ComCharacterLimits::ms_gameData.m_clientCount >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v1 + ComCharacterLimits::ms_gameData.m_clientCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v7] )
      {
        v8 = &g_entities[v7];
        v9 = (characterInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v0 + 224i64))(v0, v7);
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_animstate_mp.cpp", 109, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        if ( v9->usingAnimState )
        {
          if ( v9->pXAnimTree )
          {
            BG_AnimationState_Update(&v8->s, v9, 0);
            G_NotifyEntityAnimationState(v8);
          }
        }
      }
      ++v1;
    }
    while ( (int)v1 < level.maxagents );
  }
}

