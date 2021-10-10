/*
==============
DebugLogQueueManager::GetInstance
==============
*/

DebugLogQueueManager *__fastcall DebugLogQueueManager::GetInstance()
{
  return ?GetInstance@DebugLogQueueManager@@SAPEAV1@XZ();
}

/*
==============
DebugLogQueueEntry::SetLogBuffer
==============
*/

void __fastcall DebugLogQueueEntry::SetLogBuffer(DebugLogQueueEntry *this, const char *buffer)
{
  ?SetLogBuffer@DebugLogQueueEntry@@QEAAXPEBD@Z(this, buffer);
}

/*
==============
DebugLogQueue::SetInfoLineText
==============
*/

void __fastcall DebugLogQueue::SetInfoLineText(DebugLogQueue *this, const char *infoLineText)
{
  ?SetInfoLineText@DebugLogQueue@@QEAAXPEBD@Z(this, infoLineText);
}

/*
==============
DebugLogQueueEntry::GetLogBuffer
==============
*/

char *__fastcall DebugLogQueueEntry::GetLogBuffer(DebugLogQueueEntry *this)
{
  return ?GetLogBuffer@DebugLogQueueEntry@@QEAAPEADXZ(this);
}

/*
==============
DebugLogQueueManager::Update
==============
*/

void __fastcall DebugLogQueueManager::Update(DebugLogQueueManager *this)
{
  ?Update@DebugLogQueueManager@@QEAAXXZ(this);
}

/*
==============
DebugLogQueue::SetVisible
==============
*/

void __fastcall DebugLogQueue::SetVisible(DebugLogQueue *this, bool isVisible)
{
  ?SetVisible@DebugLogQueue@@QEAAX_N@Z(this, isVisible);
}

/*
==============
DebugLogQueueManager::SetVisibility
==============
*/

void __fastcall DebugLogQueueManager::SetVisibility(DebugLogQueueManager *this, DebugLogQueueCategory category, bool isVisible)
{
  ?SetVisibility@DebugLogQueueManager@@QEAAXW4DebugLogQueueCategory@@_N@Z(this, category, isVisible);
}

/*
==============
DebugLogQueue::PushLog
==============
*/

void __fastcall DebugLogQueue::PushLog(DebugLogQueue *this, const char *log)
{
  ?PushLog@DebugLogQueue@@QEAAXPEBD@Z(this, log);
}

/*
==============
DebugLogQueueEntry::GetTimeAdded
==============
*/

int __fastcall DebugLogQueueEntry::GetTimeAdded(DebugLogQueueEntry *this)
{
  return ?GetTimeAdded@DebugLogQueueEntry@@QEBAHXZ(this);
}

/*
==============
DebugLogQueueEntry::SetTimeAdded
==============
*/

void __fastcall DebugLogQueueEntry::SetTimeAdded(DebugLogQueueEntry *this, int timeAdded)
{
  ?SetTimeAdded@DebugLogQueueEntry@@QEAAXH@Z(this, timeAdded);
}

/*
==============
DebugLogQueue::SetDefinition
==============
*/

void __fastcall DebugLogQueue::SetDefinition(DebugLogQueue *this, const DebugLogQueueCategoryDef *def)
{
  ?SetDefinition@DebugLogQueue@@QEAAXPEBUDebugLogQueueCategoryDef@@@Z(this, def);
}

/*
==============
DebugLogQueueManager::PushLog
==============
*/

void __fastcall DebugLogQueueManager::PushLog(DebugLogQueueManager *this, DebugLogQueueCategory category, const char *log)
{
  ?PushLog@DebugLogQueueManager@@QEAAXW4DebugLogQueueCategory@@PEBD@Z(this, category, log);
}

/*
==============
DebugLogQueueManager::DebugLogQueueManager
==============
*/

void __fastcall DebugLogQueueManager::DebugLogQueueManager(DebugLogQueueManager *this)
{
  ??0DebugLogQueueManager@@QEAA@XZ(this);
}

/*
==============
DebugLogQueue::RenderAll
==============
*/

void __fastcall DebugLogQueue::RenderAll(DebugLogQueue *this)
{
  ?RenderAll@DebugLogQueue@@QEAAXXZ(this);
}

/*
==============
DebugLogQueue::RemoveExpired
==============
*/

void __fastcall DebugLogQueue::RemoveExpired(DebugLogQueue *this)
{
  ?RemoveExpired@DebugLogQueue@@QEAAXXZ(this);
}

/*
==============
DebugLogQueueEntry::GetLogBuffer
==============
*/

const char *__fastcall DebugLogQueueEntry::GetLogBuffer(DebugLogQueueEntry *this)
{
  return ?GetLogBuffer@DebugLogQueueEntry@@QEBAPEBDXZ(this);
}

