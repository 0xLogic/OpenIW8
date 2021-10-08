/*
==============
BG_FindTreeForAtr
==============
*/

void __fastcall BG_FindTreeForAtr(const char *fileName, const char *treeName, AtrAnimData *animData, int animUser)
{
  ?BG_FindTreeForAtr@@YAXPEBD0PEAUAtrAnimData@@H@Z(fileName, treeName, animData, animUser);
}

/*
==============
BG_HasAnimFile
==============
*/

bool __fastcall BG_HasAnimFile(const char *name)
{
  return ?BG_HasAnimFile@@YA_NPEBD@Z(name);
}

/*
==============
BG_FindAnimsInAtr
==============
*/

void __fastcall BG_FindAnimsInAtr(const char *atrFileName, const char *atrTreeName, AtrAnimData *animData, const unsigned int dataSize, int animUser)
{
  ?BG_FindAnimsInAtr@@YAXPEBD0PEAUAtrAnimData@@IH@Z(atrFileName, atrTreeName, animData, dataSize, animUser);
}

/*
==============
BG_ClearAtrData
==============
*/

void __fastcall BG_ClearAtrData(AtrAnimData *animData)
{
  ?BG_ClearAtrData@@YAXPEAUAtrAnimData@@@Z(animData);
}

/*
==============
BG_ClearAtrData
==============
*/
void BG_ClearAtrData(AtrAnimData *animData)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 

  if ( !animData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_atr_utils.cpp", 105, ASSERT_TYPE_ASSERT, "(animData)", (const char *)&queryFormat, "animData") )
    __debugbreak();
  if ( animData->anims.m_size )
  {
    mp_parent = animData->anims.m_endNodeBase.mp_parent;
    if ( mp_parent )
    {
      do
      {
        ntl::red_black_tree<ntl::fixed_string<64>,ntl::pair<ntl::fixed_string<64>,scr_anim_t>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t>>,600,8>,ntl::return_pair_first<ntl::fixed_string<64>,scr_anim_t>,ntl::less<ntl::fixed_string<64>,ntl::fixed_string<64>>>::erase_tree(&animData->anims, (ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t> > *)mp_parent->mp_right);
        mp_left = mp_parent->mp_left;
        *(_QWORD *)&mp_parent->m_color = animData->anims.m_freelist.m_head.mp_next;
        animData->anims.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
        mp_parent = mp_left;
      }
      while ( mp_left );
    }
    animData->anims.m_endNodeBase.mp_left = &animData->anims.m_endNodeBase;
    animData->anims.m_endNodeBase.mp_right = &animData->anims.m_endNodeBase;
    animData->anims.m_endNodeBase.mp_parent = NULL;
    animData->anims.m_size = 0i64;
    animData->animTree.anims = NULL;
  }
}

/*
==============
BG_FindAnimsInAtr
==============
*/
void BG_FindAnimsInAtr(const char *atrFileName, const char *atrTreeName, AtrAnimData *animData, const unsigned int dataSize, int animUser)
{
  unsigned int v5; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  unsigned int v15; 
  ntl::pair<ntl::fixed_string<64>,scr_anim_t> *p_r_element; 
  __int64 v17; 
  unsigned __int8 v18; 
  unsigned int v19; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v22; 
  char *v23; 
  char *v24; 
  int v25; 
  int v26; 
  ntl::red_black_tree_node_base *j; 
  char *fmt; 
  char *data_p; 
  unsigned int v30; 
  const char *v31; 
  const char *v32; 
  __int64 v33; 
  ntl::red_black_tree_iterator<ntl::fixed_string<64>,ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t> >,ntl::pair<ntl::fixed_string<64>,scr_anim_t> *,ntl::pair<ntl::fixed_string<64>,scr_anim_t> &> result; 
  ntl::red_black_tree_iterator<ntl::fixed_string<64>,ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t> >,ntl::pair<ntl::fixed_string<64>,scr_anim_t> *,ntl::pair<ntl::fixed_string<64>,scr_anim_t> &> v35; 
  Mem_LargeLocal v36; 
  ntl::pair<ntl::fixed_string<64>,scr_anim_t> r_element; 
  char p_destString[32]; 

  v33 = -2i64;
  v5 = dataSize;
  v30 = dataSize;
  v7 = atrTreeName;
  v32 = atrTreeName;
  v8 = atrFileName;
  v31 = atrFileName;
  if ( !atrFileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_atr_utils.cpp", 25, ASSERT_TYPE_ASSERT, "(atrFileName)", (const char *)&queryFormat, "atrFileName") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_atr_utils.cpp", 26, ASSERT_TYPE_ASSERT, "(atrTreeName)", (const char *)&queryFormat, "atrTreeName") )
    __debugbreak();
  if ( !animData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_atr_utils.cpp", 27, ASSERT_TYPE_ASSERT, "(animData)", (const char *)&queryFormat, "animData") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_atr_utils.cpp", 11, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( DB_XAssetExists(ASSET_TYPE_RAWFILE, v8) )
  {
    Mem_LargeLocal::Mem_LargeLocal(&v36, 0x8000ui64, "AtrAnimBuf animParseBuffer");
    memset(&r_element, 0, sizeof(r_element));
    data_p = DB_ReadRawFile(v8, (char *)v36.m_ptr, 0x8000);
    v9 = j_va("Load Atr ... %s", v8);
    Com_BeginParseSession(v9);
    Com_SetParseNegativeNumbers(1);
    Com_SetSpaceDelimited(0);
    v10 = Com_Parse((const char **)&data_p);
    while ( data_p )
    {
      if ( ((*v10 - 123) & 0xFD) != 0 )
      {
        if ( animData->anims.m_size >= v5 )
        {
          LODWORD(fmt) = v5;
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9E8F8, 23i64, v8, fmt);
        }
        ntl::internal::string_assign(p_destString, 0x40ui64, v10);
        ntl::internal::string_tolower(p_destString, 0x40ui64);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+70h+p_destString]
          vmovups ymmword ptr [rbp+70h+r_element.first.baseclass_0.baseclass_0.baseclass_0.m_string], ymm0
          vmovups ymm1, [rbp+70h+var_70]
          vmovups ymmword ptr [rbp+70h+r_element.first.baseclass_0.baseclass_0.baseclass_0.m_string+20h], ymm1
        }
        p_m_endNodeBase = &animData->anims.m_endNodeBase;
        mp_parent = animData->anims.m_endNodeBase.mp_parent;
        LOBYTE(v15) = 1;
        if ( mp_parent )
        {
          do
          {
            p_m_endNodeBase = mp_parent;
            if ( mp_parent == (ntl::red_black_tree_node_base *)-32i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\string_storage.h", (_DWORD)mp_parent + 73, ASSERT_TYPE_ASSERT, "( p_constString != 0 )", (const char *)&queryFormat, "p_constString != NULL") )
              __debugbreak();
            p_r_element = &r_element;
            v17 = (char *)&mp_parent[1] - (char *)&r_element;
            while ( 1 )
            {
              v18 = p_r_element->first.m_string[0];
              if ( p_r_element->first.m_string[0] != p_r_element->first.m_string[v17] )
                break;
              p_r_element = (ntl::pair<ntl::fixed_string<64>,scr_anim_t> *)((char *)p_r_element + 1);
              if ( !v18 )
              {
                v19 = 0;
                goto LABEL_27;
              }
            }
            v19 = v18 < (unsigned int)p_r_element->first.m_string[v17] ? -1 : 1;
LABEL_27:
            v15 = v19 >> 31;
            if ( (_BYTE)v15 )
              mp_parent = mp_parent->mp_left;
            else
              mp_parent = mp_parent->mp_right;
          }
          while ( mp_parent );
          v8 = v31;
          v5 = v30;
        }
        mp_left = p_m_endNodeBase;
        if ( !(_BYTE)v15 )
          goto LABEL_47;
        if ( p_m_endNodeBase != animData->anims.m_endNodeBase.mp_left )
        {
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
                  v22 = mp_left;
                  mp_left = mp_left->mp_parent;
                }
                while ( v22 == mp_left->mp_left );
              }
            }
          }
          else
          {
            mp_left = p_m_endNodeBase->mp_right;
          }
