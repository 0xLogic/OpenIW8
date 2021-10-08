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
  __int64 v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  __int128 v15; 
  GfxCmdBufContext v16; 
  int v18; 
  __int64 v19; 

  v2 = 0;
  v4 = this;
  v18 = 0;
  if ( this->m_numCfg > 0 )
  {
    v5 = 0i64;
    v19 = 0i64;
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
          v15 = 0ui64;
          __asm
          {
            vmovups xmm0, [rsp+88h+var_58]
            vmovdqa [rsp+88h+var_48], xmm0
          }
          TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, &v16, m_pRoot, v6, 0);
          totalTime = GpuTimerView::ms_drawData.totalTime;
          v12 = 2 * (v6->m_historyIdx + 6i64);
          if ( (unsigned int)v8 >= v6->m_history[v6->m_historyIdx].m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( (unsigned __int64)(unsigned int)v8 >= *(_QWORD *)&v6->m_txtInactive.array[8 * v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          *(_DWORD *)(*(_QWORD *)&v6->m_barBackColor.array[8 * v12] + 4 * v8) = totalTime;
          v13 = v6->m_historyIdx;
          v14 = GpuTimerView::ms_drawData.totalTime;
          if ( v13 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          v6->m_ViewTotalUs.m_data[v13] += v14;
          v8 = (unsigned int)(v8 + 1);
        }
        while ( (unsigned int)v8 < v6->m_numId );
        v2 = v18;
        v5 = v19;
      }
      v18 = ++v2;
      v5 += 24i64;
      v6->m_historyIdx = ((unsigned __int8)v6->m_historyIdx + 1) & 0x3F;
      v4 = this;
      v19 = v5;
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
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  __int128 v12; 
  GfxCmdBufContext v13; 

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
    v12 = 0ui64;
    __asm { vmovups xmm0, [rsp+78h+var_48] }
    GpuTimerView::ms_drawData.totalTime = 0;
    m_pRoot = pTree->m_pRoot;
    __asm { vmovdqa [rsp+78h+var_38], xmm0 }
    TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, &v13, m_pRoot, this, 0);
    totalTime = GpuTimerView::ms_drawData.totalTime;
    v9 = 2 * (this->m_historyIdx + 6i64);
    if ( i >= this->m_history[this->m_historyIdx].m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( (unsigned __int64)i >= *(_QWORD *)&this->m_txtInactive.array[8 * v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v9] + 4i64 * i) = totalTime;
    v10 = this->m_historyIdx;
    v11 = GpuTimerView::ms_drawData.totalTime;
    if ( v10 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    this->m_ViewTotalUs.m_data[v10] += v11;
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
  unsigned int v7; 
  unsigned int *v8; 
  unsigned int v10; 
  int v11; 
  unsigned int i; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int64 *p_m_size; 
  __int64 v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  __int64 v22; 

  v7 = 0;
  v8 = pOutMinUs;
  v10 = -1;
  v11 = 0;
  if ( currentIdIndex >= 0 )
  {
    p_m_size = &this->m_history[0].m_data.m_size;
    v18 = 64i64;
    v19 = currentIdIndex;
    do
    {
      if ( v19 >= *p_m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v19 >= *p_m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v20 = *(_DWORD *)(*(p_m_size - 1) + 4 * v19);
      v11 += v20;
      v21 = v20;
      if ( v20 > v10 )
        v21 = v10;
      v10 = v21;
      if ( v7 > v20 )
        v20 = v7;
      p_m_size += 2;
      v7 = v20;
      --v18;
    }
    while ( v18 );
    v8 = pOutMinUs;
    v22 = 2 * (this->m_historyIdx + 6i64);
    if ( v19 >= this->m_history[this->m_historyIdx].m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v19 >= *(_QWORD *)&this->m_txtInactive.array[8 * v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    v16 = *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v22] + 4 * v19);
  }
  else
  {
    for ( i = 0; i < 0x40; ++i )
    {
      v13 = GpuTimerView::SumAllIdTimeForFrame(this, i);
      v14 = v13;
      if ( v13 > v10 )
        v14 = v10;
      v10 = v14;
      v15 = v13;
      if ( v7 > v13 )
        v15 = v7;
      v11 += v13;
      v7 = v15;
    }
    v16 = GpuTimerView::SumAllIdTimeForFrame(this, this->m_historyIdx);
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  *pOutCurTotalUs = v16;
  *v8 = v10;
  *pOutMaxUs = v7;
  __asm { vcvtsi2ss xmm0, xmm0, rax }
  _RAX = pOutAvgUs;
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3c800000
    vmovss  dword ptr [rax], xmm1
  }
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
  bool v15; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  int v21; 
  unsigned __int8 v22; 
  int v23; 
  unsigned __int8 v24; 
  unsigned int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  GpuTimerView *m_pView; 
  unsigned int v32; 
  int v36; 
  int v47; 
  int m_numCfg; 
  TimerTree *v50; 
  __int64 v51; 
  PageViewConfig *m_pCfg; 
  GpuTimerView *v53; 
  GpuTimerView::DisplayType m_displayType; 
  TimerTree *v64; 
  __int64 v72; 
  PageViewConfig *v73; 
  GpuTimerView *v74; 
  GpuTimerView::DisplayType v75; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  int v120; 
  _QWORD v121[3]; 
  TimerTree *v122; 
  TimerTree *v123; 
  TimerTree *v124; 
  const vec2_t *v125; 
  TimerTree *v126; 
  void *retaddr; 

  _R11 = &retaddr;
  v15 = this->m_numCfg <= 0;
  _R14 = pagePos;
  v125 = pagePos;
  _R13 = gfxContext;
  v124 = pDrawTree;
  if ( !v15 )
  {
    v19 = GpuTimerPage::ms_opacity;
    v20 = GpuTimerPage::ms_targetOpacity;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps xmmword ptr [r11-0A8h], xmm12
      vmovaps xmmword ptr [r11-0B8h], xmm13
    }
    if ( v19 >= v20 )
    {
      if ( v19 > v20 )
      {
        v23 = v19 - GpuTimerPage::ms_opacityInc;
        v24 = v20;
        if ( v23 >= v20 )
          v24 = v23;
        v19 = v24;
        GpuTimerPage::ms_opacity = v24;
      }
    }
    else
    {
      v21 = GpuTimerPage::ms_opacityInc + v19;
      v22 = GpuTimerPage::ms_opacityInc + v19;
      v19 = v20;
      if ( v21 <= v20 )
        v19 = v22;
      GpuTimerPage::ms_opacity = v19;
    }
    v25 = 3 * v19;
    if ( v25 > 0xFF )
      LOBYTE(v25) = -1;
    v26 = 0;
    v27 = (v19 << 24) | 0xFFFFFF;
    v28 = ((unsigned __int8)v25 << 24) | 0xFFFFFF;
    v29 = 0;
    LODWORD(v122) = v28;
    if ( this->m_numCfg > 0 )
    {
      v30 = 0i64;
      while ( 1 )
      {
        m_pView = this->m_pCfg[v30++].m_pView;
        GpuTimerView::ms_opacity = v19;
        m_pView->m_barBackColor.array[3] = v19;
        v32 = 3 * v19;
        if ( v32 > 0xFF )
          LOBYTE(v32) = -1;
        ++v29;
        m_pView->m_txtColor.array[3] = v32;
        m_pView->m_txtInactive.array[3] = v32;
        m_pView->m_txtOverBdgtColor.array[3] = v32;
        if ( v29 >= this->m_numCfg )
          break;
        v19 = GpuTimerPage::ms_opacity;
      }
    }
    __asm
    {
      vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.fontWidth; WalkDrawData GpuTimerView::ms_drawData
      vmulss  xmm13, xmm0, cs:__real@41c80000
      vmovss  xmm10, cs:__real@40000000
    }
    v36 = 0;
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@41f00000
      vmovss  xmm12, cs:__real@40800000
    }
    GpuTimerView::ms_avgTimesOnly = avgTimesOnly;
    __asm
    {
      vmovss  xmm6, dword ptr [r14+4]
      vmovss  xmm9, dword ptr [r14]
      vaddss  xmm1, xmm0, xmm13
      vmulss  xmm2, xmm1, xmm10
      vmaxss  xmm11, xmm2, dword ptr [rax]
      vaddss  xmm1, xmm9, xmm10
      vaddss  xmm0, xmm6, xmm10
      vaddss  xmm2, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.fontHeight; WalkDrawData GpuTimerView::ms_drawData
    }
    v120 = -1;
    v47 = -1;
    m_numCfg = this->m_numCfg;
    __asm
    {
      vmovss  dword ptr [rbp+60h+var_D8], xmm1
      vmovss  dword ptr [rbp+60h+var_D8+4], xmm2
      vmovss  dword ptr [rbp+60h+var_C0], xmm1
      vmovss  dword ptr [rbp+60h+var_C0+4], xmm2
      vsubss  xmm7, xmm11, xmm12
    }
    if ( m_numCfg > 0 )
    {
      v50 = v124;
      v51 = 0i64;
      do
      {
        m_pCfg = this->m_pCfg;
        if ( this->m_pCfg[v51].m_column == COLUMN_NONE )
        {
          v53 = m_pCfg[v51].m_pView;
          m_displayType = m_pCfg[v51].m_displayType;
          __asm
          {
            vmovups xmm0, xmmword ptr [r13+0]
            vmovups xmmword ptr [rsp+160h+var_F8+8], xmm0
          }
          v53->m_dispType = m_displayType;
          __asm { vmovss  dword ptr [rsp+160h+var_128], xmm7 }
          GpuTimerView::Draw(this->m_pCfg[v51].m_pView, (GfxCmdBufContext *)&v121[1], v50, this->m_pCfg[v51].m_childDepth, this->m_pCfg[v51].m_showInActive, this->m_pCfg[v51].m_exclusiveTimes, (const vec2_t *)&v123, v118, (vec2_t *)&v126);
          v47 = v36;
          v123 = v126;
        }
        m_numCfg = this->m_numCfg;
        ++v36;
        ++v51;
      }
      while ( v36 < m_numCfg );
      __asm { vmovss  xmm2, dword ptr [rbp+60h+var_C0+4] }
      v28 = (int)v122;
      _R14 = v125;
    }
    __asm
    {
      vaddss  xmm0, xmm2, xmm10
      vsubss  xmm8, xmm0, xmm6
    }
    if ( v47 >= 0 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r13+0]
        vaddss  xmm4, xmm6, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
        vmovss  dword ptr [rsp+160h+var_130], xmm4
        vmovups xmmword ptr [rsp+160h+var_F8+8], xmm0
        vaddss  xmm0, xmm13, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
        vmovss  dword ptr [rsp+160h+var_138], xmm0
        vmovaps xmm3, xmm11
        vmovaps xmm2, xmm6
        vmovaps xmm1, xmm9
        vmovss  [rsp+160h+var_140], xmm8
      }
      DrawFrame((GfxCmdBufContext *)&v121[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v108, v111, v115, GpuTimerView::ms_drawData.font, (GfxColor)v27, (GfxColor)v28, GpuTimerView::ms_avgTimesOnly);
      m_numCfg = this->m_numCfg;
    }
    v64 = v124;
    __asm
    {
      vaddss  xmm7, xmm8, dword ptr [r14+4]
      vmovss  xmm9, dword ptr [r14]
      vmulss  xmm11, xmm11, cs:__real@3f000000
      vaddss  xmm1, xmm9, xmm10
      vaddss  xmm0, xmm7, xmm10
      vaddss  xmm2, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.fontHeight; WalkDrawData GpuTimerView::ms_drawData
      vmovss  dword ptr [rbp+60h+var_D8+4], xmm2
      vmovss  dword ptr [rbp+60h+var_E0+4], xmm2
      vmovss  dword ptr [rbp+60h+var_D8], xmm1
      vmovss  dword ptr [rbp+60h+var_E0], xmm1
      vsubss  xmm12, xmm11, xmm12
    }
    if ( m_numCfg > 0 )
    {
      v72 = 0i64;
      do
      {
        v73 = this->m_pCfg;
        if ( this->m_pCfg[v72].m_column == COLUMN_1 )
        {
          v74 = v73[v72].m_pView;
          v75 = v73[v72].m_displayType;
          __asm
          {
            vmovups xmm0, xmmword ptr [r13+0]
            vmovups xmmword ptr [rsp+160h+var_F8+8], xmm0
          }
          v74->m_dispType = v75;
          __asm { vmovss  dword ptr [rsp+160h+var_128], xmm12 }
          GpuTimerView::Draw(this->m_pCfg[v72].m_pView, (GfxCmdBufContext *)&v121[1], v64, this->m_pCfg[v72].m_childDepth, this->m_pCfg[v72].m_showInActive, this->m_pCfg[v72].m_exclusiveTimes, (const vec2_t *)&v123, v119, (vec2_t *)&v122);
          v123 = v122;
          v120 = v26;
        }
        ++v26;
        ++v72;
      }
      while ( v26 < this->m_numCfg );
      __asm { vmovss  xmm2, dword ptr [rbp+60h+var_E0+4] }
    }
    v124 = v122;
    if ( v120 >= 0 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r13+0]
        vaddss  xmm6, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
        vaddss  xmm5, xmm13, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
        vmovups xmmword ptr [rsp+160h+var_F8+8], xmm0
        vaddss  xmm0, xmm2, xmm10
        vmovss  dword ptr [rsp+160h+var_130], xmm6
        vsubss  xmm4, xmm0, xmm7
        vmovss  dword ptr [rsp+160h+var_138], xmm5
        vmovaps xmm3, xmm11
        vmovaps xmm2, xmm7
        vmovaps xmm1, xmm9
        vmovss  [rsp+160h+var_140], xmm4
      }
      DrawFrame((GfxCmdBufContext *)&v121[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v109, v112, v116, GpuTimerView::ms_drawData.font, (GfxColor)v27, (GfxColor)v28, GpuTimerView::ms_avgTimesOnly);
    }
    __asm
    {
      vaddss  xmm8, xmm8, dword ptr [r14+4]
      vaddss  xmm9, xmm11, dword ptr [r14]
      vaddss  xmm0, xmm8, xmm10
      vaddss  xmm1, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.fontHeight; WalkDrawData GpuTimerView::ms_drawData
      vmovups xmm0, xmmword ptr [r13+0]
      vaddss  xmm2, xmm9, xmm10
      vmovss  dword ptr [rsp+160h+var_138], xmm12
      vmovss  dword ptr [rbp+60h+var_C8], xmm2
      vmovss  dword ptr [rbp+60h+var_C8+4], xmm1
      vmovups xmmword ptr [rsp+160h+var_F8+8], xmm0
    }
    GpuTimerPage::DrawColumn(this, (GfxCmdBufContext *)&v121[1], COLUMN_2, v64, (const vec2_t *)&v125, v113, (vec2_t *)&v124, &v120);
    __asm { vmovaps xmm12, [rsp+160h+var_A8+8] }
    if ( v120 >= 0 )
    {
      __asm
      {
        vaddss  xmm7, xmm8, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
        vaddss  xmm4, xmm10, dword ptr [rbp+60h+var_D0+4]
        vaddss  xmm6, xmm13, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
        vmovups xmm0, xmmword ptr [r13+0]
        vmovss  dword ptr [rsp+160h+var_130], xmm7
        vsubss  xmm5, xmm4, xmm8
        vmovss  dword ptr [rsp+160h+var_138], xmm6
        vmovaps xmm3, xmm11
        vmovaps xmm2, xmm8
        vmovaps xmm1, xmm9
        vmovss  [rsp+160h+var_140], xmm5
        vmovups xmmword ptr [rsp+160h+var_F8+8], xmm0
      }
      DrawFrame((GfxCmdBufContext *)&v121[1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v110, v114, v117, GpuTimerView::ms_drawData.font, (GfxColor)v27, (GfxColor)v28, GpuTimerView::ms_avgTimesOnly);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rsp+160h+var_F8+8], xmm0
    }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v121[1]);
    __asm
    {
      vmovaps xmm13, [rsp+160h+var_B8+8]
      vmovaps xmm11, [rsp+160h+var_98+8]
      vmovaps xmm10, [rsp+160h+var_88+8]
      vmovaps xmm9, [rsp+160h+var_78+8]
      vmovaps xmm8, [rsp+160h+var_68+8]
      vmovaps xmm7, [rsp+160h+var_58+8]
      vmovaps xmm6, [rsp+160h+var_48+8]
    }
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
  GpuTimerView::DisplayType m_dispType; 
  __int32 v23; 
  unsigned int v30; 
  unsigned __int64 v31; 
  unsigned int v32; 
  GfxCmdBufContext v33[2]; 

  _RSI = gfxContext;
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
    __asm
    {
      vmovss  xmm0, [rsp+58h+arg_38]
      vsubss  xmm3, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.maxNameWidth; WalkDrawData GpuTimerView::ms_drawData
    }
    _R14 = pos;
    __asm
    {
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.width, xmm0; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.budgetBarWidth, xmm3; WalkDrawData GpuTimerView::ms_drawData
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm2, dword ptr [r14+4]
      vaddss  xmm1, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.maxNameWidth; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX, xmm0; WalkDrawData GpuTimerView::ms_drawData
      vmulss  xmm0, xmm3, cs:__real@387ba883
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS, xmm0; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorY, xmm2; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barStartX, xmm1; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barStartY, xmm2; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX, xmm1; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY, xmm2; WalkDrawData GpuTimerView::ms_drawData
    }
    GpuTimerView::ms_drawData.rootStartTimeUs = TimerTree::GetRootNode(pTree)->m_beginTimeUs;
    m_dispType = this->m_dispType;
    if ( m_dispType )
    {
      v23 = m_dispType - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rsp+58h+var_28], xmm0
          }
          GpuTimerView::DrawGrouped(this, v33, pTree);
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rsp+58h+var_28], xmm0
        }
        GpuTimerView::DrawInPlace(this, v33, pTree);
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+58h+var_28], xmm0
      }
      GpuTimerView::DrawJustified(this, v33, pTree);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+58h+var_28], xmm0
    }
    RB_EndSurfaceIfNeeded(v33);
    _RCX = optOutPos;
    if ( optOutPos )
    {
      optOutPos->v[0] = pos->v[0];
      __asm
      {
        vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
        vmovss  dword ptr [rcx+4], xmm0
      }
    }
  }
  v30 = GpuTimerView::SumAllIdTimeForFrame(this, this->m_historyIdx);
  v31 = this->m_historyIdx;
  v32 = v30;
  if ( v31 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  this->m_ViewTotalUs.m_data[v31] = v32;
  this->m_historyIdx = ((unsigned __int8)this->m_historyIdx + 1) & 0x3F;
}

