/*
==============
AnimTreeParser_Parse
==============
*/

void __fastcall AnimTreeParser_Parse(scrContext_t *scrContext, const char *text, unsigned int rootNodeVar, unsigned int existingNamesVar, unsigned int existingAliasNames, bool checkAnimsExist)
{
  ?AnimTreeParser_Parse@@YAXAEAUscrContext_t@@PEBDIII_N@Z(scrContext, text, rootNodeVar, existingNamesVar, existingAliasNames, checkAnimsExist);
}

/*
==============
AnimTreeParser_ShouldRegisterAtr
==============
*/

bool __fastcall AnimTreeParser_ShouldRegisterAtr()
{
  return ?AnimTreeParser_ShouldRegisterAtr@@YA_NXZ();
}

/*
==============
AnimTreeParser_ApplyNodeParameterBindings
==============
*/

unsigned int __fastcall AnimTreeParser_ApplyNodeParameterBindings(scrContext_t *scrContext, XAnim_s *anims, unsigned int animIndex, unsigned int nodeVariable)
{
  return ?AnimTreeParser_ApplyNodeParameterBindings@@YAIAEAUscrContext_t@@PEAUXAnim_s@@II@Z(scrContext, anims, animIndex, nodeVariable);
}

/*
==============
AnimTreeParser_CreateAnims
==============
*/

XAnim_s *__fastcall AnimTreeParser_CreateAnims(scrContext_t *scrContext, scr_string_t fileName, unsigned int rootNodeVar, void *(__fastcall *allocFunction)(unsigned __int64))
{
  return ?AnimTreeParser_CreateAnims@@YAPEAUXAnim_s@@AEAUscrContext_t@@W4scr_string_t@@IP6APEAX_K@Z@Z(scrContext, fileName, rootNodeVar, allocFunction);
}

/*
==============
AnimTreeParser_GetNodeTypeWithDefault
==============
*/

XAnimNodeTypeID __fastcall AnimTreeParser_GetNodeTypeWithDefault(scrContext_t *scrContext, unsigned int nodeVar, XAnimNodeTypeID defaultIfMissing)
{
  return ?AnimTreeParser_GetNodeTypeWithDefault@@YA?AW4XAnimNodeTypeID@@AEAUscrContext_t@@IW41@@Z(scrContext, nodeVar, defaultIfMissing);
}

/*
==============
XAnimTreeParser_RunPostParse
==============
*/

bool __fastcall XAnimTreeParser_RunPostParse(XAnim_s *anims, int customNodeIndex)
{
  return ?XAnimTreeParser_RunPostParse@@YA_NPEAUXAnim_s@@H@Z(anims, customNodeIndex);
}

/*
==============
AnimTreeParser_GetNodeType
==============
*/

XAnimNodeTypeID __fastcall AnimTreeParser_GetNodeType(scrContext_t *scrContext, unsigned int nodeVar)
{
  return ?AnimTreeParser_GetNodeType@@YA?AW4XAnimNodeTypeID@@AEAUscrContext_t@@I@Z(scrContext, nodeVar);
}

/*
==============
AnimTreeParser_FindAtrSubTreeID
==============
*/

XAnimSubTreeID __fastcall AnimTreeParser_FindAtrSubTreeID(const char *name)
{
  return ?AnimTreeParser_FindAtrSubTreeID@@YA?AW4XAnimSubTreeID@@PEBD@Z(name);
}

/*
==============
AnimTreeParser_ApplyConstantBindings
==============
*/
__int64 AnimTreeParser_ApplyConstantBindings(scrContext_t *scrContext, XAnim_s *anims, unsigned int animIndex, unsigned int nodeVariable)
{
  unsigned int ArrayVariable; 
  unsigned int Object; 
  XAnimNodeTypeID v10; 
  unsigned int v11; 
  unsigned int i; 
  scr_string_t SiblingName; 
  __int16 v15; 
  bool v16; 
  __int64 uintValue; 
  unsigned __int16 v18; 
  __int64 intValue; 
  scr_string_t v21; 
  scr_string_t v22; 
  const char *v23; 
  const char *v25; 
  XAnimFieldType fmt; 
  XAnimFieldType outParameterType; 
  XAnimNodeTypeID NodeType; 

  if ( animIndex >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1562, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  ArrayVariable = FindArrayVariable(scrContext, nodeVariable, 2);
  if ( !ArrayVariable )
    return 0i64;
  Object = FindObject(scrContext, ArrayVariable);
  if ( !Object )
    return 0i64;
  NodeType = AnimTreeParser_GetNodeType(scrContext, nodeVariable);
  v10 = NodeType;
  v11 = 0;
  for ( i = FindFirstSibling(scrContext, Object); i; i = FindNextSibling(scrContext, i) )
  {
    SiblingName = GetSiblingName(scrContext, i);
    if ( !SiblingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1577, ASSERT_TYPE_ASSERT, "(nodeParamName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "nodeParamName != NULL_SCR_STRING") )
      __debugbreak();
    _RDI = GetVariableValueAddress(scrContext, i);
    if ( XAnimFindCustomNodeParameter(v10, SiblingName, &outParameterType) )
    {
      v15 = outParameterType;
      switch ( (__int16)outParameterType )
      {
        case 1:
          v16 = XAnimBindBoolToNodeParameter(anims, animIndex, SiblingName, _RDI->intValue != 0);
          goto LABEL_29;
        case 2:
          uintValue = _RDI->uintValue;
          if ( (unsigned int)uintValue > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)uintValue, "unsigned", uintValue) )
            __debugbreak();
          v16 = XAnimBindByteToNodeParameter(anims, animIndex, SiblingName, uintValue);
          goto LABEL_29;
        case 3:
          v16 = XAnimBindUInt32ToNodeParameter(anims, animIndex, SiblingName, _RDI->intValue);
          goto LABEL_29;
        case 4:
          v16 = XAnimBindInt32ToNodeParameter(anims, animIndex, SiblingName, _RDI->intValue);
          goto LABEL_29;
        case 5:
          v18 = truncate_cast<unsigned short,unsigned int>(_RDI->intValue);
          v16 = XAnimBindUInt16ToNodeParameter(anims, animIndex, SiblingName, v18);
          goto LABEL_29;
        case 6:
          intValue = _RDI->intValue;
          if ( (unsigned int)(intValue + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)intValue, "signed", intValue) )
            __debugbreak();
          v16 = XAnimBindInt16ToNodeParameter(anims, animIndex, SiblingName, intValue);
          goto LABEL_29;
        case 7:
          __asm { vmovss  xmm3, dword ptr [rdi]; jumptable 000000014151159B case 7 }
          v16 = XAnimBindFloatToNodeParameter(anims, animIndex, SiblingName, *(float *)&_XMM3);
          goto LABEL_29;
        case 8:
          v16 = XAnimBindVec2ToNodeParameter(anims, animIndex, SiblingName, (const vec2_t *)_RDI->vectorValue);
          goto LABEL_29;
        case 9:
          v16 = XAnimBindVec3ToNodeParameter(anims, animIndex, SiblingName, (const vec3_t *)_RDI->vectorValue);
          goto LABEL_29;
        case 11:
          v21 = truncate_cast<enum scr_string_t,unsigned int>(_RDI->intValue);
          v16 = XAnimBindStringToNodeParameter(anims, animIndex, SiblingName, v21);
          goto LABEL_29;
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
          v22 = truncate_cast<enum scr_string_t,unsigned int>(_RDI->intValue);
          LOWORD(fmt) = v15;
          v16 = XAnimBindArrayToNodeParameter(anims, animIndex, SiblingName, v22, fmt);
LABEL_29:
          if ( !v16 )
            goto LABEL_30;
          goto LABEL_32;
        default:
LABEL_30:
          v23 = SL_ConvertToString(SiblingName);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1644, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "failed to bind constant value to node parameter '%s'", v23) )
            __debugbreak();
LABEL_32:
          v10 = NodeType;
          break;
      }
    }
    else
    {
      v25 = SL_ConvertToString(SiblingName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "cannot find node parameter '%s'", v25) )
        __debugbreak();
    }
    ++v11;
  }
  return v11;
}

