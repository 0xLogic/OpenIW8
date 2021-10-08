/*
==============
DLogEvent_Base::GetControllerIndex
==============
*/

int __fastcall DLogEvent_Base::GetControllerIndex(DLogEvent_Base *this)
{
  return ?GetControllerIndex@DLogEvent_Base@@IEBAHXZ(this);
}

/*
==============
DLogEvent_Base::DLogEvent_Base
==============
*/

void __fastcall DLogEvent_Base::DLogEvent_Base(DLogEvent_Base *this, const int controllerIndex)
{
  ??0DLogEvent_Base@@QEAA@H@Z(this, controllerIndex);
}

/*
==============
DLogEvent_Base::GetCurrentUTC
==============
*/

unsigned __int64 __fastcall DLogEvent_Base::GetCurrentUTC(DLogEvent_Base *this)
{
  return ?GetCurrentUTC@DLogEvent_Base@@IEBA_KXZ(this);
}

/*
==============
DLogEvent_Base::Init
==============
*/

void __fastcall DLogEvent_Base::Init(DLogEvent_Base *this, const int controllerIndex)
{
  ?Init@DLogEvent_Base@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
DLogEvent_Base::DLogEvent_Base
==============
*/

void __fastcall DLogEvent_Base::DLogEvent_Base(DLogEvent_Base *this)
{
  ??0DLogEvent_Base@@QEAA@XZ(this);
}

/*
==============
DLogEvent_Base::Reset
==============
*/

void __fastcall DLogEvent_Base::Reset(DLogEvent_Base *this)
{
  ?Reset@DLogEvent_Base@@QEAAXXZ(this);
}

/*
==============
DLogEvent_Base::Send
==============
*/

void __fastcall DLogEvent_Base::Send(DLogEvent_Base *this, const bool resetAfterSend)
{
  ?Send@DLogEvent_Base@@QEAAX_N@Z(this, resetAfterSend);
}

/*
==============
DLogEvent_Base::DLogEvent_Base
==============
*/
void DLogEvent_Base::DLogEvent_Base(DLogEvent_Base *this, const int controllerIndex)
{
  this->__vftable = (DLogEvent_Base_vtbl *)&DLogEvent_Base::`vftable';
  off_14506A6D0();
  this->m_controllerIndex = controllerIndex;
  this->m_userId = DLog_GetUserId(controllerIndex);
}

/*
==============
DLogEvent_Base::DLogEvent_Base
==============
*/
void DLogEvent_Base::DLogEvent_Base(DLogEvent_Base *this)
{
  this->__vftable = (DLogEvent_Base_vtbl *)&DLogEvent_Base::`vftable';
  this->m_controllerIndex = 0;
  this->m_userId = 0i64;
  off_14506A6D0();
}

/*
==============
DLogEvent_Base::GetControllerIndex
==============
*/
__int64 DLogEvent_Base::GetControllerIndex(DLogEvent_Base *this)
{
  return (unsigned int)this->m_controllerIndex;
}

/*
==============
DLogEvent_Base::GetCurrentUTC
==============
*/
unsigned __int64 DLogEvent_Base::GetCurrentUTC(DLogEvent_Base *this)
{
  if ( LiveStorage_IsTimeSynced() )
    return LiveStorage_GetUTC();
  else
    return Sys_GetTimeAsSeconds();
}

/*
==============
DLogEvent_Base::Init
==============
*/
void DLogEvent_Base::Init(DLogEvent_Base *this, const int controllerIndex)
{
  this->m_controllerIndex = controllerIndex;
  this->m_userId = DLog_GetUserId(controllerIndex);
}

/*
==============
DLogEvent_Base::Reset
==============
*/
void DLogEvent_Base::Reset(DLogEvent_Base *this)
{
  this->ResetData(this);
}

/*
==============
DLogEvent_Base::Send
==============
*/
void DLogEvent_Base::Send(DLogEvent_Base *this, const bool resetAfterSend)
{
  Mem_LargeLocal v4; 
  DLogContext context; 

  Mem_LargeLocal::Mem_LargeLocal(&v4, 0x2000ui64, "DLOG_EVENT_BUFFER buffer");
  DLog_CreateContext(&context, this->m_userId, v4.m_ptr, 0x2000);
  if ( this->WriteEvent(this, &context) )
  {
    DLog_RecordContext(&context);
    if ( resetAfterSend )
      this->ResetData(this);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v4);
}