/*
==============
GpuTimerView::DrawBackBar
==============
*/

void __fastcall GpuTimerView::DrawBackBar(GpuTimerView *this, GfxCmdBufContext *gfxContext, double y)
{
  unsigned int packed; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  GfxCmdBufContext v18; 

  __asm { vmovups xmm0, xmmword ptr [rdx] }
  packed = this->m_barBackColor.packed;
  __asm
  {
    vaddss  xmm3, xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarGap; WalkDrawData GpuTimerView::ms_drawData
    vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
    vxorps  xmm1, xmm1, xmm1
    vmovups xmmword ptr [rsp+78h+var_18.source], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  [rsp+78h+var_38], xmm0
    vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarHeight; WalkDrawData GpuTimerView::ms_drawData
    vmovss  [rsp+78h+var_40], xmm1
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.width; WalkDrawData GpuTimerView::ms_drawData
    vmovss  [rsp+78h+var_50], xmm0
    vmovss  [rsp+78h+var_58], xmm1
  }
  RB_DrawStretchPic(&v18, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v12, v13, v14, v15, v16, v17, packed, GFX_PRIM_STATS_DEBUG);
}

/*
==============
GpuTimerPage::DrawColumn
==============
*/
void GpuTimerPage::DrawColumn(GpuTimerPage *this, GfxCmdBufContext *gfxContext, PageViewConfig::eCOLUMN column, TimerTree *pDrawTree, const vec2_t *pos, float width, vec2_t *outPos, int *rOutIdx)
{
  int v13; 
  int v17; 
  __int64 v20; 
  PageViewConfig *m_pCfg; 
  GpuTimerView *m_pView; 
  GpuTimerView::DisplayType m_displayType; 
  float v27; 
  GfxCmdBufContext v28; 
  vec2_t v29; 
  vec2_t v30; 
  void *retaddr; 

  _R11 = &retaddr;
  _RAX = pos;
  _R14 = outPos;
  v13 = 0;
  _R15 = gfxContext;
  v17 = -1;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rsp+0C8h+var_60], xmm0
    vmovss  dword ptr [rsp+0C8h+var_60+4], xmm1
    vmovss  dword ptr [rsp+0C8h+var_68], xmm0
    vmovss  dword ptr [rsp+0C8h+var_68+4], xmm1
  }
  if ( this->m_numCfg > 0 )
  {
    v20 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovss  xmm6, [rsp+0C8h+arg_28]
    }
    do
    {
      m_pCfg = this->m_pCfg;
      if ( this->m_pCfg[v20].m_column == column )
      {
        m_pView = m_pCfg[v20].m_pView;
        m_displayType = m_pCfg[v20].m_displayType;
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vmovups [rsp+0C8h+var_78], xmm0
        }
        m_pView->m_dispType = m_displayType;
        __asm { vmovss  [rsp+0C8h+var_90], xmm6 }
        GpuTimerView::Draw(this->m_pCfg[v20].m_pView, &v28, pDrawTree, this->m_pCfg[v20].m_childDepth, this->m_pCfg[v20].m_showInActive, this->m_pCfg[v20].m_exclusiveTimes, &v30, v27, &v29);
        v17 = v13;
        v30 = v29;
      }
      ++v13;
      ++v20;
    }
    while ( v13 < this->m_numCfg );
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+0C8h+var_68+4]
      vmovss  xmm0, dword ptr [rsp+0C8h+var_68]
      vmovaps xmm6, [rsp+0C8h+var_48]
    }
  }
  __asm
  {
    vmovss  dword ptr [r14], xmm0
    vmovss  dword ptr [r14+4], xmm1
  }
  *rOutIdx = v17;
}

/*
==============
DrawFrame
==============
*/

