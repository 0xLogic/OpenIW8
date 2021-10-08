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
  char v3; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rdx]
    vsubss  xmm2, xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [r8]
    vsubss  xmm4, xmm0, dword ptr [rcx+4]
    vmulss  xmm5, xmm3, xmm2
    vsubss  xmm2, xmm1, dword ptr [rcx]
    vmulss  xmm0, xmm4, xmm2
    vsubss  xmm3, xmm5, xmm0
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm3, xmm1
  }
  return v3 != 0;
}

/*
==============
XAnimBlendSpace2D_Triangulate
==============
*/
void XAnimBlendSpace2D_Triangulate(const XAnimFieldArray<float> *coords, const vec2_t *rangeX, const vec2_t *rangeY, ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *outTriangles)
{
  signed __int64 v4; 
  void *v15; 
  unsigned __int64 v19; 
  ntl::internal::pool_allocator_freelist<56> *p_m_freelist; 
  char *v21; 
  ntl::internal::pool_allocator_freelist<56> *v22; 
  char *v23; 
  char *Value; 
  unsigned int *v25; 
  unsigned int v26; 
  _QWORD *v27; 
  char *v28; 
  __int64 v29; 
  unsigned __int64 v30; 
  ThreadContext CurrentThreadContext; 
  unsigned __int64 v61; 
  unsigned int v67; 
  unsigned int v69; 
  unsigned __int64 v74; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *v77; 
  ntl::red_black_tree_node_base *v78; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v79; 
  bool v80; 
  bool v81; 
  Edge *v89; 
  __int64 v90; 
  __int64 v92; 
  __int64 v94; 
  bool v95; 
  bool v96; 
  bool v101; 
  bool v104; 
  __int64 v105; 
  bool v108; 
  __int64 v118; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v121; 
  bool v134; 
  ntl::red_black_tree_node_base *v135; 
  Edge *v136; 
  ntl::red_black_tree_node_base *v137; 
  ntl::red_black_tree_node_base *v138; 
  bool v139; 
  ntl::red_black_tree_node_base *v140; 
  ntl::red_black_tree_node_base *v141; 
  ntl::red_black_tree_node_base *v142; 
  bool v143; 
  ntl::red_black_tree_node_base *v144; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> *v145; 
  ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge> > *v146; 
  ntl::red_black_tree_node_base *v147; 
  bool v148; 
  ntl::red_black_tree_node_base *prev; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *v151; 
  ntl::red_black_tree_node_base *v152; 
  unsigned __int64 m_size; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v155; 
  __int64 v157; 
  __int64 v159; 
  bool v160; 
  bool v161; 
  bool v166; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v167; 
  bool v170; 
  __int64 v171; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v172; 
  unsigned __int64 v173; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v174; 
  bool v176; 
  bool v184; 
  bool v185; 
  unsigned int mp_left_high; 
  unsigned int v197; 
  int v202; 
  __int64 v231; 
  __int64 v233; 
  bool v234; 
  bool v235; 
  bool v239; 
  __int64 v240; 
  bool v243; 
  unsigned __int64 v254; 
  unsigned __int64 v255; 
  __int64 v256; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v257; 
  bool v258; 
  __int64 v265; 
  bool v266; 
  __int64 v267; 
  bool v270; 
  char *v299; 
  Triangle *i; 
  const Triangle *v301; 
  bool v302; 
  __int64 v303; 
  Triangle *iter; 
  Triangle *v305; 
  bool v307; 
  unsigned __int64 j; 
  __int64 coordIndexB; 
  __int64 coordIndexBa; 
  __int64 coordIndexC; 
  __int64 coordIndexCa; 
  unsigned int v330; 
  unsigned int v333; 
  ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *v335; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> v337; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> result; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> v339; 
  char v340; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> v341; 
  ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> v342; 
  vec2_t pointC; 
  vec2_t pointA; 
  vec2_t pointB; 
  char v346[64]; 
  __m256i v347; 
  __int128 v348; 
  int v349; 
  Triangle v350; 
  char v351[11020]; 
  unsigned __int64 v352; 
  ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge> > v353; 
  ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge> > v354; 
  char v365; 

  v15 = alloca(v4);
  __asm
  {
    vmovaps [rsp+0AC20h+var_40], xmm6
    vmovaps [rsp+0AC20h+var_50], xmm7
    vmovaps [rsp+0AC20h+var_60], xmm8
    vmovaps [rsp+0AC20h+var_70], xmm9
    vmovaps [rsp+0AC20h+var_80], xmm10
    vmovaps [rsp+0AC20h+var_90], xmm11
    vmovaps [rsp+0AC20h+var_A0], xmm12
    vmovaps [rsp+0AC20h+var_B0], xmm13
    vmovaps [rsp+0AC20h+var_C0], xmm14
    vmovaps [rsp+0AC20h+var_D0], xmm15
  }
  _R13 = outTriangles;
  _R14 = rangeY;
  _R15 = rangeX;
  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.cpp", 49, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.cpp", 50, ASSERT_TYPE_ASSERT, "(outTriangles)", (const char *)&queryFormat, "outTriangles") )
    __debugbreak();
  v19 = 0i64;
  v352 = 0i64;
  p_m_freelist = &v353.m_freelist;
  v21 = &v353.m_data.m_buffer[16072];
  do
  {
    *(_QWORD *)v21 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<56> *)v21;
    v21 -= 56;
  }
  while ( v21 + 56 > (char *)&v353 );
  v353.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v353.m_size = 0i64;
  v353.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v353.m_endNodeBase.mp_parent = NULL;
  v353.m_endNodeBase.mp_left = &v353.m_endNodeBase;
  v353.m_endNodeBase.mp_right = &v353.m_endNodeBase;
  v22 = &v354.m_freelist;
  v23 = &v354.m_data.m_buffer[16072];
  do
  {
    *(_QWORD *)v23 = v22;
    v22 = (ntl::internal::pool_allocator_freelist<56> *)v23;
    v23 -= 56;
  }
  while ( v23 + 56 > (char *)&v354 );
  v354.m_freelist.m_head.mp_next = &v22->m_head;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v354.m_size = 0i64;
  v354.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v354.m_endNodeBase.mp_parent = NULL;
  v354.m_endNodeBase.mp_left = &v354.m_endNodeBase;
  v354.m_endNodeBase.mp_right = &v354.m_endNodeBase;
  BYTE12(v348) = 0;
  Value = (char *)Sys_GetValue(0);
  v25 = (unsigned int *)(Value + 19416);
  if ( (unsigned int)(*((_DWORD *)Value + 4854) + 1) >= 3 )
  {
    LODWORD(coordIndexB) = *((_DWORD *)Value + 4854) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", coordIndexB, 3) )
      __debugbreak();
  }
  v26 = *v25 + 1;
  *v25 = v26;
  if ( v26 >= 3 )
  {
    LODWORD(coordIndexC) = 3;
    LODWORD(coordIndexB) = v26;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", coordIndexB, coordIndexC) )
      __debugbreak();
  }
  v27 = Value + 2088;
  v28 = Value + 40;
  if ( *v27 < (unsigned __int64)v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v27 += 8i64;
  if ( *v27 >= (unsigned __int64)v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v27 = v25;
  if ( *v27 <= (unsigned __int64)v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v29 = (int)*v25;
  v30 = __rdtsc();
  v25[v29 + 2] = v30;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 433, NULL, 0);
  __asm
  {
    vmovss  xmm4, dword ptr [r15+4]
    vmovss  xmm5, dword ptr [r15]
    vsubss  xmm2, xmm4, xmm5
    vmovss  xmm7, dword ptr [r14+4]
    vmovss  xmm8, dword ptr [r14]
    vsubss  xmm3, xmm7, xmm8
    vmovss  xmm11, cs:__real@3f800000
    vmovaps xmm13, xmm11
    vmovss  [rsp+0AC20h+var_ABD4], xmm11
    vmovaps xmm14, xmm11
    vmovss  [rsp+0AC20h+var_ABD0], xmm11
    vcomiss xmm2, xmm3
  }
  if ( v95 || v80 )
  {
    __asm
    {
      vdivss  xmm13, xmm3, xmm2
      vmovss  [rsp+0AC20h+var_ABD4], xmm13
    }
  }
  else
  {
    __asm
    {
      vdivss  xmm14, xmm2, xmm3
      vmovss  [rsp+0AC20h+var_ABD0], xmm14
    }
  }
  __asm
  {
    vmulss  xmm0, xmm13, cs:__real@40400000
    vmulss  xmm6, xmm2, xmm0
    vmulss  xmm1, xmm14, cs:__real@40400000
    vmulss  xmm2, xmm3, xmm1
    vmulss  xmm0, xmm5, xmm13
    vsubss  xmm5, xmm0, xmm6
    vmulss  xmm1, xmm4, xmm13
    vaddss  xmm3, xmm1, xmm6
    vmulss  xmm0, xmm8, xmm14
    vsubss  xmm8, xmm0, xmm2
    vmovss  [rsp+0AC20h+var_ABC8], xmm8
    vmulss  xmm1, xmm7, xmm14
    vaddss  xmm4, xmm1, xmm2
    vmulss  xmm0, xmm2, cs:__real@3f13cd3a
    vsubss  xmm7, xmm5, xmm0
    vmovss  dword ptr [rbp+0AB20h+pointA], xmm7
    vmovss  dword ptr [rbp+0AB20h+pointA+4], xmm8
    vaddss  xmm10, xmm0, xmm3
    vmovss  dword ptr [rbp+0AB20h+pointB], xmm10
    vmovss  dword ptr [rbp+0AB20h+pointB+4], xmm8
    vaddss  xmm0, xmm3, xmm5
    vmovss  xmm12, cs:__real@3f000000
    vmulss  xmm9, xmm0, xmm12
    vmovss  dword ptr [rbp+0AB20h+pointC], xmm9
    vmulss  xmm0, xmm6, cs:__real@3f5db3d7
    vaddss  xmm6, xmm0, xmm4
    vmovss  dword ptr [rbp+0AB20h+pointC+4], xmm6
  }
  Triangle::SetPoints((Triangle *)v346, &pointA, &pointB, &pointC, 0x28u, 0x28u, 0x28u);
  v61 = 0i64;
  if ( _R13->m_size )
  {
    do
    {
      if ( v61 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v61;
    }
    while ( v61 < _R13->m_size );
    v19 = v352;
  }
  _R13->m_size = 1i64;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0AB20h+var_AB60]
    vmovups ymmword ptr [r13+0], ymm0
    vmovups ymm1, ymmword ptr [rbp+0AB20h+var_AB60+20h]
    vmovups ymmword ptr [r13+20h], ymm1
    vmovups ymm0, [rbp+0AB20h+var_AB20]
    vmovups ymmword ptr [r13+40h], ymm0
    vmovups xmm1, [rbp+0AB20h+var_AB00]
    vmovups xmmword ptr [r13+60h], xmm1
  }
  *(_DWORD *)&_R13->m_data.m_buffer[112] = v349;
  _RDI = coords;
  v333 = coords->size >> 1;
  v67 = 0;
  v330 = 0;
  if ( v333 )
  {
    __asm { vxorps  xmm15, xmm15, xmm15 }
    while ( 1 )
    {
      v69 = 2 * v67;
      if ( 2 * v67 >= _RDI->size )
      {
        LODWORD(coordIndexCa) = _RDI->size;
        LODWORD(coordIndexBa) = 2 * v67;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", coordIndexBa, coordIndexCa) )
          __debugbreak();
      }
      __asm { vmulss  xmm14, xmm13, dword ptr [rdi+rbx*4+4] }
      if ( v69 >= _RDI->size )
      {
        LODWORD(coordIndexCa) = _RDI->size;
        LODWORD(coordIndexBa) = v69;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( index * 2 ) < (unsigned)( coords->size )", "index * 2 doesn't index coords->size\n\t%i not in [0, %i)", coordIndexBa, coordIndexCa) )
          __debugbreak();
      }
      _RAX = v69 + 1;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rax*4+4]
        vmulss  xmm13, xmm0, [rsp+0AC20h+var_ABD0]
      }
      v74 = 0i64;
      if ( v19 )
      {
        do
        {
          if ( v74 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          ++v74;
        }
        while ( v74 < v19 );
        _R13 = outTriangles;
      }
      v19 = 0i64;
      v352 = 0i64;
      if ( v353.m_size )
      {
        mp_parent = v353.m_endNodeBase.mp_parent;
        if ( v353.m_endNodeBase.mp_parent )
        {
          do
          {
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::erase_tree(&v353, (ntl::red_black_tree_node<Edge> *)mp_parent->mp_right);
            mp_left = mp_parent->mp_left;
            *(_QWORD *)&mp_parent->m_color = v353.m_freelist.m_head.mp_next;
            v353.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
            mp_parent = mp_left;
          }
          while ( mp_left );
        }
        v353.m_endNodeBase.mp_parent = NULL;
        v353.m_endNodeBase.mp_left = &v353.m_endNodeBase;
        v353.m_endNodeBase.mp_right = &v353.m_endNodeBase;
        v353.m_size = 0i64;
      }
      if ( v354.m_size )
      {
        v77 = v354.m_endNodeBase.mp_parent;
        if ( v354.m_endNodeBase.mp_parent )
        {
          do
          {
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::erase_tree(&v354, (ntl::red_black_tree_node<Edge> *)v77->mp_right);
            v78 = v77->mp_left;
            *(_QWORD *)&v77->m_color = v354.m_freelist.m_head.mp_next;
            v354.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v77;
            v77 = v78;
          }
          while ( v78 );
        }
        v354.m_endNodeBase.mp_parent = NULL;
        v354.m_endNodeBase.mp_left = &v354.m_endNodeBase;
        v354.m_endNodeBase.mp_right = &v354.m_endNodeBase;
        v354.m_size = 0i64;
      }
      v335 = _R13;
      v79 = outTriangles;
      if ( outTriangles != (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size) )
      {
        while ( 1 )
        {
          v80 = _R13->m_data.m_buffer[108] == 0;
          if ( !_R13->m_data.m_buffer[108] )
          {
            v81 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.h", 123, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized");
            v80 = !v81;
            if ( v81 )
              __debugbreak();
            v79 = outTriangles;
          }
          __asm
          {
            vmovss  xmm0, dword ptr [r13+18h]
            vsubss  xmm4, xmm0, xmm14
            vmovss  xmm1, dword ptr [r13+1Ch]
            vsubss  xmm2, xmm1, xmm13
            vmulss  xmm3, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, dword ptr [r13+68h]
          }
          if ( v80 )
            break;
LABEL_194:
          _R13 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)_R13 + 116);
          v335 = _R13;
          if ( _R13 == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)v79 + 116 * v79->m_size) )
            goto LABEL_195;
        }
        if ( !_R13->m_data.m_buffer[108] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_algo.h", 132, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
          __debugbreak();
        v89 = (Edge *)&_R13->m_data.m_buffer[32];
        v90 = 116 * v19;
        _RSI = &v350;
        v92 = (__int64)(116 * v19) / 116;
        if ( v92 > 0 )
        {
          __asm { vmovss  xmm2, dword ptr [r13+18h] }
          while ( 1 )
          {
            v94 = 116 * (v92 >> 1);
            v95 = __CFADD__(_RSI, v94);
            v96 = (Triangle *)((char *)_RSI + v94) == NULL;
            _RCX = (char *)_RSI + v94;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+18h]
              vucomiss xmm0, xmm2
            }
            if ( !v96 )
              break;
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+1Ch]
              vmovss  xmm1, dword ptr [r13+1Ch]
              vucomiss xmm0, xmm1
            }
            if ( !v96 )
            {
              __asm { vcomiss xmm1, xmm0 }
LABEL_82:
              v101 = !v95 && !v96;
              goto LABEL_83;
            }
            v101 = *((_DWORD *)_RCX + 28) < *(_DWORD *)&_R13->m_data.m_buffer[112];
