/*
==============
XAnim4PtBlend_Register
==============
*/

void XAnim4PtBlend_Register(void)
{
  ?XAnim4PtBlend_Register@@YAXXZ();
}

/*
==============
XAnim9PtBlend_FindAndCopyNodeState
==============
*/

void __fastcall XAnim9PtBlend_FindAndCopyNodeState(XAnim9PtBlend *pNode, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  ?XAnim9PtBlend_FindAndCopyNodeState@@YAXPEAUXAnim9PtBlend@@PEBUDObj@@PEAUXAnimInfo@@G@Z(pNode, obj, animInfo, animInfoIndex);
}

/*
==============
XAnim9PtBlend_Register
==============
*/

void XAnim9PtBlend_Register(void)
{
  ?XAnim9PtBlend_Register@@YAXXZ();
}

/*
==============
XAnim4PtBlend_Destroy
==============
*/
void XAnim4PtBlend_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnim4PtBlend_Update
==============
*/
void XAnim4PtBlend_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  unsigned int GraftAnimIndex; 
  bool v22; 
  bool v23; 
  unsigned int v27; 
  scr_string_t AnimsetNameByIndex; 
  signed int v53; 
  char v55; 
  bool v56; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float objID; 
  float objIDa; 
  float objIDb; 
  float objIDc; 
  float objIDd; 
  float curveID; 
  float curveIDa; 
  float curveIDb; 
  float curveIDc; 
  float curveIDd; 
  scr_string_t aliases[6]; 
  int outAnimIndices[8]; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _RDI = animInfo;
  _RBX = (unsigned __int16 *)nodeData;
  Sys_ProfBeginNamedEvent(0xFF808080, "XAnim4PtBlend_Update");
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 85, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 86, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 87, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  v22 = obj->tree == NULL;
  if ( !obj->tree )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 96, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rdi+38h]
  }
  if ( v22 )
  {
    __asm { vmovss  xmm2, dword ptr [rbx+0Ch]; blendTime }
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 0, LINEAR);
  }
  else
  {
    _ER12 = 0;
    if ( !*((_BYTE *)_RBX + 76) || *((_DWORD *)_RBX + 17) != _RBX[30] || *((_DWORD *)_RBX + 18) != _RBX[31] )
    {
      if ( _RDI->children )
      {
        v27 = XAnimGetGraftAnimIndex(animInfoIndex);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0Ch]
          vmovss  dword ptr [rsp+178h+fmt], xmm0
        }
        XAnimClearTreeGoalWeightsStrict(obj->tree, v27, (const XAnimSubTreeID)_RDI->subTreeID, _RDI->animIndex, fmt, NULL, LINEAR);
      }
      *((_BYTE *)_RBX + 76) = 0;
      AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(*((_DWORD *)_RBX + 16));
      aliases[0] = scr_const.aim_2;
      aliases[1] = scr_const.aim_4;
      aliases[2] = scr_const.aim_6;
      aliases[3] = scr_const.aim_8;
      aliases[4] = scr_const.aim_5;
      if ( BG_Animset_GetAddonAnimsFromState(AnimsetNameByIndex, *((_DWORD *)_RBX + 17), *((_DWORD *)_RBX + 18), ANIMSTATE_AIMSET, aliases, 5, outAnimIndices) )
      {
        *((_DWORD *)_RBX + 10) = outAnimIndices[0];
        *((_DWORD *)_RBX + 11) = outAnimIndices[1];
        *((_DWORD *)_RBX + 12) = outAnimIndices[2];
        *((_DWORD *)_RBX + 13) = outAnimIndices[3];
        *((_DWORD *)_RBX + 14) = outAnimIndices[4];
        _RBX[30] = _RBX[34];
        _RBX[31] = _RBX[36];
        *((_BYTE *)_RBX + 76) = 1;
      }
    }
    if ( *((_BYTE *)_RBX + 76) )
    {
      __asm
      {
        vmovss  xmm14, dword ptr [rbx+8]
        vmovss  xmm1, [rsp+178h+dtime]
        vmulss  xmm7, xmm1, dword ptr [rbx+18h]
        vmovss  xmm0, dword ptr [rbx+24h]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmulss  xmm0, xmm0, xmm1
        vaddss  xmm3, xmm0, xmm7
        vmovss  xmm1, dword ptr [rbx+1Ch]
        vaddss  xmm2, xmm3, xmm1; max
        vsubss  xmm1, xmm1, xmm3; min
        vmovss  xmm0, dword ptr [rbx]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rbx+1Ch], xmm0
        vmovss  xmm2, dword ptr [rbx+10h]; max
        vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm1, xmm2, xmm9; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rbx+1Ch], xmm0 }
      if ( *((_BYTE *)_RBX + 77) )
        __asm { vdivss  xmm8, xmm0, dword ptr [rbx+10h] }
      else
        __asm { vxorps  xmm8, xmm8, xmm8 }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vaddss  xmm2, xmm7, xmm0; max
        vsubss  xmm1, xmm0, xmm7; min
        vmovss  xmm0, dword ptr [rbx+4]; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rbx+20h], xmm0
        vmovss  xmm2, dword ptr [rbx+14h]; max
        vxorps  xmm1, xmm2, xmm9; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rbx+20h], xmm0 }
      LOBYTE(_EAX) = *((_BYTE *)_RBX + 77);
      if ( (_BYTE)_EAX )
        __asm { vdivss  xmm7, xmm0, dword ptr [rbx+14h] }
      else
        __asm { vxorps  xmm7, xmm7, xmm7 }
      v53 = *((_DWORD *)_RBX + 14);
      __asm { vmovss  xmm10, cs:__real@3f800000 }
      v55 = 0;
      v56 = v53 == 0;
      if ( v53 >= 0 )
      {
        __asm { vmovd   xmm1, r12d }
        _EAX = (unsigned __int8)_EAX;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm10, xmm6, xmm2
          vmovss  dword ptr [rsp+178h+curveID], xmm10
          vmovss  dword ptr [rsp+178h+objID], xmm14
          vmovss  dword ptr [rsp+178h+fmt], xmm0
        }
        XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, v53, fmta, objID, curveID, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      }
      __asm
      {
        vxorps  xmm12, xmm12, xmm12
        vxorps  xmm13, xmm13, xmm13
        vxorps  xmm11, xmm11, xmm11
        vcomiss xmm8, xmm6
      }
      if ( v55 | v56 )
      {
        if ( v55 )
          __asm { vxorps  xmm13, xmm8, xmm9 }
      }
      else
      {
        __asm { vmovaps xmm12, xmm8 }
      }
      __asm { vcomiss xmm7, xmm6 }
      if ( v55 | v56 )
      {
        if ( v55 )
          __asm { vxorps  xmm11, xmm7, xmm9 }
      }
      else
      {
        __asm { vmovaps xmm6, xmm7 }
      }
      __asm
      {
        vmovss  dword ptr [rsp+178h+curveID], xmm10
        vmovss  dword ptr [rsp+178h+objID], xmm14
        vmovss  dword ptr [rsp+178h+fmt], xmm6
      }
      XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, *((_DWORD *)_RBX + 10), fmtb, objIDa, curveIDa, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      __asm
      {
        vmovss  dword ptr [rsp+178h+curveID], xmm10
        vmovss  dword ptr [rsp+178h+objID], xmm14
        vmovss  dword ptr [rsp+178h+fmt], xmm12
      }
      XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, *((_DWORD *)_RBX + 11), fmtc, objIDb, curveIDb, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      __asm
      {
        vmovss  dword ptr [rsp+178h+curveID], xmm10
        vmovss  dword ptr [rsp+178h+objID], xmm14
        vmovss  dword ptr [rsp+178h+fmt], xmm13
      }
      XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, *((_DWORD *)_RBX + 12), fmtd, objIDc, curveIDc, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      __asm
      {
        vmovss  dword ptr [rsp+178h+curveID], xmm10
        vmovss  dword ptr [rsp+178h+objID], xmm14
        vmovss  dword ptr [rsp+178h+fmt], xmm11
      }
      XAnimSetGoalWeight(obj, GraftAnimIndex, _RDI->subTreeID, *((_DWORD *)_RBX + 13), fmte, objIDd, curveIDd, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
XAnim4PtBlend_Read
==============
*/
void XAnim4PtBlend_Read(void *nodeData, MemoryFile *memFile)
{
  int p; 

  _RBX = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 153, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX[76] = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX[77] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+24h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+1Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+20h], xmm0 }
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)_RBX + 10) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)_RBX + 11) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)_RBX + 12) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)_RBX + 13) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)_RBX + 14) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)_RBX + 30) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)_RBX + 31) = p;
}