void __fastcall DrawFrame(GfxCmdBufContext *gfxContext, double anchor_x, double anchor_y, float width, float height, float header_x, float header_y, GfxFont *font, GfxColor frameColor, GfxColor txtColor, bool avgTimesOnly)
{
  char *v21; 
  char *v26; 
  float v33; 
  float v34; 
  _QWORD v35[3]; 
  GfxPointVertex v36; 
  int v40; 
  int v44; 
  int v48; 
  int v52; 
  int v56; 
  int v60; 
  int v64; 
  char dest[256]; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RSI = gfxContext;
  __asm
  {
    vmovaps xmm5, xmm2
    vaddss  xmm0, xmm5, [rbp+110h+arg_20]
    vmovaps xmm4, xmm1
    vmovss  [rsp+210h+var_1C0], xmm1
    vaddss  xmm1, xmm1, xmm3
    vmovss  [rsp+210h+var_1BC], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rbp+110h+var_18C], xmm0
    vmovss  [rbp+110h+var_17C], xmm0
    vmovss  [rbp+110h+var_16C], xmm0
    vmovss  [rbp+110h+var_15C], xmm0
    vmovups xmm0, xmmword ptr [rsi]
  }
  *(_DWORD *)v36.color = frameColor.array[0] | ((frameColor.array[1] | ((frameColor.array[2] | (HIBYTE(frameColor.packed) << 8)) << 8)) << 8);
  v40 = *(_DWORD *)v36.color;
  v44 = *(_DWORD *)v36.color;
  v48 = *(_DWORD *)v36.color;
  v52 = *(_DWORD *)v36.color;
  v56 = *(_DWORD *)v36.color;
  v60 = *(_DWORD *)v36.color;
  v64 = *(_DWORD *)v36.color;
  __asm
  {
    vmovss  [rsp+210h+var_1B8], xmm2
    vmovss  [rsp+210h+var_1B0], xmm1
    vmovss  [rsp+210h+var_1AC], xmm5
    vmovss  [rsp+210h+var_1A8], xmm2
    vmovss  [rsp+210h+var_1A0], xmm1
    vmovss  [rsp+210h+var_19C], xmm5
    vmovss  [rsp+210h+var_198], xmm2
    vmovss  [rbp+110h+var_190], xmm1
    vmovss  [rbp+110h+var_188], xmm2
    vmovss  [rbp+110h+var_180], xmm1
    vmovss  [rbp+110h+var_178], xmm2
    vmovss  [rbp+110h+var_170], xmm4
    vmovss  [rbp+110h+var_168], xmm2
    vmovss  [rbp+110h+var_160], xmm4
    vmovss  [rbp+110h+var_158], xmm2
    vmovss  [rbp+110h+var_150], xmm4
    vmovss  [rbp+110h+var_14C], xmm5
    vmovss  [rbp+110h+var_148], xmm2
    vmovups xmmword ptr [rsp+210h+var_1D8+8], xmm0
  }
  RB_DrawLines2D((GfxCmdBufContext *)&v35[1], 4, 1, &v36);
  memset_0(dest, 0, sizeof(dest));
  if ( avgTimesOnly )
    Com_sprintf(dest, 0x100ui64, "%5s ^0%5s", "avg", "bdgt");
  else
    Com_sprintf(dest, 0x100ui64, "%5s %5s %5s %5s ^0%5s", "total", "avg", "max", "min", "bdgt");
  v21 = strstr_0(dest, "^0");
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovss  xmm6, [rbp+110h+arg_30]
    vmovss  xmm7, [rbp+110h+arg_28]
    vaddss  xmm3, xmm7, cs:__real@3f800000
  }
  v26 = v21;
  __asm
  {
    vmovups xmmword ptr [rsp+210h+var_1D8+8], xmm0
    vaddss  xmm0, xmm6, cs:__real@3f800000
    vmovss  dword ptr [rsp+210h+var_1F0], xmm0
  }
  RB_DrawText((GfxCmdBufContext *)&v35[1], dest, font, *(float *)&_XMM3, v33, (const GfxColor)((txtColor.array[0] >> 2) | (((txtColor.array[1] >> 2) | (((HIBYTE(txtColor.packed) << 8) | (txtColor.array[2] >> 2)) << 8)) << 8)));
  if ( v26 )
    *(_WORD *)v26 = *(_WORD *)"^5";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovaps xmm3, xmm7
    vmovups xmmword ptr [rsp+210h+var_1D8+8], xmm0
    vmovss  dword ptr [rsp+210h+var_1F0], xmm6
  }
  RB_DrawText((GfxCmdBufContext *)&v35[1], dest, font, *(float *)&_XMM3, v34, txtColor);
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
GpuTimerView::DrawGrouped
==============
*/
void GpuTimerView::DrawGrouped(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  TimerTree *v13; 
  __int64 v14; 
  int v15; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned int v21; 
  GPUTimeStampNode *m_pRoot; 
  unsigned int totalTime; 
  __int64 v25; 
  const GfxColor *Color; 
  unsigned int v34; 
  unsigned int v37; 
  GPUTimerId v44; 
  unsigned int *v45; 
  const GfxColor *v49; 
  unsigned int v52; 
  GfxColor m_txtColor; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  unsigned int v113; 
  unsigned int v114; 
  __int128 v115; 
  GfxCmdBufContext v116[7]; 
  char v117; 
  void *retaddr; 
  GpuTimerView *v119; 
  unsigned int v120; 
  TimerTree *v121; 
  unsigned int packed; 

  _RAX = &retaddr;
  v121 = pTree;
  v119 = this;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  _R14 = this;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  _R15 = gfxContext;
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  v13 = pTree;
  v14 = 0i64;
  v15 = 0;
  __asm { vmovaps xmmword ptr [rax-88h], xmm9 }
  v120 = 0;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( this->m_numId )
  {
    __asm
    {
      vmovaps xmmword ptr [rax-78h], xmm8
      vmovaps xmmword ptr [rax-0A8h], xmm11
    }
    do
    {
      v17 = (unsigned int)v14;
      if ( (unsigned int)v14 >= _R14->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v14 >= _R14->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v18 = (unsigned int)_R14->m_timerId.m_data.m_buffer[v14];
      GpuTimerView::ms_drawData.currentId = v18;
      _RBX = (unsigned int)v18;
      GpuTimerView::ms_drawData.idFound = 0;
      GpuTimerView::ms_drawData.totalTime = 0;
      if ( v18 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      __asm { vmovss  xmm0, dword ptr [r14+rbx*4+560h] }
      v21 = 0;
      __asm { vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime, xmm0; WalkDrawData GpuTimerView::ms_drawData }
      if ( GpuTimerView::ms_drawData.desiredDepth )
      {
        do
          memset_0(GpuTimerView::ms_drawData.childTime[v21++], 0, sizeof(GpuTimerView::ms_drawData.childTime[v21++]));
        while ( v21 < GpuTimerView::ms_drawData.desiredDepth );
        LODWORD(v14) = v120;
      }
      m_pRoot = v13->m_pRoot;
      v115 = 0ui64;
      __asm
      {
        vmovups xmm0, [rbp+57h+var_C0]
        vmovdqa [rbp+57h+var_B0], xmm0
      }
      TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, v116, m_pRoot, _R14, 0);
      if ( GpuTimerView::ms_drawData.idFound )
        ++v15;
      totalTime = GpuTimerView::ms_drawData.totalTime;
      if ( GpuTimerView::ms_drawData.totalTime )
        goto LABEL_20;
      __asm
      {
        vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime; WalkDrawData GpuTimerView::ms_drawData
        vcomiss xmm0, xmm9
      }
      if ( GpuTimerView::ms_drawData.totalTime || GpuTimerView::ms_drawData.showInActive != LOBYTE(GpuTimerView::ms_drawData.totalTime) )
      {
LABEL_20:
        v25 = 2 * (_R14->m_historyIdx + 6i64);
        if ( v17 >= _R14->m_history[_R14->m_historyIdx].m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v17 >= *(_QWORD *)&_R14->m_txtInactive.array[8 * v25] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        __asm { vxorps  xmm0, xmm0, xmm0 }
        *(_DWORD *)(*(_QWORD *)&_R14->m_barBackColor.array[8 * v25] + 4 * v17) = totalTime;
        __asm
        {
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm11, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS; WalkDrawData GpuTimerView::ms_drawData
        }
        if ( v17 >= _R14->m_timerId.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v17 >= _R14->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        Color = R_GPU_TimerGetColor(_R14->m_timerId.m_data.m_buffer[v17]);
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barOffsetY; WalkDrawData GpuTimerView::ms_drawData
          vaddss  xmm3, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
          vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX; WalkDrawData GpuTimerView::ms_drawData
        }
        packed = Color->packed;
        v34 = 3 * GpuTimerView::ms_opacity;
        __asm
        {
          vmovups [rbp+57h+var_B0], xmm0
          vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barHeight; WalkDrawData GpuTimerView::ms_drawData
        }
        if ( v34 > 0xFF )
          LOBYTE(v34) = -1;
        HIBYTE(packed) = v34;
        __asm
        {
          vmovss  [rsp+120h+var_D8], xmm10
          vmovss  [rsp+120h+var_E0], xmm10
          vmovss  [rsp+120h+var_E8], xmm9
          vmovss  [rsp+120h+var_F0], xmm9
          vmovss  [rsp+120h+var_F8], xmm0
          vmovss  dword ptr [rsp+120h+fmt], xmm11
        }
        RB_DrawStretchPic(v116, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v93, v97, v101, v105, v109, packed, GFX_PRIM_STATS_DEBUG);
        __asm { vmovss  xmm8, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData }
        v37 = 0;
        if ( GpuTimerView::ms_drawData.desiredDepth )
        {
          do
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [r15]
              vaddss  xmm8, xmm8, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
              vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.width; WalkDrawData GpuTimerView::ms_drawData
              vaddss  xmm3, xmm8, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarGap; WalkDrawData GpuTimerView::ms_drawData
              vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
            }
            v113 = _R14->m_barBackColor.packed;
            __asm
            {
              vmovss  [rsp+120h+var_D8], xmm10
              vmovss  [rsp+120h+var_E0], xmm10
              vmovss  [rsp+120h+var_E8], xmm9
              vmovups [rbp+57h+var_B0], xmm0
              vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarHeight; WalkDrawData GpuTimerView::ms_drawData
              vmovss  [rsp+120h+var_F0], xmm9
              vmovss  [rsp+120h+var_F8], xmm0
              vmovss  dword ptr [rsp+120h+fmt], xmm1
            }
            RB_DrawStretchPic(v116, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v94, v98, v102, v106, v110, v113, GFX_PRIM_STATS_DEBUG);
            __asm { vmovss  xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX; WalkDrawData GpuTimerView::ms_drawData }
            v44 = GPU_TIMER_FRAME;
            v45 = GpuTimerView::ms_drawData.childTime[v37];
            do
            {
              if ( *v45 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, rax
                  vmulss  xmm6, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS; WalkDrawData GpuTimerView::ms_drawData
                }
                v49 = R_GPU_TimerGetColor(v44);
                __asm
                {
                  vmovups xmm0, xmmword ptr [r15]
                  vaddss  xmm3, xmm8, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barOffsetY; WalkDrawData GpuTimerView::ms_drawData
                }
                packed = v49->packed;
                __asm
                {
                  vmovups [rbp+57h+var_B0], xmm0
                  vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barHeight; WalkDrawData GpuTimerView::ms_drawData
                }
                v52 = 3 * GpuTimerView::ms_opacity;
                __asm { vmovaps xmm2, xmm7 }
                if ( v52 > 0xFF )
                  LOBYTE(v52) = -1;
                HIBYTE(packed) = v52;
                __asm
                {
                  vmovss  [rsp+120h+var_D8], xmm10
                  vmovss  [rsp+120h+var_E0], xmm10
                  vmovss  [rsp+120h+var_E8], xmm9
                  vmovss  [rsp+120h+var_F0], xmm9
                  vmovss  [rsp+120h+var_F8], xmm0
                  vmovss  dword ptr [rsp+120h+fmt], xmm6
                }
                RB_DrawStretchPic(v116, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v95, v99, v103, v107, v111, packed, GFX_PRIM_STATS_DEBUG);
                __asm { vaddss  xmm7, xmm7, xmm6 }
              }
              ++v44;
              ++v45;
            }
            while ( (unsigned int)v44 < GPU_TIMER_COUNT );
            _R14 = v119;
            ++v37;
          }
          while ( v37 < GpuTimerView::ms_drawData.desiredDepth );
          LODWORD(v14) = v120;
        }
        __asm
        {
          vaddss  xmm1, xmm11, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX; WalkDrawData GpuTimerView::ms_drawData
          vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX, xmm1; WalkDrawData GpuTimerView::ms_drawData
        }
      }
      v13 = v121;
      v14 = (unsigned int)(v14 + 1);
      v120 = v14;
    }
    while ( (unsigned int)v14 < _R14->m_numId );
    __asm
    {
      vmovaps xmm11, xmmword ptr [rsp+80h]
      vmovaps xmm8, [rsp+120h+var_78+8]
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarGap; WalkDrawData GpuTimerView::ms_drawData
    vaddss  xmm3, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
    vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.width; WalkDrawData GpuTimerView::ms_drawData
    vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
  }
  v114 = _R14->m_barBackColor.packed;
  __asm
  {
    vmovss  [rsp+120h+var_D8], xmm10
    vmovss  [rsp+120h+var_E0], xmm10
    vmovss  [rsp+120h+var_E8], xmm9
    vmovups [rbp+57h+var_B0], xmm0
    vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarHeight; WalkDrawData GpuTimerView::ms_drawData
    vmovss  [rsp+120h+var_F0], xmm9
    vmovss  [rsp+120h+var_F8], xmm0
    vmovss  dword ptr [rsp+120h+fmt], xmm1
  }
  RB_DrawStretchPic(v116, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v96, v100, v104, v108, v112, v114, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rbp+57h+var_B0], xmm0
  }
  GpuTimerView::DrawTimingData(_R14, v116, -1, &v120, (float *)&v119);
  m_txtColor = _R14->m_txtColor;
  __asm { vmovaps xmm9, [rsp+120h+var_88+8] }
  if ( v15 || !GpuTimerView::ms_drawData.showInActive )
  {
    __asm { vmovss  xmm6, dword ptr [rbp+57h+arg_0] }
    _RDI = (unsigned int)GpuTimerView::ms_drawData.currentId;
    __asm
    {
      vaddss  xmm1, xmm6, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime; WalkDrawData GpuTimerView::ms_drawData
      vmulss  xmm7, xmm1, cs:__real@3f000000
    }
    if ( (unsigned int)GpuTimerView::ms_drawData.currentId >= GPU_TIMER_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    __asm { vmovss  dword ptr [r14+rdi*4+560h], xmm7 }
    if ( _R14->m_timerBudgetTotalUS )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vcomiss xmm6, xmm0
      }
      m_txtColor = _R14->m_txtOverBdgtColor;
    }
  }
  else
  {
    m_txtColor = _R14->m_txtInactive;
  }
  __asm
  {
    vmovss  xmm6, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
    vaddss  xmm1, xmm6, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vmovss  xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
    vmovups xmm0, xmmword ptr [r15]
  }
  GpuTimerView::ms_drawData.timerLabelDrawn = 1;
  __asm
  {
    vaddss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm10, xmm7
    vmovss  dword ptr [rsp+120h+fmt], xmm2
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_DrawText(v116, _R14->m_viewName, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtd, (const GfxColor)((m_txtColor.array[0] >> 2) | (((m_txtColor.array[1] >> 2) | (((HIBYTE(m_txtColor.packed) << 8) | (m_txtColor.array[2] >> 2)) << 8)) << 8)));
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm1, xmm6, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vmovaps xmm3, xmm7
    vmovss  dword ptr [rsp+120h+fmt], xmm1
    vmovups [rbp+57h+var_B0], xmm0
  }
  RB_DrawText(v116, _R14->m_viewName, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmte, m_txtColor);
  __asm
  {
    vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
    vaddss  xmm1, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
  }
  _R11 = &v117;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-30h]
    vmovaps xmm7, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-70h]
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY, xmm1; WalkDrawData GpuTimerView::ms_drawData
  }
}

