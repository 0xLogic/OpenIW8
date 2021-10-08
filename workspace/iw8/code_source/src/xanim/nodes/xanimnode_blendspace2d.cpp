/*
==============
XAnimBlendSpace2D_Register
==============
*/

void XAnimBlendSpace2D_Register(void)
{
  ?XAnimBlendSpace2D_Register@@YAXXZ();
}

/*
==============
XAnimBlendSpace2D_CalcWeights
==============
*/

void __fastcall XAnimBlendSpace2D_CalcWeights(const XAnimFieldArray<unsigned int> *const triangleCoords, const XAnimFieldArray<float> *const coords, vec2_t value, vec3_t *outWeights, unsigned int *outTriangleIndex, unsigned int *inoutLastTriangleIndex)
{
  ?XAnimBlendSpace2D_CalcWeights@@YAXQEBU?$XAnimFieldArray@I@@QEBU?$XAnimFieldArray@M@@Tvec2_t@@AEATvec3_t@@PEAI4@Z(triangleCoords, coords, value, outWeights, outTriangleIndex, inoutLastTriangleIndex);
}

/*
==============
XAnimBlendSpace2D_GetTriangleCoords
==============
*/

scr_string_t __fastcall XAnimBlendSpace2D_GetTriangleCoords(const scr_string_t coords, const vec2_t *rangeX, const vec2_t *rangeY)
{
  return ?XAnimBlendSpace2D_GetTriangleCoords@@YA?AW4scr_string_t@@W41@AEBTvec2_t@@1@Z(coords, rangeX, rangeY);
}

