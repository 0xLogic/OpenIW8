/*
==============
CG_DrawDebug_DrawBlendSpaces
==============
*/

void __fastcall CG_DrawDebug_DrawBlendSpaces(LocalClientNum_t localClientNum, int handle, float startX, float startY, bool showCoverage)
{
  ?CG_DrawDebug_DrawBlendSpaces@@YAXW4LocalClientNum_t@@HMM_N@Z(localClientNum, handle, startX, startY, showCoverage);
}

/*
==============
CG_DrawDebug_DrawVMBlendSpaces
==============
*/

void __fastcall CG_DrawDebug_DrawVMBlendSpaces(LocalClientNum_t localClientNum, float startX, float startY, bool showCoverage)
{
  ?CG_DrawDebug_DrawVMBlendSpaces@@YAXW4LocalClientNum_t@@MM_N@Z(localClientNum, startX, startY, showCoverage);
}

/*
==============
CG_DrawDebug_DrawBlendSpaces
==============
*/

void __fastcall CG_DrawDebug_DrawBlendSpaces(LocalClientNum_t localClientNum, int handle, double startX, double startY, bool showCoverage)
{
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  const XAnimTree **v14; 
  CgEntitySystem *v15; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v17; 
  const XAnimTree *v18; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  float fmt; 
  __int64 overlayY; 
  float overlayYa; 
  __int64 v28; 
  unsigned int outCell; 
  __int64 v30; 
  ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > animSet; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  v30 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  v10 = handle;
  v11 = localClientNum;
  if ( (unsigned int)handle > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", handle) )
    __debugbreak();
  if ( (unsigned int)v11 >= 2 )
  {
    LODWORD(v28) = 2;
    LODWORD(overlayY) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", overlayY, v28) )
      __debugbreak();
  }
  v12 = v10 + 2533 * v11;
  if ( v12 >= 0x13CA )
  {
    LODWORD(v28) = v10 + 2533 * v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v28) )
      __debugbreak();
  }
  v13 = clientObjMap[v12];
  if ( v13 )
  {
    if ( v13 >= (unsigned int)s_objCount )
    {
      LODWORD(v28) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v28) )
        __debugbreak();
    }
    v14 = (const XAnimTree **)s_objBuf[v13];
    if ( v14 )
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v28) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v28) )
          __debugbreak();
      }
      if ( (unsigned int)v11 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v28) = CgEntitySystem::ms_allocatedCount;
        LODWORD(overlayY) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", overlayY, v28) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v11] )
      {
        LODWORD(v28) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v28) )
          __debugbreak();
      }
      v15 = CgEntitySystem::ms_entitySystemArray[v11];
      if ( (unsigned int)v10 >= 0x800 )
      {
        LODWORD(v28) = 2048;
        LODWORD(overlayY) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", overlayY, v28) )
          __debugbreak();
      }
      if ( (v15->m_entities[v10].flags & 1) != 0 )
      {
        p_m_freelist = &animSet.m_freelist;
        v17 = &animSet.m_data.m_buffer[120];
        do
        {
          *(_QWORD *)v17 = p_m_freelist;
          p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v17;
          v17 -= 40;
        }
        while ( v17 + 40 > (char *)&animSet );
        animSet.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
        if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        animSet.m_size = 0i64;
        animSet.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
        animSet.m_endNodeBase.mp_parent = NULL;
        animSet.m_endNodeBase.mp_left = &animSet.m_endNodeBase;
        animSet.m_endNodeBase.mp_right = &animSet.m_endNodeBase;
        v18 = *v14;
        if ( *v14 )
        {
          if ( v18->children )
          {
            outCell = 0;
            __asm
            {
              vaddss  xmm0, xmm6, cs:__real@43160000
              vmovss  [rsp+178h+overlayY], xmm0
              vmovss  dword ptr [rsp+178h+fmt], xmm7
            }
            CG_DrawDebug_DrawBlendSpaces_r((const LocalClientNum_t)v11, v18, v18->children, &animSet, fmt, overlayYa, showCoverage, &outCell);
            if ( animSet.m_size )
            {
              mp_parent = animSet.m_endNodeBase.mp_parent;
              if ( animSet.m_endNodeBase.mp_parent )
              {
                do
                {
                  ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::erase_tree(&animSet, (ntl::red_black_tree_node<unsigned int> *)mp_parent->mp_right);
                  mp_left = mp_parent->mp_left;
                  *(_QWORD *)&mp_parent->m_color = animSet.m_freelist.m_head.mp_next;
                  animSet.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
                  mp_parent = mp_left;
                }
                while ( mp_left );
              }
            }
          }
        }
      }
    }
  }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_DrawDebug_DrawBlendSpaces_r