/*
==============
GpuTimerView::DrawInPlace
==============
*/
void GpuTimerView::DrawInPlace(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  __int64 v19; 
  unsigned __int64 v23; 
  unsigned int v26; 
  GPUTimeStampNode *m_pRoot; 
  unsigned int totalTime; 
  __int64 v29; 
  GfxColor m_txtColor; 
  bool v36; 
  bool v37; 
  const char *Name; 
  const char *v46; 
  GfxColor m_txtInactive; 
  const char *v63; 
  const char *v68; 
  GfxColor m_txtOverBdgtColor; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  unsigned int packed; 
  GfxCmdBufContext v108; 
  char v113; 
  void *retaddr; 
  int v115; 
  unsigned int v116; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _R15 = gfxContext;
  __asm { vmovaps xmmword ptr [rax-78h], xmm9 }
  _RSI = this;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovss  xmm12, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
    vaddss  xmm1, xmm12, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
  }
  v19 = 0i64;
  __asm
  {
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY, xmm1; WalkDrawData GpuTimerView::ms_drawData
    vmovaps [rsp+128h+var_B8], xmm13
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm10, xmm10, xmm10
  }
  if ( this->m_numId )
  {
    __asm
    {
      vmovaps xmmword ptr [rax-98h], xmm11
      vmovss  xmm11, cs:__real@3f000000
      vmovaps xmmword ptr [rax-58h], xmm7
      vmovaps xmmword ptr [rax-68h], xmm8
    }
    do
    {
      if ( (unsigned int)v19 >= _RSI->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v19 >= _RSI->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v23 = (unsigned int)_RSI->m_timerId.m_data.m_buffer[v19];
      GpuTimerView::ms_drawData.currentId = v23;
      _RBX = (unsigned int)v23;
      GpuTimerView::ms_drawData.idFound = 0;
      GpuTimerView::ms_drawData.totalTime = 0;
      if ( v23 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      __asm { vmovss  xmm0, dword ptr [rsi+rbx*4+560h] }
      v26 = 0;
      __asm { vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime, xmm0; WalkDrawData GpuTimerView::ms_drawData }
      if ( GpuTimerView::ms_drawData.desiredDepth )
      {
        do
          memset_0(GpuTimerView::ms_drawData.childTime[v26++], 0, sizeof(GpuTimerView::ms_drawData.childTime[v26++]));
        while ( v26 < GpuTimerView::ms_drawData.desiredDepth );
      }
      __asm { vmovups xmm0, xmmword ptr [r15] }
      m_pRoot = pTree->m_pRoot;
      __asm { vmovups [rsp+128h+var_C8], xmm0 }
      TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdDrawTime, &v108, m_pRoot, _RSI, 0);
      totalTime = GpuTimerView::ms_drawData.totalTime;
      v29 = 2 * (_RSI->m_historyIdx + 6i64);
      if ( (unsigned int)v19 >= _RSI->m_history[_RSI->m_historyIdx].m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned __int64)(unsigned int)v19 >= *(_QWORD *)&_RSI->m_txtInactive.array[8 * v29] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      *(_DWORD *)(*(_QWORD *)&_RSI->m_barBackColor.array[8 * v29] + 4 * v19) = totalTime;
      if ( GpuTimerView::ms_drawData.timerLabelDrawn )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vmovups [rsp+128h+var_C8], xmm0
        }
        GpuTimerView::DrawTimingData(_RSI, &v108, v19, &v116, (float *)&v115);
        __asm { vmovss  xmm8, [rsp+128h+arg_0] }
        _RBX = (unsigned int)GpuTimerView::ms_drawData.currentId;
        __asm
        {
          vaddss  xmm1, xmm8, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime; WalkDrawData GpuTimerView::ms_drawData
          vmulss  xmm6, xmm1, xmm11
        }
        if ( (unsigned int)GpuTimerView::ms_drawData.currentId >= GPU_TIMER_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        __asm { vmovss  dword ptr [rsi+rbx*4+560h], xmm6 }
        m_txtColor = _RSI->m_txtColor;
        if ( (unsigned int)v19 >= _RSI->m_timerBudget.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( (unsigned int)v19 >= _RSI->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        if ( _RSI->m_timerBudget.m_data.m_buffer[v19] )
        {
          v36 = (unsigned int)v19 <= _RSI->m_timerBudget.m_data.m_size;
          if ( (unsigned int)v19 >= _RSI->m_timerBudget.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            v36 = (unsigned int)v19 <= _RSI->m_timerBudget.m_data.m_size;
            if ( (unsigned int)v19 >= _RSI->m_timerBudget.m_data.m_size )
            {
              v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size");
              v36 = !v37;
              if ( v37 )
                __debugbreak();
            }
          }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rcx
            vcomiss xmm8, xmm0
          }
          if ( !v36 )
            m_txtColor = _RSI->m_txtOverBdgtColor;
        }
        __asm { vmovss  xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData }
        Name = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
        __asm
        {
          vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.idNameIndent; WalkDrawData GpuTimerView::ms_drawData
          vaddss  xmm6, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
          vmovups xmm0, xmmword ptr [r15]
          vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
        }
        v46 = Name;
        __asm
        {
          vmovups [rsp+128h+var_C8], xmm0
          vaddss  xmm0, xmm2, xmm9
          vaddss  xmm3, xmm6, xmm9
          vmovss  dword ptr [rsp+128h+fmt], xmm0
        }
        RB_DrawText(&v108, Name, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmt, (const GfxColor)((m_txtColor.array[0] >> 2) | (((m_txtColor.array[1] >> 2) | (((HIBYTE(m_txtColor.packed) << 8) | (m_txtColor.array[2] >> 2)) << 8)) << 8)));
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
          vmovaps xmm3, xmm6
          vmovss  dword ptr [rsp+128h+fmt], xmm2
          vmovups [rsp+128h+var_C8], xmm0
        }
        RB_DrawText(&v108, v46, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmta, m_txtColor);
        GpuTimerView::ms_drawData.timerLabelDrawn = 0;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vmulss  xmm2, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
          vaddss  xmm2, xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
          vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY, xmm2; WalkDrawData GpuTimerView::ms_drawData
          vaddss  xmm10, xmm10, xmm8
        }
      }
      else if ( !GpuTimerView::ms_drawData.idFound && GpuTimerView::ms_drawData.showInActive )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarGap; WalkDrawData GpuTimerView::ms_drawData
          vaddss  xmm3, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
          vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.width; WalkDrawData GpuTimerView::ms_drawData
          vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
        }
        packed = _RSI->m_barBackColor.packed;
        __asm
        {
          vmovss  [rsp+128h+var_E0], xmm9
          vmovss  [rsp+128h+var_E8], xmm9
          vmovss  [rsp+128h+var_F0], xmm13
          vmovups [rsp+128h+var_C8], xmm0
          vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarHeight; WalkDrawData GpuTimerView::ms_drawData
          vmovss  [rsp+128h+var_F8], xmm13
          vmovss  dword ptr [rsp+128h+var_100], xmm0
          vmovss  dword ptr [rsp+128h+fmt], xmm1
        }
        RB_DrawStretchPic(&v108, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v102, v103, v104, v105, v106, packed, GFX_PRIM_STATS_DEBUG);
        m_txtInactive = _RSI->m_txtInactive;
        __asm { vmovss  xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData }
        v63 = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
        __asm
        {
          vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.idNameIndent; WalkDrawData GpuTimerView::ms_drawData
          vaddss  xmm6, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
          vmovups xmm0, xmmword ptr [r15]
          vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
        }
        v68 = v63;
        __asm
        {
          vmovups [rsp+128h+var_C8], xmm0
          vaddss  xmm0, xmm2, xmm9
          vaddss  xmm3, xmm6, xmm9
          vmovss  dword ptr [rsp+128h+fmt], xmm0
        }
        RB_DrawText(&v108, v63, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtc, (const GfxColor)((m_txtInactive.array[0] >> 2) | (((m_txtInactive.array[1] >> 2) | (((HIBYTE(m_txtInactive.packed) << 8) | (m_txtInactive.array[2] >> 2)) << 8)) << 8)));
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
          vmovaps xmm3, xmm6
          vmovss  dword ptr [rsp+128h+fmt], xmm2
          vmovups [rsp+128h+var_C8], xmm0
        }
        RB_DrawText(&v108, v68, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtd, m_txtInactive);
        __asm
        {
          vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
          vaddss  xmm1, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
          vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY, xmm1; WalkDrawData GpuTimerView::ms_drawData
        }
      }
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < _RSI->m_numId );
    __asm
    {
      vmovaps xmm11, [rsp+128h+var_98]
      vmovaps xmm8, [rsp+128h+var_68]
      vmovaps xmm7, [rsp+128h+var_58]
    }
  }
  m_txtOverBdgtColor = _RSI->m_txtColor;
  __asm { vmovaps xmm13, [rsp+128h+var_B8] }
  if ( _RSI->m_timerBudgetTotalUS )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vcomiss xmm10, xmm0
    }
    m_txtOverBdgtColor = _RSI->m_txtOverBdgtColor;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm12, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vmovss  xmm6, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
    vmovups [rsp+128h+var_C8], xmm0
    vaddss  xmm0, xmm2, xmm9
    vaddss  xmm3, xmm9, xmm6
    vmovss  dword ptr [rsp+128h+fmt], xmm0
  }
  RB_DrawText(&v108, _RSI->m_viewName, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmte, (const GfxColor)((m_txtOverBdgtColor.array[0] >> 2) | (((m_txtOverBdgtColor.array[1] >> 2) | (((HIBYTE(m_txtOverBdgtColor.packed) << 8) | (m_txtOverBdgtColor.array[2] >> 2)) << 8)) << 8)));
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vaddss  xmm2, xmm12, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vmovaps xmm3, xmm6
    vmovss  dword ptr [rsp+128h+fmt], xmm2
    vmovups [rsp+128h+var_C8], xmm0
  }
  RB_DrawText(&v108, _RSI->m_viewName, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtf, m_txtOverBdgtColor);
  _R11 = &v113;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-58h]
    vmovaps xmm10, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-88h]
  }
}

