/*
==============
Scr_IsSharedParameterPlayerTree
==============
*/

bool __fastcall Scr_IsSharedParameterPlayerTree(scrContext_t *scrContext, scr_string_t treeName)
{
  return ?Scr_IsSharedParameterPlayerTree@@YA_NAEAUscrContext_t@@W4scr_string_t@@@Z(scrContext, treeName);
}

/*
==============
Scr_LoadAnimTreeAtIndex
==============
*/

void __fastcall Scr_LoadAnimTreeAtIndex(unsigned int index, void *(__fastcall *Alloc)(unsigned __int64), int user, const ScrThreadMode threadMode)
{
  ?Scr_LoadAnimTreeAtIndex@@YAXIP6APEAX_K@ZHW4ScrThreadMode@@@Z(index, Alloc, user, threadMode);
}

/*
==============
Scr_FindAnimTreeID
==============
*/

unsigned int __fastcall Scr_FindAnimTreeID(const char *filename, int user)
{
  return ?Scr_FindAnimTreeID@@YAIPEBDH@Z(filename, user);
}

/*
==============
Scr_GetAnims
==============
*/

XAnim_s *__fastcall Scr_GetAnims(const scrContext_t *scrContext, unsigned int index)
{
  return ?Scr_GetAnims@@YAPEAUXAnim_s@@AEBUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
Scr_IsSharedParameterAIASMTree
==============
*/

bool __fastcall Scr_IsSharedParameterAIASMTree(scrContext_t *scrContext, scr_string_t treeName)
{
  return ?Scr_IsSharedParameterAIASMTree@@YA_NAEAUscrContext_t@@W4scr_string_t@@@Z(scrContext, treeName);
}

/*
==============
Scr_GetAnimsIndex
==============
*/

int __fastcall Scr_GetAnimsIndex(const XAnim_s *anims, unsigned int user)
{
  return ?Scr_GetAnimsIndex@@YAHPEBUXAnim_s@@I@Z(anims, user);
}

/*
==============
SetAnimCheck
==============
*/

void __fastcall SetAnimCheck(scrContext_t *scrContext, int bAnimCheck)
{
  ?SetAnimCheck@@YAXAEAUscrContext_t@@H@Z(scrContext, bAnimCheck);
}

/*
==============
Scr_RegisterAlias
==============
*/

void __fastcall Scr_RegisterAlias(const char *filename, scr_string_t aliasName, scr_string_t animName, int user)
{
  ?Scr_RegisterAlias@@YAXPEBDW4scr_string_t@@1H@Z(filename, aliasName, animName, user);
}

/*
==============
Scr_FindAnimTree
==============
*/

scr_animtree_t __fastcall Scr_FindAnimTree(scrContext_t *scrContext, const char *filename)
{
  return ?Scr_FindAnimTree@@YA?AUscr_animtree_t@@AEAUscrContext_t@@PEBD@Z(scrContext, filename);
}

/*
==============
Scr_RegisterSharedParameterAIASMTreeName
==============
*/

void __fastcall Scr_RegisterSharedParameterAIASMTreeName(scrContext_t *scrContext, scr_string_t treeName)
{
  ?Scr_RegisterSharedParameterAIASMTreeName@@YAXAEAUscrContext_t@@W4scr_string_t@@@Z(scrContext, treeName);
}

/*
==============
Scr_RegisterSharedParameterPlayerTreeName
==============
*/

void __fastcall Scr_RegisterSharedParameterPlayerTreeName(scrContext_t *scrContext, scr_string_t treeName)
{
  ?Scr_RegisterSharedParameterPlayerTreeName@@YAXAEAUscrContext_t@@W4scr_string_t@@@Z(scrContext, treeName);
}

/*
==============
Scr_UsingTree
==============
*/

void __fastcall Scr_UsingTree(const char *filename, unsigned int sourcePos, int user)
{
  ?Scr_UsingTree@@YAXPEBDIH@Z(filename, sourcePos, user);
}

/*
==============
Scr_FindAnim
==============
*/

void __fastcall Scr_FindAnim(const char *filename, const char *animName, scr_anim_t *anim, int user)
{
  ?Scr_FindAnim@@YAXPEBD0PEAUscr_anim_t@@H@Z(filename, animName, anim, user);
}

/*
==============
Scr_ClearSharedParameterTreeNames
==============
*/

void __fastcall Scr_ClearSharedParameterTreeNames(scrContext_t *scrContext)
{
  ?Scr_ClearSharedParameterTreeNames@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_EmitAnimation
==============
*/

void __fastcall Scr_EmitAnimation(scrContext_t *scrContext, const char *pos, unsigned int animName, unsigned int sourcePos)
{
  ?Scr_EmitAnimation@@YAXAEAUscrContext_t@@PEBDII@Z(scrContext, pos, animName, sourcePos);
}

/*
==============
ConnectScriptToAnim
==============
*/
void ConnectScriptToAnim(scrContext_t *scrContext, unsigned int names, int index, scr_string_t filename, scr_string_t name, int treeIndex)
{
  unsigned int Variable; 
  VariableUnion *VariableValueAddress; 
  const char *v11; 
  const char *v12; 
  unsigned __int16 v13; 
  _QWORD *scriptCodePosValue; 
  _QWORD *v15; 
  __int64 v16; 

  Variable = FindVariable(scrContext, names, name);
  if ( Variable )
  {
    VariableValueAddress = GetVariableValueAddress(scrContext, Variable);
    if ( !VariableValueAddress->scriptCodePosValue )
    {
      v11 = SL_ConvertToString(filename);
      v12 = SL_ConvertToString(name);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144092180, 766i64, v12, v11);
    }
    LOWORD(v16) = truncate_cast<unsigned short,int>(index);
    v13 = truncate_cast<unsigned short,int>(treeIndex);
    scriptCodePosValue = (_QWORD *)VariableValueAddress->scriptCodePosValue;
    WORD1(v16) = v13;
    if ( VariableValueAddress->scriptCodePosValue )
    {
      do
      {
        v15 = (_QWORD *)*scriptCodePosValue;
        *scriptCodePosValue = v16;
        scriptCodePosValue = v15;
      }
      while ( v15 );
    }
    VariableValueAddress->scriptCodePosValue = 0i64;
  }
}

/*
==============
Scr_ClearSharedParameterTreeNames
==============
*/
void Scr_ClearSharedParameterTreeNames(scrContext_t *scrContext)
{
  unsigned int Variable; 
  unsigned int Object; 

  if ( !scrContext->m_animPub.animtrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1107, ASSERT_TYPE_ASSERT, "( scrContext.m_animPub.animtrees )", (const char *)&queryFormat, "scrContext.m_animPub.animtrees") )
    __debugbreak();
  if ( !scrContext->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1108, ASSERT_TYPE_ASSERT, "( scrContext.m_animPub.animtree_loading )", (const char *)&queryFormat, "scrContext.m_animPub.animtree_loading") )
    __debugbreak();
  Variable = FindVariable(scrContext, scrContext->m_animPub.animtrees, scr_const.parserSharedParameterTreeNames);
  if ( Variable )
  {
    Object = FindObject(scrContext, Variable);
    if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1118, ASSERT_TYPE_ASSERT, "(fileId)", (const char *)&queryFormat, "fileId") )
      __debugbreak();
    if ( FindVariable(scrContext, Object, 0) )
      RemoveVariable(scrContext, Object, 0);
    if ( FindVariable(scrContext, Object, 1u) )
      RemoveVariable(scrContext, Object, 1u);
  }
}

