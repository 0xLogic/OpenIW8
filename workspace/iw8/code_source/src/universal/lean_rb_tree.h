/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::Init
==============
*/

void __fastcall LeanRBTree<IWMemAllocatorTableEntry>::Init(LeanRBTree<IWMemAllocatorTableEntry> *this)
{
  ?Init@?$LeanRBTree@VIWMemAllocatorTableEntry@@@@QEAAXXZ(this);
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::SingleRotation
==============
*/

IWMemAllocatorTableEntry *__fastcall LeanRBTree<IWMemAllocatorTableEntry>::SingleRotation(LeanRBTree<IWMemAllocatorTableEntry> *this, IWMemAllocatorTableEntry *p_root, bool dir)
{
  return ?SingleRotation@?$LeanRBTree@VIWMemAllocatorTableEntry@@@@AEAAPEAVIWMemAllocatorTableEntry@@PEAV2@_N@Z(this, p_root, dir);
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::Insert
==============
*/

void __fastcall LeanRBTree<IWMemAllocatorTableEntry>::Insert(LeanRBTree<IWMemAllocatorTableEntry> *this, IWMemAllocatorTableEntry *p_new_node)
{
  ?Insert@?$LeanRBTree@VIWMemAllocatorTableEntry@@@@QEAAXPEAVIWMemAllocatorTableEntry@@@Z(this, p_new_node);
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::Remove
==============
*/

IWMemAllocatorTableEntry *__fastcall LeanRBTree<IWMemAllocatorTableEntry>::Remove(LeanRBTree<IWMemAllocatorTableEntry> *this, const unsigned __int64 remove_key)
{
  return ?Remove@?$LeanRBTree@VIWMemAllocatorTableEntry@@@@QEAAPEAVIWMemAllocatorTableEntry@@_K@Z(this, remove_key);
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::Find
==============
*/

IWMemAllocatorTableEntry *__fastcall LeanRBTree<IWMemAllocatorTableEntry>::Find(LeanRBTree<IWMemAllocatorTableEntry> *this, const unsigned __int64 find_key)
{
  return ?Find@?$LeanRBTree@VIWMemAllocatorTableEntry@@@@QEBAPEAVIWMemAllocatorTableEntry@@_K@Z(this, find_key);
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::DoubleRotation
==============
*/

IWMemAllocatorTableEntry *__fastcall LeanRBTree<IWMemAllocatorTableEntry>::DoubleRotation(LeanRBTree<IWMemAllocatorTableEntry> *this, IWMemAllocatorTableEntry *p_root, bool dir)
{
  return ?DoubleRotation@?$LeanRBTree@VIWMemAllocatorTableEntry@@@@AEAAPEAVIWMemAllocatorTableEntry@@PEAV2@_N@Z(this, p_root, dir);
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::DoubleRotation
==============
*/
IWMemAllocatorTableEntry *LeanRBTree<IWMemAllocatorTableEntry>::DoubleRotation(LeanRBTree<IWMemAllocatorTableEntry> *this, IWMemAllocatorTableEntry *p_root, bool dir)
{
  _BOOL8 v4; 
  IWMemAllocatorTableEntry *v5; 
  unsigned int v8; 
  IWMemAllocatorTableEntry *v9; 
  unsigned int v10; 
  IWMemAllocatorTableEntry *v11; 
  unsigned int v12; 

  v4 = !dir;
  v5 = NULL;
  v8 = p_root->m_childNodeIndices[v4];
  if ( v8 )
    v9 = &g_iwMemAllocatorPool[v8];
  else
    v9 = NULL;
  v10 = v9->m_childNodeIndices[!v4];
  if ( v10 )
    v11 = &g_iwMemAllocatorPool[v10];
  else
    v11 = NULL;
  v12 = v11->m_childNodeIndices[v4];
  if ( v12 )
    v5 = &g_iwMemAllocatorPool[v12];
  IWMemAllocatorTableEntry::SetChildNode(v9, dir, v5);
  IWMemAllocatorTableEntry::SetChildNode(v11, v4, v9);
  *((_QWORD *)v9 + 1) |= 0x20000000000ui64;
  *((_QWORD *)v11 + 1) &= ~0x20000000000ui64;
  IWMemAllocatorTableEntry::SetChildNode(p_root, v4, v11);
  return LeanRBTree<IWMemAllocatorTableEntry>::SingleRotation(this, p_root, dir);
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::Find
==============
*/
IWMemAllocatorTableEntry *LeanRBTree<IWMemAllocatorTableEntry>::Find(LeanRBTree<IWMemAllocatorTableEntry> *this, const unsigned __int64 find_key)
{
  IWMemAllocatorTableEntry *result; 
  __int64 v4; 
  int v5; 

  result = this->mp_root;
  if ( !this->mp_root )
    return 0i64;
  while ( find_key != result->m_address )
  {
    v4 = 16i64;
    if ( find_key > result->m_address )
      v4 = 20i64;
    v5 = *(_DWORD *)((char *)&result->m_address + v4);
    if ( v5 )
    {
      result = &g_iwMemAllocatorPool[v5];
      if ( result )
        continue;
    }
    return 0i64;
  }
  return result;
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::Init
==============
*/
void LeanRBTree<IWMemAllocatorTableEntry>::Init(LeanRBTree<IWMemAllocatorTableEntry> *this)
{
  this->mp_root = NULL;
  this->m_count = 0;
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::Insert
==============
*/
void LeanRBTree<IWMemAllocatorTableEntry>::Insert(LeanRBTree<IWMemAllocatorTableEntry> *this, IWMemAllocatorTableEntry *p_new_node)
{
  unsigned __int64 m_address; 
  IWMemAllocatorTableEntry *v3; 
  IWMemAllocatorTableEntry *mp_root; 
  __int64 v6; 
  int v7; 
  IWMemAllocatorTableEntry *v8; 
  IWMemAllocatorTableEntry *v9; 
  bool v10; 
  IWMemAllocatorTableEntry *v11; 
  IWMemAllocatorTableEntry *v12; 
  IWMemAllocatorTableEntry *v13; 
  __int64 v14; 
  __int64 v15; 
  IWMemAllocatorTableEntry *v16; 
  __int64 v17; 
  IWMemAllocatorTableEntry *v18; 
  __int64 v19; 
  IWMemAllocatorTableEntry *v20; 
  __int64 v21; 
  IWMemAllocatorTableEntry *v22; 
  __int64 v23; 
  IWMemAllocatorTableEntry *v24; 
  bool v25; 
  unsigned int v26; 
  IWMemAllocatorTableEntry *v27; 
  bool v28; 
  IWMemAllocatorTableEntry *v29; 
  __int64 v30; 
  int v31; 
  bool v32; 
  IWMemAllocatorTableEntry v33; 

  m_address = p_new_node->m_address;
  v3 = p_new_node;
  if ( IWMemAllocatorTableEntry::GetChildNode(p_new_node, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\lean_rb_tree.h", 198, ASSERT_TYPE_ASSERT, "(p_new_node->GetChildNode( 0 ) == 0)", (const char *)&queryFormat, "p_new_node->GetChildNode( 0 ) == NULL") )
    __debugbreak();
  if ( IWMemAllocatorTableEntry::GetChildNode(v3, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\lean_rb_tree.h", 199, ASSERT_TYPE_ASSERT, "(p_new_node->GetChildNode( 1 ) == 0)", (const char *)&queryFormat, "p_new_node->GetChildNode( 1 ) == NULL") )
    __debugbreak();
  if ( (*((_QWORD *)v3 + 1) & 0x20000000000i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\lean_rb_tree.h", 200, ASSERT_TYPE_ASSERT, "(p_new_node->IsRed())", (const char *)&queryFormat, "p_new_node->IsRed()") )
    __debugbreak();
  mp_root = this->mp_root;
  if ( this->mp_root )
  {
    while ( m_address != mp_root->m_address )
    {
      v6 = 16i64;
      if ( m_address > mp_root->m_address )
        v6 = 20i64;
      v7 = *(_DWORD *)((char *)&mp_root->m_address + v6);
      if ( v7 )
      {
        mp_root = &g_iwMemAllocatorPool[v7];
        if ( mp_root )
          continue;
      }
      goto LABEL_19;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\lean_rb_tree.h", 203, ASSERT_TYPE_ASSERT, "(Find( inserting_key ) == 0)", "%s\n\tThis key already exists in the tree", "Find( inserting_key ) == NULL") )
      __debugbreak();
  }
LABEL_19:
  v8 = this->mp_root;
  if ( !this->mp_root )
    goto LABEL_65;
  *((_QWORD *)&v33 + 1) |= 0x20000000000ui64;
  v9 = &v33;
  v10 = 0;
  v11 = NULL;
  v12 = NULL;
  *(_QWORD *)v33.m_childNodeIndices = 0i64;
  v32 = 0;
  IWMemAllocatorTableEntry::SetChildNode(&v33, 1, v8);
  v13 = g_iwMemAllocatorPool;
  while ( 1 )
  {
    if ( !v8 )
    {
      v8 = v3;
      v14 = v3 - g_iwMemAllocatorPool;
      if ( (v14 < 0 || (unsigned __int64)v14 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v14, "signed", v3 - g_iwMemAllocatorPool) )
        __debugbreak();
      v11->m_childNodeIndices[v32] = v14;
      goto LABEL_40;
    }
    v15 = v8->m_childNodeIndices[0];
    if ( (_DWORD)v15 )
    {
      v16 = &v13[v15];
      if ( v16 )
      {
        if ( (*((_QWORD *)v16 + 1) & 0x20000000000i64) != 0 )
        {
          v17 = v8->m_childNodeIndices[1];
          if ( (_DWORD)v17 )
          {
            v18 = &v13[v17];
            if ( v18 )
            {
              if ( (*((_QWORD *)v18 + 1) & 0x20000000000i64) != 0 )
              {
                *((_QWORD *)v8 + 1) |= 0x20000000000ui64;
                v19 = v8->m_childNodeIndices[0];
                if ( (_DWORD)v19 )
                  v20 = &g_iwMemAllocatorPool[v19];
                else
                  v20 = NULL;
                *((_QWORD *)v20 + 1) &= ~0x20000000000ui64;
                v21 = v8->m_childNodeIndices[1];
                if ( (_DWORD)v21 )
                  v22 = &g_iwMemAllocatorPool[v21];
                else
                  v22 = NULL;
                *((_QWORD *)v22 + 1) &= ~0x20000000000ui64;
LABEL_40:
                v13 = g_iwMemAllocatorPool;
              }
            }
          }
        }
      }
    }
    if ( (*((_QWORD *)v8 + 1) & 0x20000000000i64) != 0 && v11 && (*((_QWORD *)v11 + 1) & 0x20000000000i64) != 0 )
    {
      v23 = v9->m_childNodeIndices[1];
      if ( (_DWORD)v23 )
        v24 = &v13[v23];
      else
        v24 = NULL;
      v25 = v24 == v12;
      v26 = v11->m_childNodeIndices[v10];
      if ( v26 )
        v27 = &v13[v26];
      else
        v27 = NULL;
      v28 = !v10;
      if ( v8 == v27 )
        v29 = LeanRBTree<IWMemAllocatorTableEntry>::SingleRotation(this, v12, v28);
      else
        v29 = LeanRBTree<IWMemAllocatorTableEntry>::DoubleRotation(this, v12, v28);
      IWMemAllocatorTableEntry::SetChildNode(v9, v25, v29);
      v13 = g_iwMemAllocatorPool;
    }
    v10 = v32;
    if ( v3->m_address == v8->m_address )
      break;
    v32 = v3->m_address > v8->m_address;
    v30 = 16i64;
    if ( !v12 )
      v12 = v9;
    v9 = v12;
    if ( v8->m_address < v3->m_address )
      v30 = 20i64;
    v12 = v11;
    v11 = v8;
    v31 = *(_DWORD *)((char *)&v8->m_address + v30);
    if ( v31 )
      v8 = &v13[v31];
    else
      v8 = NULL;
  }
  if ( v33.m_childNodeIndices[1] )
    v3 = &v13[v33.m_childNodeIndices[1]];
  else
    v3 = NULL;
LABEL_65:
  this->mp_root = v3;
  *((_QWORD *)v3 + 1) &= ~0x20000000000ui64;
  ++this->m_count;
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::Remove
==============
*/
IWMemAllocatorTableEntry *LeanRBTree<IWMemAllocatorTableEntry>::Remove(LeanRBTree<IWMemAllocatorTableEntry> *this, const unsigned __int64 remove_key)
{
  IWMemAllocatorTableEntry *v2; 
  LeanRBTree<IWMemAllocatorTableEntry> *v3; 
  unsigned __int8 v4; 
  IWMemAllocatorTableEntry *mp_root; 
  IWMemAllocatorTableEntry *v7; 
  IWMemAllocatorTableEntry *v9; 
  unsigned int v10; 
  IWMemAllocatorTableEntry *v11; 
  IWMemAllocatorTableEntry *v12; 
  unsigned __int64 m_address; 
  bool v14; 
  __int64 v15; 
  int v16; 
  IWMemAllocatorTableEntry *v17; 
  __int64 v18; 
  __int64 v19; 
  IWMemAllocatorTableEntry *v20; 
  IWMemAllocatorTableEntry *v21; 
  unsigned int v22; 
  IWMemAllocatorTableEntry *v23; 
  __int64 v24; 
  int v25; 
  IWMemAllocatorTableEntry *v26; 
  __int64 v27; 
  IWMemAllocatorTableEntry *v28; 
  __int64 v29; 
  IWMemAllocatorTableEntry *v30; 
  unsigned int v31; 
  IWMemAllocatorTableEntry *v32; 
  __int64 v33; 
  IWMemAllocatorTableEntry *v34; 
  IWMemAllocatorTableEntry *v35; 
  IWMemAllocatorTableEntry *v36; 
  __int64 v37; 
  __int64 v38; 
  IWMemAllocatorTableEntry *v39; 
  __int64 v40; 
  IWMemAllocatorTableEntry *v41; 
  unsigned int v42; 
  IWMemAllocatorTableEntry *v43; 
  __int64 v44; 
  IWMemAllocatorTableEntry *v45; 
  unsigned int v46; 
  IWMemAllocatorTableEntry *v48; 
  unsigned int v49; 
  __int64 v50; 
  IWMemAllocatorTableEntry *v51; 
  unsigned int v52; 
  IWMemAllocatorTableEntry *v53; 
  __int64 v55; 
  IWMemAllocatorTableEntry *v56; 
  bool v57; 
  __int64 v58; 
  int v59; 
  IWMemAllocatorTableEntry *v60; 
  __int64 v61; 
  IWMemAllocatorTableEntry *v62; 
  bool v63; 
  IWMemAllocatorTableEntry *v65; 
  IWMemAllocatorTableEntry p_root; 

  v2 = NULL;
  v3 = this;
  *(_QWORD *)p_root.m_childNodeIndices = 0i64;
  *((_QWORD *)&p_root + 1) |= 0x20000000000ui64;
  v4 = 1;
  v65 = NULL;
  mp_root = this->mp_root;
  if ( !this->mp_root )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\lean_rb_tree.h", 319, ASSERT_TYPE_ASSERT, "(mp_root != 0)", "%s\n\tEmpty tree", "mp_root != NULL") )
      __debugbreak();
    mp_root = v3->mp_root;
    if ( !v3->mp_root )
      return 0i64;
  }
  v7 = NULL;
  _R14 = &p_root;
  IWMemAllocatorTableEntry::SetChildNode(&p_root, 1, mp_root);
  v9 = g_iwMemAllocatorPool;
  while ( 1 )
  {
    v10 = _R14->m_childNodeIndices[v4];
    if ( !v10 || !&v9[v10] )
      break;
    v11 = v7;
    v7 = _R14;
    _R14 = &v9[v10];
    v12 = _R14;
    m_address = _R14->m_address;
    v14 = _R14->m_address < remove_key;
    if ( _R14->m_address != remove_key )
      v12 = v65;
    v65 = v12;
    v63 = _R14->m_address < remove_key;
    if ( (*((_QWORD *)_R14 + 1) & 0x20000000000i64) != 0 )
      goto LABEL_65;
    v15 = 16i64;
    if ( m_address < remove_key )
      v15 = 20i64;
    v16 = *(_DWORD *)((char *)&_R14->m_address + v15);
    if ( v16 )
    {
      v17 = &v9[v16];
      if ( v17 )
      {
        if ( (*((_QWORD *)v17 + 1) & 0x20000000000i64) != 0 )
          goto LABEL_65;
      }
    }
    v18 = 16i64;
    if ( m_address >= remove_key )
      v18 = 20i64;
    v19 = *(unsigned int *)((char *)&_R14->m_address + v18);
    if ( (_DWORD)v19 )
    {
      v20 = &v9[(unsigned int)v19];
      if ( v20 && (*((_QWORD *)v20 + 1) & 0x20000000000i64) != 0 )
      {
        v21 = LeanRBTree<IWMemAllocatorTableEntry>::SingleRotation(v3, _R14, _R14->m_address < remove_key);
        IWMemAllocatorTableEntry::SetChildNode(v7, v4, v21);
        v22 = v7->m_childNodeIndices[v4];
        v9 = g_iwMemAllocatorPool;
        v4 = v63;
        if ( v22 )
          v7 = &g_iwMemAllocatorPool[v22];
        else
          v7 = NULL;
      }
      else
      {
        v23 = &v9[v19];
        if ( !v23 || (*((_QWORD *)v23 + 1) & 0x20000000000i64) == 0 )
          goto LABEL_27;
LABEL_65:
        v4 = v14;
      }
    }
    else
    {
LABEL_27:
      v24 = 4 * (v4 ^ 1i64) + 16;
      v25 = *(_DWORD *)((char *)&v7->m_address + v24);
      if ( !v25 )
        goto LABEL_65;
      v26 = &v9[v25];
      if ( !v26 )
        goto LABEL_65;
      v27 = *(unsigned int *)((char *)&v26->m_address + v24);
      if ( !(_DWORD)v27 || (v28 = &v9[(unsigned int)v27]) == NULL || (*((_QWORD *)v28 + 1) & 0x20000000000i64) == 0 )
      {
        v29 = v26->m_childNodeIndices[v4];
        if ( !(_DWORD)v29 || (v30 = &v9[v29]) == NULL || (*((_QWORD *)v30 + 1) & 0x20000000000i64) == 0 )
        {
          *((_QWORD *)v7 + 1) &= ~0x20000000000ui64;
          *((_QWORD *)v26 + 1) |= 0x20000000000ui64;
          *((_QWORD *)_R14 + 1) |= 0x20000000000ui64;
          v9 = g_iwMemAllocatorPool;
          goto LABEL_65;
        }
      }
      v31 = v11->m_childNodeIndices[1];
      if ( v31 )
        v32 = &v9[v31];
      else
        v32 = NULL;
      v33 = v26->m_childNodeIndices[v4];
      if ( (_DWORD)v33 )
      {
        v34 = &v9[v33];
        if ( v34 )
        {
          if ( (*((_QWORD *)v34 + 1) & 0x20000000000i64) != 0 )
          {
            v35 = LeanRBTree<IWMemAllocatorTableEntry>::DoubleRotation(this, v7, v4);
LABEL_46:
            IWMemAllocatorTableEntry::SetChildNode(v11, v32 == v7, v35);
            goto LABEL_47;
          }
        }
      }
      if ( (_DWORD)v27 )
      {
        v36 = &v9[v27];
        if ( v36 )
        {
          if ( (*((_QWORD *)v36 + 1) & 0x20000000000i64) != 0 )
          {
            v35 = LeanRBTree<IWMemAllocatorTableEntry>::SingleRotation(this, v7, v4);
            goto LABEL_46;
          }
        }
      }
LABEL_47:
      *((_QWORD *)_R14 + 1) |= 0x20000000000ui64;
      v37 = 16i64;
      if ( v32 == v7 )
        v37 = 20i64;
      v38 = *(unsigned int *)((char *)&v11->m_address + v37);
      if ( (_DWORD)v38 )
        v39 = &g_iwMemAllocatorPool[v38];
      else
        v39 = NULL;
      *((_QWORD *)v39 + 1) |= 0x20000000000ui64;
      v40 = *(unsigned int *)((char *)&v11->m_address + v37);
      if ( (_DWORD)v40 )
        v41 = &g_iwMemAllocatorPool[v40];
      else
        v41 = NULL;
      v42 = v41->m_childNodeIndices[0];
      if ( v42 )
        v43 = &g_iwMemAllocatorPool[v42];
      else
        v43 = NULL;
      *((_QWORD *)v43 + 1) &= ~0x20000000000ui64;
      v44 = *(unsigned int *)((char *)&v11->m_address + v37);
      if ( (_DWORD)v44 )
        v45 = &g_iwMemAllocatorPool[v44];
      else
        v45 = NULL;
      v46 = v45->m_childNodeIndices[1];
      if ( v46 )
      {
        v3 = this;
        v4 = v63;
        *((_QWORD *)&g_iwMemAllocatorPool[v46] + 1) &= ~0x20000000000ui64;
        v9 = g_iwMemAllocatorPool;
      }
      else
      {
        MEMORY[8] &= ~0x20000000000ui64;
        v9 = g_iwMemAllocatorPool;
        v3 = this;
        v4 = v63;
      }
    }
  }
  _R13 = v65;
  v48 = NULL;
  if ( v65 )
  {
    v49 = v65->m_childNodeIndices[0];
    v50 = *((_QWORD *)v65 + 1);
    if ( v49 )
      v51 = &v9[v49];
    else
      v51 = NULL;
    v52 = v65->m_childNodeIndices[1];
    if ( v52 )
      v53 = &v9[v52];
    else
      v53 = NULL;
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [r13+0], ymm0
    }
    v48 = _R14;
    *((_QWORD *)v65 + 1) ^= (v50 ^ *((_QWORD *)v65 + 1)) & 0x20000000000i64;
    IWMemAllocatorTableEntry::SetChildNode(v65, 0, v51);
    IWMemAllocatorTableEntry::SetChildNode(v65, 1, v53);
    v55 = _R14->m_childNodeIndices[0];
    if ( (_DWORD)v55 )
      v56 = &g_iwMemAllocatorPool[v55];
    else
      v56 = NULL;
    v57 = v56 == NULL;
    v58 = 16i64;
    if ( v57 )
      v58 = 20i64;
    v59 = *(_DWORD *)((char *)&_R14->m_address + v58);
    if ( v59 )
      v60 = &g_iwMemAllocatorPool[v59];
    else
      v60 = NULL;
    v61 = v7->m_childNodeIndices[1];
    if ( (_DWORD)v61 )
      v62 = &g_iwMemAllocatorPool[v61];
    else
      v62 = NULL;
    IWMemAllocatorTableEntry::SetChildNode(v7, v62 == _R14, v60);
    v3 = this;
    --this->m_count;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\lean_rb_tree.h", 431, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not find this node in the tree") )
  {
    __debugbreak();
  }
  if ( p_root.m_childNodeIndices[1] )
    v2 = &g_iwMemAllocatorPool[p_root.m_childNodeIndices[1]];
  v3->mp_root = v2;
  if ( v2 )
    *((_QWORD *)v2 + 1) &= ~0x20000000000ui64;
  return v48;
}

/*
==============
LeanRBTree<IWMemAllocatorTableEntry>::SingleRotation
==============
*/
IWMemAllocatorTableEntry *LeanRBTree<IWMemAllocatorTableEntry>::SingleRotation(LeanRBTree<IWMemAllocatorTableEntry> *this, IWMemAllocatorTableEntry *p_root, bool dir)
{
  bool v4; 
  IWMemAllocatorTableEntry *v5; 
  bool v6; 
  unsigned int v8; 
  IWMemAllocatorTableEntry *v9; 
  unsigned int v10; 

  v4 = !dir;
  v5 = NULL;
  v6 = v4;
  v8 = p_root->m_childNodeIndices[v4];
  if ( v8 )
    v9 = &g_iwMemAllocatorPool[v8];
  else
    v9 = NULL;
  v10 = v9->m_childNodeIndices[dir];
  if ( v10 )
    v5 = &g_iwMemAllocatorPool[v10];
  IWMemAllocatorTableEntry::SetChildNode(p_root, v6, v5);
  IWMemAllocatorTableEntry::SetChildNode(v9, dir, p_root);
  *((_QWORD *)p_root + 1) |= 0x20000000000ui64;
  *((_QWORD *)v9 + 1) &= ~0x20000000000ui64;
  return v9;
}