/*
==============
GpuTimerView::DrawJustified
==============
*/
void GpuTimerView::DrawJustified(GpuTimerView *this, GfxCmdBufContext *gfxContext, TimerTree *pTree)
{
  TimerTree *v14; 
  __int64 v20; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned int v28; 
  GPUTimeStampNode *m_pRoot; 
  GfxColor m_txtInactive; 
  const char *v39; 
  const char *v44; 
  unsigned int totalTime; 
  __int64 v52; 
  const GfxColor *Color; 
  unsigned int v61; 
  unsigned int v64; 
  GPUTimerId v71; 
  unsigned int *v72; 
  const GfxColor *v76; 
  unsigned int v79; 
  GfxColor m_txtColor; 
  bool v87; 
  bool v88; 
  const char *Name; 
  const char *v97; 
  GfxColor m_txtOverBdgtColor; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  unsigned int packed; 
  unsigned int v154; 
  unsigned int v155; 
  __int128 v156; 
  GfxCmdBufContext v157[3]; 
  char v159; 
  void *retaddr; 
  unsigned int v161; 
  unsigned int v162; 
  unsigned int v163; 
  int v165; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  v14 = pTree;
  __asm { vmovaps xmmword ptr [rax-88h], xmm9 }
  _R12 = gfxContext;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  _RSI = this;
  __asm
  {
    vmovss  xmm12, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
    vaddss  xmm1, xmm12, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
    vmovaps xmmword ptr [rax-0C8h], xmm13
  }
  v20 = 0i64;
  __asm
  {
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY, xmm1; WalkDrawData GpuTimerView::ms_drawData
    vmovaps xmmword ptr [rax-78h], xmm8
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm13, xmm13, xmm13
  }
  v163 = 0;
  if ( this->m_numId )
  {
    __asm
    {
      vmovaps xmmword ptr [rax-68h], xmm7
      vmovaps xmmword ptr [rax-98h], xmm10
      vmovaps xmmword ptr [rax-0D8h], xmm14
      vmovss  xmm14, cs:__real@3f000000
      vmovaps [rsp+160h+var_A8+8], xmm11
    }
    do
    {
      v24 = (unsigned int)v20;
      if ( (unsigned int)v20 >= _RSI->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v20 >= _RSI->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v25 = (unsigned int)_RSI->m_timerId.m_data.m_buffer[v20];
      GpuTimerView::ms_drawData.currentId = v25;
      _RBX = (unsigned int)v25;
      GpuTimerView::ms_drawData.idFound = 0;
      GpuTimerView::ms_drawData.totalTime = 0;
      if ( v25 >= 0x81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      __asm { vmovss  xmm0, dword ptr [rsi+rbx*4+560h] }
      v28 = 0;
      __asm { vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime, xmm0; WalkDrawData GpuTimerView::ms_drawData }
      if ( GpuTimerView::ms_drawData.desiredDepth )
      {
        do
          memset_0(GpuTimerView::ms_drawData.childTime[v28++], 0, sizeof(GpuTimerView::ms_drawData.childTime[v28++]));
        while ( v28 < GpuTimerView::ms_drawData.desiredDepth );
      }
      m_pRoot = v14->m_pRoot;
      v156 = 0ui64;
      __asm
      {
        vmovups xmm0, [rsp+160h+var_F8+8]
        vmovdqa [rbp+60h+var_E0], xmm0
      }
      TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, v157, m_pRoot, _RSI, 0);
      if ( GpuTimerView::ms_drawData.totalTime )
        goto LABEL_17;
      __asm
      {
        vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime; WalkDrawData GpuTimerView::ms_drawData
        vcomiss xmm0, xmm8
      }
      if ( GpuTimerView::ms_drawData.totalTime || GpuTimerView::ms_drawData.showInActive )
      {
LABEL_17:
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
          vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarGap; WalkDrawData GpuTimerView::ms_drawData
          vaddss  xmm3, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
          vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.width; WalkDrawData GpuTimerView::ms_drawData
          vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
        }
        packed = _RSI->m_barBackColor.packed;
        __asm
        {
          vmovss  [rsp+160h+var_118], xmm9
          vmovss  [rsp+160h+var_120], xmm9
          vmovss  [rsp+160h+var_128], xmm8
          vmovups [rbp+60h+var_E0], xmm0
          vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarHeight; WalkDrawData GpuTimerView::ms_drawData
          vmovss  [rsp+160h+var_130], xmm8
          vmovss  [rsp+160h+var_138], xmm0
          vmovss  dword ptr [rsp+160h+fmt], xmm1
        }
        RB_DrawStretchPic(v157, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v133, v137, v141, v145, v149, packed, GFX_PRIM_STATS_DEBUG);
        if ( GpuTimerView::ms_drawData.idFound )
        {
          totalTime = GpuTimerView::ms_drawData.totalTime;
          v52 = 2 * (_RSI->m_historyIdx + 6i64);
          if ( (unsigned int)v20 >= _RSI->m_history[_RSI->m_historyIdx].m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( (unsigned __int64)(unsigned int)v20 >= *(_QWORD *)&_RSI->m_txtInactive.array[8 * v52] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          __asm { vxorps  xmm0, xmm0, xmm0 }
          *(_DWORD *)(*(_QWORD *)&_RSI->m_barBackColor.array[8 * v52] + 4 * v20) = totalTime;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm6, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS; WalkDrawData GpuTimerView::ms_drawData
          }
          if ( (unsigned int)v20 >= _RSI->m_timerId.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( (unsigned int)v20 >= _RSI->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          Color = R_GPU_TimerGetColor(_RSI->m_timerId.m_data.m_buffer[v20]);
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barOffsetY; WalkDrawData GpuTimerView::ms_drawData
            vaddss  xmm3, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
            vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX; WalkDrawData GpuTimerView::ms_drawData
          }
          v161 = Color->packed;
          v61 = 3 * GpuTimerView::ms_opacity;
          __asm
          {
            vmovups [rbp+60h+var_E0], xmm0
            vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barHeight; WalkDrawData GpuTimerView::ms_drawData
          }
          if ( v61 > 0xFF )
            LOBYTE(v61) = -1;
          HIBYTE(v161) = v61;
          __asm
          {
            vmovss  [rsp+160h+var_118], xmm9
            vmovss  [rsp+160h+var_120], xmm9
            vmovss  [rsp+160h+var_128], xmm8
            vmovss  [rsp+160h+var_130], xmm8
            vmovss  [rsp+160h+var_138], xmm0
            vmovss  dword ptr [rsp+160h+fmt], xmm6
          }
          RB_DrawStretchPic(v157, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v134, v138, v142, v146, v150, v161, GFX_PRIM_STATS_DEBUG);
          __asm { vmovss  xmm10, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData }
          v64 = 0;
          if ( GpuTimerView::ms_drawData.desiredDepth )
          {
            do
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [r12]
                vaddss  xmm10, xmm10, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
                vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.width; WalkDrawData GpuTimerView::ms_drawData
                vaddss  xmm3, xmm10, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarGap; WalkDrawData GpuTimerView::ms_drawData
                vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
              }
              v154 = _RSI->m_barBackColor.packed;
              __asm
              {
                vmovss  [rsp+160h+var_118], xmm9
                vmovss  [rsp+160h+var_120], xmm9
                vmovss  [rsp+160h+var_128], xmm8
                vmovups [rbp+60h+var_E0], xmm0
                vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarHeight; WalkDrawData GpuTimerView::ms_drawData
                vmovss  [rsp+160h+var_130], xmm8
                vmovss  [rsp+160h+var_138], xmm0
                vmovss  dword ptr [rsp+160h+fmt], xmm1
              }
              RB_DrawStretchPic(v157, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v135, v139, v143, v147, v151, v154, GFX_PRIM_STATS_DEBUG);
              __asm { vmovss  xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX; WalkDrawData GpuTimerView::ms_drawData }
              v71 = GPU_TIMER_FRAME;
              v72 = GpuTimerView::ms_drawData.childTime[v64];
              do
              {
                if ( *v72 )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, rax
                    vmulss  xmm6, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS; WalkDrawData GpuTimerView::ms_drawData
                  }
                  v76 = R_GPU_TimerGetColor(v71);
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r12]
                    vaddss  xmm3, xmm10, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barOffsetY; WalkDrawData GpuTimerView::ms_drawData
                  }
                  v162 = v76->packed;
                  __asm
                  {
                    vmovups [rbp+60h+var_E0], xmm0
                    vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barHeight; WalkDrawData GpuTimerView::ms_drawData
                  }
                  v79 = 3 * GpuTimerView::ms_opacity;
                  __asm { vmovaps xmm2, xmm7 }
                  if ( v79 > 0xFF )
                    LOBYTE(v79) = -1;
                  HIBYTE(v162) = v79;
                  __asm
                  {
                    vmovss  [rsp+160h+var_118], xmm9
                    vmovss  [rsp+160h+var_120], xmm9
                    vmovss  [rsp+160h+var_128], xmm8
                    vmovss  [rsp+160h+var_130], xmm8
                    vmovss  [rsp+160h+var_138], xmm0
                    vmovss  dword ptr [rsp+160h+fmt], xmm6
                  }
                  RB_DrawStretchPic(v157, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v136, v140, v144, v148, v152, v162, GFX_PRIM_STATS_DEBUG);
                  __asm { vaddss  xmm7, xmm7, xmm6 }
                }
                ++v71;
                ++v72;
              }
              while ( (unsigned int)v71 < GPU_TIMER_COUNT );
              ++v64;
            }
            while ( v64 < GpuTimerView::ms_drawData.desiredDepth );
            LODWORD(v20) = v163;
            v24 = v163;
          }
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rbp+60h+var_E0], xmm0
          }
          GpuTimerView::DrawTimingData(_RSI, v157, v20, &v155, (float *)&v165);
          __asm { vmovss  xmm11, [rbp+60h+arg_18] }
          _RBX = (unsigned int)GpuTimerView::ms_drawData.currentId;
          __asm
          {
            vaddss  xmm1, xmm11, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime; WalkDrawData GpuTimerView::ms_drawData
            vmulss  xmm6, xmm1, xmm14
          }
          if ( (unsigned int)GpuTimerView::ms_drawData.currentId >= GPU_TIMER_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          __asm { vmovss  dword ptr [rsi+rbx*4+560h], xmm6 }
          m_txtColor = _RSI->m_txtColor;
          if ( v24 >= _RSI->m_timerBudget.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v24 >= _RSI->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          if ( _RSI->m_timerBudget.m_data.m_buffer[v24] )
          {
            v87 = v24 <= _RSI->m_timerBudget.m_data.m_size;
            if ( v24 >= _RSI->m_timerBudget.m_data.m_size )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              v87 = v24 <= _RSI->m_timerBudget.m_data.m_size;
              if ( v24 >= _RSI->m_timerBudget.m_data.m_size )
              {
                v88 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size");
                v87 = !v88;
                if ( v88 )
                  __debugbreak();
              }
            }
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rcx
              vcomiss xmm11, xmm0
            }
            if ( !v87 )
              m_txtColor = _RSI->m_txtOverBdgtColor;
          }
          __asm { vmovss  xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData }
          Name = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
          __asm
          {
            vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.idNameIndent; WalkDrawData GpuTimerView::ms_drawData
            vaddss  xmm6, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
            vmovups xmm0, xmmword ptr [r12]
            vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
          }
          v97 = Name;
          __asm
          {
            vmovups [rbp+60h+var_E0], xmm0
            vaddss  xmm0, xmm2, xmm9
            vaddss  xmm3, xmm6, xmm9
            vmovss  dword ptr [rsp+160h+fmt], xmm0
          }
          RB_DrawText(v157, Name, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtf, (const GfxColor)((m_txtColor.array[0] >> 2) | (((m_txtColor.array[1] >> 2) | (((HIBYTE(m_txtColor.packed) << 8) | (m_txtColor.array[2] >> 2)) << 8)) << 8)));
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
            vmovaps xmm3, xmm6
            vmovss  dword ptr [rsp+160h+fmt], xmm2
            vmovups [rbp+60h+var_E0], xmm0
          }
          RB_DrawText(v157, v97, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtg, m_txtColor);
          __asm
          {
            vaddss  xmm1, xmm10, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
            vaddss  xmm13, xmm13, xmm11
          }
        }
        else
        {
          m_txtInactive = _RSI->m_txtInactive;
          __asm { vmovss  xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData }
          v39 = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
          __asm
          {
            vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.idNameIndent; WalkDrawData GpuTimerView::ms_drawData
            vaddss  xmm6, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
            vmovups xmm0, xmmword ptr [r12]
            vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
          }
          v44 = v39;
          __asm
          {
            vmovups [rbp+60h+var_E0], xmm0
            vaddss  xmm0, xmm2, xmm9
            vaddss  xmm3, xmm6, xmm9
            vmovss  dword ptr [rsp+160h+fmt], xmm0
          }
          RB_DrawText(v157, v39, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmta, (const GfxColor)((m_txtInactive.array[0] >> 2) | (((m_txtInactive.array[1] >> 2) | (((HIBYTE(m_txtInactive.packed) << 8) | (m_txtInactive.array[2] >> 2)) << 8)) << 8)));
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
            vmovaps xmm3, xmm6
            vmovss  dword ptr [rsp+160h+fmt], xmm2
            vmovups [rbp+60h+var_E0], xmm0
          }
          RB_DrawText(v157, v44, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtb, m_txtInactive);
          __asm
          {
            vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
            vaddss  xmm1, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
          }
        }
        v14 = pTree;
        __asm { vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY, xmm1; WalkDrawData GpuTimerView::ms_drawData }
      }
      v20 = (unsigned int)(v20 + 1);
      v163 = v20;
    }
    while ( (unsigned int)v20 < _RSI->m_numId );
    __asm
    {
      vmovaps xmm14, xmmword ptr [rsp+90h]
      vmovaps xmm11, [rsp+160h+var_A8+8]
      vmovaps xmm10, xmmword ptr [rsp+160h+var_98+8]
      vmovaps xmm7, xmmword ptr [rsp+160h+var_68+8]
    }
  }
  m_txtOverBdgtColor = _RSI->m_txtColor;
  __asm { vmovaps xmm8, [rsp+160h+var_78+8] }
  if ( _RSI->m_timerBudgetTotalUS )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vcomiss xmm13, xmm0
    }
    m_txtOverBdgtColor = _RSI->m_txtOverBdgtColor;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vaddss  xmm2, xmm12, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vmovss  xmm6, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
    vmovups [rbp+60h+var_E0], xmm0
    vaddss  xmm0, xmm2, xmm9
    vaddss  xmm3, xmm9, xmm6
    vmovss  dword ptr [rsp+160h+fmt], xmm0
  }
  RB_DrawText(v157, _RSI->m_viewName, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmth, (const GfxColor)((m_txtOverBdgtColor.array[0] >> 2) | (((m_txtOverBdgtColor.array[1] >> 2) | (((HIBYTE(m_txtOverBdgtColor.packed) << 8) | (m_txtOverBdgtColor.array[2] >> 2)) << 8)) << 8)));
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vaddss  xmm2, xmm12, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vmovaps xmm3, xmm6
    vmovss  dword ptr [rsp+160h+fmt], xmm2
    vmovups [rbp+60h+var_E0], xmm0
  }
  RB_DrawText(v157, _RSI->m_viewName, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmti, m_txtOverBdgtColor);
  _R11 = &v159;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-90h]
    vmovaps xmm13, xmmword ptr [r11-0A0h]
  }
}

