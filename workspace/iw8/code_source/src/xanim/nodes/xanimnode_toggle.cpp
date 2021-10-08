/*
==============
XAnimToggle_Register
==============
*/

void XAnimToggle_Register(void)
{
  ?XAnimToggle_Register@@YAXXZ();
}

/*
==============
XAnimToggleAll_Register
==============
*/

void XAnimToggleAll_Register(void)
{
  ?XAnimToggleAll_Register@@YAXXZ();
}

/*
==============
XAnimToggle_Init
==============
*/
void XAnimToggle_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 56, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType) )
    *(_DWORD *)nodeData = 1045220557;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.restart, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 4) = 1;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendcurve, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 4) = scr_const.xanimcurve_linear;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.notifyname, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 5) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.clearwhendone, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 5) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.clearonnotetrack, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 2) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.clearifnochild, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 6) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.errorifnochild, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 7) = 1;
  *((_WORD *)nodeData + 12) = 0;
  *((_DWORD *)nodeData + 3) = -1082130432;
  *((_BYTE *)nodeData + 26) = 0;
}

/*
==============
XAnimToggle_Destroy
==============
*/
void XAnimToggle_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimToggle_Update
==============
*/
void XAnimToggle_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  unsigned int GraftAnimIndex; 
  XAnimCurveID ID; 
  bool v18; 
  XAnimCurveID curveID; 
  char v23; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int8 v28; 
  __int64 ChildAt; 
  const XAnim_s *v30; 
  int NumChildren; 
  int v32; 
  const char *AnimDebugName; 
  unsigned int v34; 
  unsigned __int8 v37; 
  unsigned __int8 v38; 
  int bRestart; 
  scr_string_t notifyName; 
  scr_string_t v41; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  __int64 goalTime; 
  float goalTimea; 
  float goalTimeb; 
  float goalTimec; 
  float goalTimed; 
  float rate; 
  float ratea; 
  float rateb; 
  float ratec; 
  char v62; 
  void *retaddr; 
  XAnim_s *anims; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = animInfo;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RBX = (unsigned __int8 *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 118, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 119, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 120, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  ID = XAnimCurve_GetID(*((const scr_string_t *)_RBX + 4));
  v18 = _RBX[26] == 0;
  curveID = ID;
  __asm { vmovss  xmm6, dword ptr [rbx] }
  if ( !_RBX[26] )
    _RBX[26] = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm0, xmm9
  }
  if ( v18 )
  {
    v23 = 1;
  }
  else
  {
    v23 = 0;
    v18 = 1;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vucomiss xmm0, xmm7
    vmovss  xmm8, cs:__real@3a83126f
  }
  if ( v18 )
    __asm { vcomiss xmm8, dword ptr [rdi+34h] }
  if ( !v23 )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)_RDI->subTreeID);
    anims = (XAnim_s *)SubTreeAnims;
    if ( _RBX[25] - 1 >= XAnimGetNumChildren(SubTreeAnims, _RDI->animIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 156, ASSERT_TYPE_ASSERT, "(pNode->m_PrevChildIndex - 1 < XAnimGetNumChildren( anims, animInfo->animIndex ))", (const char *)&queryFormat, "pNode->m_PrevChildIndex - 1 < XAnimGetNumChildren( anims, animInfo->animIndex )") )
      __debugbreak();
    v28 = _RBX[25];
    if ( v28 && v28 != _RBX[24] )
    {
      ChildAt = (int)XAnimGetChildAt(SubTreeAnims, _RDI->animIndex, v28 - 1);
      if ( obj->tree->owner[0] || (v30 = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)_RDI->subTreeID), !v30->entries[ChildAt].numAnims) || (v30->entries[ChildAt].animParent.flags & 0x800) == 0 )
      {
        __asm { vmovss  dword ptr [rsp+0C8h+fmt], xmm6 }
        XAnimClearGoalWeight(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)_RDI->subTreeID, ChildAt, fmt, curveID);
      }
      if ( _RBX[6] && !_RBX[24] )
      {
        __asm
        {
          vmovss  [rsp+0C8h+rate], xmm7
          vmovss  [rsp+0C8h+goalTime], xmm6
          vmovss  dword ptr [rsp+0C8h+fmt], xmm8
        }
        XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, _RDI->animIndex, fmta, goalTimea, rate, _RDI->notifyName, _RDI->notifyType, 0, curveID, modelNameMap);
      }
      *((_DWORD *)_RBX + 3) = -1082130432;
    }
    NumChildren = XAnimGetNumChildren(SubTreeAnims, _RDI->animIndex);
    v32 = _RBX[24];
    if ( v32 - 1 >= NumChildren )
    {
      if ( !_RBX[7] && NumChildren > 0 )
      {
        _RBX[24] = 1;
        LOBYTE(v32) = 1;
LABEL_40:
        v34 = XAnimGetChildAt(SubTreeAnims, _RDI->animIndex, (unsigned __int8)v32 - 1);
        *(double *)&_XMM0 = XAnimGetTime(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)_RDI->subTreeID, v34);
        if ( _RBX[5] )
        {
          __asm { vcomiss xmm0, xmm7 }
        }
        else
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+0Ch]
            vcomiss xmm1, xmm9
          }
          if ( !_RBX[5] )
          {
            *(double *)&_XMM0 = XAnimGetGoalWeight(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)_RDI->subTreeID, v34);
            __asm { vmovaps xmm8, xmm0 }
            *(double *)&_XMM0 = XAnimGetWeight(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)_RDI->subTreeID, v34);
            v37 = _RBX[25];
            v38 = _RBX[24];
            if ( v37 != v38 )
              goto LABEL_68;
            if ( !_RBX[5] )
            {
              __asm { vcomiss xmm8, xmm9 }
              if ( !_RBX[5] )
              {
                __asm { vcomiss xmm0, xmm9 }
                if ( _RBX[5] )
                {
LABEL_68:
                  bRestart = _RBX[4] && (v37 != v38 || !_RDI->children);
                  notifyName = *((_DWORD *)_RBX + 5);
                  if ( !notifyName )
                    notifyName = _RDI->notifyName;
                  if ( XAnimToggle_ShouldSetChildIndexWeight(obj->tree, _RDI->subTreeID, v34) )
                  {
                    __asm
                    {
                      vmovss  [rsp+0C8h+rate], xmm7
                      vmovss  [rsp+0C8h+goalTime], xmm6
                      vmovss  dword ptr [rsp+0C8h+fmt], xmm7
                    }
                    XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, v34, fmtd, goalTimec, rateb, notifyName, _RDI->notifyType, bRestart, curveID, modelNameMap);
                  }
                  v41 = *((_DWORD *)_RBX + 2);
                  if ( v41 )
                  {
                    *(double *)&_XMM0 = XAnimGetNotetrackTime(anims, v34, v41);
                    __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
                  }
                  if ( _RBX[6] )
                  {
                    __asm
                    {
                      vmovss  [rsp+0C8h+rate], xmm7
                      vmovss  [rsp+0C8h+goalTime], xmm6
                      vmovss  dword ptr [rsp+0C8h+fmt], xmm7
                    }
                    XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, _RDI->animIndex, fmte, goalTimed, ratec, _RDI->notifyName, _RDI->notifyType, 0, curveID, modelNameMap);
                  }
                }
              }
            }
            goto LABEL_64;
          }
          __asm { vcomiss xmm0, xmm1 }
        }
        __asm { vmovss  dword ptr [rsp+0C8h+fmt], xmm6 }
        XAnimClearGoalWeight(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)_RDI->subTreeID, v34, fmtb, curveID);
        if ( _RBX[6] )
        {
          __asm
          {
            vmovss  [rsp+0C8h+rate], xmm7
            vmovss  [rsp+0C8h+goalTime], xmm6
            vmovss  dword ptr [rsp+0C8h+fmt], xmm8
          }
          XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, _RDI->animIndex, fmtc, goalTimeb, ratea, _RDI->notifyName, _RDI->notifyType, 0, curveID, modelNameMap);
        }
        *((_DWORD *)_RBX + 3) = -1082130432;