/*
==============
Scr_CreateAnimationTree
==============
*/
__int64 Scr_CreateAnimationTree(unsigned int parentNode, unsigned int names, XAnim_s *anims, unsigned int childIndex, const char *parentName, unsigned int parentIndex, scr_string_t filename, int treeIndex, unsigned int flags, XAnimSyncGroupID syncGroup, unsigned int lod, int user)
{
  scrContext_t *v14; 
  unsigned int v15; 
  unsigned int i; 
  XAnimNodeTypeID NodeTypeWithDefault; 
  scr_string_t CustomNodeName; 
  XAnim_s *v19; 
  unsigned int v20; 
  int v21; 
  scr_string_t String; 
  unsigned __int16 v23; 
  unsigned int v24; 
  unsigned int ArrayVariable; 
  VariableUnion *VariableValueAddress; 
  unsigned int intValue; 
  unsigned int v28; 
  XAnim_s *v29; 
  int v30; 
  unsigned int v31; 
  unsigned __int8 v32; 
  unsigned int PrevSibling; 
  scr_string_t v34; 
  unsigned int Object; 
  unsigned int v36; 
  char floatValue_low; 
  unsigned int v38; 
  __int64 uintValue; 
  char v40; 
  const char *v41; 
  bool v42; 
  const char *v43; 
  unsigned int AnimationTree; 
  const char *v45; 
  const char *v46; 
  char v47; 
  int v48; 
  __int64 v49; 
  __int64 v50; 
  unsigned __int64 v51; 
  char *fmt; 
  __int64 num; 
  XAnimSyncGroupID v55; 
  XAnimSyncGroupID v56; 
  XAnimSyncGroupID v57; 
  unsigned __int8 v58; 
  unsigned int childrena; 
  char v61[4]; 
  unsigned int nodeVar; 
  unsigned int v63; 
  scr_string_t stringValue; 
  XAnim_s *animsa; 
  unsigned int namesa; 
  unsigned int id; 
  int customNodeIndex; 
  char dest[256]; 

  nodeVar = parentNode;
  animsa = anims;
  namesa = names;
  v14 = ScriptContext_GetFromAnimUser(user);
  v15 = 0;
  for ( i = FindFirstSibling(v14, parentNode); i; i = FindNextSibling(v14, i) )
  {
    if ( GetSiblingName(v14, i) < 0x80000 )
      ++v15;
  }
  if ( parentIndex != (unsigned __int16)parentIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 470, ASSERT_TYPE_ASSERT, "( parentIndex == (unsigned short)parentIndex )", (const char *)&queryFormat, "parentIndex == (unsigned short)parentIndex") )
    __debugbreak();
  if ( childIndex != (unsigned __int16)childIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 471, ASSERT_TYPE_ASSERT, "( childIndex == (unsigned short)childIndex )", (const char *)&queryFormat, "childIndex == (unsigned short)childIndex") )
    __debugbreak();
  if ( v15 != (unsigned __int16)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 472, ASSERT_TYPE_ASSERT, "( size == (unsigned short)size )", (const char *)&queryFormat, "size == (unsigned short)size") )
    __debugbreak();
  if ( user == 1 )
    v14->m_varPub.checksum = 31 * (flags + 31 * (v15 + 31 * (childIndex + 31 * (parentIndex + 31 * v14->m_varPub.checksum)))) + (unsigned __int8)syncGroup;
  customNodeIndex = -1;
  NodeTypeWithDefault = AnimTreeParser_GetNodeTypeWithDefault(v14, nodeVar, XANIM_NODE_TYPE_BLEND);
  if ( XAnimIsCustomNodeType(NodeTypeWithDefault) )
  {
    CustomNodeName = XAnimGetCustomNodeName(NodeTypeWithDefault);
    LOBYTE(v56) = syncGroup;
    v19 = animsa;
    XAnimCustomNode(CustomNodeName, animsa, parentIndex, parentName, childIndex, v15, flags, v56, 1);
    v20 = AnimTreeParser_ApplyNodeParameterBindings(v14, animsa, parentIndex, nodeVar);
    v21 = user;
    if ( user == 1 )
      v14->m_varPub.checksum = 31 * ((unsigned __int8)NodeTypeWithDefault + 31 * v14->m_varPub.checksum) + v20;
    customNodeIndex = parentIndex;
  }
  else
  {
    if ( NodeTypeWithDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 502, ASSERT_TYPE_ASSERT, "(nodeType == XANIM_NODE_TYPE_BLEND)", (const char *)&queryFormat, "nodeType == XANIM_NODE_TYPE_BLEND") )
      __debugbreak();
    v19 = animsa;
    LOBYTE(v55) = syncGroup;
    XAnimBlend(animsa, parentIndex, parentName, childIndex, v15, flags, v55, 1);
    v21 = user;
  }
  if ( (flags & 0x2000) != 0 )
  {
    String = j_SL_GetString_(parentName, 0, 4);
    v23 = truncate_cast<unsigned short,unsigned int>(parentIndex);
    XAnimAddPublicNode(v19, String, v23);
    SL_RemoveRefToString(String);
  }
  v24 = nodeVar;
  ArrayVariable = FindArrayVariable(v14, nodeVar, 5);
  if ( ArrayVariable )
  {
    VariableValueAddress = GetVariableValueAddress(v14, ArrayVariable);
    if ( !VariableValueAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 520, ASSERT_TYPE_ASSERT, "(varAddress != nullptr)", (const char *)&queryFormat, "varAddress != nullptr") )
      __debugbreak();
    intValue = VariableValueAddress->intValue;
    v28 = lod;
    v63 = lod;
    if ( intValue <= lod )
    {
      v28 = intValue;
      v63 = intValue;
    }
    else
    {
      LODWORD(num) = lod;
      LODWORD(fmt) = intValue;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144092460, 5767i64, parentName, fmt, num);
    }
  }
  else
  {
    v28 = lod;
    v63 = lod;
  }
  v29 = animsa;
  XAnimSetupNodeLod(animsa, parentIndex, v28);
  v30 = childIndex;
  v31 = v15 + childIndex;
  v32 = 0;
  childrena = v31;
  v58 = 0;
  do
  {
    id = FindLastSibling(v14, v24);
    PrevSibling = id;
    if ( id )
    {
      while ( 1 )
      {
        stringValue = GetSiblingName(v14, PrevSibling);
        v34 = stringValue;
        if ( (unsigned int)stringValue >= 0x80000 )
        {
LABEL_87:
          AnimationTree = childrena;
          goto LABEL_88;
        }
        if ( GetValueType(v14, PrevSibling) != VAR_POINTER )
          break;
        Object = FindObject(v14, PrevSibling);
        v36 = FindArrayVariable(v14, Object, 4);
        if ( v36 )
          floatValue_low = LOBYTE(GetVariableValueAddress(v14, v36)->floatValue);
        else
          floatValue_low = 4;
        v38 = FindArrayVariable(v14, Object, 0);
        if ( v38 )
        {
          uintValue = GetVariableValueAddress(v14, v38)->uintValue;
          if ( (int)uintValue < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", uintValue, "signed", (int)uintValue) )
            __debugbreak();
        }
        else
        {
          LODWORD(uintValue) = 0;
        }
        v40 = BYTE1(uintValue) & 1;
        if ( (uintValue & 0x210) != 0 && v40 )
        {
          v41 = SL_ConvertToString(stringValue);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440924E0, 767i64, v41);
        }
        v61[1] = BYTE1(uintValue) & 1;
        v61[2] = (uintValue & 0x210) != 0;
        v42 = !v40 && (uintValue & 0x210) == 0;
        v32 = v58;
        v61[0] = v42;
        if ( !v61[v58] )
          goto LABEL_87;
        v43 = SL_ConvertToString(stringValue);
        LOBYTE(v57) = floatValue_low;
        AnimationTree = Scr_CreateAnimationTree(Object, namesa, animsa, childrena, v43, v30, filename, treeIndex, uintValue, v57, v63, user);
        childrena = AnimationTree;
LABEL_86:
        ConnectScriptToAnim(v14, namesa, v30++, filename, stringValue, treeIndex);
LABEL_88:
        v21 = user;
        PrevSibling = FindPrevSibling(v14, id);
        v29 = animsa;
        id = PrevSibling;
        if ( !PrevSibling )
          goto LABEL_91;
      }
      if ( v32 )
        goto LABEL_87;
      if ( v30 != (unsigned __int16)v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 583, ASSERT_TYPE_ASSERT, "( parentIndex == (unsigned short)parentIndex )", (const char *)&queryFormat, "parentIndex == (unsigned short)parentIndex") )
        __debugbreak();
      if ( v21 == 1 )
        v14->m_varPub.checksum = v30 + 31 * v14->m_varPub.checksum;
      v45 = SL_ConvertToString(v34);
      v46 = v45;
      if ( v45 )
      {
        if ( *v45 )
        {
LABEL_67:
          v47 = *v46;
          v48 = 0;
          v49 = 0i64;
          if ( *v46 )
          {
            while ( v47 != 64 )
            {
              v47 = v46[++v49];
              ++v48;
              if ( !v47 )
                goto LABEL_70;
            }
          }
          else
          {
LABEL_70:
            v48 = -1;
            v49 = -1i64;
          }
          v50 = -1i64;
          do
            ++v50;
          while ( v46[v50] );
          if ( v48 <= 0 )
          {
            v51 = (unsigned int)v50;
          }
          else
          {
            if ( (unsigned int)v50 <= v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.h", 78, ASSERT_TYPE_ASSERT, "(I_strlen( animName ) > static_cast<uint>(duplicateAt))", (const char *)&queryFormat, "I_strlen( animName ) > static_cast<uint>(duplicateAt)") )
              __debugbreak();
            if ( (unsigned int)v48 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.h", 79, ASSERT_TYPE_ASSERT, "(static_cast<uint>(duplicateAt) < bufferSize)", (const char *)&queryFormat, "static_cast<uint>(duplicateAt) < bufferSize") )
              __debugbreak();
            if ( v46[v49] != 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.h", 80, ASSERT_TYPE_ASSERT, "(animName[duplicateAt] == '@')", (const char *)&queryFormat, "animName[duplicateAt] == ANIMTREE_DUPLICATE_ANIM_TOKEN_SYM") )
              __debugbreak();
            v51 = v48;
          }
          Core_strncpy_and_fill_zero(dest, 0x100ui64, v46, v51);
          XAnimCreate(v29, v30, dest, 1);
          v32 = v58;
          AnimationTree = childrena;
          goto LABEL_86;
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.h", 74, ASSERT_TYPE_ASSERT, "(animName)", (const char *)&queryFormat, "animName") )
      {
        __debugbreak();
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.h", 55, ASSERT_TYPE_ASSERT, "(animName && animName[0])", (const char *)&queryFormat, "animName && animName[0]") )
        __debugbreak();
      goto LABEL_67;
    }
    AnimationTree = childrena;
LABEL_91:
    v21 = user;
    ++v32;
    v24 = nodeVar;
    v58 = v32;
  }
  while ( v32 < 3u );
  if ( customNodeIndex >= 0 && !XAnimTreeParser_RunPostParse(v29, customNodeIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 604, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "failed to post parse custom node parameters.") )
    __debugbreak();
  return AnimationTree;
}

/*
==============
Scr_EmitAnimation
==============
*/
void Scr_EmitAnimation(scrContext_t *scrContext, const char *pos, unsigned int animName, unsigned int sourcePos)
{
  unsigned int animTreeNames; 

  animTreeNames = scrContext->m_animPub.animTreeNames;
  if ( animTreeNames )
    Scr_EmitAnimationInternal(scrContext, pos, animName, animTreeNames, sourcePos);
  else
    CompileError(scrContext, sourcePos, "#using_animtree was not specified");
}

/*
==============
Scr_EmitAnimationInternal
==============
*/
void Scr_EmitAnimationInternal(scrContext_t *scrContext, const char *pos, unsigned int animName, unsigned int names)
{
  unsigned int Variable; 
  unsigned int v9; 
  unsigned int NewVariable; 
  VariableUnion *VariableValueAddress; 
  VariableValue value; 

  if ( !names && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 158, ASSERT_TYPE_ASSERT, "( names )", (const char *)&queryFormat, "names") )
    __debugbreak();
  Variable = FindVariable(scrContext, names, animName);
  v9 = Variable;
  if ( Variable )
  {
    Scr_EvalVariable_Out(scrContext, Variable, &value);
    if ( value.type != VAR_ANIM_TREE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 175, ASSERT_TYPE_ASSERT, "(tempValue.type == VAR_ANIM_TREE)", (const char *)&queryFormat, "tempValue.type == VAR_ANIM_TREE") )
      __debugbreak();
    VariableValueAddress = GetVariableValueAddress(scrContext, v9);
    *(VariableUnion *)pos = *VariableValueAddress;
    VariableValueAddress->scriptCodePosValue = (unsigned __int64)pos;
  }
  else
  {
    NewVariable = GetNewVariable(scrContext, names, animName);
    *(_QWORD *)pos = 0i64;
    value.type = VAR_ANIM_TREE;
    value.u.scriptCodePosValue = (unsigned __int64)pos;
    SetVariableValue(scrContext, NewVariable, &value);
  }
}

/*
==============
Scr_FindAnim
==============
*/
void Scr_FindAnim(const char *filename, const char *animName, scr_anim_t *anim, int user)
{
  scrContext_t *v8; 
  unsigned int v9; 
  unsigned int index[6]; 

  v8 = ScriptContext_GetFromAnimUser(user);
  LODWORD(animName) = SL_GetLowercaseString_(animName, 0, 4);
  v9 = Scr_UsingTreeInternal(filename, index, user, 0);
  Scr_EmitAnimationInternal(v8, (const char *)anim, (unsigned int)animName, v9);
  SL_RemoveRefToString((scr_string_t)animName);
}

/*
==============
Scr_FindAnimTree
==============
*/
scr_animtree_t Scr_FindAnimTree(scrContext_t *scrContext, const char *filename)
{
  unsigned int animtrees; 
  signed int CanonicalFilenameNoExtension; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int v8; 
  VariableValue out; 

  if ( !scrContext->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 964, ASSERT_TYPE_ASSERT, "( scrContext.m_animPub.animtree_loading )", (const char *)&queryFormat, "scrContext.m_animPub.animtree_loading") )
    __debugbreak();
  animtrees = scrContext->m_animPub.animtrees;
  CanonicalFilenameNoExtension = Scr_CreateCanonicalFilenameNoExtension(filename);
  Variable = FindVariable(scrContext, animtrees, CanonicalFilenameNoExtension);
  SL_RemoveRefToString((scr_string_t)CanonicalFilenameNoExtension);
  if ( !Variable )
    return 0i64;
  if ( GetVariableName(scrContext, Variable) >= 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 977, ASSERT_TYPE_ASSERT, "( GetVariableName( scrContext, fileVariableID ) < MEMORY_NODE_COUNT )", (const char *)&queryFormat, "GetVariableName( scrContext, fileVariableID ) < SL_MAX_STRING_INDEX") )
    __debugbreak();
  GetVariableName(scrContext, Variable);
  Object = FindObject(scrContext, Variable);
  if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 982, ASSERT_TYPE_ASSERT, "( fileId )", (const char *)&queryFormat, "fileId") )
    __debugbreak();
  v8 = FindVariable(scrContext, Object, 1u);
  if ( !v8 )
    return 0i64;
  Scr_EvalVariable_Out(scrContext, v8, &out);
  if ( out.type != VAR_ANIM_TREE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 989, ASSERT_TYPE_ASSERT, "( tempValue.type == VAR_ANIM_TREE )", (const char *)&queryFormat, "tempValue.type == VAR_ANIM_TREE") )
    __debugbreak();
  return (scr_animtree_t)out.u.scriptCodePosValue;
}