/*
==============
GpuTimerView::DrawLabel
==============
*/

void __fastcall GpuTimerView::DrawLabel(GpuTimerView *this, GfxCmdBufContext *gfxContext, const char *pName, double y, GfxColor txtColor, bool indentText)
{
  float v22; 
  float v23; 
  GfxCmdBufContext v24; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RSI = gfxContext;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm3
  }
  if ( indentText )
  {
    __asm
    {
      vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.idNameIndent; WalkDrawData GpuTimerView::ms_drawData
      vaddss  xmm6, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
    }
  }
  else
  {
    __asm { vmovss  xmm6, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData }
  }
  __asm
  {
    vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vmovups xmm0, xmmword ptr [rsi]
    vaddss  xmm4, xmm2, cs:__real@3f800000
    vaddss  xmm3, xmm6, cs:__real@3f800000
    vmovss  [rsp+68h+var_48], xmm4
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_DrawText(&v24, pName, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, v22, (const GfxColor)((txtColor.array[0] >> 2) | (((txtColor.array[1] >> 2) | (((HIBYTE(txtColor.packed) << 8) | (txtColor.array[2] >> 2)) << 8)) << 8)));
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vaddss  xmm2, xmm7, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vmovaps xmm3, xmm6
    vmovss  [rsp+68h+var_48], xmm2
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_DrawText(&v24, pName, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, v23, txtColor);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
GpuTimerView::DrawTimerBar
==============
*/

void __fastcall GpuTimerView::DrawTimerBar(GpuTimerView *this, GfxCmdBufContext *gfxContext, float x, double y, float width, GfxColor barColor)
{
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  GfxCmdBufContext v19; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vaddss  xmm3, xmm3, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barOffsetY; WalkDrawData GpuTimerView::ms_drawData
    vxorps  xmm1, xmm1, xmm1
    vmovups xmmword ptr [rsp+78h+var_18.source], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  [rsp+78h+var_38], xmm0
    vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barHeight; WalkDrawData GpuTimerView::ms_drawData
    vmovss  [rsp+78h+var_40], xmm1
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  xmm1, [rsp+78h+arg_20]
    vmovss  [rsp+78h+var_50], xmm0
    vmovss  [rsp+78h+var_58], xmm1
  }
  RB_DrawStretchPic(&v19, rgp.whiteMaterial, x, *(float *)&_XMM3, v13, v14, v15, v16, v17, v18, barColor.packed, GFX_PRIM_STATS_DEBUG);
}

/*
==============
GpuTimerView::DrawTimingData
==============
*/
void GpuTimerView::DrawTimingData(GpuTimerView *this, GfxCmdBufContext *gfxContext, int currentIdIndex, unsigned int *pOptOutTotalUs, float *pOptOutAvgUs)
{
  int v11; 
  char v14; 
  unsigned int v24; 
  char *v26; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  float fmtc; 
  float fmtd; 
  float *pOutAvgUs; 
  float *pOutAvgUsa; 
  unsigned int pOutAvgUsb; 
  GfxColor pOutAvgUsc; 
  double v66; 
  double v67; 
  double v68; 
  float v69; 
  unsigned int pOutMinUs; 
  unsigned int pOutMaxUs; 
  unsigned int pOutMaxUs_4; 
  GfxCmdBufContext pOutMaxUs_8; 
  char dest[256]; 
  void *retaddr; 

  _R11 = &retaddr;
  v11 = -1;
  __asm { vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY; WalkDrawData GpuTimerView::ms_drawData }
  if ( this->m_dispType != GROUPED )
    v11 = currentIdIndex;
  v14 = 0;
  _R12 = pOptOutAvgUs;
  _R13 = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-78h], xmm8
    vmovaps xmmword ptr [r11-88h], xmm9
    vmovaps xmmword ptr [r11-98h], xmm10
    vaddss  xmm10, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
    vmovss  xmm9, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barStartX; WalkDrawData GpuTimerView::ms_drawData
    vmovss  xmm8, cs:__real@3a83126f
    vxorps  xmm6, xmm6, xmm6
  }
  if ( v11 == -1 )
  {
    if ( !this->m_timerBudgetTotalUS )
      goto LABEL_21;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    v14 = 1;
    goto LABEL_20;
  }
  if ( v11 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  if ( v11 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
    __debugbreak();
  if ( this->m_timerBudget.m_data.m_buffer[v11] )
  {
    v14 = 1;
    if ( v11 >= this->m_timerBudget.m_data.m_size )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v11 >= this->m_timerBudget.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
    }
LABEL_20:
    __asm { vmulss  xmm6, xmm0, xmm8 }
  }
LABEL_21:
  __asm { vmovaps [rsp+200h+var_68+8], xmm7 }
  GpuTimerView::CalculateViewHistoryMinMaxAvg(this, v11, &pOutMaxUs_4, &pOutMinUs, &pOutMaxUs, &v69);
  memset_0(dest, 0, sizeof(dest));
  v24 = pOutMaxUs_4;
  __asm { vmovss  xmm7, [rsp+200h+var_1C0] }
  v26 = NULL;
  if ( !GpuTimerView::ms_avgTimesOnly )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm8
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vcvtss2sd xmm5, xmm1, xmm1
      vmulss  xmm1, xmm0, xmm8
      vcvtss2sd xmm4, xmm1, xmm1
      vmulss  xmm0, xmm7, xmm8
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r14
      vcvtss2sd xmm2, xmm0, xmm0
      vmulss  xmm0, xmm1, xmm8
      vcvtss2sd xmm3, xmm0, xmm0
      vmovq   r9, xmm3
    }
    if ( !v14 )
    {
      __asm
      {
        vmovsd  [rsp+200h+var_1D0], xmm5
        vmovsd  [rsp+200h+pOutAvgUs], xmm4
        vmovsd  [rsp+200h+fmt], xmm2
      }
      Com_sprintf(dest, 0x100ui64, "%5.2f %5.2f %5.2f %5.2f %5s", *(double *)&_XMM3, *(double *)&fmta, *(double *)&pOutAvgUsa, v67, " ");
      goto LABEL_29;
    }
    __asm
    {
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  qword ptr [rsp+200h+var_1C8], xmm6
      vmovsd  [rsp+200h+var_1D0], xmm5
      vmovsd  [rsp+200h+pOutAvgUs], xmm4
      vmovsd  [rsp+200h+fmt], xmm2
    }
    Com_sprintf(dest, 0x100ui64, "%5.2f %5.2f %5.2f %5.2f ^0%5.2f", *(double *)&_XMM3, *(double *)&fmt, *(double *)&pOutAvgUs, v66, v68);
    goto LABEL_27;
  }
  __asm
  {
    vmulss  xmm0, xmm7, xmm8
    vcvtss2sd xmm3, xmm0, xmm0
    vmovq   r9, xmm3
  }
  if ( v14 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+200h+fmt], xmm1
    }
    Com_sprintf(dest, 0x100ui64, "%5.2f ^0%5.2f", *(double *)&_XMM3, *(double *)&fmtb);
LABEL_27:
    v26 = strstr_0(dest, "^0");
    goto LABEL_29;
  }
  Com_sprintf(dest, 0x100ui64, "%5.2f %5s", *(double *)&_XMM3, " ");