/*
==============
XAnimBlendSpace2D_Destroy
==============
*/
void XAnimBlendSpace2D_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimBlendSpace2D_Update
==============
*/
void XAnimBlendSpace2D_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  const DObj *v15; 
  char *v16; 
  unsigned int *v17; 
  unsigned int v18; 
  _QWORD *v19; 
  char *v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  ThreadContext CurrentThreadContext; 
  bool v24; 
  unsigned int v25; 
  unsigned int v27; 
  char v29; 
  unsigned __int16 InfoIndex; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  unsigned int v36; 
  scr_string_t v43; 
  __int64 v46; 
  const XAnimTree *tree; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v54; 
  unsigned int *v55; 
  unsigned int ChildAt; 
  const XAnimFieldArray<float> *v57; 
  XAnimFieldArray<unsigned int> *v58; 
  signed int v59; 
  __int64 v60; 
  bool v61; 
  __int64 v63; 
  __int64 v64; 
  unsigned int v65; 
  bool v66; 
  scr_string_t v67; 
  unsigned int v71; 
  char v74; 
  bool v75; 
  unsigned int v76; 
  unsigned __int16 children; 
  int i; 
  int v79; 
  unsigned __int16 next; 
  float fmt; 
  unsigned int fmta; 
  float fmtb; 
  unsigned int *inoutLastTriangleIndex; 
  unsigned int *inoutLastTriangleIndexa; 
  float inoutLastTriangleIndexb; 
  float inoutLastTriangleIndexc; 
  unsigned int *outNotifyTypes; 
  unsigned int *outNotifyTypesa; 
  float outNotifyTypesb; 
  float outNotifyTypesc; 
  float outNotifyNames; 
  char v100; 
  unsigned int graftAnimIndex; 
  unsigned int outTriangleIndex; 
  unsigned int maxWeightAnimIndex; 
  DObj *obja; 
  XAnimFieldArray<unsigned int> *triangleCoords; 
  XModelNameMap *cachedModelNameMap; 
  vec3_t outWeights; 
  vec2_t value; 
  int v110; 
  unsigned int animIndex[195]; 
  unsigned int childAnimIndex[2]; 
  int v113; 
  unsigned int v114[4]; 
  scr_string_t notifyName[4]; 

  _R13 = nodeData;
  cachedModelNameMap = modelNameMap;
  _R15 = animInfo;
  obja = (DObj *)obj;
  v15 = obj;
  v16 = (char *)Sys_GetValue(0);
  v17 = (unsigned int *)(v16 + 19376);
  if ( (unsigned int)(*((_DWORD *)v16 + 4844) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)v16 + 4844) + 1, 3) )
    __debugbreak();
  v18 = *v17 + 1;
  *v17 = v18;
  if ( v18 >= 3 )
  {
    LODWORD(outNotifyTypes) = 3;
    LODWORD(inoutLastTriangleIndex) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", inoutLastTriangleIndex, outNotifyTypes) )
      __debugbreak();
  }
  v19 = v16 + 2088;
  v20 = v16 + 40;
  if ( *v19 < (unsigned __int64)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v19 += 8i64;
  if ( *v19 >= (unsigned __int64)v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v19 = v17;
  if ( *v19 <= (unsigned __int64)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v21 = (int)*v17;
  v22 = __rdtsc();
  v17[v21 + 2] = v22;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 432, NULL, 0);
  if ( *((_BYTE *)_R13 + 52) )
  {
    __asm { vmovaps [rsp+470h+var_50], xmm6 }
    v25 = XAnimGetGraftAnimIndex(animInfoIndex);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm6, dword ptr [r15+3Ch]
    }
    v27 = v25;
    graftAnimIndex = v25;
    if ( v24 )
    {
      __asm { vucomiss xmm6, dword ptr [r15+38h] }
      if ( v24 )
      {
        __asm { vxorps  xmm2, xmm2, xmm2; blendTime }
        XAnimClearTreeGoalWeightsNode(v15->tree, animInfoIndex, *(float *)&_XMM2, 1, LINEAR);
LABEL_94:
        __asm { vmovaps xmm6, [rsp+470h+var_50] }
        goto LABEL_95;
      }
    }
    else
    {
      __asm { vucomiss xmm6, dword ptr [r15+38h] }
      if ( v24 )
      {
        v29 = 1;
LABEL_26:
        if ( *((_BYTE *)_R13 + 33) && v29 )
        {
          __asm { vmovss  xmm2, dword ptr [r15+34h]; blendTime }
          XAnimClearTreeGoalWeightsNode(v15->tree, animInfoIndex, *(float *)&_XMM2, 0, LINEAR);
        }
        else
        {
          InfoIndex = XAnimGetInfoIndex(v15->tree, v27, (const XAnimSubTreeID)_R15->subTreeID, _R15->animIndex);
          __asm { vucomiss xmm6, dword ptr [r15+38h] }
          if ( (!v24 || InfoIndex == animInfoIndex) && !*((_BYTE *)_R13 + 53) )
          {
            v24 = *((_DWORD *)_R13 + 6) == 0;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vmovaps [rsp+470h+var_70], xmm8
              vmulss  xmm8, xmm0, cs:__real@3a83126f
            }
            if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 755, ASSERT_TYPE_ASSERT, "(node->coords != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "node->coords != NULL_SCR_STRING") )
              __debugbreak();
            FloatFieldArray = XAnimNode_GetFloatFieldArray((scr_string_t)*((_DWORD *)_R13 + 6));
            if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 758, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
              __debugbreak();
            triangleCoords = (XAnimFieldArray<unsigned int> *)XAnimBlendSpace_GetTriangleCoordFieldArray((scr_string_t)*((_DWORD *)_R13 + 7));
            if ( !triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 761, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
              __debugbreak();
            v36 = FloatFieldArray->size >> 1;
            if ( v36 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 764, ASSERT_TYPE_ASSERT, "(numPoints >= 3)", (const char *)&queryFormat, "numPoints >= 3") )
              __debugbreak();
            __asm
            {
              vmovss  xmm2, dword ptr [r13+4]; max
              vmovss  xmm1, dword ptr [r13+0]; min
              vmovss  xmm0, dword ptr [r13+28h]; val
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovss  xmm2, dword ptr [r13+0Ch]; max
              vmovss  xmm1, dword ptr [r13+8]; min
              vmovss  dword ptr [rbp+370h+value], xmm0
              vmovss  xmm0, dword ptr [r13+2Ch]; val
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            v43 = *((_DWORD *)_R13 + 12);
            __asm { vmovss  dword ptr [rbp+370h+value+4], xmm0 }
            if ( v43 )
            {
              _RBX = SL_ConvertToString(v43);
              if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 773, ASSERT_TYPE_ASSERT, "(childAnimArray)", (const char *)&queryFormat, "childAnimArray") )
                __debugbreak();
              _RCX = &v110;
              v46 = 6i64;
              do
              {
                _RCX += 32;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbx]
                  vmovups xmm1, xmmword ptr [rbx+70h]
                }
                _RBX += 128;
                __asm
                {
                  vmovups ymmword ptr [rcx-80h], ymm0
                  vmovups ymm0, ymmword ptr [rbx-60h]
                  vmovups ymmword ptr [rcx-60h], ymm0
                  vmovups ymm0, ymmword ptr [rbx-40h]
                  vmovups ymmword ptr [rcx-40h], ymm0
                  vmovups xmm0, xmmword ptr [rbx-20h]
                  vmovups xmmword ptr [rcx-20h], xmm0
                  vmovups xmmword ptr [rcx-10h], xmm1
                }
                --v46;
              }
              while ( v46 );
              *_RCX = *(_DWORD *)_RBX;
            }
            else
            {
              tree = v15->tree;
              if ( !v15->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 781, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
                __debugbreak();
              SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_R15->subTreeID);
              if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 784, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
                __debugbreak();
              v54 = 0;
              if ( v36 )
              {
                v55 = animIndex;
                do
                {
                  ChildAt = XAnimGetChildAt(SubTreeAnims, _R15->animIndex, v54++);
                  *v55++ = ChildAt;
                }
                while ( v54 < v36 );
                v27 = graftAnimIndex;
              }
              v15 = obja;
              v110 = truncate_cast<unsigned char,unsigned int>(v36);
            }
            v57 = FloatFieldArray;
            v58 = triangleCoords;
            __asm
            {
              vmovss  dword ptr [rbp+370h+outWeights], xmm6
              vmovss  dword ptr [rbp+370h+outWeights+4], xmm6
              vmovss  dword ptr [rbp+370h+outWeights+8], xmm6
            }
            XAnimBlendSpace2D_CalcWeights(triangleCoords, v57, value, &outWeights, &outTriangleIndex, (unsigned int *)_R13 + 14);
            __asm { vmovss  dword ptr [rsp+470h+fmt], xmm8 }
            XAnimClearChildGoalWeightsWithParent(v15->tree, v27, _R15->subTreeID, animInfoIndex, fmt, LINEAR);
            XAnimBlendSpace_GetNotifyParameters(_R15, (XAnimOwner)(unsigned __int8)v15->tree->owner[0], _R15->notifyName, *((_BYTE *)_R13 + 32), 3u, outWeights.v, v114, notifyName, &maxWeightAnimIndex);
            __asm { vmovaps [rsp+470h+var_60], xmm7 }
            v59 = 0;
            *(_QWORD *)childAnimIndex = 0i64;
            v60 = 0i64;
            v113 = 0;
            v100 = 0;
            v61 = 1;
            do
            {
              _RAX = v59;
              __asm { vcomiss xmm6, dword ptr [rbp+rax*4+370h+outWeights] }
              if ( v61 )
              {
                v63 = 3 * outTriangleIndex;
                if ( (unsigned int)v63 >= v58->size )
                {
                  LODWORD(outNotifyTypesa) = v58->size;
                  LODWORD(inoutLastTriangleIndexa) = 3 * outTriangleIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", inoutLastTriangleIndexa, outNotifyTypesa) )
                    __debugbreak();
                }
                v64 = (__int64)&v58->values[v63];
                if ( !v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 819, ASSERT_TYPE_ASSERT, "(coordIndexes)", (const char *)&queryFormat, "coordIndexes") )
                  __debugbreak();
                v100 = 1;
                v65 = animIndex[*(unsigned int *)(v60 * 4 + v64)];
                childAnimIndex[v60] = v65;
                v66 = Com_GameMode_SupportsFeature((Com_GameMode_Feature)264);
                v67 = notifyName[v60];
                __asm { vmovss  xmm7, dword ptr [r13+14h] }
                if ( v66 )
                {
                  v15 = obja;
                  __asm { vmovss  dword ptr [rsp+470h+outNotifyNames], xmm7 }
                  _RAX = v59;
                  __asm
                  {
                    vmovss  dword ptr [rsp+470h+outNotifyTypes], xmm8
                    vmovss  xmm0, dword ptr [rbp+rax*4+370h+outWeights]
                    vmovss  dword ptr [rsp+470h+inoutLastTriangleIndex], xmm0
                  }
                  fmta = v65;
                  v27 = graftAnimIndex;
                  XAnimSetGoalWeightWithParent(obja, graftAnimIndex, _R15->subTreeID, animInfoIndex, fmta, inoutLastTriangleIndexb, outNotifyTypesb, outNotifyNames, v67, v114[v60], 0, LINEAR, cachedModelNameMap);
                }
                else
                {
                  v71 = v65;
                  v27 = graftAnimIndex;
                  v15 = obja;
                  _RAX = v59;
                  __asm
                  {
                    vmovss  dword ptr [rsp+470h+outNotifyTypes], xmm7
                    vmovss  dword ptr [rsp+470h+inoutLastTriangleIndex], xmm8
                    vmovss  xmm0, dword ptr [rbp+rax*4+370h+outWeights]
                    vmovss  dword ptr [rsp+470h+fmt], xmm0
                  }
                  XAnimSetGoalWeight(obja, graftAnimIndex, _R15->subTreeID, v71, fmtb, inoutLastTriangleIndexc, outNotifyTypesc, v67, v114[v60], 0, LINEAR, cachedModelNameMap);
                }
                v58 = triangleCoords;
              }
              ++v59;
              ++v60;
              v61 = (unsigned int)v59 < 3;
            }
            while ( (unsigned int)v59 < 3 );
            v74 = 0;
            v75 = v100 == 0;
            if ( v100 )
              XAnimBlendSpace_HandleServerNotifyChild(v15->tree, _R15, v27, *((_BYTE *)_R13 + 32), childAnimIndex, maxWeightAnimIndex);
            __asm { vcomiss xmm8, xmm6 }
            if ( !(v74 | v75) )
            {
              v76 = *((_DWORD *)_R13 + 9);
              if ( v76 )
              {
                if ( v76 <= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 644, ASSERT_TYPE_ASSERT, "(maxActiveChildren > 3)", (const char *)&queryFormat, "maxActiveChildren > 3") )
                  __debugbreak();
                children = _R15->children;
                for ( i = 0; children; children = GetAnimInfo(children)->next )
                  ++i;
                v79 = i - v76;
                if ( v79 > 0 )
                {
                  __asm { vmovss  xmm8, cs:__real@7f7fffff }
                  do
                  {
                    next = _R15->children;
                    __asm { vmovaps xmm7, xmm8 }
                    for ( ; next; next = _RAX->next )
                    {
                      _RAX = GetAnimInfo(next);
                      if ( _RAX )
                      {
                        if ( _RAX->animToModel )
                        {
                          __asm
                          {
                            vmovss  xmm0, dword ptr [rax+3Ch]
                            vcomiss xmm0, xmm6
                          }
                          if ( _RAX->animToModel )
                            __asm { vcomiss xmm6, dword ptr [rax+34h] }
                        }
                      }
                    }
                    --v79;
                  }
                  while ( v79 > 0 );
                }
              }
            }
            __asm
            {
              vmovaps xmm8, [rsp+470h+var_70]
              vmovaps xmm7, [rsp+470h+var_60]
            }
            *((_DWORD *)_R13 + 15) = *((_DWORD *)_R13 + 10);
            *((_DWORD *)_R13 + 16) = *((_DWORD *)_R13 + 11);
          }
        }
        goto LABEL_94;
      }
    }
    v29 = 0;
    goto LABEL_26;
  }
