/*
==============
FpsGraph::DrawGraph
==============
*/

void __fastcall FpsGraph::DrawGraph(FpsGraph *this)
{
  ?DrawGraph@FpsGraph@@QEAAXXZ(this);
}

/*
==============
FpsGraph::IsInitialized
==============
*/

bool __fastcall FpsGraph::IsInitialized(FpsGraph *this)
{
  return ?IsInitialized@FpsGraph@@QEAA_NXZ(this);
}

/*
==============
FpsGraph::ResetGraphData
==============
*/

void __fastcall FpsGraph::ResetGraphData(FpsGraph *this)
{
  ?ResetGraphData@FpsGraph@@QEAAXXZ(this);
}

/*
==============
FpsGraph::AddTimeSample
==============
*/

void __fastcall FpsGraph::AddTimeSample(FpsGraph *this)
{
  ?AddTimeSample@FpsGraph@@QEAAXXZ(this);
}

/*
==============
FpsGraph::InitGraph
==============
*/

void __fastcall FpsGraph::InitGraph(FpsGraph *this, const vec2_t *origin, int width, int height, int sampleCount, const char *label, float targetMS, float timeNormalizationScale)
{
  ?InitGraph@FpsGraph@@QEAAXAEBTvec2_t@@HHHPEBDMM@Z(this, origin, width, height, sampleCount, label, targetMS, timeNormalizationScale);
}

/*
==============
FpsGraph::BeginTimeSamples
==============
*/

void __fastcall FpsGraph::BeginTimeSamples(FpsGraph *this)
{
  ?BeginTimeSamples@FpsGraph@@QEAAXXZ(this);
}

/*
==============
FpsGraph::AddTimeUS
==============
*/

void __fastcall FpsGraph::AddTimeUS(FpsGraph *this, unsigned __int64 microseconds)
{
  ?AddTimeUS@FpsGraph@@QEAAX_K@Z(this, microseconds);
}

/*
==============
FpsGraph::FpsGraph
==============
*/

void __fastcall FpsGraph::FpsGraph(FpsGraph *this)
{
  ??0FpsGraph@@QEAA@XZ(this);
}

/*
==============
FpsGraph::AddTimeMS
==============
*/

void __fastcall FpsGraph::AddTimeMS(FpsGraph *this, float milliseconds)
{
  ?AddTimeMS@FpsGraph@@QEAAXM@Z(this, milliseconds);
}

/*
==============
FpsGraph::AddTimeSampleAdditive
==============
*/

void __fastcall FpsGraph::AddTimeSampleAdditive(FpsGraph *this)
{
  ?AddTimeSampleAdditive@FpsGraph@@QEAAXXZ(this);
}

/*
==============
FpsGraph::FpsGraph
==============
*/
void FpsGraph::FpsGraph(FpsGraph *this)
{
  this->m_initialized = 0;
  this->m_previousTimeSample = 0i64;
}

/*
==============
FpsGraph::AddTimeMS
==============
*/

void __fastcall FpsGraph::AddTimeMS(FpsGraph *this, double milliseconds, __int64 a3, double _XMM3_8)
{
  char v4; 
  char v5; 
  GfxColor v9; 

  __asm
  {
    vmovss  xmm2, dword ptr [rcx+17DCh]
    vxorps  xmm3, xmm3, xmm3; dTime
    vucomiss xmm2, xmm3
  }
  if ( v5 )
  {
    CG_AddDebugBufferDataAndColor(&this->m_graph, *(float *)&milliseconds, FpsGraph::WHITE, *(float *)&_XMM3);
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm2, cs:__real@40000000
      vcomiss xmm1, xmm0
    }
    if ( v4 | v5 )
    {
      v9 = FpsGraph::WHITE;
      __asm { vcomiss xmm1, xmm2 }
      if ( !(v4 | v5) )
        v9 = FpsGraph::TARGET_COLOR;
      CG_AddDebugBufferDataAndColor(&this->m_graph, *(float *)&milliseconds, v9, *(float *)&_XMM3);
    }
    else
    {
      CG_AddDebugBufferDataAndColor(&this->m_graph, *(float *)&milliseconds, FpsGraph::HALF_TARGET_COLOR, *(float *)&_XMM3);
    }
  }
}

/*
==============
FpsGraph::AddTimeSample
==============
*/

