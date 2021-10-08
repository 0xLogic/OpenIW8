/*
==============
CL_UI_ClientModel_SetClientModelPatchOrigin
==============
*/

void __fastcall CL_UI_ClientModel_SetClientModelPatchOrigin(const unsigned int attachToClientModelIndex, const unsigned int clientModelIndex, const scr_string_t tagNameScr)
{
  ?CL_UI_ClientModel_SetClientModelPatchOrigin@@YAXIIW4scr_string_t@@@Z(attachToClientModelIndex, clientModelIndex, tagNameScr);
}

/*
==============
CL_UI_ClientModel_Reset
==============
*/

void CL_UI_ClientModel_Reset(void)
{
  ?CL_UI_ClientModel_Reset@@YAXXZ();
}

/*
==============
CL_UI_ClientModel_Update
==============
*/

void CL_UI_ClientModel_Update(void)
{
  ?CL_UI_ClientModel_Update@@YAXXZ();
}

/*
==============
CL_UI_ClientModel_SetClientModel
==============
*/

void __fastcall CL_UI_ClientModel_SetClientModel(const unsigned int clientModelIndex, const char *modelName)
{
  ?CL_UI_ClientModel_SetClientModel@@YAXIPEBD@Z(clientModelIndex, modelName);
}

/*
==============
CL_UI_ClientModel_SetClientModelAnimation
==============
*/

void __fastcall CL_UI_ClientModel_SetClientModelAnimation(const unsigned int clientModelIndex, const scr_string_t animationTreeSCR, const XAnimParts *animParts, scr_anim_t animIndex, scr_animtree_t scrAnimTree)
{
  ?CL_UI_ClientModel_SetClientModelAnimation@@YAXIW4scr_string_t@@PEBUXAnimParts@@Uscr_anim_t@@Uscr_animtree_t@@@Z(clientModelIndex, animationTreeSCR, animParts, animIndex, scrAnimTree);
}