/*
==============
Scr_FindAnimTreeID
==============
*/
__int64 Scr_FindAnimTreeID(const char *filename, int user)
{
  unsigned int index; 

  Scr_UsingTreeInternal(filename, &index, user, 0);
  return index;
}

/*
==============
Scr_GetASMBlendTreeNames
==============
*/
unsigned int Scr_GetASMBlendTreeNames(scrContext_t *scrContext, scr_string_t listName, unsigned int listType)
{
  unsigned int animtrees; 
  unsigned int Variable; 
  unsigned int NewVariable; 
  unsigned int Object; 
  unsigned int v10; 

  if ( !scrContext->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1055, ASSERT_TYPE_ASSERT, "( scrContext.m_animPub.animtree_loading )", (const char *)&queryFormat, "scrContext.m_animPub.animtree_loading") )
    __debugbreak();
  animtrees = scrContext->m_animPub.animtrees;
  Variable = FindVariable(scrContext, animtrees, listName);
  if ( Variable )
  {
    Object = FindObject(scrContext, Variable);
  }
  else
  {
    NewVariable = GetNewVariable(scrContext, animtrees, listName);
    Object = GetObjectInternal(scrContext, NewVariable);
  }
  v10 = GetVariable(scrContext, Object, listType);
  return GetArray(scrContext, v10);
}