/*
==============
AnimTreeParser_ApplyDynamicBindings
==============
*/
__int64 AnimTreeParser_ApplyDynamicBindings(scrContext_t *scrContext, XAnim_s *anims, unsigned int animIndex, unsigned int nodeVariable)
{
  unsigned int ArrayVariable; 
  unsigned int Object; 
  unsigned int v10; 
  unsigned int i; 
  unsigned int v12; 
  scr_string_t SiblingName; 
  unsigned int v14; 
  int intValue; 
  unsigned int v16; 
  int v17; 

  if ( animIndex >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1526, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  ArrayVariable = FindArrayVariable(scrContext, nodeVariable, 3);
  if ( !ArrayVariable )
    return 0i64;
  Object = FindObject(scrContext, ArrayVariable);
  if ( !Object )
    return 0i64;
  v10 = 0;
  for ( i = FindFirstSibling(scrContext, Object); i; i = FindNextSibling(scrContext, i) )
  {
    v12 = FindObject(scrContext, i);
    SiblingName = GetSiblingName(scrContext, i);
    if ( !SiblingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1539, ASSERT_TYPE_ASSERT, "(nodeParamName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "nodeParamName != NULL_SCR_STRING") )
      __debugbreak();
    v14 = FindArrayVariable(scrContext, v12, 0);
    if ( v14 )
      intValue = GetVariableValueAddress(scrContext, v14)->intValue;
    else
      intValue = 0;
    v16 = FindArrayVariable(scrContext, v12, 1);
    if ( v16 )
      v17 = GetVariableValueAddress(scrContext, v16)->intValue;
    else
      v17 = 0;
    if ( !intValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1543, ASSERT_TYPE_ASSERT, "(gameParamName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "gameParamName != NULL_SCR_STRING") )
      __debugbreak();
    if ( v17 )
      XAnimBindGameParameterFieldToNodeParameterByName(anims, animIndex, (scr_string_t)intValue, (scr_string_t)v17, SiblingName);
    else
      XAnimBindGameParameterToNodeParameterByName(anims, animIndex, (scr_string_t)intValue, SiblingName);
    ++v10;
  }
  return v10;
}

/*
==============
AnimTreeParser_ApplyNodeParameterBindings
==============
*/
__int64 AnimTreeParser_ApplyNodeParameterBindings(scrContext_t *scrContext, XAnim_s *anims, unsigned int animIndex, unsigned int nodeVariable)
{
  int v8; 

  if ( animIndex >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1668, ASSERT_TYPE_ASSERT, "(animIndex < anims->size)", (const char *)&queryFormat, "animIndex < anims->size") )
    __debugbreak();
  v8 = AnimTreeParser_ApplyDynamicBindings(scrContext, anims, animIndex, nodeVariable);
  return v8 + (unsigned int)AnimTreeParser_ApplyConstantBindings(scrContext, anims, animIndex, nodeVariable);
}

/*
==============
AnimTreeParser_CreateAnims
==============
*/
XAnim_s *AnimTreeParser_CreateAnims(scrContext_t *scrContext, scr_string_t fileName, unsigned int rootNodeVar, void *(*allocFunction)(unsigned __int64))
{
  unsigned int v4; 
  unsigned int i; 
  unsigned int *AgentAnimParameterNameByIndex; 
  unsigned int j; 
  unsigned int *PlayerAnimParameterNameByIndex; 
  unsigned int v12; 
  const char *v13; 
  XAnimSubTreeID v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  XAnim_s *AnimsWithParameters; 
  unsigned __int16 numGameParameters; 
  unsigned __int16 v20; 
  unsigned int k; 
  scr_string_t VariableName; 
  const scr_string_t *v23; 
  unsigned int ArrayVariable; 
  unsigned int Object; 
  unsigned int v26; 
  unsigned int ArraySize; 
  unsigned int v28; 
  unsigned int v30; 
  __int64 maxPublicNodes; 
  void *(__fastcall *Alloc)(unsigned __int64); 
  unsigned int node[2]; 
  AnimTreeParser_Summary outSummary; 
  float lodDistances[4]; 

  v4 = 0;
  node[0] = rootNodeVar;
  *(_QWORD *)&outSummary.numGameParameters = 0i64;
  *(_QWORD *)&outSummary.numNodes = 0i64;
  outSummary.numSharedParameters = 0;
  outSummary.fileName = fileName;
  outSummary.gameParameterNames = Scr_AllocArray(scrContext);
  if ( !outSummary.gameParameterNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1777, ASSERT_TYPE_ASSERT, "(gameParameterNames)", (const char *)&queryFormat, "gameParameterNames") )
    __debugbreak();
  if ( Scr_IsSharedParameterAIASMTree(scrContext, fileName) )
  {
    for ( i = 0; i < 0x21; ++i )
    {
      AgentAnimParameterNameByIndex = (unsigned int *)GetAgentAnimParameterNameByIndex(i);
      if ( *AgentAnimParameterNameByIndex && !FindVariable(scrContext, outSummary.gameParameterNames, *AgentAnimParameterNameByIndex) )
      {
        GetVariable(scrContext, outSummary.gameParameterNames, *AgentAnimParameterNameByIndex);
        ++outSummary.numSharedParameters;
      }
    }
  }
  if ( Scr_IsSharedParameterPlayerTree(scrContext, fileName) )
  {
    for ( j = 0; j < 0x41; ++j )
    {
      PlayerAnimParameterNameByIndex = (unsigned int *)BG_GetPlayerAnimParameterNameByIndex(j);
      if ( *PlayerAnimParameterNameByIndex && !FindVariable(scrContext, outSummary.gameParameterNames, *PlayerAnimParameterNameByIndex) )
      {
        GetVariable(scrContext, outSummary.gameParameterNames, *PlayerAnimParameterNameByIndex);
        ++outSummary.numSharedParameters;
      }
    }
  }
  v12 = node[0];
  AnimTreeParser_GetSummaryRecursive(scrContext, node[0], &outSummary);
  outSummary.numGameParameters = GetArraySize(scrContext, outSummary.gameParameterNames);
  if ( outSummary.numNodes <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1881, ASSERT_TYPE_ASSERT, "( treeInfo.numNodes > 0 )", (const char *)&queryFormat, "treeInfo.numNodes > 0") )
    __debugbreak();
  v13 = SL_ConvertToString(fileName);
  if ( !NetConstStrings_GetAtrIndex(v13, node) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144094150, 856i64, v13);
  v14 = LOWORD(node[0]) + 1;
  if ( LOWORD(node[0]) == 0xFFFF )
  {
    v15 = "subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT";
    v16 = 1891;
    v17 = "(subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)";
  }
  else
  {
    if ( (unsigned __int16)v14 < XANIM_MAX_SUBTREES )
      goto LABEL_27;
    v15 = "subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES";
    v16 = 1892;
    v17 = "(subTreeID < XAnimSubTreeID::XANIM_MAX_SUBTREES)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", v16, ASSERT_TYPE_ASSERT, v17, (const char *)&queryFormat, v15) )
    __debugbreak();
LABEL_27:
  AnimsWithParameters = XAnimCreateAnimsWithParameters(v13, v14, outSummary.numNodes, outSummary.numGameParameters, outSummary.numParameterBindings, outSummary.numPublicNodes, allocFunction);
  numGameParameters = outSummary.numGameParameters;
  *(_QWORD *)node = AnimsWithParameters;
  if ( (outSummary.numGameParameters < 0 || outSummary.numGameParameters > 0xFFFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", LOWORD(outSummary.numGameParameters), "signed", outSummary.numGameParameters) )
    __debugbreak();
  XAnimSetNumGameParameters(AnimsWithParameters, numGameParameters);
  v20 = 0;
  for ( k = FindLastSibling(scrContext, outSummary.gameParameterNames); k; k = FindPrevSibling(scrContext, k) )
  {
    VariableName = GetVariableName(scrContext, k);
    v23 = XAnimRegisterConstString(VariableName);
    XAnimSetGameParameterName(AnimsWithParameters, v20++, v23);
  }
  ArrayVariable = FindArrayVariable(scrContext, v12, 6);
  if ( ArrayVariable )
  {
    Object = FindObject(scrContext, ArrayVariable);
    v26 = Object;
    if ( Object )
    {
      ArraySize = GetArraySize(scrContext, Object);
      v28 = ArraySize;
      if ( ArraySize > 4 )
      {
        LODWORD(Alloc) = 4;
        LODWORD(maxPublicNodes) = ArraySize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1917, ASSERT_TYPE_ASSERT, "( numLods ) <= ( XANIM_LOD_MAX )", "numLods not in [0, XANIM_LOD_MAX]\n\t%u not in [0, %u]", maxPublicNodes, Alloc) )
          __debugbreak();
      }
      if ( v28 )
      {
        _RDI = lodDistances;
        do
        {
          v30 = GetArrayVariable(scrContext, v26, v4);
          _RAX = GetVariableValueAddressConst(scrContext, v30);
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vmovss  dword ptr [rdi], xmm0
          }
          if ( v4 )
          {
            _RAX = v4 - 1;
            __asm { vcomiss xmm0, [rbp+rax*4+57h+lodDistances] }
          }
          ++v4;
          ++_RDI;
        }
        while ( v4 < v28 );
        AnimsWithParameters = *(XAnim_s **)node;
      }
      XAnimSetupLodDistances(AnimsWithParameters, v28, lodDistances);
    }
  }
  RemoveRefToObject(scrContext, outSummary.gameParameterNames);
  return AnimsWithParameters;
}

/*
==============
AnimTreeParser_CreatePlaceholderAnimation
==============
*/
void AnimTreeParser_CreatePlaceholderAnimation(scrContext_t *scrContext, unsigned int parentNode, bool looping)
{
  const char *v4; 
  signed int String; 

  v4 = "void";
  if ( looping )
    v4 = "void_loop";
  String = j_SL_GetString_(v4, 0, 4);
  GetVariable(scrContext, parentNode, String);
  SL_RemoveRefToString((scr_string_t)String);
}

/*
==============
AnimTreeParser_FindAtrSubTreeID
==============
*/
XAnimSubTreeID AnimTreeParser_FindAtrSubTreeID(const char *name)
{
  unsigned int outAtrIndex; 

  if ( !NetConstStrings_GetAtrIndex(name, &outAtrIndex) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144094150, 856i64, name);
  return outAtrIndex + 1;
}

/*
==============
AnimTreeParser_GetNextToken
==============
*/
const char *AnimTreeParser_GetNextToken(AnimTreeParser_State *p)
{
  const char *result; 
  const char *v3; 

  result = p->nextToken;
  if ( result )
  {
    p->nextToken = NULL;
  }
  else
  {
    v3 = Com_Parse(&p->pos);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 309, ASSERT_TYPE_ASSERT, "(token != 0)", (const char *)&queryFormat, "token != NULL") )
      __debugbreak();
    result = v3;
    p->nextToken = NULL;
  }
  return result;
}

/*
==============
AnimTreeParser_GetNodeType
==============
*/
__int64 AnimTreeParser_GetNodeType(scrContext_t *scrContext, unsigned int nodeVar)
{
  unsigned int ArrayVariable; 

  ArrayVariable = FindArrayVariable(scrContext, nodeVar, 1);
  if ( !ArrayVariable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 388, ASSERT_TYPE_ASSERT, "(nodeTypeVar != 0)", (const char *)&queryFormat, "nodeTypeVar != 0") )
    __debugbreak();
  return LOBYTE(GetVariableValueAddress(scrContext, ArrayVariable)->uintValue);
}

