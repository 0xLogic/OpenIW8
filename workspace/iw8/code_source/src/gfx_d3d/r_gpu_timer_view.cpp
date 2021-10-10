/*
==============
GpuTimerView::AllocArrays
==============
*/

void __fastcall GpuTimerView::AllocArrays(GpuTimerView *this, int count)
{
  ?AllocArrays@GpuTimerView@@IEAAXH@Z(this, count);
}

/*
==============
GpuTimerView::DrawInPlace
==============
*/

void __fastcall GpuTimerView::DrawInPlace(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  ?DrawInPlace@GpuTimerView@@IEAAXUGfxCmdBufContext@@PEAVTimerTree@@@Z(this, gfxContext, pTree);
}

/*
==============
GpuTimerView::DrawGrouped
==============
*/

void __fastcall GpuTimerView::DrawGrouped(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  ?DrawGrouped@GpuTimerView@@IEAAXUGfxCmdBufContext@@PEAVTimerTree@@@Z(this, gfxContext, pTree);
}

/*
==============
GpuTimerView::SetBudgets
==============
*/

void __fastcall GpuTimerView::SetBudgets(GpuTimerView *this, int count, const unsigned int *pBudgetsUS)
{
  ?SetBudgets@GpuTimerView@@QEAAXHPEBI@Z(this, count, pBudgetsUS);
}

/*
==============
GpuTimerPage::DrawColumn
==============
*/

void __fastcall GpuTimerPage::DrawColumn(GpuTimerPage *this, GfxCmdBufContext *gfxContext, PageViewConfig::eCOLUMN column, TimerTree *pDrawTree, const vec2_t *pos, float width, vec2_t *outPos, int *rOutIdx)
{
  ?DrawColumn@GpuTimerPage@@IEAAXUGfxCmdBufContext@@W4eCOLUMN@PageViewConfig@@PEAVTimerTree@@AEBTvec2_t@@MAEAT6@AEAH@Z(this, gfxContext, column, pDrawTree, pos, width, outPos, rOutIdx);
}

/*
==============
GpuTimerView::DrawBackBar
==============
*/

void __fastcall GpuTimerView::DrawBackBar(GpuTimerView *this, GfxCmdBufContext *gfxContext, float y)
{
  ?DrawBackBar@GpuTimerView@@IEAAXUGfxCmdBufContext@@M@Z(this, gfxContext, y);
}

/*
==============
GpuTimerView::DrawTimingData
==============
*/

void __fastcall GpuTimerView::DrawTimingData(GpuTimerView *this, GfxCmdBufContext *gfxContext, int currentIdIndex, unsigned int *pOptOutTotalUs, float *pOptOutAvgUs)
{
  ?DrawTimingData@GpuTimerView@@IEAAXUGfxCmdBufContext@@HPEAIPEAM@Z(this, gfxContext, currentIdIndex, pOptOutTotalUs, pOptOutAvgUs);
}

/*
==============
GpuTimerPage::ShutdownPages
==============
*/

void GpuTimerPage::ShutdownPages(void)
{
  ?ShutdownPages@GpuTimerPage@@SAXXZ();
}

/*
==============
GpuTimerView::CalcOnly
==============
*/

void __fastcall GpuTimerView::CalcOnly(GpuTimerView *this, TimerTree *pTree)
{
  ?CalcOnly@GpuTimerView@@QEAAXPEAVTimerTree@@@Z(this, pTree);
}

/*
==============
GpuTimerPage::Shutdown
==============
*/

void __fastcall GpuTimerPage::Shutdown(GpuTimerPage *this)
{
  ?Shutdown@GpuTimerPage@@IEAAXXZ(this);
}

/*
==============
GpuTimerView::OutputToText
==============
*/

void __fastcall GpuTimerView::OutputToText(GpuTimerView *this, TimerTree *pTree)
{
  ?OutputToText@GpuTimerView@@IEAAXPEAVTimerTree@@@Z(this, pTree);
}

/*
==============
GpuTimerView::CalculateViewHistoryMinMaxAvg
==============
*/

void __fastcall GpuTimerView::CalculateViewHistoryMinMaxAvg(GpuTimerView *this, int currentIdIndex, unsigned int *pOutCurTotalUs, unsigned int *pOutMinUs, unsigned int *pOutMaxUs, float *pOutAvgUs)
{
  ?CalculateViewHistoryMinMaxAvg@GpuTimerView@@IEAAXHPEAI00PEAM@Z(this, currentIdIndex, pOutCurTotalUs, pOutMinUs, pOutMaxUs, pOutAvgUs);
}

/*
==============
GpuTimerView::WalkIdTotalTimeSubTree
==============
*/

bool __fastcall GpuTimerView::WalkIdTotalTimeSubTree(GfxCmdBufContext *__formal, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  return ?WalkIdTotalTimeSubTree@GpuTimerView@@SA_NUGfxCmdBufContext@@PEAVGPUTimeStampNode@@IPEAV1@@Z(__formal, pNode, nodeDepth, pView);
}

/*
==============
GpuTimerView::WalkIdTotalTime
==============
*/

bool __fastcall GpuTimerView::WalkIdTotalTime(GfxCmdBufContext *__formal, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  return ?WalkIdTotalTime@GpuTimerView@@SA_NUGfxCmdBufContext@@PEAVGPUTimeStampNode@@IPEAV1@@Z(__formal, pNode, nodeDepth, pView);
}

/*
==============
GpuTimerView::GetNodeTime
==============
*/

unsigned int __fastcall GpuTimerView::GetNodeTime(GpuTimerView *this, GPUTimeStampNode *pNode)
{
  return ?GetNodeTime@GpuTimerView@@IEAAIPEAVGPUTimeStampNode@@@Z(this, pNode);
}

/*
==============
GpuTimerView::SetOpacity
==============
*/

void __fastcall GpuTimerView::SetOpacity(GpuTimerView *this, unsigned __int8 opacity)
{
  ?SetOpacity@GpuTimerView@@QEAAXE@Z(this, opacity);
}

/*
==============
GpuTimerView::Draw
==============
*/

void __fastcall GpuTimerView::Draw(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree, unsigned int desiredDepth, bool showInActive, bool exclusive, const vec2_t *pos, float width, vec2_t *optOutPos)
{
  ?Draw@GpuTimerView@@QEAAXUGfxCmdBufContext@@PEAVTimerTree@@I_N2AEBTvec2_t@@MPEAT4@@Z(this, gfxContext, pTree, desiredDepth, showInActive, exclusive, pos, width, optOutPos);
}

/*
==============
GpuTimerView::DeAllocArrays
==============
*/

void __fastcall GpuTimerView::DeAllocArrays(GpuTimerView *this)
{
  ?DeAllocArrays@GpuTimerView@@IEAAXXZ(this);
}

/*
==============
GpuTimerView::WalkIdDrawTimeSubTree
==============
*/

bool __fastcall GpuTimerView::WalkIdDrawTimeSubTree(GfxCmdBufContext *gfxContext, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  return ?WalkIdDrawTimeSubTree@GpuTimerView@@SA_NUGfxCmdBufContext@@PEAVGPUTimeStampNode@@IPEAV1@@Z(gfxContext, pNode, nodeDepth, pView);
}

/*
==============
GpuTimerPage::Init
==============
*/

void __fastcall GpuTimerPage::Init(GpuTimerPage *this, PageViewConfig *pConfig, int numConfig)
{
  ?Init@GpuTimerPage@@QEAAXPEAVPageViewConfig@@H@Z(this, pConfig, numConfig);
}

/*
==============
GpuTimerView::DrawJustified
==============
*/

void __fastcall GpuTimerView::DrawJustified(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  ?DrawJustified@GpuTimerView@@IEAAXUGfxCmdBufContext@@PEAVTimerTree@@@Z(this, gfxContext, pTree);
}

/*
==============
GpuTimerPage::CalcOnly
==============
*/

void __fastcall GpuTimerPage::CalcOnly(GpuTimerPage *this, TimerTree *pDrawTree)
{
  ?CalcOnly@GpuTimerPage@@QEAAXPEAVTimerTree@@@Z(this, pDrawTree);
}

/*
==============
GpuTimerPage::AnimateOpacity
==============
*/

void __fastcall GpuTimerPage::AnimateOpacity(GpuTimerPage *this)
{
  ?AnimateOpacity@GpuTimerPage@@IEAAXXZ(this);
}

/*
==============
GpuTimerPage::SetOpacity
==============
*/

void __fastcall GpuTimerPage::SetOpacity(unsigned __int8 opacity)
{
  ?SetOpacity@GpuTimerPage@@SAXE@Z(opacity);
}

/*
==============
GpuTimerView::Init
==============
*/

void __fastcall GpuTimerView::Init(GpuTimerView *this, const char *pViewName, int numInfo, const TimerBarInfo *pInfo, bool ignoreOverheadIds)
{
  ?Init@GpuTimerView@@QEAAXPEBDHPEBUTimerBarInfo@@_N@Z(this, pViewName, numInfo, pInfo, ignoreOverheadIds);
}

/*
==============
GpuTimerView::InitViews
==============
*/

void __fastcall GpuTimerView::InitViews(GfxFont *font)
{
  ?InitViews@GpuTimerView@@SAXPEAUGfxFont@@@Z(font);
}

/*
==============
GpuTimerView::CheckDuplicateIds
==============
*/

GPUTimerId __fastcall GpuTimerView::CheckDuplicateIds(GpuTimerView *this, const TimerBarInfo *pInfo, int numInfo)
{
  return ?CheckDuplicateIds@GpuTimerView@@IEAA?AW4GPUTimerId@@PEBUTimerBarInfo@@H@Z(this, pInfo, numInfo);
}

/*
==============
GpuTimerView::Init
==============
*/

void __fastcall GpuTimerView::Init(GpuTimerView *this, const char *pViewName, int numId, const GPUTimerId *pId)
{
  ?Init@GpuTimerView@@QEAAXPEBDHPEBW4GPUTimerId@@@Z(this, pViewName, numId, pId);
}

/*
==============
GpuTimerView::SetBudgets
==============
*/

void __fastcall GpuTimerView::SetBudgets(GpuTimerView *this, unsigned int budgetUS)
{
  ?SetBudgets@GpuTimerView@@QEAAXI@Z(this, budgetUS);
}

/*
==============
GpuTimerView::DrawLabel
==============
*/

void __fastcall GpuTimerView::DrawLabel(GpuTimerView *this, GfxCmdBufContext *gfxContext, const char *pName, float y, GfxColor txtColor, bool indentText)
{
  ?DrawLabel@GpuTimerView@@IEAAXUGfxCmdBufContext@@PEBDMTGfxColor@@_N@Z(this, gfxContext, pName, y, txtColor, indentText);
}

/*
==============
GpuTimerView::SetPos
==============
*/

void __fastcall GpuTimerView::SetPos(GpuTimerView *this, float x, float y)
{
  ?SetPos@GpuTimerView@@IEAAXMM@Z(this, x, y);
}

/*
==============
GpuTimerView::WalkIdDrawTime
==============
*/

bool __fastcall GpuTimerView::WalkIdDrawTime(GfxCmdBufContext *gfxContext, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  return ?WalkIdDrawTime@GpuTimerView@@SA_NUGfxCmdBufContext@@PEAVGPUTimeStampNode@@IPEAV1@@Z(gfxContext, pNode, nodeDepth, pView);
}

/*
==============
GpuTimerPage::Draw
==============
*/

void __fastcall GpuTimerPage::Draw(GpuTimerPage *this, GfxCmdBufContext *gfxContext, TimerTree *pDrawTree, const vec2_t *pagePos, const vec2_t *pageSize, bool avgTimesOnly)
{
  ?Draw@GpuTimerPage@@QEAAXUGfxCmdBufContext@@PEAVTimerTree@@AEBTvec2_t@@2_N@Z(this, gfxContext, pDrawTree, pagePos, pageSize, avgTimesOnly);
}

/*
==============
GpuTimerView::CheckDuplicateIds
==============
*/

GPUTimerId __fastcall GpuTimerView::CheckDuplicateIds(GpuTimerView *this, const GPUTimerId *pId, int numId)
{
  return ?CheckDuplicateIds@GpuTimerView@@IEAA?AW4GPUTimerId@@PEBW42@H@Z(this, pId, numId);
}

/*
==============
GpuTimerPage::InitPages
==============
*/

void GpuTimerPage::InitPages(void)
{
  ?InitPages@GpuTimerPage@@SAXXZ();
}

/*
==============
GpuTimerPage::OutputToText
==============
*/

void __fastcall GpuTimerPage::OutputToText(GpuTimerPage *this, TimerTree *pDrawTree, int numViewTotalOnly)
{
  ?OutputToText@GpuTimerPage@@QEAAXPEAVTimerTree@@H@Z(this, pDrawTree, numViewTotalOnly);
}

/*
==============
GpuTimerView::SumAllIdTimeForFrame
==============
*/

unsigned int __fastcall GpuTimerView::SumAllIdTimeForFrame(GpuTimerView *this, unsigned int historyIdx)
{
  return ?SumAllIdTimeForFrame@GpuTimerView@@IEAAII@Z(this, historyIdx);
}

/*
==============
GpuTimerView::DrawTimerBar
==============
*/

void __fastcall GpuTimerView::DrawTimerBar(GpuTimerView *this, GfxCmdBufContext *gfxContext, float x, float y, float width, GfxColor barColor)
{
  ?DrawTimerBar@GpuTimerView@@IEAAXUGfxCmdBufContext@@MMMTGfxColor@@@Z(this, gfxContext, x, y, width, barColor);
}

/*
==============
GpuTimerView::Shutdown
==============
*/

void __fastcall GpuTimerView::Shutdown(GpuTimerView *this)
{
  ?Shutdown@GpuTimerView@@IEAAXXZ(this);
}

/*
==============
GpuTimerView::ShutdownViews
==============
*/

void GpuTimerView::ShutdownViews(void)
{
  ?ShutdownViews@GpuTimerView@@SAXXZ();
}

