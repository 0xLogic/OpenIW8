/*
==============
G_Animset_GetIndexOfRandomAnimFromRandomAlias
==============
*/

int __fastcall G_Animset_GetIndexOfRandomAnimFromRandomAlias(const Animset *pAnimset, int stateIndex)
{
  return ?G_Animset_GetIndexOfRandomAnimFromRandomAlias@@YAHPEBUAnimset@@H@Z(pAnimset, stateIndex);
}

/*
==============
G_Animset_GetIndexOfRandomAnimFromAlias
==============
*/

int __fastcall G_Animset_GetIndexOfRandomAnimFromAlias(const scr_string_t animsetName, const scr_string_t stateName, const scr_string_t aliasName)
{
  return ?G_Animset_GetIndexOfRandomAnimFromAlias@@YAHW4scr_string_t@@00@Z(animsetName, stateName, aliasName);
}

/*
==============
G_Animset_GetIndexOfRandomAnimFromRandomAlias
==============
*/

int __fastcall G_Animset_GetIndexOfRandomAnimFromRandomAlias(const scr_string_t animsetName, const scr_string_t stateName)
{
  return ?G_Animset_GetIndexOfRandomAnimFromRandomAlias@@YAHW4scr_string_t@@0@Z(animsetName, stateName);
}

/*
==============
G_Animset_GetRandomAlias
==============
*/

scr_anim_t __fastcall G_Animset_GetRandomAlias(scr_string_t assetName, scr_string_t stateName, scr_string_t aliasName, bool frantic)
{
  return ?G_Animset_GetRandomAlias@@YA?BUscr_anim_t@@W4scr_string_t@@00_N@Z(assetName, stateName, aliasName, frantic);
}

/*
==============
G_Animset_GetIndexOfRandomAnimFromAlias
==============
*/

int __fastcall G_Animset_GetIndexOfRandomAnimFromAlias(const Animset *pAnimset, const AnimsetState *pState, const scr_string_t aliasName)
{
  return ?G_Animset_GetIndexOfRandomAnimFromAlias@@YAHPEBUAnimset@@PEBUAnimsetState@@W4scr_string_t@@@Z(pAnimset, pState, aliasName);
}

/*
==============
G_Animset_GetIndexOfRandomAnimFromAlias
==============
*/
__int64 G_Animset_GetIndexOfRandomAnimFromAlias(const Animset *pAnimset, const AnimsetState *pState, const scr_string_t aliasName)
{
  int v6; 
  __int64 i; 
  AnimsetAlias *animAliases; 
  __int64 numAnims; 
  double v10; 
  int v11; 
  __int64 v12; 
  __int128 v13; 
  float *p_weight; 
  __int128 v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 

  if ( pAnimset )
  {
    if ( pState )
    {
      v6 = 0;
      for ( i = 0i64; (unsigned int)i < pState->numAnimAliases; i = (unsigned int)(i + 1) )
      {
        animAliases = pState->animAliases;
        if ( animAliases[i].name == aliasName )
        {
          numAnims = (int)animAliases[i].numAnims;
          v10 = G_flrand(0.0, 1.0);
          v11 = 0;
          v12 = 0i64;
          v13 = 0i64;
          if ( (int)numAnims > 0 )
          {
            p_weight = &animAliases[i].anims->weight;
            do
            {
              v15 = v13;
              *(float *)&v15 = *(float *)&v13 + *p_weight;
              v13 = v15;
              if ( *(float *)&v15 >= *(float *)&v10 )
                return (unsigned int)(v11 + v6);
              ++v11;
              ++v12;
              p_weight += 6;
            }
            while ( v12 < numAnims );
            if ( (int)numAnims > 0 )
              goto LABEL_12;
          }
          v16 = SL_ConvertToString(aliasName);
          v17 = SL_ConvertToString(pState->name);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 87, ASSERT_TYPE_ASSERT, "(numAnims > 0)", "%s\n\tanimset %s state %s alias %s has no anims!", "numAnims > 0", pAnimset->name, v17, v16) )
            __debugbreak();
LABEL_12:
          v18 = SL_ConvertToString(aliasName);
          v19 = SL_ConvertToString(pState->name);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 88, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "animset %s state %s alias %s has bad weights!", pAnimset->name, v19, v18) )
            __debugbreak();
        }
        else
        {
          v6 += animAliases[i].numAnims;
        }
      }
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
G_Animset_GetIndexOfRandomAnimFromAlias
==============
*/
int G_Animset_GetIndexOfRandomAnimFromAlias(const scr_string_t animsetName, const scr_string_t stateName, const scr_string_t aliasName)
{
  const Animset *v5; 
  const Animset *v6; 
  AnimsetState *outState; 

  v5 = Animset_Find(animsetName);
  v6 = v5;
  if ( v5 && (outState = NULL, BG_Animset_GetStateInfoByName(v5, stateName, &outState, NULL)) )
    return G_Animset_GetIndexOfRandomAnimFromAlias(v6, outState, aliasName);
  else
    return -1;
}

