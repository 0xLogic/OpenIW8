/*
==============
ASM_EphemeralEvent::ASM_EphemeralEvent
==============
*/

void __fastcall ASM_EphemeralEvent::ASM_EphemeralEvent(ASM_EphemeralEvent *this)
{
  ??0ASM_EphemeralEvent@@QEAA@XZ(this);
}

/*
==============
ASM_Event::ASM_Event
==============
*/

void __fastcall ASM_Event::ASM_Event(ASM_Event *this)
{
  ??0ASM_Event@@QEAA@XZ(this);
}

/*
==============
ASM_Event::ASM_Event
==============
*/
void ASM_Event::ASM_Event(ASM_Event *this)
{
  this->m_Name = 0;
}

/*
==============
ASM_EphemeralEvent::ASM_EphemeralEvent
==============
*/
void ASM_EphemeralEvent::ASM_EphemeralEvent(ASM_EphemeralEvent *this)
{
  *(_QWORD *)&this->m_Tag = 0i64;
}

