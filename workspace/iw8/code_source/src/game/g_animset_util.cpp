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
  int v8; 
  __int64 v9; 
  AnimsetAlias *animAliases; 
  unsigned __int64 numAnims; 
  int v14; 
  unsigned __int64 v15; 
  AnimsetAnim *anims; 
  bool v18; 
  float *p_weight; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  __int64 result; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  if ( pAnimset )
  {
    if ( pState )
    {
      v8 = 0;
      v9 = 0i64;
      if ( pState->numAnimAliases )
      {
        __asm { vmovss  xmm6, cs:__real@3f800000 }
        do
        {
          animAliases = pState->animAliases;
          if ( animAliases[v9].name == aliasName )
          {
            numAnims = (int)animAliases[v9].numAnims;
            __asm
            {
              vmovaps xmm1, xmm6; max
              vxorps  xmm0, xmm0, xmm0; min
            }
            *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
            v14 = 0;
            v15 = 0i64;
            __asm { vxorps  xmm1, xmm1, xmm1 }
            if ( (int)numAnims > 0 )
            {
              anims = animAliases[v9].anims;
              v18 = __CFADD__(anims, 4i64);
              p_weight = &anims->weight;
              do
              {
                __asm
                {
                  vaddss  xmm1, xmm1, dword ptr [rax]
                  vcomiss xmm1, xmm0
                }
                if ( !v18 )
                {
                  result = (unsigned int)(v14 + v8);
                  goto LABEL_18;
                }
                ++v14;
                ++v15;
                p_weight += 6;
                v18 = v15 < numAnims;
              }
              while ( (__int64)v15 < (__int64)numAnims );
              if ( (int)numAnims > 0 )
                goto LABEL_13;
            }
            v20 = SL_ConvertToString(aliasName);
            v21 = SL_ConvertToString(pState->name);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 87, ASSERT_TYPE_ASSERT, "(numAnims > 0)", "%s\n\tanimset %s state %s alias %s has no anims!", "numAnims > 0", pAnimset->name, v21, v20) )
              __debugbreak();
LABEL_13:
            v22 = SL_ConvertToString(aliasName);
            v23 = SL_ConvertToString(pState->name);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 88, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "animset %s state %s alias %s has bad weights!", pAnimset->name, v23, v22) )
              __debugbreak();
          }
          else
          {
            v8 += animAliases[v9].numAnims;
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < pState->numAnimAliases );
      }
    }
  }
  result = 0xFFFFFFFFi64;
LABEL_18:
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  return result;
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
  unsigned int v8; 
  Animset *v11; 
  _DWORD *m_AIAnimsetAlias; 
  scr_anim_t result; 
  unsigned int v16; 
  AnimsetAlias_Union v18; 
  unsigned int numRedAnims; 
  bool v20; 
  AnimsetAnim *redAnims; 
  unsigned int numAnims; 
  bool v25; 
  AnimsetAlias *v27; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v8 = 0;
  v27 = NULL;
  if ( !BG_Animset_GetCompleteAliasInfo(assetName, stateName, aliasName, &v27) )
    goto LABEL_28;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 11, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( !frantic )
    goto LABEL_19;
  v11 = Animset_Find(assetName);
  if ( (!v11 || v11->mode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 18, ASSERT_TYPE_ASSERT, "(animset && animset->mode == ASM_MODE_AI)", (const char *)&queryFormat, "animset && animset->mode == ASM_MODE_AI") )
    __debugbreak();
  m_AIAnimsetAlias = v27->u.m_AIAnimsetAlias;
  if ( m_AIAnimsetAlias[2] == 1 )
  {
    result = *(scr_anim_t *)(*(_QWORD *)m_AIAnimsetAlias + 16i64);
    goto LABEL_29;
  }
  if ( m_AIAnimsetAlias[2] <= 1u )
  {
LABEL_19:
    if ( v27->numAnims == 1 )
    {
      result = (scr_anim_t)v27->anims->anim.linkPointer;
      goto LABEL_29;
    }
    if ( v27->numAnims > 1 )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000; max
        vmovaps xmm0, xmm6; min
      }
      *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
      numAnims = v27->numAnims;
      v25 = 0;
      if ( numAnims )
      {
        while ( 1 )
        {
          __asm
          {
            vaddss  xmm6, xmm6, dword ptr [rcx+rax*8+4]
            vcomiss xmm6, xmm0
          }
          if ( !v25 )
            break;
          v25 = ++v8 < numAnims;
          if ( v8 >= numAnims )
            goto LABEL_26;
        }
        result = (scr_anim_t)v27->anims[v8].anim.linkPointer;
        goto LABEL_29;
      }
LABEL_26:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 61, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should have returned before here, animset has bad weights.") )
        __debugbreak();
    }
LABEL_28:
    result = UNDEFINED_ANIM_1;
    goto LABEL_29;
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000; max
    vxorps  xmm0, xmm0, xmm0; min
  }
  *(double *)&_XMM0 = G_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  v16 = 0;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  v18.m_AIAnimsetAlias = (AIAnimsetAlias *)v27->u;
  numRedAnims = v18.m_AIAnimsetAlias->numRedAnims;
  v20 = 0;
  if ( !numRedAnims )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_animset_util.cpp", 37, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should have returned before here, animset has bad weights.") )
      __debugbreak();
    goto LABEL_19;
  }
  redAnims = v18.m_AIAnimsetAlias->redAnims;
  while ( 1 )
  {
    __asm
    {
      vaddss  xmm1, xmm1, dword ptr [rdx+rax*8+4]
      vcomiss xmm1, xmm0
    }
    if ( !v20 )
      break;
    v20 = ++v16 < numRedAnims;
    if ( v16 >= numRedAnims )
      goto LABEL_17;
  }
  result = (scr_anim_t)redAnims[v16].anim.linkPointer;
LABEL_29:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

