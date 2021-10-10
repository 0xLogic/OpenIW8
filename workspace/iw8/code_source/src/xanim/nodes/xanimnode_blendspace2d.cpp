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
  const DObj *v10; 
  char *v11; 
  unsigned int *v12; 
  unsigned int v13; 
  _QWORD *v14; 
  char *v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  ThreadContext CurrentThreadContext; 
  unsigned int v19; 
  char v20; 
  unsigned __int16 InfoIndex; 
  float v22; 
  float v23; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  unsigned int v25; 
  double v26; 
  float v27; 
  float v28; 
  double v29; 
  scr_string_t v30; 
  const char *v31; 
  int *v32; 
  __int64 v33; 
  __m256i v34; 
  __int128 v35; 
  const XAnimTree *tree; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v38; 
  unsigned int *v39; 
  unsigned int ChildAt; 
  const XAnimFieldArray<float> *v41; 
  XAnimFieldArray<unsigned int> *v42; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned int v47; 
  bool v48; 
  scr_string_t v49; 
  float v50; 
  unsigned int v51; 
  unsigned int v52; 
  XAnimTree *v53; 
  unsigned __int16 children; 
  int i; 
  int j; 
  unsigned __int16 next; 
  unsigned __int16 v58; 
  float v59; 
  XAnimInfo *v60; 
  float weight; 
  unsigned int fmt; 
  unsigned int *inoutLastTriangleIndex; 
  unsigned int *inoutLastTriangleIndexa; 
  unsigned int *outNotifyTypes; 
  unsigned int *outNotifyTypesa; 
  char v67; 
  unsigned int graftAnimIndex; 
  unsigned int outTriangleIndex; 
  unsigned int maxWeightAnimIndex; 
  DObj *obja; 
  XAnimFieldArray<unsigned int> *triangleCoords; 
  XModelNameMap *cachedModelNameMap; 
  vec3_t outWeights; 
  vec2_t value; 
  int v77; 
  unsigned int animIndex[195]; 
  unsigned int childAnimIndex[2]; 
  int v80; 
  unsigned int v81[4]; 
  scr_string_t notifyName[4]; 

  cachedModelNameMap = modelNameMap;
  obja = (DObj *)obj;
  v10 = obj;
  v11 = (char *)Sys_GetValue(0);
  v12 = (unsigned int *)(v11 + 19376);
  if ( (unsigned int)(*((_DWORD *)v11 + 4844) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)v11 + 4844) + 1, 3) )
    __debugbreak();
  v13 = *v12 + 1;
  *v12 = v13;
  if ( v13 >= 3 )
  {
    LODWORD(outNotifyTypes) = 3;
    LODWORD(inoutLastTriangleIndex) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", inoutLastTriangleIndex, outNotifyTypes) )
      __debugbreak();
  }
  v14 = v11 + 2088;
  v15 = v11 + 40;
  if ( *v14 < (unsigned __int64)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v14 += 8i64;
  if ( *v14 >= (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v14 = v12;
  if ( *v14 <= (unsigned __int64)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v16 = (int)*v12;
  v17 = __rdtsc();
  v12[v16 + 2] = v17;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 432, NULL, 0);
  if ( *((_BYTE *)nodeData + 52) )
  {
    v19 = XAnimGetGraftAnimIndex(animInfoIndex);
    graftAnimIndex = v19;
    if ( animInfo->state.weight == 0.0 )
    {
      if ( animInfo->state.goalWeight == 0.0 )
      {
        XAnimClearTreeGoalWeightsNode(v10->tree, animInfoIndex, 0.0, 1, LINEAR);
        goto LABEL_98;
      }
    }
    else if ( animInfo->state.goalWeight == 0.0 )
    {
      v20 = 1;
LABEL_26:
      if ( *((_BYTE *)nodeData + 33) && v20 )
      {
        XAnimClearTreeGoalWeightsNode(v10->tree, animInfoIndex, animInfo->state.goalTime, 0, LINEAR);
      }
      else
      {
        InfoIndex = XAnimGetInfoIndex(v10->tree, v19, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex);
        if ( (animInfo->state.goalWeight != 0.0 || InfoIndex == animInfoIndex) && !*((_BYTE *)nodeData + 53) )
        {
          v22 = (float)*((unsigned int *)nodeData + 4);
          v23 = v22 * 0.001;
          if ( !*((_DWORD *)nodeData + 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 755, ASSERT_TYPE_ASSERT, "(node->coords != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "node->coords != NULL_SCR_STRING") )
            __debugbreak();
          FloatFieldArray = XAnimNode_GetFloatFieldArray((scr_string_t)*((_DWORD *)nodeData + 6));
          if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 758, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
            __debugbreak();
          triangleCoords = (XAnimFieldArray<unsigned int> *)XAnimBlendSpace_GetTriangleCoordFieldArray((scr_string_t)*((_DWORD *)nodeData + 7));
          if ( !triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 761, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
            __debugbreak();
          v25 = FloatFieldArray->size >> 1;
          if ( v25 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 764, ASSERT_TYPE_ASSERT, "(numPoints >= 3)", (const char *)&queryFormat, "numPoints >= 3") )
            __debugbreak();
          v26 = I_fclamp(*((float *)nodeData + 10), *(float *)nodeData, *((float *)nodeData + 1));
          v27 = *((float *)nodeData + 3);
          v28 = *((float *)nodeData + 2);
          value.v[0] = *(float *)&v26;
          v29 = I_fclamp(*((float *)nodeData + 11), v28, v27);
          v30 = *((_DWORD *)nodeData + 12);
          value.v[1] = *(float *)&v29;
          if ( v30 )
          {
            v31 = SL_ConvertToString(v30);
            if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 773, ASSERT_TYPE_ASSERT, "(childAnimArray)", (const char *)&queryFormat, "childAnimArray") )
              __debugbreak();
            v32 = &v77;
            v33 = 6i64;
            do
            {
              v32 += 32;
              v34 = *(__m256i *)v31;
              v35 = *((_OWORD *)v31 + 7);
              v31 += 128;
              *((__m256i *)v32 - 4) = v34;
              *((__m256i *)v32 - 3) = *((__m256i *)v31 - 3);
              *((__m256i *)v32 - 2) = *((__m256i *)v31 - 2);
              *((_OWORD *)v32 - 2) = *((_OWORD *)v31 - 2);
              *((_OWORD *)v32 - 1) = v35;
              --v33;
            }
            while ( v33 );
            *v32 = *(_DWORD *)v31;
          }
          else
          {
            tree = v10->tree;
            if ( !v10->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 781, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
              __debugbreak();
            SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)animInfo->subTreeID);
            if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 784, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
              __debugbreak();
            v38 = 0;
            if ( v25 )
            {
              v39 = animIndex;
              do
              {
                ChildAt = XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, v38++);
                *v39++ = ChildAt;
              }
              while ( v38 < v25 );
              v19 = graftAnimIndex;
            }
            v10 = obja;
            v77 = truncate_cast<unsigned char,unsigned int>(v25);
          }
          v41 = FloatFieldArray;
          v42 = triangleCoords;
          outWeights.v[0] = 0.0;
          outWeights.v[1] = 0.0;
          outWeights.v[2] = 0.0;
          XAnimBlendSpace2D_CalcWeights(triangleCoords, v41, value, &outWeights, &outTriangleIndex, (unsigned int *)nodeData + 14);
          XAnimClearChildGoalWeightsWithParent(v10->tree, v19, animInfo->subTreeID, animInfoIndex, v23, LINEAR);
          XAnimBlendSpace_GetNotifyParameters(animInfo, (XAnimOwner)(unsigned __int8)v10->tree->owner[0], animInfo->notifyName, *((_BYTE *)nodeData + 32), 3u, outWeights.v, v81, notifyName, &maxWeightAnimIndex);
          v43 = 0;
          *(_QWORD *)childAnimIndex = 0i64;
          v44 = 0i64;
          v80 = 0;
          v67 = 0;
          do
          {
            if ( outWeights.v[v43] > 0.0 )
            {
              v45 = 3 * outTriangleIndex;
              if ( (unsigned int)v45 >= v42->size )
              {
                LODWORD(outNotifyTypesa) = v42->size;
                LODWORD(inoutLastTriangleIndexa) = 3 * outTriangleIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", inoutLastTriangleIndexa, outNotifyTypesa) )
                  __debugbreak();
              }
              v46 = (__int64)&v42->values[v45];
              if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 819, ASSERT_TYPE_ASSERT, "(coordIndexes)", (const char *)&queryFormat, "coordIndexes") )
                __debugbreak();
              v67 = 1;
              v47 = animIndex[*(unsigned int *)(v44 * 4 + v46)];
              childAnimIndex[v44] = v47;
              v48 = Com_GameMode_SupportsFeature((Com_GameMode_Feature)264);
              v49 = notifyName[v44];
              v50 = *((float *)nodeData + 5);
              if ( v48 )
              {
                v10 = obja;
                fmt = v47;
                v19 = graftAnimIndex;
                XAnimSetGoalWeightWithParent(obja, graftAnimIndex, animInfo->subTreeID, animInfoIndex, fmt, outWeights.v[v43], v23, v50, v49, v81[v44], 0, LINEAR, cachedModelNameMap);
              }
              else
              {
                v51 = v47;
                v19 = graftAnimIndex;
                v10 = obja;
                XAnimSetGoalWeight(obja, graftAnimIndex, animInfo->subTreeID, v51, outWeights.v[v43], v23, v50, v49, v81[v44], 0, LINEAR, cachedModelNameMap);
              }
              v42 = triangleCoords;
            }
            ++v43;
            ++v44;
          }
          while ( v43 < 3 );
          if ( v67 )
            XAnimBlendSpace_HandleServerNotifyChild(v10->tree, animInfo, v19, *((_BYTE *)nodeData + 32), childAnimIndex, maxWeightAnimIndex);
          if ( v23 > 0.0 )
          {
            v52 = *((_DWORD *)nodeData + 9);
            if ( v52 )
            {
              v53 = v10->tree;
              if ( v52 <= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 644, ASSERT_TYPE_ASSERT, "(maxActiveChildren > 3)", (const char *)&queryFormat, "maxActiveChildren > 3") )
                __debugbreak();
              children = animInfo->children;
              for ( i = 0; children; children = GetAnimInfo(children)->next )
                ++i;
              for ( j = i - v52; j > 0; --j )
              {
                next = animInfo->children;
                v58 = 0;
                v59 = FLOAT_3_4028235e38;
                if ( next )
                {
                  do
                  {
                    v60 = GetAnimInfo(next);
                    if ( v60 )
                    {
                      if ( v60->animToModel )
                      {
                        weight = v60->state.weight;
                        if ( weight > 0.0 && v60->state.goalTime > 0.0 && v60->state.goalWeight == 0.0 && weight < v59 )
                        {
                          v58 = next;
                          v59 = v60->state.weight;
                        }
                      }
                    }
                    next = v60->next;
                  }
                  while ( next );
                  if ( v58 )
                    XAnimClearTreeGoalWeightsNode(v53, v58, 0.0, 0, (const XAnimCurveID)v60->next);
                }
              }
            }
          }
          *((_DWORD *)nodeData + 15) = *((_DWORD *)nodeData + 10);
          *((_DWORD *)nodeData + 16) = *((_DWORD *)nodeData + 11);
        }
      }
      goto LABEL_98;
    }
    v20 = 0;
    goto LABEL_26;
  }