==============
*/
void CG_DrawDebug_DrawBlendSpaces_r(const LocalClientNum_t localClientNum, const XAnimTree *tree, const unsigned __int16 infoIndex, ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > *animSet, float overlayX, float overlayY, bool showCoverage, unsigned int *outCell)
{
  unsigned int *v18; 
  ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > *mp_node; 
  const XAnimTree *v20; 
  GfxFont *v22; 
  const XAnim_s *SubTreeAnims; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  scr_string_t v25; 
  unsigned int fontName_high; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  __int64 v29; 
  bool v30; 
  void *CustomNodeData; 
  signed int v42; 
  unsigned int v43; 
  const char *v46; 
  const ScreenPlacement *v48; 
  unsigned int v102; 
  const char *v103; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  scr_string_t v121; 
  unsigned int v122; 
  const char *AnimDebugName; 
  const ScreenPlacement *ActivePlacement; 
  bool v188; 
  bool v189; 
  unsigned int v201; 
  unsigned int *v202; 
  unsigned int ChildAt; 
  const char *v215; 
  scr_string_t v227; 
  const char *v228; 
  unsigned int v229; 
  __int64 v230; 
  unsigned int *v231; 
  unsigned int v240; 
  bool v289; 
  ntl::red_black_tree_node_base *v290; 
  unsigned int v291; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v294; 
  unsigned __int16 ttfCount; 
  LocalClientNum_t v297; 
  unsigned __int8 *v298; 
  __int64 v299; 
  unsigned __int16 v301; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  char *fmtn; 
  float fmto; 
  char *fmtp; 
  float fmtq; 
  char *fmtr; 
  float fmts; 
  char *fmtt; 
  float fmtu; 
  float fmtv; 
  float fmtw; 
  float fmtx; 
  float fmty; 
  char *fmtz; 
  float fmtba; 
  float fmtbb; 
  float fmtbc; 
  float fmtbd; 
  float fmtbe; 
  char *fmtbf; 
  float fmtbg; 
  float fmtbh; 
  __int64 y; 
  float yb; 
  float yc; 
  float yd; 
  float ye; 
  float yf; 
  float yg; 
  float yh; 
  float yi; 
  float yj; 
  float yk; 
  float yl; 
  float ym; 
  float yn; 
  float yo; 
  float yp; 
  float yq; 
  __int64 ya; 
  float yr; 
  float ys; 
  float yt; 
  float yu; 
  float yv; 
  float yw; 
  float yx; 
  float yy; 
  float yz; 
  __int64 horzAlign; 
  double horzAlignb; 
  double horzAlignc; 
  __int64 horzAligna; 
  double vertAlign; 
  float scale; 
  float scalea; 
  float scaleb; 
  float scalec; 
  float scaled; 
  float scalee; 
  float scalef; 
  float scaleg; 
  float scaleh; 
  float scalei; 
  float scalej; 
  float scalek; 
  float scalel; 
  float scalem; 
  unsigned int r_element; 
  unsigned int v394; 
  unsigned int size; 
  const XAnimFieldArray<float> *v396; 
  GfxFont *FontHandle; 
  GfxFont *font; 
  LocalClientNum_t localClientNuma; 
  ntl::red_black_tree_node_base *v400; 
  unsigned int *v401; 
  const XAnimTree *v402; 
  __int64 v403; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<unsigned int>,unsigned int *,unsigned int &> result; 
  vec2_t p1; 
  vec2_t p2; 
  vec2_t p0; 
  vec4_t v408; 
  char dest[6144]; 

  v18 = outCell;
  mp_node = animSet;
  result.mp_node = (ntl::red_black_tree_node<unsigned int> *)animSet;
  v20 = tree;
  v402 = tree;
  localClientNuma = localClientNum;
  v188 = *outCell < 4;
  v401 = outCell;
  if ( v188 && infoIndex )
  {
    font = (GfxFont *)XAnimGetAnimInfo(infoIndex);
    v22 = font;
    if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 72, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
      __debugbreak();
    SubTreeAnims = XAnimGetSubTreeAnims(v20, (const XAnimSubTreeID)LOWORD(font->ttfDefs[0]));
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 75, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    __asm
    {
      vmovaps [rsp+19D0h+var_50], xmm6
      vmovaps [rsp+19D0h+var_60], xmm7
      vmovaps [rsp+19D0h+var_70], xmm8
      vmovaps [rsp+19D0h+var_80], xmm9
      vmovaps [rsp+19D0h+var_90], xmm10
      vmovaps [rsp+19D0h+var_A0], xmm11
      vmovaps [rsp+19D0h+var_B0], xmm12
      vmovaps [rsp+19D0h+var_C0], xmm13
      vmovaps [rsp+19D0h+var_D0], xmm14
      vmovaps [rsp+19D0h+var_E0], xmm15
    }
    if ( !XAnimIsCustomNode(SubTreeAnims, (const XAnimInfo *)font) )
      goto LABEL_114;
    CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, (const XAnimInfo *)font);
    if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 80, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
      __debugbreak();
    v25 = *CustomNodeTypeInfo->name;
    if ( v25 != scr_const.xanimBlendSpace1D && v25 != scr_const.xanimBlendSpace2D )
      goto LABEL_114;
    fontName_high = HIWORD(font->fontName);
    p_m_endNodeBase = &mp_node->m_endNodeBase;
    v189 = v25 == scr_const.xanimBlendSpace2D;
    v400 = &mp_node->m_endNodeBase;
    mp_parent = mp_node->m_endNodeBase.mp_parent;
    v29 = (__int64)&mp_node->m_endNodeBase;
    v30 = v189;
    while ( mp_parent )
    {
      if ( mp_parent[1].m_color < fontName_high )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        v29 = (__int64)mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    if ( (ntl::red_black_tree_node_base *)v29 != p_m_endNodeBase && fontName_high < *(_DWORD *)(v29 + 32) )
      v29 = (__int64)&mp_node->m_endNodeBase;
    v403 = v29;
    if ( (ntl::red_black_tree_node_base *)v29 != p_m_endNodeBase )
      goto LABEL_129;
    CustomNodeData = XAnimGetCustomNodeData(SubTreeAnims, (XAnimInfo *)font, fontName_high);
    v403 = (__int64)CustomNodeData;
    _R13 = (__int64)CustomNodeData;
    if ( v30 )
    {
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 203, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( !*(_BYTE *)(_R13 + 52) )
        goto LABEL_129;
      __asm
      {
        vmovss  xmm0, [rbp+18D0h+arg_28]
        vmovaps xmm9, xmm0
      }
      if ( *v401 >= 2 )
        __asm { vaddss  xmm9, xmm0, cs:__real@42f00000 }
      __asm
      {
        vmovss  xmm8, cs:__real@439b0000
        vmovss  xmm10, cs:__real@41200000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm0, xmm1, xmm10
        vaddss  xmm12, xmm0, [rbp+18D0h+arg_20]
      }
      FloatFieldArray = XAnimNode_GetFloatFieldArray((scr_string_t)*(_DWORD *)(_R13 + 24));
      if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 213, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
        __debugbreak();
      v121 = *(_DWORD *)(_R13 + 48);
      v122 = 0;
      p2 = 0i64;
      LODWORD(v396) = v121;
      if ( v121 )
        p2 = (vec2_t)XAnimNode_GetUIntFieldArray(v121);
      __asm
      {
        vmovss  xmm7, dword ptr [r13+2Ch]
        vmovss  xmm6, dword ptr [r13+28h]
        vcvtss2sd xmm7, xmm7, xmm7
        vcvtss2sd xmm6, xmm6, xmm6
      }
      AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, HIWORD(font->fontName));
      __asm
      {
        vmovsd  qword ptr [rsp+19D0h+vertAlign], xmm7
        vmovsd  qword ptr [rsp+19D0h+horzAlign], xmm6
      }
      Com_sprintf(dest, 0x1800ui64, "B2D '%s%s%s':  x:(%f), y(%f)\n", "^1", AnimDebugName, "^7", horzAlignc, vertAlign);
      __asm { vmovss  xmm2, cs:__real@3e4ccccd; scale }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      __asm
      {
        vmovss  xmm0, cs:__real@3e23d70a
        vsubss  xmm1, xmm9, cs:__real@42dc0000
        vmovss  [rsp+19D0h+scale], xmm0
        vmovss  [rsp+19D0h+y], xmm1
      }
      FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rsp+19D0h+fmt], xmm12 }
      UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmti, yi, 1, 1, scalef, &colorWhite, 3);
      __asm
      {
        vmovss  xmm0, dword ptr [r13+4]
        vaddss  xmm13, xmm9, xmm10
        vmovss  xmm9, dword ptr [r13+0]
        vmovss  xmm10, dword ptr [r13+8]
        vsubss  xmm1, xmm0, xmm9
        vmovss  xmm0, dword ptr [r13+0Ch]
        vdivss  xmm14, xmm8, xmm1
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm8, cs:__real@40400000
        vsubss  xmm7, xmm0, xmm10
        vmovss  xmm0, cs:__real@c2dc0000
        vdivss  xmm15, xmm0, xmm7
        vmulss  xmm0, xmm1, xmm14
        vaddss  xmm11, xmm0, xmm12
        vmovaps xmm3, xmm11; p2x
        vmovss  [rsp+19D0h+y], xmm8
        vmovaps xmm2, xmm13; p1y
        vmovaps xmm1, xmm12; p1x
        vmovss  [rsp+19D0h+var_1968], xmm9
        vmovss  [rsp+19D0h+r_element], xmm10
        vmovss  dword ptr [rbp+18D0h+p1], xmm11
        vmovss  dword ptr [rsp+19D0h+fmt], xmm13
      }
      CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, yj, 1, 1, &colorWhite, cgMedia.whiteMaterial);
      __asm
      {
        vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmulss  xmm0, xmm7, xmm15
        vaddss  xmm6, xmm0, xmm13
        vmovss  [rsp+19D0h+y], xmm8
        vmovss  dword ptr [rsp+19D0h+fmt], xmm6
        vmovss  [rsp+19D0h+var_196C], xmm6
        vmovaps xmm3, xmm11; p2x
        vmovaps xmm2, xmm6; p1y
        vmovaps xmm1, xmm12; p1x
      }
      CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, yk, 1, 1, &colorWhite, cgMedia.whiteMaterial);
      __asm
      {
        vmovss  [rsp+19D0h+y], xmm8
        vmovaps xmm3, xmm12; p2x
        vmovaps xmm2, xmm13; p1y
        vmovaps xmm1, xmm12; p1x
        vmovss  dword ptr [rsp+19D0h+fmt], xmm6
      }
      CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, yl, 1, 1, &colorWhite, cgMedia.whiteMaterial);
      __asm
      {
        vmovss  [rsp+19D0h+y], xmm8
        vmovaps xmm3, xmm11; p2x
        vmovaps xmm2, xmm13; p1y
        vmovaps xmm1, xmm11; p1x
        vmovss  dword ptr [rsp+19D0h+fmt], xmm6
      }
      CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, ym, 1, 1, &colorWhite, cgMedia.whiteMaterial);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0]
        vmovss  xmm0, dword ptr [r13+8]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+19D0h+fmt], xmm0
      }
      Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", *(double *)&_XMM3, *(double *)&fmtn);
      __asm
      {
        vmovss  xmm11, cs:__real@3de147ae
        vaddss  xmm6, xmm13, cs:__real@40a00000
        vsubss  xmm8, xmm12, cs:__real@41700000
        vmovss  [rsp+19D0h+scale], xmm11
        vmovss  [rsp+19D0h+y], xmm6
        vmovss  dword ptr [rsp+19D0h+fmt], xmm8
      }
      UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmto, yn, 1, 1, scaleg, &colorYellow, 3);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+4]
        vmovss  xmm0, dword ptr [r13+8]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+19D0h+fmt], xmm0
      }
      Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", *(double *)&_XMM3, *(double *)&fmtp);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+18D0h+p1]
        vsubss  xmm7, xmm0, cs:__real@41700000
        vmovss  [rsp+19D0h+scale], xmm11
        vmovss  [rsp+19D0h+y], xmm6
        vmovss  dword ptr [rsp+19D0h+fmt], xmm7
      }
      UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmtq, yo, 1, 1, scaleh, &colorYellow, 3);
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0Ch]
        vmovss  xmm3, dword ptr [r13+0]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+19D0h+fmt], xmm0
      }
      Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", *(double *)&_XMM3, *(double *)&fmtr);
      __asm
      {
        vmovss  xmm0, [rsp+19D0h+var_196C]
        vsubss  xmm6, xmm0, cs:__real@40000000
        vmovss  [rsp+19D0h+scale], xmm11
        vmovss  [rsp+19D0h+y], xmm6
        vmovss  dword ptr [rsp+19D0h+fmt], xmm8
      }
      UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmts, yp, 1, 1, scalei, &colorYellow, 3);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+4]
        vmovss  xmm0, dword ptr [r13+0Ch]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+19D0h+fmt], xmm0
      }
      Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", *(double *)&_XMM3, *(double *)&fmtt);
      __asm
      {
        vmovss  [rsp+19D0h+scale], xmm11
        vmovss  [rsp+19D0h+y], xmm6
        vmovss  dword ptr [rsp+19D0h+fmt], xmm7
      }
      UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmtu, yq, 1, 1, scalej, &colorYellow, 3);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmulss  xmm1, xmm10, xmm15
        vxorps  xmm8, xmm8, xmm8
        vcomiss xmm1, xmm8
        vmulss  xmm0, xmm9, xmm14
        vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000
      }
      if ( !v188 )
      {
        __asm { vcomiss xmm1, cs:__real@42dc0000 }
        if ( v188 || v189 )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rbp+18D0h+p1]; p2x
            vsubss  xmm2, xmm13, xmm1; p1y
            vmovss  [rsp+19D0h+y], xmm6
            vmovaps xmm1, xmm12; p1x
            vmovss  dword ptr [rsp+19D0h+fmt], xmm2
          }
          CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtv, yr, 1, 1, &colorBlue, cgMedia.whiteMaterial);
        }
      }
      __asm { vcomiss xmm7, xmm8 }
      if ( !v188 )
      {
        __asm { vcomiss xmm7, cs:__real@439b0000 }
        if ( v188 || v189 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+19D0h+var_196C]
            vaddss  xmm1, xmm7, xmm12; p1x
            vmovss  [rsp+19D0h+y], xmm6
            vmovaps xmm3, xmm1; p2x
            vmovaps xmm2, xmm13; p1y
            vmovss  dword ptr [rsp+19D0h+fmt], xmm0
          }
          CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtw, ys, 1, 1, &colorBlue, cgMedia.whiteMaterial);
        }
      }
      v201 = 0;
      v394 = FloatFieldArray->size >> 1;
      if ( v394 )
      {
        v202 = (unsigned int *)(*(_QWORD *)&p2 + 4i64);
        do
        {
          *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v201);
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v201);
          __asm
          {
            vsubss  xmm2, xmm0, xmm10
            vmulss  xmm11, xmm2, xmm15
            vmovaps xmm7, xmm0
            vsubss  xmm1, xmm6, xmm9
            vaddss  xmm0, xmm11, xmm13
            vsubss  xmm2, xmm0, cs:__real@40000000; y
            vmovss  xmm0, cs:__real@40800000
            vmulss  xmm8, xmm1, xmm14
            vaddss  xmm1, xmm8, xmm12
            vsubss  xmm1, xmm1, cs:__real@40000000; x
            vmovaps xmm3, xmm0; width
            vmovss  dword ptr [rsp+19D0h+fmt], xmm0
          }
          CG_Draw2DRect(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtx, 1, 1, &colorRed, cgMedia.whiteMaterial);
          if ( (_DWORD)v396 )
            ChildAt = *v202;
          else
            ChildAt = XAnimGetChildAt(SubTreeAnims, HIWORD(font->fontName), v201);
          if ( ChildAt )
          {
            v215 = XAnimGetAnimDebugName(SubTreeAnims, ChildAt);
            Com_sprintf(dest, 0x1800ui64, "%s\n", v215);
            __asm
            {
              vaddss  xmm0, xmm12, cs:__real@40400000
              vmovss  xmm2, cs:__real@3de147ae
              vmovss  [rsp+19D0h+scale], xmm2
              vaddss  xmm1, xmm0, xmm8
              vaddss  xmm0, xmm11, xmm13
              vmovss  [rsp+19D0h+y], xmm0
              vmovss  dword ptr [rsp+19D0h+fmt], xmm1
            }
            UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmty, yt, 1, 1, scalek, &colorGreen, 3);
            __asm
            {
              vcvtss2sd xmm3, xmm6, xmm6
              vcvtss2sd xmm0, xmm7, xmm7
              vmovq   r9, xmm3
              vmovsd  [rsp+19D0h+fmt], xmm0
            }
            Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", *(double *)&_XMM3, *(double *)&fmtz);
            __asm
            {
              vaddss  xmm0, xmm13, cs:__real@40c00000
              vaddss  xmm1, xmm0, xmm11
              vmovss  xmm0, cs:__real@3de147ae
              vmovss  [rsp+19D0h+scale], xmm0
              vaddss  xmm2, xmm8, xmm12
              vsubss  xmm2, xmm2, cs:__real@41700000
              vmovss  [rsp+19D0h+y], xmm1
              vmovss  dword ptr [rsp+19D0h+fmt], xmm2
            }
            UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmtba, yu, 1, 1, scalel, &colorWhite, 3);
          }
          ++v201;
          ++v202;
        }
        while ( v201 < v394 );
        p_m_endNodeBase = v400;
        v122 = 0;
        _R13 = v403;
      }
      v227 = *(_DWORD *)(_R13 + 28);
      if ( v227 )
      {
        v228 = SL_ConvertToString(v227);
        if ( !v228 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 322, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
          __debugbreak();
        if ( *(_DWORD *)v228 / 3u )
        {
          v229 = *(_DWORD *)v228 / 3u;
          do
          {
            v230 = 3 * v122;
            if ( (unsigned int)v230 >= *(_DWORD *)v228 )
            {
              LODWORD(horzAligna) = *(_DWORD *)v228;
              LODWORD(ya) = 3 * v122;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", ya, horzAligna) )
                __debugbreak();
            }
            v231 = (unsigned int *)&v228[4 * v230 + 4];
            if ( !v231 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 328, ASSERT_TYPE_ASSERT, "(coordIndexes)", (const char *)&queryFormat, "coordIndexes") )
              __debugbreak();
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, *v231);
            __asm
            {
              vsubss  xmm1, xmm0, xmm9
              vmulss  xmm6, xmm1, xmm14
            }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, *v231);
            __asm
            {
              vsubss  xmm1, xmm0, xmm10
              vmulss  xmm7, xmm1, xmm15
            }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v231[1]);
            __asm
            {
              vsubss  xmm1, xmm0, xmm9
              vmulss  xmm11, xmm1, xmm14
            }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v231[1]);
            __asm
            {
              vsubss  xmm1, xmm0, xmm10
              vmulss  xmm8, xmm1, xmm15
            }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v231[2]);
            v240 = v231[2];
            __asm
            {
              vsubss  xmm1, xmm0, xmm9
              vmulss  xmm9, xmm1, xmm14
              vmovss  [rsp+19D0h+var_196C], xmm9
            }
            *(double *)&_XMM0 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v240);
            __asm
            {
              vsubss  xmm1, xmm0, xmm10
              vmulss  xmm2, xmm1, xmm15
              vmovss  dword ptr [rsp+19D0h+var_1960], xmm2
            }
            if ( showCoverage )
            {
              __asm
              {
                vaddss  xmm0, xmm6, xmm12
                vmovss  dword ptr [rbp+18D0h+p0], xmm0
                vaddss  xmm0, xmm11, xmm12
                vaddss  xmm1, xmm7, xmm13
                vmovss  dword ptr [rbp+18D0h+p1], xmm0
                vmovss  dword ptr [rbp+18D0h+p0+4], xmm1
                vaddss  xmm0, xmm9, xmm12
                vaddss  xmm1, xmm8, xmm13
                vmovss  dword ptr [rbp+18D0h+p2], xmm0
                vmovups xmm0, cs:__xmm@3e8000003f8000003f8000003f800000
                vmovss  dword ptr [rbp+18D0h+p1+4], xmm1
                vaddss  xmm1, xmm2, xmm13
                vmovups xmmword ptr [rbp+18D0h+var_1900], xmm0
                vmovss  dword ptr [rbp+18D0h+p2+4], xmm1
              }
              CG_Draw2DTri(ActivePlacement, &p0, &p1, &p2, 1, 1, &v408, cgMedia.whiteMaterial);
            }
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vaddss  xmm9, xmm11, xmm12
              vmovss  [rsp+19D0h+y], xmm0
              vaddss  xmm10, xmm7, xmm13
              vaddss  xmm11, xmm6, xmm12
              vaddss  xmm8, xmm8, xmm13
              vmovaps xmm3, xmm9; p2x
              vmovaps xmm2, xmm10; p1y
              vmovaps xmm1, xmm11; p1x
              vmovss  dword ptr [rsp+19D0h+fmt], xmm8
            }
            CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbb, yv, 1, 1, &colorLtOrange, cgMedia.whiteMaterial);
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vaddss  xmm7, xmm12, [rsp+19D0h+var_196C]
              vaddss  xmm6, xmm13, dword ptr [rsp+19D0h+var_1960]
              vmovss  [rsp+19D0h+y], xmm0
              vmovaps xmm3, xmm7; p2x
              vmovaps xmm2, xmm8; p1y
              vmovaps xmm1, xmm9; p1x
              vmovss  dword ptr [rsp+19D0h+fmt], xmm6
            }
            CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbc, yw, 1, 1, &colorLtOrange, cgMedia.whiteMaterial);
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vmovss  [rsp+19D0h+y], xmm0
              vmovaps xmm3, xmm11; p2x
              vmovaps xmm2, xmm6; p1y
              vmovaps xmm1, xmm7; p1x
              vmovss  dword ptr [rsp+19D0h+fmt], xmm10
            }
            CG_Draw2DLine(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbd, yx, 1, 1, &colorLtOrange, cgMedia.whiteMaterial);
            __asm
            {
              vmovss  xmm9, [rsp+19D0h+var_1968]
              vmovss  xmm10, [rsp+19D0h+r_element]
            }
            ++v122;
          }
          while ( v122 < v229 );
          p_m_endNodeBase = v400;
          _R13 = v403;
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r13+28h]
        vmovss  xmm2, dword ptr [r13+2Ch]
        vmovss  xmm3, cs:__real@40800000; width
        vsubss  xmm1, xmm0, xmm9
        vmulss  xmm4, xmm1, xmm14
        vsubss  xmm0, xmm2, xmm10
        vmulss  xmm1, xmm0, xmm15
        vaddss  xmm7, xmm1, xmm13
        vsubss  xmm2, xmm7, cs:__real@40000000; y
        vaddss  xmm6, xmm4, xmm12
        vsubss  xmm1, xmm6, cs:__real@40000000; x
        vmovss  dword ptr [rsp+19D0h+fmt], xmm3
      }
      CG_Draw2DRect(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbe, 1, 1, &colorBlue, cgMedia.whiteMaterial);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+28h]
        vmovss  xmm0, dword ptr [r13+2Ch]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm0, xmm0, xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+19D0h+fmt], xmm0
      }
      Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", *(double *)&_XMM3, *(double *)&fmtbf);
      __asm
      {
        vmovss  xmm2, cs:__real@3de147ae
        vsubss  xmm0, xmm6, cs:__real@41700000
        vmovss  [rsp+19D0h+scale], xmm2
        vmovss  [rsp+19D0h+y], xmm7
        vmovss  dword ptr [rsp+19D0h+fmt], xmm0
      }
      UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmtbg, yy, 1, 1, scalem, &colorBlue, 3);
      v22 = font;
    }
    else
    {
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 105, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( !*(_BYTE *)(_R13 + 32) )
        goto LABEL_129;
      __asm
      {
        vmovss  xmm0, [rbp+18D0h+arg_28]
        vmovaps xmm7, xmm0
      }
      if ( *v401 >= 2 )
        __asm { vaddss  xmm7, xmm0, cs:__real@42f00000 }
      __asm
      {
        vmovss  xmm9, cs:__real@439b0000
        vmovss  xmm8, cs:__real@41200000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm0, xmm1, xmm8
        vaddss  xmm12, xmm0, [rbp+18D0h+arg_20]
      }
      v396 = XAnimNode_GetFloatFieldArray((scr_string_t)*(_DWORD *)(_R13 + 12));
      if ( !v396 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 115, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
        __debugbreak();
      v42 = *(_DWORD *)(_R13 + 28);
      v43 = 0;
      FontHandle = NULL;
      r_element = v42;
      if ( v42 )
        FontHandle = (GfxFont *)XAnimNode_GetUIntFieldArray((scr_string_t)v42);
      __asm
      {
        vmovss  xmm6, dword ptr [r13+18h]
        vcvtss2sd xmm6, xmm6, xmm6
      }
      v46 = XAnimGetAnimDebugName(SubTreeAnims, HIWORD(font->fontName));
      __asm { vmovsd  qword ptr [rsp+19D0h+horzAlign], xmm6 }
      Com_sprintf(dest, 0x1800ui64, "B1D '%s%s%s':  Value:(%f)\n", "^1", v46, "^7", horzAlignb);
      __asm { vmovss  xmm2, cs:__real@3e4ccccd; scale }
      v48 = ScrPlace_GetActivePlacement(localClientNum);
      __asm
      {
        vmovss  xmm0, cs:__real@3e23d70a
        vsubss  xmm1, xmm7, cs:__real@42dc0000
      }
      font = UI_GetFontHandle(v48, 6, *(float *)&_XMM2);
      __asm
      {
        vmovss  [rsp+19D0h+scale], xmm0
        vmovss  [rsp+19D0h+y], xmm1
        vmovss  dword ptr [rsp+19D0h+fmt], xmm12
      }
      UI_DrawText(v48, dest, 6144, font, fmt, yb, 1, 1, scale, &colorWhite, 3);
      __asm
      {
        vmovss  xmm1, dword ptr [r13+0]
        vmovss  xmm0, dword ptr [r13+4]
        vsubss  xmm11, xmm7, cs:__real@425c0000
        vmovss  dword ptr [rbp+18D0h+p1], xmm1
        vsubss  xmm1, xmm0, xmm1
        vdivss  xmm15, xmm9, xmm1
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmulss  xmm0, xmm1, xmm15
        vaddss  xmm7, xmm0, xmm12
        vmovss  xmm0, cs:__real@40400000
        vmovss  [rsp+19D0h+y], xmm0
        vmovaps xmm3, xmm7; p2x
        vmovaps xmm2, xmm11; p1y
        vmovaps xmm1, xmm12; p1x
        vmovss  dword ptr [rsp+19D0h+fmt], xmm11
      }
      CG_Draw2DLine(v48, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, yc, 1, 1, &colorWhite, cgMedia.whiteMaterial);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+0]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x1800ui64, "%.2f\n", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm10, cs:__real@3de147ae
        vmovss  [rsp+19D0h+scale], xmm10
        vsubss  xmm6, xmm11, xmm8
        vsubss  xmm0, xmm12, xmm8
        vmovss  [rsp+19D0h+y], xmm6
        vmovss  dword ptr [rsp+19D0h+fmt], xmm0
      }
      UI_DrawText(v48, dest, 6144, font, fmtb, yd, 1, 1, scalea, &colorYellow, 3);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+4]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x1800ui64, "%.2f\n", *(double *)&_XMM3);
      __asm
      {
        vmovss  [rsp+19D0h+scale], xmm10
        vsubss  xmm0, xmm7, xmm8
        vmovss  [rsp+19D0h+y], xmm6
        vmovss  dword ptr [rsp+19D0h+fmt], xmm0
      }
      UI_DrawText(v48, dest, 6144, font, fmtc, ye, 1, 1, scaleb, &colorYellow, 3);
      __asm
      {
        vmovss  xmm0, dword ptr [r13+18h]
        vmovss  xmm13, cs:__real@40000000
        vmovss  xmm9, cs:__real@40800000
        vmovss  xmm7, dword ptr [rbp+18D0h+p1]
        vsubss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, xmm15
        vaddss  xmm6, xmm2, xmm12
        vsubss  xmm1, xmm6, xmm13; x
        vsubss  xmm2, xmm11, xmm13; y
        vmovaps xmm3, xmm9; width
        vmovss  dword ptr [rsp+19D0h+fmt], xmm9
      }
      CG_Draw2DRect(v48, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, 1, 1, &colorBlue, cgMedia.whiteMaterial);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+18h]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x1800ui64, "%.2f\n", *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm8, cs:__real@40a00000
        vmovss  [rsp+19D0h+scale], xmm10
        vsubss  xmm0, xmm6, xmm8
        vmovss  [rsp+19D0h+y], xmm11
        vmovss  dword ptr [rsp+19D0h+fmt], xmm0
      }
      UI_DrawText(v48, dest, 6144, font, fmte, yf, 1, 1, scalec, &colorYellow, 3);
      size = v396->size;
      if ( size )
      {
        __asm
        {
          vmovss  xmm14, cs:__real@41700000
          vsubss  xmm2, xmm11, xmm13; y
        }
        _RDI = (unsigned int *)&FontHandle->fontName + 1;
        _R15 = (char *)v396 - (char *)FontHandle;
        do
        {
          __asm
          {
            vmovss  xmm6, dword ptr [r15+rdi]
            vsubss  xmm0, xmm6, xmm7
            vmulss  xmm1, xmm0, xmm15
            vaddss  xmm7, xmm1, xmm12
            vsubss  xmm1, xmm7, xmm13; x
            vmovaps xmm3, xmm9; width
            vmovss  dword ptr [rsp+19D0h+fmt], xmm9
          }
          CG_Draw2DRect(v48, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, 1, 1, &colorRed, cgMedia.whiteMaterial);
          __asm
          {
            vcvtss2sd xmm3, xmm6, xmm6
            vmovq   r9, xmm3
          }
          Com_sprintf(dest, 0x1800ui64, "%.2f\n", *(double *)&_XMM3);
          __asm
          {
            vmovss  [rsp+19D0h+scale], xmm10
            vsubss  xmm1, xmm11, xmm9
            vsubss  xmm0, xmm7, xmm8
            vmovss  [rsp+19D0h+y], xmm1
            vmovss  dword ptr [rsp+19D0h+fmt], xmm0
          }
          UI_DrawText(v48, dest, 6144, font, fmtg, yg, 1, 1, scaled, &colorWhite, 3);
          if ( r_element )
            v102 = *_RDI;
          else
            v102 = XAnimGetChildAt(SubTreeAnims, HIWORD(v22->fontName), v43);
          if ( v102 )
          {
            v103 = XAnimGetAnimDebugName(SubTreeAnims, v102);
            Com_sprintf(dest, 0x1800ui64, "%s\n", v103);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vmulss  xmm2, xmm0, xmm8
              vmovss  [rsp+19D0h+scale], xmm10
              vaddss  xmm1, xmm11, xmm8
              vaddss  xmm3, xmm2, xmm1
              vsubss  xmm0, xmm7, xmm14
              vmovss  [rsp+19D0h+y], xmm3
              vmovss  dword ptr [rsp+19D0h+fmt], xmm0
            }
            UI_DrawText(v48, dest, 6144, font, fmth, yh, 1, 1, scalee, &colorGreen, 3);
          }
          __asm { vmovss  xmm7, dword ptr [rbp+18D0h+p1] }
          ++v43;
          ++_RDI;
          __asm { vsubss  xmm2, xmm11, xmm13 }
        }
        while ( v43 < size );
        p_m_endNodeBase = v400;
      }
    }
    v18 = v401;
    v289 = 1;
    mp_node = (ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > *)result.mp_node;
    ++*v401;
    v290 = mp_node->m_endNodeBase.mp_parent;
    v291 = HIWORD(v22->fontName);
    r_element = v291;
    while ( v290 )
    {
      p_m_endNodeBase = v290;
      v289 = v291 < v290[1].m_color;
      if ( v291 >= v290[1].m_color )
        v290 = v290->mp_right;
      else
        v290 = v290->mp_left;
    }
    mp_left = p_m_endNodeBase;
    if ( v289 )
    {
      if ( p_m_endNodeBase == mp_node->m_endNodeBase.mp_left )
      {
        ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::insert_node(mp_node, &result, p_m_endNodeBase, &r_element, 1, 0);
LABEL_113:
        v20 = v402;
LABEL_114:
        ttfCount = v22->ttfCount;
        if ( ttfCount )
        {
          __asm { vmovss  xmm6, [rbp+18D0h+arg_28] }
          v297 = localClientNuma;
          do
          {
            if ( (ttfCount & 0x8000u) != 0 )
            {
              v299 = 32 * (ttfCount & 0x7FFFu);
              if ( (unsigned int)v299 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
              {
                LODWORD(horzAlign) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
                LODWORD(y) = 32 * (ttfCount & 0x7FFF);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", y, horzAlign) )
                  __debugbreak();
              }
              v298 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v299];
            }
            else
            {
              if ( (unsigned int)ttfCount >= g_xanimMemoryGlobals.infoPoolSize )
              {
                LODWORD(horzAlign) = g_xanimMemoryGlobals.infoPoolSize;
                LODWORD(y) = ttfCount;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", y, horzAlign) )
                  __debugbreak();
              }
              v298 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[ttfCount];
            }
            if ( !v298 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 387, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
              __debugbreak();
            __asm { vmovss  xmm0, [rbp+18D0h+arg_20] }
            v301 = *((_WORD *)v298 + 5);
            __asm
            {
              vmovss  [rsp+19D0h+y], xmm6
              vmovss  dword ptr [rsp+19D0h+fmt], xmm0
            }
            CG_DrawDebug_DrawBlendSpaces_r(v297, v20, ttfCount, mp_node, fmtbh, yz, showCoverage, v18);
            ttfCount = v301;
          }
          while ( v301 );
        }
LABEL_129:
        __asm
        {
          vmovaps xmm14, [rsp+19D0h+var_D0]
          vmovaps xmm13, [rsp+19D0h+var_C0]
          vmovaps xmm12, [rsp+19D0h+var_B0]
          vmovaps xmm11, [rsp+19D0h+var_A0]
          vmovaps xmm10, [rsp+19D0h+var_90]
          vmovaps xmm9, [rsp+19D0h+var_80]
          vmovaps xmm8, [rsp+19D0h+var_70]
          vmovaps xmm7, [rsp+19D0h+var_60]
          vmovaps xmm6, [rsp+19D0h+var_50]
          vmovaps xmm15, [rsp+19D0h+var_E0]
        }
        return;
      }
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
      {
        mp_left = p_m_endNodeBase->mp_left;
        if ( mp_left )
        {
          for ( i = mp_left->mp_right; i; i = i->mp_right )
            mp_left = i;
        }
        else
        {
          mp_left = p_m_endNodeBase->mp_parent;
          if ( p_m_endNodeBase == mp_left->mp_left )
          {
            do
            {
              v294 = mp_left;
              mp_left = mp_left->mp_parent;
            }
            while ( v294 == mp_left->mp_left );
          }
        }
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_right;
      }
    }
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < v291 )
      ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::insert_node(mp_node, &result, p_m_endNodeBase, &r_element, 0, 0);
    goto LABEL_113;
  }
}

