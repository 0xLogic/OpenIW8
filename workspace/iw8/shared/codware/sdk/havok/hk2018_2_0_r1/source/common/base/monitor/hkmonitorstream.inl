/*
==============
hkTimeFunctionHelper::~hkTimeFunctionHelper
==============
*/

void __fastcall hkTimeFunctionHelper::~hkTimeFunctionHelper(hkTimeFunctionHelper *this)
{
  ??1hkTimeFunctionHelper@@QEAA@XZ(this);
}

/*
==============
hkTimeFunctionHelper::~hkTimeFunctionHelper
==============
*/
void hkTimeFunctionHelper::~hkTimeFunctionHelper(hkTimeFunctionHelper *this)
{
  hkMonitorStream *m_streamPtr; 

  m_streamPtr = this->m_streamPtr;
  if ( m_streamPtr )
    hkMonitorStream::timerEnd(m_streamPtr, "Et");
}