LABEL_98:
  Profile_EndInternal(NULL);
}

/*
==============
XAnimBlendSpace2D_Read
==============
*/
void XAnimBlendSpace2D_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  int p; 

  *((_DWORD *)nodeData + 12) = 0;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 4) = p;
  Float = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 10) = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 11) = *(float *)&v5;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 52) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 53) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 32) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 14) = p;
  MemFile_ReadData(memFile, 8ui64, nodeData);
  MemFile_ReadData(memFile, 8ui64, (char *)nodeData + 8);
  *((_DWORD *)nodeData + 6) = XAnimReadConstStringOfSize(memFile);
  *((_DWORD *)nodeData + 7) = XAnimReadConstStringOfSize(memFile);
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( (_BYTE)p )
    *((_DWORD *)nodeData + 12) = XAnimReadConstStringOfSize(memFile);
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
  p = *((_DWORD *)nodeData + 4);
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 10));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 11));
  LOBYTE(p) = *((_BYTE *)nodeData + 52);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 53);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 32);
  MemFile_WriteData(memFile, 1ui64, &p);
  p = *((_DWORD *)nodeData + 14);
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 8ui64, nodeData);
  MemFile_WriteData(memFile, 8ui64, (char *)nodeData + 8);
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)nodeData + 6));
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)nodeData + 7));
  LOBYTE(p) = v2 != 0;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v2 )
    XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)nodeData + 12));
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
  XAnimParameterBinding *v7; 
  XAnimParameterBinding *v8; 
  XAnimParameterBinding *v9; 
  scr_string_t v10; 
  scr_string_t v11; 
  unsigned int maxActiveChildren; 
  const XAnimParameterBinding *v13; 
  const XAnimParameterBinding *v14; 
  scr_string_t TriangleCoords; 
  vec2_t *rangeY; 
  XAnimParameterBinding *v18; 
  vec2_t dynamic; 
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
  ConstantBindParameterByFieldNameNonConst = XAnimFindConstantBindParameterByFieldNameNonConst(anims, v2, scr_const.xanimBlendSpace2DAxisXRange, TypeFieldsForNodeType);
  v7 = XAnimFindConstantBindParameterByFieldNameNonConst(anims, v2, scr_const.xanimBlendSpace2DAxisYRange, TypeFieldsForNodeType);
  v8 = XAnimFindConstantBindParameterByFieldNameNonConst(anims, v2, scr_const.xanimBlendSpace2DEdges, TypeFieldsForNodeType);
  rangeX = (vec2_t)ConstantBindParameterByFieldNameNonConst->dynamic;
  dynamic = (vec2_t)v7->dynamic;
  v9 = v8;
  v18 = v8;
  v10 = truncate_cast<enum scr_string_t,unsigned int>(ConstantBindParameterByFieldNameAllBindings->constant.uint32Value);
  v11 = truncate_cast<enum scr_string_t,unsigned int>(v9->constant.uint32Value);
  maxActiveChildren = 0;
  v13 = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimBlendSpace2DMaxActiveChildren, TypeFieldsForNodeType);
  v14 = v13;
  if ( v13 )
  {
    if ( v13->type != CONSTANT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 387, ASSERT_TYPE_ASSERT, "(maxActiveChildrenBinding->type == XAnimBindingType::CONSTANT)", "%s\n\tFailed to initialize 2D blendspace. Parameter: 'max_active_children' must be constant.", "maxActiveChildrenBinding->type == XAnimBindingType::CONSTANT") )
      __debugbreak();
    maxActiveChildren = v14->constant.uint32Value;
  }
  if ( XAnimBlendSpace2D_ValidateConstParameters(anims, v2, v10, v11, &rangeX, &dynamic, maxActiveChildren, 1) )
  {
    if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)264) )
      XAnimBlendSpace2D_UpdateRangeParameters(v10, ConstantBindParameterByFieldNameNonConst, v7);
    if ( v11 && v11 != scr_const._ )
      return 1;
    TriangleCoords = XAnimBlendSpace2D_GetTriangleCoords(v10, &rangeX, &dynamic);
    if ( TriangleCoords )
    {
      v18->constant.uint32Value = TriangleCoords;
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
  const char *v14; 

  v6 = size;
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
    if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 928, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    v12 = *((_BYTE *)nodeData + 52);
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
        v12 = *((_BYTE *)nodeData + 52);
      }
      v14 = "false";
      if ( v12 )
        v14 = "true";
      Com_sprintfPos_truncate(buffer, v6, inoutPos, "  [oldX: %.2f, oldY: %.2f - curX: %.2f, curY: %.2f - init : %s]\n", *((float *)nodeData + 15), *((float *)nodeData + 16), *((float *)nodeData + 10), *((float *)nodeData + 11), v14);
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
  unsigned int *v6; 
  const XAnimFieldArray<unsigned int> *v9; 
  float v10; 
  float v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float *v21; 
  __int64 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  vec2_t cartesianPoint; 
  vec2_t v37; 
  BarycentricTriangle v38; 
  BarycentricTriangle v39; 
  vec2_t outTriangle[3]; 
  vec2_t v41; 
  vec2_t v42[5]; 

  v6 = outTriangleIndex;
  v9 = triangleCoords;
  cartesianPoint = value;
  if ( !triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 537, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
    __debugbreak();
  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 538, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  if ( !outTriangleIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 539, ASSERT_TYPE_ASSERT, "(outTriangleIndex)", (const char *)&queryFormat, "outTriangleIndex") )
    __debugbreak();
  if ( !inoutLastTriangleIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 540, ASSERT_TYPE_ASSERT, "(inoutLastTriangleIndex)", (const char *)&queryFormat, "inoutLastTriangleIndex") )
    __debugbreak();
  v10 = FLOAT_3_4028235e38;
  v11 = FLOAT_1_0;
  v12 = 0;
  *(_QWORD *)outWeights->v = 0i64;
  v13 = -1;
  outWeights->v[2] = 0.0;
  v14 = v9->size / 3;
  if ( *inoutLastTriangleIndex != -1 )
  {
    XAnimBlendSpace2D_GetTriangle(v9, coords, *inoutLastTriangleIndex, (vec2_t (*)[3])outTriangle);
    BarycentricTriangle::Init(&v38, outTriangle);
    BarycentricTriangle::GetBarycentricCoordinates(&v38, &cartesianPoint, outWeights);
    if ( outWeights->v[0] >= 0.0 && outWeights->v[0] <= 1.0 )
    {
      v15 = outWeights->v[1];
      if ( v15 >= 0.0 && v15 <= 1.0 )
      {
        v16 = outWeights->v[2];
        if ( v16 >= 0.0 && v16 <= 1.0 )
        {
          *outTriangleIndex = *inoutLastTriangleIndex;
          return;
        }
      }
    }
  }
  if ( v14 )
  {
    while ( 1 )
    {
      XAnimBlendSpace2D_GetTriangle(v9, coords, v12, (vec2_t (*)[3])outTriangle);
      BarycentricTriangle::Init(&v38, outTriangle);
      BarycentricTriangle::GetBarycentricCoordinates(&v38, &cartesianPoint, outWeights);
      if ( outWeights->v[0] >= 0.0 && outWeights->v[0] <= v11 )
      {
        v17 = outWeights->v[1];
        if ( v17 >= 0.0 && v17 <= v11 )
        {
          v18 = outWeights->v[2];
          if ( v18 >= 0.0 && v18 <= v11 )
            break;
        }
      }
      v19 = cartesianPoint.v[1];
      v20 = cartesianPoint.v[0];
      v42[0] = outTriangle[1];
      v42[1] = outTriangle[1];
      v42[2] = outTriangle[2];
      v42[3] = outTriangle[2];
      v41 = outTriangle[0];
      v42[4] = outTriangle[0];
      v21 = (float *)v42 + 1;
      v22 = 3i64;
      do
      {
        v23 = *(v21 - 3);
        v24 = *(v21 - 2);
        v25 = *(v21 - 1) - v23;
        v27 = *v21 - v24;
        v26 = v27;
        v28 = v20 - v23;
        v29 = v19 - v24;
        v30 = (float)(v27 * (float)(v19 - v24)) + (float)((float)(v20 - v23) * v25);
        if ( v30 >= 0.0 )
        {
          v31 = (float)(v27 * v27) + (float)(v25 * v25);
          if ( v31 == 0.0 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 488, ASSERT_TYPE_ASSERT, "(segDot)", (const char *)&queryFormat, "segDot") )
              __debugbreak();
            v20 = cartesianPoint.v[0];
            v19 = cartesianPoint.v[1];
          }
          if ( v30 <= v31 )
          {
            LODWORD(v32) = COERCE_UNSIGNED_INT(v30 / v31) ^ _xmm;
            v33 = (float)(v25 * v32) + v28;
            v24 = v19 - (float)((float)(v26 * v32) + v29);
            v23 = v20 - v33;
          }
          else
          {
            v23 = *(v21 - 1);
            v24 = *v21;
          }
        }
        if ( (float)((float)((float)(v24 - v19) * (float)(v24 - v19)) + (float)((float)(v23 - v20) * (float)(v23 - v20))) < v10 )
        {
          v13 = v12;
          v39 = v38;
          v37.v[0] = v23;
          v37.v[1] = v24;
          v10 = (float)((float)(v24 - v19) * (float)(v24 - v19)) + (float)((float)(v23 - v20) * (float)(v23 - v20));
        }
        v21 += 4;
        --v22;
      }
      while ( v22 );
      v6 = outTriangleIndex;
      if ( ++v12 >= v14 )
      {
        if ( v13 != -1 )
        {
          BarycentricTriangle::GetBarycentricCoordinates(&v39, &v37, outWeights);
          *inoutLastTriangleIndex = -1;
          *outTriangleIndex = v13;
          return;
        }
LABEL_43:
        *v6 = v12;
        return;
      }
      v11 = FLOAT_1_0;
      v9 = triangleCoords;
    }
    *inoutLastTriangleIndex = v12;
    goto LABEL_43;
  }
  *outTriangleIndex = 0;
}