void __fastcall FpsGraph::AddTimeSample(FpsGraph *this, __int64 a2, __int64 a3, double _XMM3_8)
{
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  GfxColor v13; 

  _RBX = this;
  v6 = Sys_Microseconds();
  v7 = v6;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
  }
  if ( (__int64)(v6 - _RBX->m_previousTimeSample) < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+17DCh]
    vmulss  xmm2, xmm0, cs:__real@3a83126f
    vxorps  xmm3, xmm3, xmm3; dTime
    vucomiss xmm1, xmm3
  }
  if ( v6 == _RBX->m_previousTimeSample )
  {
    v13 = FpsGraph::WHITE;
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@40000000
      vcomiss xmm2, xmm0
    }
    if ( v6 <= _RBX->m_previousTimeSample )
    {
      v13 = FpsGraph::WHITE;
      __asm { vcomiss xmm2, xmm1 }
      if ( v6 > _RBX->m_previousTimeSample )
        v13 = FpsGraph::TARGET_COLOR;
    }
    else
    {
      v13 = FpsGraph::HALF_TARGET_COLOR;
    }
  }
  __asm { vmovaps xmm1, xmm2; data }
  CG_AddDebugBufferDataAndColor(&_RBX->m_graph, *(float *)&_XMM1, v13, *(float *)&_XMM3);
  _RBX->m_previousTimeSample = v7;
}

/*
==============
FpsGraph::AddTimeSampleAdditive
==============
*/

void __fastcall FpsGraph::AddTimeSampleAdditive(FpsGraph *this, __int64 a2, __int64 a3, double _XMM3_8)
{
  unsigned __int64 v6; 
  bool v7; 
  __int64 v8; 
  GfxColor v17; 

  _RBX = this;
  v6 = Sys_Microseconds();
  v7 = v6 < _RBX->m_previousTimeSample;
  v8 = v6 - _RBX->m_previousTimeSample;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( v8 < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+17DCh]
    vmulss  xmm2, xmm0, cs:__real@3a83126f
    vxorps  xmm3, xmm3, xmm3; dTime
    vucomiss xmm1, xmm3
  }
  if ( v8 )
  {
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@40000000
      vcomiss xmm2, xmm0
    }
    if ( v7 || v8 == 0 )
    {
      v17 = FpsGraph::WHITE;
      __asm
      {
        vcomiss xmm2, xmm1
        vmovaps xmm1, xmm2; data
      }
      if ( !v7 && v8 != 0 )
        v17 = FpsGraph::TARGET_COLOR;
      CG_AddDebugBufferDataAndColor(&_RBX->m_graph, *(float *)&_XMM1, v17, *(float *)&_XMM3);
    }
    else
    {
      __asm { vmovaps xmm1, xmm2; data }
      CG_AddDebugBufferDataAndColor(&_RBX->m_graph, *(float *)&_XMM1, FpsGraph::HALF_TARGET_COLOR, *(float *)&_XMM3);
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm2; data }
    CG_AddDebugBufferDataAndColor(&_RBX->m_graph, *(float *)&_XMM1, FpsGraph::WHITE, *(float *)&_XMM3);
  }
}

/*
==============
FpsGraph::AddTimeUS
==============
*/

void __fastcall FpsGraph::AddTimeUS(FpsGraph *this, unsigned __int64 microseconds, __int64 a3, double _XMM3_8)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
  }
  if ( (microseconds & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+17DCh]
    vmulss  xmm2, xmm0, cs:__real@3a83126f
    vxorps  xmm3, xmm3, xmm3; dTime
    vucomiss xmm1, xmm3
  }
  if ( microseconds )
  {
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@40000000
      vcomiss xmm2, xmm0
      vmovaps xmm1, xmm2; data
    }
    CG_AddDebugBufferDataAndColor(&this->m_graph, *(float *)&_XMM1, FpsGraph::HALF_TARGET_COLOR, *(float *)&_XMM3);
  }
  else
  {
    __asm { vmovaps xmm1, xmm2; data }
    CG_AddDebugBufferDataAndColor(&this->m_graph, *(float *)&_XMM1, FpsGraph::WHITE, *(float *)&_XMM3);
  }
}

/*
==============
FpsGraph::BeginTimeSamples
==============
*/
void FpsGraph::BeginTimeSamples(FpsGraph *this)
{
  this->m_previousTimeSample = Sys_Microseconds();
}

