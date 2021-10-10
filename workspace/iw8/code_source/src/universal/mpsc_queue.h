/*
==============
MPSCQueue<XZoneHandleUnique,1024>::Empty
==============
*/

bool __fastcall MPSCQueue<XZoneHandleUnique,1024>::Empty(MPSCQueue<XZoneHandleUnique,1024> *this)
{
  return ?Empty@?$MPSCQueue@UXZoneHandleUnique@@$0EAA@@@QEBA_NXZ(this);
}

/*
==============
MPSCQueue<XZoneHandleUnique,1024>::Init
==============
*/

void __fastcall MPSCQueue<XZoneHandleUnique,1024>::Init(MPSCQueue<XZoneHandleUnique,1024> *this)
{
  ?Init@?$MPSCQueue@UXZoneHandleUnique@@$0EAA@@@QEAAXXZ(this);
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread
==============
*/

void __fastcall MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  ?CheckConsumerThread@?$MPSCQueue@UCmd@RB_BackendDataCopier@@$0EAAA@@@AEBAXXZ(this);
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::PopDiscard
==============
*/

void __fastcall MPSCQueue<RB_BackendDataCopier::Cmd,16384>::PopDiscard(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  ?PopDiscard@?$MPSCQueue@UCmd@RB_BackendDataCopier@@$0EAAA@@@QEAAXXZ(this);
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Init
==============
*/

void __fastcall MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Init(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  ?Init@?$MPSCQueue@UCmd@RB_BackendDataCopier@@$0EAAA@@@QEAAXXZ(this);
}

/*
==============
MPSCQueue<CssStreamOutJob,512>::Empty
==============
*/

bool __fastcall MPSCQueue<CssStreamOutJob,512>::Empty(MPSCQueue<CssStreamOutJob,512> *this)
{
  return ?Empty@?$MPSCQueue@UCssStreamOutJob@@$0CAA@@@QEBA_NXZ(this);
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Clear
==============
*/

void __fastcall MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Clear(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  ?Clear@?$MPSCQueue@UCmd@RB_BackendDataCopier@@$0EAAA@@@QEAAXXZ(this);
}

/*
==============
MPSCQueue<CssStreamOutJob,512>::Pop
==============
*/

CssStreamOutJob __fastcall MPSCQueue<CssStreamOutJob,512>::Pop(MPSCQueue<CssStreamOutJob,512> *this)
{
  return ?Pop@?$MPSCQueue@UCssStreamOutJob@@$0CAA@@@QEAA?AUCssStreamOutJob@@XZ(this);
}

/*
==============
MPSCQueue<XZoneHandleUnique,1024>::Pop
==============
*/

XZoneHandleUnique __fastcall MPSCQueue<XZoneHandleUnique,1024>::Pop(MPSCQueue<XZoneHandleUnique,1024> *this)
{
  return ?Pop@?$MPSCQueue@UXZoneHandleUnique@@$0EAA@@@QEAA?AUXZoneHandleUnique@@XZ(this);
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push
==============
*/

void __fastcall MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this, const RB_BackendDataCopier::Cmd *item)
{
  ?Push@?$MPSCQueue@UCmd@RB_BackendDataCopier@@$0EAAA@@@QEAAXAEBUCmd@RB_BackendDataCopier@@@Z(this, item);
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Empty
==============
*/

bool __fastcall MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Empty(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  return ?Empty@?$MPSCQueue@UCmd@RB_BackendDataCopier@@$0EAAA@@@QEBA_NXZ(this);
}

/*
==============
MPSCQueue<CssStreamOutJob,512>::Push
==============
*/

void __fastcall MPSCQueue<CssStreamOutJob,512>::Push(MPSCQueue<CssStreamOutJob,512> *this, const CssStreamOutJob *item)
{
  ?Push@?$MPSCQueue@UCssStreamOutJob@@$0CAA@@@QEAAXAEBUCssStreamOutJob@@@Z(this, item);
}

/*
==============
MPSCQueue<XZoneHandleUnique,1024>::Push
==============
*/

void __fastcall MPSCQueue<XZoneHandleUnique,1024>::Push(MPSCQueue<XZoneHandleUnique,1024> *this, const XZoneHandleUnique *item)
{
  ?Push@?$MPSCQueue@UXZoneHandleUnique@@$0EAA@@@QEAAXAEBUXZoneHandleUnique@@@Z(this, item);
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Front
==============
*/

const RB_BackendDataCopier::Cmd *__fastcall MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Front(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  return ?Front@?$MPSCQueue@UCmd@RB_BackendDataCopier@@$0EAAA@@@QEBAAEBUCmd@RB_BackendDataCopier@@XZ(this);
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread
==============
*/
void MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  threadId_t m_consumerThreadId; 
  threadId_t CurrentThreadId; 

  m_consumerThreadId = this->m_consumerThreadId;
  CurrentThreadId = Sys_GetCurrentThreadId();
  if ( m_consumerThreadId )
  {
    if ( this->m_consumerThreadId != CurrentThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 42, ASSERT_TYPE_ASSERT, "(m_consumerThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "m_consumerThreadId == Sys_GetCurrentThreadId()") )
      __debugbreak();
  }
  else
  {
    this->m_consumerThreadId = CurrentThreadId;
  }
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Clear
==============
*/
void MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Clear(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  void *retaddr; 

  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  this->m_allocPtr = 0;
  this->m_writePtr = 0;
  this->m_readPtr = 0;
  this->m_consumerThreadId = 0;
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Empty
==============
*/
bool MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Empty(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  return this->m_writePtr == this->m_readPtr;
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Front
==============
*/
const RB_BackendDataCopier::Cmd *MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Front(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  volatile int m_readPtr; 
  signed __int32 v4[10]; 

  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread(this);
  m_readPtr = this->m_readPtr;
  _InterlockedOr(v4, 0);
  return (const RB_BackendDataCopier::Cmd *)((char *)this + 48 * (m_readPtr & 0x3FFF));
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Init
==============
*/
void MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Init(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  this->m_allocPtr = 0;
  this->m_writePtr = 0;
  this->m_readPtr = 0;
  this->m_consumerThreadId = 0;
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::PopDiscard
==============
*/
void MPSCQueue<RB_BackendDataCopier::Cmd,16384>::PopDiscard(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this)
{
  MPSCQueue<RB_BackendDataCopier::Cmd,16384>::CheckConsumerThread(this);
  if ( this->m_writePtr == this->m_readPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 102, ASSERT_TYPE_ASSERT, "(!Empty())", (const char *)&queryFormat, "!Empty()") )
    __debugbreak();
  ++this->m_readPtr;
}

/*
==============
MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push
==============
*/
void MPSCQueue<RB_BackendDataCopier::Cmd,16384>::Push(MPSCQueue<RB_BackendDataCopier::Cmd,16384> *this, const RB_BackendDataCopier::Cmd *item)
{
  volatile int m_readPtr; 
  volatile int *p_m_allocPtr; 
  signed __int32 v6; 
  volatile int *p_m_writePtr; 
  __int64 v8; 
  int v9; 

  m_readPtr = this->m_readPtr;
  p_m_allocPtr = &this->m_allocPtr;
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_allocPtr) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(p_m_allocPtr, 1u);
  if ( (unsigned int)(v6 - m_readPtr) >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 85, ASSERT_TYPE_ASSERT, "(( writeSlot - readSlot ) < QUEUED_ITEMS_MAX)", (const char *)&queryFormat, "( writeSlot - readSlot ) < QUEUED_ITEMS_MAX") )
    __debugbreak();
  p_m_writePtr = &this->m_writePtr;
  v8 = v6 & 0x3FFF;
  *(__m256i *)&this->m_items[v8].cmdType = *(__m256i *)&item->cmdType;
  *(_OWORD *)&this->m_items[v8].memCommitCmd.outPageRange = *(_OWORD *)&item->memCommitCmd.outPageRange;
  v9 = ((_BYTE)this + 4) & 3;
  while ( 1 )
  {
    if ( v9 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writePtr) )
        __debugbreak();
    }
    if ( v6 == _InterlockedCompareExchange(p_m_writePtr, v6 + 1, v6) )
      break;
    _mm_pause();
  }
}

/*
==============
MPSCQueue<CssStreamOutJob,512>::Empty
==============
*/
bool MPSCQueue<CssStreamOutJob,512>::Empty(MPSCQueue<CssStreamOutJob,512> *this)
{
  return this->m_writePtr == this->m_readPtr;
}

/*
==============
MPSCQueue<CssStreamOutJob,512>::Pop
==============
*/
unsigned int *MPSCQueue<CssStreamOutJob,512>::Pop(MPSCQueue<CssStreamOutJob,512> *this, unsigned int *a2)
{
  threadId_t m_consumerThreadId; 
  threadId_t CurrentThreadId; 
  volatile int m_readPtr; 
  signed __int32 v8[8]; 

  m_consumerThreadId = this->m_consumerThreadId;
  CurrentThreadId = Sys_GetCurrentThreadId();
  if ( m_consumerThreadId )
  {
    if ( this->m_consumerThreadId != CurrentThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 42, ASSERT_TYPE_ASSERT, "(m_consumerThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "m_consumerThreadId == Sys_GetCurrentThreadId()") )
      __debugbreak();
  }
  else
  {
    this->m_consumerThreadId = CurrentThreadId;
  }
  if ( this->m_writePtr == this->m_readPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 113, ASSERT_TYPE_ASSERT, "(!Empty())", (const char *)&queryFormat, "!Empty()") )
    __debugbreak();
  m_readPtr = this->m_readPtr;
  _InterlockedOr(v8, 0);
  *a2 = this->m_items[m_readPtr & 0x1FF].m_zoneId;
  ++this->m_readPtr;
  return a2;
}

/*
==============
MPSCQueue<CssStreamOutJob,512>::Push
==============
*/
void MPSCQueue<CssStreamOutJob,512>::Push(MPSCQueue<CssStreamOutJob,512> *this, const CssStreamOutJob *item)
{
  volatile int m_readPtr; 
  volatile int *p_m_allocPtr; 
  signed __int32 v6; 
  volatile int *p_m_writePtr; 
  int v8; 

  m_readPtr = this->m_readPtr;
  p_m_allocPtr = &this->m_allocPtr;
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_allocPtr) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(p_m_allocPtr, 1u);
  if ( (unsigned int)(v6 - m_readPtr) >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 85, ASSERT_TYPE_ASSERT, "(( writeSlot - readSlot ) < QUEUED_ITEMS_MAX)", (const char *)&queryFormat, "( writeSlot - readSlot ) < QUEUED_ITEMS_MAX") )
    __debugbreak();
  p_m_writePtr = &this->m_writePtr;
  this->m_items[v6 & 0x1FF] = (CssStreamOutJob)item->m_zoneId;
  v8 = ((_BYTE)this + 4) & 3;
  while ( 1 )
  {
    if ( v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writePtr) )
        __debugbreak();
    }
    if ( v6 == _InterlockedCompareExchange(p_m_writePtr, v6 + 1, v6) )
      break;
    _mm_pause();
  }
}

/*
==============
MPSCQueue<XZoneHandleUnique,1024>::Empty
==============
*/
bool MPSCQueue<XZoneHandleUnique,1024>::Empty(MPSCQueue<XZoneHandleUnique,1024> *this)
{
  return this->m_writePtr == this->m_readPtr;
}

/*
==============
MPSCQueue<XZoneHandleUnique,1024>::Init
==============
*/
void MPSCQueue<XZoneHandleUnique,1024>::Init(MPSCQueue<XZoneHandleUnique,1024> *this)
{
  this->m_allocPtr = 0;
  this->m_writePtr = 0;
  this->m_readPtr = 0;
  this->m_consumerThreadId = 0;
}

/*
==============
MPSCQueue<XZoneHandleUnique,1024>::Pop
==============
*/
unsigned int *MPSCQueue<XZoneHandleUnique,1024>::Pop(MPSCQueue<XZoneHandleUnique,1024> *this, unsigned int *a2)
{
  threadId_t m_consumerThreadId; 
  threadId_t CurrentThreadId; 
  volatile int m_readPtr; 
  signed __int32 v8[8]; 

  m_consumerThreadId = this->m_consumerThreadId;
  CurrentThreadId = Sys_GetCurrentThreadId();
  if ( m_consumerThreadId )
  {
    if ( this->m_consumerThreadId != CurrentThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 42, ASSERT_TYPE_ASSERT, "(m_consumerThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "m_consumerThreadId == Sys_GetCurrentThreadId()") )
      __debugbreak();
  }
  else
  {
    this->m_consumerThreadId = CurrentThreadId;
  }
  if ( this->m_writePtr == this->m_readPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 113, ASSERT_TYPE_ASSERT, "(!Empty())", (const char *)&queryFormat, "!Empty()") )
    __debugbreak();
  m_readPtr = this->m_readPtr;
  _InterlockedOr(v8, 0);
  *a2 = this->m_items[m_readPtr & 0x3FF].m_packed;
  ++this->m_readPtr;
  return a2;
}

/*
==============
MPSCQueue<XZoneHandleUnique,1024>::Push
==============
*/
void MPSCQueue<XZoneHandleUnique,1024>::Push(MPSCQueue<XZoneHandleUnique,1024> *this, const XZoneHandleUnique *item)
{
  volatile int m_readPtr; 
  volatile int *p_m_allocPtr; 
  signed __int32 v6; 
  volatile int *p_m_writePtr; 
  int v8; 

  m_readPtr = this->m_readPtr;
  p_m_allocPtr = &this->m_allocPtr;
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_allocPtr) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(p_m_allocPtr, 1u);
  if ( (unsigned int)(v6 - m_readPtr) >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\mpsc_queue.h", 85, ASSERT_TYPE_ASSERT, "(( writeSlot - readSlot ) < QUEUED_ITEMS_MAX)", (const char *)&queryFormat, "( writeSlot - readSlot ) < QUEUED_ITEMS_MAX") )
    __debugbreak();
  p_m_writePtr = &this->m_writePtr;
  this->m_items[v6 & 0x3FF] = *item;
  v8 = ((_BYTE)this + 4) & 3;
  while ( 1 )
  {
    if ( v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_writePtr) )
        __debugbreak();
    }
    if ( v6 == _InterlockedCompareExchange(p_m_writePtr, v6 + 1, v6) )
      break;
    _mm_pause();
  }
}