/*
==============
AnimTreeParser_GetNodeTypeName
==============
*/
const char *AnimTreeParser_GetNodeTypeName(XAnimNodeTypeID nodeType)
{
  scr_string_t CustomNodeName; 

  if ( XAnimIsCustomNodeType(nodeType) )
  {
    CustomNodeName = XAnimGetCustomNodeName(nodeType);
    return SL_ConvertToString(CustomNodeName);
  }
  else if ( nodeType )
  {
    if ( nodeType == XANIM_NODE_TYPE_ANIMPARTS )
    {
      return "animparts";
    }
    else if ( (unsigned __int8)nodeType == XANIM_NODE_TYPE_INVALID )
    {
      return "invalid";
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 425, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "no name for node type (%d)", (unsigned __int8)nodeType) )
        __debugbreak();
      return (char *)&queryFormat.fmt + 3;
    }
  }
  else
  {
    return "blend";
  }
}

/*
==============
AnimTreeParser_GetNodeTypeWithDefault
==============
*/
__int64 AnimTreeParser_GetNodeTypeWithDefault(scrContext_t *scrContext, unsigned int nodeVar, XAnimNodeTypeID defaultIfMissing)
{
  unsigned int ArrayVariable; 

  ArrayVariable = FindArrayVariable(scrContext, nodeVar, 1);
  if ( ArrayVariable )
    return LOBYTE(GetVariableValueAddress(scrContext, ArrayVariable)->uintValue);
  else
    return (unsigned __int8)defaultIfMissing;
}

/*
==============
AnimTreeParser_GetSummaryRecursive
==============
*/
void AnimTreeParser_GetSummaryRecursive(scrContext_t *scrContext, unsigned int node, AnimTreeParser_Summary *outSummary)
{
  unsigned int i; 
  unsigned int Object; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1745, ASSERT_TYPE_ASSERT, "(node != 0)", (const char *)&queryFormat, "node != 0") )
    __debugbreak();
  ++outSummary->numNodes;
  AnimTreeParser_SummarizeNode(scrContext, node, outSummary);
  for ( i = FindFirstSibling(scrContext, node); i; i = FindNextSibling(scrContext, i) )
  {
    if ( GetSiblingName(scrContext, i) < 0x80000 )
    {
      if ( GetValueType(scrContext, i) == VAR_POINTER )
      {
        Object = FindObject(scrContext, i);
        AnimTreeParser_GetSummaryRecursive(scrContext, Object, outSummary);
      }
      else
      {
        ++outSummary->numNodes;
      }
    }
  }
}

/*
==============
AnimTreeParser_MatchToken
==============
*/
void AnimTreeParser_MatchToken(scrContext_t *scrContext, AnimTreeParser_State *p, const char *match)
{
  const char *NextToken; 

  if ( p->pos )
  {
    NextToken = AnimTreeParser_GetNextToken(p);
    if ( I_stricmp(NextToken, match) )
      AnimTreeParser_ParseError(COM_ERR_5984, scrContext, p, "expected '%s', found '%s' instead", match, NextToken);
  }
  else
  {
    AnimTreeParser_ParseError(COM_ERR_5983, scrContext, p, "expected '%s', but reached end of file", match);
  }
}

/*
==============
AnimTreeParser_Parse
==============
*/
void AnimTreeParser_Parse(scrContext_t *scrContext, const char *text, unsigned int rootNodeVar, unsigned int existingNamesVar, unsigned int existingAliasNames, bool checkAnimsExist)
{
  unsigned int v10; 
  signed int String; 
  unsigned int ArrayVariable; 
  unsigned int Array; 
  unsigned int v16; 
  XAnimSyncGroupID inheritedSyncGroup; 
  VariableValue value; 
  AnimTreeParser_State parser; 

  Com_BeginParseSession("AnimTreeParser_Parse");
  v10 = 0;
  parser.start = text;
  parser.pos = text;
  parser.nextToken = NULL;
  parser.depth = 0;
  parser.names = existingNamesVar;
  parser.aliasNames = existingAliasNames;
  parser.forceIndexMatch = 0;
  parser.numLods = 0;
  Com_SetParseNegativeNumbers(1);
  Com_SetSpaceDelimited(0);
  AnimTreeParser_ParseOptions(scrContext, &parser);
  LOBYTE(inheritedSyncGroup) = 4;
  AnimTreeParser_ParseNodeList(scrContext, &parser, rootNodeVar, 8 * checkAnimsExist, inheritedSyncGroup, 5u);
  if ( !GetArraySize(scrContext, rootNodeVar) )
  {
    String = j_SL_GetString_("void", 0, 4);
    GetVariable(scrContext, rootNodeVar, String);
    SL_RemoveRefToString((scr_string_t)String);
  }
  AnimTreeParser_SetNodeType(scrContext, &parser, rootNodeVar, XANIM_NODE_TYPE_BLEND);
  if ( parser.numLods )
  {
    ArrayVariable = GetArrayVariable(scrContext, rootNodeVar, 6u);
    Array = GetArray(scrContext, ArrayVariable);
    if ( parser.numLods )
    {
      do
      {
        _RCX = v10;
        value.type = VAR_FLOAT;
        __asm
        {
          vmovss  xmm0, [rsp+rcx*4+0A8h+parser.lodDistances]
          vmovss  dword ptr [rsp+0A8h+value.u], xmm0
        }
        v16 = GetArrayVariable(scrContext, Array, v10);
        SetVariableValue(scrContext, v16, &value);
        ++v10;
      }
      while ( v10 < parser.numLods );
    }
  }
  Com_EndParseSession();
}

/*
==============
AnimTreeParser_ParseConstantParameterValue
==============
*/
bool AnimTreeParser_ParseConstantParameterValue(scrContext_t *scrContext, const AnimTreeParser_State *parser, const char *token, XAnimFieldType nodeParameterType, VariableValue *outValue)
{
  __int16 v7; 
  bool result; 
  int v16; 
  unsigned int LowercaseString; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  float v; 
  int v27; 
  int v28; 

  _RBX = outValue;
  v7 = nodeParameterType;
  if ( !outValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 651, ASSERT_TYPE_ASSERT, "(outValue)", (const char *)&queryFormat, "outValue") )
    __debugbreak();
  switch ( v7 )
  {
    case 1:
      outValue->type = VAR_INTEGER;
      if ( I_stricmp(token, "true") )
      {
        if ( I_stricmp(token, "false") )
        {
          AnimTreeParser_ParseError(COM_ERR_5987, scrContext, parser, "boolean values must be either 'true' or 'false'");
          return 0;
        }
        outValue->u.intValue = 0;
        return 1;
      }
      else
      {
        result = 1;
        outValue->u.intValue = 1;
      }
      return result;
    case 2:
    case 3:
    case 5:
      outValue->type = VAR_INTEGER;
      outValue->u.intValue = I_atoui(token);
      return 1;
    case 4:
    case 6:
      outValue->type = VAR_INTEGER;
      outValue->u.intValue = atoi(token);
      return 1;
    case 7:
      outValue->type = VAR_FLOAT;
      *(double *)&_XMM0 = atof(token);
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rbx], xmm1
      }
      return 1;
    case 8:
      if ( j_sscanf(token, "%f, %f", &v, &v27) != 2 )
      {
        AnimTreeParser_ParseError(COM_ERR_5988, scrContext, parser, "'%s' is not a valid vec3 value", token);
        return 0;
      }
      __asm
      {
        vmovss  xmm1, [rsp+78h+v]
        vmovss  [rsp+78h+var_48], xmm1
      }
      outValue->type = VAR_VECTOR;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+78h+var_38], xmm0
      }
      if ( (v21 & 0x7F800000) != 2139095040 )
      {
        __asm
        {
          vmovss  xmm0, [rsp+78h+var_3C]
          vmovss  [rsp+78h+var_48], xmm0
        }
        if ( (v22 & 0x7F800000) != 2139095040 )
          goto LABEL_21;
      }
      v16 = 698;
      goto LABEL_19;
    case 9:
      if ( j_sscanf(token, "%f, %f, %f", &v, &v27, &v28) == 3 )
      {
        __asm
        {
          vmovss  xmm0, [rsp+78h+v]
          vmovss  [rsp+78h+var_48], xmm0
        }
        outValue->type = VAR_VECTOR;
        if ( (v23 & 0x7F800000) == 2139095040 )
          goto LABEL_27;
        __asm
        {
          vmovss  xmm0, [rsp+78h+var_3C]
          vmovss  [rsp+78h+var_48], xmm0
        }
        if ( (v24 & 0x7F800000) == 2139095040 )
          goto LABEL_27;
        __asm
        {
          vmovss  xmm0, [rsp+78h+var_38]
          vmovss  [rsp+78h+var_48], xmm0
        }
        if ( (v25 & 0x7F800000) == 2139095040 )
        {
LABEL_27:
          v16 = 709;
LABEL_19:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", v16, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vec3Value )[0] ) && !IS_NAN( ( vec3Value )[1] ) && !IS_NAN( ( vec3Value )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vec3Value )[0] ) && !IS_NAN( ( vec3Value )[1] ) && !IS_NAN( ( vec3Value )[2] )") )
            __debugbreak();
        }