/*
==============
XAnimBlendSpace2D_GetTriangle
==============
*/
void XAnimBlendSpace2D_GetTriangle(const XAnimFieldArray<unsigned int> *triangleCoords, const XAnimFieldArray<float> *coords, unsigned int triangleIndex, vec2_t (*outTriangle)[3])
{
  __int64 v8; 
  unsigned int *v9; 
  double XCoord; 
  unsigned int v11; 
  double v12; 
  unsigned int v13; 
  double v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 

  if ( !triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 517, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
    __debugbreak();
  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 518, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  if ( !outTriangle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 519, ASSERT_TYPE_ASSERT, "(outTriangle)", (const char *)&queryFormat, "outTriangle") )
    __debugbreak();
  if ( triangleIndex >= 0x40 )
  {
    LODWORD(v16) = triangleIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 520, ASSERT_TYPE_ASSERT, "(unsigned)( triangleIndex ) < (unsigned)( 64 )", "triangleIndex doesn't index MAX_TRIANGLE_COUNT\n\t%i not in [0, %i)", v16, 64) )
      __debugbreak();
  }
  v8 = 3 * triangleIndex;
  if ( (unsigned int)v8 >= triangleCoords->size )
  {
    LODWORD(v17) = triangleCoords->size;
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v9 = &triangleCoords->values[v8];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 523, ASSERT_TYPE_ASSERT, "(coordIndexes)", (const char *)&queryFormat, "coordIndexes") )
    __debugbreak();
  XCoord = XAnimBlendSpace2D_GetXCoord(coords, *v9);
  (*outTriangle)[0].v[0] = *(float *)&XCoord;
  v11 = 2 * *v9;
  if ( v11 >= coords->size )
  {
    LODWORD(v17) = coords->size;
    LODWORD(v16) = 2 * *v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  (*outTriangle)[0].v[1] = coords->values[v11 + 1];
  v12 = XAnimBlendSpace2D_GetXCoord(coords, v9[1]);
  (*outTriangle)[1].v[0] = *(float *)&v12;
  v13 = 2 * v9[1];
  if ( v13 >= coords->size )
  {
    LODWORD(v17) = coords->size;
    LODWORD(v16) = 2 * v9[1];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  (*outTriangle)[1].v[1] = coords->values[v13 + 1];
  v14 = XAnimBlendSpace2D_GetXCoord(coords, v9[2]);
  (*outTriangle)[2].v[0] = *(float *)&v14;
  v15 = 2 * v9[2];
  if ( v15 >= coords->size )
  {
    LODWORD(v17) = coords->size;
    LODWORD(v16) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  (*outTriangle)[2].v[1] = coords->values[v15 + 1];
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
  const char *v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v16; 
  __int64 v17; 

  if ( !rangeBindingX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 55, ASSERT_TYPE_ASSERT, "(rangeBindingX)", (const char *)&queryFormat, "rangeBindingX") )
    __debugbreak();
  if ( !rangeBindingY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 56, ASSERT_TYPE_ASSERT, "(rangeBindingY)", (const char *)&queryFormat, "rangeBindingY") )
    __debugbreak();
  if ( !coordsStr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
    __debugbreak();
  v6 = SL_ConvertToString(coordsStr);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 59, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  v7 = *(_DWORD *)v6 >> 1;
  if ( v7 )
  {
    v8 = 0;
    do
    {
      v9 = 2 * v8;
      if ( (unsigned int)v9 >= *(_DWORD *)v6 )
      {
        LODWORD(v17) = *(_DWORD *)v6;
        LODWORD(v16) = 2 * v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      _XMM6 = *(unsigned int *)&v6[4 * v9 + 4];
      if ( (unsigned int)v9 >= *(_DWORD *)v6 )
      {
        LODWORD(v17) = *(_DWORD *)v6;
        LODWORD(v16) = 2 * v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      ++v8;
      _XMM0 = *(unsigned int *)&v6[4 * (unsigned int)(v9 + 1) + 4];
      __asm
      {
        vminss  xmm8, xmm0, xmm8
        vmaxss  xmm7, xmm0, xmm7
        vminss  xmm9, xmm6, xmm9
        vmaxss  xmm10, xmm6, xmm10
      }
    }
    while ( v8 < v7 );
    rangeBindingX->constant.floatValue = *(float *)&_XMM9;
    rangeBindingX->constant.vec3Value.v[1] = *(float *)&_XMM10;
    if ( (*(float *)&_XMM9 >= *(float *)&_XMM10 || *(float *)&_XMM9 == 3.4028235e38 || *(float *)&_XMM10 == -3.4028235e38) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 97, ASSERT_TYPE_ASSERT, "(minX < maxX && minX != 3.402823466e+38F && maxX != -3.402823466e+38F)", (const char *)&queryFormat, "minX < maxX && minX != FLT_MAX && maxX != -FLT_MAX") )
      __debugbreak();
    if ( (*(float *)&_XMM8 >= *(float *)&_XMM7 || *(float *)&_XMM8 == 3.4028235e38 || *(float *)&_XMM7 == -3.4028235e38) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 98, ASSERT_TYPE_ASSERT, "(minY < maxY && minY != 3.402823466e+38F && maxY != -3.402823466e+38F)", (const char *)&queryFormat, "minY < maxY && minY != FLT_MAX && maxY != -FLT_MAX") )
      __debugbreak();
    rangeBindingY->constant.floatValue = *(float *)&_XMM8;
    rangeBindingY->constant.vec3Value.v[1] = *(float *)&_XMM7;
  }
}

/*
==============
XAnimBlendSpace2D_ValidateConstParameters
==============
*/
char XAnimBlendSpace2D_ValidateConstParameters(const XAnim_s *anims, unsigned int animIndex, const scr_string_t coordsStr, const scr_string_t edgeStr, const vec2_t *rangeX, const vec2_t *rangeY, const unsigned int maxActiveChildren, bool postParse)
{
  __int64 v9; 
  bool v11; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  unsigned int v13; 
  const char *v14; 
  unsigned int v15; 
  unsigned int numAnims; 
  unsigned int ChildAt; 
  const char *v18; 
  unsigned __int16 v19; 
  const char *v20; 
  unsigned int i; 
  double XCoord; 
  float v23; 
  double YCoord; 
  unsigned int j; 
  double v26; 
  float v27; 
  double v28; 
  float v29; 
  double v30; 
  float v31; 
  double v32; 
  const char *v33; 
  const XAnimFieldArray<unsigned int> *v34; 
  unsigned int v35; 
  const unsigned int *TriangleCoordIndexes; 
  unsigned int *v37; 
  unsigned int v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  const char *v52; 
  unsigned int v53; 
  const char *v54; 
  unsigned int v55; 
  unsigned int v56; 
  const char *v57; 
  const char *v58; 
  const char *v59; 
  const char *v60; 
  const char *v61; 
  const char *v62; 
  const char *v63; 
  const char *v64; 
  const char *v65; 
  const char *v66; 
  const char *AnimDebugName; 
  unsigned __int16 v68; 
  unsigned int v69; 
  const XAnimFieldArray<unsigned int> *TriangleCoordFieldArray; 
  vec2_t destPos; 
  vec2_t pointB; 
  vec2_t pointA; 
  char dest[2048]; 

  LODWORD(destPos.v[0]) = edgeStr;
  v9 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 110, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( maxActiveChildren - 1 > 2 )
  {
    if ( (rangeX->v[0] == 0.0 || rangeX->v[1] != 0.0) && rangeX->v[0] <= rangeX->v[1] )
    {
      if ( (rangeY->v[0] == 0.0 || rangeY->v[1] != 0.0) && rangeY->v[0] <= rangeY->v[1] )
      {
        if ( !coordsStr || coordsStr == scr_const._ )
        {
          AnimDebugName = XAnimGetAnimDebugName(anims, v9);
          v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 132, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Coords property is required.", AnimDebugName);
          goto LABEL_70;
        }
        FloatFieldArray = XAnimNode_GetFloatFieldArray(coordsStr);
        if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 137, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
          __debugbreak();
        v13 = FloatFieldArray->size >> 1;
        if ( (FloatFieldArray->size & 1) != 0 )
        {
          v62 = XAnimGetAnimDebugName(anims, v9);
          v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 142, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Blendspace requires complete pairs of 2D coordinates.", v62);
        }
        else if ( v13 >= 3 )
        {
          if ( v13 <= 0x28 )
          {
            v15 = 0;
            numAnims = anims->entries[v9].numAnims;
            v68 = anims->entries[v9].numAnims;
            if ( numAnims < v13 )
            {
              destPos.v[0] = 0.0;
              if ( numAnims )
              {
                do
                {
                  ChildAt = XAnimGetChildAt(anims, v9, v15);
                  v18 = XAnimGetAnimDebugName(anims, ChildAt);
                  Com_sprintfPos_truncate(dest, 0x800ui64, (int *)&destPos, "'%s', ", v18);
                  ++v15;
                }
                while ( v15 < anims->entries[v9].numAnims );
                v19 = anims->entries[v9].numAnims;
              }
              else
              {
                v19 = v68;
              }
              v20 = XAnimGetAnimDebugName(anims, v9);
              v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 172, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. 2D Blendspace node requires at least %d child anim nodes. Found %d child anims: [%s]\n", v20, v13, v19, dest);
              goto LABEL_70;
            }
            for ( i = 0; i < v13; ++i )
            {
              XCoord = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, i);
              v23 = *(float *)&XCoord;
              YCoord = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, i);
              if ( v23 < rangeX->v[0] || v23 > rangeX->v[1] || *(float *)&YCoord < rangeY->v[0] || *(float *)&YCoord > rangeY->v[1] )
              {
                v33 = XAnimGetAnimDebugName(anims, v9);
                v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 184, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Out of range coordinate values {'%f','%f'}. ", v33, v23, *(float *)&YCoord);
                goto LABEL_70;
              }
            }
            for ( j = 1; j < v13; ++j )
            {
              v26 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, j - 1);
              v27 = *(float *)&v26;
              v28 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, j - 1);
              v29 = *(float *)&v28;
              v30 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, j);
              v31 = *(float *)&v30;
              v32 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, j);
              if ( v27 == v31 && v29 == *(float *)&v32 )
              {
                v65 = XAnimGetAnimDebugName(anims, v9);
                v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 198, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Repeated coordinate values.", v65);
                goto LABEL_70;
              }
            }
            if ( !postParse && (!LODWORD(destPos.v[0]) || LODWORD(destPos.v[0]) == scr_const._) )
            {
              v64 = XAnimGetAnimDebugName(anims, v9);
              v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 205, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. 'edge' constant parameter not specified.", v64);
              goto LABEL_70;
            }
            if ( LODWORD(destPos.v[0]) && LODWORD(destPos.v[0]) != scr_const._ )
            {
              TriangleCoordFieldArray = XAnimBlendSpace_GetTriangleCoordFieldArray(SLODWORD(destPos.v[0]));
              v34 = TriangleCoordFieldArray;
              if ( !TriangleCoordFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 213, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
                __debugbreak();
              v35 = TriangleCoordFieldArray->size / 3;
              if ( TriangleCoordFieldArray->size != 3 * v35 )
              {
                v66 = XAnimGetAnimDebugName(anims, v9);
                v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 217, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Invalid 'edge' parameter.", v66);
                goto LABEL_70;
              }
              if ( v35 - 1 > 0x3E )
              {
                v58 = XAnimGetAnimDebugName(anims, v9);
                v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 226, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Invalid triangle edge count of '%d'. Max number of triangles is '%d'", v58, v35, 64);
                goto LABEL_70;
              }
              if ( v35 )
              {
                while ( 1 )
                {
                  TriangleCoordIndexes = XAnimBlendSpace2D_GetTriangleCoordIndexes(v34, v15);
                  v37 = (unsigned int *)TriangleCoordIndexes;
                  v38 = *TriangleCoordIndexes;
                  if ( *TriangleCoordIndexes >= v13 || TriangleCoordIndexes[1] >= v13 || TriangleCoordIndexes[2] >= v13 )
                    break;
                  v39 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v38);
                  pointA.v[0] = *(float *)&v39;
                  v40 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, *v37);
                  pointA.v[1] = *(float *)&v40;
                  v41 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v37[1]);
                  pointB.v[0] = *(float *)&v41;
                  v42 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v37[1]);
                  pointB.v[1] = *(float *)&v42;
                  v43 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v37[2]);
                  destPos.v[0] = *(float *)&v43;
                  v44 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v37[2]);
                  destPos.v[1] = *(float *)&v44;
                  v45 = v37[1];
                  v46 = *v37;
                  v69 = v45;
                  if ( *v37 == v45 || (v47 = v37[2], v45 == v47) || v46 == v47 )
                  {
                    v53 = v37[2];
                    v54 = XAnimGetAnimDebugName(anims, v9);
                    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 256, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s. Repeated edge indexes {%d,%d,%d}.", v54, v46, v69, v53);
                    goto LABEL_70;
                  }
                  if ( XAnimBlendSpace2D_IsTriangleCollinear(&pointA, &pointB, &destPos) )
                  {
                    v49 = v37[2];
                    v50 = v37[1];
                    v51 = *v37;
                    v52 = XAnimGetAnimDebugName(anims, v9);
                    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 263, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Triangle is collinear {%d,%d,%d}.", v52, v51, v50, v49);
                    goto LABEL_70;
                  }
                  v34 = TriangleCoordFieldArray;
                  if ( ++v15 >= v35 )
                    return 1;
                }
                v55 = TriangleCoordIndexes[2];
                v56 = TriangleCoordIndexes[1];
                v57 = XAnimGetAnimDebugName(anims, v9);
                v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s' Invalid triangle edges {%d,%d,%d}.", v57, v38, v56, v55);
                goto LABEL_70;
              }
            }
            return 1;
          }
          v14 = XAnimGetAnimDebugName(anims, v9);
          v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 155, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Max number of node coordinate pairs supported by the 2D blendspace node is '%d'.", v14, 40);
        }
        else
        {
          v63 = XAnimGetAnimDebugName(anims, v9);
          v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 148, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Blendspace requires at least three 2D coordinates.", v63);
        }
      }
      else
      {
        v61 = XAnimGetAnimDebugName(anims, v9);
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 126, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Range Y is invalid.", v61);
      }
    }
    else
    {
      v60 = XAnimGetAnimDebugName(anims, v9);
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Range X is invalid.", v60);
    }
  }
  else
  {
    v59 = XAnimGetAnimDebugName(anims, v9);
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace2d.cpp", 114, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Max active children parameter must be higher than 3.", v59);
  }
LABEL_70:
  if ( v11 )
    __debugbreak();
  return 0;
}

