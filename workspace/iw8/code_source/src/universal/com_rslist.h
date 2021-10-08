/*
==============
RList<StreamNextTailAddress>::RList<StreamNextTailAddress>
==============
*/

void __fastcall RList<StreamNextTailAddress>::RList<StreamNextTailAddress>(RList<StreamNextTailAddress> *this)
{
  ??0?$RList@UStreamNextTailAddress@@@@QEAA@XZ(this);
}

/*
==============
RList<StreamDefragAllocNode>::RemoveNode
==============
*/

int __fastcall RList<StreamDefragAllocNode>::RemoveNode(RList<StreamDefragAllocNode> *this, StreamDefragAllocNode *node, StreamDefragAllocNode *prevNode)
{
  return ?RemoveNode@?$RList@UStreamDefragAllocNode@@@@AEAAHPEAUStreamDefragAllocNode@@0@Z(this, node, prevNode);
}

/*
==============
RList<StreamDefragAllocNode>::Remove
==============
*/

void __fastcall RList<StreamDefragAllocNode>::Remove(RList<StreamDefragAllocNode> *this, StreamDefragAllocNode *nodeToRemove)
{
  ?Remove@?$RList@UStreamDefragAllocNode@@@@QEAAXPEAUStreamDefragAllocNode@@@Z(this, nodeToRemove);
}

/*
==============
RSList<StreamDefragCommand>::RemoveNode
==============
*/

int __fastcall RSList<StreamDefragCommand>::RemoveNode(RSList<StreamDefragCommand> *this, StreamDefragCommand *node, StreamDefragCommand *prevNode)
{
  return ?RemoveNode@?$RSList@UStreamDefragCommand@@@@AEAAHPEAUStreamDefragCommand@@0@Z(this, node, prevNode);
}

/*
==============
RSList<StreamDefragCommand>::RSList<StreamDefragCommand>
==============
*/

void __fastcall RSList<StreamDefragCommand>::RSList<StreamDefragCommand>(RSList<StreamDefragCommand> *this)
{
  ??0?$RSList@UStreamDefragCommand@@@@QEAA@XZ(this);
}

/*
==============
RList<StreamDefragAllocNode>::PushBack
==============
*/