/*
==============
Scr_GetAnims
==============
*/
XAnim_s *Scr_GetAnims(const scrContext_t *scrContext, unsigned int index)
{
  __int64 v2; 

  v2 = index;
  if ( index && index <= scrContext->m_animPub.xanim_num[1] )
    return scrContext->m_animPub.xanim_lookup[1][index].anims;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 441, ASSERT_TYPE_ASSERT, "( 1 ) <= ( index ) && ( index ) <= ( scrContext.m_animPub.xanim_num[animUser] )", "index not in [1, scrContext.m_animPub.xanim_num[animUser]]\n\t%i not in [%i, %i]", index, 1, scrContext->m_animPub.xanim_num[1]) )
    __debugbreak();
  return scrContext->m_animPub.xanim_lookup[1][v2].anims;
}

/*
==============
Scr_GetAnimsIndex
==============
*/
__int64 Scr_GetAnimsIndex(const XAnim_s *anims, unsigned int user)
{
  __int64 v3; 
  scrContext_t *v4; 
  unsigned __int64 v5; 
  __int64 result; 
  __int64 v7; 

  v3 = user;
  v4 = ScriptContext_GetFromAnimUser(user);
  v5 = (unsigned __int64)v4->m_animPub.xanim_lookup[(unsigned __int64)(unsigned int)v3];
  result = (int)v4->m_animPub.xanim_num[v3];
  v7 = result;
  if ( (_DWORD)result )
  {
    do
    {
      if ( *(const XAnim_s **)(v5 + 8 * v7) == anims )
        break;
      result = (unsigned int)(result - 1);
      --v7;
    }
    while ( v7 );
  }
  return result;
}