/*
==============
XAnim4PtBlend_Write
==============
*/
void XAnim4PtBlend_Write(void *nodeData, MemoryFile *memFile)
{
  int p; 

  _RBX = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 179, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  LOBYTE(p) = _RBX[76];
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RBX[77];
  MemFile_WriteData(memFile, 1ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbx]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+4]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+24h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+1Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+20h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  p = *((_DWORD *)_RBX + 10);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)_RBX + 11);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)_RBX + 12);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)_RBX + 13);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)_RBX + 14);
  MemFile_WriteData(memFile, 4ui64, &p);
  LOWORD(p) = *((_WORD *)_RBX + 30);
  MemFile_WriteData(memFile, 2ui64, &p);
  LOWORD(p) = *((_WORD *)_RBX + 31);
  MemFile_WriteData(memFile, 2ui64, &p);
}

/*
==============
XAnim4PtBlend_Init
==============
*/
void XAnim4PtBlend_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  const XAnimTypeFields *TypeFieldsForNodeType; 

  v3 = animIndex;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 206, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 207, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v3].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 212, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.max_yaw, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 4) = 1110704128;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.max_pitch, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 5) = 1110704128;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.blendtime, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 2) = 1041865114;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.blendouttime, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 3) = 1041865114;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.max_aim_delta, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 6) = 1127481344;
  *(_QWORD *)nodeData = 0i64;
  *(_QWORD *)((char *)nodeData + 28) = 0i64;
  *((_DWORD *)nodeData + 15) = 0;
  *((_WORD *)nodeData + 38) = 0;
  *((_DWORD *)nodeData + 9) = 0;
}