LABEL_21:
        outValue->u.scriptCodePosValue = (unsigned __int64)Scr_AllocVector(scrContext, &v);
        return 1;
      }
      else
      {
        AnimTreeParser_ParseError(COM_ERR_5989, scrContext, parser, "'%s' is not a valid vec3 value", token);
        return 0;
      }
    case 11:
      outValue->type = VAR_STRING;
      LowercaseString = SL_GetLowercaseString_(token, 0, 4);
      Scr_SetStringValue(outValue, LowercaseString);
      return 1;
    case 12:
      AnimTreeParser_ParseArrayParameterValues_bool_(scrContext, parser, token, (const XAnimFieldType)1, outValue);
      return 1;
    case 13:
      AnimTreeParser_ParseArrayParameterValues_unsigned_char_(scrContext, parser, token, (const XAnimFieldType)2, outValue);
      return 1;
    case 14:
      AnimTreeParser_ParseArrayParameterValues_unsigned_int_(scrContext, parser, token, (const XAnimFieldType)3, outValue);
      return 1;
    case 15:
      AnimTreeParser_ParseArrayParameterValues_int_(scrContext, parser, token, (const XAnimFieldType)4, outValue);
      return 1;
    case 16:
      AnimTreeParser_ParseArrayParameterValues_unsigned_short_(scrContext, parser, token, (const XAnimFieldType)5, outValue);
      return 1;
    case 17:
      AnimTreeParser_ParseArrayParameterValues_short_(scrContext, parser, token, (const XAnimFieldType)6, outValue);
      return 1;
    case 18:
      AnimTreeParser_ParseArrayParameterValues_float_(scrContext, parser, token, (const XAnimFieldType)7, outValue);
      return 1;
    case 19:
      AnimTreeParser_ParseArrayParameterValues_enum_scr_string_t_(scrContext, parser, token, (const XAnimFieldType)11, outValue);
      return 1;
    default:
      return 0;
  }
}

/*
==============
AnimTreeParser_ParseCustomNodeParameter
==============
*/
void AnimTreeParser_ParseCustomNodeParameter(scrContext_t *scrContext, AnimTreeParser_State *parser, unsigned int nodeVariable)
{
  XAnimNodeTypeID NodeType; 
  const char *NextToken; 
  scr_string_t v8; 
  const char *v9; 
  const char *v10; 
  __int64 v11; 
  unsigned __int8 v12; 
  __int64 v13; 
  char v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  char v18; 
  __int64 v19; 
  unsigned __int8 v20; 
  __int64 v21; 
  char v22; 
  char *v23; 
  __int64 v24; 
  int v25; 
  char v26; 
  scr_string_t StringOfSize; 
  const char *v28; 
  __int64 v29; 
  char *v30; 
  int v31; 
  char v32; 
  scr_string_t String; 
  unsigned int v34; 
  unsigned int ArrayVariable; 
  unsigned int Array; 
  unsigned int Variable; 
  unsigned int v38; 
  const char *v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  const char *v43; 
  XAnimFieldType outParameterType; 
  unsigned int name; 
  unsigned int parentId; 
  VariableValue outValue; 
  char str[272]; 

  parentId = nodeVariable;
  NodeType = AnimTreeParser_GetNodeType(scrContext, nodeVariable);
  NextToken = AnimTreeParser_GetNextToken(parser);
  name = SL_FindLowercaseString(NextToken);
  v8 = name;
  if ( !XAnimFindCustomNodeParameter(NodeType, (scr_string_t)name, &outParameterType) )
    AnimTreeParser_ParseError(COM_ERR_5990, scrContext, parser, "unrecognized node parameter '%s'", NextToken);
  AnimTreeParser_MatchToken(scrContext, parser, "=");
  v9 = AnimTreeParser_PeekToken(parser);
  if ( v9 && !I_stricmp(v9, "[") )
  {
    AnimTreeParser_MatchToken(scrContext, parser, "[");
    v10 = AnimTreeParser_GetNextToken(parser);
    v11 = 0i64;
    v12 = *v10 - 65;
    if ( v12 <= 0x39u )
    {
      v13 = 0x3FFFFFF43FFFFFFi64;
      if ( _bittest64(&v13, (char)v12) )
      {
        v14 = v10[1];
        LODWORD(v15) = 1;
        if ( v14 )
        {
          while ( v14 != 46 )
          {
            if ( (unsigned __int8)(v14 - 97) > 0x19u && (unsigned __int8)(v14 - 65) > 0x19u && (unsigned __int8)(v14 - 48) > 9u && v14 != 95 )
              goto LABEL_56;
            v15 = (unsigned int)(v15 + 1);
            v14 = v10[v15];
            if ( !v14 )
              break;
          }
        }
        v16 = (unsigned int)v15;
        v17 = v15;
        v18 = v10[(unsigned int)v15];
        if ( !v18 )
          goto LABEL_28;
        if ( v18 != 46 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 513, ASSERT_TYPE_ASSERT, "(token[pos] == '.')", (const char *)&queryFormat, "token[pos] == '.'") )
            __debugbreak();
          v13 = 0x3FFFFFF43FFFFFFi64;
        }
        v19 = (unsigned int)(v15 + 1);
        v20 = v10[v19] - 65;
        if ( v20 <= 0x39u && _bittest64(&v13, (char)v20) )
        {
          v21 = (unsigned int)(v19 + 1);
          v22 = v10[v21];
          if ( v22 )
          {
            while ( (unsigned __int8)(v22 - 97) <= 0x19u || (unsigned __int8)(v22 - 65) <= 0x19u || (unsigned __int8)(v22 - 48) <= 9u || v22 == 95 )
            {
              v21 = (unsigned int)(v21 + 1);
              v22 = v10[v21];
              if ( !v22 )
                goto LABEL_27;
            }
            goto LABEL_56;
          }
LABEL_27:
          v11 = (unsigned int)(v21 - v19);
LABEL_28:
          if ( (unsigned int)(v17 + 1) >= 0x101 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 217, ASSERT_TYPE_ASSERT, "(length + 1 < maxLowerStringSize)", (const char *)&queryFormat, "length + 1 < maxLowerStringSize") )
            __debugbreak();
          if ( v17 )
          {
            v23 = str;
            v24 = v16;
            do
            {
              v25 = (v23++)[v10 - str];
              v26 = v25 | 0x20;
              if ( (unsigned int)(v25 - 65) >= 0x1A )
                v26 = v25;
              *(v23 - 1) = v26;
              --v24;
            }
            while ( v24 );
          }
          str[v16] = 0;
          StringOfSize = j_SL_GetStringOfSize(str, 0, (unsigned int)(v17 + 1), 4);
          if ( (_DWORD)v11 )
          {
            v28 = &v10[v16 + 1];
            if ( (unsigned int)(v11 + 1) >= 0x101 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 217, ASSERT_TYPE_ASSERT, "(length + 1 < maxLowerStringSize)", (const char *)&queryFormat, "length + 1 < maxLowerStringSize") )
              __debugbreak();
            v29 = (unsigned int)v11;
            v30 = str;
            do
            {
              v31 = (v30++)[v28 - str];
              v32 = v31 | 0x20;
              if ( (unsigned int)(v31 - 65) >= 0x1A )
                v32 = v31;
              *(v30 - 1) = v32;
              --v29;
            }
            while ( v29 );
            str[v11] = 0;
            String = SL_FindString(str);
            if ( !String )
              AnimTreeParser_ParseError(COM_ERR_5991, scrContext, parser, "Game parameter field '%*s' not recognized", v11, v28);
          }
          else
          {
            String = 0;
          }
          v34 = name;
          if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 539, ASSERT_TYPE_ASSERT, "(paramName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "paramName != NULL_SCR_STRING") )
            __debugbreak();
          if ( !StringOfSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 540, ASSERT_TYPE_ASSERT, "(gameParameterName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "gameParameterName != NULL_SCR_STRING") )
            __debugbreak();
          ArrayVariable = GetArrayVariable(scrContext, parentId, 3u);
          Array = GetArray(scrContext, ArrayVariable);
          Variable = GetVariable(scrContext, Array, v34);
          v38 = GetArray(scrContext, Variable);
          AnimTreeParser_SetConstStringArrayValue(scrContext, v38, 0, StringOfSize);
          if ( String )
            AnimTreeParser_SetConstStringArrayValue(scrContext, v38, 1u, String);
          SL_RemoveRefToString(StringOfSize);
          goto LABEL_57;
        }
      }
    }
LABEL_56:
    AnimTreeParser_ParseError(COM_ERR_5992, scrContext, parser, "invalid game parameter '%s'", v10);
LABEL_57:
    AnimTreeParser_MatchToken(scrContext, parser, "]");
    return;
  }
  v39 = AnimTreeParser_GetNextToken(parser);
  if ( AnimTreeParser_ParseConstantParameterValue(scrContext, parser, v39, (XAnimFieldType)(unsigned __int16)outParameterType, &outValue) )
  {
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 556, ASSERT_TYPE_ASSERT, "(paramName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "paramName != NULL_SCR_STRING") )
      __debugbreak();
    v40 = GetArrayVariable(scrContext, nodeVariable, 2u);
    v41 = GetArray(scrContext, v40);
    v42 = GetVariable(scrContext, v41, v8);
    SetVariableValue(scrContext, v42, &outValue);
  }
  else
  {
    v43 = SL_ConvertToString(v8);
    AnimTreeParser_ParseError(COM_ERR_5993, scrContext, parser, "setting of node parameter '%s' from script is not supported", v43);
  }
}

/*
==============
AnimTreeParser_ParseError
==============
*/
void AnimTreeParser_ParseError(ComErrorCode uniqueErrorCode, scrContext_t *scrContext, const AnimTreeParser_State *parser, const char *msg, ...)
{
  const char *LastTokenPos; 
  __int64 v7; 
  char dest[256]; 
  va_list va; 

  va_start(va, msg);
  Com_vsprintf_truncate(dest, 0x100ui64, 0x100ui64, msg, va);
  LastTokenPos = Com_GetLastTokenPos();
  Com_EndParseSession();
  if ( LastTokenPos < parser->start && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 335, ASSERT_TYPE_ASSERT, "(pos >= parser->start)", (const char *)&queryFormat, "pos >= parser->start") )
    __debugbreak();
  v7 = LastTokenPos - parser->start;
  if ( (v7 < 0 || (unsigned __int64)v7 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v7, "signed", v7) )
    __debugbreak();
  CompileError(scrContext, v7, (const char *)&queryFormat, dest);
}