/*
==============
Scr_IsSharedParameterAIASMTree
==============
*/
bool Scr_IsSharedParameterAIASMTree(scrContext_t *scrContext, scr_string_t treeName)
{
  return Scr_IsSharedParameterTree(scrContext, treeName, 0);
}

/*
==============
Scr_IsSharedParameterPlayerTree
==============
*/
bool Scr_IsSharedParameterPlayerTree(scrContext_t *scrContext, scr_string_t treeName)
{
  return Scr_IsSharedParameterTree(scrContext, treeName, 1u);
}

/*
==============
Scr_IsSharedParameterTree
==============
*/
bool Scr_IsSharedParameterTree(scrContext_t *scrContext, scr_string_t treeName, unsigned int listType)
{
  unsigned int ASMBlendTreeNames; 

  if ( !treeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1139, ASSERT_TYPE_ASSERT, "(treeName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "treeName != NULL_SCR_STRING") )
    __debugbreak();
  ASMBlendTreeNames = Scr_GetASMBlendTreeNames(scrContext, scr_const.parserSharedParameterTreeNames, listType);
  if ( ASMBlendTreeNames )
    LOBYTE(ASMBlendTreeNames) = FindVariable(scrContext, ASMBlendTreeNames, treeName) != 0;
  return ASMBlendTreeNames;
}

/*
==============
Scr_LoadAnimTreeAtIndex
==============
*/
void Scr_LoadAnimTreeAtIndex(unsigned int index, void *(*Alloc)(unsigned __int64), int user, const ScrThreadMode threadMode)
{
  __int64 v4; 
  __int64 v5; 
  scrContext_t *v6; 
  scrAnimPub_t *p_m_animPub; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  const char *v16; 
  const char *sourceBuf; 
  const char *v18; 
  const char *scriptExtFilename; 
  scr_string_t v20; 
  const char *v21; 
  XAnim_s *Anims; 
  unsigned int AnimTreeSize; 
  XAnimOwner v24; 
  const char *v25; 
  scr_string_t String; 
  int v27; 
  unsigned int FirstSibling; 
  scr_string_t SiblingName; 
  VariableUnion *VariableValueAddress; 
  const char *v31; 
  const char *v32; 
  char *v33; 
  unsigned int v34; 
  XAnimSyncGroupID syncGroup; 
  scr_string_t stringValue; 
  unsigned int parentId; 
  unsigned int v41; 
  VariableValue value; 
  char dest[128]; 

  v4 = user;
  v5 = index;
  v6 = ScriptContext_GetFromAnimUser(user);
  p_m_animPub = &v6->m_animPub;
  if ( !v6->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 813, ASSERT_TYPE_ASSERT, "( pScrAnimPub->animtree_loading )", (const char *)&queryFormat, "pScrAnimPub->animtree_loading") )
    __debugbreak();
  v8 = v5 + (v4 << 7);
  v9 = v6->m_animGlob.using_xanim_lookup[0][v8];
  Scr_Mem_TempCheckClear(v6);
  if ( GetVariableName(v6, v9) >= 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 819, ASSERT_TYPE_ASSERT, "( GetVariableName( scrContext, id ) < MEMORY_NODE_COUNT )", (const char *)&queryFormat, "GetVariableName( scrContext, id ) < SL_MAX_STRING_INDEX") )
    __debugbreak();
  stringValue = GetVariableName(v6, v9);
  parentId = FindObject(v6, v9);
  if ( !parentId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 824, ASSERT_TYPE_ASSERT, "( fileId )", (const char *)&queryFormat, "fileId") )
    __debugbreak();
  if ( !FindVariable(v6, parentId, 1u) )
  {
    Variable = FindVariable(v6, parentId, 0);
    if ( Variable )
    {
      Object = FindObject(v6, Variable);
      if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 839, ASSERT_TYPE_ASSERT, "( names )", (const char *)&queryFormat, "names") )
        __debugbreak();
      v12 = FindVariable(v6, parentId, 2u);
      v41 = v12;
      if ( v12 )
        v13 = FindObject(v6, v12);
      else
        v13 = 0;
      if ( v6->m_animPub.animtree_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 844, ASSERT_TYPE_ASSERT, "( !pScrAnimPub->animtree_node )", (const char *)&queryFormat, "!pScrAnimPub->animtree_node") )
        __debugbreak();
      v14 = Scr_AllocArray(v6);
      v6->m_animPub.animtree_node = v14;
      v15 = v14;
      v6->m_animPub.animtree_parsing = 1;
      v16 = SL_ConvertToString(stringValue);
      Com_sprintf<128>((char (*)[128])dest, "animtrees/%s.atr", v16);
      sourceBuf = v6->m_parserPub.sourceBuf;
      v18 = Scr_AddSourceBuffer(v6, dest, NULL, 1, threadMode, -1);
      if ( v18 && (scriptExtFilename = v6->m_parserPub.scriptExtFilename, v6->m_parserPub.scriptExtFilename = dest, AnimTreeParser_Parse(v6, v18, v15, Object, v13, v6->m_animGlob.bAnimCheck != 0), v6->m_parserPub.scriptExtFilename = scriptExtFilename, v6->m_parserPub.sourceBuf = sourceBuf, Scr_Mem_TempClear(v6), GetArraySize(v6, v15)) )
      {
        v20 = stringValue;
      }
      else
      {
        v20 = stringValue;
        v21 = SL_ConvertToString(stringValue);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144092880, 768i64, v21);
      }
      Scr_Mem_TempCheckClear(v6);
      Anims = AnimTreeParser_CreateAnims(v6, v20, v6->m_animPub.animtree_node, Alloc);
      AnimTreeSize = XAnimGetAnimTreeSize(Anims);
      if ( AnimTreeParser_ShouldRegisterAtr() )
      {
        LOBYTE(v24) = user == 0;
        XAnimSubTreeRegistry_Register(Anims, v24);
        v25 = SL_ConvertToString(v20);
        Cloth_XAnimNode_RegisterAnimTree(v25, Anims, user);
      }
      String = j_SL_GetString_("root", 0, 4);
      ConnectScriptToAnim(v6, Object, 0, stringValue, String, index);
      SL_RemoveRefToString(String);
      v27 = user;
      LOBYTE(syncGroup) = 4;
      if ( (unsigned int)Scr_CreateAnimationTree(v6->m_animPub.animtree_node, Object, Anims, 1u, "root", 0, stringValue, index, 0, syncGroup, 5u, user) != AnimTreeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 885, ASSERT_TYPE_ASSERT, "((Scr_CreateAnimationTree( pScrAnimPub->animtree_node, names, animtree.anims, 1, \"root\", 0, filenameId, index, 0, XAnimSyncGroupID::NONE, XANIM_LOD_NONE, user )) == (size))", (const char *)&queryFormat, "Scr_CreateAnimationTree( pScrAnimPub->animtree_node, names, animtree.anims, 1, \"root\", 0, filenameId, index, 0, XAnimSyncGroupID::NONE, XANIM_LOD_NONE, user ) == size") )
        __debugbreak();
      XAnimSetupBindingIndexes(Anims);
      XAnimSetupSyncNodes(Anims);
      p_m_animPub->xanim_lookup[0][v8].anims = Anims;
      FirstSibling = FindFirstSibling(v6, Object);
      if ( FirstSibling )
      {
        do
        {
          SiblingName = GetSiblingName(v6, FirstSibling);
          if ( (unsigned int)SiblingName >= 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 622, ASSERT_TYPE_ASSERT, "( name < MEMORY_NODE_COUNT )", (const char *)&queryFormat, "name < SL_MAX_STRING_INDEX") )
            __debugbreak();
          VariableValueAddress = GetVariableValueAddress(v6, FirstSibling);
          if ( VariableValueAddress->scriptCodePosValue )
          {
            if ( Cloth_XAnimNode_IsClothNodeName(SiblingName) )
            {
              Cloth_XAnimNode_NoClothNodeFound(Anims, v27);
            }
            else
            {
              v31 = SL_ConvertToString(stringValue);
              v32 = SL_ConvertToString(SiblingName);
              v33 = j_va("animation '%s' not defined in anim tree '%s'", v32, v31);
              if ( Scr_IsInOpcodeMemory(v6, VariableValueAddress->codePosValue) )
                CompileError2(v6, VariableValueAddress->codePosValue, (const char *)&queryFormat, v33);
              else
                Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143FB69FC, v33);
              v27 = user;
            }
          }
          FirstSibling = FindNextSibling(v6, FirstSibling);
        }
        while ( FirstSibling );
        p_m_animPub = &v6->m_animPub;
      }
      RemoveVariable(v6, parentId, 0);
      if ( v41 )
        RemoveVariable(v6, parentId, 2u);
      RemoveRefToObject(v6, p_m_animPub->animtree_node);
      p_m_animPub->animtree_node = 0;
      value.type = VAR_ANIM_TREE;
      value.u.scriptCodePosValue = (unsigned __int64)Anims;
      v34 = GetVariable(v6, parentId, 1u);
      SetVariableValue(v6, v34, &value);
    }
    else
    {
      p_m_animPub->xanim_lookup[0][v8].anims = NULL;
    }
  }
}