/*
==============
GpuTimerView::AllocArrays
==============
*/
void GpuTimerView::AllocArrays(GpuTimerView *this, int count)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  ntl::fixed_arena_allocator<135696,0> *v5; 
  GPUTimerId *mp_bottom_up; 
  unsigned __int64 v7; 
  GPUTimerId *v8; 
  unsigned int v9; 
  ntl::array<unsigned int,SharedTimerHistoryAlloc_t> *m_history; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 

  v3 = count;
  if ( this->m_timerId.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
    __debugbreak();
  v4 = 4 * v3;
  if ( !ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
    __debugbreak();
  v5 = ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator;
  if ( !ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator->mp_bottom_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 53, ASSERT_TYPE_ASSERT, "( mp_bottom_up )", (const char *)&queryFormat, "mp_bottom_up") )
    __debugbreak();
  if ( v5->mp_top_down < v5->mp_bottom_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 92, ASSERT_TYPE_ASSERT, "( mp_top_down >= mp_bottom_up )", (const char *)&queryFormat, "mp_top_down >= mp_bottom_up") )
    __debugbreak();
  if ( v5->mp_top_down - v5->mp_bottom_up < v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 54, ASSERT_TYPE_ASSERT, "( available() >= size_bytes )", (const char *)&queryFormat, "available() >= size_bytes") )
    __debugbreak();
  mp_bottom_up = (GPUTimerId *)v5->mp_bottom_up;
  v5->mp_bottom_up = (char *)&mp_bottom_up[v4 / 4];
  v7 = 0i64;
  this->m_timerId.m_data.m_buffer = mp_bottom_up;
  for ( this->m_timerId.m_data.m_size = v3; v7 < v3; ++v7 )
  {
    if ( v7 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
      __debugbreak();
    v8 = &this->m_timerId.m_data.m_buffer[v7];
    if ( v8 )
      *v8 = GPU_TIMER_FRAME;
  }
  ntl::array<unsigned int,SharedTimerHistoryAlloc_t>::reserve(&this->m_timerBudget, v3);
  v9 = 0;
  m_history = this->m_history;
  v11 = 0i64;
  do
  {
    ntl::array<unsigned int,SharedTimerHistoryAlloc_t>::reserve(&this->m_history[v9], v3);
    memset_0(m_history->m_data.m_buffer, 0, 4 * v3);
    if ( v11 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    this->m_ViewTotalUs.m_data[v11] = 0;
    ++v9;
    ++v11;
    ++m_history;
  }
  while ( v9 < 0x40 );
  v12 = 0i64;
  v13 = 129i64;
  do
  {
    if ( v12 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    this->m_RollingAvgUs.m_data[v12++] = 0.0;
    --v13;
  }
  while ( v13 );
}

/*
==============
GpuTimerPage::AnimateOpacity
==============
*/
void GpuTimerPage::AnimateOpacity(GpuTimerPage *this)
{
  unsigned __int8 v1; 
  unsigned __int8 v2; 

  if ( GpuTimerPage::ms_opacity >= GpuTimerPage::ms_targetOpacity )
  {
    if ( GpuTimerPage::ms_opacity > GpuTimerPage::ms_targetOpacity )
    {
      v2 = GpuTimerPage::ms_targetOpacity;
      if ( GpuTimerPage::ms_opacity - GpuTimerPage::ms_opacityInc >= GpuTimerPage::ms_targetOpacity )
        v2 = GpuTimerPage::ms_opacity - GpuTimerPage::ms_opacityInc;
      GpuTimerPage::ms_opacity = v2;
    }
  }
  else
  {
    v1 = GpuTimerPage::ms_targetOpacity;
    if ( GpuTimerPage::ms_opacityInc + GpuTimerPage::ms_opacity <= GpuTimerPage::ms_targetOpacity )
      v1 = GpuTimerPage::ms_opacityInc + GpuTimerPage::ms_opacity;
    GpuTimerPage::ms_opacity = v1;
  }
}

/*
==============
GpuTimerPage::CalcOnly
==============
*/
void GpuTimerPage::CalcOnly(GpuTimerPage *this, TimerTree *pDrawTree)
{
  int v2; 
  GpuTimerPage *v4; 
  __int64 v5; 
  GpuTimerView *v6; 
  unsigned __int64 m_historyIdx; 
  __int64 v8; 
  GPUTimeStampNode *m_pRoot; 
  unsigned int totalTime; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  unsigned __int128 v14; 
  int v16; 
  __int64 v17; 

  v2 = 0;
  v4 = this;
  v16 = 0;
  if ( this->m_numCfg > 0 )
  {
    v5 = 0i64;
    v17 = 0i64;
    do
    {
      v6 = *(GpuTimerView **)((char *)&v4->m_pCfg->m_pView + v5);
      memset_0(v6->m_history[v6->m_historyIdx].m_data.m_buffer, 0, 4 * v6->m_history[v6->m_historyIdx].m_data.m_size);
      m_historyIdx = v6->m_historyIdx;
      if ( m_historyIdx >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v6->m_ViewTotalUs.m_data[m_historyIdx] = 0;
      if ( !v6->m_historyIdx )
        TimerTree::SortIdArray(pDrawTree, v6->m_timerId.m_data.m_buffer, v6->m_numId);
      v8 = 0i64;
      if ( v6->m_numId )
      {
        do
        {
          if ( (unsigned int)v8 >= v6->m_timerId.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( (unsigned int)v8 >= v6->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          GpuTimerView::ms_drawData.currentId = v6->m_timerId.m_data.m_buffer[v8];
          GpuTimerView::ms_drawData.totalTime = 0;
          m_pRoot = pDrawTree->m_pRoot;
          v14 = 0ui64;
          TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, (GfxCmdBufContext *)&v14, m_pRoot, v6, 0);
          totalTime = GpuTimerView::ms_drawData.totalTime;
          v11 = 2 * (v6->m_historyIdx + 6i64);
          if ( (unsigned int)v8 >= v6->m_history[v6->m_historyIdx].m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()", (unsigned __int128)0i64) )
              __debugbreak();
            if ( (unsigned __int64)(unsigned int)v8 >= *(_QWORD *)&v6->m_txtInactive.array[8 * v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          *(_DWORD *)(*(_QWORD *)&v6->m_barBackColor.array[8 * v11] + 4 * v8) = totalTime;
          v12 = v6->m_historyIdx;
          v13 = GpuTimerView::ms_drawData.totalTime;
          if ( v12 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          v6->m_ViewTotalUs.m_data[v12] += v13;
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < v6->m_numId );
        v2 = v16;
        v5 = v17;
      }
      v16 = ++v2;
      v5 += 24i64;
      v6->m_historyIdx = ((unsigned __int8)v6->m_historyIdx + 1) & 0x3F;
      v4 = this;
      v17 = v5;
    }
    while ( v2 < this->m_numCfg );
  }
}

/*
==============
GpuTimerView::CalcOnly
==============
*/
void GpuTimerView::CalcOnly(GpuTimerView *this, TimerTree *pTree)
{
  unsigned __int64 m_historyIdx; 
  unsigned int i; 
  GPUTimeStampNode *m_pRoot; 
  unsigned int totalTime; 
  __int64 v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned __int128 v11; 

  memset_0(this->m_history[this->m_historyIdx].m_data.m_buffer, 0, 4 * this->m_history[this->m_historyIdx].m_data.m_size);
  m_historyIdx = this->m_historyIdx;
  if ( m_historyIdx >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  this->m_ViewTotalUs.m_data[m_historyIdx] = 0;
  if ( !this->m_historyIdx )
    TimerTree::SortIdArray(pTree, this->m_timerId.m_data.m_buffer, this->m_numId);
  for ( i = 0; i < this->m_numId; ++i )
  {
    if ( i >= this->m_timerId.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( i >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    GpuTimerView::ms_drawData.currentId = this->m_timerId.m_data.m_buffer[i];
    GpuTimerView::ms_drawData.totalTime = 0;
    m_pRoot = pTree->m_pRoot;
    v11 = 0ui64;
    TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, (GfxCmdBufContext *)&v11, m_pRoot, this, 0);
    totalTime = GpuTimerView::ms_drawData.totalTime;
    v8 = 2 * (this->m_historyIdx + 6i64);
    if ( i >= this->m_history[this->m_historyIdx].m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()", (unsigned __int128)0i64) )
        __debugbreak();
      if ( (unsigned __int64)i >= *(_QWORD *)&this->m_txtInactive.array[8 * v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v8] + 4i64 * i) = totalTime;
    v9 = this->m_historyIdx;
    v10 = GpuTimerView::ms_drawData.totalTime;
    if ( v9 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    this->m_ViewTotalUs.m_data[v9] += v10;
  }
  this->m_historyIdx = ((unsigned __int8)this->m_historyIdx + 1) & 0x3F;
}

/*
==============
GpuTimerView::CalculateViewHistoryMinMaxAvg
==============
*/
void GpuTimerView::CalculateViewHistoryMinMaxAvg(GpuTimerView *this, int currentIdIndex, unsigned int *pOutCurTotalUs, unsigned int *pOutMinUs, unsigned int *pOutMaxUs, float *pOutAvgUs)
{
  unsigned int v6; 
  unsigned int *v7; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int i; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned __int64 *p_m_size; 
  __int64 v17; 
  unsigned __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  float v22; 

  v6 = 0;
  v7 = pOutMinUs;
  v9 = -1;
  v10 = 0;
  if ( currentIdIndex >= 0 )
  {
    p_m_size = &this->m_history[0].m_data.m_size;
    v17 = 64i64;
    v18 = currentIdIndex;
    do
    {
      if ( v18 >= *p_m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v18 >= *p_m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v19 = *(_DWORD *)(*(p_m_size - 1) + 4 * v18);
      v10 += v19;
      v20 = v19;
      if ( v19 > v9 )
        v20 = v9;
      v9 = v20;
      if ( v6 > v19 )
        v19 = v6;
      p_m_size += 2;
      v6 = v19;
      --v17;
    }
    while ( v17 );
    v7 = pOutMinUs;
    v21 = 2 * (this->m_historyIdx + 6i64);
    if ( v18 >= this->m_history[this->m_historyIdx].m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v18 >= *(_QWORD *)&this->m_txtInactive.array[8 * v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v15 = *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v21] + 4 * v18);
  }
  else
  {
    for ( i = 0; i < 0x40; ++i )
    {
      v12 = GpuTimerView::SumAllIdTimeForFrame(this, i);
      v13 = v12;
      if ( v12 > v9 )
        v13 = v9;
      v9 = v13;
      v14 = v12;
      if ( v6 > v12 )
        v14 = v6;
      v10 += v12;
      v6 = v14;
    }
    v15 = GpuTimerView::SumAllIdTimeForFrame(this, this->m_historyIdx);
  }
  *pOutCurTotalUs = v15;
  *v7 = v9;
  *pOutMaxUs = v6;
  v22 = (float)v10;
  *pOutAvgUs = v22 * 0.015625;
}

/*
==============
GpuTimerView::CheckDuplicateIds
==============
*/
__int64 GpuTimerView::CheckDuplicateIds(GpuTimerView *this, const TimerBarInfo *pInfo, int numInfo)
{
  int v3; 
  __int64 v4; 
  __int64 i; 
  GPUTimerId id; 
  __int64 v7; 
  const TimerBarInfo *v8; 

  v3 = 0;
  v4 = numInfo;
  if ( numInfo <= 0 )
    return 129i64;
  for ( i = 0i64; ; ++i )
  {
    id = pInfo->id;
    v7 = i;
    if ( i < v4 )
      break;
LABEL_7:
    ++v3;
    ++pInfo;
    if ( v3 >= (int)v4 )
      return 129i64;
  }
  v8 = pInfo;
  while ( v8->id != id )
  {
    ++v7;
    ++v8;
    if ( v7 >= v4 )
      goto LABEL_7;
  }
  return (unsigned int)id;
}

/*
==============
GpuTimerView::CheckDuplicateIds
==============
*/
__int64 GpuTimerView::CheckDuplicateIds(GpuTimerView *this, const GPUTimerId *pId, int numId)
{
  int v3; 
  __int64 i; 
  GPUTimerId v5; 
  __int64 v6; 

  v3 = 0;
  if ( numId <= 0 )
    return 129i64;
  for ( i = 0i64; ; ++i )
  {
    v5 = pId[i];
    v6 = i;
    if ( i < numId )
      break;
LABEL_6:
    if ( ++v3 >= numId )
      return 129i64;
  }
  while ( pId[v6] != v5 )
  {
    if ( ++v6 >= numId )
      goto LABEL_6;
  }
  return (unsigned int)v5;
}

/*
==============
GpuTimerView::DeAllocArrays
==============
*/
void GpuTimerView::DeAllocArrays(GpuTimerView *this)
{
  ntl::array<unsigned int,SharedTimerHistoryAlloc_t> *m_history; 
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 i; 

  m_history = this->m_history;
  v3 = 64i64;
  do
  {
    if ( m_history->m_data.m_size )
    {
      v4 = 0i64;
      do
        ++v4;
      while ( v4 < m_history->m_data.m_size );
      if ( m_history->m_data.m_buffer )
      {
        if ( !ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        m_history->m_data.m_buffer = NULL;
        m_history->m_data.m_size = 0i64;
      }
    }
    ++m_history;
    --v3;
  }
  while ( v3 );
  this->m_historyIdx = 0;
  if ( this->m_timerId.m_data.m_size )
  {
    for ( i = 0i64; i < this->m_timerId.m_data.m_size; ++i )
      ;
    if ( this->m_timerId.m_data.m_buffer )
    {
      if ( !ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
        __debugbreak();
      this->m_timerId.m_data.m_buffer = NULL;
      this->m_timerId.m_data.m_size = 0i64;
    }
  }
  this->m_numId = 0;
  if ( this->m_timerBudget.m_data.m_size )
    ntl::array<unsigned int,SharedTimerHistoryAlloc_t>::clear_and_deallocate(&this->m_timerBudget);
  this->m_timerBudgetTotalUS = 0;
}

/*
==============
GpuTimerPage::Draw
==============
*/
void GpuTimerPage::Draw(GpuTimerPage *this, GfxCmdBufContext *gfxContext, TimerTree *pDrawTree, const vec2_t *pagePos, const vec2_t *pageSize, bool avgTimesOnly)
{
  bool v6; 
  const vec2_t *v7; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 
  GpuTimerView *m_pView; 
  unsigned int v19; 
  float v20; 
  int v21; 
  __int128 fontWidth_low; 
  float v23; 
  float v24; 
  float v27; 
  int v28; 
  int m_numCfg; 
  TimerTree *v30; 
  __int64 v31; 
  PageViewConfig *m_pCfg; 
  GpuTimerView *v33; 
  GpuTimerView::DisplayType m_displayType; 
  float v35; 
  float v36; 
  TimerTree *v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  __int64 v43; 
  PageViewConfig *v44; 
  GpuTimerView *v45; 
  GpuTimerView::DisplayType v46; 
  float v47; 
  float v48; 
  GfxCmdBufContext v49; 
  int v50; 
  _QWORD v51[3]; 
  TimerTree *v52; 
  TimerTree *v53; 
  TimerTree *v54; 
  const vec2_t *v55; 
  TimerTree *v56; 

  v6 = this->m_numCfg <= 0;
  v7 = pagePos;
  v55 = pagePos;
  v54 = pDrawTree;
  if ( !v6 )
  {
    v10 = GpuTimerPage::ms_opacity;
    if ( GpuTimerPage::ms_opacity >= GpuTimerPage::ms_targetOpacity )
    {
      if ( GpuTimerPage::ms_opacity > GpuTimerPage::ms_targetOpacity )
      {
        v11 = GpuTimerPage::ms_targetOpacity;
        if ( GpuTimerPage::ms_opacity - GpuTimerPage::ms_opacityInc >= GpuTimerPage::ms_targetOpacity )
          v11 = GpuTimerPage::ms_opacity - GpuTimerPage::ms_opacityInc;
        v10 = v11;
        GpuTimerPage::ms_opacity = v11;
      }
    }
    else
    {
      v10 = GpuTimerPage::ms_targetOpacity;
      if ( GpuTimerPage::ms_opacityInc + GpuTimerPage::ms_opacity <= GpuTimerPage::ms_targetOpacity )
        v10 = GpuTimerPage::ms_opacityInc + GpuTimerPage::ms_opacity;
      GpuTimerPage::ms_opacity = v10;
    }
    v12 = 3 * v10;
    if ( v12 > 0xFF )
      LOBYTE(v12) = -1;
    v13 = 0;
    v14 = (v10 << 24) | 0xFFFFFF;
    v15 = ((unsigned __int8)v12 << 24) | 0xFFFFFF;
    v16 = 0;
    LODWORD(v52) = v15;
    if ( this->m_numCfg > 0 )
    {
      v17 = 0i64;
      while ( 1 )
      {
        m_pView = this->m_pCfg[v17++].m_pView;
        GpuTimerView::ms_opacity = v10;
        m_pView->m_barBackColor.array[3] = v10;
        v19 = 3 * v10;
        if ( v19 > 0xFF )
          LOBYTE(v19) = -1;
        ++v16;
        m_pView->m_txtColor.array[3] = v19;
        m_pView->m_txtInactive.array[3] = v19;
        m_pView->m_txtOverBdgtColor.array[3] = v19;
        if ( v16 >= this->m_numCfg )
          break;
        v10 = GpuTimerPage::ms_opacity;
      }
    }
    v20 = GpuTimerView::ms_drawData.fontWidth * 25.0;
    v21 = 0;
    fontWidth_low = LODWORD(GpuTimerView::ms_drawData.fontWidth);
    GpuTimerView::ms_avgTimesOnly = avgTimesOnly;
    v23 = v7->v[1];
    v24 = v7->v[0];
    *(float *)&fontWidth_low = (float)((float)(GpuTimerView::ms_drawData.fontWidth * 30.0) + (float)(GpuTimerView::ms_drawData.fontWidth * 25.0)) * 2.0;
    _XMM2 = fontWidth_low;
    __asm { vmaxss  xmm11, xmm2, dword ptr [rax] }
    v27 = (float)(v23 + 2.0) + GpuTimerView::ms_drawData.fontHeight;
    v50 = -1;
    v28 = -1;
    m_numCfg = this->m_numCfg;
    *(float *)&v53 = v24 + 2.0;
    *((float *)&v53 + 1) = v27;
    *(float *)&v56 = v24 + 2.0;
    *((float *)&v56 + 1) = v27;
    if ( m_numCfg > 0 )
    {
      v30 = v54;
      v31 = 0i64;
      do
      {
        m_pCfg = this->m_pCfg;
        if ( this->m_pCfg[v31].m_column == COLUMN_NONE )
        {
          v33 = m_pCfg[v31].m_pView;
          m_displayType = m_pCfg[v31].m_displayType;
          *(GfxCmdBufContext *)&v51[1] = *gfxContext;
          v33->m_dispType = m_displayType;
          GpuTimerView::Draw(this->m_pCfg[v31].m_pView, (GfxCmdBufContext *)&v51[1], v30, this->m_pCfg[v31].m_childDepth, this->m_pCfg[v31].m_showInActive, this->m_pCfg[v31].m_exclusiveTimes, (const vec2_t *)&v53, *(float *)&_XMM11 - 4.0, (vec2_t *)&v56);
          v28 = v21;
          v53 = v56;
        }
        m_numCfg = this->m_numCfg;
        ++v21;
        ++v31;
      }
      while ( v21 < m_numCfg );
      v27 = *((float *)&v56 + 1);
      v15 = (int)v52;
      v7 = v55;
    }
    v36 = (float)(v27 + 2.0) - v23;
    v35 = v36;
    if ( v28 >= 0 )
    {
      *(GfxCmdBufContext *)&v51[1] = *gfxContext;
      DrawFrame((GfxCmdBufContext *)&v51[1], v24, v23, *(float *)&_XMM11, v36, v20 + GpuTimerView::ms_drawData.anchorX, v23 + GpuTimerView::ms_drawData.textOffsetY, GpuTimerView::ms_drawData.font, (GfxColor)v14, (GfxColor)v15, GpuTimerView::ms_avgTimesOnly);
      m_numCfg = this->m_numCfg;
    }
    v37 = v54;
    v38 = v36 + v7->v[1];
    v39 = v7->v[0];
    v41 = *(float *)&_XMM11 * 0.5;
    v40 = *(float *)&_XMM11 * 0.5;
    v42 = (float)(v38 + 2.0) + GpuTimerView::ms_drawData.fontHeight;
    *((float *)&v53 + 1) = v42;
    *((float *)&v52 + 1) = v42;
    *(float *)&v53 = v39 + 2.0;
    *(float *)&v52 = v39 + 2.0;
    if ( m_numCfg > 0 )
    {
      v43 = 0i64;
      do
      {
        v44 = this->m_pCfg;
        if ( this->m_pCfg[v43].m_column == COLUMN_1 )
        {
          v45 = v44[v43].m_pView;
          v46 = v44[v43].m_displayType;
          *(GfxCmdBufContext *)&v51[1] = *gfxContext;
          v45->m_dispType = v46;
          GpuTimerView::Draw(this->m_pCfg[v43].m_pView, (GfxCmdBufContext *)&v51[1], v37, this->m_pCfg[v43].m_childDepth, this->m_pCfg[v43].m_showInActive, this->m_pCfg[v43].m_exclusiveTimes, (const vec2_t *)&v53, v41 - 4.0, (vec2_t *)&v52);
          v53 = v52;
          v50 = v13;
        }
        ++v13;
        ++v43;
      }
      while ( v13 < this->m_numCfg );
      v42 = *((float *)&v52 + 1);
      v7 = v55;
    }
    v54 = v52;
    if ( v50 >= 0 )
    {
      *(GfxCmdBufContext *)&v51[1] = *gfxContext;
      DrawFrame((GfxCmdBufContext *)&v51[1], v39, v38, v41, (float)(v42 + 2.0) - v38, v20 + GpuTimerView::ms_drawData.anchorX, v38 + GpuTimerView::ms_drawData.textOffsetY, GpuTimerView::ms_drawData.font, (GfxColor)v14, (GfxColor)v15, GpuTimerView::ms_avgTimesOnly);
    }
    v47 = v35 + v7->v[1];
    v48 = v41 + v7->v[0];
    v49 = *gfxContext;
    *(float *)&v55 = v48 + 2.0;
    *((float *)&v55 + 1) = (float)(v47 + 2.0) + GpuTimerView::ms_drawData.fontHeight;
    *(GfxCmdBufContext *)&v51[1] = v49;
    GpuTimerPage::DrawColumn(this, (GfxCmdBufContext *)&v51[1], COLUMN_2, v37, (const vec2_t *)&v55, v40 - 4.0, (vec2_t *)&v54, &v50);
    if ( v50 >= 0 )
    {
      *(GfxCmdBufContext *)&v51[1] = *gfxContext;
      DrawFrame((GfxCmdBufContext *)&v51[1], v48, v47, v40, (float)(*((float *)&v54 + 1) + 2.0) - v47, v20 + GpuTimerView::ms_drawData.anchorX, v47 + GpuTimerView::ms_drawData.textOffsetY, GpuTimerView::ms_drawData.font, (GfxColor)v14, (GfxColor)v15, GpuTimerView::ms_avgTimesOnly);
    }
    *(GfxCmdBufContext *)&v51[1] = *gfxContext;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v51[1]);
  }
}

/*
==============
GpuTimerView::Draw
==============
*/
void GpuTimerView::Draw(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree, unsigned int desiredDepth, bool showInActive, bool exclusive, const vec2_t *pos, float width, vec2_t *optOutPos)
{
  __int64 m_historyIdx; 
  unsigned __int64 v14; 
  float v15; 
  float v16; 
  GpuTimerView::DisplayType m_dispType; 
  __int32 v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  GfxCmdBufContext v22[2]; 

  if ( desiredDepth > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_view.cpp", 462, ASSERT_TYPE_ASSERT, "(desiredDepth <= MAX_CHILD_DEPTH)", (const char *)&queryFormat, "desiredDepth <= MAX_CHILD_DEPTH") )
    __debugbreak();
  if ( !pTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_view.cpp", 463, ASSERT_TYPE_ASSERT, "(pTree)", (const char *)&queryFormat, "pTree") )
    __debugbreak();
  if ( !TimerTree::GetRootNode(pTree) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_view.cpp", 464, ASSERT_TYPE_ASSERT, "(pTree->GetRootNode())", (const char *)&queryFormat, "pTree->GetRootNode()") )
    __debugbreak();
  m_historyIdx = this->m_historyIdx;
  if ( !(_DWORD)m_historyIdx )
  {
    TimerTree::SortIdArray(pTree, this->m_timerId.m_data.m_buffer, this->m_numId);
    m_historyIdx = this->m_historyIdx;
  }
  memset_0(this->m_history[(unsigned int)m_historyIdx].m_data.m_buffer, 0, 4 * this->m_history[m_historyIdx].m_data.m_size);
  v14 = this->m_historyIdx;
  if ( v14 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  this->m_ViewTotalUs.m_data[v14] = 0;
  GpuTimerView::ms_drawData.showInActive = showInActive;
  GpuTimerView::ms_drawData.exclusiveTimes = exclusive;
  GpuTimerView::ms_drawData.timerLabelDrawn = 0;
  GpuTimerView::ms_drawData.desiredDepth = desiredDepth;
  if ( (unsigned int)(this->m_dispType - 3) <= 2 )
  {
    GpuTimerView::OutputToText(this, pTree);
    if ( optOutPos )
      *optOutPos = *pos;
  }
  else
  {
    GpuTimerView::ms_drawData.width = width;
    GpuTimerView::ms_drawData.budgetBarWidth = width - GpuTimerView::ms_drawData.maxNameWidth;
    v15 = pos->v[1];
    v16 = pos->v[0] + GpuTimerView::ms_drawData.maxNameWidth;
    GpuTimerView::ms_drawData.anchorX = pos->v[0];
    GpuTimerView::ms_drawData.pixelsPerUS = (float)(width - GpuTimerView::ms_drawData.maxNameWidth) * 0.000060000002;
    GpuTimerView::ms_drawData.anchorY = v15;
    GpuTimerView::ms_drawData.barStartX = v16;
    GpuTimerView::ms_drawData.barStartY = v15;
    GpuTimerView::ms_drawData.currentX = v16;
    GpuTimerView::ms_drawData.currentY = v15;
    GpuTimerView::ms_drawData.rootStartTimeUs = TimerTree::GetRootNode(pTree)->m_beginTimeUs;
    m_dispType = this->m_dispType;
    if ( m_dispType )
    {
      v18 = m_dispType - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v22[0] = *gfxContext;
          GpuTimerView::DrawGrouped(this, v22, pTree);
        }
      }
      else
      {
        v22[0] = *gfxContext;
        GpuTimerView::DrawInPlace(this, v22, pTree);
      }
    }
    else
    {
      v22[0] = *gfxContext;
      GpuTimerView::DrawJustified(this, v22, pTree);
    }
    v22[0] = *gfxContext;
    RB_EndSurfaceIfNeeded(v22);
    if ( optOutPos )
    {
      optOutPos->v[0] = pos->v[0];
      optOutPos->v[1] = GpuTimerView::ms_drawData.currentY;
    }
  }
  v19 = GpuTimerView::SumAllIdTimeForFrame(this, this->m_historyIdx);
  v20 = this->m_historyIdx;
  v21 = v19;
  if ( v20 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  this->m_ViewTotalUs.m_data[v20] = v21;
  this->m_historyIdx = ((unsigned __int8)this->m_historyIdx + 1) & 0x3F;
}

/*
==============
GpuTimerView::DrawBackBar
==============
*/
void GpuTimerView::DrawBackBar(GpuTimerView *this, GfxCmdBufContext *gfxContext, float y)
{
  unsigned int packed; 
  GfxCmdBufContext v4; 

  packed = this->m_barBackColor.packed;
  v4 = *gfxContext;
  RB_DrawStretchPic(&v4, rgp.whiteMaterial, GpuTimerView::ms_drawData.anchorX, y + GpuTimerView::ms_drawData.backBarGap, GpuTimerView::ms_drawData.width, GpuTimerView::ms_drawData.backBarHeight, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
}

/*
==============
GpuTimerPage::DrawColumn
==============
*/
void GpuTimerPage::DrawColumn(GpuTimerPage *this, GfxCmdBufContext *gfxContext, PageViewConfig::eCOLUMN column, TimerTree *pDrawTree, const vec2_t *pos, float width, vec2_t *outPos, int *rOutIdx)
{
  int v9; 
  int v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  PageViewConfig *m_pCfg; 
  GpuTimerView *m_pView; 
  GpuTimerView::DisplayType m_displayType; 
  GfxCmdBufContext v20; 
  vec2_t v21; 
  vec2_t v22; 

  v9 = 0;
  v13 = -1;
  v14 = pos->v[0];
  v15 = pos->v[1];
  v22.v[0] = v14;
  v22.v[1] = v15;
  v21.v[0] = v14;
  v21.v[1] = v15;
  if ( this->m_numCfg > 0 )
  {
    v16 = 0i64;
    do
    {
      m_pCfg = this->m_pCfg;
      if ( this->m_pCfg[v16].m_column == column )
      {
        m_pView = m_pCfg[v16].m_pView;
        m_displayType = m_pCfg[v16].m_displayType;
        v20 = *gfxContext;
        m_pView->m_dispType = m_displayType;
        GpuTimerView::Draw(this->m_pCfg[v16].m_pView, &v20, pDrawTree, this->m_pCfg[v16].m_childDepth, this->m_pCfg[v16].m_showInActive, this->m_pCfg[v16].m_exclusiveTimes, &v22, width, &v21);
        v13 = v9;
        v22 = v21;
      }
      ++v9;
      ++v16;
    }
    while ( v9 < this->m_numCfg );
    v15 = v21.v[1];
    v14 = v21.v[0];
  }
  outPos->v[0] = v14;
  outPos->v[1] = v15;
  *rOutIdx = v13;
}

/*
==============
DrawFrame
==============
*/
void DrawFrame(GfxCmdBufContext *gfxContext, float anchor_x, float anchor_y, float width, float height, float header_x, float header_y, GfxFont *font, GfxColor frameColor, GfxColor txtColor, bool avgTimesOnly)
{
  GfxCmdBufContext v12; 
  char *v13; 
  _QWORD v14[3]; 
  GfxPointVertex v15; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  float v28; 
  float v29; 
  float v30; 
  int v31; 
  float v32; 
  float v33; 
  float v34; 
  int v35; 
  float v36; 
  float v37; 
  float v38; 
  int v39; 
  float v40; 
  float v41; 
  float v42; 
  int v43; 
  char dest[256]; 

  v15.xyz.v[0] = anchor_x;
  v15.xyz.v[1] = anchor_y;
  v25 = anchor_y + height;
  v29 = anchor_y + height;
  v33 = anchor_y + height;
  v37 = anchor_y + height;
  v12 = *gfxContext;
  *(_DWORD *)v15.color = frameColor.array[0] | ((frameColor.array[1] | ((frameColor.array[2] | (HIBYTE(frameColor.packed) << 8)) << 8)) << 8);
  v19 = *(_DWORD *)v15.color;
  v23 = *(_DWORD *)v15.color;
  v27 = *(_DWORD *)v15.color;
  v31 = *(_DWORD *)v15.color;
  v35 = *(_DWORD *)v15.color;
  v39 = *(_DWORD *)v15.color;
  v43 = *(_DWORD *)v15.color;
  v15.xyz.v[2] = 0.0;
  v16 = anchor_x + width;
  v17 = anchor_y;
  v18 = 0.0;
  v20 = anchor_x + width;
  v21 = anchor_y;
  v22 = 0.0;
  v24 = anchor_x + width;
  v26 = 0.0;
  v28 = anchor_x + width;
  v30 = 0.0;
  v32 = anchor_x;
  v34 = 0.0;
  v36 = anchor_x;
  v38 = 0.0;
  v40 = anchor_x;
  v41 = anchor_y;
  v42 = 0.0;
  *(GfxCmdBufContext *)&v14[1] = v12;
  RB_DrawLines2D((GfxCmdBufContext *)&v14[1], 4, 1, &v15);
  memset_0(dest, 0, sizeof(dest));
  if ( avgTimesOnly )
    Com_sprintf(dest, 0x100ui64, "%5s ^0%5s", "avg", "bdgt");
  else
    Com_sprintf(dest, 0x100ui64, "%5s %5s %5s %5s ^0%5s", "total", "avg", "max", "min", "bdgt");
  v13 = strstr_0(dest, "^0");
  *(GfxCmdBufContext *)&v14[1] = *gfxContext;
  RB_DrawText((GfxCmdBufContext *)&v14[1], dest, font, header_x + 1.0, header_y + 1.0, (const GfxColor)((txtColor.array[0] >> 2) | (((txtColor.array[1] >> 2) | (((HIBYTE(txtColor.packed) << 8) | (txtColor.array[2] >> 2)) << 8)) << 8)));
  if ( v13 )
    *(_WORD *)v13 = *(_WORD *)"^5";
  *(GfxCmdBufContext *)&v14[1] = *gfxContext;
  RB_DrawText((GfxCmdBufContext *)&v14[1], dest, font, header_x, header_y, txtColor);
}

/*
==============
GpuTimerView::DrawGrouped
==============
*/
void GpuTimerView::DrawGrouped(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  GfxCmdBufContext v3; 
  GfxCmdBufContext v4; 
  GfxCmdBufContext v5; 
  GpuTimerView *v6; 
  TimerTree *v8; 
  __int64 v9; 
  int v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  float v14; 
  unsigned int v15; 
  GPUTimeStampNode *m_pRoot; 
  unsigned int totalTime; 
  __int64 v18; 
  float v19; 
  float v20; 
  float v21; 
  const GfxColor *Color; 
  GfxCmdBufContext v23; 
  unsigned int v24; 
  __int128 currentY_low; 
  unsigned int v26; 
  __int128 v27; 
  __int128 currentX_low; 
  GPUTimerId v29; 
  unsigned int *v30; 
  __int64 v31; 
  float v32; 
  float v33; 
  const GfxColor *v34; 
  GfxCmdBufContext v35; 
  unsigned int v36; 
  __int128 v37; 
  GfxColor m_txtColor; 
  float v39; 
  __int64 currentId; 
  float v41; 
  __int64 m_timerBudgetTotalUS; 
  float v43; 
  float currentY; 
  float anchorX; 
  GfxCmdBufContext v46; 
  unsigned int v47; 
  unsigned int v48; 
  GfxCmdBufContext v49[7]; 
  GpuTimerView *v50; 
  unsigned int v51; 
  TimerTree *v52; 
  unsigned int packed; 

  v52 = pTree;
  v50 = this;
  v6 = this;
  v8 = pTree;
  v9 = 0i64;
  v10 = 0;
  v49[3] = v4;
  v51 = 0;
  if ( this->m_numId )
  {
    v49[4] = v3;
    v49[1] = v5;
    do
    {
      v11 = (unsigned int)v9;
      if ( (unsigned int)v9 >= v6->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v9 >= v6->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v12 = (unsigned int)v6->m_timerId.m_data.m_buffer[v9];
      GpuTimerView::ms_drawData.currentId = v12;
      v13 = (unsigned int)v12;
      GpuTimerView::ms_drawData.idFound = 0;
      GpuTimerView::ms_drawData.totalTime = 0;
      if ( v12 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v14 = v6->m_RollingAvgUs.m_data[v13];
      v15 = 0;
      GpuTimerView::ms_drawData.avgTime = v14;
      if ( GpuTimerView::ms_drawData.desiredDepth )
      {
        do
          memset_0(GpuTimerView::ms_drawData.childTime[v15++], 0, sizeof(GpuTimerView::ms_drawData.childTime[v15++]));
        while ( v15 < GpuTimerView::ms_drawData.desiredDepth );
        LODWORD(v9) = v51;
      }
      m_pRoot = v8->m_pRoot;
      v49[0] = 0ui64;
      TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, v49, m_pRoot, v6, 0);
      if ( GpuTimerView::ms_drawData.idFound )
        ++v10;
      totalTime = GpuTimerView::ms_drawData.totalTime;
      if ( GpuTimerView::ms_drawData.totalTime || GpuTimerView::ms_drawData.avgTime > 0.0 || GpuTimerView::ms_drawData.showInActive != LOBYTE(GpuTimerView::ms_drawData.totalTime) )
      {
        v18 = 2 * (v6->m_historyIdx + 6i64);
        if ( v11 >= v6->m_history[v6->m_historyIdx].m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v11 >= *(_QWORD *)&v6->m_txtInactive.array[8 * v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        *(_DWORD *)(*(_QWORD *)&v6->m_barBackColor.array[8 * v18] + 4 * v11) = totalTime;
        v19 = (float)GpuTimerView::ms_drawData.totalTime;
        v21 = v19 * GpuTimerView::ms_drawData.pixelsPerUS;
        v20 = v21;
        if ( v11 >= v6->m_timerId.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v11 >= v6->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        Color = R_GPU_TimerGetColor(v6->m_timerId.m_data.m_buffer[v11]);
        v23 = *gfxContext;
        packed = Color->packed;
        v24 = 3 * GpuTimerView::ms_opacity;
        v49[0] = v23;
        if ( v24 > 0xFF )
          LOBYTE(v24) = -1;
        HIBYTE(packed) = v24;
        RB_DrawStretchPic(v49, rgp.whiteMaterial, GpuTimerView::ms_drawData.currentX, GpuTimerView::ms_drawData.barOffsetY + GpuTimerView::ms_drawData.currentY, v21, GpuTimerView::ms_drawData.barHeight, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
        currentY_low = LODWORD(GpuTimerView::ms_drawData.currentY);
        v26 = 0;
        if ( GpuTimerView::ms_drawData.desiredDepth )
        {
          do
          {
            v27 = currentY_low;
            *(float *)&v27 = *(float *)&currentY_low + GpuTimerView::ms_drawData.rowHeight;
            currentY_low = v27;
            v47 = v6->m_barBackColor.packed;
            v49[0] = *gfxContext;
            RB_DrawStretchPic(v49, rgp.whiteMaterial, GpuTimerView::ms_drawData.anchorX, *(float *)&v27 + GpuTimerView::ms_drawData.backBarGap, GpuTimerView::ms_drawData.width, GpuTimerView::ms_drawData.backBarHeight, 0.0, 0.0, 1.0, 1.0, v47, GFX_PRIM_STATS_DEBUG);
            currentX_low = LODWORD(GpuTimerView::ms_drawData.currentX);
            v29 = GPU_TIMER_FRAME;
            v30 = GpuTimerView::ms_drawData.childTime[v26];
            do
            {
              v31 = *v30;
              if ( (_DWORD)v31 )
              {
                v32 = (float)v31;
                v33 = v32 * GpuTimerView::ms_drawData.pixelsPerUS;
                v34 = R_GPU_TimerGetColor(v29);
                v35 = *gfxContext;
                packed = v34->packed;
                v49[0] = v35;
                v36 = 3 * GpuTimerView::ms_opacity;
                if ( v36 > 0xFF )
                  LOBYTE(v36) = -1;
                HIBYTE(packed) = v36;
                RB_DrawStretchPic(v49, rgp.whiteMaterial, *(float *)&currentX_low, *(float *)&currentY_low + GpuTimerView::ms_drawData.barOffsetY, v33, GpuTimerView::ms_drawData.barHeight, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
                v37 = currentX_low;
                *(float *)&v37 = *(float *)&currentX_low + v33;
                currentX_low = v37;
              }
              ++v29;
              ++v30;
            }
            while ( (unsigned int)v29 < GPU_TIMER_COUNT );
            v6 = v50;
            ++v26;
          }
          while ( v26 < GpuTimerView::ms_drawData.desiredDepth );
          LODWORD(v9) = v51;
        }
        GpuTimerView::ms_drawData.currentX = v20 + GpuTimerView::ms_drawData.currentX;
      }
      v8 = v52;
      v9 = (unsigned int)(v9 + 1);
      v51 = v9;
    }
    while ( (unsigned int)v9 < v6->m_numId );
  }
  v48 = v6->m_barBackColor.packed;
  v49[0] = *gfxContext;
  RB_DrawStretchPic(v49, rgp.whiteMaterial, GpuTimerView::ms_drawData.anchorX, GpuTimerView::ms_drawData.backBarGap + GpuTimerView::ms_drawData.currentY, GpuTimerView::ms_drawData.width, GpuTimerView::ms_drawData.backBarHeight, 0.0, 0.0, 1.0, 1.0, v48, GFX_PRIM_STATS_DEBUG);
  v49[0] = *gfxContext;
  GpuTimerView::DrawTimingData(v6, v49, -1, &v51, (float *)&v50);
  m_txtColor = v6->m_txtColor;
  if ( v10 || !GpuTimerView::ms_drawData.showInActive )
  {
    v39 = *(float *)&v50;
    currentId = (unsigned int)GpuTimerView::ms_drawData.currentId;
    v41 = (float)(*(float *)&v50 + GpuTimerView::ms_drawData.avgTime) * 0.5;
    if ( (unsigned int)GpuTimerView::ms_drawData.currentId >= GPU_TIMER_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v6->m_RollingAvgUs.m_data[currentId] = v41;
    m_timerBudgetTotalUS = v6->m_timerBudgetTotalUS;
    if ( (_DWORD)m_timerBudgetTotalUS )
    {
      v43 = (float)m_timerBudgetTotalUS;
      if ( v39 > v43 )
        m_txtColor = v6->m_txtOverBdgtColor;
    }
  }
  else
  {
    m_txtColor = v6->m_txtInactive;
  }
  currentY = GpuTimerView::ms_drawData.currentY;
  anchorX = GpuTimerView::ms_drawData.anchorX;
  v46 = *gfxContext;
  GpuTimerView::ms_drawData.timerLabelDrawn = 1;
  v49[0] = v46;
  RB_DrawText(v49, v6->m_viewName, GpuTimerView::ms_drawData.font, GpuTimerView::ms_drawData.anchorX + 1.0, (float)(GpuTimerView::ms_drawData.currentY + GpuTimerView::ms_drawData.textOffsetY) + 1.0, (const GfxColor)((m_txtColor.array[0] >> 2) | (((m_txtColor.array[1] >> 2) | (((HIBYTE(m_txtColor.packed) << 8) | (m_txtColor.array[2] >> 2)) << 8)) << 8)));
  v49[0] = *gfxContext;
  RB_DrawText(v49, v6->m_viewName, GpuTimerView::ms_drawData.font, anchorX, currentY + GpuTimerView::ms_drawData.textOffsetY, m_txtColor);
  GpuTimerView::ms_drawData.currentY = GpuTimerView::ms_drawData.currentY + GpuTimerView::ms_drawData.rowHeight;
}

/*
==============
GpuTimerView::DrawInPlace
==============
*/
void GpuTimerView::DrawInPlace(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  float currentY; 
  __int64 v7; 
  __int128 i; 
  unsigned __int64 v9; 
  __int64 v10; 
  float v11; 
  unsigned int v12; 
  GPUTimeStampNode *m_pRoot; 
  unsigned int totalTime; 
  __int64 v15; 
  float v16; 
  __int64 currentId; 
  float v18; 
  GfxColor m_txtColor; 
  float v20; 
  float v21; 
  const char *Name; 
  float v23; 
  const char *v24; 
  float v25; 
  __int128 v26; 
  GfxColor m_txtInactive; 
  float v28; 
  const char *v29; 
  float v30; 
  const char *v31; 
  __int64 m_timerBudgetTotalUS; 
  GfxColor m_txtOverBdgtColor; 
  float v34; 
  float anchorX; 
  unsigned int packed; 
  GfxCmdBufContext v37; 
  float v38; 
  unsigned int v39; 

  currentY = GpuTimerView::ms_drawData.currentY;
  v7 = 0i64;
  GpuTimerView::ms_drawData.currentY = GpuTimerView::ms_drawData.currentY + GpuTimerView::ms_drawData.rowHeight;
  for ( i = 0i64; (unsigned int)v7 < this->m_numId; v7 = (unsigned int)(v7 + 1) )
  {
    if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v9 = (unsigned int)this->m_timerId.m_data.m_buffer[v7];
    GpuTimerView::ms_drawData.currentId = v9;
    v10 = (unsigned int)v9;
    GpuTimerView::ms_drawData.idFound = 0;
    GpuTimerView::ms_drawData.totalTime = 0;
    if ( v9 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v11 = this->m_RollingAvgUs.m_data[v10];
    v12 = 0;
    for ( GpuTimerView::ms_drawData.avgTime = v11; v12 < GpuTimerView::ms_drawData.desiredDepth; ++v12 )
      memset_0(GpuTimerView::ms_drawData.childTime[v12], 0, sizeof(GpuTimerView::ms_drawData.childTime[v12]));
    m_pRoot = pTree->m_pRoot;
    v37 = *gfxContext;
    TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdDrawTime, &v37, m_pRoot, this, 0);
    totalTime = GpuTimerView::ms_drawData.totalTime;
    v15 = 2 * (this->m_historyIdx + 6i64);
    if ( (unsigned int)v7 >= this->m_history[this->m_historyIdx].m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( (unsigned __int64)(unsigned int)v7 >= *(_QWORD *)&this->m_txtInactive.array[8 * v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v15] + 4 * v7) = totalTime;
    if ( GpuTimerView::ms_drawData.timerLabelDrawn )
    {
      v37 = *gfxContext;
      GpuTimerView::DrawTimingData(this, &v37, v7, &v39, &v38);
      v16 = v38;
      currentId = (unsigned int)GpuTimerView::ms_drawData.currentId;
      v18 = (float)(v38 + GpuTimerView::ms_drawData.avgTime) * 0.5;
      if ( (unsigned int)GpuTimerView::ms_drawData.currentId >= GPU_TIMER_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      this->m_RollingAvgUs.m_data[currentId] = v18;
      m_txtColor = this->m_txtColor;
      if ( (unsigned int)v7 >= this->m_timerBudget.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v7 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      if ( this->m_timerBudget.m_data.m_buffer[v7] )
      {
        if ( (unsigned int)v7 >= this->m_timerBudget.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( (unsigned int)v7 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v20 = (float)this->m_timerBudget.m_data.m_buffer[v7];
        if ( v16 > v20 )
          m_txtColor = this->m_txtOverBdgtColor;
      }
      v21 = GpuTimerView::ms_drawData.currentY;
      Name = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
      v23 = GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX;
      v24 = Name;
      v37 = *gfxContext;
      RB_DrawText(&v37, Name, GpuTimerView::ms_drawData.font, (float)(GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX) + 1.0, (float)(v21 + GpuTimerView::ms_drawData.textOffsetY) + 1.0, (const GfxColor)((m_txtColor.array[0] >> 2) | (((m_txtColor.array[1] >> 2) | (((HIBYTE(m_txtColor.packed) << 8) | (m_txtColor.array[2] >> 2)) << 8)) << 8)));
      v37 = *gfxContext;
      RB_DrawText(&v37, v24, GpuTimerView::ms_drawData.font, v23, v21 + GpuTimerView::ms_drawData.textOffsetY, m_txtColor);
      GpuTimerView::ms_drawData.timerLabelDrawn = 0;
      v25 = (float)(GpuTimerView::ms_drawData.desiredDepth + 1);
      GpuTimerView::ms_drawData.currentY = (float)(v25 * GpuTimerView::ms_drawData.rowHeight) + GpuTimerView::ms_drawData.currentY;
      v26 = i;
      *(float *)&v26 = *(float *)&i + v16;
      i = v26;
    }
    else if ( !GpuTimerView::ms_drawData.idFound && GpuTimerView::ms_drawData.showInActive )
    {
      packed = this->m_barBackColor.packed;
      v37 = *gfxContext;
      RB_DrawStretchPic(&v37, rgp.whiteMaterial, GpuTimerView::ms_drawData.anchorX, GpuTimerView::ms_drawData.backBarGap + GpuTimerView::ms_drawData.currentY, GpuTimerView::ms_drawData.width, GpuTimerView::ms_drawData.backBarHeight, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
      m_txtInactive = this->m_txtInactive;
      v28 = GpuTimerView::ms_drawData.currentY;
      v29 = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
      v30 = GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX;
      v31 = v29;
      v37 = *gfxContext;
      RB_DrawText(&v37, v29, GpuTimerView::ms_drawData.font, (float)(GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX) + 1.0, (float)(v28 + GpuTimerView::ms_drawData.textOffsetY) + 1.0, (const GfxColor)((m_txtInactive.array[0] >> 2) | (((m_txtInactive.array[1] >> 2) | (((HIBYTE(m_txtInactive.packed) << 8) | (m_txtInactive.array[2] >> 2)) << 8)) << 8)));
      v37 = *gfxContext;
      RB_DrawText(&v37, v31, GpuTimerView::ms_drawData.font, v30, v28 + GpuTimerView::ms_drawData.textOffsetY, m_txtInactive);
      GpuTimerView::ms_drawData.currentY = GpuTimerView::ms_drawData.currentY + GpuTimerView::ms_drawData.rowHeight;
    }
  }
  m_timerBudgetTotalUS = this->m_timerBudgetTotalUS;
  m_txtOverBdgtColor = this->m_txtColor;
  if ( (_DWORD)m_timerBudgetTotalUS )
  {
    v34 = (float)m_timerBudgetTotalUS;
    if ( *(float *)&i > v34 )
      m_txtOverBdgtColor = this->m_txtOverBdgtColor;
  }
  anchorX = GpuTimerView::ms_drawData.anchorX;
  v37 = *gfxContext;
  RB_DrawText(&v37, this->m_viewName, GpuTimerView::ms_drawData.font, GpuTimerView::ms_drawData.anchorX + 1.0, (float)(currentY + GpuTimerView::ms_drawData.textOffsetY) + 1.0, (const GfxColor)((m_txtOverBdgtColor.array[0] >> 2) | (((m_txtOverBdgtColor.array[1] >> 2) | (((HIBYTE(m_txtOverBdgtColor.packed) << 8) | (m_txtOverBdgtColor.array[2] >> 2)) << 8)) << 8)));
  v37 = *gfxContext;
  RB_DrawText(&v37, this->m_viewName, GpuTimerView::ms_drawData.font, anchorX, currentY + GpuTimerView::ms_drawData.textOffsetY, m_txtOverBdgtColor);
}

/*
==============
GpuTimerView::DrawJustified
==============
*/
void GpuTimerView::DrawJustified(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  TimerTree *v3; 
  float currentY; 
  __int64 v7; 
  __int128 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  float v12; 
  unsigned int v13; 
  GPUTimeStampNode *m_pRoot; 
  GfxColor m_txtInactive; 
  float v16; 
  const char *v17; 
  float v18; 
  const char *v19; 
  float v20; 
  unsigned int totalTime; 
  __int64 v22; 
  float v23; 
  float v24; 
  unsigned int v25; 
  __int128 currentY_low; 
  unsigned int v27; 
  __int128 v28; 
  __int128 currentX_low; 
  GPUTimerId v30; 
  unsigned int *v31; 
  __int64 v32; 
  float v33; 
  float v34; 
  unsigned int v35; 
  __int128 v36; 
  float v37; 
  __int64 currentId; 
  float v39; 
  GfxColor m_txtColor; 
  float v41; 
  float v42; 
  const char *Name; 
  float v44; 
  const char *v45; 
  __int128 v46; 
  __int64 m_timerBudgetTotalUS; 
  GfxColor m_txtOverBdgtColor; 
  float v49; 
  float anchorX; 
  unsigned int packed; 
  unsigned int v52; 
  unsigned int v53; 
  __int128 v54; 
  __int64 v55; 
  GfxCmdBufContext v56[3]; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int i; 
  float v61; 

  v3 = pTree;
  currentY = GpuTimerView::ms_drawData.currentY;
  v7 = 0i64;
  GpuTimerView::ms_drawData.currentY = GpuTimerView::ms_drawData.currentY + GpuTimerView::ms_drawData.rowHeight;
  v8 = 0i64;
  for ( i = 0; (unsigned int)v7 < this->m_numId; i = v7 )
  {
    v9 = (unsigned int)v7;
    if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v10 = (unsigned int)this->m_timerId.m_data.m_buffer[v7];
    GpuTimerView::ms_drawData.currentId = v10;
    v11 = (unsigned int)v10;
    GpuTimerView::ms_drawData.idFound = 0;
    GpuTimerView::ms_drawData.totalTime = 0;
    if ( v10 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v12 = this->m_RollingAvgUs.m_data[v11];
    v13 = 0;
    for ( GpuTimerView::ms_drawData.avgTime = v12; v13 < GpuTimerView::ms_drawData.desiredDepth; ++v13 )
      memset_0(GpuTimerView::ms_drawData.childTime[v13], 0, sizeof(GpuTimerView::ms_drawData.childTime[v13]));
    m_pRoot = v3->m_pRoot;
    *((_QWORD *)&v54 + 1) = 0i64;
    v55 = 0i64;
    v56[0] = 0u;
    TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, v56, m_pRoot, this, 0);
    if ( GpuTimerView::ms_drawData.totalTime || GpuTimerView::ms_drawData.avgTime > 0.0 || GpuTimerView::ms_drawData.showInActive )
    {
      packed = this->m_barBackColor.packed;
      v56[0] = *gfxContext;
      RB_DrawStretchPic(v56, rgp.whiteMaterial, GpuTimerView::ms_drawData.anchorX, GpuTimerView::ms_drawData.backBarGap + GpuTimerView::ms_drawData.currentY, GpuTimerView::ms_drawData.width, GpuTimerView::ms_drawData.backBarHeight, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
      if ( GpuTimerView::ms_drawData.idFound )
      {
        totalTime = GpuTimerView::ms_drawData.totalTime;
        v22 = 2 * (this->m_historyIdx + 6i64);
        if ( (unsigned int)v7 >= this->m_history[this->m_historyIdx].m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( (unsigned __int64)(unsigned int)v7 >= *(_QWORD *)&this->m_txtInactive.array[8 * v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v22] + 4 * v7) = totalTime;
        v23 = (float)GpuTimerView::ms_drawData.totalTime;
        v24 = v23 * GpuTimerView::ms_drawData.pixelsPerUS;
        if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v57 = R_GPU_TimerGetColor(this->m_timerId.m_data.m_buffer[v7])->packed;
        v25 = 3 * GpuTimerView::ms_opacity;
        v56[0] = *gfxContext;
        if ( v25 > 0xFF )
          LOBYTE(v25) = -1;
        HIBYTE(v57) = v25;
        RB_DrawStretchPic(v56, rgp.whiteMaterial, GpuTimerView::ms_drawData.currentX, GpuTimerView::ms_drawData.barOffsetY + GpuTimerView::ms_drawData.currentY, v24, GpuTimerView::ms_drawData.barHeight, 0.0, 0.0, 1.0, 1.0, v57, GFX_PRIM_STATS_DEBUG);
        currentY_low = LODWORD(GpuTimerView::ms_drawData.currentY);
        v27 = 0;
        if ( GpuTimerView::ms_drawData.desiredDepth )
        {
          do
          {
            v28 = currentY_low;
            *(float *)&v28 = *(float *)&currentY_low + GpuTimerView::ms_drawData.rowHeight;
            currentY_low = v28;
            v52 = this->m_barBackColor.packed;
            v56[0] = *gfxContext;
            RB_DrawStretchPic(v56, rgp.whiteMaterial, GpuTimerView::ms_drawData.anchorX, *(float *)&v28 + GpuTimerView::ms_drawData.backBarGap, GpuTimerView::ms_drawData.width, GpuTimerView::ms_drawData.backBarHeight, 0.0, 0.0, 1.0, 1.0, v52, GFX_PRIM_STATS_DEBUG);
            currentX_low = LODWORD(GpuTimerView::ms_drawData.currentX);
            v30 = GPU_TIMER_FRAME;
            v31 = GpuTimerView::ms_drawData.childTime[v27];
            do
            {
              v32 = *v31;
              if ( (_DWORD)v32 )
              {
                v33 = (float)v32;
                v34 = v33 * GpuTimerView::ms_drawData.pixelsPerUS;
                v58 = R_GPU_TimerGetColor(v30)->packed;
                v56[0] = *gfxContext;
                v35 = 3 * GpuTimerView::ms_opacity;
                if ( v35 > 0xFF )
                  LOBYTE(v35) = -1;
                HIBYTE(v58) = v35;
                RB_DrawStretchPic(v56, rgp.whiteMaterial, *(float *)&currentX_low, *(float *)&currentY_low + GpuTimerView::ms_drawData.barOffsetY, v34, GpuTimerView::ms_drawData.barHeight, 0.0, 0.0, 1.0, 1.0, v58, GFX_PRIM_STATS_DEBUG);
                v36 = currentX_low;
                *(float *)&v36 = *(float *)&currentX_low + v34;
                currentX_low = v36;
              }
              ++v30;
              ++v31;
            }
            while ( (unsigned int)v30 < GPU_TIMER_COUNT );
            ++v27;
          }
          while ( v27 < GpuTimerView::ms_drawData.desiredDepth );
          LODWORD(v7) = i;
          v9 = i;
        }
        v56[0] = *gfxContext;
        GpuTimerView::DrawTimingData(this, v56, v7, &v53, &v61);
        v37 = v61;
        currentId = (unsigned int)GpuTimerView::ms_drawData.currentId;
        v39 = (float)(v61 + GpuTimerView::ms_drawData.avgTime) * 0.5;
        if ( (unsigned int)GpuTimerView::ms_drawData.currentId >= GPU_TIMER_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        this->m_RollingAvgUs.m_data[currentId] = v39;
        m_txtColor = this->m_txtColor;
        if ( v9 >= this->m_timerBudget.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v9 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        if ( this->m_timerBudget.m_data.m_buffer[v9] )
        {
          if ( v9 >= this->m_timerBudget.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v9 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          v41 = (float)this->m_timerBudget.m_data.m_buffer[v9];
          if ( v37 > v41 )
            m_txtColor = this->m_txtOverBdgtColor;
        }
        v42 = GpuTimerView::ms_drawData.currentY;
        Name = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
        v44 = GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX;
        v45 = Name;
        v56[0] = *gfxContext;
        RB_DrawText(v56, Name, GpuTimerView::ms_drawData.font, (float)(GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX) + 1.0, (float)(v42 + GpuTimerView::ms_drawData.textOffsetY) + 1.0, (const GfxColor)((m_txtColor.array[0] >> 2) | (((m_txtColor.array[1] >> 2) | (((HIBYTE(m_txtColor.packed) << 8) | (m_txtColor.array[2] >> 2)) << 8)) << 8)));
        v56[0] = *gfxContext;
        RB_DrawText(v56, v45, GpuTimerView::ms_drawData.font, v44, v42 + GpuTimerView::ms_drawData.textOffsetY, m_txtColor);
        v20 = *(float *)&currentY_low + GpuTimerView::ms_drawData.rowHeight;
        v46 = v8;
        *(float *)&v46 = *(float *)&v8 + v37;
        v8 = v46;
      }
      else
      {
        m_txtInactive = this->m_txtInactive;
        v16 = GpuTimerView::ms_drawData.currentY;
        v17 = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
        v18 = GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX;
        v19 = v17;
        v56[0] = *gfxContext;
        RB_DrawText(v56, v17, GpuTimerView::ms_drawData.font, (float)(GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX) + 1.0, (float)(v16 + GpuTimerView::ms_drawData.textOffsetY) + 1.0, (const GfxColor)((m_txtInactive.array[0] >> 2) | (((m_txtInactive.array[1] >> 2) | (((HIBYTE(m_txtInactive.packed) << 8) | (m_txtInactive.array[2] >> 2)) << 8)) << 8)));
        v56[0] = *gfxContext;
        RB_DrawText(v56, v19, GpuTimerView::ms_drawData.font, v18, v16 + GpuTimerView::ms_drawData.textOffsetY, m_txtInactive);
        v20 = GpuTimerView::ms_drawData.currentY + GpuTimerView::ms_drawData.rowHeight;
      }
      v3 = pTree;
      GpuTimerView::ms_drawData.currentY = v20;
    }
    v7 = (unsigned int)(v7 + 1);
  }
  m_timerBudgetTotalUS = this->m_timerBudgetTotalUS;
  m_txtOverBdgtColor = this->m_txtColor;
  if ( (_DWORD)m_timerBudgetTotalUS )
  {
    v49 = (float)m_timerBudgetTotalUS;
    if ( *(float *)&v8 > v49 )
      m_txtOverBdgtColor = this->m_txtOverBdgtColor;
  }
  anchorX = GpuTimerView::ms_drawData.anchorX;
  v56[0] = *gfxContext;
  RB_DrawText(v56, this->m_viewName, GpuTimerView::ms_drawData.font, GpuTimerView::ms_drawData.anchorX + 1.0, (float)(currentY + GpuTimerView::ms_drawData.textOffsetY) + 1.0, (const GfxColor)((m_txtOverBdgtColor.array[0] >> 2) | (((m_txtOverBdgtColor.array[1] >> 2) | (((HIBYTE(m_txtOverBdgtColor.packed) << 8) | (m_txtOverBdgtColor.array[2] >> 2)) << 8)) << 8)));
  v56[0] = *gfxContext;
  RB_DrawText(v56, this->m_viewName, GpuTimerView::ms_drawData.font, anchorX, currentY + GpuTimerView::ms_drawData.textOffsetY, m_txtOverBdgtColor);
}

/*
==============
GpuTimerView::DrawLabel
==============
*/
void GpuTimerView::DrawLabel(GpuTimerView *this, GfxCmdBufContext *gfxContext, const char *pName, float y, GfxColor txtColor, bool indentText)
{
  float anchorX; 
  GfxCmdBufContext v9; 

  if ( indentText )
    anchorX = GpuTimerView::ms_drawData.idNameIndent + GpuTimerView::ms_drawData.anchorX;
  else
    anchorX = GpuTimerView::ms_drawData.anchorX;
  v9 = *gfxContext;
  RB_DrawText(&v9, pName, GpuTimerView::ms_drawData.font, anchorX + 1.0, (float)(y + GpuTimerView::ms_drawData.textOffsetY) + 1.0, (const GfxColor)((txtColor.array[0] >> 2) | (((txtColor.array[1] >> 2) | (((HIBYTE(txtColor.packed) << 8) | (txtColor.array[2] >> 2)) << 8)) << 8)));
  v9 = *gfxContext;
  RB_DrawText(&v9, pName, GpuTimerView::ms_drawData.font, anchorX, y + GpuTimerView::ms_drawData.textOffsetY, txtColor);
}

/*
==============
GpuTimerView::DrawTimerBar
==============
*/
void GpuTimerView::DrawTimerBar(GpuTimerView *this, GfxCmdBufContext *gfxContext, float x, float y, float width, GfxColor barColor)
{
  GfxCmdBufContext v6; 

  v6 = *gfxContext;
  RB_DrawStretchPic(&v6, rgp.whiteMaterial, x, y + GpuTimerView::ms_drawData.barOffsetY, width, GpuTimerView::ms_drawData.barHeight, 0.0, 0.0, 1.0, 1.0, barColor.packed, GFX_PRIM_STATS_DEBUG);
}

/*
==============
GpuTimerView::DrawTimingData
==============
*/
void GpuTimerView::DrawTimingData(GpuTimerView *this, GfxCmdBufContext *gfxContext, int currentIdIndex, unsigned int *pOptOutTotalUs, float *pOptOutAvgUs)
{
  int v5; 
  char v7; 
  float v10; 
  float barStartX; 
  float v12; 
  __int64 m_timerBudgetTotalUS; 
  float v14; 
  unsigned int v15; 
  float v16; 
  char *v17; 
  float v18; 
  float v19; 
  double v20; 
  double v21; 
  float v22; 
  double v23; 
  unsigned int pOutAvgUs; 
  GfxColor pOutAvgUsa; 
  float v26; 
  unsigned int pOutMinUs; 
  unsigned int pOutMaxUs; 
  unsigned int pOutMaxUs_4; 
  GfxCmdBufContext pOutMaxUs_8; 
  char dest[256]; 

  v5 = -1;
  if ( this->m_dispType != GROUPED )
    v5 = currentIdIndex;
  v7 = 0;
  v10 = GpuTimerView::ms_drawData.textOffsetY + GpuTimerView::ms_drawData.currentY;
  barStartX = GpuTimerView::ms_drawData.barStartX;
  v12 = 0.0;
  if ( v5 == -1 )
  {
    m_timerBudgetTotalUS = this->m_timerBudgetTotalUS;
    if ( !(_DWORD)m_timerBudgetTotalUS )
      goto LABEL_21;
    v14 = (float)m_timerBudgetTotalUS;
    v7 = 1;
    goto LABEL_20;
  }
  if ( v5 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  if ( v5 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
    __debugbreak();
  if ( this->m_timerBudget.m_data.m_buffer[v5] )
  {
    v7 = 1;
    if ( v5 >= this->m_timerBudget.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v5 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v14 = (float)this->m_timerBudget.m_data.m_buffer[v5];
LABEL_20:
    v12 = v14 * 0.001;
  }
LABEL_21:
  GpuTimerView::CalculateViewHistoryMinMaxAvg(this, v5, &pOutMaxUs_4, &pOutMinUs, &pOutMaxUs, &v26);
  memset_0(dest, 0, sizeof(dest));
  v15 = pOutMaxUs_4;
  v16 = v26;
  v17 = NULL;
  if ( !GpuTimerView::ms_avgTimesOnly )
  {
    v18 = (float)pOutMinUs;
    v19 = (float)pOutMaxUs;
    v20 = (float)(v18 * 0.001);
    v21 = (float)(v19 * 0.001);
    v22 = (float)pOutMaxUs_4;
    v23 = (float)(v26 * 0.001);
    if ( !v7 )
    {
      Com_sprintf(dest, 0x100ui64, "%5.2f %5.2f %5.2f %5.2f %5s", (float)(v22 * 0.001), v23, v21, v20, " ");
      goto LABEL_29;
    }
    Com_sprintf(dest, 0x100ui64, "%5.2f %5.2f %5.2f %5.2f ^0%5.2f", (float)(v22 * 0.001), v23, v21, v20, v12);
    goto LABEL_27;
  }
  if ( v7 )
  {
    Com_sprintf(dest, 0x100ui64, "%5.2f ^0%5.2f", (float)(v26 * 0.001), v12);
LABEL_27:
    v17 = strstr_0(dest, "^0");
    goto LABEL_29;
  }
  Com_sprintf(dest, 0x100ui64, "%5.2f %5s", (float)(v26 * 0.001), " ");
LABEL_29:
  pOutAvgUs = ((unsigned __int8)this->m_txtColor.packed >> 2) | ((((unsigned __int8)BYTE1(this->m_txtColor.packed) >> 2) | (((HIBYTE(this->m_txtColor.packed) << 8) | ((unsigned __int8)BYTE2(this->m_txtColor.packed) >> 2)) << 8)) << 8);
  pOutMaxUs_8 = *gfxContext;
  RB_DrawText(&pOutMaxUs_8, dest, GpuTimerView::ms_drawData.font, barStartX + 1.0, v10 + 1.0, (const GfxColor)pOutAvgUs);
  if ( v17 )
    *(_WORD *)v17 = *(_WORD *)"^5";
  pOutAvgUsa = this->m_txtColor;
  pOutMaxUs_8 = *gfxContext;
  RB_DrawText(&pOutMaxUs_8, dest, GpuTimerView::ms_drawData.font, barStartX, v10, pOutAvgUsa);
  if ( pOptOutAvgUs )
    *pOptOutAvgUs = v16;
  if ( pOptOutTotalUs )
    *pOptOutTotalUs = v15;
}

/*
==============
GpuTimerView::GetNodeTime
==============
*/
__int64 GpuTimerView::GetNodeTime(GpuTimerView *this, GPUTimeStampNode *pNode)
{
  if ( GpuTimerView::ms_drawData.exclusiveTimes )
    return pNode->m_exclusiveTimeUs;
  else
    return (unsigned int)(LODWORD(pNode->m_endTimeUs) - LODWORD(pNode->m_beginTimeUs));
}

/*
==============
GpuTimerPage::Init
==============
*/
void GpuTimerPage::Init(GpuTimerPage *this, PageViewConfig *pConfig, int numConfig)
{
  unsigned __int64 v4; 

  this->m_pCfg = pConfig;
  this->m_numCfg = numConfig;
  v4 = GpuTimerPage::ms_pageIdx++;
  if ( v4 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  GpuTimerPage::ms_pages.m_data[v4] = this;
}

/*
==============
GpuTimerView::Init
==============
*/
void GpuTimerView::Init(GpuTimerView *this, const char *pViewName, int numInfo, const TimerBarInfo *pInfo, bool ignoreOverheadIds)
{
  __int64 v6; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  const TimerBarInfo *v14; 
  GPUTimerId id; 
  __int64 v16; 
  const TimerBarInfo *v17; 
  int v18; 
  const TimerBarInfo *v19; 
  __int64 v20; 
  unsigned __int64 m_numId; 
  GPUTimerId v22; 
  unsigned int v23; 
  int v24; 

  v6 = numInfo;
  if ( this->m_timerId.m_data.m_size )
  {
    Com_PrintWarning(8, "Warning: Initializing GpuTimerView without shutting it down first.\n");
    GpuTimerView::Shutdown(this);
  }
  else
  {
    v9 = GpuTimerView::ms_viewIdx;
    if ( GpuTimerView::ms_viewIdx >= 0x11 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_view.cpp", 268, ASSERT_TYPE_ASSERT, "(ms_viewIdx < 17)", "%s\n\tToo many gpu timer views. Increase the max count.\n", "ms_viewIdx < MAX_TIMERVIEWS") )
        __debugbreak();
      v9 = GpuTimerView::ms_viewIdx;
    }
    v10 = v9;
    GpuTimerView::ms_viewIdx = v9 + 1;
    if ( v9 >= 0x11ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    GpuTimerView::ms_views.m_data[v10] = this;
  }
  if ( ignoreOverheadIds && !GPUTimerTree::ms_numSysOverhead )
    Com_PrintWarning(8, "Warning: GPU Timers - ignoring overhead timerid's but none are set. Did you set them before calling Init?\n");
  v11 = 0;
  v12 = v6;
  if ( (int)v6 <= 0 )
    goto LABEL_23;
  v13 = 0i64;
  v14 = pInfo;
  while ( 1 )
  {
    id = v14->id;
    v16 = v13;
    if ( v13 < v6 )
      break;
LABEL_20:
    ++v11;
    ++v13;
    ++v14;
    if ( v11 >= (int)v6 )
      goto LABEL_23;
  }
  v17 = v14;
  while ( v17->id != id )
  {
    ++v16;
    ++v17;
    if ( v16 >= v6 )
      goto LABEL_20;
  }
  if ( id == GPU_TIMER_COUNT )
  {
LABEL_23:
    v24 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_view.cpp", 280, ASSERT_TYPE_ASSERT, "(dupeTid != GPU_TIMER_NONE)", "%s\n\tDuplicate timer id specified: %d\n", "dupeTid != GPU_TIMER_NONE", v24) )
      __debugbreak();
  }
  Core_strcpy(this->m_viewName, 0x20ui64, pViewName);
  v18 = 0;
  if ( ignoreOverheadIds && (int)v6 > 0 )
  {
    v19 = pInfo;
    v20 = v6;
    do
    {
      if ( GPUTimerTree::IsSystemOverheadTimerId(v19->id) )
        ++v18;
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  GpuTimerView::AllocArrays(this, v6 - v18);
  if ( v6 > 0 )
  {
    do
    {
      if ( !ignoreOverheadIds || !GPUTimerTree::IsSystemOverheadTimerId(pInfo->id) )
      {
        m_numId = this->m_numId;
        v22 = pInfo->id;
        if ( m_numId >= this->m_timerId.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( m_numId >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        this->m_timerId.m_data.m_buffer[m_numId] = v22;
        ++this->m_numId;
      }
      ++pInfo;
      --v12;
    }
    while ( v12 );
  }
  this->m_historyIdx = 0;
  GpuTimerView::SetBudgets(this, 0);
  v23 = 3 * GpuTimerView::ms_opacity;
  if ( v23 > 0xFF )
    LOBYTE(v23) = -1;
  this->m_barBackColor.packed = GpuTimerView::ms_opacity << 24;
  this->m_txtColor.packed = ((unsigned __int8)v23 << 24) | 0xFFFFFF;
  this->m_txtInactive.packed = ((unsigned __int8)v23 << 24) | 0x7F7F7F;
  this->m_txtOverBdgtColor.packed = ((unsigned __int8)v23 << 24) | 0xFF;
}

/*
==============
GpuTimerView::Init
==============
*/
void GpuTimerView::Init(GpuTimerView *this, const char *pViewName, int numId, const GPUTimerId *pId)
{
  signed __int64 v5; 
  unsigned int v8; 
  __int64 v9; 
  int v10; 
  signed __int64 v11; 
  GPUTimerId v12; 
  signed __int64 v13; 
  unsigned __int64 i; 
  GPUTimerId v15; 
  unsigned int v16; 
  int v17; 

  v5 = numId;
  if ( this->m_timerId.m_data.m_size )
  {
    Com_Printf(8, "Warning: Initializing GpuTimerView without shutting it down first\n");
    GpuTimerView::Shutdown(this);
  }
  else
  {
    v8 = GpuTimerView::ms_viewIdx;
    if ( GpuTimerView::ms_viewIdx >= 0x11 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_view.cpp", 337, ASSERT_TYPE_ASSERT, "(ms_viewIdx < 17)", "%s\n\tToo many gpu timer views. Increase the max count.\n", "ms_viewIdx < MAX_TIMERVIEWS") )
        __debugbreak();
      v8 = GpuTimerView::ms_viewIdx;
    }
    v9 = v8;
    GpuTimerView::ms_viewIdx = v8 + 1;
    if ( v8 >= 0x11ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    GpuTimerView::ms_views.m_data[v9] = this;
  }
  v10 = 0;
  if ( (int)v5 <= 0 )
    goto LABEL_19;
  v11 = 0i64;
  while ( 1 )
  {
    v12 = pId[v11];
    v13 = v11;
    if ( v11 < v5 )
      break;
LABEL_16:
    ++v10;
    ++v11;
    if ( v10 >= (int)v5 )
      goto LABEL_19;
  }
  while ( pId[v13] != v12 )
  {
    if ( ++v13 >= v5 )
      goto LABEL_16;
  }
  if ( v12 == GPU_TIMER_COUNT )
  {
LABEL_19:
    v17 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_view.cpp", 343, ASSERT_TYPE_ASSERT, "(dupeTid != GPU_TIMER_NONE)", "%s\n\tDuplicate timer id specified: %d\n", "dupeTid != GPU_TIMER_NONE", v17) )
      __debugbreak();
  }
  Core_strcpy(this->m_viewName, 0x20ui64, pViewName);
  GpuTimerView::AllocArrays(this, v5);
  if ( (int)v5 > 0 )
  {
    for ( i = 0i64; (__int64)i < v5; ++i )
    {
      v15 = pId[i];
      if ( i >= this->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( i >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      this->m_timerId.m_data.m_buffer[i] = v15;
    }
    LODWORD(v5) = numId;
  }
  this->m_numId = v5;
  this->m_historyIdx = 0;
  GpuTimerView::SetBudgets(this, 0);
  v16 = 3 * GpuTimerView::ms_opacity;
  if ( v16 > 0xFF )
    LOBYTE(v16) = -1;
  this->m_barBackColor.packed = GpuTimerView::ms_opacity << 24;
  this->m_txtColor.packed = ((unsigned __int8)v16 << 24) | 0xFFFFFF;
  this->m_txtInactive.packed = ((unsigned __int8)v16 << 24) | 0x7F7F7F;
  this->m_txtOverBdgtColor.packed = ((unsigned __int8)v16 << 24) | 0xFF;
}

/*
==============
GpuTimerPage::InitPages
==============
*/
void GpuTimerPage::InitPages(void)
{
  ;
}

/*
==============
GpuTimerView::InitViews
==============
*/
void GpuTimerView::InitViews(GfxFont *font)
{
  int v2; 

  if ( !GpuTimerView::ms_viewsInit )
  {
    ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator = &GpuTimerView::ms_histAlloc;
    if ( GpuTimerView::ms_histAlloc.mp_top_down < GpuTimerView::ms_histAlloc.mp_bottom_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 92, ASSERT_TYPE_ASSERT, "( mp_top_down >= mp_bottom_up )", (const char *)&queryFormat, "mp_top_down >= mp_bottom_up") )
      __debugbreak();
    Com_Printf(8, "GpuTimerView mem reserved: %u\n", (unsigned int)(LODWORD(GpuTimerView::ms_histAlloc.mp_top_down) - LODWORD(GpuTimerView::ms_histAlloc.mp_bottom_up)));
    GpuTimerView::ms_viewsInit = 1;
    GpuTimerView::ms_drawData.font = font;
    GpuTimerView::ms_drawData.fontHeight = (float)R_TextHeight(font);
    v2 = R_TextWidth("#", 1, font);
    *(_OWORD *)&GpuTimerView::ms_drawData.barHeight = _xmm;
    GpuTimerView::ms_drawData.rowHeight = FLOAT_17_0;
    GpuTimerView::ms_drawData.barOffsetY = FLOAT_3_0;
    GpuTimerView::ms_drawData.textOffsetY = (float)(GpuTimerView::ms_drawData.fontHeight * 0.5) + 7.5;
    GpuTimerView::ms_drawData.maxNameWidth = (float)v2 * 25.0;
    GpuTimerView::ms_drawData.fontWidth = (float)v2;
    GpuTimerView::ms_drawData.idNameIndent = FLOAT_12_0;
  }
}

/*
==============
GpuTimerPage::OutputToText
==============
*/
void GpuTimerPage::OutputToText(GpuTimerPage *this, TimerTree *pDrawTree, int numViewTotalOnly)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  PageViewConfig *m_pCfg; 
  __int64 v9; 
  PageViewConfig *v10; 
  unsigned __int128 v11; 
  vec2_t v12; 

  v3 = numViewTotalOnly;
  v12.v[0] = 0.0;
  v12.v[1] = 0.0;
  if ( numViewTotalOnly > 0 )
  {
    v6 = 0i64;
    v7 = numViewTotalOnly;
    do
    {
      this->m_pCfg[v6].m_pView->m_dispType = PRINT_COMPASS_TOTALONLY;
      m_pCfg = this->m_pCfg;
      v11 = 0ui64;
      GpuTimerView::Draw(m_pCfg[v6].m_pView, (GfxCmdBufContext *)&v11, pDrawTree, 0, m_pCfg[v6].m_showInActive, m_pCfg[v6].m_exclusiveTimes, &v12, 100.0, &v12);
      ++v6;
      this->m_pCfg[v6 - 1].m_pView->m_dispType = this->m_pCfg[v6 - 1].m_displayType;
      --v7;
    }
    while ( v7 );
  }
  if ( (int)v3 < this->m_numCfg )
  {
    v9 = v3;
    do
    {
      this->m_pCfg[v9].m_pView->m_dispType = PRINT_COMPASS;
      v10 = this->m_pCfg;
      v11 = 0ui64;
      GpuTimerView::Draw(v10[v9].m_pView, (GfxCmdBufContext *)&v11, pDrawTree, 0, v10[v9].m_showInActive, v10[v9].m_exclusiveTimes, &v12, 100.0, &v12);
      ++v9;
      LODWORD(v3) = v3 + 1;
      this->m_pCfg[v9 - 1].m_pView->m_dispType = this->m_pCfg[v9 - 1].m_displayType;
    }
    while ( (int)v3 < this->m_numCfg );
  }
}

/*
==============
GpuTimerView::OutputToText
==============
*/
void GpuTimerView::OutputToText(GpuTimerView *this, TimerTree *pTree)
{
  __int128 v2; 
  unsigned int m_numId; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int128 v10; 
  GpuTimerView::DisplayType m_dispType; 
  __int64 v14; 
  unsigned int v15; 
  GPUTimeStampNode *m_pRoot; 
  unsigned int totalTime; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  float v21; 
  bool v22; 
  __int128 v23; 
  const char *Name; 
  float v25; 
  float v26; 
  float v27; 
  const char *v28; 
  float v31; 
  float v32; 
  double v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  double v38; 
  unsigned int pOutCurTotalUs; 
  __int64 v40; 
  unsigned int pOutMinUs; 
  unsigned int pOutMaxUs; 
  float pOutAvgUs; 
  __int64 v44; 
  __int128 v45; 
  unsigned __int128 v46; 
  char dest[256]; 
  __int128 v48; 

  m_numId = this->m_numId;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  v44 = 0i64;
  v7 = 0i64;
  v40 = 0i64;
  v10 = 0i64;
  if ( GpuTimerView::ms_drawData.exclusiveTimes )
  {
    if ( !m_numId )
      goto LABEL_20;
    do
    {
      if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v4 += TimerTree::GetExclusiveTimeForTimerId(pTree, (const GPUTimerId)this->m_timerId.m_data.m_buffer[v7]);
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < this->m_numId );
  }
  else
  {
    if ( !m_numId )
      goto LABEL_20;
    do
    {
      if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v7 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v4 += TimerTree::GetTotalTimeForTimerId(pTree, (const GPUTimerId)this->m_timerId.m_data.m_buffer[v7]);
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < this->m_numId );
  }
  v6 = 0i64;
  v44 = v4;
  v5 = 0i64;
LABEL_20:
  m_dispType = this->m_dispType;
  if ( m_dispType != PRINT_COMPASS && m_dispType != PRINT_COMPASS_TOTALONLY )
    goto LABEL_25;
  memset_0(dest, 0, sizeof(dest));
  Com_sprintf(dest, 0x100ui64, "GPU.%s", this->m_viewName);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, r15 }
  if ( v4 < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_CSVWriteMetric(dest, *(double *)&_XMM0 * 0.000001);
  m_dispType = this->m_dispType;
  if ( m_dispType != PRINT_COMPASS_TOTALONLY )
  {
LABEL_25:
    if ( m_dispType == PRINT )
      Com_Printf(8, "%*s %5s %5s %5s %5s\n", 24, "Timer", "TotUs", "AvgUs", "MaxUs", "MinUs");
    v14 = 0i64;
    if ( this->m_numId )
    {
      v48 = v2;
      do
      {
        if ( (unsigned int)v14 >= this->m_timerId.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( (unsigned int)v14 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v15 = 0;
        GpuTimerView::ms_drawData.currentId = this->m_timerId.m_data.m_buffer[v14];
        for ( GpuTimerView::ms_drawData.totalTime = 0; v15 < GpuTimerView::ms_drawData.desiredDepth; ++v15 )
          memset_0(GpuTimerView::ms_drawData.childTime[v15], 0, sizeof(GpuTimerView::ms_drawData.childTime[v15]));
        m_pRoot = pTree->m_pRoot;
        v45 = 0ui64;
        v46 = 0ui64;
        TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, (GfxCmdBufContext *)&v46, m_pRoot, this, 0);
        totalTime = GpuTimerView::ms_drawData.totalTime;
        if ( !GpuTimerView::ms_drawData.totalTime && GpuTimerView::ms_drawData.showInActive == LOBYTE(GpuTimerView::ms_drawData.totalTime) )
        {
          v5 = v40;
        }
        else
        {
          v18 = 2 * (this->m_historyIdx + 6i64);
          if ( (unsigned int)v14 >= this->m_history[this->m_historyIdx].m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( (unsigned __int64)(unsigned int)v14 >= *(_QWORD *)&this->m_txtInactive.array[8 * v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v18] + 4 * v14) = totalTime;
          GpuTimerView::CalculateViewHistoryMinMaxAvg(this, v14, &pOutCurTotalUs, &pOutMinUs, &pOutMaxUs, &pOutAvgUs);
          v19 = pOutMinUs;
          v20 = pOutMaxUs;
          v6 += pOutMinUs;
          v21 = pOutAvgUs;
          v5 = pOutMaxUs + v40;
          v22 = this->m_dispType == PRINT;
          v40 = v5;
          v23 = v10;
          *(float *)&v23 = *(float *)&v10 + pOutAvgUs;
          v10 = v23;
          if ( v22 )
          {
            Name = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
            v25 = (float)v19;
            v26 = (float)v20;
            v38 = (float)(v25 * 0.001);
            v27 = (float)pOutCurTotalUs;
            Com_Printf(8, "%*s %5.2f %5.2f %5.2f %5.2f\n", 24, Name, (float)(v27 * 0.001), (float)(v21 * 0.001), (float)(v26 * 0.001), v38);
          }
          else
          {
            v28 = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
            Com_sprintf<256>((char (*)[256])dest, "GPU.   %s", v28);
            _XMM0 = 0i64;
            __asm { vcvtsi2sd xmm0, xmm0, rax }
            if ( !Com_CSVWriteMetricChecked(dest, *(double *)&_XMM0 * 0.000001) )
              Com_Printf(8, "Unable to write csv metric for '%s', as we don't have a column for it, or the order is mismatched.\n", dest);
          }
        }
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < this->m_numId );
      v4 = v44;
    }
    if ( this->m_dispType == PRINT )
    {
      v31 = (float)v6;
      if ( v6 < 0 )
      {
        v32 = (float)v6;
        v31 = v32 + 1.8446744e19;
      }
      v33 = (float)(v31 * 0.001);
      v34 = (float)v5;
      if ( v5 < 0 )
      {
        v35 = (float)v5;
        v34 = v35 + 1.8446744e19;
      }
      v36 = (float)v4;
      if ( v4 < 0 )
      {
        v37 = (float)v4;
        v36 = v37 + 1.8446744e19;
      }
      Com_Printf(8, "%*s %5.2f %5.2f %5.2f %5.2f\n\n", 24, "TOTAL", (float)(v36 * 0.001), (float)(*(float *)&v10 * 0.001), (float)(v34 * 0.001), v33);
    }
  }
}

/*
==============
GpuTimerView::SetBudgets
==============
*/
void GpuTimerView::SetBudgets(GpuTimerView *this, int count, const unsigned int *pBudgetsUS)
{
  unsigned __int64 m_size; 
  unsigned __int64 v4; 
  __int64 v5; 
  const unsigned int *v8; 
  unsigned int v9; 
  int v10; 

  m_size = this->m_timerId.m_data.m_size;
  v4 = 0i64;
  v5 = count;
  this->m_timerBudgetTotalUS = 0;
  if ( count != m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer_view.cpp", 397, ASSERT_TYPE_ASSERT, "(count == m_timerId.size())", "%s\n\tYou must set the same number of budget values (%u) as you have timerIds (%zu) in the view.\n", "count == m_timerId.size()", count, m_size) )
    __debugbreak();
  if ( v5 > 0 )
  {
    v8 = pBudgetsUS;
    do
    {
      v9 = *v8;
      if ( v4 >= this->m_timerBudget.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v4 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      ++v4;
      *(const unsigned int *)((char *)v8 + (char *)this->m_timerBudget.m_data.m_buffer - (char *)pBudgetsUS) = v9;
      v10 = *v8++;
      this->m_timerBudgetTotalUS += v10;
    }
    while ( (__int64)v4 < v5 );
  }
}

/*
==============
GpuTimerView::SetBudgets
==============
*/
void GpuTimerView::SetBudgets(GpuTimerView *this, unsigned int budgetUS)
{
  int v3; 
  unsigned __int64 v5; 

  v3 = 0;
  if ( this->m_timerBudget.m_data.m_size )
  {
    v5 = 0i64;
    do
    {
      if ( v5 >= this->m_timerBudget.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v5 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      ++v3;
      this->m_timerBudget.m_data.m_buffer[v5++] = 0;
    }
    while ( v3 < this->m_timerBudget.m_data.m_size );
    this->m_timerBudgetTotalUS = budgetUS;
  }
  else
  {
    this->m_timerBudgetTotalUS = budgetUS;
  }
}

/*
==============
GpuTimerPage::SetOpacity
==============
*/
void GpuTimerPage::SetOpacity(unsigned __int8 opacity)
{
  GpuTimerPage::ms_targetOpacity = opacity;
}

/*
==============
GpuTimerView::SetOpacity
==============
*/
void GpuTimerView::SetOpacity(GpuTimerView *this, unsigned __int8 opacity)
{
  unsigned int v2; 

  GpuTimerView::ms_opacity = opacity;
  this->m_barBackColor.array[3] = opacity;
  v2 = 3 * opacity;
  if ( v2 > 0xFF )
    LOBYTE(v2) = -1;
  this->m_txtColor.array[3] = v2;
  this->m_txtInactive.array[3] = v2;
  this->m_txtOverBdgtColor.array[3] = v2;
}

/*
==============
GpuTimerView::SetPos
==============
*/
void GpuTimerView::SetPos(GpuTimerView *this, float x, float y)
{
  GpuTimerView::ms_drawData.anchorX = x;
  GpuTimerView::ms_drawData.barStartX = x + GpuTimerView::ms_drawData.maxNameWidth;
  GpuTimerView::ms_drawData.currentX = x + GpuTimerView::ms_drawData.maxNameWidth;
  GpuTimerView::ms_drawData.anchorY = y;
  GpuTimerView::ms_drawData.barStartY = y;
  GpuTimerView::ms_drawData.currentY = y;
}

/*
==============
GpuTimerPage::Shutdown
==============
*/
void GpuTimerPage::Shutdown(GpuTimerPage *this)
{
  this->m_pCfg = NULL;
  this->m_numCfg = 0;
}

/*
==============
GpuTimerView::Shutdown
==============
*/
void GpuTimerView::Shutdown(GpuTimerView *this)
{
  ntl::array<unsigned int,SharedTimerHistoryAlloc_t> *m_history; 
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 i; 

  m_history = this->m_history;
  v3 = 64i64;
  do
  {
    if ( m_history->m_data.m_size )
    {
      v4 = 0i64;
      do
        ++v4;
      while ( v4 < m_history->m_data.m_size );
      if ( m_history->m_data.m_buffer )
      {
        if ( !ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        m_history->m_data.m_buffer = NULL;
        m_history->m_data.m_size = 0i64;
      }
    }
    ++m_history;
    --v3;
  }
  while ( v3 );
  this->m_historyIdx = 0;
  if ( this->m_timerId.m_data.m_size )
  {
    for ( i = 0i64; i < this->m_timerId.m_data.m_size; ++i )
      ;
    if ( this->m_timerId.m_data.m_buffer )
    {
      if ( !ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
        __debugbreak();
      this->m_timerId.m_data.m_buffer = NULL;
      this->m_timerId.m_data.m_size = 0i64;
    }
  }
  this->m_numId = 0;
  if ( this->m_timerBudget.m_data.m_size )
    ntl::array<unsigned int,SharedTimerHistoryAlloc_t>::clear_and_deallocate(&this->m_timerBudget);
  this->m_dispType = JUSTIFIED;
  this->m_timerBudgetTotalUS = 0;
}

/*
==============
GpuTimerPage::ShutdownPages
==============
*/
void GpuTimerPage::ShutdownPages(void)
{
  unsigned int i; 
  __int64 v1; 
  GpuTimerPage *v2; 

  for ( i = 0; i < GpuTimerPage::ms_pageIdx; GpuTimerPage::ms_pages.m_data[v1] = NULL )
  {
    v1 = i;
    if ( i >= 2ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v2 = GpuTimerPage::ms_pages.m_data[i];
    v2->m_pCfg = NULL;
    v2->m_numCfg = 0;
    if ( i >= 2ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    ++i;
  }
  GpuTimerPage::ms_pageIdx = 0;
}

/*
==============
GpuTimerView::ShutdownViews
==============
*/
void GpuTimerView::ShutdownViews(void)
{
  unsigned int v0; 
  __int64 v1; 

  if ( GpuTimerView::ms_viewsInit )
  {
    v0 = 0;
    GpuTimerView::ms_viewsInit = 0;
    for ( GpuTimerView::ms_avgTimesOnly = 0; v0 < GpuTimerView::ms_viewIdx; GpuTimerView::ms_views.m_data[v1] = NULL )
    {
      v1 = v0;
      if ( v0 >= 0x11ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      GpuTimerView::Shutdown(GpuTimerView::ms_views.m_data[v0]);
      if ( v0 >= 0x11ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      ++v0;
    }
    GpuTimerView::ms_histAlloc.mp_bottom_up = (char *)&GpuTimerView::ms_histAlloc;
    GpuTimerView::ms_viewIdx = 0;
    ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator = NULL;
    GpuTimerView::ms_histAlloc.mp_top_down = (char *)&GpuTimerView::ms_histAlloc.mp_bottom_up;
  }
}

/*
==============
GpuTimerView::SumAllIdTimeForFrame
==============
*/
__int64 GpuTimerView::SumAllIdTimeForFrame(GpuTimerView *this, unsigned int historyIdx)
{
  unsigned int v2; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = 0;
  v4 = 0;
  if ( this->m_numId )
  {
    v5 = 2 * (historyIdx + 6i64);
    do
    {
      v6 = v4;
      if ( (unsigned __int64)v4 >= *(_QWORD *)&this->m_txtInactive.array[8 * v5] )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned __int64)v4 >= *(_QWORD *)&this->m_txtInactive.array[8 * v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      ++v4;
      v2 += *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v5] + 4 * v6);
    }
    while ( v4 < this->m_numId );
  }
  return v2;
}

/*
==============
GpuTimerView::WalkIdDrawTime
==============
*/
bool GpuTimerView::WalkIdDrawTime(GfxCmdBufContext *gfxContext, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  GPUTimerId currentId; 
  bool exclusiveTimes; 
  char v10; 
  GPUTimeStampNode *m_pParent; 
  bool v12; 
  int m_beginTimeUs; 
  unsigned int m_exclusiveTimeUs; 
  float v15; 
  float v16; 
  float v17; 
  unsigned int totalTime; 
  float v19; 
  GfxCmdBufContext v20; 
  unsigned int v21; 
  GfxCmdBufContext v22; 
  unsigned int packed; 
  GfxCmdBufContext v25; 
  unsigned int v26; 

  currentId = GpuTimerView::ms_drawData.currentId;
  if ( pNode->m_id != GpuTimerView::ms_drawData.currentId )
    return 0;
  exclusiveTimes = GpuTimerView::ms_drawData.exclusiveTimes;
  v10 = 1;
  GpuTimerView::ms_drawData.idFound = 1;
  if ( GpuTimerView::ms_drawData.exclusiveTimes )
  {
    m_exclusiveTimeUs = pNode->m_exclusiveTimeUs;
    m_beginTimeUs = pNode->m_beginTimeUs;
  }
  else
  {
    m_pParent = pNode->m_pParent;
    while ( m_pParent )
    {
      v12 = m_pParent->m_id == GpuTimerView::ms_drawData.currentId;
      m_pParent = m_pParent->m_pParent;
      if ( v12 )
        v10 = 0;
    }
    m_beginTimeUs = pNode->m_beginTimeUs;
    m_exclusiveTimeUs = LODWORD(pNode->m_endTimeUs) - m_beginTimeUs;
  }
  v15 = (float)m_exclusiveTimeUs;
  v16 = v15 * GpuTimerView::ms_drawData.pixelsPerUS;
  v17 = (float)(unsigned int)(m_beginTimeUs - LODWORD(GpuTimerView::ms_drawData.rootStartTimeUs));
  totalTime = GpuTimerView::ms_drawData.totalTime;
  v19 = v17 * GpuTimerView::ms_drawData.pixelsPerUS;
  if ( v10 )
  {
    totalTime = m_exclusiveTimeUs + GpuTimerView::ms_drawData.totalTime;
    GpuTimerView::ms_drawData.totalTime += m_exclusiveTimeUs;
  }
  else
  {
    v16 = FLOAT_1_0;
  }
  if ( !GpuTimerView::ms_drawData.timerLabelDrawn && (totalTime || GpuTimerView::ms_drawData.avgTime > 0.0 || GpuTimerView::ms_drawData.showInActive) )
  {
    v20 = *gfxContext;
    GpuTimerView::ms_drawData.timerLabelDrawn = 1;
    packed = pView->m_barBackColor.packed;
    v25 = v20;
    RB_DrawStretchPic(&v25, rgp.whiteMaterial, GpuTimerView::ms_drawData.anchorX, GpuTimerView::ms_drawData.backBarGap + GpuTimerView::ms_drawData.currentY, GpuTimerView::ms_drawData.width, GpuTimerView::ms_drawData.backBarHeight, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
    exclusiveTimes = GpuTimerView::ms_drawData.exclusiveTimes;
    currentId = GpuTimerView::ms_drawData.currentId;
  }
  if ( m_exclusiveTimeUs || exclusiveTimes )
  {
    v26 = R_GPU_TimerGetColor(currentId)->packed;
    v21 = 3 * GpuTimerView::ms_opacity;
    v25 = *gfxContext;
    if ( v21 > 0xFF )
      LOBYTE(v21) = -1;
    HIBYTE(v26) = v21;
    RB_DrawStretchPic(&v25, rgp.whiteMaterial, v19 + GpuTimerView::ms_drawData.currentX, GpuTimerView::ms_drawData.barOffsetY + GpuTimerView::ms_drawData.currentY, v16, GpuTimerView::ms_drawData.barHeight, 0.0, 0.0, 1.0, 1.0, v26, GFX_PRIM_STATS_DEBUG);
    if ( GpuTimerView::ms_drawData.desiredDepth )
    {
      v22 = *gfxContext;
      GpuTimerView::ms_drawData.parentDepth = nodeDepth;
      v25 = v22;
      TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdDrawTimeSubTree, &v25, pNode, pView, nodeDepth);
    }
  }
  return 0;
}

/*
==============
GpuTimerView::WalkIdDrawTimeSubTree
==============
*/
bool GpuTimerView::WalkIdDrawTimeSubTree(GfxCmdBufContext *gfxContext, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  unsigned int v4; 
  unsigned int v6; 
  int m_beginTimeUs; 
  unsigned int m_exclusiveTimeUs; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  unsigned int v16; 
  GfxCmdBufContext v18; 
  unsigned int packed; 

  v4 = nodeDepth - 1;
  if ( nodeDepth - 1 <= 6 && nodeDepth >= GpuTimerView::ms_drawData.parentDepth )
  {
    v6 = nodeDepth - GpuTimerView::ms_drawData.parentDepth;
    if ( v6 <= GpuTimerView::ms_drawData.desiredDepth )
    {
      m_beginTimeUs = pNode->m_beginTimeUs;
      if ( GpuTimerView::ms_drawData.exclusiveTimes )
        m_exclusiveTimeUs = pNode->m_exclusiveTimeUs;
      else
        m_exclusiveTimeUs = LODWORD(pNode->m_endTimeUs) - m_beginTimeUs;
      v9 = (float)m_exclusiveTimeUs;
      v10 = v9 * GpuTimerView::ms_drawData.pixelsPerUS;
      v11 = (float)(unsigned int)(m_beginTimeUs - LODWORD(GpuTimerView::ms_drawData.rootStartTimeUs));
      v12 = v11 * GpuTimerView::ms_drawData.pixelsPerUS;
      v13 = (unsigned int)pNode->m_id + 129i64 * v4;
      GpuTimerView::ms_drawData.childTime[0][v13] += m_exclusiveTimeUs;
      v14 = (float)v6;
      v15 = (float)((float)(v14 * GpuTimerView::ms_drawData.rowHeight) + GpuTimerView::ms_drawData.currentY) + GpuTimerView::ms_drawData.barOffsetY;
      packed = R_GPU_TimerGetColor(pNode->m_id)->packed;
      v18 = *gfxContext;
      v16 = 3 * GpuTimerView::ms_opacity;
      if ( v16 > 0xFF )
        LOBYTE(v16) = -1;
      HIBYTE(packed) = v16;
      RB_DrawStretchPic(&v18, rgp.whiteMaterial, v12, v15, v10, GpuTimerView::ms_drawData.barHeight, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
    }
  }
  return 0;
}

/*
==============
GpuTimerView::WalkIdTotalTime
==============
*/
bool GpuTimerView::WalkIdTotalTime(GfxCmdBufContext *__formal, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  char v4; 
  GPUTimeStampNode *m_pParent; 
  bool v6; 
  unsigned int m_exclusiveTimeUs; 
  GfxCmdBufContext v9; 

  if ( pNode->m_id != GpuTimerView::ms_drawData.currentId )
    return 0;
  v4 = 1;
  GpuTimerView::ms_drawData.idFound = 1;
  if ( GpuTimerView::ms_drawData.exclusiveTimes )
  {
    m_exclusiveTimeUs = pNode->m_exclusiveTimeUs;
  }
  else
  {
    m_pParent = pNode->m_pParent;
    if ( m_pParent )
    {
      do
      {
        v6 = m_pParent->m_id == GpuTimerView::ms_drawData.currentId;
        m_pParent = m_pParent->m_pParent;
        if ( v6 )
          v4 = 0;
      }
      while ( m_pParent );
      if ( !v4 )
        goto LABEL_11;
    }
    m_exclusiveTimeUs = LODWORD(pNode->m_endTimeUs) - LODWORD(pNode->m_beginTimeUs);
  }
  GpuTimerView::ms_drawData.totalTime += m_exclusiveTimeUs;
LABEL_11:
  if ( GpuTimerView::ms_drawData.desiredDepth )
  {
    GpuTimerView::ms_drawData.parentDepth = nodeDepth;
    v9 = (GfxCmdBufContext)0i64;
    TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTimeSubTree, &v9, pNode, pView, nodeDepth);
  }
  return 0;
}

/*
==============
GpuTimerView::WalkIdTotalTimeSubTree
==============
*/
bool GpuTimerView::WalkIdTotalTimeSubTree(GfxCmdBufContext *__formal, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  unsigned int m_exclusiveTimeUs; 
  __int64 v6; 

  if ( nodeDepth - 1 <= 6 && nodeDepth >= GpuTimerView::ms_drawData.parentDepth && nodeDepth - GpuTimerView::ms_drawData.parentDepth <= GpuTimerView::ms_drawData.desiredDepth )
  {
    if ( GpuTimerView::ms_drawData.exclusiveTimes )
      m_exclusiveTimeUs = pNode->m_exclusiveTimeUs;
    else
      m_exclusiveTimeUs = LODWORD(pNode->m_endTimeUs) - LODWORD(pNode->m_beginTimeUs);
    v6 = (unsigned int)pNode->m_id + 129i64 * (nodeDepth - 1);
    GpuTimerView::ms_drawData.childTime[0][v6] += m_exclusiveTimeUs;
  }
  return 0;
}