/*
==============
AnimTreeParser_ParseLodDistances
==============
*/
void AnimTreeParser_ParseLodDistances(scrContext_t *scrContext, AnimTreeParser_State *parser)
{
  const char *nextToken; 
  const char *v11; 
  const char *v12; 
  bool v14; 
  bool v15; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  char *fmt; 
  char *fmta; 
  __int64 v25; 
  double v26; 
  __int64 v27; 

  parser->numLods = 0;
  _RDI = parser;
  AnimTreeParser_MatchToken(scrContext, parser, "(");
  if ( _RDI->pos )
  {
    __asm
    {
      vmovaps [rsp+98h+var_48], xmm7
      vmovaps [rsp+98h+var_58], xmm8
      vxorpd  xmm8, xmm8, xmm8
      vmovaps [rsp+98h+var_38], xmm6
      vxorps  xmm7, xmm7, xmm7
    }
    while ( 1 )
    {
      nextToken = _RDI->nextToken;
      if ( nextToken )
        goto LABEL_9;
      v11 = Com_Parse(&_RDI->pos);
      _RDI->nextToken = v11;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
        __debugbreak();
      nextToken = _RDI->nextToken;
      if ( nextToken )
      {
LABEL_9:
        if ( *nextToken == 41 && !nextToken[1] )
        {
LABEL_41:
          __asm
          {
            vmovaps xmm6, [rsp+98h+var_38]
            vmovaps xmm7, [rsp+98h+var_48]
            vmovaps xmm8, [rsp+98h+var_58]
          }
          break;
        }
      }
      else
      {
        if ( !_RDI->pos )
        {
          nextToken = NULL;
LABEL_17:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1388, ASSERT_TYPE_ASSERT, "(token != nullptr)", (const char *)&queryFormat, "token != nullptr") )
            __debugbreak();
          goto LABEL_19;
        }
        v12 = Com_Parse(&_RDI->pos);
        _RDI->nextToken = v12;
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
          __debugbreak();
        nextToken = _RDI->nextToken;
        if ( !nextToken )
          goto LABEL_17;
      }
LABEL_19:
      if ( (unsigned __int8)(*nextToken - 48) > 9u )
      {
        AnimTreeParser_ParseError(COM_ERR_6008, scrContext, _RDI, "expected positive LOD distance value, found '%s' instead", nextToken);
      }
      else
      {
        *(double *)&_XMM0 = atof(nextToken);
        __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
        AnimTreeParser_GetNextToken(_RDI);
        v14 = _RDI->numLods < 4;
        v15 = _RDI->numLods == 4;
        if ( _RDI->numLods >= 4 )
        {
          LODWORD(fmt) = 4;
          AnimTreeParser_ParseError(COM_ERR_6006, scrContext, _RDI, "too many LOD levels (maximum is %d)", fmt);
        }
        __asm { vcomiss xmm6, xmm7 }
        if ( v14 || v15 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  [rsp+98h+var_70], xmm8
            vmovsd  [rsp+98h+fmt], xmm0
          }
          AnimTreeParser_ParseError(COM_ERR_6007, scrContext, _RDI, "LOD distance '%.2f' must be greater than previous (%.2f)", *(double *)&fmta, v26);
        }
        if ( _RDI->numLods >= 4 )
        {
          LODWORD(v27) = 4;
          LODWORD(v25) = _RDI->numLods;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1405, ASSERT_TYPE_ASSERT, "(unsigned)( parser->numLods ) < (unsigned)( ( sizeof( *array_counter( parser->lodDistances ) ) + 0 ) )", "parser->numLods doesn't index parser->lodDistances\n\t%i not in [0, %i)", v25, v27) )
            __debugbreak();
        }
        _RAX = _RDI->numLods;
        __asm { vmovss  dword ptr [rdi+rax*4+30h], xmm6 }
        ++_RDI->numLods;
      }
      v17 = _RDI->nextToken;
      if ( !v17 )
      {
        if ( !_RDI->pos )
          goto LABEL_37;
        v18 = Com_Parse(&_RDI->pos);
        _RDI->nextToken = v18;
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
          __debugbreak();
        v17 = _RDI->nextToken;
        if ( !v17 )
          goto LABEL_45;
      }
      if ( I_stricmp(v17, ")") )
      {
LABEL_45:
        if ( _RDI->pos )
        {
          v19 = AnimTreeParser_GetNextToken(_RDI);
          if ( I_stricmp(v19, ",") )
            AnimTreeParser_ParseError(COM_ERR_5984, scrContext, _RDI, "expected '%s', found '%s' instead", ",", v19);
          goto LABEL_40;
        }
LABEL_37:
        AnimTreeParser_ParseError(COM_ERR_5983, scrContext, _RDI, "expected '%s', but reached end of file", ",");
      }
LABEL_40:
      if ( !_RDI->pos )
        goto LABEL_41;
    }
  }
  AnimTreeParser_MatchToken(scrContext, _RDI, ")");
}

/*
==============
AnimTreeParser_ParseNode
==============
*/
char AnimTreeParser_ParseNode(scrContext_t *scrContext, AnimTreeParser_State *parser, unsigned int parentNode, scr_string_t nodeName, unsigned int inheritedFlags, XAnimSyncGroupID inheritedSyncGroup, const char *baseAssetName, unsigned int inheritedLOD)
{
  unsigned int v10; 
  unsigned __int8 v11; 
  unsigned int Array; 
  unsigned int Variable; 
  unsigned int names; 
  bool v17; 
  unsigned int String; 
  const char *v19; 
  const char *v20; 
  unsigned int v21; 
  unsigned __int8 v22; 
  const char *v23; 
  unsigned int v24; 
  unsigned int v25; 
  const char *v26; 
  const char *v27; 
  int v28; 
  char v29; 
  unsigned int v30; 
  int v31; 
  unsigned int v32; 
  unsigned int ArraySize; 
  unsigned int v34; 
  XAnimSyncGroupID v35; 
  const char *v36; 
  unsigned int ArrayVariable; 
  unsigned int v39; 
  unsigned int v40; 
  XAnimSyncGroupID *outSyncGroup; 
  __int64 v42; 
  XAnimNodeTypeID v43; 
  char v44; 
  unsigned int outNodeFlags; 
  unsigned int id; 
  unsigned int outLOD; 
  DBAssetQuery outQuery; 
  XAnimSyncGroupID v49; 
  unsigned int parentId; 

  parentId = parentNode;
  outLOD = 5;
  v10 = 0;
  v11 = 4;
  outNodeFlags = 0;
  LOBYTE(v49) = 4;
  Array = 0;
  if ( FindVariable(scrContext, parentNode, nodeName) )
  {
    Com_UngetToken();
    AnimTreeParser_ParseError(COM_ERR_5998, scrContext, parser, "duplicate animation");
  }
  Variable = GetVariable(scrContext, parentNode, nodeName);
  names = parser->names;
  id = Variable;
  v44 = 0;
  v17 = FindVariable(scrContext, names, nodeName) || Cloth_XAnimNode_IsClothNodeName(nodeName);
  if ( baseAssetName )
  {
    if ( !v17 )
    {
      String = SL_FindString(baseAssetName);
      if ( String )
        v17 = FindVariable(scrContext, parser->names, String) != 0;
    }
  }
  if ( parser->forceIndexMatch && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM|0x80) )
  {
    v44 = 1;
    v17 = 0;
  }
  v19 = AnimTreeParser_PeekToken(parser);
  if ( !v19 || I_stricmp(v19, "{") )
  {
    v20 = AnimTreeParser_PeekToken(parser);
    if ( !v20 || I_stricmp(v20, ":") )
    {
      v43 = XANIM_NODE_TYPE_ANIMPARTS;
    }
    else
    {
      Array = GetArray(scrContext, id);
      v43 = AnimTreeParser_ParseNodeTypeAndProperties(scrContext, parser, Array, &outNodeFlags, &v49, &outLOD);
      if ( v43 == XANIM_NODE_TYPE_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1103, ASSERT_TYPE_ASSERT, "(nodeType != XANIM_NODE_TYPE_INVALID)", (const char *)&queryFormat, "nodeType != XANIM_NODE_TYPE_INVALID") )
        __debugbreak();
      v10 = outNodeFlags;
      v11 = v49;
    }
  }
  else
  {
    v43 = XANIM_NODE_TYPE_BLEND;
    Array = GetArray(scrContext, id);
    AnimTreeParser_SetNodeType(scrContext, parser, Array, XANIM_NODE_TYPE_BLEND);
  }
  v21 = v17;
  v22 = inheritedSyncGroup;
  if ( (v10 & 0x2000) != 0 )
    v21 = 1;
  id = v21;
  if ( (_BYTE)inheritedSyncGroup != 4 && v11 != 4 && (_BYTE)inheritedSyncGroup != v11 )
  {
    v23 = SL_ConvertToString(nodeName);
    LODWORD(outSyncGroup) = v11;
    AnimTreeParser_ParseError(COM_ERR_5999, scrContext, parser, "Sync group '%d' specified by node '%s' is different from the inherited sync group '%d'.", outSyncGroup, v23, v22);
  }
  v24 = outLOD;
  if ( outLOD != 5 )
  {
    v25 = inheritedLOD;
    if ( outLOD > inheritedLOD )
    {
      v26 = SL_ConvertToString(nodeName);
      LODWORD(v42) = v25;
      LODWORD(outSyncGroup) = v24;
      AnimTreeParser_ParseError(COM_ERR_6000, scrContext, parser, "LOD level '%d' for node '%s' should be less than inherited LOD level '%d'", outSyncGroup, v26, v42);
    }
  }
  if ( v43 != XANIM_NODE_TYPE_ANIMPARTS )
  {
    if ( !Array && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1166, ASSERT_TYPE_ASSERT, "(newNodeArray != 0)", (const char *)&queryFormat, "newNodeArray != 0") )
      __debugbreak();
    v28 = (unsigned __int8)id;
    v29 = inheritedFlags;
    if ( v44 )
      v28 = 1;
    LODWORD(baseAssetName) = v28;
    v30 = inheritedFlags;
    if ( (v10 & 8) != 0 && ((inheritedFlags & 8) != 0 || (_BYTE)v28) )
      v30 = inheritedFlags | 8;
    v31 = v30 | 1;
    if ( (v10 & 1) == 0 )
      v31 = v30;
    inheritedSyncGroup = v31;
    if ( (inheritedFlags & 0x8000) != 0 )
      v10 |= 0x8000u;
    v32 = inheritedLOD;
    if ( v24 < inheritedLOD )
      v32 = v24;
    inheritedLOD = v32;
    ArraySize = GetArraySize(scrContext, Array);
    AnimTreeParser_MatchToken(scrContext, parser, "{");
    v34 = inheritedSyncGroup | 0x8000;
    LOBYTE(outSyncGroup) = v49;
    if ( (v10 & 0x8000) == 0 )
      v34 = inheritedSyncGroup;
    AnimTreeParser_ParseNodeList(scrContext, parser, Array, v34, (XAnimSyncGroupID)outSyncGroup, inheritedLOD);
    AnimTreeParser_MatchToken(scrContext, parser, "}");
    v35 = GetArraySize(scrContext, Array) - ArraySize;
    inheritedSyncGroup = v35;
    if ( (v10 & 0x400) != 0 )
    {
      if ( v35 == MOVEMENT )
      {
LABEL_64:
        if ( (v29 & 8) == 0 && !(_BYTE)baseAssetName )
        {
LABEL_66:
          RemoveVariable(scrContext, parentId, nodeName);
          return 0;
        }
LABEL_67:
        LOBYTE(outQuery.zoneIndex) = 6;
        LODWORD(outQuery.header.physicsLibrary) = v10;
        ArrayVariable = GetArrayVariable(scrContext, Array, 0);
        SetVariableValue(scrContext, ArrayVariable, (VariableValue *)&outQuery);
        LODWORD(outQuery.header.physicsLibrary) = (unsigned __int8)v49;
        LOBYTE(outQuery.zoneIndex) = 6;
        v39 = GetArrayVariable(scrContext, Array, 4u);
        SetVariableValue(scrContext, v39, (VariableValue *)&outQuery);
        if ( inheritedLOD != 5 )
        {
          LOBYTE(outQuery.zoneIndex) = 6;
          LODWORD(outQuery.header.physicsLibrary) = inheritedLOD;
          v40 = GetArrayVariable(scrContext, Array, 5u);
          SetVariableValue(scrContext, v40, (VariableValue *)&outQuery);
        }
        if ( inheritedSyncGroup == MOVEMENT )
          AnimTreeParser_CreatePlaceholderAnimation(scrContext, Array, v29 & 1);
        return 1;
      }
      v36 = SL_ConvertToString(nodeName);
      AnimTreeParser_ParseError(COM_ERR_6001, scrContext, parser, "Graft node '%s' is expected to be empty.", v36);
      v35 = inheritedSyncGroup;
    }
    if ( v35 )
      goto LABEL_67;
    goto LABEL_64;
  }
  if ( !(_BYTE)id && (inheritedFlags & 8) == 0 )
  {
    if ( !v44 )
      goto LABEL_66;
    v27 = SL_ConvertToString(nodeName);
    if ( baseAssetName )
      v27 = baseAssetName;
    if ( !DB_AssetQuery_Query(ASSET_TYPE_XANIMPARTS, v27, &outQuery) || outQuery.defaultAsset && !outQuery.transientAsset )
      goto LABEL_66;
  }
  return 1;
}