/*
==============
XAnim4PtBlend_PostParse
==============
*/
bool XAnim4PtBlend_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  const char *AnimDebugName; 
  bool v6; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  bool result; 
  __int64 v13; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 253, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v3 >= anims->size )
  {
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 254, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v13, anims->size) )
      __debugbreak();
  }
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( anims->entries[v3].numAnims >= 4u )
  {
    TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v3].nodeType);
    if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 263, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
      __debugbreak();
    _RAX = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v3, scr_const.max_yaw, TypeFieldsForNodeType);
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( _RAX )
    {
      __asm { vcomiss xmm6, dword ptr [rax+8] }
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 267, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "max yaw must be greater than zero.");
    }
    else
    {
      if ( !XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v3, scr_const.max_pitch, TypeFieldsForNodeType) )
      {
        result = 1;
        goto LABEL_22;
      }
      __asm { vcomiss xmm6, dword ptr [rax+8] }
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "max pitch must be greater than zero.");
    }
  }
  else
  {
    AnimDebugName = XAnimGetAnimDebugName(anims, v3);
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 258, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace %s.  4Pt Blend node requires at least 4 anims.", AnimDebugName);
  }
  if ( v6 )
    __debugbreak();
  result = 0;
LABEL_22:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
XAnim9PtBlend_Destroy
==============
*/
void XAnim9PtBlend_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnim9PtBlend_Update
==============
*/
void XAnim9PtBlend_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  bool v24; 
  bool v25; 
  char v26; 
  unsigned int v29; 
  scr_string_t AnimsetNameByIndex; 
  _DWORD *v32; 
  __int64 v33; 
  XAnimInfo *v34; 
  unsigned __int16 dataOffset; 
  XAnimNodeTypeID nodeTypeID; 
  unsigned __int16 children; 
  unsigned __int16 *p_notifyChild; 
  __int64 v39; 
  const XAnim_s *SubTreeAnims; 
  int v46; 
  scr_string_t v47; 
  int v48; 
  scr_string_t v49; 
  const char *v50; 
  int v97; 
  int v98; 
  signed __int64 v99; 
  unsigned int v102; 
  unsigned __int16 v103; 
  bool v104; 
  unsigned __int8 *v105; 
  __int64 v106; 
  int v107; 
  char v125; 
  char v126; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 curveID; 
  float curveIDa; 
  float curveIDb; 
  scr_string_t *aliases; 
  float aliasesa; 
  int numAliases; 
  char v136; 
  int v138; 
  unsigned int graftAnimIndex; 
  int v140; 
  signed __int64 v144; 
  int v145; 
  vec3_t forward; 
  scr_string_t v147[8]; 
  char v149; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R15 = animInfo;
  _RSI = (char *)nodeData;
  Sys_ProfBeginNamedEvent(0xFF808080, "XAnim9PtBlend_Update");
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 437, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 438, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 439, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  graftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  v24 = obj->tree == NULL;
  if ( !obj->tree )
  {
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 457, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree");
    v24 = !v25;
    if ( v25 )
      __debugbreak();
  }
  v26 = _RSI[113];
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm9, dword ptr [r15+38h]
  }
  if ( v24 )
  {
    v136 = 1;
    __asm { vmovss  xmm2, dword ptr [r15+34h]; blendTime }
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 0, LINEAR);
    _RSI[112] = 0;
    __asm { vucomiss xmm9, dword ptr [r15+3Ch] }
    if ( v24 )
      goto LABEL_94;
  }
  else
  {
    v136 = 0;
    if ( !v26 || *((_DWORD *)_RSI + 26) != *((unsigned __int16 *)_RSI + 46) || *((_DWORD *)_RSI + 27) != *((unsigned __int16 *)_RSI + 47) )
    {
      if ( _R15->children )
      {
        v29 = XAnimGetGraftAnimIndex(animInfoIndex);
        __asm
        {
          vmovss  xmm0, dword ptr [r15+34h]
          vmovss  dword ptr [rsp+1E8h+fmt], xmm0
        }
        XAnimClearChildGoalWeightsWithParent(obj->tree, v29, _R15->subTreeID, animInfoIndex, fmt, LINEAR);
        _RSI[112] = 0;
      }
      _RSI[113] = 0;
      AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(*((_DWORD *)_RSI + 25));
      v147[0] = scr_const.aim_1;
      v147[1] = scr_const.aim_2;
      v147[2] = scr_const.aim_3;
      v147[3] = scr_const.aim_4;
      v147[4] = scr_const.aim_6;
      v147[5] = scr_const.aim_7;
      v147[6] = scr_const.aim_8;
      v147[7] = scr_const.aim_9;
      v32 = _RSI + 20;
      if ( BG_Animset_GetAddonAnimsFromState(AnimsetNameByIndex, *((_DWORD *)_RSI + 26), *((_DWORD *)_RSI + 27), ANIMSTATE_AIMSET, 1, _R15->subTreeID, v147, 8, (int *)_RSI + 5) )
      {
        v33 = 0i64;
        while ( *v32 != -1 )
        {
          ++v33;
          ++v32;
          if ( v33 >= 8 )
          {
            *((_WORD *)_RSI + 46) = *((_WORD *)_RSI + 52);
            *((_WORD *)_RSI + 47) = *((_WORD *)_RSI + 54);
            _RSI[113] = 1;
            break;
          }
        }
      }
    }
  }
  if ( _RSI[113] )
  {
    if ( !v26 )
    {
      v34 = XAnimGetAnimInfo(_R15->parent);
      dataOffset = XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo->dataOffset;
      nodeTypeID = XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo->nodeTypeID;
      children = v34->children;
      if ( children )
      {
        while ( 1 )
        {
          if ( (children & 0x8000u) != 0 )
          {
            v39 = 32 * (children & 0x7FFFu);
            if ( (unsigned int)v39 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
            {
              LODWORD(aliases) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
              LODWORD(curveID) = 32 * (children & 0x7FFF);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", curveID, aliases) )
                __debugbreak();
            }
            p_notifyChild = (unsigned __int16 *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v39];
          }
          else
          {
            if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
            {
              LODWORD(aliases) = g_xanimMemoryGlobals.infoPoolSize;
              LODWORD(curveID) = children;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", curveID, aliases) )
                __debugbreak();
            }
            p_notifyChild = &g_xanimMemoryGlobals.infoPool[children].notifyChild;
          }
          SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)p_notifyChild[8]);
          if ( children != animInfoIndex && SubTreeAnims->entries[p_notifyChild[3]].nodeType == nodeTypeID )
            break;
          children = p_notifyChild[5];
          if ( !children )
            goto LABEL_43;
        }
        _RCX = (char *)p_notifyChild + dataOffset;
        *((_DWORD *)_RSI + 13) = *((_DWORD *)_RCX + 13);
        *((_DWORD *)_RSI + 14) = *((_DWORD *)_RCX + 14);
        *((_DWORD *)_RSI + 15) = *((_DWORD *)_RCX + 15);
        *((_DWORD *)_RSI + 16) = *((_DWORD *)_RCX + 16);
        _RSI[115] = _RCX[115];
        *((_DWORD *)_RSI + 17) = *((_DWORD *)_RCX + 17);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+48h]
          vmovss  dword ptr [rsi+48h], xmm0
          vmovss  xmm1, dword ptr [rcx+4Ch]
          vmovss  dword ptr [rsi+4Ch], xmm1
        }
        *((_DWORD *)_RSI + 20) = *((_DWORD *)_RCX + 20);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+54h]
          vmovss  dword ptr [rsi+54h], xmm0
          vmovss  xmm1, dword ptr [rcx+58h]
          vmovss  dword ptr [rsi+58h], xmm1
        }
      }
    }
