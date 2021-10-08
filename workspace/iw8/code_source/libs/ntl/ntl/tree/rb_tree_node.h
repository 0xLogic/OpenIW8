/*
==============
ntl::red_black_tree_node_base::rotate_left
==============
*/

void __fastcall ntl::red_black_tree_node_base::rotate_left(ntl::red_black_tree_node_base *p_node, ntl::red_black_tree_node_base **pp_root)
{
  ?rotate_left@red_black_tree_node_base@ntl@@SAXPEAV12@PEAPEAV12@@Z(p_node, pp_root);
}

/*
==============
ntl::red_black_tree_node_base::rotate_right
==============
*/

void __fastcall ntl::red_black_tree_node_base::rotate_right(ntl::red_black_tree_node_base *p_node, ntl::red_black_tree_node_base **pp_root)
{
  ?rotate_right@red_black_tree_node_base@ntl@@SAXPEAV12@PEAPEAV12@@Z(p_node, pp_root);
}

/*
==============
ntl::red_black_tree_node_base::get_next
==============
*/

const ntl::red_black_tree_node_base *__fastcall ntl::red_black_tree_node_base::get_next(ntl::red_black_tree_node_base *this)
{
  return ?get_next@red_black_tree_node_base@ntl@@QEBAPEBV12@XZ(this);
}

/*
==============
ntl::red_black_tree_node_base::rebalance_for_erase
==============
*/

void __fastcall ntl::red_black_tree_node_base::rebalance_for_erase(ntl::red_black_tree_node_base *const p_node, ntl::red_black_tree_node_base **pp_root, ntl::red_black_tree_node_base **pp_leftmost, ntl::red_black_tree_node_base **pp_rightmost)
{
  ?rebalance_for_erase@red_black_tree_node_base@ntl@@SAXQEAV12@PEAPEAV12@11@Z(p_node, pp_root, pp_leftmost, pp_rightmost);
}

/*
==============
ntl::red_black_tree_node_base::get_prev
==============
*/

ntl::red_black_tree_node_base *__fastcall ntl::red_black_tree_node_base::get_prev(ntl::red_black_tree_node_base *this)
{
  return ?get_prev@red_black_tree_node_base@ntl@@QEAAPEAV12@XZ(this);
}

/*
==============
ntl::red_black_tree_node_base::get_next
==============
*/

ntl::red_black_tree_node_base *__fastcall ntl::red_black_tree_node_base::get_next(ntl::red_black_tree_node_base *this)
{
  return ?get_next@red_black_tree_node_base@ntl@@QEAAPEAV12@XZ(this);
}

/*
==============
ntl::red_black_tree_node_base::rebalance
==============
*/

void __fastcall ntl::red_black_tree_node_base::rebalance(ntl::red_black_tree_node_base *p_node, ntl::red_black_tree_node_base **pp_root)
{
  ?rebalance@red_black_tree_node_base@ntl@@SAXPEAV12@PEAPEAV12@@Z(p_node, pp_root);
}