/*
==============
AnimTreeParser_ParseNodeList
==============
*/
void AnimTreeParser_ParseNodeList(scrContext_t *scrContext, AnimTreeParser_State *parser, unsigned int parentNode, unsigned int inheritedFlags, XAnimSyncGroupID inheritedSyncGroup, unsigned int inheritedLOD)
{
  const char *nextToken; 
  const char *v11; 
  const char *v12; 
  char *baseAssetName; 
  scr_string_t v14; 
  const char *v15; 
  __int64 v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  scr_string_t v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  bool IsIdentifier; 
  const char *v29; 
  unsigned int LowercaseString; 
  unsigned int aliasNames; 
  scr_string_t v32; 
  unsigned int Variable; 
  const char *v34; 
  unsigned int Object; 
  unsigned int i; 
  unsigned int SiblingName; 
  unsigned int v38; 
  const char *v39; 
  char *fmt; 
  XAnimSyncGroupID v41; 
  char dest[256]; 
  char str[256]; 

  ++parser->depth;
  if ( parser->pos )
  {
    while ( 1 )
    {
      nextToken = parser->nextToken;
      if ( nextToken )
        goto LABEL_75;
      v11 = Com_Parse(&parser->pos);
      parser->nextToken = v11;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
        __debugbreak();
      nextToken = parser->nextToken;
      if ( nextToken )
      {
LABEL_75:
        if ( *nextToken == 125 && !nextToken[1] )
        {
LABEL_71:
          --parser->depth;
          return;
        }
      }
      else if ( parser->pos )
      {
        v12 = Com_Parse(&parser->pos);
        parser->nextToken = v12;
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
          __debugbreak();
        nextToken = parser->nextToken;
      }
      else
      {
        nextToken = NULL;
      }
      if ( Scr_IsIdentifier(nextToken) )
        break;
      v24 = parser->nextToken;
      if ( !v24 )
      {
        if ( !parser->pos )
          goto LABEL_70;
        v25 = Com_Parse(&parser->pos);
        parser->nextToken = v25;
        if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
          __debugbreak();
        v24 = parser->nextToken;
        if ( !v24 )
        {
LABEL_68:
          if ( parser->pos )
          {
            v39 = AnimTreeParser_GetNextToken(parser);
            AnimTreeParser_ParseError(COM_ERR_6005, scrContext, parser, "found '%s' but expected identifier or <parameter>", v39);
          }
          goto LABEL_70;
        }
      }
      if ( *v24 != 35 || v24[1] )
        goto LABEL_68;
      AnimTreeParser_GetNextToken(parser);
      v26 = parser->nextToken;
      if ( !v26 && parser->pos )
      {
        v27 = Com_Parse(&parser->pos);
        parser->nextToken = v27;
        if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
          __debugbreak();
        v26 = parser->nextToken;
      }
      IsIdentifier = Scr_IsIdentifier(v26);
      v29 = AnimTreeParser_GetNextToken(parser);
      if ( IsIdentifier )
      {
        LowercaseString = SL_GetLowercaseString_(v29, 0, 4);
        aliasNames = parser->aliasNames;
        v32 = LowercaseString;
        if ( aliasNames )
        {
          Variable = FindVariable(scrContext, aliasNames, LowercaseString);
          if ( Variable )
          {
            Object = FindObject(scrContext, Variable);
            for ( i = FindFirstSibling(scrContext, Object); i; i = FindNextSibling(scrContext, i) )
            {
              SiblingName = GetSiblingName(scrContext, i);
              v38 = SiblingName;
              if ( SiblingName < 0x80000 )
              {
                if ( FindVariable(scrContext, parentNode, SiblingName) )
                  AnimTreeParser_ParseError(COM_ERR_6002, scrContext, parser, "duplicate animation");
                GetVariable(scrContext, parentNode, v38);
                if ( !FindVariable(scrContext, parser->names, v38) && (inheritedFlags & 8) == 0 )
                  RemoveVariable(scrContext, parentNode, v38);
              }
            }
          }
          else
          {
            v34 = SL_ConvertToString(v32);
            Com_Printf(23, "Animtree: Alias '%s' was not registered.\n", v34);
          }
        }
        else
        {
          Com_Printf(23, "Animtree: Alias names not registered.\n");
        }
        SL_RemoveRefToString(v32);
      }
      else
      {
        AnimTreeParser_ParseError(COM_ERR_6004, scrContext, parser, "found '%s' but expected alias identifier", v29);
      }
LABEL_70:
      if ( !parser->pos )
        goto LABEL_71;
    }
    baseAssetName = NULL;
    v14 = 0;
    v15 = AnimTreeParser_GetNextToken(parser);
    v16 = -1i64;
    do
      ++v16;
    while ( v15[v16] );
    Core_strncpy_and_fill_zero(dest, 0x100ui64, v15, (unsigned int)v16);
    v17 = parser->nextToken;
    if ( !v17 )
    {
      if ( !parser->pos )
        goto LABEL_36;
      v18 = Com_Parse(&parser->pos);
      parser->nextToken = v18;
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
        __debugbreak();
      v17 = parser->nextToken;
      if ( !v17 )
        goto LABEL_36;
    }
    if ( *v17 == 64 && !v17[1] )
    {
      AnimTreeParser_GetNextToken(parser);
      v19 = parser->nextToken;
      if ( !v19 && parser->pos )
      {
        v20 = Com_Parse(&parser->pos);
        parser->nextToken = v20;
        if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
          __debugbreak();
        v19 = parser->nextToken;
      }
      if ( !Scr_IsIdentifier(v19) )
      {
        v23 = AnimTreeParser_GetNextToken(parser);
        AnimTreeParser_ParseError(COM_ERR_6003, scrContext, parser, "found '%s' but expected alias identifier", v23);
LABEL_38:
        LOBYTE(v41) = inheritedSyncGroup;
        AnimTreeParser_ParseNode(scrContext, parser, parentNode, v14, inheritedFlags, v41, baseAssetName, inheritedLOD);
        SL_RemoveRefToString(v14);
        goto LABEL_70;
      }
      v21 = AnimTreeParser_GetNextToken(parser);
      LODWORD(fmt) = 64;
      Com_sprintf_truncate(str, 0x100ui64, "%s%c%s", dest, fmt, v21);
      v22 = SL_GetLowercaseString_(str, 0, 4);
      baseAssetName = dest;
    }
    else
    {
LABEL_36:
      v22 = SL_GetLowercaseString_(dest, 0, 4);
    }
    v14 = v22;
    goto LABEL_38;
  }
  --parser->depth;
}