LABEL_64:
        _RBX[25] = _RBX[24];
        goto LABEL_65;
      }
      AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, _RDI->animIndex);
      LODWORD(goalTime) = _RBX[24] - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 182, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XAnimToggle_Update: Invalid child index (%d) for anim node '%s'\n", goalTime, AnimDebugName) )
        __debugbreak();
      LOBYTE(v32) = _RBX[24];
    }
    if ( !(_BYTE)v32 )
      goto LABEL_64;
    goto LABEL_40;
  }
  __asm { vmovss  xmm2, dword ptr [rdi+34h]; blendTime }
  XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 0, (const XAnimCurveID)_RDI->state.curveID);
  *((_DWORD *)_RBX + 3) = -1082130432;
  _RBX[25] = 0;
LABEL_65:
  _R11 = &v62;
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
XAnimToggle_Read
==============
*/
void XAnimToggle_Read(void *nodeData, MemoryFile *memFile)
{
  char p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 26) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 24) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 25) = p;
}

/*
==============
XAnimToggle_Write
==============
*/
void XAnimToggle_Write(void *nodeData, MemoryFile *memFile)
{
  char p; 

  p = *((_BYTE *)nodeData + 26);
  MemFile_WriteData(memFile, 1ui64, &p);
  p = *((_BYTE *)nodeData + 24);
  MemFile_WriteData(memFile, 1ui64, &p);
  p = *((_BYTE *)nodeData + 25);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnimToggle_PostParse
==============
*/
char XAnimToggle_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const char *AnimDebugName; 
  bool v12; 
  int NumChildren; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  unsigned int v15; 
  unsigned int ChildAt; 
  double v18; 
  const char *v19; 
  const char *v20; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 250, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  _RAX = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType);
  _RBX = _RAX;
  if ( _RAX )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rax+8]
    }
    AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+48h+var_20], xmm0
    }
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 255, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid blendtime value %.f specified in %s", v18, AnimDebugName);
  }
  else
  {
    NumChildren = XAnimGetNumChildren(anims, animIndex);
    if ( NumChildren <= 254 )
    {
      ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, animIndex, scr_const.clearwhendone, TypeFieldsForNodeType);
      if ( !ConstantBindParameterByFieldNameAllBindings )
        return 1;
      if ( !ConstantBindParameterByFieldNameAllBindings->constant.boolValue )
        return 1;
      v15 = 0;
      if ( NumChildren <= 0 )
        return 1;
      while ( 1 )
      {
        ChildAt = XAnimGetChildAt(anims, animIndex, v15);
        if ( XAnimIsLooped(anims, ChildAt) )
          break;
        if ( (int)++v15 >= NumChildren )
          return 1;
      }
      v20 = XAnimGetAnimDebugName(anims, ChildAt);
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "clearWhenDone toggle node cannot work with looped anim %s", v20);
    }
    else
    {
      v19 = XAnimGetAnimDebugName(anims, animIndex);
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 262, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max number of child anims (254) in %s", v19);
    }
  }
  if ( v12 )
    __debugbreak();
  return 0;
}

