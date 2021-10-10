/*
==============
XAnimBlendSpace2D_IsTriangleCollinear
==============
*/

bool __fastcall XAnimBlendSpace2D_IsTriangleCollinear(const vec2_t *pointA, const vec2_t *pointB, const vec2_t *pointC)
{
  return ?XAnimBlendSpace2D_IsTriangleCollinear@@YA_NAEBTvec2_t@@00@Z(pointA, pointB, pointC);
}

/*
==============
XAnimBlendSpace2D_Triangulate
==============
*/

void __fastcall XAnimBlendSpace2D_Triangulate(const XAnimFieldArray<float> *coords, const vec2_t *rangeX, const vec2_t *rangeY, ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *outTriangles)
{
  ?XAnimBlendSpace2D_Triangulate@@YAXPEBU?$XAnimFieldArray@M@@AEBTvec2_t@@1PEAV?$fixed_vector_set@VTriangle@@$0GA@U?$less@VTriangle@@V1@@ntl@@@ntl@@@Z(coords, rangeX, rangeY, outTriangles);
}

/*
==============
XAnimBlendSpace2D_IsTriangleCollinear
==============
*/
bool XAnimBlendSpace2D_IsTriangleCollinear(const vec2_t *pointA, const vec2_t *pointB, const vec2_t *pointC)
{
  return (float)((float)((float)(pointC->v[1] - pointA->v[1]) * (float)(pointB->v[0] - pointA->v[0])) - (float)((float)(pointB->v[1] - pointA->v[1]) * (float)(pointC->v[0] - pointA->v[0]))) == 0.0;
}