LABEL_95:
  Profile_EndInternal(NULL);
}

/*
==============
XAnimBlendSpace2D_Read
==============
*/
void XAnimBlendSpace2D_Read(void *nodeData, MemoryFile *memFile)
{
  int p; 

  *((_DWORD *)nodeData + 12) = 0;
  _RDI = nodeData;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[4] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+28h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+2Ch], xmm0 }
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 52) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 53) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 32) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[14] = p;
  MemFile_ReadData(memFile, 8ui64, _RDI);
  MemFile_ReadData(memFile, 8ui64, _RDI + 2);
  _RDI[6] = XAnimReadConstStringOfSize(memFile);
  _RDI[7] = XAnimReadConstStringOfSize(memFile);
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( (_BYTE)p )
    _RDI[12] = XAnimReadConstStringOfSize(memFile);
}

/*
==============
XAnimBlendSpace2D_Write
==============
*/
void XAnimBlendSpace2D_Write(void *nodeData, MemoryFile *memFile)
{
  int v2; 
  int p; 

  v2 = *((_DWORD *)nodeData + 12);
  _RSI = (char *)nodeData;
  p = *((_DWORD *)nodeData + 4);
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rsi+28h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rsi+2Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  LOBYTE(p) = _RSI[52];
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RSI[53];
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RSI[32];
  MemFile_WriteData(memFile, 1ui64, &p);
  p = *((_DWORD *)_RSI + 14);
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 8ui64, _RSI);
  MemFile_WriteData(memFile, 8ui64, _RSI + 8);
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)_RSI + 6));
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)_RSI + 7));
  LOBYTE(p) = v2 != 0;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v2 )
    XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)_RSI + 12));
}

/*
==============
XAnimBlendSpace2D_Init
==============
*/
void XAnimBlendSpace2D_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  const XAnimTypeFields *TypeFieldsForNodeType; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 428, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 429, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( anims->subTreeID > 0x80u || XAnimBlendSpace2D_ValidateConstParameters(anims, v3, *((const scr_string_t *)nodeData + 6), *((const scr_string_t *)nodeData + 7), (const vec2_t *)nodeData, (const vec2_t *)nodeData + 1, *((_DWORD *)nodeData + 9), 0) )
  {
    *((_DWORD *)nodeData + 12) = 0;
    *((_WORD *)nodeData + 26) = 1;
    *((_DWORD *)nodeData + 14) = -1;
    TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v3].nodeType);
    if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 451, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
      __debugbreak();
    if ( !XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v3, scr_const.xanimBlendSpaceRate, TypeFieldsForNodeType) )
      *((_DWORD *)nodeData + 5) = 1065353216;
  }
  else
  {
    *((_BYTE *)nodeData + 52) = 0;
  }
}

/*
==============
XAnimBlendSpace2D_PostParse
==============
*/
char XAnimBlendSpace2D_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  XAnimParameterBinding *ConstantBindParameterByFieldNameNonConst; 
  XAnimParameterBinding *v13; 
  scr_string_t v14; 
  scr_string_t v15; 
  unsigned int maxActiveChildren; 
  const XAnimParameterBinding *v17; 
  const XAnimParameterBinding *v18; 
  scr_string_t TriangleCoords; 
  vec2_t *rangeY; 
  XAnimParameterBinding *v22; 
  vec2_t v23; 
  vec2_t rangeX; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 337, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(rangeY) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 338, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", rangeY, anims->size) )
      __debugbreak();
  }
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v2].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 345, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimBlendSpaceCoords, TypeFieldsForNodeType);
  _R12 = XAnimFindConstantBindParameterByFieldNameNonConst(anims, v2, scr_const.xanimBlendSpace2DAxisXRange, TypeFieldsForNodeType);
  _R13 = XAnimFindConstantBindParameterByFieldNameNonConst(anims, v2, scr_const.xanimBlendSpace2DAxisYRange, TypeFieldsForNodeType);
  ConstantBindParameterByFieldNameNonConst = XAnimFindConstantBindParameterByFieldNameNonConst(anims, v2, scr_const.xanimBlendSpace2DEdges, TypeFieldsForNodeType);
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  dword ptr [rsp+98h+rangeX], xmm0
    vmovss  xmm1, dword ptr [r12+0Ch]
    vmovss  dword ptr [rsp+98h+rangeX+4], xmm1
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  dword ptr [rsp+98h+var_50], xmm0
    vmovss  xmm1, dword ptr [r13+0Ch]
    vmovss  dword ptr [rsp+98h+var_50+4], xmm1
  }
  v13 = ConstantBindParameterByFieldNameNonConst;
  v22 = ConstantBindParameterByFieldNameNonConst;
  v14 = truncate_cast<enum scr_string_t,unsigned int>(ConstantBindParameterByFieldNameAllBindings->constant.uint32Value);
  v15 = truncate_cast<enum scr_string_t,unsigned int>(v13->constant.uint32Value);
  maxActiveChildren = 0;
  v17 = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimBlendSpace2DMaxActiveChildren, TypeFieldsForNodeType);
  v18 = v17;
  if ( v17 )
  {
    if ( v17->type != CONSTANT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 387, ASSERT_TYPE_ASSERT, "(maxActiveChildrenBinding->type == XAnimBindingType::CONSTANT)", "%s\n\tFailed to initialize 2D blendspace. Parameter: 'max_active_children' must be constant.", "maxActiveChildrenBinding->type == XAnimBindingType::CONSTANT") )
      __debugbreak();
    maxActiveChildren = v18->constant.uint32Value;
  }
  if ( XAnimBlendSpace2D_ValidateConstParameters(anims, v2, v14, v15, &rangeX, &v23, maxActiveChildren, 1) )
  {
    if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)264) )
      XAnimBlendSpace2D_UpdateRangeParameters(v14, _R12, _R13);
    if ( v15 && v15 != scr_const._ )
      return 1;
    TriangleCoords = XAnimBlendSpace2D_GetTriangleCoords(v14, &rangeX, &v23);
    if ( TriangleCoords )
    {
      v22->constant.uint32Value = TriangleCoords;
      return 1;
    }
  }
  return 0;
}