/*
==============
XAnimToggleAll_Init
==============
*/
void XAnimToggleAll_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldName; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 297, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType) )
    *(_DWORD *)nodeData = 1045220557;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.restart, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 4) = 1;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendcurve, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 2) = scr_const.xanimcurve_linear;
  ConstantBindParameterByFieldName = XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.notifyname, TypeFieldsForNodeType);
  *((_BYTE *)nodeData + 16) = 0;
  if ( !ConstantBindParameterByFieldName )
    *((_DWORD *)nodeData + 3) = 0;
}

/*
==============
XAnimToggleAll_Destroy
==============
*/
void XAnimToggleAll_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimToggleAll_Update
==============
*/
void XAnimToggleAll_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  unsigned int GraftAnimIndex; 
  XAnimCurveID ID; 
  XAnimCurveID curveID; 
  char v17; 
  const XAnim_s *SubTreeAnims; 
  signed int v20; 
  int NumChildren; 
  unsigned int ChildAt; 
  float fmt; 
  float fmta; 
  float goalTime; 
  float v30; 
  const XAnim_s *v32; 

  _RSI = animInfo;
  _RDI = (unsigned __int8 *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 324, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 325, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 326, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  ID = XAnimCurve_GetID(*((const scr_string_t *)_RDI + 2));
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rsi+38h]
  }
  curveID = ID;
  if ( v17 )
  {
    __asm { vmovss  xmm2, dword ptr [rsi+34h]; blendTime }
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 0, ID);
  }
  else if ( !_RDI[16] )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)_RSI->subTreeID);
    v32 = SubTreeAnims;
    v20 = 0;
    NumChildren = XAnimGetNumChildren(SubTreeAnims, _RSI->animIndex);
    if ( NumChildren > 0 )
    {
      __asm
      {
        vmovaps [rsp+98h+var_38], xmm6
        vmovss  xmm6, cs:__real@3f800000
      }
      do
      {
        ChildAt = XAnimGetChildAt(SubTreeAnims, _RSI->animIndex, v20);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovss  dword ptr [rsp+98h+var_68], xmm6
          vmovss  [rsp+98h+goalTime], xmm0
          vmovss  dword ptr [rsp+98h+fmt], xmm6
        }
        XAnimSetCompleteGoalWeight(obj, GraftAnimIndex, (const XAnimSubTreeID)_RSI->subTreeID, ChildAt, fmt, goalTime, v30, *((scr_string_t *)_RDI + 3), _RSI->notifyType, _RDI[4], curveID, modelNameMap);
        if ( _RDI[4] )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi]
            vmovss  dword ptr [rsp+98h+fmt], xmm0
          }
          XAnimClearTreeGoalWeightsStrict(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)_RSI->subTreeID, ChildAt, fmta, NULL, curveID);
        }
        SubTreeAnims = v32;
        ++v20;
      }
      while ( v20 < NumChildren );
      __asm { vmovaps xmm6, [rsp+98h+var_38] }
    }
    _RDI[16] = 1;
  }
}