LABEL_43:
    v46 = *((_DWORD *)_RSI + 2);
    if ( (!v46 || v46 == scr_const._) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 487, ASSERT_TYPE_ASSERT, "(pNode->m_Degrees != ( static_cast< scr_string_t >( 0 ) ) && pNode->m_Degrees != scr_const._)", (const char *)&queryFormat, "pNode->m_Degrees != NULL_SCR_STRING && pNode->m_Degrees != scr_const._") )
      __debugbreak();
    v47 = *((_DWORD *)_RSI + 2);
    if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
      __debugbreak();
    if ( !SL_ConvertToString(v47) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 489, ASSERT_TYPE_ASSERT, "(range)", (const char *)&queryFormat, "range") )
      __debugbreak();
    v48 = *((_DWORD *)_RSI + 4);
    if ( (!v48 || v48 == scr_const._) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 491, ASSERT_TYPE_ASSERT, "(pNode->m_AimAnims != ( static_cast< scr_string_t >( 0 ) ) && pNode->m_AimAnims != scr_const._)", (const char *)&queryFormat, "pNode->m_AimAnims != NULL_SCR_STRING && pNode->m_AimAnims != scr_const._") )
      __debugbreak();
    v49 = *((_DWORD *)_RSI + 4);
    if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
      __debugbreak();
    v50 = SL_ConvertToString(v49);
    if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 493, ASSERT_TYPE_ASSERT, "(aim_anims)", (const char *)&queryFormat, "aim_anims") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+1E8h+var_148], xmm0
      vmovss  xmm1, dword ptr [rsi]
      vmovss  dword ptr [rsp+1E8h+var_148+4], xmm1
      vmovss  [rsp+1E8h+var_140], xmm9
    }
    if ( !_RSI[114] )
    {
      __asm
      {
        vmovaps xmm0, xmm9
        vmovss  dword ptr [rsp+1E8h+var_148], xmm0
        vmovaps xmm1, xmm9
        vmovss  dword ptr [rsp+1E8h+var_148+4], xmm1
      }
    }
    __asm { vucomiss xmm0, dword ptr [rsi+44h] }
    if ( _RSI[114] )
      goto LABEL_68;
    __asm { vucomiss xmm1, dword ptr [rsi+48h] }
    if ( _RSI[114] )
      goto LABEL_68;
    __asm { vucomiss xmm9, dword ptr [rsi+4Ch] }
    if ( _RSI[114] )
    {
LABEL_68:
      __asm
      {
        vmovsd  xmm0, [rsp+1E8h+var_148]
        vmovsd  qword ptr [rsi+44h], xmm0
      }
      *((_DWORD *)_RSI + 19) = v145;
      _R12 = 0i64;
      *(_QWORD *)(_RSI + 52) = 0i64;
      _RSI[115] = 0;
    }
    else
    {
      _R12 = 0i64;
    }
    __asm
    {
      vmovss  xmm11, cs:__real@3f000000
      vmovss  xmm12, cs:__real@43b40000
      vmovss  xmm15, cs:__real@3f800000
      vmovss  xmm10, [rsp+1E8h+dtime]
      vcomiss xmm10, xmm9
    }
    AngleVectors((const vec3_t *)(_RSI + 80), &forward, NULL, NULL);
    __asm { vmovss  xmm0, dword ptr [rsp+1E8h+forward]; X }
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f22f983; val
      vmovaps xmm2, xmm15; max
      vmovaps xmm1, xmm9; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, xmm0
      vmovss  xmm1, dword ptr [rsp+1E8h+forward+8]
      vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000; Y
      vmovss  xmm1, dword ptr [rsp+1E8h+forward+4]; X
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm4, xmm0, cs:__real@3e22f983
      vaddss  xmm2, xmm4, xmm11
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm3, xmm1, xmm2
      vxorps  xmm5, xmm5, xmm5
      vroundss xmm1, xmm5, xmm3, 1
      vsubss  xmm0, xmm4, xmm1
      vmulss  xmm6, xmm0, xmm12
      vmulss  xmm1, xmm6, cs:__real@3cb60b61
      vaddss  xmm3, xmm1, cs:__real@40800000
      vxorps  xmm2, xmm2, xmm2
      vmovss  xmm1, xmm2, xmm3
      vroundss xmm0, xmm5, xmm1, 1
      vcvttss2si rcx, xmm0; val
    }
    _RBX = (unsigned int)I_clamp(_RCX, 0, 7);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups ymmword ptr [rsp+1E8h+var_128], ymm0
      vxorps  xmm1, xmm1, xmm1
      vmovups [rsp+1E8h+var_108], ymm1
      vsubss  xmm0, xmm6, dword ptr [r15+rbx*4+4]
      vmulss  xmm2, xmm0, cs:__real@3c8efa35
      vmovss  xmm1, cs:__real@3ffb53d2
      vsubss  xmm0, xmm1, xmm2; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm0, xmm1, cs:__real@3f8a8bd4; val
      vmovaps xmm2, xmm15; max
      vmovaps xmm1, xmm9; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RAX = ((_BYTE)_RBX + 1) & 7;
    __asm
    {
      vsubss  xmm1, xmm6, dword ptr [r15+rbx*4+4]
      vmulss  xmm2, xmm1, cs:__real@3cb60b61
      vmovss  [rsp+rax*4+1E8h+var_128], xmm2
      vsubss  xmm1, xmm15, xmm2
      vmovss  [rsp+rbx*4+1E8h+var_128], xmm1
      vmovss  dword ptr [rsp+rbx*4+1E8h+var_108], xmm0
      vmovss  dword ptr [rsp+rax*4+1E8h+var_108], xmm0
    }
    v97 = 0;
    v140 = 0;
    v98 = 1;
    v138 = 1;
    v99 = v50 - (const char *)v147;
    v144 = v99;
    __asm { vmovss  xmm7, cs:__real@3a83126f }
    do
    {
      _R15 = &v147[_R12];
      v102 = *(_DWORD *)&_RSI[4 * *(unsigned int *)((char *)&v147[_R12 + 1] + v99) + 20];
      if ( obj->tree->owner[0] == 1 )
        goto LABEL_74;
      __asm { vcomiss xmm9, dword ptr [r15] }
      if ( !obj->tree->owner[0] || ((unsigned __int8)v98 & (unsigned __int8)_RSI[112]) != 0 )
      {
LABEL_74:
        if ( v136 )
        {
          v103 = XAnimGetAnimInfo(animInfoIndex)->children;
          v104 = (v103 & 0x8000u) != 0;
          if ( v103 )
          {
            do
            {
              if ( v104 )
              {
                v106 = 32 * (v103 & 0x7FFFu);
                if ( (unsigned int)v106 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
                {
                  LODWORD(aliases) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
                  LODWORD(curveID) = 32 * (v103 & 0x7FFF);
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", curveID, aliases) )
                    __debugbreak();
                }
                v105 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v106];
              }
              else
              {
                if ( (unsigned int)v103 >= g_xanimMemoryGlobals.infoPoolSize )
                {
                  LODWORD(aliases) = g_xanimMemoryGlobals.infoPoolSize;
                  LODWORD(curveID) = v103;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", curveID, aliases) )
                    __debugbreak();
                }
                v105 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[v103];
              }
              v107 = *((unsigned __int16 *)v105 + 3);
              if ( v107 == v102 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [r15]
                  vucomiss xmm0, xmm9
                }
                if ( v107 == v102 )
                  __asm { vmovaps xmm6, xmm9 }
                else
                  __asm { vmaxss  xmm6, xmm0, xmm7 }
                __asm { vmovss  xmm2, dword ptr [rsp+r12+1E8h+var_108]; time }
                XAnimSetTimeNode(obj->tree, v103, *(float *)&_XMM2);
                __asm
                {
                  vmovss  dword ptr [rsp+1E8h+curveID], xmm9
                  vmovss  dword ptr [rsp+1E8h+fmt], xmm9
                  vmovaps xmm3, xmm6; goalWeight
                }
                XAnimSetGoalWeightNode(obj, obj->tree, v103, *(float *)&_XMM3, fmta, curveIDa, (scr_string_t)0, 0, LINEAR, modelNameMap);
              }
              v103 = *((_WORD *)v105 + 5);
              v104 = (v103 & 0x8000u) != 0;
            }
            while ( v103 );
            _RSI = (char *)nodeData;
            v97 = v140;
          }
          v98 = v138;
        }
        else
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "XAnim 9Pt Set");
          __asm
          {
            vmovss  xmm6, dword ptr [r15]
            vmovss  [rsp+1E8h+numAliases], xmm9
            vmovss  dword ptr [rsp+1E8h+aliases], xmm9
            vmovss  dword ptr [rsp+1E8h+curveID], xmm6
          }
          XAnimSetGoalWeightWithParent(obj, graftAnimIndex, animInfo->subTreeID, animInfoIndex, v102, curveIDb, aliasesa, *(float *)&numAliases, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+r12+1E8h+var_108]
            vmovss  dword ptr [rsp+1E8h+fmt], xmm0
          }
          XAnimSetTime(obj->tree, graftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, v102, fmtb);
          Sys_ProfEndNamedEvent();
          v125 = _RSI[112];
          __asm { vcomiss xmm6, xmm9 }
          if ( v126 | v24 )
            _RSI[112] = v125 & ~(1 << v97);
          else
            _RSI[112] = v125 | (1 << v97);
        }
      }
      v140 = ++v97;
      v98 = __ROL4__(v98, 1);
      v138 = v98;
      ++_R12;
      v99 = v144;
    }
    while ( v97 < 8 );
  }