LABEL_47:
          if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v23 = (char *)&mp_left[1];
          v24 = (char *)((char *)&r_element - v23);
          do
          {
            v25 = (unsigned __int8)v24[(_QWORD)v23];
            v26 = (unsigned __int8)*v23 - v25;
            if ( v26 )
              break;
            ++v23;
          }
          while ( v25 );
          if ( v26 >= 0 )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9E950, 24i64, v10, v8);
          else
            ntl::red_black_tree<ntl::fixed_string<64>,ntl::pair<ntl::fixed_string<64>,scr_anim_t>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t>>,600,8>,ntl::return_pair_first<ntl::fixed_string<64>,scr_anim_t>,ntl::less<ntl::fixed_string<64>,ntl::fixed_string<64>>>::insert_node(&animData->anims, &v35, p_m_endNodeBase, &r_element, 0, 0);
          goto LABEL_56;
        }
        ntl::red_black_tree<ntl::fixed_string<64>,ntl::pair<ntl::fixed_string<64>,scr_anim_t>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ntl::fixed_string<64>,scr_anim_t>>,600,8>,ntl::return_pair_first<ntl::fixed_string<64>,scr_anim_t>,ntl::less<ntl::fixed_string<64>,ntl::fixed_string<64>>>::insert_node(&animData->anims, &result, p_m_endNodeBase, &r_element, 1, 0);
      }
LABEL_56:
      Com_SkipRestOfLine((const char **)&data_p);
      v10 = Com_Parse((const char **)&data_p);
    }
    Com_EndParseSession();
    Mem_LargeLocal::~Mem_LargeLocal(&v36);
    v7 = v32;
  }
  for ( j = animData->anims.m_endNodeBase.mp_left; j != &animData->anims.m_endNodeBase; j = ntl::red_black_tree_node_base::get_next(j) )
  {
    if ( !j )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
    }
    Scr_FindAnim(v7, (const char *)&j[1], (scr_anim_t *)&j[3], animUser);
    if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
  }
}

/*
==============
BG_FindTreeForAtr
==============
*/
void BG_FindTreeForAtr(const char *fileName, const char *treeName, AtrAnimData *animData, int animUser)
{
  scrContext_t *v7; 
  scr_animtree_t v8; 

  v7 = ScriptContext_GetFromAnimUser(animUser);
  if ( !fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_atr_utils.cpp", 11, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( DB_XAssetExists(ASSET_TYPE_RAWFILE, fileName) )
    v8.anims = Scr_FindAnimTree(v7, treeName).anims;
  else
    v8.anims = NULL;
  animData->animTree = v8;
}

/*
==============
BG_HasAnimFile
==============
*/
bool BG_HasAnimFile(const char *name)
{
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_atr_utils.cpp", 11, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  return DB_XAssetExists(ASSET_TYPE_RAWFILE, name) != 0;
}

