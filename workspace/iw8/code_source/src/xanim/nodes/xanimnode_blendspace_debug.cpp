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
void CG_DrawDebug_DrawBlendSpaces(LocalClientNum_t localClientNum, int handle, float startX, float startY, bool showCoverage)
{
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  const XAnimTree **v9; 
  CgEntitySystem *v10; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v12; 
  const XAnimTree *v13; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  __int64 overlayY; 
  __int64 v17; 
  unsigned int outCell; 
  __int64 v19; 
  ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > animSet; 

  v19 = -2i64;
  v5 = handle;
  v6 = localClientNum;
  if ( (unsigned int)handle > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", handle) )
    __debugbreak();
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v17) = 2;
    LODWORD(overlayY) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", overlayY, v17) )
      __debugbreak();
  }
  v7 = v5 + 2533 * v6;
  if ( v7 >= 0x13CA )
  {
    LODWORD(v17) = v5 + 2533 * v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v17) )
      __debugbreak();
  }
  v8 = clientObjMap[v7];
  if ( v8 )
  {
    if ( v8 >= (unsigned int)s_objCount )
    {
      LODWORD(v17) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v17) )
        __debugbreak();
    }
    v9 = (const XAnimTree **)s_objBuf[v8];
    if ( v9 )
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v17) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v17) )
          __debugbreak();
      }
      if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v17) = CgEntitySystem::ms_allocatedCount;
        LODWORD(overlayY) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", overlayY, v17) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v6] )
      {
        LODWORD(v17) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v17) )
          __debugbreak();
      }
      v10 = CgEntitySystem::ms_entitySystemArray[v6];
      if ( (unsigned int)v5 >= 0x800 )
      {
        LODWORD(v17) = 2048;
        LODWORD(overlayY) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", overlayY, v17) )
          __debugbreak();
      }
      if ( (v10->m_entities[v5].flags & 1) != 0 )
      {
        p_m_freelist = &animSet.m_freelist;
        v12 = &animSet.m_data.m_buffer[120];
        do
        {
          *(_QWORD *)v12 = p_m_freelist;
          p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v12;
          v12 -= 40;
        }
        while ( v12 + 40 > (char *)&animSet );
        animSet.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
        if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        animSet.m_size = 0i64;
        animSet.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
        animSet.m_endNodeBase.mp_parent = NULL;
        animSet.m_endNodeBase.mp_left = &animSet.m_endNodeBase;
        animSet.m_endNodeBase.mp_right = &animSet.m_endNodeBase;
        v13 = *v9;
        if ( *v9 )
        {
          if ( v13->children )
          {
            outCell = 0;
            CG_DrawDebug_DrawBlendSpaces_r((const LocalClientNum_t)v6, v13, v13->children, &animSet, startX, startY + 150.0, showCoverage, &outCell);
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
}

/*
==============
CG_DrawDebug_DrawBlendSpaces_r
==============
*/
void CG_DrawDebug_DrawBlendSpaces_r(const LocalClientNum_t localClientNum, const XAnimTree *tree, const unsigned __int16 infoIndex, ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > *animSet, float overlayX, float overlayY, bool showCoverage, unsigned int *outCell)
{
  unsigned int *v8; 
  ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > *mp_node; 
  const XAnimTree *v10; 
  bool v12; 
  GfxFont *v13; 
  const XAnim_s *SubTreeAnims; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  scr_string_t v16; 
  unsigned int fontName_high; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v19; 
  ntl::red_black_tree_node_base *mp_parent; 
  __int64 v21; 
  bool v22; 
  float *CustomNodeData; 
  float *v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  signed int v29; 
  unsigned int v30; 
  double v31; 
  const char *v32; 
  const ScreenPlacement *v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  unsigned int *v41; 
  float v42; 
  float v43; 
  unsigned int v44; 
  const char *v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  scr_string_t v52; 
  unsigned int v53; 
  double v54; 
  double v55; 
  const char *AnimDebugName; 
  const ScreenPlacement *ActivePlacement; 
  float v58; 
  float v59; 
  unsigned int v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  unsigned int v67; 
  unsigned int *v68; 
  double XCoord; 
  float v70; 
  double YCoord; 
  float v72; 
  float v73; 
  unsigned int ChildAt; 
  const char *v75; 
  scr_string_t v76; 
  const char *v77; 
  unsigned int v78; 
  __int64 v79; 
  unsigned int *v80; 
  double v81; 
  float v82; 
  double v83; 
  float v84; 
  double v85; 
  float v86; 
  double v87; 
  float v88; 
  double v89; 
  unsigned int v90; 
  float v91; 
  double v92; 
  float v93; 
  float v94; 
  bool v95; 
  ntl::red_black_tree_node_base *v96; 
  unsigned int v97; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v100; 
  unsigned __int16 ttfCount; 
  LocalClientNum_t v102; 
  unsigned __int8 *v103; 
  __int64 v104; 
  unsigned __int16 v105; 
  __int64 y; 
  __int64 ya; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  unsigned int r_element; 
  float v111; 
  float v112; 
  const XAnimFieldArray<float> *v113; 
  GfxFont *FontHandle; 
  GfxFont *font; 
  LocalClientNum_t localClientNuma; 
  ntl::red_black_tree_node_base *v117; 
  unsigned int *v118; 
  const XAnimTree *v119; 
  float *v120; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<unsigned int>,unsigned int *,unsigned int &> result; 
  vec2_t p1; 
  vec2_t p2; 
  vec2_t p0; 
  vec4_t v125; 
  char dest[6144]; 

  v8 = outCell;
  mp_node = animSet;
  result.mp_node = (ntl::red_black_tree_node<unsigned int> *)animSet;
  v10 = tree;
  v119 = tree;
  localClientNuma = localClientNum;
  v12 = *outCell < 4;
  v118 = outCell;
  if ( !v12 || !infoIndex )
    return;
  font = (GfxFont *)XAnimGetAnimInfo(infoIndex);
  v13 = font;
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 72, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(v10, (const XAnimSubTreeID)LOWORD(font->ttfDefs[0]));
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 75, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !XAnimIsCustomNode(SubTreeAnims, (const XAnimInfo *)font) )
    goto LABEL_114;
  CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, (const XAnimInfo *)font);
  if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 80, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
    __debugbreak();
  v16 = *CustomNodeTypeInfo->name;
  if ( v16 != scr_const.xanimBlendSpace1D && v16 != scr_const.xanimBlendSpace2D )
    goto LABEL_114;
  fontName_high = HIWORD(font->fontName);
  p_m_endNodeBase = &mp_node->m_endNodeBase;
  v19 = v16 == scr_const.xanimBlendSpace2D;
  v117 = &mp_node->m_endNodeBase;
  mp_parent = mp_node->m_endNodeBase.mp_parent;
  v21 = (__int64)&mp_node->m_endNodeBase;
  v22 = v19;
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < fontName_high )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      v21 = (__int64)mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( (ntl::red_black_tree_node_base *)v21 != p_m_endNodeBase && fontName_high < *(_DWORD *)(v21 + 32) )
    v21 = (__int64)&mp_node->m_endNodeBase;
  v120 = (float *)v21;
  if ( (ntl::red_black_tree_node_base *)v21 == p_m_endNodeBase )
  {
    CustomNodeData = (float *)XAnimGetCustomNodeData(SubTreeAnims, (XAnimInfo *)font, fontName_high);
    v120 = CustomNodeData;
    v24 = CustomNodeData;
    if ( v22 )
    {
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 203, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( *((_BYTE *)v24 + 52) )
      {
        v47 = overlayY;
        if ( *v118 >= 2 )
          v47 = overlayY + 120.0;
        v48 = (float)(*v118 & 1);
        v50 = (float)((float)(v48 * 310.0) + 10.0) + overlayX;
        v49 = v50;
        FloatFieldArray = XAnimNode_GetFloatFieldArray((scr_string_t)*((_DWORD *)v24 + 6));
        if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 213, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
          __debugbreak();
        v52 = *((_DWORD *)v24 + 12);
        v53 = 0;
        p2 = 0i64;
        LODWORD(v113) = v52;
        if ( v52 )
          p2 = (vec2_t)XAnimNode_GetUIntFieldArray(v52);
        v54 = v24[11];
        v55 = v24[10];
        AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, HIWORD(font->fontName));
        Com_sprintf(dest, 0x1800ui64, "B2D '%s%s%s':  x:(%f), y(%f)\n", "^1", AnimDebugName, "^7", v55, v54);
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.2);
        UI_DrawText(ActivePlacement, dest, 6144, FontHandle, v50, v47 - 110.0, 1, 1, 0.16, &colorWhite, 3);
        v58 = v47 + 10.0;
        v60 = *((unsigned int *)v24 + 2);
        v61 = v24[1] - *v24;
        v62 = 310.0 / v61;
        *(float *)&v54 = v24[3] - *(float *)&v60;
        v63 = -110.0 / *(float *)&v54;
        v64 = (float)(COERCE_FLOAT(LODWORD(v61) & _xmm) * (float)(310.0 / v61)) + v50;
        v112 = *v24;
        v59 = v112;
        r_element = v60;
        p1.v[0] = v64;
        CG_Draw2DLine(ActivePlacement, v50, v58, v64, v58, 3.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
        v111 = (float)(COERCE_FLOAT(LODWORD(v54) & _xmm) * (float)(-110.0 / *(float *)&v54)) + v58;
        CG_Draw2DLine(ActivePlacement, v50, v111, v64, v111, 3.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
        CG_Draw2DLine(ActivePlacement, v50, v58, v50, v111, 3.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
        CG_Draw2DLine(ActivePlacement, v64, v58, v64, v111, 3.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
        Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", *v24, v24[2]);
        UI_DrawText(ActivePlacement, dest, 6144, FontHandle, v50 - 15.0, v58 + 5.0, 1, 1, 0.11, &colorYellow, 3);
        Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", v24[1], v24[2]);
        UI_DrawText(ActivePlacement, dest, 6144, FontHandle, v64 - 15.0, v58 + 5.0, 1, 1, 0.11, &colorYellow, 3);
        Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", *v24, v24[3]);
        UI_DrawText(ActivePlacement, dest, 6144, FontHandle, v50 - 15.0, v111 - 2.0, 1, 1, 0.11, &colorYellow, 3);
        Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", v24[1], v24[3]);
        UI_DrawText(ActivePlacement, dest, 6144, FontHandle, v64 - 15.0, v111 - 2.0, 1, 1, 0.11, &colorYellow, 3);
        v65 = *(float *)&v60 * (float)(-110.0 / *(float *)&v54);
        LODWORD(v66) = COERCE_UNSIGNED_INT(v112 * v62) ^ _xmm;
        if ( (float)(*(float *)&v60 * v63) >= 0.0 && v65 <= 110.0 )
          CG_Draw2DLine(ActivePlacement, v50, v58 - v65, p1.v[0], v58 - v65, 1.0, 1, 1, &colorBlue, cgMedia.whiteMaterial);
        if ( v66 >= 0.0 && v66 <= 310.0 )
          CG_Draw2DLine(ActivePlacement, v66 + v50, v58, v66 + v50, v111, 1.0, 1, 1, &colorBlue, cgMedia.whiteMaterial);
        v67 = 0;
        LODWORD(v111) = FloatFieldArray->size >> 1;
        if ( v111 != 0.0 )
        {
          v68 = (unsigned int *)(*(_QWORD *)&p2 + 4i64);
          do
          {
            XCoord = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v67);
            v70 = *(float *)&XCoord;
            YCoord = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v67);
            v72 = (float)(*(float *)&YCoord - *(float *)&v60) * v63;
            v73 = (float)(v70 - v112) * v62;
            CG_Draw2DRect(ActivePlacement, (float)(v73 + v49) - 2.0, (float)(v72 + v58) - 2.0, 4.0, 4.0, 1, 1, &colorRed, cgMedia.whiteMaterial);
            if ( (_DWORD)v113 )
              ChildAt = *v68;
            else
              ChildAt = XAnimGetChildAt(SubTreeAnims, HIWORD(font->fontName), v67);
            if ( ChildAt )
            {
              v75 = XAnimGetAnimDebugName(SubTreeAnims, ChildAt);
              Com_sprintf(dest, 0x1800ui64, "%s\n", v75);
              UI_DrawText(ActivePlacement, dest, 6144, FontHandle, (float)(v49 + 3.0) + v73, v72 + v58, 1, 1, 0.11, &colorGreen, 3);
              Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", v70, *(float *)&YCoord);
              UI_DrawText(ActivePlacement, dest, 6144, FontHandle, (float)(v73 + v49) - 15.0, (float)(v58 + 6.0) + v72, 1, 1, 0.11, &colorWhite, 3);
            }
            ++v67;
            ++v68;
          }
          while ( v67 < LODWORD(v111) );
          p_m_endNodeBase = v117;
          v53 = 0;
          v24 = v120;
        }
        v76 = *((_DWORD *)v24 + 7);
        if ( v76 )
        {
          v77 = SL_ConvertToString(v76);
          if ( !v77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 322, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
            __debugbreak();
          if ( *(_DWORD *)v77 / 3u )
          {
            v78 = *(_DWORD *)v77 / 3u;
            do
            {
              v79 = 3 * v53;
              if ( (unsigned int)v79 >= *(_DWORD *)v77 )
              {
                LODWORD(horzAligna) = *(_DWORD *)v77;
                LODWORD(ya) = 3 * v53;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", ya, horzAligna) )
                  __debugbreak();
              }
              v80 = (unsigned int *)&v77[4 * v79 + 4];
              if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 328, ASSERT_TYPE_ASSERT, "(coordIndexes)", (const char *)&queryFormat, "coordIndexes") )
                __debugbreak();
              v81 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, *v80);
              v82 = (float)(*(float *)&v81 - v59) * v62;
              v83 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, *v80);
              v84 = (float)(*(float *)&v83 - *(float *)&v60) * v63;
              v85 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v80[1]);
              v86 = (float)(*(float *)&v85 - v59) * v62;
              v87 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v80[1]);
              v88 = (float)(*(float *)&v87 - *(float *)&v60) * v63;
              v89 = XAnimBlendSpace2D_GetXCoord(FloatFieldArray, v80[2]);
              v90 = v80[2];
              v91 = (float)(*(float *)&v89 - v59) * v62;
              v111 = v91;
              v92 = XAnimBlendSpace2D_GetYCoord(FloatFieldArray, v90);
              *(float *)&v113 = (float)(*(float *)&v92 - *(float *)&v60) * v63;
              if ( showCoverage )
              {
                p0.v[0] = v82 + v49;
                p1.v[0] = v86 + v49;
                p0.v[1] = v84 + v58;
                p2.v[0] = v91 + v49;
                p1.v[1] = v88 + v58;
                v125 = (vec4_t)_xmm;
                p2.v[1] = (float)((float)(*(float *)&v92 - *(float *)&v60) * v63) + v58;
                CG_Draw2DTri(ActivePlacement, &p0, &p1, &p2, 1, 1, &v125, cgMedia.whiteMaterial);
              }
              CG_Draw2DLine(ActivePlacement, v82 + v49, v84 + v58, v86 + v49, v88 + v58, 1.0, 1, 1, &colorLtOrange, cgMedia.whiteMaterial);
              CG_Draw2DLine(ActivePlacement, v86 + v49, v88 + v58, v49 + v111, v58 + *(float *)&v113, 1.0, 1, 1, &colorLtOrange, cgMedia.whiteMaterial);
              CG_Draw2DLine(ActivePlacement, v49 + v111, v58 + *(float *)&v113, v82 + v49, v84 + v58, 1.0, 1, 1, &colorLtOrange, cgMedia.whiteMaterial);
              v59 = v112;
              v60 = r_element;
              ++v53;
            }
            while ( v53 < v78 );
            p_m_endNodeBase = v117;
            v24 = v120;
          }
        }
        v93 = (float)((float)(v24[11] - *(float *)&v60) * v63) + v58;
        v94 = (float)((float)(v24[10] - v59) * v62) + v49;
        CG_Draw2DRect(ActivePlacement, v94 - 2.0, v93 - 2.0, 4.0, 4.0, 1, 1, &colorBlue, cgMedia.whiteMaterial);
        Com_sprintf(dest, 0x1800ui64, "(%.2f, %.2f)\n", v24[10], v24[11]);
        UI_DrawText(ActivePlacement, dest, 6144, FontHandle, v94 - 15.0, v93, 1, 1, 0.11, &colorBlue, 3);
        v13 = font;
