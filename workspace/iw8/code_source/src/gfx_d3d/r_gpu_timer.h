/*
==============
GfxScopedGPUTimer::~GfxScopedGPUTimer
==============
*/

void __fastcall GfxScopedGPUTimer::~GfxScopedGPUTimer(GfxScopedGPUTimer *this)
{
  ??1GfxScopedGPUTimer@@QEAA@XZ(this);
}

/*
==============
GfxScopedGPUTimer::~GfxScopedGPUTimer
==============
*/
void GfxScopedGPUTimer::~GfxScopedGPUTimer(GfxScopedGPUTimer *this)
{
  R_GPU_EndTimer();
}

