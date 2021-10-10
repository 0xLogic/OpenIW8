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
void FpsGraph::AddTimeMS(FpsGraph *this, float milliseconds)
{
  float m_targetMS; 
  GfxColor v3; 

  m_targetMS = this->m_targetMS;
  if ( m_targetMS == 0.0 )
  {
    CG_AddDebugBufferDataAndColor(&this->m_graph, milliseconds, FpsGraph::WHITE, 0.0);
  }
  else if ( milliseconds <= (float)(m_targetMS * 2.0) )
  {
    v3 = FpsGraph::WHITE;
    if ( milliseconds > m_targetMS )
      v3 = FpsGraph::TARGET_COLOR;
    CG_AddDebugBufferDataAndColor(&this->m_graph, milliseconds, v3, 0.0);
  }
  else
  {
    CG_AddDebugBufferDataAndColor(&this->m_graph, milliseconds, FpsGraph::HALF_TARGET_COLOR, 0.0);
  }
}

/*
==============
FpsGraph::AddTimeSample
==============
*/
void FpsGraph::AddTimeSample(FpsGraph *this)
{
  unsigned __int64 v2; 
  float v3; 
  float v4; 
  float m_targetMS; 
  float v6; 
  GfxColor v7; 

  v2 = Sys_Microseconds();
  v3 = (float)(__int64)(v2 - this->m_previousTimeSample);
  if ( (__int64)(v2 - this->m_previousTimeSample) < 0 )
  {
    v4 = (float)(__int64)(v2 - this->m_previousTimeSample);
    v3 = v4 + 1.8446744e19;
  }
  m_targetMS = this->m_targetMS;
  v6 = v3 * 0.001;
  if ( m_targetMS == 0.0 )
  {
    v7 = FpsGraph::WHITE;
  }
  else if ( v6 <= (float)(m_targetMS * 2.0) )
  {
    v7 = FpsGraph::WHITE;
    if ( v6 > m_targetMS )
      v7 = FpsGraph::TARGET_COLOR;
  }
  else
  {
    v7 = FpsGraph::HALF_TARGET_COLOR;
  }
  CG_AddDebugBufferDataAndColor(&this->m_graph, v6, v7, 0.0);
  this->m_previousTimeSample = v2;
}

/*
==============
FpsGraph::AddTimeSampleAdditive
==============
*/
void FpsGraph::AddTimeSampleAdditive(FpsGraph *this)
{
  signed __int64 v2; 
  float v3; 
  float v4; 
  float m_targetMS; 
  float v6; 
  GfxColor v7; 

  v2 = Sys_Microseconds() - this->m_previousTimeSample;
  v3 = (float)v2;
  if ( v2 < 0 )
  {
    v4 = (float)v2;
    v3 = v4 + 1.8446744e19;
  }
  m_targetMS = this->m_targetMS;
  v6 = v3 * 0.001;
  if ( m_targetMS == 0.0 )
  {
    CG_AddDebugBufferDataAndColor(&this->m_graph, v3 * 0.001, FpsGraph::WHITE, 0.0);
  }
  else if ( v6 <= (float)(m_targetMS * 2.0) )
  {
    v7 = FpsGraph::WHITE;
    if ( v6 > m_targetMS )
      v7 = FpsGraph::TARGET_COLOR;
    CG_AddDebugBufferDataAndColor(&this->m_graph, v6, v7, 0.0);
  }
  else
  {
    CG_AddDebugBufferDataAndColor(&this->m_graph, v6, FpsGraph::HALF_TARGET_COLOR, 0.0);
  }
}