LABEL_29:
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vaddss  xmm2, xmm10, cs:__real@3f800000
    vaddss  xmm3, xmm9, cs:__real@3f800000
  }
  pOutAvgUsb = ((unsigned __int8)this->m_txtColor.packed >> 2) | ((((unsigned __int8)BYTE1(this->m_txtColor.packed) >> 2) | (((HIBYTE(this->m_txtColor.packed) << 8) | ((unsigned __int8)BYTE2(this->m_txtColor.packed) >> 2)) << 8)) << 8);
  __asm
  {
    vmovss  dword ptr [rsp+200h+fmt], xmm2
    vmovups xmmword ptr [rsp+200h+pOutMaxUs+8], xmm0
  }
  RB_DrawText(&pOutMaxUs_8, dest, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtc, (const GfxColor)pOutAvgUsb);
  __asm
  {
    vmovaps xmm8, [rsp+200h+var_78+8]
    vmovaps xmm6, xmmword ptr [rsp+200h+var_58+8]
  }
  if ( v26 )
    *(_WORD *)v26 = *(_WORD *)"^5";
  __asm { vmovups xmm0, xmmword ptr [r13+0] }
  pOutAvgUsc = this->m_txtColor;
  __asm
  {
    vmovaps xmm3, xmm9
    vmovss  dword ptr [rsp+200h+fmt], xmm10
    vmovups xmmword ptr [rsp+200h+pOutMaxUs+8], xmm0
  }
  RB_DrawText(&pOutMaxUs_8, dest, GpuTimerView::ms_drawData.font, *(float *)&_XMM3, fmtd, pOutAvgUsc);
  __asm
  {
    vmovaps xmm10, [rsp+200h+var_98+8]
    vmovaps xmm9, [rsp+200h+var_88+8]
  }
  if ( pOptOutAvgUs )
    __asm { vmovss  dword ptr [r12], xmm7 }
  __asm { vmovaps xmm7, [rsp+200h+var_68+8] }
  if ( pOptOutTotalUs )
    *pOptOutTotalUs = v24;
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

void __fastcall GpuTimerView::InitViews(GfxFont *font, __int64 a2, __int64 a3, double _XMM3_8)
{
  if ( !GpuTimerView::ms_viewsInit )
  {
    ntl::static_shared_allocator<SharedTimerHistoryAlloc_t,ntl::fixed_arena_allocator<135696,0>>::mp_allocator = &GpuTimerView::ms_histAlloc;
    if ( GpuTimerView::ms_histAlloc.mp_top_down < GpuTimerView::ms_histAlloc.mp_bottom_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\arena_allocator.h", 92, ASSERT_TYPE_ASSERT, "( mp_top_down >= mp_bottom_up )", (const char *)&queryFormat, "mp_top_down >= mp_bottom_up") )
      __debugbreak();
    Com_Printf(8, "GpuTimerView mem reserved: %u\n", (unsigned int)(LODWORD(GpuTimerView::ms_histAlloc.mp_top_down) - LODWORD(GpuTimerView::ms_histAlloc.mp_bottom_up)));
    GpuTimerView::ms_viewsInit = 1;
    GpuTimerView::ms_drawData.font = font;
    R_TextHeight(font);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.fontHeight, xmm0; WalkDrawData GpuTimerView::ms_drawData
    }
    R_TextWidth("#", 1, font);
    __asm
    {
      vmovaps xmm0, cs:__xmm@3f800000417000004000000041300000
      vmovss  xmm1, cs:__real@40400000
      vmovups xmmword ptr cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barHeight, xmm0; WalkDrawData GpuTimerView::ms_drawData
      vmovss  xmm0, cs:__real@41880000
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight, xmm0; WalkDrawData GpuTimerView::ms_drawData
      vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.fontHeight; WalkDrawData GpuTimerView::ms_drawData
      vmulss  xmm2, xmm0, cs:__real@3f000000
      vmovss  xmm0, cs:__real@41400000
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barOffsetY, xmm1; WalkDrawData GpuTimerView::ms_drawData
      vaddss  xmm1, xmm2, cs:__real@40f00000
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, eax
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.textOffsetY, xmm1; WalkDrawData GpuTimerView::ms_drawData
      vmulss  xmm1, xmm3, cs:__real@41c80000
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.maxNameWidth, xmm1; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.fontWidth, xmm3; WalkDrawData GpuTimerView::ms_drawData
      vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.idNameIndent, xmm0; WalkDrawData GpuTimerView::ms_drawData
    }
  }
}

/*
==============
GpuTimerPage::OutputToText
==============
*/
void GpuTimerPage::OutputToText(GpuTimerPage *this, TimerTree *pDrawTree, int numViewTotalOnly)
{
  __int64 v6; 
  __int64 v11; 
  __int64 v12; 
  PageViewConfig *m_pCfg; 
  __int64 v15; 
  PageViewConfig *v17; 
  float v19; 
  float v20; 
  __int128 v21; 
  __int128 v22; 
  GfxCmdBufContext v23; 
  vec2_t v24; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  v6 = numViewTotalOnly;
  __asm
  {
    vmovss  xmm6, cs:__real@42c80000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0B8h+var_48], xmm0
    vmovss  [rsp+0B8h+var_44], xmm0
  }
  if ( numViewTotalOnly > 0 )
  {
    v11 = 0i64;
    v12 = numViewTotalOnly;
    do
    {
      v21 = 0ui64;
      __asm { vmovups xmm0, [rsp+0B8h+var_68] }
      this->m_pCfg[v11].m_pView->m_dispType = PRINT_COMPASS_TOTALONLY;
      m_pCfg = this->m_pCfg;
      __asm
      {
        vmovss  [rsp+0B8h+var_80], xmm6
        vmovdqa [rsp+0B8h+var_58], xmm0
      }
      GpuTimerView::Draw(m_pCfg[v11].m_pView, &v23, pDrawTree, 0, m_pCfg[v11].m_showInActive, m_pCfg[v11].m_exclusiveTimes, &v24, v19, &v24);
      ++v11;
      this->m_pCfg[v11 - 1].m_pView->m_dispType = this->m_pCfg[v11 - 1].m_displayType;
      --v12;
    }
    while ( v12 );
  }
  if ( (int)v6 < this->m_numCfg )
  {
    v15 = v6;
    do
    {
      v22 = 0ui64;
      __asm { vmovups xmm0, [rsp+0B8h+var_68] }
      this->m_pCfg[v15].m_pView->m_dispType = PRINT_COMPASS;
      v17 = this->m_pCfg;
      __asm
      {
        vmovss  [rsp+0B8h+var_80], xmm6
        vmovdqa [rsp+0B8h+var_58], xmm0
      }
      GpuTimerView::Draw(v17[v15].m_pView, &v23, pDrawTree, 0, v17[v15].m_showInActive, v17[v15].m_exclusiveTimes, &v24, v20, &v24);
      ++v15;
      LODWORD(v6) = v6 + 1;
      this->m_pCfg[v15 - 1].m_pView->m_dispType = this->m_pCfg[v15 - 1].m_displayType;
    }
    while ( (int)v6 < this->m_numCfg );
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
}

/*
==============
GpuTimerView::OutputToText
==============
*/
void GpuTimerView::OutputToText(GpuTimerView *this, TimerTree *pTree)
{
  unsigned int m_numId; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  GpuTimerView::DisplayType m_dispType; 
  __int64 v21; 
  unsigned int v22; 
  GPUTimeStampNode *m_pRoot; 
  unsigned int totalTime; 
  __int64 v25; 
  bool v27; 
  const char *Name; 
  const char *v41; 
  char *fmt; 
  char *fmta; 
  float *pOutAvgUs; 
  float *pOutAvgUsa; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  unsigned int pOutCurTotalUs; 
  __int64 v72; 
  unsigned int pOutMinUs; 
  unsigned int pOutMaxUs; 
  float v75; 
  __int64 v76; 
  __int128 v77; 
  GfxCmdBufContext v78; 
  char dest[256]; 
  char v82; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  m_numId = this->m_numId;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v76 = 0i64;
  v13 = 0i64;
  v72 = 0i64;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( GpuTimerView::ms_drawData.exclusiveTimes )
  {
    if ( !m_numId )
      goto LABEL_20;
    do
    {
      if ( (unsigned int)v13 >= this->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v13 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v10 += TimerTree::GetExclusiveTimeForTimerId(pTree, (const GPUTimerId)this->m_timerId.m_data.m_buffer[v13]);
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < this->m_numId );
  }
  else
  {
    if ( !m_numId )
      goto LABEL_20;
    do
    {
      if ( (unsigned int)v13 >= this->m_timerId.m_data.m_size )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( (unsigned int)v13 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
          __debugbreak();
      }
      v10 += TimerTree::GetTotalTimeForTimerId(pTree, (const GPUTimerId)this->m_timerId.m_data.m_buffer[v13]);
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < this->m_numId );
  }
  v12 = 0i64;
  v76 = v10;
  v11 = 0i64;
LABEL_20:
  m_dispType = this->m_dispType;
  __asm { vmovsd  xmm8, cs:__real@3eb0c6f7a0b5ed8d }
  if ( m_dispType != PRINT_COMPASS && m_dispType != PRINT_COMPASS_TOTALONLY )
    goto LABEL_25;
  memset_0(dest, 0, sizeof(dest));
  Com_sprintf(dest, 0x100ui64, "GPU.%s", this->m_viewName);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, r15
  }
  if ( v10 < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm { vmulsd  xmm1, xmm0, xmm8; value }
  Com_CSVWriteMetric(dest, *(long double *)&_XMM1);
  m_dispType = this->m_dispType;
  if ( m_dispType != PRINT_COMPASS_TOTALONLY )
  {
LABEL_25:
    __asm { vmovaps [rsp+218h+var_58], xmm7 }
    if ( m_dispType == PRINT )
      Com_Printf(8, "%*s %5s %5s %5s %5s\n", 24, "Timer", "TotUs", "AvgUs", "MaxUs", "MinUs");
    __asm { vmovss  xmm7, cs:__real@3a83126f }
    v21 = 0i64;
    if ( this->m_numId )
    {
      __asm { vmovaps [rsp+218h+var_48], xmm6 }
      do
      {
        if ( (unsigned int)v21 >= this->m_timerId.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( (unsigned int)v21 >= this->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        v22 = 0;
        GpuTimerView::ms_drawData.currentId = this->m_timerId.m_data.m_buffer[v21];
        for ( GpuTimerView::ms_drawData.totalTime = 0; v22 < GpuTimerView::ms_drawData.desiredDepth; ++v22 )
          memset_0(GpuTimerView::ms_drawData.childTime[v22], 0, sizeof(GpuTimerView::ms_drawData.childTime[v22]));
        m_pRoot = pTree->m_pRoot;
        v77 = 0ui64;
        __asm
        {
          vmovups xmm0, [rsp+218h+var_1A8]
          vmovdqa [rsp+218h+var_198], xmm0
        }
        TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTime, &v78, m_pRoot, this, 0);
        totalTime = GpuTimerView::ms_drawData.totalTime;
        if ( !GpuTimerView::ms_drawData.totalTime && GpuTimerView::ms_drawData.showInActive == LOBYTE(GpuTimerView::ms_drawData.totalTime) )
        {
          v11 = v72;
        }
        else
        {
          v25 = 2 * (this->m_historyIdx + 6i64);
          if ( (unsigned int)v21 >= this->m_history[this->m_historyIdx].m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( (unsigned __int64)(unsigned int)v21 >= *(_QWORD *)&this->m_txtInactive.array[8 * v25] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          *(_DWORD *)(*(_QWORD *)&this->m_barBackColor.array[8 * v25] + 4 * v21) = totalTime;
          GpuTimerView::CalculateViewHistoryMinMaxAvg(this, v21, &pOutCurTotalUs, &pOutMinUs, &pOutMaxUs, &v75);
          v12 += pOutMinUs;
          __asm { vmovss  xmm6, [rsp+218h+var_1C0] }
          v11 = pOutMaxUs + v72;
          v27 = this->m_dispType == PRINT;
          v72 = v11;
          __asm { vaddss  xmm9, xmm9, xmm6 }
          if ( v27 )
          {
            Name = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rdi
              vmulss  xmm1, xmm0, xmm7
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rsi
              vcvtss2sd xmm5, xmm1, xmm1
              vmulss  xmm1, xmm0, xmm7
              vmovsd  [rsp+218h+var_1E0], xmm5
              vcvtss2sd xmm4, xmm1, xmm1
              vmulss  xmm2, xmm6, xmm7
              vcvtss2sd xmm3, xmm2, xmm2
              vmovsd  [rsp+218h+var_1E8], xmm4
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rcx
              vmulss  xmm1, xmm0, xmm7
              vcvtss2sd xmm2, xmm1, xmm1
              vmovsd  [rsp+218h+pOutAvgUs], xmm3
              vmovsd  [rsp+218h+fmt], xmm2
            }
            Com_Printf(8, "%*s %5.2f %5.2f %5.2f %5.2f\n", 24, Name, *(double *)&fmt, *(double *)&pOutAvgUs, v67, v69);
          }
          else
          {
            v41 = R_GPU_TimerGetName(GpuTimerView::ms_drawData.currentId);
            Com_sprintf<256>((char (*)[256])dest, "GPU.   %s", v41);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2sd xmm0, xmm0, rax
              vmulsd  xmm1, xmm0, xmm8; value
            }
            if ( !Com_CSVWriteMetricChecked(dest, *(long double *)&_XMM1) )
              Com_Printf(8, "Unable to write csv metric for '%s', as we don't have a column for it, or the order is mismatched.\n", dest);
          }
        }
        v21 = (unsigned int)(v21 + 1);
      }
      while ( (unsigned int)v21 < this->m_numId );
      v10 = v76;
      __asm { vmovaps xmm6, [rsp+218h+var_48] }
    }
    if ( this->m_dispType == PRINT )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@5f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r12
      }
      if ( v12 < 0 )
        __asm { vaddss  xmm0, xmm0, xmm2 }
      __asm
      {
        vmulss  xmm0, xmm0, xmm7
        vxorps  xmm1, xmm1, xmm1
        vcvtss2sd xmm5, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, r14
      }
      if ( v11 < 0 )
        __asm { vaddss  xmm1, xmm1, xmm2 }
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vcvtss2sd xmm3, xmm0, xmm0
        vxorps  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm9, xmm7
        vcvtsi2ss xmm0, xmm0, r15
        vcvtss2sd xmm4, xmm1, xmm1
      }
      if ( v10 < 0 )
        __asm { vaddss  xmm0, xmm0, xmm2 }
      __asm
      {
        vmovsd  [rsp+218h+var_1E0], xmm5
        vmovsd  [rsp+218h+var_1E8], xmm3
        vmulss  xmm0, xmm0, xmm7
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+218h+pOutAvgUs], xmm4
        vmovsd  [rsp+218h+fmt], xmm1
      }
      Com_Printf(8, "%*s %5.2f %5.2f %5.2f %5.2f\n\n", 24, "TOTAL", *(double *)&fmta, *(double *)&pOutAvgUsa, v68, v70);
    }
    __asm { vmovaps xmm7, [rsp+218h+var_58] }
  }
  _R11 = &v82;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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