LABEL_94:
  Sys_ProfEndNamedEvent();
  _R11 = &v149;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
XAnim9PtBlend_Read
==============
*/
void XAnim9PtBlend_Read(void *nodeData, MemoryFile *memFile)
{
  _DWORD *v5; 
  __int64 v6; 
  int p; 

  _RBP = (char *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 681, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBP[113] = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBP[114] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+0], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+4], xmm0 }
  *((_DWORD *)_RBP + 2) = XAnimReadConstStringOfSize(memFile);
  *((_DWORD *)_RBP + 3) = XAnimReadConstStringOfSize(memFile);
  *((_DWORD *)_RBP + 4) = XAnimReadConstStringOfSize(memFile);
  v5 = _RBP + 20;
  v6 = 8i64;
  do
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    *v5++ = p;
    --v6;
  }
  while ( v6 );
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBP[112] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+34h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+38h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+3Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+40h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+44h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+48h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+4Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+50h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+54h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbp+58h], xmm0 }
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)_RBP + 46) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)_RBP + 47) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBP[115] = p;
}

/*
==============
XAnim9PtBlend_Write
==============
*/
void XAnim9PtBlend_Write(void *nodeData, MemoryFile *memFile)
{
  int *v6; 
  __int64 v7; 
  int p; 

  _RBP = (char *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 717, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  LOBYTE(p) = _RBP[113];
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RBP[114];
  MemFile_WriteData(memFile, 1ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbp+0]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbp+4]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)_RBP + 2));
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)_RBP + 3));
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)_RBP + 4));
  v6 = (int *)(_RBP + 20);
  v7 = 8i64;
  do
  {
    p = *v6;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++v6;
    --v7;
  }
  while ( v7 );
  LOBYTE(p) = _RBP[112];
  MemFile_WriteData(memFile, 1ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbp+34h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbp+38h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbp+3Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbp+40h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  MemFile_WriteData(memFile, 0xCui64, _RBP + 68);
  MemFile_WriteData(memFile, 0xCui64, _RBP + 80);
  LOWORD(p) = *((_WORD *)_RBP + 46);
  MemFile_WriteData(memFile, 2ui64, &p);
  LOWORD(p) = *((_WORD *)_RBP + 47);
  MemFile_WriteData(memFile, 2ui64, &p);
  LOBYTE(p) = _RBP[115];
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnim9PtBlend_Init
==============
*/
void XAnim9PtBlend_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 754, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 755, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  *(_QWORD *)nodeData = 0i64;
  *(_QWORD *)((char *)nodeData + 52) = 0i64;
  *(_QWORD *)((char *)nodeData + 60) = 0i64;
  *(_QWORD *)((char *)nodeData + 68) = 0i64;
  *(_QWORD *)((char *)nodeData + 76) = 0i64;
  *(_QWORD *)((char *)nodeData + 84) = 0i64;
  *((_DWORD *)nodeData + 23) = 0;
  *((_WORD *)nodeData + 56) = 0;
  *((_BYTE *)nodeData + 114) = 0;
}