LABEL_83:
            if ( v101 )
            {
              _RSI = (Triangle *)(_RCX + 116);
              v92 += -1 - (v92 >> 1);
            }
            else
            {
              v92 >>= 1;
            }
            if ( v92 <= 0 )
              goto LABEL_87;
          }
          __asm { vcomiss xmm2, xmm0 }
          goto LABEL_82;
        }
LABEL_87:
        if ( _RSI == (Triangle *)((char *)&v350 + v90) )
          goto LABEL_459;
        __asm
        {
          vmovss  xmm0, dword ptr [r13+18h]
          vmovss  xmm1, dword ptr [rsi+18h]
          vucomiss xmm0, xmm1
        }
        if ( _RSI != (Triangle *)((char *)&v350 + v90) )
          goto LABEL_91;
        __asm
        {
          vmovss  xmm0, dword ptr [r13+1Ch]
          vmovss  xmm1, dword ptr [rsi+1Ch]
          vucomiss xmm0, xmm1
        }
        if ( _RSI == (Triangle *)((char *)&v350 + v90) )
        {
          v104 = *(_DWORD *)&_R13->m_data.m_buffer[112] < SLODWORD(_RSI[2].m_vert[2].v[2]);
        }
        else
        {
LABEL_91:
          __asm { vcomiss xmm1, xmm0 }
          v104 = _RSI > (Triangle *)((char *)&v350 + v90);
        }
        if ( v104 )
        {
LABEL_459:
          if ( v19 == 96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
            __debugbreak();
          if ( (_RSI < &v350 || _RSI > (Triangle *)((char *)&v350 + 116 * v19)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
            __debugbreak();
          if ( ((char *)_RSI - (char *)&v350) % 0x74ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
            __debugbreak();
          if ( _R13 >= (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)_RSI && _R13 < (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)&v350 + 116 * v19) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
            __debugbreak();
          v105 = 116 * v19;
          _RBX = (char *)&v350 + 116 * v19;
          if ( _RSI != (Triangle *)_RBX )
          {
            _RDI = &v351[v105];
            if ( _RSI == (Triangle *)&v351[v105] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( _RBX == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v108 = _RBX <= (char *)_RSI;
            if ( _RBX < (char *)_RSI )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v108 = _RBX <= (char *)_RSI;
            }
            if ( !v108 )
            {
              do
              {
                _RBX -= 116;
                _RDI -= 116;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbx]
                  vmovups ymmword ptr [rdi], ymm0
                  vmovups ymm1, ymmword ptr [rbx+20h]
                  vmovups ymmword ptr [rdi+20h], ymm1
                  vmovups ymm0, ymmword ptr [rbx+40h]
                  vmovups ymmword ptr [rdi+40h], ymm0
                  vmovups xmm1, xmmword ptr [rbx+60h]
                  vmovups xmmword ptr [rdi+60h], xmm1
                }
                *((_DWORD *)_RDI + 28) = *((_DWORD *)_RBX + 28);
              }
              while ( _RBX > (char *)_RSI );
              v19 = v352;
            }
          }
          v352 = v19 + 1;
          __asm
          {
            vmovups ymm0, ymmword ptr [r13+0]
            vmovups ymmword ptr [rsi], ymm0
            vmovups ymm1, ymmword ptr [r13+20h]
            vmovups ymmword ptr [rsi+20h], ymm1
            vmovups ymm0, ymmword ptr [r13+40h]
            vmovups ymmword ptr [rsi+40h], ymm0
            vmovups xmm1, xmmword ptr [r13+60h]
            vmovups xmmword ptr [rsi+60h], xmm1
          }
          _RSI[2].m_vert[2].v[2] = *(float *)&_R13->m_data.m_buffer[112];
        }
        _R15 = &_R13->m_data.m_buffer[40];
        v118 = 3i64;
        while ( 1 )
        {
          p_m_endNodeBase = &v353.m_endNodeBase;
          _RAX = v353.m_endNodeBase.mp_parent;
          v121 = v353.m_endNodeBase.mp_parent == NULL;
          if ( v353.m_endNodeBase.mp_parent )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r15-8]
              vaddss  xmm1, xmm0, dword ptr [r15]
              vmulss  xmm4, xmm1, xmm12
              vmovss  xmm2, dword ptr [r15-4]
              vaddss  xmm0, xmm2, dword ptr [r15+4]
              vmulss  xmm5, xmm0, xmm12
            }
            do
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rax+20h]
                vaddss  xmm1, xmm0, dword ptr [rax+28h]
                vmulss  xmm3, xmm1, xmm12
                vmovss  xmm2, dword ptr [rax+2Ch]
                vaddss  xmm0, xmm2, dword ptr [rax+24h]
                vmulss  xmm1, xmm0, xmm12
                vucomiss xmm3, xmm4
              }
              if ( v121 )
                __asm { vcomiss xmm5, xmm1 }
              else
                __asm { vcomiss xmm4, xmm3 }
              if ( v121 )
              {
                p_m_endNodeBase = _RAX;
                _RAX = _RAX->mp_left;
              }
              else
              {
                _RAX = _RAX->mp_right;
              }
              v121 = _RAX == NULL;
            }
            while ( _RAX );
            if ( p_m_endNodeBase != &v353.m_endNodeBase )
            {
              v134 = Edge::operator<((Edge *)(_R15 - 8), (const Edge *)&p_m_endNodeBase[1]);
              v135 = &v353.m_endNodeBase;
              if ( !v134 )
                v135 = p_m_endNodeBase;
              p_m_endNodeBase = v135;
            }
          }
          if ( p_m_endNodeBase != &v353.m_endNodeBase )
            break;
          v141 = &v353.m_endNodeBase;
          v147 = v353.m_endNodeBase.mp_parent;
          v148 = 1;
          while ( v147 )
          {
            v141 = v147;
            v148 = Edge::operator<(v89, (const Edge *)&v147[1]);
            if ( v148 )
              v147 = v147->mp_left;
            else
              v147 = v147->mp_right;
          }
          prev = v141;
          if ( !v148 )
            goto LABEL_186;
          if ( v141 != v353.m_endNodeBase.mp_left )
          {
            if ( !v141 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            prev = ntl::red_black_tree_node_base::get_prev(v141);
LABEL_186:
            if ( !prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( !Edge::operator<((Edge *)&prev[1], v89) )
              goto LABEL_192;
            v145 = &v342;
            v146 = &v353;
LABEL_191:
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(v146, v145, v141, v89, 0, 0);
            goto LABEL_192;
          }
          ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(&v353, &v341, v141, v89, 1, 0);
LABEL_192:
          ++v89;
          _R15 += 24;
          if ( !--v118 )
          {
            _R13 = v335;
            v79 = outTriangles;
            v19 = v352;
            goto LABEL_194;
          }
        }
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v136 = (Edge *)&p_m_endNodeBase[1];
        v137 = &v354.m_endNodeBase;
        v138 = v354.m_endNodeBase.mp_parent;
        v139 = 1;
        while ( v138 )
        {
          v137 = v138;
          v139 = Edge::operator<(v136, (const Edge *)&v138[1]);
          if ( v139 )
            v138 = v138->mp_left;
          else
            v138 = v138->mp_right;
        }
        v140 = v137;
        if ( v139 )
        {
          if ( v137 == v354.m_endNodeBase.mp_left )
          {
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(&v354, &v337, v137, v136, 1, 0);
LABEL_157:
            v141 = &v354.m_endNodeBase;
            v142 = v354.m_endNodeBase.mp_parent;
            v143 = 1;
            while ( v142 )
            {
              v141 = v142;
              v143 = Edge::operator<(v89, (const Edge *)&v142[1]);
              if ( v143 )
                v142 = v142->mp_left;
              else
                v142 = v142->mp_right;
            }
            v144 = v141;
            if ( !v143 )
              goto LABEL_169;
            if ( v141 != v354.m_endNodeBase.mp_left )
            {
              if ( !v141 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              v144 = ntl::red_black_tree_node_base::get_prev(v141);
LABEL_169:
              if ( !v144 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              if ( !Edge::operator<((Edge *)&v144[1], v89) )
                goto LABEL_192;
              v145 = (ntl::red_black_tree_iterator<Edge,ntl::red_black_tree_node<Edge>,Edge *,Edge &> *)&v340;
              v146 = &v354;
              goto LABEL_191;
            }
            ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(&v354, &v339, v141, v89, 1, 0);
            goto LABEL_192;
          }
          if ( !v137 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v140 = ntl::red_black_tree_node_base::get_prev(v137);
        }
        if ( !v140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( Edge::operator<((Edge *)&v140[1], v136) )
          ntl::red_black_tree<Edge,Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::return_input<Edge>,ntl::less<Edge,Edge>>::insert_node(&v354, &result, v137, v136, 0, 0);
        goto LABEL_157;
      }
LABEL_195:
      next = v354.m_endNodeBase.mp_left;
      if ( v354.m_endNodeBase.mp_left != &v354.m_endNodeBase )
      {
        do
        {
          if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v151 = &v353.m_endNodeBase;
          v152 = v353.m_endNodeBase.mp_parent;
          if ( v353.m_endNodeBase.mp_parent )
          {
            do
            {
              if ( Edge::operator<((Edge *)&v152[1], (const Edge *)&next[1]) )
              {
                v152 = v152->mp_right;
              }
              else
              {
                v151 = v152;
                v152 = v152->mp_left;
              }
            }
            while ( v152 );
            if ( v151 != &v353.m_endNodeBase && !Edge::operator<((Edge *)&next[1], (const Edge *)&v151[1]) )
            {
              if ( !v353.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
                __debugbreak();
              if ( !v151 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              ntl::red_black_tree_node_base::get_next(v151);
              if ( !v151 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
                __debugbreak();
              if ( v151 == &v353.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
                __debugbreak();
              ntl::red_black_tree_node_base::rebalance_for_erase(v151, &v353.m_endNodeBase.mp_parent, &v353.m_endNodeBase.mp_left, &v353.m_endNodeBase.mp_right);
              if ( !v151 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
                __debugbreak();
              *(_QWORD *)&v151->m_color = v353.m_freelist.m_head.mp_next;
              v353.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v151;
              --v353.m_size;
            }
          }
          if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          next = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(next);
        }
        while ( next != &v354.m_endNodeBase );
        v19 = v352;
      }
      _R13 = outTriangles;
      if ( &v350 == (Triangle *)((char *)&v350 + 116 * v19) )
        goto LABEL_280;
      m_size = outTriangles->m_size;
      _R14 = &v350.m_vert[2].v[1];
      do
      {
        v155 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * m_size);
        _RDI = outTriangles;
        v157 = (__int64)(116 * m_size) / 116;
        if ( v157 <= 0 )
          goto LABEL_242;
        __asm { vmovss  xmm2, dword ptr [r14-4] }
        do
        {
          v159 = 116 * (v157 >> 1);
          v160 = __CFADD__(_RDI, v159);
          v161 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)_RDI + v159) == NULL;
          _RCX = &_RDI->m_data.m_buffer[v159];
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+18h]
            vucomiss xmm0, xmm2
          }
          if ( v161 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+1Ch]
              vmovss  xmm1, dword ptr [r14]
              vucomiss xmm0, xmm1
            }
            if ( v161 )
            {
              v166 = *((_DWORD *)_RCX + 28) < *((_DWORD *)_R14 + 21);
              goto LABEL_237;
            }
            __asm { vcomiss xmm1, xmm0 }
          }
          else
          {
            __asm { vcomiss xmm2, xmm0 }
          }
          v166 = !v160 && !v161;
LABEL_237:
          if ( v166 )
          {
            _RDI = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)(_RCX + 116);
            v157 += -1 - (v157 >> 1);
          }
          else
          {
            v157 >>= 1;
          }
        }
        while ( v157 > 0 );
        m_size = outTriangles->m_size;
LABEL_242:
        v167 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * m_size);
        if ( _RDI != v167 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14-4]
            vmovss  xmm1, dword ptr [rdi+18h]
            vucomiss xmm0, xmm1
          }
          if ( _RDI != v167 )
            goto LABEL_246;
          __asm
          {
            vmovss  xmm0, dword ptr [r14]
            vmovss  xmm1, dword ptr [rdi+1Ch]
            vucomiss xmm0, xmm1
          }
          if ( _RDI == v167 )
          {
            v170 = *((_DWORD *)_R14 + 21) < *(_DWORD *)&_RDI->m_data.m_buffer[112];
          }
          else
          {
LABEL_246:
            __asm { vcomiss xmm1, xmm0 }
            v170 = _RDI > v167;
          }
          if ( v170 )
            _RDI = v155;
          if ( _RDI != v167 )
          {
            if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
              __debugbreak();
            if ( (_RDI < outTriangles || _RDI > (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
              __debugbreak();
            v171 = ((unsigned __int64)((char *)_RDI - (char *)outTriangles) * (unsigned __int128)0x1A7B9611A7B9611Bui64) >> 64;
            if ( (char *)_RDI - (char *)outTriangles != 116 * ((v171 + ((unsigned __int64)((char *)_RDI - (char *)outTriangles - v171) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
              __debugbreak();
            if ( _RDI == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
              __debugbreak();
            v172 = outTriangles;
            v173 = outTriangles->m_size;
            if ( v173 )
              v172 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * (((char *)_RDI - (char *)outTriangles) / 116));
            v174 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * v173);
            _RBX = &v172->m_data.m_buffer[116];
            if ( &v172->m_data.m_buffer[116] == (char *)v172 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( v174 == v172 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v176 = _RBX < (char *)v174;
            if ( _RBX > (char *)v174 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v176 = _RBX < (char *)v174;
            }
            if ( v176 )
            {
              _RCX = v172;
              do
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbx]
                  vmovups ymmword ptr [rcx], ymm0
                  vmovups ymm1, ymmword ptr [rbx+20h]
                  vmovups ymmword ptr [rcx+20h], ymm1
                  vmovups ymm0, ymmword ptr [rbx+40h]
                  vmovups ymmword ptr [rcx+40h], ymm0
                  vmovups xmm1, xmmword ptr [rbx+60h]
                  vmovups xmmword ptr [rcx+60h], xmm1
                }
                *(_DWORD *)&_RCX->m_data.m_buffer[112] = *((_DWORD *)_RBX + 28);
                _RBX += 116;
                _RCX = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)_RCX + 116);
              }
              while ( _RBX < (char *)v174 );
            }
            m_size = --outTriangles->m_size;
          }
        }
        _R14 += 29;
      }
      while ( _R14 - 7 != (float *)((char *)&v350 + 116 * v19) );
LABEL_280:
      _RBX = v353.m_endNodeBase.mp_left;
      if ( v353.m_endNodeBase.mp_left == &v353.m_endNodeBase )
        goto LABEL_344;
      __asm { vmovss  xmm12, cs:__real@3f800000 }
      while ( 2 )
      {
        v184 = _RBX == NULL;
        if ( !_RBX )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v185 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node");
          v184 = !v185;
          if ( v185 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vsubss  xmm5, xmm0, dword ptr [rbx+20h]
          vmovss  xmm1, dword ptr [rbx+2Ch]
          vsubss  xmm4, xmm1, dword ptr [rbx+24h]
          vsubss  xmm3, xmm14, dword ptr [rbx+20h]
          vsubss  xmm0, xmm13, dword ptr [rbx+24h]
          vmulss  xmm2, xmm0, xmm5
          vmulss  xmm1, xmm3, xmm4
          vsubss  xmm3, xmm2, xmm1
          vucomiss xmm3, xmm15
        }
        if ( !v184 )
        {
          BYTE12(v348) = 0;
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          mp_left_high = HIDWORD(_RBX[1].mp_left);
          v197 = (unsigned int)_RBX[1].mp_left;
          __asm
          {
            vmovss  xmm7, dword ptr [rbx+20h]
            vmovss  dword ptr [rbp+0AB20h+var_AB60], xmm7
            vmovss  xmm8, dword ptr [rbx+24h]
            vmovss  dword ptr [rbp+0AB20h+var_AB60+4], xmm8
            vmovss  xmm1, dword ptr [rbx+28h]
            vmovss  dword ptr [rbp+0AB20h+var_AB60+8], xmm1
            vmovss  xmm0, dword ptr [rbx+2Ch]
            vmovss  dword ptr [rbp+0AB20h+var_AB60+0Ch], xmm0
            vmovss  dword ptr [rbp+0AB20h+var_AB60+10h], xmm14
            vmovss  dword ptr [rbp+0AB20h+var_AB60+14h], xmm13
            vmovss  dword ptr [rbp+0AB20h+var_AB60+20h], xmm7
            vmovss  dword ptr [rbp+0AB20h+var_AB60+24h], xmm8
            vmovss  dword ptr [rbp+0AB20h+var_AB60+28h], xmm1
            vmovss  dword ptr [rbp+0AB20h+var_AB60+2Ch], xmm0
            vmovss  dword ptr [rbp+0AB20h+var_AB60+38h], xmm1
            vmovss  dword ptr [rbp+0AB20h+var_AB60+3Ch], xmm0
            vmovss  dword ptr [rbp+0AB20h+var_AB20], xmm14
            vmovss  dword ptr [rbp+0AB20h+var_AB20+4], xmm13
            vmovss  dword ptr [rbp+0AB20h+var_AB20+10h], xmm14
            vmovss  dword ptr [rbp+0AB20h+var_AB20+14h], xmm13
            vmovss  dword ptr [rbp+0AB20h+var_AB20+18h], xmm7
            vmovss  dword ptr [rbp+0AB20h+var_AB20+1Ch], xmm8
          }
          *(_QWORD *)&v346[48] = __PAIR64__(mp_left_high, v197);
          v347.m256i_i64[1] = __PAIR64__(v330, mp_left_high);
          *(_QWORD *)&v348 = __PAIR64__(v197, v330);
          v202 = v197 + 100 * (mp_left_high + 100 * v330);
          v349 = v202;
          __asm
          {
            vmovss  dword ptr [rbp+0AB20h+var_AB00+8], xmm15
            vmovaps xmm3, xmm15
            vmovss  dword ptr [rbp+0AB20h+var_AB60+18h], xmm3
            vmovaps xmm2, xmm15
            vmovss  dword ptr [rbp+0AB20h+var_AB60+1Ch], xmm2
            vsubss  xmm9, xmm1, xmm7
            vsubss  xmm5, xmm0, xmm8
            vsubss  xmm10, xmm14, xmm7
            vsubss  xmm11, xmm13, xmm8
            vmulss  xmm1, xmm11, xmm9
            vmulss  xmm0, xmm10, xmm5
            vsubss  xmm1, xmm1, xmm0
            vmulss  xmm4, xmm1, cs:__real@40000000
            vucomiss xmm4, xmm15
          }
          if ( v202 )
          {
            __asm
            {
              vmulss  xmm1, xmm5, xmm5
              vmulss  xmm0, xmm9, xmm9
              vaddss  xmm6, xmm1, xmm0
              vmulss  xmm2, xmm11, xmm11
              vmulss  xmm1, xmm10, xmm10
              vaddss  xmm3, xmm2, xmm1
              vdivss  xmm4, xmm12, xmm4
              vmulss  xmm1, xmm6, xmm11
              vmulss  xmm0, xmm3, xmm5
              vsubss  xmm1, xmm1, xmm0
              vmulss  xmm5, xmm1, xmm4
              vmulss  xmm2, xmm3, xmm9
              vmulss  xmm0, xmm6, xmm10
              vsubss  xmm1, xmm2, xmm0
              vmulss  xmm4, xmm1, xmm4
              vmulss  xmm3, xmm4, xmm4
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm1, xmm3, xmm0
              vmovss  dword ptr [rbp+0AB20h+var_AB00+8], xmm1
              vaddss  xmm3, xmm7, xmm5
              vmovss  dword ptr [rbp+0AB20h+var_AB60+18h], xmm3
              vaddss  xmm2, xmm8, xmm4
              vmovss  dword ptr [rbp+0AB20h+var_AB60+1Ch], xmm2
            }
            BYTE12(v348) = 1;
          }
          v231 = outTriangles->m_size;
          _R14 = outTriangles;
          if ( v231 > 0 )
          {
            while ( 1 )
            {
              v233 = 116 * (v231 >> 1);
              v234 = __CFADD__(_R14, v233);
              v235 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)_R14 + v233) == NULL;
              _RAX = &_R14->m_data.m_buffer[v233];
              __asm
              {
                vmovss  xmm0, dword ptr [rax+18h]
                vucomiss xmm0, xmm3
              }
              if ( !v235 )
                break;
              __asm
              {
                vmovss  xmm0, dword ptr [rax+1Ch]
                vucomiss xmm0, xmm2
              }
              if ( !v235 )
              {
                __asm { vcomiss xmm2, xmm0 }
LABEL_302:
                v239 = !v234 && !v235;
                goto LABEL_303;
              }
              v239 = *((_DWORD *)_RAX + 28) < v202;
LABEL_303:
              if ( v239 )
              {
                _R14 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)(_RAX + 116);
                v231 += -1 - (v231 >> 1);
              }
              else
              {
                v231 >>= 1;
              }
              if ( v231 <= 0 )
              {
                v231 = outTriangles->m_size;
                goto LABEL_308;
              }
            }
            __asm { vcomiss xmm3, xmm0 }
            goto LABEL_302;
          }