/*
==============
Scr_RegisterAlias
==============
*/
void Scr_RegisterAlias(const char *filename, scr_string_t aliasName, scr_string_t animName, int user)
{
  scrContext_t *v8; 
  unsigned int v9; 
  unsigned int Variable; 
  unsigned int Array; 
  unsigned int index; 

  v8 = ScriptContext_GetFromAnimUser(user);
  if ( !aliasName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1041, ASSERT_TYPE_ASSERT, "(aliasName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "aliasName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !animName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1042, ASSERT_TYPE_ASSERT, "(animName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "animName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !v8->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1043, ASSERT_TYPE_ASSERT, "( scrContext.m_animPub.animtree_loading )", (const char *)&queryFormat, "scrContext.m_animPub.animtree_loading") )
    __debugbreak();
  if ( v8->m_animPub.animtree_parsing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1044, ASSERT_TYPE_ASSERT, "(!scrContext.m_animPub.animtree_parsing)", "%s\n\tScr_RegisterAlias() must be invoked before Scr_LoadAnimTreeAtIndex().", "!scrContext.m_animPub.animtree_parsing") )
    __debugbreak();
  v9 = Scr_UsingTreeInternal(filename, &index, user, 2u);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1024, ASSERT_TYPE_ASSERT, "(names)", (const char *)&queryFormat, "names") )
    __debugbreak();
  Variable = GetVariable(v8, v9, aliasName);
  Array = GetArray(v8, Variable);
  GetVariable(v8, Array, animName);
}