/*
==============
CG_DrawDebug_DrawVMBlendSpaces
==============
*/

void __fastcall CG_DrawDebug_DrawVMBlendSpaces(LocalClientNum_t localClientNum, double startX, double startY, bool showCoverage)
{
  __int64 v10; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v12; 
  cg_t *v13; 
  unsigned int v14; 
  const XAnimTree ***m_weaponHand; 
  const XAnimTree **v16; 
  const XAnimTree *v17; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *v20; 
  ntl::red_black_tree_node_base *v21; 
  float fmt; 
  __int64 overlayY; 
  float overlayYa; 
  __int64 showCoveragea; 
  unsigned int outCell[2]; 
  __int64 v30; 
  ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int> > v31; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  v30 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  v10 = localClientNum;
  p_m_freelist = &v31.m_freelist;
  v12 = &v31.m_data.m_buffer[120];
  do
  {
    *(_QWORD *)v12 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v12;
    v12 -= 40;
  }
  while ( v12 + 40 > (char *)&v31 );
  v31.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v31.m_size = 0i64;
  v31.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v31.m_endNodeBase.mp_parent = NULL;
  v31.m_endNodeBase.mp_left = &v31.m_endNodeBase;
  v31.m_endNodeBase.mp_right = &v31.m_endNodeBase;
  if ( (unsigned int)v10 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v10, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v10] )
  {
    LODWORD(showCoveragea) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", showCoveragea) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(showCoveragea) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", showCoveragea) )
      __debugbreak();
  }
  v13 = cg_t::ms_cgArray[v10];
  if ( !CgWeaponMap::ms_instance[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[v10], &v13->predictedPlayerState)->weaponIdx )
  {
    outCell[0] = 0;
    v14 = 0;
    if ( v13->predictedPlayerState.weapCommon.lastWeaponHand >= WEAPON_HAND_DEFAULT )
    {
      m_weaponHand = (const XAnimTree ***)v13->m_weaponHand;
      do
      {
        if ( v14 >= 2 )
        {
          LODWORD(showCoveragea) = 2;
          LODWORD(overlayY) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", overlayY, showCoveragea) )
            __debugbreak();
        }
        v16 = *m_weaponHand;
        if ( *m_weaponHand )
        {
          v17 = *v16;
          if ( !*v16 || !v17->children )
            break;
          if ( v31.m_size )
          {
            mp_parent = v31.m_endNodeBase.mp_parent;
            if ( v31.m_endNodeBase.mp_parent )
            {
              do
              {
                ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::erase_tree(&v31, (ntl::red_black_tree_node<unsigned int> *)mp_parent->mp_right);
                mp_left = mp_parent->mp_left;
                *(_QWORD *)&mp_parent->m_color = v31.m_freelist.m_head.mp_next;
                v31.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
                mp_parent = mp_left;
              }
              while ( mp_left );
            }
            v31.m_endNodeBase.mp_parent = NULL;
            v31.m_endNodeBase.mp_left = &v31.m_endNodeBase;
            v31.m_endNodeBase.mp_right = &v31.m_endNodeBase;
            v31.m_size = 0i64;
          }
          __asm
          {
            vmovss  [rsp+170h+overlayY], xmm6
            vmovss  dword ptr [rsp+170h+fmt], xmm7
          }
          CG_DrawDebug_DrawBlendSpaces_r((const LocalClientNum_t)v10, v17, v17->children, (ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > *)&v31, fmt, overlayYa, showCoverage, outCell);
        }
        ++v14;
        m_weaponHand += 5;
      }
      while ( (signed int)v14 <= v13->predictedPlayerState.weapCommon.lastWeaponHand );
    }
  }
  if ( v31.m_size )
  {
    v20 = v31.m_endNodeBase.mp_parent;
    if ( v31.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::erase_tree(&v31, (ntl::red_black_tree_node<unsigned int> *)v20->mp_right);
        v21 = v20->mp_left;
        *(_QWORD *)&v20->m_color = v31.m_freelist.m_head.mp_next;
        v31.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v20;
        v20 = v21;
      }
      while ( v21 );
    }
  }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