/*
==============
XAnimBlendSpace2D_PrintDebug
==============
*/
void XAnimBlendSpace2D_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  const dvar_t *v10; 
  unsigned int flags; 
  char v12; 
  __int64 v13; 
  const char *v22; 
  char *fmt; 
  double v24; 
  double v25; 
  double v26; 

  v6 = size;
  _RBP = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 916, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 917, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 918, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 919, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 920, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_xanim_display_blendspaces_info;
  if ( !DCONST_DVARBOOL_xanim_display_blendspaces_info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_display_blendspaces_info") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v10->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
      __debugbreak();
  }
  if ( v10->current.enabled )
  {
    if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 928, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    v12 = _RBP[52];
    if ( v12 )
    {
      if ( depth > 0 )
      {
        v13 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v6, inoutPos, "  ");
          --v13;
        }
        while ( v13 );
        v12 = _RBP[52];
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2Ch]
        vmovss  xmm1, dword ptr [rbp+28h]
        vmovss  xmm2, dword ptr [rbp+40h]
        vmovss  xmm3, dword ptr [rbp+3Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm3, xmm3, xmm3
      }
      v22 = "false";
      if ( v12 )
        v22 = "true";
      __asm
      {
        vmovsd  [rsp+68h+var_30], xmm0
        vmovsd  [rsp+68h+var_38], xmm1
        vmovsd  [rsp+68h+var_40], xmm2
        vmovsd  [rsp+68h+fmt], xmm3
      }
      Com_sprintfPos_truncate(buffer, v6, inoutPos, "  [oldX: %.2f, oldY: %.2f - curX: %.2f, curY: %.2f - init : %s]\n", *(double *)&fmt, v24, v25, v26, v22);
    }
  }
}