void __fastcall RList<StreamDefragAllocNode>::PushBack(RList<StreamDefragAllocNode> *this, StreamDefragAllocNode *node)
{
  ?PushBack@?$RList@UStreamDefragAllocNode@@@@QEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
RList<StreamNextTailAddress>::PushBack
==============
*/

void __fastcall RList<StreamNextTailAddress>::PushBack(RList<StreamNextTailAddress> *this, StreamNextTailAddress *node)
{
  ?PushBack@?$RList@UStreamNextTailAddress@@@@QEAAXPEAUStreamNextTailAddress@@@Z(this, node);
}

/*
==============
RSList<StreamDefragCommand>::PushBack
==============
*/

void __fastcall RSList<StreamDefragCommand>::PushBack(RSList<StreamDefragCommand> *this, StreamDefragCommand *node)
{
  ?PushBack@?$RSList@UStreamDefragCommand@@@@QEAAXPEAUStreamDefragCommand@@@Z(this, node);
}

/*
==============
RStackThreadSafe<StreamDefragCommand>::Pop
==============
*/

StreamDefragCommand *__fastcall RStackThreadSafe<StreamDefragCommand>::Pop(RStackThreadSafe<StreamDefragCommand> *this)
{
  return ?Pop@?$RStackThreadSafe@UStreamDefragCommand@@@@QEAAPEAUStreamDefragCommand@@XZ(this);
}

/*
==============
RList<StreamDefragAllocNode>::PushFront
==============
*/

void __fastcall RList<StreamDefragAllocNode>::PushFront(RList<StreamDefragAllocNode> *this, StreamDefragAllocNode *node)
{
  ?PushFront@?$RList@UStreamDefragAllocNode@@@@QEAAXPEAUStreamDefragAllocNode@@@Z(this, node);
}

/*
==============
RStackThreadSafe<StreamDefragCommand>::Push
==============
*/

void __fastcall RStackThreadSafe<StreamDefragCommand>::Push(RStackThreadSafe<StreamDefragCommand> *this, StreamDefragCommand *node)
{
  ?Push@?$RStackThreadSafe@UStreamDefragCommand@@@@QEAAXPEAUStreamDefragCommand@@@Z(this, node);
}

/*
==============
RSList<BackendCommand>::PushBack
==============
*/

void __fastcall RSList<BackendCommand>::PushBack(RSList<BackendCommand> *this, BackendCommand *node)
{
  ?PushBack@?$RSList@UBackendCommand@@@@QEAAXPEAUBackendCommand@@@Z(this, node);
}

/*
==============
RList<StreamDefragAllocNode>::PopFront
==============
*/

StreamDefragAllocNode *__fastcall RList<StreamDefragAllocNode>::PopFront(RList<StreamDefragAllocNode> *this)
{
  return ?PopFront@?$RList@UStreamDefragAllocNode@@@@QEAAPEAUStreamDefragAllocNode@@XZ(this);
}

/*
==============
RSList<BackendCommand>::PushBack
==============
*/
void RSList<BackendCommand>::PushBack(RSList<BackendCommand> *this, BackendCommand *node)
{
  BackendCommand *mTail; 
  BackendCommand *v5; 
  __int64 v6; 
  int v7; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 47, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0xFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 48, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  mTail = this->mTail;
  if ( mTail )
  {
    if ( (*(_DWORD *)mTail & 0xFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 52, ASSERT_TYPE_ASSERT, "(mTail->next == 0)", (const char *)&queryFormat, "mTail->next == 0") )
      __debugbreak();
    if ( !this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 53, ASSERT_TYPE_ASSERT, "(mHead)", (const char *)&queryFormat, "mHead") )
      __debugbreak();
    *(_DWORD *)this->mTail ^= (*(_DWORD *)this->mTail ^ ((int)((_DWORD)node - (unsigned __int64)this->mTail) / 48)) & 0xFFFFFF;
    v5 = this->mTail;
    v6 = node - v5;
    v7 = *(_DWORD *)v5 << 8;
    if ( (__int64)v7 >> 8 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 56, ASSERT_TYPE_ASSERT, "( mTail->next ) == ( node - mTail )", "%s == %s\n\t%lli, %lli", "mTail->next", "node - mTail", (__int64)v7 >> 8, v6) )
      __debugbreak();
  }
  else
  {
    if ( this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 61, ASSERT_TYPE_ASSERT, "(mHead == nullptr)", (const char *)&queryFormat, "mHead == nullptr") )
      __debugbreak();
    this->mHead = node;
  }
  this->mTail = node;
}

/*
==============
RList<StreamNextTailAddress>::RList<StreamNextTailAddress>
==============
*/
void RList<StreamNextTailAddress>::RList<StreamNextTailAddress>(RList<StreamNextTailAddress> *this)
{
  this->mHead = NULL;
  this->mTail = NULL;
}

/*
==============
RSList<StreamDefragCommand>::RSList<StreamDefragCommand>
==============
*/
void RSList<StreamDefragCommand>::RSList<StreamDefragCommand>(RSList<StreamDefragCommand> *this)
{
  this->mHead = NULL;
  this->mTail = NULL;
}

/*
==============
RStackThreadSafe<StreamDefragCommand>::Pop
==============
*/
StreamDefragCommand *RStackThreadSafe<StreamDefragCommand>::Pop(RStackThreadSafe<StreamDefragCommand> *this)
{
  StreamDefragCommand *mHead; 
  __int64 v3; 
  signed __int64 v4; 

  mHead = this->mHead;
  if ( !this->mHead )
    return 0i64;
  v3 = (unsigned __int8)this & 7;
  while ( 1 )
  {
    v4 = *((_DWORD *)mHead + 13) << 21 ? (signed __int64)&mHead[(__int64)(int)(*((_DWORD *)mHead + 13) << 21) >> 21] : 0i64;
    if ( v3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", this) )
        __debugbreak();
    }
    if ( mHead == (StreamDefragCommand *)_InterlockedCompareExchange64((volatile signed __int64 *)this, v4, (signed __int64)mHead) )
      break;
    mHead = this->mHead;
    if ( !this->mHead )
      return 0i64;
  }
  *((_DWORD *)mHead + 13) &= 0xFFFFF800;
  return mHead;
}

