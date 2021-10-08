/*
==============
CL_DebugMapOverlay::CL_DebugMapOverlay
==============
*/

void __fastcall CL_DebugMapOverlay::CL_DebugMapOverlay(CL_DebugMapOverlay *this)
{
  ??0CL_DebugMapOverlay@@QEAA@XZ(this);
}

/*
==============
CL_DebugMapOverlay::CL_DebugMapOverlay
==============
*/
void CL_DebugMapOverlay::CL_DebugMapOverlay(CL_DebugMapOverlay *this)
{
  this->m_screenBoundsMin = 0i64;
  this->m_screenBoundsMax = 0i64;
  this->m_transformScale[0] = 0i64;
  this->m_transformScale[1] = 0i64;
  this->m_transformOffset = 0i64;
  this->m_uniformScale = 0.0;
  this->m_scrPlace = NULL;
}