/*
==============
XAnimBlendSpace2D_CalcWeights
==============
*/
void XAnimBlendSpace2D_CalcWeights(const XAnimFieldArray<unsigned int> *const triangleCoords, const XAnimFieldArray<float> *const coords, vec2_t value, vec3_t *outWeights, unsigned int *outTriangleIndex, unsigned int *inoutLastTriangleIndex)
{
  unsigned int *v17; 
  const XAnimFieldArray<unsigned int> *v20; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  char v27; 
  char v28; 
  bool v32; 
  bool v33; 
  __int64 v46; 
  bool v61; 
  vec2_t cartesianPoint; 
  vec2_t v88; 
  BarycentricTriangle v89; 
  BarycentricTriangle v90; 
  vec2_t outTriangle[3]; 
  int v95[9]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v17 = outTriangleIndex;
  _R14 = outWeights;
  v20 = triangleCoords;
  cartesianPoint = value;
  if ( !triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 537, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
    __debugbreak();
  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 538, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  if ( !outTriangleIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 539, ASSERT_TYPE_ASSERT, "(outTriangleIndex)", (const char *)&queryFormat, "outTriangleIndex") )
    __debugbreak();
  if ( !inoutLastTriangleIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 540, ASSERT_TYPE_ASSERT, "(inoutLastTriangleIndex)", (const char *)&queryFormat, "inoutLastTriangleIndex") )
    __debugbreak();
  __asm
  {
    vmovss  xmm15, cs:__real@7f7fffff
    vmovss  xmm6, cs:__real@3f800000
  }
  v23 = 0;
  *(_QWORD *)_R14->v = 0i64;
  v24 = -1;
  _R14->v[2] = 0.0;
  v25 = v20->size / 3;
  __asm { vxorps  xmm14, xmm14, xmm14 }
  if ( *inoutLastTriangleIndex != -1 )
  {
    XAnimBlendSpace2D_GetTriangle(v20, coords, *inoutLastTriangleIndex, (vec2_t (*)[3])outTriangle);
    BarycentricTriangle::Init(&v89, outTriangle);
    BarycentricTriangle::GetBarycentricCoordinates(&v89, &cartesianPoint, _R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vcomiss xmm0, xmm14
    }
    if ( !v27 )
    {
      __asm { vcomiss xmm0, xmm6 }
      if ( v27 | v28 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+4]
          vcomiss xmm0, xmm14
          vcomiss xmm0, xmm6
        }
        if ( v27 | v28 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14+8]
            vcomiss xmm0, xmm14
            vcomiss xmm0, xmm6
          }
          if ( v27 | v28 )
          {
            *outTriangleIndex = *inoutLastTriangleIndex;
            goto LABEL_46;
          }
        }
      }
    }
  }
  if ( !v25 )
  {
    *outTriangleIndex = 0;
    goto LABEL_46;
  }
  __asm
  {
    vmovaps [rsp+1E0h+var_68+8], xmm7
    vmovaps [rsp+1E0h+var_78+8], xmm8
    vmovaps [rsp+1E0h+var_88+8], xmm9
    vmovaps [rsp+1E0h+var_98+8], xmm10
    vmovaps [rsp+1E0h+var_A8+8], xmm11
    vmovaps [rsp+1E0h+var_B8+8], xmm12
    vmovaps [rsp+1E0h+var_C8+8], xmm13
  }
  while ( 1 )
  {
    XAnimBlendSpace2D_GetTriangle(v20, coords, v23, (vec2_t (*)[3])outTriangle);
    BarycentricTriangle::Init(&v89, outTriangle);
    BarycentricTriangle::GetBarycentricCoordinates(&v89, &cartesianPoint, _R14);
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vcomiss xmm0, xmm14
    }
    if ( !v32 )
    {
      __asm { vcomiss xmm0, xmm6 }
      if ( v32 || v33 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+4]
          vcomiss xmm0, xmm14
          vcomiss xmm0, xmm6
        }
        if ( v32 || v33 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14+8]
            vcomiss xmm0, xmm14
            vcomiss xmm0, xmm6
          }
          if ( v32 || v33 )
          {
            *inoutLastTriangleIndex = v23;
LABEL_44:
            *v17 = v23;
            goto LABEL_45;
          }
        }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0E0h+outTriangle+0Ch]
      vmovss  xmm4, dword ptr [rbp+0E0h+outTriangle]
      vmovss  xmm3, dword ptr [rbp+0E0h+outTriangle+4]
      vmovss  xmm1, dword ptr [rbp+0E0h+outTriangle+8]
      vmovss  xmm2, dword ptr [rbp+0E0h+outTriangle+10h]
      vmovss  xmm6, dword ptr [rsp+1E0h+cartesianPoint+4]
      vmovss  xmm7, dword ptr [rsp+1E0h+cartesianPoint]
      vmovss  [rbp+0E0h+var_114], xmm0
      vmovss  [rbp+0E0h+var_10C], xmm0
      vmovss  xmm0, dword ptr [rbp+0E0h+outTriangle+14h]
      vmovss  [rbp+0E0h+var_104], xmm0
      vmovss  [rbp+0E0h+var_FC], xmm0
      vmovss  [rbp+0E0h+var_120], xmm4
      vmovss  [rbp+0E0h+var_11C], xmm3
      vmovss  [rbp+0E0h+var_118], xmm1
      vmovss  [rbp+0E0h+var_110], xmm1
      vmovss  [rbp+0E0h+var_108], xmm2
      vmovss  [rbp+0E0h+var_100], xmm2
      vmovss  [rbp+0E0h+var_F8], xmm4
      vmovss  [rbp+0E0h+var_F4], xmm3
    }
    _RBX = v95;
    v46 = 3i64;
    do
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rbx-0Ch]
        vmovss  xmm0, dword ptr [rbx-4]
        vmovss  xmm3, dword ptr [rbx-8]
        vmovss  xmm1, dword ptr [rbx]
        vsubss  xmm9, xmm0, xmm4
        vsubss  xmm10, xmm1, xmm3
        vsubss  xmm12, xmm7, xmm4
        vsubss  xmm13, xmm6, xmm3
        vmulss  xmm1, xmm10, xmm13
        vmulss  xmm0, xmm12, xmm9
        vaddss  xmm11, xmm1, xmm0
        vcomiss xmm11, xmm14
      }
      if ( !v32 )
      {
        __asm
        {
          vmulss  xmm1, xmm10, xmm10
          vmulss  xmm0, xmm9, xmm9
          vaddss  xmm8, xmm1, xmm0
          vucomiss xmm8, xmm14
        }
        if ( v33 )
        {
          v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 488, ASSERT_TYPE_ASSERT, "(segDot)", (const char *)&queryFormat, "segDot");
          v32 = 0;
          v33 = !v61;
          if ( v61 )
            __debugbreak();
          __asm
          {
            vmovss  xmm7, dword ptr [rsp+1E0h+cartesianPoint]
            vmovss  xmm6, dword ptr [rsp+1E0h+cartesianPoint+4]
          }
        }
        __asm { vcomiss xmm11, xmm8 }
        if ( v32 || v33 )
        {
          __asm
          {
            vdivss  xmm0, xmm11, xmm8
            vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
            vmulss  xmm1, xmm9, xmm3
            vmulss  xmm0, xmm10, xmm3
            vaddss  xmm2, xmm1, xmm12
            vaddss  xmm1, xmm0, xmm13
            vsubss  xmm3, xmm6, xmm1
            vsubss  xmm4, xmm7, xmm2
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm4, dword ptr [rbx-4]
            vmovss  xmm3, dword ptr [rbx]
          }
        }
      }
      __asm
      {
        vsubss  xmm1, xmm4, xmm7
        vsubss  xmm0, xmm3, xmm6
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm5, xmm2, xmm1
        vcomiss xmm5, xmm15
      }
      if ( v32 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+1E0h+var_180.m_cartesianVerts+4]
          vmovsd  xmm1, qword ptr [rsp+1E0h+var_180.m_cartesianVerts+14h]
        }
        v24 = v23;
        __asm
        {
          vmovups xmmword ptr [rbp+0E0h+var_158.m_inited], xmm0
          vmovsd  qword ptr [rbp+0E0h+var_158.m_cartesianVerts+0Ch], xmm1
          vmovss  dword ptr [rsp+1E0h+var_180.m_inited], xmm4
          vmovss  dword ptr [rsp+1E0h+var_180.m_cartesianVerts], xmm3
          vmovaps xmm15, xmm5
        }
        v90.m_cartesianVerts[2].v[1] = v89.m_cartesianVerts[2].v[1];
      }
      _RBX += 4;
      v32 = v46-- == 0;
      v33 = v46 == 0;
    }
    while ( v46 );
    v17 = outTriangleIndex;
    if ( ++v23 >= v25 )
      break;
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    v20 = triangleCoords;
  }
  if ( v24 == -1 )
    goto LABEL_44;
  BarycentricTriangle::GetBarycentricCoordinates(&v90, &v88, _R14);
  *inoutLastTriangleIndex = -1;
  *outTriangleIndex = v24;
LABEL_45:
  __asm
  {
    vmovaps xmm12, [rsp+1E0h+var_B8+8]
    vmovaps xmm11, [rsp+1E0h+var_A8+8]
    vmovaps xmm10, [rsp+1E0h+var_98+8]
    vmovaps xmm9, [rsp+1E0h+var_88+8]
    vmovaps xmm8, [rsp+1E0h+var_78+8]
    vmovaps xmm7, [rsp+1E0h+var_68+8]
    vmovaps xmm13, [rsp+1E0h+var_C8+8]
  }
LABEL_46:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+1E0h+var_58+8]
    vmovaps xmm14, [rsp+1E0h+var_D8+8]
    vmovaps xmm15, [rsp+1E0h+var_E8+8]
  }
}