/*
==============
ntl::red_black_tree_node_base::get_next
==============
*/
ntl::red_black_tree_node_base *ntl::red_black_tree_node_base::get_next(ntl::red_black_tree_node_base *this)
{
  ntl::red_black_tree_node_base *v1; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *result; 

  v1 = this;
  if ( this->m_color == RB_NODE_COLOR_RED && this->mp_parent->mp_parent == this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree_node.h", 56, ASSERT_TYPE_ASSERT, "( !( m_color == RB_NODE_COLOR_RED && mp_parent->mp_parent == this ) )", (const char *)&queryFormat, "!( m_color == RB_NODE_COLOR_RED && mp_parent->mp_parent == this )") )
    __debugbreak();
  mp_right = v1->mp_right;
  if ( mp_right )
  {
    for ( i = mp_right->mp_left; i; i = i->mp_left )
      mp_right = i;
    return mp_right;
  }
  else
  {
    for ( result = v1->mp_parent; v1 == result->mp_right; result = result->mp_parent )
      v1 = result;
    if ( v1->mp_right == result )
      return v1;
  }
  return result;
}

/*
==============
ntl::red_black_tree_node_base::get_next
==============
*/
ntl::red_black_tree_node_base *ntl::red_black_tree_node_base::get_next(ntl::red_black_tree_node_base *this)
{
  ntl::red_black_tree_node_base *v1; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *result; 

  v1 = this;
  if ( this->m_color == RB_NODE_COLOR_RED && this->mp_parent->mp_parent == this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree_node.h", 91, ASSERT_TYPE_ASSERT, "( !( m_color == RB_NODE_COLOR_RED && mp_parent->mp_parent == this ) )", "Attempting to iterate past the end node of this tree") )
    __debugbreak();
  mp_right = v1->mp_right;
  if ( mp_right )
  {
    for ( i = mp_right->mp_left; i; i = i->mp_left )
      mp_right = i;
    return mp_right;
  }
  else
  {
    for ( result = v1->mp_parent; v1 == result->mp_right; result = result->mp_parent )
      v1 = result;
    if ( v1->mp_right == result )
      return v1;
  }
  return result;
}

/*
==============
ntl::red_black_tree_node_base::rebalance
==============
*/
void ntl::red_black_tree_node_base::rebalance(ntl::red_black_tree_node_base *p_node, ntl::red_black_tree_node_base **pp_root)
{
  ntl::red_black_tree_node_base *v3; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base **p_mp_parent; 
  ntl::red_black_tree_node_base *v7; 
  ntl::red_black_tree_node_base **v8; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *v11; 
  ntl::red_black_tree_node_base *v12; 
  ntl::red_black_tree_node_base *v13; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node_base *v16; 
  ntl::red_black_tree_node_base *v17; 
  ntl::red_black_tree_node_base *v18; 
  ntl::red_black_tree_node_base *v19; 
  ntl::red_black_tree_node_base *v20; 
  ntl::red_black_tree_node_base *v21; 

  v3 = p_node;
  if ( p_node->m_color && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree_node.h", 256, ASSERT_TYPE_ASSERT, "( p_node->m_color == RB_NODE_COLOR_RED )", (const char *)&queryFormat, "p_node->m_color == RB_NODE_COLOR_RED") )
    __debugbreak();
  for ( i = *pp_root; v3 != *pp_root; i = *pp_root )
  {
    mp_parent = v3->mp_parent;
    p_mp_parent = &v3->mp_parent;
    if ( mp_parent->m_color )
      break;
    v7 = mp_parent->mp_parent;
    v8 = &mp_parent->mp_parent;
    mp_left = v7->mp_left;
    if ( mp_parent == mp_left )
    {
      mp_left = v7->mp_right;
      if ( !mp_left || mp_left->m_color )
      {
        mp_right = mp_parent->mp_right;
        if ( v3 == mp_right )
        {
          v3 = v3->mp_parent;
          mp_parent->mp_right = mp_right->mp_left;
          v11 = mp_right->mp_left;
          if ( v11 )
            v11->mp_parent = v3;
          mp_right->mp_parent = *v8;
          if ( v3 == *pp_root )
          {
            *pp_root = mp_right;
            p_mp_parent = v8;
            mp_right->mp_left = v3;
            *v8 = mp_right;
          }
          else
          {
            v12 = *v8;
            if ( v3 == (*v8)->mp_left )
              v12->mp_left = mp_right;
            else
              v12->mp_right = mp_right;
            p_mp_parent = v8;
            mp_right->mp_left = v3;
            *v8 = mp_right;
          }
        }
        else
        {
          mp_right = v3->mp_parent;
        }
        mp_right->m_color = RB_NODE_COLOR_BLACK;
        (*p_mp_parent)->mp_parent->m_color = RB_NODE_COLOR_RED;
        v13 = (*p_mp_parent)->mp_parent;
        v14 = v13->mp_left;
        v13->mp_left = v14->mp_right;
        v15 = v14->mp_right;
        if ( v15 )
          v15->mp_parent = v13;
        v14->mp_parent = v13->mp_parent;
        if ( v13 == *pp_root )
        {
          *pp_root = v14;
          v14->mp_right = v13;
        }
        else
        {
          v16 = v13->mp_parent;
          if ( v13 == v16->mp_right )
            v16->mp_right = v14;
          else
            v16->mp_left = v14;
          v14->mp_right = v13;
        }
LABEL_47:
        v13->mp_parent = v14;
        continue;
      }
    }
    else if ( !mp_left || mp_left->m_color )
    {
      v17 = mp_parent->mp_left;
      if ( v3 == v17 )
      {
        v3 = v3->mp_parent;
        mp_parent = mp_parent->mp_left;
        v3->mp_left = v17->mp_right;
        v18 = v17->mp_right;
        if ( v18 )
          v18->mp_parent = v3;
        mp_parent->mp_parent = *v8;
        if ( v3 == *pp_root )
        {
          *pp_root = mp_parent;
        }
        else
        {
          v19 = *v8;
          if ( v3 == (*v8)->mp_right )
            v19->mp_right = mp_parent;
          else
            v19->mp_left = mp_parent;
        }
        mp_parent->mp_right = v3;
        p_mp_parent = v8;
        *v8 = mp_parent;
      }
      mp_parent->m_color = RB_NODE_COLOR_BLACK;
      (*p_mp_parent)->mp_parent->m_color = RB_NODE_COLOR_RED;
      v13 = (*p_mp_parent)->mp_parent;
      v14 = v13->mp_right;
      v13->mp_right = v14->mp_left;
      v20 = v14->mp_left;
      if ( v20 )
        v20->mp_parent = v13;
      v14->mp_parent = v13->mp_parent;
      if ( v13 == *pp_root )
      {
        *pp_root = v14;
      }
      else
      {
        v21 = v13->mp_parent;
        if ( v13 == v21->mp_left )
          v21->mp_left = v14;
        else
          v21->mp_right = v14;
      }
      v14->mp_left = v13;
      goto LABEL_47;
    }
    mp_parent->m_color = RB_NODE_COLOR_BLACK;
    mp_left->m_color = RB_NODE_COLOR_BLACK;
    (*p_mp_parent)->mp_parent->m_color = RB_NODE_COLOR_RED;
    v3 = (*p_mp_parent)->mp_parent;
  }
  i->m_color = RB_NODE_COLOR_BLACK;
}

/*
==============
ntl::red_black_tree_node_base::rebalance_for_erase
==============
*/
void ntl::red_black_tree_node_base::rebalance_for_erase(ntl::red_black_tree_node_base *const p_node, ntl::red_black_tree_node_base **pp_root, ntl::red_black_tree_node_base **pp_leftmost, ntl::red_black_tree_node_base **pp_rightmost)
{
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *v9; 
  ntl::red_black_tree_node_base *k; 
  ntl::red_black_tree_node_base *v11; 
  ntl::red_black_tree_node_base *v12; 
  ntl::red_black_tree_node_base::ENodeColor m_color; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v17; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v19; 
  ntl::red_black_tree_node_base *v20; 
  ntl::red_black_tree_node_base *v21; 
  ntl::red_black_tree_node_base *v22; 
  ntl::red_black_tree_node_base *v23; 
  ntl::red_black_tree_node_base *v24; 
  ntl::red_black_tree_node_base *v25; 
  ntl::red_black_tree_node_base *v26; 
  ntl::red_black_tree_node_base *v27; 
  ntl::red_black_tree_node_base *v28; 
  ntl::red_black_tree_node_base *v29; 
  ntl::red_black_tree_node_base *v30; 
  ntl::red_black_tree_node_base *v31; 
  ntl::red_black_tree_node_base *v32; 
  ntl::red_black_tree_node_base *v33; 
  ntl::red_black_tree_node_base *v34; 

  mp_left = p_node->mp_left;
  if ( !mp_left )
  {
    mp_right = p_node->mp_right;
LABEL_3:
    mp_parent = p_node->mp_parent;
    if ( mp_right )
      mp_right->mp_parent = mp_parent;
    if ( *pp_root == p_node )
    {
      *pp_root = mp_right;
    }
    else
    {
      v14 = p_node->mp_parent;
      if ( v14->mp_left == p_node )
        v14->mp_left = mp_right;
      else
        v14->mp_right = mp_right;
    }
    if ( *pp_leftmost == p_node )
    {
      if ( p_node->mp_right )
      {
        v15 = mp_right->mp_left;
        for ( i = mp_right; v15; v15 = v15->mp_left )
          i = v15;
        *pp_leftmost = i;
      }
      else
      {
        *pp_leftmost = p_node->mp_parent;
      }
    }
    if ( *pp_rightmost == p_node )
    {
      if ( p_node->mp_left )
      {
        v17 = mp_right->mp_right;
        for ( j = mp_right; v17; v17 = v17->mp_right )
          j = v17;
        *pp_rightmost = j;
      }
      else
      {
        *pp_rightmost = p_node->mp_parent;
      }
    }
    goto LABEL_38;
  }
  v9 = p_node->mp_right;
  if ( !v9 )
  {
    mp_right = mp_left;
    goto LABEL_3;
  }
  for ( k = v9->mp_left; k; k = k->mp_left )
    v9 = k;
  mp_right = v9->mp_right;
  if ( v9 == p_node )
    goto LABEL_3;
  mp_left->mp_parent = v9;
  v9->mp_left = p_node->mp_left;
  if ( v9 == p_node->mp_right )
  {
    mp_parent = v9;
  }
  else
  {
    mp_parent = v9->mp_parent;
    v11 = mp_parent;
    if ( mp_right )
    {
      mp_right->mp_parent = mp_parent;
      v11 = v9->mp_parent;
    }
    v11->mp_left = mp_right;
    v9->mp_right = p_node->mp_right;
    p_node->mp_right->mp_parent = v9;
  }
  if ( *pp_root == p_node )
  {
    *pp_root = v9;
  }
  else
  {
    v12 = p_node->mp_parent;
    if ( v12->mp_left == p_node )
      v12->mp_left = v9;
    else
      v12->mp_right = v9;
  }
  v9->mp_parent = p_node->mp_parent;
  m_color = v9->m_color;
  v9->m_color = p_node->m_color;
  p_node->m_color = m_color;
LABEL_38:
  if ( p_node->m_color )
  {
    if ( mp_right != *pp_root )
    {
      do
      {
        v19 = mp_parent;
        if ( mp_right )
        {
          if ( mp_right->m_color != RB_NODE_COLOR_BLACK )
            break;
        }
        v20 = mp_parent->mp_left;
        if ( mp_right == v20 )
        {
          v20 = mp_parent->mp_right;
          if ( v20->m_color == RB_NODE_COLOR_RED )
          {
            v20->m_color = RB_NODE_COLOR_BLACK;
            v21 = mp_parent->mp_right;
            mp_parent->m_color = RB_NODE_COLOR_RED;
            mp_parent->mp_right = v21->mp_left;
            v22 = v21->mp_left;
            if ( v22 )
              v22->mp_parent = mp_parent;
            v21->mp_parent = mp_parent->mp_parent;
            if ( mp_parent == *pp_root )
            {
              *pp_root = v21;
            }
            else
            {
              v23 = mp_parent->mp_parent;
              if ( mp_parent == v23->mp_left )
                v23->mp_left = v21;
              else
                v23->mp_right = v21;
            }
            v21->mp_left = mp_parent;
            mp_parent->mp_parent = v21;
            v20 = mp_parent->mp_right;
          }
          v24 = v20->mp_left;
          if ( v24 && v24->m_color != RB_NODE_COLOR_BLACK || (v25 = v20->mp_right) != NULL && v25->m_color != RB_NODE_COLOR_BLACK )
          {
            v26 = v20->mp_right;
            if ( !v26 || v26->m_color == RB_NODE_COLOR_BLACK )
            {
              if ( v24 )
                v24->m_color = RB_NODE_COLOR_BLACK;
              v20->m_color = RB_NODE_COLOR_RED;
              ntl::red_black_tree_node_base::rotate_right(v20, pp_root);
              v20 = mp_parent->mp_right;
            }
            v20->m_color = mp_parent->m_color;
            mp_parent->m_color = RB_NODE_COLOR_BLACK;
            v27 = v20->mp_right;
            if ( v27 )
              v27->m_color = RB_NODE_COLOR_BLACK;
            ntl::red_black_tree_node_base::rotate_left(mp_parent, pp_root);
            break;
          }
        }
        else
        {
          if ( v20->m_color == RB_NODE_COLOR_RED )
          {
            v20->m_color = RB_NODE_COLOR_BLACK;
            v28 = mp_parent->mp_left;
            mp_parent->m_color = RB_NODE_COLOR_RED;
            mp_parent->mp_left = v28->mp_right;
            v29 = v28->mp_right;
            if ( v29 )
              v29->mp_parent = mp_parent;
            v28->mp_parent = mp_parent->mp_parent;
            if ( mp_parent == *pp_root )
            {
              *pp_root = v28;
            }
            else
            {
              v30 = mp_parent->mp_parent;
              if ( mp_parent == v30->mp_right )
                v30->mp_right = v28;
              else
                v30->mp_left = v28;
            }
            v28->mp_right = mp_parent;
            mp_parent->mp_parent = v28;
            v20 = mp_parent->mp_left;
          }
          v31 = v20->mp_right;
          if ( v31 && v31->m_color != RB_NODE_COLOR_BLACK || (v32 = v20->mp_left) != NULL && v32->m_color != RB_NODE_COLOR_BLACK )
          {
            v33 = v20->mp_left;
            if ( !v33 || v33->m_color == RB_NODE_COLOR_BLACK )
            {
              if ( v31 )
                v31->m_color = RB_NODE_COLOR_BLACK;
              v20->m_color = RB_NODE_COLOR_RED;
              ntl::red_black_tree_node_base::rotate_left(v20, pp_root);
              v20 = mp_parent->mp_left;
            }
            v20->m_color = mp_parent->m_color;
            mp_parent->m_color = RB_NODE_COLOR_BLACK;
            v34 = v20->mp_left;
            if ( v34 )
              v34->m_color = RB_NODE_COLOR_BLACK;
            ntl::red_black_tree_node_base::rotate_right(mp_parent, pp_root);
            break;
          }
        }
        v20->m_color = RB_NODE_COLOR_RED;
        mp_right = mp_parent;
        mp_parent = mp_parent->mp_parent;
      }
      while ( v19 != *pp_root );
    }
    if ( mp_right )
      mp_right->m_color = RB_NODE_COLOR_BLACK;
  }
}

/*
==============
ntl::red_black_tree_node_base::rotate_left
==============
*/
void ntl::red_black_tree_node_base::rotate_left(ntl::red_black_tree_node_base *p_node, ntl::red_black_tree_node_base **pp_root)
{
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *mp_parent; 

  mp_right = p_node->mp_right;
  p_node->mp_right = mp_right->mp_left;
  mp_left = mp_right->mp_left;
  if ( mp_left )
    mp_left->mp_parent = p_node;
  mp_right->mp_parent = p_node->mp_parent;
  if ( p_node == *pp_root )
  {
    *pp_root = mp_right;
    mp_right->mp_left = p_node;
    p_node->mp_parent = mp_right;
  }
  else
  {
    mp_parent = p_node->mp_parent;
    if ( p_node == mp_parent->mp_left )
      mp_parent->mp_left = mp_right;
    else
      mp_parent->mp_right = mp_right;
    mp_right->mp_left = p_node;
    p_node->mp_parent = mp_right;
  }
}

/*
==============
ntl::red_black_tree_node_base::rotate_right
==============
*/
void ntl::red_black_tree_node_base::rotate_right(ntl::red_black_tree_node_base *p_node, ntl::red_black_tree_node_base **pp_root)
{
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *mp_parent; 

  mp_left = p_node->mp_left;
  p_node->mp_left = mp_left->mp_right;
  mp_right = mp_left->mp_right;
  if ( mp_right )
    mp_right->mp_parent = p_node;
  mp_left->mp_parent = p_node->mp_parent;
  if ( p_node == *pp_root )
  {
    *pp_root = mp_left;
    mp_left->mp_right = p_node;
    p_node->mp_parent = mp_left;
  }
  else
  {
    mp_parent = p_node->mp_parent;
    if ( p_node == mp_parent->mp_right )
      mp_parent->mp_right = mp_left;
    else
      mp_parent->mp_left = mp_left;
    mp_left->mp_right = p_node;
    p_node->mp_parent = mp_left;
  }
}

/*
==============
ntl::red_black_tree_node_base::get_prev
==============
*/
ntl::red_black_tree_node_base *ntl::red_black_tree_node_base::get_prev(ntl::red_black_tree_node_base *this)
{
  ntl::red_black_tree_node_base *result; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v5; 

  if ( this->m_color == RB_NODE_COLOR_RED && this->mp_parent->mp_parent == this )
    return this->mp_right;
  mp_left = this->mp_left;
  if ( mp_left )
  {
    for ( i = mp_left->mp_right; i; i = i->mp_right )
      mp_left = i;
    return mp_left;
  }
  else
  {
    result = this->mp_parent;
    if ( this == result->mp_left )
    {
      do
      {
        v5 = result;
        result = result->mp_parent;
      }
      while ( v5 == result->mp_left );
    }
  }
  return result;
}