/*
==============
FpsGraph::AddTimeUS
==============
*/
void FpsGraph::AddTimeUS(FpsGraph *this, unsigned __int64 microseconds)
{
  float v2; 
  float v3; 
  float m_targetMS; 
  float v5; 
  GfxColor v6; 

  v2 = (float)(__int64)microseconds;
  if ( (microseconds & 0x8000000000000000ui64) != 0i64 )
  {
    v3 = (float)(__int64)microseconds;
    v2 = v3 + 1.8446744e19;
  }
  m_targetMS = this->m_targetMS;
  v5 = v2 * 0.001;
  if ( m_targetMS == 0.0 )
  {
    CG_AddDebugBufferDataAndColor(&this->m_graph, v2 * 0.001, FpsGraph::WHITE, 0.0);
  }
  else if ( v5 <= (float)(m_targetMS * 2.0) )
  {
    v6 = FpsGraph::WHITE;
    if ( v5 > m_targetMS )
      v6 = FpsGraph::TARGET_COLOR;
    CG_AddDebugBufferDataAndColor(&this->m_graph, v5, v6, 0.0);
  }
  else
  {
    CG_AddDebugBufferDataAndColor(&this->m_graph, v5, FpsGraph::HALF_TARGET_COLOR, 0.0);
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
  float normalizationScale; 
  int graphLineThickness; 
  float v3; 
  int v4; 
  float v5; 
  float v6; 
  int v7; 
  float v8; 
  float v10; 
  int v11; 
  float v12; 
  int v13; 
  int v14; 
  float m_targetMS; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  vec2_t end; 
  vec2_t start; 

  normalizationScale = this->m_graph.dataInfo.normalizationScale;
  graphLineThickness = this->m_graph.drawInfo.graphLineThickness;
  v3 = (float)this->m_graph.drawInfo.height * this->m_targetMS;
  v4 = (int)(float)((float)(v3 * 2.0) * (float)(1.0 / normalizationScale));
  v5 = (float)(1.0 / normalizationScale) * v3;
  v6 = this->m_graph.drawInfo.origin.v[0];
  v7 = (int)v5;
  v8 = this->m_graph.drawInfo.origin.v[1] - (float)v4;
  end.v[0] = (float)this->m_graph.drawInfo.width + v6;
  start.v[0] = v6;
  start.v[1] = v8;
  end.v[1] = v8;
  DevGui_DrawLine(&start, &end, graphLineThickness, FpsGraph::HALF_TARGET_COLOR.array);
  v10 = this->m_graph.drawInfo.origin.v[0];
  v11 = this->m_graph.drawInfo.graphLineThickness;
  v12 = this->m_graph.drawInfo.origin.v[1] - (float)v7;
  end.v[0] = (float)this->m_graph.drawInfo.width + v10;
  start.v[0] = v10;
  start.v[1] = v12;
  end.v[1] = v12;
  DevGui_DrawLine(&start, &end, v11, FpsGraph::TARGET_COLOR.array);
  v13 = (int)(float)((float)this->m_graph.drawInfo.width + this->m_graph.drawInfo.origin.v[0]) + 4;
  v14 = (int)this->m_graph.drawInfo.origin.v[1] - 4;
  DevGui_DrawFont(v13, v14, FpsGraph::WHITE.array, "0 ms");
  m_targetMS = this->m_targetMS;
  if ( m_targetMS != 0.0 )
  {
    v16 = j_va("%.1f ms", m_targetMS);
    DevGui_DrawFont(v13, v14 - v7, FpsGraph::TARGET_COLOR.array, v16);
    v17 = j_va("%.1f ms", (float)(this->m_targetMS * 2.0));
    DevGui_DrawFont(v13, v14 - v4, FpsGraph::HALF_TARGET_COLOR.array, v17);
  }
  v18 = j_va("%.1f ms", normalizationScale);
  DevGui_DrawFont(v13, v14 - this->m_graph.drawInfo.height, FpsGraph::HALF_TARGET_COLOR.array, v18);
  CG_DebugBufferDraw(&this->m_graph);
}

/*
==============
FpsGraph::InitGraph
==============
*/
void FpsGraph::InitGraph(FpsGraph *this, const vec2_t *origin, int width, int height, int sampleCount, const char *label, float targetMS, float timeNormalizationScale)
{
  CG_InitDebugBufferData(&this->m_graph, origin, width, height, label, sampleCount, 1, 0.0);
  this->m_targetMS = targetMS;
  this->m_graph.dataInfo.normalizationScale = timeNormalizationScale;
  this->m_initialized = 1;
  this->m_graph.drawInfo.usePointColors = 1;
  this->m_graph.dataInfo.normalizeData = 1;
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
void FpsGraph::ResetGraphData(FpsGraph *this)
{
  CG_ClearDebugBufferData(&this->m_graph, 1, 0.0, 0.0);
}