LABEL_88:
        v8 = v118;
        v95 = 1;
        mp_node = (ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > *)result.mp_node;
        ++*v118;
        v96 = mp_node->m_endNodeBase.mp_parent;
        v97 = HIWORD(v13->fontName);
        r_element = v97;
        while ( v96 )
        {
          p_m_endNodeBase = v96;
          v95 = v97 < v96[1].m_color;
          if ( v97 >= v96[1].m_color )
            v96 = v96->mp_right;
          else
            v96 = v96->mp_left;
        }
        mp_left = p_m_endNodeBase;
        if ( v95 )
        {
          if ( p_m_endNodeBase == mp_node->m_endNodeBase.mp_left )
          {
            ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::insert_node(mp_node, &result, p_m_endNodeBase, &r_element, 1, 0);
LABEL_113:
            v10 = v119;
LABEL_114:
            ttfCount = v13->ttfCount;
            if ( ttfCount )
            {
              v102 = localClientNuma;
              do
              {
                if ( (ttfCount & 0x8000u) != 0 )
                {
                  v104 = 32 * (ttfCount & 0x7FFFu);
                  if ( (unsigned int)v104 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
                  {
                    LODWORD(horzAlign) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
                    LODWORD(y) = 32 * (ttfCount & 0x7FFF);
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", y, horzAlign) )
                      __debugbreak();
                  }
                  v103 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v104];
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
                  v103 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[ttfCount];
                }
                if ( !v103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 387, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
                  __debugbreak();
                v105 = *((_WORD *)v103 + 5);
                CG_DrawDebug_DrawBlendSpaces_r(v102, v10, ttfCount, mp_node, overlayX, overlayY, showCoverage, v8);
                ttfCount = v105;
              }
              while ( v105 );
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
                  v100 = mp_left;
                  mp_left = mp_left->mp_parent;
                }
                while ( v100 == mp_left->mp_left );
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
        if ( mp_left[1].m_color < v97 )
          ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::insert_node(mp_node, &result, p_m_endNodeBase, &r_element, 0, 0);
        goto LABEL_113;
      }
    }
    else
    {
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 105, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( *((_BYTE *)v24 + 32) )
      {
        v25 = overlayY;
        if ( *v118 >= 2 )
          v25 = overlayY + 120.0;
        v26 = (float)(*v118 & 1);
        v28 = (float)((float)(v26 * 310.0) + 10.0) + overlayX;
        v27 = v28;
        v113 = XAnimNode_GetFloatFieldArray((scr_string_t)*((_DWORD *)v24 + 3));
        if ( !v113 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace_debug.cpp", 115, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
          __debugbreak();
        v29 = *((_DWORD *)v24 + 7);
        v30 = 0;
        FontHandle = NULL;
        r_element = v29;
        if ( v29 )
          FontHandle = (GfxFont *)XAnimNode_GetUIntFieldArray((scr_string_t)v29);
        v31 = v24[6];
        v32 = XAnimGetAnimDebugName(SubTreeAnims, HIWORD(font->fontName));
        Com_sprintf(dest, 0x1800ui64, "B1D '%s%s%s':  Value:(%f)\n", "^1", v32, "^7", v31);
        v33 = ScrPlace_GetActivePlacement(localClientNum);
        font = UI_GetFontHandle(v33, 6, 0.2);
        UI_DrawText(v33, dest, 6144, font, v28, v25 - 110.0, 1, 1, 0.16, &colorWhite, 3);
        v34 = v24[1];
        v36 = v25 - 55.0;
        v35 = v36;
        p1.v[0] = *v24;
        v37 = 310.0 / (float)(v34 - p1.v[0]);
        v38 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v34 - p1.v[0]) & _xmm) * v37) + v27;
        CG_Draw2DLine(v33, v27, v35, v38, v35, 3.0, 1, 1, &colorWhite, cgMedia.whiteMaterial);
        Com_sprintf(dest, 0x1800ui64, "%.2f\n", *v24);
        UI_DrawText(v33, dest, 6144, font, v27 - 10.0, v36 - 10.0, 1, 1, 0.11, &colorYellow, 3);
        Com_sprintf(dest, 0x1800ui64, "%.2f\n", v24[1]);
        UI_DrawText(v33, dest, 6144, font, v38 - 10.0, v36 - 10.0, 1, 1, 0.11, &colorYellow, 3);
        v39 = p1.v[0];
        *(float *)&v31 = (float)((float)(v24[6] - p1.v[0]) * v37) + v27;
        CG_Draw2DRect(v33, *(float *)&v31 - 2.0, v36 - 2.0, 4.0, 4.0, 1, 1, &colorBlue, cgMedia.whiteMaterial);
        Com_sprintf(dest, 0x1800ui64, "%.2f\n", v24[6]);
        UI_DrawText(v33, dest, 6144, font, *(float *)&v31 - 5.0, v36, 1, 1, 0.11, &colorYellow, 3);
        v112 = *(float *)&v113->size;
        if ( v112 != 0.0 )
        {
          v40 = v36 - 2.0;
          v41 = (unsigned int *)&FontHandle->fontName + 1;
          do
          {
            v42 = *(float *)((char *)v41 + (char *)v113 - (char *)FontHandle);
            v43 = (float)((float)(v42 - v39) * v37) + v27;
            CG_Draw2DRect(v33, v43 - 2.0, v40, 4.0, 4.0, 1, 1, &colorRed, cgMedia.whiteMaterial);
            Com_sprintf(dest, 0x1800ui64, "%.2f\n", v42);
            UI_DrawText(v33, dest, 6144, font, v43 - 5.0, v35 - 4.0, 1, 1, 0.11, &colorWhite, 3);
            if ( *(float *)&r_element == 0.0 )
              v44 = XAnimGetChildAt(SubTreeAnims, HIWORD(v13->fontName), v30);
            else
              v44 = *v41;
            if ( v44 )
            {
              v45 = XAnimGetAnimDebugName(SubTreeAnims, v44);
              Com_sprintf(dest, 0x1800ui64, "%s\n", v45);
              v46 = (float)v30;
              UI_DrawText(v33, dest, 6144, font, v43 - 15.0, (float)(v46 * 5.0) + (float)(v35 + 5.0), 1, 1, 0.11, &colorGreen, 3);
            }
            v39 = p1.v[0];
            ++v30;
            ++v41;
            v40 = v35 - 2.0;
          }
          while ( v30 < LODWORD(v112) );
          p_m_endNodeBase = v117;
        }
        goto LABEL_88;
      }
    }
  }
}