/*
==============
XAnim9PtBlend_PostParse
==============
*/
char XAnim9PtBlend_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  bool v6; 
  scr_string_t v7; 
  const char *v8; 
  const XAnimParameterBinding *v9; 
  scr_string_t v10; 
  const XAnimFieldArray<unsigned int> *UIntFieldArray; 
  const char *v12; 
  __int64 v13; 
  unsigned int *i; 
  unsigned int v16; 
  const char *v17; 
  __int64 v18; 
  const char *v19; 
  const char *AnimDebugName; 
  __int64 v21; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 781, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v18, anims->size) )
      __debugbreak();
  }
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v2].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 785, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.degrees, TypeFieldsForNodeType);
  if ( ConstantBindParameterByFieldNameAllBindings )
  {
    v7 = truncate_cast<enum scr_string_t,unsigned int>(ConstantBindParameterByFieldNameAllBindings->constant.uint32Value);
    if ( !v7 || v7 == scr_const._ )
    {
      AnimDebugName = XAnimGetAnimDebugName(anims, v2);
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 797, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. Degrees property is required.", AnimDebugName);
    }
    else if ( XAnimNode_GetFloatFieldArray(v7)->size == 9 )
    {
      v9 = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.aim_anims, TypeFieldsForNodeType);
      if ( v9 )
      {
        v10 = truncate_cast<enum scr_string_t,unsigned int>(v9->constant.uint32Value);
        if ( !v10 || v10 == scr_const._ )
        {
          v19 = XAnimGetAnimDebugName(anims, v2);
          v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 819, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. Aim anims property is required.", v19);
        }
        else
        {
          UIntFieldArray = XAnimNode_GetUIntFieldArray(v10);
          if ( UIntFieldArray->size == 9 )
          {
            v13 = 0i64;
            for ( i = UIntFieldArray->values; *i < 8; ++i )
            {
              v13 = (unsigned int)(v13 + 1);
              if ( (unsigned int)v13 >= 9 )
                return 1;
            }
            v16 = UIntFieldArray->values[v13];
            v17 = XAnimGetAnimDebugName(anims, v2);
            LODWORD(v21) = v16;
            v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 836, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. Invalid aim anim index '%i'.", v17, v21);
          }
          else
          {
            v12 = XAnimGetAnimDebugName(anims, v2);
            LODWORD(v21) = 9;
            v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 827, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. 9pt blend requires %i aim anims.", v12, v21);
          }
        }
      }
      else
      {
        v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 812, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend. Aim anims is not specified.");
      }
    }
    else
    {
      v8 = XAnimGetAnimDebugName(anims, v2);
      LODWORD(v21) = 9;
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 805, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. 9pt blend requires %i degrees.", v8, v21);
    }
  }
  else
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 790, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend. Degrees is not specified.");
  }
  if ( v6 )
    __debugbreak();
  return 0;
}

