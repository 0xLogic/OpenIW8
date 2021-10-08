/*
==============
GfxScopedProfNamedEvent::~GfxScopedProfNamedEvent
==============
*/

void __fastcall GfxScopedProfNamedEvent::~GfxScopedProfNamedEvent(GfxScopedProfNamedEvent *this)
{
  ??1GfxScopedProfNamedEvent@@QEAA@XZ(this);
}

/*
==============
GfxScopedProfNamedEvent::~GfxScopedProfNamedEvent
==============
*/
void GfxScopedProfNamedEvent::~GfxScopedProfNamedEvent(GfxScopedProfNamedEvent *this)
{
  R_ProfEndNamedEvent(this->state);
}