/*
==============
RList<StreamDefragAllocNode>::PopFront
==============
*/
StreamDefragAllocNode *RList<StreamDefragAllocNode>::PopFront(RList<StreamDefragAllocNode> *this)
{
  StreamDefragAllocNode *mHead; 
  StreamDefragAllocNode *v4; 
  StreamDefragAllocNode *mTail; 

  mHead = this->mHead;
  if ( this->mHead )
  {
    if ( *(_DWORD *)mHead << 13 )
    {
      v4 = &mHead[(__int64)(int)(*(_DWORD *)mHead << 13) >> 13];
      this->mHead = v4;
      *((_DWORD *)v4 + 4) &= 0xFFF80000;
      *(_DWORD *)mHead &= 0xFFF80000;
      *((_DWORD *)mHead + 4) &= 0xFFF80000;
      mTail = this->mTail;
      if ( mTail && (*(_DWORD *)mTail & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 425, ASSERT_TYPE_ASSERT, "(mTail == nullptr || mTail->next == 0)", (const char *)&queryFormat, "mTail == nullptr || mTail->next == 0") )
        __debugbreak();
      return mHead;
    }
    else
    {
      if ( this->mTail != mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 412, ASSERT_TYPE_ASSERT, "(mTail == mHead)", (const char *)&queryFormat, "mTail == mHead") )
        __debugbreak();
      if ( (*((_DWORD *)mHead + 4) & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 413, ASSERT_TYPE_ASSERT, "(node->prev == 0)", (const char *)&queryFormat, "node->prev == 0") )
        __debugbreak();
      this->mHead = NULL;
      this->mTail = NULL;
      return mHead;
    }
  }
  else
  {
    if ( this->mTail )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 406, ASSERT_TYPE_ASSERT, "(mTail == nullptr)", (const char *)&queryFormat, "mTail == nullptr") )
        __debugbreak();
    }
    return 0i64;
  }
}