/*
==============
XAnimBlendSpace2D_GetTriangle
==============
*/
void XAnimBlendSpace2D_GetTriangle(const XAnimFieldArray<unsigned int> *triangleCoords, const XAnimFieldArray<float> *coords, unsigned int triangleIndex, vec2_t (*outTriangle)[3])
{
  __int64 v9; 
  unsigned int *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 

  _RSI = (float *)outTriangle;
  if ( !triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 517, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
    __debugbreak();
  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 518, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 519, ASSERT_TYPE_ASSERT, "(outTriangle)", (const char *)&queryFormat, "outTriangle") )
    __debugbreak();
  if ( triangleIndex >= 0x40 )
  {
    LODWORD(v14) = triangleIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 520, ASSERT_TYPE_ASSERT, "(unsigned)( triangleIndex ) < (unsigned)( 64 )", "triangleIndex doesn't index MAX_TRIANGLE_COUNT\n\t%i not in [0, %i)", v14, 64) )
      __debugbreak();
  }
  v9 = 3 * triangleIndex;
  if ( (unsigned int)v9 >= triangleCoords->size )
  {
    LODWORD(v15) = triangleCoords->size;
    LODWORD(v14) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v10 = &triangleCoords->values[v9];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 523, ASSERT_TYPE_ASSERT, "(coordIndexes)", (const char *)&queryFormat, "coordIndexes") )
    __debugbreak();
  *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(coords, *v10);
  __asm { vmovss  dword ptr [rsi], xmm0 }
  v11 = 2 * *v10;
  if ( v11 >= coords->size )
  {
    LODWORD(v15) = coords->size;
    LODWORD(v14) = 2 * *v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  _RSI[1] = coords->values[v11 + 1];
  *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(coords, v10[1]);
  __asm { vmovss  dword ptr [rsi+8], xmm0 }
  v12 = 2 * v10[1];
  if ( v12 >= coords->size )
  {
    LODWORD(v15) = coords->size;
    LODWORD(v14) = 2 * v10[1];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  _RSI[3] = coords->values[v12 + 1];
  *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(coords, v10[2]);
  __asm { vmovss  dword ptr [rsi+10h], xmm0 }
  v13 = 2 * v10[2];
  if ( v13 >= coords->size )
  {
    LODWORD(v15) = coords->size;
    LODWORD(v14) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  _RSI[5] = coords->values[v13 + 1];
}

/*
==============
XAnimBlendSpace2D_GetTriangleCoordArray
==============
*/
__int64 XAnimBlendSpace2D_GetTriangleCoordArray(const ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *triangles, unsigned int numPoints)
{
  __int64 v4; 
  char *v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  unsigned int v10; 
  scr_string_t StringOfSize; 
  __int64 v13; 
  __int64 v14; 
  char str[4]; 
  int v16[195]; 

  if ( !triangles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 277, ASSERT_TYPE_ASSERT, "(triangles)", (const char *)&queryFormat, "triangles") )
    __debugbreak();
  v4 = 0i64;
  if ( triangles != (const ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)triangles + 116 * triangles->m_size) )
  {
    v5 = &triangles->m_data.m_buffer[48];
    do
    {
      if ( !v5[60] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.h", 132, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
        __debugbreak();
      if ( *(_DWORD *)v5 >= numPoints )
      {
        LODWORD(v14) = numPoints;
        LODWORD(v13) = *(_DWORD *)v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 286, ASSERT_TYPE_ASSERT, "(unsigned)( edges[0].coordIndex[0] ) < (unsigned)( numPoints )", "edges[0].coordIndex[0] doesn't index numPoints\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( *((_DWORD *)v5 + 6) >= numPoints )
      {
        LODWORD(v14) = numPoints;
        LODWORD(v13) = *((_DWORD *)v5 + 6);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 287, ASSERT_TYPE_ASSERT, "(unsigned)( edges[1].coordIndex[0] ) < (unsigned)( numPoints )", "edges[1].coordIndex[0] doesn't index numPoints\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( *((_DWORD *)v5 + 12) >= numPoints )
      {
        LODWORD(v14) = numPoints;
        LODWORD(v13) = *((_DWORD *)v5 + 12);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( edges[2].coordIndex[0] ) < (unsigned)( numPoints )", "edges[2].coordIndex[0] doesn't index numPoints\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v6 = 116 * triangles->m_size;
      v16[v4] = *(_DWORD *)v5;
      v7 = (unsigned int)(v4 + 1);
      v16[v7] = *((_DWORD *)v5 + 6);
      v8 = (unsigned int)(v7 + 1);
      v9 = *((_DWORD *)v5 + 12);
      v5 += 116;
      v16[v8] = v9;
      v4 = (unsigned int)(v8 + 1);
    }
    while ( v5 - 48 != (char *)triangles + v6 );
  }
  *(_DWORD *)str = truncate_cast<unsigned char,unsigned int>(v4);
  v10 = 4 * *(_DWORD *)str + 4;
  StringOfSize = j_SL_GetStringOfSize(str, 0, v10, 4);
  XAnimRegisterConstString(StringOfSize, v10);
  SL_RemoveRefToString(StringOfSize);
  return (unsigned int)StringOfSize;
}

/*
==============
XAnimBlendSpace2D_GetTriangleCoords
==============
*/
__int64 XAnimBlendSpace2D_GetTriangleCoords(const scr_string_t coords, const vec2_t *rangeX, const vec2_t *rangeY)
{
  unsigned __int64 v6; 
  const XAnimFieldArray<float> *v7; 
  bool v8; 
  unsigned int TriangleCoordArray; 
  __int64 v11; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > outTriangles; 

  v6 = 0i64;
  outTriangles.m_size = 0i64;
  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING", -2i64) )
    __debugbreak();
  v7 = (const XAnimFieldArray<float> *)SL_ConvertToString(coords);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 308, ASSERT_TYPE_ASSERT, "(coordArray)", (const char *)&queryFormat, "coordArray") )
    __debugbreak();
  XAnimBlendSpace2D_Triangulate(v7, rangeX, rangeY, &outTriangles);
  if ( outTriangles.m_size )
  {
    if ( outTriangles.m_size < 0x40 )
    {
      TriangleCoordArray = XAnimBlendSpace2D_GetTriangleCoordArray(&outTriangles, v7->size >> 1);
      goto LABEL_15;
    }
    LODWORD(v11) = 64;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 323, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 2D blendspace. Max number of triangles '%d' exceeded.", v11);
  }
  else
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 315, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 2D blendspace. Triangles were not generated. Check 'coords' parameter values. All vertices must not be collinear.");
  }
  if ( v8 )
    __debugbreak();
  TriangleCoordArray = 0;
LABEL_15:
  if ( outTriangles.m_size )
  {
    do
    {
      if ( v6 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v6;
    }
    while ( v6 < outTriangles.m_size );
  }
  return TriangleCoordArray;
}

/*
==============
XAnimBlendSpace2D_Register
==============
*/
void XAnimBlendSpace2D_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimBlendSpace2D>::ms_typeInfo);
}