/*
==============
DebugLogQueueManager::SetInfoLineText
==============
*/

void __fastcall DebugLogQueueManager::SetInfoLineText(DebugLogQueueManager *this, DebugLogQueueCategory category, const char *infoLineText)
{
  ?SetInfoLineText@DebugLogQueueManager@@QEAAXW4DebugLogQueueCategory@@PEBD@Z(this, category, infoLineText);
}

/*
==============
DebugLogQueueManager::DebugLogQueueManager
==============
*/
void DebugLogQueueManager::DebugLogQueueManager(DebugLogQueueManager *this)
{
  `eh vector constructor iterator'(this, 0x3680ui64, 1ui64, (void (__fastcall *)(void *))DebugLogQueue::DebugLogQueue, (void (__fastcall *)(void *))DebugLogQueue::~DebugLogQueue);
  this->m_queues[0].m_def = debugLogCategoryDefs;
}

/*
==============
DebugLogQueueManager::GetInstance
==============
*/
DebugLogQueueManager *DebugLogQueueManager::GetInstance()
{
  return &s_debugLogQueueManager;
}

/*
==============
DebugLogQueueEntry::GetLogBuffer
==============
*/
char *DebugLogQueueEntry::GetLogBuffer(DebugLogQueueEntry *this)
{
  return this->m_logBuffer;
}

/*
==============
DebugLogQueueEntry::GetLogBuffer
==============
*/
char *DebugLogQueueEntry::GetLogBuffer(DebugLogQueueEntry *this)
{
  return this->m_logBuffer;
}

/*
==============
DebugLogQueueEntry::GetTimeAdded
==============
*/
__int64 DebugLogQueueEntry::GetTimeAdded(DebugLogQueueEntry *this)
{
  return (unsigned int)this->m_timeAdded;
}

/*
==============
DebugLogQueue::PushLog
==============
*/
void DebugLogQueue::PushLog(DebugLogQueue *this, const char *log)
{
  ntl::internal::list_head_base<ntl::internal::list_node<DebugLogQueueEntry> > *p_m_listHead; 
  __int64 v3; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *v7; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v8; 
  ntl::internal::pool_allocator_freelist<536> *p_m_freelist; 
  ntl::internal::list_node<DebugLogQueueEntry> *v10; 

  p_m_listHead = &this->m_entries.m_listHead;
  v3 = 0i64;
  mp_next = this->m_entries.m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)&this->m_entries.m_listHead )
    goto LABEL_17;
  do
  {
    mp_next = mp_next->mp_next;
    ++v3;
  }
  while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
  if ( v3 != 25 )
  {
LABEL_17:
    p_m_freelist = &this->m_entries.m_freelist;
    v8 = this->m_entries.m_freelist.m_head.mp_next;
  }
  else
  {
    v7 = this->m_entries.m_listHead.m_sentinel.mp_next;
    if ( v7 == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( v7 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v8 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead->m_sentinel.mp_next;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<DebugLogQueueEntry>>::remove(p_m_listHead, (ntl::internal::list_node<DebugLogQueueEntry> *)v8);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    p_m_freelist = &this->m_entries.m_freelist;
    v8->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_freelist->m_head;
    p_m_freelist->m_head.mp_next = v8;
  }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  if ( (ntl::internal::pool_allocator_freelist<536> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x218ui64, 0x19ui64) )
    __debugbreak();
  v10 = (ntl::internal::list_node<DebugLogQueueEntry> *)p_m_freelist->m_head.mp_next;
  p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
  v10->mp_prev = NULL;
  v10->mp_next = NULL;
  v10->m_data.m_timeAdded = 0;
  v10->m_data.m_logBuffer[0] = 0;
  ntl::internal::list_head_base<ntl::internal::list_node<DebugLogQueueEntry>>::insert_before(p_m_listHead, (ntl::internal::list_node<DebugLogQueueEntry> *)p_m_listHead, v10);
  Core_strcpy(v10->m_data.m_logBuffer, 0x200ui64, log);
  v10->m_data.m_timeAdded = CG_GetLocalClientTime(LOCAL_CLIENT_0);
}

/*
==============
DebugLogQueueManager::PushLog
==============
*/
void DebugLogQueueManager::PushLog(DebugLogQueueManager *this, DebugLogQueueCategory category, const char *log)
{
  __int64 v3; 

  v3 = category;
  if ( category && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_debug_log_queue.cpp", 233, ASSERT_TYPE_ASSERT, "(category >= DEBUG_LOG_CAT_BEGIN && category < DEBUG_LOG_CAT_COUNT)", (const char *)&queryFormat, "category >= DEBUG_LOG_CAT_BEGIN && category < DEBUG_LOG_CAT_COUNT") )
    __debugbreak();
  DebugLogQueue::PushLog(this[v3].m_queues, log);
}

/*
==============
DebugLogQueue::RemoveExpired
==============
*/
void DebugLogQueue::RemoveExpired(DebugLogQueue *this)
{
  ntl::internal::list_head_base<ntl::internal::list_node<DebugLogQueueEntry> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  int LocalClientTime; 
  ntl::internal::list_node_base *v5; 
  int i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v7; 

  p_m_listHead = &this->m_entries.m_listHead;
  mp_next = this->m_entries.m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)&this->m_entries.m_listHead )
  {
    if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
      __debugbreak();
  }
  else
  {
    if ( !this->m_def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_debug_log_queue.cpp", 84, ASSERT_TYPE_ASSERT, "(m_def)", (const char *)&queryFormat, "m_def") )
      __debugbreak();
    LocalClientTime = CG_GetLocalClientTime(LOCAL_CLIENT_0);
    v5 = this->m_entries.m_listHead.m_sentinel.mp_next;
    for ( i = LocalClientTime; v5 != (ntl::internal::list_node_base *)p_m_listHead; this->m_entries.m_freelist.m_head.mp_next = v7 )
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( i - LODWORD(v5[1].mp_prev) < this->m_def->m_logLife )
        break;
      v7 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v5;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
        __debugbreak();
      v5 = v5->mp_next;
      ntl::internal::list_head_base<ntl::internal::list_node<DebugLogQueueEntry>>::remove(p_m_listHead, (ntl::internal::list_node<DebugLogQueueEntry> *)v7);
      v7->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_entries.m_freelist.m_head;
    }
  }
}

/*
==============
DebugLogQueue::RenderAll
==============
*/
void DebugLogQueue::RenderAll(DebugLogQueue *this)
{
  bool v2; 
  const ScreenPlacement *v3; 
  GfxFont *FontHandle; 
  int v5; 
  const DebugLogQueueCategoryDef *m_def; 
  float v7; 
  float m_renderPosX; 
  __int128 y; 
  __int128 v10; 
  __int128 v11; 
  ntl::internal::list_head_base<ntl::internal::list_node<DebugLogQueueEntry> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *i; 
  __int128 v15; 
  char dest[1024]; 

  if ( !this->m_def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_debug_log_queue.cpp", 113, ASSERT_TYPE_ASSERT, "(m_def)", (const char *)&queryFormat, "m_def") )
    __debugbreak();
  if ( this->m_isVisible )
  {
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v3 = scrPlaceViewDisplay;
        goto LABEL_12;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v2 )
        __debugbreak();
    }
    v3 = &scrPlaceFull;
LABEL_12:
    FontHandle = UI_GetFontHandle(v3, this->m_def->m_fontEnum, this->m_def->m_fontScale);
    v5 = R_TextHeight(FontHandle);
    m_def = this->m_def;
    v7 = (float)((float)v5 * m_def->m_fontScale) + m_def->m_rowSpacing;
    m_renderPosX = m_def->m_renderPosX;
    y = LODWORD(m_def->m_renderPosY);
    if ( *m_def->m_headerText )
    {
      Com_sprintf(dest, 0x400ui64, "^1%s", m_def->m_headerText);
      UI_DrawText(v3, dest, 1024, FontHandle, m_renderPosX, *(float *)&y, this->m_def->m_horizontalAligment, this->m_def->m_verticalAligment, this->m_def->m_fontScale, &this->m_def->m_color, this->m_def->m_style);
      v10 = y;
      *(float *)&v10 = *(float *)&y + v7;
      y = v10;
    }
    if ( this->m_infoLineText[0] )
    {
      UI_DrawText(v3, this->m_infoLineText, 512, FontHandle, m_renderPosX, *(float *)&y, this->m_def->m_horizontalAligment, this->m_def->m_verticalAligment, this->m_def->m_fontScale, &this->m_def->m_color, this->m_def->m_style);
      v11 = y;
      *(float *)&v11 = *(float *)&y + v7;
      y = v11;
    }
    p_m_listHead = &this->m_entries.m_listHead;
    mp_next = this->m_entries.m_listHead.m_sentinel.mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)&this->m_entries.m_listHead )
    {
      if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
    }
    else if ( this->m_isVisible )
    {
      for ( i = this->m_entries.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)p_m_listHead; i = i->mp_next )
      {
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        UI_DrawText(v3, (const char *)&i[1].mp_prev + 4, 512, FontHandle, m_renderPosX, *(float *)&y, this->m_def->m_horizontalAligment, this->m_def->m_verticalAligment, this->m_def->m_fontScale, &this->m_def->m_color, this->m_def->m_style);
        v15 = y;
        *(float *)&v15 = *(float *)&y + v7;
        y = v15;
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
      }
    }
  }
}

/*
==============
DebugLogQueue::SetDefinition
==============
*/
void DebugLogQueue::SetDefinition(DebugLogQueue *this, const DebugLogQueueCategoryDef *def)
{
  if ( def )
  {
    this->m_def = def;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_debug_log_queue.cpp", 46, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    this->m_def = NULL;
  }
}

/*
==============
DebugLogQueue::SetInfoLineText
==============
*/
void DebugLogQueue::SetInfoLineText(DebugLogQueue *this, const char *infoLineText)
{
  Core_strcpy(this->m_infoLineText, 0x200ui64, infoLineText);
}

/*
==============
DebugLogQueueManager::SetInfoLineText
==============
*/
void DebugLogQueueManager::SetInfoLineText(DebugLogQueueManager *this, DebugLogQueueCategory category, const char *infoLineText)
{
  __int64 v3; 

  v3 = category;
  if ( category && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_debug_log_queue.cpp", 225, ASSERT_TYPE_ASSERT, "(category >= DEBUG_LOG_CAT_BEGIN && category < DEBUG_LOG_CAT_COUNT)", (const char *)&queryFormat, "category >= DEBUG_LOG_CAT_BEGIN && category < DEBUG_LOG_CAT_COUNT") )
    __debugbreak();
  Core_strcpy(this[v3].m_queues[0].m_infoLineText, 0x200ui64, infoLineText);
}

/*
==============
DebugLogQueueEntry::SetLogBuffer
==============
*/
void DebugLogQueueEntry::SetLogBuffer(DebugLogQueueEntry *this, const char *buffer)
{
  Core_strcpy(this->m_logBuffer, 0x200ui64, buffer);
}

/*
==============
DebugLogQueueEntry::SetTimeAdded
==============
*/
void DebugLogQueueEntry::SetTimeAdded(DebugLogQueueEntry *this, int timeAdded)
{
  this->m_timeAdded = timeAdded;
}

/*
==============
DebugLogQueueManager::SetVisibility
==============
*/
void DebugLogQueueManager::SetVisibility(DebugLogQueueManager *this, DebugLogQueueCategory category, bool isVisible)
{
  __int64 v3; 

  v3 = category;
  if ( category && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_debug_log_queue.cpp", 217, ASSERT_TYPE_ASSERT, "(category >= DEBUG_LOG_CAT_BEGIN && category < DEBUG_LOG_CAT_COUNT)", (const char *)&queryFormat, "category >= DEBUG_LOG_CAT_BEGIN && category < DEBUG_LOG_CAT_COUNT") )
    __debugbreak();
  this[v3].m_queues[0].m_isVisible = isVisible;
}

/*
==============
DebugLogQueue::SetVisible
==============
*/
void DebugLogQueue::SetVisible(DebugLogQueue *this, bool isVisible)
{
  this->m_isVisible = isVisible;
}

/*
==============
DebugLogQueueManager::Update
==============
*/
void DebugLogQueueManager::Update(DebugLogQueueManager *this)
{
  ntl::internal::list_head_base<ntl::internal::list_node<DebugLogQueueEntry> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  int LocalClientTime; 
  ntl::internal::list_node_base *v5; 
  int i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v7; 

  p_m_listHead = &this->m_queues[0].m_entries.m_listHead;
  mp_next = this->m_queues[0].m_entries.m_listHead.m_sentinel.mp_next;
  if ( mp_next == (ntl::internal::list_node_base *)&this->m_queues[0].m_entries.m_listHead )
  {
    if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
    {
      __debugbreak();
      DebugLogQueue::RenderAll(this->m_queues);
      return;
    }
  }
  else
  {
    if ( !this->m_queues[0].m_def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_debug_log_queue.cpp", 84, ASSERT_TYPE_ASSERT, "(m_def)", (const char *)&queryFormat, "m_def") )
      __debugbreak();
    LocalClientTime = CG_GetLocalClientTime(LOCAL_CLIENT_0);
    v5 = this->m_queues[0].m_entries.m_listHead.m_sentinel.mp_next;
    for ( i = LocalClientTime; v5 != (ntl::internal::list_node_base *)p_m_listHead; this->m_queues[0].m_entries.m_freelist.m_head.mp_next = v7 )
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( i - LODWORD(v5[1].mp_prev) < this->m_queues[0].m_def->m_logLife )
        break;
      v7 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v5;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
        __debugbreak();
      v5 = v5->mp_next;
      ntl::internal::list_head_base<ntl::internal::list_node<DebugLogQueueEntry>>::remove(p_m_listHead, (ntl::internal::list_node<DebugLogQueueEntry> *)v7);
      v7->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_queues[0].m_entries.m_freelist.m_head;
    }
  }
  DebugLogQueue::RenderAll(this->m_queues);
}

