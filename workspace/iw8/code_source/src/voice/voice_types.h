/*
==============
VoiceCircPacketQueue<40>::Write_Commit
==============
*/

void __fastcall VoiceCircPacketQueue<40>::Write_Commit(VoiceCircPacketQueue<40> *this)
{
  ?Write_Commit@?$VoiceCircPacketQueue@$0CI@@@QEAAXXZ(this);
}

/*
==============
VoiceCircPacketQueue<40>::Write_Request
==============
*/

VoiceChatPacket *__fastcall VoiceCircPacketQueue<40>::Write_Request(VoiceCircPacketQueue<40> *this)
{
  return ?Write_Request@?$VoiceCircPacketQueue@$0CI@@@QEAAPEAUVoiceChatPacket@@XZ(this);
}

/*
==============
VoiceCircPacketQueue<40>::Read_Request
==============
*/

const VoiceChatPacket *__fastcall VoiceCircPacketQueue<40>::Read_Request(VoiceCircPacketQueue<40> *this)
{
  return ?Read_Request@?$VoiceCircPacketQueue@$0CI@@@QEAAPEBUVoiceChatPacket@@XZ(this);
}

/*
==============
VoiceCircBuf<float,3840>::Reset
==============
*/

void __fastcall VoiceCircBuf<float,3840>::Reset(VoiceCircBuf<float,3840> *this)
{
  ?Reset@?$VoiceCircBuf@M$0PAA@@@QEAAXXZ(this);
}

/*
==============
VoiceCircPacketQueue<10>::Read_Commit
==============
*/

void __fastcall VoiceCircPacketQueue<10>::Read_Commit(VoiceCircPacketQueue<10> *this)
{
  ?Read_Commit@?$VoiceCircPacketQueue@$09@@QEAAXXZ(this);
}

/*
==============
VoiceCircPacketQueue<40>::Read_Request
==============
*/
VoiceChatPacket *VoiceCircPacketQueue<40>::Read_Request(VoiceCircPacketQueue<40> *this)
{
  if ( this->bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 182, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
    __debugbreak();
  return &this->buffer[this->readPos];
}

/*
==============
VoiceCircPacketQueue<40>::Write_Commit
==============
*/
void VoiceCircPacketQueue<40>::Write_Commit(VoiceCircPacketQueue<40> *this)
{
  volatile int *p_bufcount; 

  p_bufcount = &this->bufcount;
  if ( 40 - this->bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 209, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
    __debugbreak();
  this->writePos = (this->writePos + 1) % 0x28;
  if ( ((unsigned __int8)p_bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_bufcount) )
    __debugbreak();
  _InterlockedIncrement(p_bufcount);
}

/*
==============
VoiceCircPacketQueue<40>::Write_Request
==============
*/
VoiceChatPacket *VoiceCircPacketQueue<40>::Write_Request(VoiceCircPacketQueue<40> *this)
{
  if ( 40 - this->bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 202, ASSERT_TYPE_ASSERT, "(CanWrite())", (const char *)&queryFormat, "CanWrite()") )
    __debugbreak();
  return &this->buffer[this->writePos];
}

/*
==============
VoiceCircPacketQueue<10>::Read_Commit
==============
*/
void VoiceCircPacketQueue<10>::Read_Commit(VoiceCircPacketQueue<10> *this)
{
  volatile int *p_bufcount; 

  p_bufcount = &this->bufcount;
  if ( this->bufcount < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\voice\\voice_types.h", 189, ASSERT_TYPE_ASSERT, "(CanRead())", (const char *)&queryFormat, "CanRead()") )
    __debugbreak();
  this->readPos = (this->readPos + 1) % 0xA;
  if ( ((unsigned __int8)p_bufcount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_bufcount) )
    __debugbreak();
  _InterlockedDecrement(p_bufcount);
}

/*
==============
VoiceCircBuf<float,3840>::Reset
==============
*/
void VoiceCircBuf<float,3840>::Reset(VoiceCircBuf<float,3840> *this)
{
  volatile __int32 *p_bufcount; 

  p_bufcount = &this->bufcount;
  *(_QWORD *)&this->readPos = 0i64;
  if ( (((_BYTE)this + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->bufcount) )
    __debugbreak();
  _InterlockedExchange(p_bufcount, 0);
}

