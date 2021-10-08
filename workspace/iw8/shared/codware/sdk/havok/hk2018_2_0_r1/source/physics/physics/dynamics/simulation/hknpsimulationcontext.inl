/*
==============
hknpScopedSimulationThreadContext::~hknpScopedSimulationThreadContext
==============
*/

void __fastcall hknpScopedSimulationThreadContext::~hknpScopedSimulationThreadContext(hknpScopedSimulationThreadContext *this)
{
  ??1hknpScopedSimulationThreadContext@@QEAA@XZ(this);
}

/*
==============
hknpScopedSimulationThreadContext::~hknpScopedSimulationThreadContext
==============
*/
void hknpScopedSimulationThreadContext::~hknpScopedSimulationThreadContext(hknpScopedSimulationThreadContext *this)
{
  hknpSimulationContext::freeThreadContext(this->m_simulationContext, this->m_context);
}