/*
==============
RStackThreadSafe<StreamDefragCommand>::Push
==============
*/
void RStackThreadSafe<StreamDefragCommand>::Push(RStackThreadSafe<StreamDefragCommand> *this, StreamDefragCommand *node)
{
  StreamDefragCommand *mHead; 
  unsigned int v5; 
  __int64 v6; 
  int v7; 
  int v8; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 718, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*((_DWORD *)node + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 719, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  do
  {
    mHead = this->mHead;
    v5 = *((_DWORD *)node + 13) & 0xFFFFF800;
    if ( this->mHead )
    {
      v6 = mHead - node;
      v7 = v5 | ((__int16)((_WORD)mHead - (_WORD)node) / 56) & 0x7FF;
      *((_DWORD *)node + 13) = v7;
      v8 = v7 << 21;
      if ( (__int64)v8 >> 21 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 728, ASSERT_TYPE_ASSERT, "( node->next ) == ( curHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "curHead - node", (__int64)v8 >> 21, v6) )
        __debugbreak();
    }
    else
    {
      *((_DWORD *)node + 13) = v5;
    }
    if ( ((unsigned __int8)this & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 128, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", this) )
      __debugbreak();
  }
  while ( mHead != (StreamDefragCommand *)_InterlockedCompareExchange64((volatile signed __int64 *)this, (signed __int64)node, (signed __int64)mHead) );
}

/*
==============
RList<StreamDefragAllocNode>::PushBack
==============
*/
void RList<StreamDefragAllocNode>::PushBack(RList<StreamDefragAllocNode> *this, StreamDefragAllocNode *node)
{
  StreamDefragAllocNode *mTail; 
  StreamDefragAllocNode *v5; 
  int v6; 
  int v7; 
  signed __int64 v8; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 350, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 351, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 352, ASSERT_TYPE_ASSERT, "(node->prev == 0)", (const char *)&queryFormat, "node->prev == 0") )
    __debugbreak();
  mTail = this->mTail;
  if ( mTail )
  {
    if ( (*(_DWORD *)mTail & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 356, ASSERT_TYPE_ASSERT, "(mTail->next == 0)", (const char *)&queryFormat, "mTail->next == 0") )
      __debugbreak();
    if ( !this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 357, ASSERT_TYPE_ASSERT, "(mHead)", (const char *)&queryFormat, "mHead") )
      __debugbreak();
    *(_DWORD *)this->mTail ^= (*(_DWORD *)this->mTail ^ ((int)((_DWORD)node - (unsigned __int64)this->mTail) / 20)) & 0x7FFFF;
    v5 = this->mTail;
    v6 = *(_DWORD *)v5 << 13;
    if ( (__int64)v6 >> 13 != node - v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 360, ASSERT_TYPE_ASSERT, "( mTail->next ) == ( node - mTail )", "%s == %s\n\t%lli, %lli", "mTail->next", "node - mTail", (__int64)v6 >> 13, node - v5) )
      __debugbreak();
    *((_DWORD *)node + 4) ^= (*((_DWORD *)node + 4) ^ ((LODWORD(this->mTail) - (int)node) / 20)) & 0x7FFFF;
    v7 = *((_DWORD *)node + 4) << 13;
    v8 = this->mTail - node;
    if ( (__int64)v7 >> 13 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 362, ASSERT_TYPE_ASSERT, "( node->prev ) == ( mTail - node )", "%s == %s\n\t%lli, %lli", "node->prev", "mTail - node", (__int64)v7 >> 13, v8) )
      __debugbreak();
  }
  else
  {
    if ( this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 367, ASSERT_TYPE_ASSERT, "(mHead == nullptr)", (const char *)&queryFormat, "mHead == nullptr") )
      __debugbreak();
    this->mHead = node;
  }
  this->mTail = node;
}

/*
==============
RList<StreamNextTailAddress>::PushBack
==============
*/
void RList<StreamNextTailAddress>::PushBack(RList<StreamNextTailAddress> *this, StreamNextTailAddress *node)
{
  StreamNextTailAddress *mTail; 
  StreamNextTailAddress *v5; 
  __int64 v6; 
  signed __int64 v7; 
  __int64 v8; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 350, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_WORD *)node + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 351, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0xFFFF0000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 352, ASSERT_TYPE_ASSERT, "(node->prev == 0)", (const char *)&queryFormat, "node->prev == 0") )
    __debugbreak();
  mTail = this->mTail;
  if ( mTail )
  {
    if ( *((_WORD *)mTail + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 356, ASSERT_TYPE_ASSERT, "(mTail->next == 0)", (const char *)&queryFormat, "mTail->next == 0") )
      __debugbreak();
    if ( !this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 357, ASSERT_TYPE_ASSERT, "(mHead)", (const char *)&queryFormat, "mHead") )
      __debugbreak();
    *((_WORD *)this->mTail + 8) = (__int16)((_WORD)node - (unsigned __int64)this->mTail) / 24;
    v5 = this->mTail;
    v6 = *((__int16 *)v5 + 8);
    if ( v6 != node - v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 360, ASSERT_TYPE_ASSERT, "( mTail->next ) == ( node - mTail )", "%s == %s\n\t%lli, %lli", "mTail->next", "node - mTail", v6, node - v5) )
      __debugbreak();
    *((_WORD *)node + 9) = (__int16)(LOWORD(this->mTail) - (_WORD)node) / 24;
    v7 = this->mTail - node;
    v8 = (__int64)*((int *)node + 4) >> 16;
    if ( v8 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 362, ASSERT_TYPE_ASSERT, "( node->prev ) == ( mTail - node )", "%s == %s\n\t%lli, %lli", "node->prev", "mTail - node", v8, v7) )
      __debugbreak();
  }
  else
  {
    if ( this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 367, ASSERT_TYPE_ASSERT, "(mHead == nullptr)", (const char *)&queryFormat, "mHead == nullptr") )
      __debugbreak();
    this->mHead = node;
  }
  this->mTail = node;
}