void __fastcall GpuTimerView::SetPos(GpuTimerView *this, double x, double y)
{
  __asm
  {
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX, xmm1; WalkDrawData GpuTimerView::ms_drawData
    vaddss  xmm1, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.maxNameWidth; WalkDrawData GpuTimerView::ms_drawData
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barStartX, xmm1; WalkDrawData GpuTimerView::ms_drawData
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX, xmm1; WalkDrawData GpuTimerView::ms_drawData
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorY, xmm2; WalkDrawData GpuTimerView::ms_drawData
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barStartY, xmm2; WalkDrawData GpuTimerView::ms_drawData
    vmovss  cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY, xmm2; WalkDrawData GpuTimerView::ms_drawData
  }
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
  char v16; 
  GPUTimeStampNode *m_pParent; 
  bool v18; 
  unsigned int m_exclusiveTimeUs; 
  unsigned int totalTime; 
  const GfxColor *Color; 
  unsigned int v41; 
  bool result; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  unsigned int packed; 
  GfxCmdBufContext v62[6]; 
  void *retaddr; 
  unsigned int v64; 

  _RAX = &retaddr;
  _RBP = gfxContext;
  currentId = GpuTimerView::ms_drawData.currentId;
  if ( pNode->m_id != GpuTimerView::ms_drawData.currentId )
    return 0;
  exclusiveTimes = GpuTimerView::ms_drawData.exclusiveTimes;
  v16 = 1;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  GpuTimerView::ms_drawData.idFound = 1;
  if ( exclusiveTimes )
  {
    m_exclusiveTimeUs = pNode->m_exclusiveTimeUs;
  }
  else
  {
    m_pParent = pNode->m_pParent;
    while ( m_pParent )
    {
      v18 = m_pParent->m_id == currentId;
      m_pParent = m_pParent->m_pParent;
      if ( v18 )
        v16 = 0;
    }
    m_exclusiveTimeUs = LODWORD(pNode->m_endTimeUs) - LODWORD(pNode->m_beginTimeUs);
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm8, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS; WalkDrawData GpuTimerView::ms_drawData
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  totalTime = GpuTimerView::ms_drawData.totalTime;
  __asm { vmulss  xmm9, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS; WalkDrawData GpuTimerView::ms_drawData }
  if ( v16 )
  {
    totalTime = m_exclusiveTimeUs + GpuTimerView::ms_drawData.totalTime;
    GpuTimerView::ms_drawData.totalTime += m_exclusiveTimeUs;
  }
  else
  {
    __asm { vmovaps xmm8, xmm7 }
  }
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( !GpuTimerView::ms_drawData.timerLabelDrawn )
  {
    if ( totalTime )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.avgTime; WalkDrawData GpuTimerView::ms_drawData
      vcomiss xmm0, xmm6
    }
    if ( GpuTimerView::ms_drawData.showInActive )
    {
LABEL_16:
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+0]
        vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarGap; WalkDrawData GpuTimerView::ms_drawData
        vaddss  xmm3, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
        vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.width; WalkDrawData GpuTimerView::ms_drawData
        vmovss  xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.anchorX; WalkDrawData GpuTimerView::ms_drawData
      }
      GpuTimerView::ms_drawData.timerLabelDrawn = 1;
      packed = pView->m_barBackColor.packed;
      __asm
      {
        vmovss  [rsp+0C8h+var_80], xmm7
        vmovss  [rsp+0C8h+var_88], xmm7
        vmovss  [rsp+0C8h+var_90], xmm6
        vmovups [rsp+0C8h+var_68], xmm0
        vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.backBarHeight; WalkDrawData GpuTimerView::ms_drawData
        vmovss  [rsp+0C8h+var_98], xmm6
        vmovss  [rsp+0C8h+var_A0], xmm0
        vmovss  [rsp+0C8h+var_A8], xmm1
      }
      RB_DrawStretchPic(v62, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v49, v51, v53, v55, v57, v59, packed, GFX_PRIM_STATS_DEBUG);
      exclusiveTimes = GpuTimerView::ms_drawData.exclusiveTimes;
      currentId = GpuTimerView::ms_drawData.currentId;
    }
  }
  if ( m_exclusiveTimeUs || exclusiveTimes )
  {
    Color = R_GPU_TimerGetColor(currentId);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovss  xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barOffsetY; WalkDrawData GpuTimerView::ms_drawData
      vaddss  xmm3, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
      vaddss  xmm2, xmm9, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentX; WalkDrawData GpuTimerView::ms_drawData
    }
    v64 = Color->packed;
    v41 = 3 * GpuTimerView::ms_opacity;
    __asm
    {
      vmovups [rsp+0C8h+var_68], xmm0
      vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barHeight; WalkDrawData GpuTimerView::ms_drawData
    }
    if ( v41 > 0xFF )
      LOBYTE(v41) = -1;
    HIBYTE(v64) = v41;
    __asm
    {
      vmovss  [rsp+0C8h+var_80], xmm7
      vmovss  [rsp+0C8h+var_88], xmm7
      vmovss  [rsp+0C8h+var_90], xmm6
      vmovss  [rsp+0C8h+var_98], xmm6
      vmovss  [rsp+0C8h+var_A0], xmm0
      vmovss  [rsp+0C8h+var_A8], xmm8
    }
    RB_DrawStretchPic(v62, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v50, v52, v54, v56, v58, v60, v64, GFX_PRIM_STATS_DEBUG);
    if ( GpuTimerView::ms_drawData.desiredDepth )
    {
      __asm { vmovups xmm0, xmmword ptr [rbp+0] }
      GpuTimerView::ms_drawData.parentDepth = nodeDepth;
      __asm { vmovups [rsp+0C8h+var_68], xmm0 }
      TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdDrawTimeSubTree, v62, pNode, pView, nodeDepth);
    }
  }
  __asm { vmovaps xmm8, [rsp+0C8h+var_48] }
  result = 0;
  __asm
  {
    vmovaps xmm7, [rsp+0C8h+var_38]
    vmovaps xmm6, [rsp+0C8h+var_28]
    vmovaps xmm9, [rsp+0C8h+var_58]
  }
  return result;
}

/*
==============
GpuTimerView::WalkIdDrawTimeSubTree
==============
*/
bool GpuTimerView::WalkIdDrawTimeSubTree(GfxCmdBufContext *gfxContext, GPUTimeStampNode *pNode, unsigned int nodeDepth, GpuTimerView *pView)
{
  bool v10; 
  int m_beginTimeUs; 
  unsigned int m_exclusiveTimeUs; 
  __int64 v19; 
  const GfxColor *Color; 
  unsigned int v28; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  GfxCmdBufContext v43[4]; 
  void *retaddr; 
  unsigned int packed; 

  _R11 = &retaddr;
  _RBX = gfxContext;
  if ( nodeDepth - 1 <= 6 && nodeDepth >= GpuTimerView::ms_drawData.parentDepth && nodeDepth - GpuTimerView::ms_drawData.parentDepth <= GpuTimerView::ms_drawData.desiredDepth )
  {
    v10 = !GpuTimerView::ms_drawData.exclusiveTimes;
    m_beginTimeUs = pNode->m_beginTimeUs;
    __asm
    {
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
    }
    if ( v10 )
      m_exclusiveTimeUs = LODWORD(pNode->m_endTimeUs) - m_beginTimeUs;
    else
      m_exclusiveTimeUs = pNode->m_exclusiveTimeUs;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm8, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS; WalkDrawData GpuTimerView::ms_drawData
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm7, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.pixelsPerUS; WalkDrawData GpuTimerView::ms_drawData
    }
    v19 = (unsigned int)pNode->m_id + 129i64 * (nodeDepth - 1);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    GpuTimerView::ms_drawData.childTime[0][v19] += m_exclusiveTimeUs;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.rowHeight; WalkDrawData GpuTimerView::ms_drawData
      vaddss  xmm2, xmm1, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.currentY; WalkDrawData GpuTimerView::ms_drawData
      vaddss  xmm6, xmm2, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barOffsetY; WalkDrawData GpuTimerView::ms_drawData
    }
    Color = R_GPU_TimerGetColor(pNode->m_id);
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    packed = Color->packed;
    __asm
    {
      vmovups [rsp+0A8h+var_48], xmm0
      vmovss  xmm0, cs:__real@3f800000
    }
    v28 = 3 * GpuTimerView::ms_opacity;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    if ( v28 > 0xFF )
      LOBYTE(v28) = -1;
    HIBYTE(packed) = v28;
    __asm
    {
      vmovss  [rsp+0A8h+var_60], xmm0
      vmovss  [rsp+0A8h+var_68], xmm0
      vmovss  xmm0, cs:?ms_drawData@GpuTimerView@@1UWalkDrawData@@A.barHeight; WalkDrawData GpuTimerView::ms_drawData
      vmovss  [rsp+0A8h+var_70], xmm1
      vmovss  [rsp+0A8h+var_78], xmm1
      vmovss  [rsp+0A8h+var_80], xmm0
      vmovaps xmm3, xmm6
      vmovaps xmm2, xmm7
      vmovss  [rsp+0A8h+var_88], xmm8
    }
    RB_DrawStretchPic(v43, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v37, v38, v39, v40, v41, v42, packed, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_28]
      vmovaps xmm6, [rsp+0A8h+var_18]
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
  GfxCmdBufContext v10; 

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
    v10 = (GfxCmdBufContext)0i64;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+48h+var_18.source]
      vmovdqa xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    TimerTree::WalkSubTree<GpuTimerView *>(GpuTimerView::WalkIdTotalTimeSubTree, &v10, pNode, pView, nodeDepth);
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