/*
==============
CL_UI_ClientModel_GetUIClientModelStateIndex
==============
*/
__int64 CL_UI_ClientModel_GetUIClientModelStateIndex(const unsigned int clientModelIndex)
{
  int *p_clientModelIndex; 
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 
  unsigned int v6; 
  int v7; 

  p_clientModelIndex = &s_CL_UI_ClientModel_State[0].clientModelIndex;
  v2 = 0;
  while ( *p_clientModelIndex != clientModelIndex )
  {
    ++v2;
    p_clientModelIndex += 76;
    if ( (__int64)p_clientModelIndex >= (__int64)&unk_148CBBED4 )
      goto LABEL_6;
  }
  if ( v2 != -1 )
    return v2;
LABEL_6:
  v3 = s_CL_UI_ClientModel_UsedStates;
  v4 = s_CL_UI_ClientModel_UsedStates;
  s_CL_UI_ClientModel_HasChanges = 1;
  s_CL_UI_ClientModel_State[v4].clientModelIndex = clientModelIndex;
  s_CL_UI_ClientModel_State[v4].hasChanges = 1;
  s_CL_UI_ClientModel_UsedStates = v3 + 1;
  if ( v3 + 1 >= 0x10 )
  {
    v7 = 16;
    v6 = v3 + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_clientmodel.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( s_CL_UI_ClientModel_UsedStates ) < (unsigned)( 16 )", "s_CL_UI_ClientModel_UsedStates doesn't index CLIENT_UI_MODEL_MAX_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return v3;
}

/*
==============
CL_UI_ClientModel_Reset
==============
*/
void CL_UI_ClientModel_Reset(void)
{
  s_CL_UI_ClientModel_HasChanges = 0;
  s_CL_UI_ClientModel_UsedStates = 0;
  memset_0(s_CL_UI_ClientModel_State, 0, sizeof(s_CL_UI_ClientModel_State));
  s_CL_UI_ClientModel_State[0].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[1].hasChanges = 0;
  s_CL_UI_ClientModel_State[1].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[2].hasChanges = 0;
  s_CL_UI_ClientModel_State[2].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[3].hasChanges = 0;
  s_CL_UI_ClientModel_State[3].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[4].hasChanges = 0;
  s_CL_UI_ClientModel_State[4].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[5].hasChanges = 0;
  s_CL_UI_ClientModel_State[5].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[6].hasChanges = 0;
  s_CL_UI_ClientModel_State[6].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[7].hasChanges = 0;
  s_CL_UI_ClientModel_State[7].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[8].hasChanges = 0;
  s_CL_UI_ClientModel_State[8].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[9].hasChanges = 0;
  s_CL_UI_ClientModel_State[9].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[10].hasChanges = 0;
  s_CL_UI_ClientModel_State[10].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[11].hasChanges = 0;
  s_CL_UI_ClientModel_State[11].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[12].hasChanges = 0;
  s_CL_UI_ClientModel_State[12].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[13].hasChanges = 0;
  s_CL_UI_ClientModel_State[13].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[14].hasChanges = 0;
  s_CL_UI_ClientModel_State[14].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[15].hasChanges = 0;
  s_CL_UI_ClientModel_State[15].clientModelIndex = -1;
}

/*
==============
CL_UI_ClientModel_SetClientModel
==============
*/
void CL_UI_ClientModel_SetClientModel(const unsigned int clientModelIndex, const char *modelName)
{
  int UIClientModelStateIndex; 

  UIClientModelStateIndex = CL_UI_ClientModel_GetUIClientModelStateIndex(clientModelIndex);
  Core_strncpy(s_CL_UI_ClientModel_State[UIClientModelStateIndex].modelName, 0x100ui64, modelName, 0x100ui64);
}

/*
==============
CL_UI_ClientModel_SetClientModelAnimation
==============
*/
void CL_UI_ClientModel_SetClientModelAnimation(const unsigned int clientModelIndex, const scr_string_t animationTreeSCR, const XAnimParts *animParts, scr_anim_t animIndex, scr_animtree_t scrAnimTree)
{
  __int64 UIClientModelStateIndex; 

  UIClientModelStateIndex = (unsigned int)CL_UI_ClientModel_GetUIClientModelStateIndex(clientModelIndex);
  s_CL_UI_ClientModel_State[UIClientModelStateIndex].animationTreeSCR = animationTreeSCR;
  s_CL_UI_ClientModel_State[UIClientModelStateIndex].animParts = animParts;
  s_CL_UI_ClientModel_State[UIClientModelStateIndex].animIndex = animIndex;
  s_CL_UI_ClientModel_State[UIClientModelStateIndex].clientModelIndex = clientModelIndex;
  s_CL_UI_ClientModel_State[UIClientModelStateIndex].scrAnimTree = scrAnimTree;
}

/*
==============
CL_UI_ClientModel_SetClientModelPatchOrigin
==============
*/
void CL_UI_ClientModel_SetClientModelPatchOrigin(const unsigned int attachToClientModelIndex, const unsigned int clientModelIndex, const scr_string_t tagNameScr)
{
  __int64 UIClientModelStateIndex; 

  UIClientModelStateIndex = (unsigned int)CL_UI_ClientModel_GetUIClientModelStateIndex(clientModelIndex);
  s_CL_UI_ClientModel_State[UIClientModelStateIndex].attachToClientModelIndex = attachToClientModelIndex;
  s_CL_UI_ClientModel_State[UIClientModelStateIndex].tagNameScr = tagNameScr;
  s_CL_UI_ClientModel_State[UIClientModelStateIndex].clientModelIndex = clientModelIndex;
}

/*
==============
CL_UI_ClientModel_Update
==============
*/
void CL_UI_ClientModel_Update(void)
{
  char *modelName; 
  const XModel *model; 
  scr_string_t v2; 
  scr_string_t AnimationTreeName; 
  scr_string_t v4; 
  unsigned int v5; 
  vec3_t outOrigin; 

  if ( s_CL_UI_ClientModel_HasChanges && Com_FrontEnd_IsInFrontEnd() )
  {
    modelName = s_CL_UI_ClientModel_State[0].modelName;
    do
    {
      if ( *(modelName - 8) )
      {
        if ( *modelName )
        {
          model = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, modelName, 1).model;
          if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_clientmodel.cpp", 43, ASSERT_TYPE_ASSERT, "(modelHeader.data != nullptr)", (const char *)&queryFormat, "modelHeader.data != nullptr") )
            __debugbreak();
          CG_ClientModel_SetModel(LOCAL_CLIENT_0, *((_DWORD *)modelName - 1), model);
        }
        v2 = *((_DWORD *)modelName + 65);
        if ( v2 )
        {
          CG_ClientModel_GetOrigin(LOCAL_CLIENT_0, *((_DWORD *)modelName + 64), &outOrigin, v2);
          CG_ClientModel_SetOrigin(LOCAL_CLIENT_0, *((_DWORD *)modelName - 1), &outOrigin);
        }
        if ( *((_DWORD *)modelName + 66) )
        {
          AnimationTreeName = CG_ClientModel_GetAnimationTreeName(LOCAL_CLIENT_0, *((_DWORD *)modelName - 1));
          v4 = *((_DWORD *)modelName + 66);
          v5 = *((_DWORD *)modelName - 1);
          if ( AnimationTreeName == v4 )
            CG_ClientModel_SetAnimation(LOCAL_CLIENT_0, v5, *((const XAnimParts **)modelName + 34), *(scr_anim_t *)(modelName + 280));
          else
            CG_ClientModel_SetAnimation(LOCAL_CLIENT_0, v5, v4, *((XAnim_s **)modelName + 36), *((const XAnimParts **)modelName + 34), *(scr_anim_t *)(modelName + 280));
        }
      }
      modelName += 304;
    }
    while ( (__int64)modelName < (__int64)&unk_148CBBED8 );
  }
  s_CL_UI_ClientModel_HasChanges = 0;
  s_CL_UI_ClientModel_UsedStates = 0;
  memset_0(s_CL_UI_ClientModel_State, 0, sizeof(s_CL_UI_ClientModel_State));
  s_CL_UI_ClientModel_State[0].hasChanges = 0;
  s_CL_UI_ClientModel_State[0].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[1].hasChanges = 0;
  s_CL_UI_ClientModel_State[1].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[2].hasChanges = 0;
  s_CL_UI_ClientModel_State[2].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[3].hasChanges = 0;
  s_CL_UI_ClientModel_State[3].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[4].hasChanges = 0;
  s_CL_UI_ClientModel_State[4].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[5].hasChanges = 0;
  s_CL_UI_ClientModel_State[5].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[6].hasChanges = 0;
  s_CL_UI_ClientModel_State[6].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[7].hasChanges = 0;
  s_CL_UI_ClientModel_State[7].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[8].hasChanges = 0;
  s_CL_UI_ClientModel_State[8].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[9].hasChanges = 0;
  s_CL_UI_ClientModel_State[9].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[10].hasChanges = 0;
  s_CL_UI_ClientModel_State[10].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[11].hasChanges = 0;
  s_CL_UI_ClientModel_State[11].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[12].hasChanges = 0;
  s_CL_UI_ClientModel_State[12].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[13].hasChanges = 0;
  s_CL_UI_ClientModel_State[13].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[14].hasChanges = 0;
  s_CL_UI_ClientModel_State[14].clientModelIndex = -1;
  s_CL_UI_ClientModel_State[15].hasChanges = 0;
  s_CL_UI_ClientModel_State[15].clientModelIndex = -1;
}