/*
==============
RSList<StreamDefragCommand>::PushBack
==============
*/
void RSList<StreamDefragCommand>::PushBack(RSList<StreamDefragCommand> *this, StreamDefragCommand *node)
{
  StreamDefragCommand *mTail; 
  StreamDefragCommand *v5; 
  StreamDefragCommand *v6; 
  __int64 v7; 
  int v8; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 47, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*((_DWORD *)node + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 48, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  mTail = this->mTail;
  if ( mTail )
  {
    if ( (*((_DWORD *)mTail + 13) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 52, ASSERT_TYPE_ASSERT, "(mTail->next == 0)", (const char *)&queryFormat, "mTail->next == 0") )
      __debugbreak();
    if ( !this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 53, ASSERT_TYPE_ASSERT, "(mHead)", (const char *)&queryFormat, "mHead") )
      __debugbreak();
    v5 = this->mTail;
    *((_DWORD *)v5 + 13) &= 0xFFFFF800;
    *((_DWORD *)v5 + 13) |= ((__int16)((_WORD)node - (_WORD)v5) / 56) & 0x7FF;
    v6 = this->mTail;
    v7 = node - v6;
    v8 = *((_DWORD *)v6 + 13) << 21;
    if ( (__int64)v8 >> 21 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 56, ASSERT_TYPE_ASSERT, "( mTail->next ) == ( node - mTail )", "%s == %s\n\t%lli, %lli", "mTail->next", "node - mTail", (__int64)v8 >> 21, v7) )
      __debugbreak();
  }
  else
  {
    if ( this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 61, ASSERT_TYPE_ASSERT, "(mHead == nullptr)", (const char *)&queryFormat, "mHead == nullptr") )
      __debugbreak();
    this->mHead = node;
  }
  this->mTail = node;
}

/*
==============
RList<StreamDefragAllocNode>::PushFront
==============
*/
void RList<StreamDefragAllocNode>::PushFront(RList<StreamDefragAllocNode> *this, StreamDefragAllocNode *node)
{
  StreamDefragAllocNode *mTail; 
  StreamDefragAllocNode *mHead; 
  __int64 v6; 
  int v7; 
  signed __int64 v8; 
  int v9; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 374, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (*(_DWORD *)node & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 375, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
    __debugbreak();
  if ( (*((_DWORD *)node + 4) & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 376, ASSERT_TYPE_ASSERT, "(node->prev == 0)", (const char *)&queryFormat, "node->prev == 0") )
    __debugbreak();
  mTail = this->mTail;
  if ( mTail && (*(_DWORD *)mTail & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 377, ASSERT_TYPE_ASSERT, "(mTail == nullptr || mTail->next == 0)", (const char *)&queryFormat, "mTail == nullptr || mTail->next == 0") )
    __debugbreak();
  mHead = this->mHead;
  if ( !this->mTail )
  {
    if ( mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 383, ASSERT_TYPE_ASSERT, "(mHead == nullptr)", (const char *)&queryFormat, "mHead == nullptr") )
      __debugbreak();
    this->mTail = node;
  }
  this->mHead = node;
  if ( mHead )
  {
    v6 = mHead - node;
    *(_DWORD *)node ^= (v6 ^ *(_DWORD *)node) & 0x7FFFF;
    v7 = *(_DWORD *)node << 13;
    if ( (__int64)v7 >> 13 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 394, ASSERT_TYPE_ASSERT, "( node->next ) == ( oldHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "oldHead - node", (__int64)v7 >> 13, mHead - node) )
      __debugbreak();
    v8 = (char *)node - (char *)mHead;
    *((_DWORD *)mHead + 4) ^= (*((_DWORD *)mHead + 4) ^ ((int)v8 / 20)) & 0x7FFFF;
    v9 = *((_DWORD *)mHead + 4) << 13;
    if ( (__int64)v9 >> 13 != v8 / 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 396, ASSERT_TYPE_ASSERT, "( oldHead->prev ) == ( node - oldHead )", "%s == %s\n\t%lli, %lli", "oldHead->prev", "node - oldHead", (__int64)v9 >> 13, v8 / 20) )
      __debugbreak();
  }
}

