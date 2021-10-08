/*
==============
BgScopedPMoveUpdate::~BgScopedPMoveUpdate
==============
*/

void __fastcall BgScopedPMoveUpdate::~BgScopedPMoveUpdate(BgScopedPMoveUpdate *this)
{
  ??1BgScopedPMoveUpdate@@QEAA@XZ(this);
}

/*
==============
BgScopedPMoveUpdate::~BgScopedPMoveUpdate
==============
*/
void BgScopedPMoveUpdate::~BgScopedPMoveUpdate(BgScopedPMoveUpdate *this)
{
  this->m_functor(this->m_pm, this->m_pml);
}