/*
==============
XAnimBlendSpace2D_Triangulate
==============
*/
void XAnimBlendSpace2D_Triangulate(const XAnimFieldArray<float> *coords, const vec2_t *rangeX, const vec2_t *rangeY, ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *outTriangles)
{
  signed __int64 v4; 
  void *v5; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v6; 
  unsigned __int64 v9; 
  ntl::internal::pool_allocator_freelist<56> *p_m_freelist; 
  char *v11; 
  ntl::internal::pool_allocator_freelist<56> *v12; 
  char *v13; 
  char *Value; 
  unsigned int *v15; 
  unsigned int v16; 
  _QWORD *v17; 
  char *v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  ThreadContext CurrentThreadContext; 
  float v22; 
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
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  unsigned __int64 v40; 
  const XAnimFieldArray<float> *v41; 
  unsigned int v42; 
  __int64 v43; 
  float v44; 
  float v45; 
  unsigned __int64 v46; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *v49; 
  ntl::red_black_tree_node_base *v50; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v51; 
  Edge *v52; 
  Triangle *v53; 
  __int64 v54; 
  float v55; 
  char *v56; 
  float v57; 
  float v58; 
  float v59; 
  bool v60; 
  bool v61; 
  bool v62; 
  float v63; 
  float v64; 
  bool v65; 
  __int64 v66; 
  __m256i *v67; 
  char *v68; 
  bool v69; 
  float *v70; 
  __int64 v71; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  bool v78; 
  bool v79; 
  bool v80; 
  ntl::red_black_tree_node_base *v81; 
  Edge *v82; 
  ntl::red_black_tree_node_base *v83; 
  ntl::red_black_tree_node_base *v84; 
  bool v85; 
  ntl::red_black_tree_node_base *v86; 
  ntl::red_black_tree_node_base *v87; 
  ntl::red_black_tree_node_base *v88; 
  bool v89; 
  ntl::red_black_tree_node_base *v90; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> *v91; 
  ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge> > *v92; 
  ntl::red_black_tree_node_base *v93; 
  bool v94; 
  ntl::red_black_tree_node_base *prev; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *v97; 
  ntl::red_black_tree_node_base *v98; 
  unsigned __int64 m_size; 
  float *v100; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v101; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v102; 
  __int64 v103; 
  float v104; 
  char *v105; 
  float v106; 
  float v107; 
  float v108; 
  bool v109; 
  bool v110; 
  bool v111; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v112; 
  float v113; 
  float v114; 
  bool v115; 
  __int64 v116; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v117; 
  unsigned __int64 v118; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v119; 
  char *v120; 
  bool v121; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v122; 
  ntl::red_black_tree_node_base *v123; 
  unsigned int mp_left_high; 
  unsigned int v125; 
  float v126; 
  float v127; 
  int v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  __int64 v141; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v142; 
  char *v143; 
  float v144; 
  float v145; 
  bool v146; 
  bool v147; 
  bool v148; 
  __int64 v149; 
  __m256i *v150; 
  char *v151; 
  bool v152; 
  unsigned __int64 v153; 
  unsigned __int64 v154; 
  __int64 v155; 
  float *v156; 
  float *v157; 
  float v158; 
  float v159; 
  float v160; 
  Triangle *v161; 
  __int64 v162; 
  bool v163; 
  __int64 v164; 
  __m256i *v165; 
  char *v166; 
  bool v167; 
  Triangle *i; 
  const Triangle *v169; 
  bool v170; 
  __int64 v171; 
  Triangle *iter; 
  Triangle *v173; 
  __m256i *p_m_area; 
  bool v175; 
  Triangle *v176; 
  unsigned __int64 j; 
  __int64 coordIndexB; 
  __int64 coordIndexBa; 
  __int64 coordIndexC; 
  __int64 coordIndexCa; 
  unsigned int v183; 
  float v184; 
  float v185; 
  unsigned int v186; 
  float v187; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v188; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> v190; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> result; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> v192; 
  char v193; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> v194; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> v195; 
  vec2_t pointC; 
  vec2_t pointA; 
  vec2_t pointB; 
  char v199[64]; 
  __m256i v200; 
  __int128 v201; 
  int v202; 
  Triangle v203; 
  char v204[11020]; 
  unsigned __int64 v205; 
  ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge> > v206; 
  ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge> > v207; 

  v5 = alloca(v4);
  v6 = outTriangles;
  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.cpp", 49, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.cpp", 50, ASSERT_TYPE_ASSERT, "(outTriangles)", (const char *)&queryFormat, "outTriangles") )
    __debugbreak();
  v9 = 0i64;
  v205 = 0i64;
  p_m_freelist = &v206.m_freelist;
  v11 = &v206.m_data.m_buffer[16072];
  do
  {
    *(_QWORD *)v11 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<56> *)v11;
    v11 -= 56;
  }
  while ( v11 + 56 > (char *)&v206 );
  v206.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v206.m_size = 0i64;
  v206.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v206.m_endNodeBase.mp_parent = NULL;
  v206.m_endNodeBase.mp_left = &v206.m_endNodeBase;
  v206.m_endNodeBase.mp_right = &v206.m_endNodeBase;
  v12 = &v207.m_freelist;
  v13 = &v207.m_data.m_buffer[16072];
  do
  {
    *(_QWORD *)v13 = v12;
    v12 = (ntl::internal::pool_allocator_freelist<56> *)v13;
    v13 -= 56;
  }
  while ( v13 + 56 > (char *)&v207 );
  v207.m_freelist.m_head.mp_next = &v12->m_head;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v207.m_size = 0i64;
  v207.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v207.m_endNodeBase.mp_parent = NULL;
  v207.m_endNodeBase.mp_left = &v207.m_endNodeBase;
  v207.m_endNodeBase.mp_right = &v207.m_endNodeBase;
  BYTE12(v201) = 0;
  Value = (char *)Sys_GetValue(0);
  v15 = (unsigned int *)(Value + 19416);
  if ( (unsigned int)(*((_DWORD *)Value + 4854) + 1) >= 3 )
  {
    LODWORD(coordIndexB) = *((_DWORD *)Value + 4854) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", coordIndexB, 3) )
      __debugbreak();
  }
  v16 = *v15 + 1;
  *v15 = v16;
  if ( v16 >= 3 )
  {
    LODWORD(coordIndexC) = 3;
    LODWORD(coordIndexB) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", coordIndexB, coordIndexC) )
      __debugbreak();
  }
  v17 = Value + 2088;
  v18 = Value + 40;
  if ( *v17 < (unsigned __int64)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v17 += 8i64;
  if ( *v17 >= (unsigned __int64)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v17 = v15;
  if ( *v17 <= (unsigned __int64)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v19 = (int)*v15;
  v20 = __rdtsc();
  v15[v19 + 2] = v20;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 433, NULL, 0);
  v22 = rangeX->v[1];
  v23 = v22 - rangeX->v[0];
  v24 = rangeY->v[1];
  v25 = v24 - rangeY->v[0];
  v26 = FLOAT_1_0;
  v27 = FLOAT_1_0;
  v184 = FLOAT_1_0;
  v28 = FLOAT_1_0;
  v185 = FLOAT_1_0;
  if ( v23 <= v25 )
  {
    v27 = v25 / v23;
    v184 = v25 / v23;
  }
  else
  {
    v28 = v23 / v25;
    v185 = v23 / v25;
  }
  v29 = v23 * (float)(v27 * 3.0);
  v30 = v25 * (float)(v28 * 3.0);
  v31 = (float)(rangeX->v[0] * v27) - v29;
  v32 = (float)(v22 * v27) + v29;
  v33 = (float)(rangeY->v[0] * v28) - v30;
  v187 = v33;
  v34 = (float)(v24 * v28) + v30;
  v35 = v31 - (float)(v30 * 0.57735026);
  pointA.v[0] = v35;
  pointA.v[1] = v33;
  v36 = (float)(v30 * 0.57735026) + v32;
  pointB.v[0] = v36;
  pointB.v[1] = v33;
  v37 = FLOAT_0_5;
  v38 = (float)(v32 + v31) * 0.5;
  pointC.v[0] = v38;
  v39 = (float)(v29 * 0.86602539) + v34;
  pointC.v[1] = v39;
  Triangle::SetPoints((Triangle *)v199, &pointA, &pointB, &pointC, 0x28u, 0x28u, 0x28u);
  v40 = 0i64;
  if ( v6->m_size )
  {
    do
    {
      if ( v40 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v40;
    }
    while ( v40 < v6->m_size );
    v9 = v205;
  }
  v6->m_size = 1i64;
  *(__m256i *)v6->m_data.m_buffer = *(__m256i *)v199;
  *(__m256i *)&v6->m_data.m_buffer[32] = *(__m256i *)&v199[32];
  *(__m256i *)&v6->m_data.m_buffer[64] = v200;
  *(_OWORD *)&v6->m_data.m_buffer[96] = v201;
  *(_DWORD *)&v6->m_data.m_buffer[112] = v202;
  v41 = coords;
  v186 = coords->size >> 1;
  v42 = 0;
  v183 = 0;
  if ( v186 )
  {
    while ( 1 )
    {
      v43 = 2 * v42;
      if ( (unsigned int)v43 >= v41->size )
      {
        LODWORD(coordIndexCa) = v41->size;
        LODWORD(coordIndexBa) = 2 * v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", coordIndexBa, coordIndexCa) )
          __debugbreak();
      }
      v44 = v27 * v41->values[v43];
      if ( (unsigned int)v43 >= v41->size )
      {
        LODWORD(coordIndexCa) = v41->size;
        LODWORD(coordIndexBa) = v43;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", coordIndexBa, coordIndexCa) )
          __debugbreak();
      }
      v45 = v41->values[(unsigned int)(v43 + 1)] * v185;
      v46 = 0i64;
      if ( v9 )
      {
        do
        {
          if ( v46 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ++v46;
        }
        while ( v46 < v9 );
        v6 = outTriangles;
      }
      v9 = 0i64;
      v205 = 0i64;
      if ( v206.m_size )
      {
        mp_parent = v206.m_endNodeBase.mp_parent;
        if ( v206.m_endNodeBase.mp_parent )
        {
          do
          {
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::erase_tree(&v206, (ntl::red_black_tree_node<Edge> *)mp_parent->mp_right);
            mp_left = mp_parent->mp_left;
            *(_QWORD *)&mp_parent->m_color = v206.m_freelist.m_head.mp_next;
            v206.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
            mp_parent = mp_left;
          }
          while ( mp_left );
        }
        v206.m_endNodeBase.mp_parent = NULL;
        v206.m_endNodeBase.mp_left = &v206.m_endNodeBase;
        v206.m_endNodeBase.mp_right = &v206.m_endNodeBase;
        v206.m_size = 0i64;
      }
      if ( v207.m_size )
      {
        v49 = v207.m_endNodeBase.mp_parent;
        if ( v207.m_endNodeBase.mp_parent )
        {
          do
          {
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::erase_tree(&v207, (ntl::red_black_tree_node<Edge> *)v49->mp_right);
            v50 = v49->mp_left;
            *(_QWORD *)&v49->m_color = v207.m_freelist.m_head.mp_next;
            v207.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v49;
            v49 = v50;
          }
          while ( v50 );
        }
        v207.m_endNodeBase.mp_parent = NULL;
        v207.m_endNodeBase.mp_left = &v207.m_endNodeBase;
        v207.m_endNodeBase.mp_right = &v207.m_endNodeBase;
        v207.m_size = 0i64;
      }
      v188 = v6;
      v51 = outTriangles;
      if ( outTriangles != (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size) )
      {
        while ( 1 )
        {
          if ( !v6->m_data.m_buffer[108] )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.h", 123, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
              __debugbreak();
            v51 = outTriangles;
          }
          if ( (float)((float)((float)(*(float *)&v6->m_data.m_buffer[28] - v45) * (float)(*(float *)&v6->m_data.m_buffer[28] - v45)) + (float)((float)(*(float *)&v6->m_data.m_buffer[24] - v44) * (float)(*(float *)&v6->m_data.m_buffer[24] - v44))) <= *(float *)&v6->m_data.m_buffer[104] )
            break;
LABEL_193:
          v6 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)v6 + 116);
          v188 = v6;
          if ( v6 == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)v51 + 116 * v51->m_size) )
            goto LABEL_194;
        }
        if ( !v6->m_data.m_buffer[108] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.h", 132, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
          __debugbreak();
        v52 = (Edge *)&v6->m_data.m_buffer[32];
        v53 = &v203;
        v54 = (__int64)(116 * v9) / 116;
        if ( v54 > 0 )
        {
          v55 = *(float *)&v6->m_data.m_buffer[24];
          while ( 1 )
          {
            v56 = (char *)v53 + 116 * (v54 >> 1);
            v57 = *((float *)v56 + 6);
            if ( v57 != v55 )
              break;
            v58 = *((float *)v56 + 7);
            v59 = *(float *)&v6->m_data.m_buffer[28];
            if ( v58 != v59 )
            {
              v61 = v59 < v58;
              v62 = v59 == v58;
LABEL_81:
              v60 = !v61 && !v62;
              goto LABEL_82;
            }
            v60 = *((_DWORD *)v56 + 28) < *(_DWORD *)&v6->m_data.m_buffer[112];
LABEL_82:
            if ( v60 )
            {
              v53 = (Triangle *)(v56 + 116);
              v54 += -1 - (v54 >> 1);
            }
            else
            {
              v54 >>= 1;
            }
            if ( v54 <= 0 )
              goto LABEL_86;
          }
          v61 = v55 < v57;
          v62 = v55 == v57;
          goto LABEL_81;
        }
LABEL_86:
        if ( v53 == (Triangle *)((char *)&v203 + 116 * v9) || ((v63 = *(float *)&v6->m_data.m_buffer[24], v64 = v53->m_vert[2].v[0], v63 != v64) || (v63 = *(float *)&v6->m_data.m_buffer[28], v64 = v53->m_vert[2].v[1], v63 != v64) ? (v65 = v64 > v63) : (v65 = *(_DWORD *)&v6->m_data.m_buffer[112] < SLODWORD(v53[2].m_vert[2].v[2])), v65) )
        {
          if ( v9 == 96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
            __debugbreak();
          if ( (v53 < &v203 || v53 > (Triangle *)((char *)&v203 + 116 * v9)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
            __debugbreak();
          if ( ((char *)v53 - (char *)&v203) % 0x74ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
            __debugbreak();
          if ( v6 >= (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)v53 && v6 < (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)&v203 + 116 * v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
            __debugbreak();
          v66 = 116 * v9;
          v67 = (__m256i *)((char *)&v203 + 116 * v9);
          if ( v53 != (Triangle *)v67 )
          {
            v68 = &v204[v66];
            if ( v53 == (Triangle *)&v204[v66] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( v67 == (__m256i *)v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v69 = v67 <= (__m256i *)v53;
            if ( v67 < (__m256i *)v53 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v69 = v67 <= (__m256i *)v53;
            }
            if ( !v69 )
            {
              do
              {
                v67 = (__m256i *)((char *)v67 - 116);
                v68 -= 116;
                *(__m256i *)v68 = *v67;
                *((__m256i *)v68 + 1) = v67[1];
                *((__m256i *)v68 + 2) = v67[2];
                *((_OWORD *)v68 + 6) = *(_OWORD *)v67[3].m256i_i8;
                *((_DWORD *)v68 + 28) = v67[3].m256i_i32[4];
              }
              while ( v67 > (__m256i *)v53 );
              v9 = v205;
            }
          }
          v205 = v9 + 1;
          *(__m256i *)v53->m_vert[0].v = *(__m256i *)v6->m_data.m_buffer;
          *(__m256i *)&v53->m_vert[2].z = *(__m256i *)&v6->m_data.m_buffer[32];
          *(__m256i *)v53[1].m_vert[2].v = *(__m256i *)&v6->m_data.m_buffer[64];
          *(_OWORD *)&v53[2].m_vert[1].y = *(_OWORD *)&v6->m_data.m_buffer[96];
          v53[2].m_vert[2].v[2] = *(float *)&v6->m_data.m_buffer[112];
        }
        v70 = (float *)&v6->m_data.m_buffer[40];
        v71 = 3i64;
        while ( 1 )
        {
          p_m_endNodeBase = &v206.m_endNodeBase;
          v73 = v206.m_endNodeBase.mp_parent;
          if ( v206.m_endNodeBase.mp_parent )
          {
            v74 = (float)(*(v70 - 2) + *v70) * v37;
            v75 = (float)(*(v70 - 1) + v70[1]) * v37;
            do
            {
              v76 = (float)(*(float *)&v73[1].m_color + *(float *)&v73[1].mp_parent) * v37;
              v77 = (float)(*((float *)&v73[1].mp_parent + 1) + *((float *)&v73[1].m_color + 1)) * v37;
              if ( v76 == v74 )
              {
                v78 = v75 < v77;
                v79 = v75 == v77;
              }
              else
              {
                v78 = v74 < v76;
                v79 = v74 == v76;
              }
              if ( v78 || v79 )
              {
                p_m_endNodeBase = v73;
                v73 = v73->mp_left;
              }
              else
              {
                v73 = v73->mp_right;
              }
            }
            while ( v73 );
            if ( p_m_endNodeBase != &v206.m_endNodeBase )
            {
              v80 = Edge::operator<((Edge *)(v70 - 2), (const Edge *)&p_m_endNodeBase[1]);
              v81 = &v206.m_endNodeBase;
              if ( !v80 )
                v81 = p_m_endNodeBase;
              p_m_endNodeBase = v81;
            }
          }
          if ( p_m_endNodeBase != &v206.m_endNodeBase )
            break;
          v87 = &v206.m_endNodeBase;
          v93 = v206.m_endNodeBase.mp_parent;
          v94 = 1;
          while ( v93 )
          {
            v87 = v93;
            v94 = Edge::operator<(v52, (const Edge *)&v93[1]);
            if ( v94 )
              v93 = v93->mp_left;
            else
              v93 = v93->mp_right;
          }
          prev = v87;
          if ( !v94 )
            goto LABEL_185;
          if ( v87 != v206.m_endNodeBase.mp_left )
          {
            if ( !v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            prev = ntl::red_black_tree_node_base::get_prev(v87);
LABEL_185:
            if ( !prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( !Edge::operator<((Edge *)&prev[1], v52) )
              goto LABEL_191;
            v91 = &v195;
            v92 = &v206;
LABEL_190:
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(v92, v91, v87, v52, 0, 0);
            goto LABEL_191;
          }
          ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(&v206, &v194, v87, v52, 1, 0);
LABEL_191:
          ++v52;
          v70 += 6;
          if ( !--v71 )
          {
            v6 = v188;
            v51 = outTriangles;
            v9 = v205;
            goto LABEL_193;
          }
        }
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v82 = (Edge *)&p_m_endNodeBase[1];
        v83 = &v207.m_endNodeBase;
        v84 = v207.m_endNodeBase.mp_parent;
        v85 = 1;
        while ( v84 )
        {
          v83 = v84;
          v85 = Edge::operator<(v82, (const Edge *)&v84[1]);
          if ( v85 )
            v84 = v84->mp_left;
          else
            v84 = v84->mp_right;
        }
        v86 = v83;
        if ( v85 )
        {
          if ( v83 == v207.m_endNodeBase.mp_left )
          {
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(&v207, &v190, v83, v82, 1, 0);
LABEL_156:
            v87 = &v207.m_endNodeBase;
            v88 = v207.m_endNodeBase.mp_parent;
            v89 = 1;
            while ( v88 )
            {
              v87 = v88;
              v89 = Edge::operator<(v52, (const Edge *)&v88[1]);
              if ( v89 )
                v88 = v88->mp_left;
              else
                v88 = v88->mp_right;
            }
            v90 = v87;
            if ( !v89 )
              goto LABEL_168;
            if ( v87 != v207.m_endNodeBase.mp_left )
            {
              if ( !v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              v90 = ntl::red_black_tree_node_base::get_prev(v87);
LABEL_168:
              if ( !v90 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              if ( !Edge::operator<((Edge *)&v90[1], v52) )
                goto LABEL_191;
              v91 = (ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> *)&v193;
              v92 = &v207;
              goto LABEL_190;
            }
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(&v207, &v192, v87, v52, 1, 0);
            goto LABEL_191;
          }
          if ( !v83 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v86 = ntl::red_black_tree_node_base::get_prev(v83);
        }
        if ( !v86 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( Edge::operator<((Edge *)&v86[1], v82) )
          ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(&v207, &result, v83, v82, 0, 0);
        goto LABEL_156;
      }
LABEL_194:
      next = v207.m_endNodeBase.mp_left;
      if ( v207.m_endNodeBase.mp_left != &v207.m_endNodeBase )
      {
        do
        {
          if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v97 = &v206.m_endNodeBase;
          v98 = v206.m_endNodeBase.mp_parent;
          if ( v206.m_endNodeBase.mp_parent )
          {
            do
            {
              if ( Edge::operator<((Edge *)&v98[1], (const Edge *)&next[1]) )
              {
                v98 = v98->mp_right;
              }
              else
              {
                v97 = v98;
                v98 = v98->mp_left;
              }
            }
            while ( v98 );
            if ( v97 != &v206.m_endNodeBase && !Edge::operator<((Edge *)&next[1], (const Edge *)&v97[1]) )
            {
              if ( !v206.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
                __debugbreak();
              if ( !v97 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              ntl::red_black_tree_node_base::get_next(v97);
              if ( !v97 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
                __debugbreak();
              if ( v97 == &v206.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
                __debugbreak();
              ntl::red_black_tree_node_base::rebalance_for_erase(v97, &v206.m_endNodeBase.mp_parent, &v206.m_endNodeBase.mp_left, &v206.m_endNodeBase.mp_right);
              if ( !v97 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
                __debugbreak();
              *(_QWORD *)&v97->m_color = v206.m_freelist.m_head.mp_next;
              v206.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v97;
              --v206.m_size;
            }
          }
          if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          next = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(next);
        }
        while ( next != &v207.m_endNodeBase );
        v9 = v205;
      }
      v6 = outTriangles;
      if ( &v203 == (Triangle *)((char *)&v203 + 116 * v9) )
        goto LABEL_279;
      m_size = outTriangles->m_size;
      v100 = &v203.m_vert[2].v[1];
      do
      {
        v101 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * m_size);
        v102 = outTriangles;
        v103 = (__int64)(116 * m_size) / 116;
        if ( v103 <= 0 )
          goto LABEL_241;
        v104 = *(v100 - 1);
        do
        {
          v105 = &v102->m_data.m_buffer[116 * (v103 >> 1)];
          v106 = *((float *)v105 + 6);
          if ( v106 == v104 )
          {
            v107 = *((float *)v105 + 7);
            v108 = *v100;
            if ( v107 == *v100 )
            {
              v109 = *((_DWORD *)v105 + 28) < *((_DWORD *)v100 + 21);
              goto LABEL_236;
            }
            v110 = v108 < v107;
            v111 = v108 == v107;
          }
          else
          {
            v110 = v104 < v106;
            v111 = v104 == v106;
          }
          v109 = !v110 && !v111;
LABEL_236:
          if ( v109 )
          {
            v102 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)(v105 + 116);
            v103 += -1 - (v103 >> 1);
          }
          else
          {
            v103 >>= 1;
          }
        }
        while ( v103 > 0 );
        m_size = outTriangles->m_size;
LABEL_241:
        v112 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * m_size);
        if ( v102 != v112 )
        {
          v113 = *(v100 - 1);
          v114 = *(float *)&v102->m_data.m_buffer[24];
          if ( v113 == v114 && (v113 = *v100, v114 = *(float *)&v102->m_data.m_buffer[28], *v100 == v114) )
            v115 = *((_DWORD *)v100 + 21) < *(_DWORD *)&v102->m_data.m_buffer[112];
          else
            v115 = v114 > v113;
          if ( v115 )
            v102 = v101;
          if ( v102 != v112 )
          {
            if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
              __debugbreak();
            if ( (v102 < outTriangles || v102 > (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
              __debugbreak();
            v116 = ((unsigned __int64)((char *)v102 - (char *)outTriangles) * (unsigned __int128)0x1A7B9611A7B9611Bui64) >> 64;
            if ( (char *)v102 - (char *)outTriangles != 116 * ((v116 + ((unsigned __int64)((char *)v102 - (char *)outTriangles - v116) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
              __debugbreak();
            if ( v102 == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
              __debugbreak();
            v117 = outTriangles;
            v118 = outTriangles->m_size;
            if ( v118 )
              v117 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * (((char *)v102 - (char *)outTriangles) / 116));
            v119 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * v118);
            v120 = &v117->m_data.m_buffer[116];
            if ( &v117->m_data.m_buffer[116] == (char *)v117 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( v119 == v117 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v121 = v120 < (char *)v119;
            if ( v120 > (char *)v119 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v121 = v120 < (char *)v119;
            }
            if ( v121 )
            {
              v122 = v117;
              do
              {
                *(__m256i *)v122->m_data.m_buffer = *(__m256i *)v120;
                *(__m256i *)&v122->m_data.m_buffer[32] = *((__m256i *)v120 + 1);
                *(__m256i *)&v122->m_data.m_buffer[64] = *((__m256i *)v120 + 2);
                *(_OWORD *)&v122->m_data.m_buffer[96] = *((_OWORD *)v120 + 6);
                *(_DWORD *)&v122->m_data.m_buffer[112] = *((_DWORD *)v120 + 28);
                v120 += 116;
                v122 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)v122 + 116);
              }
              while ( v120 < (char *)v119 );
            }
            m_size = --outTriangles->m_size;
          }
        }
        v100 += 29;
      }
      while ( v100 - 7 != (float *)((char *)&v203 + 116 * v9) );
LABEL_279:
      v123 = v206.m_endNodeBase.mp_left;
      if ( v206.m_endNodeBase.mp_left == &v206.m_endNodeBase )
        goto LABEL_339;
      while ( 2 )
      {
        if ( !v123 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
        }
        if ( (float)((float)((float)(v45 - *((float *)&v123[1].m_color + 1)) * (float)(*(float *)&v123[1].mp_parent - *(float *)&v123[1].m_color)) - (float)((float)(v44 - *(float *)&v123[1].m_color) * (float)(*((float *)&v123[1].mp_parent + 1) - *((float *)&v123[1].m_color + 1)))) != 0.0 )
        {
          BYTE12(v201) = 0;
          if ( !v123 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          mp_left_high = HIDWORD(v123[1].mp_left);
          v125 = (unsigned int)v123[1].mp_left;
          v126 = *(float *)&v123[1].m_color;
          *(float *)v199 = v126;
          v127 = *((float *)&v123[1].m_color + 1);
          *(float *)&v199[4] = v127;
          *(_QWORD *)&v199[8] = v123[1].mp_parent;
          *(float *)&v199[16] = v44;
          *(float *)&v199[20] = v45;
          *(float *)&v199[32] = v126;
          *(float *)&v199[36] = v127;
          *(float *)&v199[40] = *(float *)&v199[8];
          *(float *)&v199[44] = *(float *)&v199[12];
          *(float *)&v199[56] = *(float *)&v199[8];
          *(float *)&v199[60] = *(float *)&v199[12];
          *(float *)v200.m256i_i32 = v44;
          *(float *)&v200.m256i_i32[1] = v45;
          *(float *)&v200.m256i_i32[4] = v44;
          *(float *)&v200.m256i_i32[5] = v45;
          *(float *)&v200.m256i_i32[6] = v126;
          *(float *)&v200.m256i_i32[7] = v127;
          *(_QWORD *)&v199[48] = __PAIR64__(mp_left_high, v125);
          v200.m256i_i64[1] = __PAIR64__(v183, mp_left_high);
          *(_QWORD *)&v201 = __PAIR64__(v125, v183);
          v128 = v125 + 100 * (mp_left_high + 100 * v183);
          v202 = v128;
          *((float *)&v201 + 2) = 0.0;
          v129 = 0.0;
          *(float *)&v199[24] = 0.0;
          v130 = 0.0;
          *(float *)&v199[28] = 0.0;
          v131 = *(float *)&v199[8] - v126;
          v132 = *(float *)&v199[12] - v127;
          v133 = v44 - v126;
          v134 = v45 - v127;
          v135 = (float)((float)((float)(v45 - v127) * (float)(*(float *)&v199[8] - v126)) - (float)((float)(v44 - v126) * (float)(*(float *)&v199[12] - v127))) * 2.0;
          if ( v135 != 0.0 )
          {
            v136 = (float)(v132 * v132) + (float)(v131 * v131);
            v137 = (float)(v134 * v134) + (float)(v133 * v133);
            v138 = 1.0 / v135;
            v139 = (float)((float)(v136 * v134) - (float)(v137 * v132)) * v138;
            v140 = (float)((float)(v137 * v131) - (float)(v136 * v133)) * v138;
            *((float *)&v201 + 2) = (float)(v140 * v140) + (float)(v139 * v139);
            v129 = v126 + v139;
            *(float *)&v199[24] = v126 + v139;
            v130 = v127 + v140;
            *(float *)&v199[28] = v127 + v140;
            BYTE12(v201) = 1;
          }
          v141 = outTriangles->m_size;
          v142 = outTriangles;
          if ( v141 > 0 )
          {
            while ( 1 )
            {
              v143 = &v142->m_data.m_buffer[116 * (v141 >> 1)];
              v144 = *((float *)v143 + 6);
              if ( v144 != v129 )
                break;
              v145 = *((float *)v143 + 7);
              if ( v145 != v130 )
              {
                v147 = v130 < v145;
                v148 = v130 == v145;
LABEL_297:
                v146 = !v147 && !v148;
                goto LABEL_298;
              }
              v146 = *((_DWORD *)v143 + 28) < v128;
LABEL_298:
              if ( v146 )
              {
                v142 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)(v143 + 116);
                v141 += -1 - (v141 >> 1);
              }
              else
              {
                v141 >>= 1;
              }
              if ( v141 <= 0 )
              {
                v141 = outTriangles->m_size;
                goto LABEL_303;
              }
            }
            v147 = v129 < v144;
            v148 = v129 == v144;
            goto LABEL_297;
          }
LABEL_303:
          if ( v142 == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * v141) )
          {
LABEL_306:
            if ( outTriangles->m_size == 96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
              __debugbreak();
            if ( (v142 < outTriangles || v142 > (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
              __debugbreak();
            v149 = ((unsigned __int64)((char *)v142 - (char *)outTriangles) * (unsigned __int128)0x1A7B9611A7B9611Bui64) >> 64;
            if ( (char *)v142 - (char *)outTriangles != 116 * ((v149 + ((unsigned __int64)((char *)v142 - (char *)outTriangles - v149) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
              __debugbreak();
            if ( v199 >= (char *)v142 && v199 < &outTriangles->m_data.m_buffer[116 * outTriangles->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
              __debugbreak();
            v150 = (__m256i *)((char *)outTriangles + 116 * outTriangles->m_size);
            if ( v142 != (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)v150 )
            {
              v151 = &v150[3].m256i_i8[20];
              if ( v142 == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)&v150[3].m256i_u64[2] + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                __debugbreak();
              if ( v150 == (__m256i *)v151 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                __debugbreak();
              v152 = v150 <= (__m256i *)v142;
              if ( v150 < (__m256i *)v142 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                  __debugbreak();
                v152 = v150 <= (__m256i *)v142;
              }
              if ( !v152 )
              {
                do
                {
                  v150 = (__m256i *)((char *)v150 - 116);
                  v151 -= 116;
                  *(__m256i *)v151 = *v150;
                  *((__m256i *)v151 + 1) = v150[1];
                  *((__m256i *)v151 + 2) = v150[2];
                  *((_OWORD *)v151 + 6) = *(_OWORD *)v150[3].m256i_i8;
                  *((_DWORD *)v151 + 28) = v150[3].m256i_i32[4];
                }
                while ( v150 > (__m256i *)v142 );
              }
            }
            ++outTriangles->m_size;
            *(__m256i *)v142->m_data.m_buffer = *(__m256i *)v199;
            *(__m256i *)&v142->m_data.m_buffer[32] = *(__m256i *)&v199[32];
            *(__m256i *)&v142->m_data.m_buffer[64] = v200;
            *(_OWORD *)&v142->m_data.m_buffer[96] = v201;
            *(_DWORD *)&v142->m_data.m_buffer[112] = v128;
          }
          else if ( Triangle::operator<((Triangle *)v199, (const Triangle *)v142) )
          {
            v128 = v202;
            goto LABEL_306;
          }
        }
        if ( !v123 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v123 = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(v123);
        if ( v123 != &v206.m_endNodeBase )
          continue;
        break;
      }
      v37 = FLOAT_0_5;
      v9 = v205;
LABEL_339:
      v42 = v183 + 1;
      v183 = v42;
      v27 = v184;
      v41 = coords;
      if ( v42 >= v186 )
      {
        v33 = v187;
        v35 = pointA.v[0];
        v39 = pointC.v[1];
        v38 = pointC.v[0];
        v36 = pointB.v[0];
        v26 = FLOAT_1_0;
        v28 = v185;
        break;
      }
    }
  }
  v153 = 0i64;
  if ( v9 )
  {
    do
    {
      if ( v153 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v153;
    }
    while ( v153 < v9 );
    v6 = outTriangles;
  }
  v154 = 0i64;
  v205 = 0i64;
  v155 = v6->m_size;
  if ( v6 != (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)v6 + 116 * v155) )
  {
    v156 = (float *)&v6->m_data.m_buffer[56];
    do
    {
      v157 = v156 - 14;
      v158 = *(v156 - 14);
      if ( v158 == v35 && v33 == *(v156 - 13) || (v159 = *(v156 - 12), v159 == v35) && v33 == *(v156 - 11) || (v160 = *(v156 - 10), v160 == v35) && v33 == *(v156 - 9) || v158 == v36 && v33 == *(v156 - 13) || v159 == v36 && v33 == *(v156 - 11) || v160 == v36 && v33 == *(v156 - 9) || v158 == v38 && v39 == *(v156 - 13) || v159 == v38 && v39 == *(v156 - 11) || v160 == v38 && v39 == *(v156 - 9) )
      {
        v161 = &v203;
        v162 = (__int64)(116 * v154) / 116;
        if ( v162 > 0 )
        {
          do
          {
            if ( Triangle::operator<((Triangle *)((char *)v161 + 116 * (v162 >> 1)), (const Triangle *)(v156 - 14)) )
            {
              v161 = (Triangle *)((char *)v161 + 116 * (v162 >> 1) + 116);
              v162 += -1 - (v162 >> 1);
            }
            else
            {
              v162 >>= 1;
            }
          }
          while ( v162 > 0 );
          v154 = v205;
        }
        if ( v161 == (Triangle *)((char *)&v203 + 116 * v154) || (v163 = Triangle::operator<((Triangle *)(v156 - 14), v161), v154 = v205, v163) )
        {
          if ( v154 == 96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
            __debugbreak();
          if ( (v161 < &v203 || v161 > (Triangle *)((char *)&v203 + 116 * v154)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
            __debugbreak();
          if ( (char *)v161 - (char *)&v203 != 116 * (((char *)v161 - (char *)&v203) / 0x74ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
            __debugbreak();
          if ( v157 >= (float *)v161 && v157 < (float *)&v203 + 29 * v154 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
            __debugbreak();
          v164 = 116 * v154;
          v165 = (__m256i *)((char *)&v203 + 116 * v154);
          if ( v161 != (Triangle *)v165 )
          {
            v166 = &v204[v164];
            if ( v161 == (Triangle *)&v204[v164] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( v165 == (__m256i *)v166 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v167 = v165 <= (__m256i *)v161;
            if ( v165 < (__m256i *)v161 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v167 = v165 <= (__m256i *)v161;
            }
            if ( !v167 )
            {
              do
              {
                v165 = (__m256i *)((char *)v165 - 116);
                v166 -= 116;
                *(__m256i *)v166 = *v165;
                *((__m256i *)v166 + 1) = v165[1];
                *((__m256i *)v166 + 2) = v165[2];
                *((_OWORD *)v166 + 6) = *(_OWORD *)v165[3].m256i_i8;
                *((_DWORD *)v166 + 28) = v165[3].m256i_i32[4];
              }
              while ( v165 > (__m256i *)v161 );
              v154 = v205;
            }
          }
          v205 = v154 + 1;
          *(__m256i *)v161->m_vert[0].v = *(__m256i *)v157;
          *(__m256i *)&v161->m_vert[2].z = *(__m256i *)(v157 + 8);
          *(__m256i *)v161[1].m_vert[2].v = *(__m256i *)(v157 + 16);
          *(_OWORD *)&v161[2].m_vert[1].y = *((_OWORD *)v157 + 6);
          v161[2].m_vert[2].v[2] = v157[28];
          v154 = v205;
        }
      }
      else
      {
        *v157 = (float)(v26 / v27) * v158;
        *(v156 - 13) = (float)(v26 / v28) * *(v156 - 13);
        *(v156 - 6) = (float)(v26 / v27) * *(v156 - 6);
        *(v156 - 5) = (float)(v26 / v28) * *(v156 - 5);
        *(v156 - 4) = (float)(v26 / v27) * *(v156 - 4);
        *(v156 - 3) = (float)(v26 / v28) * *(v156 - 3);
        *(v156 - 12) = (float)(v26 / v27) * *(v156 - 12);
        *(v156 - 11) = (float)(v26 / v28) * *(v156 - 11);
        *v156 = (float)(v26 / v27) * *v156;
        v156[1] = (float)(v26 / v28) * v156[1];
        v156[2] = (float)(v26 / v27) * v156[2];
        v156[3] = (float)(v26 / v28) * v156[3];
        *(v156 - 10) = (float)(v26 / v27) * *(v156 - 10);
        *(v156 - 9) = (float)(v26 / v28) * *(v156 - 9);
        v156[6] = (float)(v26 / v27) * v156[6];
        v156[7] = (float)(v26 / v28) * v156[7];
        v156[8] = (float)(v26 / v27) * v156[8];
        v156[9] = (float)(v26 / v28) * v156[9];
      }
      v156 += 29;
      v6 = outTriangles;
      v155 = outTriangles->m_size;
    }
    while ( v156 - 14 != (float *)((char *)outTriangles + 116 * v155) );
  }
  for ( i = &v203; i != (Triangle *)((char *)&v203 + 116 * v154); i = (Triangle *)((char *)i + 116) )
  {
    v169 = (const Triangle *)v6;
    if ( v155 > 0 )
    {
      do
      {
        if ( Triangle::operator<((Triangle *)((char *)v169 + 116 * (v155 >> 1)), i) )
        {
          v169 = (const Triangle *)((char *)v169 + 116 * (v155 >> 1) + 116);
          v155 += -1 - (v155 >> 1);
        }
        else
        {
          v155 >>= 1;
        }
      }
      while ( v155 > 0 );
      v155 = v6->m_size;
      v154 = v205;
    }
    if ( v169 != (const Triangle *)((char *)v6 + 116 * v155) )
    {
      v170 = Triangle::operator<(i, v169);
      v154 = v205;
      if ( v170 )
        v169 = (const Triangle *)((char *)v6 + 116 * v6->m_size);
    }
    v155 = v6->m_size;
    if ( v169 != (const Triangle *)((char *)v6 + 116 * v155) )
    {
      if ( !v155 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v169 < (const Triangle *)v6 || v169 > (const Triangle *)((char *)v6 + 116 * v6->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v171 = ((unsigned __int64)((char *)v169 - (char *)v6) * (unsigned __int128)0x1A7B9611A7B9611Bui64) >> 64;
      if ( (char *)v169 - (char *)v6 != 116 * ((v171 + ((unsigned __int64)((char *)v169 - (char *)v6 - v171) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v169 == (const Triangle *)((char *)v6 + 116 * v6->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      iter = ntl::vector<Triangle,ntl::contiguous_fixed_allocator<Triangle,96,0>>::make_iter(v6, v169);
      v173 = (Triangle *)((char *)v6 + 116 * v6->m_size);
      p_m_area = (__m256i *)&iter[2].m_area;
      if ( (Triangle *)&iter[2].m_area == iter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v173 == iter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v175 = p_m_area < (__m256i *)v173;
      if ( p_m_area > (__m256i *)v173 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v175 = p_m_area < (__m256i *)v173;
      }
      if ( v175 )
      {
        v176 = iter;
        do
        {
          *(__m256i *)v176->m_vert[0].v = *p_m_area;
          *(__m256i *)&v176->m_vert[2].z = p_m_area[1];
          *(__m256i *)v176[1].m_vert[2].v = p_m_area[2];
          *(_OWORD *)&v176[2].m_vert[1].y = *(_OWORD *)p_m_area[3].m256i_i8;
          LODWORD(v176[2].m_vert[2].v[2]) = p_m_area[3].m256i_i32[4];
          p_m_area = (__m256i *)((char *)p_m_area + 116);
          v176 = (Triangle *)((char *)v176 + 116);
        }
        while ( p_m_area < (__m256i *)v173 );
      }
      v155 = --v6->m_size;
    }
  }
  Profile_EndInternal(NULL);
  ntl::set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge>>::~set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge>>((ntl::set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge> > *)&v207);
  ntl::set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge>>::~set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge>>((ntl::set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge> > *)&v206);
  if ( v154 )
  {
    for ( j = 0i64; j < v154; ++j )
    {
      if ( j >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
  }
}