/*
==============
RList<StreamDefragAllocNode>::Remove
==============
*/
void RList<StreamDefragAllocNode>::Remove(RList<StreamDefragAllocNode> *this, StreamDefragAllocNode *nodeToRemove)
{
  StreamDefragAllocNode *v4; 

  if ( !nodeToRemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 571, ASSERT_TYPE_ASSERT, "(nodeToRemove)", (const char *)&queryFormat, "nodeToRemove") )
    __debugbreak();
  if ( *((_DWORD *)nodeToRemove + 4) << 13 )
    v4 = &nodeToRemove[(__int64)(int)(*((_DWORD *)nodeToRemove + 4) << 13) >> 13];
  else
    v4 = NULL;
  RList<StreamDefragAllocNode>::RemoveNode(this, nodeToRemove, v4);
}

/*
==============
RList<StreamDefragAllocNode>::RemoveNode
==============
*/
__int64 RList<StreamDefragAllocNode>::RemoveNode(RList<StreamDefragAllocNode> *this, StreamDefragAllocNode *node, StreamDefragAllocNode *prevNode)
{
  unsigned int v6; 
  StreamDefragAllocNode *mTail; 
  StreamDefragAllocNode *v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  StreamDefragAllocNode *v12; 
  __int64 result; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 584, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( node == prevNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 585, ASSERT_TYPE_ASSERT, "(node != prevNode)", (const char *)&queryFormat, "node != prevNode") )
    __debugbreak();
  v6 = (int)(*(_DWORD *)node << 13) >> 13;
  if ( prevNode )
  {
    mTail = this->mTail;
    if ( v6 )
    {
      if ( mTail == node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 599, ASSERT_TYPE_ASSERT, "(mTail != node)", (const char *)&queryFormat, "mTail != node") )
        __debugbreak();
      if ( this->mHead == node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 600, ASSERT_TYPE_ASSERT, "(mHead != node)", (const char *)&queryFormat, "mHead != node") )
        __debugbreak();
      v8 = &node[v6];
      *(_DWORD *)prevNode ^= (*(_DWORD *)prevNode ^ (v8 - prevNode)) & 0x7FFFF;
      v9 = *(_DWORD *)prevNode << 13;
      if ( (__int64)v9 >> 13 != v8 - prevNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 604, ASSERT_TYPE_ASSERT, "( prevNode->next ) == ( nextNode - prevNode )", "%s == %s\n\t%lli, %lli", "prevNode->next", "nextNode - prevNode", (__int64)v9 >> 13, &node[v6] - prevNode) )
        __debugbreak();
      v10 = prevNode - v8;
      *((_DWORD *)v8 + 4) ^= (v10 ^ *((_DWORD *)v8 + 4)) & 0x7FFFF;
      v11 = *((_DWORD *)v8 + 4) << 13;
      if ( (__int64)v11 >> 13 != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 606, ASSERT_TYPE_ASSERT, "( nextNode->prev ) == ( prevNode - nextNode )", "%s == %s\n\t%lli, %lli", "nextNode->prev", "prevNode - nextNode", (__int64)v11 >> 13, v10) )
        __debugbreak();
    }
    else
    {
      if ( mTail != node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 592, ASSERT_TYPE_ASSERT, "(mTail == node)", (const char *)&queryFormat, "mTail == node") )
        __debugbreak();
      if ( this->mTail == this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 593, ASSERT_TYPE_ASSERT, "(mTail != mHead)", (const char *)&queryFormat, "mTail != mHead") )
        __debugbreak();
      *(_DWORD *)prevNode &= 0xFFF80000;
      this->mTail = prevNode;
    }
  }
  else
  {
    if ( node != this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 611, ASSERT_TYPE_ASSERT, "(node == mHead)", (const char *)&queryFormat, "node == mHead") )
      __debugbreak();
    if ( (*((_DWORD *)node + 4) & 0x7FFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 612, ASSERT_TYPE_ASSERT, "(node->prev == 0)", (const char *)&queryFormat, "node->prev == 0") )
      __debugbreak();
    if ( v6 )
    {
      *((_DWORD *)&node[v6] + 4) &= 0xFFF80000;
      v12 = &node[v6];
    }
    else
    {
      if ( this->mTail != node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 621, ASSERT_TYPE_ASSERT, "(mTail == node)", (const char *)&queryFormat, "mTail == node") )
        __debugbreak();
      v12 = NULL;
      this->mTail = NULL;
    }
    this->mHead = v12;
  }
  *(_DWORD *)node &= 0xFFF80000;
  result = v6;
  *((_DWORD *)node + 4) &= 0xFFF80000;
  return result;
}

