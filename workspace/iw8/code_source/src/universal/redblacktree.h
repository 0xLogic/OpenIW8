/*
==============
RedBlackTree_RightRotate<void *,void *>
==============
*/

void __fastcall RedBlackTree_RightRotate<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *node)
{
  ??$RedBlackTree_RightRotate@PEAXPEAX@@YAXPEAU?$RedBlackTree@PEAXPEAX@@PEAU?$RedBlackTreeNode@PEAXPEAX@@@Z(tree, node);
}

/*
==============
RedBlackTree_DeleteNode<void *,void *>
==============
*/

void __fastcall RedBlackTree_DeleteNode<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *node)
{
  ??$RedBlackTree_DeleteNode@PEAXPEAX@@YAXPEAU?$RedBlackTree@PEAXPEAX@@PEAU?$RedBlackTreeNode@PEAXPEAX@@@Z(tree, node);
}

/*
==============
RedBlackTree_InsertNode<void *,void *>
==============
*/

RedBlackTreeNode<void *,void *> *__fastcall RedBlackTree_InsertNode<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *node)
{
  return ??$RedBlackTree_InsertNode@PEAXPEAX@@YAPEAU?$RedBlackTreeNode@PEAXPEAX@@PEAU?$RedBlackTree@PEAXPEAX@@PEAU0@@Z(tree, node);
}

/*
==============
RedBlackTree_Init<void *,void *>
==============
*/

void __fastcall RedBlackTree_Init<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *(__fastcall *AllocNodeCallback)(void *), void *customData)
{
  ??$RedBlackTree_Init@PEAXPEAX@@YAXPEAU?$RedBlackTree@PEAXPEAX@@P6APEAU?$RedBlackTreeNode@PEAXPEAX@@PEAX@Z1@Z(tree, AllocNodeCallback, customData);
}

/*
==============
RedBlackTree_LeftRotate<void *,void *>
==============
*/

void __fastcall RedBlackTree_LeftRotate<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *node)
{
  ??$RedBlackTree_LeftRotate@PEAXPEAX@@YAXPEAU?$RedBlackTree@PEAXPEAX@@PEAU?$RedBlackTreeNode@PEAXPEAX@@@Z(tree, node);
}

/*
==============
RedBlackTree_FindKeyInRange<void *,void *>
==============
*/

RedBlackTreeNode<void *,void *> *__fastcall RedBlackTree_FindKeyInRange<void *,void *>(const RedBlackTree<void *,void *> *tree, void *key, unsigned int range)
{
  return ??$RedBlackTree_FindKeyInRange@PEAXPEAX@@YAPEAU?$RedBlackTreeNode@PEAXPEAX@@PEBU?$RedBlackTree@PEAXPEAX@@PEAXI@Z(tree, key, range);
}

/*
==============
RedBlackTree_FindKey<void *,void *>
==============
*/

RedBlackTreeNode<void *,void *> *__fastcall RedBlackTree_FindKey<void *,void *>(const RedBlackTree<void *,void *> *tree, void *key)
{
  return ??$RedBlackTree_FindKey@PEAXPEAX@@YAPEAU?$RedBlackTreeNode@PEAXPEAX@@PEBU?$RedBlackTree@PEAXPEAX@@PEAX@Z(tree, key);
}

/*
==============
RedBlackTree_ValidateTree<void *,void *>
==============
*/

void __fastcall RedBlackTree_ValidateTree<void *,void *>(RedBlackTree<void *,void *> *tree)
{
  ??$RedBlackTree_ValidateTree@PEAXPEAX@@YAXPEAU?$RedBlackTree@PEAXPEAX@@@Z(tree);
}

