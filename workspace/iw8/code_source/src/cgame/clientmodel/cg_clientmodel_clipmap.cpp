/*
==============
CG_ClientModel_GetClipmapAnimIndex
==============
*/

scr_anim_t __fastcall CG_ClientModel_GetClipmapAnimIndex(unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetClipmapAnimIndex@@YA?AUscr_anim_t@@I@Z(clientModelIdx);
}

/*
==============
CG_ClientModel_GetClipmapAnims
==============
*/

XAnim_s *__fastcall CG_ClientModel_GetClipmapAnims(unsigned int clientModelIdx)
{
  return ?CG_ClientModel_GetClipmapAnims@@YAPEAUXAnim_s@@I@Z(clientModelIdx);
}

/*
==============
CG_ClientModel_FindClipmapAnimTrees
==============
*/

void __fastcall CG_ClientModel_FindClipmapAnimTrees(int animUser)
{
  ?CG_ClientModel_FindClipmapAnimTrees@@YAXH@Z(animUser);
}

/*
==============
CG_ClientModel_FindClipmapAnims
==============
*/

void CG_ClientModel_FindClipmapAnims(void)
{
  ?CG_ClientModel_FindClipmapAnims@@YAXXZ();
}

/*
==============
CG_ClientModel_FindClipmapAnimTrees
==============
*/
void CG_ClientModel_FindClipmapAnimTrees(int animUser)
{
  scrContext_t *v1; 
  __int64 numClientModels; 
  CM_ClientModel_AnimData *v3; 
  __int64 v4; 
  __int64 v5; 
  CM_ClientModel *clientModels; 
  scr_string_t animationTreeName; 
  const char *v8; 
  XAnim_s *anims; 

  v1 = ScriptContext_GetFromAnimUser(animUser);
  numClientModels = cm.mapEnts->numClientModels;
  if ( (unsigned int)numClientModels > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_clipmap.cpp", 32, ASSERT_TYPE_ASSERT, "( numClipmapModels ) <= ( ( sizeof( *array_counter( s_CG_ClientModel_ClipmapAnimData ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "numClipmapModels", "ARRAY_COUNT( s_CG_ClientModel_ClipmapAnimData )", numClientModels, 128) )
    __debugbreak();
  if ( (_DWORD)numClientModels )
  {
    v3 = s_CG_ClientModel_ClipmapAnimData;
    v4 = 0i64;
    v5 = numClientModels;
    do
    {
      clientModels = cm.mapEnts->clientModels;
      animationTreeName = clientModels[v4].animationTreeName;
      if ( animationTreeName )
      {
        v8 = SL_ConvertToString(animationTreeName);
        anims = Scr_FindAnimTree(v1, v8).anims;
        if ( !anims )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442E5AB0, 126i64, clientModels[v4].model->name, v8);
      }
      else
      {
        anims = NULL;
      }
      v3->anims = anims;
      ++v4;
      ++v3;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
CG_ClientModel_FindClipmapAnims
==============
*/
void CG_ClientModel_FindClipmapAnims(void)
{
  __int64 numClientModels; 
  scr_anim_t *p_animIndex; 
  __int64 v2; 
  __int64 v3; 
  CM_ClientModel *clientModels; 
  const char *v5; 
  const char **p_name; 

  numClientModels = cm.mapEnts->numClientModels;
  if ( (unsigned int)numClientModels > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_clipmap.cpp", 71, ASSERT_TYPE_ASSERT, "( numClipmapModels ) <= ( ( sizeof( *array_counter( s_CG_ClientModel_ClipmapAnimData ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "numClipmapModels", "ARRAY_COUNT( s_CG_ClientModel_ClipmapAnimData )", numClientModels, 128) )
    __debugbreak();
  if ( (_DWORD)numClientModels )
  {
    p_animIndex = &s_CG_ClientModel_ClipmapAnimData[0].animIndex;
    v2 = numClientModels;
    v3 = 0i64;
    do
    {
      clientModels = cm.mapEnts->clientModels;
      if ( !clientModels[v3].animationTreeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_clipmap.cpp", 81, ASSERT_TYPE_ASSERT, "(clientModel->animationTreeName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "clientModel->animationTreeName != NULL_SCR_STRING") )
        __debugbreak();
      v5 = SL_ConvertToString(clientModels[v3].animationTreeName);
      p_name = &clientModels[v3].animation->name;
      if ( p_name )
      {
        Scr_FindAnim(v5, *p_name, p_animIndex, 0);
      }
      else
      {
        Scr_UsingTree(v5, 0, 0);
        p_animIndex->linkPointer = 0i64;
      }
      p_animIndex += 2;
      ++v3;
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
CG_ClientModel_GetClipmapAnimIndex
==============
*/
scr_anim_t CG_ClientModel_GetClipmapAnimIndex(unsigned int clientModelIdx)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 
  unsigned int numClientModels; 
  int v6; 

  v1 = clientModelIdx;
  if ( cm.mapEnts->numClientModels > 0x80 )
  {
    v6 = 128;
    numClientModels = cm.mapEnts->numClientModels;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_clipmap.cpp", 109, ASSERT_TYPE_ASSERT, "( cm.mapEnts->numClientModels ) <= ( ( sizeof( *array_counter( s_CG_ClientModel_ClipmapAnimData ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "cm.mapEnts->numClientModels", "ARRAY_COUNT( s_CG_ClientModel_ClipmapAnimData )", numClientModels, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= cm.mapEnts->numClientModels )
  {
    LODWORD(v4) = cm.mapEnts->numClientModels;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_clipmap.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( cm.mapEnts->numClientModels )", "clientModelIdx doesn't index cm.mapEnts->numClientModels\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return (scr_anim_t)s_CG_ClientModel_ClipmapAnimData[v1].animIndex.linkPointer;
}

/*
==============
CG_ClientModel_GetClipmapAnims
==============
*/
XAnim_s *CG_ClientModel_GetClipmapAnims(unsigned int clientModelIdx)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 
  unsigned int numClientModels; 
  int v6; 

  v1 = clientModelIdx;
  if ( cm.mapEnts->numClientModels > 0x80 )
  {
    v6 = 128;
    numClientModels = cm.mapEnts->numClientModels;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_clipmap.cpp", 101, ASSERT_TYPE_ASSERT, "( cm.mapEnts->numClientModels ) <= ( ( sizeof( *array_counter( s_CG_ClientModel_ClipmapAnimData ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "cm.mapEnts->numClientModels", "ARRAY_COUNT( s_CG_ClientModel_ClipmapAnimData )", numClientModels, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= cm.mapEnts->numClientModels )
  {
    LODWORD(v4) = cm.mapEnts->numClientModels;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\clientmodel\\cg_clientmodel_clipmap.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelIdx ) < (unsigned)( cm.mapEnts->numClientModels )", "clientModelIdx doesn't index cm.mapEnts->numClientModels\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_CG_ClientModel_ClipmapAnimData[v1].anims;
}