/*
==============
RSList<StreamDefragCommand>::RemoveNode
==============
*/
__int64 RSList<StreamDefragCommand>::RemoveNode(RSList<StreamDefragCommand> *this, StreamDefragCommand *node, StreamDefragCommand *prevNode)
{
  int v6; 
  StreamDefragCommand *mTail; 
  __int64 v8; 
  int v9; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 269, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( node == prevNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 270, ASSERT_TYPE_ASSERT, "(node != prevNode)", (const char *)&queryFormat, "node != prevNode") )
    __debugbreak();
  v6 = (int)(*((_DWORD *)node + 13) << 21) >> 21;
  if ( prevNode )
  {
    mTail = this->mTail;
    if ( v6 )
    {
      if ( mTail == node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 284, ASSERT_TYPE_ASSERT, "(mTail != node)", (const char *)&queryFormat, "mTail != node") )
        __debugbreak();
      if ( this->mHead == node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 285, ASSERT_TYPE_ASSERT, "(mHead != node)", (const char *)&queryFormat, "mHead != node") )
        __debugbreak();
      v8 = ((__int64)node + 56i64 * v6 - (__int64)prevNode) / 56;
      *((_DWORD *)prevNode + 13) ^= ((unsigned __int16)v8 ^ (unsigned __int16)*((_DWORD *)prevNode + 13)) & 0x7FF;
      v9 = *((_DWORD *)prevNode + 13) << 21;
      if ( (__int64)v9 >> 21 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 287, ASSERT_TYPE_ASSERT, "( prevNode->next ) == ( node + next - prevNode )", "%s == %s\n\t%lli, %lli", "prevNode->next", "node + next - prevNode", (__int64)v9 >> 21, ((__int64)node + 56i64 * v6 - (__int64)prevNode) / 56) )
        __debugbreak();
    }
    else
    {
      if ( mTail != node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 277, ASSERT_TYPE_ASSERT, "(mTail == node)", (const char *)&queryFormat, "mTail == node") )
        __debugbreak();
      if ( this->mTail == this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 278, ASSERT_TYPE_ASSERT, "(mTail != mHead)", (const char *)&queryFormat, "mTail != mHead") )
        __debugbreak();
      *((_DWORD *)prevNode + 13) &= 0xFFFFF800;
      this->mTail = prevNode;
    }
  }
  else
  {
    if ( node != this->mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 292, ASSERT_TYPE_ASSERT, "(node == mHead)", (const char *)&queryFormat, "node == mHead") )
      __debugbreak();
    if ( v6 )
    {
      this->mHead = &node[v6];
    }
    else
    {
      if ( this->mTail != node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 299, ASSERT_TYPE_ASSERT, "(mTail == node)", (const char *)&queryFormat, "mTail == node") )
        __debugbreak();
      this->mTail = NULL;
      this->mHead = NULL;
    }
  }
  *((_DWORD *)node + 13) &= 0xFFFFF800;
  return (unsigned int)v6;
}