/*
==============
Scr_RegisterSharedParameterAIASMTreeName
==============
*/
void Scr_RegisterSharedParameterAIASMTreeName(scrContext_t *scrContext, scr_string_t treeName)
{
  Scr_RegisterSharedParameterTreeName(scrContext, treeName, 0);
}

/*
==============
Scr_RegisterSharedParameterPlayerTreeName
==============
*/
void Scr_RegisterSharedParameterPlayerTreeName(scrContext_t *scrContext, scr_string_t treeName)
{
  Scr_RegisterSharedParameterTreeName(scrContext, treeName, 1u);
}

/*
==============
Scr_RegisterSharedParameterTreeName
==============
*/
void Scr_RegisterSharedParameterTreeName(scrContext_t *scrContext, scr_string_t treeName, unsigned int listType)
{
  unsigned int ASMBlendTreeNames; 

  if ( !treeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1078, ASSERT_TYPE_ASSERT, "(treeName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "treeName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !scrContext->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1079, ASSERT_TYPE_ASSERT, "( scrContext.m_animPub.animtree_loading )", (const char *)&queryFormat, "scrContext.m_animPub.animtree_loading") )
    __debugbreak();
  if ( scrContext->m_animPub.animtree_parsing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1080, ASSERT_TYPE_ASSERT, "(!scrContext.m_animPub.animtree_parsing)", "%s\n\tScr_RegisterSharedParameterTreeName() must be invoked before Scr_LoadAnimTreeAtIndex().", "!scrContext.m_animPub.animtree_parsing") )
    __debugbreak();
  ASMBlendTreeNames = Scr_GetASMBlendTreeNames(scrContext, scr_const.parserSharedParameterTreeNames, listType);
  if ( !ASMBlendTreeNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 1083, ASSERT_TYPE_ASSERT, "(names)", (const char *)&queryFormat, "names") )
    __debugbreak();
  if ( !FindVariable(scrContext, ASMBlendTreeNames, treeName) )
    GetNewVariable(scrContext, ASMBlendTreeNames, treeName);
}