/*
==============
RedBlackTree_DeleteNode<void *,void *>
==============
*/
void RedBlackTree_DeleteNode<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *node)
{
  RedBlackTreeNode<void *,void *> *left; 
  RedBlackTreeNode<void *,void *> *parent; 
  RedBlackTreeNode<void *,void *> *right; 
  RedBlackTreeNode<void *,void *> *i; 
  RedBlackTreeNode<void *,void *> *v8; 
  unsigned __int16 color; 
  RedBlackTreeNode<void *,void *> *root; 
  RedBlackTreeNode<void *,void *> *v11; 
  RedBlackTreeNode<void *,void *> *v12; 
  RedBlackTreeNode<void *,void *> *v13; 
  RedBlackTreeNode<void *,void *> *v14; 
  RedBlackTreeNode<void *,void *> *v15; 
  RedBlackTreeNode<void *,void *> *v16; 
  RedBlackTreeNode<void *,void *> *v17; 
  RedBlackTreeNode<void *,void *> *v18; 
  RedBlackTreeNode<void *,void *> *v19; 
  RedBlackTreeNode<void *,void *> *v20; 
  RedBlackTreeNode<void *,void *> *v21; 
  RedBlackTreeNode<void *,void *> *v22; 
  RedBlackTreeNode<void *,void *> *v23; 
  RedBlackTreeNode<void *,void *> *v24; 
  RedBlackTreeNode<void *,void *> *v25; 
  RedBlackTreeNode<void *,void *> *v26; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\redblacktree.h", 280, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\redblacktree.h", 281, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  left = node->left;
  parent = node->parent;
  right = node->right;
  if ( left )
  {
    if ( right )
    {
      v8 = right->left;
      for ( i = node->right; v8; v8 = v8->left )
        i = v8;
    }
    else
    {
      i = node->left;
    }
  }
  else
  {
    i = node->right;
  }
  if ( parent )
  {
    if ( parent->left == node )
      parent->left = i;
    else
      parent->right = i;
  }
  else
  {
    tree->root = i;
  }
  if ( left && right )
  {
    color = i->color;
    i->color = node->color;
    i->left = left;
    left->parent = i;
    if ( i == right )
    {
      root = i->right;
      i->parent = parent;
      parent = i;
    }
    else
    {
      parent = i->parent;
      i->parent = node->parent;
      root = i->right;
      parent->left = root;
      i->right = right;
      right->parent = i;
    }
  }
  else
  {
    color = node->color;
    root = i;
  }
  if ( root )
    root->parent = parent;
  if ( !color )
    return;
  if ( root && !root->color )
    goto LABEL_77;
  v11 = parent;
  if ( root == tree->root )
    goto LABEL_76;
  while ( 1 )
  {
    v12 = parent->left;
    if ( root != v12 )
      break;
    v12 = parent->right;
    if ( !v12->color )
    {
      v12->color = 1;
      v13 = parent->right;
      parent->color = 0;
      parent->right = v13->left;
      v14 = v13->left;
      if ( v14 )
        v14->parent = parent;
      v13->parent = parent->parent;
      v15 = parent->parent;
      if ( parent->parent )
      {
        if ( parent == v15->left )
          v15->left = v13;
        else
          v15->right = v13;
      }
      else
      {
        tree->root = v13;
      }
      v13->left = parent;
      parent->parent = v13;
      v12 = parent->right;
    }
    v16 = v12->left;
    if ( v16 && v16->color != 1 || (v17 = v12->right) != NULL && v17->color != 1 )
    {
      v18 = v12->right;
      if ( !v18 || v18->color == 1 )
      {
        v16->color = 1;
        v12->color = 0;
        RedBlackTree_RightRotate<void *,void *>(tree, v12);
        v12 = parent->right;
      }
      v12->color = parent->color;
      parent->color = 1;
      v12->right->color = 1;
      RedBlackTree_LeftRotate<void *,void *>(tree, parent);
      goto LABEL_75;
    }
LABEL_61:
    v12->color = 0;
    root = v11;
    parent = parent->parent;
    if ( v11->color == 1 )
    {
      v11 = parent;
      if ( root != tree->root )
        continue;
    }
    goto LABEL_76;
  }
  if ( !v12->color )
  {
    v12->color = 1;
    v19 = parent->parent;
    v20 = parent->left;
    parent->color = 0;
    if ( v19 )
    {
      if ( v19->left == parent )
        v19->left = v20;
      else
        v19->right = v20;
    }
    else
    {
      tree->root = v20;
    }
    v20->parent = parent->parent;
    parent->parent = v20;
    v21 = v20->right;
    parent->left = v21;
    if ( v21 )
      v21->parent = parent;
    v20->right = parent;
    v12 = parent->left;
  }
  v22 = v12->left;
  if ( !v22 || v22->color == 1 )
  {
    v23 = v12->right;
    if ( !v23 || v23->color == 1 )
      goto LABEL_61;
  }
  if ( !v22 || v22->color == 1 )
  {
    v12->right->color = 1;
    v12->color = 0;
    RedBlackTree_LeftRotate<void *,void *>(tree, v12);
    v12 = parent->left;
  }
  v12->color = parent->color;
  parent->color = 1;
  v12->left->color = 1;
  v24 = parent->parent;
  v25 = parent->left;
  if ( parent->parent )
  {
    if ( v24->left == parent )
      v24->left = v25;
    else
      v24->right = v25;
  }
  else
  {
    tree->root = v25;
  }
  v25->parent = parent->parent;
  parent->parent = v25;
  v26 = v25->right;
  parent->left = v26;
  if ( v26 )
    v26->parent = parent;
  v25->right = parent;
LABEL_75:
  root = tree->root;
LABEL_76:
  if ( root )
LABEL_77:
    root->color = 1;
}