/*
==============
AnimTreeParser_ParseNodeTypeAndProperties
==============
*/
XAnimNodeTypeID AnimTreeParser_ParseNodeTypeAndProperties(scrContext_t *scrContext, AnimTreeParser_State *parser, unsigned int nodeArray, unsigned int *outNodeFlags, XAnimSyncGroupID *outSyncGroup, unsigned int *outLOD)
{
  int v6; 
  char v7; 
  unsigned int v8; 
  scrContext_t *v10; 
  unsigned int *v11; 
  unsigned int v12; 
  const char *nextToken; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  unsigned int v17; 
  const AnimTreeParser_Property *v18; 
  const char *name; 
  __int64 v20; 
  const char *v21; 
  signed __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  unsigned int flag; 
  const char *v29; 
  const char *v30; 
  unsigned int v31; 
  char v32; 
  const char *v33; 
  scr_string_t LowercaseString; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  const char *v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  unsigned int v47; 
  const char *v48; 
  unsigned int ArrayVariable; 
  const char *v51; 
  bool v52; 
  char v53; 
  char *fmt; 
  __int64 v55; 
  __int64 outNodeTypeID; 
  unsigned int v57; 
  VariableValue value; 
  char v60; 

  v6 = 0;
  HIDWORD(outNodeTypeID) = 0;
  v7 = 4;
  v60 = 4;
  v8 = nodeArray;
  v10 = scrContext;
  if ( !outNodeFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 919, ASSERT_TYPE_ASSERT, "(outNodeFlags != 0)", (const char *)&queryFormat, "outNodeFlags != NULL") )
    __debugbreak();
  if ( !outSyncGroup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 920, ASSERT_TYPE_ASSERT, "(outSyncGroup != 0)", (const char *)&queryFormat, "outSyncGroup != NULL") )
    __debugbreak();
  v11 = outLOD;
  if ( !outLOD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 921, ASSERT_TYPE_ASSERT, "(outLOD != 0)", (const char *)&queryFormat, "outLOD != NULL") )
    __debugbreak();
  v12 = 5;
  v57 = 5;
  AnimTreeParser_MatchToken(v10, parser, ":");
  if ( parser->pos )
  {
    do
    {
      nextToken = parser->nextToken;
      if ( !nextToken )
      {
        v14 = Com_Parse(&parser->pos);
        parser->nextToken = v14;
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
          __debugbreak();
        nextToken = parser->nextToken;
      }
      if ( nextToken && !I_stricmp(nextToken, "{") )
        break;
      v15 = parser->nextToken;
      LOBYTE(outNodeTypeID) = -1;
      if ( !v15 && parser->pos )
      {
        v16 = Com_Parse(&parser->pos);
        parser->nextToken = v16;
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL", outNodeTypeID) )
          __debugbreak();
        v15 = parser->nextToken;
      }
      v17 = 0;
      v18 = s_nodeProperties;
      while ( 2 )
      {
        name = v18->name;
        v20 = 0x7FFFFFFFi64;
        v21 = v15;
        if ( !v18->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v22 = name - v15;
        while ( 1 )
        {
          v23 = (unsigned __int8)v21[v22];
          v24 = v20;
          v25 = *(unsigned __int8 *)v21++;
          --v20;
          if ( !v24 )
          {
LABEL_40:
            flag = s_nodeProperties[v17].flag;
            AnimTreeParser_GetNextToken(parser);
            v6 = flag | HIDWORD(outNodeTypeID);
            HIDWORD(outNodeTypeID) |= flag;
            if ( (flag & 3) == 0 )
              goto LABEL_111;
            v29 = parser->nextToken;
            if ( !v29 )
            {
              if ( !parser->pos )
                goto LABEL_111;
              v30 = Com_Parse(&parser->pos);
              parser->nextToken = v30;
              if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
                __debugbreak();
              v29 = parser->nextToken;
              if ( !v29 )
                goto LABEL_111;
            }
            if ( (unsigned __int8)(*v29 - 48) <= 9u )
            {
              v31 = I_atoui(v29);
              v32 = v31;
              if ( v31 >= 4 )
              {
                LODWORD(v55) = 3;
                AnimTreeParser_ParseError(COM_ERR_5996, scrContext, parser, "invalid sync group number '%s'. Valid range is 0..%d", v29, v55);
              }
              AnimTreeParser_GetNextToken(parser);
            }
            else
            {
LABEL_111:
              v32 = 4;
            }
            v52 = v32 == 4;
            v8 = nodeArray;
            v53 = v32;
            v10 = scrContext;
            if ( v52 )
              v53 = v60;
            v7 = v53;
            v60 = v53;
            goto LABEL_105;
          }
          if ( v23 != v25 )
          {
            v26 = v23 + 32;
            if ( (unsigned int)(v23 - 65) > 0x19 )
              v26 = v23;
            v23 = v26;
            v27 = v25 + 32;
            if ( (unsigned int)(v25 - 65) > 0x19 )
              v27 = v25;
            if ( v23 != v27 )
              break;
          }
          if ( !v23 )
            goto LABEL_40;
        }
        ++v17;
        ++v18;
        if ( v17 < 0xE )
          continue;
        break;
      }
      v33 = parser->nextToken;
      if ( !v33 && parser->pos )
      {
        v41 = Com_Parse(&parser->pos);
        parser->nextToken = v41;
        if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
          __debugbreak();
        v33 = parser->nextToken;
      }
      LowercaseString = SL_FindLowercaseString(v33);
      if ( LowercaseString && XAnimFindNodeTypeByName(LowercaseString, (XAnimNodeTypeID *)&outNodeTypeID) )
      {
        AnimTreeParser_GetNextToken(parser);
        v10 = scrContext;
        v8 = nodeArray;
        AnimTreeParser_SetNodeType(scrContext, parser, nodeArray, (XAnimNodeTypeID)outNodeTypeID);
        v35 = parser->nextToken;
        if ( v35 )
          goto LABEL_117;
        if ( parser->pos )
        {
          v36 = Com_Parse(&parser->pos);
          parser->nextToken = v36;
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
            __debugbreak();
          v35 = parser->nextToken;
          if ( v35 )
          {
LABEL_117:
            if ( !I_stricmp(v35, "(") )
            {
              AnimTreeParser_MatchToken(scrContext, parser, "(");
              if ( parser->pos )
              {
                while ( 1 )
                {
                  v37 = parser->nextToken;
                  if ( v37 )
                    goto LABEL_70;
                  v38 = Com_Parse(&parser->pos);
                  parser->nextToken = v38;
                  if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
                    __debugbreak();
                  v37 = parser->nextToken;
                  if ( v37 )
                  {
LABEL_70:
                    if ( *v37 == 41 && !v37[1] )
                      goto LABEL_87;
                  }
                  AnimTreeParser_ParseCustomNodeParameter(scrContext, parser, nodeArray);
                  v39 = parser->nextToken;
                  if ( !v39 )
                  {
                    if ( !parser->pos )
                      goto LABEL_79;
                    v40 = Com_Parse(&parser->pos);
                    parser->nextToken = v40;
                    if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
                      __debugbreak();
                    v39 = parser->nextToken;
                    if ( !v39 )
                      break;
                  }
                  if ( I_stricmp(v39, ")") )
                    break;
LABEL_86:
                  if ( !parser->pos )
                    goto LABEL_87;
                }
                if ( parser->pos )
                {
                  v42 = AnimTreeParser_GetNextToken(parser);
                  if ( I_stricmp(v42, ",") )
                    AnimTreeParser_ParseError(COM_ERR_5984, scrContext, parser, "expected '%s', found '%s' instead", ",", v42);
                  goto LABEL_86;
                }
LABEL_79:
                AnimTreeParser_ParseError(COM_ERR_5983, scrContext, parser, "expected '%s', but reached end of file", ",");
                goto LABEL_86;
              }
LABEL_87:
              AnimTreeParser_MatchToken(scrContext, parser, ")");
            }
          }
        }
      }
      else
      {
        v43 = parser->nextToken;
        if ( !v43 )
        {
          if ( !parser->pos )
            goto LABEL_110;
          v44 = Com_Parse(&parser->pos);
          parser->nextToken = v44;
          if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
            __debugbreak();
          v43 = parser->nextToken;
          if ( !v43 )
            goto LABEL_110;
        }
        if ( !I_stricmp(v43, "lod_cull") )
        {
          AnimTreeParser_GetNextToken(parser);
          v10 = scrContext;
          AnimTreeParser_MatchToken(scrContext, parser, "(");
          v45 = AnimTreeParser_PeekToken(parser);
          v57 = 4;
          v46 = v45;
          if ( v45 && (unsigned __int8)(*v45 - 48) <= 9u )
          {
            v57 = I_atoui(v45);
            v47 = v57;
            AnimTreeParser_GetNextToken(parser);
            if ( v47 >= 4 )
            {
              LODWORD(v55) = 3;
              LODWORD(fmt) = v47;
              AnimTreeParser_ParseError(COM_ERR_5994, scrContext, parser, "LOD level out of range (found %d, max is %d)", fmt, v55);
            }
          }
          else
          {
            v48 = "EOF";
            if ( v46 )
              v48 = v46;
            AnimTreeParser_ParseError(COM_ERR_5995, scrContext, parser, "expected valid LOD level, found '%s' instead", v48);
          }
          AnimTreeParser_MatchToken(scrContext, parser, ")");
        }
        else
        {
LABEL_110:
          v51 = AnimTreeParser_GetNextToken(parser);
          v10 = scrContext;
          AnimTreeParser_ParseError(COM_ERR_5997, scrContext, parser, "unrecognized property '%s'", v51);
        }
        v8 = nodeArray;
      }
      v7 = v60;
      v6 = HIDWORD(outNodeTypeID);
LABEL_105:
      ;
    }
    while ( parser->pos );
    v12 = v57;
    v11 = outLOD;
  }
  if ( !FindArrayVariable(v10, v8, 1) )
  {
    value.type = VAR_INTEGER;
    value.u.intValue = 0;
    ArrayVariable = GetArrayVariable(v10, v8, 1u);
    SetVariableValue(v10, ArrayVariable, &value);
  }
  *outNodeFlags = v6;
  *(_BYTE *)outSyncGroup = v7;
  *v11 = v12;
  return AnimTreeParser_GetNodeType(v10, v8);
}