/*
==============
XAnimBlendSpace2D_UpdateRangeParameters
==============
*/
void XAnimBlendSpace2D_UpdateRangeParameters(const scr_string_t coordsStr, XAnimParameterBinding *rangeBindingX, XAnimParameterBinding *rangeBindingY)
{
  unsigned int v14; 
  unsigned int v15; 
  bool v30; 
  bool v31; 
  bool v33; 
  __int64 v40; 
  __int64 v41; 

  _R14 = rangeBindingY;
  _R15 = rangeBindingX;
  if ( !rangeBindingX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 55, ASSERT_TYPE_ASSERT, "(rangeBindingX)", (const char *)&queryFormat, "rangeBindingX") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 56, ASSERT_TYPE_ASSERT, "(rangeBindingY)", (const char *)&queryFormat, "rangeBindingY") )
    __debugbreak();
  if ( !coordsStr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
    __debugbreak();
  _RDI = SL_ConvertToString(coordsStr);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 59, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  v14 = *(_DWORD *)_RDI >> 1;
  if ( v14 )
  {
    v15 = 0;
    __asm
    {
      vmovaps [rsp+0D8h+var_38], xmm6
      vmovaps [rsp+0D8h+var_48], xmm7
      vmovaps [rsp+0D8h+var_58], xmm8
      vmovaps [rsp+0D8h+var_68], xmm9
      vmovaps [rsp+0D8h+var_78], xmm10
      vmovaps [rsp+0D8h+var_88], xmm11
      vmovss  xmm11, cs:__real@ff7fffff
      vmovaps [rsp+0D8h+var_98], xmm12
      vmovss  xmm12, cs:__real@7f7fffff
      vmovaps xmm9, xmm12
      vmovaps xmm8, xmm12
      vmovaps xmm10, xmm11
      vmovaps xmm7, xmm11
    }
    do
    {
      _RBX = 2 * v15;
      if ( (unsigned int)_RBX >= *(_DWORD *)_RDI )
      {
        LODWORD(v41) = *(_DWORD *)_RDI;
        LODWORD(v40) = 2 * v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, dword ptr [rdi+rbx*4+4] }
      if ( (unsigned int)_RBX >= *(_DWORD *)_RDI )
      {
        LODWORD(v41) = *(_DWORD *)_RDI;
        LODWORD(v40) = 2 * v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      _RAX = (unsigned int)(_RBX + 1);
      ++v15;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rax*4+4]
        vminss  xmm8, xmm0, xmm8
        vmaxss  xmm7, xmm0, xmm7
        vminss  xmm9, xmm6, xmm9
        vmaxss  xmm10, xmm6, xmm10
      }
      v30 = v15 < v14;
      v31 = v15 == v14;
    }
    while ( v15 < v14 );
    __asm
    {
      vcomiss xmm9, xmm10
      vmovaps xmm6, [rsp+0D8h+var_38]
      vmovss  dword ptr [r15+8], xmm9
      vmovss  dword ptr [r15+0Ch], xmm10
    }
    if ( v15 >= v14 )
      goto LABEL_35;
    __asm { vucomiss xmm9, xmm12 }
    if ( v15 == v14 )
      goto LABEL_35;
    __asm { vucomiss xmm10, xmm11 }
    if ( v15 == v14 )
    {
LABEL_35:
      v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 97, ASSERT_TYPE_ASSERT, "(minX < maxX && minX != 3.402823466e+38F && maxX != -3.402823466e+38F)", (const char *)&queryFormat, "minX < maxX && minX != FLT_MAX && maxX != -FLT_MAX");
      v30 = 0;
      v31 = !v33;
      if ( v33 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm8, xmm7
      vmovaps xmm10, [rsp+0D8h+var_78]
      vmovaps xmm9, [rsp+0D8h+var_68]
    }
    if ( !v30 )
      goto LABEL_36;
    __asm { vucomiss xmm8, xmm12 }
    if ( v31 )
      goto LABEL_36;
    __asm { vucomiss xmm7, xmm11 }
    if ( v31 )
    {
LABEL_36:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 98, ASSERT_TYPE_ASSERT, "(minY < maxY && minY != 3.402823466e+38F && maxY != -3.402823466e+38F)", (const char *)&queryFormat, "minY < maxY && minY != FLT_MAX && maxY != -FLT_MAX") )
        __debugbreak();
    }
    __asm
    {
      vmovaps xmm12, [rsp+0D8h+var_98]
      vmovaps xmm11, [rsp+0D8h+var_88]
      vmovss  dword ptr [r14+8], xmm8
      vmovaps xmm8, [rsp+0D8h+var_58]
      vmovss  dword ptr [r14+0Ch], xmm7
      vmovaps xmm7, [rsp+0D8h+var_48]
    }
  }
}