/*
==============
RedBlackTree_FindKey<void *,void *>
==============
*/
RedBlackTreeNode<void *,void *> *RedBlackTree_FindKey<void *,void *>(const RedBlackTree<void *,void *> *tree, void *key)
{
  RedBlackTreeNode<void *,void *> *result; 

  for ( result = tree->root; result; result = result->key <= key ? result->right : result->left )
  {
    if ( result->key == key )
      break;
  }
  return result;
}

/*
==============
RedBlackTree_FindKeyInRange<void *,void *>
==============
*/
RedBlackTreeNode<void *,void *> *RedBlackTree_FindKeyInRange<void *,void *>(const RedBlackTree<void *,void *> *tree, void *key, unsigned int range)
{
  RedBlackTreeNode<void *,void *> *result; 
  char *v4; 

  result = tree->root;
  while ( result )
  {
    v4 = (char *)result->key;
    if ( key < v4 )
    {
      result = result->left;
    }
    else
    {
      if ( key < &v4[range] )
        return result;
      result = result->right;
    }
  }
  return result;
}

/*
==============
RedBlackTree_Init<void *,void *>
==============
*/
void RedBlackTree_Init<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *(*AllocNodeCallback)(void *), void *customData)
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\redblacktree.h", 125, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  tree->AllocNodeCallback = AllocNodeCallback;
  tree->customData = customData;
  tree->root = NULL;
}