/*
==============
Scr_UsingTree
==============
*/
void Scr_UsingTree(const char *filename, unsigned int sourcePos, int user)
{
  scrContext_t *v5; 

  v5 = ScriptContext_GetFromAnimUser(user);
  v5->m_animPub.animTreeNames = Scr_UsingTreeInternal(filename, &v5->m_animPub.animTreeIndex, user, 0);
}

/*
==============
Scr_UsingTreeInternal
==============
*/
__int64 Scr_UsingTreeInternal(const char *filename, unsigned int *index, int user, unsigned int subArrayType)
{
  __int64 v4; 
  scrContext_t *v8; 
  signed int CanonicalFilenameNoExtension; 
  unsigned int Variable; 
  unsigned int *v11; 
  unsigned int v12; 
  unsigned int NewVariable; 
  unsigned int ObjectInternal; 
  unsigned int v15; 
  unsigned int Object; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int Array; 

  v4 = user;
  v8 = ScriptContext_GetFromAnimUser(user);
  if ( !v8->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 690, ASSERT_TYPE_ASSERT, "( pScrAnimPub->animtree_loading )", (const char *)&queryFormat, "pScrAnimPub->animtree_loading") )
    __debugbreak();
  CanonicalFilenameNoExtension = Scr_CreateCanonicalFilenameNoExtension(filename);
  Variable = FindVariable(v8, v8->m_animPub.animtrees, CanonicalFilenameNoExtension);
  v11 = &v8->m_animPub.xanim_num[v4];
  v12 = Variable;
  if ( Variable )
  {
    Object = FindObject(v8, Variable);
    v17 = 1;
    *index = 0;
    v15 = Object;
    if ( !*v11 )
      goto LABEL_14;
    while ( v8->m_animGlob.using_xanim_lookup[v4][v17] != v12 )
    {
      if ( ++v17 > *v11 )
        goto LABEL_14;
    }
    *index = v17;
    if ( !v17 )
    {
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 722, ASSERT_TYPE_ASSERT, "( *index )", (const char *)&queryFormat, "*index") )
        __debugbreak();
    }
  }
  else
  {
    NewVariable = GetNewVariable(v8, v8->m_animPub.animtrees, CanonicalFilenameNoExtension);
    ObjectInternal = GetObjectInternal(v8, NewVariable);
    ++*v11;
    v15 = ObjectInternal;
    if ( *v11 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 701, ASSERT_TYPE_ASSERT, "( pScrAnimPub->xanim_num[user] < 128 )", (const char *)&queryFormat, "pScrAnimPub->xanim_num[user] < MAX_XANIMTREE_NUM") )
      __debugbreak();
    *index = *v11;
    v8->m_animGlob.using_xanim_lookup[v4][*v11] = NewVariable;
  }
  if ( FindVariable(v8, v15, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree.cpp", 725, ASSERT_TYPE_ASSERT, "( !FindVariable( scrContext, fileId, ANIMTREE_XANIM ) )", (const char *)&queryFormat, "!FindVariable( scrContext, fileId, ANIMTREE_XANIM )") )
    __debugbreak();
  v18 = GetVariable(v8, v15, subArrayType);
  Array = GetArray(v8, v18);
  SL_RemoveRefToString((scr_string_t)CanonicalFilenameNoExtension);
  return Array;
}

/*
==============
SetAnimCheck
==============
*/
void SetAnimCheck(scrContext_t *scrContext, int bAnimCheck)
{
  scrContext->m_animGlob.bAnimCheck = bAnimCheck;
}

