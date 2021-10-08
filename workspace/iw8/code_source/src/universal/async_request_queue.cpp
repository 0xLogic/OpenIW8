/*
==============
AsyncRequestHandle::AsyncRequestHandle
==============
*/

void __fastcall AsyncRequestHandle::AsyncRequestHandle(AsyncRequestHandle *this)
{
  ??0AsyncRequestHandle@@QEAA@XZ(this);
}

/*
==============
AsyncRequestHandle::Signal
==============
*/

void __fastcall AsyncRequestHandle::Signal(AsyncRequestHandle *this)
{
  ?Signal@AsyncRequestHandle@@QEAAXXZ(this);
}

/*
==============
AsyncRequestHandle::Wait
==============
*/

void __fastcall AsyncRequestHandle::Wait(AsyncRequestHandle *this)
{
  ?Wait@AsyncRequestHandle@@QEBAXXZ(this);
}

/*
==============
AsyncRequestHandle::IsComplete
==============
*/

bool __fastcall AsyncRequestHandle::IsComplete(AsyncRequestHandle *this)
{
  return ?IsComplete@AsyncRequestHandle@@QEBA_NXZ(this);
}

/*
==============
AsyncRequestHandle::AsyncRequestHandle
==============
*/
void AsyncRequestHandle::AsyncRequestHandle(AsyncRequestHandle *this)
{
  this->m_complete = 0;
}

/*
==============
AsyncRequestHandle::IsComplete
==============
*/
bool AsyncRequestHandle::IsComplete(AsyncRequestHandle *this)
{
  return this->m_complete != 0;
}

/*
==============
AsyncRequestHandle::Signal
==============
*/
void AsyncRequestHandle::Signal(AsyncRequestHandle *this)
{
  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", this) )
    __debugbreak();
  _InterlockedExchange(&this->m_complete, 1);
}

/*
==============
AsyncRequestHandle::Wait
==============
*/
void AsyncRequestHandle::Wait(AsyncRequestHandle *this)
{
  while ( !this->m_complete )
    Sys_Sleep(1);
}