/*
==============
XAnimToggleAll_Read
==============
*/
void XAnimToggleAll_Read(void *nodeData, MemoryFile *memFile)
{
  char p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 16) = p;
}

/*
==============
XAnimToggleAll_Write
==============
*/
void XAnimToggleAll_Write(void *nodeData, MemoryFile *memFile)
{
  char p; 

  p = *((_BYTE *)nodeData + 16);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnimToggleAll_PostParse
==============
*/
char XAnimToggleAll_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 
  __int64 v13; 
  const char *AnimDebugName; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 372, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  _RAX = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType);
  _RBX = _RAX;
  if ( !_RAX )
    return 1;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vcomiss xmm1, cs:__real@42480000
  }
  AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_20], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 382, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "blendtime is in seconds, not milliseconds.  are you sure you want a blendtime of %.4f seconds for %s?", v13, AnimDebugName) )
    __debugbreak();
  return 0;
}

/*
==============
XAnimToggleAll_Register
==============
*/
void XAnimToggleAll_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimToggleAll>::ms_typeInfo);
}

/*
==============
XAnimToggle_Register
==============
*/
void XAnimToggle_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimToggle>::ms_typeInfo);
}

/*
==============
XAnimToggle_ShouldSetChildIndexWeight
==============
*/
bool XAnimToggle_ShouldSetChildIndexWeight(XAnimTree *pTree, XAnimSubTreeID subTreeID, int childIndex)
{
  __int64 v3; 
  const XAnim_s *SubTreeAnims; 
  bool result; 

  v3 = childIndex;
  result = 1;
  if ( !pTree->owner[0] )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(pTree, subTreeID);
    if ( SubTreeAnims->entries[v3].numAnims )
    {
      if ( (SubTreeAnims->entries[v3].animParent.flags & 0x800) != 0 )
        return 0;
    }
  }
  return result;
}