/*
==============
XAnimBlendSpace2D_ValidateConstParameters
==============
*/
bool XAnimBlendSpace2D_ValidateConstParameters(const XAnim_s *anims, unsigned int animIndex, const scr_string_t coordsStr, const scr_string_t edgeStr, const vec2_t *rangeX, const vec2_t *rangeY, const unsigned int maxActiveChildren, bool postParse)
{
  __int64 v13; 
  bool v15; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  unsigned int v22; 
  const char *v23; 
  unsigned int v24; 
  unsigned int numAnims; 
  unsigned int ChildAt; 
  const char *v27; 
  unsigned __int16 v28; 
  const char *v29; 
  unsigned int i; 
  char v32; 
  char v33; 
  unsigned int j; 
  char v38; 
  const char *v41; 
  const XAnimFieldArray<unsigned int> *v42; 
  unsigned int v43; 
  const unsigned int *TriangleCoordIndexes; 
  unsigned int *v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  bool result; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  const char *v54; 
  unsigned int v55; 
  const char *v56; 
  unsigned int v57; 
  unsigned int v58; 
  const char *v59; 
  const char *v60; 
  const char *v64; 
  const char *v65; 
  const char *v66; 
  const char *v67; 
  const char *v68; 
  const char *v69; 
  const char *v70; 
  const char *AnimDebugName; 
  double v72; 
  double v73; 
  unsigned __int16 v74; 
  unsigned int v75; 
  const XAnimFieldArray<unsigned int> *TriangleCoordFieldArray; 
  vec2_t destPos; 
  vec2_t pointB; 
  vec2_t pointA; 
  char dest[2048]; 

  LODWORD(destPos.v[0]) = edgeStr;
  v13 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 110, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+908h+var_58], xmm6
    vmovaps [rsp+908h+var_68], xmm7
    vmovaps [rsp+908h+var_78], xmm8
  }
  if ( maxActiveChildren - 1 > 2 )
  {
    _R13 = rangeX;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [r13+0]
      vucomiss xmm1, xmm0
    }
    if ( maxActiveChildren != 3 )
      __asm { vucomiss xmm0, dword ptr [r13+4] }
    __asm { vcomiss xmm1, dword ptr [r13+4] }
    if ( maxActiveChildren - 1 <= 2 )
    {
      _RSI = rangeY;
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]
        vucomiss xmm1, xmm0
      }
      if ( maxActiveChildren != 3 )
        __asm { vucomiss xmm0, dword ptr [rsi+4] }
      __asm { vcomiss xmm1, dword ptr [rsi+4] }
      if ( !coordsStr || coordsStr == scr_const._ )
      {
        AnimDebugName = XAnimGetAnimDebugName(anims, v13);
        v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 132, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Coords property is required.", AnimDebugName);
        goto LABEL_67;
      }
      FloatFieldArray = XAnimNode_GetFloatFieldArray(coordsStr);
      if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 137, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
        __debugbreak();
      v22 = FloatFieldArray->size >> 1;
      if ( (FloatFieldArray->size & 1) != 0 )
      {
        v66 = XAnimGetAnimDebugName(anims, v13);
        v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 142, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Blendspace requires complete pairs of 2D coordinates.", v66);
      }
      else if ( v22 >= 3 )
      {
        if ( v22 <= 0x28 )
        {
          v24 = 0;
          numAnims = anims->entries[v13].numAnims;
          v74 = anims->entries[v13].numAnims;
          if ( numAnims < v22 )
          {
            destPos.v[0] = 0.0;
            if ( numAnims )
            {
              do
              {
                ChildAt = XAnimGetChildAt(anims, v13, v24);
                v27 = XAnimGetAnimDebugName(anims, ChildAt);
                Com_sprintfPos_truncate(dest, 0x800ui64, (int *)&destPos, "'%s', ", v27);
                ++v24;
              }
              while ( v24 < anims->entries[v13].numAnims );
              v28 = anims->entries[v13].numAnims;
            }
            else
            {
              v28 = v74;
            }
            v29 = XAnimGetAnimDebugName(anims, v13);
            v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. 2D Blendspace node requires at least %d child anim nodes. Found %d child anims: [%s]\n", v29, v22, v28, dest);
            goto LABEL_67;
          }
          for ( i = 0; i < v22; ++i )
          {
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, i);
            __asm { vmovaps xmm7, xmm0 }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, i);
            __asm { vcomiss xmm7, dword ptr [r13+0] }
            if ( v32 )
              goto LABEL_42;
            __asm { vcomiss xmm7, dword ptr [r13+4] }
            if ( !(v32 | v33) )
              goto LABEL_42;
            __asm
            {
              vcomiss xmm0, dword ptr [rsi]
              vcomiss xmm0, dword ptr [rsi+4]
            }
            if ( !(v32 | v33) )
            {
LABEL_42:
              __asm
              {
                vcvtss2sd xmm6, xmm0, xmm0
                vcvtss2sd xmm7, xmm7, xmm7
              }
              v41 = XAnimGetAnimDebugName(anims, v13);
              __asm
              {
                vmovsd  [rsp+908h+var_8D0], xmm6
                vmovsd  [rsp+908h+var_8D8], xmm7
              }
              v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 184, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Out of range coordinate values {'%f','%f'}. ", v41, v72, v73);
              goto LABEL_67;
            }
          }
          for ( j = 1; j < v22; ++j )
          {
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, j - 1);
            __asm { vmovaps xmm7, xmm0 }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, j - 1);
            __asm { vmovaps xmm8, xmm0 }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, j);
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, j);
            __asm { vucomiss xmm7, xmm6 }
            if ( v38 )
            {
              __asm { vucomiss xmm8, xmm0 }
              if ( v38 )
              {
                v69 = XAnimGetAnimDebugName(anims, v13);
                v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 198, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Repeated coordinate values.", v69);
                goto LABEL_67;
              }
            }
          }
          if ( !postParse && (!LODWORD(destPos.v[0]) || LODWORD(destPos.v[0]) == scr_const._) )
          {
            v68 = XAnimGetAnimDebugName(anims, v13);
            v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 205, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. 'edge' constant parameter not specified.", v68);
            goto LABEL_67;
          }
          if ( LODWORD(destPos.v[0]) && LODWORD(destPos.v[0]) != scr_const._ )
          {
            TriangleCoordFieldArray = XAnimBlendSpace_GetTriangleCoordFieldArray(SLODWORD(destPos.v[0]));
            v42 = TriangleCoordFieldArray;
            if ( !TriangleCoordFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 213, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
              __debugbreak();
            v43 = TriangleCoordFieldArray->size / 3;
            if ( TriangleCoordFieldArray->size != 3 * v43 )
            {
              v70 = XAnimGetAnimDebugName(anims, v13);
              v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 217, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Invalid 'edge' parameter.", v70);
              goto LABEL_67;
            }
            if ( v43 - 1 > 0x3E )
            {
              v60 = XAnimGetAnimDebugName(anims, v13);
              v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 226, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Invalid triangle edge count of '%d'. Max number of triangles is '%d'", v60, v43, 64);
              goto LABEL_67;
            }
            if ( v43 )
            {
              while ( 1 )
              {
                TriangleCoordIndexes = XAnimBlendSpace2D_GetTriangleCoordIndexes(v42, v24);
                v45 = (unsigned int *)TriangleCoordIndexes;
                v46 = *TriangleCoordIndexes;
                if ( *TriangleCoordIndexes >= v22 || TriangleCoordIndexes[1] >= v22 || TriangleCoordIndexes[2] >= v22 )
                  break;
                *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v46);
                __asm { vmovss  dword ptr [rsp+908h+pointA], xmm0 }
                *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, *v45);
                __asm { vmovss  dword ptr [rsp+908h+pointA+4], xmm0 }
                *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v45[1]);
                __asm { vmovss  dword ptr [rsp+908h+pointB], xmm0 }
                *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v45[1]);
                __asm { vmovss  dword ptr [rsp+908h+pointB+4], xmm0 }
                *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v45[2]);
                __asm { vmovss  [rsp+908h+destPos], xmm0 }
                *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v45[2]);
                __asm { vmovss  [rsp+908h+var_8A4], xmm0 }
                v47 = v45[1];
                v48 = *v45;
                v75 = v47;
                if ( *v45 == v47 || (v49 = v45[2], v47 == v49) || v48 == v49 )
                {
                  v55 = v45[2];
                  v56 = XAnimGetAnimDebugName(anims, v13);
                  v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 256, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s. Repeated edge indexes {%d,%d,%d}.", v56, v48, v75, v55);
                  goto LABEL_67;
                }
                if ( XAnimBlendSpace2D_IsTriangleCollinear(&pointA, &pointB, &destPos) )
                {
                  v51 = v45[2];
                  v52 = v45[1];
                  v53 = *v45;
                  v54 = XAnimGetAnimDebugName(anims, v13);
                  v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 263, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Triangle is collinear {%d,%d,%d}.", v54, v53, v52, v51);
                  goto LABEL_67;
                }
                v42 = TriangleCoordFieldArray;
                if ( ++v24 >= v43 )
                  goto LABEL_61;
              }
              v57 = TriangleCoordIndexes[2];
              v58 = TriangleCoordIndexes[1];
              v59 = XAnimGetAnimDebugName(anims, v13);
              v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s' Invalid triangle edges {%d,%d,%d}.", v59, v46, v58, v57);
              goto LABEL_67;
            }
          }
LABEL_61:
          result = 1;
          goto LABEL_70;
        }
        v23 = XAnimGetAnimDebugName(anims, v13);
        v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 155, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Max number of node coordinate pairs supported by the 2D blendspace node is '%d'.", v23, 40);
      }
      else
      {
        v67 = XAnimGetAnimDebugName(anims, v13);
        v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 148, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Blendspace requires at least three 2D coordinates.", v67);
      }
    }
    else
    {
      v65 = XAnimGetAnimDebugName(anims, v13);
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Range X is invalid.", v65);
    }
  }
  else
  {
    v64 = XAnimGetAnimDebugName(anims, v13);
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 114, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Max active children parameter must be higher than 3.", v64);
  }
LABEL_67:
  if ( v15 )
    __debugbreak();
  result = 0;
LABEL_70:
  __asm
  {
    vmovaps xmm8, [rsp+908h+var_78]
    vmovaps xmm7, [rsp+908h+var_68]
    vmovaps xmm6, [rsp+908h+var_58]
  }
  return result;
}

