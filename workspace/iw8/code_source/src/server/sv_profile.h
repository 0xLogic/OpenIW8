/*
==============
SvServerPerfScopedEvent::~SvServerPerfScopedEvent
==============
*/

void __fastcall SvServerPerfScopedEvent::~SvServerPerfScopedEvent(SvServerPerfScopedEvent *this)
{
  ??1SvServerPerfScopedEvent@@QEAA@XZ(this);
}

/*
==============
SvServerPerfScopedEvent::~SvServerPerfScopedEvent
==============
*/
void SvServerPerfScopedEvent::~SvServerPerfScopedEvent(SvServerPerfScopedEvent *this)
{
  SV_Profile_EndEvent((const ServerProfileEvent)this->m_serverEvent);
  if ( this->m_systemEvent )
    Sys_ProfEndNamedEvent();
}