/*
==============
XAnim4PtBlend_Register
==============
*/
void XAnim4PtBlend_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnim4PtBlend>::ms_typeInfo);
}

/*
==============
XAnim9PtBlend_FindAndCopyNodeState
==============
*/
void XAnim9PtBlend_FindAndCopyNodeState(XAnim9PtBlend *pNode, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  unsigned __int16 children; 
  unsigned __int16 dataOffset; 
  XAnimNodeTypeID nodeTypeID; 
  unsigned __int16 *p_notifyChild; 
  __int64 v11; 
  const XAnim_s *SubTreeAnims; 
  float *v13; 
  __int64 v14; 
  __int64 v15; 

  children = XAnimGetAnimInfo(animInfo->parent)->children;
  dataOffset = XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo->dataOffset;
  nodeTypeID = XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo->nodeTypeID;
  if ( children )
  {
    while ( 1 )
    {
      if ( (children & 0x8000u) != 0 )
      {
        v11 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v11 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v15) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v14) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v14, v15) )
            __debugbreak();
        }
        p_notifyChild = (unsigned __int16 *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v11];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v15) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v14) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        p_notifyChild = &g_xanimMemoryGlobals.infoPool[children].notifyChild;
      }
      SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)p_notifyChild[8]);
      if ( children != animInfoIndex && SubTreeAnims->entries[p_notifyChild[3]].nodeType == nodeTypeID )
        break;
      children = p_notifyChild[5];
      if ( !children )
        return;
    }
    v13 = (float *)((char *)p_notifyChild + dataOffset);
    pNode->m_PrevYawError = v13[13];
    pNode->m_PrevPitchError = v13[14];
    pNode->m_PrevYawVel = v13[15];
    pNode->m_PrevPitchVel = v13[16];
    pNode->m_bResetMultiplier = *((_BYTE *)v13 + 115);
    pNode->m_TargetAim.v[0] = v13[17];
    pNode->m_TargetAim.v[1] = v13[18];
    pNode->m_TargetAim.v[2] = v13[19];
    pNode->m_CurrentAim.v[0] = v13[20];
    pNode->m_CurrentAim.v[1] = v13[21];
    pNode->m_CurrentAim.v[2] = v13[22];
  }
}

/*
==============
XAnim9PtBlend_Register
==============
*/
void XAnim9PtBlend_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo);
}