/*
==============
RedBlackTree_InsertNode<void *,void *>
==============
*/
RedBlackTreeNode<void *,void *> *RedBlackTree_InsertNode<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *node)
{
  RedBlackTreeNode<void *,void *> *v2; 
  RedBlackTreeNode<void *,void *> *root; 
  void *key; 
  RedBlackTreeNode<void *,void *> *v6; 
  RedBlackTreeNode<void *,void *> *v7; 
  RedBlackTreeNode<void *,void *> *parent; 
  RedBlackTreeNode<void *,void *> *v9; 
  RedBlackTreeNode<void *,void *> *left; 
  RedBlackTreeNode<void *,void *> *right; 
  RedBlackTreeNode<void *,void *> *v12; 
  RedBlackTreeNode<void *,void *> *v13; 
  RedBlackTreeNode<void *,void *> *v14; 
  RedBlackTreeNode<void *,void *> *v15; 
  RedBlackTreeNode<void *,void *> *v16; 
  RedBlackTreeNode<void *,void *> *v17; 
  RedBlackTreeNode<void *,void *> *v18; 
  RedBlackTreeNode<void *,void *> *v19; 
  RedBlackTreeNode<void *,void *> *v20; 
  RedBlackTreeNode<void *,void *> *v21; 
  RedBlackTreeNode<void *,void *> *v22; 
  RedBlackTreeNode<void *,void *> *v23; 
  RedBlackTreeNode<void *,void *> *v24; 

  v2 = node;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\redblacktree.h", 168, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  root = tree->root;
  key = v2->key;
  if ( tree->root )
  {
    while ( root->key != key )
    {
      if ( root->key <= key )
        root = root->right;
      else
        root = root->left;
      if ( !root )
        goto LABEL_13;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\redblacktree.h", 172, ASSERT_TYPE_ASSERT, "(RedBlackTree_FindKey( tree, node->key ) == 0)", (const char *)&queryFormat, "RedBlackTree_FindKey( tree, node->key ) == NULL") )
      __debugbreak();
  }
LABEL_13:
  v2->parent = NULL;
  v2->left = NULL;
  v2->right = NULL;
  if ( tree->root )
  {
    v2->color = 0;
    v6 = tree->root;
    v7 = NULL;
    if ( tree->root )
    {
      do
      {
        v7 = v6;
        if ( v2->key >= v6->key )
          v6 = v6->right;
        else
          v6 = v6->left;
      }
      while ( v6 );
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\redblacktree.h", 196, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
    {
      __debugbreak();
    }
    v2->parent = v7;
    if ( v2->key >= v7->key )
      v7->right = v2;
    else
      v7->left = v2;
    parent = v2->parent;
    if ( !v2->parent )
    {
LABEL_71:
      tree->root->color = 1;
      return v2;
    }
    while ( 1 )
    {
      if ( parent->color )
        goto LABEL_71;
      v9 = parent->parent;
      left = parent->parent->left;
      if ( parent == left )
      {
        right = v9->right;
        if ( !right || right->color )
        {
          v12 = parent->right;
          if ( v2 == v12 )
          {
            v2 = parent;
            parent->right = v12->left;
            v13 = v12->left;
            if ( v13 )
              v13->parent = parent;
            v12->parent = parent->parent;
            v14 = parent->parent;
            if ( parent->parent )
            {
              if ( parent == v14->left )
                v14->left = v12;
              else
                v14->right = v12;
            }
            else
            {
              tree->root = v12;
            }
            v12->left = parent;
            parent->parent = v12;
            parent = v12;
          }
          parent->color = 1;
          v2->parent->parent->color = 0;
          v15 = v2->parent->parent;
          v16 = v15->parent;
          v17 = v15->left;
          if ( v15->parent )
          {
            if ( v16->left == v15 )
              v16->left = v17;
            else
              v16->right = v17;
          }
          else
          {
            tree->root = v17;
          }
          v17->parent = v15->parent;
          v15->parent = v17;
          v18 = v17->right;
          v15->left = v18;
          if ( v18 )
            v18->parent = v15;
          v17->right = v15;
          goto LABEL_70;
        }
        parent->color = 1;
        right->color = 1;
      }
      else
      {
        if ( !left || left->color )
        {
          v19 = parent->left;
          if ( v2 == v19 )
          {
            v2 = parent;
            if ( v9 )
            {
              if ( left == parent )
                v9->left = v19;
              else
                v9->right = v19;
            }
            else
            {
              tree->root = v19;
            }
            v19->parent = parent->parent;
            parent->parent = v19;
            v20 = v19->right;
            parent->left = v20;
            if ( v20 )
              v20->parent = parent;
            v19->right = parent;
            parent = parent->parent;
          }
          parent->color = 1;
          v2->parent->parent->color = 0;
          v21 = v2->parent->parent;
          v22 = v21->right;
          v21->right = v22->left;
          v23 = v22->left;
          if ( v23 )
            v23->parent = v21;
          v22->parent = v21->parent;
          v24 = v21->parent;
          if ( v21->parent )
          {
            if ( v21 == v24->left )
              v24->left = v22;
            else
              v24->right = v22;
          }
          else
          {
            tree->root = v22;
          }
          v22->left = v21;
          v21->parent = v22;
          goto LABEL_70;
        }
        parent->color = 1;
        left->color = 1;
      }
      v2->parent->parent->color = 0;
      v2 = v2->parent->parent;
LABEL_70:
      parent = v2->parent;
      if ( !v2->parent )
        goto LABEL_71;
    }
  }
  v2->color = 1;
  tree->root = v2;
  return v2;
}

/*
==============
RedBlackTree_LeftRotate<void *,void *>
==============
*/
void RedBlackTree_LeftRotate<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *node)
{
  RedBlackTreeNode<void *,void *> *right; 
  RedBlackTreeNode<void *,void *> *left; 
  RedBlackTreeNode<void *,void *> *parent; 

  right = node->right;
  node->right = right->left;
  left = right->left;
  if ( left )
    left->parent = node;
  right->parent = node->parent;
  parent = node->parent;
  if ( node->parent )
  {
    if ( node == parent->left )
      parent->left = right;
    else
      parent->right = right;
    right->left = node;
    node->parent = right;
  }
  else
  {
    tree->root = right;
    right->left = node;
    node->parent = right;
  }
}

/*
==============
RedBlackTree_RightRotate<void *,void *>
==============
*/
void RedBlackTree_RightRotate<void *,void *>(RedBlackTree<void *,void *> *tree, RedBlackTreeNode<void *,void *> *node)
{
  RedBlackTreeNode<void *,void *> *parent; 
  RedBlackTreeNode<void *,void *> *left; 
  RedBlackTreeNode<void *,void *> *right; 

  parent = node->parent;
  left = node->left;
  if ( node->parent )
  {
    if ( parent->left == node )
      parent->left = left;
    else
      parent->right = left;
  }
  else
  {
    tree->root = left;
  }
  left->parent = node->parent;
  node->parent = left;
  right = left->right;
  node->left = right;
  if ( right )
    right->parent = node;
  left->right = node;
}

/*
==============
RedBlackTree_ValidateTree<void *,void *>
==============
*/
void RedBlackTree_ValidateTree<void *,void *>(RedBlackTree<void *,void *> *tree)
{
  ;
}

