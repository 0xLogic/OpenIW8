/*
==============
RB_BackendDataCopierScopedHandOff::~RB_BackendDataCopierScopedHandOff
==============
*/

void __fastcall RB_BackendDataCopierScopedHandOff::~RB_BackendDataCopierScopedHandOff(RB_BackendDataCopierScopedHandOff *this)
{
  ??1RB_BackendDataCopierScopedHandOff@@QEAA@XZ(this);
}

/*
==============
RB_BackendDataCopierScopedHandOff::~RB_BackendDataCopierScopedHandOff
==============
*/
void RB_BackendDataCopierScopedHandOff::~RB_BackendDataCopierScopedHandOff(RB_BackendDataCopierScopedHandOff *this)
{
  const RB_BackendDataCopier *m_copier; 

  m_copier = this->m_copier;
  m_copier->m_commands[0].m_consumerThreadId = 0;
  m_copier->m_commands[1].m_consumerThreadId = 0;
  m_copier->m_commands[2].m_consumerThreadId = 0;
}

