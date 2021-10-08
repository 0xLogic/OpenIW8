/*
==============
bdBandwidthTestResults::deserialize
==============
*/

bool __fastcall bdBandwidthTestResults::deserialize(bdBandwidthTestResults *this, const bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdBandwidthTestResults@@QEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdBandwidthTestResults::bdBandwidthTestResults
==============
*/

void __fastcall bdBandwidthTestResults::bdBandwidthTestResults(bdBandwidthTestResults *this)
{
  ??0bdBandwidthTestResults@@QEAA@XZ(this);
}

/*
==============
bdBandwidthTestResults::serialize
==============
*/

bool __fastcall bdBandwidthTestResults::serialize(bdBandwidthTestResults *this, unsigned __int8 *const buffer, const unsigned int bufferSize)
{
  return ?serialize@bdBandwidthTestResults@@QEBA_NQEAEI@Z(this, buffer, bufferSize);
}

/*
==============
bdBandwidthTestResults::getBandwidth
==============
*/

double __fastcall bdBandwidthTestResults::getBandwidth(bdBandwidthTestResults *this)
{
  double result; 

  *(float *)&result = ?getBandwidth@bdBandwidthTestResults@@QEBAMXZ(this);
  return result;
}

/*
==============
bdBandwidthTestResults::initializeFromBitsPerSecond
==============
*/

void __fastcall bdBandwidthTestResults::initializeFromBitsPerSecond(bdBandwidthTestResults *this, unsigned int bitsPerSecond)
{
  ?initializeFromBitsPerSecond@bdBandwidthTestResults@@QEAAXI@Z(this, bitsPerSecond);
}

/*
==============
bdBandwidthTestResults::clear
==============
*/

void __fastcall bdBandwidthTestResults::clear(bdBandwidthTestResults *this)
{
  ?clear@bdBandwidthTestResults@@QEAAXXZ(this);
}

/*
==============
bdBandwidthTestResults::bdBandwidthTestResults
==============
*/
void bdBandwidthTestResults::bdBandwidthTestResults(bdBandwidthTestResults *this)
{
  *(_QWORD *)&this->m_receivePeriodMs = 1i64;
  this->m_bytesReceived = 0;
  *(_QWORD *)&this->m_minSeqNumber = 0i64;
}

/*
==============
bdBandwidthTestResults::clear
==============
*/
void bdBandwidthTestResults::clear(bdBandwidthTestResults *this)
{
  *(_QWORD *)&this->m_receivePeriodMs = 1i64;
  this->m_bytesReceived = 0;
  *(_QWORD *)&this->m_minSeqNumber = 0i64;
}

/*
==============
bdBandwidthTestResults::deserialize
==============
*/
_BOOL8 bdBandwidthTestResults::deserialize(bdBandwidthTestResults *this, const bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int data; 
  unsigned int v11; 

  v9 = -2i64;
  if ( bdByteBuffer::read((bdByteBuffer *)buffer.m_ptr->__vftable, &data, 4u) && (this->m_bytesReceived = data, bdByteBuffer::read((bdByteBuffer *)buffer.m_ptr->__vftable, &v11, 4u)) && (this->m_receivePeriodMs = v11, bdByteBuffer::read((bdByteBuffer *)buffer.m_ptr->__vftable, &v6, 4u)) && (this->m_avgSeqNumber = v6, bdByteBuffer::read((bdByteBuffer *)buffer.m_ptr->__vftable, &v7, 4u)) && (this->m_minSeqNumber = v7, bdByteBuffer::read((bdByteBuffer *)buffer.m_ptr->__vftable, &v8, 4u)) )
  {
    this->m_maxSeqNumber = v8;
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  bdHandleAssert(v4, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtestresults.cpp", "bdBandwidthTestResults::deserialize", 0x3Cu, "bdBandwidthTestResults failed to deserialize.");
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdBandwidthTestResults::getBandwidth
==============
*/

float __fastcall bdBandwidthTestResults::getBandwidth(bdBandwidthTestResults *this, double _XMM1_8)
{
  __asm
  {
    vmovss  xmm0, cs:__real@3f7a0000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
bdBandwidthTestResults::initializeFromBitsPerSecond
==============
*/
void bdBandwidthTestResults::initializeFromBitsPerSecond(bdBandwidthTestResults *this, unsigned int bitsPerSecond)
{
  this->m_bytesReceived = bitsPerSecond >> 3;
  this->m_receivePeriodMs = 1000;
  *(_QWORD *)&this->m_avgSeqNumber = 500i64;
  this->m_maxSeqNumber = 1000;
}

/*
==============
bdBandwidthTestResults::serialize
==============
*/
_BOOL8 bdBandwidthTestResults::serialize(bdBandwidthTestResults *this, unsigned __int8 *const buffer, const unsigned int bufferSize)
{
  bool v6; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 

  v6 = bufferSize >= 4 || !buffer;
  bdHandleAssert(v6, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !buffer )
  {
LABEL_8:
    if ( bufferSize >= 4 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( bufferSize >= 4 )
  {
    *(_DWORD *)buffer = this->m_bytesReceived;
    goto LABEL_8;
  }
LABEL_9:
  if ( buffer )
    goto LABEL_46;
LABEL_10:
  v7 = bufferSize >= 8 || !buffer;
  bdHandleAssert(v7, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !buffer )
  {
LABEL_17:
    if ( bufferSize >= 8 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( bufferSize >= 8 )
  {
    *((_DWORD *)buffer + 1) = this->m_receivePeriodMs;
    goto LABEL_17;
  }
LABEL_18:
  if ( buffer )
    goto LABEL_46;
LABEL_19:
  v8 = bufferSize >= 0xC || !buffer;
  bdHandleAssert(v8, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !buffer )
  {
LABEL_26:
    if ( bufferSize >= 0xC )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( bufferSize >= 0xC )
  {
    *((_DWORD *)buffer + 2) = this->m_avgSeqNumber;
    goto LABEL_26;
  }
LABEL_27:
  if ( buffer )
    goto LABEL_46;
LABEL_28:
  v9 = bufferSize >= 0x10 || !buffer;
  bdHandleAssert(v9, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
  if ( !buffer )
  {
LABEL_35:
    if ( bufferSize >= 0x10 )
    {
LABEL_37:
      v10 = bufferSize >= 0x14 || !buffer;
      bdHandleAssert(v10, "ok || (buffer == BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbytepacker.h", "bdBytePacker::appendBasicType", 0x37u, "Not enough room left to write %u bytes.", 4i64);
      if ( buffer )
      {
        if ( bufferSize < 0x14 )
        {
LABEL_45:
          if ( buffer )
            goto LABEL_46;
LABEL_47:
          v11 = 1;
          goto LABEL_48;
        }
        *((_DWORD *)buffer + 4) = this->m_maxSeqNumber;
      }
      if ( bufferSize >= 0x14 )
        goto LABEL_47;
      goto LABEL_45;
    }
    goto LABEL_36;
  }
  if ( bufferSize >= 0x10 )
  {
    *((_DWORD *)buffer + 3) = this->m_minSeqNumber;
    goto LABEL_35;
  }
LABEL_36:
  if ( !buffer )
    goto LABEL_37;
LABEL_46:
  v11 = 0;
LABEL_48:
  bdHandleAssert(v11, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlsgservices\\bdbandwidthtestresults.cpp", "bdBandwidthTestResults::serialize", 0x31u, "bdBandwidthTestResults failed to serialize.");
  return v11;
}