LABEL_308:
          if ( _R14 == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * v231) )
          {
LABEL_311:
            if ( outTriangles->m_size == 96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
              __debugbreak();
            if ( (_R14 < outTriangles || _R14 > (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
              __debugbreak();
            v240 = ((unsigned __int64)((char *)_R14 - (char *)outTriangles) * (unsigned __int128)0x1A7B9611A7B9611Bui64) >> 64;
            if ( (char *)_R14 - (char *)outTriangles != 116 * ((v240 + ((unsigned __int64)((char *)_R14 - (char *)outTriangles - v240) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
              __debugbreak();
            if ( v346 >= (char *)_R14 && v346 < &outTriangles->m_data.m_buffer[116 * outTriangles->m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
              __debugbreak();
            _RDI = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)outTriangles + 116 * outTriangles->m_size);
            if ( _R14 != _RDI )
            {
              _RSI = &_RDI->m_data.m_buffer[116];
              if ( _R14 == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)&_RDI->m_data.m_buffer[116] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
                __debugbreak();
              if ( _RDI == (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
                __debugbreak();
              v243 = _RDI <= _R14;
              if ( _RDI < _R14 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                  __debugbreak();
                v243 = _RDI <= _R14;
              }
              if ( !v243 )
              {
                do
                {
                  _RDI = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)_RDI - 116);
                  _RSI -= 116;
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rdi]
                    vmovups ymmword ptr [rsi], ymm0
                    vmovups ymm1, ymmword ptr [rdi+20h]
                    vmovups ymmword ptr [rsi+20h], ymm1
                    vmovups ymm0, ymmword ptr [rdi+40h]
                    vmovups ymmword ptr [rsi+40h], ymm0
                    vmovups xmm1, xmmword ptr [rdi+60h]
                    vmovups xmmword ptr [rsi+60h], xmm1
                  }
                  *((_DWORD *)_RSI + 28) = *(_DWORD *)&_RDI->m_data.m_buffer[112];
                }
                while ( _RDI > _R14 );
              }
            }
            ++outTriangles->m_size;
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+0AB20h+var_AB60]
              vmovups ymmword ptr [r14], ymm0
              vmovups ymm1, ymmword ptr [rbp+0AB20h+var_AB60+20h]
              vmovups ymmword ptr [r14+20h], ymm1
              vmovups ymm0, [rbp+0AB20h+var_AB20]
              vmovups ymmword ptr [r14+40h], ymm0
              vmovups xmm1, [rbp+0AB20h+var_AB00]
              vmovups xmmword ptr [r14+60h], xmm1
            }
            *(_DWORD *)&_R14->m_data.m_buffer[112] = v202;
          }
          else if ( Triangle::operator<((Triangle *)v346, (const Triangle *)_R14) )
          {
            v202 = v349;
            goto LABEL_311;
          }
        }
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        _RBX = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(_RBX);
        if ( _RBX != &v353.m_endNodeBase )
          continue;
        break;
      }
      __asm { vmovss  xmm12, cs:__real@3f000000 }
      v19 = v352;
LABEL_344:
      v67 = v330 + 1;
      v330 = v67;
      __asm { vmovss  xmm13, [rsp+0AC20h+var_ABD4] }
      _RDI = coords;
      if ( v67 >= v333 )
      {
        __asm
        {
          vmovss  xmm8, [rsp+0AC20h+var_ABC8]
          vmovss  xmm7, dword ptr [rbp+0AB20h+pointA]
          vmovss  xmm6, dword ptr [rbp+0AB20h+pointC+4]
          vmovss  xmm9, dword ptr [rbp+0AB20h+pointC]
          vmovss  xmm10, dword ptr [rbp+0AB20h+pointB]
          vmovss  xmm11, cs:__real@3f800000
          vmovss  xmm14, [rsp+0AC20h+var_ABD0]
        }
        break;
      }
    }
  }
  v254 = 0i64;
  if ( v19 )
  {
    do
    {
      if ( v254 >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      ++v254;
    }
    while ( v254 < v19 );
    _R13 = outTriangles;
  }
  v255 = 0i64;
  v352 = 0i64;
  v256 = _R13->m_size;
  v257 = (ntl::fixed_vector_set<Triangle,96,ntl::less<Triangle,Triangle> > *)((char *)_R13 + 116 * v256);
  v258 = _R13 == v257;
  if ( _R13 != v257 )
  {
    _R14 = &_R13->m_data.m_buffer[56];
    do
    {
      _R13 = (unsigned __int64)(_R14 - 56);
      __asm
      {
        vmovss  xmm4, dword ptr [r13+0]
        vucomiss xmm4, xmm7
      }
      if ( v258 )
      {
        __asm { vucomiss xmm8, dword ptr [r14-34h] }
        if ( v258 )
          goto LABEL_372;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14-30h]
        vucomiss xmm0, xmm7
      }
      if ( v258 )
      {
        __asm { vucomiss xmm8, dword ptr [r14-2Ch] }
        if ( v258 )
          goto LABEL_372;
      }
      __asm
      {
        vmovss  xmm1, dword ptr [r14-28h]
        vucomiss xmm1, xmm7
      }
      if ( v258 )
      {
        __asm { vucomiss xmm8, dword ptr [r14-24h] }
        if ( v258 )
          goto LABEL_372;
      }
      __asm { vucomiss xmm4, xmm10 }
      if ( v258 )
      {
        __asm { vucomiss xmm8, dword ptr [r14-34h] }
        if ( v258 )
          goto LABEL_372;
      }
      __asm { vucomiss xmm0, xmm10 }
      if ( v258 )
      {
        __asm { vucomiss xmm8, dword ptr [r14-2Ch] }
        if ( v258 )
          goto LABEL_372;
      }
      __asm { vucomiss xmm1, xmm10 }
      if ( v258 )
      {
        __asm { vucomiss xmm8, dword ptr [r14-24h] }
        if ( v258 )
          goto LABEL_372;
      }
      __asm { vucomiss xmm4, xmm9 }
      if ( v258 )
      {
        __asm { vucomiss xmm6, dword ptr [r14-34h] }
        if ( v258 )
          goto LABEL_372;
      }
      __asm { vucomiss xmm0, xmm9 }
      if ( v258 )
      {
        __asm { vucomiss xmm6, dword ptr [r14-2Ch] }
        if ( v258 )
          goto LABEL_372;
      }
      __asm { vucomiss xmm1, xmm9 }
      if ( !v258 )
        goto LABEL_409;
      __asm { vucomiss xmm6, dword ptr [r14-24h] }
      if ( v258 )
      {
LABEL_372:
        _RSI = &v350;
        v265 = (__int64)(116 * v255) / 116;
        if ( v265 > 0 )
        {
          do
          {
            if ( Triangle::operator<((Triangle *)((char *)_RSI + 116 * (v265 >> 1)), (const Triangle *)(_R14 - 56)) )
            {
              _RSI = (Triangle *)((char *)_RSI + 116 * (v265 >> 1) + 116);
              v265 += -1 - (v265 >> 1);
            }
            else
            {
              v265 >>= 1;
            }
          }
          while ( v265 > 0 );
          v255 = v352;
        }
        if ( _RSI == (Triangle *)((char *)&v350 + 116 * v255) || (v266 = Triangle::operator<((Triangle *)(_R14 - 56), _RSI), v255 = v352, v266) )
        {
          if ( v255 == 96 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
            __debugbreak();
          if ( (_RSI < &v350 || _RSI > (Triangle *)((char *)&v350 + 116 * v255)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
            __debugbreak();
          if ( (char *)_RSI - (char *)&v350 != 116 * (((char *)_RSI - (char *)&v350) / 0x74ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
            __debugbreak();
          if ( _R13 >= (unsigned __int64)_RSI && _R13 < (unsigned __int64)&v350 + 116 * v255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
            __debugbreak();
          v267 = 116 * v255;
          _RBX = (char *)&v350 + 116 * v255;
          if ( _RSI != (Triangle *)_RBX )
          {
            _RDI = &v351[v267];
            if ( _RSI == (Triangle *)&v351[v267] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( _RBX == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v270 = _RBX <= (char *)_RSI;
            if ( _RBX < (char *)_RSI )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v270 = _RBX <= (char *)_RSI;
            }
            if ( !v270 )
            {
              do
              {
                _RBX -= 116;
                _RDI -= 116;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbx]
                  vmovups ymmword ptr [rdi], ymm0
                  vmovups ymm1, ymmword ptr [rbx+20h]
                  vmovups ymmword ptr [rdi+20h], ymm1
                  vmovups ymm0, ymmword ptr [rbx+40h]
                  vmovups ymmword ptr [rdi+40h], ymm0
                  vmovups xmm1, xmmword ptr [rbx+60h]
                  vmovups xmmword ptr [rdi+60h], xmm1
                }
                *((_DWORD *)_RDI + 28) = *((_DWORD *)_RBX + 28);
              }
              while ( _RBX > (char *)_RSI );
              v255 = v352;
            }
          }
          v352 = v255 + 1;
          __asm
          {
            vmovups ymm0, ymmword ptr [r13+0]
            vmovups ymmword ptr [rsi], ymm0
            vmovups ymm1, ymmword ptr [r13+20h]
            vmovups ymmword ptr [rsi+20h], ymm1
            vmovups ymm0, ymmword ptr [r13+40h]
            vmovups ymmword ptr [rsi+40h], ymm0
            vmovups xmm1, xmmword ptr [r13+60h]
            vmovups xmmword ptr [rsi+60h], xmm1
          }
          _RSI[2].m_vert[2].v[2] = *(float *)(_R13 + 112);
          v255 = v352;
        }
      }
      else
      {
LABEL_409:
        __asm
        {
          vdivss  xmm3, xmm11, xmm14
          vdivss  xmm2, xmm11, xmm13
          vmulss  xmm0, xmm2, xmm4
          vmovss  dword ptr [r13+0], xmm0
          vmulss  xmm1, xmm3, dword ptr [r14-34h]
          vmovss  dword ptr [r14-34h], xmm1
          vmulss  xmm0, xmm2, dword ptr [r14-18h]
          vmovss  dword ptr [r14-18h], xmm0
          vmulss  xmm1, xmm3, dword ptr [r14-14h]
          vmovss  dword ptr [r14-14h], xmm1
          vmulss  xmm0, xmm2, dword ptr [r14-10h]
          vmovss  dword ptr [r14-10h], xmm0
          vmulss  xmm0, xmm3, dword ptr [r14-0Ch]
          vmovss  dword ptr [r14-0Ch], xmm0
          vmulss  xmm1, xmm2, dword ptr [r14-30h]
          vmovss  dword ptr [r14-30h], xmm1
          vmulss  xmm0, xmm3, dword ptr [r14-2Ch]
          vmovss  dword ptr [r14-2Ch], xmm0
          vmulss  xmm1, xmm2, dword ptr [r14]
          vmovss  dword ptr [r14], xmm1
          vmulss  xmm0, xmm3, dword ptr [r14+4]
          vmovss  dword ptr [r14+4], xmm0
          vmulss  xmm1, xmm2, dword ptr [r14+8]
          vmovss  dword ptr [r14+8], xmm1
          vmulss  xmm0, xmm3, dword ptr [r14+0Ch]
          vmovss  dword ptr [r14+0Ch], xmm0
          vmulss  xmm1, xmm2, dword ptr [r14-28h]
          vmovss  dword ptr [r14-28h], xmm1
          vmulss  xmm0, xmm3, dword ptr [r14-24h]
          vmovss  dword ptr [r14-24h], xmm0
          vmulss  xmm1, xmm2, dword ptr [r14+18h]
          vmovss  dword ptr [r14+18h], xmm1
          vmulss  xmm0, xmm3, dword ptr [r14+1Ch]
          vmovss  dword ptr [r14+1Ch], xmm0
          vmulss  xmm1, xmm2, dword ptr [r14+20h]
          vmovss  dword ptr [r14+20h], xmm1
          vmulss  xmm0, xmm3, dword ptr [r14+24h]
          vmovss  dword ptr [r14+24h], xmm0
        }
      }
      _R14 += 116;
      _R13 = outTriangles;
      v256 = outTriangles->m_size;
      v299 = &outTriangles->m_data.m_buffer[116 * v256];
      v258 = _R14 - 56 == v299;
    }
    while ( _R14 - 56 != v299 );
  }
  for ( i = &v350; i != (Triangle *)((char *)&v350 + 116 * v255); i = (Triangle *)((char *)i + 116) )
  {
    v301 = (const Triangle *)_R13;
    if ( v256 > 0 )
    {
      do
      {
        if ( Triangle::operator<((Triangle *)((char *)v301 + 116 * (v256 >> 1)), i) )
        {
          v301 = (const Triangle *)((char *)v301 + 116 * (v256 >> 1) + 116);
          v256 += -1 - (v256 >> 1);
        }
        else
        {
          v256 >>= 1;
        }
      }
      while ( v256 > 0 );
      v256 = _R13->m_size;
      v255 = v352;
    }
    if ( v301 != (const Triangle *)((char *)_R13 + 116 * v256) )
    {
      v302 = Triangle::operator<(i, v301);
      v255 = v352;
      if ( v302 )
        v301 = (const Triangle *)((char *)_R13 + 116 * _R13->m_size);
    }
    v256 = _R13->m_size;
    if ( v301 != (const Triangle *)((char *)_R13 + 116 * v256) )
    {
      if ( !v256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v301 < (const Triangle *)_R13 || v301 > (const Triangle *)((char *)_R13 + 116 * _R13->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v303 = ((unsigned __int64)((char *)v301 - (char *)_R13) * (unsigned __int128)0x1A7B9611A7B9611Bui64) >> 64;
      if ( (char *)v301 - (char *)_R13 != 116 * ((v303 + ((unsigned __int64)((char *)v301 - (char *)_R13 - v303) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v301 == (const Triangle *)((char *)_R13 + 116 * _R13->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      iter = ntl::vector<Triangle,ntl::contiguous_fixed_allocator<Triangle,96,0>>::make_iter(_R13, v301);
      v305 = (Triangle *)((char *)_R13 + 116 * _R13->m_size);
      _RBX = &iter[2].m_area;
      if ( (Triangle *)&iter[2].m_area == iter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v305 == iter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v307 = _RBX < (float *)v305;
      if ( _RBX > (float *)v305 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v307 = _RBX < (float *)v305;
      }
      if ( v307 )
      {
        _RCX = iter;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rcx], ymm0
            vmovups ymm1, ymmword ptr [rbx+20h]
            vmovups ymmword ptr [rcx+20h], ymm1
            vmovups ymm0, ymmword ptr [rbx+40h]
            vmovups ymmword ptr [rcx+40h], ymm0
            vmovups xmm1, xmmword ptr [rbx+60h]
            vmovups xmmword ptr [rcx+60h], xmm1
          }
          _RCX[2].m_vert[2].v[2] = _RBX[28];
          _RBX += 29;
          _RCX = (Triangle *)((char *)_RCX + 116);
        }
        while ( _RBX < (float *)v305 );
      }
      v256 = --_R13->m_size;
    }
  }
  Profile_EndInternal(NULL);
  ntl::set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge>>::~set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge>>((ntl::set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge> > *)&v354);
  ntl::set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge>>::~set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge>>((ntl::set<Edge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<Edge>,288,8>,ntl::less<Edge,Edge> > *)&v353);
  if ( v255 )
  {
    for ( j = 0i64; j < v255; ++j )
    {
      if ( j >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
  }
  _R11 = &v365;
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

