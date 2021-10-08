/*
==============
IWMemProfileNode::Init
==============
*/

void __fastcall IWMemProfileNode::Init(IWMemProfileNode *this, const char *p_name)
{
  ?Init@IWMemProfileNode@@QEAAXPEBD@Z(this, p_name);
}

/*
==============
IWMemProfileNode::GetSanitizedName
==============
*/

void __fastcall IWMemProfileNode::GetSanitizedName(IWMemProfileNode *this, char *dest, const int trimLen)
{
  ?GetSanitizedName@IWMemProfileNode@@QEBAXPEADH@Z(this, dest, trimLen);
}

/*
==============
IWMemProfileNode::FindChild
==============
*/

IWMemProfileNode *__fastcall IWMemProfileNode::FindChild(IWMemProfileNode *this, const char *p_name)
{
  return ?FindChild@IWMemProfileNode@@QEAAPEAV1@PEBD@Z(this, p_name);
}

/*
==============
IWMemProfileNode::FindChild
==============
*/
IntrusiveTreeNode<IWMemProfileNode> *IWMemProfileNode::FindChild(IWMemProfileNode *this, const char *p_name)
{
  IntrusiveTreeNode<IWMemProfileNode> *mp_first_child; 

  mp_first_child = this->mp_first_child;
  if ( !mp_first_child )
    return 0i64;
  while ( 1 )
  {
    if ( mp_first_child->mp_parent != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_node.cpp", 47, ASSERT_TYPE_ASSERT, "(p_walk->GetParent() == this)", (const char *)&queryFormat, "p_walk->GetParent() == this") )
      __debugbreak();
    if ( (const char *)mp_first_child[1].mp_parent == p_name )
      break;
    mp_first_child = mp_first_child->mp_next_sibling;
    if ( !mp_first_child )
      return 0i64;
  }
  return mp_first_child;
}

/*
==============
IWMemProfileNode::GetSanitizedName
==============
*/
void IWMemProfileNode::GetSanitizedName(IWMemProfileNode *this, char *dest, const int trimLen)
{
  char *v4; 
  const char *mp_name; 
  int v7; 
  unsigned __int64 v8; 
  __int64 v9; 

  v4 = dest;
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_node.cpp", 68, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !this->mp_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_node.cpp", 69, ASSERT_TYPE_ASSERT, "(mp_name)", (const char *)&queryFormat, "mp_name") )
    __debugbreak();
  mp_name = this->mp_name;
  v7 = 0;
  v8 = *(unsigned __int8 *)mp_name;
  if ( (_BYTE)v8 )
  {
    v9 = 0x100000002400i64;
    do
    {
      if ( v7 >= trimLen )
        break;
      ++mp_name;
      if ( (unsigned __int8)v8 > 0x2Cu || !_bittest64(&v9, v8) )
      {
        *v4++ = v8;
        ++v7;
      }
      v8 = *(unsigned __int8 *)mp_name;
    }
    while ( (_BYTE)v8 );
    *v4 = 0;
  }
  else
  {
    *v4 = 0;
  }
}

/*
==============
IWMemProfileNode::Init
==============
*/
void IWMemProfileNode::Init(IWMemProfileNode *this, const char *p_name)
{
  if ( Com_IsVAString(p_name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_node.cpp", 27, ASSERT_TYPE_ASSERT, "(!Com_IsVAString( p_name ))", (const char *)&queryFormat, "!Com_IsVAString( p_name )") )
    __debugbreak();
  this->mp_name = p_name;
  this->mp_parent = NULL;
  this->mp_first_child = NULL;
  this->mp_next_sibling = NULL;
  this->m_numAllocs = 0;
  this->m_threadReferences = 0;
}