/*
==============
G_Animset_GetIndexOfRandomAnimFromRandomAlias
==============
*/
int G_Animset_GetIndexOfRandomAnimFromRandomAlias(const Animset *pAnimset, int stateIndex)
{
  int v3; 
  AnimsetState *outState; 

  outState = NULL;
  if ( !BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState) )
    return -1;
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 133, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  v3 = G_irand(0, outState->numAnimAliases);
  return G_Animset_GetIndexOfRandomAnimFromAlias(pAnimset, outState, (const scr_string_t)outState->animAliases[v3].name);
}

/*
==============
G_Animset_GetIndexOfRandomAnimFromRandomAlias
==============
*/
int G_Animset_GetIndexOfRandomAnimFromRandomAlias(const scr_string_t animsetName, const scr_string_t stateName)
{
  int v4; 
  scr_string_t name; 
  const Animset *v6; 
  const Animset *v7; 
  AnimsetState *outState; 
  AnimsetState *pState; 

  outState = NULL;
  if ( !BG_Animset_GetStateInfoByName(animsetName, stateName, &outState, NULL) )
    return -1;
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 120, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
    __debugbreak();
  v4 = G_irand(0, outState->numAnimAliases);
  name = outState->animAliases[v4].name;
  v6 = Animset_Find(animsetName);
  v7 = v6;
  if ( v6 && (pState = NULL, BG_Animset_GetStateInfoByName(v6, stateName, &pState, NULL)) )
    return G_Animset_GetIndexOfRandomAnimFromAlias(v7, pState, name);
  else
    return -1;
}

/*
==============
G_Animset_GetRandomAlias
==============
*/
scr_anim_t G_Animset_GetRandomAlias(scr_string_t assetName, scr_string_t stateName, scr_string_t aliasName, bool frantic)
{
  int v5; 
  __int128 v7; 
  Animset *v8; 
  _DWORD *m_AIAnimsetAlias; 
  double v11; 
  int v12; 
  __int128 v13; 
  AnimsetAlias_Union v14; 
  unsigned int numRedAnims; 
  AnimsetAnim *redAnims; 
  __int128 v17; 
  double v18; 
  unsigned int numAnims; 
  AnimsetAnim *anims; 
  __int128 v21; 
  AnimsetAlias *v22; 

  v5 = 0;
  v22 = NULL;
  if ( !BG_Animset_GetCompleteAliasInfo(assetName, stateName, aliasName, &v22) )
    return UNDEFINED_ANIM_1;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 11, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  v7 = 0i64;
  if ( !frantic )
    goto LABEL_19;
  v8 = Animset_Find(assetName);
  if ( (!v8 || v8->mode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 18, ASSERT_TYPE_ASSERT, "(animset && animset->mode == ASM_MODE_AI)", (const char *)&queryFormat, "animset && animset->mode == ASM_MODE_AI") )
    __debugbreak();
  m_AIAnimsetAlias = v22->u.m_AIAnimsetAlias;
  if ( m_AIAnimsetAlias[2] == 1 )
    return *(scr_anim_t *)(*(_QWORD *)m_AIAnimsetAlias + 16i64);
  if ( m_AIAnimsetAlias[2] <= 1u )
  {
LABEL_19:
    if ( v22->numAnims == 1 )
      return (scr_anim_t)v22->anims->anim.linkPointer;
    if ( v22->numAnims > 1 )
    {
      v18 = G_flrand(0.0, 1.0);
      numAnims = v22->numAnims;
      if ( numAnims )
      {
        anims = v22->anims;
        do
        {
          v21 = v7;
          *(float *)&v21 = *(float *)&v7 + anims[v5].weight;
          v7 = v21;
          if ( *(float *)&v21 >= *(float *)&v18 )
            return (scr_anim_t)anims[v5].anim.linkPointer;
        }
        while ( ++v5 < numAnims );
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 61, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should have returned before here, animset has bad weights.") )
        __debugbreak();
    }
    return UNDEFINED_ANIM_1;
  }
  v11 = G_flrand(0.0, 1.0);
  v12 = 0;
  v13 = 0i64;
  v14.m_AIAnimsetAlias = (AIAnimsetAlias *)v22->u;
  numRedAnims = v14.m_AIAnimsetAlias->numRedAnims;
  if ( !numRedAnims )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 37, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should have returned before here, animset has bad weights.") )
      __debugbreak();
    goto LABEL_19;
  }
  redAnims = v14.m_AIAnimsetAlias->redAnims;
  while ( 1 )
  {
    v17 = v13;
    *(float *)&v17 = *(float *)&v13 + redAnims[v12].weight;
    v13 = v17;
    if ( *(float *)&v17 >= *(float *)&v11 )
      return (scr_anim_t)redAnims[v12].anim.linkPointer;
    if ( ++v12 >= numRedAnims )
      goto LABEL_17;
  }
}