/*
==============
CG_DrawDebug_DrawVMBlendSpaces
==============
*/
void CG_DrawDebug_DrawVMBlendSpaces(LocalClientNum_t localClientNum, float startX, float startY, bool showCoverage)
{
  __int64 v5; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v7; 
  cg_t *v8; 
  unsigned int v9; 
  const XAnimTree ***m_weaponHand; 
  const XAnimTree **v11; 
  const XAnimTree *v12; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node_base *v16; 
  __int64 overlayY; 
  __int64 showCoveragea; 
  unsigned int outCell[2]; 
  __int64 v20; 
  ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int> > v21; 

  v20 = -2i64;
  v5 = localClientNum;
  p_m_freelist = &v21.m_freelist;
  v7 = &v21.m_data.m_buffer[120];
  do
  {
    *(_QWORD *)v7 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v7;
    v7 -= 40;
  }
  while ( v7 + 40 > (char *)&v21 );
  v21.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v21.m_size = 0i64;
  v21.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v21.m_endNodeBase.mp_parent = NULL;
  v21.m_endNodeBase.mp_left = &v21.m_endNodeBase;
  v21.m_endNodeBase.mp_right = &v21.m_endNodeBase;
  if ( (unsigned int)v5 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v5, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v5] )
  {
    LODWORD(showCoveragea) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", showCoveragea) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(showCoveragea) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", showCoveragea) )
      __debugbreak();
  }
  v8 = cg_t::ms_cgArray[v5];
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[v5], &v8->predictedPlayerState)->weaponIdx )
  {
    outCell[0] = 0;
    v9 = 0;
    if ( v8->predictedPlayerState.weapCommon.lastWeaponHand >= WEAPON_HAND_DEFAULT )
    {
      m_weaponHand = (const XAnimTree ***)v8->m_weaponHand;
      do
      {
        if ( v9 >= 2 )
        {
          LODWORD(showCoveragea) = 2;
          LODWORD(overlayY) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", overlayY, showCoveragea) )
            __debugbreak();
        }
        v11 = *m_weaponHand;
        if ( *m_weaponHand )
        {
          v12 = *v11;
          if ( !*v11 || !v12->children )
            break;
          if ( v21.m_size )
          {
            mp_parent = v21.m_endNodeBase.mp_parent;
            if ( v21.m_endNodeBase.mp_parent )
            {
              do
              {
                ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::erase_tree(&v21, (ntl::red_black_tree_node<unsigned int> *)mp_parent->mp_right);
                mp_left = mp_parent->mp_left;
                *(_QWORD *)&mp_parent->m_color = v21.m_freelist.m_head.mp_next;
                v21.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
                mp_parent = mp_left;
              }
              while ( mp_left );
            }
            v21.m_endNodeBase.mp_parent = NULL;
            v21.m_endNodeBase.mp_left = &v21.m_endNodeBase;
            v21.m_endNodeBase.mp_right = &v21.m_endNodeBase;
            v21.m_size = 0i64;
          }
          CG_DrawDebug_DrawBlendSpaces_r((const LocalClientNum_t)v5, v12, v12->children, (ntl::fixed_set<unsigned int,4,ntl::less<unsigned int,unsigned int> > *)&v21, startX, startY, showCoverage, outCell);
        }
        ++v9;
        m_weaponHand += 5;
      }
      while ( (signed int)v9 <= v8->predictedPlayerState.weapCommon.lastWeaponHand );
    }
  }
  if ( v21.m_size )
  {
    v15 = v21.m_endNodeBase.mp_parent;
    if ( v21.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<unsigned int,unsigned int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<unsigned int>,4,8>,ntl::return_input<unsigned int>,ntl::less<unsigned int,unsigned int>>::erase_tree(&v21, (ntl::red_black_tree_node<unsigned int> *)v15->mp_right);
        v16 = v15->mp_left;
        *(_QWORD *)&v15->m_color = v21.m_freelist.m_head.mp_next;
        v21.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v15;
        v15 = v16;
      }
      while ( v16 );
    }
  }
}