/*
==============
FpsGraph::DrawGraph
==============
*/
void FpsGraph::DrawGraph(FpsGraph *this)
{
  int graphLineThickness; 
  int v26; 
  int v38; 
  int v39; 
  char v42; 
  const char *v45; 
  const char *v50; 
  const char *v53; 
  vec2_t end; 
  vec2_t start; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovss  xmm6, dword ptr [rcx+1788h]
    vmovss  xmm1, cs:__real@3f800000
  }
  graphLineThickness = this->m_graph.drawInfo.graphLineThickness;
  __asm
  {
    vdivss  xmm2, xmm1, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rcx+1798h]
    vmulss  xmm3, xmm0, dword ptr [rcx+17DCh]
    vmulss  xmm0, xmm3, cs:__real@40000000
    vmulss  xmm1, xmm0, xmm2
    vmovss  xmm0, dword ptr [rcx+17A0h]
    vcvttss2si ebp, xmm1
    vmulss  xmm2, xmm2, xmm3
    vmovss  xmm3, dword ptr [rcx+179Ch]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebp
    vcvttss2si r14d, xmm2
    vsubss  xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rcx+1794h]
    vaddss  xmm1, xmm0, xmm3
  }
  _RDI = this;
  __asm
  {
    vmovss  dword ptr [rsp+68h+end], xmm1
    vmovss  dword ptr [rsp+68h+start], xmm3
    vmovss  dword ptr [rsp+68h+start+4], xmm2
    vmovss  dword ptr [rsp+68h+end+4], xmm2
  }
  DevGui_DrawLine(&start, &end, graphLineThickness, FpsGraph::HALF_TARGET_COLOR.array);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+17A0h]
    vmovss  xmm3, dword ptr [rdi+179Ch]
  }
  v26 = _RDI->m_graph.drawInfo.graphLineThickness;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r14d
    vsubss  xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1794h]
    vaddss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+68h+end], xmm1
    vmovss  dword ptr [rsp+68h+start], xmm3
    vmovss  dword ptr [rsp+68h+start+4], xmm2
    vmovss  dword ptr [rsp+68h+end+4], xmm2
  }
  DevGui_DrawLine(&start, &end, v26, FpsGraph::TARGET_COLOR.array);
  __asm
  {
    vcvttss2si ebx, dword ptr [rdi+17A0h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1794h]
    vaddss  xmm1, xmm0, dword ptr [rdi+179Ch]
    vcvttss2si esi, xmm1
  }
  v38 = _ESI + 4;
  v39 = _EBX - 4;
  DevGui_DrawFont(v38, v39, FpsGraph::WHITE.array, "0 ms");
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+17DCh]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( !v42 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v45 = j_va("%.1f ms", _RDX);
    DevGui_DrawFont(v38, v39 - _ER14, FpsGraph::TARGET_COLOR.array, v45);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+17DCh]
      vmulss  xmm1, xmm0, cs:__real@40000000
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v50 = j_va("%.1f ms", _RDX);
    DevGui_DrawFont(v38, v39 - _EBP, FpsGraph::HALF_TARGET_COLOR.array, v50);
  }
  __asm
  {
    vcvtss2sd xmm1, xmm6, xmm6
    vmovq   rdx, xmm1
  }
  v53 = j_va("%.1f ms", _RDX);
  DevGui_DrawFont(v38, v39 - _RDI->m_graph.drawInfo.height, FpsGraph::HALF_TARGET_COLOR.array, v53);
  CG_DebugBufferDraw(&_RDI->m_graph);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
FpsGraph::InitGraph
==============
*/
void FpsGraph::InitGraph(FpsGraph *this, const vec2_t *origin, int width, int height, int sampleCount, const char *label, float targetMS, float timeNormalizationScale)
{
  float v13; 

  _RBX = this;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+48h+var_10], xmm0
  }
  CG_InitDebugBufferData(&this->m_graph, origin, width, height, label, sampleCount, 1, v13);
  __asm
  {
    vmovss  xmm0, [rsp+48h+targetMS]
    vmovss  dword ptr [rbx+17DCh], xmm0
    vmovss  xmm0, [rsp+48h+timeNormalizationScale]
    vmovss  dword ptr [rbx+1788h], xmm0
  }
  _RBX->m_initialized = 1;
  _RBX->m_graph.drawInfo.usePointColors = 1;
  _RBX->m_graph.dataInfo.normalizeData = 1;
}

/*
==============
FpsGraph::IsInitialized
==============
*/
_BOOL8 FpsGraph::IsInitialized(FpsGraph *this)
{
  return this->m_initialized;
}

/*
==============
FpsGraph::ResetGraphData
==============
*/

void __fastcall FpsGraph::ResetGraphData(FpsGraph *this, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; initDTime
    vxorps  xmm2, xmm2, xmm2; initValue
  }
  CG_ClearDebugBufferData(&this->m_graph, 1, *(float *)&_XMM2, *(float *)&_XMM3);
}