/*
==============
AnimTreeParser_ParseOptions
==============
*/
void AnimTreeParser_ParseOptions(scrContext_t *scrContext, AnimTreeParser_State *parser)
{
  const char *v4; 
  const char *nextToken; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  __int64 v10; 
  const char *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  const char *v17; 

  if ( parser->pos )
  {
    v4 = AnimTreeParser_PeekToken(parser);
    if ( !v4 || *v4 != 125 || v4[1] )
    {
LABEL_5:
      while ( 1 )
      {
        nextToken = parser->nextToken;
        if ( !nextToken )
        {
          if ( !parser->pos )
            break;
          v6 = Com_Parse(&parser->pos);
          parser->nextToken = v6;
          if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
            __debugbreak();
          nextToken = parser->nextToken;
          if ( !nextToken )
            break;
        }
        if ( *nextToken != 37 || nextToken[1] )
          break;
        AnimTreeParser_GetNextToken(parser);
        v7 = parser->nextToken;
        if ( !v7 && parser->pos )
        {
          v8 = Com_Parse(&parser->pos);
          parser->nextToken = v8;
          if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
            __debugbreak();
          v7 = parser->nextToken;
        }
        if ( Scr_IsIdentifier(v7) )
        {
          v9 = AnimTreeParser_PeekToken(parser);
          v10 = 0x7FFFFFFFi64;
          v11 = "force_cs_anim_index_match";
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v12 = (unsigned __int8)v11[v9 - "force_cs_anim_index_match"];
            v13 = v10;
            v14 = *(unsigned __int8 *)v11++;
            --v10;
            if ( !v13 )
            {
LABEL_31:
              AnimTreeParser_GetNextToken(parser);
              parser->forceIndexMatch = 1;
              goto LABEL_5;
            }
            if ( v12 != v14 )
            {
              v15 = v12 + 32;
              if ( (unsigned int)(v12 - 65) > 0x19 )
                v15 = v12;
              v12 = v15;
              v16 = v14 + 32;
              if ( (unsigned int)(v14 - 65) > 0x19 )
                v16 = v14;
              if ( v12 != v16 )
                break;
            }
            if ( !v12 )
              goto LABEL_31;
          }
          if ( I_stricmp(v9, "lod_distances") )
          {
            v17 = AnimTreeParser_GetNextToken(parser);
            AnimTreeParser_ParseError(COM_ERR_6009, scrContext, parser, "found '%s' but expected 'force_cs_anim_index_match' or 'lod_distances'.", v17);
          }
          else
          {
            AnimTreeParser_GetNextToken(parser);
            AnimTreeParser_ParseLodDistances(scrContext, parser);
          }
        }
      }
    }
  }
}

/*
==============
AnimTreeParser_PeekToken
==============
*/
const char *AnimTreeParser_PeekToken(AnimTreeParser_State *p)
{
  const char *result; 
  const char **p_pos; 
  const char *v4; 

  result = p->nextToken;
  if ( !result )
  {
    p_pos = &p->pos;
    if ( *p_pos )
    {
      v4 = Com_Parse(p_pos);
      p->nextToken = v4;
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 272, ASSERT_TYPE_ASSERT, "(p->nextToken != 0)", (const char *)&queryFormat, "p->nextToken != NULL") )
        __debugbreak();
      return p->nextToken;
    }
  }
  return result;
}

/*
==============
AnimTreeParser_SetConstStringArrayValue
==============
*/
void AnimTreeParser_SetConstStringArrayValue(scrContext_t *scrContext, unsigned int arrayVar, unsigned int index, scr_string_t stringValue)
{
  unsigned int ArrayVariable; 
  VariableValue value; 

  value.type = VAR_STRING;
  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 67, ASSERT_TYPE_ASSERT, "( stringValue != 0 )", (const char *)&queryFormat, "stringValue != 0") )
    __debugbreak();
  value.u.intValue = stringValue;
  SL_AddRefToString(stringValue);
  ArrayVariable = GetArrayVariable(scrContext, arrayVar, index);
  SetVariableValue(scrContext, ArrayVariable, &value);
}

/*
==============
AnimTreeParser_SetNodeType
==============
*/
void AnimTreeParser_SetNodeType(scrContext_t *scrContext, AnimTreeParser_State *parser, unsigned int nodeArrayVariable, XAnimNodeTypeID nodeType)
{
  unsigned int ArrayVariable; 
  XAnimNodeTypeID *VariableValueAddress; 
  const char *NodeTypeName; 
  const char *v11; 
  unsigned int v12; 
  VariableValue value; 

  ArrayVariable = FindArrayVariable(scrContext, nodeArrayVariable, 1);
  if ( ArrayVariable )
  {
    VariableValueAddress = (XAnimNodeTypeID *)GetVariableValueAddress(scrContext, ArrayVariable);
    NodeTypeName = AnimTreeParser_GetNodeTypeName(*VariableValueAddress);
    v11 = AnimTreeParser_GetNodeTypeName(nodeType);
    AnimTreeParser_ParseError(COM_ERR_5985, scrContext, parser, "'%s': node type already declared as '%s'", v11, NodeTypeName);
  }
  value.u.intValue = (unsigned __int8)nodeType;
  value.type = VAR_INTEGER;
  v12 = GetArrayVariable(scrContext, nodeArrayVariable, 1u);
  SetVariableValue(scrContext, v12, &value);
}

/*
==============
AnimTreeParser_ShouldRegisterAtr
==============
*/
char AnimTreeParser_ShouldRegisterAtr()
{
  return 1;
}

/*
==============
AnimTreeParser_SummarizeNode
==============
*/
void AnimTreeParser_SummarizeNode(scrContext_t *scrContext, unsigned int node, AnimTreeParser_Summary *outSummary)
{
  unsigned int ArrayVariable; 
  unsigned int v7; 
  int intValue; 
  unsigned int v9; 
  unsigned int Object; 
  unsigned int v11; 
  unsigned int i; 
  unsigned int v13; 
  unsigned int v14; 
  VariableUnion *VariableValueAddress; 
  const dvar_t *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1684, ASSERT_TYPE_ASSERT, "(node != 0)", (const char *)&queryFormat, "node != 0") )
    __debugbreak();
  ArrayVariable = FindArrayVariable(scrContext, node, 0);
  v7 = 0;
  if ( ArrayVariable )
    intValue = GetVariableValueAddress(scrContext, ArrayVariable)->intValue;
  else
    LOWORD(intValue) = 0;
  if ( (intValue & 0x2000) != 0 )
    ++outSummary->numPublicNodes;
  v9 = FindArrayVariable(scrContext, node, 3);
  if ( v9 )
    Object = FindObject(scrContext, v9);
  else
    Object = 0;
  v11 = FindArrayVariable(scrContext, node, 2);
  if ( v11 )
    v7 = FindObject(scrContext, v11);
  if ( Object )
  {
    for ( i = FindFirstSibling(scrContext, Object); i; i = FindNextSibling(scrContext, i) )
    {
      v13 = FindObject(scrContext, i);
      ++outSummary->numParameterBindings;
      v14 = FindArrayVariable(scrContext, v13, 0);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1706, ASSERT_TYPE_ASSERT, "(paramNameId)", (const char *)&queryFormat, "paramNameId") )
        __debugbreak();
      VariableValueAddress = GetVariableValueAddress(scrContext, v14);
      if ( !FindVariable(scrContext, outSummary->gameParameterNames, VariableValueAddress->intValue) )
      {
        GetVariable(scrContext, outSummary->gameParameterNames, VariableValueAddress->intValue);
        if ( outSummary->numSharedParameters > 0 )
        {
          v16 = DCONST_DVARBOOL_xanim_silence_parse_parameter_validation;
          if ( !DCONST_DVARBOOL_xanim_silence_parse_parameter_validation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_silence_parse_parameter_validation") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          if ( !v16->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING|0x100) && Scr_IsSharedParameterAIASMTree(scrContext, outSummary->fileName) )
          {
            v19 = SL_ConvertToString(outSummary->fileName);
            v20 = SL_ConvertToString((scr_string_t)VariableValueAddress->intValue);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144093F20, 6349i64, v20, v19);
            return;
          }
          v17 = SL_ConvertToString(outSummary->fileName);
          v18 = SL_ConvertToString((scr_string_t)VariableValueAddress->intValue);
          Com_PrintWarning(19, "AnimTreeParser_SummarizeNode(): Parameter '%s' is not included in list of shared parameters. This will cause issues if this subtree ('%s') is grafted into another tree.\n", v18, v17);
        }
      }
    }
  }
  if ( v7 )
    outSummary->numParameterBindings += GetArraySize(scrContext, v7);
}

/*
==============
XAnimTreeParser_RunPostParse
==============
*/
bool XAnimTreeParser_RunPostParse(XAnim_s *anims, int customNodeIndex)
{
  unsigned int size; 

  if ( customNodeIndex >= anims->size )
  {
    size = anims->size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_animtree_parser.cpp", 1661, ASSERT_TYPE_ASSERT, "(unsigned)( customNodeIndex ) < (unsigned)( anims->size )", "customNodeIndex doesn't index anims->size\n\t%i not in [0, %i)", customNodeIndex, size) )
      __debugbreak();
  }
  return XAnimCustomNodePostParse(anims, customNodeIndex);
}

